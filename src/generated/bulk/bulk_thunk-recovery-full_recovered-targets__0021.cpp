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
namespace std { template<class... A> int _Xbad_function_call(A...); template<class... A> int _Xlength_error(A...); }
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int getSingleton(A...); };
struct SCOpRefBase { char _pad; SCOpRefBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int int_start(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int format(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); static int op_ctor(...) { return 0; } static int op_lt(...) { return 0; } };
template<class...> struct pair { char _pad; pair(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int op_dtor(...) { return 0; } };
struct AVTransport { char _pad; AVTransport(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct AddURIToSavedQueue { char _pad; AddURIToSavedQueue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct AlarmClock { char _pad; AlarmClock(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Clearing { char _pad; Clearing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Destructor { char _pad; Destructor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Entering { char _pad; Entering(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Exit { char _pad; Exit(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCDateTimeManager { char _pad; SCDateTimeManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBrowsePageExtension { char _pad; SCIBrowsePageExtension(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIDateTimeManager { char _pad; SCIDateTimeManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpAVTransportAddURIToSavedQueue { char _pad; SCIOpAVTransportAddURIToSavedQueue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpContentDirectoryRefreshShareIndex { char _pad; SCIOpContentDirectoryRefreshShareIndex(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIServicePopup { char _pad; SCIServicePopup(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISettingsMenu { char _pad; SCISettingsMenu(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIStringFromCustomSettingsProperty { char _pad; SCIStringFromCustomSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCITimeSettingsProperty { char _pad; SCITimeSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SetFormat { char _pad; SetFormat(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SetTimeNow { char _pad; SetTimeNow(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SetTimeServer { char _pad; SetTimeServer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SetTimeZone { char _pad; SetTimeZone(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SwfStr { char _pad; SwfStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ThreadLocalStoragePointer { char _pad; ThreadLocalStoragePointer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Wizard { char _pad; Wizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *E9;
typedef void *H;
typedef void *R;
typedef void *WARNING;
typedef void (*_func_4879)(...);
using namespace std;
struct Recovered_Bulk { char _pad; undefined4 * __thiscall m_FUN_10d74820(undefined4 param_2); template<class... A> int m_FUN_10d74820(A...); undefined4 * __thiscall m_FUN_10d74f20(undefined4 param_2); template<class... A> int m_FUN_10d74f20(A...); undefined4 * __thiscall m_FUN_10d75190(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6); template<class... A> int m_FUN_10d75190(A...); void __thiscall m_FUN_10d76650(int param_2); template<class... A> int m_FUN_10d76650(A...); void __thiscall m_FUN_10d76670(int param_2); template<class... A> int m_FUN_10d76670(A...); void __thiscall m_FUN_10d76690(int param_2); template<class... A> int m_FUN_10d76690(A...); void __thiscall m_FUN_10d766b0(undefined4 param_2); template<class... A> int m_FUN_10d766b0(A...); void __thiscall m_FUN_10d766c0(undefined4 param_2); template<class... A> int m_FUN_10d766c0(A...); void __thiscall m_FUN_10d766d0(undefined4 param_2); template<class... A> int m_FUN_10d766d0(A...); int * __thiscall m_FUN_10d7c050(int *param_2); template<class... A> int m_FUN_10d7c050(A...); int * __thiscall m_FUN_10d7c090(int *param_2); template<class... A> int m_FUN_10d7c090(A...); int * __thiscall m_FUN_10d7c0d0(int *param_2); template<class... A> int m_FUN_10d7c0d0(A...); int * __thiscall m_FUN_10d7c110(int *param_2); template<class... A> int m_FUN_10d7c110(A...); int * __thiscall m_FUN_10d7c150(int *param_2); template<class... A> int m_FUN_10d7c150(A...); int * __thiscall m_FUN_10d7c190(int *param_2); template<class... A> int m_FUN_10d7c190(A...); int * __thiscall m_FUN_10d7c1d0(int *param_2); template<class... A> int m_FUN_10d7c1d0(A...); int * __thiscall m_FUN_10d7c210(int *param_2); template<class... A> int m_FUN_10d7c210(A...); int * __thiscall m_FUN_10d7c250(int *param_2); template<class... A> int m_FUN_10d7c250(A...); undefined4 * __thiscall m_FUN_10d7d390(undefined4 param_2); template<class... A> int m_FUN_10d7d390(A...); int * __thiscall m_FUN_10d821c0(int *param_2); template<class... A> int m_FUN_10d821c0(A...); SCStr * __thiscall m_FUN_10d835d0(SCStr *param_2); template<class... A> int m_FUN_10d835d0(A...); SCStr * __thiscall m_FUN_10d835f0(SCStr *param_2); template<class... A> int m_FUN_10d835f0(A...); SCStr * __thiscall m_FUN_10d83610(SCStr *param_2); template<class... A> int m_FUN_10d83610(A...); SCStr * __thiscall m_FUN_10d83630(SCStr *param_2); template<class... A> int m_FUN_10d83630(A...); SCStr * __thiscall m_FUN_10d83650(SCStr *param_2); template<class... A> int m_FUN_10d83650(A...); SCStr * __thiscall m_FUN_10d83890(SCStr *param_2); template<class... A> int m_FUN_10d83890(A...); SCStr * __thiscall m_FUN_10d838b0(SCStr *param_2); template<class... A> int m_FUN_10d838b0(A...); int * __thiscall m_FUN_10d87f70(int *param_2); template<class... A> int m_FUN_10d87f70(A...); int * __thiscall m_FUN_10d87f90(int *param_2); template<class... A> int m_FUN_10d87f90(A...); int * __thiscall m_FUN_10d87fd0(int *param_2); template<class... A> int m_FUN_10d87fd0(A...); undefined4 * __thiscall m_FUN_10d880c0(undefined4 param_2); template<class... A> int m_FUN_10d880c0(A...); int * __thiscall m_FUN_10d88f50(int *param_2); template<class... A> int m_FUN_10d88f50(A...); int * __thiscall m_FUN_10d8be20(int *param_2); template<class... A> int m_FUN_10d8be20(A...); undefined4 * __thiscall m_FUN_10d8c2a0(undefined4 param_2); template<class... A> int m_FUN_10d8c2a0(A...); int * __thiscall m_FUN_10d8fa00(int *param_2); template<class... A> int m_FUN_10d8fa00(A...); undefined4 __thiscall m_FUN_10d8fa30(undefined4 param_2); template<class... A> int m_FUN_10d8fa30(A...); int * __thiscall m_FUN_10d907e0(int *param_2); template<class... A> int m_FUN_10d907e0(A...); SCStr * __thiscall m_FUN_10d91560(undefined4 param_2,SCStr *param_3); template<class... A> int m_FUN_10d91560(A...); undefined4 * __thiscall m_FUN_10d92830(undefined4 *param_2); template<class... A> int m_FUN_10d92830(A...); int * __thiscall m_FUN_10d93b40(int *param_2); template<class... A> int m_FUN_10d93b40(A...); undefined4 * __thiscall m_FUN_10d94220(undefined4 param_2); template<class... A> int m_FUN_10d94220(A...); undefined4 * __thiscall m_FUN_10d94260(undefined1 param_2,undefined1 param_3); template<class... A> int m_FUN_10d94260(A...); int * __thiscall m_FUN_10d97320(int *param_2); template<class... A> int m_FUN_10d97320(A...); int * __thiscall m_FUN_10d97340(int *param_2); template<class... A> int m_FUN_10d97340(A...); void __thiscall m_FUN_10d9a620(undefined4 param_2); template<class... A> int m_FUN_10d9a620(A...); int * __thiscall m_FUN_10d9a8c0(int *param_2); template<class... A> int m_FUN_10d9a8c0(A...); int * __thiscall m_FUN_10d9a9d0(int *param_2); template<class... A> int m_FUN_10d9a9d0(A...); undefined4 * __thiscall m_FUN_10d9b210(undefined1 param_2); template<class... A> int m_FUN_10d9b210(A...); int * __thiscall m_FUN_10d9e440(int *param_2); template<class... A> int m_FUN_10d9e440(A...); undefined4 * __thiscall m_FUN_10d9e700(undefined4 *param_2); template<class... A> int m_FUN_10d9e700(A...); undefined4 * __thiscall m_FUN_10d9e830(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10d9e830(A...); undefined4 * __thiscall m_FUN_10d9e860(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10d9e860(A...); undefined4 * __thiscall m_FUN_10d9e890(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10d9e890(A...); undefined4 * __thiscall m_FUN_10d9e8c0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10d9e8c0(A...); undefined4 * __thiscall m_FUN_10d9e8f0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10d9e8f0(A...); undefined4 * __thiscall m_FUN_10d9e920(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10d9e920(A...); undefined4 * __thiscall m_FUN_10d9e950(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10d9e950(A...); undefined4 * __thiscall m_FUN_10d9e980(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10d9e980(A...); undefined4 * __thiscall m_FUN_10d9e9b0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10d9e9b0(A...); undefined4 * __thiscall m_FUN_10d9e9e0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10d9e9e0(A...); undefined4 * __thiscall m_FUN_10d9ea10(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10d9ea10(A...); undefined4 * __thiscall m_FUN_10d9ea40(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10d9ea40(A...); undefined4 * __thiscall m_FUN_10d9ea70(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10d9ea70(A...); undefined4 * __thiscall m_FUN_10d9eaa0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10d9eaa0(A...); undefined4 * __thiscall m_FUN_10d9f510(undefined4 param_2); template<class... A> int m_FUN_10d9f510(A...); undefined4 * __thiscall m_FUN_10d9f570(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10d9f570(A...); undefined4 * __thiscall m_FUN_10d9f580(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10d9f580(A...); undefined4 * __thiscall m_FUN_10d9f610(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10d9f610(A...); undefined4 * __thiscall m_FUN_10d9f620(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10d9f620(A...); undefined4 * __thiscall m_FUN_10d9f660(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10d9f660(A...); undefined4 * __thiscall m_FUN_10d9f800(undefined4 *param_2); template<class... A> int m_FUN_10d9f800(A...); bool __thiscall m_FUN_10d9fbf0(int *param_2); template<class... A> int m_FUN_10d9fbf0(A...); bool __thiscall m_FUN_10d9fc10(int *param_2); template<class... A> int m_FUN_10d9fc10(A...); bool __thiscall m_FUN_10d9fc30(int *param_2); template<class... A> int m_FUN_10d9fc30(A...); bool __thiscall m_FUN_10d9fc50(int *param_2); template<class... A> int m_FUN_10d9fc50(A...); void __thiscall m_FUN_10da0410(int param_2); template<class... A> int m_FUN_10da0410(A...); void __thiscall m_FUN_10da04f0(int *param_2); template<class... A> int m_FUN_10da04f0(A...); void __thiscall m_FUN_10da0560(undefined4 param_2); template<class... A> int m_FUN_10da0560(A...); void __thiscall m_FUN_10da0570(undefined4 *param_2); template<class... A> int m_FUN_10da0570(A...); void __thiscall m_FUN_10da06e0(undefined4 *param_2); template<class... A> int m_FUN_10da06e0(A...); void __thiscall m_FUN_10da07c0(undefined4 *param_2); template<class... A> int m_FUN_10da07c0(A...); int * __thiscall m_FUN_10da1f70(int *param_2); template<class... A> int m_FUN_10da1f70(A...); int * __thiscall m_FUN_10da1fb0(int *param_2); template<class... A> int m_FUN_10da1fb0(A...); int * __thiscall m_FUN_10da2030(int *param_2); template<class... A> int m_FUN_10da2030(A...); undefined4 * __thiscall m_FUN_10da20a0(undefined4 param_2); template<class... A> int m_FUN_10da20a0(A...); undefined4 * __thiscall m_FUN_10da3f90(int *param_2); template<class... A> int m_FUN_10da3f90(A...); int * __thiscall m_FUN_10da4130(int *param_2); template<class... A> int m_FUN_10da4130(A...); void __thiscall m_FUN_10da42c0(int *param_2); template<class... A> int m_FUN_10da42c0(A...); undefined4 * __thiscall m_FUN_10da4980(undefined4 param_2); template<class... A> int m_FUN_10da4980(A...); undefined4 * __thiscall m_FUN_10da49e0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10da49e0(A...); undefined4 * __thiscall m_FUN_10da4a80(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10da4a80(A...); undefined4 * __thiscall m_FUN_10da4b20(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10da4b20(A...); undefined4 * __thiscall m_FUN_10da4bc0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10da4bc0(A...); void __thiscall m_FUN_10da54a0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10da54a0(A...); void __thiscall m_FUN_10da54d0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10da54d0(A...); void __thiscall m_FUN_10da5cd0(int param_2); template<class... A> int m_FUN_10da5cd0(A...); void __thiscall m_FUN_10da5cf0(int param_2); template<class... A> int m_FUN_10da5cf0(A...); void __thiscall m_FUN_10da5d10(int *param_2); template<class... A> int m_FUN_10da5d10(A...); void __thiscall m_FUN_10da5d70(undefined4 param_2); template<class... A> int m_FUN_10da5d70(A...); void __thiscall m_FUN_10da6850(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10da6850(A...); void __thiscall m_FUN_10da7860(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10da7860(A...); undefined4 __thiscall m_FUN_10da9500(undefined4 *param_2); template<class... A> int m_FUN_10da9500(A...); void __thiscall m_FUN_10da9e10(undefined4 *param_2); template<class... A> int m_FUN_10da9e10(A...); void __thiscall m_FUN_10daa0c0(undefined4 *param_2); template<class... A> int m_FUN_10daa0c0(A...); undefined4 * __thiscall m_FUN_10daa150(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10daa150(A...); undefined4 * __thiscall m_FUN_10daa160(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10daa160(A...); bool __thiscall m_FUN_10daa6f0(int *param_2); template<class... A> int m_FUN_10daa6f0(A...); bool __thiscall m_FUN_10daa710(int *param_2); template<class... A> int m_FUN_10daa710(A...); uint __thiscall m_FUN_10daa7d0(uint param_2); template<class... A> int m_FUN_10daa7d0(A...); void __thiscall m_FUN_10daaa30(undefined4 *param_2); template<class... A> int m_FUN_10daaa30(A...); void __thiscall m_FUN_10dab3e0(undefined4 *param_2); template<class... A> int m_FUN_10dab3e0(A...); void __thiscall m_FUN_10dab3f0(undefined4 *param_2,void *param_3); template<class... A> int m_FUN_10dab3f0(A...); void __thiscall m_FUN_10dadc40(undefined4 *param_2); template<class... A> int m_FUN_10dadc40(A...); int * __thiscall m_FUN_10dae360(char *param_2); template<class... A> int m_FUN_10dae360(A...); void __thiscall m_FUN_10db1dc0(uint param_2); template<class... A> int m_FUN_10db1dc0(A...); void __thiscall m_FUN_10db1de0(uint param_2); template<class... A> int m_FUN_10db1de0(A...); int * __thiscall m_FUN_10db1ff0(int *param_2); template<class... A> int m_FUN_10db1ff0(A...); undefined4 * __thiscall m_FUN_10db21e0(undefined4 *param_2); template<class... A> int m_FUN_10db21e0(A...); undefined4 * __thiscall m_FUN_10db2480(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10db2480(A...); undefined4 * __thiscall m_FUN_10db24a0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10db24a0(A...); undefined4 * __thiscall m_FUN_10db24c0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10db24c0(A...); undefined4 * __thiscall m_FUN_10db24e0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10db24e0(A...); undefined4 * __thiscall m_FUN_10db2800(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10db2800(A...); undefined4 * __thiscall m_FUN_10db2820(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10db2820(A...); undefined4 * __thiscall m_FUN_10db2840(undefined4 param_2); template<class... A> int m_FUN_10db2840(A...); undefined4 * __thiscall m_FUN_10db2850(undefined4 param_2); template<class... A> int m_FUN_10db2850(A...); undefined4 * __thiscall m_FUN_10db2860(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10db2860(A...); undefined4 * __thiscall m_FUN_10db2880(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10db2880(A...); undefined4 * __thiscall m_FUN_10db28a0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10db28a0(A...); undefined4 * __thiscall m_FUN_10db28b0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10db28b0(A...); undefined4 * __thiscall m_FUN_10db28c0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10db28c0(A...); undefined4 * __thiscall m_FUN_10db28e0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10db28e0(A...); undefined4 * __thiscall m_FUN_10db2910(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10db2910(A...); undefined4 * __thiscall m_FUN_10db2930(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10db2930(A...); undefined4 * __thiscall m_FUN_10db2960(undefined4 param_2); template<class... A> int m_FUN_10db2960(A...); undefined4 * __thiscall m_FUN_10db2970(undefined4 param_2); template<class... A> int m_FUN_10db2970(A...); undefined4 * __thiscall m_FUN_10db30f0(undefined4 param_2); template<class... A> int m_FUN_10db30f0(A...); undefined4 * __thiscall m_FUN_10db3110(undefined4 param_2); template<class... A> int m_FUN_10db3110(A...); undefined4 * __thiscall m_FUN_10db3230(undefined4 *param_2); template<class... A> int m_FUN_10db3230(A...); undefined4 * __thiscall m_FUN_10db3240(undefined4 *param_2); template<class... A> int m_FUN_10db3240(A...); void __thiscall m_FUN_10db3da0(int param_2); template<class... A> int m_FUN_10db3da0(A...); void __thiscall m_FUN_10db3e10(int param_2); template<class... A> int m_FUN_10db3e10(A...); void __thiscall m_FUN_10db3ea0(int *param_2); template<class... A> int m_FUN_10db3ea0(A...); void __thiscall m_FUN_10db3f10(int *param_2); template<class... A> int m_FUN_10db3f10(A...); void __thiscall m_FUN_10db5620(uint param_2); template<class... A> int m_FUN_10db5620(A...); void __thiscall m_FUN_10db5670(uint param_2); template<class... A> int m_FUN_10db5670(A...); undefined4 * __thiscall m_FUN_10db6720(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10db6720(A...); undefined4 * __thiscall m_FUN_10db6740(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10db6740(A...); undefined4 * __thiscall m_FUN_10db6760(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10db6760(A...); undefined4 * __thiscall m_FUN_10db67d0(undefined4 param_2,undefined4 param_3,char *param_4); template<class... A> int m_FUN_10db67d0(A...); undefined4 * __thiscall m_FUN_10db6820(char *param_2,undefined4 param_3,undefined4 param_4,char *param_5); template<class... A> int m_FUN_10db6820(A...); bool __thiscall m_FUN_10db8ec0(int *param_2); template<class... A> int m_FUN_10db8ec0(A...); bool __thiscall m_FUN_10db8ee0(int *param_2); template<class... A> int m_FUN_10db8ee0(A...); int __thiscall m_FUN_10db8f00(int param_2); template<class... A> int m_FUN_10db8f00(A...); void __thiscall m_FUN_10db8fb0(int *param_2,int param_3); template<class... A> int m_FUN_10db8fb0(A...); int * __thiscall m_FUN_10db8fd0(int param_2); template<class... A> int m_FUN_10db8fd0(A...); int * __thiscall m_FUN_10db8ff0(int param_2); template<class... A> int m_FUN_10db8ff0(A...); uint __thiscall m_FUN_10db98b0(uint param_2); template<class... A> int m_FUN_10db98b0(A...); void __thiscall m_FUN_10db9f40(undefined4 param_2,undefined4 param_3,char *param_4); template<class... A> int m_FUN_10db9f40(A...); void __thiscall m_FUN_10dba320(char *param_2,undefined4 param_3,undefined4 param_4,char *param_5); template<class... A> int m_FUN_10dba320(A...); void __thiscall m_FUN_10dbb6c0(undefined4 *param_2); template<class... A> int m_FUN_10dbb6c0(A...); undefined4 __thiscall m_FUN_10dbc9b0(undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); template<class... A> int m_FUN_10dbc9b0(A...); void __thiscall m_FUN_10dbda00(undefined4 *param_2); template<class... A> int m_FUN_10dbda00(A...); SCStr * __thiscall m_FUN_10dc5670(SCStr *param_2); template<class... A> int m_FUN_10dc5670(A...); int * __thiscall m_FUN_10dc5720(int *param_2); template<class... A> int m_FUN_10dc5720(A...); int * __thiscall m_FUN_10dc5910(int *param_2); template<class... A> int m_FUN_10dc5910(A...); undefined1 * __thiscall m_FUN_10dc5c80(uint param_2); template<class... A> int m_FUN_10dc5c80(A...); int * __thiscall m_FUN_10dc5cb0(int *param_2); template<class... A> int m_FUN_10dc5cb0(A...); int * __thiscall m_FUN_10dc5d60(int *param_2); template<class... A> int m_FUN_10dc5d60(A...); int * __thiscall m_FUN_10dc5da0(int *param_2); template<class... A> int m_FUN_10dc5da0(A...); int * __thiscall m_FUN_10dc64c0(int *param_2); template<class... A> int m_FUN_10dc64c0(A...); undefined1 * __thiscall m_FUN_10dc68b0(uint param_2); template<class... A> int m_FUN_10dc68b0(A...); uint __thiscall m_FUN_10dc74c0(byte *param_2); template<class... A> int m_FUN_10dc74c0(A...); void __thiscall m_FUN_10dc7a20(SCStr *param_2); template<class... A> int m_FUN_10dc7a20(A...); void __thiscall m_FUN_10dc7a50(undefined4 param_2); template<class... A> int m_FUN_10dc7a50(A...); void __thiscall m_FUN_10dc7a60(undefined2 param_2); template<class... A> int m_FUN_10dc7a60(A...); void __thiscall m_FUN_10dc7c30(undefined1 param_2); template<class... A> int m_FUN_10dc7c30(A...); void __thiscall m_FUN_10dc7c40(undefined4 param_2); template<class... A> int m_FUN_10dc7c40(A...); void __thiscall m_FUN_10dc7c50(SCStr *param_2); template<class... A> int m_FUN_10dc7c50(A...); void __thiscall m_FUN_10dc7c80(undefined4 param_2); template<class... A> int m_FUN_10dc7c80(A...); undefined1 __thiscall m_FUN_10dcbe10(int param_2); template<class... A> int m_FUN_10dcbe10(A...); SCStr * __thiscall m_FUN_10dcee90(SCStr *param_2); template<class... A> int m_FUN_10dcee90(A...); SCStr * __thiscall m_FUN_10dcef30(SCStr *param_2); template<class... A> int m_FUN_10dcef30(A...); int * __thiscall m_FUN_10dcfbc0(int *param_2); template<class... A> int m_FUN_10dcfbc0(A...); void __thiscall m_FUN_10dcfd90(undefined4 *param_2); template<class... A> int m_FUN_10dcfd90(A...); void __thiscall m_FUN_10dd0140(undefined4 *param_2); template<class... A> int m_FUN_10dd0140(A...); undefined4 * __thiscall m_FUN_10dd03b0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10dd03b0(A...); undefined4 * __thiscall m_FUN_10dd0400(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10dd0400(A...); undefined4 * __thiscall m_FUN_10dd0410(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10dd0410(A...); int __thiscall m_FUN_10dd1840(int param_2); template<class... A> int m_FUN_10dd1840(A...); int __thiscall m_FUN_10dd1850(int param_2); template<class... A> int m_FUN_10dd1850(A...); void __thiscall m_FUN_10dd18d0(int *param_2,int param_3); template<class... A> int m_FUN_10dd18d0(A...); int * __thiscall m_FUN_10dd18f0(int param_2); template<class... A> int m_FUN_10dd18f0(A...); int * __thiscall m_FUN_10dd1910(int param_2); template<class... A> int m_FUN_10dd1910(A...); uint __thiscall m_FUN_10dd1ac0(uint param_2); template<class... A> int m_FUN_10dd1ac0(A...); uint __thiscall m_FUN_10dd1c10(uint param_2); template<class... A> int m_FUN_10dd1c10(A...); void __thiscall m_FUN_10dd2040(int *param_2); template<class... A> int m_FUN_10dd2040(A...); void __thiscall m_FUN_10dd22c0(undefined4 *param_2); template<class... A> int m_FUN_10dd22c0(A...); void __thiscall m_FUN_10dd2690(undefined4 *param_2,void *param_3); template<class... A> int m_FUN_10dd2690(A...); int __thiscall m_FUN_10dd26d0(int param_2); template<class... A> int m_FUN_10dd26d0(A...); int __thiscall m_FUN_10dd26e0(int param_2); template<class... A> int m_FUN_10dd26e0(A...); void __thiscall m_FUN_10dd33e0(char param_2); template<class... A> int m_FUN_10dd33e0(A...); void __thiscall m_FUN_10dd5b60(undefined4 *param_2); template<class... A> int m_FUN_10dd5b60(A...); undefined4 * __thiscall m_FUN_10dd5ef0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10dd5ef0(A...); undefined4 * __thiscall m_FUN_10dd5f20(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10dd5f20(A...); undefined4 * __thiscall m_FUN_10dd5f90(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10dd5f90(A...); undefined4 * __thiscall m_FUN_10dd5fc0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10dd5fc0(A...); undefined4 * __thiscall m_FUN_10dd5ff0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10dd5ff0(A...); undefined4 * __thiscall m_FUN_10dd6010(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10dd6010(A...); undefined4 * __thiscall m_FUN_10dd63b0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10dd63b0(A...); undefined4 * __thiscall m_FUN_10dd63d0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10dd63d0(A...); undefined4 * __thiscall m_FUN_10dd63f0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10dd63f0(A...); undefined4 * __thiscall m_FUN_10dd6430(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10dd6430(A...); undefined4 * __thiscall m_FUN_10dd6470(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10dd6470(A...); undefined4 * __thiscall m_FUN_10dd64b0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10dd64b0(A...); void __thiscall m_FUN_10dd64f0(void *param_2,int param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10dd64f0(A...); void __thiscall m_FUN_10dd6f20(void *param_2,int param_3); template<class... A> int m_FUN_10dd6f20(A...); undefined4 * __thiscall m_FUN_10dd71e0(undefined4 param_2); template<class... A> int m_FUN_10dd71e0(A...); undefined4 * __thiscall m_FUN_10dd7200(undefined4 param_2); template<class... A> int m_FUN_10dd7200(A...); undefined4 * __thiscall m_FUN_10dd72a0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10dd72a0(A...); undefined4 * __thiscall m_FUN_10dd72b0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10dd72b0(A...); undefined4 * __thiscall m_FUN_10dd72c0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10dd72c0(A...); undefined4 * __thiscall m_FUN_10dd72d0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10dd72d0(A...); undefined4 * __thiscall m_FUN_10dd73e0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10dd73e0(A...); undefined4 * __thiscall m_FUN_10dd73f0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10dd73f0(A...); bool __thiscall m_FUN_10dd85b0(int *param_2); template<class... A> int m_FUN_10dd85b0(A...); bool __thiscall m_FUN_10dd85d0(int *param_2); template<class... A> int m_FUN_10dd85d0(A...); bool __thiscall m_FUN_10dd85f0(int *param_2); template<class... A> int m_FUN_10dd85f0(A...); void __thiscall m_FUN_10dd8fc0(uint param_2); template<class... A> int m_FUN_10dd8fc0(A...); void __thiscall m_FUN_10dd9080(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10dd9080(A...); void __thiscall m_FUN_10dd97a0(int param_2); template<class... A> int m_FUN_10dd97a0(A...); void __thiscall m_FUN_10dd9810(int param_2); template<class... A> int m_FUN_10dd9810(A...); void __thiscall m_FUN_10dd98a0(int *param_2); template<class... A> int m_FUN_10dd98a0(A...); void __thiscall m_FUN_10dd9910(int *param_2); template<class... A> int m_FUN_10dd9910(A...); void __thiscall m_FUN_10dda680(undefined4 *param_2); template<class... A> int m_FUN_10dda680(A...); void __thiscall m_FUN_10dda690(undefined4 *param_2); template<class... A> int m_FUN_10dda690(A...); SCStr * __thiscall m_FUN_10ddcfc0(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10ddcfc0(A...); SCStr * __thiscall m_FUN_10ddcff0(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10ddcff0(A...); SCStr * __thiscall m_FUN_10ddd020(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10ddd020(A...); SCStr * __thiscall m_FUN_10ddd050(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10ddd050(A...); SCStr * __thiscall m_FUN_10ddd080(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10ddd080(A...); int * __thiscall m_FUN_10ddd0b0(int *param_2); template<class... A> int m_FUN_10ddd0b0(A...); int * __thiscall m_FUN_10ddef30(int *param_2); template<class... A> int m_FUN_10ddef30(A...); void __thiscall m_FUN_10de2c70(SCStr *param_2); template<class... A> int m_FUN_10de2c70(A...); void __thiscall m_FUN_10de2ca0(SCStr *param_2); template<class... A> int m_FUN_10de2ca0(A...); void __thiscall m_FUN_10de2cd0(undefined4 param_2); template<class... A> int m_FUN_10de2cd0(A...); void __thiscall m_FUN_10de2ce0(SCStr *param_2); template<class... A> int m_FUN_10de2ce0(A...); void __thiscall m_FUN_10de2d10(SCStr *param_2); template<class... A> int m_FUN_10de2d10(A...); void __thiscall m_FUN_10de2d40(undefined4 *param_2); template<class... A> int m_FUN_10de2d40(A...); void __thiscall m_FUN_10de2d50(SCStr *param_2); template<class... A> int m_FUN_10de2d50(A...); undefined4 * __thiscall m_FUN_10de4960(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10de4960(A...); undefined4 __thiscall m_FUN_10de5ff0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 *param_6); template<class... A> int m_FUN_10de5ff0(A...); void __thiscall m_FUN_10de9110(undefined4 param_2); template<class... A> int m_FUN_10de9110(A...); void __thiscall m_FUN_10de91d0(undefined4 param_2); template<class... A> int m_FUN_10de91d0(A...); void __thiscall m_FUN_10de9c00(undefined4 param_2); template<class... A> int m_FUN_10de9c00(A...); uint __thiscall m_FUN_10de9df0(uint param_2); template<class... A> int m_FUN_10de9df0(A...); void __thiscall m_FUN_10deb680(undefined4 param_2); template<class... A> int m_FUN_10deb680(A...); undefined1 * __thiscall m_FUN_10deb720(undefined1 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10deb720(A...); undefined1 * __thiscall m_FUN_10deb740(undefined1 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10deb740(A...); undefined4 * __thiscall m_FUN_10deb760(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10deb760(A...); int __thiscall m_FUN_10deb870(undefined4 param_2,undefined4 param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10deb870(A...); undefined4 * __thiscall m_FUN_10deb8a0(undefined4 param_2); template<class... A> int m_FUN_10deb8a0(A...); undefined4 * __thiscall m_FUN_10deb8b0(undefined4 param_2); template<class... A> int m_FUN_10deb8b0(A...); undefined4 * __thiscall m_FUN_10deb980(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10deb980(A...); undefined4 * __thiscall m_FUN_10deb9c0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10deb9c0(A...); int __thiscall m_FUN_10debb10(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10debb10(A...); undefined1 * __thiscall m_FUN_10debc00(undefined1 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10debc00(A...); void __thiscall m_FUN_10debdf0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10debdf0(A...); void __thiscall m_FUN_10dec090(undefined4 param_2); template<class... A> int m_FUN_10dec090(A...); void __thiscall m_FUN_10dec0b0(undefined4 param_2); template<class... A> int m_FUN_10dec0b0(A...); void __thiscall m_FUN_10dec0d0(undefined4 param_2); template<class... A> int m_FUN_10dec0d0(A...); void __thiscall m_FUN_10dec180(undefined4 param_2); template<class... A> int m_FUN_10dec180(A...); void __thiscall m_FUN_10dec1a0(undefined4 param_2); template<class... A> int m_FUN_10dec1a0(A...); undefined4 * __thiscall m_FUN_10dec750(SCStr *param_2); template<class... A> int m_FUN_10dec750(A...); int * __thiscall m_FUN_10dec8e0(int *param_2,SCStr *param_3); template<class... A> int m_FUN_10dec8e0(A...); void __thiscall m_FUN_10dedf80(undefined4 param_2); template<class... A> int m_FUN_10dedf80(A...); void __thiscall m_FUN_10dedfc0(undefined4 param_2); template<class... A> int m_FUN_10dedfc0(A...); void __thiscall m_FUN_10dee130(int *param_2,int param_3,undefined4 param_4,undefined4 param_5); template<class... A> int m_FUN_10dee130(A...); void __thiscall m_FUN_10dee190(int *param_2,int param_3,undefined4 param_4,undefined4 param_5); template<class... A> int m_FUN_10dee190(A...); undefined4 * __thiscall m_FUN_10dee220(undefined4 param_2); template<class... A> int m_FUN_10dee220(A...); undefined4 * __thiscall m_FUN_10dee240(undefined4 param_2); template<class... A> int m_FUN_10dee240(A...); undefined4 * __thiscall m_FUN_10dee2a0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10dee2a0(A...); undefined4 * __thiscall m_FUN_10dee2b0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10dee2b0(A...); undefined4 * __thiscall m_FUN_10dee2c0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10dee2c0(A...); undefined4 * __thiscall m_FUN_10dee380(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10dee380(A...); undefined4 * __thiscall m_FUN_10dee390(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10dee390(A...); undefined4 * __thiscall m_FUN_10dee3c0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10dee3c0(A...); undefined4 * __thiscall m_FUN_10dee3d0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10dee3d0(A...); undefined4 * __thiscall m_FUN_10dee3e0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10dee3e0(A...); undefined4 * __thiscall m_FUN_10dee3f0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10dee3f0(A...); SCStr * __thiscall m_FUN_10dee5a0(SCStr *param_2); template<class... A> int m_FUN_10dee5a0(A...); undefined4 * __thiscall m_FUN_10dee5d0(undefined4 *param_2); template<class... A> int m_FUN_10dee5d0(A...); bool __thiscall m_FUN_10def410(int *param_2); template<class... A> int m_FUN_10def410(A...); bool __thiscall m_FUN_10def430(int *param_2); template<class... A> int m_FUN_10def430(A...); int __thiscall m_FUN_10def840(int param_2); template<class... A> int m_FUN_10def840(A...); int __thiscall m_FUN_10def860(int param_2); template<class... A> int m_FUN_10def860(A...); void __thiscall m_FUN_10df0260(int param_2); template<class... A> int m_FUN_10df0260(A...); void __thiscall m_FUN_10df02d0(int *param_2,int param_3); template<class... A> int m_FUN_10df02d0(A...); void __thiscall m_FUN_10df02f0(int *param_2,int param_3); template<class... A> int m_FUN_10df02f0(A...); void __thiscall m_FUN_10df03e0(int *param_2); template<class... A> int m_FUN_10df03e0(A...); void __thiscall m_FUN_10df0520(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10df0520(A...); void __thiscall m_FUN_10df0540(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10df0540(A...); void __thiscall m_FUN_10df0560(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10df0560(A...); void __thiscall m_FUN_10df0580(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10df0580(A...); void __thiscall m_FUN_10df0650(undefined4 *param_2); template<class... A> int m_FUN_10df0650(A...); void __thiscall m_FUN_10df0660(undefined4 *param_2); template<class... A> int m_FUN_10df0660(A...); void __thiscall m_FUN_10df0ac0(undefined4 *param_2); template<class... A> int m_FUN_10df0ac0(A...); void __thiscall m_FUN_10df0ad0(undefined4 *param_2); template<class... A> int m_FUN_10df0ad0(A...); void __thiscall m_FUN_10df0ae0(undefined4 *param_2); template<class... A> int m_FUN_10df0ae0(A...); void __thiscall m_FUN_10df0af0(undefined4 *param_2); template<class... A> int m_FUN_10df0af0(A...); void __thiscall m_FUN_10df0b00(undefined4 *param_2); template<class... A> int m_FUN_10df0b00(A...); void __thiscall m_FUN_10df0b10(undefined4 *param_2); template<class... A> int m_FUN_10df0b10(A...); void __thiscall m_FUN_10df0b90(int *param_2,SCStr *param_3); template<class... A> int m_FUN_10df0b90(A...); void __thiscall m_FUN_10df0d00(undefined8 *param_2,SCStr *param_3); template<class... A> int m_FUN_10df0d00(A...); void __thiscall m_FUN_10df1810(undefined4 param_2); template<class... A> int m_FUN_10df1810(A...); void __thiscall m_FUN_10df1850(undefined4 param_2); template<class... A> int m_FUN_10df1850(A...); void __thiscall m_FUN_10df2120(undefined4 *param_2); template<class... A> int m_FUN_10df2120(A...); void __thiscall m_FUN_10df2140(undefined4 *param_2); template<class... A> int m_FUN_10df2140(A...); void __thiscall m_FUN_10df23a0(undefined4 *param_2); template<class... A> int m_FUN_10df23a0(A...); undefined4 * __thiscall m_FUN_10df23f0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10df23f0(A...); undefined4 * __thiscall m_FUN_10df27b0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10df27b0(A...); int __thiscall m_FUN_10df29a0(int param_2); template<class... A> int m_FUN_10df29a0(A...); int __thiscall m_FUN_10df29b0(int param_2); template<class... A> int m_FUN_10df29b0(A...); int __thiscall m_FUN_10df29c0(int param_2); template<class... A> int m_FUN_10df29c0(A...); int __thiscall m_FUN_10df29d0(int param_2); template<class... A> int m_FUN_10df29d0(A...); void __thiscall m_FUN_10df3ef0(undefined4 *param_2); template<class... A> int m_FUN_10df3ef0(A...); SCStr * __thiscall m_FUN_10df47f0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10df47f0(A...); undefined4 * __thiscall m_FUN_10df4820(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10df4820(A...); undefined4 * __thiscall m_FUN_10df4910(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10df4910(A...); undefined4 * __thiscall m_FUN_10df4930(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); template<class... A> int m_FUN_10df4930(A...); SCStr * __thiscall m_FUN_10df4960(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10df4960(A...); int * __thiscall m_FUN_10df4a70(int *param_2); template<class... A> int m_FUN_10df4a70(A...); int * __thiscall m_FUN_10df4a90(int *param_2); template<class... A> int m_FUN_10df4a90(A...); void __thiscall m_FUN_10df4b00(undefined4 *param_2); template<class... A> int m_FUN_10df4b00(A...); void __thiscall m_FUN_10df4ec0(undefined4 *param_2); template<class... A> int m_FUN_10df4ec0(A...); undefined4 * __thiscall m_FUN_10df4fe0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10df4fe0(A...); undefined4 * __thiscall m_FUN_10df5000(undefined4 *param_2); template<class... A> int m_FUN_10df5000(A...); void __thiscall m_FUN_10e009e0(int param_2); template<class... A> int m_FUN_10e009e0(A...); void __thiscall m_FUN_10e00a50(int *param_2); template<class... A> int m_FUN_10e00a50(A...); void __thiscall m_FUN_10e06ac0(undefined4 *param_2); template<class... A> int m_FUN_10e06ac0(A...); undefined4 * __thiscall m_FUN_10e0b090(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10e0b090(A...); undefined4 * __thiscall m_FUN_10e0b0d0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10e0b0d0(A...); undefined4 * __thiscall m_FUN_10e0b0f0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10e0b0f0(A...); SCStr * __thiscall m_FUN_10e0b2e0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10e0b2e0(A...); undefined4 * __thiscall m_FUN_10e0b310(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10e0b310(A...); undefined4 * __thiscall m_FUN_10e0b330(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10e0b330(A...); undefined4 * __thiscall m_FUN_10e0b350(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10e0b350(A...); SCStr * __thiscall m_FUN_10e0b390(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10e0b390(A...); undefined4 * __thiscall m_FUN_10e0beb0(undefined4 *param_2); template<class... A> int m_FUN_10e0beb0(A...); undefined4 * __thiscall m_FUN_10e0bed0(undefined4 param_2); template<class... A> int m_FUN_10e0bed0(A...); undefined4 * __thiscall m_FUN_10e0bef0(undefined4 param_2); template<class... A> int m_FUN_10e0bef0(A...); undefined4 * __thiscall m_FUN_10e0c2d0(undefined4 *param_2); template<class... A> int m_FUN_10e0c2d0(A...); void __thiscall m_FUN_10e0d300(int param_2); template<class... A> int m_FUN_10e0d300(A...); void __thiscall m_FUN_10e0d370(int param_2); template<class... A> int m_FUN_10e0d370(A...); void __thiscall m_FUN_10e0d400(int *param_2); template<class... A> int m_FUN_10e0d400(A...); void __thiscall m_FUN_10e0d470(int *param_2); template<class... A> int m_FUN_10e0d470(A...); undefined4 * __thiscall m_FUN_10e12260(undefined4 param_2); template<class... A> int m_FUN_10e12260(A...); undefined4 * __thiscall m_FUN_10e12280(undefined4 param_2); template<class... A> int m_FUN_10e12280(A...); undefined4 * __thiscall m_FUN_10e122b0(undefined4 param_2); template<class... A> int m_FUN_10e122b0(A...); undefined4 * __thiscall m_FUN_10e122d0(undefined4 param_2); template<class... A> int m_FUN_10e122d0(A...); undefined4 * __thiscall m_FUN_10e12350(undefined4 param_2); template<class... A> int m_FUN_10e12350(A...); undefined4 * __thiscall m_FUN_10e12370(undefined4 param_2); template<class... A> int m_FUN_10e12370(A...); undefined4 * __thiscall m_FUN_10e12390(undefined4 param_2); template<class... A> int m_FUN_10e12390(A...); undefined4 * __thiscall m_FUN_10e12600(undefined4 param_2); template<class... A> int m_FUN_10e12600(A...); undefined4 * __thiscall m_FUN_10e126c0(undefined4 param_2); template<class... A> int m_FUN_10e126c0(A...); undefined4 * __thiscall m_FUN_10e126f0(undefined4 param_2); template<class... A> int m_FUN_10e126f0(A...); undefined4 * __thiscall m_FUN_10e127a0(undefined4 param_2); template<class... A> int m_FUN_10e127a0(A...); undefined4 * __thiscall m_FUN_10e12820(undefined4 param_2); template<class... A> int m_FUN_10e12820(A...); undefined4 * __thiscall m_FUN_10e12850(undefined4 param_2); template<class... A> int m_FUN_10e12850(A...); undefined4 * __thiscall m_FUN_10e12920(undefined4 param_2); template<class... A> int m_FUN_10e12920(A...); undefined4 * __thiscall m_FUN_10e12940(undefined4 param_2); template<class... A> int m_FUN_10e12940(A...); undefined4 * __thiscall m_FUN_10e12960(undefined4 param_2); template<class... A> int m_FUN_10e12960(A...); bool __thiscall m_FUN_10e13720(int *param_2); template<class... A> int m_FUN_10e13720(A...); bool __thiscall m_FUN_10e13740(int *param_2); template<class... A> int m_FUN_10e13740(A...); void __thiscall m_FUN_10e19860(undefined4 *param_2); template<class... A> int m_FUN_10e19860(A...); undefined4 * __thiscall m_FUN_10e23100(undefined4 param_2); template<class... A> int m_FUN_10e23100(A...); undefined4 * __thiscall m_FUN_10e23120(undefined4 param_2); template<class... A> int m_FUN_10e23120(A...); undefined4 * __thiscall m_FUN_10e23190(int param_2,undefined4 param_3); template<class... A> int m_FUN_10e23190(A...); undefined4 * __thiscall m_FUN_10e231f0(undefined4 param_2); template<class... A> int m_FUN_10e231f0(A...); undefined4 * __thiscall m_FUN_10e23290(undefined4 param_2); template<class... A> int m_FUN_10e23290(A...); int * __thiscall m_FUN_10e24e10(int *param_2); template<class... A> int m_FUN_10e24e10(A...); int * __thiscall m_FUN_10e24e30(int *param_2); template<class... A> int m_FUN_10e24e30(A...); int __thiscall m_FUN_10e24f50(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10e24f50(A...); int __thiscall m_FUN_10e250b0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10e250b0(A...); undefined4 * __thiscall m_FUN_10e25480(undefined4 param_2); template<class... A> int m_FUN_10e25480(A...); undefined4 * __thiscall m_FUN_10e25720(undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined4 param_5); template<class... A> int m_FUN_10e25720(A...); undefined4 * __thiscall m_FUN_10e25760(undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined4 param_5); template<class... A> int m_FUN_10e25760(A...); undefined4 * __thiscall m_FUN_10e257a0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10e257a0(A...); undefined4 * __thiscall m_FUN_10e257d0(undefined4 param_2); template<class... A> int m_FUN_10e257d0(A...); undefined4 * __thiscall m_FUN_10e25ad0(undefined4 param_2); template<class... A> int m_FUN_10e25ad0(A...); undefined4 * __thiscall m_FUN_10e25b60(undefined4 param_2); template<class... A> int m_FUN_10e25b60(A...); undefined4 * __thiscall m_FUN_10e25b80(undefined4 param_2); template<class... A> int m_FUN_10e25b80(A...); undefined4 * __thiscall m_FUN_10e25c10(undefined4 param_2); template<class... A> int m_FUN_10e25c10(A...); undefined4 * __thiscall m_FUN_10e25c30(undefined4 param_2); template<class... A> int m_FUN_10e25c30(A...); undefined4 * __thiscall m_FUN_10e25e10(undefined4 param_2); template<class... A> int m_FUN_10e25e10(A...); undefined4 * __thiscall m_FUN_10e25e40(undefined4 param_2); template<class... A> int m_FUN_10e25e40(A...); undefined4 * __thiscall m_FUN_10e25ef0(undefined4 param_2); template<class... A> int m_FUN_10e25ef0(A...); undefined4 * __thiscall m_FUN_10e25f10(undefined4 param_2); template<class... A> int m_FUN_10e25f10(A...); undefined4 * __thiscall m_FUN_10e26580(undefined4 param_2); template<class... A> int m_FUN_10e26580(A...); undefined4 * __thiscall m_FUN_10e26610(undefined4 param_2); template<class... A> int m_FUN_10e26610(A...); undefined4 * __thiscall m_FUN_10e26640(undefined4 param_2); template<class... A> int m_FUN_10e26640(A...); undefined4 * __thiscall m_FUN_10e26660(undefined4 param_2); template<class... A> int m_FUN_10e26660(A...); undefined4 * __thiscall m_FUN_10e26840(undefined4 param_2); template<class... A> int m_FUN_10e26840(A...); undefined4 * __thiscall m_FUN_10e269e0(undefined4 param_2); template<class... A> int m_FUN_10e269e0(A...); undefined4 * __thiscall m_FUN_10e26a00(undefined4 param_2); template<class... A> int m_FUN_10e26a00(A...); undefined4 * __thiscall m_FUN_10e26a20(undefined4 param_2); template<class... A> int m_FUN_10e26a20(A...); undefined4 * __thiscall m_FUN_10e26ac0(undefined4 param_2); template<class... A> int m_FUN_10e26ac0(A...); undefined4 * __thiscall m_FUN_10e26ae0(undefined4 param_2); template<class... A> int m_FUN_10e26ae0(A...); undefined4 * __thiscall m_FUN_10e26b00(undefined4 param_2); template<class... A> int m_FUN_10e26b00(A...); undefined4 * __thiscall m_FUN_10e26b20(undefined4 param_2,undefined1 param_3); template<class... A> int m_FUN_10e26b20(A...); undefined4 * __thiscall m_FUN_10e26bd0(undefined4 param_2,undefined1 param_3); template<class... A> int m_FUN_10e26bd0(A...); undefined4 * __thiscall m_FUN_10e26c70(undefined4 param_2); template<class... A> int m_FUN_10e26c70(A...); };

extern int FUN_10d80690(...);
extern int FUN_10d806a0(...);
extern int FUN_10d806b0(...);
extern int FUN_10de4fb0(...);
extern int _atexit(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _strdup(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern __declspec(dllimport) int strncmp(...);
extern int thunk_FUN_10120220(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101a2210(...);
extern int thunk_FUN_101a2b90(...);
extern int thunk_FUN_101a33f0(...);
extern int thunk_FUN_101a9bd0(...);
extern int thunk_FUN_101b5500(...);
extern int thunk_FUN_101b5540(...);
extern int thunk_FUN_101b5de0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101ba300(...);
extern int thunk_FUN_101da4a0(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_1025f580(...);
extern int thunk_FUN_1029d970(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103d60a0(...);
template<class... A> int __stdcall thunk_FUN_103d65f0(A...);
extern int thunk_FUN_104ed740(...);
extern int thunk_FUN_104ed870(...);
template<class... A> int __stdcall thunk_FUN_10594e60(A...);
extern int thunk_FUN_1059c050(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_1059f5e0(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_105f9e40(...);
extern int thunk_FUN_10bbe900(...);
extern int thunk_FUN_10bc4830(...);
extern int thunk_FUN_10bcad90(...);
extern int thunk_FUN_10bd9600(...);
extern int thunk_FUN_10bed100(...);
extern int thunk_FUN_10c2f5a0(...);
extern int thunk_FUN_10d7cc90(...);
extern int thunk_FUN_10d89400(...);
extern int thunk_FUN_10d8ceb0(...);
extern int thunk_FUN_10da9e30(...);
template<class... A> int __stdcall thunk_FUN_10db6330(A...);
extern int thunk_FUN_10dcfdb0(...);
extern int thunk_FUN_10dd1260(...);
extern int thunk_FUN_10dd3190(...);
extern int thunk_FUN_10dd31f0(...);
extern int thunk_FUN_10de9550(...);
template<class... A> int __stdcall thunk_FUN_10debe80(A...);
template<class... A> int __stdcall thunk_FUN_10dec1c0(A...);
extern int thunk_FUN_10dec390(...);
template<class... A> int __stdcall thunk_FUN_10deca30(A...);
template<class... A> int __stdcall thunk_FUN_10decf00(A...);
extern int thunk_FUN_10dedc10(...);
template<class... A> int __stdcall thunk_FUN_10deea50(A...);
extern int thunk_FUN_10deef20(...);
template<class... A> int __stdcall thunk_FUN_10def4a0(A...);
extern int thunk_FUN_10defa10(...);
extern int thunk_FUN_10df2160(...);
template<class... A> int __stdcall thunk_FUN_10df4b20(A...);
extern int thunk_FUN_10ee1ed0(...);
extern int thunk_FUN_10ee48c0(...);
extern int thunk_FUN_10ffe600(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_110b0460(...);
template<class... A> int __stdcall thunk_FUN_110b3620(A...);
extern int thunk_FUN_110b8ef0(...);
extern int thunk_FUN_110b9180(...);
extern int thunk_FUN_110ecfe0(...);
extern int thunk_FUN_110f2980(...);
extern int thunk_FUN_110f4420(...);
template<class... A> int __stdcall thunk_FUN_11131cc0(A...);
extern int thunk_FUN_1115c530(...);
extern int thunk_FUN_1115c560(...);
extern int thunk_FUN_111a0620(...);
extern int thunk_FUN_111a0cc0(...);
template<class... A> int __stdcall thunk_FUN_111a1220(A...);
extern int thunk_FUN_111c06e0(...);
template<class... A> int __stdcall thunk_FUN_111c0760(A...);
template<class... A> int __stdcall thunk_FUN_111ca9f0(A...);
extern int thunk_FUN_111cb060(...);
extern int thunk_FUN_111ce020(...);
extern int thunk_FUN_111d0560(...);
extern int thunk_FUN_111dd660(...);
extern int thunk_FUN_111e3f80(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124e200(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f060(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_11261e50(...);
extern int thunk_FUN_112a9cf0(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1145c720(...);
extern int thunk_FUN_1145fa40(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148aaa4(...);
extern int thunk_FUN_1148ab00(...);
extern int thunk_FUN_1148ac28(...);
extern int DAT_1186d2ee;
extern int DAT_119352e0;
extern int DAT_11c03b94;
extern int DAT_11c03b98;
extern int DAT_12119d2c;
extern int DAT_12119d30;
extern int DAT_12119d34;
extern int DAT_12119d38;
extern int DAT_12119d40;
extern int DAT_12119d50;
extern int DAT_12119d54;
extern int DAT_12119d58;
extern int DAT_12119d5c;
extern int DAT_12126b84;
extern int DAT_121a0718;
extern int DAT_121a10c8;
extern int DAT_121a5034;
extern int DAT_121a50e4;
extern int DAT_121a5134;
extern int DAT_121a53cc;
extern int DAT_121a6c3c;
extern int DAT_121a6c40;
extern int DAT_122e8d28;
extern int DAT_122f1250;
extern int _tls_index;
extern int g_lSCObjCount;
extern int ghidra_vftable_HHSettingsReader;
extern int ghidra_vftable_RAccountDeletionAIOOp;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RNullAsyncIOOperation;
extern int ghidra_vftable_RSonosRefreshAuthTokenOp;
extern int ghidra_vftable_RUpnpACSetFormatAIOOp;
extern int ghidra_vftable_RUpnpACSetTimeNowAIOOp;
extern int ghidra_vftable_RUpnpACSetTimeServerAIOOp;
extern int ghidra_vftable_RUpnpACSetTimeZoneAIOOp;
extern int ghidra_vftable_RUpnpAVTAddURIToSavedQueueAIOOp;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_RZPTransferButtonEnumerator;
extern int ghidra_vftable_SCAccountCallback;
extern int ghidra_vftable_SCAccountDeletionRequest;
extern int ghidra_vftable_SCAccountRolePostRequest;
extern int ghidra_vftable_SCAccountSignInCompleteState;
extern int ghidra_vftable_SCAccountSignInState;
extern int ghidra_vftable_SCActionContext;
extern int ghidra_vftable_SCAlarmSettingsFrequencyAction;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCAuthorizeAccountGetRequest;
extern int ghidra_vftable_SCAuthorizeRedirectGetRequest;
extern int ghidra_vftable_SCBlePeripheralManager_Listener;
extern int ghidra_vftable_SCBrowsePageExtension;
extern int ghidra_vftable_SCBrowsePageExtensionRootBrowseTuneInMigrationTile;
extern int ghidra_vftable_SCBrowsePageExtensionServiceBrowseTuneInMigrationTile;
extern int ghidra_vftable_SCChirpManager_Listener;
extern int ghidra_vftable_SCContentUrlGetRequest;
extern int ghidra_vftable_SCDiscoveryHistoryStore;
extern int ghidra_vftable_SCEmailInput;
extern int ghidra_vftable_SCEmailWithReleaseInput;
extern int ghidra_vftable_SCEventSinkDelegateInternal;
extern int ghidra_vftable_SCEventSubscriptionImpl_EventSink;
extern int ghidra_vftable_SCHistoryDeleteAllActionFactory;
extern int ghidra_vftable_SCHistoryHideAction;
extern int ghidra_vftable_SCHouseholdEventSink;
extern int ghidra_vftable_SCIActionDelegate;
extern int ghidra_vftable_SCIActionDelegateCB;
extern int ghidra_vftable_SCIBrowsePageExtension;
extern int ghidra_vftable_SCIDateTimeManager;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpAVTransportAddURIToSavedQueue;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIOpContentDirectoryRefreshShareIndex;
extern int ghidra_vftable_SCIServicePopup;
extern int ghidra_vftable_SCITimeZone;
extern int ghidra_vftable_SCIWizard;
extern int ghidra_vftable_SCInfoViewAIOOpGeneratorCB;
extern int ghidra_vftable_SCInfoviewMenuInfo;
extern int ghidra_vftable_SCInfoviewViewBuilder_HeaderMapping;
extern int ghidra_vftable_SCInfoviewViewBuilder_MenuItemMapping;
extern int ghidra_vftable_SCLegacyWelcomeLoginWizard;
extern int ghidra_vftable_SCLegacyWelcomeLoginWizardCompleteState;
extern int ghidra_vftable_SCLegacyWelcomeLoginWizardInitState;
extern int ghidra_vftable_SCLegacyWelcomeLoginWizardState;
extern int ghidra_vftable_SCMenuSelectSettingActionBase;
extern int ghidra_vftable_SCMobilePhoneInput;
extern int ghidra_vftable_SCMusicIndexUpdateTimeAction;
extern int ghidra_vftable_SCMySonosPageExtensionSonosRadioTile;
extern int ghidra_vftable_SCNetstart2Manager_Listener;
extern int ghidra_vftable_SCNetstartStore_Listener;
extern int ghidra_vftable_SCNewWizBlePeripheralManagerEventSource;
extern int ghidra_vftable_SCNewWizMuseBleClientEventSource;
extern int ghidra_vftable_SCNfcManager_Listener;
extern int ghidra_vftable_SCOAuthTokenPostRequest;
extern int ghidra_vftable_SCOpAVTransportAddURIToSavedQueue;
extern int ghidra_vftable_SCOpAccountCreate;
extern int ghidra_vftable_SCOpAccountDeletion;
extern int ghidra_vftable_SCOpAccountLogin;
extern int ghidra_vftable_SCOpAccountRefreshTokens;
extern int ghidra_vftable_SCOpContentDirectoryRefreshShareIndex;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCOpSetViewContributingAsync;
extern int ghidra_vftable_SCOpSsidResponseObj;
extern int ghidra_vftable_SCOrphanAccountNoAccessState;
extern int ghidra_vftable_SCPasswordResetURLHandler;
extern int ghidra_vftable_SCRecentlyPlayedToggleActionFactory;
extern int ghidra_vftable_SCResetPasswordAction;
extern int ghidra_vftable_SCScheduleIndexUpdateToggleAction;
extern int ghidra_vftable_SCSearchUrlGetRequest;
extern int ghidra_vftable_SCSecureExistingBeginSecureTransferState;
extern int ghidra_vftable_SCSecureExistingButtonsState;
extern int ghidra_vftable_SCSecureExistingCheckExistingState;
extern int ghidra_vftable_SCSecureExistingCompleteState;
extern int ghidra_vftable_SCSecureExistingFinishSecureRegState;
extern int ghidra_vftable_SCSecureExistingInitState;
extern int ghidra_vftable_SCSecureExistingKnownEmailMatchState;
extern int ghidra_vftable_SCSecureExistingLookupState;
extern int ghidra_vftable_SCSecureExistingNetworkErrorState;
extern int ghidra_vftable_SCSecureExistingPressButtonState;
extern int ghidra_vftable_SCSecureExistingSpeakerChoiceState;
extern int ghidra_vftable_SCSecureExistingState;
extern int ghidra_vftable_SCSecureExistingWaitingForTransferState;
extern int ghidra_vftable_SCSecureRegistrationAccountEmailSubmitState;
extern int ghidra_vftable_SCSecureRegistrationAccountExistsState;
extern int ghidra_vftable_SCSecureRegistrationCheckPasswordState;
extern int ghidra_vftable_SCSecureRegistrationCompleteState;
extern int ghidra_vftable_SCSecureRegistrationCountryState;
extern int ghidra_vftable_SCSecureRegistrationCreatedState;
extern int ghidra_vftable_SCSecureRegistrationDataOptInSubmitState;
extern int ghidra_vftable_SCSecureRegistrationInitState;
extern int ghidra_vftable_SCSecureRegistrationLoginPrepState;
extern int ghidra_vftable_SCSecureRegistrationLoginSubmitState;
extern int ghidra_vftable_SCSecureRegistrationNetworkErrorState;
extern int ghidra_vftable_SCSecureRegistrationNewAccountIntroState;
extern int ghidra_vftable_SCSecureRegistrationNewAccountNetworkErrorState;
extern int ghidra_vftable_SCSecureRegistrationPasswordSetState;
extern int ghidra_vftable_SCSecureRegistrationResetPasswordEmailFailState;
extern int ghidra_vftable_SCSecureRegistrationResetPasswordFailState;
extern int ghidra_vftable_SCSecureRegistrationResetPasswordState;
extern int ghidra_vftable_SCSecureRegistrationResetPasswordSuccessOtherState;
extern int ghidra_vftable_SCSecureRegistrationState;
extern int ghidra_vftable_SCSecureRegistrationVerifyEmailErrorState;
extern int ghidra_vftable_SCSecureRegistrationVerifyEmailState;
extern int ghidra_vftable_SCSecureRegistrationVerifyEmailSubmitState;
extern int ghidra_vftable_SCSelectAlbumsSelectAction;
extern int ghidra_vftable_SCSetDateTimeActionBase;
extern int ghidra_vftable_SCSettingsMenuBrowse_EventSink;
extern int ghidra_vftable_SCShowUpdateMessageActionFactory;
extern int ghidra_vftable_SCSignOutActionFactory;
extern int ghidra_vftable_SCSimpleStringInput;
extern int ghidra_vftable_SCStrPropDelegate;
extern int ghidra_vftable_SCSwfObjHHListener;
extern int ghidra_vftable_SCSwfObjSPListener;
extern int ghidra_vftable_SCTimerUser;
extern int ghidra_vftable_SCToggleBooleanSettingActionBase;
extern int ghidra_vftable_SCUpdateMusicIndexAction;
extern int ghidra_vftable_SCUrlRequest;
extern int ghidra_vftable_SCVerifyEmailURLHandler;
extern int ghidra_vftable_SCViewContributingArtistsToggleAction;
extern int ghidra_vftable_SCVoiceServiceSetupWizardData_Data;
extern int ghidra_vftable_SCVoiceServiceStatusManager_EventSink;
extern int ghidra_vftable_SCWizard;
extern int ghidra_vftable_SCWizardState;
extern int ghidra_vftable_SCWizardStateFor;
extern int ghidra_vftable_SCXMLSecureExistingWizard;
extern int ghidra_vftable_SCXMLSecureRegistrationWizard;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_EAX;
extern int uRam12119d44;
extern int uRam12119d48;
extern int uRam12119d4c;
extern int uStack_14;
extern int uStack_4f0;
extern int uStack_8;
extern undefined1 LAB_10dc74f0[];
extern undefined1 LAB_10dc74f5[];
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_11587ed0[];
extern undefined1 LAB_115afdb0[];
extern undefined1 LAB_115b0050[];
extern undefined1 LAB_115d2530[];
extern undefined1 LAB_116c8cf6[];
extern undefined1 LAB_117190d0[];
extern undefined1 LAB_11719100[];
extern undefined1 LAB_11719130[];
extern undefined1 LAB_11719160[];
extern undefined1 LAB_1171b620[];
extern undefined1 LAB_1171ee20[];
extern undefined1 LAB_117205cd[];
extern undefined1 LAB_11728460[];
extern undefined1 LAB_1172a1a0[];
extern undefined1 LAB_1172bc40[];
extern undefined1 LAB_1175f183[];
extern undefined1 LAB_117c4308[];
extern undefined1 LAB_117c48e8[];
extern undefined1 LAB_117c4ae6[];
extern undefined1 LAB_11830ef0[];
extern int *PTR_vftable_12119d20;
extern int *PTR_vftable_12119d28;
extern void *ExceptionList;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d74640(int param_1);
template<class... A> int FUN_10d74640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d74650(int param_1);
template<class... A> int FUN_10d74650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d74660(int param_1);
template<class... A> int FUN_10d74660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d74670(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d74670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d74700(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d74700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d74790(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d74790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d751e0(undefined4 *param_1);
template<class... A> int FUN_10d751e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d755a0(undefined4 *param_1);
template<class... A> int FUN_10d755a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d75e50(int *param_1);
template<class... A> int FUN_10d75e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d75e60(int *param_1);
template<class... A> int FUN_10d75e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d75e70(int *param_1);
template<class... A> int FUN_10d75e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d75e80(undefined4 *param_1);
template<class... A> int FUN_10d75e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d75e90(int *param_1);
template<class... A> int FUN_10d75e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d75ea0(int param_1);
template<class... A> int FUN_10d75ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d75eb0(int param_1);
template<class... A> int FUN_10d75eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d75ec0(int param_1);
template<class... A> int FUN_10d75ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d75ed0(int param_1);
template<class... A> int FUN_10d75ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d75ee0(int param_1);
template<class... A> int FUN_10d75ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d75ef0(int param_1);
template<class... A> int FUN_10d75ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d75f00(undefined4 *param_1);
template<class... A> int FUN_10d75f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d765c0(int param_1);
template<class... A> int FUN_10d765c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d765d0(int param_1);
template<class... A> int FUN_10d765d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d765e0(int param_1);
template<class... A> int FUN_10d765e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d765f0(int param_1);
template<class... A> int FUN_10d765f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d76600(int param_1);
template<class... A> int FUN_10d76600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d76610(int param_1);
template<class... A> int FUN_10d76610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d76620(int param_1);
template<class... A> int FUN_10d76620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d76630(int param_1);
template<class... A> int FUN_10d76630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d76640(int param_1);
template<class... A> int FUN_10d76640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d77d60(undefined4 *param_1);
template<class... A> int FUN_10d77d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d77d80(undefined4 *param_1);
template<class... A> int FUN_10d77d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d77da0(undefined4 *param_1);
template<class... A> int FUN_10d77da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d77ef0(int param_1);
template<class... A> int FUN_10d77ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d77f00(int param_1);
template<class... A> int FUN_10d77f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d77f10(int param_1);
template<class... A> int FUN_10d77f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d798e0(int *param_1);
template<class... A> int FUN_10d798e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d7a3b0(undefined4 *param_1);
template<class... A> int FUN_10d7a3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d7a440(undefined4 *param_1);
template<class... A> int FUN_10d7a440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d7a470(undefined4 *param_1);
template<class... A> int FUN_10d7a470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d7ca50(undefined4 *param_1);
template<class... A> int FUN_10d7ca50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d7ca70(undefined4 *param_1);
template<class... A> int FUN_10d7ca70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d7d080(undefined4 *param_1);
template<class... A> int FUN_10d7d080(A...);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_10d80690(undefined4 *param_1);
/* WARNING: Removing unreachable block_10d806a0 (ram,0x101ba14a) */ void __fastcall FUN_10d806a0(undefined4 *param_1);
/* WARNING: Removing unreachable block_10d806b0 (ram,0x101ba14a) */ void __fastcall FUN_10d806b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d81a60(undefined4 *param_1);
template<class... A> int FUN_10d81a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d81a80(undefined4 *param_1);
template<class... A> int FUN_10d81a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d81a90(undefined4 *param_1);
template<class... A> int FUN_10d81a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d81aa0(undefined4 *param_1);
template<class... A> int FUN_10d81aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d81ab0(undefined4 *param_1);
template<class... A> int FUN_10d81ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d81bf0(undefined4 *param_1);
template<class... A> int FUN_10d81bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d81c00(undefined4 *param_1);
template<class... A> int FUN_10d81c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d81c20(undefined4 *param_1);
template<class... A> int FUN_10d81c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d81c40(undefined4 *param_1);
template<class... A> int FUN_10d81c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d81c60(undefined4 *param_1);
template<class... A> int FUN_10d81c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d82240(int *param_1);
template<class... A> int FUN_10d82240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d82250(int param_1);
template<class... A> int FUN_10d82250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d82260(int param_1);
template<class... A> int FUN_10d82260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d82270(int param_1);
template<class... A> int FUN_10d82270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d82280(int param_1);
template<class... A> int FUN_10d82280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d82290(undefined4 *param_1);
template<class... A> int FUN_10d82290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d83530(int param_1);
template<class... A> int FUN_10d83530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d83540(int param_1);
template<class... A> int FUN_10d83540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d83550(int param_1);
template<class... A> int FUN_10d83550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d835c0(int param_1);
template<class... A> int FUN_10d835c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d83670(int param_1);
template<class... A> int FUN_10d83670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d83680(int param_1);
template<class... A> int FUN_10d83680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d83690(int param_1);
template<class... A> int FUN_10d83690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d836d0(int param_1);
template<class... A> int FUN_10d836d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d836f0(int param_1);
template<class... A> int FUN_10d836f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d83700(int param_1);
template<class... A> int FUN_10d83700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d83710(int param_1);
template<class... A> int FUN_10d83710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d83720(int param_1);
template<class... A> int FUN_10d83720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d83950(int param_1);
template<class... A> int FUN_10d83950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d83960(int param_1);
template<class... A> int FUN_10d83960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d83970(int param_1);
template<class... A> int FUN_10d83970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d839e0(int param_1);
template<class... A> int FUN_10d839e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d839f0(int param_1);
template<class... A> int FUN_10d839f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d83a00(int param_1);
template<class... A> int FUN_10d83a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d83ac0(int param_1);
template<class... A> int FUN_10d83ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d83ae0(int param_1);
template<class... A> int FUN_10d83ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d83af0(int param_1);
template<class... A> int FUN_10d83af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d83b00(int param_1);
template<class... A> int FUN_10d83b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d83b70(int param_1);
template<class... A> int FUN_10d83b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d83b80(int param_1);
template<class... A> int FUN_10d83b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d86d20(undefined4 *param_1);
template<class... A> int FUN_10d86d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d86d30(undefined4 *param_1);
template<class... A> int FUN_10d86d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d86d40(undefined4 *param_1);
template<class... A> int FUN_10d86d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d86d50(undefined4 *param_1);
template<class... A> int FUN_10d86d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d86d60(undefined4 *param_1);
template<class... A> int FUN_10d86d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d86d70(undefined4 *param_1);
template<class... A> int FUN_10d86d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d86d80(undefined4 *param_1);
template<class... A> int FUN_10d86d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d86d90(undefined4 *param_1);
template<class... A> int FUN_10d86d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d86da0(undefined4 *param_1);
template<class... A> int FUN_10d86da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d86db0(undefined4 *param_1);
template<class... A> int FUN_10d86db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d86dc0(undefined4 *param_1);
template<class... A> int FUN_10d86dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d87050(undefined4 *param_1);
template<class... A> int FUN_10d87050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d87080(undefined4 *param_1);
template<class... A> int FUN_10d87080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d870b0(undefined4 *param_1);
template<class... A> int FUN_10d870b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d870e0(undefined4 *param_1);
template<class... A> int FUN_10d870e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d87110(undefined4 *param_1);
template<class... A> int FUN_10d87110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d87140(undefined4 *param_1);
template<class... A> int FUN_10d87140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d87170(undefined4 *param_1);
template<class... A> int FUN_10d87170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d871a0(undefined4 *param_1);
template<class... A> int FUN_10d871a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d871d0(undefined4 *param_1);
template<class... A> int FUN_10d871d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d87200(undefined4 *param_1);
template<class... A> int FUN_10d87200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10d87410(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10d87410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d87c10(void);
template<class... A> int FUN_10d87c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d87e60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10d87e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d87e70(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10d87e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d87e80(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10d87e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d87e90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10d87e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d87ea0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10d87ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d88040(undefined4 *param_1);
template<class... A> int FUN_10d88040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d880a0(undefined4 *param_1);
template<class... A> int FUN_10d880a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d889a0(undefined4 *param_1);
template<class... A> int FUN_10d889a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d88c80(undefined4 *param_1);
template<class... A> int FUN_10d88c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d88c90(undefined4 *param_1);
template<class... A> int FUN_10d88c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d88ca0(undefined4 *param_1);
template<class... A> int FUN_10d88ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d88cb0(undefined4 *param_1);
template<class... A> int FUN_10d88cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d89120(int param_1);
template<class... A> int FUN_10d89120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d892d0(undefined4 *param_1);
template<class... A> int FUN_10d892d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d892e0(undefined4 *param_1);
template<class... A> int FUN_10d892e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d892f0(undefined4 *param_1);
template<class... A> int FUN_10d892f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d89380(undefined4 *param_1);
template<class... A> int FUN_10d89380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d893b0(undefined4 *param_1);
template<class... A> int FUN_10d893b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d89620(undefined4 *param_1);
template<class... A> int FUN_10d89620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d8ada0(undefined4 *param_1);
template<class... A> int FUN_10d8ada0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d8adc0(undefined4 *param_1);
template<class... A> int FUN_10d8adc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d8ae00(undefined4 *param_1);
template<class... A> int FUN_10d8ae00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d8bef0(void);
template<class... A> int FUN_10d8bef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d8cd60(undefined4 *param_1);
template<class... A> int FUN_10d8cd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d8ce20(undefined4 *param_1);
template<class... A> int FUN_10d8ce20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d8d120(int *param_1);
template<class... A> int FUN_10d8d120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d8d130(int *param_1);
template<class... A> int FUN_10d8d130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d8d140(undefined4 *param_1);
template<class... A> int FUN_10d8d140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d8d150(undefined4 *param_1);
template<class... A> int FUN_10d8d150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d8d160(undefined4 *param_1);
template<class... A> int FUN_10d8d160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d90100(void);
template<class... A> int FUN_10d90100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d90110(undefined4 *param_1);
template<class... A> int FUN_10d90110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d905f0(int *param_1);
template<class... A> int FUN_10d905f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d90610(int *param_1);
template<class... A> int FUN_10d90610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d90a00(undefined4 *param_1);
template<class... A> int FUN_10d90a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d91bc0(undefined4 *param_1);
template<class... A> int FUN_10d91bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d941d0(undefined4 *param_1);
template<class... A> int FUN_10d941d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d94560(undefined4 *param_1);
template<class... A> int FUN_10d94560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d94640(undefined4 *param_1);
template<class... A> int FUN_10d94640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d94650(undefined4 *param_1);
template<class... A> int FUN_10d94650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d94660(undefined4 *param_1);
template<class... A> int FUN_10d94660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d97120(int *param_1);
template<class... A> int FUN_10d97120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d971e0(undefined4 *param_1);
template<class... A> int FUN_10d971e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d971f0(undefined4 *param_1);
template<class... A> int FUN_10d971f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d97200(undefined4 *param_1);
template<class... A> int FUN_10d97200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d97290(undefined4 *param_1);
template<class... A> int FUN_10d97290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d972c0(undefined4 *param_1);
template<class... A> int FUN_10d972c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d972f0(undefined4 *param_1);
template<class... A> int FUN_10d972f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d97360(undefined4 *param_1);
template<class... A> int FUN_10d97360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d974a0(undefined4 *param_1);
template<class... A> int FUN_10d974a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d97720(int *param_1);
template<class... A> int FUN_10d97720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d97730(undefined4 *param_1);
template<class... A> int FUN_10d97730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d97740(undefined4 *param_1);
template<class... A> int FUN_10d97740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d97750(undefined4 *param_1);
template<class... A> int FUN_10d97750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d98760(int param_1);
template<class... A> int FUN_10d98760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d9a3e0(undefined4 *param_1);
template<class... A> int FUN_10d9a3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d9a3f0(undefined4 *param_1);
template<class... A> int FUN_10d9a3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d9aa70(void);
template<class... A> int FUN_10d9aa70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d9aa80(void);
template<class... A> int FUN_10d9aa80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d9ab20(undefined4 *param_1);
template<class... A> int FUN_10d9ab20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d9acf0(undefined4 *param_1);
template<class... A> int FUN_10d9acf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d9ad10(undefined4 *param_1);
template<class... A> int FUN_10d9ad10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d9ad50(undefined4 *param_1);
template<class... A> int FUN_10d9ad50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d9b7c0(undefined4 *param_1);
template<class... A> int FUN_10d9b7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d9bbd0(undefined4 *param_1);
template<class... A> int FUN_10d9bbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d9bbe0(undefined4 *param_1);
template<class... A> int FUN_10d9bbe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d9bbf0(undefined4 *param_1);
template<class... A> int FUN_10d9bbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d9bc10(undefined4 *param_1);
template<class... A> int FUN_10d9bc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d9bc30(undefined4 *param_1);
template<class... A> int FUN_10d9bc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d9bc50(undefined4 *param_1);
template<class... A> int FUN_10d9bc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d9bd20(undefined4 *param_1);
template<class... A> int FUN_10d9bd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d9bdb0(undefined4 *param_1);
template<class... A> int FUN_10d9bdb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d9bdc0(undefined4 *param_1);
template<class... A> int FUN_10d9bdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d9bdd0(undefined4 *param_1);
template<class... A> int FUN_10d9bdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d9c740(undefined4 *param_1);
template<class... A> int FUN_10d9c740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d9d940(void);
template<class... A> int FUN_10d9d940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d9d950(void);
template<class... A> int FUN_10d9d950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d9dec0(undefined4 *param_1);
template<class... A> int FUN_10d9dec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d9e070(undefined4 *param_1);
template<class... A> int FUN_10d9e070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d9e0a0(undefined4 *param_1);
template<class... A> int FUN_10d9e0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d9e0d0(int *param_1);
template<class... A> int FUN_10d9e0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d9e270(undefined4 *param_1);
template<class... A> int FUN_10d9e270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d9e4a0(undefined4 *param_1);
template<class... A> int FUN_10d9e4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d9e730(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d9e730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d9e750(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10d9e750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d9ead0(void);
template<class... A> int FUN_10d9ead0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d9eae0(void);
template<class... A> int FUN_10d9eae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d9eaf0(void);
template<class... A> int FUN_10d9eaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d9eb10(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10d9eb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d9eb20(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10d9eb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d9eb30(void);
template<class... A> int FUN_10d9eb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d9f030(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10d9f030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d9f0d0(undefined4 *param_1);
template<class... A> int FUN_10d9f0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d9f0e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10d9f0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d9f0f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10d9f0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d9f100(undefined4 param_1);
template<class... A> int FUN_10d9f100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10d9f110(int param_1,uint *param_2);
template<class... A> int FUN_10d9f110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d9f140(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10d9f140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d9f150(undefined4 param_1);
template<class... A> int FUN_10d9f150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d9f160(undefined4 param_1);
template<class... A> int FUN_10d9f160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d9f170(undefined4 param_1);
template<class... A> int FUN_10d9f170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d9f180(undefined4 param_1);
template<class... A> int FUN_10d9f180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d9f190(undefined4 param_1);
template<class... A> int FUN_10d9f190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d9f1a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10d9f1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d9f230(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10d9f230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d9f250(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10d9f250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d9f360(undefined4 param_1);
template<class... A> int FUN_10d9f360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d9f370(undefined4 param_1);
template<class... A> int FUN_10d9f370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d9f380(undefined4 param_1);
template<class... A> int FUN_10d9f380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d9f390(undefined4 param_1);
template<class... A> int FUN_10d9f390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d9f3a0(undefined4 param_1);
template<class... A> int FUN_10d9f3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d9f630(undefined4 *param_1);
template<class... A> int FUN_10d9f630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d9f650(undefined4 param_1);
template<class... A> int FUN_10d9f650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d9fc70(int *param_1);
template<class... A> int FUN_10d9fc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d9fc80(int *param_1);
template<class... A> int FUN_10d9fc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d9fc90(int *param_1);
template<class... A> int FUN_10d9fc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d9fca0(int *param_1);
template<class... A> int FUN_10d9fca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d9fcb0(int *param_1);
template<class... A> int FUN_10d9fcb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10da0080(undefined4 *param_1);
template<class... A> int FUN_10da0080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10da00d0(int param_1);
template<class... A> int FUN_10da00d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10da00f0(undefined4 param_1);
template<class... A> int FUN_10da00f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da0100(undefined4 param_1);
template<class... A> int FUN_10da0100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da0110(undefined4 param_1);
template<class... A> int FUN_10da0110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da0120(undefined4 param_1);
template<class... A> int FUN_10da0120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da0130(undefined4 param_1);
template<class... A> int FUN_10da0130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da0140(undefined4 param_1);
template<class... A> int FUN_10da0140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da0150(undefined4 param_1);
template<class... A> int FUN_10da0150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da0160(undefined4 param_1);
template<class... A> int FUN_10da0160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da0170(undefined4 param_1);
template<class... A> int FUN_10da0170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10da0480(int param_1);
template<class... A> int FUN_10da0480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10da04b0(int *param_1);
template<class... A> int FUN_10da04b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da04e0(int param_1);
template<class... A> int FUN_10da04e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10da0580(uint param_1);
template<class... A> int FUN_10da0580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da06f0(undefined4 *param_1);
template<class... A> int FUN_10da06f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10da0710(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10da0710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10da0760(int param_1,int param_2);
template<class... A> int FUN_10da0760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da07d0(int param_1);
template<class... A> int FUN_10da07d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10da1860(void);
template<class... A> int FUN_10da1860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10da1c10(int *param_1);
template<class... A> int FUN_10da1c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10da1f20(void);
template<class... A> int FUN_10da1f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10da1f30(void);
template<class... A> int FUN_10da1f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10da1f40(undefined4 param_1);
template<class... A> int FUN_10da1f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10da1f50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10da1f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10da1fd0(undefined4 *param_1);
template<class... A> int FUN_10da1fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10da2050(undefined4 *param_1);
template<class... A> int FUN_10da2050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da2070(undefined4 param_1);
template<class... A> int FUN_10da2070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10da2080(undefined4 *param_1);
template<class... A> int FUN_10da2080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10da20e0(undefined4 *param_1);
template<class... A> int FUN_10da20e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10da2350(undefined4 *param_1);
template<class... A> int FUN_10da2350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da2520(undefined4 *param_1);
template<class... A> int FUN_10da2520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da2530(undefined4 *param_1);
template<class... A> int FUN_10da2530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da3370(undefined4 *param_1);
template<class... A> int FUN_10da3370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da3380(undefined4 *param_1);
template<class... A> int FUN_10da3380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da3390(undefined4 *param_1);
template<class... A> int FUN_10da3390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da33a0(undefined4 *param_1);
template<class... A> int FUN_10da33a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10da34b0(undefined4 *param_1);
template<class... A> int FUN_10da34b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10da3ee0(int param_1);
template<class... A> int FUN_10da3ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10da4150(int param_1);
template<class... A> int FUN_10da4150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10da4160(int param_1,undefined4 *param_2,undefined4 param_3);
template<class... A> int FUN_10da4160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10da4360(int param_1);
template<class... A> int FUN_10da4360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10da4370(undefined4 param_1);
template<class... A> int FUN_10da4370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10da4380(undefined4 param_1);
template<class... A> int FUN_10da4380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10da4390(undefined4 param_1);
template<class... A> int FUN_10da4390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10da43a0(undefined4 param_1);
template<class... A> int FUN_10da43a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10da43b0(void);
template<class... A> int FUN_10da43b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10da43c0(void);
template<class... A> int FUN_10da43c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10da43d0(void);
template<class... A> int FUN_10da43d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10da43e0(int param_1,undefined4 *param_2,undefined4 param_3);
template<class... A> int FUN_10da43e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10da4420(undefined4 param_1);
template<class... A> int FUN_10da4420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10da46d0(undefined4 *param_1);
template<class... A> int FUN_10da46d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da47f0(undefined4 param_1);
template<class... A> int FUN_10da47f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10da4800(int param_1);
template<class... A> int FUN_10da4800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 * __fastcall FUN_10da49c0(undefined8 *param_1);
template<class... A> int FUN_10da49c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10da4dc0(undefined4 *param_1);
template<class... A> int FUN_10da4dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10da4dd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10da4dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10da4de0(undefined4 *param_1);
template<class... A> int FUN_10da4de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10da5070(int param_1);
template<class... A> int FUN_10da5070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10da50d0(undefined4 *param_1);
template<class... A> int FUN_10da50d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10da50f0(undefined4 *param_1);
template<class... A> int FUN_10da50f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10da5120(undefined4 *param_1);
template<class... A> int FUN_10da5120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10da5150(undefined4 *param_1);
template<class... A> int FUN_10da5150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10da5180(undefined4 *param_1);
template<class... A> int FUN_10da5180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10da5290(undefined4 *param_1);
template<class... A> int FUN_10da5290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10da52a0(undefined4 *param_1);
template<class... A> int FUN_10da52a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10da5370(int *param_1);
template<class... A> int FUN_10da5370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da53b0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10da53b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da5460(undefined4 *param_1);
template<class... A> int FUN_10da5460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da5470(undefined4 *param_1);
template<class... A> int FUN_10da5470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10da5480(int param_1);
template<class... A> int FUN_10da5480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10da5490(int param_1);
template<class... A> int FUN_10da5490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10da5b40(void);
template<class... A> int FUN_10da5b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10da5c80(int param_1);
template<class... A> int FUN_10da5c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da5ca0(int param_1);
template<class... A> int FUN_10da5ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10da5cb0(int param_1);
template<class... A> int FUN_10da5cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __stdcall FUN_10da68b0(SCStr *param_1);
template<class... A> int FUN_10da68b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10da68d0(int param_1);
template<class... A> int FUN_10da68d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10da6b60(int param_1);
template<class... A> int FUN_10da6b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10da73c0(void);
template<class... A> int FUN_10da73c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da7520(undefined4 *param_1);
template<class... A> int FUN_10da7520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da7530(undefined4 *param_1);
template<class... A> int FUN_10da7530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10da7800(undefined4 *param_1);
template<class... A> int FUN_10da7800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10da7830(undefined4 *param_1);
template<class... A> int FUN_10da7830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10da7e50(undefined4 *param_1);
template<class... A> int FUN_10da7e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da8110(undefined4 *param_1);
template<class... A> int FUN_10da8110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da8120(undefined4 *param_1);
template<class... A> int FUN_10da8120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10da8cc0(int *param_1);
template<class... A> int FUN_10da8cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10da8cd0(undefined4 *param_1);
template<class... A> int FUN_10da8cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10da8ce0(undefined4 *param_1);
template<class... A> int FUN_10da8ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10da8e90(undefined4 *param_1);
template<class... A> int FUN_10da8e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10da8ed0(int param_1);
template<class... A> int FUN_10da8ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10da8ee0(int param_1);
template<class... A> int FUN_10da8ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10da94e0(int param_1);
template<class... A> int FUN_10da94e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10da94f0(int param_1);
template<class... A> int FUN_10da94f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10da97a0(void);
template<class... A> int FUN_10da97a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10da97b0(int param_1);
template<class... A> int FUN_10da97b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10da97c0(int param_1);
template<class... A> int FUN_10da97c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10da9a60(int param_1);
template<class... A> int FUN_10da9a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte __fastcall FUN_10da9a70(int param_1);
template<class... A> int FUN_10da9a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10da9de0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10da9de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10da9fe0(undefined4 *param_1);
template<class... A> int FUN_10da9fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10da9ff0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10da9ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10daa020(undefined4 param_1);
template<class... A> int FUN_10daa020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10daa030(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10daa030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10daa060(undefined4 param_1);
template<class... A> int FUN_10daa060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10daa0a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10daa0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10daa0b0(void);
template<class... A> int FUN_10daa0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10daa0f0(undefined4 param_1);
template<class... A> int FUN_10daa0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10daa100(undefined4 param_1);
template<class... A> int FUN_10daa100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10daa6e0(undefined4 *param_1);
template<class... A> int FUN_10daa6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10daa730(undefined4 *param_1);
template<class... A> int FUN_10daa730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10daa740(int *param_1);
template<class... A> int FUN_10daa740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10daa750(undefined4 *param_1);
template<class... A> int FUN_10daa750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10daa760(undefined4 *param_1);
template<class... A> int FUN_10daa760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10daa770(undefined4 *param_1);
template<class... A> int FUN_10daa770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10daa780(int *param_1);
template<class... A> int FUN_10daa780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10daa790(int *param_1);
template<class... A> int FUN_10daa790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10daa880(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10daa880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10daa890(undefined4 param_1);
template<class... A> int FUN_10daa890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10daa8a0(undefined4 param_1);
template<class... A> int FUN_10daa8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10daa8b0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10daa8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10daa8c0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10daa8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10daa8f0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10daa8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10daa920(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10daa920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10daa960(int param_1);
template<class... A> int FUN_10daa960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10daa970(int param_1);
template<class... A> int FUN_10daa970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10daa9c0(uint param_1);
template<class... A> int FUN_10daa9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10daab90(int *param_1);
template<class... A> int FUN_10daab90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10daaba0(int param_1);
template<class... A> int FUN_10daaba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dab3d0(int *param_1);
template<class... A> int FUN_10dab3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10dab490(undefined4 param_1);
template<class... A> int FUN_10dab490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dac930(void);
template<class... A> int FUN_10dac930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dac940(void);
template<class... A> int FUN_10dac940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dadc30(undefined4 *param_1);
template<class... A> int FUN_10dadc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dadc70(int *param_1);
template<class... A> int FUN_10dadc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10dadd60(int *param_1);
template<class... A> int FUN_10dadd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10db1e20(uint param_1,uint param_2);
template<class... A> int FUN_10db1e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10db1fe0(int param_1);
template<class... A> int FUN_10db1fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10db2980(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10db2980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10db2990(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10db2990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db2a60(undefined4 param_1);
template<class... A> int FUN_10db2a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db2a70(undefined4 param_1);
template<class... A> int FUN_10db2a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10db2a80(int param_1,uint *param_2);
template<class... A> int FUN_10db2a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10db2ab0(int param_1,uint *param_2);
template<class... A> int FUN_10db2ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db2f20(undefined4 *param_1);
template<class... A> int FUN_10db2f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db2f30(undefined4 *param_1);
template<class... A> int FUN_10db2f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db2f40(undefined4 param_1);
template<class... A> int FUN_10db2f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db2f50(undefined4 param_1);
template<class... A> int FUN_10db2f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10db2f60(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10db2f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10db2f80(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10db2f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10db2fa0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10db2fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10db2fc0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10db2fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db2fe0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10db2fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db3000(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10db3000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db3020(undefined4 param_1);
template<class... A> int FUN_10db3020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db3030(undefined4 param_1);
template<class... A> int FUN_10db3030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db3040(undefined4 param_1);
template<class... A> int FUN_10db3040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db3050(undefined4 param_1);
template<class... A> int FUN_10db3050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db3060(undefined4 param_1);
template<class... A> int FUN_10db3060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db3070(undefined4 param_1);
template<class... A> int FUN_10db3070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db3080(undefined4 param_1);
template<class... A> int FUN_10db3080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db3090(undefined4 param_1);
template<class... A> int FUN_10db3090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10db30a0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10db30a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10db30b0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10db30b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db30c0(undefined4 param_1);
template<class... A> int FUN_10db30c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db30d0(undefined4 param_1);
template<class... A> int FUN_10db30d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db30e0(undefined4 param_1);
template<class... A> int FUN_10db30e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10db3290(int param_1);
template<class... A> int FUN_10db3290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10db3340(int param_1);
template<class... A> int FUN_10db3340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10db3360(int param_1);
template<class... A> int FUN_10db3360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10db3740(int *param_1,int *param_2);
template<class... A> int FUN_10db3740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10db37a0(int param_1);
template<class... A> int FUN_10db37a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10db37c0(int param_1);
template<class... A> int FUN_10db37c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10db37e0(undefined4 param_1);
template<class... A> int FUN_10db37e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10db37f0(undefined4 param_1);
template<class... A> int FUN_10db37f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10db3800(undefined4 param_1);
template<class... A> int FUN_10db3800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10db3810(undefined4 param_1);
template<class... A> int FUN_10db3810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10db3820(undefined4 param_1);
template<class... A> int FUN_10db3820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10db3830(undefined4 param_1);
template<class... A> int FUN_10db3830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10db3840(undefined4 param_1);
template<class... A> int FUN_10db3840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10db3850(undefined4 param_1);
template<class... A> int FUN_10db3850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10db3860(undefined4 param_1);
template<class... A> int FUN_10db3860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10db3870(undefined4 param_1);
template<class... A> int FUN_10db3870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10db3e80(int param_1);
template<class... A> int FUN_10db3e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10db3e90(int param_1);
template<class... A> int FUN_10db3e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10db4870(int param_1);
template<class... A> int FUN_10db4870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10db4880(int param_1,int param_2);
template<class... A> int FUN_10db4880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10db48d0(int param_1,int param_2);
template<class... A> int FUN_10db48d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_10db4c60(SCStr *param_1,undefined4 param_2);
template<class... A> int FUN_10db4c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10db5610(int *param_1);
template<class... A> int FUN_10db5610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db5630(void);
template<class... A> int FUN_10db5630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db5640(void);
template<class... A> int FUN_10db5640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db5650(void);
template<class... A> int FUN_10db5650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db5660(void);
template<class... A> int FUN_10db5660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10db5690(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10db5690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db5750(undefined4 param_1);
template<class... A> int FUN_10db5750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db5d70(undefined4 *param_1);
template<class... A> int FUN_10db5d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_10db5d80(SCStr *param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_10db5d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_10db5e30(int *param_1,int *param_2,SCStr *param_3);
template<class... A> int FUN_10db5e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db5ee0(undefined4 param_1);
template<class... A> int FUN_10db5ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db60d0(undefined4 param_1);
template<class... A> int FUN_10db60d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db60e0(undefined4 param_1);
template<class... A> int FUN_10db60e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db6660(undefined4 param_1);
template<class... A> int FUN_10db6660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db6670(undefined4 param_1);
template<class... A> int FUN_10db6670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db6680(undefined4 param_1);
template<class... A> int FUN_10db6680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10db6690(undefined4 param_1);
template<class... A> int FUN_10db6690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10db66a0(undefined4 *param_1);
template<class... A> int FUN_10db66a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10db66c0(undefined4 *param_1);
template<class... A> int FUN_10db66c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10db6750(undefined4 *param_1);
template<class... A> int FUN_10db6750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10db6770(undefined4 *param_1);
template<class... A> int FUN_10db6770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10db6780(undefined4 *param_1);
template<class... A> int FUN_10db6780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10db67a0(undefined4 param_1);
template<class... A> int FUN_10db67a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10db67b0(undefined4 *param_1);
template<class... A> int FUN_10db67b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10db69e0(undefined4 *param_1);
template<class... A> int FUN_10db69e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10db6b10(undefined4 *param_1);
template<class... A> int FUN_10db6b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10db6c40(undefined4 *param_1);
template<class... A> int FUN_10db6c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10db80b0(undefined4 *param_1);
template<class... A> int FUN_10db80b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10db80d0(undefined4 *param_1);
template<class... A> int FUN_10db80d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10db8f20(undefined4 *param_1);
template<class... A> int FUN_10db8f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10db8f30(undefined4 *param_1);
template<class... A> int FUN_10db8f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10db8f40(int *param_1);
template<class... A> int FUN_10db8f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10db8f50(undefined4 *param_1);
template<class... A> int FUN_10db8f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10db8f60(undefined4 *param_1);
template<class... A> int FUN_10db8f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10db8f70(undefined4 *param_1);
template<class... A> int FUN_10db8f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10db8f80(undefined4 *param_1);
template<class... A> int FUN_10db8f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10db8f90(int *param_1);
template<class... A> int FUN_10db8f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10db8fa0(int *param_1);
template<class... A> int FUN_10db8fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10db99b0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10db99b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10db99e0(undefined4 param_1);
template<class... A> int FUN_10db99e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10db99f0(undefined4 param_1);
template<class... A> int FUN_10db99f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10db9a00(undefined4 param_1);
template<class... A> int FUN_10db9a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10db9a10(undefined4 param_1);
template<class... A> int FUN_10db9a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10db9a20(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10db9a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10db9a30(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10db9a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10db9a40(undefined4 *param_1);
template<class... A> int FUN_10db9a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10db9dc0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10db9dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10dba3f0(uint param_1);
template<class... A> int FUN_10dba3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10dbc200(uint *param_1);
template<class... A> int FUN_10dbc200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10dbc210(uint *param_1);
template<class... A> int FUN_10dbc210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10dbc220(int *param_1);
template<class... A> int FUN_10dbc220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10dc3df0(int param_1);
template<class... A> int FUN_10dc3df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dc3e20(int param_1);
template<class... A> int FUN_10dc3e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dc5650(int param_1);
template<class... A> int FUN_10dc5650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dc5660(int param_1);
template<class... A> int FUN_10dc5660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dc5710(int param_1);
template<class... A> int FUN_10dc5710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dc5950(int param_1);
template<class... A> int FUN_10dc5950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dc5960(int param_1);
template<class... A> int FUN_10dc5960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dc5c10(int param_1);
template<class... A> int FUN_10dc5c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10dc5cf0(int param_1);
template<class... A> int FUN_10dc5cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dc5d00(int param_1);
template<class... A> int FUN_10dc5d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dc5d20(int param_1);
template<class... A> int FUN_10dc5d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dc5d30(int param_1);
template<class... A> int FUN_10dc5d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_10dc5dc0(int param_1);
template<class... A> int FUN_10dc5dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10dc5f20(int param_1);
template<class... A> int FUN_10dc5f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dc73c0(int param_1);
template<class... A> int FUN_10dc73c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10dc73e0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10dc73e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dc7520(void);
template<class... A> int FUN_10dc7520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dc7530(void);
template<class... A> int FUN_10dc7530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dc75f0(undefined4 *param_1);
template<class... A> int FUN_10dc75f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dc7730(int param_1);
template<class... A> int FUN_10dc7730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10dc7760(int param_1);
template<class... A> int FUN_10dc7760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10dc9780(int param_1);
template<class... A> int FUN_10dc9780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10dc9790(int param_1);
template<class... A> int FUN_10dc9790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dcbdb0(int param_1);
template<class... A> int FUN_10dcbdb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dcbdf0(int param_1);
template<class... A> int FUN_10dcbdf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dcdee0(char *param_1);
template<class... A> int FUN_10dcdee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10dcdef0(void);
template<class... A> int FUN_10dcdef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dcdf00(undefined4 *param_1);
template<class... A> int FUN_10dcdf00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dce020(undefined4 *param_1);
template<class... A> int FUN_10dce020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dce040(undefined4 *param_1);
template<class... A> int FUN_10dce040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dce1d0(undefined4 *param_1);
template<class... A> int FUN_10dce1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10dcef50(void);
template<class... A> int FUN_10dcef50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dcfb50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10dcfb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dcfb80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10dcfb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dcfba0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10dcfba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dcfbb0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10dcfbb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dcfc40(void);
template<class... A> int FUN_10dcfc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10dcfc50(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10dcfc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10dcfc80(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10dcfc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dcfcb0(void);
template<class... A> int FUN_10dcfcb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dcfcc0(void);
template<class... A> int FUN_10dcfcc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dcfcd0(void);
template<class... A> int FUN_10dcfcd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dcff70(undefined4 *param_1);
template<class... A> int FUN_10dcff70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dcff80(undefined4 *param_1);
template<class... A> int FUN_10dcff80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dcff90(undefined4 *param_1);
template<class... A> int FUN_10dcff90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10dcffa0(int *param_1,int *param_2);
template<class... A> int FUN_10dcffa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10dcffc0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10dcffc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_10dcfff0(undefined4 *param_1,undefined4 param_2,int param_3);
template<class... A> int FUN_10dcfff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd0010(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10dd0010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd0020(undefined4 param_1);
template<class... A> int FUN_10dd0020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd0030(undefined4 param_1);
template<class... A> int FUN_10dd0030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10dd0040(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10dd0040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10dd0070(void *param_1,int param_2);
template<class... A> int FUN_10dd0070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10dd00a0(void *param_1,int param_2);
template<class... A> int FUN_10dd00a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd00d0(undefined4 param_1);
template<class... A> int FUN_10dd00d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd00e0(undefined4 param_1);
template<class... A> int FUN_10dd00e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd00f0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10dd00f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd0100(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10dd0100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd0120(void);
template<class... A> int FUN_10dd0120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd0130(void);
template<class... A> int FUN_10dd0130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd0180(undefined4 param_1);
template<class... A> int FUN_10dd0180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd0190(undefined4 param_1);
template<class... A> int FUN_10dd0190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd01a0(undefined4 param_1);
template<class... A> int FUN_10dd01a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd01b0(undefined4 param_1);
template<class... A> int FUN_10dd01b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10dd01c0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10dd01c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dd01f0(undefined4 *param_1);
template<class... A> int FUN_10dd01f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dd0240(undefined4 *param_1);
template<class... A> int FUN_10dd0240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dd0270(undefined4 *param_1);
template<class... A> int FUN_10dd0270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dd02d0(undefined4 *param_1);
template<class... A> int FUN_10dd02d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dd03d0(undefined4 *param_1);
template<class... A> int FUN_10dd03d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dd0420(undefined4 *param_1);
template<class... A> int FUN_10dd0420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd0440(undefined4 param_1);
template<class... A> int FUN_10dd0440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd0450(undefined4 param_1);
template<class... A> int FUN_10dd0450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dd0540(undefined4 *param_1);
template<class... A> int FUN_10dd0540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dd0600(undefined4 *param_1);
template<class... A> int FUN_10dd0600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dd1330(undefined4 *param_1);
template<class... A> int FUN_10dd1330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dd1430(undefined4 *param_1);
template<class... A> int FUN_10dd1430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd1860(undefined4 *param_1);
template<class... A> int FUN_10dd1860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10dd1870(int *param_1);
template<class... A> int FUN_10dd1870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd1880(undefined4 *param_1);
template<class... A> int FUN_10dd1880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10dd1890(int *param_1);
template<class... A> int FUN_10dd1890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10dd18c0(int param_1);
template<class... A> int FUN_10dd18c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void  __stdcall FUN_10dd1b70(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10dd1b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd1b80(undefined4 param_1);
template<class... A> int FUN_10dd1b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd1b90(undefined4 param_1);
template<class... A> int FUN_10dd1b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd1ba0(undefined4 param_1);
template<class... A> int FUN_10dd1ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd1bb0(undefined4 param_1);
template<class... A> int FUN_10dd1bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd1bc0(undefined4 param_1);
template<class... A> int FUN_10dd1bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd1bd0(undefined4 param_1);
template<class... A> int FUN_10dd1bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd1be0(undefined4 param_1);
template<class... A> int FUN_10dd1be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd1bf0(undefined4 param_1);
template<class... A> int FUN_10dd1bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd1c00(undefined4 param_1);
template<class... A> int FUN_10dd1c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10dd1e30(int param_1);
template<class... A> int FUN_10dd1e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10dd1e40(int param_1);
template<class... A> int FUN_10dd1e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10dd1e50(int param_1);
template<class... A> int FUN_10dd1e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10dd1e60(int param_1);
template<class... A> int FUN_10dd1e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd1e70(void);
template<class... A> int FUN_10dd1e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10dd1e80(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10dd1e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dd1e90(int param_1);
template<class... A> int FUN_10dd1e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10dd1fb0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10dd1fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10dd1fe0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10dd1fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10dd2010(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10dd2010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10dd2060(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10dd2060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10dd20e0(uint param_1);
template<class... A> int FUN_10dd20e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10dd2150(uint param_1);
template<class... A> int FUN_10dd2150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10dd21c0(uint param_1);
template<class... A> int FUN_10dd21c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10dd2310(int *param_1);
template<class... A> int FUN_10dd2310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dd2320(int param_1);
template<class... A> int FUN_10dd2320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dd2330(undefined4 *param_1);
template<class... A> int FUN_10dd2330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10dd2560(int param_1,int param_2);
template<class... A> int FUN_10dd2560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10dd25b0(int param_1,int param_2);
template<class... A> int FUN_10dd25b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10dd2600(int param_1,int param_2);
template<class... A> int FUN_10dd2600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd3760(int param_1);
template<class... A> int FUN_10dd3760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd5360(void);
template<class... A> int FUN_10dd5360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd5370(void);
template<class... A> int FUN_10dd5370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd5380(void);
template<class... A> int FUN_10dd5380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd5390(void);
template<class... A> int FUN_10dd5390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dd57e0(int param_1);
template<class... A> int FUN_10dd57e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dd5800(int param_1);
template<class... A> int FUN_10dd5800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dd5820(int param_1);
template<class... A> int FUN_10dd5820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd5940(undefined4 *param_1);
template<class... A> int FUN_10dd5940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dd5c20(undefined4 *param_1);
template<class... A> int FUN_10dd5c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dd5c50(undefined4 *param_1);
template<class... A> int FUN_10dd5c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10dd5d80(int param_1);
template<class... A> int FUN_10dd5d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10dd5d90(int param_1);
template<class... A> int FUN_10dd5d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd5da0(int param_1);
template<class... A> int FUN_10dd5da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd5db0(int param_1);
template<class... A> int FUN_10dd5db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd5dc0(int param_1);
template<class... A> int FUN_10dd5dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10dd5dd0(int *param_1);
template<class... A> int FUN_10dd5dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10dd5de0(int *param_1);
template<class... A> int FUN_10dd5de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dd5f50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10dd5f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dd5f70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10dd5f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dd6030(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10dd6030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dd6050(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10dd6050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd65e0(void);
template<class... A> int FUN_10dd65e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd6600(void);
template<class... A> int FUN_10dd6600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd6620(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10dd6620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd6630(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10dd6630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd6640(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10dd6640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd6650(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10dd6650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd6660(void);
template<class... A> int FUN_10dd6660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd6670(void);
template<class... A> int FUN_10dd6670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd68e0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10dd68e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd6900(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10dd6900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd6920(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10dd6920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd6940(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10dd6940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd6960(undefined4 param_1);
template<class... A> int FUN_10dd6960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd6970(undefined4 param_1);
template<class... A> int FUN_10dd6970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10dd6980(int param_1,uint *param_2);
template<class... A> int FUN_10dd6980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10dd69b0(int param_1,uint *param_2);
template<class... A> int FUN_10dd69b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd69e0(void);
template<class... A> int FUN_10dd69e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd6e70(undefined4 param_1);
template<class... A> int FUN_10dd6e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd6e80(undefined4 param_1);
template<class... A> int FUN_10dd6e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd6e90(undefined4 param_1);
template<class... A> int FUN_10dd6e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd6ea0(undefined4 param_1);
template<class... A> int FUN_10dd6ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd6eb0(undefined4 param_1);
template<class... A> int FUN_10dd6eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd6ec0(undefined4 param_1);
template<class... A> int FUN_10dd6ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd6ed0(undefined4 param_1);
template<class... A> int FUN_10dd6ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd6ee0(undefined4 param_1);
template<class... A> int FUN_10dd6ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd6ef0(undefined4 param_1);
template<class... A> int FUN_10dd6ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd6f00(undefined4 param_1);
template<class... A> int FUN_10dd6f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd6f10(undefined4 param_1);
template<class... A> int FUN_10dd6f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd7010(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10dd7010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd7040(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10dd7040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd7070(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10dd7070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd70a0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10dd70a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd70d0(undefined4 param_1,int param_2);
template<class... A> int FUN_10dd70d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dd70e0(undefined4 param_1,int param_2);
template<class... A> int FUN_10dd70e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10dd70f0(int param_1,int param_2);
template<class... A> int FUN_10dd70f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd7100(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10dd7100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd7120(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10dd7120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd7140(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10dd7140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd7160(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10dd7160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd7180(undefined4 param_1);
template<class... A> int FUN_10dd7180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd7190(undefined4 param_1);
template<class... A> int FUN_10dd7190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd71a0(undefined4 param_1);
template<class... A> int FUN_10dd71a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd71b0(undefined4 param_1);
template<class... A> int FUN_10dd71b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd71c0(undefined4 param_1);
template<class... A> int FUN_10dd71c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dd71d0(undefined4 param_1);
template<class... A> int FUN_10dd71d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dd7400(undefined4 *param_1);
template<class... A> int FUN_10dd7400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dd7420(undefined4 *param_1);
template<class... A> int FUN_10dd7420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd7440(undefined4 param_1);
template<class... A> int FUN_10dd7440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd7450(undefined4 param_1);
template<class... A> int FUN_10dd7450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dd7460(undefined4 *param_1);
template<class... A> int FUN_10dd7460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dd74b0(undefined4 *param_1);
template<class... A> int FUN_10dd74b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dd7fc0(int param_1);
template<class... A> int FUN_10dd7fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dd7fe0(int param_1);
template<class... A> int FUN_10dd7fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dd80d0(int param_1);
template<class... A> int FUN_10dd80d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dd8ee0(undefined4 *param_1);
template<class... A> int FUN_10dd8ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dd8f10(undefined4 *param_1);
template<class... A> int FUN_10dd8f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dd8f80(int param_1);
template<class... A> int FUN_10dd8f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dd8fa0(int param_1);
template<class... A> int FUN_10dd8fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd9180(undefined4 param_1);
template<class... A> int FUN_10dd9180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd9190(undefined4 param_1);
template<class... A> int FUN_10dd9190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd91a0(undefined4 param_1);
template<class... A> int FUN_10dd91a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd91b0(undefined4 param_1);
template<class... A> int FUN_10dd91b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd91c0(undefined4 param_1);
template<class... A> int FUN_10dd91c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd91d0(undefined4 param_1);
template<class... A> int FUN_10dd91d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd91e0(undefined4 param_1);
template<class... A> int FUN_10dd91e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd91f0(undefined4 param_1);
template<class... A> int FUN_10dd91f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd9200(undefined4 param_1);
template<class... A> int FUN_10dd9200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd9210(undefined4 param_1);
template<class... A> int FUN_10dd9210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd9220(undefined4 param_1);
template<class... A> int FUN_10dd9220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd9230(undefined4 param_1);
template<class... A> int FUN_10dd9230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd9240(undefined4 param_1);
template<class... A> int FUN_10dd9240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd9250(undefined4 param_1);
template<class... A> int FUN_10dd9250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd9260(undefined4 param_1);
template<class... A> int FUN_10dd9260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd9270(undefined4 param_1);
template<class... A> int FUN_10dd9270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd9880(int param_1);
template<class... A> int FUN_10dd9880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dd9890(int param_1);
template<class... A> int FUN_10dd9890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10dd9b00(uint param_1);
template<class... A> int FUN_10dd9b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10dd9b70(uint param_1);
template<class... A> int FUN_10dd9b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dda540(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10dda540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dda590(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10dda590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10dda5e0(int param_1,int param_2);
template<class... A> int FUN_10dda5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10dda630(int param_1,int param_2);
template<class... A> int FUN_10dda630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ddba30(int param_1);
template<class... A> int FUN_10ddba30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ddbb10(void);
template<class... A> int FUN_10ddbb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ddbb20(void);
template<class... A> int FUN_10ddbb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ddbb30(void);
template<class... A> int FUN_10ddbb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ddbb40(void);
template<class... A> int FUN_10ddbb40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ddbb50(int param_1);
template<class... A> int FUN_10ddbb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ddd0d0(undefined4 param_1);
template<class... A> int FUN_10ddd0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ddd0e0(undefined4 param_1);
template<class... A> int FUN_10ddd0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ddd0f0(void);
template<class... A> int FUN_10ddd0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ddd100(undefined4 *param_1);
template<class... A> int FUN_10ddd100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ddd130(undefined4 *param_1);
template<class... A> int FUN_10ddd130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dde040(undefined4 *param_1);
template<class... A> int FUN_10dde040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dde810(undefined4 *param_1);
template<class... A> int FUN_10dde810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dde820(undefined4 *param_1);
template<class... A> int FUN_10dde820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dde8c0(undefined4 *param_1);
template<class... A> int FUN_10dde8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dde8d0(undefined4 *param_1);
template<class... A> int FUN_10dde8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dde950(undefined4 *param_1);
template<class... A> int FUN_10dde950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dde960(undefined4 *param_1);
template<class... A> int FUN_10dde960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10dde970(int *param_1);
template<class... A> int FUN_10dde970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dde980(undefined4 *param_1);
template<class... A> int FUN_10dde980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10dde990(undefined4 param_1);
template<class... A> int FUN_10dde990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10de20f0(int param_1);
template<class... A> int FUN_10de20f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10de2120(void);
template<class... A> int FUN_10de2120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10de2130(int param_1);
template<class... A> int FUN_10de2130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10de28d0(undefined4 *param_1);
template<class... A> int FUN_10de28d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10de28e0(undefined4 *param_1);
template<class... A> int FUN_10de28e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10de2a10(undefined4 *param_1);
template<class... A> int FUN_10de2a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10de4610(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10de4610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10de4650(void);
template<class... A> int FUN_10de4650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10de46f0(undefined4 *param_1);
template<class... A> int FUN_10de46f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10de4940(undefined4 *param_1);
template<class... A> int FUN_10de4940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10de4bd0(undefined4 *param_1);
template<class... A> int FUN_10de4bd0(A...);
/* WARNING: Removing unreachable block_10de4fb0 (ram,0x101ba14a) */ void __fastcall FUN_10de4fb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10de52f0(undefined4 *param_1);
template<class... A> int FUN_10de52f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10de5510(undefined4 *param_1);
template<class... A> int FUN_10de5510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10de5640(undefined4 *param_1);
template<class... A> int FUN_10de5640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10de5730(undefined4 *param_1);
template<class... A> int FUN_10de5730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10de5740(undefined4 *param_1);
template<class... A> int FUN_10de5740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10de5750(int param_1);
template<class... A> int FUN_10de5750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10de5760(undefined4 *param_1);
template<class... A> int FUN_10de5760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10de66f0(undefined4 *param_1);
template<class... A> int FUN_10de66f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10de6de0(int param_1);
template<class... A> int FUN_10de6de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10de6e00(int param_1);
template<class... A> int FUN_10de6e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10de6e20(int param_1);
template<class... A> int FUN_10de6e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10de86b0(void);
template<class... A> int FUN_10de86b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10de8930(undefined4 *param_1);
template<class... A> int FUN_10de8930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10de8940(undefined4 *param_1);
template<class... A> int FUN_10de8940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10de8b70(undefined4 *param_1);
template<class... A> int FUN_10de8b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10de8ba0(undefined4 *param_1);
template<class... A> int FUN_10de8ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10de8bd0(undefined4 *param_1);
template<class... A> int FUN_10de8bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10de8c00(undefined4 *param_1);
template<class... A> int FUN_10de8c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10de9050(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10de9050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10de9b00(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10de9b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10de9b20(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10de9b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10de9c40(undefined4 param_1);
template<class... A> int FUN_10de9c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10de9c50(undefined4 param_1);
template<class... A> int FUN_10de9c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10de9c60(undefined4 param_1);
template<class... A> int FUN_10de9c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10de9c70(undefined4 param_1);
template<class... A> int FUN_10de9c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10de9c80(undefined4 param_1);
template<class... A> int FUN_10de9c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10de9c90(undefined4 param_1);
template<class... A> int FUN_10de9c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10de9ca0(undefined4 param_1);
template<class... A> int FUN_10de9ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10de9cb0(undefined4 *param_1);
template<class... A> int FUN_10de9cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10de9da0(undefined4 *param_1);
template<class... A> int FUN_10de9da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10de9fd0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10de9fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10de9fe0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10de9fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10dea430(int *param_1);
template<class... A> int FUN_10dea430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dea4f0(void);
template<class... A> int FUN_10dea4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dea500(void);
template<class... A> int FUN_10dea500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10deb6c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10deb6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10deb6e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10deb6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10deb700(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10deb700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10deb780(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10deb780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10deb9a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_10deb9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10deb9d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10deb9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10debc20(void);
template<class... A> int FUN_10debc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10debc30(void);
template<class... A> int FUN_10debc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10debc40(void);
template<class... A> int FUN_10debc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10debdc0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10debdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10debdd0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10debdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10debde0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10debde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dec080(void);
template<class... A> int FUN_10dec080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dec950(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10dec950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dec9f0(undefined4 *param_1);
template<class... A> int FUN_10dec9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10deca00(undefined4 *param_1);
template<class... A> int FUN_10deca00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10deca10(undefined4 *param_1);
template<class... A> int FUN_10deca10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10deca20(undefined4 *param_1);
template<class... A> int FUN_10deca20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ded3e0(undefined4 param_1);
template<class... A> int FUN_10ded3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ded3f0(undefined4 param_1);
template<class... A> int FUN_10ded3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ded400(int param_1,undefined4 param_2);
template<class... A> int FUN_10ded400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ded430(int param_1,SCStr *param_2);
template<class... A> int FUN_10ded430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_10ded460(SCStr *param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_10ded460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * FUN_10ded510(int param_1,int param_2,undefined1 *param_3);
template<class... A> int FUN_10ded510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ded8f0(undefined4 *param_1);
template<class... A> int FUN_10ded8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dedcc0(undefined4 param_1);
template<class... A> int FUN_10dedcc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dedcd0(undefined4 param_1);
template<class... A> int FUN_10dedcd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dedce0(undefined4 param_1);
template<class... A> int FUN_10dedce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dedcf0(undefined4 param_1);
template<class... A> int FUN_10dedcf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dedd00(undefined4 param_1);
template<class... A> int FUN_10dedd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dedd10(undefined4 param_1);
template<class... A> int FUN_10dedd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dedd20(undefined4 param_1);
template<class... A> int FUN_10dedd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dedd30(undefined4 param_1);
template<class... A> int FUN_10dedd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dedd40(undefined4 param_1);
template<class... A> int FUN_10dedd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dedd50(undefined4 param_1);
template<class... A> int FUN_10dedd50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dedd60(undefined4 param_1);
template<class... A> int FUN_10dedd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dedd70(undefined4 param_1);
template<class... A> int FUN_10dedd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dedd80(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10dedd80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10deddb0(undefined4 param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_10deddb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dedde0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10dedde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dede00(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10dede00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dede20(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10dede20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dede40(undefined4 param_1,undefined1 *param_2,undefined1 *param_3);
template<class... A> int FUN_10dede40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10dedf30(int param_1,int param_2);
template<class... A> int FUN_10dedf30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10dedf50(int param_1,int param_2);
template<class... A> int FUN_10dedf50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dee000(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10dee000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dee020(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10dee020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dee040(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10dee040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dee060(undefined4 param_1);
template<class... A> int FUN_10dee060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dee070(undefined4 param_1);
template<class... A> int FUN_10dee070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dee080(undefined4 param_1);
template<class... A> int FUN_10dee080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dee090(undefined4 param_1);
template<class... A> int FUN_10dee090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dee0a0(undefined4 param_1);
template<class... A> int FUN_10dee0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dee0b0(undefined4 param_1);
template<class... A> int FUN_10dee0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dee0c0(undefined4 param_1);
template<class... A> int FUN_10dee0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dee0d0(undefined4 param_1);
template<class... A> int FUN_10dee0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dee0e0(undefined4 param_1);
template<class... A> int FUN_10dee0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dee0f0(undefined4 param_1);
template<class... A> int FUN_10dee0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dee100(undefined4 param_1);
template<class... A> int FUN_10dee100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dee110(undefined4 param_1);
template<class... A> int FUN_10dee110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10dee120(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10dee120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dee1f0(undefined4 param_1);
template<class... A> int FUN_10dee1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dee200(undefined4 param_1);
template<class... A> int FUN_10dee200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10dee210(undefined4 param_1);
template<class... A> int FUN_10dee210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dee3a0(undefined4 *param_1);
template<class... A> int FUN_10dee3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dee400(undefined4 param_1);
template<class... A> int FUN_10dee400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dee410(undefined4 param_1);
template<class... A> int FUN_10dee410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dee420(undefined4 param_1);
template<class... A> int FUN_10dee420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dee550(undefined4 *param_1);
template<class... A> int FUN_10dee550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dee5e0(undefined4 *param_1);
template<class... A> int FUN_10dee5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10dee600(undefined4 *param_1);
template<class... A> int FUN_10dee600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10def710(undefined4 param_1);
template<class... A> int FUN_10def710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10def880(int *param_1);
template<class... A> int FUN_10def880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10def890(int *param_1);
template<class... A> int FUN_10def890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10def8a0(int *param_1);
template<class... A> int FUN_10def8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10def8b0(int *param_1);
template<class... A> int FUN_10def8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10defc80(undefined4 *param_1);
template<class... A> int FUN_10defc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10defee0(int param_1);
template<class... A> int FUN_10defee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10deff00(undefined4 param_1);
template<class... A> int FUN_10deff00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10deff10(undefined4 param_1);
template<class... A> int FUN_10deff10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10deff20(undefined4 param_1);
template<class... A> int FUN_10deff20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10deff30(undefined4 param_1);
template<class... A> int FUN_10deff30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10deff40(undefined4 param_1);
template<class... A> int FUN_10deff40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10deff50(undefined4 param_1);
template<class... A> int FUN_10deff50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10deff60(undefined4 param_1);
template<class... A> int FUN_10deff60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10deff70(undefined4 param_1);
template<class... A> int FUN_10deff70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10deff80(undefined4 param_1);
template<class... A> int FUN_10deff80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10deffa0(undefined4 param_1);
template<class... A> int FUN_10deffa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10deffb0(undefined4 param_1);
template<class... A> int FUN_10deffb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10deffc0(undefined4 param_1);
template<class... A> int FUN_10deffc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10df0320(int param_1);
template<class... A> int FUN_10df0320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10df0350(int *param_1);
template<class... A> int FUN_10df0350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10df0380(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10df0380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10df0390(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10df0390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10df03a0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10df03a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10df03b0(int param_1);
template<class... A> int FUN_10df03b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10df03c0(int param_1);
template<class... A> int FUN_10df03c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10df03d0(int param_1);
template<class... A> int FUN_10df03d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10df05a0(undefined4 *param_1);
template<class... A> int FUN_10df05a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10df05b0(undefined4 *param_1);
template<class... A> int FUN_10df05b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10df05d0(uint param_1);
template<class... A> int FUN_10df05d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10df0670(int *param_1);
template<class... A> int FUN_10df0670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10df09c0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10df09c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10df0a10(int param_1,int param_2);
template<class... A> int FUN_10df0a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10df0a60(int param_1,int param_2);
template<class... A> int FUN_10df0a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10df16e0(int *param_1);
template<class... A> int FUN_10df16e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10df17a0(undefined4 param_1);
template<class... A> int FUN_10df17a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10df17b0(void);
template<class... A> int FUN_10df17b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10df17c0(void);
template<class... A> int FUN_10df17c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10df17d0(void);
template<class... A> int FUN_10df17d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10df17e0(void);
template<class... A> int FUN_10df17e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10df17f0(undefined4 param_1);
template<class... A> int FUN_10df17f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10df1800(undefined4 param_1);
template<class... A> int FUN_10df1800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10df1b40(undefined4 param_1);
template<class... A> int FUN_10df1b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10df1b50(int *param_1);
template<class... A> int FUN_10df1b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10df1b70(int *param_1);
template<class... A> int FUN_10df1b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10df2100(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10df2100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10df2340(undefined4 *param_1);
template<class... A> int FUN_10df2340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10df2350(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10df2350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10df2380(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10df2380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10df23d0(undefined4 param_1);
template<class... A> int FUN_10df23d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10df23e0(undefined4 param_1);
template<class... A> int FUN_10df23e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10df2410(undefined4 *param_1);
template<class... A> int FUN_10df2410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10df2430(undefined4 param_1);
template<class... A> int FUN_10df2430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10df2440(undefined4 *param_1);
template<class... A> int FUN_10df2440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10df27e0(void);
template<class... A> int FUN_10df27e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10df2bd0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10df2bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10df2be0(undefined4 *param_1);
template<class... A> int FUN_10df2be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10df2bf0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10df2bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10df2c20(undefined4 *param_1, undefined4 *param_2, int param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10df2c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10df2c50(undefined4 *param_1,undefined4 *param_2,int param_3);
template<class... A> int FUN_10df2c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10df2c80(int param_1);
template<class... A> int FUN_10df2c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10df2c90(int param_1);
template<class... A> int FUN_10df2c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10df2ca0(int param_1);
template<class... A> int FUN_10df2ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10df2d70(undefined4 *param_1);
template<class... A> int FUN_10df2d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10df2d80(undefined4 *param_1);
template<class... A> int FUN_10df2d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10df3fb0(int *param_1);
template<class... A> int FUN_10df3fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10df3fc0(int *param_1);
template<class... A> int FUN_10df3fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10df4e80(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10df4e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10df4e90(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10df4e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10df4ef0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10df4ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10df4f10(undefined4 param_1);
template<class... A> int FUN_10df4f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10df4f20(undefined4 param_1);
template<class... A> int FUN_10df4f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10df4f30(undefined4 param_1);
template<class... A> int FUN_10df4f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10df4f40(undefined4 *param_1);
template<class... A> int FUN_10df4f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10df5040(undefined4 *param_1);
template<class... A> int FUN_10df5040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10df5050(undefined4 *param_1);
template<class... A> int FUN_10df5050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10df5060(undefined4 *param_1);
template<class... A> int FUN_10df5060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10df5070(undefined4 *param_1);
template<class... A> int FUN_10df5070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10df5080(undefined4 *param_1);
template<class... A> int FUN_10df5080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10df6ab0(undefined4 *param_1);
template<class... A> int FUN_10df6ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10df9290(undefined4 *param_1);
template<class... A> int FUN_10df9290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10dff5d0(undefined4 *param_1);
template<class... A> int FUN_10dff5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dff830(undefined4 *param_1);
template<class... A> int FUN_10dff830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dff840(undefined4 *param_1);
template<class... A> int FUN_10dff840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10dff850(undefined4 *param_1);
template<class... A> int FUN_10dff850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e00730(int param_1);
template<class... A> int FUN_10e00730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e01cf0(void);
template<class... A> int FUN_10e01cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e01d00(undefined4 param_1);
template<class... A> int FUN_10e01d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e01d20(void);
template<class... A> int FUN_10e01d20(A...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined ** FUN_10e01d30(void);
template<class... A> int FUN_10e01d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e01d40(void);
template<class... A> int FUN_10e01d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e01d50(void);
template<class... A> int FUN_10e01d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e01d80(void);
template<class... A> int FUN_10e01d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e01d90(undefined4 param_1);
template<class... A> int FUN_10e01d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e01df0(void);
template<class... A> int FUN_10e01df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e01e00(void);
template<class... A> int FUN_10e01e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e06aa0(undefined4 *param_1);
template<class... A> int FUN_10e06aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e06ab0(undefined4 *param_1);
template<class... A> int FUN_10e06ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e06b70(undefined4 *param_1);
template<class... A> int FUN_10e06b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e06ba0(int *param_1);
template<class... A> int FUN_10e06ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e0a320(int param_1);
template<class... A> int FUN_10e0a320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e0b030(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e0b030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e0b050(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e0b050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e0b070(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e0b070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e0b110(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10e0b110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e0b130(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10e0b130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e0b3c0(void);
template<class... A> int FUN_10e0b3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e0b3e0(void);
template<class... A> int FUN_10e0b3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e0b400(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10e0b400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e0b410(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10e0b410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e0b420(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10e0b420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e0b430(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10e0b430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e0b440(void);
template<class... A> int FUN_10e0b440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e0b450(void);
template<class... A> int FUN_10e0b450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e0b460(void);
template<class... A> int FUN_10e0b460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e0b760(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10e0b760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e0b780(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10e0b780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e0b8e0(undefined4 param_1);
template<class... A> int FUN_10e0b8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e0b8f0(undefined4 param_1);
template<class... A> int FUN_10e0b8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10e0b900(int param_1,uint *param_2);
template<class... A> int FUN_10e0b900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e0b930(int param_1,SCStr *param_2);
template<class... A> int FUN_10e0b930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e0bbc0(undefined4 param_1);
template<class... A> int FUN_10e0bbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e0bbd0(undefined4 param_1);
template<class... A> int FUN_10e0bbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e0bbe0(undefined4 param_1);
template<class... A> int FUN_10e0bbe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e0bbf0(undefined4 param_1);
template<class... A> int FUN_10e0bbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e0bc00(undefined4 param_1);
template<class... A> int FUN_10e0bc00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e0bc10(undefined4 param_1);
template<class... A> int FUN_10e0bc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e0bc20(undefined4 param_1);
template<class... A> int FUN_10e0bc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e0bc30(undefined4 param_1);
template<class... A> int FUN_10e0bc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e0bc40(undefined4 param_1);
template<class... A> int FUN_10e0bc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e0bc50(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10e0bc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e0bc80(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10e0bc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e0bdd0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10e0bdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e0bdf0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10e0bdf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e0be10(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10e0be10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e0be30(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10e0be30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e0be50(undefined4 param_1);
template<class... A> int FUN_10e0be50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e0be60(undefined4 param_1);
template<class... A> int FUN_10e0be60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e0be70(undefined4 param_1);
template<class... A> int FUN_10e0be70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e0be80(undefined4 param_1);
template<class... A> int FUN_10e0be80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e0be90(undefined4 param_1);
template<class... A> int FUN_10e0be90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e0bea0(undefined4 param_1);
template<class... A> int FUN_10e0bea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e0c090(undefined4 *param_1);
template<class... A> int FUN_10e0c090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e0c0b0(undefined4 *param_1);
template<class... A> int FUN_10e0c0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e0c0d0(undefined4 *param_1);
template<class... A> int FUN_10e0c0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e0c0f0(undefined4 param_1);
template<class... A> int FUN_10e0c0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e0c100(undefined4 param_1);
template<class... A> int FUN_10e0c100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e0c110(undefined4 param_1);
template<class... A> int FUN_10e0c110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e0c120(undefined4 *param_1);
template<class... A> int FUN_10e0c120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e0c170(undefined4 *param_1);
template<class... A> int FUN_10e0c170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e0c1c0(undefined4 *param_1);
template<class... A> int FUN_10e0c1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e0c1e0(undefined4 *param_1);
template<class... A> int FUN_10e0c1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e0c5f0(int param_1);
template<class... A> int FUN_10e0c5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e0cbd0(undefined4 *param_1);
template<class... A> int FUN_10e0cbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e0cc00(undefined4 *param_1);
template<class... A> int FUN_10e0cc00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e0cc70(int param_1);
template<class... A> int FUN_10e0cc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e0cc90(int param_1);
template<class... A> int FUN_10e0cc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e0ccb0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e0ccb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e0ccc0(undefined4 param_1);
template<class... A> int FUN_10e0ccc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e0ccd0(undefined4 param_1);
template<class... A> int FUN_10e0ccd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e0cce0(undefined4 param_1);
template<class... A> int FUN_10e0cce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e0ccf0(undefined4 param_1);
template<class... A> int FUN_10e0ccf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e0cd00(undefined4 param_1);
template<class... A> int FUN_10e0cd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e0cd10(undefined4 param_1);
template<class... A> int FUN_10e0cd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e0cd20(undefined4 param_1);
template<class... A> int FUN_10e0cd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e0cd30(undefined4 param_1);
template<class... A> int FUN_10e0cd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e0cd40(undefined4 param_1);
template<class... A> int FUN_10e0cd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e0cd50(undefined4 param_1);
template<class... A> int FUN_10e0cd50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e0cd60(undefined4 param_1);
template<class... A> int FUN_10e0cd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e0cd70(undefined4 param_1);
template<class... A> int FUN_10e0cd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e0cd80(undefined4 param_1);
template<class... A> int FUN_10e0cd80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e0cd90(undefined4 param_1);
template<class... A> int FUN_10e0cd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e0cda0(undefined4 param_1);
template<class... A> int FUN_10e0cda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e0cdb0(undefined4 param_1);
template<class... A> int FUN_10e0cdb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e0cdc0(undefined4 param_1);
template<class... A> int FUN_10e0cdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e0cdd0(undefined4 param_1);
template<class... A> int FUN_10e0cdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e0d3e0(int param_1);
template<class... A> int FUN_10e0d3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e0d3f0(int param_1);
template<class... A> int FUN_10e0d3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10e0d550(uint param_1);
template<class... A> int FUN_10e0d550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10e0d5d0(uint param_1);
template<class... A> int FUN_10e0d5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e0edf0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10e0edf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e0ee40(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10e0ee40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e0ee90(int param_1,int param_2);
template<class... A> int FUN_10e0ee90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e0eee0(int param_1,int param_2);
template<class... A> int FUN_10e0eee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e0ef40(int param_1,int param_2);
template<class... A> int FUN_10e0ef40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e0ef90(int param_1);
template<class... A> int FUN_10e0ef90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e0efb0(int param_1);
template<class... A> int FUN_10e0efb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10e10ea0(undefined1 *param_1);
template<class... A> int FUN_10e10ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e11f60(void);
template<class... A> int FUN_10e11f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e11f70(void);
template<class... A> int FUN_10e11f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e11f80(void);
template<class... A> int FUN_10e11f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e11f90(void);
template<class... A> int FUN_10e11f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e12090(undefined1 *param_1);
template<class... A> int FUN_10e12090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e120c0(int param_1);
template<class... A> int FUN_10e120c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e12ba0(undefined4 *param_1);
template<class... A> int FUN_10e12ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e12ce0(undefined4 *param_1);
template<class... A> int FUN_10e12ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e12cf0(undefined4 *param_1);
template<class... A> int FUN_10e12cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e12d00(undefined4 *param_1);
template<class... A> int FUN_10e12d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e13250(undefined4 *param_1);
template<class... A> int FUN_10e13250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e13260(undefined4 *param_1);
template<class... A> int FUN_10e13260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e134e0(undefined4 *param_1);
template<class... A> int FUN_10e134e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e135b0(undefined4 *param_1);
template<class... A> int FUN_10e135b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e13680(int *param_1);
template<class... A> int FUN_10e13680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e13760(undefined4 *param_1);
template<class... A> int FUN_10e13760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e13770(undefined4 *param_1);
template<class... A> int FUN_10e13770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10e13780(int *param_1);
template<class... A> int FUN_10e13780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10e13790(int *param_1);
template<class... A> int FUN_10e13790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e14310(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10e14310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e1ef30(int *param_1);
template<class... A> int FUN_10e1ef30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e1ef40(int *param_1);
template<class... A> int FUN_10e1ef40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e233e0(int *param_1);
template<class... A> int FUN_10e233e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e23410(undefined4 *param_1);
template<class... A> int FUN_10e23410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e23420(undefined4 *param_1);
template<class... A> int FUN_10e23420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e234e0(undefined4 *param_1);
template<class... A> int FUN_10e234e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e25160(undefined4 param_1);
template<class... A> int FUN_10e25160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e25170(undefined4 param_1);
template<class... A> int FUN_10e25170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e25180(undefined4 param_1);
template<class... A> int FUN_10e25180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e25190(undefined4 param_1);
template<class... A> int FUN_10e25190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e251a0(undefined4 *param_1);
template<class... A> int FUN_10e251a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e25200(undefined4 *param_1);
template<class... A> int FUN_10e25200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e25260(undefined4 *param_1);
template<class... A> int FUN_10e25260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e252c0(undefined4 *param_1);
template<class... A> int FUN_10e252c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e25420(undefined4 *param_1);
template<class... A> int FUN_10e25420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e25440(undefined4 *param_1);
template<class... A> int FUN_10e25440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e25460(undefined4 *param_1);
template<class... A> int FUN_10e25460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e254a0(int param_1);
template<class... A> int FUN_10e254a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e254b0(int param_1);
template<class... A> int FUN_10e254b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e254c0(int param_1);
template<class... A> int FUN_10e254c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e254d0(int param_1);
template<class... A> int FUN_10e254d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e254e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e254e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e25570(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e25570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e25600(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e25600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e25690(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e25690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e27400(undefined4 *param_1);
template<class... A> int FUN_10e27400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e277a0(undefined4 *param_1);
template<class... A> int FUN_10e277a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e27bc0(undefined4 *param_1);
template<class... A> int FUN_10e27bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e27ca0(undefined4 *param_1);
template<class... A> int FUN_10e27ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e27e70(undefined4 *param_1);
template<class... A> int FUN_10e27e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e27fd0(undefined4 *param_1);
template<class... A> int FUN_10e27fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e28400(undefined4 *param_1);
template<class... A> int FUN_10e28400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e28410(undefined4 *param_1);
template<class... A> int FUN_10e28410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e28420(undefined4 *param_1);
template<class... A> int FUN_10e28420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e285c0(undefined4 *param_1);
template<class... A> int FUN_10e285c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e287b0(undefined4 *param_1);
template<class... A> int FUN_10e287b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e287c0(undefined4 *param_1);
template<class... A> int FUN_10e287c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e288a0(undefined4 *param_1);
template<class... A> int FUN_10e288a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e288c0(undefined4 *param_1);
template<class... A> int FUN_10e288c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e28a70(undefined4 *param_1);
template<class... A> int FUN_10e28a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e28a90(int *param_1);
template<class... A> int FUN_10e28a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e28cd0(int *param_1);
template<class... A> int FUN_10e28cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e28ce0(int *param_1);
template<class... A> int FUN_10e28ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e28cf0(int *param_1);
template<class... A> int FUN_10e28cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e28d00(int *param_1);
template<class... A> int FUN_10e28d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e28d10(undefined4 *param_1);
template<class... A> int FUN_10e28d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e28d20(int *param_1);
template<class... A> int FUN_10e28d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e28d30(undefined4 *param_1);
template<class... A> int FUN_10e28d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e28d40(int *param_1);
template<class... A> int FUN_10e28d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e28d50(undefined4 *param_1);
template<class... A> int FUN_10e28d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e28d60(int *param_1);
template<class... A> int FUN_10e28d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e28d70(int param_1);
template<class... A> int FUN_10e28d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e28d80(int param_1);
template<class... A> int FUN_10e28d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e28d90(int param_1);
template<class... A> int FUN_10e28d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e28da0(int param_1);
template<class... A> int FUN_10e28da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e28db0(int param_1);
template<class... A> int FUN_10e28db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e28dc0(int param_1);
template<class... A> int FUN_10e28dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e28dd0(int param_1);
template<class... A> int FUN_10e28dd0(A...);
extern void __fastcall FUN_101ba0d0(void *param_1);
extern void __fastcall FUN_105d3a20(void *param_1);
extern void __fastcall FUN_106845c0(void *param_1);
extern void __fastcall FUN_10d8ceb0(void *param_1);
extern void __fastcall FUN_10dde6b0(void *param_1);

extern void __fastcall thunk_FUN_101ba0d0(void *param_1);
extern void __fastcall thunk_FUN_105d3a20(void *param_1);
extern void __fastcall thunk_FUN_106845c0(void *param_1);
extern void __fastcall thunk_FUN_10d8ceb0(void *param_1);
extern void __fastcall thunk_FUN_10dde6b0(void *param_1);

// Reference entry 10d74640; body size 10 bytes.
#line 1 "ENTRY_10d74640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d74640(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10d74650; body size 10 bytes.
#line 1 "ENTRY_10d74650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d74650(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10d74660; body size 10 bytes.
#line 1 "ENTRY_10d74660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d74660(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10d74670; body size 12 bytes.
#line 1 "ENTRY_10d74670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d74670(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10d74700; body size 12 bytes.
#line 1 "ENTRY_10d74700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d74700(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10d74790; body size 12 bytes.
#line 1 "ENTRY_10d74790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d74790(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10d74820; body size 54 bytes.
#line 1 "ENTRY_10d74820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d74820(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountSignInCompleteState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCAccountSignInCompleteState);
  return (undefined4 *)(param_1);
}


// Reference entry 10d74f20; body size 54 bytes.
#line 1 "ENTRY_10d74f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d74f20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountSignInState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCAccountSignInState);
  return (undefined4 *)(param_1);
}


// Reference entry 10d75190; body size 52 bytes.
#line 1 "ENTRY_10d75190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d75190(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1025f580(param_2,param_3,param_6);
  param_1[6] = (undefined4)(param_4);
  param_1[7] = (undefined4)(param_5);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSimpleStringInput);
  return (undefined4 *)(param_1);
}


// Reference entry 10d751e0; body size 9 bytes.
#line 1 "ENTRY_10d751e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d751e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStrPropDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 10d755a0; body size 7 bytes.
#line 1 "ENTRY_10d755a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d755a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10d75e50; body size 7 bytes.
#line 1 "ENTRY_10d75e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d75e50(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10d75e60; body size 7 bytes.
#line 1 "ENTRY_10d75e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d75e60(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10d75e70; body size 7 bytes.
#line 1 "ENTRY_10d75e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d75e70(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10d75e80; body size 3 bytes.
#line 1 "ENTRY_10d75e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d75e80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d75e90; body size 7 bytes.
#line 1 "ENTRY_10d75e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d75e90(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10d75ea0; body size 8 bytes.
#line 1 "ENTRY_10d75ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d75ea0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10d75eb0; body size 8 bytes.
#line 1 "ENTRY_10d75eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d75eb0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10d75ec0; body size 8 bytes.
#line 1 "ENTRY_10d75ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d75ec0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10d75ed0; body size 4 bytes.
#line 1 "ENTRY_10d75ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d75ed0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10d75ee0; body size 4 bytes.
#line 1 "ENTRY_10d75ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d75ee0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10d75ef0; body size 4 bytes.
#line 1 "ENTRY_10d75ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d75ef0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10d75f00; body size 3 bytes.
#line 1 "ENTRY_10d75f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d75f00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d765c0; body size 8 bytes.
#line 1 "ENTRY_10d765c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d765c0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10d765d0; body size 8 bytes.
#line 1 "ENTRY_10d765d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d765d0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10d765e0; body size 8 bytes.
#line 1 "ENTRY_10d765e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d765e0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10d765f0; body size 4 bytes.
#line 1 "ENTRY_10d765f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d765f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10d76600; body size 4 bytes.
#line 1 "ENTRY_10d76600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d76600(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10d76610; body size 4 bytes.
#line 1 "ENTRY_10d76610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d76610(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10d76620; body size 7 bytes.
#line 1 "ENTRY_10d76620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d76620(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10d76630; body size 7 bytes.
#line 1 "ENTRY_10d76630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d76630(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10d76640; body size 7 bytes.
#line 1 "ENTRY_10d76640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d76640(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10d76650; body size 26 bytes.
#line 1 "ENTRY_10d76650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d76650(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10d76670; body size 26 bytes.
#line 1 "ENTRY_10d76670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d76670(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10d76690; body size 26 bytes.
#line 1 "ENTRY_10d76690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d76690(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10d766b0; body size 10 bytes.
#line 1 "ENTRY_10d766b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d766b0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10d766c0; body size 10 bytes.
#line 1 "ENTRY_10d766c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d766c0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10d766d0; body size 10 bytes.
#line 1 "ENTRY_10d766d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d766d0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10d77d60; body size 16 bytes.
#line 1 "ENTRY_10d77d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d77d60(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d77d80; body size 16 bytes.
#line 1 "ENTRY_10d77d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d77d80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d77da0; body size 16 bytes.
#line 1 "ENTRY_10d77da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d77da0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d77ef0; body size 4 bytes.
#line 1 "ENTRY_10d77ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d77ef0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10d77f00; body size 4 bytes.
#line 1 "ENTRY_10d77f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d77f00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10d77f10; body size 4 bytes.
#line 1 "ENTRY_10d77f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d77f10(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10d798e0; body size 11 bytes.
#line 1 "ENTRY_10d798e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d798e0(int *param_1)

{
  (**(code **)(*param_1 + 0xb4))();
  return (undefined4)(1);
}


// Reference entry 10d7a3b0; body size 3 bytes.
#line 1 "ENTRY_10d7a3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d7a3b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d7a440; body size 28 bytes.
#line 1 "ENTRY_10d7a440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d7a440(undefined4 *param_1)

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


// Reference entry 10d7a470; body size 28 bytes.
#line 1 "ENTRY_10d7a470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d7a470(undefined4 *param_1)

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


// Reference entry 10d7c050; body size 43 bytes.
#line 1 "ENTRY_10d7c050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d7c050(int *param_2)
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


// Reference entry 10d7c090; body size 43 bytes.
#line 1 "ENTRY_10d7c090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d7c090(int *param_2)
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


// Reference entry 10d7c0d0; body size 43 bytes.
#line 1 "ENTRY_10d7c0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d7c0d0(int *param_2)
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


// Reference entry 10d7c110; body size 43 bytes.
#line 1 "ENTRY_10d7c110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d7c110(int *param_2)
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


// Reference entry 10d7c150; body size 43 bytes.
#line 1 "ENTRY_10d7c150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d7c150(int *param_2)
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


// Reference entry 10d7c190; body size 43 bytes.
#line 1 "ENTRY_10d7c190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d7c190(int *param_2)
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


// Reference entry 10d7c1d0; body size 43 bytes.
#line 1 "ENTRY_10d7c1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d7c1d0(int *param_2)
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


// Reference entry 10d7c210; body size 43 bytes.
#line 1 "ENTRY_10d7c210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d7c210(int *param_2)
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


// Reference entry 10d7c250; body size 43 bytes.
#line 1 "ENTRY_10d7c250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d7c250(int *param_2)
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


// Reference entry 10d7ca50; body size 16 bytes.
#line 1 "ENTRY_10d7ca50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d7ca50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d7ca70; body size 16 bytes.
#line 1 "ENTRY_10d7ca70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d7ca70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d7d080; body size 80 bytes.
#line 1 "ENTRY_10d7d080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d7d080(undefined4 *param_1)

{
  thunk_FUN_10d7cc90();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAccountDeletionAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RAccountDeletionAIOOp);
  param_1[0xd] = (undefined4)(0xfffffffe);
  param_1[0xf] = (undefined4)(0);
  param_1[0x10] = (undefined4)(0);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  param_1[0x11] = (undefined4)(0);
  param_1[0x12] = (undefined4)(0);
  param_1[0x13] = (undefined4)(0xffffffff);
  return (undefined4 *)(param_1);
}


// Reference entry 10d7d390; body size 42 bytes.
#line 1 "ENTRY_10d7d390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d7d390(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountCallback);
  return (undefined4 *)(param_1);
}


// Reference entry 10d80690; body size 11 bytes.
#line 1 "ENTRY_10d80690"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d80690(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10d806a0; body size 11 bytes.
#line 1 "ENTRY_10d806a0"

/* WARNING: Removing unreachable block_10d806a0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d806a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10d806b0; body size 11 bytes.
#line 1 "ENTRY_10d806b0"

/* WARNING: Removing unreachable block_10d806b0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d806b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10d81a60; body size 19 bytes.
#line 1 "ENTRY_10d81a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d81a60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d81a80; body size 11 bytes.
#line 1 "ENTRY_10d81a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d81a80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  thunk_FUN_106845c0(param_1);

}


// Reference entry 10d81a90; body size 11 bytes.
#line 1 "ENTRY_10d81a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d81a90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  thunk_FUN_106845c0(param_1);

}


// Reference entry 10d81aa0; body size 11 bytes.
#line 1 "ENTRY_10d81aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d81aa0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  thunk_FUN_106845c0(param_1);

}


// Reference entry 10d81ab0; body size 11 bytes.
#line 1 "ENTRY_10d81ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d81ab0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  thunk_FUN_106845c0(param_1);

}


// Reference entry 10d81bf0; body size 11 bytes.
#line 1 "ENTRY_10d81bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d81bf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  thunk_FUN_106845c0(param_1);

}


// Reference entry 10d81c00; body size 18 bytes.
#line 1 "ENTRY_10d81c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d81c00(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAccountCreate);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAccountCreate);


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


// Reference entry 10d81c20; body size 18 bytes.
#line 1 "ENTRY_10d81c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d81c20(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAccountDeletion);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAccountDeletion);


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


// Reference entry 10d81c40; body size 18 bytes.
#line 1 "ENTRY_10d81c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d81c40(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAccountLogin);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAccountLogin);


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


// Reference entry 10d81c60; body size 18 bytes.
#line 1 "ENTRY_10d81c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d81c60(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAccountRefreshTokens);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAccountRefreshTokens);


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


// Reference entry 10d821c0; body size 51 bytes.
#line 1 "ENTRY_10d821c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d821c0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  piVar1 = (int *)((int *)*param_1);
  if ((int *)((param_2)) != (int *)(piVar1)) {
    if ((int *)(piVar1) != (int *)(0x0)) {
      *param_1 = (int)(0);
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)((int)param_2);
    if ((int *)(param_2) != (int *)(0x0)) {
      (**(code **)(*param_2 + 4))();
    }
  }
  return (int *)(param_1);
}


// Reference entry 10d82240; body size 7 bytes.
#line 1 "ENTRY_10d82240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d82240(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10d82250; body size 4 bytes.
#line 1 "ENTRY_10d82250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d82250(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10d82260; body size 4 bytes.
#line 1 "ENTRY_10d82260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d82260(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10d82270; body size 4 bytes.
#line 1 "ENTRY_10d82270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d82270(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10d82280; body size 4 bytes.
#line 1 "ENTRY_10d82280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d82280(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10d82290; body size 3 bytes.
#line 1 "ENTRY_10d82290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d82290(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d83530; body size 4 bytes.
#line 1 "ENTRY_10d83530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d83530(int param_1)

{
  return (int)(param_1 + 0x78);
}


// Reference entry 10d83540; body size 7 bytes.
#line 1 "ENTRY_10d83540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d83540(int param_1)

{
  return (int)(param_1 + 0x150);
}


// Reference entry 10d83550; body size 4 bytes.
#line 1 "ENTRY_10d83550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d83550(int param_1)

{
  return (int)(param_1 + 0x4c);
}


// Reference entry 10d835c0; body size 7 bytes.
#line 1 "ENTRY_10d835c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d835c0(int param_1)

{
  return (int)(param_1 + 0x140);
}


// Reference entry 10d835d0; body size 25 bytes.
#line 1 "ENTRY_10d835d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10d835d0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x140));
  return (SCStr *)(param_2);
}


// Reference entry 10d835f0; body size 20 bytes.
#line 1 "ENTRY_10d835f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10d835f0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x74));
  return (SCStr *)(param_2);
}


// Reference entry 10d83610; body size 23 bytes.
#line 1 "ENTRY_10d83610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10d83610(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x14c));
  return (SCStr *)(param_2);
}


// Reference entry 10d83630; body size 23 bytes.
#line 1 "ENTRY_10d83630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10d83630(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x74));
  return (SCStr *)(param_2);
}


// Reference entry 10d83650; body size 25 bytes.
#line 1 "ENTRY_10d83650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10d83650(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x14c));
  return (SCStr *)(param_2);
}


// Reference entry 10d83670; body size 7 bytes.
#line 1 "ENTRY_10d83670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d83670(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x80));
}


// Reference entry 10d83680; body size 7 bytes.
#line 1 "ENTRY_10d83680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d83680(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x158));
}


// Reference entry 10d83690; body size 4 bytes.
#line 1 "ENTRY_10d83690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d83690(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 10d836d0; body size 4 bytes.
#line 1 "ENTRY_10d836d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d836d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x58));
}


// Reference entry 10d836f0; body size 4 bytes.
#line 1 "ENTRY_10d836f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d836f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x4c));
}


// Reference entry 10d83700; body size 7 bytes.
#line 1 "ENTRY_10d83700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d83700(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x144));
}


// Reference entry 10d83710; body size 7 bytes.
#line 1 "ENTRY_10d83710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d83710(int param_1)

{
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x4c));
}


// Reference entry 10d83720; body size 10 bytes.
#line 1 "ENTRY_10d83720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d83720(int param_1)

{
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x144));
}


// Reference entry 10d83890; body size 20 bytes.
#line 1 "ENTRY_10d83890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10d83890(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x70));
  return (SCStr *)(param_2);
}


// Reference entry 10d838b0; body size 23 bytes.
#line 1 "ENTRY_10d838b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10d838b0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x148));
  return (SCStr *)(param_2);
}


// Reference entry 10d83950; body size 4 bytes.
#line 1 "ENTRY_10d83950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d83950(int param_1)

{
  return (int)(param_1 + 0x7c);
}


// Reference entry 10d83960; body size 7 bytes.
#line 1 "ENTRY_10d83960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d83960(int param_1)

{
  return (int)(param_1 + 0x154);
}


// Reference entry 10d83970; body size 4 bytes.
#line 1 "ENTRY_10d83970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d83970(int param_1)

{
  return (int)(param_1 + 0x50);
}


// Reference entry 10d839e0; body size 4 bytes.
#line 1 "ENTRY_10d839e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d839e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x34));
}


// Reference entry 10d839f0; body size 4 bytes.
#line 1 "ENTRY_10d839f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d839f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x34));
}


// Reference entry 10d83a00; body size 4 bytes.
#line 1 "ENTRY_10d83a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d83a00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x3c));
}


// Reference entry 10d83ac0; body size 7 bytes.
#line 1 "ENTRY_10d83ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d83ac0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x13c));
}


// Reference entry 10d83ae0; body size 4 bytes.
#line 1 "ENTRY_10d83ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d83ae0(int param_1)

{
  return (int)(param_1 + 0x6c);
}


// Reference entry 10d83af0; body size 7 bytes.
#line 1 "ENTRY_10d83af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d83af0(int param_1)

{
  return (int)(param_1 + 0x130);
}


// Reference entry 10d83b00; body size 4 bytes.
#line 1 "ENTRY_10d83b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d83b00(int param_1)

{
  return (int)(param_1 + 0x48);
}


// Reference entry 10d83b70; body size 4 bytes.
#line 1 "ENTRY_10d83b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d83b70(int param_1)

{
  return (int)(param_1 + 0x60);
}


// Reference entry 10d83b80; body size 7 bytes.
#line 1 "ENTRY_10d83b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d83b80(int param_1)

{
  return (int)(param_1 + 0x128);
}


// Reference entry 10d86d20; body size 3 bytes.
#line 1 "ENTRY_10d86d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d86d20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d86d30; body size 3 bytes.
#line 1 "ENTRY_10d86d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d86d30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d86d40; body size 3 bytes.
#line 1 "ENTRY_10d86d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d86d40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d86d50; body size 3 bytes.
#line 1 "ENTRY_10d86d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d86d50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d86d60; body size 3 bytes.
#line 1 "ENTRY_10d86d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d86d60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d86d70; body size 3 bytes.
#line 1 "ENTRY_10d86d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d86d70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d86d80; body size 3 bytes.
#line 1 "ENTRY_10d86d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d86d80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d86d90; body size 3 bytes.
#line 1 "ENTRY_10d86d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d86d90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d86da0; body size 3 bytes.
#line 1 "ENTRY_10d86da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d86da0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d86db0; body size 3 bytes.
#line 1 "ENTRY_10d86db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d86db0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d86dc0; body size 3 bytes.
#line 1 "ENTRY_10d86dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d86dc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d87050; body size 28 bytes.
#line 1 "ENTRY_10d87050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d87050(undefined4 *param_1)

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


// Reference entry 10d87080; body size 28 bytes.
#line 1 "ENTRY_10d87080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d87080(undefined4 *param_1)

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


// Reference entry 10d870b0; body size 28 bytes.
#line 1 "ENTRY_10d870b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d870b0(undefined4 *param_1)

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


// Reference entry 10d870e0; body size 28 bytes.
#line 1 "ENTRY_10d870e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d870e0(undefined4 *param_1)

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


// Reference entry 10d87110; body size 28 bytes.
#line 1 "ENTRY_10d87110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d87110(undefined4 *param_1)

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


// Reference entry 10d87140; body size 28 bytes.
#line 1 "ENTRY_10d87140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d87140(undefined4 *param_1)

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


// Reference entry 10d87170; body size 28 bytes.
#line 1 "ENTRY_10d87170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d87170(undefined4 *param_1)

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


// Reference entry 10d871a0; body size 28 bytes.
#line 1 "ENTRY_10d871a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d871a0(undefined4 *param_1)

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


// Reference entry 10d871d0; body size 28 bytes.
#line 1 "ENTRY_10d871d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d871d0(undefined4 *param_1)

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


// Reference entry 10d87200; body size 28 bytes.
#line 1 "ENTRY_10d87200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d87200(undefined4 *param_1)

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


// Reference entry 10d87410; body size 24 bytes.
#line 1 "ENTRY_10d87410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10d87410(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 10d87c10; body size 6 bytes.
#line 1 "ENTRY_10d87c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d87c10(void)

{
  return (undefined4)(6);
}


// Reference entry 10d87e60; body size 13 bytes.
#line 1 "ENTRY_10d87e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d87e60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
  return (undefined4)(0);
}


// Reference entry 10d87e70; body size 13 bytes.
#line 1 "ENTRY_10d87e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d87e70(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x10))();
  return (undefined4)(0);
}


// Reference entry 10d87e80; body size 13 bytes.
#line 1 "ENTRY_10d87e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d87e80(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x14))();
  return (undefined4)(0);
}


// Reference entry 10d87e90; body size 13 bytes.
#line 1 "ENTRY_10d87e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d87e90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 4))();
  return (undefined4)(0);
}


// Reference entry 10d87ea0; body size 13 bytes.
#line 1 "ENTRY_10d87ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d87ea0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 8))();
  return (undefined4)(0);
}


// Reference entry 10d87f70; body size 26 bytes.
#line 1 "ENTRY_10d87f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d87f70(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d87f90; body size 43 bytes.
#line 1 "ENTRY_10d87f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d87f90(int *param_2)
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


// Reference entry 10d87fd0; body size 83 bytes.
#line 1 "ENTRY_10d87fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d87fd0(int *param_2)
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


// Reference entry 10d88040; body size 16 bytes.
#line 1 "ENTRY_10d88040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d88040(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d880a0; body size 16 bytes.
#line 1 "ENTRY_10d880a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d880a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d880c0; body size 42 bytes.
#line 1 "ENTRY_10d880c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d880c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuBrowse_EventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 10d889a0; body size 19 bytes.
#line 1 "ENTRY_10d889a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d889a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d88c80; body size 3 bytes.
#line 1 "ENTRY_10d88c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d88c80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d88c90; body size 3 bytes.
#line 1 "ENTRY_10d88c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d88c90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d88ca0; body size 3 bytes.
#line 1 "ENTRY_10d88ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d88ca0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d88cb0; body size 3 bytes.
#line 1 "ENTRY_10d88cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d88cb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d88f50; body size 25 bytes.
#line 1 "ENTRY_10d88f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d88f50(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x28), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d89120; body size 87 bytes.
#line 1 "ENTRY_10d89120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d89120(int param_1)

{
  char cVar1;
  SCStr aSStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  
  cVar1 = (char)(*(char *)(param_1 + 0x88));
  *(undefined1*)(param_1 + 0x88) = (undefined1)(0);
  uStack_14 = (undefined4)(0x10d8913e);
  thunk_FUN_10d89400();
  uStack_14 = (undefined4)(0);
  iStack_18 = (int)(param_1);
  ((SCStr *)((uint)&aSStack_1c))->int_allocRep("SCISettingsMenu:onContentsChanged");
  thunk_FUN_103d65f0<>();
  if (cVar1 != '\0') {
    uStack_14 = (undefined4)(0);
    iStack_18 = (int)(param_1);
    ((SCStr *)((uint)&aSStack_1c))->int_allocRep("SCISettingsMenu:onMenuLoaded");
    thunk_FUN_103d65f0<>();
  }
  return;
}


// Reference entry 10d892d0; body size 3 bytes.
#line 1 "ENTRY_10d892d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d892d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d892e0; body size 3 bytes.
#line 1 "ENTRY_10d892e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d892e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d892f0; body size 3 bytes.
#line 1 "ENTRY_10d892f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d892f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d89380; body size 28 bytes.
#line 1 "ENTRY_10d89380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d89380(undefined4 *param_1)

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


// Reference entry 10d893b0; body size 28 bytes.
#line 1 "ENTRY_10d893b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d893b0(undefined4 *param_1)

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


// Reference entry 10d89620; body size 79 bytes.
#line 1 "ENTRY_10d89620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d89620(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCShowUpdateMessageActionFactory);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  *(undefined1*)(param_1 + 8) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d8ada0; body size 24 bytes.
#line 1 "ENTRY_10d8ada0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d8ada0(undefined4 *param_1)

{
  thunk_FUN_104ed740();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCResetPasswordAction);
  return (undefined4 *)(param_1);
}


// Reference entry 10d8adc0; body size 47 bytes.
#line 1 "ENTRY_10d8adc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d8adc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSignOutActionFactory);
  return (undefined4 *)(param_1);
}


// Reference entry 10d8ae00; body size 5 bytes.
#line 1 "ENTRY_10d8ae00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d8ae00(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCActionContext);
  piVar1 = (int *)((int *)param_1[9]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[8] = (undefined4)(0);
    param_1[9] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[7]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[6] = (undefined4)(0);
    param_1[7] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[5]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[4] = (undefined4)(0);
    param_1[5] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[3]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[2] = (undefined4)(0);
    param_1[3] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10d8be20; body size 78 bytes.
#line 1 "ENTRY_10d8be20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d8be20(int *param_2)
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


// Reference entry 10d8bef0; body size 6 bytes.
#line 1 "ENTRY_10d8bef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d8bef0(void)

{
  return (char *)("SCIStringFromCustomSettingsProperty");
}


// Reference entry 10d8c2a0; body size 56 bytes.
#line 1 "ENTRY_10d8c2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d8c2a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlarmSettingsFrequencyAction);
  return (undefined4 *)(param_1);
}


// Reference entry 10d8cd60; body size 5 bytes.
#line 1 "ENTRY_10d8cd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d8cd60(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSetDateTimeActionBase);
  piVar1 = (int *)((int *)param_1[0xd]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0xc] = (undefined4)(0);
    param_1[0xd] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0xb]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[10] = (undefined4)(0);
    param_1[0xb] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[9]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[8] = (undefined4)(0);
    param_1[9] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = (undefined4)(0);
  piVar1 = (int *)((int *)param_1[3]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[2] = (undefined4)(0);
    param_1[3] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10d8ce20; body size 5 bytes.
#line 1 "ENTRY_10d8ce20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d8ce20(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSetDateTimeActionBase);
  piVar1 = (int *)((int *)param_1[0xd]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0xc] = (undefined4)(0);
    param_1[0xd] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0xb]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[10] = (undefined4)(0);
    param_1[0xb] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[9]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[8] = (undefined4)(0);
    param_1[9] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = (undefined4)(0);
  piVar1 = (int *)((int *)param_1[3]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[2] = (undefined4)(0);
    param_1[3] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10d8d120; body size 7 bytes.
#line 1 "ENTRY_10d8d120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d8d120(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10d8d130; body size 7 bytes.
#line 1 "ENTRY_10d8d130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d8d130(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10d8d140; body size 3 bytes.
#line 1 "ENTRY_10d8d140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d8d140(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d8d150; body size 3 bytes.
#line 1 "ENTRY_10d8d150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d8d150(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d8d160; body size 3 bytes.
#line 1 "ENTRY_10d8d160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d8d160(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d8fa00; body size 25 bytes.
#line 1 "ENTRY_10d8fa00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d8fa00(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xc), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d8fa30; body size 19 bytes.
#line 1 "ENTRY_10d8fa30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10d8fa30(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10ffe600(param_2,*(undefined4 *)(param_1 + 0x28));
  return (undefined4)(param_2);
}


// Reference entry 10d90100; body size 6 bytes.
#line 1 "ENTRY_10d90100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d90100(void)

{
  return (char *)("SCIStringFromCustomSettingsProperty");
}


// Reference entry 10d90110; body size 3 bytes.
#line 1 "ENTRY_10d90110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d90110(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d905f0; body size 20 bytes.
#line 1 "ENTRY_10d905f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d905f0(int *param_1)

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


// Reference entry 10d90610; body size 20 bytes.
#line 1 "ENTRY_10d90610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d90610(int *param_1)

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


// Reference entry 10d907e0; body size 26 bytes.
#line 1 "ENTRY_10d907e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d907e0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d90a00; body size 3 bytes.
#line 1 "ENTRY_10d90a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d90a00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d91560; body size 54 bytes.
#line 1 "ENTRY_10d91560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10d91560(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  if ((*(char **)(param_1 + 0xc) == (char *)((0x0))) || (**(char **)(param_1 + 0xc) == '\0')) {
    ((SCStr *)(param_1))->format((char *)(param_1 + 0xc));
  }
  ((SCStr *)(param_3))->m_op_ctor(param_1 + 0xc);
  return (SCStr *)(param_3);
}


// Reference entry 10d91bc0; body size 3 bytes.
#line 1 "ENTRY_10d91bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d91bc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d92830; body size 32 bytes.
#line 1 "ENTRY_10d92830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d92830(undefined4 *param_2)
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


// Reference entry 10d93b40; body size 43 bytes.
#line 1 "ENTRY_10d93b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d93b40(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0xe8));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 10d941d0; body size 54 bytes.
#line 1 "ENTRY_10d941d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d941d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCHistoryDeleteAllActionFactory);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d94220; body size 42 bytes.
#line 1 "ENTRY_10d94220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d94220(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCHistoryHideAction);
  return (undefined4 *)(param_1);
}


// Reference entry 10d94260; body size 88 bytes.
#line 1 "ENTRY_10d94260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d94260(undefined1 param_2,undefined1 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  *(undefined1*)(param_1 + 5) = (undefined1)(param_2);
  *(undefined1*)((int)param_1 + 0x15) = (undefined1)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRecentlyPlayedToggleActionFactory);
  param_1[4] = (undefined4)(0);
  *(undefined1*)((int)param_1 + 0x16) = (undefined1)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d94560; body size 19 bytes.
#line 1 "ENTRY_10d94560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d94560(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d94640; body size 3 bytes.
#line 1 "ENTRY_10d94640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d94640(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d94650; body size 3 bytes.
#line 1 "ENTRY_10d94650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d94650(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d94660; body size 3 bytes.
#line 1 "ENTRY_10d94660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d94660(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d97120; body size 7 bytes.
#line 1 "ENTRY_10d97120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d97120(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10d971e0; body size 3 bytes.
#line 1 "ENTRY_10d971e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d971e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d971f0; body size 3 bytes.
#line 1 "ENTRY_10d971f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d971f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d97200; body size 3 bytes.
#line 1 "ENTRY_10d97200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d97200(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d97290; body size 28 bytes.
#line 1 "ENTRY_10d97290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d97290(undefined4 *param_1)

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


// Reference entry 10d972c0; body size 28 bytes.
#line 1 "ENTRY_10d972c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d972c0(undefined4 *param_1)

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


// Reference entry 10d972f0; body size 28 bytes.
#line 1 "ENTRY_10d972f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d972f0(undefined4 *param_1)

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


// Reference entry 10d97320; body size 26 bytes.
#line 1 "ENTRY_10d97320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d97320(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d97340; body size 26 bytes.
#line 1 "ENTRY_10d97340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d97340(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d97360; body size 16 bytes.
#line 1 "ENTRY_10d97360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d97360(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d974a0; body size 89 bytes.
#line 1 "ENTRY_10d974a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d974a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSsidResponseObj);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d97720; body size 7 bytes.
#line 1 "ENTRY_10d97720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d97720(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10d97730; body size 3 bytes.
#line 1 "ENTRY_10d97730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d97730(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d97740; body size 3 bytes.
#line 1 "ENTRY_10d97740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d97740(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d97750; body size 3 bytes.
#line 1 "ENTRY_10d97750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d97750(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d98760; body size 4 bytes.
#line 1 "ENTRY_10d98760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d98760(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10d9a3e0; body size 3 bytes.
#line 1 "ENTRY_10d9a3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d9a3e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d9a3f0; body size 3 bytes.
#line 1 "ENTRY_10d9a3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d9a3f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d9a620; body size 10 bytes.
#line 1 "ENTRY_10d9a620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d9a620(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  return;
}


// Reference entry 10d9a8c0; body size 26 bytes.
#line 1 "ENTRY_10d9a8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d9a8c0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d9a9d0; body size 78 bytes.
#line 1 "ENTRY_10d9a9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d9a9d0(int *param_2)
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


// Reference entry 10d9aa70; body size 6 bytes.
#line 1 "ENTRY_10d9aa70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d9aa70(void)

{
  return (char *)("SCIOpContentDirectoryRefreshShareIndex");
}


// Reference entry 10d9aa80; body size 6 bytes.
#line 1 "ENTRY_10d9aa80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d9aa80(void)

{
  return (char *)("SCITimeSettingsProperty");
}


// Reference entry 10d9ab20; body size 27 bytes.
#line 1 "ENTRY_10d9ab20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d9ab20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9acf0; body size 16 bytes.
#line 1 "ENTRY_10d9acf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d9acf0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9ad10; body size 16 bytes.
#line 1 "ENTRY_10d9ad10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d9ad10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9ad50; body size 9 bytes.
#line 1 "ENTRY_10d9ad50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d9ad50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpContentDirectoryRefreshShareIndex);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9b210; body size 42 bytes.
#line 1 "ENTRY_10d9b210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9b210(undefined1 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111c06e0(0);
  *(undefined1*)(param_1 + 0x1b) = (undefined1)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSetViewContributingAsync);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_SCOpSetViewContributingAsync);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9b7c0; body size 76 bytes.
#line 1 "ENTRY_10d9b7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d9b7c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegate);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *(undefined1*)(param_1 + 5) = (undefined1)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUpdateMusicIndexAction);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCUpdateMusicIndexAction);
  *(undefined1*)(param_1 + 6) = (undefined1)(0);
  param_1[7] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9bbd0; body size 7 bytes.
#line 1 "ENTRY_10d9bbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d9bbd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d9bbe0; body size 11 bytes.
#line 1 "ENTRY_10d9bbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d9bbe0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  thunk_FUN_10d8ceb0(param_1);

}


// Reference entry 10d9bbf0; body size 18 bytes.
#line 1 "ENTRY_10d9bbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d9bbf0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpContentDirectoryRefreshShareIndex);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpContentDirectoryRefreshShareIndex);


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


// Reference entry 10d9bc10; body size 18 bytes.
#line 1 "ENTRY_10d9bc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d9bc10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSetViewContributingAsync);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_SCOpSetViewContributingAsync);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RNullAsyncIOOperation);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 10d9bc30; body size 18 bytes.
#line 1 "ENTRY_10d9bc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d9bc30(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCScheduleIndexUpdateToggleAction);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCScheduleIndexUpdateToggleAction);

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCToggleBooleanSettingActionBase);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCToggleBooleanSettingActionBase);
  piVar1 = (int *)((int *)param_1[0xb]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[10] = (undefined4)(0);
    param_1[0xb] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[9]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[8] = (undefined4)(0);
    param_1[9] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = (undefined4)(0);
  piVar1 = (int *)((int *)param_1[4]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10d9bc50; body size 11 bytes.
#line 1 "ENTRY_10d9bc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d9bc50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  thunk_FUN_105d3a20(param_1);

}


// Reference entry 10d9bd20; body size 18 bytes.
#line 1 "ENTRY_10d9bd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d9bd20(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCViewContributingArtistsToggleAction);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCViewContributingArtistsToggleAction);

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCToggleBooleanSettingActionBase);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCToggleBooleanSettingActionBase);
  piVar1 = (int *)((int *)param_1[0xb]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[10] = (undefined4)(0);
    param_1[0xb] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[9]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[8] = (undefined4)(0);
    param_1[9] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = (undefined4)(0);
  piVar1 = (int *)((int *)param_1[4]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10d9bdb0; body size 3 bytes.
#line 1 "ENTRY_10d9bdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d9bdb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d9bdc0; body size 3 bytes.
#line 1 "ENTRY_10d9bdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d9bdc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d9bdd0; body size 3 bytes.
#line 1 "ENTRY_10d9bdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d9bdd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d9c740; body size 9 bytes.
#line 1 "ENTRY_10d9c740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d9c740(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d9d940; body size 6 bytes.
#line 1 "ENTRY_10d9d940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d9d940(void)

{
  return (char *)("SCIOpContentDirectoryRefreshShareIndex");
}


// Reference entry 10d9d950; body size 6 bytes.
#line 1 "ENTRY_10d9d950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d9d950(void)

{
  return (char *)("SCITimeSettingsProperty");
}


// Reference entry 10d9dec0; body size 3 bytes.
#line 1 "ENTRY_10d9dec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d9dec0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d9e070; body size 28 bytes.
#line 1 "ENTRY_10d9e070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d9e070(undefined4 *param_1)

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


// Reference entry 10d9e0a0; body size 28 bytes.
#line 1 "ENTRY_10d9e0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d9e0a0(undefined4 *param_1)

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


// Reference entry 10d9e0d0; body size 20 bytes.
#line 1 "ENTRY_10d9e0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d9e0d0(int *param_1)

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


// Reference entry 10d9e270; body size 47 bytes.
#line 1 "ENTRY_10d9e270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d9e270(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceSetupWizardData_Data);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9e440; body size 65 bytes.
#line 1 "ENTRY_10d9e440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d9e440(int *param_2)
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


// Reference entry 10d9e4a0; body size 3 bytes.
#line 1 "ENTRY_10d9e4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d9e4a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d9e700; body size 35 bytes.
#line 1 "ENTRY_10d9e700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9e700(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->m_op_ctor((SCStr *)(param_2 + 1));
  return (undefined4 *)(param_1);
}


// Reference entry 10d9e730; body size 18 bytes.
#line 1 "ENTRY_10d9e730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d9e730(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9e750; body size 18 bytes.
#line 1 "ENTRY_10d9e750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d9e750(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9e830; body size 35 bytes.
#line 1 "ENTRY_10d9e830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9e830(undefined4 *param_2,char *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_allocRep(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9e860; body size 35 bytes.
#line 1 "ENTRY_10d9e860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9e860(undefined4 *param_2,char *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_allocRep(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9e890; body size 35 bytes.
#line 1 "ENTRY_10d9e890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9e890(undefined4 *param_2,char *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_allocRep(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9e8c0; body size 35 bytes.
#line 1 "ENTRY_10d9e8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9e8c0(undefined4 *param_2,char *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_allocRep(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9e8f0; body size 35 bytes.
#line 1 "ENTRY_10d9e8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9e8f0(undefined4 *param_2,char *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_allocRep(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9e920; body size 35 bytes.
#line 1 "ENTRY_10d9e920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9e920(undefined4 *param_2,char *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_allocRep(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9e950; body size 35 bytes.
#line 1 "ENTRY_10d9e950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9e950(undefined4 *param_2,char *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_allocRep(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9e980; body size 35 bytes.
#line 1 "ENTRY_10d9e980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9e980(undefined4 *param_2,char *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_allocRep(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9e9b0; body size 35 bytes.
#line 1 "ENTRY_10d9e9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9e9b0(undefined4 *param_2,char *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_allocRep(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9e9e0; body size 35 bytes.
#line 1 "ENTRY_10d9e9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9e9e0(undefined4 *param_2,char *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_allocRep(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9ea10; body size 35 bytes.
#line 1 "ENTRY_10d9ea10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9ea10(undefined4 *param_2,char *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_allocRep(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9ea40; body size 35 bytes.
#line 1 "ENTRY_10d9ea40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9ea40(undefined4 *param_2,char *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_allocRep(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9ea70; body size 35 bytes.
#line 1 "ENTRY_10d9ea70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9ea70(undefined4 *param_2,char *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_allocRep(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9eaa0; body size 35 bytes.
#line 1 "ENTRY_10d9eaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9eaa0(undefined4 *param_2,char *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_allocRep(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9ead0; body size 3 bytes.
#line 1 "ENTRY_10d9ead0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d9ead0(void)

{
  return;
}


// Reference entry 10d9eae0; body size 3 bytes.
#line 1 "ENTRY_10d9eae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d9eae0(void)

{
  return;
}


// Reference entry 10d9eaf0; body size 25 bytes.
#line 1 "ENTRY_10d9eaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d9eaf0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10d9eb10; body size 13 bytes.
#line 1 "ENTRY_10d9eb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d9eb10(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10d9eb20; body size 13 bytes.
#line 1 "ENTRY_10d9eb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d9eb20(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10d9eb30; body size 3 bytes.
#line 1 "ENTRY_10d9eb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d9eb30(void)

{
  return;
}


// Reference entry 10d9f030; body size 15 bytes.
#line 1 "ENTRY_10d9f030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d9f030(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10d9f0d0; body size 7 bytes.
#line 1 "ENTRY_10d9f0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d9f0d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d9f0e0; body size 13 bytes.
#line 1 "ENTRY_10d9f0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d9f0e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10d9f0f0; body size 13 bytes.
#line 1 "ENTRY_10d9f0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d9f0f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10d9f100; body size 5 bytes.
#line 1 "ENTRY_10d9f100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d9f100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d9f110; body size 31 bytes.
#line 1 "ENTRY_10d9f110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10d9f110(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = (uint)(*param_2), *(int *)(param_1 + 0x10) <= (int)(in_EAX))) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d9f140; body size 13 bytes.
#line 1 "ENTRY_10d9f140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d9f140(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10d9f150; body size 5 bytes.
#line 1 "ENTRY_10d9f150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d9f150(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d9f160; body size 5 bytes.
#line 1 "ENTRY_10d9f160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d9f160(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d9f170; body size 5 bytes.
#line 1 "ENTRY_10d9f170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d9f170(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d9f180; body size 5 bytes.
#line 1 "ENTRY_10d9f180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d9f180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d9f190; body size 5 bytes.
#line 1 "ENTRY_10d9f190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d9f190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d9f1a0; body size 25 bytes.
#line 1 "ENTRY_10d9f1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d9f1a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  ((SCStr *)((SCStr *)(param_2 + 1)))->m_op_ctor((SCStr *)(param_3 + 1));
  return;
}


// Reference entry 10d9f230; body size 15 bytes.
#line 1 "ENTRY_10d9f230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d9f230(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10d9f250; body size 15 bytes.
#line 1 "ENTRY_10d9f250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d9f250(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10d9f360; body size 5 bytes.
#line 1 "ENTRY_10d9f360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d9f360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d9f370; body size 5 bytes.
#line 1 "ENTRY_10d9f370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d9f370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d9f380; body size 5 bytes.
#line 1 "ENTRY_10d9f380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d9f380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d9f390; body size 5 bytes.
#line 1 "ENTRY_10d9f390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d9f390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d9f3a0; body size 5 bytes.
#line 1 "ENTRY_10d9f3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d9f3a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d9f510; body size 18 bytes.
#line 1 "ENTRY_10d9f510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9f510(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9f570; body size 11 bytes.
#line 1 "ENTRY_10d9f570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9f570(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9f580; body size 11 bytes.
#line 1 "ENTRY_10d9f580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9f580(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9f610; body size 11 bytes.
#line 1 "ENTRY_10d9f610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9f610(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9f620; body size 11 bytes.
#line 1 "ENTRY_10d9f620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9f620(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9f630; body size 16 bytes.
#line 1 "ENTRY_10d9f630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d9f630(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9f650; body size 3 bytes.
#line 1 "ENTRY_10d9f650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d9f650(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d9f660; body size 18 bytes.
#line 1 "ENTRY_10d9f660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9f660(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d9f800; body size 35 bytes.
#line 1 "ENTRY_10d9f800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9f800(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->m_op_ctor((SCStr *)(param_2 + 1));
  return (undefined4 *)(param_1);
}


// Reference entry 10d9fbf0; body size 14 bytes.
#line 1 "ENTRY_10d9fbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10d9fbf0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10d9fc10; body size 14 bytes.
#line 1 "ENTRY_10d9fc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10d9fc10(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10d9fc30; body size 14 bytes.
#line 1 "ENTRY_10d9fc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10d9fc30(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10d9fc50; body size 14 bytes.
#line 1 "ENTRY_10d9fc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10d9fc50(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10d9fc70; body size 6 bytes.
#line 1 "ENTRY_10d9fc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d9fc70(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10d9fc80; body size 6 bytes.
#line 1 "ENTRY_10d9fc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d9fc80(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10d9fc90; body size 6 bytes.
#line 1 "ENTRY_10d9fc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d9fc90(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10d9fca0; body size 6 bytes.
#line 1 "ENTRY_10d9fca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d9fca0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10d9fcb0; body size 6 bytes.
#line 1 "ENTRY_10d9fcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d9fcb0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10da0080; body size 31 bytes.
#line 1 "ENTRY_10da0080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10da0080(undefined4 *param_1)

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


// Reference entry 10da00d0; body size 14 bytes.
#line 1 "ENTRY_10da00d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10da00d0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10da00f0; body size 5 bytes.
#line 1 "ENTRY_10da00f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10da00f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10da0100; body size 3 bytes.
#line 1 "ENTRY_10da0100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da0100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10da0110; body size 3 bytes.
#line 1 "ENTRY_10da0110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da0110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10da0120; body size 3 bytes.
#line 1 "ENTRY_10da0120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da0120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10da0130; body size 3 bytes.
#line 1 "ENTRY_10da0130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da0130(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10da0140; body size 3 bytes.
#line 1 "ENTRY_10da0140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da0140(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10da0150; body size 3 bytes.
#line 1 "ENTRY_10da0150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da0150(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10da0160; body size 3 bytes.
#line 1 "ENTRY_10da0160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da0160(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10da0170; body size 3 bytes.
#line 1 "ENTRY_10da0170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da0170(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10da0410; body size 79 bytes.
#line 1 "ENTRY_10da0410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10da0410(int param_2)
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


// Reference entry 10da0480; body size 30 bytes.
#line 1 "ENTRY_10da0480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10da0480(int param_1)

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


// Reference entry 10da04b0; body size 31 bytes.
#line 1 "ENTRY_10da04b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10da04b0(int *param_1)

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


// Reference entry 10da04e0; body size 11 bytes.
#line 1 "ENTRY_10da04e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da04e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10da04f0; body size 83 bytes.
#line 1 "ENTRY_10da04f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10da04f0(int *param_2)
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


// Reference entry 10da0560; body size 9 bytes.
#line 1 "ENTRY_10da0560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10da0560(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10da0570; body size 11 bytes.
#line 1 "ENTRY_10da0570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10da0570(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10da0580; body size 90 bytes.
#line 1 "ENTRY_10da0580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10da0580(uint param_1)

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


// Reference entry 10da06e0; body size 13 bytes.
#line 1 "ENTRY_10da06e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10da06e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10da06f0; body size 3 bytes.
#line 1 "ENTRY_10da06f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da06f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10da0710; body size 57 bytes.
#line 1 "ENTRY_10da0710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10da0710(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10da0760; body size 60 bytes.
#line 1 "ENTRY_10da0760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10da0760(int param_1,int param_2)

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


// Reference entry 10da07c0; body size 11 bytes.
#line 1 "ENTRY_10da07c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10da07c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10da07d0; body size 4 bytes.
#line 1 "ENTRY_10da07d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da07d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10da1860; body size 748 bytes.
#line 1 "ENTRY_10da1860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10da1860(void)

{
 try {
  void *pvVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *_Memory;
  int iStack_510;
  int iStack_50c;
  char *pcStack_508;
  int iStack_504;
  int iStack_500;
  char *pcStack_4fc;
  void *pvStack_4f8;
  undefined1 *puStack_4f4;
  undefined4 uStack_4f0;
  undefined1 auStack_4ec [1252];
  uint uStack_8;

  uStack_8 = (uint)(DAT_12126b84 ^ (uint)(uint)&auStack_4ec);

  pcStack_4fc = (char *)((char *)0x0);

  iVar3 = (int)(thunk_FUN_101b5540(uStack_8), 0);
  if (((iVar3 != 0) && (cVar2 = (char)(thunk_FUN_101b5de0(2), 0), cVar2 != '\0')) &&
     (iVar3 = (int)(thunk_FUN_110828b0(), 0), iVar3 != 0)) {
    iStack_50c = (int)(*(int *)(iVar3 + 0x2d43c));
    if ((iStack_50c != 0) && (*(int *)(iStack_50c + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iStack_50c + -0x10));
    }
    *(unsigned char*)((char *)&uStack_4f0 + 0) = (unsigned char)(1);
    ((SCStr *)((SCStr *)&pcStack_508))->m_op_ctor((SwfStr *)&iStack_50c);
    *(unsigned char*)((char *)&uStack_4f0 + 0) = (unsigned char)(2);
    ((SCStr *)((SCStr *)&pcStack_4fc))->int_release();
    pcStack_4fc = (char *)(pcStack_508);
    ((SCStr *)((SCStr *)&pcStack_4fc))->int_addref();
    uStack_4f0 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_4f0 + 1)) << 8 | (uint)(3)));
    ((SCStr *)((SCStr *)&pcStack_508))->int_release();
    pcStack_508 = (char *)((char *)0x0);
    thunk_FUN_101ba300();
  }
  if (((char *)(pcStack_4fc) != (char *)(0x0)) && (*pcStack_4fc != (char)(('\0')))) {
    iStack_504 = (int)(0);
    iStack_500 = (int)(0);
    *(unsigned char*)((char *)&uStack_4f0 + 0) = (unsigned char)(4);
    thunk_FUN_101a2b90(&pcStack_4fc);
    iVar3 = (int)(iStack_500);
    uStack_4f0 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_4f0 + 1)) << 8 | (uint)(5)));
    if ((iStack_500 != 0) &&
       ((_Memory = (int *)((int *)(iStack_500 + -0x10)), *_Memory < (int)((0xffff)) &&
        (iVar4 = (int)(thunk_FUN_1123fcd0(_Memory), 0), iVar4 == 0)))) {
      *(undefined4*)(iVar3 + -8) = (undefined4)(0);
      *(undefined4*)(iVar3 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar3,*(undefined4 *)(iVar3 + -4));
      free(_Memory);
    }
    iStack_500 = (int)(iStack_510);
    if ((iStack_510 != 0) && (*(int *)(iStack_510 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0(iStack_510 + -0x10);
    }
    *(unsigned char*)((char *)&uStack_4f0 + 0) = (unsigned char)(6);
    if (((iStack_510 != 0) && (*(int *)(iStack_510 + -0x10) < 0xffff)) &&
       (iVar3 = (int)(thunk_FUN_1123fcd0((char *)(iStack_510 + -0x10)), 0), iVar3 == 0)) {
      *(undefined4*)(iStack_510 + -8) = (undefined4)(0);
      *(undefined4*)(iStack_510 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iStack_510,*(undefined4 *)(iStack_510 + -4));
      free((char *)(iStack_510 + -0x10));
    }
    *(unsigned char*)((char *)&uStack_4f0 + 0) = (unsigned char)(4);
    iVar3 = (int)(thunk_FUN_110f2980(), 0);
    if ((iVar3 == 0) || (iVar3 = (int)(thunk_FUN_110f4420(&iStack_504,2,(uint)&auStack_4ec,1), 0), iVar3 == 0)) {
      *(unsigned char*)((char *)&uStack_4f0 + 0) = (unsigned char)(10);
      if (((iStack_500 != 0) && (*(int *)(iStack_500 + -0x10) < 0xffff)) &&
         (iVar3 = (int)(thunk_FUN_1123fcd0((char *)(iStack_500 + -0x10)), 0), iVar3 == 0)) {
        *(undefined4*)(iStack_500 + -8) = (undefined4)(0);
        *(undefined4*)(iStack_500 + -0xc) = (undefined4)(0);
        thunk_FUN_113cfb70(iStack_500,*(undefined4 *)(iStack_500 + -4));
        free((char *)(iStack_500 + -0x10));
      }
      iVar3 = (int)(iStack_504);
      uStack_4f0 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_4f0 + 1)) << 8 | (uint)(0xb)));
      if (((iStack_504 != 0) &&
          (pvVar1 = (char *)((char *)(iStack_504 + -0x10)), *(int *)(iStack_504 + -0x10) < 0xffff)) &&
         (iVar4 = (int)(thunk_FUN_1123fcd0(pvVar1), 0), iVar4 == 0)) {
        *(undefined4*)(iVar3 + -8) = (undefined4)(0);
        *(undefined4*)(iVar3 + -0xc) = (undefined4)(0);
        thunk_FUN_113cfb70(iVar3,*(undefined4 *)(iVar3 + -4));
        free(pvVar1);
      }
    }
    else {
      *(unsigned char*)((char *)&uStack_4f0 + 0) = (unsigned char)(7);
      if ((iStack_500 != 0) &&
         ((*(int *)(iStack_500 + -0x10) < 0xffff &&
          (iVar3 = (int)(thunk_FUN_1123fcd0((char *)(iStack_500 + -0x10)), 0), iVar3 == 0)))) {
        *(undefined4*)(iStack_500 + -8) = (undefined4)(0);
        *(undefined4*)(iStack_500 + -0xc) = (undefined4)(0);
        thunk_FUN_113cfb70(iStack_500,*(undefined4 *)(iStack_500 + -4));
        free((char *)(iStack_500 + -0x10));
      }
      iVar3 = (int)(iStack_504);
      uStack_4f0 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_4f0 + 1)) << 8 | (uint)(8)));
      if (((iStack_504 != 0) &&
          (pvVar1 = (char *)((char *)(iStack_504 + -0x10)), *(int *)(iStack_504 + -0x10) < 0xffff)) &&
         (iVar4 = (int)(thunk_FUN_1123fcd0(pvVar1), 0), iVar4 == 0)) {
        *(undefined4*)(iVar3 + -8) = (undefined4)(0);
        *(undefined4*)(iVar3 + -0xc) = (undefined4)(0);
        thunk_FUN_113cfb70(iVar3,*(undefined4 *)(iVar3 + -4));
        free(pvVar1);
      }
    }
  }

  ((SCStr *)((SCStr *)&pcStack_4fc))->int_release();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10da1c10; body size 73 bytes.
#line 1 "ENTRY_10da1c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10da1c10(int *param_1)

{
  char cVar1;
  
  if ((int *)(param_1) != (int *)(0x0)) {
    cVar1 = (char)((**(code **)(*param_1 + 0x1c))(), 0);
    if (cVar1 == '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x28))(), 0);
      if (cVar1 != '\0') {
        cVar1 = (char)((**(code **)(*param_1 + 0x38))(), 0);
        if (cVar1 != '\0') {
          cVar1 = (char)((**(code **)(*param_1 + 0x3c))(), 0);
          if (cVar1 != '\0') {
            return (undefined4)(1);
          }
        }
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 10da1f20; body size 6 bytes.
#line 1 "ENTRY_10da1f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10da1f20(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10da1f30; body size 6 bytes.
#line 1 "ENTRY_10da1f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10da1f30(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10da1f40; body size 5 bytes.
#line 1 "ENTRY_10da1f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10da1f40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10da1f50; body size 25 bytes.
#line 1 "ENTRY_10da1f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10da1f50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10da1f70; body size 43 bytes.
#line 1 "ENTRY_10da1f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10da1f70(int *param_2)
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


// Reference entry 10da1fb0; body size 26 bytes.
#line 1 "ENTRY_10da1fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10da1fb0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10da1fd0; body size 16 bytes.
#line 1 "ENTRY_10da1fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10da1fd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10da2030; body size 26 bytes.
#line 1 "ENTRY_10da2030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10da2030(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10da2050; body size 23 bytes.
#line 1 "ENTRY_10da2050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10da2050(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10da2070; body size 3 bytes.
#line 1 "ENTRY_10da2070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da2070(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10da2080; body size 23 bytes.
#line 1 "ENTRY_10da2080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10da2080(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10da20a0; body size 42 bytes.
#line 1 "ENTRY_10da20a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10da20a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceStatusManager_EventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 10da20e0; body size 9 bytes.
#line 1 "ENTRY_10da20e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10da20e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjSPListener);
  return (undefined4 *)(param_1);
}


// Reference entry 10da2350; body size 19 bytes.
#line 1 "ENTRY_10da2350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10da2350(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10da2520; body size 3 bytes.
#line 1 "ENTRY_10da2520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da2520(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10da2530; body size 3 bytes.
#line 1 "ENTRY_10da2530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da2530(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10da3370; body size 3 bytes.
#line 1 "ENTRY_10da3370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da3370(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10da3380; body size 3 bytes.
#line 1 "ENTRY_10da3380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da3380(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10da3390; body size 3 bytes.
#line 1 "ENTRY_10da3390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da3390(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10da33a0; body size 3 bytes.
#line 1 "ENTRY_10da33a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da33a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10da34b0; body size 28 bytes.
#line 1 "ENTRY_10da34b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10da34b0(undefined4 *param_1)

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


// Reference entry 10da3ee0; body size 25 bytes.
#line 1 "ENTRY_10da3ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10da3ee0(int param_1)

{
  thunk_FUN_10bed100(param_1 + 0x2c,-(uint)(param_1 != 0) & param_1 + 0x28U);
  return;
}


// Reference entry 10da3f90; body size 106 bytes.
#line 1 "ENTRY_10da3f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10da3f90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = (undefined4)(0);
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1 + 2), 0);
      param_1[0xb] = (undefined4)(uVar2);
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) != (int *)(0x0)) {
        (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
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


// Reference entry 10da4130; body size 26 bytes.
#line 1 "ENTRY_10da4130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10da4130(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10da4150; body size 12 bytes.
#line 1 "ENTRY_10da4150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10da4150(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10da4160; body size 40 bytes.
#line 1 "ENTRY_10da4160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10da4160(int param_1,undefined4 *param_2,undefined4 param_3)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 10da42c0; body size 122 bytes.
#line 1 "ENTRY_10da42c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10da42c0(int *param_2)
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
        uVar3 = (undefined4)((**(code **)(*piVar1 + 4))(puVar2 + 2), 0);
        puVar2[0xb] = (undefined4)(uVar3);
        piVar1 = (int *)((int *)param_2[9]);
        if ((int *)(piVar1) != (int *)(0x0)) {
          (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
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


// Reference entry 10da4360; body size 12 bytes.
#line 1 "ENTRY_10da4360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10da4360(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10da4370; body size 5 bytes.
#line 1 "ENTRY_10da4370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10da4370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10da4380; body size 5 bytes.
#line 1 "ENTRY_10da4380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10da4380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10da4390; body size 5 bytes.
#line 1 "ENTRY_10da4390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10da4390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10da43a0; body size 5 bytes.
#line 1 "ENTRY_10da43a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10da43a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10da43b0; body size 6 bytes.
#line 1 "ENTRY_10da43b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10da43b0(void)

{
  return (undefined4)(0x41);
}


// Reference entry 10da43c0; body size 6 bytes.
#line 1 "ENTRY_10da43c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10da43c0(void)

{
  return (undefined4)(0x81);
}


// Reference entry 10da43d0; body size 6 bytes.
#line 1 "ENTRY_10da43d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10da43d0(void)

{
  return (char *)("SCIDateTimeManager");
}


// Reference entry 10da43e0; body size 40 bytes.
#line 1 "ENTRY_10da43e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10da43e0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 10da4420; body size 5 bytes.
#line 1 "ENTRY_10da4420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10da4420(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10da46d0; body size 27 bytes.
#line 1 "ENTRY_10da46d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10da46d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10da47f0; body size 3 bytes.
#line 1 "ENTRY_10da47f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da47f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10da4800; body size 10 bytes.
#line 1 "ENTRY_10da4800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10da4800(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10da4980; body size 42 bytes.
#line 1 "ENTRY_10da4980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10da4980(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl_EventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 10da49c0; body size 23 bytes.
#line 1 "ENTRY_10da49c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined8 * __fastcall FUN_10da49c0(undefined8 *param_1)

{
  *param_1 = (undefined8)(0);
  *(undefined4*)(param_1 + 1) = (undefined4)(0);
  *(undefined2*)((int)param_1 + 0xc) = (undefined2)(0);
  return (undefined8 *)(param_1);
}


// Reference entry 10da49e0; body size 127 bytes.
#line 1 "ENTRY_10da49e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10da49e0(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760<>(uVar2,"urn:schemas-upnp-org:service:AlarmClock:1","SetFormat",uVar3,param_3, param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACSetFormatAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetFormatAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetFormatAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10da4a80; body size 127 bytes.
#line 1 "ENTRY_10da4a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10da4a80(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760<>(uVar2,"urn:schemas-upnp-org:service:AlarmClock:1","SetTimeNow",uVar3,param_3, param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeNowAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeNowAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeNowAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10da4b20; body size 127 bytes.
#line 1 "ENTRY_10da4b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10da4b20(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760<>(uVar2,"urn:schemas-upnp-org:service:AlarmClock:1","SetTimeServer",uVar3,param_3
                     ,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeServerAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeServerAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeServerAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10da4bc0; body size 127 bytes.
#line 1 "ENTRY_10da4bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10da4bc0(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760<>(uVar2,"urn:schemas-upnp-org:service:AlarmClock:1","SetTimeZone",uVar3,param_3, param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeZoneAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeZoneAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeZoneAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10da4dc0; body size 9 bytes.
#line 1 "ENTRY_10da4dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10da4dc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIDateTimeManager);
  return (undefined4 *)(param_1);
}


// Reference entry 10da4dd0; body size 11 bytes.
#line 1 "ENTRY_10da4dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10da4dd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITimeZone);
  return (undefined4 *)(param_1);
}


// Reference entry 10da4de0; body size 9 bytes.
#line 1 "ENTRY_10da4de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10da4de0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITimeZone);
  return (undefined4 *)(param_1);
}


// Reference entry 10da5070; body size 34 bytes.
#line 1 "ENTRY_10da5070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10da5070(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  }
  return;
}


// Reference entry 10da50d0; body size 19 bytes.
#line 1 "ENTRY_10da50d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10da50d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10da50f0; body size 28 bytes.
#line 1 "ENTRY_10da50f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10da50f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACSetFormatAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetFormatAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetFormatAIOOp);
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


// Reference entry 10da5120; body size 28 bytes.
#line 1 "ENTRY_10da5120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10da5120(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeNowAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeNowAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeNowAIOOp);
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


// Reference entry 10da5150; body size 28 bytes.
#line 1 "ENTRY_10da5150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10da5150(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeServerAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeServerAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeServerAIOOp);
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


// Reference entry 10da5180; body size 28 bytes.
#line 1 "ENTRY_10da5180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10da5180(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeZoneAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeZoneAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeZoneAIOOp);
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


// Reference entry 10da5290; body size 7 bytes.
#line 1 "ENTRY_10da5290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10da5290(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10da52a0; body size 7 bytes.
#line 1 "ENTRY_10da52a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10da52a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10da5370; body size 18 bytes.
#line 1 "ENTRY_10da5370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10da5370(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 10da53b0; body size 5 bytes.
#line 1 "ENTRY_10da53b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da53b0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10da5460; body size 3 bytes.
#line 1 "ENTRY_10da5460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da5460(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10da5470; body size 3 bytes.
#line 1 "ENTRY_10da5470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da5470(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10da5480; body size 8 bytes.
#line 1 "ENTRY_10da5480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10da5480(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10da5490; body size 8 bytes.
#line 1 "ENTRY_10da5490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10da5490(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10da54a0; body size 29 bytes.
#line 1 "ENTRY_10da54a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10da54a0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 10da54d0; body size 29 bytes.
#line 1 "ENTRY_10da54d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10da54d0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 10da5b40; body size 6 bytes.
#line 1 "ENTRY_10da5b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10da5b40(void)

{
  return (char *)("SCDateTimeManager");
}


// Reference entry 10da5c80; body size 8 bytes.
#line 1 "ENTRY_10da5c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10da5c80(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10da5ca0; body size 4 bytes.
#line 1 "ENTRY_10da5ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da5ca0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10da5cb0; body size 7 bytes.
#line 1 "ENTRY_10da5cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10da5cb0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10da5cd0; body size 26 bytes.
#line 1 "ENTRY_10da5cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10da5cd0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10da5cf0; body size 26 bytes.
#line 1 "ENTRY_10da5cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10da5cf0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10da5d10; body size 76 bytes.
#line 1 "ENTRY_10da5d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10da5d10(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1), 0);
      *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar2);
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) != (int *)(0x0)) {
        (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
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


// Reference entry 10da5d70; body size 10 bytes.
#line 1 "ENTRY_10da5d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10da5d70(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10da6850; body size 32 bytes.
#line 1 "ENTRY_10da6850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10da6850(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x3c) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 10da68b0; body size 21 bytes.
#line 1 "ENTRY_10da68b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __stdcall FUN_10da68b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCDateTimeManager");
  return (SCStr *)(param_1);
}


// Reference entry 10da68d0; body size 17 bytes.
#line 1 "ENTRY_10da68d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10da68d0(int param_1)

{
  thunk_FUN_1115c530(*(undefined1 *)(param_1 + 0x14d));
  return;
}


// Reference entry 10da6b60; body size 17 bytes.
#line 1 "ENTRY_10da6b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10da6b60(int param_1)

{
  thunk_FUN_1115c560(*(undefined1 *)(param_1 + 0x14c));
  return;
}


// Reference entry 10da73c0; body size 6 bytes.
#line 1 "ENTRY_10da73c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10da73c0(void)

{
  return (char *)("SCIDateTimeManager");
}


// Reference entry 10da7520; body size 3 bytes.
#line 1 "ENTRY_10da7520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da7520(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10da7530; body size 3 bytes.
#line 1 "ENTRY_10da7530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da7530(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10da7800; body size 28 bytes.
#line 1 "ENTRY_10da7800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10da7800(undefined4 *param_1)

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


// Reference entry 10da7830; body size 28 bytes.
#line 1 "ENTRY_10da7830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10da7830(undefined4 *param_1)

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


// Reference entry 10da7860; body size 11 bytes.
#line 1 "ENTRY_10da7860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10da7860(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_1145c720(param_2,param_3,"%04hx%02hx%02hx%02hx%02hx%04hx%02hx%02hx%02hx%02hx%04hx", *(undefined2 *)(param_1 + 0x122),*(undefined1 *)(param_1 + 0x124), *(undefined1 *)(param_1 + 0x125),*(undefined1 *)(param_1 + 0x126), *(undefined1 *)(param_1 + 0x127),*(undefined2 *)(param_1 + 0x128), *(undefined1 *)(param_1 + 0x12a),*(undefined1 *)(param_1 + 299), *(undefined1 *)(param_1 + 300),*(undefined1 *)(param_1 + 0x12d), *(undefined2 *)(param_1 + 0x12e));
  return;
}


// Reference entry 10da7e50; body size 16 bytes.
#line 1 "ENTRY_10da7e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10da7e50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10da8110; body size 3 bytes.
#line 1 "ENTRY_10da8110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da8110(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10da8120; body size 3 bytes.
#line 1 "ENTRY_10da8120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da8120(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10da8cc0; body size 7 bytes.
#line 1 "ENTRY_10da8cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10da8cc0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10da8cd0; body size 3 bytes.
#line 1 "ENTRY_10da8cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10da8cd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10da8ce0; body size 28 bytes.
#line 1 "ENTRY_10da8ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10da8ce0(undefined4 *param_1)

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


// Reference entry 10da8e90; body size 11 bytes.
#line 1 "ENTRY_10da8e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10da8e90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  thunk_FUN_106845c0(param_1);

}


// Reference entry 10da8ed0; body size 7 bytes.
#line 1 "ENTRY_10da8ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10da8ed0(int param_1)

{
  return (int)(param_1 + 0x104);
}


// Reference entry 10da8ee0; body size 7 bytes.
#line 1 "ENTRY_10da8ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10da8ee0(int param_1)

{
  return (int)(param_1 + 0x11c);
}


// Reference entry 10da94e0; body size 7 bytes.
#line 1 "ENTRY_10da94e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10da94e0(int param_1)

{
  return (int)(param_1 + 0x124);
}


// Reference entry 10da94f0; body size 7 bytes.
#line 1 "ENTRY_10da94f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10da94f0(int param_1)

{
  return (int)(param_1 + 0x13c);
}


// Reference entry 10da9500; body size 11 bytes.
#line 1 "ENTRY_10da9500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10da9500(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x1688), 0);


  uVar2 = (uint)(DAT_12126b84);

  pvVar3 = (void *)(operator_new(0x13790), 0);

  if ((void *)(pvVar3) == (void *)(0x0)) {
    iVar4 = (int)(0);
  }
  else {
    iVar4 = (int)(piVar1[2]);
    iVar4 = (int)(thunk_FUN_111d0560(iVar4 + 0x1528,iVar4 + 0x1453,iVar4 + 0x124,iVar4 + 0x925, iVar4 + 0x104,iVar4 + 0x1494), 0);
  }

  iVar5 = (int)((**(code **)(*piVar1 + 0xc))(uVar2), 0);
  puVar6 = (undefined4 *)(operator_new(0x40), 0);

  if ((undefined4 *)(puVar6) == (undefined4 *)(0x0)) {
    puVar6 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    thunk_FUN_11261e50();
    *puVar6 = (undefined4)((uint)&ghidra_vftable_RSonosRefreshAuthTokenOp);
    puVar6[2] = (undefined4)((uint)&ghidra_vftable_RSonosRefreshAuthTokenOp);
    puVar6[7] = (undefined4)(0);
    puVar6[8] = (undefined4)(&DAT_122f1250);
    puVar6[9] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
    *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(3);
    puVar6[10] = (undefined4)(iVar4);
    if (iVar4 != 0) {
      thunk_FUN_1123fce0(iVar4 + 4);
    }
    puVar6[0xb] = (undefined4)(0);
    puVar6[9] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
    puVar6[0xc] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
    *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(5);
    puVar6[0xd] = (undefined4)(iVar5);
    if (iVar5 != 0) {
      thunk_FUN_1123fce0(iVar5 + 4);
    }
    puVar6[0xe] = (undefined4)(0);
    puVar6[0xc] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
    *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(6);
    *(undefined1*)(puVar6 + 0xf) = (undefined1)(0);
    pvVar3 = (void *)(operator_new(0x988), 0);
    uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(7)));
    if ((void *)(pvVar3) == (void *)(0x0)) {
      puVar6[7] = (undefined4)(0);
    }
    else {
      uVar7 = (undefined4)(thunk_FUN_1124e200(), 0);
      puVar6[7] = (undefined4)(uVar7);
    }
  }
  *param_2 = (undefined4)(puVar6);

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10da97a0; body size 6 bytes.
#line 1 "ENTRY_10da97a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10da97a0(void)

{
  return (undefined4)(DAT_122e8d28);
}


// Reference entry 10da97b0; body size 7 bytes.
#line 1 "ENTRY_10da97b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10da97b0(int param_1)

{
  return (int)(param_1 + 0x1453);
}


// Reference entry 10da97c0; body size 7 bytes.
#line 1 "ENTRY_10da97c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10da97c0(int param_1)

{
  return (int)(param_1 + 0x146b);
}


// Reference entry 10da9a60; body size 12 bytes.
#line 1 "ENTRY_10da9a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_10da9a60(int param_1)

{
  return (uint)(*(uint *)(param_1 + 0x130) >> 0x15 & 0xffffff01);
}


// Reference entry 10da9a70; body size 9 bytes.
#line 1 "ENTRY_10da9a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

byte __fastcall FUN_10da9a70(int param_1)

{
  return (byte)(*(byte *)(param_1 + 0x132) & 1);
}


// Reference entry 10da9de0; body size 33 bytes.
#line 1 "ENTRY_10da9de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10da9de0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10da9e10; body size 18 bytes.
#line 1 "ENTRY_10da9e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10da9e10(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10da9fe0; body size 7 bytes.
#line 1 "ENTRY_10da9fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10da9fe0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10da9ff0; body size 33 bytes.
#line 1 "ENTRY_10da9ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10da9ff0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10daa020; body size 5 bytes.
#line 1 "ENTRY_10daa020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10daa020(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10daa030; body size 36 bytes.
#line 1 "ENTRY_10daa030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10daa030(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10daa060; body size 5 bytes.
#line 1 "ENTRY_10daa060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10daa060(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10daa0a0; body size 13 bytes.
#line 1 "ENTRY_10daa0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10daa0a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10daa0b0; body size 3 bytes.
#line 1 "ENTRY_10daa0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10daa0b0(void)

{
  return;
}


// Reference entry 10daa0c0; body size 36 bytes.
#line 1 "ENTRY_10daa0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10daa0c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10da9e30(puVar1,param_2);
  return;
}


// Reference entry 10daa0f0; body size 5 bytes.
#line 1 "ENTRY_10daa0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10daa0f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10daa100; body size 5 bytes.
#line 1 "ENTRY_10daa100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10daa100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10daa150; body size 11 bytes.
#line 1 "ENTRY_10daa150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10daa150(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10daa160; body size 11 bytes.
#line 1 "ENTRY_10daa160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10daa160(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10daa6e0; body size 11 bytes.
#line 1 "ENTRY_10daa6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10daa6e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  thunk_FUN_106845c0(param_1);

}


// Reference entry 10daa6f0; body size 14 bytes.
#line 1 "ENTRY_10daa6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10daa6f0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10daa710; body size 14 bytes.
#line 1 "ENTRY_10daa710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10daa710(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10daa730; body size 3 bytes.
#line 1 "ENTRY_10daa730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10daa730(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10daa740; body size 7 bytes.
#line 1 "ENTRY_10daa740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10daa740(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10daa750; body size 3 bytes.
#line 1 "ENTRY_10daa750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10daa750(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10daa760; body size 3 bytes.
#line 1 "ENTRY_10daa760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10daa760(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10daa770; body size 3 bytes.
#line 1 "ENTRY_10daa770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10daa770(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10daa780; body size 6 bytes.
#line 1 "ENTRY_10daa780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10daa780(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 10daa790; body size 6 bytes.
#line 1 "ENTRY_10daa790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10daa790(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 10daa7d0; body size 49 bytes.
#line 1 "ENTRY_10daa7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10daa7d0(uint param_2)
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


// Reference entry 10daa880; body size 3 bytes.
#line 1 "ENTRY_10daa880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10daa880(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10daa890; body size 3 bytes.
#line 1 "ENTRY_10daa890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10daa890(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10daa8a0; body size 3 bytes.
#line 1 "ENTRY_10daa8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10daa8a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10daa8b0; body size 3 bytes.
#line 1 "ENTRY_10daa8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10daa8b0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10daa8c0; body size 38 bytes.
#line 1 "ENTRY_10daa8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10daa8c0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10daa8f0; body size 27 bytes.
#line 1 "ENTRY_10daa8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10daa8f0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10daa920; body size 27 bytes.
#line 1 "ENTRY_10daa920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10daa920(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10daa960; body size 7 bytes.
#line 1 "ENTRY_10daa960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10daa960(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x151c));
}


// Reference entry 10daa970; body size 7 bytes.
#line 1 "ENTRY_10daa970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10daa970(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1534));
}


// Reference entry 10daa9c0; body size 87 bytes.
#line 1 "ENTRY_10daa9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10daa9c0(uint param_1)

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


// Reference entry 10daaa30; body size 11 bytes.
#line 1 "ENTRY_10daaa30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10daaa30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10daab90; body size 9 bytes.
#line 1 "ENTRY_10daab90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10daab90(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10daaba0; body size 11 bytes.
#line 1 "ENTRY_10daaba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10daaba0(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 0x1688) + 0xc))();
  return;
}


// Reference entry 10dab3d0; body size 9 bytes.
#line 1 "ENTRY_10dab3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dab3d0(int *param_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*param_1 == (int)((param_1))[1])));
}


// Reference entry 10dab3e0; body size 12 bytes.
#line 1 "ENTRY_10dab3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dab3e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10dab3f0; body size 42 bytes.
#line 1 "ENTRY_10dab3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dab3f0(undefined4 *param_2,void *param_3)
{
  int param_1 = (int )this;
  memmove(param_3,(char *)((int)param_3 + 4),*(int *)(param_1 + 4) - ((int)param_3 + 4));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -4);
  *param_2 = (undefined4)(param_3);
  return;
}


// Reference entry 10dab490; body size 24 bytes.
#line 1 "ENTRY_10dab490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10dab490(undefined4 param_1)

{
  short sVar1;
  
  sVar1 = (short)(thunk_FUN_111e3f80(param_1), 0);
  return (bool)(sVar1 == 0);
}


// Reference entry 10dac930; body size 6 bytes.
#line 1 "ENTRY_10dac930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dac930(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10dac940; body size 6 bytes.
#line 1 "ENTRY_10dac940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dac940(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10dadc30; body size 3 bytes.
#line 1 "ENTRY_10dadc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dadc30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10dadc40; body size 36 bytes.
#line 1 "ENTRY_10dadc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dadc40(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10da9e30(puVar1,param_2);
  return;
}


// Reference entry 10dadc70; body size 20 bytes.
#line 1 "ENTRY_10dadc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dadc70(int *param_1)

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


// Reference entry 10dadd60; body size 9 bytes.
#line 1 "ENTRY_10dadd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10dadd60(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10dae360; body size 5 bytes.
#line 1 "ENTRY_10dae360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10dae360(char *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  
  pcVar6 = (char *)((char *)*param_1);
  if ((char *)(pcVar6) == (char *)(0x0)) {
    iVar3 = (int)(0);
  }
  else {
    iVar3 = (int)(*(int *)(pcVar6 + -0xc));
    if (iVar3 == 0) {
      pcVar2 = (char *)(pcVar6);
      do {
        cVar1 = (char)(*pcVar2);
        pcVar2 = (char *)(pcVar2 + 1);
      } while (cVar1 != '\0');
      iVar3 = (int)((int)pcVar2 - (int)(pcVar6 + 1));
      *(int*)(pcVar6 + -0xc) = (int)(iVar3);
    }
  }
  pcVar6 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar6);
    pcVar6 = (char *)(pcVar6 + 1);
  } while (cVar1 != '\0');
  uVar4 = (undefined4)(thunk_FUN_111a1220<>(pcVar6 + (iVar3 - (int)(param_2 + 1))), 0);
  if (*param_1 == (int)((0))) {
    iVar5 = (int)(0);
  }
  else {
    iVar5 = (int)(*(int *)(*param_1 + -4));
  }
  thunk_FUN_1145fa40(uVar4,param_2,iVar5 + 1);
  *(char**)(*param_1 + -0xc) = (char *)(pcVar6 + (iVar3 - (int)(param_2 + 1)));
  return (int *)(param_1);
}


// Reference entry 10db1dc0; body size 16 bytes.
#line 1 "ENTRY_10db1dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10db1dc0(uint param_2)
{
  int param_1 = (int )this;
  *(uint*)(param_1 + 4) = (uint)(*(uint *)(param_1 + 4) & ~(1 << (param_2 & 0x1f)));
  return;
}


// Reference entry 10db1de0; body size 48 bytes.
#line 1 "ENTRY_10db1de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10db1de0(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)(*(uint *)(param_1 + 4) & 1);
  uVar2 = (uint)(0);
  uVar4 = (uint)(1);
  do {
    if (param_2 < uVar3) {
      return;
    }
    uVar4 = (uint)(uVar4 * 2);
    uVar2 = (uint)(uVar2 + 1);
    uVar1 = (uint)(uVar3 + 1);
    if ((*(uint *)(param_1 + 4) & uVar4) == 0) {
      uVar1 = (uint)(uVar3);
    }
    uVar3 = (uint)(uVar1);
  } while (uVar2 < 0x20);
  return;
}


// Reference entry 10db1e20; body size 47 bytes.
#line 1 "ENTRY_10db1e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10db1e20(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)(param_2 & 1);
  uVar2 = (uint)(0);
  uVar4 = (uint)(1);
  do {
    if (param_1 < uVar3) {
      return;
    }
    uVar4 = (uint)(uVar4 * 2);
    uVar2 = (uint)(uVar2 + 1);
    uVar1 = (uint)(uVar3 + 1);
    if ((param_2 & uVar4) == 0) {
      uVar1 = (uint)(uVar3);
    }
    uVar3 = (uint)(uVar1);
  } while (uVar2 < 0x20);
  return;
}


// Reference entry 10db1fe0; body size 4 bytes.
#line 1 "ENTRY_10db1fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10db1fe0(int param_1)

{
  return (int)(param_1 + 0xc);
}


// Reference entry 10db1ff0; body size 40 bytes.
#line 1 "ENTRY_10db1ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10db1ff0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 10db21e0; body size 56 bytes.
#line 1 "ENTRY_10db21e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db21e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x38), 0);
  if (((char *)(pcVar1) == (char *)(0x0)) || (*pcVar1 == (char)(('\0')))) {
    pcVar1 = (char *)(*(char **)(param_1 + 0xc), 0);
    *param_2 = (undefined4)(pcVar1);
    if ((char *)(pcVar1) == (char *)(0x0)) {
      return (undefined4 *)(param_2);
    }
  }
  else {
    *param_2 = (undefined4)(pcVar1);
  }
  if (*(int *)(pcVar1 + -0x10) < 0xffff) {
    thunk_FUN_1123fce0(pcVar1 + -0x10);
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10db2480; body size 20 bytes.
#line 1 "ENTRY_10db2480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db2480(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10db24a0; body size 25 bytes.
#line 1 "ENTRY_10db24a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db24a0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10db24c0; body size 22 bytes.
#line 1 "ENTRY_10db24c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db24c0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10db24e0; body size 22 bytes.
#line 1 "ENTRY_10db24e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db24e0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10db2800; body size 20 bytes.
#line 1 "ENTRY_10db2800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db2800(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10db2820; body size 25 bytes.
#line 1 "ENTRY_10db2820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db2820(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10db2840; body size 11 bytes.
#line 1 "ENTRY_10db2840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db2840(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10db2850; body size 11 bytes.
#line 1 "ENTRY_10db2850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db2850(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10db2860; body size 22 bytes.
#line 1 "ENTRY_10db2860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db2860(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10db2880; body size 22 bytes.
#line 1 "ENTRY_10db2880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db2880(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10db28a0; body size 11 bytes.
#line 1 "ENTRY_10db28a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db28a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10db28b0; body size 11 bytes.
#line 1 "ENTRY_10db28b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db28b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10db28c0; body size 22 bytes.
#line 1 "ENTRY_10db28c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db28c0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10db28e0; body size 27 bytes.
#line 1 "ENTRY_10db28e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db28e0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10db2910; body size 22 bytes.
#line 1 "ENTRY_10db2910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db2910(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10db2930; body size 27 bytes.
#line 1 "ENTRY_10db2930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db2930(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10db2960; body size 11 bytes.
#line 1 "ENTRY_10db2960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db2960(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10db2970; body size 11 bytes.
#line 1 "ENTRY_10db2970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db2970(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10db2980; body size 13 bytes.
#line 1 "ENTRY_10db2980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10db2980(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10db2990; body size 13 bytes.
#line 1 "ENTRY_10db2990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10db2990(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10db2a60; body size 5 bytes.
#line 1 "ENTRY_10db2a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db2a60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db2a70; body size 5 bytes.
#line 1 "ENTRY_10db2a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db2a70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db2a80; body size 31 bytes.
#line 1 "ENTRY_10db2a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10db2a80(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = (uint)(*param_2), *(int *)(param_1 + 0x10) <= (int)(in_EAX))) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10db2ab0; body size 31 bytes.
#line 1 "ENTRY_10db2ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10db2ab0(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = (uint)(*param_2), *(int *)(param_1 + 0x10) <= (int)(in_EAX))) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10db2f20; body size 7 bytes.
#line 1 "ENTRY_10db2f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db2f20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10db2f30; body size 7 bytes.
#line 1 "ENTRY_10db2f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db2f30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10db2f40; body size 5 bytes.
#line 1 "ENTRY_10db2f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db2f40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db2f50; body size 5 bytes.
#line 1 "ENTRY_10db2f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db2f50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db2f60; body size 22 bytes.
#line 1 "ENTRY_10db2f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10db2f60(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 10db2f80; body size 22 bytes.
#line 1 "ENTRY_10db2f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10db2f80(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 10db2fa0; body size 22 bytes.
#line 1 "ENTRY_10db2fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10db2fa0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 10db2fc0; body size 22 bytes.
#line 1 "ENTRY_10db2fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10db2fc0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 10db2fe0; body size 15 bytes.
#line 1 "ENTRY_10db2fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db2fe0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10db3000; body size 15 bytes.
#line 1 "ENTRY_10db3000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db3000(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10db3020; body size 5 bytes.
#line 1 "ENTRY_10db3020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db3020(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db3030; body size 5 bytes.
#line 1 "ENTRY_10db3030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db3030(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db3040; body size 5 bytes.
#line 1 "ENTRY_10db3040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db3040(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db3050; body size 5 bytes.
#line 1 "ENTRY_10db3050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db3050(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db3060; body size 5 bytes.
#line 1 "ENTRY_10db3060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db3060(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db3070; body size 5 bytes.
#line 1 "ENTRY_10db3070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db3070(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db3080; body size 5 bytes.
#line 1 "ENTRY_10db3080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db3080(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db3090; body size 5 bytes.
#line 1 "ENTRY_10db3090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db3090(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db30a0; body size 11 bytes.
#line 1 "ENTRY_10db30a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10db30a0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10db30b0; body size 11 bytes.
#line 1 "ENTRY_10db30b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10db30b0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10db30c0; body size 5 bytes.
#line 1 "ENTRY_10db30c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db30c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db30d0; body size 5 bytes.
#line 1 "ENTRY_10db30d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db30d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db30e0; body size 5 bytes.
#line 1 "ENTRY_10db30e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db30e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db30f0; body size 18 bytes.
#line 1 "ENTRY_10db30f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db30f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10db3110; body size 18 bytes.
#line 1 "ENTRY_10db3110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db3110(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10db3230; body size 13 bytes.
#line 1 "ENTRY_10db3230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db3230(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10db3240; body size 13 bytes.
#line 1 "ENTRY_10db3240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db3240(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10db3290; body size 19 bytes.
#line 1 "ENTRY_10db3290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10db3290(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10db3340; body size 19 bytes.
#line 1 "ENTRY_10db3340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10db3340(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10db3360; body size 19 bytes.
#line 1 "ENTRY_10db3360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10db3360(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10db3740; body size 18 bytes.
#line 1 "ENTRY_10db3740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10db3740(int *param_1,int *param_2)

{
  return (bool)(*param_1 < (int)(*(param_2)));
}


// Reference entry 10db37a0; body size 14 bytes.
#line 1 "ENTRY_10db37a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10db37a0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10db37c0; body size 14 bytes.
#line 1 "ENTRY_10db37c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10db37c0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10db37e0; body size 3 bytes.
#line 1 "ENTRY_10db37e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10db37e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db37f0; body size 3 bytes.
#line 1 "ENTRY_10db37f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10db37f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db3800; body size 3 bytes.
#line 1 "ENTRY_10db3800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10db3800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db3810; body size 3 bytes.
#line 1 "ENTRY_10db3810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10db3810(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db3820; body size 3 bytes.
#line 1 "ENTRY_10db3820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10db3820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db3830; body size 3 bytes.
#line 1 "ENTRY_10db3830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10db3830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db3840; body size 3 bytes.
#line 1 "ENTRY_10db3840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10db3840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db3850; body size 3 bytes.
#line 1 "ENTRY_10db3850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10db3850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db3860; body size 3 bytes.
#line 1 "ENTRY_10db3860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10db3860(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db3870; body size 3 bytes.
#line 1 "ENTRY_10db3870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10db3870(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db3da0; body size 79 bytes.
#line 1 "ENTRY_10db3da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10db3da0(int param_2)
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


// Reference entry 10db3e10; body size 79 bytes.
#line 1 "ENTRY_10db3e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10db3e10(int param_2)
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


// Reference entry 10db3e80; body size 11 bytes.
#line 1 "ENTRY_10db3e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10db3e80(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10db3e90; body size 11 bytes.
#line 1 "ENTRY_10db3e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10db3e90(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10db3ea0; body size 83 bytes.
#line 1 "ENTRY_10db3ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10db3ea0(int *param_2)
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


// Reference entry 10db3f10; body size 83 bytes.
#line 1 "ENTRY_10db3f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10db3f10(int *param_2)
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


// Reference entry 10db4870; body size 8 bytes.
#line 1 "ENTRY_10db4870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10db4870(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10db4880; body size 60 bytes.
#line 1 "ENTRY_10db4880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10db4880(int param_1,int param_2)

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


// Reference entry 10db48d0; body size 60 bytes.
#line 1 "ENTRY_10db48d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10db48d0(int param_1,int param_2)

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


// Reference entry 10db4c60; body size 37 bytes.
#line 1 "ENTRY_10db4c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * FUN_10db4c60(SCStr *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    ((SCStr *)(param_1))->int_allocRep("album");
    return (SCStr *)(param_1);
  case 1:
    ((SCStr *)(param_1))->int_allocRep("artist");
    return (SCStr *)(param_1);
  case 2:
    ((SCStr *)(param_1))->int_allocRep("track");
    return (SCStr *)(param_1);
  case 3:
    ((SCStr *)(param_1))->int_allocRep("podcast");
    return (SCStr *)(param_1);
  default:
    ((SCStr *)(param_1))->int_allocRep("other");
    return (SCStr *)(param_1);
  }
}


// Reference entry 10db5610; body size 7 bytes.
#line 1 "ENTRY_10db5610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10db5610(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10db5620; body size 10 bytes.
#line 1 "ENTRY_10db5620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10db5620(uint param_2)
{
  int param_1 = (int )this;
  *(uint*)(param_1 + 0x6c) = (uint)(*(uint *)(param_1 + 0x6c) | param_2);
  return;
}


// Reference entry 10db5630; body size 6 bytes.
#line 1 "ENTRY_10db5630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db5630(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10db5640; body size 6 bytes.
#line 1 "ENTRY_10db5640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db5640(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10db5650; body size 6 bytes.
#line 1 "ENTRY_10db5650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db5650(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10db5660; body size 6 bytes.
#line 1 "ENTRY_10db5660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db5660(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10db5670; body size 16 bytes.
#line 1 "ENTRY_10db5670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10db5670(uint param_2)
{
  int param_1 = (int )this;
  *(uint*)(param_1 + 4) = (uint)(*(uint *)(param_1 + 4) | 1 << (param_2 & 0x1f));
  return;
}


// Reference entry 10db5690; body size 25 bytes.
#line 1 "ENTRY_10db5690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10db5690(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10db5750; body size 5 bytes.
#line 1 "ENTRY_10db5750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db5750(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db5d70; body size 7 bytes.
#line 1 "ENTRY_10db5d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db5d70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10db5d80; body size 138 bytes.
#line 1 "ENTRY_10db5d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * FUN_10db5d80(SCStr *param_1,SCStr *param_2,SCStr *param_3)

{
  int *piVar1;
  int iVar2;
  SCStr *this_;
  SCStr *pSVar3;
  
  if ((SCStr *)((param_2)) == (SCStr *)(param_1)) {
    return (SCStr *)(param_3);
  }
  do {
    pSVar3 = (SCStr *)(param_2 + -0x14);
    this_ = (SCStr *)(param_3 + -0x14);
    if ((SCStr *)((pSVar3)) != (SCStr *)(this_)) {
      ((SCStr *)(this_))->int_release();
      *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)pSVar3));
      ((SCStr *)(this_))->int_addref();
    }
    iVar2 = (int)(*(int *)(param_2 + -0x10));
    if ((int)(iVar2) != *(int *)(param_3 + -0x10)) {
      piVar1 = (int *)(*(int **)(param_3 + -0xc), 0);
      if ((int *)(piVar1) != (int *)(0x0)) {
        *(undefined4*)(param_3 + -0x10) = (undefined4)(0);
        *(undefined4*)(param_3 + -0xc) = (undefined4)(0);
        (**(code **)(*piVar1 + 8))();
        iVar2 = (int)(*(int *)(param_2 + -0x10));
      }
      *(int*)(param_3 + -0x10) = (int)(iVar2);
      piVar1 = (int *)(*(int **)(param_2 + -0xc), 0);
      *(int**)(param_3 + -0xc) = (int *)(piVar1);
      if ((int *)(piVar1) != (int *)(0x0)) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    *(undefined4*)(param_3 + -8) = (undefined4)(*(undefined4 *)(param_2 + -8));
    param_3[-4] = (SCStr)(param_2[-4]);
    param_3 = (SCStr *)(this_);
    param_2 = (SCStr *)(pSVar3);
  } while ((SCStr *)(pSVar3) != (SCStr *)(param_1));
  return (SCStr *)(this_);
}


// Reference entry 10db5e30; body size 139 bytes.
#line 1 "ENTRY_10db5e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * FUN_10db5e30(int *param_1,int *param_2,SCStr *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    piVar3 = (int *)(param_1 + 1);
    do {
      if ((SCStr *)((piVar3 + -1)) != (SCStr *)(param_3)) {
        ((SCStr *)(param_3))->int_release();
        *(int*)param_3 = (int)((SCStr *)(piVar3[-1]));
        ((SCStr *)(param_3))->int_addref();
      }
      iVar2 = (int)(*piVar3);
      if ((int)(iVar2) != *(int *)(param_3 + 4)) {
        piVar1 = (int *)(*(int **)(param_3 + 8), 0);
        if ((int *)(piVar1) != (int *)(0x0)) {
          *(undefined4*)(param_3 + 4) = (undefined4)(0);
          *(undefined4*)(param_3 + 8) = (undefined4)(0);
          (**(code **)(*piVar1 + 8))();
          iVar2 = (int)(*piVar3);
        }
        *(int*)(param_3 + 4) = (int)(iVar2);
        piVar1 = (int *)((int *)piVar3[1]);
        *(int**)(param_3 + 8) = (int *)(piVar1);
        if ((int *)(piVar1) != (int *)(0x0)) {
          (**(code **)(*piVar1 + 4))();
        }
      }
      *(int*)(param_3 + 0xc) = (int)(piVar3[2]);
      param_3[0x10] = (SCStr)(*(SCStr *)(piVar3 + 3));
      param_3 = (SCStr *)(param_3 + 0x14);
      piVar1 = (int *)(piVar3 + 4);
      piVar3 = (int *)(piVar3 + 5);
    } while ((int *)(piVar1) != (int *)(param_2));
    return (SCStr *)(param_3);
  }
  return (SCStr *)(param_3);
}


// Reference entry 10db5ee0; body size 5 bytes.
#line 1 "ENTRY_10db5ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db5ee0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db60d0; body size 5 bytes.
#line 1 "ENTRY_10db60d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db60d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db60e0; body size 5 bytes.
#line 1 "ENTRY_10db60e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db60e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db6660; body size 5 bytes.
#line 1 "ENTRY_10db6660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db6660(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db6670; body size 5 bytes.
#line 1 "ENTRY_10db6670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db6670(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db6680; body size 5 bytes.
#line 1 "ENTRY_10db6680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db6680(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db6690; body size 5 bytes.
#line 1 "ENTRY_10db6690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10db6690(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db66a0; body size 14 bytes.
#line 1 "ENTRY_10db66a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10db66a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10db66c0; body size 16 bytes.
#line 1 "ENTRY_10db66c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10db66c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10db6720; body size 21 bytes.
#line 1 "ENTRY_10db6720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db6720(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10db6740; body size 11 bytes.
#line 1 "ENTRY_10db6740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db6740(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10db6750; body size 9 bytes.
#line 1 "ENTRY_10db6750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10db6750(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10db6760; body size 11 bytes.
#line 1 "ENTRY_10db6760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db6760(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10db6770; body size 9 bytes.
#line 1 "ENTRY_10db6770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10db6770(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10db6780; body size 23 bytes.
#line 1 "ENTRY_10db6780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10db6780(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10db67a0; body size 3 bytes.
#line 1 "ENTRY_10db67a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10db67a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db67b0; body size 23 bytes.
#line 1 "ENTRY_10db67b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10db67b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10db67d0; body size 63 bytes.
#line 1 "ENTRY_10db67d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db67d0(undefined4 param_2,undefined4 param_3,char *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  char *pcVar1;
  
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoviewViewBuilder_HeaderMapping);
  if ((char *)(param_4) != (char *)(0x0)) {
    pcVar1 = (char *)(_strdup(param_4), 0);
    param_1[3] = (undefined4)(pcVar1);
    return (undefined4 *)(param_1);
  }
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10db6820; body size 93 bytes.
#line 1 "ENTRY_10db6820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10db6820(char *param_2,undefined4 param_3,undefined4 param_4,char *param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  char *pcVar1;
  
  param_1[1] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoviewViewBuilder_MenuItemMapping);
  if ((char *)(param_5) == (char *)(0x0)) {
    pcVar1 = (char *)((char *)0x0);
  }
  else {
    pcVar1 = (char *)(_strdup(param_5), 0);
  }
  param_1[4] = (undefined4)(pcVar1);
  if ((char *)(param_2) != (char *)(0x0)) {
    pcVar1 = (char *)(_strdup(param_2), 0);
    param_1[2] = (undefined4)(pcVar1);
    param_1[3] = (undefined4)(param_4);
    return (undefined4 *)(param_1);
  }
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 10db69e0; body size 9 bytes.
#line 1 "ENTRY_10db69e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10db69e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoViewAIOOpGeneratorCB);
  return (undefined4 *)(param_1);
}


// Reference entry 10db6b10; body size 28 bytes.
#line 1 "ENTRY_10db6b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10db6b10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10db6c40; body size 46 bytes.
#line 1 "ENTRY_10db6c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10db6c40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoviewMenuInfo);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *(undefined1*)(param_1 + 5) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10db80b0; body size 17 bytes.
#line 1 "ENTRY_10db80b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10db80b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoviewViewBuilder_HeaderMapping);
  free((void *)param_1[3]);
  return;
}


// Reference entry 10db80d0; body size 32 bytes.
#line 1 "ENTRY_10db80d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10db80d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoviewViewBuilder_MenuItemMapping);
  free((void *)param_1[4]);
  free((void *)param_1[2]);
  return;
}


// Reference entry 10db8ec0; body size 14 bytes.
#line 1 "ENTRY_10db8ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10db8ec0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10db8ee0; body size 14 bytes.
#line 1 "ENTRY_10db8ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10db8ee0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10db8f00; body size 15 bytes.
#line 1 "ENTRY_10db8f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10db8f00(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0x14);
}


// Reference entry 10db8f20; body size 3 bytes.
#line 1 "ENTRY_10db8f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10db8f20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10db8f30; body size 3 bytes.
#line 1 "ENTRY_10db8f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10db8f30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10db8f40; body size 7 bytes.
#line 1 "ENTRY_10db8f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10db8f40(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10db8f50; body size 3 bytes.
#line 1 "ENTRY_10db8f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10db8f50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10db8f60; body size 3 bytes.
#line 1 "ENTRY_10db8f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10db8f60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10db8f70; body size 3 bytes.
#line 1 "ENTRY_10db8f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10db8f70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10db8f80; body size 3 bytes.
#line 1 "ENTRY_10db8f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10db8f80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10db8f90; body size 6 bytes.
#line 1 "ENTRY_10db8f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10db8f90(int *param_1)

{
  *param_1 = (int)(*param_1 + 0x14);
  return (int *)(param_1);
}


// Reference entry 10db8fa0; body size 6 bytes.
#line 1 "ENTRY_10db8fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10db8fa0(int *param_1)

{
  *param_1 = (int)(*param_1 + 0x14);
  return (int *)(param_1);
}


// Reference entry 10db8fb0; body size 21 bytes.
#line 1 "ENTRY_10db8fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10db8fb0(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 0x14);
  return;
}


// Reference entry 10db8fd0; body size 17 bytes.
#line 1 "ENTRY_10db8fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10db8fd0(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 0x14);
  return (int *)(param_1);
}


// Reference entry 10db8ff0; body size 17 bytes.
#line 1 "ENTRY_10db8ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10db8ff0(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 0x14);
  return (int *)(param_1);
}


// Reference entry 10db98b0; body size 63 bytes.
#line 1 "ENTRY_10db98b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10db98b0(uint param_2)
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


// Reference entry 10db99b0; body size 3 bytes.
#line 1 "ENTRY_10db99b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10db99b0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10db99e0; body size 3 bytes.
#line 1 "ENTRY_10db99e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10db99e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db99f0; body size 3 bytes.
#line 1 "ENTRY_10db99f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10db99f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db9a00; body size 3 bytes.
#line 1 "ENTRY_10db9a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10db9a00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db9a10; body size 3 bytes.
#line 1 "ENTRY_10db9a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10db9a10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10db9a20; body size 13 bytes.
#line 1 "ENTRY_10db9a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10db9a20(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10db9a30; body size 3 bytes.
#line 1 "ENTRY_10db9a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10db9a30(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10db9a40; body size 6 bytes.
#line 1 "ENTRY_10db9a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10db9a40(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10db9dc0; body size 3 bytes.
#line 1 "ENTRY_10db9dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10db9dc0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10db9f40; body size 127 bytes.
#line 1 "ENTRY_10db9f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10db9f40(undefined4 param_2,undefined4 param_3,char *param_4)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  char *pcVar2;
  
  if (*(uint *)(param_1 + 0x1c) < 0x12) {
    puVar1 = (undefined4 *)(operator_new(0x10), 0);
    if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
      puVar1[1] = (undefined4)(param_2);
      puVar1[2] = (undefined4)(param_3);
      *puVar1 = (undefined4)((uint)&ghidra_vftable_SCInfoviewViewBuilder_HeaderMapping);
      if ((char *)(param_4) != (char *)(0x0)) {
        pcVar2 = (char *)(_strdup(param_4), 0);
        puVar1[3] = (undefined4)(pcVar2);
        *(undefined4**)(param_1 + 0x20 + *(int *)(param_1 + 0x1c) * 4) = (undefined4 *)(puVar1);
        *(int*)(param_1 + 0x1c) = (int)(*(int *)(param_1 + 0x1c) + 1);
        return;
      }
      puVar1[3] = (undefined4)(0);
      *(undefined4**)(param_1 + 0x20 + *(int *)(param_1 + 0x1c) * 4) = (undefined4 *)(puVar1);
      *(int*)(param_1 + 0x1c) = (int)(*(int *)(param_1 + 0x1c) + 1);
      return;
    }
    *(undefined4*)(param_1 + 0x20 + *(int *)(param_1 + 0x1c) * 4) = (undefined4)(0);
    *(int*)(param_1 + 0x1c) = (int)(*(int *)(param_1 + 0x1c) + 1);
  }
  return;
}


// Reference entry 10dba320; body size 163 bytes.
#line 1 "ENTRY_10dba320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dba320(char *param_2,undefined4 param_3,undefined4 param_4,char *param_5)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  char *pcVar2;
  
  if (*(uint *)(param_1 + 0x68) < 0x16) {
    puVar1 = (undefined4 *)(operator_new(0x14), 0);
    if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
      puVar1[1] = (undefined4)(param_3);
      *puVar1 = (undefined4)((uint)&ghidra_vftable_SCInfoviewViewBuilder_MenuItemMapping);
      if ((char *)(param_5) == (char *)(0x0)) {
        pcVar2 = (char *)((char *)0x0);
      }
      else {
        pcVar2 = (char *)(_strdup(param_5), 0);
      }
      puVar1[4] = (undefined4)(pcVar2);
      if ((char *)(param_2) != (char *)(0x0)) {
        pcVar2 = (char *)(_strdup(param_2), 0);
        puVar1[2] = (undefined4)(pcVar2);
        puVar1[3] = (undefined4)(param_4);
        *(undefined4**)(param_1 + 0x6c + *(int *)(param_1 + 0x68) * 4) = (undefined4 *)(puVar1);
        *(int*)(param_1 + 0x68) = (int)(*(int *)(param_1 + 0x68) + 1);
        return;
      }
      puVar1[2] = (undefined4)(0);
      puVar1[3] = (undefined4)(param_4);
      *(undefined4**)(param_1 + 0x6c + *(int *)(param_1 + 0x68) * 4) = (undefined4 *)(puVar1);
      *(int*)(param_1 + 0x68) = (int)(*(int *)(param_1 + 0x68) + 1);
      return;
    }
    *(undefined4*)(param_1 + 0x6c + *(int *)(param_1 + 0x68) * 4) = (undefined4)(0);
    *(int*)(param_1 + 0x68) = (int)(*(int *)(param_1 + 0x68) + 1);
  }
  return;
}


// Reference entry 10dba3f0; body size 90 bytes.
#line 1 "ENTRY_10dba3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10dba3f0(uint param_1)

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


// Reference entry 10dbb6c0; body size 11 bytes.
#line 1 "ENTRY_10dbb6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dbb6c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10dbc200; body size 8 bytes.
#line 1 "ENTRY_10dbc200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_10dbc200(uint *param_1)

{
  return (uint)(*param_1 >> 5 & 0xffffff01);
}


// Reference entry 10dbc210; body size 8 bytes.
#line 1 "ENTRY_10dbc210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_10dbc210(uint *param_1)

{
  return (uint)(*param_1 >> 0xd & 0xffffff01);
}


// Reference entry 10dbc220; body size 23 bytes.
#line 1 "ENTRY_10dbc220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10dbc220(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0x14);
}


// Reference entry 10dbc9b0; body size 11 bytes.
#line 1 "ENTRY_10dbc9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10dbc9b0(undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
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

  pvVar3 = (void *)(operator_new(0x27f68), 0);

  if ((void *)(pvVar3) == (void *)(0x0)) {
    uVar5 = (undefined4)(0);
  }
  else {
    iVar8 = (int)(piVar1[2]);
    uVar5 = (undefined4)(param_4);
    uVar6 = (undefined4)(param_3);
    uVar7 = (undefined4)(param_5);
    uVar4 = (undefined4)((**(code **)(*piVar1 + 8))(iVar8,param_4,param_3,param_5,uVar2), 0);
    uVar5 = (undefined4)(thunk_FUN_111ce020(uVar4,iVar8,uVar5,uVar6,uVar7), 0);
  }

  pvVar3 = (void *)(operator_new(0x27f68), 0);

  if ((void *)(pvVar3) == (void *)(0x0)) {
    uVar6 = (undefined4)(0);
  }
  else {
    iVar8 = (int)(piVar1[2]);
    uVar6 = (undefined4)((**(code **)(*piVar1 + 8))(iVar8,param_4,param_3,param_5), 0);
    uVar6 = (undefined4)(thunk_FUN_111ce020(uVar6,iVar8,param_4,param_3,param_5), 0);
  }

  uVar7 = (undefined4)(thunk_FUN_111dd660(), 0);
  uVar4 = (undefined4)((**(code **)(*piVar1 + 0xc))(), 0);
  pvVar3 = (void *)(operator_new(100), 0);

  if ((void *)(pvVar3) == (void *)(0x0)) {
    uVar5 = (undefined4)(0);
  }
  else {
    uVar5 = (undefined4)(thunk_FUN_111ca9f0<>(uVar5,uVar6,uVar7,uVar4,&DAT_122f1250), 0);
  }
  *param_2 = (undefined4)(uVar5);

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10dbda00; body size 12 bytes.
#line 1 "ENTRY_10dbda00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dbda00(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10dc3df0; body size 4 bytes.
#line 1 "ENTRY_10dc3df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10dc3df0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x14));
}


// Reference entry 10dc3e20; body size 8 bytes.
#line 1 "ENTRY_10dc3e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dc3e20(int param_1)

{
  *(undefined1*)(param_1 + 0xd8) = (undefined1)(1);
  return;
}


// Reference entry 10dc5650; body size 4 bytes.
#line 1 "ENTRY_10dc5650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dc5650(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xc));
}


// Reference entry 10dc5660; body size 7 bytes.
#line 1 "ENTRY_10dc5660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dc5660(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xcc));
}


// Reference entry 10dc5670; body size 23 bytes.
#line 1 "ENTRY_10dc5670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10dc5670(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xd4));
  return (SCStr *)(param_2);
}


// Reference entry 10dc5710; body size 4 bytes.
#line 1 "ENTRY_10dc5710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dc5710(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10dc5720; body size 40 bytes.
#line 1 "ENTRY_10dc5720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10dc5720(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0xc));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 10dc5910; body size 40 bytes.
#line 1 "ENTRY_10dc5910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10dc5910(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x28));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 10dc5950; body size 4 bytes.
#line 1 "ENTRY_10dc5950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dc5950(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10dc5960; body size 4 bytes.
#line 1 "ENTRY_10dc5960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dc5960(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10dc5c10; body size 4 bytes.
#line 1 "ENTRY_10dc5c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dc5c10(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xc));
}


// Reference entry 10dc5c80; body size 31 bytes.
#line 1 "ENTRY_10dc5c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::m_FUN_10dc5c80(uint param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if ((uint)(param_2) < *(uint *)(param_1 + 4)) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 8 + param_2 * 4), 0);
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)(puVar1) != (undefined1 *)(0x0)) {
      puVar2 = (undefined1 *)(puVar1);
    }
    return (undefined1 *)(puVar2);
  }
  return (undefined1 *)((undefined1 *)0x0);
}


// Reference entry 10dc5cb0; body size 40 bytes.
#line 1 "ENTRY_10dc5cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10dc5cb0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 4));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 10dc5cf0; body size 7 bytes.
#line 1 "ENTRY_10dc5cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10dc5cf0(int param_1)

{
  return (int)(param_1 + 0xb0);
}


// Reference entry 10dc5d00; body size 4 bytes.
#line 1 "ENTRY_10dc5d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dc5d00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10dc5d20; body size 4 bytes.
#line 1 "ENTRY_10dc5d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dc5d20(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10dc5d30; body size 4 bytes.
#line 1 "ENTRY_10dc5d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dc5d30(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10dc5d60; body size 40 bytes.
#line 1 "ENTRY_10dc5d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10dc5d60(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x14));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 10dc5da0; body size 25 bytes.
#line 1 "ENTRY_10dc5da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10dc5da0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x7c), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10dc5dc0; body size 5 bytes.
#line 1 "ENTRY_10dc5dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_10dc5dc0(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x78));
}


// Reference entry 10dc5f20; body size 4 bytes.
#line 1 "ENTRY_10dc5f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10dc5f20(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x18));
}


// Reference entry 10dc64c0; body size 40 bytes.
#line 1 "ENTRY_10dc64c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10dc64c0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 8));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 10dc68b0; body size 31 bytes.
#line 1 "ENTRY_10dc68b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::m_FUN_10dc68b0(uint param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if ((uint)(param_2) < *(uint *)(param_1 + 4)) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x18 + param_2 * 4), 0);
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)(puVar1) != (undefined1 *)(0x0)) {
      puVar2 = (undefined1 *)(puVar1);
    }
    return (undefined1 *)(puVar2);
  }
  return (undefined1 *)((undefined1 *)0x0);
}


// Reference entry 10dc73c0; body size 25 bytes.
#line 1 "ENTRY_10dc73c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dc73c0(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0xcc) != (int *)((0x0))) {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0xcc) + 0x14))(), 0);
    if (0 < iVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10dc73e0; body size 24 bytes.
#line 1 "ENTRY_10dc73e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10dc73e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10db6330<>(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 10dc74c0; body size 67 bytes.
#line 1 "ENTRY_10dc74c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10dc74c0(byte *param_2)
{
  int param_1 = (int )this;
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  
  pbVar2 = (byte *)(*(byte **)(param_1 + 0x10), 0);
  uVar3 = (uint)(0);
  if ((byte *)(pbVar2) != (byte *)(0x0)) {
    do {
      bVar1 = (byte)(*pbVar2);
      bVar4 = (bool)((byte)(bVar1) < *param_2);
      if ((byte)(bVar1) != *param_2) {
LAB_10dc74f0:
        uVar3 = (uint)(-(uint)bVar4 | 1);
        goto LAB_10dc74f5;
      }
      if (bVar1 == 0) break;
      bVar1 = (byte)(pbVar2[1]);
      bVar4 = (bool)((byte)((bVar1)) < param_2[1]);
      if ((byte)((bVar1)) != param_2[1]) goto LAB_10dc74f0;
      pbVar2 = (byte *)(pbVar2 + 2);
      param_2 = (byte *)(param_2 + 2);
    } while (bVar1 != 0);
    uVar3 = (uint)(0);
LAB_10dc74f5:
    if (uVar3 == 0) {
      return (uint)(1);
    }
  }
  return (uint)(uVar3 & 0xffffff00);
}


// Reference entry 10dc7520; body size 6 bytes.
#line 1 "ENTRY_10dc7520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dc7520(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10dc7530; body size 6 bytes.
#line 1 "ENTRY_10dc7530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dc7530(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10dc75f0; body size 3 bytes.
#line 1 "ENTRY_10dc75f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dc75f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10dc7730; body size 5 bytes.
#line 1 "ENTRY_10dc7730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dc7730(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(int **)(param_1 + 4), 0);
  while ((int *)(piVar1) != (int *)(0x0)) {
    iVar2 = (int)(*piVar1);
    piVar1 = (int *)((int *)piVar1[1]);
    (**(code **)(iVar2 + 4))();
  }
  return;
}


// Reference entry 10dc7760; body size 14 bytes.
#line 1 "ENTRY_10dc7760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10dc7760(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)(*(undefined1 *)(param_1 + 0xd9));
  *(undefined1*)(param_1 + 0xd9) = (undefined1)(1);
  return (undefined1)(uVar1);
}


// Reference entry 10dc7a20; body size 39 bytes.
#line 1 "ENTRY_10dc7a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dc7a20(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0xe0));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10dc7a50; body size 10 bytes.
#line 1 "ENTRY_10dc7a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dc7a50(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x58) = (undefined4)(param_2);
  return;
}


// Reference entry 10dc7a60; body size 12 bytes.
#line 1 "ENTRY_10dc7a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dc7a60(undefined2 param_2)
{
  int param_1 = (int )this;
  *(undefined2*)(param_1 + 8) = (undefined2)(param_2);
  return;
}


// Reference entry 10dc7c30; body size 10 bytes.
#line 1 "ENTRY_10dc7c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dc7c30(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x54) = (undefined1)(param_2);
  return;
}


// Reference entry 10dc7c40; body size 10 bytes.
#line 1 "ENTRY_10dc7c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dc7c40(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x5c) = (undefined4)(param_2);
  return;
}


// Reference entry 10dc7c50; body size 39 bytes.
#line 1 "ENTRY_10dc7c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dc7c50(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0xdc));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10dc7c80; body size 10 bytes.
#line 1 "ENTRY_10dc7c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dc7c80(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_2);
  return;
}


// Reference entry 10dc9780; body size 12 bytes.
#line 1 "ENTRY_10dc9780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_10dc9780(int param_1)

{
  return (uint)(*(uint *)(param_1 + 0x130) >> 4 & 0xffffff01);
}


// Reference entry 10dc9790; body size 11 bytes.
#line 1 "ENTRY_10dc9790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_10dc9790(int param_1)

{
  return (uint)(((uint)((uint3)(*(uint *)(param_1 + 0x130) >> 9)) << 8 | (uint)((char)(*(uint *)(param_1 + 0x130) >> 1))) & 0xffffff01);
}


// Reference entry 10dcbdb0; body size 47 bytes.
#line 1 "ENTRY_10dcbdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dcbdb0(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  
  if ((*(char **)(param_1 + 0xb0) != (char *)((0x0))) && (**(char **)(param_1 + 0xb0) != '\0')) {
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x28) != (undefined1 *)((0x0))) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x28), 0);
    }
    cVar1 = (char)(thunk_FUN_110b8ef0(puVar2), 0);
    if (cVar1 == '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10dcbdf0; body size 23 bytes.
#line 1 "ENTRY_10dcbdf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dcbdf0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x28) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x28), 0);
  }
  thunk_FUN_110b9180(puVar1);
  return;
}


// Reference entry 10dcbe10; body size 29 bytes.
#line 1 "ENTRY_10dcbe10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __thiscall Recovered_Bulk::m_FUN_10dcbe10(int param_2)
{
  int param_1 = (int )this;
  if (param_2 != 0) {
    return (undefined1)(2);
  }
  return (undefined1)(*(char *)(param_1 + 0xa8) != '\0');
}


// Reference entry 10dcdee0; body size 5 bytes.
#line 1 "ENTRY_10dcdee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dcdee0(char *param_1)

{
  int iVar1;
  
  iVar1 = (int)(strncmp(param_1,"R:0/",4), 0);
  if (iVar1 == 0) {
    return (undefined4)(1);
  }
  if ((*param_1 == (char)(('H'))) && (iVar1 = (int)(strncmp(param_1 + 1,"R:0/",4), 0), iVar1 == 0)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10dcdef0; body size 6 bytes.
#line 1 "ENTRY_10dcdef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10dcdef0(void)

{
  return (char *)("SCIServicePopup");
}


// Reference entry 10dcdf00; body size 27 bytes.
#line 1 "ENTRY_10dcdf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dcdf00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10dce020; body size 21 bytes.
#line 1 "ENTRY_10dce020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dce020(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dce040; body size 9 bytes.
#line 1 "ENTRY_10dce040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dce040(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIServicePopup);
  return (undefined4 *)(param_1);
}


// Reference entry 10dce1d0; body size 7 bytes.
#line 1 "ENTRY_10dce1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dce1d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10dcee90; body size 17 bytes.
#line 1 "ENTRY_10dcee90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10dcee90(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_2))->m_op_ctor(param_1);
  return (SCStr *)(param_2);
}


// Reference entry 10dcef30; body size 20 bytes.
#line 1 "ENTRY_10dcef30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10dcef30(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 4));
  return (SCStr *)(param_2);
}


// Reference entry 10dcef50; body size 6 bytes.
#line 1 "ENTRY_10dcef50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10dcef50(void)

{
  return (char *)("SCIServicePopup");
}


// Reference entry 10dcfb50; body size 39 bytes.
#line 1 "ENTRY_10dcfb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dcfb50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dcfb80; body size 25 bytes.
#line 1 "ENTRY_10dcfb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dcfb80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dcfba0; body size 5 bytes.
#line 1 "ENTRY_10dcfba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dcfba0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dcfbb0; body size 5 bytes.
#line 1 "ENTRY_10dcfbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dcfbb0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dcfbc0; body size 91 bytes.
#line 1 "ENTRY_10dcfbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10dcfbc0(int *param_2)
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


// Reference entry 10dcfc40; body size 3 bytes.
#line 1 "ENTRY_10dcfc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dcfc40(void)

{
  return;
}


// Reference entry 10dcfc50; body size 33 bytes.
#line 1 "ENTRY_10dcfc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10dcfc50(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10dcfc80; body size 33 bytes.
#line 1 "ENTRY_10dcfc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10dcfc80(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10dcfcb0; body size 3 bytes.
#line 1 "ENTRY_10dcfcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dcfcb0(void)

{
  return;
}


// Reference entry 10dcfcc0; body size 3 bytes.
#line 1 "ENTRY_10dcfcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dcfcc0(void)

{
  return;
}


// Reference entry 10dcfcd0; body size 3 bytes.
#line 1 "ENTRY_10dcfcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dcfcd0(void)

{
  return;
}


// Reference entry 10dcfd90; body size 26 bytes.
#line 1 "ENTRY_10dcfd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dcfd90(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = (undefined4)(param_2[1]);
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar2 = (undefined4)(*param_2);
  puVar2[1] = (undefined4)(uVar1);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10dcff70; body size 7 bytes.
#line 1 "ENTRY_10dcff70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dcff70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10dcff80; body size 7 bytes.
#line 1 "ENTRY_10dcff80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dcff80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10dcff90; body size 7 bytes.
#line 1 "ENTRY_10dcff90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dcff90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10dcffa0; body size 16 bytes.
#line 1 "ENTRY_10dcffa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10dcffa0(int *param_1,int *param_2)

{
  return (int)(*param_2 - *param_1 >> 2);
}


// Reference entry 10dcffc0; body size 33 bytes.
#line 1 "ENTRY_10dcffc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10dcffc0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10dcfff0; body size 19 bytes.
#line 1 "ENTRY_10dcfff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  FUN_10dcfff0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3 + -1);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd0010; body size 13 bytes.
#line 1 "ENTRY_10dd0010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd0010(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10dd0020; body size 5 bytes.
#line 1 "ENTRY_10dd0020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd0020(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd0030; body size 5 bytes.
#line 1 "ENTRY_10dd0030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd0030(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd0040; body size 36 bytes.
#line 1 "ENTRY_10dd0040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10dd0040(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 3) * 8));
}


// Reference entry 10dd0070; body size 35 bytes.
#line 1 "ENTRY_10dd0070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10dd0070(void *param_1,int param_2)

{
  memset(param_1,0,param_2 * 4);
  return (void *)((char *)(param_2 * 4 + (int)param_1));
}


// Reference entry 10dd00a0; body size 27 bytes.
#line 1 "ENTRY_10dd00a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10dd00a0(void *param_1,int param_2)

{
  memset(param_1,0,param_2 - (int)param_1);
  return (int)(param_2);
}


// Reference entry 10dd00d0; body size 5 bytes.
#line 1 "ENTRY_10dd00d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd00d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd00e0; body size 5 bytes.
#line 1 "ENTRY_10dd00e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd00e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd00f0; body size 13 bytes.
#line 1 "ENTRY_10dd00f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd00f0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10dd0100; body size 19 bytes.
#line 1 "ENTRY_10dd0100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd0100(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_3[1]);
  *param_2 = (undefined4)(*param_3);
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 10dd0120; body size 3 bytes.
#line 1 "ENTRY_10dd0120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd0120(void)

{
  return;
}


// Reference entry 10dd0130; body size 3 bytes.
#line 1 "ENTRY_10dd0130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd0130(void)

{
  return;
}


// Reference entry 10dd0140; body size 45 bytes.
#line 1 "ENTRY_10dd0140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dd0140(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    uVar2 = (undefined4)(param_2[1]);
    *puVar1 = (undefined4)(*param_2);
    puVar1[1] = (undefined4)(uVar2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10dcfdb0(puVar1,param_2);
  return;
}


// Reference entry 10dd0180; body size 5 bytes.
#line 1 "ENTRY_10dd0180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd0180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd0190; body size 5 bytes.
#line 1 "ENTRY_10dd0190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd0190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd01a0; body size 5 bytes.
#line 1 "ENTRY_10dd01a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd01a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd01b0; body size 5 bytes.
#line 1 "ENTRY_10dd01b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd01b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd01c0; body size 33 bytes.
#line 1 "ENTRY_10dd01c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10dd01c0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10dd01f0; body size 54 bytes.
#line 1 "ENTRY_10dd01f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dd01f0(undefined4 *param_1)

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


// Reference entry 10dd0240; body size 27 bytes.
#line 1 "ENTRY_10dd0240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dd0240(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd0270; body size 16 bytes.
#line 1 "ENTRY_10dd0270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dd0270(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd02d0; body size 16 bytes.
#line 1 "ENTRY_10dd02d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dd02d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd03b0; body size 18 bytes.
#line 1 "ENTRY_10dd03b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd03b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd03d0; body size 37 bytes.
#line 1 "ENTRY_10dd03d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dd03d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd0400; body size 11 bytes.
#line 1 "ENTRY_10dd0400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd0400(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd0410; body size 11 bytes.
#line 1 "ENTRY_10dd0410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd0410(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd0420; body size 23 bytes.
#line 1 "ENTRY_10dd0420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dd0420(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd0440; body size 3 bytes.
#line 1 "ENTRY_10dd0440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd0440(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd0450; body size 3 bytes.
#line 1 "ENTRY_10dd0450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd0450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd0540; body size 23 bytes.
#line 1 "ENTRY_10dd0540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dd0540(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd0600; body size 9 bytes.
#line 1 "ENTRY_10dd0600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dd0600(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIWizard);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd1330; body size 5 bytes.
#line 1 "ENTRY_10dd1330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dd1330(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (int)(param_1[4]);
  if (iVar4 != 0) {
    do {
      iVar4 = (int)(iVar4 + -1);
      param_1[4] = (undefined4)(iVar4);
    } while (iVar4 != 0);
    param_1[3] = (undefined4)(0);
  }
  iVar4 = (int)(param_1[2]);
  while (iVar4 != 0) {
    iVar4 = (int)(iVar4 + -1);
    iVar2 = (int)(*(int *)(param_1[1] + iVar4 * 4));
    if (iVar2 != 0) {
      thunk_FUN_1148a50e(iVar2,0x10);
    }
  }
  iVar4 = (int)(param_1[1]);
  if (iVar4 != 0) {
    uVar3 = (uint)(param_1[2] * 4);
    iVar2 = (int)(iVar4);
    if (0xfff < uVar3) {
      iVar2 = (int)(*(int *)(iVar4 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar4 - iVar2) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar3);
  }
  uVar1 = (undefined4)(*param_1);
  param_1[2] = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)(0);
  thunk_FUN_1148a50e(uVar1,8);
  return;
}


// Reference entry 10dd1430; body size 7 bytes.
#line 1 "ENTRY_10dd1430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dd1430(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10dd1840; body size 12 bytes.
#line 1 "ENTRY_10dd1840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10dd1840(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 10dd1850; body size 12 bytes.
#line 1 "ENTRY_10dd1850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10dd1850(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 4);
}


// Reference entry 10dd1860; body size 3 bytes.
#line 1 "ENTRY_10dd1860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd1860(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10dd1870; body size 7 bytes.
#line 1 "ENTRY_10dd1870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10dd1870(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10dd1880; body size 3 bytes.
#line 1 "ENTRY_10dd1880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd1880(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10dd1890; body size 31 bytes.
#line 1 "ENTRY_10dd1890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10dd1890(int *param_1)

{
  return (int)(*(int *)(*(int *)(*param_1 + 4) + (*(int *)(*param_1 + 8) - 1U & (uint)param_1[1] >> 2) * 4
                 ) + (param_1[1] & 3U) * 4);
}


// Reference entry 10dd18c0; body size 6 bytes.
#line 1 "ENTRY_10dd18c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10dd18c0(int param_1)

{
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -1);
  return (int)(param_1);
}


// Reference entry 10dd18d0; body size 18 bytes.
#line 1 "ENTRY_10dd18d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dd18d0(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 8);
  return;
}


// Reference entry 10dd18f0; body size 14 bytes.
#line 1 "ENTRY_10dd18f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10dd18f0(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (int *)(param_1);
}


// Reference entry 10dd1910; body size 14 bytes.
#line 1 "ENTRY_10dd1910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10dd1910(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (int *)(param_1);
}


// Reference entry 10dd1ac0; body size 49 bytes.
#line 1 "ENTRY_10dd1ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10dd1ac0(uint param_2)
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


// Reference entry 10dd1b70; body size 3 bytes.
#line 1 "ENTRY_10dd1b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void  __stdcall FUN_10dd1b70(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
}


// Reference entry 10dd1b80; body size 3 bytes.
#line 1 "ENTRY_10dd1b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd1b80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd1b90; body size 3 bytes.
#line 1 "ENTRY_10dd1b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd1b90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd1ba0; body size 3 bytes.
#line 1 "ENTRY_10dd1ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd1ba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd1bb0; body size 3 bytes.
#line 1 "ENTRY_10dd1bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd1bb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd1bc0; body size 3 bytes.
#line 1 "ENTRY_10dd1bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd1bc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd1bd0; body size 3 bytes.
#line 1 "ENTRY_10dd1bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd1bd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd1be0; body size 3 bytes.
#line 1 "ENTRY_10dd1be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd1be0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd1bf0; body size 3 bytes.
#line 1 "ENTRY_10dd1bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd1bf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd1c00; body size 3 bytes.
#line 1 "ENTRY_10dd1c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd1c00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd1c10; body size 16 bytes.
#line 1 "ENTRY_10dd1c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10dd1c10(uint param_2)
{
  int param_1 = (int )this;
  return (uint)(*(int *)(param_1 + 8) - 1U & param_2 >> 2);
}


// Reference entry 10dd1e30; body size 4 bytes.
#line 1 "ENTRY_10dd1e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10dd1e30(int param_1)

{
  return (int)(param_1 + 4);
}


// Reference entry 10dd1e40; body size 4 bytes.
#line 1 "ENTRY_10dd1e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10dd1e40(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10dd1e50; body size 4 bytes.
#line 1 "ENTRY_10dd1e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10dd1e50(int param_1)

{
  return (int)(param_1 + 0xc);
}


// Reference entry 10dd1e60; body size 4 bytes.
#line 1 "ENTRY_10dd1e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10dd1e60(int param_1)

{
  return (int)(param_1 + 0x10);
}


// Reference entry 10dd1e70; body size 3 bytes.
#line 1 "ENTRY_10dd1e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd1e70(void)

{
  return;
}


// Reference entry 10dd1e80; body size 3 bytes.
#line 1 "ENTRY_10dd1e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10dd1e80(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10dd1e90; body size 138 bytes.
#line 1 "ENTRY_10dd1e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dd1e90(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)(*(int *)(param_1 + 0x10));
  if (iVar3 != 0) {
    do {
      iVar3 = (int)(iVar3 + -1);
      *(int*)(param_1 + 0x10) = (int)(iVar3);
    } while (iVar3 != 0);
    *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  }
  iVar3 = (int)(*(int *)(param_1 + 8));
  while (iVar3 != 0) {
    iVar3 = (int)(iVar3 + -1);
    iVar1 = (int)(*(int *)(*(int *)(param_1 + 4) + iVar3 * 4));
    if (iVar1 != 0) {
      thunk_FUN_1148a50e(iVar1,0x10);
    }
  }
  iVar3 = (int)(*(int *)(param_1 + 4));
  if (iVar3 != 0) {
    uVar2 = (uint)(*(int *)(param_1 + 8) * 4);
    iVar1 = (int)(iVar3);
    if (0xfff < uVar2) {
      iVar1 = (int)(*(int *)(iVar3 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iVar3 - iVar1) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar1,uVar2);
  }
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10dd1fb0; body size 38 bytes.
#line 1 "ENTRY_10dd1fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10dd1fb0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 3) * 8));
}


// Reference entry 10dd1fe0; body size 27 bytes.
#line 1 "ENTRY_10dd1fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10dd1fe0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10dd2010; body size 27 bytes.
#line 1 "ENTRY_10dd2010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10dd2010(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10dd2040; body size 18 bytes.
#line 1 "ENTRY_10dd2040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dd2040(int *param_2)
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


// Reference entry 10dd2060; body size 3 bytes.
#line 1 "ENTRY_10dd2060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10dd2060(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10dd20e0; body size 87 bytes.
#line 1 "ENTRY_10dd20e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10dd20e0(uint param_1)

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


// Reference entry 10dd2150; body size 87 bytes.
#line 1 "ENTRY_10dd2150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10dd2150(uint param_1)

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


// Reference entry 10dd21c0; body size 87 bytes.
#line 1 "ENTRY_10dd21c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10dd21c0(uint param_1)

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


// Reference entry 10dd22c0; body size 11 bytes.
#line 1 "ENTRY_10dd22c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dd22c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10dd2310; body size 9 bytes.
#line 1 "ENTRY_10dd2310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10dd2310(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10dd2320; body size 7 bytes.
#line 1 "ENTRY_10dd2320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dd2320(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*(undefined4 *)(param_1 + 8));
  return;
}


// Reference entry 10dd2330; body size 6 bytes.
#line 1 "ENTRY_10dd2330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dd2330(undefined4 *param_1)

{
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10dd2560; body size 61 bytes.
#line 1 "ENTRY_10dd2560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10dd2560(int param_1,int param_2)

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


// Reference entry 10dd25b0; body size 61 bytes.
#line 1 "ENTRY_10dd25b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10dd25b0(int param_1,int param_2)

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


// Reference entry 10dd2600; body size 61 bytes.
#line 1 "ENTRY_10dd2600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10dd2600(int param_1,int param_2)

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


// Reference entry 10dd2690; body size 42 bytes.
#line 1 "ENTRY_10dd2690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dd2690(undefined4 *param_2,void *param_3)
{
  int param_1 = (int )this;
  memmove(param_3,(char *)((int)param_3 + 8),*(int *)(param_1 + 4) - ((int)param_3 + 8));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -8);
  *param_2 = (undefined4)(param_3);
  return;
}


// Reference entry 10dd26d0; body size 13 bytes.
#line 1 "ENTRY_10dd26d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10dd26d0(int param_2)
{
  int param_1 = (int )this;
  return (int)(*(int *)(param_1 + 8) + param_2 * 8);
}


// Reference entry 10dd26e0; body size 13 bytes.
#line 1 "ENTRY_10dd26e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10dd26e0(int param_2)
{
  int param_1 = (int )this;
  return (int)(*(int *)(param_1 + 8) + param_2 * 4);
}


// Reference entry 10dd33e0; body size 60 bytes.
#line 1 "ENTRY_10dd33e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dd33e0(char param_2)
{
  int param_1 = (int )this;
  thunk_FUN_112af4e0("Wizard",5,"Clearing sub-wizard mode.");
  if (*(undefined4 **)(param_1 + 0x98) != (undefined4 *)((0x0))) {
    if (param_2 != '\0') {
      (**(code **)**(undefined4 **)(param_1 + 0x98))(1);
    }
    *(undefined4*)(param_1 + 0x98) = (undefined4)(0);
  }
  return;
}


// Reference entry 10dd3760; body size 4 bytes.
#line 1 "ENTRY_10dd3760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd3760(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x68));
}


// Reference entry 10dd5360; body size 6 bytes.
#line 1 "ENTRY_10dd5360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd5360(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10dd5370; body size 6 bytes.
#line 1 "ENTRY_10dd5370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd5370(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10dd5380; body size 6 bytes.
#line 1 "ENTRY_10dd5380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd5380(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10dd5390; body size 6 bytes.
#line 1 "ENTRY_10dd5390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd5390(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10dd57e0; body size 14 bytes.
#line 1 "ENTRY_10dd57e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dd57e0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)(param_1 + 0x10));
  *piVar1 = (int)(*piVar1 + -1);
  if (*piVar1 == (int)((0))) {
    *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  }
  return;
}


// Reference entry 10dd5800; body size 14 bytes.
#line 1 "ENTRY_10dd5800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dd5800(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)(param_1 + 0x10));
  *piVar1 = (int)(*piVar1 + -1);
  if (*piVar1 == (int)((0))) {
    *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  }
  return;
}


// Reference entry 10dd5820; body size 14 bytes.
#line 1 "ENTRY_10dd5820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dd5820(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)(param_1 + 0x10));
  *piVar1 = (int)(*piVar1 + -1);
  if (*piVar1 == (int)((0))) {
    *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  }
  return;
}


// Reference entry 10dd5940; body size 3 bytes.
#line 1 "ENTRY_10dd5940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd5940(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10dd5b60; body size 45 bytes.
#line 1 "ENTRY_10dd5b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dd5b60(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    uVar2 = (undefined4)(param_2[1]);
    *puVar1 = (undefined4)(*param_2);
    puVar1[1] = (undefined4)(uVar2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10dcfdb0(puVar1,param_2);
  return;
}


// Reference entry 10dd5c20; body size 28 bytes.
#line 1 "ENTRY_10dd5c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dd5c20(undefined4 *param_1)

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


// Reference entry 10dd5c50; body size 28 bytes.
#line 1 "ENTRY_10dd5c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dd5c50(undefined4 *param_1)

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


// Reference entry 10dd5d80; body size 10 bytes.
#line 1 "ENTRY_10dd5d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10dd5d80(int param_1)

{
  return (int)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3);
}


// Reference entry 10dd5d90; body size 10 bytes.
#line 1 "ENTRY_10dd5d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10dd5d90(int param_1)

{
  return (int)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2);
}


// Reference entry 10dd5da0; body size 4 bytes.
#line 1 "ENTRY_10dd5da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd5da0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 10dd5db0; body size 4 bytes.
#line 1 "ENTRY_10dd5db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd5db0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 10dd5dc0; body size 4 bytes.
#line 1 "ENTRY_10dd5dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd5dc0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 10dd5dd0; body size 9 bytes.
#line 1 "ENTRY_10dd5dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10dd5dd0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 10dd5de0; body size 9 bytes.
#line 1 "ENTRY_10dd5de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10dd5de0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10dd5ef0; body size 39 bytes.
#line 1 "ENTRY_10dd5ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd5ef0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd5f20; body size 39 bytes.
#line 1 "ENTRY_10dd5f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd5f20(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd5f50; body size 18 bytes.
#line 1 "ENTRY_10dd5f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dd5f50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd5f70; body size 18 bytes.
#line 1 "ENTRY_10dd5f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dd5f70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd5f90; body size 39 bytes.
#line 1 "ENTRY_10dd5f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd5f90(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd5fc0; body size 39 bytes.
#line 1 "ENTRY_10dd5fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd5fc0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd5ff0; body size 22 bytes.
#line 1 "ENTRY_10dd5ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd5ff0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd6010; body size 22 bytes.
#line 1 "ENTRY_10dd6010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd6010(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd6030; body size 18 bytes.
#line 1 "ENTRY_10dd6030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dd6030(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd6050; body size 18 bytes.
#line 1 "ENTRY_10dd6050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dd6050(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd63b0; body size 22 bytes.
#line 1 "ENTRY_10dd63b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd63b0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd63d0; body size 22 bytes.
#line 1 "ENTRY_10dd63d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd63d0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd63f0; body size 41 bytes.
#line 1 "ENTRY_10dd63f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd63f0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd6430; body size 41 bytes.
#line 1 "ENTRY_10dd6430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd6430(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd6470; body size 41 bytes.
#line 1 "ENTRY_10dd6470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd6470(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd64b0; body size 41 bytes.
#line 1 "ENTRY_10dd64b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd64b0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd64f0; body size 188 bytes.
#line 1 "ENTRY_10dd64f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dd64f0(void *param_2,int param_3, unsigned int recovered_unused_stack_0)
{
  int *param_1 = (int *)this;
  uint uVar1;
  uint uVar2;
  size_t _Size;
  uint uVar3;
  void *pvVar4;
  void *_Dst;
  
  _Size = (size_t)(param_3 - (int)param_2);
  uVar2 = (uint)((int)_Size >> 2);
  _Dst = (void *)((void *)*param_1);
  uVar1 = (uint)(param_1[2] - (int)_Dst >> 2);
  if (uVar1 < uVar2) {
    if (0x3fffffff < uVar2) {
                    
      thunk_FUN_101a9bd0();
    }
    if (0x3fffffff - (uVar1 >> 1) < uVar1) {
      uVar3 = (uint)(0x3fffffff);
    }
    else {
      uVar3 = (uint)((uVar1 >> 1) + uVar1);
      if (uVar3 < uVar2) {
        uVar3 = (uint)(uVar2);
      }
    }
    if ((void *)(_Dst) != (void *)(0x0)) {
      uVar1 = (uint)(uVar1 * 4);
      pvVar4 = (void *)(_Dst);
      if (0xfff < uVar1) {
        pvVar4 = (char *)(*(void **)((int)_Dst + -4), 0);
        uVar1 = (uint)(uVar1 + 0x23);
        if (0x1f < (uint)((int)_Dst + (-4 - (int)pvVar4))) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(pvVar4,uVar1);
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      param_1[2] = (int)(0);
    }
    thunk_FUN_10bd9600(uVar3);
    _Dst = (void *)((void *)*param_1);
  }
  memmove(_Dst,param_2,_Size);
  param_1[1] = (int)(_Size + (int)_Dst);
  return;
}


// Reference entry 10dd65e0; body size 25 bytes.
#line 1 "ENTRY_10dd65e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd65e0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x20), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10dd6600; body size 25 bytes.
#line 1 "ENTRY_10dd6600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd6600(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x20), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10dd6620; body size 13 bytes.
#line 1 "ENTRY_10dd6620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd6620(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10dd6630; body size 13 bytes.
#line 1 "ENTRY_10dd6630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd6630(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10dd6640; body size 13 bytes.
#line 1 "ENTRY_10dd6640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd6640(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10dd6650; body size 13 bytes.
#line 1 "ENTRY_10dd6650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd6650(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10dd6660; body size 3 bytes.
#line 1 "ENTRY_10dd6660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd6660(void)

{
  return;
}


// Reference entry 10dd6670; body size 3 bytes.
#line 1 "ENTRY_10dd6670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd6670(void)

{
  return;
}


// Reference entry 10dd68e0; body size 15 bytes.
#line 1 "ENTRY_10dd68e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd68e0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x20);
  return;
}


// Reference entry 10dd6900; body size 15 bytes.
#line 1 "ENTRY_10dd6900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd6900(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x20);
  return;
}


// Reference entry 10dd6920; body size 26 bytes.
#line 1 "ENTRY_10dd6920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd6920(undefined4 param_1,undefined4 param_2)

{
  ((pair<> *)(0))->m_op_dtor();
  thunk_FUN_1148a50e(param_2,0x20);
  return;
}


// Reference entry 10dd6940; body size 26 bytes.
#line 1 "ENTRY_10dd6940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd6940(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_101a33f0();
  thunk_FUN_1148a50e(param_2,0x20);
  return;
}


// Reference entry 10dd6960; body size 5 bytes.
#line 1 "ENTRY_10dd6960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd6960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd6970; body size 5 bytes.
#line 1 "ENTRY_10dd6970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd6970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd6980; body size 31 bytes.
#line 1 "ENTRY_10dd6980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10dd6980(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = (uint)(*param_2), *(uint *)(param_1 + 0x10) <= (uint)(in_EAX)) ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10dd69b0; body size 31 bytes.
#line 1 "ENTRY_10dd69b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10dd69b0(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = (uint)(*param_2), *(uint *)(param_1 + 0x10) <= (uint)(in_EAX)) ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10dd69e0; body size 3 bytes.
#line 1 "ENTRY_10dd69e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd69e0(void)

{
  return;
}


// Reference entry 10dd6e70; body size 5 bytes.
#line 1 "ENTRY_10dd6e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd6e70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd6e80; body size 5 bytes.
#line 1 "ENTRY_10dd6e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd6e80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd6e90; body size 5 bytes.
#line 1 "ENTRY_10dd6e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd6e90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd6ea0; body size 5 bytes.
#line 1 "ENTRY_10dd6ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd6ea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd6eb0; body size 5 bytes.
#line 1 "ENTRY_10dd6eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd6eb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd6ec0; body size 5 bytes.
#line 1 "ENTRY_10dd6ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd6ec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd6ed0; body size 5 bytes.
#line 1 "ENTRY_10dd6ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd6ed0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd6ee0; body size 5 bytes.
#line 1 "ENTRY_10dd6ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd6ee0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd6ef0; body size 5 bytes.
#line 1 "ENTRY_10dd6ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd6ef0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd6f00; body size 5 bytes.
#line 1 "ENTRY_10dd6f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd6f00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd6f10; body size 5 bytes.
#line 1 "ENTRY_10dd6f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd6f10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd6f20; body size 188 bytes.
#line 1 "ENTRY_10dd6f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dd6f20(void *param_2,int param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  uint uVar2;
  size_t _Size;
  uint uVar3;
  void *pvVar4;
  void *_Dst;
  
  _Size = (size_t)(param_3 - (int)param_2);
  uVar2 = (uint)((int)_Size >> 2);
  _Dst = (void *)((void *)*param_1);
  uVar1 = (uint)(param_1[2] - (int)_Dst >> 2);
  if (uVar1 < uVar2) {
    if (0x3fffffff < uVar2) {
                    
      thunk_FUN_101a9bd0();
    }
    if (0x3fffffff - (uVar1 >> 1) < uVar1) {
      uVar3 = (uint)(0x3fffffff);
    }
    else {
      uVar3 = (uint)((uVar1 >> 1) + uVar1);
      if (uVar3 < uVar2) {
        uVar3 = (uint)(uVar2);
      }
    }
    if ((void *)(_Dst) != (void *)(0x0)) {
      uVar1 = (uint)(uVar1 * 4);
      pvVar4 = (void *)(_Dst);
      if (0xfff < uVar1) {
        pvVar4 = (char *)(*(void **)((int)_Dst + -4), 0);
        uVar1 = (uint)(uVar1 + 0x23);
        if (0x1f < (uint)((int)_Dst + (-4 - (int)pvVar4))) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(pvVar4,uVar1);
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      param_1[2] = (int)(0);
    }
    thunk_FUN_10bd9600(uVar3);
    _Dst = (void *)((void *)*param_1);
  }
  memmove(_Dst,param_2,_Size);
  param_1[1] = (int)(_Size + (int)_Dst);
  return;
}


// Reference entry 10dd7010; body size 36 bytes.
#line 1 "ENTRY_10dd7010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd7010(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  return;
}


// Reference entry 10dd7040; body size 36 bytes.
#line 1 "ENTRY_10dd7040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd7040(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  return;
}


// Reference entry 10dd7070; body size 36 bytes.
#line 1 "ENTRY_10dd7070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd7070(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  return;
}


// Reference entry 10dd70a0; body size 36 bytes.
#line 1 "ENTRY_10dd70a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd70a0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  return;
}


// Reference entry 10dd70d0; body size 9 bytes.
#line 1 "ENTRY_10dd70d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd70d0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(*(int *)(param_2 + 4));
  if (iVar1 != 0) {
    uVar3 = (uint)(*(int *)(param_2 + 0xc) - iVar1 & 0xfffffffc);
    iVar2 = (int)(iVar1);
    if (0xfff < uVar3) {
      iVar2 = (int)(*(int *)(iVar1 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar1 - iVar2) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar3);
    *(undefined4*)(param_2 + 4) = (undefined4)(0);
    *(undefined4*)(param_2 + 8) = (undefined4)(0);
    *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
  }
  return;
}


// Reference entry 10dd70e0; body size 12 bytes.
#line 1 "ENTRY_10dd70e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dd70e0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = (int *)((int *)(param_2 + 4));
  if (*piVar1 != (int)((0))) {
    thunk_FUN_101a2210(*piVar1,*(undefined4 *)(param_2 + 8),piVar1);
    iVar2 = (int)(*piVar1);
    uVar4 = (uint)(*(int *)(param_2 + 0xc) - iVar2 & 0xfffffffc);
    iVar3 = (int)(iVar2);
    if (0xfff < uVar4) {
      iVar3 = (int)(*(int *)(iVar2 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar2 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar4);
    *piVar1 = (int)(0);
    *(undefined4*)(param_2 + 8) = (undefined4)(0);
    *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
  }
  return;
}


// Reference entry 10dd70f0; body size 12 bytes.
#line 1 "ENTRY_10dd70f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10dd70f0(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 2);
}


// Reference entry 10dd7100; body size 15 bytes.
#line 1 "ENTRY_10dd7100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd7100(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10dd7120; body size 15 bytes.
#line 1 "ENTRY_10dd7120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd7120(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10dd7140; body size 15 bytes.
#line 1 "ENTRY_10dd7140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd7140(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10dd7160; body size 15 bytes.
#line 1 "ENTRY_10dd7160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd7160(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10dd7180; body size 5 bytes.
#line 1 "ENTRY_10dd7180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd7180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd7190; body size 5 bytes.
#line 1 "ENTRY_10dd7190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd7190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd71a0; body size 5 bytes.
#line 1 "ENTRY_10dd71a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd71a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd71b0; body size 5 bytes.
#line 1 "ENTRY_10dd71b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd71b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd71c0; body size 5 bytes.
#line 1 "ENTRY_10dd71c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd71c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd71d0; body size 5 bytes.
#line 1 "ENTRY_10dd71d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dd71d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd71e0; body size 18 bytes.
#line 1 "ENTRY_10dd71e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd71e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd7200; body size 18 bytes.
#line 1 "ENTRY_10dd7200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd7200(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd72a0; body size 11 bytes.
#line 1 "ENTRY_10dd72a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd72a0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd72b0; body size 11 bytes.
#line 1 "ENTRY_10dd72b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd72b0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd72c0; body size 11 bytes.
#line 1 "ENTRY_10dd72c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd72c0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd72d0; body size 11 bytes.
#line 1 "ENTRY_10dd72d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd72d0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd73e0; body size 11 bytes.
#line 1 "ENTRY_10dd73e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd73e0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd73f0; body size 11 bytes.
#line 1 "ENTRY_10dd73f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd73f0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd7400; body size 16 bytes.
#line 1 "ENTRY_10dd7400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dd7400(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd7420; body size 16 bytes.
#line 1 "ENTRY_10dd7420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dd7420(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd7440; body size 3 bytes.
#line 1 "ENTRY_10dd7440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd7440(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd7450; body size 3 bytes.
#line 1 "ENTRY_10dd7450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd7450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd7460; body size 52 bytes.
#line 1 "ENTRY_10dd7460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dd7460(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd74b0; body size 52 bytes.
#line 1 "ENTRY_10dd74b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dd74b0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10dd7fc0; body size 19 bytes.
#line 1 "ENTRY_10dd7fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dd7fc0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x20);
  }
  return;
}


// Reference entry 10dd7fe0; body size 19 bytes.
#line 1 "ENTRY_10dd7fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dd7fe0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x20);
  }
  return;
}


// Reference entry 10dd80d0; body size 8 bytes.
#line 1 "ENTRY_10dd80d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dd80d0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = (int *)((int *)(param_1 + 4));
  if (*piVar4 != (int)((0))) {
    thunk_FUN_101a2210(*piVar4,*(undefined4 *)(param_1 + 8),piVar4);
    iVar1 = (int)(*piVar4);
    uVar3 = (uint)(*(int *)(param_1 + 0xc) - iVar1 & 0xfffffffc);
    iVar2 = (int)(iVar1);
    if (0xfff < uVar3) {
      iVar2 = (int)(*(int *)(iVar1 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar1 - iVar2) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar3);
    *piVar4 = (int)(0);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  }
  return;
}


// Reference entry 10dd85b0; body size 14 bytes.
#line 1 "ENTRY_10dd85b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10dd85b0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10dd85d0; body size 14 bytes.
#line 1 "ENTRY_10dd85d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10dd85d0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10dd85f0; body size 14 bytes.
#line 1 "ENTRY_10dd85f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10dd85f0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10dd8ee0; body size 31 bytes.
#line 1 "ENTRY_10dd8ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dd8ee0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x20), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10dd8f10; body size 31 bytes.
#line 1 "ENTRY_10dd8f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dd8f10(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x20), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10dd8f80; body size 14 bytes.
#line 1 "ENTRY_10dd8f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dd8f80(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x7ffffff) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10dd8fa0; body size 14 bytes.
#line 1 "ENTRY_10dd8fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dd8fa0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x7ffffff) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10dd8fc0; body size 144 bytes.
#line 1 "ENTRY_10dd8fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dd8fc0(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x3fffffff < param_2) {
                    
    thunk_FUN_101a9bd0();
  }
  iVar1 = (int)(*param_1);
  uVar3 = (uint)(param_1[2] - iVar1 >> 2);
  if (0x3fffffff - (uVar3 >> 1) < uVar3) {
    uVar4 = (uint)(0x3fffffff);
  }
  else {
    uVar4 = (uint)((uVar3 >> 1) + uVar3);
    if (uVar4 < param_2) {
      uVar4 = (uint)(param_2);
    }
  }
  if (iVar1 != 0) {
    uVar3 = (uint)(uVar3 * 4);
    iVar2 = (int)(iVar1);
    if (0xfff < uVar3) {
      iVar2 = (int)(*(int *)(iVar1 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar1 - iVar2) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar3);
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  thunk_FUN_10bd9600(uVar4);
  return;
}


// Reference entry 10dd9080; body size 204 bytes.
#line 1 "ENTRY_10dd9080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dd9080(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  int *param_1 = (int *)this;
  void *_Src;
  uint uVar1;
  size_t _Size;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  void *_Dst;
  
  _Src = (void *)((void *)*param_2);
  _Size = (size_t)(param_2[1] - (int)_Src);
  uVar3 = (uint)((int)_Size >> 2);
  _Dst = (void *)((void *)*param_1);
  uVar1 = (uint)(param_1[2] - (int)_Dst >> 2);
  if (uVar1 < uVar3) {
    if (0x3fffffff < uVar3) {
                    
      thunk_FUN_101a9bd0();
    }
    if (0x3fffffff - (uVar1 >> 1) < uVar1) {
      uVar2 = (uint)(0x3fffffff);
    }
    else {
      uVar2 = (uint)((uVar1 >> 1) + uVar1);
      if (uVar2 < uVar3) {
        uVar2 = (uint)(uVar3);
      }
    }
    if ((void *)(_Dst) != (void *)(0x0)) {
      uVar1 = (uint)(uVar1 * 4);
      pvVar4 = (void *)(_Dst);
      if (0xfff < uVar1) {
        pvVar4 = (char *)(*(void **)((int)_Dst + -4), 0);
        uVar1 = (uint)(uVar1 + 0x23);
        if (0x1f < (uint)((int)_Dst + (-4 - (int)pvVar4))) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(pvVar4,uVar1);
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      param_1[2] = (int)(0);
    }
    thunk_FUN_10bd9600(uVar2);
    _Dst = (void *)((void *)*param_1);
  }
  memmove(_Dst,_Src,_Size);
  param_1[1] = (int)(_Size + (int)_Dst);
  return;
}


// Reference entry 10dd9180; body size 3 bytes.
#line 1 "ENTRY_10dd9180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd9180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd9190; body size 3 bytes.
#line 1 "ENTRY_10dd9190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd9190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd91a0; body size 3 bytes.
#line 1 "ENTRY_10dd91a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd91a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd91b0; body size 3 bytes.
#line 1 "ENTRY_10dd91b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd91b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd91c0; body size 3 bytes.
#line 1 "ENTRY_10dd91c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd91c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd91d0; body size 3 bytes.
#line 1 "ENTRY_10dd91d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd91d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd91e0; body size 3 bytes.
#line 1 "ENTRY_10dd91e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd91e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd91f0; body size 3 bytes.
#line 1 "ENTRY_10dd91f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd91f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd9200; body size 3 bytes.
#line 1 "ENTRY_10dd9200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd9200(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd9210; body size 3 bytes.
#line 1 "ENTRY_10dd9210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd9210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd9220; body size 3 bytes.
#line 1 "ENTRY_10dd9220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd9220(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd9230; body size 3 bytes.
#line 1 "ENTRY_10dd9230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd9230(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd9240; body size 3 bytes.
#line 1 "ENTRY_10dd9240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd9240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd9250; body size 3 bytes.
#line 1 "ENTRY_10dd9250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd9250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd9260; body size 3 bytes.
#line 1 "ENTRY_10dd9260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd9260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd9270; body size 3 bytes.
#line 1 "ENTRY_10dd9270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd9270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dd97a0; body size 79 bytes.
#line 1 "ENTRY_10dd97a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dd97a0(int param_2)
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


// Reference entry 10dd9810; body size 79 bytes.
#line 1 "ENTRY_10dd9810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dd9810(int param_2)
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


// Reference entry 10dd9880; body size 11 bytes.
#line 1 "ENTRY_10dd9880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd9880(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10dd9890; body size 11 bytes.
#line 1 "ENTRY_10dd9890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dd9890(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10dd98a0; body size 83 bytes.
#line 1 "ENTRY_10dd98a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dd98a0(int *param_2)
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


// Reference entry 10dd9910; body size 83 bytes.
#line 1 "ENTRY_10dd9910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dd9910(int *param_2)
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


// Reference entry 10dd9b00; body size 87 bytes.
#line 1 "ENTRY_10dd9b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10dd9b00(uint param_1)

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


// Reference entry 10dd9b70; body size 87 bytes.
#line 1 "ENTRY_10dd9b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10dd9b70(uint param_1)

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


// Reference entry 10dda540; body size 54 bytes.
#line 1 "ENTRY_10dda540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dda540(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10dda590; body size 54 bytes.
#line 1 "ENTRY_10dda590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dda590(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10dda5e0; body size 57 bytes.
#line 1 "ENTRY_10dda5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10dda5e0(int param_1,int param_2)

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


// Reference entry 10dda630; body size 57 bytes.
#line 1 "ENTRY_10dda630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10dda630(int param_1,int param_2)

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


// Reference entry 10dda680; body size 11 bytes.
#line 1 "ENTRY_10dda680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dda680(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10dda690; body size 11 bytes.
#line 1 "ENTRY_10dda690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dda690(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ddba30; body size 67 bytes.
#line 1 "ENTRY_10ddba30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ddba30(int param_1)

{
  undefined1 *puVar1;
  
  thunk_FUN_110b0460(1);
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0xbc) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0xbc), 0);
  }
  thunk_FUN_110b3620<>(-(uint)(param_1 != 0) & param_1 + 0x18U,puVar1,&DAT_119352e0,0,0);
  return (undefined4)(1);
}


// Reference entry 10ddbb10; body size 6 bytes.
#line 1 "ENTRY_10ddbb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ddbb10(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 10ddbb20; body size 6 bytes.
#line 1 "ENTRY_10ddbb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ddbb20(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 10ddbb30; body size 6 bytes.
#line 1 "ENTRY_10ddbb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ddbb30(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 10ddbb40; body size 6 bytes.
#line 1 "ENTRY_10ddbb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ddbb40(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 10ddbb50; body size 7 bytes.
#line 1 "ENTRY_10ddbb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ddbb50(int param_1)

{
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
}


// Reference entry 10ddcfc0; body size 33 bytes.
#line 1 "ENTRY_10ddcfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10ddcfc0(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 10ddcff0; body size 33 bytes.
#line 1 "ENTRY_10ddcff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10ddcff0(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 10ddd020; body size 33 bytes.
#line 1 "ENTRY_10ddd020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10ddd020(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 10ddd050; body size 33 bytes.
#line 1 "ENTRY_10ddd050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10ddd050(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 10ddd080; body size 33 bytes.
#line 1 "ENTRY_10ddd080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10ddd080(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 10ddd0b0; body size 26 bytes.
#line 1 "ENTRY_10ddd0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10ddd0b0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10ddd0d0; body size 5 bytes.
#line 1 "ENTRY_10ddd0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ddd0d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ddd0e0; body size 5 bytes.
#line 1 "ENTRY_10ddd0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ddd0e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ddd0f0; body size 6 bytes.
#line 1 "ENTRY_10ddd0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ddd0f0(void)

{
  return (char *)("SCIBrowsePageExtension");
}


// Reference entry 10ddd100; body size 27 bytes.
#line 1 "ENTRY_10ddd100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ddd100(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10ddd130; body size 16 bytes.
#line 1 "ENTRY_10ddd130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ddd130(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dde040; body size 9 bytes.
#line 1 "ENTRY_10dde040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dde040(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIBrowsePageExtension);
  return (undefined4 *)(param_1);
}


// Reference entry 10dde810; body size 11 bytes.
#line 1 "ENTRY_10dde810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dde810(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  thunk_FUN_10dde6b0(param_1);

}


// Reference entry 10dde820; body size 11 bytes.
#line 1 "ENTRY_10dde820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dde820(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  thunk_FUN_10dde6b0(param_1);

}


// Reference entry 10dde8c0; body size 7 bytes.
#line 1 "ENTRY_10dde8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dde8c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10dde8d0; body size 11 bytes.
#line 1 "ENTRY_10dde8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dde8d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  thunk_FUN_10dde6b0(param_1);

}


// Reference entry 10dde950; body size 3 bytes.
#line 1 "ENTRY_10dde950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dde950(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10dde960; body size 3 bytes.
#line 1 "ENTRY_10dde960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dde960(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10dde970; body size 7 bytes.
#line 1 "ENTRY_10dde970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10dde970(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10dde980; body size 3 bytes.
#line 1 "ENTRY_10dde980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dde980(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10dde990; body size 17 bytes.
#line 1 "ENTRY_10dde990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10dde990(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1029d970(param_1), 0);
  return (bool)(0 < iVar1);
}


// Reference entry 10ddef30; body size 25 bytes.
#line 1 "ENTRY_10ddef30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10ddef30(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x3c), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10de20f0; body size 4 bytes.
#line 1 "ENTRY_10de20f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10de20f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10de2120; body size 6 bytes.
#line 1 "ENTRY_10de2120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10de2120(void)

{
  return (char *)("SCIBrowsePageExtension");
}


// Reference entry 10de2130; body size 4 bytes.
#line 1 "ENTRY_10de2130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10de2130(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x38));
}


// Reference entry 10de28d0; body size 3 bytes.
#line 1 "ENTRY_10de28d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10de28d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10de28e0; body size 3 bytes.
#line 1 "ENTRY_10de28e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10de28e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10de2a10; body size 28 bytes.
#line 1 "ENTRY_10de2a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10de2a10(undefined4 *param_1)

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


// Reference entry 10de2c70; body size 36 bytes.
#line 1 "ENTRY_10de2c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10de2c70(SCStr *param_2)
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


// Reference entry 10de2ca0; body size 36 bytes.
#line 1 "ENTRY_10de2ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10de2ca0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x30));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10de2cd0; body size 10 bytes.
#line 1 "ENTRY_10de2cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10de2cd0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_2);
  return;
}


// Reference entry 10de2ce0; body size 36 bytes.
#line 1 "ENTRY_10de2ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10de2ce0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x2c));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10de2d10; body size 36 bytes.
#line 1 "ENTRY_10de2d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10de2d10(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x34));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10de2d40; body size 12 bytes.
#line 1 "ENTRY_10de2d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10de2d40(undefined4 *param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(*param_2);
  return;
}


// Reference entry 10de2d50; body size 36 bytes.
#line 1 "ENTRY_10de2d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10de2d50(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x28));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10de4610; body size 40 bytes.
#line 1 "ENTRY_10de4610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10de4610(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10de4650; body size 6 bytes.
#line 1 "ENTRY_10de4650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10de4650(void)

{
  return (char *)("SCIOpAVTransportAddURIToSavedQueue");
}


// Reference entry 10de46f0; body size 27 bytes.
#line 1 "ENTRY_10de46f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10de46f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10de4940; body size 16 bytes.
#line 1 "ENTRY_10de4940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10de4940(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10de4960; body size 157 bytes.
#line 1 "ENTRY_10de4960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10de4960(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760<>(uVar2,"urn:schemas-upnp-org:service:AVTransport:1","AddURIToSavedQueue",uVar3, param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddURIToSavedQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddURIToSavedQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddURIToSavedQueueAIOOp);
  param_1[0x35f4] = (undefined4)(0);
  param_1[0x35f5] = (undefined4)(0);
  param_1[0x35f6] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10de4bd0; body size 9 bytes.
#line 1 "ENTRY_10de4bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10de4bd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpAVTransportAddURIToSavedQueue);
  return (undefined4 *)(param_1);
}


// Reference entry 10de4fb0; body size 11 bytes.
#line 1 "ENTRY_10de4fb0"

/* WARNING: Removing unreachable block_10de4fb0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10de4fb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10de52f0; body size 28 bytes.
#line 1 "ENTRY_10de52f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10de52f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddURIToSavedQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddURIToSavedQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddURIToSavedQueueAIOOp);
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


// Reference entry 10de5510; body size 7 bytes.
#line 1 "ENTRY_10de5510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10de5510(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10de5640; body size 18 bytes.
#line 1 "ENTRY_10de5640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10de5640(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAVTransportAddURIToSavedQueue);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAVTransportAddURIToSavedQueue);


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


// Reference entry 10de5730; body size 3 bytes.
#line 1 "ENTRY_10de5730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10de5730(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10de5740; body size 3 bytes.
#line 1 "ENTRY_10de5740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10de5740(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10de5750; body size 4 bytes.
#line 1 "ENTRY_10de5750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10de5750(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10de5760; body size 3 bytes.
#line 1 "ENTRY_10de5760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10de5760(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10de5ff0; body size 11 bytes.
#line 1 "ENTRY_10de5ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10de5ff0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
    uVar4 = (undefined4)((**(code **)(*piVar1 + 8))(param_2,param_3,param_4,param_5,iVar9,uVar2), 0);
    uVar5 = (undefined4)(thunk_FUN_111cb060(uVar4,uVar5,uVar6,uVar7,uVar8,iVar9), 0);
  }

  pvVar3 = (void *)(operator_new(0x11c38), 0);

  if ((void *)(pvVar3) == (void *)(0x0)) {
    uVar6 = (undefined4)(0);
  }
  else {
    iVar9 = (int)(piVar1[2]);
    uVar6 = (undefined4)((**(code **)(*piVar1 + 8))(param_2,param_3,param_4,param_5,iVar9), 0);
    uVar6 = (undefined4)(thunk_FUN_111cb060(uVar6,param_2,param_3,param_4,param_5,iVar9), 0);
  }

  uVar7 = (undefined4)(thunk_FUN_111dd660(), 0);
  uVar8 = (undefined4)((**(code **)(*piVar1 + 0xc))(), 0);
  pvVar3 = (void *)(operator_new(100), 0);

  if ((void *)(pvVar3) == (void *)(0x0)) {
    uVar5 = (undefined4)(0);
  }
  else {
    uVar5 = (undefined4)(thunk_FUN_111ca9f0<>(uVar5,uVar6,uVar7,uVar8,&DAT_122f1250), 0);
  }
  *param_6 = (undefined4)(uVar5);

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10de66f0; body size 16 bytes.
#line 1 "ENTRY_10de66f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10de66f0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10de6de0; body size 7 bytes.
#line 1 "ENTRY_10de6de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10de6de0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xd7d4));
}


// Reference entry 10de6e00; body size 7 bytes.
#line 1 "ENTRY_10de6e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10de6e00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xd7d8));
}


// Reference entry 10de6e20; body size 7 bytes.
#line 1 "ENTRY_10de6e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10de6e20(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xd7d0));
}


// Reference entry 10de86b0; body size 6 bytes.
#line 1 "ENTRY_10de86b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10de86b0(void)

{
  return (char *)("SCIOpAVTransportAddURIToSavedQueue");
}


// Reference entry 10de8930; body size 3 bytes.
#line 1 "ENTRY_10de8930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10de8930(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10de8940; body size 3 bytes.
#line 1 "ENTRY_10de8940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10de8940(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10de8b70; body size 28 bytes.
#line 1 "ENTRY_10de8b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10de8b70(undefined4 *param_1)

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


// Reference entry 10de8ba0; body size 28 bytes.
#line 1 "ENTRY_10de8ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10de8ba0(undefined4 *param_1)

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


// Reference entry 10de8bd0; body size 28 bytes.
#line 1 "ENTRY_10de8bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10de8bd0(undefined4 *param_1)

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


// Reference entry 10de8c00; body size 28 bytes.
#line 1 "ENTRY_10de8c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10de8c00(undefined4 *param_1)

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


// Reference entry 10de9050; body size 25 bytes.
#line 1 "ENTRY_10de9050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10de9050(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10de9110; body size 23 bytes.
#line 1 "ENTRY_10de9110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10de9110(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10594e60<>(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x1c);
  return;
}


// Reference entry 10de91d0; body size 23 bytes.
#line 1 "ENTRY_10de91d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10de91d0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10594e60<>(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x1c);
  return;
}


// Reference entry 10de9b00; body size 14 bytes.
#line 1 "ENTRY_10de9b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10de9b00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10594e60<>(param_3);
  return;
}


// Reference entry 10de9b20; body size 14 bytes.
#line 1 "ENTRY_10de9b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10de9b20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10594e60<>(param_3);
  return;
}


// Reference entry 10de9c00; body size 40 bytes.
#line 1 "ENTRY_10de9c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10de9c00(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_10594e60<>(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x1c);
    return;
  }
  thunk_FUN_10de9550(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 10de9c40; body size 5 bytes.
#line 1 "ENTRY_10de9c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10de9c40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10de9c50; body size 5 bytes.
#line 1 "ENTRY_10de9c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10de9c50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10de9c60; body size 5 bytes.
#line 1 "ENTRY_10de9c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10de9c60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10de9c70; body size 5 bytes.
#line 1 "ENTRY_10de9c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10de9c70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10de9c80; body size 5 bytes.
#line 1 "ENTRY_10de9c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10de9c80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10de9c90; body size 5 bytes.
#line 1 "ENTRY_10de9c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10de9c90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10de9ca0; body size 3 bytes.
#line 1 "ENTRY_10de9ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10de9ca0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10de9cb0; body size 23 bytes.
#line 1 "ENTRY_10de9cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10de9cb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10de9da0; body size 28 bytes.
#line 1 "ENTRY_10de9da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10de9da0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10de9df0; body size 65 bytes.
#line 1 "ENTRY_10de9df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10de9df0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0x1c);
  if (0x9249249 - (uVar1 >> 1) < uVar1) {
    return (uint)(0x9249249);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 10de9fd0; body size 3 bytes.
#line 1 "ENTRY_10de9fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10de9fd0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10de9fe0; body size 3 bytes.
#line 1 "ENTRY_10de9fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10de9fe0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10dea430; body size 27 bytes.
#line 1 "ENTRY_10dea430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10dea430(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0x1c);
}


// Reference entry 10dea4f0; body size 6 bytes.
#line 1 "ENTRY_10dea4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dea4f0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10dea500; body size 6 bytes.
#line 1 "ENTRY_10dea500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dea500(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10deb680; body size 40 bytes.
#line 1 "ENTRY_10deb680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10deb680(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_10594e60<>(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x1c);
    return;
  }
  thunk_FUN_10de9550(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 10deb6c0; body size 18 bytes.
#line 1 "ENTRY_10deb6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10deb6c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10deb6e0; body size 25 bytes.
#line 1 "ENTRY_10deb6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10deb6e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10deb700; body size 25 bytes.
#line 1 "ENTRY_10deb700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10deb700(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10deb720; body size 24 bytes.
#line 1 "ENTRY_10deb720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::m_FUN_10deb720(undefined1 *param_2,undefined1 *param_3)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(*param_2);
  param_1[1] = (undefined1)(*param_3);
  return (undefined1 *)(param_1);
}


// Reference entry 10deb740; body size 24 bytes.
#line 1 "ENTRY_10deb740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::m_FUN_10deb740(undefined1 *param_2,undefined1 *param_3)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(*param_2);
  param_1[1] = (undefined1)(*param_3);
  return (undefined1 *)(param_1);
}


// Reference entry 10deb760; body size 22 bytes.
#line 1 "ENTRY_10deb760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10deb760(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10deb780; body size 18 bytes.
#line 1 "ENTRY_10deb780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10deb780(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10deb870; body size 31 bytes.
#line 1 "ENTRY_10deb870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10deb870(undefined4 param_2,undefined4 param_3, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  thunk_FUN_10deea50<>(param_3);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10deb8a0; body size 11 bytes.
#line 1 "ENTRY_10deb8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10deb8a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10deb8b0; body size 11 bytes.
#line 1 "ENTRY_10deb8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10deb8b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10deb980; body size 22 bytes.
#line 1 "ENTRY_10deb980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10deb980(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10deb9a0; body size 18 bytes.
#line 1 "ENTRY_10deb9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10deb9a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10deb9c0; body size 11 bytes.
#line 1 "ENTRY_10deb9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10deb9c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10deb9d0; body size 18 bytes.
#line 1 "ENTRY_10deb9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10deb9d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10debb10; body size 33 bytes.
#line 1 "ENTRY_10debb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10debb10(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  int param_1 = (int )this;
  thunk_FUN_10deea50<>(*param_2);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10debc00; body size 24 bytes.
#line 1 "ENTRY_10debc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::m_FUN_10debc00(undefined1 *param_2,undefined1 *param_3)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(*param_2);
  param_1[1] = (undefined1)(*param_3);
  return (undefined1 *)(param_1);
}


// Reference entry 10debc20; body size 3 bytes.
#line 1 "ENTRY_10debc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10debc20(void)

{
  return;
}


// Reference entry 10debc30; body size 3 bytes.
#line 1 "ENTRY_10debc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10debc30(void)

{
  return;
}


// Reference entry 10debc40; body size 25 bytes.
#line 1 "ENTRY_10debc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10debc40(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10debdc0; body size 13 bytes.
#line 1 "ENTRY_10debdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10debdc0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10debdd0; body size 13 bytes.
#line 1 "ENTRY_10debdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10debdd0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10debde0; body size 13 bytes.
#line 1 "ENTRY_10debde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10debde0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10debdf0; body size 113 bytes.
#line 1 "ENTRY_10debdf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10debdf0(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_10debe80<>(*(undefined4 *)(*param_2 + 4),*param_1,param_3), 0);
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


// Reference entry 10dec080; body size 3 bytes.
#line 1 "ENTRY_10dec080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dec080(void)

{
  return;
}


// Reference entry 10dec090; body size 23 bytes.
#line 1 "ENTRY_10dec090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dec090(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10deea50<>(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x18);
  return;
}


// Reference entry 10dec0b0; body size 23 bytes.
#line 1 "ENTRY_10dec0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dec0b0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_105f9e40(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x1c);
  return;
}


// Reference entry 10dec0d0; body size 23 bytes.
#line 1 "ENTRY_10dec0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dec0d0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10deea50<>(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x18);
  return;
}


// Reference entry 10dec180; body size 23 bytes.
#line 1 "ENTRY_10dec180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dec180(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10deea50<>(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x18);
  return;
}


// Reference entry 10dec1a0; body size 23 bytes.
#line 1 "ENTRY_10dec1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dec1a0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_105f9e40(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x1c);
  return;
}


// Reference entry 10dec750; body size 83 bytes.
#line 1 "ENTRY_10dec750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dec750(SCStr *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)((undefined4 *)((undefined4 *)*param_1)[1]);
  cVar1 = (char)(*(char *)((int)puVar5 + 0xd));
  puVar3 = (undefined4 *)((undefined4 *)*param_1);
  while (cVar1 == '\0') {
    bVar2 = (bool)(((SCStr *)((SCStr *)(puVar5 + 4)))->op_lt(param_2), 0);
    if (bVar2) {
      puVar4 = (undefined4 *)((undefined4 *)puVar5[2]);
      puVar5 = (undefined4 *)(puVar3);
    }
    else {
      puVar4 = (undefined4 *)((undefined4 *)*puVar5);
    }
    puVar3 = (undefined4 *)(puVar5);
    puVar5 = (undefined4 *)(puVar4);
    cVar1 = (char)(*(char *)((int)puVar4 + 0xd));
  }
  if ((*(char *)((int)puVar3 + 0xd) != '\0') ||
     (bVar2 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(puVar3 + 4)), 0), bVar2)) {
    puVar3 = (undefined4 *)((undefined4 *)*param_1);
  }
  return (undefined4 *)(puVar3);
}


// Reference entry 10dec8e0; body size 83 bytes.
#line 1 "ENTRY_10dec8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10dec8e0(int *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  
  iVar2 = (int)(*param_1);
  puVar4 = (undefined4 *)(*(undefined4 **)(iVar2 + 4), 0);
  *param_2 = (int)((int)puVar4);
  cVar1 = (char)(*(char *)((int)puVar4 + 0xd));
  param_2[1] = (int)(0);
  param_2[2] = (int)(iVar2);
  while (cVar1 == '\0') {
    *param_2 = (int)((int)puVar4);
    bVar3 = (bool)(((SCStr *)((SCStr *)(puVar4 + 4)))->op_lt(param_3), 0);
    if (!bVar3) {
      param_2[2] = (int)((int)puVar4);
      puVar4 = (undefined4 *)((undefined4 *)*puVar4);
    }
    else {
      puVar4 = (undefined4 *)((undefined4 *)puVar4[2]);
    }
    param_2[1] = (int)((uint)!bVar3);
    cVar1 = (char)(*(char *)((int)puVar4 + 0xd));
  }
  return (int *)(param_2);
}


// Reference entry 10dec950; body size 15 bytes.
#line 1 "ENTRY_10dec950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dec950(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10dec9f0; body size 7 bytes.
#line 1 "ENTRY_10dec9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dec9f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10deca00; body size 7 bytes.
#line 1 "ENTRY_10deca00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10deca00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10deca10; body size 7 bytes.
#line 1 "ENTRY_10deca10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10deca10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10deca20; body size 7 bytes.
#line 1 "ENTRY_10deca20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10deca20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ded3e0; body size 5 bytes.
#line 1 "ENTRY_10ded3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ded3e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ded3f0; body size 5 bytes.
#line 1 "ENTRY_10ded3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ded3f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ded400; body size 37 bytes.
#line 1 "ENTRY_10ded400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ded400(int param_1,undefined4 param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = (char)(thunk_FUN_10defa10(param_2,param_1 + 0x10), 0);
    if (cVar1 == '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10ded430; body size 37 bytes.
#line 1 "ENTRY_10ded430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ded430(int param_1,SCStr *param_2)

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


// Reference entry 10ded460; body size 134 bytes.
#line 1 "ENTRY_10ded460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * FUN_10ded460(SCStr *param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  int *piVar2;
  int iVar3;
  SCStr *pSVar4;
  SCStr *pSVar5;
  
  if ((SCStr *)((param_2)) != (SCStr *)(param_1)) {
    pSVar5 = (SCStr *)(param_3 + 0xc);
    do {
      pSVar4 = (SCStr *)(param_2 + -0x18);
      param_3 = (SCStr *)(param_3 + -0x18);
      pSVar1 = (SCStr *)(pSVar5 + -0x18);
      if ((SCStr *)((param_3)) != (SCStr *)(pSVar4)) {
        ((SCStr *)(param_3))->int_release();
        *(undefined4*)param_3 = (undefined4)((SCStr *)(*(undefined4 *)pSVar4));
        ((SCStr *)(param_3))->int_addref();
        *(int*)(pSVar5 + -0x20) = (int)(*(int *)(param_2 + -0x14));
        iVar3 = (int)(*(int *)(param_2 + -0x10));
        if ((int)(iVar3) != *(int *)(pSVar5 + -0x1c)) {
          piVar2 = (int *)(*(int **)pSVar1);
          if ((int *)(piVar2) != (int *)(0x0)) {
            *(int*)(pSVar5 + -0x1c) = (int)(0);
            *(int*)pSVar1 = (int)((SCStr *)(0));
            (**(code **)(*piVar2 + 8))();
            iVar3 = (int)(*(int *)(param_2 + -0x10));
          }
          *(int*)(pSVar5 + -0x1c) = (int)(iVar3);
          piVar2 = (int *)(*(int **)(param_2 + -0xc), 0);
          *(int**)pSVar1 = (int *)((SCStr *)(piVar2));
          if ((int *)(piVar2) != (int *)(0x0)) {
            (**(code **)(*piVar2 + 4))();
          }
        }
      }
      pSVar5 = (SCStr *)(pSVar1);
      param_2 = (SCStr *)(pSVar4);
    } while ((SCStr *)(pSVar4) != (SCStr *)(param_1));
    return (SCStr *)(param_3);
  }
  return (SCStr *)(param_3);
}


// Reference entry 10ded510; body size 188 bytes.
#line 1 "ENTRY_10ded510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * FUN_10ded510(int param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_2 != param_1) {
    iVar1 = (int)(param_2 - (int)param_3);
    puVar2 = (undefined4 *)((undefined4 *)(param_3 + 0xc));
    puVar4 = (undefined4 *)((undefined4 *)(param_2 + 0xc));
    do {
      puVar3 = (undefined4 *)(puVar2 + -7);
      param_3 = (undefined1 *)(param_3 + -0x1c);
      puVar5 = (undefined4 *)(puVar4 + -7);
      *param_3 = (undefined1)(*(undefined1 *)(iVar1 + -0x28 + (int)puVar2));
      if ((undefined4 *)(puVar3) != (undefined4 *)(puVar5)) {
        thunk_FUN_105a1c80();
        puVar2[-9] = (undefined4)(puVar4[-9]);
        puVar2[-8] = (undefined4)(puVar4[-8]);
        *puVar3 = (undefined4)(*puVar5);
        puVar4[-9] = (undefined4)(0);
        puVar4[-8] = (undefined4)(0);
        *puVar5 = (undefined4)(0);
      }
      if (puVar2 + -6 != (undefined4 *)(puVar4) + -6) {
        thunk_FUN_105a1d20();
        puVar2[-6] = (undefined4)(puVar4[-6]);
        puVar2[-5] = (undefined4)(puVar4[-5]);
        puVar2[-4] = (undefined4)(puVar4[-4]);
        puVar4[-6] = (undefined4)(0);
        puVar4[-5] = (undefined4)(0);
        puVar4[-4] = (undefined4)(0);
      }
      puVar2 = (undefined4 *)(puVar3);
      puVar4 = (undefined4 *)(puVar5);
    } while (iVar1 + -0xc + (int)puVar3 != param_1);
    return (undefined1 *)(param_3);
  }
  return (undefined1 *)(param_3);
}


// Reference entry 10ded8f0; body size 7 bytes.
#line 1 "ENTRY_10ded8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ded8f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10dedcc0; body size 5 bytes.
#line 1 "ENTRY_10dedcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dedcc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dedcd0; body size 5 bytes.
#line 1 "ENTRY_10dedcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dedcd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dedce0; body size 5 bytes.
#line 1 "ENTRY_10dedce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dedce0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dedcf0; body size 5 bytes.
#line 1 "ENTRY_10dedcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dedcf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dedd00; body size 5 bytes.
#line 1 "ENTRY_10dedd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dedd00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dedd10; body size 5 bytes.
#line 1 "ENTRY_10dedd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dedd10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dedd20; body size 5 bytes.
#line 1 "ENTRY_10dedd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dedd20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dedd30; body size 5 bytes.
#line 1 "ENTRY_10dedd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dedd30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dedd40; body size 5 bytes.
#line 1 "ENTRY_10dedd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dedd40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dedd50; body size 5 bytes.
#line 1 "ENTRY_10dedd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dedd50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dedd60; body size 5 bytes.
#line 1 "ENTRY_10dedd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dedd60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dedd70; body size 5 bytes.
#line 1 "ENTRY_10dedd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dedd70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dedd80; body size 27 bytes.
#line 1 "ENTRY_10dedd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dedd80(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  thunk_FUN_10deea50<>(*param_4);
  *(undefined4*)(param_2 + 0x18) = (undefined4)(0);
  return;
}


// Reference entry 10deddb0; body size 33 bytes.
#line 1 "ENTRY_10deddb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10deddb0(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
  undefined4 uVar1;
  
  ((SCStr *)(param_2))->m_op_ctor(param_3);
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 8));
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_3 + 4));
  *(undefined4*)(param_2 + 8) = (undefined4)(uVar1);
  return;
}


// Reference entry 10dedde0; body size 14 bytes.
#line 1 "ENTRY_10dedde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dedde0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10deea50<>(param_3);
  return;
}


// Reference entry 10dede00; body size 14 bytes.
#line 1 "ENTRY_10dede00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dede00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10deea50<>(param_3);
  return;
}


// Reference entry 10dede20; body size 14 bytes.
#line 1 "ENTRY_10dede20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dede20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_105f9e40(param_3);
  return;
}


// Reference entry 10dede40; body size 95 bytes.
#line 1 "ENTRY_10dede40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dede40(undefined4 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_2 = (undefined1)(*param_3);
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0xc));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 8));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 4));
  *(undefined4*)(param_3 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_3 + 8) = (undefined4)(0);
  *(undefined4*)(param_3 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 4) = (undefined4)(uVar3);
  *(undefined4*)(param_2 + 8) = (undefined4)(uVar2);
  *(undefined4*)(param_2 + 0xc) = (undefined4)(uVar1);
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0x18));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 0x14));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 0x10));
  *(undefined4*)(param_3 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_3 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_3 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x10) = (undefined4)(uVar3);
  *(undefined4*)(param_2 + 0x14) = (undefined4)(uVar2);
  *(undefined4*)(param_2 + 0x18) = (undefined4)(uVar1);
  return;
}


// Reference entry 10dedf30; body size 26 bytes.
#line 1 "ENTRY_10dedf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10dedf30(int param_1,int param_2)

{
  return (int)((param_2 - param_1) / 0x18);
}


// Reference entry 10dedf50; body size 28 bytes.
#line 1 "ENTRY_10dedf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10dedf50(int param_1,int param_2)

{
  return (int)((param_2 - param_1) / 0x1c);
}


// Reference entry 10dedf80; body size 40 bytes.
#line 1 "ENTRY_10dedf80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dedf80(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_10deea50<>(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x18);
    return;
  }
  thunk_FUN_10dec1c0<>(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 10dedfc0; body size 40 bytes.
#line 1 "ENTRY_10dedfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dedfc0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_105f9e40(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x1c);
    return;
  }
  thunk_FUN_10dec390(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 10dee000; body size 15 bytes.
#line 1 "ENTRY_10dee000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dee000(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10dee020; body size 15 bytes.
#line 1 "ENTRY_10dee020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dee020(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10dee040; body size 15 bytes.
#line 1 "ENTRY_10dee040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dee040(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10dee060; body size 5 bytes.
#line 1 "ENTRY_10dee060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dee060(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dee070; body size 5 bytes.
#line 1 "ENTRY_10dee070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dee070(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dee080; body size 5 bytes.
#line 1 "ENTRY_10dee080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dee080(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dee090; body size 5 bytes.
#line 1 "ENTRY_10dee090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dee090(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dee0a0; body size 5 bytes.
#line 1 "ENTRY_10dee0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dee0a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dee0b0; body size 5 bytes.
#line 1 "ENTRY_10dee0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dee0b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dee0c0; body size 5 bytes.
#line 1 "ENTRY_10dee0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dee0c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dee0d0; body size 5 bytes.
#line 1 "ENTRY_10dee0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dee0d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dee0e0; body size 5 bytes.
#line 1 "ENTRY_10dee0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dee0e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dee0f0; body size 5 bytes.
#line 1 "ENTRY_10dee0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dee0f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dee100; body size 5 bytes.
#line 1 "ENTRY_10dee100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dee100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dee110; body size 5 bytes.
#line 1 "ENTRY_10dee110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dee110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dee120; body size 11 bytes.
#line 1 "ENTRY_10dee120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10dee120(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10dee130; body size 67 bytes.
#line 1 "ENTRY_10dee130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dee130(int *param_2,int param_3,undefined4 param_4,undefined4 param_5)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10deca30<>(param_3,param_4,param_5,param_3);
  *param_2 = (int)(*param_1 + ((param_3 - iVar1) / 0x18) * 0x18);
  return;
}


// Reference entry 10dee190; body size 75 bytes.
#line 1 "ENTRY_10dee190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10dee190(int *param_2,int param_3,undefined4 param_4,undefined4 param_5)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10decf00<>(param_3,param_4,param_5,param_3);
  *param_2 = (int)(*param_1 + ((param_3 - iVar1) / 0x1c) * 0x1c);
  return;
}


// Reference entry 10dee1f0; body size 5 bytes.
#line 1 "ENTRY_10dee1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dee1f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dee200; body size 5 bytes.
#line 1 "ENTRY_10dee200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dee200(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dee210; body size 5 bytes.
#line 1 "ENTRY_10dee210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10dee210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dee220; body size 18 bytes.
#line 1 "ENTRY_10dee220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dee220(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dee240; body size 18 bytes.
#line 1 "ENTRY_10dee240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dee240(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dee2a0; body size 11 bytes.
#line 1 "ENTRY_10dee2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dee2a0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10dee2b0; body size 11 bytes.
#line 1 "ENTRY_10dee2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dee2b0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10dee2c0; body size 51 bytes.
#line 1 "ENTRY_10dee2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dee2c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *(void**)param_1[1] = (void *)((undefined4)(pvVar1));
  return (undefined4 *)(param_1);
}


// Reference entry 10dee380; body size 11 bytes.
#line 1 "ENTRY_10dee380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dee380(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10dee390; body size 11 bytes.
#line 1 "ENTRY_10dee390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dee390(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10dee3a0; body size 16 bytes.
#line 1 "ENTRY_10dee3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dee3a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dee3c0; body size 11 bytes.
#line 1 "ENTRY_10dee3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dee3c0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10dee3d0; body size 11 bytes.
#line 1 "ENTRY_10dee3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dee3d0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10dee3e0; body size 11 bytes.
#line 1 "ENTRY_10dee3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dee3e0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10dee3f0; body size 11 bytes.
#line 1 "ENTRY_10dee3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dee3f0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10dee400; body size 3 bytes.
#line 1 "ENTRY_10dee400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dee400(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dee410; body size 3 bytes.
#line 1 "ENTRY_10dee410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dee410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dee420; body size 3 bytes.
#line 1 "ENTRY_10dee420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dee420(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10dee550; body size 52 bytes.
#line 1 "ENTRY_10dee550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dee550(undefined4 *param_1)

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


// Reference entry 10dee5a0; body size 39 bytes.
#line 1 "ENTRY_10dee5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10dee5a0(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  undefined4 uVar1;
  
  ((SCStr *)(param_1))->m_op_ctor(param_2);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 8));
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  *(undefined4*)(param_1 + 8) = (undefined4)(uVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10dee5d0; body size 13 bytes.
#line 1 "ENTRY_10dee5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10dee5d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10dee5e0; body size 23 bytes.
#line 1 "ENTRY_10dee5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dee5e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dee600; body size 23 bytes.
#line 1 "ENTRY_10dee600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10dee600(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10def410; body size 14 bytes.
#line 1 "ENTRY_10def410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10def410(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10def430; body size 14 bytes.
#line 1 "ENTRY_10def430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10def430(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10def710; body size 17 bytes.
#line 1 "ENTRY_10def710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10def710(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10def4a0<>(param_1), 0);
  return (bool)(cVar1 == '\0');
}


// Reference entry 10def840; body size 15 bytes.
#line 1 "ENTRY_10def840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10def840(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0x18);
}


// Reference entry 10def860; body size 21 bytes.
#line 1 "ENTRY_10def860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10def860(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0x1c);
}


// Reference entry 10def880; body size 6 bytes.
#line 1 "ENTRY_10def880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10def880(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10def890; body size 6 bytes.
#line 1 "ENTRY_10def890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10def890(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10def8a0; body size 6 bytes.
#line 1 "ENTRY_10def8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10def8a0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10def8b0; body size 6 bytes.
#line 1 "ENTRY_10def8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10def8b0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10defc80; body size 31 bytes.
#line 1 "ENTRY_10defc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10defc80(undefined4 *param_1)

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


// Reference entry 10defee0; body size 14 bytes.
#line 1 "ENTRY_10defee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10defee0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x5d1745d) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10deff00; body size 3 bytes.
#line 1 "ENTRY_10deff00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10deff00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10deff10; body size 3 bytes.
#line 1 "ENTRY_10deff10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10deff10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10deff20; body size 3 bytes.
#line 1 "ENTRY_10deff20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10deff20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10deff30; body size 3 bytes.
#line 1 "ENTRY_10deff30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10deff30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10deff40; body size 3 bytes.
#line 1 "ENTRY_10deff40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10deff40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10deff50; body size 3 bytes.
#line 1 "ENTRY_10deff50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10deff50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10deff60; body size 3 bytes.
#line 1 "ENTRY_10deff60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10deff60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10deff70; body size 3 bytes.
#line 1 "ENTRY_10deff70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10deff70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10deff80; body size 3 bytes.
#line 1 "ENTRY_10deff80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10deff80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10deffa0; body size 3 bytes.
#line 1 "ENTRY_10deffa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10deffa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10deffb0; body size 3 bytes.
#line 1 "ENTRY_10deffb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10deffb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10deffc0; body size 3 bytes.
#line 1 "ENTRY_10deffc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10deffc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10df0260; body size 79 bytes.
#line 1 "ENTRY_10df0260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df0260(int param_2)
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


// Reference entry 10df02d0; body size 21 bytes.
#line 1 "ENTRY_10df02d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df02d0(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 0x18);
  return;
}


// Reference entry 10df02f0; body size 27 bytes.
#line 1 "ENTRY_10df02f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df02f0(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 0x1c);
  return;
}


// Reference entry 10df0320; body size 30 bytes.
#line 1 "ENTRY_10df0320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10df0320(int param_1)

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


// Reference entry 10df0350; body size 31 bytes.
#line 1 "ENTRY_10df0350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10df0350(int *param_1)

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


// Reference entry 10df0380; body size 3 bytes.
#line 1 "ENTRY_10df0380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10df0380(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10df0390; body size 3 bytes.
#line 1 "ENTRY_10df0390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10df0390(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10df03a0; body size 3 bytes.
#line 1 "ENTRY_10df03a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10df03a0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10df03b0; body size 11 bytes.
#line 1 "ENTRY_10df03b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10df03b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10df03c0; body size 11 bytes.
#line 1 "ENTRY_10df03c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10df03c0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10df03d0; body size 8 bytes.
#line 1 "ENTRY_10df03d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10df03d0(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10df03e0; body size 83 bytes.
#line 1 "ENTRY_10df03e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df03e0(int *param_2)
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


// Reference entry 10df0520; body size 24 bytes.
#line 1 "ENTRY_10df0520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df0520(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1059f5e0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10df0540; body size 24 bytes.
#line 1 "ENTRY_10df0540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df0540(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10dedc10(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10df0560; body size 24 bytes.
#line 1 "ENTRY_10df0560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df0560(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1059f5e0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10df0580; body size 24 bytes.
#line 1 "ENTRY_10df0580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df0580(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10dedc10(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10df05a0; body size 3 bytes.
#line 1 "ENTRY_10df05a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10df05a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10df05b0; body size 3 bytes.
#line 1 "ENTRY_10df05b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10df05b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10df05d0; body size 97 bytes.
#line 1 "ENTRY_10df05d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10df05d0(uint param_1)

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


// Reference entry 10df0650; body size 11 bytes.
#line 1 "ENTRY_10df0650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df0650(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10df0660; body size 11 bytes.
#line 1 "ENTRY_10df0660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df0660(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10df0670; body size 27 bytes.
#line 1 "ENTRY_10df0670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10df0670(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0x1c);
}


// Reference entry 10df09c0; body size 63 bytes.
#line 1 "ENTRY_10df09c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10df09c0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10df0a10; body size 55 bytes.
#line 1 "ENTRY_10df0a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10df0a10(int param_1,int param_2)

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


// Reference entry 10df0a60; body size 66 bytes.
#line 1 "ENTRY_10df0a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10df0a60(int param_1,int param_2)

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


// Reference entry 10df0ac0; body size 11 bytes.
#line 1 "ENTRY_10df0ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df0ac0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10df0ad0; body size 11 bytes.
#line 1 "ENTRY_10df0ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df0ad0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10df0ae0; body size 12 bytes.
#line 1 "ENTRY_10df0ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df0ae0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10df0af0; body size 12 bytes.
#line 1 "ENTRY_10df0af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df0af0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10df0b00; body size 12 bytes.
#line 1 "ENTRY_10df0b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df0b00(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10df0b10; body size 12 bytes.
#line 1 "ENTRY_10df0b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df0b10(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10df0b90; body size 100 bytes.
#line 1 "ENTRY_10df0b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df0b90(int *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)((undefined4 *)((undefined4 *)*param_1)[1]);
  cVar1 = (char)(*(char *)((int)puVar5 + 0xd));
  puVar2 = (undefined4 *)((undefined4 *)*param_1);
  while (cVar1 == '\0') {
    bVar3 = (bool)(((SCStr *)((SCStr *)(puVar5 + 4)))->op_lt(param_3), 0);
    if (bVar3) {
      puVar4 = (undefined4 *)((undefined4 *)puVar5[2]);
      puVar5 = (undefined4 *)(puVar2);
    }
    else {
      puVar4 = (undefined4 *)((undefined4 *)*puVar5);
    }
    puVar2 = (undefined4 *)(puVar5);
    puVar5 = (undefined4 *)(puVar4);
    cVar1 = (char)(*(char *)((int)puVar4 + 0xd));
  }
  if ((*(char *)((int)puVar2 + 0xd) == '\0') &&
     (bVar3 = (bool)(((SCStr *)(param_3))->op_lt((SCStr *)(puVar2 + 4)), 0), !bVar3)) {
    *param_2 = (int)((int)puVar2);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 10df0d00; body size 116 bytes.
#line 1 "ENTRY_10df0d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df0d00(undefined8 *param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)((undefined4 *)(*(undefined4 **)(param_1 + 0x10))[1], 0);
  cVar1 = (char)(*(char *)((int)puVar6 + 0xd));
  puVar3 = (undefined4 *)(*(undefined4 **)(param_1 + 0x10), 0);
  while (cVar1 == '\0') {
    bVar4 = (bool)(((SCStr *)((SCStr *)(puVar6 + 4)))->op_lt(param_3), 0);
    if (bVar4) {
      puVar5 = (undefined4 *)((undefined4 *)puVar6[2]);
      puVar6 = (undefined4 *)(puVar3);
    }
    else {
      puVar5 = (undefined4 *)((undefined4 *)*puVar6);
    }
    puVar3 = (undefined4 *)(puVar6);
    puVar6 = (undefined4 *)(puVar5);
    cVar1 = (char)(*(char *)((int)puVar5 + 0xd));
  }
  if (((*(char *)((int)puVar3 + 0xd) == '\0') &&
      (bVar4 = (bool)(((SCStr *)(param_3))->op_lt((SCStr *)(puVar3 + 4)), 0), !bVar4)) &&
     ((undefined4 *)(puVar3) != *(undefined4 **)(param_1 + 0x10))) {
    uVar2 = (undefined4)(puVar3[6]);
    *(undefined4*)param_2 = (undefined4)((undefined8 *)(puVar3[5]));
    *(undefined4*)((int)param_2 + 4) = (undefined4)(uVar2);
    return;
  }
  *param_2 = (undefined8)(0);
  return;
}


// Reference entry 10df16e0; body size 7 bytes.
#line 1 "ENTRY_10df16e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10df16e0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10df17a0; body size 7 bytes.
#line 1 "ENTRY_10df17a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10df17a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10df17b0; body size 6 bytes.
#line 1 "ENTRY_10df17b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10df17b0(void)

{
  return (undefined4)(0x5d1745d);
}


// Reference entry 10df17c0; body size 6 bytes.
#line 1 "ENTRY_10df17c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10df17c0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10df17d0; body size 6 bytes.
#line 1 "ENTRY_10df17d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10df17d0(void)

{
  return (undefined4)(0x5d1745d);
}


// Reference entry 10df17e0; body size 6 bytes.
#line 1 "ENTRY_10df17e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10df17e0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10df17f0; body size 5 bytes.
#line 1 "ENTRY_10df17f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10df17f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10df1800; body size 5 bytes.
#line 1 "ENTRY_10df1800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10df1800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10df1810; body size 40 bytes.
#line 1 "ENTRY_10df1810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df1810(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_10deea50<>(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x18);
    return;
  }
  thunk_FUN_10dec1c0<>(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 10df1850; body size 40 bytes.
#line 1 "ENTRY_10df1850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df1850(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_105f9e40(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x1c);
    return;
  }
  thunk_FUN_10dec390(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 10df1b40; body size 5 bytes.
#line 1 "ENTRY_10df1b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10df1b40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10df1b50; body size 23 bytes.
#line 1 "ENTRY_10df1b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10df1b50(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0x18);
}


// Reference entry 10df1b70; body size 27 bytes.
#line 1 "ENTRY_10df1b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10df1b70(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0x1c);
}


// Reference entry 10df2100; body size 25 bytes.
#line 1 "ENTRY_10df2100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10df2100(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10df2120; body size 20 bytes.
#line 1 "ENTRY_10df2120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df2120(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  uVar2 = (undefined4)(param_2[1]);
  uVar3 = (undefined4)(param_2[2]);
  uVar4 = (undefined4)(param_2[3]);
  *puVar1 = (undefined4)(*param_2);
  puVar1[1] = (undefined4)(uVar2);
  puVar1[2] = (undefined4)(uVar3);
  puVar1[3] = (undefined4)(uVar4);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x10);
  return;
}


// Reference entry 10df2140; body size 20 bytes.
#line 1 "ENTRY_10df2140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df2140(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  uVar2 = (undefined4)(param_2[1]);
  uVar3 = (undefined4)(param_2[2]);
  uVar4 = (undefined4)(param_2[3]);
  *puVar1 = (undefined4)(*param_2);
  puVar1[1] = (undefined4)(uVar2);
  puVar1[2] = (undefined4)(uVar3);
  puVar1[3] = (undefined4)(uVar4);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x10);
  return;
}


// Reference entry 10df2340; body size 7 bytes.
#line 1 "ENTRY_10df2340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10df2340(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10df2350; body size 33 bytes.
#line 1 "ENTRY_10df2350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10df2350(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 4) {
    uVar1 = (undefined4)(param_1[1]);
    uVar2 = (undefined4)(param_1[2]);
    uVar3 = (undefined4)(param_1[3]);
    *param_3 = (undefined4)(*param_1);
    param_3[1] = (undefined4)(uVar1);
    param_3[2] = (undefined4)(uVar2);
    param_3[3] = (undefined4)(uVar3);
    param_3 = (undefined4 *)(param_3 + 4);
  }
  return;
}


// Reference entry 10df2380; body size 15 bytes.
#line 1 "ENTRY_10df2380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10df2380(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (undefined4)(param_3[1]);
  uVar2 = (undefined4)(param_3[2]);
  uVar3 = (undefined4)(param_3[3]);
  *param_2 = (undefined4)(*param_3);
  param_2[1] = (undefined4)(uVar1);
  param_2[2] = (undefined4)(uVar2);
  param_2[3] = (undefined4)(uVar3);
  return;
}


// Reference entry 10df23a0; body size 38 bytes.
#line 1 "ENTRY_10df23a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df23a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    uVar2 = (undefined4)(param_2[1]);
    uVar3 = (undefined4)(param_2[2]);
    uVar4 = (undefined4)(param_2[3]);
    *puVar1 = (undefined4)(*param_2);
    puVar1[1] = (undefined4)(uVar2);
    puVar1[2] = (undefined4)(uVar3);
    puVar1[3] = (undefined4)(uVar4);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x10);
    return;
  }
  thunk_FUN_10df2160(puVar1,param_2);
  return;
}


// Reference entry 10df23d0; body size 5 bytes.
#line 1 "ENTRY_10df23d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10df23d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10df23e0; body size 5 bytes.
#line 1 "ENTRY_10df23e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10df23e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10df23f0; body size 21 bytes.
#line 1 "ENTRY_10df23f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10df23f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10df2410; body size 23 bytes.
#line 1 "ENTRY_10df2410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10df2410(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10df2430; body size 3 bytes.
#line 1 "ENTRY_10df2430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10df2430(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10df2440; body size 23 bytes.
#line 1 "ENTRY_10df2440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10df2440(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10df27b0; body size 32 bytes.
#line 1 "ENTRY_10df27b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10df27b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[3] = (undefined4)(param_3);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10df27e0; body size 3 bytes.
#line 1 "ENTRY_10df27e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10df27e0(void)

{
  return;
}


// Reference entry 10df29a0; body size 12 bytes.
#line 1 "ENTRY_10df29a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10df29a0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(param_2 * 0x10 + *param_1);
}


// Reference entry 10df29b0; body size 12 bytes.
#line 1 "ENTRY_10df29b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10df29b0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(param_2 * 0x10 + *param_1);
}


// Reference entry 10df29c0; body size 12 bytes.
#line 1 "ENTRY_10df29c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10df29c0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(param_2 * 0x20 + *param_1);
}


// Reference entry 10df29d0; body size 15 bytes.
#line 1 "ENTRY_10df29d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10df29d0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0x18);
}


// Reference entry 10df2bd0; body size 3 bytes.
#line 1 "ENTRY_10df2bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10df2bd0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10df2be0; body size 6 bytes.
#line 1 "ENTRY_10df2be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10df2be0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10df2bf0; body size 35 bytes.
#line 1 "ENTRY_10df2bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10df2bf0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 4) {
    uVar1 = (undefined4)(param_1[1]);
    uVar2 = (undefined4)(param_1[2]);
    uVar3 = (undefined4)(param_1[3]);
    *param_3 = (undefined4)(*param_1);
    param_3[1] = (undefined4)(uVar1);
    param_3[2] = (undefined4)(uVar2);
    param_3[3] = (undefined4)(uVar3);
    param_3 = (undefined4 *)(param_3 + 4);
  }
  return;
}


// Reference entry 10df2c20; body size 35 bytes.
#line 1 "ENTRY_10df2c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10df2c20(undefined4 *param_1, undefined4 *param_2, int param_3, unsigned int recovered_unused_stack_0)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    param_3 = (int)(param_3 - (int)param_1);
    do {
      uVar2 = (undefined4)(param_1[1]);
      uVar3 = (undefined4)(param_1[2]);
      uVar4 = (undefined4)(param_1[3]);
      puVar1 = (undefined4 *)((undefined4 *)(param_3 + (int)param_1));
      *puVar1 = (undefined4)(*param_1);
      puVar1[1] = (undefined4)(uVar2);
      puVar1[2] = (undefined4)(uVar3);
      puVar1[3] = (undefined4)(uVar4);
      param_1 = (undefined4 *)(param_1 + 4);
    } while ((undefined4 *)(param_1) != (undefined4 *)(param_2));
  }
  return;
}


// Reference entry 10df2c50; body size 35 bytes.
#line 1 "ENTRY_10df2c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10df2c50(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    param_3 = (int)(param_3 - (int)param_1);
    do {
      uVar2 = (undefined4)(param_1[1]);
      uVar3 = (undefined4)(param_1[2]);
      uVar4 = (undefined4)(param_1[3]);
      puVar1 = (undefined4 *)((undefined4 *)(param_3 + (int)param_1));
      *puVar1 = (undefined4)(*param_1);
      puVar1[1] = (undefined4)(uVar2);
      puVar1[2] = (undefined4)(uVar3);
      puVar1[3] = (undefined4)(uVar4);
      param_1 = (undefined4 *)(param_1 + 4);
    } while ((undefined4 *)(param_1) != (undefined4 *)(param_2));
  }
  return;
}


// Reference entry 10df2c80; body size 7 bytes.
#line 1 "ENTRY_10df2c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10df2c80(int param_1)

{
  return (int)(*(int *)(param_1 + 4) + -0x10);
}


// Reference entry 10df2c90; body size 7 bytes.
#line 1 "ENTRY_10df2c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10df2c90(int param_1)

{
  return (int)(*(int *)(param_1 + 4) + -0x20);
}


// Reference entry 10df2ca0; body size 7 bytes.
#line 1 "ENTRY_10df2ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10df2ca0(int param_1)

{
  return (int)(*(int *)(param_1 + 4) + -0x18);
}


// Reference entry 10df2d70; body size 3 bytes.
#line 1 "ENTRY_10df2d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10df2d70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10df2d80; body size 3 bytes.
#line 1 "ENTRY_10df2d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10df2d80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10df3ef0; body size 38 bytes.
#line 1 "ENTRY_10df3ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df3ef0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    uVar2 = (undefined4)(param_2[1]);
    uVar3 = (undefined4)(param_2[2]);
    uVar4 = (undefined4)(param_2[3]);
    *puVar1 = (undefined4)(*param_2);
    puVar1[1] = (undefined4)(uVar2);
    puVar1[2] = (undefined4)(uVar3);
    puVar1[3] = (undefined4)(uVar4);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x10);
    return;
  }
  thunk_FUN_10df2160(puVar1,param_2);
  return;
}


// Reference entry 10df3fb0; body size 9 bytes.
#line 1 "ENTRY_10df3fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10df3fb0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 4);
}


// Reference entry 10df3fc0; body size 9 bytes.
#line 1 "ENTRY_10df3fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10df3fc0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 5);
}


// Reference entry 10df47f0; body size 32 bytes.
#line 1 "ENTRY_10df47f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10df47f0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_3);
  *(undefined8*)(param_1 + 4) = (undefined8)(0);
  return (SCStr *)(param_1);
}


// Reference entry 10df4820; body size 22 bytes.
#line 1 "ENTRY_10df4820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10df4820(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10df4910; body size 22 bytes.
#line 1 "ENTRY_10df4910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10df4910(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10df4930; body size 33 bytes.
#line 1 "ENTRY_10df4930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10df4930(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 10df4960; body size 34 bytes.
#line 1 "ENTRY_10df4960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10df4960(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)*param_2);
  *(undefined8*)(param_1 + 4) = (undefined8)(0);
  return (SCStr *)(param_1);
}


// Reference entry 10df4a70; body size 26 bytes.
#line 1 "ENTRY_10df4a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10df4a70(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10df4a90; body size 83 bytes.
#line 1 "ENTRY_10df4a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10df4a90(int *param_2)
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


// Reference entry 10df4b00; body size 18 bytes.
#line 1 "ENTRY_10df4b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df4b00(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10df4e80; body size 13 bytes.
#line 1 "ENTRY_10df4e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10df4e80(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10df4e90; body size 28 bytes.
#line 1 "ENTRY_10df4e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10df4e90(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined8*)(param_2 + 4) = (undefined8)(0);
  return;
}


// Reference entry 10df4ec0; body size 36 bytes.
#line 1 "ENTRY_10df4ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10df4ec0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10df4b20<>(puVar1,param_2);
  return;
}


// Reference entry 10df4ef0; body size 15 bytes.
#line 1 "ENTRY_10df4ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10df4ef0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10df4f10; body size 5 bytes.
#line 1 "ENTRY_10df4f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10df4f10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10df4f20; body size 5 bytes.
#line 1 "ENTRY_10df4f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10df4f20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10df4f30; body size 5 bytes.
#line 1 "ENTRY_10df4f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10df4f30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10df4f40; body size 16 bytes.
#line 1 "ENTRY_10df4f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10df4f40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10df4fe0; body size 25 bytes.
#line 1 "ENTRY_10df4fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10df4fe0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 10df5000; body size 49 bytes.
#line 1 "ENTRY_10df5000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10df5000(undefined4 *param_2)
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


// Reference entry 10df5040; body size 9 bytes.
#line 1 "ENTRY_10df5040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10df5040(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBlePeripheralManager_Listener);
  return (undefined4 *)(param_1);
}


// Reference entry 10df5050; body size 9 bytes.
#line 1 "ENTRY_10df5050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10df5050(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCChirpManager_Listener);
  return (undefined4 *)(param_1);
}


// Reference entry 10df5060; body size 9 bytes.
#line 1 "ENTRY_10df5060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10df5060(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetstart2Manager_Listener);
  return (undefined4 *)(param_1);
}


// Reference entry 10df5070; body size 9 bytes.
#line 1 "ENTRY_10df5070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10df5070(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetstartStore_Listener);
  return (undefined4 *)(param_1);
}


// Reference entry 10df5080; body size 9 bytes.
#line 1 "ENTRY_10df5080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10df5080(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNfcManager_Listener);
  return (undefined4 *)(param_1);
}


// Reference entry 10df6ab0; body size 38 bytes.
#line 1 "ENTRY_10df6ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10df6ab0(undefined4 *param_1)

{
  thunk_FUN_10deef20();
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCBlePeripheralManager_Listener);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizBlePeripheralManagerEventSource);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizBlePeripheralManagerEventSource);
  return (undefined4 *)(param_1);
}


// Reference entry 10df9290; body size 38 bytes.
#line 1 "ENTRY_10df9290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10df9290(undefined4 *param_1)

{
  thunk_FUN_10deef20();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizMuseBleClientEventSource);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10dff5d0; body size 19 bytes.
#line 1 "ENTRY_10dff5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10dff5d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10dff830; body size 3 bytes.
#line 1 "ENTRY_10dff830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dff830(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10dff840; body size 3 bytes.
#line 1 "ENTRY_10dff840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dff840(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10dff850; body size 3 bytes.
#line 1 "ENTRY_10dff850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10dff850(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e00730; body size 14 bytes.
#line 1 "ENTRY_10e00730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e00730(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10e009e0; body size 79 bytes.
#line 1 "ENTRY_10e009e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e009e0(int param_2)
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


// Reference entry 10e00a50; body size 83 bytes.
#line 1 "ENTRY_10e00a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e00a50(int *param_2)
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


// Reference entry 10e01cf0; body size 5 bytes.
#line 1 "ENTRY_10e01cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e01cf0(void)

{
  return (undefined4)(DAT_121a0718);
}


// Reference entry 10e01d00; body size 17 bytes.
#line 1 "ENTRY_10e01d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e01d00(undefined4 param_1)

{
  thunk_FUN_101da4a0(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10e01d20; body size 5 bytes.
#line 1 "ENTRY_10e01d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e01d20(void)

{
  return (undefined4)(DAT_121a5034);
}


// Reference entry 10e01d30; body size 5 bytes.
#line 1 "ENTRY_10e01d30"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined ** FUN_10e01d30(void)

{ int stack0xfffffffc;
 try {
  int *piVar1;
  int *piVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if (*(int *)(*(int *)((int)((void *)__readfsdword(0x18)) + _tls_index * 4) + 0x104) < DAT_121a5134) {
    thunk_FUN_1148ab00(&DAT_121a5134,DAT_12126b84 ^ (uint)&stack0xfffffffc);
    if (DAT_121a5134 == -1) {
      g_lSCObjCount = (int)(g_lSCObjCount + 1);

      piVar2 = (int *)(operator_new(0xc), 0);
      if ((int *)(piVar2) == (int *)(0x0)) {
        piVar2 = (int *)((int *)0x0);
      }
      else {
        *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
        piVar2[1] = (int)(0);
        g_lSCObjCount = (int)(g_lSCObjCount + 1);
        *piVar2 = (int)((int)(uint)&ghidra_vftable_SCEventSinkDelegateInternal);
        piVar2[2] = (int)((int)&PTR_vftable_12119d28);
      }
      piVar1 = (int *)(DAT_12119d30);
      if ((int *)(piVar2) != (int *)(DAT_12119d2c)) {
        if ((int *)(DAT_12119d30) != (int *)(0x0)) {
          DAT_12119d2c = (int)((int *)0x0);
          DAT_12119d30 = (int)((int *)0x0);
          (**(code **)(*piVar1 + 8))();
        }
        DAT_12119d2c = (int)(piVar2);
        if ((int *)(piVar2) == (int *)(0x0)) {
          DAT_12119d30 = (int)((int *)0x0);
        }
        else {
          if (*(code **)(*piVar2 + 0xc) != (code *)((thunk_FUN_101b5500))) {
            piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))(), 0);
          }
          DAT_12119d30 = (int)(piVar2);
          (**(code **)(*piVar2 + 4))();
        }
      }
      PTR_vftable_12119d20 = (int *)((undefined *)(uint)&ghidra_vftable_SCDiscoveryHistoryStore);
      PTR_vftable_12119d28 = (int *)((undefined *)(uint)&ghidra_vftable_SCDiscoveryHistoryStore);
      DAT_12119d34 = (int)((uint)&ghidra_vftable_SCDiscoveryHistoryStore);
      DAT_12119d40 = (int)(0);
      uRam12119d44 = (int)(0);
      uRam12119d48 = (int)(0);
      uRam12119d4c = (int)(0);
      DAT_12119d50 = (int)(DAT_11c03b94);
      DAT_12119d54 = (int)(DAT_11c03b98);
      DAT_12119d58 = (int)(0);
      DAT_12119d5c = (int)(0);
      thunk_FUN_112a9cf0(&DAT_12119d38);
      _atexit((_func_4879 *)LAB_11830ef0);
      thunk_FUN_1148aaa4(&DAT_121a5134);
    }
  }

  return (undefined **)(&PTR_vftable_12119d20);

 } catch (...) { }
}


// Reference entry 10e01d40; body size 6 bytes.
#line 1 "ENTRY_10e01d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e01d40(void)

{
  return (undefined4)(DAT_121a10c8);
}


// Reference entry 10e01d50; body size 5 bytes.
#line 1 "ENTRY_10e01d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e01d50(void)

{
  return (undefined4)(DAT_121a50e4);
}


// Reference entry 10e01d80; body size 5 bytes.
#line 1 "ENTRY_10e01d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e01d80(void)

{
  return (undefined4)(DAT_121a53cc);
}


// Reference entry 10e01d90; body size 5 bytes.
#line 1 "ENTRY_10e01d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e01d90(undefined4 param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  if (*(int *)(*(int *)((int)((void *)__readfsdword(0x18)) + _tls_index * 4) + 0x104) < DAT_121a6c40) {
    thunk_FUN_1148ab00(&DAT_121a6c40,uVar1,param_1);
    if (DAT_121a6c40 == -1) {

      pvVar2 = (void *)(operator_new(0x3590), 0);
      uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(1)));
      if ((void *)(pvVar2) == (void *)(0x0)) {
        DAT_121a6c3c = (int)(0);
      }
      else {
        DAT_121a6c3c = (int)(thunk_FUN_10ee1ed0(uVar1,pvVar2), 0);
      }
      thunk_FUN_1148aaa4(&DAT_121a6c40);
    }
  }

  return (undefined4)(DAT_121a6c3c);

 } catch (...) { }
}


// Reference entry 10e01df0; body size 6 bytes.
#line 1 "ENTRY_10e01df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e01df0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10e01e00; body size 6 bytes.
#line 1 "ENTRY_10e01e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e01e00(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10e06aa0; body size 3 bytes.
#line 1 "ENTRY_10e06aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e06aa0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e06ab0; body size 3 bytes.
#line 1 "ENTRY_10e06ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e06ab0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e06ac0; body size 36 bytes.
#line 1 "ENTRY_10e06ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e06ac0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10df4b20<>(puVar1,param_2);
  return;
}


// Reference entry 10e06b70; body size 28 bytes.
#line 1 "ENTRY_10e06b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e06b70(undefined4 *param_1)

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


// Reference entry 10e06ba0; body size 20 bytes.
#line 1 "ENTRY_10e06ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e06ba0(int *param_1)

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


// Reference entry 10e0a320; body size 4 bytes.
#line 1 "ENTRY_10e0a320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e0a320(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e0b030; body size 25 bytes.
#line 1 "ENTRY_10e0b030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e0b030(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e0b050; body size 18 bytes.
#line 1 "ENTRY_10e0b050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e0b050(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e0b070; body size 18 bytes.
#line 1 "ENTRY_10e0b070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e0b070(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e0b090; body size 40 bytes.
#line 1 "ENTRY_10e0b090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e0b090(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  *(undefined8*)(param_1 + 1) = (undefined8)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e0b0d0; body size 22 bytes.
#line 1 "ENTRY_10e0b0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e0b0d0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10e0b0f0; body size 22 bytes.
#line 1 "ENTRY_10e0b0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e0b0f0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10e0b110; body size 18 bytes.
#line 1 "ENTRY_10e0b110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e0b110(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e0b130; body size 18 bytes.
#line 1 "ENTRY_10e0b130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e0b130(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e0b2e0; body size 31 bytes.
#line 1 "ENTRY_10e0b2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10e0b2e0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 10e0b310; body size 22 bytes.
#line 1 "ENTRY_10e0b310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e0b310(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10e0b330; body size 22 bytes.
#line 1 "ENTRY_10e0b330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e0b330(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10e0b350; body size 42 bytes.
#line 1 "ENTRY_10e0b350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e0b350(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  *(undefined8*)(param_1 + 1) = (undefined8)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e0b390; body size 33 bytes.
#line 1 "ENTRY_10e0b390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10e0b390(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 10e0b3c0; body size 25 bytes.
#line 1 "ENTRY_10e0b3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e0b3c0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10e0b3e0; body size 25 bytes.
#line 1 "ENTRY_10e0b3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e0b3e0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10e0b400; body size 13 bytes.
#line 1 "ENTRY_10e0b400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e0b400(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10e0b410; body size 13 bytes.
#line 1 "ENTRY_10e0b410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e0b410(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10e0b420; body size 13 bytes.
#line 1 "ENTRY_10e0b420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e0b420(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10e0b430; body size 13 bytes.
#line 1 "ENTRY_10e0b430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e0b430(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10e0b440; body size 3 bytes.
#line 1 "ENTRY_10e0b440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e0b440(void)

{
  return;
}


// Reference entry 10e0b450; body size 3 bytes.
#line 1 "ENTRY_10e0b450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e0b450(void)

{
  return;
}


// Reference entry 10e0b460; body size 3 bytes.
#line 1 "ENTRY_10e0b460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e0b460(void)

{
  return;
}


// Reference entry 10e0b760; body size 15 bytes.
#line 1 "ENTRY_10e0b760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e0b760(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10e0b780; body size 15 bytes.
#line 1 "ENTRY_10e0b780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e0b780(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10e0b8e0; body size 5 bytes.
#line 1 "ENTRY_10e0b8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e0b8e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0b8f0; body size 5 bytes.
#line 1 "ENTRY_10e0b8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e0b8f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0b900; body size 31 bytes.
#line 1 "ENTRY_10e0b900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10e0b900(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = (uint)(*param_2), *(int *)(param_1 + 0x10) <= (int)(in_EAX))) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10e0b930; body size 37 bytes.
#line 1 "ENTRY_10e0b930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e0b930(int param_1,SCStr *param_2)

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


// Reference entry 10e0bbc0; body size 5 bytes.
#line 1 "ENTRY_10e0bbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e0bbc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0bbd0; body size 5 bytes.
#line 1 "ENTRY_10e0bbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e0bbd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0bbe0; body size 5 bytes.
#line 1 "ENTRY_10e0bbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e0bbe0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0bbf0; body size 5 bytes.
#line 1 "ENTRY_10e0bbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e0bbf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0bc00; body size 5 bytes.
#line 1 "ENTRY_10e0bc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e0bc00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0bc10; body size 5 bytes.
#line 1 "ENTRY_10e0bc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e0bc10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0bc20; body size 5 bytes.
#line 1 "ENTRY_10e0bc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e0bc20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0bc30; body size 5 bytes.
#line 1 "ENTRY_10e0bc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e0bc30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0bc40; body size 5 bytes.
#line 1 "ENTRY_10e0bc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e0bc40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0bc50; body size 30 bytes.
#line 1 "ENTRY_10e0bc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e0bc50(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  *(undefined8*)(param_2 + 1) = (undefined8)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10e0bc80; body size 27 bytes.
#line 1 "ENTRY_10e0bc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e0bc80(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10e0bdd0; body size 15 bytes.
#line 1 "ENTRY_10e0bdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e0bdd0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10e0bdf0; body size 15 bytes.
#line 1 "ENTRY_10e0bdf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e0bdf0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10e0be10; body size 15 bytes.
#line 1 "ENTRY_10e0be10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e0be10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10e0be30; body size 15 bytes.
#line 1 "ENTRY_10e0be30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e0be30(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10e0be50; body size 5 bytes.
#line 1 "ENTRY_10e0be50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e0be50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0be60; body size 5 bytes.
#line 1 "ENTRY_10e0be60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e0be60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0be70; body size 5 bytes.
#line 1 "ENTRY_10e0be70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e0be70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0be80; body size 5 bytes.
#line 1 "ENTRY_10e0be80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e0be80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0be90; body size 5 bytes.
#line 1 "ENTRY_10e0be90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e0be90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0bea0; body size 5 bytes.
#line 1 "ENTRY_10e0bea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e0bea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0beb0; body size 25 bytes.
#line 1 "ENTRY_10e0beb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e0beb0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10e0bed0; body size 18 bytes.
#line 1 "ENTRY_10e0bed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e0bed0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e0bef0; body size 18 bytes.
#line 1 "ENTRY_10e0bef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e0bef0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e0c090; body size 16 bytes.
#line 1 "ENTRY_10e0c090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e0c090(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e0c0b0; body size 16 bytes.
#line 1 "ENTRY_10e0c0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e0c0b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e0c0d0; body size 23 bytes.
#line 1 "ENTRY_10e0c0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e0c0d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e0c0f0; body size 3 bytes.
#line 1 "ENTRY_10e0c0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e0c0f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0c100; body size 3 bytes.
#line 1 "ENTRY_10e0c100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e0c100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0c110; body size 3 bytes.
#line 1 "ENTRY_10e0c110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e0c110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0c120; body size 52 bytes.
#line 1 "ENTRY_10e0c120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e0c120(undefined4 *param_1)

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


// Reference entry 10e0c170; body size 52 bytes.
#line 1 "ENTRY_10e0c170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e0c170(undefined4 *param_1)

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


// Reference entry 10e0c1c0; body size 23 bytes.
#line 1 "ENTRY_10e0c1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e0c1c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e0c1e0; body size 21 bytes.
#line 1 "ENTRY_10e0c1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e0c1e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e0c2d0; body size 38 bytes.
#line 1 "ENTRY_10e0c2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e0c2d0(undefined4 *param_2)
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


// Reference entry 10e0c5f0; body size 19 bytes.
#line 1 "ENTRY_10e0c5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e0c5f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10e0cbd0; body size 31 bytes.
#line 1 "ENTRY_10e0cbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e0cbd0(undefined4 *param_1)

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


// Reference entry 10e0cc00; body size 31 bytes.
#line 1 "ENTRY_10e0cc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e0cc00(undefined4 *param_1)

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


// Reference entry 10e0cc70; body size 14 bytes.
#line 1 "ENTRY_10e0cc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e0cc70(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10e0cc90; body size 14 bytes.
#line 1 "ENTRY_10e0cc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e0cc90(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10e0ccb0; body size 3 bytes.
#line 1 "ENTRY_10e0ccb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e0ccb0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10e0ccc0; body size 3 bytes.
#line 1 "ENTRY_10e0ccc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e0ccc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0ccd0; body size 3 bytes.
#line 1 "ENTRY_10e0ccd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e0ccd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0cce0; body size 3 bytes.
#line 1 "ENTRY_10e0cce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e0cce0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0ccf0; body size 3 bytes.
#line 1 "ENTRY_10e0ccf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e0ccf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0cd00; body size 3 bytes.
#line 1 "ENTRY_10e0cd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e0cd00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0cd10; body size 3 bytes.
#line 1 "ENTRY_10e0cd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e0cd10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0cd20; body size 3 bytes.
#line 1 "ENTRY_10e0cd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e0cd20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0cd30; body size 3 bytes.
#line 1 "ENTRY_10e0cd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e0cd30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0cd40; body size 3 bytes.
#line 1 "ENTRY_10e0cd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e0cd40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0cd50; body size 3 bytes.
#line 1 "ENTRY_10e0cd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e0cd50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0cd60; body size 3 bytes.
#line 1 "ENTRY_10e0cd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e0cd60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0cd70; body size 3 bytes.
#line 1 "ENTRY_10e0cd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e0cd70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0cd80; body size 3 bytes.
#line 1 "ENTRY_10e0cd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e0cd80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0cd90; body size 3 bytes.
#line 1 "ENTRY_10e0cd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e0cd90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0cda0; body size 3 bytes.
#line 1 "ENTRY_10e0cda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e0cda0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0cdb0; body size 3 bytes.
#line 1 "ENTRY_10e0cdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e0cdb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0cdc0; body size 3 bytes.
#line 1 "ENTRY_10e0cdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e0cdc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0cdd0; body size 3 bytes.
#line 1 "ENTRY_10e0cdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e0cdd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e0d300; body size 79 bytes.
#line 1 "ENTRY_10e0d300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e0d300(int param_2)
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


// Reference entry 10e0d370; body size 79 bytes.
#line 1 "ENTRY_10e0d370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e0d370(int param_2)
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


// Reference entry 10e0d3e0; body size 11 bytes.
#line 1 "ENTRY_10e0d3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e0d3e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e0d3f0; body size 11 bytes.
#line 1 "ENTRY_10e0d3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e0d3f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e0d400; body size 83 bytes.
#line 1 "ENTRY_10e0d400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e0d400(int *param_2)
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


// Reference entry 10e0d470; body size 83 bytes.
#line 1 "ENTRY_10e0d470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e0d470(int *param_2)
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


// Reference entry 10e0d550; body size 97 bytes.
#line 1 "ENTRY_10e0d550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10e0d550(uint param_1)

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


// Reference entry 10e0d5d0; body size 97 bytes.
#line 1 "ENTRY_10e0d5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10e0d5d0(uint param_1)

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


// Reference entry 10e0edf0; body size 63 bytes.
#line 1 "ENTRY_10e0edf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e0edf0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10e0ee40; body size 63 bytes.
#line 1 "ENTRY_10e0ee40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e0ee40(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10e0ee90; body size 61 bytes.
#line 1 "ENTRY_10e0ee90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e0ee90(int param_1,int param_2)

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


// Reference entry 10e0eee0; body size 66 bytes.
#line 1 "ENTRY_10e0eee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e0eee0(int param_1,int param_2)

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


// Reference entry 10e0ef40; body size 60 bytes.
#line 1 "ENTRY_10e0ef40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e0ef40(int param_1,int param_2)

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


// Reference entry 10e0ef90; body size 22 bytes.
#line 1 "ENTRY_10e0ef90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e0ef90(int param_1)

{
  (**(code **)(*(int *)(param_1 + 8) + 0x18))();
                    
                    
  (**(code **)(*(int *)(param_1 + 8) + 0x1c))();
  return;
}


// Reference entry 10e0efb0; body size 8 bytes.
#line 1 "ENTRY_10e0efb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e0efb0(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 10e10ea0; body size 3 bytes.
#line 1 "ENTRY_10e10ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10e10ea0(undefined1 *param_1)

{
  return (undefined1)(*param_1);
}


// Reference entry 10e11f60; body size 6 bytes.
#line 1 "ENTRY_10e11f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e11f60(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10e11f70; body size 6 bytes.
#line 1 "ENTRY_10e11f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e11f70(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10e11f80; body size 6 bytes.
#line 1 "ENTRY_10e11f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e11f80(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10e11f90; body size 6 bytes.
#line 1 "ENTRY_10e11f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e11f90(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10e12090; body size 4 bytes.
#line 1 "ENTRY_10e12090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e12090(undefined1 *param_1)

{
  *param_1 = (undefined1)(1);
  return;
}


// Reference entry 10e120c0; body size 4 bytes.
#line 1 "ENTRY_10e120c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e120c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e12260; body size 26 bytes.
#line 1 "ENTRY_10e12260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e12260(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10e12280; body size 34 bytes.
#line 1 "ENTRY_10e12280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e12280(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11131cc0<>(param_2,2,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPTransferButtonEnumerator);
  return (undefined4 *)(param_1);
}


// Reference entry 10e122b0; body size 26 bytes.
#line 1 "ENTRY_10e122b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e122b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOrphanAccountNoAccessState);
  return (undefined4 *)(param_1);
}


// Reference entry 10e122d0; body size 100 bytes.
#line 1 "ENTRY_10e122d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e122d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCSwfObjHHListener);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureExistingBeginSecureTransferState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCSecureExistingBeginSecureTransferState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSecureExistingBeginSecureTransferState);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  *(undefined1*)(param_1 + 0xb) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e12350; body size 26 bytes.
#line 1 "ENTRY_10e12350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e12350(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureExistingButtonsState);
  return (undefined4 *)(param_1);
}


// Reference entry 10e12370; body size 26 bytes.
#line 1 "ENTRY_10e12370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e12370(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureExistingCheckExistingState);
  return (undefined4 *)(param_1);
}


// Reference entry 10e12390; body size 26 bytes.
#line 1 "ENTRY_10e12390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e12390(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureExistingCompleteState);
  return (undefined4 *)(param_1);
}


// Reference entry 10e12600; body size 152 bytes.
#line 1 "ENTRY_10e12600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e12600(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureExistingFinishSecureRegState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCSecureExistingFinishSecureRegState);
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
  param_1[0x10] = (undefined4)(0);
  param_1[0x11] = (undefined4)(0);
  param_1[0x12] = (undefined4)(0);
  param_1[0x13] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e126c0; body size 30 bytes.
#line 1 "ENTRY_10e126c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e126c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureExistingInitState);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e126f0; body size 26 bytes.
#line 1 "ENTRY_10e126f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e126f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureExistingKnownEmailMatchState);
  return (undefined4 *)(param_1);
}


// Reference entry 10e127a0; body size 93 bytes.
#line 1 "ENTRY_10e127a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e127a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureExistingLookupState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCSecureExistingLookupState);
  *(undefined1*)(param_1 + 6) = (undefined1)(1);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e12820; body size 30 bytes.
#line 1 "ENTRY_10e12820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e12820(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureExistingNetworkErrorState);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e12850; body size 165 bytes.
#line 1 "ENTRY_10e12850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e12850(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCSwfObjHHListener);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureExistingPressButtonState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCSecureExistingPressButtonState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSecureExistingPressButtonState);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xd] = (undefined4)(0);
  param_1[0xe] = (undefined4)(0);
  param_1[0x10] = (undefined4)(0);
  param_1[0x11] = (undefined4)(0);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0xf] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0x1b] = (undefined4)(0);
  param_1[0x25] = (undefined4)(0);
  param_1[0x26] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e12920; body size 26 bytes.
#line 1 "ENTRY_10e12920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e12920(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureExistingSpeakerChoiceState);
  return (undefined4 *)(param_1);
}


// Reference entry 10e12940; body size 26 bytes.
#line 1 "ENTRY_10e12940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e12940(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureExistingState);
  return (undefined4 *)(param_1);
}


// Reference entry 10e12960; body size 134 bytes.
#line 1 "ENTRY_10e12960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e12960(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCSwfObjHHListener);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureExistingWaitingForTransferState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCSecureExistingWaitingForTransferState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSecureExistingWaitingForTransferState);
  param_1[7] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xc] = (undefined4)(0);
  param_1[0xd] = (undefined4)(0);
  param_1[8] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0xb] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0x17] = (undefined4)(0);
  param_1[0x21] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e12ba0; body size 7 bytes.
#line 1 "ENTRY_10e12ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e12ba0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e12ce0; body size 7 bytes.
#line 1 "ENTRY_10e12ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e12ce0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e12cf0; body size 7 bytes.
#line 1 "ENTRY_10e12cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e12cf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e12d00; body size 7 bytes.
#line 1 "ENTRY_10e12d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e12d00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e13250; body size 7 bytes.
#line 1 "ENTRY_10e13250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e13250(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e13260; body size 7 bytes.
#line 1 "ENTRY_10e13260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e13260(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e134e0; body size 7 bytes.
#line 1 "ENTRY_10e134e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e134e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e135b0; body size 7 bytes.
#line 1 "ENTRY_10e135b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e135b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e13680; body size 39 bytes.
#line 1 "ENTRY_10e13680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e13680(int *param_1)

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
  
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCXMLSecureExistingWizard);
  param_1[2] = (int)((int)(uint)&ghidra_vftable_SCXMLSecureExistingWizard);
  param_1[10] = (int)((int)(uint)&ghidra_vftable_SCXMLSecureExistingWizard);
  param_1[0x12] = (int)((int)(uint)&ghidra_vftable_SCXMLSecureExistingWizard);
  param_1[0x13] = (int)((int)(uint)&ghidra_vftable_SCXMLSecureExistingWizard);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[2] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[10] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[0x12] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[0x13] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  piStack_14 = (int *)(param_1);
  thunk_FUN_112af4e0("Wizard",5,"Entering Wizard Destructor",uVar2);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0x18))(&piStack_14), 0);
  piVar1 = (int *)((int *)*piVar4);
  *piVar4 = (int)(0);
  if ((int *)(piVar1) == (int *)(0x0)) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(), 0);
  }

  if ((int *)(piStack_14) != (int *)(0x0)) {
    (**(code **)(*piStack_14 + 8))();
  }

  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0xcc))(param_1[0x14]);
  }
  thunk_FUN_10dd3190();
  if (param_1[0x2a] != 0) {
    thunk_FUN_1059d940(param_1[0x2a]);
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
    (**(code **)(*piVar4 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x32]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x31] = (int)(0);
    param_1[0x32] = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x30]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x2f] = (int)(0);
    param_1[0x30] = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x2e]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x2d] = (int)(0);
    param_1[0x2e] = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x28]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x27] = (int)(0);
    param_1[0x28] = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x1c]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x1b] = (int)(0);
    param_1[0x1c] = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_10dd1260();
  param_1[0x13] = (int)((int)(uint)&ghidra_vftable_SCHouseholdEventSink);
  piVar1 = (int *)((int *)param_1[0x15]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x14] = (int)(0);
    param_1[0x15] = (int)(0);
    (**(code **)(*piVar1 + 8))();
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


// Reference entry 10e13720; body size 14 bytes.
#line 1 "ENTRY_10e13720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10e13720(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10e13740; body size 14 bytes.
#line 1 "ENTRY_10e13740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10e13740(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10e13760; body size 3 bytes.
#line 1 "ENTRY_10e13760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e13760(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e13770; body size 3 bytes.
#line 1 "ENTRY_10e13770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e13770(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e13780; body size 6 bytes.
#line 1 "ENTRY_10e13780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10e13780(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 10e13790; body size 6 bytes.
#line 1 "ENTRY_10e13790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10e13790(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 10e14310; body size 3 bytes.
#line 1 "ENTRY_10e14310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e14310(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10e19860; body size 12 bytes.
#line 1 "ENTRY_10e19860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e19860(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10e1ef30; body size 7 bytes.
#line 1 "ENTRY_10e1ef30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e1ef30(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10e1ef40; body size 7 bytes.
#line 1 "ENTRY_10e1ef40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e1ef40(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10e23100; body size 26 bytes.
#line 1 "ENTRY_10e23100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e23100(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10e23120; body size 18 bytes.
#line 1 "ENTRY_10e23120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e23120(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_HHSettingsReader);
  return (undefined4 *)(param_1);
}


// Reference entry 10e23190; body size 66 bytes.
#line 1 "ENTRY_10e23190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e23190(int param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyWelcomeLoginWizardCompleteState);
  thunk_FUN_112af4e0("Wizard",5,"Exit code set to %d.",param_3);
  *(undefined4*)(param_2 + 0x94) = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10e231f0; body size 26 bytes.
#line 1 "ENTRY_10e231f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e231f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyWelcomeLoginWizardInitState);
  return (undefined4 *)(param_1);
}


// Reference entry 10e23290; body size 26 bytes.
#line 1 "ENTRY_10e23290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e23290(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyWelcomeLoginWizardState);
  return (undefined4 *)(param_1);
}


// Reference entry 10e233e0; body size 39 bytes.
#line 1 "ENTRY_10e233e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e233e0(int *param_1)

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
  
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCLegacyWelcomeLoginWizard);
  param_1[2] = (int)((int)(uint)&ghidra_vftable_SCLegacyWelcomeLoginWizard);
  param_1[10] = (int)((int)(uint)&ghidra_vftable_SCLegacyWelcomeLoginWizard);
  param_1[0x12] = (int)((int)(uint)&ghidra_vftable_SCLegacyWelcomeLoginWizard);
  param_1[0x13] = (int)((int)(uint)&ghidra_vftable_SCLegacyWelcomeLoginWizard);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[2] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[10] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[0x12] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[0x13] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  piStack_14 = (int *)(param_1);
  thunk_FUN_112af4e0("Wizard",5,"Entering Wizard Destructor",uVar2);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0x18))(&piStack_14), 0);
  piVar1 = (int *)((int *)*piVar4);
  *piVar4 = (int)(0);
  if ((int *)(piVar1) == (int *)(0x0)) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(), 0);
  }

  if ((int *)(piStack_14) != (int *)(0x0)) {
    (**(code **)(*piStack_14 + 8))();
  }

  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0xcc))(param_1[0x14]);
  }
  thunk_FUN_10dd3190();
  if (param_1[0x2a] != 0) {
    thunk_FUN_1059d940(param_1[0x2a]);
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
    (**(code **)(*piVar4 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x32]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x31] = (int)(0);
    param_1[0x32] = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x30]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x2f] = (int)(0);
    param_1[0x30] = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x2e]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x2d] = (int)(0);
    param_1[0x2e] = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x28]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x27] = (int)(0);
    param_1[0x28] = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x1c]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x1b] = (int)(0);
    param_1[0x1c] = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_10dd1260();
  param_1[0x13] = (int)((int)(uint)&ghidra_vftable_SCHouseholdEventSink);
  piVar1 = (int *)((int *)param_1[0x15]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x14] = (int)(0);
    param_1[0x15] = (int)(0);
    (**(code **)(*piVar1 + 8))();
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


// Reference entry 10e23410; body size 7 bytes.
#line 1 "ENTRY_10e23410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e23410(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e23420; body size 7 bytes.
#line 1 "ENTRY_10e23420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e23420(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e234e0; body size 7 bytes.
#line 1 "ENTRY_10e234e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e234e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e24e10; body size 26 bytes.
#line 1 "ENTRY_10e24e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10e24e10(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10e24e30; body size 83 bytes.
#line 1 "ENTRY_10e24e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10e24e30(int *param_2)
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


// Reference entry 10e24f50; body size 130 bytes.
#line 1 "ENTRY_10e24f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10e24f50(int *param_2,undefined4 param_3)
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


// Reference entry 10e250b0; body size 130 bytes.
#line 1 "ENTRY_10e250b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10e250b0(int *param_2,undefined4 param_3)
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


// Reference entry 10e25160; body size 5 bytes.
#line 1 "ENTRY_10e25160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e25160(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e25170; body size 5 bytes.
#line 1 "ENTRY_10e25170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e25170(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e25180; body size 5 bytes.
#line 1 "ENTRY_10e25180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e25180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e25190; body size 5 bytes.
#line 1 "ENTRY_10e25190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e25190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e251a0; body size 70 bytes.
#line 1 "ENTRY_10e251a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e251a0(undefined4 *param_1)

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


// Reference entry 10e25200; body size 70 bytes.
#line 1 "ENTRY_10e25200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e25200(undefined4 *param_1)

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


// Reference entry 10e25260; body size 70 bytes.
#line 1 "ENTRY_10e25260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e25260(undefined4 *param_1)

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


// Reference entry 10e252c0; body size 70 bytes.
#line 1 "ENTRY_10e252c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e252c0(undefined4 *param_1)

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


// Reference entry 10e25420; body size 16 bytes.
#line 1 "ENTRY_10e25420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e25420(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e25440; body size 16 bytes.
#line 1 "ENTRY_10e25440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e25440(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e25460; body size 16 bytes.
#line 1 "ENTRY_10e25460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e25460(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e25480; body size 26 bytes.
#line 1 "ENTRY_10e25480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e25480(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10e254a0; body size 10 bytes.
#line 1 "ENTRY_10e254a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e254a0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e254b0; body size 10 bytes.
#line 1 "ENTRY_10e254b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e254b0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e254c0; body size 10 bytes.
#line 1 "ENTRY_10e254c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e254c0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e254d0; body size 10 bytes.
#line 1 "ENTRY_10e254d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e254d0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e254e0; body size 12 bytes.
#line 1 "ENTRY_10e254e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e254e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e25570; body size 12 bytes.
#line 1 "ENTRY_10e25570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e25570(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e25600; body size 12 bytes.
#line 1 "ENTRY_10e25600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e25600(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e25690; body size 12 bytes.
#line 1 "ENTRY_10e25690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e25690(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e25720; body size 45 bytes.
#line 1 "ENTRY_10e25720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e25720(undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1025f580(param_2,param_3,param_5);
  *(undefined1*)(param_1 + 6) = (undefined1)(param_4);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEmailInput);
  return (undefined4 *)(param_1);
}


// Reference entry 10e25760; body size 51 bytes.
#line 1 "ENTRY_10e25760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e25760(undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1025f580(param_2,param_3,param_5);
  *(undefined1*)(param_1 + 6) = (undefined1)(param_4);
  param_1[7] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEmailWithReleaseInput);
  return (undefined4 *)(param_1);
}


// Reference entry 10e257a0; body size 38 bytes.
#line 1 "ENTRY_10e257a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e257a0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1025f580(param_2,param_3,param_4);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMobilePhoneInput);
  return (undefined4 *)(param_1);
}


// Reference entry 10e257d0; body size 42 bytes.
#line 1 "ENTRY_10e257d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e257d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPasswordResetURLHandler);
  return (undefined4 *)(param_1);
}


// Reference entry 10e25ad0; body size 110 bytes.
#line 1 "ENTRY_10e25ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e25ad0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationAccountEmailSubmitState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationAccountEmailSubmitState);
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


// Reference entry 10e25b60; body size 26 bytes.
#line 1 "ENTRY_10e25b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e25b60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationAccountExistsState);
  return (undefined4 *)(param_1);
}


// Reference entry 10e25b80; body size 110 bytes.
#line 1 "ENTRY_10e25b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e25b80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationCheckPasswordState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationCheckPasswordState);
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


// Reference entry 10e25c10; body size 26 bytes.
#line 1 "ENTRY_10e25c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e25c10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationCompleteState);
  return (undefined4 *)(param_1);
}


// Reference entry 10e25c30; body size 51 bytes.
#line 1 "ENTRY_10e25c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e25c30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationCountryState);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *(undefined1*)(param_1 + 6) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e25e10; body size 30 bytes.
#line 1 "ENTRY_10e25e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e25e10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationCreatedState);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e25e40; body size 130 bytes.
#line 1 "ENTRY_10e25e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e25e40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationDataOptInSubmitState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationDataOptInSubmitState);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[9] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0x15] = (undefined4)(0);
  param_1[0x1f] = (undefined4)(0);
  param_1[0x20] = (undefined4)(0);
  param_1[0x21] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e25ef0; body size 26 bytes.
#line 1 "ENTRY_10e25ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e25ef0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationInitState);
  return (undefined4 *)(param_1);
}


// Reference entry 10e25f10; body size 230 bytes.
#line 1 "ENTRY_10e25f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e25f10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationLoginPrepState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationLoginPrepState);
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
  param_1[0x3a] = (undefined4)(0);
  param_1[0x3b] = (undefined4)(0);
  param_1[0x3c] = (undefined4)(0);
  param_1[0x3d] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e26580; body size 110 bytes.
#line 1 "ENTRY_10e26580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e26580(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationLoginSubmitState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationLoginSubmitState);
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


// Reference entry 10e26610; body size 30 bytes.
#line 1 "ENTRY_10e26610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e26610(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationNetworkErrorState);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e26640; body size 26 bytes.
#line 1 "ENTRY_10e26640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e26640(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationNewAccountIntroState);
  return (undefined4 *)(param_1);
}


// Reference entry 10e26660; body size 26 bytes.
#line 1 "ENTRY_10e26660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e26660(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationNewAccountNetworkErrorState);
  return (undefined4 *)(param_1);
}


// Reference entry 10e26840; body size 26 bytes.
#line 1 "ENTRY_10e26840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e26840(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationPasswordSetState);
  return (undefined4 *)(param_1);
}


// Reference entry 10e269e0; body size 26 bytes.
#line 1 "ENTRY_10e269e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e269e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationResetPasswordEmailFailState);
  return (undefined4 *)(param_1);
}


// Reference entry 10e26a00; body size 26 bytes.
#line 1 "ENTRY_10e26a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e26a00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationResetPasswordFailState);
  return (undefined4 *)(param_1);
}


// Reference entry 10e26a20; body size 127 bytes.
#line 1 "ENTRY_10e26a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e26a20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationResetPasswordState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationResetPasswordState);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xc] = (undefined4)(0);
  param_1[0xd] = (undefined4)(0);
  param_1[8] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0xb] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0x17] = (undefined4)(0);
  param_1[0x21] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e26ac0; body size 26 bytes.
#line 1 "ENTRY_10e26ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e26ac0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationResetPasswordSuccessOtherState);
  return (undefined4 *)(param_1);
}


// Reference entry 10e26ae0; body size 26 bytes.
#line 1 "ENTRY_10e26ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e26ae0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationState);
  return (undefined4 *)(param_1);
}


// Reference entry 10e26b00; body size 26 bytes.
#line 1 "ENTRY_10e26b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e26b00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationVerifyEmailErrorState);
  return (undefined4 *)(param_1);
}


// Reference entry 10e26b20; body size 137 bytes.
#line 1 "ENTRY_10e26b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e26b20(undefined4 param_2,undefined1 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationVerifyEmailState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationVerifyEmailState);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xc] = (undefined4)(0);
  param_1[0xd] = (undefined4)(0);
  param_1[8] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0xb] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0x17] = (undefined4)(0);
  param_1[0x21] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x22) = (undefined1)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10e26bd0; body size 120 bytes.
#line 1 "ENTRY_10e26bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e26bd0(undefined4 param_2,undefined1 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationVerifyEmailSubmitState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationVerifyEmailSubmitState);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[9] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0x15] = (undefined4)(0);
  param_1[0x1f] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x20) = (undefined1)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10e26c70; body size 42 bytes.
#line 1 "ENTRY_10e26c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e26c70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCVerifyEmailURLHandler);
  return (undefined4 *)(param_1);
}


// Reference entry 10e27400; body size 7 bytes.
#line 1 "ENTRY_10e27400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e27400(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e277a0; body size 19 bytes.
#line 1 "ENTRY_10e277a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e277a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10e27bc0; body size 7 bytes.
#line 1 "ENTRY_10e27bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e27bc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e27ca0; body size 7 bytes.
#line 1 "ENTRY_10e27ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e27ca0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e27e70; body size 7 bytes.
#line 1 "ENTRY_10e27e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e27e70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e27fd0; body size 7 bytes.
#line 1 "ENTRY_10e27fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e27fd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e28400; body size 7 bytes.
#line 1 "ENTRY_10e28400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e28400(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e28410; body size 7 bytes.
#line 1 "ENTRY_10e28410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e28410(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e28420; body size 7 bytes.
#line 1 "ENTRY_10e28420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e28420(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e285c0; body size 7 bytes.
#line 1 "ENTRY_10e285c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e285c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e287b0; body size 7 bytes.
#line 1 "ENTRY_10e287b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e287b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e287c0; body size 7 bytes.
#line 1 "ENTRY_10e287c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e287c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e288a0; body size 7 bytes.
#line 1 "ENTRY_10e288a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e288a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e288c0; body size 7 bytes.
#line 1 "ENTRY_10e288c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e288c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e28a70; body size 19 bytes.
#line 1 "ENTRY_10e28a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e28a70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10e28a90; body size 39 bytes.
#line 1 "ENTRY_10e28a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e28a90(int *param_1)

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
  
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCXMLSecureRegistrationWizard);
  param_1[2] = (int)((int)(uint)&ghidra_vftable_SCXMLSecureRegistrationWizard);
  param_1[10] = (int)((int)(uint)&ghidra_vftable_SCXMLSecureRegistrationWizard);
  param_1[0x12] = (int)((int)(uint)&ghidra_vftable_SCXMLSecureRegistrationWizard);
  param_1[0x13] = (int)((int)(uint)&ghidra_vftable_SCXMLSecureRegistrationWizard);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[2] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[10] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[0x12] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[0x13] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  piStack_14 = (int *)(param_1);
  thunk_FUN_112af4e0("Wizard",5,"Entering Wizard Destructor",uVar2);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0x18))(&piStack_14), 0);
  piVar1 = (int *)((int *)*piVar4);
  *piVar4 = (int)(0);
  if ((int *)(piVar1) == (int *)(0x0)) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(), 0);
  }

  if ((int *)(piStack_14) != (int *)(0x0)) {
    (**(code **)(*piStack_14 + 8))();
  }

  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0xcc))(param_1[0x14]);
  }
  thunk_FUN_10dd3190();
  if (param_1[0x2a] != 0) {
    thunk_FUN_1059d940(param_1[0x2a]);
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
    (**(code **)(*piVar4 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x32]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x31] = (int)(0);
    param_1[0x32] = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x30]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x2f] = (int)(0);
    param_1[0x30] = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x2e]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x2d] = (int)(0);
    param_1[0x2e] = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x28]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x27] = (int)(0);
    param_1[0x28] = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x1c]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x1b] = (int)(0);
    param_1[0x1c] = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_10dd1260();
  param_1[0x13] = (int)((int)(uint)&ghidra_vftable_SCHouseholdEventSink);
  piVar1 = (int *)((int *)param_1[0x15]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x14] = (int)(0);
    param_1[0x15] = (int)(0);
    (**(code **)(*piVar1 + 8))();
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


// Reference entry 10e28cd0; body size 7 bytes.
#line 1 "ENTRY_10e28cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e28cd0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10e28ce0; body size 7 bytes.
#line 1 "ENTRY_10e28ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e28ce0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10e28cf0; body size 7 bytes.
#line 1 "ENTRY_10e28cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e28cf0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10e28d00; body size 7 bytes.
#line 1 "ENTRY_10e28d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e28d00(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10e28d10; body size 3 bytes.
#line 1 "ENTRY_10e28d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e28d10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e28d20; body size 7 bytes.
#line 1 "ENTRY_10e28d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e28d20(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10e28d30; body size 3 bytes.
#line 1 "ENTRY_10e28d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e28d30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e28d40; body size 7 bytes.
#line 1 "ENTRY_10e28d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e28d40(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10e28d50; body size 3 bytes.
#line 1 "ENTRY_10e28d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e28d50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e28d60; body size 7 bytes.
#line 1 "ENTRY_10e28d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e28d60(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10e28d70; body size 8 bytes.
#line 1 "ENTRY_10e28d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e28d70(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e28d80; body size 8 bytes.
#line 1 "ENTRY_10e28d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e28d80(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e28d90; body size 8 bytes.
#line 1 "ENTRY_10e28d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e28d90(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e28da0; body size 8 bytes.
#line 1 "ENTRY_10e28da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e28da0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e28db0; body size 4 bytes.
#line 1 "ENTRY_10e28db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e28db0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e28dc0; body size 4 bytes.
#line 1 "ENTRY_10e28dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e28dc0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e28dd0; body size 4 bytes.
#line 1 "ENTRY_10e28dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e28dd0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


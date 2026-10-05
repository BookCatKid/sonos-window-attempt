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
template<class...> struct pair { char _pad; pair(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int op_dtor(...) { return 0; } };
struct Array { char _pad; Array(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct BVar1 { char _pad; BVar1(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CloseHandle { char _pad; CloseHandle(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Content { char _pad; Content(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CreateEventA { char _pad; CreateEventA(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CreateMutexA { char _pad; CreateMutexA(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Current { char _pad; Current(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CurrentTimeServer { char _pad; CurrentTimeServer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DeleteCriticalSection { char _pad; DeleteCriticalSection(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Failed { char _pad; Failed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct FindClose { char _pad; FindClose(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct FindNextFileW { char _pad; FindNextFileW(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct FlashDebugObjects { char _pad; FlashDebugObjects(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct HTSatChanMapSet { char _pad; HTSatChanMapSet(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct NetStart { char _pad; NetStart(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct No { char _pad; No(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Object { char _pad; Object(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct OnAlarmsChanged { char _pad; OnAlarmsChanged(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ordinal_10 { char _pad; Ordinal_10(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ordinal_115 { char _pad; Ordinal_115(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ordinal_12 { char _pad; Ordinal_12(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ordinal_22 { char _pad; Ordinal_22(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ordinal_23 { char _pad; Ordinal_23(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ordinal_3 { char _pad; Ordinal_3(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ordinal_8 { char _pad; Ordinal_8(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct PrimaryUDN { char _pad; PrimaryUDN(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct QuarantinedDevices { char _pad; QuarantinedDevices(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RDMValue { char _pad; RDMValue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RNSGetChannelAssessmentOp { char _pad; RNSGetChannelAssessmentOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RNSRevertChannelOp { char _pad; RNSRevertChannelOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RadioList { char _pad; RadioList(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RdumpSwfObj { char _pad; RdumpSwfObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Reason { char _pad; Reason(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ReleaseMutex { char _pad; ReleaseMutex(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ReleaseSemaphore { char _pad; ReleaseSemaphore(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ResetEvent { char _pad; ResetEvent(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SatRoomUUID { char _pad; SatRoomUUID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Session { char _pad; Session(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SetEvent { char _pad; SetEvent(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SetTimer { char _pad; SetTimer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Setting { char _pad; Setting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Software { char _pad; Software(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Sonos_MTM_ { char _pad; Sonos_MTM_(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Sonos_RDM_ { char _pad; Sonos_RDM_(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SortOrder { char _pad; SortOrder(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Status { char _pad; Status(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Svc { char _pad; Svc(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SwfObjBrowseCacheMgr { char _pad; SwfObjBrowseCacheMgr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SwfObjIndexListener { char _pad; SwfObjIndexListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Switch { char _pad; Switch(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Token { char _pad; Token(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UsageMetrics { char _pad; UsageMetrics(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct VanishedZoneGroups { char _pad; VanishedZoneGroups(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct WSACreateEvent { char _pad; WSACreateEvent(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct WaitForSingleObject { char _pad; WaitForSingleObject(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *CLIENT_KEY_INT;
typedef void *CLIENT_KEY_PERF;
typedef void *CLIENT_KEY_PROD;
typedef void *CLIENT_KEY_STAGE;
typedef void *CLIENT_KEY_TEST;
typedef void *DELETE;
typedef void *HTTP;
typedef void *HWND;
typedef void *LPCRITICAL_SECTION;
typedef void *LPCSTR;
typedef void *LPLONG;
typedef void *LPSECURITY_ATTRIBUTES;
typedef void *LPWIN32_FIND_DATAW;
typedef void *S;
typedef void *SA_RINCON;
typedef void *TIMERPROC;
typedef void *WARNING;
typedef void *X_;
using namespace std;
struct Recovered_Bulk { char _pad; void __thiscall m_FUN_110f6f60(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_110f6f60(A...); void __thiscall m_FUN_110f6fa0(undefined4 param_2); template<class... A> int m_FUN_110f6fa0(A...); undefined4 * __thiscall m_FUN_110f9b50(byte param_2); template<class... A> int m_FUN_110f9b50(A...); undefined4 * __thiscall m_FUN_110f9b80(byte param_2); template<class... A> int m_FUN_110f9b80(A...); undefined4 * __thiscall m_FUN_110f9bb0(byte param_2); template<class... A> int m_FUN_110f9bb0(A...); undefined4 __thiscall m_FUN_110f9cd0(byte param_2); template<class... A> int m_FUN_110f9cd0(A...); undefined4 * __thiscall m_FUN_110f9d00(byte param_2); template<class... A> int m_FUN_110f9d00(A...); undefined4 * __thiscall m_FUN_110f9d30(byte param_2); template<class... A> int m_FUN_110f9d30(A...); undefined4 * __thiscall m_FUN_110f9de0(byte param_2); template<class... A> int m_FUN_110f9de0(A...); undefined4 __thiscall m_FUN_110f9e30(byte param_2); template<class... A> int m_FUN_110f9e30(A...); int __thiscall m_FUN_110fd290(int param_2); template<class... A> int m_FUN_110fd290(A...); void __thiscall m_FUN_11101cb0(undefined4 param_2); template<class... A> int m_FUN_11101cb0(A...); undefined4 * __thiscall m_FUN_111030d0(byte param_2); template<class... A> int m_FUN_111030d0(A...); undefined4 * __thiscall m_FUN_111031e0(byte param_2); template<class... A> int m_FUN_111031e0(A...); undefined4 * __thiscall m_FUN_11103230(byte param_2); template<class... A> int m_FUN_11103230(A...); undefined4 __thiscall m_FUN_11103360(byte param_2); template<class... A> int m_FUN_11103360(A...); undefined4 __thiscall m_FUN_11103420(byte param_2); template<class... A> int m_FUN_11103420(A...); void __thiscall m_FUN_11103e70(int param_2); template<class... A> int m_FUN_11103e70(A...); int __thiscall m_FUN_11108cf0(int *param_2); template<class... A> int m_FUN_11108cf0(A...); undefined4 * __thiscall m_FUN_1110b060(undefined4 param_2); template<class... A> int m_FUN_1110b060(A...); undefined4 * __thiscall m_FUN_1110ca60(byte param_2); template<class... A> int m_FUN_1110ca60(A...); undefined4 * __thiscall m_FUN_1110ca90(byte param_2); template<class... A> int m_FUN_1110ca90(A...); undefined4 * __thiscall m_FUN_1110cac0(byte param_2); template<class... A> int m_FUN_1110cac0(A...); undefined4 * __thiscall m_FUN_1110caf0(byte param_2); template<class... A> int m_FUN_1110caf0(A...); undefined4 * __thiscall m_FUN_1110cb20(byte param_2); template<class... A> int m_FUN_1110cb20(A...); undefined4 * __thiscall m_FUN_1110cb50(byte param_2); template<class... A> int m_FUN_1110cb50(A...); undefined4 * __thiscall m_FUN_1110cb80(byte param_2); template<class... A> int m_FUN_1110cb80(A...); undefined4 * __thiscall m_FUN_1110cbb0(byte param_2); template<class... A> int m_FUN_1110cbb0(A...); undefined4 * __thiscall m_FUN_1110cbe0(byte param_2); template<class... A> int m_FUN_1110cbe0(A...); undefined4 * __thiscall m_FUN_1110cc10(byte param_2); template<class... A> int m_FUN_1110cc10(A...); undefined4 * __thiscall m_FUN_1110cc40(byte param_2); template<class... A> int m_FUN_1110cc40(A...); undefined4 * __thiscall m_FUN_1110cc70(byte param_2); template<class... A> int m_FUN_1110cc70(A...); undefined4 * __thiscall m_FUN_1110ce80(byte param_2); template<class... A> int m_FUN_1110ce80(A...); undefined4 __thiscall m_FUN_1110ceb0(byte param_2); template<class... A> int m_FUN_1110ceb0(A...); undefined4 * __thiscall m_FUN_1110cee0(byte param_2); template<class... A> int m_FUN_1110cee0(A...); undefined4 * __thiscall m_FUN_1110cf30(byte param_2); template<class... A> int m_FUN_1110cf30(A...); undefined4 * __thiscall m_FUN_1110cf80(byte param_2); template<class... A> int m_FUN_1110cf80(A...); undefined4 * __thiscall m_FUN_1110cfd0(byte param_2); template<class... A> int m_FUN_1110cfd0(A...); undefined4 * __thiscall m_FUN_1110d020(byte param_2); template<class... A> int m_FUN_1110d020(A...); undefined4 * __thiscall m_FUN_1110d070(byte param_2); template<class... A> int m_FUN_1110d070(A...); undefined4 * __thiscall m_FUN_1110d0c0(byte param_2); template<class... A> int m_FUN_1110d0c0(A...); undefined4 __thiscall m_FUN_1110d280(byte param_2); template<class... A> int m_FUN_1110d280(A...); undefined4 __thiscall m_FUN_1110d2b0(byte param_2); template<class... A> int m_FUN_1110d2b0(A...); void __thiscall m_FUN_1110dd10(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1110dd10(A...); void __thiscall m_FUN_1110ef60(undefined4 param_2); template<class... A> int m_FUN_1110ef60(A...); void __thiscall m_FUN_1110f120(int param_2); template<class... A> int m_FUN_1110f120(A...); void __thiscall m_FUN_11110b90(uint *param_2); template<class... A> int m_FUN_11110b90(A...); undefined4 __thiscall m_FUN_111115e0(uint param_2); template<class... A> int m_FUN_111115e0(A...); void __thiscall m_FUN_11112590(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_11112590(A...); undefined4 __thiscall m_FUN_11113bb0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_11113bb0(A...); uint __thiscall m_FUN_11113c60(undefined4 param_2,char param_3); template<class... A> int m_FUN_11113c60(A...); int __thiscall m_FUN_11115a00(int param_2); template<class... A> int m_FUN_11115a00(A...); void __thiscall m_FUN_1111a090(undefined4 param_2); template<class... A> int m_FUN_1111a090(A...); void __thiscall m_FUN_1111b510(undefined4 param_2); template<class... A> int m_FUN_1111b510(A...); void __thiscall m_FUN_1111b630(undefined4 param_2); template<class... A> int m_FUN_1111b630(A...); void __thiscall m_FUN_1111bc70(undefined4 param_2); template<class... A> int m_FUN_1111bc70(A...); int * __thiscall m_FUN_1111d1f0(int *param_2); template<class... A> int m_FUN_1111d1f0(A...); undefined4 * __thiscall m_FUN_1111fe60(byte param_2); template<class... A> int m_FUN_1111fe60(A...); undefined4 * __thiscall m_FUN_1111fe90(byte param_2); template<class... A> int m_FUN_1111fe90(A...); undefined4 __thiscall m_FUN_1111fec0(byte param_2); template<class... A> int m_FUN_1111fec0(A...); void __thiscall m_FUN_11121f20(int param_2); template<class... A> int m_FUN_11121f20(A...); void __thiscall m_FUN_111223e0(uint param_2); template<class... A> int m_FUN_111223e0(A...); void __thiscall m_FUN_11122950(undefined4 param_2); template<class... A> int m_FUN_11122950(A...); undefined4 __thiscall m_FUN_11125cd0(undefined4 param_2,int param_3); template<class... A> int m_FUN_11125cd0(A...); void __thiscall m_FUN_111276e0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_111276e0(A...); void __thiscall m_FUN_11127ac0(int param_2); template<class... A> int m_FUN_11127ac0(A...); void __thiscall m_FUN_11127b10(int param_2); template<class... A> int m_FUN_11127b10(A...); void __thiscall m_FUN_11127bc0(int param_2); template<class... A> int m_FUN_11127bc0(A...); void __thiscall m_FUN_11127c00(int param_2); template<class... A> int m_FUN_11127c00(A...); void __thiscall m_FUN_11127c40(int param_2); template<class... A> int m_FUN_11127c40(A...); undefined4 __thiscall m_FUN_1112b500(byte param_2); template<class... A> int m_FUN_1112b500(A...); undefined4 __thiscall m_FUN_1112b530(byte param_2); template<class... A> int m_FUN_1112b530(A...); undefined4 __thiscall m_FUN_1112b560(byte param_2); template<class... A> int m_FUN_1112b560(A...); void __thiscall m_FUN_1112bb60(int param_2); template<class... A> int m_FUN_1112bb60(A...); undefined4 * __thiscall m_FUN_1112d6e0(byte param_2); template<class... A> int m_FUN_1112d6e0(A...); undefined4 * __thiscall m_FUN_1112d710(byte param_2); template<class... A> int m_FUN_1112d710(A...); undefined4 * __thiscall m_FUN_1112d740(byte param_2); template<class... A> int m_FUN_1112d740(A...); undefined4 * __thiscall m_FUN_1112dbd0(byte param_2); template<class... A> int m_FUN_1112dbd0(A...); undefined4 * __thiscall m_FUN_1112dc20(byte param_2); template<class... A> int m_FUN_1112dc20(A...); undefined4 __thiscall m_FUN_111307b0(undefined4 param_2); template<class... A> int m_FUN_111307b0(A...); undefined4 __thiscall m_FUN_111307e0(undefined4 param_2); template<class... A> int m_FUN_111307e0(A...); void __thiscall m_FUN_11131340(undefined4 param_2); template<class... A> int m_FUN_11131340(A...); void __thiscall m_FUN_11131370(undefined4 param_2); template<class... A> int m_FUN_11131370(A...); void __thiscall m_FUN_111313a0(undefined4 param_2); template<class... A> int m_FUN_111313a0(A...); void __thiscall m_FUN_11132910(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11132910(A...); undefined4 __thiscall m_FUN_11132c10(uint param_2); template<class... A> int m_FUN_11132c10(A...); undefined4 __thiscall m_FUN_11135390(int param_2); template<class... A> int m_FUN_11135390(A...); undefined4 __thiscall m_FUN_111354c0(int param_2); template<class... A> int m_FUN_111354c0(A...); undefined4 __thiscall m_FUN_11135ae0(int param_2); template<class... A> int m_FUN_11135ae0(A...); undefined4 * __thiscall m_FUN_111362a0(byte param_2); template<class... A> int m_FUN_111362a0(A...); undefined4 * __thiscall m_FUN_111362d0(byte param_2); template<class... A> int m_FUN_111362d0(A...); int __thiscall m_FUN_11136300(byte param_2); template<class... A> int m_FUN_11136300(A...); undefined4 * __thiscall m_FUN_11136510(byte param_2); template<class... A> int m_FUN_11136510(A...); undefined4 * __thiscall m_FUN_11136560(byte param_2); template<class... A> int m_FUN_11136560(A...); void __thiscall m_FUN_11137300(undefined1 param_2); template<class... A> int m_FUN_11137300(A...); undefined4 __thiscall m_FUN_11137410(undefined4 param_2); template<class... A> int m_FUN_11137410(A...); int __thiscall m_FUN_111382a0(int param_2); template<class... A> int m_FUN_111382a0(A...); undefined4 __thiscall m_FUN_11138590(uint param_2,int param_3); template<class... A> int m_FUN_11138590(A...); void __thiscall m_FUN_11138bf0(undefined4 param_2); template<class... A> int m_FUN_11138bf0(A...); undefined4 * __thiscall m_FUN_11139660(byte param_2); template<class... A> int m_FUN_11139660(A...); undefined4 __thiscall m_FUN_11139850(byte param_2); template<class... A> int m_FUN_11139850(A...); undefined4 __thiscall m_FUN_1113be80(int param_2,int param_3); template<class... A> int m_FUN_1113be80(A...); undefined4 * __thiscall m_FUN_1113bff0(byte param_2); template<class... A> int m_FUN_1113bff0(A...); undefined4 * __thiscall m_FUN_1113d060(byte param_2); template<class... A> int m_FUN_1113d060(A...); undefined4 * __thiscall m_FUN_1113e9f0(byte param_2); template<class... A> int m_FUN_1113e9f0(A...); void __thiscall m_FUN_1113f110(int param_2); template<class... A> int m_FUN_1113f110(A...); void __thiscall m_FUN_11140c20(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_11140c20(A...); undefined4 * __thiscall m_FUN_11142b00(byte param_2); template<class... A> int m_FUN_11142b00(A...); undefined4 * __thiscall m_FUN_11142b30(byte param_2); template<class... A> int m_FUN_11142b30(A...); undefined4 * __thiscall m_FUN_11142b60(byte param_2); template<class... A> int m_FUN_11142b60(A...); undefined4 * __thiscall m_FUN_11142b90(byte param_2); template<class... A> int m_FUN_11142b90(A...); undefined4 * __thiscall m_FUN_11142bc0(byte param_2); template<class... A> int m_FUN_11142bc0(A...); undefined4 * __thiscall m_FUN_11142bf0(byte param_2); template<class... A> int m_FUN_11142bf0(A...); undefined4 * __thiscall m_FUN_11142c20(byte param_2); template<class... A> int m_FUN_11142c20(A...); undefined4 __thiscall m_FUN_11142c50(byte param_2); template<class... A> int m_FUN_11142c50(A...); undefined4 * __thiscall m_FUN_11142e00(byte param_2); template<class... A> int m_FUN_11142e00(A...); undefined4 * __thiscall m_FUN_11142f30(byte param_2); template<class... A> int m_FUN_11142f30(A...); undefined4 * __thiscall m_FUN_11142f80(byte param_2); template<class... A> int m_FUN_11142f80(A...); undefined4 * __thiscall m_FUN_11142fd0(byte param_2); template<class... A> int m_FUN_11142fd0(A...); void __thiscall m_FUN_11147f30(undefined4 param_2); template<class... A> int m_FUN_11147f30(A...); void __thiscall m_FUN_11147f60(undefined4 param_2); template<class... A> int m_FUN_11147f60(A...); undefined4 * __thiscall m_FUN_11148420(byte param_2); template<class... A> int m_FUN_11148420(A...); undefined4 * __thiscall m_FUN_11148470(byte param_2); template<class... A> int m_FUN_11148470(A...); undefined4 * __thiscall m_FUN_111484a0(byte param_2); template<class... A> int m_FUN_111484a0(A...); void __thiscall m_FUN_11149270(int param_2); template<class... A> int m_FUN_11149270(A...); void __thiscall m_FUN_111492c0(undefined4 param_2,char *param_3, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_111492c0(A...); void __thiscall m_FUN_1114a6f0(uint param_2); template<class... A> int m_FUN_1114a6f0(A...); undefined4 * __thiscall m_FUN_1114a7f0(undefined4 param_2); template<class... A> int m_FUN_1114a7f0(A...); undefined4 * __thiscall m_FUN_1114b170(byte param_2); template<class... A> int m_FUN_1114b170(A...); void __thiscall m_FUN_1114b9d0(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_1114b9d0(A...); undefined4 * __thiscall m_FUN_1114d9c0(byte param_2); template<class... A> int m_FUN_1114d9c0(A...); undefined4 * __thiscall m_FUN_1114da10(byte param_2); template<class... A> int m_FUN_1114da10(A...); undefined4 * __thiscall m_FUN_1114ede0(undefined4 param_2); template<class... A> int m_FUN_1114ede0(A...); undefined4 * __thiscall m_FUN_1114f720(byte param_2); template<class... A> int m_FUN_1114f720(A...); undefined4 __thiscall m_FUN_1114f840(byte param_2); template<class... A> int m_FUN_1114f840(A...); undefined1 __thiscall m_FUN_11150470(int *param_2,undefined4 param_3); template<class... A> int m_FUN_11150470(A...); undefined4 * __thiscall m_FUN_11153390(byte param_2); template<class... A> int m_FUN_11153390(A...); undefined4 * __thiscall m_FUN_111533c0(byte param_2); template<class... A> int m_FUN_111533c0(A...); undefined4 __thiscall m_FUN_111533f0(byte param_2); template<class... A> int m_FUN_111533f0(A...); undefined4 * __thiscall m_FUN_11153420(byte param_2); template<class... A> int m_FUN_11153420(A...); undefined4 * __thiscall m_FUN_11153470(byte param_2); template<class... A> int m_FUN_11153470(A...); undefined4 * __thiscall m_FUN_111534c0(byte param_2); template<class... A> int m_FUN_111534c0(A...); undefined4 * __thiscall m_FUN_11153510(byte param_2); template<class... A> int m_FUN_11153510(A...); undefined4 * __thiscall m_FUN_11153560(byte param_2); template<class... A> int m_FUN_11153560(A...); undefined4 * __thiscall m_FUN_111535b0(byte param_2); template<class... A> int m_FUN_111535b0(A...); undefined4 * __thiscall m_FUN_11153600(byte param_2); template<class... A> int m_FUN_11153600(A...); void __thiscall m_FUN_11158050(short param_2); template<class... A> int m_FUN_11158050(A...); void __thiscall m_FUN_11158070(short param_2); template<class... A> int m_FUN_11158070(A...); void __thiscall m_FUN_111580a0(short param_2); template<class... A> int m_FUN_111580a0(A...); void __thiscall m_FUN_111580d0(short param_2); template<class... A> int m_FUN_111580d0(A...); void __thiscall m_FUN_11158120(undefined4 param_2); template<class... A> int m_FUN_11158120(A...); void __thiscall m_FUN_11158140(short param_2); template<class... A> int m_FUN_11158140(A...); void __thiscall m_FUN_11158170(byte param_2); template<class... A> int m_FUN_11158170(A...); void __thiscall m_FUN_111581a0(short param_2); template<class... A> int m_FUN_111581a0(A...); void __thiscall m_FUN_11158240(byte param_2); template<class... A> int m_FUN_11158240(A...); void __thiscall m_FUN_11158270(short param_2); template<class... A> int m_FUN_11158270(A...); void __thiscall m_FUN_111582a0(byte param_2); template<class... A> int m_FUN_111582a0(A...); void __thiscall m_FUN_111582d0(short param_2); template<class... A> int m_FUN_111582d0(A...); void __thiscall m_FUN_11158300(byte param_2); template<class... A> int m_FUN_11158300(A...); void __thiscall m_FUN_11158330(short param_2); template<class... A> int m_FUN_11158330(A...); void __thiscall m_FUN_11158360(short param_2); template<class... A> int m_FUN_11158360(A...); void __thiscall m_FUN_11158390(short param_2); template<class... A> int m_FUN_11158390(A...); void __thiscall m_FUN_111583c0(byte param_2); template<class... A> int m_FUN_111583c0(A...); void __thiscall m_FUN_11158420(short param_2); template<class... A> int m_FUN_11158420(A...); undefined4 * __thiscall m_FUN_11159760(byte param_2); template<class... A> int m_FUN_11159760(A...); undefined4 * __thiscall m_FUN_11159790(byte param_2); template<class... A> int m_FUN_11159790(A...); undefined4 * __thiscall m_FUN_111597e0(byte param_2); template<class... A> int m_FUN_111597e0(A...); undefined4 * __thiscall m_FUN_11159830(byte param_2); template<class... A> int m_FUN_11159830(A...); undefined4 * __thiscall m_FUN_11159880(byte param_2); template<class... A> int m_FUN_11159880(A...); undefined4 * __thiscall m_FUN_111598d0(byte param_2); template<class... A> int m_FUN_111598d0(A...); undefined4 * __thiscall m_FUN_11159920(byte param_2); template<class... A> int m_FUN_11159920(A...); undefined4 * __thiscall m_FUN_11159970(byte param_2); template<class... A> int m_FUN_11159970(A...); void __thiscall m_FUN_11159cc0(undefined4 param_2); template<class... A> int m_FUN_11159cc0(A...); int __thiscall m_FUN_1115b460(int param_2); template<class... A> int m_FUN_1115b460(A...); undefined4 * __thiscall m_FUN_1115e4d0(byte param_2); template<class... A> int m_FUN_1115e4d0(A...); undefined4 * __thiscall m_FUN_1115e520(byte param_2); template<class... A> int m_FUN_1115e520(A...); undefined4 * __thiscall m_FUN_1115e570(byte param_2); template<class... A> int m_FUN_1115e570(A...); undefined4 __thiscall m_FUN_1115e5c0(byte param_2); template<class... A> int m_FUN_1115e5c0(A...); void __thiscall m_FUN_1115e770(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1115e770(A...); void __thiscall m_FUN_1115ebe0(int param_2); template<class... A> int m_FUN_1115ebe0(A...); undefined4 __thiscall m_FUN_111611f0(int param_2); template<class... A> int m_FUN_111611f0(A...); undefined4 __thiscall m_FUN_111619e0(byte param_2); template<class... A> int m_FUN_111619e0(A...); void __thiscall m_FUN_11162290(undefined4 param_2); template<class... A> int m_FUN_11162290(A...); undefined4 __thiscall m_FUN_11162e40(byte param_2); template<class... A> int m_FUN_11162e40(A...); undefined4 __thiscall m_FUN_11162e70(byte param_2); template<class... A> int m_FUN_11162e70(A...); undefined4 __thiscall m_FUN_11162ea0(byte param_2); template<class... A> int m_FUN_11162ea0(A...); void __thiscall m_FUN_11163e50(undefined4 *param_2); template<class... A> int m_FUN_11163e50(A...); undefined4 __thiscall m_FUN_111644c0(int param_2,int param_3); template<class... A> int m_FUN_111644c0(A...); undefined4 * __thiscall m_FUN_11165f60(byte param_2); template<class... A> int m_FUN_11165f60(A...); undefined4 __thiscall m_FUN_11165f90(byte param_2); template<class... A> int m_FUN_11165f90(A...); undefined4 __thiscall m_FUN_111663d0(undefined4 param_2,short *param_3); template<class... A> int m_FUN_111663d0(A...); void __thiscall m_FUN_111664b0(undefined4 param_2); template<class... A> int m_FUN_111664b0(A...); undefined4 * __thiscall m_FUN_111669a0(byte param_2); template<class... A> int m_FUN_111669a0(A...); undefined4 * __thiscall m_FUN_11167050(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11167050(A...); void __thiscall m_FUN_11167580(int param_2); template<class... A> int m_FUN_11167580(A...); void __thiscall m_FUN_11167760(undefined4 param_2,byte param_3); template<class... A> int m_FUN_11167760(A...); int __thiscall m_FUN_11169c60(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11169c60(A...); undefined4 * __thiscall m_FUN_1116b6a0(byte param_2); template<class... A> int m_FUN_1116b6a0(A...); undefined4 * __thiscall m_FUN_1116b6d0(byte param_2); template<class... A> int m_FUN_1116b6d0(A...); undefined4 * __thiscall m_FUN_1116b950(byte param_2); template<class... A> int m_FUN_1116b950(A...); undefined4 __thiscall m_FUN_1116b9a0(byte param_2); template<class... A> int m_FUN_1116b9a0(A...); void __thiscall m_FUN_1116d580(int param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1116d580(A...); undefined4 * __thiscall m_FUN_1116e6d0(byte param_2); template<class... A> int m_FUN_1116e6d0(A...); undefined4 __thiscall m_FUN_1116ea70(undefined4 param_2); template<class... A> int m_FUN_1116ea70(A...); undefined4 __thiscall m_FUN_1116ed30(byte param_2); template<class... A> int m_FUN_1116ed30(A...); undefined4 * __thiscall m_FUN_1116f300(byte param_2); template<class... A> int m_FUN_1116f300(A...); int __thiscall m_FUN_111704b0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_111704b0(A...); void __thiscall m_FUN_111711d0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_111711d0(A...); undefined4 __thiscall m_FUN_11172e30(byte param_2); template<class... A> int m_FUN_11172e30(A...); void __thiscall m_FUN_11174050(int param_2); template<class... A> int m_FUN_11174050(A...); undefined4 * __thiscall m_FUN_11175b40(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_11175b40(A...); void __thiscall m_FUN_11176270(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11176270(A...); undefined4 __thiscall m_FUN_111767c0(uint param_2); template<class... A> int m_FUN_111767c0(A...); void __thiscall m_FUN_11179630(undefined4 param_2); template<class... A> int m_FUN_11179630(A...); void __thiscall m_FUN_11179660(undefined4 param_2); template<class... A> int m_FUN_11179660(A...); void __thiscall m_FUN_11179690(undefined4 param_2); template<class... A> int m_FUN_11179690(A...); void __thiscall m_FUN_11179720(undefined4 param_2); template<class... A> int m_FUN_11179720(A...); int __thiscall m_FUN_11179ac0(undefined4 param_2); template<class... A> int m_FUN_11179ac0(A...); int __thiscall m_FUN_11179b10(undefined4 param_2); template<class... A> int m_FUN_11179b10(A...); int __thiscall m_FUN_11179b60(undefined4 param_2); template<class... A> int m_FUN_11179b60(A...); int __thiscall m_FUN_11179bb0(int *param_2); template<class... A> int m_FUN_11179bb0(A...); int __thiscall m_FUN_11179bf0(int *param_2); template<class... A> int m_FUN_11179bf0(A...); undefined4 * __thiscall m_FUN_11181b00(byte param_2); template<class... A> int m_FUN_11181b00(A...); undefined4 __thiscall m_FUN_11181ee0(byte param_2); template<class... A> int m_FUN_11181ee0(A...); undefined4 __thiscall m_FUN_11182160(byte param_2); template<class... A> int m_FUN_11182160(A...); undefined4 __thiscall m_FUN_111822b0(byte param_2); template<class... A> int m_FUN_111822b0(A...); void __thiscall m_FUN_11182be0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11182be0(A...); void __thiscall m_FUN_11182c00(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11182c00(A...); undefined4 __thiscall m_FUN_1118c3e0(uint param_2); template<class... A> int m_FUN_1118c3e0(A...); void __thiscall m_FUN_1118d4c0(undefined4 param_2); template<class... A> int m_FUN_1118d4c0(A...); undefined4 * __thiscall m_FUN_1118e480(byte param_2); template<class... A> int m_FUN_1118e480(A...); undefined4 __thiscall m_FUN_1118e4b0(byte param_2); template<class... A> int m_FUN_1118e4b0(A...); undefined4 __thiscall m_FUN_1118e6c0(byte param_2); template<class... A> int m_FUN_1118e6c0(A...); undefined4 __thiscall m_FUN_1118f4d0(void *param_2,uint param_3); template<class... A> int m_FUN_1118f4d0(A...); undefined4 * __thiscall m_FUN_1118f7c0(byte param_2); template<class... A> int m_FUN_1118f7c0(A...); undefined4 * __thiscall m_FUN_111903c0(byte param_2); template<class... A> int m_FUN_111903c0(A...); undefined4 __thiscall m_FUN_11191df0(byte param_2); template<class... A> int m_FUN_11191df0(A...); undefined4 __thiscall m_FUN_11191ec0(byte param_2); template<class... A> int m_FUN_11191ec0(A...); undefined4 * __thiscall m_FUN_11193300(byte param_2); template<class... A> int m_FUN_11193300(A...); void __thiscall m_FUN_11193490(int param_2); template<class... A> int m_FUN_11193490(A...); undefined4 * __thiscall m_FUN_11194190(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11194190(A...); void __thiscall m_FUN_111941f0(int param_2); template<class... A> int m_FUN_111941f0(A...); void __thiscall m_FUN_11194230(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_11194230(A...); undefined4 * __thiscall m_FUN_11195890(byte param_2); template<class... A> int m_FUN_11195890(A...); undefined4 * __thiscall m_FUN_111958c0(byte param_2); template<class... A> int m_FUN_111958c0(A...); undefined4 * __thiscall m_FUN_111958f0(byte param_2); template<class... A> int m_FUN_111958f0(A...); undefined4 * __thiscall m_FUN_11195920(byte param_2); template<class... A> int m_FUN_11195920(A...); undefined4 * __thiscall m_FUN_11195950(byte param_2); template<class... A> int m_FUN_11195950(A...); undefined4 * __thiscall m_FUN_11195980(byte param_2); template<class... A> int m_FUN_11195980(A...); undefined4 * __thiscall m_FUN_11195c00(byte param_2); template<class... A> int m_FUN_11195c00(A...); undefined4 * __thiscall m_FUN_11195c50(byte param_2); template<class... A> int m_FUN_11195c50(A...); undefined4 * __thiscall m_FUN_11195ca0(byte param_2); template<class... A> int m_FUN_11195ca0(A...); undefined4 * __thiscall m_FUN_1119a0c0(byte param_2); template<class... A> int m_FUN_1119a0c0(A...); undefined4 __thiscall m_FUN_1119a0f0(byte param_2); template<class... A> int m_FUN_1119a0f0(A...); undefined4 * __thiscall m_FUN_1119a1d0(byte param_2); template<class... A> int m_FUN_1119a1d0(A...); undefined4 __thiscall m_FUN_1119a200(byte param_2); template<class... A> int m_FUN_1119a200(A...); undefined4 * __thiscall m_FUN_1119a230(byte param_2); template<class... A> int m_FUN_1119a230(A...); undefined4 __thiscall m_FUN_1119a260(byte param_2); template<class... A> int m_FUN_1119a260(A...); int * __thiscall m_FUN_1119a4a0(int *param_2); template<class... A> int m_FUN_1119a4a0(A...); undefined4 __thiscall m_FUN_1119a980(uint param_2); template<class... A> int m_FUN_1119a980(A...); int * __thiscall m_FUN_1119a9a0(int param_2); template<class... A> int m_FUN_1119a9a0(A...); int * __thiscall m_FUN_1119a9f0(int *param_2); template<class... A> int m_FUN_1119a9f0(A...); int * __thiscall m_FUN_1119ac90(int *param_2); template<class... A> int m_FUN_1119ac90(A...); undefined4 __thiscall m_FUN_1119ace0(undefined4 param_2,short *param_3); template<class... A> int m_FUN_1119ace0(A...); void __thiscall m_FUN_1119bd70(undefined4 param_2); template<class... A> int m_FUN_1119bd70(A...); void __thiscall m_FUN_1119bdc0(undefined4 param_2); template<class... A> int m_FUN_1119bdc0(A...); void __thiscall m_FUN_1119bdf0(int param_2); template<class... A> int m_FUN_1119bdf0(A...); undefined4 * __thiscall m_FUN_1119bf70(byte param_2); template<class... A> int m_FUN_1119bf70(A...); undefined4 __thiscall m_FUN_1119bfa0(byte param_2); template<class... A> int m_FUN_1119bfa0(A...); undefined4 * __thiscall m_FUN_1119bfd0(byte param_2); template<class... A> int m_FUN_1119bfd0(A...); void __thiscall m_FUN_1119c0c0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); template<class... A> int m_FUN_1119c0c0(A...); void __thiscall m_FUN_1119c150(undefined4 param_2,undefined1 param_3,undefined1 param_4); template<class... A> int m_FUN_1119c150(A...); void __thiscall m_FUN_1119c190(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9); template<class... A> int m_FUN_1119c190(A...); void __thiscall m_FUN_111a00f0(int param_2); template<class... A> int m_FUN_111a00f0(A...); void __thiscall m_FUN_111a05c0(int param_2); template<class... A> int m_FUN_111a05c0(A...); void __thiscall m_FUN_111a05e0(int param_2); template<class... A> int m_FUN_111a05e0(A...); bool __thiscall m_FUN_111a0f30(char *param_2); template<class... A> int m_FUN_111a0f30(A...); undefined4 * __thiscall m_FUN_111a1fd0(undefined4 param_2); template<class... A> int m_FUN_111a1fd0(A...); void __thiscall m_FUN_111a4800(undefined4 param_2); template<class... A> int m_FUN_111a4800(A...); undefined4 __thiscall m_FUN_111a5160(byte param_2); template<class... A> int m_FUN_111a5160(A...); undefined4 * __thiscall m_FUN_111a5190(byte param_2); template<class... A> int m_FUN_111a5190(A...); undefined4 * __thiscall m_FUN_111a5270(byte param_2); template<class... A> int m_FUN_111a5270(A...); bool __thiscall m_FUN_111a62a0(undefined4 param_2); template<class... A> int m_FUN_111a62a0(A...); int __thiscall m_FUN_111a72b0(int *param_2); template<class... A> int m_FUN_111a72b0(A...); undefined4 __thiscall m_FUN_111a8570(byte param_2); template<class... A> int m_FUN_111a8570(A...); void __thiscall m_FUN_111a8780(undefined4 param_2); template<class... A> int m_FUN_111a8780(A...); void __thiscall m_FUN_111ab110(uint param_2); template<class... A> int m_FUN_111ab110(A...); int * __thiscall m_FUN_111ab2c0(int *param_2); template<class... A> int m_FUN_111ab2c0(A...); void __thiscall m_FUN_111bce20(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_111bce20(A...); void __thiscall m_FUN_111bce40(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_111bce40(A...); void __thiscall m_FUN_111bcee0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9); template<class... A> int m_FUN_111bcee0(A...); void __thiscall m_FUN_111bcf20(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_111bcf20(A...); void __thiscall m_FUN_111bcf40(undefined4 param_2); template<class... A> int m_FUN_111bcf40(A...); void __thiscall m_FUN_111bcf60(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_111bcf60(A...); void __thiscall m_FUN_111bcfc0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_111bcfc0(A...); void __thiscall m_FUN_111bcfe0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_111bcfe0(A...); void __thiscall m_FUN_111bd000(int param_2); template<class... A> int m_FUN_111bd000(A...); undefined4 __thiscall m_FUN_111be750(int param_2); template<class... A> int m_FUN_111be750(A...); undefined4 __thiscall m_FUN_111c0c10(byte param_2); template<class... A> int m_FUN_111c0c10(A...); undefined4 __thiscall m_FUN_111c0c40(byte param_2); template<class... A> int m_FUN_111c0c40(A...); undefined4 __thiscall m_FUN_111c0c70(byte param_2); template<class... A> int m_FUN_111c0c70(A...); undefined4 __thiscall m_FUN_111c0ca0(byte param_2); template<class... A> int m_FUN_111c0ca0(A...); undefined4 * __thiscall m_FUN_111c0cd0(byte param_2); template<class... A> int m_FUN_111c0cd0(A...); undefined4 * __thiscall m_FUN_111c0d70(byte param_2); template<class... A> int m_FUN_111c0d70(A...); undefined4 __thiscall m_FUN_111c1270(undefined4 *param_2); template<class... A> int m_FUN_111c1270(A...); undefined4 __thiscall m_FUN_111c1290(undefined4 *param_2); template<class... A> int m_FUN_111c1290(A...); undefined4 __thiscall m_FUN_111c12b0(undefined4 *param_2); template<class... A> int m_FUN_111c12b0(A...); undefined4 __thiscall m_FUN_111c12d0(undefined4 *param_2); template<class... A> int m_FUN_111c12d0(A...); void __thiscall m_FUN_111c1390(undefined4 *param_2); template<class... A> int m_FUN_111c1390(A...); void __thiscall m_FUN_111c13d0(undefined4 *param_2); template<class... A> int m_FUN_111c13d0(A...); void __thiscall m_FUN_111c1460(undefined4 *param_2); template<class... A> int m_FUN_111c1460(A...); undefined1 __thiscall m_FUN_111c1b60(int *param_2); template<class... A> int m_FUN_111c1b60(A...); undefined4 __thiscall m_FUN_111c1bd0(undefined4 param_2,int param_3); template<class... A> int m_FUN_111c1bd0(A...); void __thiscall m_FUN_111c1d40(undefined4 param_2); template<class... A> int m_FUN_111c1d40(A...); int * __thiscall m_FUN_111c2330(int *param_2); template<class... A> int m_FUN_111c2330(A...); void __thiscall m_FUN_111c2590(undefined4 param_2); template<class... A> int m_FUN_111c2590(A...); int __thiscall m_FUN_111c2670(undefined4 param_2); template<class... A> int m_FUN_111c2670(A...); undefined4 __thiscall m_FUN_111c3e80(byte param_2); template<class... A> int m_FUN_111c3e80(A...); undefined4 __thiscall m_FUN_111c3eb0(byte param_2); template<class... A> int m_FUN_111c3eb0(A...); undefined4 __thiscall m_FUN_111c3f50(byte param_2); template<class... A> int m_FUN_111c3f50(A...); undefined4 __thiscall m_FUN_111c4010(byte param_2); template<class... A> int m_FUN_111c4010(A...); undefined4 __thiscall m_FUN_111c4040(byte param_2); template<class... A> int m_FUN_111c4040(A...); void __thiscall m_FUN_111c4b80(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_111c4b80(A...); void __thiscall m_FUN_111c5e90(undefined4 param_2,undefined4 param_3,int *param_4); template<class... A> int m_FUN_111c5e90(A...); void __thiscall m_FUN_111c66d0(undefined4 param_2); template<class... A> int m_FUN_111c66d0(A...); void __thiscall m_FUN_111c7940(undefined4 param_2); template<class... A> int m_FUN_111c7940(A...); int __thiscall m_FUN_111c79d0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_111c79d0(A...); int * __thiscall m_FUN_111cb020(int param_2,undefined4 param_3); template<class... A> int m_FUN_111cb020(A...); undefined4 * __thiscall m_FUN_111cfc00(undefined4 param_2); template<class... A> int m_FUN_111cfc00(A...); int __thiscall m_FUN_111cfc30(undefined4 param_2); template<class... A> int m_FUN_111cfc30(A...); undefined4 * __thiscall m_FUN_111cfc50(undefined4 param_2,undefined1 param_3,undefined4 param_4); template<class... A> int m_FUN_111cfc50(A...); undefined4 * __thiscall m_FUN_111d00e0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_111d00e0(A...); undefined4 __thiscall m_FUN_111d50b0(undefined4 param_2); template<class... A> int m_FUN_111d50b0(A...); undefined4 * __thiscall m_FUN_111d57e0(byte param_2); template<class... A> int m_FUN_111d57e0(A...); undefined4 * __thiscall m_FUN_111d5810(byte param_2); template<class... A> int m_FUN_111d5810(A...); undefined4 * __thiscall m_FUN_111d5840(byte param_2); template<class... A> int m_FUN_111d5840(A...); undefined4 * __thiscall m_FUN_111d5870(byte param_2); template<class... A> int m_FUN_111d5870(A...); undefined4 * __thiscall m_FUN_111d58a0(byte param_2); template<class... A> int m_FUN_111d58a0(A...); undefined4 * __thiscall m_FUN_111d58d0(byte param_2); template<class... A> int m_FUN_111d58d0(A...); undefined4 __thiscall m_FUN_111d5980(byte param_2); template<class... A> int m_FUN_111d5980(A...); undefined4 __thiscall m_FUN_111d5a30(byte param_2); template<class... A> int m_FUN_111d5a30(A...); undefined4 __thiscall m_FUN_111d5a60(byte param_2); template<class... A> int m_FUN_111d5a60(A...); undefined4 __thiscall m_FUN_111d5a90(byte param_2); template<class... A> int m_FUN_111d5a90(A...); undefined4 __thiscall m_FUN_111d5ac0(byte param_2); template<class... A> int m_FUN_111d5ac0(A...); undefined4 __thiscall m_FUN_111d5af0(byte param_2); template<class... A> int m_FUN_111d5af0(A...); undefined4 __thiscall m_FUN_111d5b20(byte param_2); template<class... A> int m_FUN_111d5b20(A...); undefined4 __thiscall m_FUN_111d5d00(byte param_2); template<class... A> int m_FUN_111d5d00(A...); undefined4 * __thiscall m_FUN_111d5e30(byte param_2); template<class... A> int m_FUN_111d5e30(A...); undefined4 * __thiscall m_FUN_111d5e70(byte param_2); template<class... A> int m_FUN_111d5e70(A...); undefined4 __thiscall m_FUN_111d5ea0(byte param_2); template<class... A> int m_FUN_111d5ea0(A...); undefined4 * __thiscall m_FUN_111d5fc0(byte param_2); template<class... A> int m_FUN_111d5fc0(A...); undefined4 * __thiscall m_FUN_111d5ff0(byte param_2); template<class... A> int m_FUN_111d5ff0(A...); undefined4 __thiscall m_FUN_111d60c0(byte param_2); template<class... A> int m_FUN_111d60c0(A...); undefined4 * __thiscall m_FUN_111d60f0(byte param_2); template<class... A> int m_FUN_111d60f0(A...); undefined4 * __thiscall m_FUN_111d6130(byte param_2); template<class... A> int m_FUN_111d6130(A...); undefined4 * __thiscall m_FUN_111d6180(byte param_2); template<class... A> int m_FUN_111d6180(A...); int __thiscall m_FUN_111d6b90(byte param_2); template<class... A> int m_FUN_111d6b90(A...); int __thiscall m_FUN_111d6bd0(byte param_2); template<class... A> int m_FUN_111d6bd0(A...); undefined4 * __thiscall m_FUN_111d6c10(byte param_2); template<class... A> int m_FUN_111d6c10(A...); undefined4 * __thiscall m_FUN_111d6c50(byte param_2); template<class... A> int m_FUN_111d6c50(A...); undefined4 * __thiscall m_FUN_111d6c90(byte param_2); template<class... A> int m_FUN_111d6c90(A...); undefined4 * __thiscall m_FUN_111d6cd0(byte param_2); template<class... A> int m_FUN_111d6cd0(A...); undefined4 * __thiscall m_FUN_111d6dc0(byte param_2); template<class... A> int m_FUN_111d6dc0(A...); int __thiscall m_FUN_111d6f40(byte param_2); template<class... A> int m_FUN_111d6f40(A...); undefined4 * __thiscall m_FUN_111d7050(byte param_2); template<class... A> int m_FUN_111d7050(A...); undefined4 * __thiscall m_FUN_111d73c0(byte param_2); template<class... A> int m_FUN_111d73c0(A...); undefined4 * __thiscall m_FUN_111d7530(byte param_2); template<class... A> int m_FUN_111d7530(A...); undefined4 __thiscall m_FUN_111d75f0(byte param_2); template<class... A> int m_FUN_111d75f0(A...); undefined4 __thiscall m_FUN_111e2cb0(undefined4 param_2); template<class... A> int m_FUN_111e2cb0(A...); void __thiscall m_FUN_111f3c00(int param_2); template<class... A> int m_FUN_111f3c00(A...); void __thiscall m_FUN_111f4a70(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_111f4a70(A...); void __thiscall m_FUN_111f4db0(undefined4 param_2); template<class... A> int m_FUN_111f4db0(A...); void __thiscall m_FUN_111f5630(undefined4 param_2); template<class... A> int m_FUN_111f5630(A...); void __thiscall m_FUN_111f5990(undefined4 param_2); template<class... A> int m_FUN_111f5990(A...); void __thiscall m_FUN_111f59c0(undefined4 param_2); template<class... A> int m_FUN_111f59c0(A...); void __thiscall m_FUN_111f59f0(undefined4 param_2); template<class... A> int m_FUN_111f59f0(A...); void __thiscall m_FUN_111f5a20(undefined4 param_2); template<class... A> int m_FUN_111f5a20(A...); void __thiscall m_FUN_111f6bf0(int param_2); template<class... A> int m_FUN_111f6bf0(A...); undefined4 __thiscall m_FUN_111f6e80(int param_2); template<class... A> int m_FUN_111f6e80(A...); undefined4 * __thiscall m_FUN_111f7790(undefined4 param_2); template<class... A> int m_FUN_111f7790(A...); undefined4 * __thiscall m_FUN_111f7880(byte param_2); template<class... A> int m_FUN_111f7880(A...); undefined4 * __thiscall m_FUN_111f78b0(byte param_2); template<class... A> int m_FUN_111f78b0(A...); undefined4 * __thiscall m_FUN_111f78f0(byte param_2); template<class... A> int m_FUN_111f78f0(A...); undefined4 * __thiscall m_FUN_111f7920(byte param_2); template<class... A> int m_FUN_111f7920(A...); undefined4 * __thiscall m_FUN_111f79c0(byte param_2); template<class... A> int m_FUN_111f79c0(A...); undefined4 * __thiscall m_FUN_111f79f0(byte param_2); template<class... A> int m_FUN_111f79f0(A...); undefined4 __thiscall m_FUN_111fc380(byte param_2); template<class... A> int m_FUN_111fc380(A...); undefined4 __thiscall m_FUN_111fc3b0(byte param_2); template<class... A> int m_FUN_111fc3b0(A...); undefined1 __thiscall m_FUN_111fc550(undefined4 param_2); template<class... A> int m_FUN_111fc550(A...); void __thiscall m_FUN_111fc6a0(undefined4 param_2); template<class... A> int m_FUN_111fc6a0(A...); undefined1 __thiscall m_FUN_111fc6d0(undefined4 param_2); template<class... A> int m_FUN_111fc6d0(A...); undefined1 __thiscall m_FUN_111fc820(undefined4 param_2); template<class... A> int m_FUN_111fc820(A...); undefined4 * __thiscall m_FUN_111fe350(undefined4 param_2); template<class... A> int m_FUN_111fe350(A...); undefined4 * __thiscall m_FUN_111feda0(byte param_2); template<class... A> int m_FUN_111feda0(A...); undefined4 * __thiscall m_FUN_111fedd0(byte param_2); template<class... A> int m_FUN_111fedd0(A...); undefined4 * __thiscall m_FUN_111fee10(byte param_2); template<class... A> int m_FUN_111fee10(A...); undefined4 * __thiscall m_FUN_111fee40(byte param_2); template<class... A> int m_FUN_111fee40(A...); undefined4 __thiscall m_FUN_111fee70(byte param_2); template<class... A> int m_FUN_111fee70(A...); undefined4 __thiscall m_FUN_111ff030(byte param_2); template<class... A> int m_FUN_111ff030(A...); undefined4 * __thiscall m_FUN_111ff060(byte param_2); template<class... A> int m_FUN_111ff060(A...); undefined4 __thiscall m_FUN_111ff090(byte param_2); template<class... A> int m_FUN_111ff090(A...); undefined4 * __thiscall m_FUN_111ff0c0(byte param_2); template<class... A> int m_FUN_111ff0c0(A...); undefined4 * __thiscall m_FUN_111ff0f0(byte param_2); template<class... A> int m_FUN_111ff0f0(A...); undefined4 * __thiscall m_FUN_111ff130(byte param_2); template<class... A> int m_FUN_111ff130(A...); void __thiscall m_FUN_111ff660(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_111ff660(A...); int __thiscall m_FUN_11200a70(undefined4 param_2); template<class... A> int m_FUN_11200a70(A...); void __thiscall m_FUN_112022a0(undefined4 param_2); template<class... A> int m_FUN_112022a0(A...); undefined4 * __thiscall m_FUN_112025b0(byte param_2); template<class... A> int m_FUN_112025b0(A...); undefined4 * __thiscall m_FUN_112025e0(byte param_2); template<class... A> int m_FUN_112025e0(A...); undefined4 * __thiscall m_FUN_11202620(byte param_2); template<class... A> int m_FUN_11202620(A...); undefined4 * __thiscall m_FUN_11202650(byte param_2); template<class... A> int m_FUN_11202650(A...); void __thiscall m_FUN_11202d50(undefined4 param_2); template<class... A> int m_FUN_11202d50(A...); undefined4 * __thiscall m_FUN_11203a40(undefined4 *param_2); template<class... A> int m_FUN_11203a40(A...); undefined4 * __thiscall m_FUN_11204020(byte param_2); template<class... A> int m_FUN_11204020(A...); undefined4 __thiscall m_FUN_11204050(byte param_2); template<class... A> int m_FUN_11204050(A...); undefined4 * __thiscall m_FUN_11204080(byte param_2); template<class... A> int m_FUN_11204080(A...); void __thiscall m_FUN_112041a0(int param_2); template<class... A> int m_FUN_112041a0(A...); void __thiscall m_FUN_11204570(int *param_2); template<class... A> int m_FUN_11204570(A...); void __thiscall m_FUN_112045a0(int *param_2); template<class... A> int m_FUN_112045a0(A...); void __thiscall m_FUN_112046d0(undefined4 *param_2); template<class... A> int m_FUN_112046d0(A...); undefined1 * __thiscall m_FUN_11204720(undefined1 *param_2); template<class... A> int m_FUN_11204720(A...); void __thiscall m_FUN_11205180(undefined4 param_2); template<class... A> int m_FUN_11205180(A...); void __thiscall m_FUN_112051b0(int param_2); template<class... A> int m_FUN_112051b0(A...); void __thiscall m_FUN_112051e0(undefined4 param_2); template<class... A> int m_FUN_112051e0(A...); void __thiscall m_FUN_11205240(undefined4 param_2); template<class... A> int m_FUN_11205240(A...); void __thiscall m_FUN_11205270(undefined4 *param_2); template<class... A> int m_FUN_11205270(A...); void __thiscall m_FUN_112052f0(undefined4 param_2); template<class... A> int m_FUN_112052f0(A...); void __thiscall m_FUN_112056a0(undefined4 param_2); template<class... A> int m_FUN_112056a0(A...); undefined4 __thiscall m_FUN_11205a20(byte param_2); template<class... A> int m_FUN_11205a20(A...); undefined4 __thiscall m_FUN_11205a50(byte param_2); template<class... A> int m_FUN_11205a50(A...); undefined4 __thiscall m_FUN_11205a90(byte param_2); template<class... A> int m_FUN_11205a90(A...); undefined4 * __thiscall m_FUN_112075b0(byte param_2); template<class... A> int m_FUN_112075b0(A...); void __thiscall m_FUN_11208430(undefined4 *param_2); template<class... A> int m_FUN_11208430(A...); undefined4 __thiscall m_FUN_11208e60(byte param_2); template<class... A> int m_FUN_11208e60(A...); undefined4 __thiscall m_FUN_11208e90(byte param_2); template<class... A> int m_FUN_11208e90(A...); undefined4 __thiscall m_FUN_1120bb20(byte param_2); template<class... A> int m_FUN_1120bb20(A...); undefined4 __thiscall m_FUN_1120bb50(byte param_2); template<class... A> int m_FUN_1120bb50(A...); undefined4 __thiscall m_FUN_1120cc40(byte param_2); template<class... A> int m_FUN_1120cc40(A...); undefined4 __thiscall m_FUN_1120cc70(byte param_2); template<class... A> int m_FUN_1120cc70(A...); undefined4 __thiscall m_FUN_11214580(byte param_2); template<class... A> int m_FUN_11214580(A...); undefined4 __thiscall m_FUN_112145b0(byte param_2); template<class... A> int m_FUN_112145b0(A...); undefined4 __thiscall m_FUN_112145f0(byte param_2); template<class... A> int m_FUN_112145f0(A...); void __thiscall m_FUN_112172e0(undefined4 param_2); template<class... A> int m_FUN_112172e0(A...); undefined4 __thiscall m_FUN_11217550(byte param_2); template<class... A> int m_FUN_11217550(A...); undefined4 __thiscall m_FUN_11217580(byte param_2); template<class... A> int m_FUN_11217580(A...); undefined4 __thiscall m_FUN_11218060(byte param_2); template<class... A> int m_FUN_11218060(A...); undefined4 __thiscall m_FUN_11218090(byte param_2); template<class... A> int m_FUN_11218090(A...); undefined4 __thiscall m_FUN_11218c70(byte param_2); template<class... A> int m_FUN_11218c70(A...); undefined4 __thiscall m_FUN_11218ca0(byte param_2); template<class... A> int m_FUN_11218ca0(A...); undefined4 * __thiscall m_FUN_11219c50(byte param_2); template<class... A> int m_FUN_11219c50(A...); undefined4 * __thiscall m_FUN_11219c80(byte param_2); template<class... A> int m_FUN_11219c80(A...); undefined4 * __thiscall m_FUN_1121aff0(byte param_2); template<class... A> int m_FUN_1121aff0(A...); undefined4 * __thiscall m_FUN_1121b020(byte param_2); template<class... A> int m_FUN_1121b020(A...); undefined4 __thiscall m_FUN_1121b930(byte param_2); template<class... A> int m_FUN_1121b930(A...); undefined4 __thiscall m_FUN_1121b960(byte param_2); template<class... A> int m_FUN_1121b960(A...); undefined4 __thiscall m_FUN_1121b9a0(byte param_2); template<class... A> int m_FUN_1121b9a0(A...); undefined4 __thiscall m_FUN_1121dcd0(byte param_2); template<class... A> int m_FUN_1121dcd0(A...); undefined4 __thiscall m_FUN_1121dd10(byte param_2); template<class... A> int m_FUN_1121dd10(A...); undefined4 __thiscall m_FUN_112220c0(byte param_2); template<class... A> int m_FUN_112220c0(A...); undefined4 __thiscall m_FUN_11222100(byte param_2); template<class... A> int m_FUN_11222100(A...); undefined4 __thiscall m_FUN_11222130(byte param_2); template<class... A> int m_FUN_11222130(A...); undefined4 __thiscall m_FUN_112238a0(byte param_2); template<class... A> int m_FUN_112238a0(A...); undefined4 __thiscall m_FUN_112238d0(byte param_2); template<class... A> int m_FUN_112238d0(A...); undefined4 __thiscall m_FUN_11223910(byte param_2); template<class... A> int m_FUN_11223910(A...); undefined4 __thiscall m_FUN_11227f90(byte param_2); template<class... A> int m_FUN_11227f90(A...); undefined4 __thiscall m_FUN_11227fd0(byte param_2); template<class... A> int m_FUN_11227fd0(A...); undefined4 __thiscall m_FUN_11228000(byte param_2); template<class... A> int m_FUN_11228000(A...); void __thiscall m_FUN_1122add0(int *param_2); template<class... A> int m_FUN_1122add0(A...); undefined4 * __thiscall m_FUN_1122b5a0(int param_2); template<class... A> int m_FUN_1122b5a0(A...); undefined4 * __thiscall m_FUN_1122b640(undefined4 param_2); template<class... A> int m_FUN_1122b640(A...); undefined4 * __thiscall m_FUN_1122b690(int param_2); template<class... A> int m_FUN_1122b690(A...); undefined4 * __thiscall m_FUN_1122bbf0(byte param_2); template<class... A> int m_FUN_1122bbf0(A...); undefined4 * __thiscall m_FUN_1122bc30(byte param_2); template<class... A> int m_FUN_1122bc30(A...); undefined4 __thiscall m_FUN_1122e1c0(byte param_2); template<class... A> int m_FUN_1122e1c0(A...); int __thiscall m_FUN_1122e1f0(byte param_2); template<class... A> int m_FUN_1122e1f0(A...); undefined1 __thiscall m_FUN_1122e250(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6); template<class... A> int m_FUN_1122e250(A...); void __thiscall m_FUN_1122f1a0(int param_2,int param_3); template<class... A> int m_FUN_1122f1a0(A...); undefined4 * __thiscall m_FUN_11230240(int *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1); template<class... A> int m_FUN_11230240(A...); undefined4 * __thiscall m_FUN_11230350(byte param_2); template<class... A> int m_FUN_11230350(A...); undefined4 * __thiscall m_FUN_11231660(byte param_2); template<class... A> int m_FUN_11231660(A...); undefined4 * __thiscall m_FUN_11231700(byte param_2); template<class... A> int m_FUN_11231700(A...); undefined4 * __thiscall m_FUN_11231860(byte param_2); template<class... A> int m_FUN_11231860(A...); undefined4 * __thiscall m_FUN_11231890(byte param_2); template<class... A> int m_FUN_11231890(A...); void __thiscall m_FUN_11232970(undefined4 *param_2); template<class... A> int m_FUN_11232970(A...); void __thiscall m_FUN_112333d0(undefined4 param_2); template<class... A> int m_FUN_112333d0(A...); void __thiscall m_FUN_11233890(undefined4 param_2); template<class... A> int m_FUN_11233890(A...); undefined4 * __thiscall m_FUN_11234160(byte param_2); template<class... A> int m_FUN_11234160(A...); void __thiscall m_FUN_11234420(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11234420(A...); void __thiscall m_FUN_11235500(undefined4 param_2); template<class... A> int m_FUN_11235500(A...); undefined4 * __thiscall m_FUN_112362e0(byte param_2); template<class... A> int m_FUN_112362e0(A...); undefined4 * __thiscall m_FUN_112363e0(byte param_2); template<class... A> int m_FUN_112363e0(A...); undefined4 * __thiscall m_FUN_11236420(byte param_2); template<class... A> int m_FUN_11236420(A...); undefined4 * __thiscall m_FUN_11236450(byte param_2); template<class... A> int m_FUN_11236450(A...); void __thiscall m_FUN_112382e0(undefined4 param_2,undefined4 param_3,int *param_4); template<class... A> int m_FUN_112382e0(A...); void __thiscall m_FUN_112386e0(undefined4 param_2); template<class... A> int m_FUN_112386e0(A...); void __thiscall m_FUN_11238700(undefined4 param_2); template<class... A> int m_FUN_11238700(A...); undefined1 __thiscall m_FUN_11238b30(undefined4 param_2,int param_3); template<class... A> int m_FUN_11238b30(A...); void __thiscall m_FUN_11239ce0(int param_2); template<class... A> int m_FUN_11239ce0(A...); void __thiscall m_FUN_11239de0(undefined4 param_2); template<class... A> int m_FUN_11239de0(A...); undefined4 __thiscall m_FUN_1123a750(byte param_2); template<class... A> int m_FUN_1123a750(A...); int * __thiscall m_FUN_1123ad20(int param_2); template<class... A> int m_FUN_1123ad20(A...); void __thiscall m_FUN_1123b1e0(int param_2); template<class... A> int m_FUN_1123b1e0(A...); undefined4 * __thiscall m_FUN_1123ec90(byte param_2); template<class... A> int m_FUN_1123ec90(A...); void __thiscall m_FUN_1123ef00(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1123ef00(A...); undefined4 __thiscall m_FUN_1123f550(byte param_2); template<class... A> int m_FUN_1123f550(A...); undefined4 __thiscall m_FUN_1123f580(byte param_2); template<class... A> int m_FUN_1123f580(A...); int __thiscall m_FUN_11240680(undefined4 param_2); template<class... A> int m_FUN_11240680(A...); undefined4 __thiscall m_FUN_11240a80(byte param_2); template<class... A> int m_FUN_11240a80(A...); undefined4 * __thiscall m_FUN_11240ab0(byte param_2); template<class... A> int m_FUN_11240ab0(A...); undefined4 * __thiscall m_FUN_11242a40(byte param_2); template<class... A> int m_FUN_11242a40(A...); undefined1 __thiscall m_FUN_11242c60(undefined4 param_2); template<class... A> int m_FUN_11242c60(A...); undefined1 __thiscall m_FUN_11242ef0(undefined4 param_2); template<class... A> int m_FUN_11242ef0(A...); undefined4 * __thiscall m_FUN_112432f0(int param_2); template<class... A> int m_FUN_112432f0(A...); undefined4 * __thiscall m_FUN_11243380(int param_2); template<class... A> int m_FUN_11243380(A...); undefined4 * __thiscall m_FUN_11243600(byte param_2); template<class... A> int m_FUN_11243600(A...); undefined4 * __thiscall m_FUN_11243640(byte param_2); template<class... A> int m_FUN_11243640(A...); undefined4 * __thiscall m_FUN_11243670(byte param_2); template<class... A> int m_FUN_11243670(A...); undefined4 * __thiscall m_FUN_11244c70(undefined1 *param_2,int param_3); template<class... A> int m_FUN_11244c70(A...); undefined1 * __thiscall m_FUN_11244ca0(undefined4 param_2,int param_3); template<class... A> int m_FUN_11244ca0(A...); undefined4 * __thiscall m_FUN_11245090(byte param_2); template<class... A> int m_FUN_11245090(A...); undefined4 * __thiscall m_FUN_112450c0(byte param_2); template<class... A> int m_FUN_112450c0(A...); int __thiscall m_FUN_112482e0(byte param_2); template<class... A> int m_FUN_112482e0(A...); bool __thiscall m_FUN_11248ba0(undefined4 param_2); template<class... A> int m_FUN_11248ba0(A...); undefined4 * __thiscall m_FUN_11249170(byte param_2); template<class... A> int m_FUN_11249170(A...); undefined4 * __thiscall m_FUN_112491a0(byte param_2); template<class... A> int m_FUN_112491a0(A...); undefined4 * __thiscall m_FUN_112491d0(byte param_2); template<class... A> int m_FUN_112491d0(A...); undefined4 * __thiscall m_FUN_11249200(byte param_2); template<class... A> int m_FUN_11249200(A...); void __thiscall m_FUN_11249e30(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11249e30(A...); undefined4 * __thiscall m_FUN_1124a420(byte param_2); template<class... A> int m_FUN_1124a420(A...); undefined4 __thiscall m_FUN_1124a460(byte param_2); template<class... A> int m_FUN_1124a460(A...); undefined4 * __thiscall m_FUN_1124a4f0(byte param_2); template<class... A> int m_FUN_1124a4f0(A...); undefined4 * __thiscall m_FUN_1124a520(byte param_2); template<class... A> int m_FUN_1124a520(A...); undefined4 * __thiscall m_FUN_1124a550(byte param_2); template<class... A> int m_FUN_1124a550(A...); undefined4 * __thiscall m_FUN_1124a580(byte param_2); template<class... A> int m_FUN_1124a580(A...); undefined4 __thiscall m_FUN_1124a5b0(byte param_2); template<class... A> int m_FUN_1124a5b0(A...); void __thiscall m_FUN_1124cea0(undefined4 *param_2,undefined2 *param_3,undefined4 param_4,
            undefined4 param_5,undefined1 *param_6); template<class... A> int m_FUN_1124cea0(A...); void __thiscall m_FUN_1124d500(int param_2,int param_3); template<class... A> int m_FUN_1124d500(A...); int __thiscall m_FUN_1124d740(int param_2); template<class... A> int m_FUN_1124d740(A...); int __thiscall m_FUN_1124d7a0(int param_2); template<class... A> int m_FUN_1124d7a0(A...); void __thiscall m_FUN_1124f2a0(short param_2); template<class... A> int m_FUN_1124f2a0(A...); void __thiscall m_FUN_1124f2e0(undefined2 param_2); template<class... A> int m_FUN_1124f2e0(A...); void __thiscall m_FUN_1124f320(undefined4 param_2); template<class... A> int m_FUN_1124f320(A...); void __thiscall m_FUN_1124f350(undefined4 param_2); template<class... A> int m_FUN_1124f350(A...); void __thiscall m_FUN_1124f3c0(char param_2); template<class... A> int m_FUN_1124f3c0(A...); void __thiscall m_FUN_1124f480(undefined4 param_2); template<class... A> int m_FUN_1124f480(A...); void __thiscall m_FUN_1124f4c0(undefined4 param_2); template<class... A> int m_FUN_1124f4c0(A...); void __thiscall m_FUN_1124f4e0(undefined4 param_2); template<class... A> int m_FUN_1124f4e0(A...); undefined4 * __thiscall m_FUN_1124f510(byte param_2); template<class... A> int m_FUN_1124f510(A...); undefined4 * __thiscall m_FUN_1124f540(byte param_2); template<class... A> int m_FUN_1124f540(A...); undefined4 * __thiscall m_FUN_1124f5e0(byte param_2); template<class... A> int m_FUN_1124f5e0(A...); undefined4 * __thiscall m_FUN_1124f620(byte param_2); template<class... A> int m_FUN_1124f620(A...); undefined4 __thiscall m_FUN_1124f650(byte param_2); template<class... A> int m_FUN_1124f650(A...); undefined4 * __thiscall m_FUN_1124f680(byte param_2); template<class... A> int m_FUN_1124f680(A...); undefined4 __thiscall m_FUN_1124f790(byte param_2); template<class... A> int m_FUN_1124f790(A...); undefined4 * __thiscall m_FUN_1124f7c0(byte param_2); template<class... A> int m_FUN_1124f7c0(A...); undefined4 __thiscall m_FUN_1124f8d0(byte param_2); template<class... A> int m_FUN_1124f8d0(A...); undefined4 __thiscall m_FUN_1124fa40(byte param_2); template<class... A> int m_FUN_1124fa40(A...); undefined4 * __thiscall m_FUN_1124fbb0(byte param_2); template<class... A> int m_FUN_1124fbb0(A...); undefined4 * __thiscall m_FUN_1124fbf0(byte param_2); template<class... A> int m_FUN_1124fbf0(A...); undefined4 * __thiscall m_FUN_1124fcc0(byte param_2); template<class... A> int m_FUN_1124fcc0(A...); undefined4 * __thiscall m_FUN_1124fcf0(byte param_2); template<class... A> int m_FUN_1124fcf0(A...); void __thiscall m_FUN_1124fe20(int param_2); template<class... A> int m_FUN_1124fe20(A...); void __thiscall m_FUN_1124fe70(int param_2); template<class... A> int m_FUN_1124fe70(A...); int __thiscall m_FUN_1124fec0(undefined4 param_2); template<class... A> int m_FUN_1124fec0(A...); int __thiscall m_FUN_1124ff50(undefined4 param_2); template<class... A> int m_FUN_1124ff50(A...); int __thiscall m_FUN_11250060(undefined4 param_2); template<class... A> int m_FUN_11250060(A...); int __thiscall m_FUN_112500b0(undefined4 param_2); template<class... A> int m_FUN_112500b0(A...); void __thiscall m_FUN_112503c0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_112503c0(A...); void __thiscall m_FUN_112503f0(undefined4 param_2); template<class... A> int m_FUN_112503f0(A...); void __thiscall m_FUN_11250430(undefined4 param_2); template<class... A> int m_FUN_11250430(A...); void __thiscall m_FUN_11250470(undefined4 param_2); template<class... A> int m_FUN_11250470(A...); void __thiscall m_FUN_112504b0(undefined4 param_2); template<class... A> int m_FUN_112504b0(A...); void __thiscall m_FUN_112504f0(undefined4 param_2); template<class... A> int m_FUN_112504f0(A...); void __thiscall m_FUN_11250530(undefined4 param_2); template<class... A> int m_FUN_11250530(A...); void __thiscall m_FUN_112505b0(undefined4 param_2); template<class... A> int m_FUN_112505b0(A...); int __thiscall m_FUN_11252550(int param_2); template<class... A> int m_FUN_11252550(A...); int __thiscall m_FUN_11252570(int param_2); template<class... A> int m_FUN_11252570(A...); int __thiscall m_FUN_11252590(int param_2); template<class... A> int m_FUN_11252590(A...); int __thiscall m_FUN_112525b0(int param_2); template<class... A> int m_FUN_112525b0(A...); int __thiscall m_FUN_112525d0(int param_2); template<class... A> int m_FUN_112525d0(A...); int __thiscall m_FUN_112525f0(int param_2); template<class... A> int m_FUN_112525f0(A...); int __thiscall m_FUN_11252610(int param_2); template<class... A> int m_FUN_11252610(A...); int __thiscall m_FUN_11252630(int param_2); template<class... A> int m_FUN_11252630(A...); int __thiscall m_FUN_11252650(int param_2); template<class... A> int m_FUN_11252650(A...); int __thiscall m_FUN_11252670(int param_2); template<class... A> int m_FUN_11252670(A...); int __thiscall m_FUN_11252690(int param_2); template<class... A> int m_FUN_11252690(A...); int __thiscall m_FUN_112526b0(int param_2); template<class... A> int m_FUN_112526b0(A...); void __thiscall m_FUN_11253cd0(char *param_2); template<class... A> int m_FUN_11253cd0(A...); void __thiscall m_FUN_11253d30(char *param_2); template<class... A> int m_FUN_11253d30(A...); void __thiscall m_FUN_11254500(char *param_2); template<class... A> int m_FUN_11254500(A...); byte * __thiscall m_FUN_11254d80(undefined4 param_2); template<class... A> int m_FUN_11254d80(A...); undefined4 __thiscall m_FUN_11255dc0(byte param_2); template<class... A> int m_FUN_11255dc0(A...); undefined4 __thiscall m_FUN_11257750(undefined1 *param_2,undefined4 param_3); template<class... A> int m_FUN_11257750(A...); undefined4 __thiscall m_FUN_11257790(undefined1 *param_2,undefined4 param_3); template<class... A> int m_FUN_11257790(A...); void __thiscall m_FUN_11258890(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11258890(A...); undefined4 * __thiscall m_FUN_11259530(byte param_2); template<class... A> int m_FUN_11259530(A...); int * __thiscall m_FUN_1125ac90(undefined1 *param_2,int param_3); template<class... A> int m_FUN_1125ac90(A...); undefined4 * __thiscall m_FUN_1125b920(byte param_2); template<class... A> int m_FUN_1125b920(A...); void __thiscall m_FUN_1125ba00(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1125ba00(A...); undefined4 * __thiscall m_FUN_1125bcf0(undefined4 param_2); template<class... A> int m_FUN_1125bcf0(A...); undefined4 * __thiscall m_FUN_1125bd40(byte param_2); template<class... A> int m_FUN_1125bd40(A...); void __thiscall m_FUN_1125bf20(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1125bf20(A...); undefined4 * __thiscall m_FUN_1125cbb0(undefined4 *param_2); template<class... A> int m_FUN_1125cbb0(A...); void __thiscall m_FUN_1125cec0(undefined4 *param_2); template<class... A> int m_FUN_1125cec0(A...); void __thiscall m_FUN_1125cf20(undefined4 *param_2); template<class... A> int m_FUN_1125cf20(A...); undefined4 * __thiscall m_FUN_1125d870(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1125d870(A...); undefined4 * __thiscall m_FUN_1125d900(undefined4 param_2); template<class... A> int m_FUN_1125d900(A...); undefined4 * __thiscall m_FUN_1125d9f0(byte param_2); template<class... A> int m_FUN_1125d9f0(A...); undefined4 * __thiscall m_FUN_1125da40(byte param_2); template<class... A> int m_FUN_1125da40(A...); undefined4 * __thiscall m_FUN_1125da90(byte param_2); template<class... A> int m_FUN_1125da90(A...); undefined4 __thiscall m_FUN_1125dae0(byte param_2); template<class... A> int m_FUN_1125dae0(A...); void __thiscall m_FUN_11260f50(void *param_2,size_t param_3); template<class... A> int m_FUN_11260f50(A...); undefined4 * __thiscall m_FUN_11261f40(byte param_2); template<class... A> int m_FUN_11261f40(A...); void __thiscall m_FUN_11261fc0(undefined4 param_2); template<class... A> int m_FUN_11261fc0(A...); int __thiscall m_FUN_11262070(int param_2,int param_3); template<class... A> int m_FUN_11262070(A...); undefined1 * __thiscall m_FUN_11262300(undefined1 *param_2); template<class... A> int m_FUN_11262300(A...); undefined1 * __thiscall m_FUN_11262320(undefined1 *param_2); template<class... A> int m_FUN_11262320(A...); undefined4 * __thiscall m_FUN_11262460(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11262460(A...); undefined1 * __thiscall m_FUN_112626c0(undefined1 *param_2); template<class... A> int m_FUN_112626c0(A...); undefined1 * __thiscall m_FUN_112626e0(undefined1 *param_2); template<class... A> int m_FUN_112626e0(A...); bool __thiscall m_FUN_11262980(char *param_2); template<class... A> int m_FUN_11262980(A...); undefined1 __thiscall m_FUN_112629b0(char *param_2); template<class... A> int m_FUN_112629b0(A...); undefined1 __thiscall m_FUN_11262af0(char *param_2); template<class... A> int m_FUN_11262af0(A...); undefined4 * __thiscall m_FUN_11262bc0(byte param_2); template<class... A> int m_FUN_11262bc0(A...); undefined4 * __thiscall m_FUN_11262bf0(byte param_2); template<class... A> int m_FUN_11262bf0(A...); void __thiscall m_FUN_11262cc0(char param_2); template<class... A> int m_FUN_11262cc0(A...); void __thiscall m_FUN_11263260(undefined4 param_2,undefined4 param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_11263260(A...); bool __thiscall m_FUN_11263580(short *param_2); template<class... A> int m_FUN_11263580(A...); void __thiscall m_FUN_11264170(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11264170(A...); undefined4 * __thiscall m_FUN_11264740(undefined4 param_2); template<class... A> int m_FUN_11264740(A...); undefined4 * __thiscall m_FUN_11266450(undefined1 *param_2,undefined4 param_3); template<class... A> int m_FUN_11266450(A...); undefined4 * __thiscall m_FUN_11266490(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11266490(A...); undefined4 * __thiscall m_FUN_112668d0(byte param_2); template<class... A> int m_FUN_112668d0(A...); undefined4 * __thiscall m_FUN_11266900(byte param_2); template<class... A> int m_FUN_11266900(A...); undefined4 * __thiscall m_FUN_11266930(byte param_2); template<class... A> int m_FUN_11266930(A...); undefined4 __thiscall m_FUN_11266bd0(byte param_2); template<class... A> int m_FUN_11266bd0(A...); undefined4 * __thiscall m_FUN_11266cd0(byte param_2); template<class... A> int m_FUN_11266cd0(A...); undefined4 * __thiscall m_FUN_11266d20(byte param_2); template<class... A> int m_FUN_11266d20(A...); undefined4 * __thiscall m_FUN_11266d60(byte param_2); template<class... A> int m_FUN_11266d60(A...); undefined4 * __thiscall m_FUN_11266d90(byte param_2); template<class... A> int m_FUN_11266d90(A...); undefined4 __thiscall m_FUN_11268b60(undefined4 *param_2); template<class... A> int m_FUN_11268b60(A...); int __thiscall m_FUN_11268fa0(char param_2); template<class... A> int m_FUN_11268fa0(A...); void __thiscall m_FUN_11269ac0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); template<class... A> int m_FUN_11269ac0(A...); undefined4 __thiscall m_FUN_1126b940(uint param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1126b940(A...); undefined4 __thiscall m_FUN_1126bf80(int param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1126bf80(A...); uint __thiscall m_FUN_1126ca20(void *param_2,uint param_3); template<class... A> int m_FUN_1126ca20(A...); undefined4 __thiscall m_FUN_1126cb40(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1126cb40(A...); int __thiscall m_FUN_1126d3a0(uint *param_2); template<class... A> int m_FUN_1126d3a0(A...); undefined4 __thiscall m_FUN_1126e7b0(byte param_2); template<class... A> int m_FUN_1126e7b0(A...); undefined4 __thiscall m_FUN_1126e7e0(byte param_2); template<class... A> int m_FUN_1126e7e0(A...); void __thiscall m_FUN_11270240(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11270240(A...); void __thiscall m_FUN_112702b0(char *param_2); template<class... A> int m_FUN_112702b0(A...); undefined4 * __thiscall m_FUN_11270b00(byte param_2); template<class... A> int m_FUN_11270b00(A...); undefined4 * __thiscall m_FUN_11270b40(byte param_2); template<class... A> int m_FUN_11270b40(A...); undefined4 * __thiscall m_FUN_11272d50(byte param_2); template<class... A> int m_FUN_11272d50(A...); void __thiscall m_FUN_11273ef0(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_11273ef0(A...); undefined4 * __thiscall m_FUN_11274040(undefined1 param_2); template<class... A> int m_FUN_11274040(A...); undefined4 * __thiscall m_FUN_112740e0(undefined1 *param_2,undefined4 param_3); template<class... A> int m_FUN_112740e0(A...); undefined4 * __thiscall m_FUN_11274140(undefined4 param_2); template<class... A> int m_FUN_11274140(A...); undefined4 * __thiscall m_FUN_112741e0(byte param_2); template<class... A> int m_FUN_112741e0(A...); undefined4 * __thiscall m_FUN_11274230(byte param_2); template<class... A> int m_FUN_11274230(A...); undefined4 * __thiscall m_FUN_11274260(byte param_2); template<class... A> int m_FUN_11274260(A...); undefined4 * __thiscall m_FUN_11274290(byte param_2); template<class... A> int m_FUN_11274290(A...); undefined4 * __thiscall m_FUN_112742c0(byte param_2); template<class... A> int m_FUN_112742c0(A...); void __thiscall m_FUN_11274540(char *param_2); template<class... A> int m_FUN_11274540(A...); void __thiscall m_FUN_11274a70(char *param_2); template<class... A> int m_FUN_11274a70(A...); void __thiscall m_FUN_11275f20(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_11275f20(A...); undefined4 * __thiscall m_FUN_11276620(byte param_2); template<class... A> int m_FUN_11276620(A...); undefined4 * __thiscall m_FUN_112766b0(byte param_2); template<class... A> int m_FUN_112766b0(A...); undefined4 * __thiscall m_FUN_112766e0(byte param_2); template<class... A> int m_FUN_112766e0(A...); undefined4 * __thiscall m_FUN_11276710(byte param_2); template<class... A> int m_FUN_11276710(A...); void __thiscall m_FUN_11276dd0(int param_2,int param_3); template<class... A> int m_FUN_11276dd0(A...); undefined4 __thiscall m_FUN_11277f20(byte param_2); template<class... A> int m_FUN_11277f20(A...); undefined4 * __thiscall m_FUN_11277f50(byte param_2); template<class... A> int m_FUN_11277f50(A...); undefined4 * __thiscall m_FUN_11277f80(byte param_2); template<class... A> int m_FUN_11277f80(A...); void __thiscall m_FUN_11278b20(char *param_2); template<class... A> int m_FUN_11278b20(A...); int * __thiscall m_FUN_11279580(byte param_2); template<class... A> int m_FUN_11279580(A...); undefined4 * __thiscall m_FUN_11279650(byte param_2); template<class... A> int m_FUN_11279650(A...); undefined1 __thiscall m_FUN_1127a280(int param_2); template<class... A> int m_FUN_1127a280(A...); int __thiscall m_FUN_1127a400(int param_2); template<class... A> int m_FUN_1127a400(A...); undefined1 * __thiscall m_FUN_1127a510(uint param_2); template<class... A> int m_FUN_1127a510(A...); undefined1 __thiscall m_FUN_1127afa0(undefined4 *param_2,int param_3); template<class... A> int m_FUN_1127afa0(A...); void __thiscall m_FUN_1127b030(char *param_2,undefined4 param_3); template<class... A> int m_FUN_1127b030(A...); undefined4 * __thiscall m_FUN_1127d300(byte param_2); template<class... A> int m_FUN_1127d300(A...); undefined4 * __thiscall m_FUN_1127d330(byte param_2); template<class... A> int m_FUN_1127d330(A...); undefined4 * __thiscall m_FUN_1127d360(byte param_2); template<class... A> int m_FUN_1127d360(A...); undefined4 * __thiscall m_FUN_1127d390(byte param_2); template<class... A> int m_FUN_1127d390(A...); uint * __thiscall m_FUN_1127d780(uint param_2); template<class... A> int m_FUN_1127d780(A...); undefined4 __thiscall m_FUN_1127e3d0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_1127e3d0(A...); undefined4 __thiscall m_FUN_1127e3f0(int param_2); template<class... A> int m_FUN_1127e3f0(A...); undefined4 __thiscall m_FUN_1127e630(byte param_2); template<class... A> int m_FUN_1127e630(A...); undefined4 * __thiscall m_FUN_1127e660(byte param_2); template<class... A> int m_FUN_1127e660(A...); void __thiscall m_FUN_112801f0(undefined4 param_2); template<class... A> int m_FUN_112801f0(A...); void __thiscall m_FUN_11280230(undefined4 param_2); template<class... A> int m_FUN_11280230(A...); void __thiscall m_FUN_112802f0(int param_2); template<class... A> int m_FUN_112802f0(A...); int __thiscall m_FUN_11281670(undefined4 param_2); template<class... A> int m_FUN_11281670(A...); undefined4 __thiscall m_FUN_11281ab0(undefined4 param_2); template<class... A> int m_FUN_11281ab0(A...); undefined4 * __thiscall m_FUN_11281c90(byte param_2); template<class... A> int m_FUN_11281c90(A...); undefined4 * __thiscall m_FUN_11281cc0(byte param_2); template<class... A> int m_FUN_11281cc0(A...); undefined4 * __thiscall m_FUN_11281cf0(byte param_2); template<class... A> int m_FUN_11281cf0(A...); undefined4 * __thiscall m_FUN_11281d20(byte param_2); template<class... A> int m_FUN_11281d20(A...); undefined4 __thiscall m_FUN_11282d60(byte *param_2); template<class... A> int m_FUN_11282d60(A...); uint * __thiscall m_FUN_11282f20(uint param_2); template<class... A> int m_FUN_11282f20(A...); void __thiscall m_FUN_11283190(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11283190(A...); void __thiscall m_FUN_11283ad0(undefined2 param_2,undefined4 param_3); template<class... A> int m_FUN_11283ad0(A...); void __thiscall m_FUN_11283d00(undefined2 param_2,undefined4 param_3); template<class... A> int m_FUN_11283d00(A...); void __thiscall m_FUN_11283fc0(undefined2 param_2,undefined4 param_3); template<class... A> int m_FUN_11283fc0(A...); uint __thiscall m_FUN_112840c0(undefined2 param_2,undefined4 param_3); template<class... A> int m_FUN_112840c0(A...); uint __thiscall m_FUN_11284310(undefined2 param_2,undefined4 param_3); template<class... A> int m_FUN_11284310(A...); uint __thiscall m_FUN_11285720(undefined2 param_2,undefined4 param_3); template<class... A> int m_FUN_11285720(A...); undefined4 __thiscall m_FUN_11285850(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); template<class... A> int m_FUN_11285850(A...); undefined4 * __thiscall m_FUN_11285ad0(byte param_2); template<class... A> int m_FUN_11285ad0(A...); undefined4 * __thiscall m_FUN_11285b00(byte param_2); template<class... A> int m_FUN_11285b00(A...); undefined4 * __thiscall m_FUN_11285b30(byte param_2); template<class... A> int m_FUN_11285b30(A...); undefined4 * __thiscall m_FUN_11285b60(byte param_2); template<class... A> int m_FUN_11285b60(A...); void __thiscall m_FUN_11285e20(undefined4 param_2,undefined4 param_3,undefined1 param_4); template<class... A> int m_FUN_11285e20(A...); undefined4 * __thiscall m_FUN_11287900(byte param_2); template<class... A> int m_FUN_11287900(A...); undefined4 * __thiscall m_FUN_11287930(byte param_2); template<class... A> int m_FUN_11287930(A...); undefined4 * __thiscall m_FUN_11287960(byte param_2); template<class... A> int m_FUN_11287960(A...); undefined4 * __thiscall m_FUN_11287990(byte param_2); template<class... A> int m_FUN_11287990(A...); uint __thiscall m_FUN_112879c0(uint param_2,undefined4 param_3); template<class... A> int m_FUN_112879c0(A...); undefined4 * __thiscall m_FUN_11287ad0(byte param_2); template<class... A> int m_FUN_11287ad0(A...); undefined4 * __thiscall m_FUN_11287e20(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11287e20(A...); undefined4 __thiscall m_FUN_112882c0(undefined4 param_2); template<class... A> int m_FUN_112882c0(A...); undefined4 __thiscall m_FUN_11288300(undefined4 param_2); template<class... A> int m_FUN_11288300(A...); undefined4 * __thiscall m_FUN_11289300(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11289300(A...); undefined4 * __thiscall m_FUN_11289350(byte param_2); template<class... A> int m_FUN_11289350(A...); void __thiscall m_FUN_112893b0(void *param_2,uint *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_112893b0(A...); undefined4 __thiscall m_FUN_11289400(uint param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_11289400(A...); uint __thiscall m_FUN_11289420(uint param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_11289420(A...); int __thiscall m_FUN_11289440(int param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_11289440(A...); undefined4 __thiscall m_FUN_1128ae90(byte param_2); template<class... A> int m_FUN_1128ae90(A...); undefined4 __thiscall m_FUN_1128aec0(byte param_2); template<class... A> int m_FUN_1128aec0(A...); undefined4 * __thiscall m_FUN_1128aef0(byte param_2); template<class... A> int m_FUN_1128aef0(A...); int __thiscall m_FUN_1128af70(int param_2); template<class... A> int m_FUN_1128af70(A...); int __thiscall m_FUN_1128af90(int param_2); template<class... A> int m_FUN_1128af90(A...); void __thiscall m_FUN_1128c350(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1128c350(A...); undefined4 __thiscall m_FUN_1128df20(byte param_2); template<class... A> int m_FUN_1128df20(A...); undefined4 * __thiscall m_FUN_1128f0b0(byte param_2); template<class... A> int m_FUN_1128f0b0(A...); undefined4 * __thiscall m_FUN_1128f120(byte param_2); template<class... A> int m_FUN_1128f120(A...); undefined4 * __thiscall m_FUN_1128f170(byte param_2); template<class... A> int m_FUN_1128f170(A...); undefined4 * __thiscall m_FUN_1128f1c0(byte param_2); template<class... A> int m_FUN_1128f1c0(A...); undefined4 * __thiscall m_FUN_1128f210(byte param_2); template<class... A> int m_FUN_1128f210(A...); undefined4 * __thiscall m_FUN_1128f260(byte param_2); template<class... A> int m_FUN_1128f260(A...); undefined4 * __thiscall m_FUN_1128f390(byte param_2); template<class... A> int m_FUN_1128f390(A...); undefined4 * __thiscall m_FUN_1128faf0(byte param_2); template<class... A> int m_FUN_1128faf0(A...); undefined4 * __thiscall m_FUN_11291db0(int *param_2); template<class... A> int m_FUN_11291db0(A...); undefined4 * __thiscall m_FUN_11291df0(int *param_2); template<class... A> int m_FUN_11291df0(A...); int __thiscall m_FUN_112928f0(int param_2,int param_3); template<class... A> int m_FUN_112928f0(A...); undefined4 * __thiscall m_FUN_11292b50(byte param_2); template<class... A> int m_FUN_11292b50(A...); void __thiscall m_FUN_11292f20(byte param_2); template<class... A> int m_FUN_11292f20(A...); undefined4 * __thiscall m_FUN_11292ff0(byte param_2); template<class... A> int m_FUN_11292ff0(A...); undefined4 __thiscall m_FUN_11293030(byte param_2); template<class... A> int m_FUN_11293030(A...); undefined4 * __thiscall m_FUN_112937c0(undefined4 param_2); template<class... A> int m_FUN_112937c0(A...); undefined4 * __thiscall m_FUN_11293810(byte param_2); template<class... A> int m_FUN_11293810(A...); bool __thiscall m_FUN_112938b0(long param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_112938b0(A...); bool __thiscall m_FUN_112938e0(long param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_112938e0(A...); undefined4 * __thiscall m_FUN_112949a0(int param_2,undefined4 param_3); template<class... A> int m_FUN_112949a0(A...); undefined4 * __thiscall m_FUN_11297bb0(byte param_2); template<class... A> int m_FUN_11297bb0(A...); undefined4 __thiscall m_FUN_11297be0(byte param_2); template<class... A> int m_FUN_11297be0(A...); undefined4 __thiscall m_FUN_11297c10(byte param_2); template<class... A> int m_FUN_11297c10(A...); void __thiscall m_FUN_11297f70(int param_2); template<class... A> int m_FUN_11297f70(A...); int __thiscall m_FUN_11297f90(undefined4 param_2,ushort param_3); template<class... A> int m_FUN_11297f90(A...); undefined4 * __thiscall m_FUN_11299710(byte param_2); template<class... A> int m_FUN_11299710(A...); undefined4 * __thiscall m_FUN_1129c130(undefined4 *param_2); template<class... A> int m_FUN_1129c130(A...); undefined4 * __thiscall m_FUN_1129cdc0(byte param_2); template<class... A> int m_FUN_1129cdc0(A...); undefined4 * __thiscall m_FUN_1129db40(byte param_2); template<class... A> int m_FUN_1129db40(A...); };

extern __declspec(dllimport) int CloseHandle(...);
extern __declspec(dllimport) int CreateEventA(...);
extern __declspec(dllimport) int CreateMutexA(...);
extern __declspec(dllimport) int DeleteCriticalSection(...);
extern int FUN_1003d5d7(...);
extern int FUN_100487ed(...);
extern int FUN_1005a7b3(...);
extern int FUN_10065348(...);
extern int FUN_10070892(...);
extern int FUN_1007d574(...);
extern int FUN_1008b877(...);
extern int FUN_11124310(...);
extern int FUN_111af730(...);
extern int FUN_111b15e0(...);
extern int FUN_111b1900(...);
extern int FUN_111c0400(...);
extern int FUN_11261ab0(...);
extern int FUN_112a8970(...);
extern int FUN_112a9570(...);
extern int FUN_112a9f40(...);
extern int FUN_112afbd0(...);
extern __declspec(dllimport) int FindClose(...);
extern __declspec(dllimport) int FindNextFileW(...);
extern int LOCK(...);
extern __declspec(dllimport) int Ordinal_10(...);
extern __declspec(dllimport) int Ordinal_115(...);
extern __declspec(dllimport) int Ordinal_12(...);
extern __declspec(dllimport) int Ordinal_22(...);
extern __declspec(dllimport) int Ordinal_23(...);
extern __declspec(dllimport) int Ordinal_3(...);
extern __declspec(dllimport) int Ordinal_8(...);
extern __declspec(dllimport) int ReleaseMutex(...);
extern __declspec(dllimport) int ReleaseSemaphore(...);
extern __declspec(dllimport) int ResetEvent(...);
extern __declspec(dllimport) int SetEvent(...);
extern __declspec(dllimport) int SetTimer(...);
extern int UNLOCK(...);
extern __declspec(dllimport) int WSACreateEvent(...);
extern __declspec(dllimport) int WaitForSingleObject(...);
extern __declspec(dllimport) int _CxxThrowException(...);
extern __declspec(dllimport) int __acrt_iob_func(...);
extern __declspec(dllimport) int __std_exception_copy(...);
extern __declspec(dllimport) int __std_exception_destroy(...);
extern __declspec(dllimport) int __stdio_common_vfprintf(...);
extern __declspec(dllimport) int __stdio_common_vsprintf(...);
extern __declspec(dllimport) int __stdio_common_vsscanf(...);
extern __declspec(dllimport) int _close(...);
extern int _eh_vector_constructor_iterator_(...);
extern __declspec(dllimport) int _errno(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _isnan(...);
extern __declspec(dllimport) int _lseek(...);
extern __declspec(dllimport) int _strdup(...);
extern __declspec(dllimport) int _time64(...);
extern int doWork(...);
extern __declspec(dllimport) int exit(...);
extern __declspec(dllimport) int fclose(...);
extern __declspec(dllimport) int inet_ntop(...);
extern __declspec(dllimport) int isalpha(...);
extern __declspec(dllimport) int isdigit(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern __declspec(dllimport) int strchr(...);
extern __declspec(dllimport) int strncmp(...);
extern __declspec(dllimport) int strnlen(...);
extern __declspec(dllimport) int strrchr(...);
extern __declspec(dllimport) int strtol(...);
extern __declspec(dllimport) int strtoul(...);
template<class... A> int __stdcall thunk_FUN_10118c40(A...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a6c80(...);
extern int thunk_FUN_101b9120(...);
extern int thunk_FUN_101b9160(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101ba530(...);
extern int thunk_FUN_101badc0(...);
extern int thunk_FUN_101c3fc0(...);
extern int thunk_FUN_102a2fd0(...);
extern int thunk_FUN_10ba6fd0(...);
template<class... A> int __stdcall thunk_FUN_10bf66a0(A...);
extern int thunk_FUN_10bf6a10(...);
extern int thunk_FUN_10bfb3d0(...);
extern int thunk_FUN_10e460f0(...);
extern int thunk_FUN_1106a250(...);
extern int thunk_FUN_1106a270(...);
extern int thunk_FUN_1106a8d0(...);
extern int thunk_FUN_1106b190(...);
extern int thunk_FUN_1106b1c0(...);
extern int thunk_FUN_1106b260(...);
extern int thunk_FUN_110721b0(...);
template<class... A> int __stdcall thunk_FUN_1107e1f0(A...);
template<class... A> int __stdcall thunk_FUN_1107e200(A...);
extern int thunk_FUN_1107e550(...);
extern int thunk_FUN_110828b0(...);
template<class... A> int __stdcall thunk_FUN_11095e00(A...);
template<class... A> int __stdcall thunk_FUN_11095e10(A...);
template<class... A> int __stdcall thunk_FUN_11096350(A...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_1109de60(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110adac0(...);
extern int thunk_FUN_110ae4a0(...);
extern int thunk_FUN_110b0460(...);
extern int thunk_FUN_110c2c60(...);
extern int thunk_FUN_110cb560(...);
extern int thunk_FUN_110cb840(...);
extern int thunk_FUN_110ce370(...);
extern int thunk_FUN_110cead0(...);
extern int thunk_FUN_110d3140(...);
extern int thunk_FUN_110d3ac0(...);
extern int thunk_FUN_110d55a0(...);
extern int thunk_FUN_110d5760(...);
extern int thunk_FUN_110d5780(...);
extern int thunk_FUN_110f9770(...);
extern int thunk_FUN_110facf0(...);
extern int thunk_FUN_11102ee0(...);
extern int thunk_FUN_111084f0(...);
extern int thunk_FUN_11108ca0(...);
extern int thunk_FUN_11108d30(...);
extern int thunk_FUN_1110b4d0(...);
extern int thunk_FUN_1110b940(...);
extern int thunk_FUN_11111ca0(...);
extern int thunk_FUN_11115d10(...);
extern int thunk_FUN_111191d0(...);
extern int thunk_FUN_11119580(...);
extern int thunk_FUN_11119940(...);
extern int thunk_FUN_11119c00(...);
extern int thunk_FUN_11119cb0(...);
extern int thunk_FUN_1111c700(...);
template<class... A> int __stdcall thunk_FUN_1111cb60(A...);
extern int thunk_FUN_1111cd70(...);
extern int thunk_FUN_1111cf00(...);
extern int thunk_FUN_1111d190(...);
extern int thunk_FUN_1111de10(...);
template<class... A> int __stdcall thunk_FUN_1111e210(A...);
extern int thunk_FUN_1111f4b0(...);
extern int thunk_FUN_11123c70(...);
extern int thunk_FUN_11126050(...);
extern int thunk_FUN_11128570(...);
extern int thunk_FUN_11128910(...);
extern int thunk_FUN_1112a730(...);
extern int thunk_FUN_1112b330(...);
extern int thunk_FUN_11131580(...);
extern int thunk_FUN_11133a40(...);
extern int thunk_FUN_1113af60(...);
extern int thunk_FUN_1113b2a0(...);
extern int thunk_FUN_1113e6f0(...);
extern int thunk_FUN_1113f0e0(...);
template<class... A> int __stdcall thunk_FUN_1113f590(A...);
template<class... A> int __stdcall thunk_FUN_111401c0(A...);
template<class... A> int __stdcall thunk_FUN_11140420(A...);
extern int thunk_FUN_11142290(...);
extern int thunk_FUN_111446b0(...);
extern int thunk_FUN_11148fb0(...);
extern int thunk_FUN_111491e0(...);
template<class... A> int __stdcall thunk_FUN_1114d110(A...);
extern int thunk_FUN_1114ef60(...);
extern int thunk_FUN_1114f320(...);
extern int thunk_FUN_1114f3e0(...);
extern int thunk_FUN_11152e70(...);
template<class... A> int __stdcall thunk_FUN_11155f40(A...);
template<class... A> int __stdcall thunk_FUN_11156160(A...);
template<class... A> int __stdcall thunk_FUN_11156310(A...);
template<class... A> int __stdcall thunk_FUN_111564a0(A...);
template<class... A> int __stdcall thunk_FUN_11156630(A...);
template<class... A> int __stdcall thunk_FUN_111567c0(A...);
template<class... A> int __stdcall thunk_FUN_111569a0(A...);
template<class... A> int __stdcall thunk_FUN_11156b30(A...);
template<class... A> int __stdcall thunk_FUN_11156cc0(A...);
template<class... A> int __stdcall thunk_FUN_11156e50(A...);
template<class... A> int __stdcall thunk_FUN_11156fe0(A...);
template<class... A> int __stdcall thunk_FUN_11157170(A...);
template<class... A> int __stdcall thunk_FUN_11157300(A...);
template<class... A> int __stdcall thunk_FUN_11157490(A...);
template<class... A> int __stdcall thunk_FUN_11157620(A...);
template<class... A> int __stdcall thunk_FUN_111577b0(A...);
template<class... A> int __stdcall thunk_FUN_11157940(A...);
extern int thunk_FUN_11157af0(...);
extern int thunk_FUN_1115c410(...);
extern int thunk_FUN_1115c4e0(...);
extern int thunk_FUN_1115cfe0(...);
extern int thunk_FUN_1115e1f0(...);
extern int thunk_FUN_1115ed60(...);
extern int thunk_FUN_11160050(...);
template<class... A> int __stdcall thunk_FUN_11160980(A...);
template<class... A> int __stdcall thunk_FUN_11160b70(A...);
extern int thunk_FUN_11162c00(...);
extern int thunk_FUN_11165d70(...);
extern int thunk_FUN_11167180(...);
extern int thunk_FUN_11169070(...);
extern int thunk_FUN_11169ca0(...);
extern int thunk_FUN_11169d70(...);
template<class... A> int __stdcall thunk_FUN_11169f40(A...);
extern int thunk_FUN_1116b2f0(...);
extern int thunk_FUN_1116e480(...);
extern int thunk_FUN_111704f0(...);
extern int thunk_FUN_111705c0(...);
extern int thunk_FUN_11172590(...);
extern int thunk_FUN_11175760(...);
extern int thunk_FUN_11175770(...);
extern int thunk_FUN_11175fe0(...);
extern int thunk_FUN_11176190(...);
extern int thunk_FUN_111761d0(...);
extern int thunk_FUN_11177120(...);
extern int thunk_FUN_11178510(...);
extern int thunk_FUN_111785d0(...);
template<class... A> int __stdcall thunk_FUN_11179750(A...);
template<class... A> int __stdcall thunk_FUN_11179840(A...);
extern int thunk_FUN_11179930(...);
extern int thunk_FUN_11179a20(...);
extern int thunk_FUN_11179a70(...);
template<class... A> int __stdcall thunk_FUN_11179c30(A...);
extern int thunk_FUN_11179ca0(...);
extern int thunk_FUN_11179d10(...);
extern int thunk_FUN_11179d80(...);
extern int thunk_FUN_11179de0(...);
extern int thunk_FUN_11180420(...);
extern int thunk_FUN_11180720(...);
extern int thunk_FUN_11180a30(...);
extern int thunk_FUN_111879d0(...);
template<class... A> int __stdcall thunk_FUN_1118b510(A...);
extern int thunk_FUN_1118b7b0(...);
extern int thunk_FUN_1118d4f0(...);
extern int thunk_FUN_1118dfd0(...);
extern int thunk_FUN_1118ec30(...);
extern int thunk_FUN_1118ee50(...);
extern int thunk_FUN_11191b90(...);
extern int thunk_FUN_11192d60(...);
extern int thunk_FUN_11199b90(...);
extern int thunk_FUN_11199df0(...);
template<class... A> int __stdcall thunk_FUN_1119ad30(A...);
extern int thunk_FUN_1119b010(...);
extern int thunk_FUN_111a0940(...);
template<class... A> int __stdcall thunk_FUN_111a1a50(A...);
template<class... A> int __stdcall thunk_FUN_111a2370(A...);
extern int thunk_FUN_111a32a0(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_111a3ca0(...);
template<class... A> int __stdcall thunk_FUN_111a4170(A...);
extern int thunk_FUN_111a42a0(...);
extern int thunk_FUN_111a45e0(...);
extern int thunk_FUN_111a4830(...);
extern int thunk_FUN_111a4bc0(...);
extern int thunk_FUN_111a4f00(...);
extern int thunk_FUN_111a5000(...);
extern int thunk_FUN_111a5430(...);
template<class... A> int __stdcall thunk_FUN_111a5f10(A...);
extern int thunk_FUN_111a6260(...);
template<class... A> int __stdcall thunk_FUN_111a66c0(A...);
extern int thunk_FUN_111a6a30(...);
extern int thunk_FUN_111a6f10(...);
extern int thunk_FUN_111a7100(...);
extern int thunk_FUN_111a7300(...);
extern int thunk_FUN_111a74d0(...);
extern int thunk_FUN_111a7590(...);
extern int thunk_FUN_111a7800(...);
extern int thunk_FUN_111a7a50(...);
extern int thunk_FUN_111a8370(...);
extern int thunk_FUN_111a86c0(...);
extern int thunk_FUN_111a8780(...);
extern int thunk_FUN_111a8920(...);
extern int thunk_FUN_111a8930(...);
extern int thunk_FUN_111af700(...);
extern int thunk_FUN_111bdc10(...);
extern int thunk_FUN_111be320(...);
extern int thunk_FUN_111bed40(...);
extern int thunk_FUN_111bf230(...);
extern int thunk_FUN_111bf320(...);
extern int thunk_FUN_111bfa10(...);
extern int thunk_FUN_111bfa50(...);
extern int thunk_FUN_111bfeb0(...);
extern int thunk_FUN_111c0040(...);
extern int thunk_FUN_111c0070(...);
extern int thunk_FUN_111c0380(...);
extern int thunk_FUN_111c03c0(...);
template<class... A> int __stdcall thunk_FUN_111c0af0(A...);
extern int thunk_FUN_111c1530(...);
template<class... A> int __stdcall thunk_FUN_111c1810(A...);
extern int thunk_FUN_111c1d40(...);
extern int thunk_FUN_111c25c0(...);
extern int thunk_FUN_111c29a0(...);
extern int thunk_FUN_111c2c00(...);
extern int thunk_FUN_111c3d40(...);
extern int thunk_FUN_111c7970(...);
template<class... A> int __stdcall thunk_FUN_111c7b30(A...);
extern int thunk_FUN_111c7e10(...);
extern int thunk_FUN_111c7eb0(...);
extern int thunk_FUN_111c7f50(...);
extern int thunk_FUN_111c8050(...);
extern int thunk_FUN_111c80d0(...);
template<class... A> int __stdcall thunk_FUN_111c8350(A...);
template<class... A> int __stdcall thunk_FUN_111c85c0(A...);
template<class... A> int __stdcall thunk_FUN_111c87b0(A...);
extern int thunk_FUN_111c8f80(...);
extern int thunk_FUN_111c9000(...);
extern int thunk_FUN_111d0010(...);
extern int thunk_FUN_111d2fc0(...);
extern int thunk_FUN_111d34c0(...);
extern int thunk_FUN_111d35e0(...);
extern int thunk_FUN_111d38f0(...);
extern int thunk_FUN_111d3ae0(...);
extern int thunk_FUN_111d3d00(...);
template<class... A> int __stdcall thunk_FUN_111df3d0(A...);
extern int thunk_FUN_111e7a30(...);
extern int thunk_FUN_111e8d70(...);
extern int thunk_FUN_111e9460(...);
extern int thunk_FUN_111f1980(...);
template<class... A> int __stdcall thunk_FUN_111f2a80(A...);
extern int thunk_FUN_111f4960(...);
extern int thunk_FUN_111f6c30(...);
extern int thunk_FUN_111fc270(...);
extern int thunk_FUN_111feb50(...);
extern int thunk_FUN_111fed00(...);
extern int thunk_FUN_11202480(...);
extern int thunk_FUN_11202570(...);
extern int thunk_FUN_11202590(...);
extern int thunk_FUN_11203e10(...);
extern int thunk_FUN_1122b5e0(...);
extern int thunk_FUN_1122e450(...);
extern int thunk_FUN_1122e970(...);
extern int thunk_FUN_11231440(...);
template<class... A> int __stdcall thunk_FUN_112334a0(A...);
extern int thunk_FUN_112341b0(...);
extern int thunk_FUN_11234290(...);
extern int thunk_FUN_11235fb0(...);
extern int thunk_FUN_112368f0(...);
extern int thunk_FUN_11237dd0(...);
template<class... A> int __stdcall thunk_FUN_11238060(A...);
extern int thunk_FUN_1123a320(...);
template<class... A> int __stdcall thunk_FUN_1123a890(A...);
template<class... A> int __stdcall thunk_FUN_1123bf80(A...);
template<class... A> int __stdcall thunk_FUN_1123ec80(A...);
template<class... A> int __stdcall thunk_FUN_1123ecd0(A...);
extern int thunk_FUN_1123ef30(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_1123fe90(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11240850(...);
template<class... A> int __stdcall thunk_FUN_11240be0(A...);
template<class... A> int __stdcall thunk_FUN_11240cc0(A...);
extern int thunk_FUN_11241d50(...);
extern int thunk_FUN_11241dd0(...);
extern int thunk_FUN_11241ee0(...);
extern int thunk_FUN_11242b50(...);
extern int thunk_FUN_11242dd0(...);
extern int thunk_FUN_11243220(...);
extern int thunk_FUN_11244d80(...);
extern int thunk_FUN_11244ee0(...);
extern int thunk_FUN_11245770(...);
extern int thunk_FUN_11245d70(...);
extern int thunk_FUN_11246370(...);
extern int thunk_FUN_112470f0(...);
extern int thunk_FUN_11247c50(...);
extern int thunk_FUN_11247e90(...);
extern int thunk_FUN_11247ed0(...);
extern int thunk_FUN_11248330(...);
extern int thunk_FUN_11248b40(...);
template<class... A> int __stdcall thunk_FUN_11249230(A...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124ae40(...);
extern int thunk_FUN_1124c8a0(...);
template<class... A> int __stdcall thunk_FUN_1124cc10(A...);
extern int thunk_FUN_1124d050(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124eb30(...);
extern int thunk_FUN_1124ebd0(...);
extern int thunk_FUN_1124ecb0(...);
extern int thunk_FUN_1124eda0(...);
extern int thunk_FUN_1124ee40(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124efc0(...);
extern int thunk_FUN_1124f0e0(...);
extern int thunk_FUN_1124f190(...);
extern int thunk_FUN_1124fdc0(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_112503c0(...);
extern int thunk_FUN_112505b0(...);
extern int thunk_FUN_11250a70(...);
extern int thunk_FUN_11253c70(...);
extern int thunk_FUN_11259410(...);
extern int thunk_FUN_1125a250(...);
extern int thunk_FUN_1125acd0(...);
template<class... A> int __stdcall thunk_FUN_1125b030(A...);
extern int thunk_FUN_1125b880(...);
extern int thunk_FUN_1125d9d0(...);
extern int thunk_FUN_1125de40(...);
extern int thunk_FUN_1125f590(...);
extern int thunk_FUN_112611c0(...);
extern int thunk_FUN_11261f10(...);
extern int thunk_FUN_11261fc0(...);
extern int thunk_FUN_112624a0(...);
template<class... A> int __stdcall thunk_FUN_11262a60(A...);
extern int thunk_FUN_112637d0(...);
extern int thunk_FUN_11265ef0(...);
extern int thunk_FUN_112665b0(...);
extern int thunk_FUN_11266700(...);
extern int thunk_FUN_11269bc0(...);
extern int thunk_FUN_1126b0a0(...);
extern int thunk_FUN_1126d350(...);
extern int thunk_FUN_1126d6d0(...);
extern int thunk_FUN_1126e330(...);
extern int thunk_FUN_11270ae0(...);
extern int thunk_FUN_11272de0(...);
extern int thunk_FUN_11273f80(...);
extern int thunk_FUN_112741c0(...);
extern int thunk_FUN_112741d0(...);
extern int thunk_FUN_112743a0(...);
extern int thunk_FUN_112747a0(...);
extern int thunk_FUN_11274880(...);
extern int thunk_FUN_11274a70(...);
extern int thunk_FUN_112752d0(...);
template<class... A> int __stdcall thunk_FUN_11275f40(A...);
extern int thunk_FUN_11276000(...);
extern int thunk_FUN_1127a020(...);
extern int thunk_FUN_1127a510(...);
extern int thunk_FUN_1127ac70(...);
extern int thunk_FUN_1127af20(...);
template<class... A> int __stdcall thunk_FUN_1127bbb0(A...);
extern int thunk_FUN_1127c4e0(...);
extern int thunk_FUN_1127c6b0(...);
extern int thunk_FUN_1127ca70(...);
extern int thunk_FUN_1127e5b0(...);
extern int thunk_FUN_1127fa70(...);
extern int thunk_FUN_112816c0(...);
extern int thunk_FUN_112818d0(...);
extern int thunk_FUN_11281f90(...);
extern int thunk_FUN_11282620(...);
template<class... A> int __stdcall thunk_FUN_11284370(A...);
extern int thunk_FUN_11285a90(...);
extern int thunk_FUN_11285aa0(...);
extern int thunk_FUN_11285ab0(...);
extern int thunk_FUN_11285d80(...);
extern int thunk_FUN_11286500(...);
extern int thunk_FUN_112869b0(...);
extern int thunk_FUN_11286ff0(...);
extern int thunk_FUN_11287860(...);
extern int thunk_FUN_11287870(...);
extern int thunk_FUN_11287890(...);
extern int thunk_FUN_112878c0(...);
extern int thunk_FUN_112878d0(...);
extern int thunk_FUN_112878e0(...);
extern int thunk_FUN_11287ac0(...);
extern int thunk_FUN_1128c260(...);
extern int thunk_FUN_1128f080(...);
extern int thunk_FUN_1128f0a0(...);
extern int thunk_FUN_1128f0f0(...);
extern int thunk_FUN_1128f110(...);
extern int thunk_FUN_1128f160(...);
extern int thunk_FUN_1128f1b0(...);
extern int thunk_FUN_1128f200(...);
extern int thunk_FUN_1128f250(...);
extern int thunk_FUN_1128f6e0(...);
extern int thunk_FUN_11293bf0(...);
extern int thunk_FUN_112942e0(...);
extern int thunk_FUN_11294d60(...);
extern int thunk_FUN_11295de0(...);
extern int thunk_FUN_112960d0(...);
extern int thunk_FUN_11296ca0(...);
extern int thunk_FUN_11297ec0(...);
extern int thunk_FUN_11298310(...);
extern int thunk_FUN_112983c0(...);
extern int thunk_FUN_11298430(...);
extern int thunk_FUN_11299700(...);
extern int thunk_FUN_1129b3f0(...);
extern int thunk_FUN_1129e0d0(...);
extern int thunk_FUN_1129e450(...);
extern int thunk_FUN_1129e4e0(...);
extern int thunk_FUN_1129e510(...);
extern int thunk_FUN_1129e530(...);
extern int thunk_FUN_1129e690(...);
extern int thunk_FUN_1129e790(...);
extern int thunk_FUN_1129e920(...);
extern int thunk_FUN_1129ec00(...);
extern int thunk_FUN_1129fa70(...);
extern int thunk_FUN_1129fc20(...);
extern int thunk_FUN_112a0b40(...);
extern int thunk_FUN_112a2890(...);
extern int thunk_FUN_112a2b10(...);
extern int thunk_FUN_112a7b20(...);
extern int thunk_FUN_112a7c30(...);
extern int thunk_FUN_112a7c70(...);
extern int thunk_FUN_112a7da0(...);
extern int thunk_FUN_112a7ee0(...);
extern int thunk_FUN_112a7f20(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112a8040(...);
extern int thunk_FUN_112a82d0(...);
extern int thunk_FUN_112a9190(...);
extern int thunk_FUN_112a95e0(...);
extern int thunk_FUN_112a9690(...);
extern int thunk_FUN_112a9770(...);
extern int thunk_FUN_112a9cf0(...);
extern int thunk_FUN_112a9da0(...);
extern int thunk_FUN_112aa2e0(...);
extern int thunk_FUN_112aa310(...);
extern int thunk_FUN_112ac820(...);
extern int thunk_FUN_112af420(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_112afbd0(...);
extern int thunk_FUN_112b0270(...);
extern int thunk_FUN_112c35f0(...);
extern int thunk_FUN_112c6c00(...);
extern int thunk_FUN_112c7e70(...);
extern int thunk_FUN_112c8b80(...);
extern int thunk_FUN_112c8e00(...);
extern int thunk_FUN_112ea860(...);
extern int thunk_FUN_112eeea0(...);
extern int thunk_FUN_112ef180(...);
extern int thunk_FUN_112effc0(...);
extern int thunk_FUN_113b9ec0(...);
extern int thunk_FUN_113beaf0(...);
extern int thunk_FUN_113bfb20(...);
extern int thunk_FUN_113c41f0(...);
extern int thunk_FUN_113c7de0(...);
extern int thunk_FUN_113c7f60(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_113cfe50(...);
extern int thunk_FUN_113d2fb0(...);
extern int thunk_FUN_113d3650(...);
extern int thunk_FUN_113d47d0(...);
extern int thunk_FUN_113d6b60(...);
extern int thunk_FUN_113dada0(...);
extern int thunk_FUN_113daff0(...);
extern int thunk_FUN_113db5a0(...);
extern int thunk_FUN_113e2f30(...);
extern int thunk_FUN_113e99b0(...);
extern int thunk_FUN_11408fc0(...);
extern int thunk_FUN_1145ad70(...);
extern int thunk_FUN_1145c1b0(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145c460(...);
extern int thunk_FUN_1145c720(...);
extern int thunk_FUN_1145c930(...);
extern int thunk_FUN_1145d560(...);
extern int thunk_FUN_1145ddd0(...);
extern int thunk_FUN_1145de30(...);
extern int thunk_FUN_1145e260(...);
extern int thunk_FUN_1145e270(...);
extern int thunk_FUN_1145e290(...);
extern int thunk_FUN_1145eb60(...);
extern int thunk_FUN_1145ed60(...);
extern int thunk_FUN_1145f8f0(...);
extern int thunk_FUN_1145f900(...);
extern int thunk_FUN_1145f920(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148b586(...);
extern int thunk_FUN_1148b596(...);
extern int DAT_1186d2ee;
extern int DAT_1187b728;
extern int DAT_11881128;
extern int DAT_11882ff0;
extern int DAT_11884800;
extern int DAT_118850bc;
extern int DAT_118872b8;
extern int DAT_118872bc;
extern int DAT_118872c0;
extern int DAT_1188a1d4;
extern int DAT_1188bc94;
extern int DAT_1188db18;
extern int DAT_1188f3d4;
extern int DAT_11892e78;
extern int DAT_1189dca4;
extern int DAT_118a1550;
extern int DAT_1191eafc;
extern int DAT_119361e4;
extern int DAT_119361e8;
extern int DAT_1194bf40;
extern int DAT_119c9c20;
extern int DAT_119cacd8;
extern int DAT_119caf78;
extern int DAT_119cd1a8;
extern int DAT_119cd1ac;
extern int DAT_119cd1b0;
extern int DAT_119cd1b4;
extern int DAT_119cd1b8;
extern int DAT_119d00b0;
extern int DAT_119d25d0;
extern int DAT_119d7b20;
extern int DAT_119df2d0;
extern int DAT_119e0b2c;
extern int DAT_119e73b4;
extern int DAT_119e7b58;
extern int DAT_11c03b9c;
extern int DAT_11c03cec;
extern int DAT_11c03cf0;
extern int DAT_1205bd78;
extern int DAT_1205ce40;
extern int DAT_12121d88;
extern int DAT_12126b84;
extern int DAT_122e8a1c;
extern int DAT_122e8a20;
extern int DAT_122e8a24;
extern int DAT_122e8a28;
extern int DAT_122e8a2c;
extern int DAT_122e8a34;
extern int DAT_122e8a44;
extern int DAT_122e8a48;
extern int DAT_122e8a50;
extern int DAT_122e8a94;
extern int DAT_122e8adc;
extern int DAT_122e8b20;
extern int DAT_122e8b30;
extern int DAT_122e8b50;
extern int DAT_122e8b78;
extern int DAT_122e8c38;
extern int DAT_122e8cf8;
extern int DAT_122f55fc;
extern int DAT_122f5600;
extern int DAT_122f5650;
extern int DAT_122f5674;
extern int DAT_122f57d4;
extern int DAT_122f57d8;
extern int DAT_122f5800;
extern int DAT_122f5838;
extern int DAT_122f583c;
extern int DAT_122f583d;
extern int DAT_122f5d94;
extern int DAT_122f5d98;
extern int DAT_122f5de0;
extern int DAT_122f5df4;
extern int DAT_122f5df8;
extern int DAT_122f5dfc;
extern int DAT_122f5e00;
extern int DAT_122f6970;
extern int DAT_122f6978;
extern int DAT_122f697c;
extern int DAT_122f6984;
extern int DAT_122f6b7c;
extern int DAT_122f6b80;
extern int DAT_122f6bd8;
extern int DAT_122f6bdc;
extern int DAT_122fb060;
extern int DAT_122fb090;
extern int DAT_122fb0a0;
extern int _UNK_118a1554;
extern int _UNK_119d7b28;
extern int _UNK_119df2d4;
extern int _UNK_119df2d8;
extern int _UNK_119df2dc;
extern int ghidra_vftable_CertvalStats;
extern int ghidra_vftable_ChunkLengthParser;
extern int ghidra_vftable_DoublyLinkedListNode;
extern int ghidra_vftable_MusicPlaybackQuality;
extern int ghidra_vftable_RACListCallback;
extern int ghidra_vftable_RACListProcessor;
extern int ghidra_vftable_RAVTransport;
extern int ghidra_vftable_RAesDecoder;
extern int ghidra_vftable_RAesEncoder;
extern int ghidra_vftable_RAlarmClock;
extern int ghidra_vftable_RAlarmClockListAlarms;
extern int ghidra_vftable_RAsyncNullIOSession;
extern int ghidra_vftable_RAsyncSocketIOSession;
extern int ghidra_vftable_RAudioIn;
extern int ghidra_vftable_RBrowseChildIterator;
extern int ghidra_vftable_RBrowseContentProvider;
extern int ghidra_vftable_RCDBrowseCallback;
extern int ghidra_vftable_RCDBrowseProcessor;
extern int ghidra_vftable_RCDBrowsePropNameTranslator;
extern int ghidra_vftable_RCDUpdateProcessor;
extern int ghidra_vftable_RCPValidateOperation;
extern int ghidra_vftable_RCRCustomParamRX;
extern int ghidra_vftable_RCRInParam;
extern int ghidra_vftable_RCRInParamDeepCopy;
extern int ghidra_vftable_RCROutParam;
extern int ghidra_vftable_RCROutParamShallowCopy;
extern int ghidra_vftable_RCRResultParser;
extern int ghidra_vftable_RCRStreamParamRX;
extern int ghidra_vftable_RCRStreamParamTX;
extern int ghidra_vftable_RCRStringEmitter;
extern int ghidra_vftable_RChunkedSocketWriter;
extern int ghidra_vftable_RCompoundAsyncIOOperation;
extern int ghidra_vftable_RConnectionManager;
extern int ghidra_vftable_RContentKeyParam;
extern int ghidra_vftable_RContentProvider;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RCountWritableStream;
extern int ghidra_vftable_RDIDLResponse;
extern int ghidra_vftable_RDeviceDiscoveryCallback;
extern int ghidra_vftable_RDeviceXMLParser;
extern int ghidra_vftable_REncryptedDataDecoder;
extern int ghidra_vftable_REncryptedDataEncoder;
extern int ghidra_vftable_REncryptedStringDecoder;
extern int ghidra_vftable_REncryptedStringEmitter;
extern int ghidra_vftable_REncryptedStringEncoder;
extern int ghidra_vftable_RFindPrefixCB;
extern int ghidra_vftable_RForwardOnlyDataStream;
extern int ghidra_vftable_RGetAllPrefixLocationsCB;
extern int ghidra_vftable_RGroupManagement;
extern int ghidra_vftable_RGroupRenderingControl;
extern int ghidra_vftable_RHTControl;
extern int ghidra_vftable_RHTTPAsyncSocketIOSessionCB;
extern int ghidra_vftable_RHTTPRequest;
extern int ghidra_vftable_RHTTPRequestHeadersBuilder;
extern int ghidra_vftable_RHTTPSeekableDataProvider;
extern int ghidra_vftable_RHouseholdListenerCB;
extern int ghidra_vftable_RHttpBaseNoRedirectAIOOp;
extern int ghidra_vftable_RHttpHeadersParam;
extern int ghidra_vftable_RIPNetStartListenerBase;
extern int ghidra_vftable_RIPNetStartListenerDevDisc;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RJsonParser;
extern int ghidra_vftable_RJsonWriterBase;
extern int ghidra_vftable_RKVReport;
extern int ghidra_vftable_RKVReportData;
extern int ghidra_vftable_RKeyValueBase;
extern int ghidra_vftable_RKeyValueEnumCB;
extern int ghidra_vftable_RKeyValuePairsQueryParams;
extern int ghidra_vftable_RKeyValueUrlPairs;
extern int ghidra_vftable_RLastChangeCallback;
extern int ghidra_vftable_RLastChangeProcessor;
extern int ghidra_vftable_RLastFMContentProvider;
extern int ghidra_vftable_RLastFMRequest;
extern int ghidra_vftable_RLastFMResultCB;
extern int ghidra_vftable_RLastFMResultParser;
extern int ghidra_vftable_RMSRating;
extern int ghidra_vftable_RMSearchNotifyHandler;
extern int ghidra_vftable_RMediaReceiverRegistrar;
extern int ghidra_vftable_RMediaServerCallback;
extern int ghidra_vftable_RMediaServerProcessor;
extern int ghidra_vftable_RMemoryBufferStream;
extern int ghidra_vftable_RMusicServiceListCB;
extern int ghidra_vftable_RMusicServiceListParser;
extern int ghidra_vftable_RMusicServicesDirectory;
extern int ghidra_vftable_RNSQueryNetParamsOp;
extern int ghidra_vftable_RNotifyBodyParser;
extern int ghidra_vftable_RNotifyBodyParserCallback;
extern int ghidra_vftable_RNullAsyncIOOperation;
extern int ghidra_vftable_RPresentationMapParserCB;
extern int ghidra_vftable_RQueueInstance;
extern int ghidra_vftable_RRTFXmlWriter;
extern int ghidra_vftable_RReadFileStream;
extern int ghidra_vftable_RRenderingControl;
extern int ghidra_vftable_RReportCategoryInfo;
extern int ghidra_vftable_RReportCategoryStore;
extern int ghidra_vftable_RReportFileLoader;
extern int ghidra_vftable_RReportFileLoaderCB;
extern int ghidra_vftable_RReportFileParser;
extern int ghidra_vftable_RReportFileParserCB;
extern int ghidra_vftable_RReportManager;
extern int ghidra_vftable_RReportUploaderInfo;
extern int ghidra_vftable_RRestoreAVTStateAIOOp;
extern int ghidra_vftable_RSCPBrowseAIOOpBase;
extern int ghidra_vftable_RSCPPropNameTranslator;
extern int ghidra_vftable_RSOAPComplexInParam;
extern int ghidra_vftable_RSOAPFaultHandler;
extern int ghidra_vftable_RSOAPFaultWriter;
extern int ghidra_vftable_RSOAPWriter;
extern int ghidra_vftable_RSelectThread;
extern int ghidra_vftable_RSocketTxnManager;
extern int ghidra_vftable_RSocketWriter;
extern int ghidra_vftable_RSonosContentProviderImpl;
extern int ghidra_vftable_RSonosContentProviderMediaSessions;
extern int ghidra_vftable_RSonosGetExtendedMetadataTextParam;
extern int ghidra_vftable_RSonosGetObjIDsForAlbumAIOOp;
extern int ghidra_vftable_RSonosGetObjIDsForTrackAIOOp;
extern int ghidra_vftable_RSonosParamRX;
extern int ghidra_vftable_RSonosPositionInformationParam;
extern int ghidra_vftable_RSonosRateItemOp;
extern int ghidra_vftable_RSonosRelatedActionsParam;
extern int ghidra_vftable_RSonosRelatedInfoParam;
extern int ghidra_vftable_RStringBuilder;
extern int ghidra_vftable_RStringStream;
extern int ghidra_vftable_RStringTable;
extern int ghidra_vftable_RStringTableParserCB;
extern int ghidra_vftable_RSystemPropertiesManager;
extern int ghidra_vftable_RSystemTime;
extern int ghidra_vftable_RTrackMetaDataCacheCB;
extern int ghidra_vftable_RTrackMetaDataObjCB;
extern int ghidra_vftable_RUnsubscribeRequest;
extern int ghidra_vftable_RUpdManifestParser;
extern int ghidra_vftable_RUpdateItemParser;
extern int ghidra_vftable_RUpdateItemParserCallback;
extern int ghidra_vftable_RUpdateManifestConsumer;
extern int ghidra_vftable_RUpdateWorkerThread;
extern int ghidra_vftable_RUpgradeClientCB;
extern int ghidra_vftable_RUpnpACGetFormatAIOOp;
extern int ghidra_vftable_RUpnpACGetTimeNowAIOOp;
extern int ghidra_vftable_RUpnpACGetTimeServerAIOOp;
extern int ghidra_vftable_RUpnpACGetTimeZoneAndRuleAIOOp;
extern int ghidra_vftable_RUpnpACListAlarmsAIOOp;
extern int ghidra_vftable_RUpnpAVTGetCrossfadeModeAIOOp;
extern int ghidra_vftable_RUpnpAVTGetTransportInfoAIOOp;
extern int ghidra_vftable_RUpnpAVTGetTransportSettingsAIOOp;
extern int ghidra_vftable_RUpnpAsyncIOOperationConnectCB;
extern int ghidra_vftable_RUpnpCDRequestResortAIOOp;
extern int ghidra_vftable_RUpnpDPAddHTSatelliteAIOOp;
extern int ghidra_vftable_RUpnpDPRemoveHTSatelliteAIOOp;
extern int ghidra_vftable_RUpnpQAddMultipleURIsAIOOp;
extern int ghidra_vftable_RUpnpQAddURIAIOOp;
extern int ghidra_vftable_RUpnpQAttachQueueAIOOp;
extern int ghidra_vftable_RUpnpQBackupAIOOp;
extern int ghidra_vftable_RUpnpQBrowseAIOOp;
extern int ghidra_vftable_RUpnpQCreateQueueAIOOp;
extern int ghidra_vftable_RUpnpQRemoveAllTracksAIOOp;
extern int ghidra_vftable_RUpnpQRemoveTrackRangeAIOOp;
extern int ghidra_vftable_RUpnpQReorderTracksAIOOp;
extern int ghidra_vftable_RUpnpQReplaceAllTracksAIOOp;
extern int ghidra_vftable_RUpnpRCGetOutputFixedAIOOp;
extern int ghidra_vftable_RUpnpRCRampToVolumeAIOOp;
extern int ghidra_vftable_RUpnpRCResetBasicEQAIOOp;
extern int ghidra_vftable_RUpnpRCResetExtEQAIOOp;
extern int ghidra_vftable_RUpnpRCSetBassAIOOp;
extern int ghidra_vftable_RUpnpRCSetEQAIOOp;
extern int ghidra_vftable_RUpnpRCSetLoudnessAIOOp;
extern int ghidra_vftable_RUpnpRCSetMuteAIOOp;
extern int ghidra_vftable_RUpnpRCSetRelativeVolumeAIOOp;
extern int ghidra_vftable_RUpnpRCSetTrebleAIOOp;
extern int ghidra_vftable_RUpnpRCSetVolumeAIOOp;
extern int ghidra_vftable_RUpnpSPEditAccountMdAIOOp;
extern int ghidra_vftable_RUpnpSPGetRDMAIOOp;
extern int ghidra_vftable_RUpnpSPGetStringAIOOp;
extern int ghidra_vftable_RUpnpZGTCheckForUpdateAIOOp;
extern int ghidra_vftable_RUpnpZGTReportUnresponsiveDeviceAIOOp;
extern int ghidra_vftable_RUsageDataSharing;
extern int ghidra_vftable_RWLock;
extern int ghidra_vftable_RWritableStream;
extern int ghidra_vftable_RXMLParserBase;
extern int ghidra_vftable_RXMLRPCAsyncIOOperation;
extern int ghidra_vftable_RXMLRPCInParam;
extern int ghidra_vftable_RXMLRPCResultCB;
extern int ghidra_vftable_RXMLRPCResultParser;
extern int ghidra_vftable_RXmlBuffer;
extern int ghidra_vftable_RXmlPostClient;
extern int ghidra_vftable_RXmlStaticBuffer;
extern int ghidra_vftable_RXmlWriter;
extern int ghidra_vftable_RZoneGroupStateProcessor;
extern int ghidra_vftable_RZoneGroupTopology;
extern int ghidra_vftable_RefCountBase;
extern int ghidra_vftable_RxmlWritableStreamWriter;
extern int ghidra_vftable_SwfObjAC;
extern int ghidra_vftable_SwfObjAI;
extern int ghidra_vftable_SwfObjArray;
extern int ghidra_vftable_SwfObjCD;
extern int ghidra_vftable_SwfObjCPPerformActionOp;
extern int ghidra_vftable_SwfObjDP;
extern int ghidra_vftable_SwfObjIndexListener;
extern int ghidra_vftable_SwfObjIter;
extern int ghidra_vftable_SwfObjLastFMCP;
extern int ghidra_vftable_SwfObjObject;
extern int ghidra_vftable_SwfObjRC;
extern int ghidra_vftable_SwfObjWebSvcCP;
extern int ghidra_vftable_SwfUpnpEventHandler;
extern int ghidra_vftable_SwfUpnpSubscriptionInterface;
extern int ghidra_vftable_SwfWorkerThread;
extern int ghidra_vftable_TestPointHandler;
extern int ghidra_vftable_ZPConnRec;
extern int ghidra_vftable_nonstd_expected_lite_bad_expected_access;
extern int ghidra_vftable_nonstd_optional_lite_bad_optional_access;
extern int ghidra_vftable_nonstd_variants_bad_variant_access;
extern int ghidra_vftable_std_Ref_count_obj2;
extern int ghidra_vftable_std_exception;
extern int ghidra_vftable_std_logic_error;
extern int in_EAX;
extern int in_stack_0000001c;
extern int in_stack_00000020;
extern int in_stack_00000024;
extern int uRam00000000;
extern int uStack_4;
extern int uStack_8;
extern int unaff_EDI;
extern undefined1 LAB_10031520[];
extern undefined1 LAB_100323a8[];
extern undefined1 LAB_10064669[];
extern undefined1 LAB_1006b14e[];
extern undefined1 LAB_1007e6b3[];
extern undefined1 LAB_100841f3[];
extern undefined1 LAB_10088519[];
extern undefined1 LAB_1116d5a2[];
extern undefined1 LAB_111b11e0[];
extern undefined1 LAB_117c16d0[];
extern undefined1 LAB_117cf11d[];
extern int *PTR_DAT_1211df30;
extern int *PTR_DAT_12120e30;
extern int *PTR_DAT_12126b6c;
extern int *PTR_s_AlarmListVersion_119c93b4;
extern int *PTR_s_DTLS_STATE_DISCONNECTED_119d2487_5_121202ec;
extern int *PTR_s_LineLevel_119cb040;
extern int *PTR_s_RadioFavoritesUpdateID_119cad20;
extern int *PTR_s_TOSLinkConnected_119ccb90;
extern int *PTR_s_Volume_Master_119ce998;
extern void *ExceptionList;
extern int FUN_112a9d40(...);
extern int FUN_112a9d50(...);
extern int FUN_112a9d70(...);
extern int FUN_112a9e10(...);
extern int FUN_112aa1f0(...);
extern int FUN_112aa200(...);
extern int FUN_112aa2c0(...);
extern int FUN_112aa300(...);
extern int FUN_112aa340(...);
extern int FUN_112aa350(...);
extern int FUN_112aa380(...);
void __fastcall FUN_110f6fd0(int param_1);
template<class... A> int FUN_110f6fd0(A...);
void __fastcall FUN_110f7000(int param_1);
template<class... A> int FUN_110f7000(A...);
void __fastcall FUN_110f82a0(int param_1);
template<class... A> int FUN_110f82a0(A...);
undefined4 * __fastcall FUN_110f8eb0(undefined4 *param_1);
template<class... A> int FUN_110f8eb0(A...);
undefined4 * __fastcall FUN_110f8f90(undefined4 *param_1);
template<class... A> int FUN_110f8f90(A...);
void __fastcall FUN_110f95b0(int param_1);
template<class... A> int FUN_110f95b0(A...);
void __fastcall FUN_110f9660(int param_1);
template<class... A> int FUN_110f9660(A...);
void FUN_110fc250(void);
template<class... A> int FUN_110fc250(A...);
void FUN_110fc270(void);
template<class... A> int FUN_110fc270(A...);
void __fastcall FUN_110ff4e0(int param_1);
template<class... A> int FUN_110ff4e0(A...);
void __fastcall FUN_111001c0(int param_1);
template<class... A> int FUN_111001c0(A...);
int __fastcall FUN_111002e0(int param_1);
template<class... A> int FUN_111002e0(A...);
int __fastcall FUN_11100300(int param_1);
template<class... A> int FUN_11100300(A...);
void __fastcall FUN_11100320(int param_1);
template<class... A> int FUN_11100320(A...);
undefined4 __fastcall FUN_11101900(int param_1);
template<class... A> int FUN_11101900(A...);
uint __fastcall FUN_11101940(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_11101940(A...);
void FUN_11101c70(char *param_1);
template<class... A> int FUN_11101c70(A...);
bool FUN_11102250(void);
template<class... A> int FUN_11102250(A...);
void __fastcall FUN_11102d50(undefined4 *param_1);
template<class... A> int FUN_11102d50(A...);
void FUN_11103fb0(void);
template<class... A> int FUN_11103fb0(A...);
void __fastcall FUN_11104170(int param_1);
template<class... A> int FUN_11104170(A...);
void __fastcall FUN_111044f0(int param_1);
template<class... A> int FUN_111044f0(A...);
void __fastcall FUN_111045e0(int *param_1);
template<class... A> int FUN_111045e0(A...);
void __fastcall FUN_11106f40(int param_1);
template<class... A> int FUN_11106f40(A...);
void __fastcall FUN_11106f80(int param_1);
template<class... A> int FUN_11106f80(A...);
void __fastcall FUN_11107bc0(int param_1);
template<class... A> int FUN_11107bc0(A...);
void __stdcall FUN_11108ca0(undefined4 param_1,int *param_2);
template<class... A> int FUN_11108ca0(A...);
undefined4 * __fastcall FUN_11109990(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_11109990(A...);
void __fastcall FUN_1110b2f0(int param_1);
template<class... A> int FUN_1110b2f0(A...);
void __fastcall FUN_1110b3a0(undefined4 *param_1);
template<class... A> int FUN_1110b3a0(A...);
void FUN_1110d700(undefined1 *param_1);
template<class... A> int FUN_1110d700(A...);
void __fastcall FUN_1110d9d0(int param_1);
template<class... A> int FUN_1110d9d0(A...);
int * FUN_1110ea40(int *param_1);
template<class... A> int FUN_1110ea40(A...);
void __fastcall FUN_1110f4a0(int param_1);
template<class... A> int FUN_1110f4a0(A...);
void __fastcall FUN_1110f630(int *param_1);
template<class... A> int FUN_1110f630(A...);
void __fastcall FUN_1110f670(undefined4 *param_1);
template<class... A> int FUN_1110f670(A...);
void __stdcall FUN_1110fc20(int param_1,int param_2);
template<class... A> int FUN_1110fc20(A...);
void __fastcall FUN_1110ff50(int *param_1);
template<class... A> int FUN_1110ff50(A...);
undefined4 FUN_11111570(void);
template<class... A> int FUN_11111570(A...);
undefined4 __fastcall FUN_111115b0(int param_1);
template<class... A> int FUN_111115b0(A...);
int __fastcall FUN_11111610(int param_1);
template<class... A> int FUN_11111610(A...);
undefined1 __fastcall FUN_11111e10(int param_1);
template<class... A> int FUN_11111e10(A...);
void __fastcall FUN_11111e40(int param_1);
template<class... A> int FUN_11111e40(A...);
undefined ** __stdcall FUN_11112330(undefined4 *param_1);
template<class... A> int FUN_11112330(A...);
undefined1 __fastcall FUN_111135c0(int param_1);
template<class... A> int FUN_111135c0(A...);
void __fastcall FUN_111135f0(int param_1);
template<class... A> int FUN_111135f0(A...);
int __fastcall FUN_111138b0(int param_1);
template<class... A> int FUN_111138b0(A...);
int __fastcall FUN_111138d0(int param_1);
template<class... A> int FUN_111138d0(A...);
int __fastcall FUN_1111b0a0(int param_1);
template<class... A> int FUN_1111b0a0(A...);
void FUN_1111c6a0(void);
template<class... A> int FUN_1111c6a0(A...);
void FUN_1111d190(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1111d190(A...);
void FUN_1111d490(void);
template<class... A> int FUN_1111d490(A...);
undefined4 * __fastcall FUN_1111ecc0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1111ecc0(A...);
void __fastcall FUN_1111f310(int param_1);
template<class... A> int FUN_1111f310(A...);
void __fastcall FUN_1111f410(int param_1);
template<class... A> int FUN_1111f410(A...);
int __stdcall FUN_1111fc80(undefined4 param_1);
template<class... A> int FUN_1111fc80(A...);
void __fastcall FUN_111202c0(int param_1);
template<class... A> int FUN_111202c0(A...);
void FUN_11121f80(void);
template<class... A> int FUN_11121f80(A...);
int __fastcall FUN_11122380(int param_1);
template<class... A> int FUN_11122380(A...);
void __stdcall FUN_111242a0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_111242a0(A...);
void __stdcall FUN_111242e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_111242e0(A...);
void FUN_11125d90(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_11125d90(A...);
void __fastcall FUN_11126d40(undefined4 *param_1);
template<class... A> int FUN_11126d40(A...);
void FUN_11127ca0(void);
template<class... A> int FUN_11127ca0(A...);
void __stdcall FUN_111280b0(int param_1,int param_2);
template<class... A> int FUN_111280b0(A...);
void __fastcall FUN_11128100(int *param_1);
template<class... A> int FUN_11128100(A...);
uint FUN_11128ff0(int param_1,int *param_2);
template<class... A> int FUN_11128ff0(A...);
void __fastcall FUN_1112a990(int param_1);
template<class... A> int FUN_1112a990(A...);
void FUN_1112bc20(void);
template<class... A> int FUN_1112bc20(A...);
void __fastcall FUN_1112bdb0(int *param_1);
template<class... A> int FUN_1112bdb0(A...);
void __fastcall FUN_1112bfd0(int param_1);
template<class... A> int FUN_1112bfd0(A...);
undefined4 __stdcall FUN_1112c280(int param_1);
template<class... A> int FUN_1112c280(A...);
void __fastcall FUN_1112c310(int param_1);
template<class... A> int FUN_1112c310(A...);
int __fastcall FUN_1112cd10(int param_1);
template<class... A> int FUN_1112cd10(A...);
uint __fastcall FUN_1112ea40(int param_1);
template<class... A> int FUN_1112ea40(A...);
undefined1 __fastcall FUN_11130320(undefined1 *param_1);
template<class... A> int FUN_11130320(A...);
void __stdcall FUN_11132b40(int param_1,int param_2);
template<class... A> int FUN_11132b40(A...);
int __fastcall FUN_11132ba0(int param_1);
template<class... A> int FUN_11132ba0(A...);
int __fastcall FUN_11132bd0(int param_1);
template<class... A> int FUN_11132bd0(A...);
undefined1 __fastcall FUN_111339e0(int param_1);
template<class... A> int FUN_111339e0(A...);
undefined1 __fastcall FUN_11133a10(int param_1);
template<class... A> int FUN_11133a10(A...);
bool FUN_111342b0(void);
template<class... A> int FUN_111342b0(A...);
undefined1 FUN_11135050(int param_1);
template<class... A> int FUN_11135050(A...);
undefined1 FUN_11135420(int param_1);
template<class... A> int FUN_11135420(A...);
undefined1 FUN_11135460(int param_1);
template<class... A> int FUN_11135460(A...);
undefined1 FUN_11135a30(int param_1);
template<class... A> int FUN_11135a30(A...);
undefined1 FUN_11135a70(int param_1);
template<class... A> int FUN_11135a70(A...);
undefined4 FUN_11135ab0(int param_1);
template<class... A> int FUN_11135ab0(A...);
void __fastcall FUN_11136010(int param_1);
template<class... A> int FUN_11136010(A...);
void __fastcall FUN_11136170(undefined4 *param_1);
template<class... A> int FUN_11136170(A...);
void __fastcall FUN_11136750(int *param_1);
template<class... A> int FUN_11136750(A...);
undefined1 __fastcall FUN_11136830(int param_1);
template<class... A> int FUN_11136830(A...);
undefined1 __fastcall FUN_11136fe0(int param_1);
template<class... A> int FUN_11136fe0(A...);
int __fastcall FUN_11137120(int param_1);
template<class... A> int FUN_11137120(A...);
void __fastcall FUN_11138180(int param_1);
template<class... A> int FUN_11138180(A...);
void __fastcall FUN_11138260(int param_1);
template<class... A> int FUN_11138260(A...);
undefined4 __fastcall FUN_111389e0(int param_1);
template<class... A> int FUN_111389e0(A...);
void FUN_11139450(void);
template<class... A> int FUN_11139450(A...);
void __fastcall FUN_11139470(undefined4 *param_1);
template<class... A> int FUN_11139470(A...);
void __fastcall FUN_1113a340(int param_1);
template<class... A> int FUN_1113a340(A...);
void __stdcall FUN_1113a820(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5);
template<class... A> int FUN_1113a820(A...);
void __stdcall FUN_1113b500(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_1113b500(A...);
undefined1 __fastcall FUN_1113b540(int param_1);
template<class... A> int FUN_1113b540(A...);
void __stdcall FUN_1113b580(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1113b580(A...);
void FUN_1113c270(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1113c270(A...);
undefined ** __stdcall FUN_1113c2d0(undefined4 *param_1);
template<class... A> int FUN_1113c2d0(A...);
undefined4 __fastcall FUN_1113cf20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1113cf20(A...);
undefined ** __stdcall FUN_1113d120(undefined4 *param_1);
template<class... A> int FUN_1113d120(A...);
void FUN_1113d180(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1113d180(A...);
int __fastcall FUN_1113da80(int param_1);
template<class... A> int FUN_1113da80(A...);
int __fastcall FUN_1113dab0(int param_1);
template<class... A> int FUN_1113dab0(A...);
uint __fastcall FUN_1113de60(uint param_1);
template<class... A> int FUN_1113de60(A...);
int __fastcall FUN_1113df70(int param_1);
template<class... A> int FUN_1113df70(A...);
int __fastcall FUN_1113dfa0(int param_1);
template<class... A> int FUN_1113dfa0(A...);
int __fastcall FUN_1113dfd0(int param_1);
template<class... A> int FUN_1113dfd0(A...);
char * FUN_1113e4f0(char *param_1,uint param_2);
template<class... A> int FUN_1113e4f0(A...);
void __stdcall FUN_1113f0e0(undefined4 param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1113f0e0(A...);
void __fastcall FUN_1113f560(int param_1);
template<class... A> int FUN_1113f560(A...);
undefined4 FUN_1113f9e0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_1113f9e0(A...);
void __stdcall FUN_111436e0(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_111436e0(A...);
void __fastcall FUN_111482a0(undefined4 *param_1);
template<class... A> int FUN_111482a0(A...);
void __fastcall FUN_1114a740(int param_1);
template<class... A> int FUN_1114a740(A...);
void __fastcall FUN_1114b950(int param_1);
template<class... A> int FUN_1114b950(A...);
void __fastcall FUN_1114d980(undefined4 *param_1);
template<class... A> int FUN_1114d980(A...);
void __fastcall FUN_1114f4f0(undefined4 *param_1);
template<class... A> int FUN_1114f4f0(A...);
void __fastcall FUN_11150140(int param_1);
template<class... A> int FUN_11150140(A...);
void __fastcall FUN_11151f00(undefined4 param_1);
template<class... A> int FUN_11151f00(A...);
void __fastcall FUN_11152240(int param_1);
template<class... A> int FUN_11152240(A...);
void __fastcall FUN_11152270(int param_1);
template<class... A> int FUN_11152270(A...);
void __fastcall FUN_111522a0(int param_1);
template<class... A> int FUN_111522a0(A...);
undefined ** __stdcall FUN_11158760(undefined4 *param_1);
template<class... A> int FUN_11158760(A...);
void __fastcall FUN_11159df0(int param_1);
template<class... A> int FUN_11159df0(A...);
undefined4 FUN_1115c4e0(void);
template<class... A> int FUN_1115c4e0(A...);
undefined1 * FUN_1115c530(char param_1);
template<class... A> int FUN_1115c530(A...);
undefined1 * FUN_1115c560(char param_1);
template<class... A> int FUN_1115c560(A...);
undefined4 * __fastcall FUN_1115c810(undefined4 *param_1);
template<class... A> int FUN_1115c810(A...);
undefined4 __fastcall FUN_1115ca20(int param_1);
template<class... A> int FUN_1115ca20(A...);
void __fastcall FUN_1115ca50(int param_1);
template<class... A> int FUN_1115ca50(A...);
void __fastcall FUN_1115cbd0(int *param_1);
template<class... A> int FUN_1115cbd0(A...);
void __fastcall FUN_1115cd30(int param_1);
template<class... A> int FUN_1115cd30(A...);
void __fastcall FUN_1115ced0(int param_1);
template<class... A> int FUN_1115ced0(A...);
template<class... A> int FUN_1115e0c0(A...);
template<class... A> int FUN_1115e0c0(A...);
void __fastcall FUN_1115ed20(undefined4 param_1);
template<class... A> int FUN_1115ed20(A...);
void __fastcall FUN_1115ed40(undefined4 *param_1);
template<class... A> int FUN_1115ed40(A...);
void __stdcall FUN_1115ee10(int param_1,int param_2);
template<class... A> int FUN_1115ee10(A...);
bool FUN_1115f330(undefined4 param_1);
template<class... A> int FUN_1115f330(A...);
bool FUN_1115f360(undefined4 param_1);
template<class... A> int FUN_1115f360(A...);
bool FUN_1115f390(undefined4 param_1);
template<class... A> int FUN_1115f390(A...);
bool FUN_1115ff80(undefined4 param_1);
template<class... A> int FUN_1115ff80(A...);
bool FUN_1115ffd0(undefined4 param_1);
template<class... A> int FUN_1115ffd0(A...);
void __fastcall FUN_11161d90(int param_1);
template<class... A> int FUN_11161d90(A...);
void __fastcall FUN_11161dd0(undefined4 param_1);
template<class... A> int FUN_11161dd0(A...);
undefined4 * __fastcall FUN_11164710(undefined4 *param_1);
template<class... A> int FUN_11164710(A...);
undefined4 __fastcall FUN_111662d0(int param_1);
template<class... A> int FUN_111662d0(A...);
undefined1 * __fastcall FUN_11166390(int param_1);
template<class... A> int FUN_11166390(A...);
int * __fastcall FUN_11167970(int *param_1);
template<class... A> int FUN_11167970(A...);
undefined4 __fastcall FUN_11169430(int param_1);
template<class... A> int FUN_11169430(A...);
void __fastcall FUN_11169670(int param_1);
template<class... A> int FUN_11169670(A...);
void __fastcall FUN_111696a0(int param_1);
template<class... A> int FUN_111696a0(A...);
undefined4 * __fastcall FUN_1116a8e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1116a8e0(A...);
void __fastcall FUN_1116ae90(int param_1);
template<class... A> int FUN_1116ae90(A...);
void __fastcall FUN_1116b070(undefined4 *param_1);
template<class... A> int FUN_1116b070(A...);
void __fastcall FUN_1116b4a0(undefined4 *param_1);
template<class... A> int FUN_1116b4a0(A...);
int __stdcall FUN_1116b5c0(undefined4 param_1);
template<class... A> int FUN_1116b5c0(A...);
void __fastcall FUN_1116ba50(int param_1);
template<class... A> int FUN_1116ba50(A...);
void __fastcall FUN_1116c2b0(undefined4 *param_1);
template<class... A> int FUN_1116c2b0(A...);
void __fastcall FUN_1116c7d0(int *param_1);
template<class... A> int FUN_1116c7d0(A...);
void __stdcall FUN_1116c930(undefined4 param_1);
template<class... A> int FUN_1116c930(A...);
void __fastcall FUN_1116d520(int param_1);
template<class... A> int FUN_1116d520(A...);
void __fastcall FUN_1116d550(int param_1);
template<class... A> int FUN_1116d550(A...);
undefined4 * __fastcall FUN_1116fe20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1116fe20(A...);
undefined4 * __fastcall FUN_11171c40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_11171c40(A...);
void __fastcall FUN_11172570(int param_1);
template<class... A> int FUN_11172570(A...);
void __fastcall FUN_11172750(int *param_1);
template<class... A> int FUN_11172750(A...);
void __fastcall FUN_11172780(undefined4 *param_1);
template<class... A> int FUN_11172780(A...);
void __fastcall FUN_11173010(int param_1);
template<class... A> int FUN_11173010(A...);
void __stdcall FUN_11173390(int param_1,int param_2);
template<class... A> int FUN_11173390(A...);
void __fastcall FUN_11173a30(undefined4 *param_1);
template<class... A> int FUN_11173a30(A...);
void __fastcall FUN_11174220(int *param_1);
template<class... A> int FUN_11174220(A...);
void __stdcall FUN_11174520(int param_1,int param_2);
template<class... A> int FUN_11174520(A...);
void FUN_11175630(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_11175630(A...);
undefined4 FUN_11175710(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_11175710(A...);
void FUN_11175740(TIMERPROC param_1,UINT param_2);
template<class... A> int FUN_11175740(A...);
void __fastcall FUN_11175cc0(undefined4 *param_1);
template<class... A> int FUN_11175cc0(A...);
void __stdcall FUN_11175fc0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_11175fc0(A...);
void FUN_11176190(void);
template<class... A> int FUN_11176190(A...);
void __fastcall FUN_11177260(undefined4 *param_1);
template<class... A> int FUN_11177260(A...);
void __stdcall FUN_11179a20(undefined4 param_1,int *param_2);
template<class... A> int FUN_11179a20(A...);
undefined4 * __fastcall FUN_1117e0a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1117e0a0(A...);
undefined4 * __fastcall FUN_1117e0e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1117e0e0(A...);
undefined4 * __fastcall FUN_1117e120(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1117e120(A...);
undefined4 * __fastcall FUN_1117e160(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1117e160(A...);
undefined4 * __fastcall FUN_1117e1a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1117e1a0(A...);
void __fastcall FUN_1117fa40(int param_1);
template<class... A> int FUN_1117fa40(A...);
void __fastcall FUN_1117fa60(int param_1);
template<class... A> int FUN_1117fa60(A...);
void __fastcall FUN_1117fa80(int param_1);
template<class... A> int FUN_1117fa80(A...);
void __fastcall FUN_1117faa0(int param_1);
template<class... A> int FUN_1117faa0(A...);
void __fastcall FUN_1117fac0(int param_1);
template<class... A> int FUN_1117fac0(A...);
void __fastcall FUN_1117fae0(int *param_1);
template<class... A> int FUN_1117fae0(A...);
void __fastcall FUN_1117fb10(int *param_1);
template<class... A> int FUN_1117fb10(A...);
void __fastcall FUN_1117fb40(int *param_1);
template<class... A> int FUN_1117fb40(A...);
void __fastcall FUN_1117fbc0(int *param_1);
template<class... A> int FUN_1117fbc0(A...);
void __fastcall FUN_1117fe80(int param_1);
template<class... A> int FUN_1117fe80(A...);
void __fastcall FUN_1117fea0(int param_1);
template<class... A> int FUN_1117fea0(A...);
void __fastcall FUN_1117fec0(int param_1);
template<class... A> int FUN_1117fec0(A...);
void __fastcall FUN_1117ff00(int param_1);
template<class... A> int FUN_1117ff00(A...);
void __fastcall FUN_1117ff20(undefined4 *param_1);
template<class... A> int FUN_1117ff20(A...);
void __fastcall FUN_1117ff40(undefined4 *param_1);
template<class... A> int FUN_1117ff40(A...);
void __fastcall FUN_1117ff60(undefined4 *param_1);
template<class... A> int FUN_1117ff60(A...);
void __fastcall FUN_1117ff80(int *param_1);
template<class... A> int FUN_1117ff80(A...);
void __fastcall FUN_1117ffb0(int *param_1);
template<class... A> int FUN_1117ffb0(A...);
void __fastcall FUN_1117ffe0(int *param_1);
template<class... A> int FUN_1117ffe0(A...);
void __fastcall FUN_11180020(int *param_1);
template<class... A> int FUN_11180020(A...);
void __fastcall FUN_111824e0(int param_1);
template<class... A> int FUN_111824e0(A...);
void __fastcall FUN_11182500(int param_1);
template<class... A> int FUN_11182500(A...);
void __fastcall FUN_11182520(int param_1);
template<class... A> int FUN_11182520(A...);
void __fastcall FUN_11182540(int param_1);
template<class... A> int FUN_11182540(A...);
void __fastcall FUN_11182560(int param_1);
template<class... A> int FUN_11182560(A...);
void __fastcall FUN_11187ac0(int param_1);
template<class... A> int FUN_11187ac0(A...);
void __fastcall FUN_111888f0(int param_1);
template<class... A> int FUN_111888f0(A...);
void __fastcall FUN_111891a0(int *param_1);
template<class... A> int FUN_111891a0(A...);
void __fastcall FUN_111891d0(int *param_1);
template<class... A> int FUN_111891d0(A...);
void __fastcall FUN_11189200(int *param_1);
template<class... A> int FUN_11189200(A...);
void __fastcall FUN_11189230(int *param_1);
template<class... A> int FUN_11189230(A...);
void __fastcall FUN_11189270(undefined4 *param_1);
template<class... A> int FUN_11189270(A...);
void __stdcall FUN_111898b0(int param_1,int param_2);
template<class... A> int FUN_111898b0(A...);
void __stdcall FUN_11189900(int param_1,int param_2);
template<class... A> int FUN_11189900(A...);
int * FUN_1118c1a0(undefined4 param_1,int param_2);
template<class... A> int FUN_1118c1a0(A...);
void __fastcall FUN_1118d1f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1118d1f0(A...);
undefined4 * __fastcall FUN_1118d8f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1118d8f0(A...);
void __fastcall FUN_1118dcc0(int param_1);
template<class... A> int FUN_1118dcc0(A...);
void __fastcall FUN_1118dce0(int *param_1);
template<class... A> int FUN_1118dce0(A...);
void __fastcall FUN_1118dd10(int param_1);
template<class... A> int FUN_1118dd10(A...);
void __fastcall FUN_1118dd60(int *param_1);
template<class... A> int FUN_1118dd60(A...);
void __fastcall FUN_1118e720(int param_1);
template<class... A> int FUN_1118e720(A...);
void __fastcall FUN_1118ecb0(int *param_1);
template<class... A> int FUN_1118ecb0(A...);
void __fastcall FUN_11190390(int param_1);
template<class... A> int FUN_11190390(A...);
undefined ** __stdcall FUN_11190480(undefined4 *param_1);
template<class... A> int FUN_11190480(A...);
void FUN_11191dc0(void);
template<class... A> int FUN_11191dc0(A...);
undefined1 * __fastcall FUN_11192780(int param_1);
template<class... A> int FUN_11192780(A...);
bool __stdcall FUN_11192d20(undefined4 param_1);
template<class... A> int FUN_11192d20(A...);
void __stdcall FUN_11193c40(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_11193c40(A...);
int __fastcall FUN_11194cd0(int param_1);
template<class... A> int FUN_11194cd0(A...);
void __fastcall FUN_11195470(undefined4 *param_1);
template<class... A> int FUN_11195470(A...);
void __fastcall FUN_1119a2f0(int param_1);
template<class... A> int FUN_1119a2f0(A...);
undefined4 __fastcall FUN_1119ba20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1119ba20(A...);
undefined4 FUN_1119cfc0(int param_1);
template<class... A> int FUN_1119cfc0(A...);
void __fastcall FUN_111a0360(int param_1);
template<class... A> int FUN_111a0360(A...);
void __fastcall FUN_111a03a0(int param_1);
template<class... A> int FUN_111a03a0(A...);
void __fastcall FUN_111a03e0(int param_1);
template<class... A> int FUN_111a03e0(A...);
void __fastcall FUN_111a0620(int param_1);
template<class... A> int FUN_111a0620(A...);
int __fastcall FUN_111a2cb0(int *param_1);
template<class... A> int FUN_111a2cb0(A...);
char * __fastcall FUN_111a32a0(undefined4 *param_1);
template<class... A> int FUN_111a32a0(A...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4 FUN_111a3760(double param_1);
template<class... A> int FUN_111a3760(A...);
int FUN_111a3d30(void);
template<class... A> int FUN_111a3d30(A...);
undefined4 * __fastcall FUN_111a4b00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_111a4b00(A...);
void __fastcall FUN_111a4e00(int *param_1);
template<class... A> int FUN_111a4e00(A...);
void __fastcall FUN_111a4e30(int *param_1);
template<class... A> int FUN_111a4e30(A...);
void FUN_111a53f0(int param_1);
template<class... A> int FUN_111a53f0(A...);
void __stdcall FUN_111a5a00(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_111a5a00(A...);
undefined4 __stdcall FUN_111a6a00(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_111a6a00(A...);
void __fastcall FUN_111a6c40(undefined4 *param_1);
template<class... A> int FUN_111a6c40(A...);
undefined4 * __fastcall FUN_111a6e70(undefined4 *param_1);
template<class... A> int FUN_111a6e70(A...);
void FUN_111a6f10(void);
template<class... A> int FUN_111a6f10(A...);
undefined4 FUN_111a72e0(int *param_1);
template<class... A> int FUN_111a72e0(A...);
void FUN_111a74d0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_111a74d0(A...);
undefined4 * FUN_111a7590(undefined4 param_1);
template<class... A> int FUN_111a7590(A...);
void FUN_111a7630(undefined4 *param_1);
template<class... A> int FUN_111a7630(A...);
undefined1 __fastcall FUN_111a92e0(int param_1);
template<class... A> int FUN_111a92e0(A...);
void FUN_111abf70(int *param_1);
template<class... A> int FUN_111abf70(A...);
void FUN_111ac070(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_111ac070(A...);
int FUN_111ac1c0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_111ac1c0(A...);
void FUN_111af650(int param_1);
template<class... A> int FUN_111af650(A...);
void FUN_111af6a0(int param_1);
template<class... A> int FUN_111af6a0(A...);
void FUN_111af6d0(int param_1);
template<class... A> int FUN_111af6d0(A...);
void FUN_111af700(int param_1);
template<class... A> int FUN_111af700(A...);
void FUN_111afe20(int *param_1);
template<class... A> int FUN_111afe20(A...);
void FUN_111b1210(int param_1);
template<class... A> int FUN_111b1210(A...);
void FUN_111b1c00(void *param_1,void *param_2,int param_3);
template<class... A> int FUN_111b1c00(A...);
int FUN_111b1ca0(int param_1,int param_2);
template<class... A> int FUN_111b1ca0(A...);
void FUN_111b1cc0(void *param_1,size_t param_2);
template<class... A> int FUN_111b1cc0(A...);
void FUN_111b1d50(int *param_1);
template<class... A> int FUN_111b1d50(A...);
void FUN_111bdc10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_111bdc10(A...);
undefined4 __fastcall FUN_111be2e0(int param_1);
template<class... A> int FUN_111be2e0(A...);
void __fastcall FUN_111be770(int param_1);
template<class... A> int FUN_111be770(A...);
int __fastcall FUN_111bec60(int param_1);
template<class... A> int FUN_111bec60(A...);
undefined4 FUN_111bf4b0(int param_1,int *param_2);
template<class... A> int FUN_111bf4b0(A...);
void FUN_111bfa10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9);
template<class... A> int FUN_111bfa10(A...);
undefined1 FUN_111c0040(int param_1,undefined4 param_2);
template<class... A> int FUN_111c0040(A...);
void FUN_111c0380(int param_1,undefined4 *param_2,int param_3);
template<class... A> int FUN_111c0380(A...);
void FUN_111c03c0(int param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_111c03c0(A...);
int FUN_111c0480(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_111c0480(A...);
void FUN_111c0a60(void);
template<class... A> int FUN_111c0a60(A...);
void __fastcall FUN_111c0a80(undefined4 *param_1);
template<class... A> int FUN_111c0a80(A...);
void __fastcall FUN_111c0ad0(undefined4 *param_1);
template<class... A> int FUN_111c0ad0(A...);
void __fastcall FUN_111c0b90(undefined4 *param_1);
template<class... A> int FUN_111c0b90(A...);
void __fastcall FUN_111c12f0(int param_1);
template<class... A> int FUN_111c12f0(A...);
void __fastcall FUN_111c1320(int param_1);
template<class... A> int FUN_111c1320(A...);
void __fastcall FUN_111c1340(int param_1);
template<class... A> int FUN_111c1340(A...);
void __fastcall FUN_111c1360(int param_1);
template<class... A> int FUN_111c1360(A...);
undefined4 __fastcall FUN_111c1e90(int param_1);
template<class... A> int FUN_111c1e90(A...);
uint __fastcall FUN_111c2060(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_111c2060(A...);
undefined4 * __fastcall FUN_111c2fe0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_111c2fe0(A...);
void __fastcall FUN_111c3960(int param_1);
template<class... A> int FUN_111c3960(A...);
void __fastcall FUN_111c3980(int *param_1);
template<class... A> int FUN_111c3980(A...);
void __fastcall FUN_111c39b0(undefined4 *param_1);
template<class... A> int FUN_111c39b0(A...);
void __fastcall FUN_111c39f0(int param_1);
template<class... A> int FUN_111c39f0(A...);
void __fastcall FUN_111c3a70(int *param_1);
template<class... A> int FUN_111c3a70(A...);
void FUN_111c3ae0(void);
template<class... A> int FUN_111c3ae0(A...);
void __fastcall FUN_111c4360(int param_1);
template<class... A> int FUN_111c4360(A...);
char FUN_111c4830(int param_1);
template<class... A> int FUN_111c4830(A...);
void __fastcall FUN_111c5620(int param_1);
template<class... A> int FUN_111c5620(A...);
void __fastcall FUN_111c63d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_111c63d0(A...);
undefined4 * __fastcall FUN_111c9fb0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_111c9fb0(A...);
undefined4 * __fastcall FUN_111ca1e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_111ca1e0(A...);
undefined4 * __fastcall FUN_111ca210(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_111ca210(A...);
uint * __fastcall FUN_111ca240(uint *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_111ca240(A...);
int __fastcall FUN_111cc320(int param_1);
template<class... A> int FUN_111cc320(A...);
undefined4 * __fastcall FUN_111cc4f0(undefined4 *param_1);
template<class... A> int FUN_111cc4f0(A...);
undefined4 * __fastcall FUN_111cfd00(undefined4 *param_1);
template<class... A> int FUN_111cfd00(A...);
void __fastcall FUN_111d2ea0(int param_1);
template<class... A> int FUN_111d2ea0(A...);
void __fastcall FUN_111d2ec0(int param_1);
template<class... A> int FUN_111d2ec0(A...);
void __fastcall FUN_111d2ee0(int param_1);
template<class... A> int FUN_111d2ee0(A...);
void __fastcall FUN_111d2f20(int param_1);
template<class... A> int FUN_111d2f20(A...);
void __fastcall FUN_111d3230(undefined4 *param_1);
template<class... A> int FUN_111d3230(A...);
void __fastcall FUN_111d3270(undefined4 *param_1);
template<class... A> int FUN_111d3270(A...);
void __fastcall FUN_111d32b0(int param_1);
template<class... A> int FUN_111d32b0(A...);
void __fastcall FUN_111d3300(int *param_1);
template<class... A> int FUN_111d3300(A...);
void __fastcall FUN_111d3330(int param_1);
template<class... A> int FUN_111d3330(A...);
void __fastcall FUN_111d3360(int param_1);
template<class... A> int FUN_111d3360(A...);
void __fastcall FUN_111d33b0(undefined4 *param_1);
template<class... A> int FUN_111d33b0(A...);
void __fastcall FUN_111d33d0(undefined4 *param_1);
template<class... A> int FUN_111d33d0(A...);
void __fastcall FUN_111d33f0(int *param_1);
template<class... A> int FUN_111d33f0(A...);
void __fastcall FUN_111d3430(int *param_1);
template<class... A> int FUN_111d3430(A...);
void __fastcall FUN_111d3ab0(undefined4 *param_1);
template<class... A> int FUN_111d3ab0(A...);
void FUN_111d3c60(void);
template<class... A> int FUN_111d3c60(A...);
void __fastcall FUN_111d3e40(undefined4 *param_1);
template<class... A> int FUN_111d3e40(A...);
void __fastcall FUN_111d43a0(undefined4 *param_1);
template<class... A> int FUN_111d43a0(A...);
void __fastcall FUN_111d4600(undefined4 *param_1);
template<class... A> int FUN_111d4600(A...);
void __fastcall FUN_111d4650(undefined4 *param_1);
template<class... A> int FUN_111d4650(A...);
void __fastcall FUN_111d46e0(undefined4 *param_1);
template<class... A> int FUN_111d46e0(A...);
void __fastcall FUN_111d4700(undefined4 *param_1);
template<class... A> int FUN_111d4700(A...);
void __fastcall FUN_111d4720(undefined4 *param_1);
template<class... A> int FUN_111d4720(A...);
void __fastcall FUN_111d4740(undefined4 *param_1);
template<class... A> int FUN_111d4740(A...);
void __fastcall FUN_111d4900(int param_1);
template<class... A> int FUN_111d4900(A...);
void __fastcall FUN_111d4930(undefined4 *param_1);
template<class... A> int FUN_111d4930(A...);
void __fastcall FUN_111d4970(undefined4 *param_1);
template<class... A> int FUN_111d4970(A...);
void __fastcall FUN_111d49b0(undefined4 *param_1);
template<class... A> int FUN_111d49b0(A...);
void __fastcall FUN_111d4c70(undefined4 *param_1);
template<class... A> int FUN_111d4c70(A...);
void __fastcall FUN_111d4c90(int param_1);
template<class... A> int FUN_111d4c90(A...);
void __fastcall FUN_111d4d80(undefined4 *param_1);
template<class... A> int FUN_111d4d80(A...);
int __stdcall FUN_111d5210(undefined4 param_1);
template<class... A> int FUN_111d5210(A...);
int __stdcall FUN_111d5240(undefined4 param_1);
template<class... A> int FUN_111d5240(A...);
int __stdcall FUN_111d5270(undefined4 param_1);
template<class... A> int FUN_111d5270(A...);
void FUN_111d7620(undefined1 *param_1);
template<class... A> int FUN_111d7620(A...);
void __fastcall FUN_111d7b80(int param_1);
template<class... A> int FUN_111d7b80(A...);
void __fastcall FUN_111d7ba0(int param_1);
template<class... A> int FUN_111d7ba0(A...);
void __fastcall FUN_111d7bc0(int param_1);
template<class... A> int FUN_111d7bc0(A...);
void __fastcall FUN_111d7c00(int param_1);
template<class... A> int FUN_111d7c00(A...);
void __fastcall FUN_111d7f80(int *param_1);
template<class... A> int FUN_111d7f80(A...);
void __fastcall FUN_111d7fb0(int *param_1);
template<class... A> int FUN_111d7fb0(A...);
void __fastcall FUN_111d7fe0(int *param_1);
template<class... A> int FUN_111d7fe0(A...);
void __fastcall FUN_111d9c80(undefined4 *param_1);
template<class... A> int FUN_111d9c80(A...);
void __fastcall FUN_111d9ca0(undefined4 *param_1);
template<class... A> int FUN_111d9ca0(A...);
void __fastcall FUN_111d9cc0(int *param_1);
template<class... A> int FUN_111d9cc0(A...);
void __fastcall FUN_111dbb80(int param_1);
template<class... A> int FUN_111dbb80(A...);
void __fastcall FUN_111dbfc0(int *param_1);
template<class... A> int FUN_111dbfc0(A...);
void __fastcall FUN_111dbff0(int *param_1);
template<class... A> int FUN_111dbff0(A...);
void __fastcall FUN_111dc020(int *param_1);
template<class... A> int FUN_111dc020(A...);
short __stdcall FUN_111dd8b0(undefined4 param_1);
template<class... A> int FUN_111dd8b0(A...);
short __stdcall FUN_111df370(undefined4 param_1);
template<class... A> int FUN_111df370(A...);
void FUN_111dfcf0(void);
template<class... A> int FUN_111dfcf0(A...);
void __fastcall FUN_111dfd30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_111dfd30(A...);
void __fastcall FUN_111dfd60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_111dfd60(A...);
void __fastcall FUN_111e08c0(int param_1);
template<class... A> int FUN_111e08c0(A...);
int __fastcall FUN_111e3f20(int param_1);
template<class... A> int FUN_111e3f20(A...);
undefined4 FUN_111e3f50(undefined4 param_1);
template<class... A> int FUN_111e3f50(A...);
int __fastcall FUN_111e4640(int param_1);
template<class... A> int FUN_111e4640(A...);
int __fastcall FUN_111e4690(int param_1);
template<class... A> int FUN_111e4690(A...);
undefined4 __fastcall FUN_111e4c10(int param_1);
template<class... A> int FUN_111e4c10(A...);
void __fastcall FUN_111e7f20(int param_1);
template<class... A> int FUN_111e7f20(A...);
undefined4 __fastcall FUN_111f17b0(int param_1);
template<class... A> int FUN_111f17b0(A...);
undefined4 FUN_111f1920(int param_1);
template<class... A> int FUN_111f1920(A...);
void __fastcall FUN_111f3f20(int param_1);
template<class... A> int FUN_111f3f20(A...);
void __fastcall FUN_111f3f50(int param_1);
template<class... A> int FUN_111f3f50(A...);
void __fastcall FUN_111f42a0(int param_1);
template<class... A> int FUN_111f42a0(A...);
void __fastcall FUN_111f4480(int param_1);
template<class... A> int FUN_111f4480(A...);
void FUN_111f4ce0(undefined4 param_1);
template<class... A> int FUN_111f4ce0(A...);
void FUN_111f4e40(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_111f4e40(A...);
void FUN_111f5210(undefined4 param_1);
template<class... A> int FUN_111f5210(A...);
void FUN_111f75b0(undefined4 param_1);
template<class... A> int FUN_111f75b0(A...);
void __fastcall FUN_111f7820(undefined4 *param_1);
template<class... A> int FUN_111f7820(A...);
char * FUN_111fd510(undefined4 param_1);
template<class... A> int FUN_111fd510(A...);
void FUN_111fd570(void *param_1);
template<class... A> int FUN_111fd570(A...);
void FUN_111fd590(void *param_1);
template<class... A> int FUN_111fd590(A...);
undefined4 * __fastcall FUN_111fe400(undefined4 *param_1);
template<class... A> int FUN_111fe400(A...);
void __fastcall FUN_111feb30(undefined4 *param_1);
template<class... A> int FUN_111feb30(A...);
void __fastcall FUN_111fed10(undefined4 *param_1);
template<class... A> int FUN_111fed10(A...);
void __fastcall FUN_111ff630(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_111ff630(A...);
undefined4 __stdcall FUN_11200570(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4, unsigned int recovered_unused_stack_5, unsigned int recovered_unused_stack_6);
template<class... A> int FUN_11200570(A...);
void __fastcall FUN_112007a0(int param_1);
template<class... A> int FUN_112007a0(A...);
void __fastcall FUN_11202140(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_11202140(A...);
undefined4 FUN_112023b0(char *param_1);
template<class... A> int FUN_112023b0(A...);
undefined4 FUN_11202440(char *param_1);
template<class... A> int FUN_11202440(A...);
undefined4 * __fastcall FUN_11202500(undefined4 *param_1);
template<class... A> int FUN_11202500(A...);
undefined4 * __fastcall FUN_11203970(undefined4 *param_1);
template<class... A> int FUN_11203970(A...);
undefined1 __fastcall FUN_112046f0(int param_1);
template<class... A> int FUN_112046f0(A...);
void FUN_11205330(void);
template<class... A> int FUN_11205330(A...);
int __fastcall FUN_11205490(int param_1);
template<class... A> int FUN_11205490(A...);
undefined1 __fastcall FUN_11205700(int param_1);
template<class... A> int FUN_11205700(A...);
undefined4 __fastcall FUN_11206ea0(int *param_1);
template<class... A> int FUN_11206ea0(A...);
void __fastcall FUN_11208410(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_11208410(A...);
void __fastcall FUN_1122bd10(int param_1);
template<class... A> int FUN_1122bd10(A...);
char * __fastcall FUN_1122ded0(char *param_1);
template<class... A> int FUN_1122ded0(A...);
void FUN_1122e450(void);
template<class... A> int FUN_1122e450(A...);
void __fastcall FUN_1122e860(int *param_1);
template<class... A> int FUN_1122e860(A...);
void __fastcall FUN_112313f0(undefined4 *param_1);
template<class... A> int FUN_112313f0(A...);
void __fastcall FUN_112314f0(undefined4 *param_1);
template<class... A> int FUN_112314f0(A...);
void __fastcall FUN_11231550(undefined4 *param_1);
template<class... A> int FUN_11231550(A...);
undefined4 FUN_11231b20(void);
template<class... A> int FUN_11231b20(A...);
void __fastcall FUN_11232950(int param_1);
template<class... A> int FUN_11232950(A...);
undefined4 FUN_11232ce0(char *param_1);
template<class... A> int FUN_11232ce0(A...);
void __fastcall FUN_112338b0(int *param_1);
template<class... A> int FUN_112338b0(A...);
undefined4 * __fastcall FUN_11234190(undefined4 *param_1);
template<class... A> int FUN_11234190(A...);
void __fastcall FUN_112341b0(int param_1);
template<class... A> int FUN_112341b0(A...);
void __fastcall FUN_11234340(undefined4 *param_1);
template<class... A> int FUN_11234340(A...);
void FUN_11234510(void);
template<class... A> int FUN_11234510(A...);
void FUN_11234620(void);
template<class... A> int FUN_11234620(A...);
undefined4 FUN_11234fd0(char *param_1,int param_2);
template<class... A> int FUN_11234fd0(A...);
void __fastcall FUN_11235f00(int param_1);
template<class... A> int FUN_11235f00(A...);
void __fastcall FUN_11236060(undefined4 *param_1);
template<class... A> int FUN_11236060(A...);
void FUN_11236110(void);
template<class... A> int FUN_11236110(A...);
int __fastcall FUN_112365a0(int param_1);
template<class... A> int FUN_112365a0(A...);
undefined1 __fastcall FUN_112365c0(int param_1);
template<class... A> int FUN_112365c0(A...);
int __fastcall FUN_11236630(int param_1);
template<class... A> int FUN_11236630(A...);
int __fastcall FUN_11236650(int param_1);
template<class... A> int FUN_11236650(A...);
int __fastcall FUN_11236680(int param_1);
template<class... A> int FUN_11236680(A...);
int __fastcall FUN_112366c0(int param_1);
template<class... A> int FUN_112366c0(A...);
undefined1 __fastcall FUN_112366e0(int param_1);
template<class... A> int FUN_112366e0(A...);
undefined4 FUN_11237be0(char *param_1);
template<class... A> int FUN_11237be0(A...);
int __fastcall FUN_11237cf0(int param_1);
template<class... A> int FUN_11237cf0(A...);
int __fastcall FUN_11237da0(undefined4 *param_1);
template<class... A> int FUN_11237da0(A...);
void __fastcall FUN_11238260(int param_1);
template<class... A> int FUN_11238260(A...);
undefined1 __fastcall FUN_11238b70(int param_1);
template<class... A> int FUN_11238b70(A...);
void __fastcall FUN_11239d30(int param_1);
template<class... A> int FUN_11239d30(A...);
undefined4 __fastcall FUN_11239d50(int param_1);
template<class... A> int FUN_11239d50(A...);
undefined4 __fastcall FUN_11239d70(int param_1);
template<class... A> int FUN_11239d70(A...);
undefined4 __fastcall FUN_11239d90(int param_1);
template<class... A> int FUN_11239d90(A...);
void __fastcall FUN_11239db0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_11239db0(A...);
void __stdcall FUN_1123b1c0(undefined4 param_1);
template<class... A> int FUN_1123b1c0(A...);
undefined1 __fastcall FUN_1123ebd0(int param_1);
template<class... A> int FUN_1123ebd0(A...);
int __fastcall FUN_11240600(int param_1);
template<class... A> int FUN_11240600(A...);
void FUN_11240b40(undefined4 *param_1);
template<class... A> int FUN_11240b40(A...);
int __fastcall FUN_11241850(int param_1);
template<class... A> int FUN_11241850(A...);
int __fastcall FUN_11241890(int param_1);
template<class... A> int FUN_11241890(A...);
void __fastcall FUN_112419e0(int param_1);
template<class... A> int FUN_112419e0(A...);
void __fastcall FUN_11241ca0(int param_1);
template<class... A> int FUN_11241ca0(A...);
void __fastcall FUN_11241dd0(int param_1);
template<class... A> int FUN_11241dd0(A...);
void __fastcall FUN_11242a10(undefined4 *param_1);
template<class... A> int FUN_11242a10(A...);
void __fastcall FUN_11242a90(int param_1);
template<class... A> int FUN_11242a90(A...);
undefined1 __fastcall FUN_11242ad0(int param_1);
template<class... A> int FUN_11242ad0(A...);
undefined1 __fastcall FUN_11242af0(int param_1);
template<class... A> int FUN_11242af0(A...);
void __fastcall FUN_11242b10(int param_1);
template<class... A> int FUN_11242b10(A...);
void __fastcall FUN_11242ca0(int param_1);
template<class... A> int FUN_11242ca0(A...);
void __fastcall FUN_11242d90(int param_1);
template<class... A> int FUN_11242d90(A...);
void __fastcall FUN_11242f30(int param_1);
template<class... A> int FUN_11242f30(A...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4 * __fastcall FUN_11243350(undefined4 *param_1);
template<class... A> int FUN_11243350(A...);
void __fastcall FUN_11243480(undefined4 *param_1);
template<class... A> int FUN_11243480(A...);
void __fastcall FUN_11243770(int *param_1);
template<class... A> int FUN_11243770(A...);
void __fastcall FUN_112437a0(int *param_1);
template<class... A> int FUN_112437a0(A...);
void FUN_11243860(undefined4 param_1);
template<class... A> int FUN_11243860(A...);
void __fastcall FUN_11243910(int *param_1);
template<class... A> int FUN_11243910(A...);
void __fastcall FUN_11243a40(int *param_1);
template<class... A> int FUN_11243a40(A...);
void __fastcall FUN_11244810(int *param_1);
template<class... A> int FUN_11244810(A...);
undefined4 * __fastcall FUN_11244d80(undefined4 *param_1);
template<class... A> int FUN_11244d80(A...);
undefined4 FUN_112454d0(int param_1);
template<class... A> int FUN_112454d0(A...);
undefined2 FUN_112454f0(ushort param_1);
template<class... A> int FUN_112454f0(A...);
void FUN_11245810(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6);
template<class... A> int FUN_11245810(A...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ short FUN_11246be0(undefined4 param_1);
template<class... A> int FUN_11246be0(A...);
void FUN_11246cb0(int param_1,undefined1 *param_2,uint param_3);
template<class... A> int FUN_11246cb0(A...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ short FUN_112471a0(undefined4 param_1);
template<class... A> int FUN_112471a0(A...);
bool FUN_11247bb0(char *param_1);
template<class... A> int FUN_11247bb0(A...);
bool FUN_11247bd0(char *param_1);
template<class... A> int FUN_11247bd0(A...);
void __stdcall FUN_11247c30(undefined4 param_1);
template<class... A> int FUN_11247c30(A...);
void FUN_11247e90(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_11247e90(A...);
void __fastcall FUN_112482b0(int param_1);
template<class... A> int FUN_112482b0(A...);
void FUN_11248330(void);
template<class... A> int FUN_11248330(A...);
undefined8 __fastcall FUN_11248ae0(int param_1);
template<class... A> int FUN_11248ae0(A...);
undefined4 * __fastcall FUN_11249060(undefined4 *param_1);
template<class... A> int FUN_11249060(A...);
void FUN_11249a70(void);
template<class... A> int FUN_11249a70(A...);
undefined1 __stdcall FUN_11249df0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_11249df0(A...);
undefined4 * __fastcall FUN_1124a2d0(undefined4 *param_1);
template<class... A> int FUN_1124a2d0(A...);
void __fastcall FUN_1124a3a0(undefined4 *param_1);
template<class... A> int FUN_1124a3a0(A...);
undefined1 __fastcall FUN_1124ae40(int param_1);
template<class... A> int FUN_1124ae40(A...);
void __fastcall FUN_1124b7f0(int param_1);
template<class... A> int FUN_1124b7f0(A...);
void __fastcall FUN_1124b850(int param_1);
template<class... A> int FUN_1124b850(A...);
uint __stdcall FUN_1124ce80(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
template<class... A> int FUN_1124ce80(A...);
undefined4 __fastcall FUN_1124d1e0(int param_1);
template<class... A> int FUN_1124d1e0(A...);
uint __fastcall FUN_1124d5b0(int param_1);
template<class... A> int FUN_1124d5b0(A...);
uint __fastcall FUN_1124d630(int param_1);
template<class... A> int FUN_1124d630(A...);
int __fastcall FUN_1124d770(int param_1);
template<class... A> int FUN_1124d770(A...);
int FUN_1124d7e0(int param_1);
template<class... A> int FUN_1124d7e0(A...);
undefined4 * __fastcall FUN_1124dee0(undefined4 *param_1);
template<class... A> int FUN_1124dee0(A...);
void __fastcall FUN_1124eb60(undefined4 *param_1);
template<class... A> int FUN_1124eb60(A...);
void __fastcall FUN_1124ecc0(undefined4 *param_1);
template<class... A> int FUN_1124ecc0(A...);
void __fastcall FUN_1124ed10(undefined4 *param_1);
template<class... A> int FUN_1124ed10(A...);
void __fastcall FUN_1124ed70(undefined4 *param_1);
template<class... A> int FUN_1124ed70(A...);
void __fastcall FUN_1124f160(undefined4 *param_1);
template<class... A> int FUN_1124f160(A...);
void FUN_1125033f(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_1125033f(A...);
void __fastcall FUN_112519d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_112519d0(A...);
undefined1 * __fastcall FUN_11252830(int param_1);
template<class... A> int FUN_11252830(A...);
void __fastcall FUN_11253bf0(int param_1);
template<class... A> int FUN_11253bf0(A...);
void __fastcall FUN_11253c30(int param_1);
template<class... A> int FUN_11253c30(A...);
void __fastcall FUN_11253c70(int param_1);
template<class... A> int FUN_11253c70(A...);
void __fastcall FUN_11253df0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_11253df0(A...);
void __fastcall FUN_112554f0(int param_1);
template<class... A> int FUN_112554f0(A...);
void __fastcall FUN_11255560(int param_1);
template<class... A> int FUN_11255560(A...);
void FUN_11255df0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_11255df0(A...);
ulong FUN_11255f20(char *param_1);
template<class... A> int FUN_11255f20(A...);
void FUN_11255f80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_11255f80(A...);
void __fastcall FUN_11257550(int param_1);
template<class... A> int FUN_11257550(A...);
ulong __fastcall FUN_112576a0(char *param_1);
template<class... A> int FUN_112576a0(A...);
ulong FUN_112577d0(char *param_1);
template<class... A> int FUN_112577d0(A...);
undefined4 __fastcall FUN_112578f0(int param_1);
template<class... A> int FUN_112578f0(A...);
void FUN_11258440(void);
template<class... A> int FUN_11258440(A...);
void FUN_112584f0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_112584f0(A...);
ulong __fastcall FUN_11258f20(int param_1);
template<class... A> int FUN_11258f20(A...);
short __fastcall FUN_11259e40(int param_1);
template<class... A> int FUN_11259e40(A...);
short __fastcall FUN_11259ef0(int param_1);
template<class... A> int FUN_11259ef0(A...);
void __fastcall FUN_1125a370(int param_1);
template<class... A> int FUN_1125a370(A...);
void __fastcall FUN_1125b610(int *param_1);
template<class... A> int FUN_1125b610(A...);
void __fastcall FUN_1125b8f0(undefined4 *param_1);
template<class... A> int FUN_1125b8f0(A...);
void FUN_1125bcb0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1125bcb0(A...);
void __fastcall FUN_1125bf40(int param_1);
template<class... A> int FUN_1125bf40(A...);
undefined4 FUN_1125cee0(undefined4 param_1,undefined4 *param_2,uint param_3);
template<class... A> int FUN_1125cee0(A...);
bool __fastcall FUN_1125cf00(char *param_1);
template<class... A> int FUN_1125cf00(A...);
void __fastcall FUN_1125d9a0(undefined4 *param_1);
template<class... A> int FUN_1125d9a0(A...);
void FUN_1125fd30(char *param_1);
template<class... A> int FUN_1125fd30(A...);
void FUN_112607d0(undefined1 param_1);
template<class... A> int FUN_112607d0(A...);
byte __fastcall FUN_11260bb0(int param_1);
template<class... A> int FUN_11260bb0(A...);
void __fastcall FUN_11260bd0(int param_1);
template<class... A> int FUN_11260bd0(A...);
void FUN_11261570(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_11261570(A...);
void __fastcall FUN_11261f10(undefined4 *param_1);
template<class... A> int FUN_11261f10(A...);
void __fastcall FUN_11261f90(int param_1);
template<class... A> int FUN_11261f90(A...);
void __fastcall FUN_11262c80(int param_1);
template<class... A> int FUN_11262c80(A...);
void __fastcall FUN_11262ca0(undefined8 *param_1);
template<class... A> int FUN_11262ca0(A...);
undefined1 __fastcall FUN_112638b0(int param_1);
template<class... A> int FUN_112638b0(A...);
void __fastcall FUN_11264450(int param_1);
template<class... A> int FUN_11264450(A...);
undefined4 FUN_11264a40(char *param_1);
template<class... A> int FUN_11264a40(A...);
void FUN_11264cd0(char *param_1,char param_2);
template<class... A> int FUN_11264cd0(A...);
void FUN_112658f0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_112658f0(A...);
void __fastcall FUN_11266870(undefined4 *param_1);
template<class... A> int FUN_11266870(A...);
void FUN_11266dc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_11266dc0(A...);
void __stdcall FUN_11269b00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7);
template<class... A> int FUN_11269b00(A...);
void __stdcall FUN_11269b40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7);
template<class... A> int FUN_11269b40(A...);
void __stdcall FUN_11269b80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7);
template<class... A> int FUN_11269b80(A...);
void FUN_1126bf20(void);
template<class... A> int FUN_1126bf20(A...);
void __fastcall FUN_1126bf60(int *param_1);
template<class... A> int FUN_1126bf60(A...);
void __fastcall FUN_1126cb20(int param_1);
template<class... A> int FUN_1126cb20(A...);
void __stdcall FUN_1126d350(undefined4 param_1,int *param_2);
template<class... A> int FUN_1126d350(A...);
undefined4 * __fastcall FUN_1126dd90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1126dd90(A...);
void __fastcall FUN_1126e270(int param_1);
template<class... A> int FUN_1126e270(A...);
int FUN_1126e750(uint *param_1,uint *param_2);
template<class... A> int FUN_1126e750(A...);
void __fastcall FUN_1126e840(int param_1);
template<class... A> int FUN_1126e840(A...);
int FUN_1126efa0(int param_1);
template<class... A> int FUN_1126efa0(A...);
int * FUN_1126efd0(int *param_1);
template<class... A> int FUN_1126efd0(A...);
void __stdcall FUN_1126f680(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1126f680(A...);
void __fastcall FUN_1126fcc0(int param_1);
template<class... A> int FUN_1126fcc0(A...);
void __fastcall FUN_11270930(int param_1);
template<class... A> int FUN_11270930(A...);
void __fastcall FUN_11270ae0(undefined4 *param_1);
template<class... A> int FUN_11270ae0(A...);
void FUN_11272130(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_11272130(A...);
void FUN_11272150(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_11272150(A...);
void __fastcall FUN_11272c50(int param_1);
template<class... A> int FUN_11272c50(A...);
void FUN_11273130(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_11273130(A...);
void FUN_11273960(char *param_1,char *param_2,int param_3);
template<class... A> int FUN_11273960(A...);
void FUN_112739b0(uint *param_1,int param_2);
template<class... A> int FUN_112739b0(A...);
void FUN_112739e0(char *param_1);
template<class... A> int FUN_112739e0(A...);
undefined4 * __fastcall FUN_11273f80(undefined4 *param_1);
template<class... A> int FUN_11273f80(A...);
undefined4 * __fastcall FUN_11274120(undefined4 *param_1);
template<class... A> int FUN_11274120(A...);
void __fastcall FUN_11274170(undefined4 *param_1);
template<class... A> int FUN_11274170(A...);
void __fastcall FUN_112742f0(int param_1);
template<class... A> int FUN_112742f0(A...);
void __stdcall FUN_112747a0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_112747a0(A...);
void __stdcall FUN_11274b30(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_11274b30(A...);
void __fastcall FUN_112765b0(undefined4 *param_1);
template<class... A> int FUN_112765b0(A...);
void __fastcall FUN_11276e20(int param_1);
template<class... A> int FUN_11276e20(A...);
void __fastcall FUN_11276e60(int param_1);
template<class... A> int FUN_11276e60(A...);
char __fastcall FUN_11277fc0(int param_1);
template<class... A> int FUN_11277fc0(A...);
void __fastcall FUN_11278180(int param_1);
template<class... A> int FUN_11278180(A...);
char __fastcall FUN_11278b70(int param_1);
template<class... A> int FUN_11278b70(A...);
void __fastcall FUN_11279400(int *param_1);
template<class... A> int FUN_11279400(A...);
void __fastcall FUN_11279b70(int *param_1);
template<class... A> int FUN_11279b70(A...);
void __fastcall FUN_11279dd0(int param_1);
template<class... A> int FUN_11279dd0(A...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4 * __fastcall FUN_11279fe0(undefined4 *param_1);
template<class... A> int FUN_11279fe0(A...);
undefined * FUN_1127a220(uint param_1);
template<class... A> int FUN_1127a220(A...);
void __fastcall FUN_1127c4b0(int param_1);
template<class... A> int FUN_1127c4b0(A...);
undefined1 * FUN_1127c6d0(undefined4 param_1);
template<class... A> int FUN_1127c6d0(A...);
void __stdcall FUN_1127cc30(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1127cc30(A...);
undefined4 FUN_1127ccf0(int param_1,int param_2);
template<class... A> int FUN_1127ccf0(A...);
undefined4 * __fastcall FUN_1127d050(undefined4 *param_1);
template<class... A> int FUN_1127d050(A...);
void __fastcall FUN_1127dee0(int param_1);
template<class... A> int FUN_1127dee0(A...);
char * FUN_1127e380(int param_1);
template<class... A> int FUN_1127e380(A...);
undefined4 __fastcall FUN_1127e420(undefined4 param_1);
template<class... A> int FUN_1127e420(A...);
void __stdcall FUN_11280320(undefined4 param_1);
template<class... A> int FUN_11280320(A...);
undefined4 * __fastcall FUN_11281730(undefined4 *param_1);
template<class... A> int FUN_11281730(A...);
void __fastcall FUN_11281970(undefined4 *param_1);
template<class... A> int FUN_11281970(A...);
void FUN_11282f90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_11282f90(A...);
void FUN_11282fc0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_11282fc0(A...);
undefined4 __fastcall FUN_11283440(int param_1);
template<class... A> int FUN_11283440(A...);
uint FUN_11284060(int param_1,uint param_2,int param_3);
template<class... A> int FUN_11284060(A...);
undefined4 * __fastcall FUN_11285a10(undefined4 *param_1);
template<class... A> int FUN_11285a10(A...);
void __fastcall FUN_11286500(int param_1);
template<class... A> int FUN_11286500(A...);
undefined4 * __fastcall FUN_1128aa80(undefined4 *param_1);
template<class... A> int FUN_1128aa80(A...);
undefined4 * __fastcall FUN_1128abd0(undefined4 *param_1);
template<class... A> int FUN_1128abd0(A...);
undefined4 * __fastcall FUN_1128da40(undefined4 *param_1);
template<class... A> int FUN_1128da40(A...);
undefined4 __fastcall FUN_1128e030(int param_1);
template<class... A> int FUN_1128e030(A...);
void FUN_1128ea10(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1128ea10(A...);
void FUN_1128ea50(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1128ea50(A...);
undefined4 * __fastcall FUN_1128f310(undefined4 *param_1);
template<class... A> int FUN_1128f310(A...);
undefined1 __fastcall FUN_1128f4e0(int param_1);
template<class... A> int FUN_1128f4e0(A...);
undefined1 * __fastcall FUN_1128f6b0(undefined1 *param_1);
template<class... A> int FUN_1128f6b0(A...);
void __fastcall FUN_1128f8c0(undefined1 *param_1);
template<class... A> int FUN_1128f8c0(A...);
undefined4 __fastcall FUN_112929b0(int param_1);
template<class... A> int FUN_112929b0(A...);
undefined4 __fastcall FUN_112929f0(int param_1);
template<class... A> int FUN_112929f0(A...);
void __fastcall FUN_11292a30(int param_1);
template<class... A> int FUN_11292a30(A...);
void __fastcall FUN_11292a60(int param_1);
template<class... A> int FUN_11292a60(A...);
undefined4 * __fastcall FUN_11292af0(undefined4 *param_1);
template<class... A> int FUN_11292af0(A...);
undefined1 __fastcall FUN_11292d70(int param_1);
template<class... A> int FUN_11292d70(A...);
bool __fastcall FUN_11292dc0(int param_1);
template<class... A> int FUN_11292dc0(A...);
undefined4 * __fastcall FUN_11292f70(undefined4 *param_1);
template<class... A> int FUN_11292f70(A...);
void __fastcall FUN_112931c0(int param_1);
template<class... A> int FUN_112931c0(A...);
void __fastcall FUN_112932f0(int param_1);
template<class... A> int FUN_112932f0(A...);
void __fastcall FUN_11293910(int param_1);
template<class... A> int FUN_11293910(A...);
void FUN_11293960(undefined4 param_1,undefined4 param_2,uint param_3);
template<class... A> int FUN_11293960(A...);
int FUN_11293aa0(void);
template<class... A> int FUN_11293aa0(A...);
void __stdcall FUN_11293dd0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_11293dd0(A...);
void FUN_11293e20(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4);
template<class... A> int FUN_11293e20(A...);
void __stdcall FUN_112942e0(undefined4 param_1,int *param_2);
template<class... A> int FUN_112942e0(A...);
undefined4 * __fastcall FUN_11294820(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_11294820(A...);
undefined4 * __fastcall FUN_112949f0(undefined4 *param_1);
template<class... A> int FUN_112949f0(A...);
void __fastcall FUN_11294ae0(int param_1);
template<class... A> int FUN_11294ae0(A...);
void __fastcall FUN_11294de0(int param_1);
template<class... A> int FUN_11294de0(A...);
void __fastcall FUN_112953c0(int param_1);
template<class... A> int FUN_112953c0(A...);
void FUN_11297630(undefined4 param_1);
template<class... A> int FUN_11297630(A...);
void __fastcall FUN_112983c0(int param_1);
template<class... A> int FUN_112983c0(A...);
undefined4 FUN_11299740(int param_1);
template<class... A> int FUN_11299740(A...);
undefined4 FUN_11299c80(uint param_1);
template<class... A> int FUN_11299c80(A...);
bool FUN_11299d40(void);
template<class... A> int FUN_11299d40(A...);
void FUN_1129ad00(int param_1);
template<class... A> int FUN_1129ad00(A...);
undefined4 * __fastcall FUN_1129b080(undefined4 *param_1);
template<class... A> int FUN_1129b080(A...);
void FUN_1129b0c0(int param_1,int *param_2,uint param_3);
template<class... A> int FUN_1129b0c0(A...);
void __fastcall FUN_1129b2a0(int param_1);
template<class... A> int FUN_1129b2a0(A...);
undefined4 FUN_1129bb20(char *param_1,undefined4 param_2);
template<class... A> int FUN_1129bb20(A...);
void __fastcall FUN_1129c7e0(undefined4 *param_1);
template<class... A> int FUN_1129c7e0(A...);
void FUN_1129d2a0(undefined1 param_1,undefined4 *param_2);
template<class... A> int FUN_1129d2a0(A...);
void __fastcall FUN_1129db20(undefined4 *param_1);
template<class... A> int FUN_1129db20(A...);
void FUN_1129e050(void *param_1);
template<class... A> int FUN_1129e050(A...);
void FUN_1129e0d0(int param_1,undefined4 param_2);
template<class... A> int FUN_1129e0d0(A...);
undefined4 FUN_1129e4e0(int *param_1,int param_2);
template<class... A> int FUN_1129e4e0(A...);
void FUN_1129e510(undefined4 *param_1);
template<class... A> int FUN_1129e510(A...);
void FUN_1129e530(undefined4 *param_1);
template<class... A> int FUN_1129e530(A...);
uint FUN_1129e560(int *param_1,int param_2);
template<class... A> int FUN_1129e560(A...);
void FUN_1129e790(undefined4 *param_1);
template<class... A> int FUN_1129e790(A...);
void FUN_1129e8e0(int param_1);
template<class... A> int FUN_1129e8e0(A...);
void FUN_1129ee10(undefined4 *param_1);
template<class... A> int FUN_1129ee10(A...);
bool FUN_1129eea0(int *param_1);
template<class... A> int FUN_1129eea0(A...);
void FUN_1129eef0(undefined4 *param_1);
template<class... A> int FUN_1129eef0(A...);
bool FUN_1129efe0(undefined4 *param_1,LPWIN32_FIND_DATAW param_2);
template<class... A> int FUN_1129efe0(A...);
bool FUN_1129f260(int *param_1,long param_2,int param_3);
template<class... A> int FUN_1129f260(A...);
bool FUN_1129f300(int param_1,int param_2);
template<class... A> int FUN_1129f300(A...);
bool FUN_1129fb30(int param_1,undefined4 param_2);
template<class... A> int FUN_1129fb30(A...);
int FUN_112a0060(int *param_1,int *param_2);
template<class... A> int FUN_112a0060(A...);
void FUN_112a09d0(int param_1,byte param_2);
template<class... A> int FUN_112a09d0(A...);
int FUN_112a0ac0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_112a0ac0(A...);
char * FUN_112a0af0(ushort param_1);
template<class... A> int FUN_112a0af0(A...);
undefined4 FUN_112a0c30(int param_1);
template<class... A> int FUN_112a0c30(A...);
void FUN_112a0fd0(void);
template<class... A> int FUN_112a0fd0(A...);
void FUN_112a1000(void);
template<class... A> int FUN_112a1000(A...);
uint FUN_112a1060(undefined4 *param_1);
template<class... A> int FUN_112a1060(A...);
void FUN_112a1350(int param_1);
template<class... A> int FUN_112a1350(A...);
void FUN_112a2890(int param_1,undefined4 param_2);
template<class... A> int FUN_112a2890(A...);
undefined4 FUN_112a28d0(int param_1);
template<class... A> int FUN_112a28d0(A...);
void FUN_112a29b0(int param_1,undefined4 param_2);
template<class... A> int FUN_112a29b0(A...);
void FUN_112a2b30(int param_1);
template<class... A> int FUN_112a2b30(A...);
undefined4 FUN_112a3190(int param_1,int param_2);
template<class... A> int FUN_112a3190(A...);
undefined4 FUN_112a31c0(int param_1);
template<class... A> int FUN_112a31c0(A...);
undefined4 FUN_112a3470(int param_1);
template<class... A> int FUN_112a3470(A...);
void FUN_112a4c30(void);
template<class... A> int FUN_112a4c30(A...);
void FUN_112a4e30(int param_1,short param_2);
template<class... A> int FUN_112a4e30(A...);
void FUN_112a5110(int param_1,undefined4 param_2);
template<class... A> int FUN_112a5110(A...);
void FUN_112a5130(int param_1,int param_2);
template<class... A> int FUN_112a5130(A...);
void FUN_112a5340(int param_1);
template<class... A> int FUN_112a5340(A...);
undefined4 FUN_112a7b20(int *param_1);
template<class... A> int FUN_112a7b20(A...);
undefined4 FUN_112a7c30(int param_1);
template<class... A> int FUN_112a7c30(A...);
bool FUN_112a7c70(int *param_1);
template<class... A> int FUN_112a7c70(A...);
bool FUN_112a7ea0(undefined4 *param_1);
template<class... A> int FUN_112a7ea0(A...);
bool FUN_112a7ee0(undefined4 *param_1);
template<class... A> int FUN_112a7ee0(A...);
void FUN_112a7f20(undefined4 *param_1);
template<class... A> int FUN_112a7f20(A...);
bool FUN_112a8010(undefined4 *param_1);
template<class... A> int FUN_112a8010(A...);
void FUN_112a8280(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_112a8280(A...);
uint FUN_112a8810(int *param_1,undefined4 param_2);
template<class... A> int FUN_112a8810(A...);
undefined4 FUN_112a8860(int *param_1);
template<class... A> int FUN_112a8860(A...);
bool FUN_112a8930(int *param_1);
template<class... A> int FUN_112a8930(A...);
undefined4 FUN_112a8b50(int *param_1);
template<class... A> int FUN_112a8b50(A...);
void FUN_112a8cc0(void);
template<class... A> int FUN_112a8cc0(A...);
undefined4 FUN_112a9120(int param_1,int param_2);
template<class... A> int FUN_112a9120(A...);
bool FUN_112a9160(int *param_1,undefined4 param_2);
template<class... A> int FUN_112a9160(A...);
void FUN_112a9380(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_112a9380(A...);
void FUN_112a94d0(int param_1);
template<class... A> int FUN_112a94d0(A...);
undefined4 FUN_112a9770(undefined4 *param_1);
template<class... A> int FUN_112a9770(A...);
void FUN_112a97a0(undefined4 *param_1);
template<class... A> int FUN_112a97a0(A...);
void FUN_112a97e0(undefined4 *param_1);
template<class... A> int FUN_112a97e0(A...);
void FUN_112a9800(undefined4 *param_1);
template<class... A> int FUN_112a9800(A...);
void FUN_112a9d20(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_112a9d20(A...);
void FUN_112a9da0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5);
template<class... A> int FUN_112a9da0(A...);
undefined4 FUN_112a9f10(int param_1);
template<class... A> int FUN_112a9f10(A...);
char * FUN_112aae70(uint param_1);
template<class... A> int FUN_112aae70(A...);
void FUN_112ab370(undefined4 *param_1);
template<class... A> int FUN_112ab370(A...);
void FUN_112ab3b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5);
template<class... A> int FUN_112ab3b0(A...);
void FUN_112ac1b0(void);
template<class... A> int FUN_112ac1b0(A...);
void * FUN_112ac970(undefined4 param_1,char *param_2);
template<class... A> int FUN_112ac970(A...);
void FUN_112acda0(int param_1);
template<class... A> int FUN_112acda0(A...);
void FUN_112acdf0(int param_1);
template<class... A> int FUN_112acdf0(A...);
void FUN_112ace40(int param_1);
template<class... A> int FUN_112ace40(A...);
void FUN_112ad0e0(int param_1);
template<class... A> int FUN_112ad0e0(A...);
void FUN_112ad130(int param_1);
template<class... A> int FUN_112ad130(A...);
void FUN_112adb20(int param_1,char *param_2);
template<class... A> int FUN_112adb20(A...);
void FUN_112ae930(int param_1);
template<class... A> int FUN_112ae930(A...);
void FUN_112af170(int param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_112af170(A...);
void FUN_112af4e0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_112af4e0(A...);
void FUN_112b0270(undefined4 param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_112b0270(A...);
longlong FUN_112b0310(void);
template<class... A> int FUN_112b0310(A...);
uint FUN_112b04b0(byte *param_1);
template<class... A> int FUN_112b04b0(A...);
void FUN_112b0880(undefined4 *param_1);
template<class... A> int FUN_112b0880(A...);
// Reference entry 110f6f60; body size 50 bytes.
#line 1 "ENTRY_110f6f60"

void __thiscall Recovered_Bulk::m_FUN_110f6f60(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_111a7590(0), 0);
  *(undefined4*)(param_1 + 8) = (undefined4)(uVar1);
  thunk_FUN_111a7a50(uVar1,"/PrimaryUDN",param_2);
  thunk_FUN_111a7800(*(undefined4 *)(param_1 + 0xc),param_3,*(undefined4 *)(param_1 + 8));
  return;
}


// Reference entry 110f6fa0; body size 33 bytes.
#line 1 "ENTRY_110f6fa0"

void __thiscall Recovered_Bulk::m_FUN_110f6fa0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_111a7590(0), 0);
  *(undefined4*)(param_1 + 8) = (undefined4)(uVar1);
  thunk_FUN_111a7800(*(undefined4 *)(param_1 + 4),param_2,uVar1);
  return;
}


// Reference entry 110f6fd0; body size 32 bytes.
#line 1 "ENTRY_110f6fd0"

void __fastcall FUN_110f6fd0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_111a7590(0), 0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(uVar1);
  thunk_FUN_111a7800(*(undefined4 *)(param_1 + 4),"QuarantinedDevices",uVar1);
  return;
}


// Reference entry 110f7000; body size 32 bytes.
#line 1 "ENTRY_110f7000"

void __fastcall FUN_110f7000(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_111a7590(0), 0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(uVar1);
  thunk_FUN_111a7800(*(undefined4 *)(param_1 + 4),"VanishedZoneGroups",uVar1);
  return;
}


// Reference entry 110f82a0; body size 29 bytes.
#line 1 "ENTRY_110f82a0"

void __fastcall FUN_110f82a0(int param_1)

{
  *(undefined1*)(param_1 + 0xc) = (undefined1)(1);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(0);
  thunk_FUN_113d3650(param_1 + 0x38);
  return;
}


// Reference entry 110f8eb0; body size 53 bytes.
#line 1 "ENTRY_110f8eb0"

undefined4 * __fastcall FUN_110f8eb0(undefined4 *param_1)

{
  *(byte*)(param_1 + 4) = (byte)(*(byte *)(param_1 + 4) & 0xf8);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0x10000);
  param_1[3] = (undefined4)(0);
  *(undefined2*)((int)param_1 + 0x11) = (undefined2)(0xffff);
  param_1[5] = (undefined4)(99999);
  *(undefined2*)(param_1 + 6) = (undefined2)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 110f8f90; body size 59 bytes.
#line 1 "ENTRY_110f8f90"

undefined4 * __fastcall FUN_110f8f90(undefined4 *param_1)

{
  HANDLE pvVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpdateWorkerThread);
  param_1[9] = (undefined4)(0);
  *(undefined2*)(param_1 + 10) = (undefined2)(0);
  *(undefined1*)((int)param_1 + 0x2a) = (undefined1)(0);
  thunk_FUN_112a9cf0(param_1 + 7);
  pvVar1 = (HANDLE)(CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0), 0);
  param_1[0xb] = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 110f95b0; body size 62 bytes.
#line 1 "ENTRY_110f95b0"

void __fastcall FUN_110f95b0(int param_1)

{
  *(undefined***)(param_1 + 0x68c) = (undefined **)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  *(undefined***)(param_1 + 0x680) = (undefined **)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  *(undefined***)(param_1 + 0x674) = (undefined **)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  thunk_FUN_11261f10();
  return;
}


// Reference entry 110f9660; body size 35 bytes.
#line 1 "ENTRY_110f9660"

void __fastcall FUN_110f9660(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    if (puVar1[-1] != 0) {
      (**(code **)*puVar1)(3);
      return;
    }
    thunk_FUN_1148b596(puVar1 + -1,4);
  }
  return;
}


// Reference entry 110f9b50; body size 38 bytes.
#line 1 "ENTRY_110f9b50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110f9b50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110f9b80; body size 38 bytes.
#line 1 "ENTRY_110f9b80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110f9b80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110f9bb0; body size 38 bytes.
#line 1 "ENTRY_110f9bb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110f9bb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110f9cd0; body size 27 bytes.
#line 1 "ENTRY_110f9cd0"

undefined4 __thiscall Recovered_Bulk::m_FUN_110f9cd0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4)(param_1);
}


// Reference entry 110f9d00; body size 33 bytes.
#line 1 "ENTRY_110f9d00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110f9d00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpdateManifestConsumer);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110f9d30; body size 33 bytes.
#line 1 "ENTRY_110f9d30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110f9d30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110f9de0; body size 58 bytes.
#line 1 "ENTRY_110f9de0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110f9de0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpZGTCheckForUpdateAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpZGTCheckForUpdateAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpZGTCheckForUpdateAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe3d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110f9e30; body size 35 bytes.
#line 1 "ENTRY_110f9e30"

undefined4 __thiscall Recovered_Bulk::m_FUN_110f9e30(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_110f9770();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1b40);
  }
  return (undefined4)(param_1);
}


// Reference entry 110fc250; body size 20 bytes.
#line 1 "ENTRY_110fc250"

void FUN_110fc250(void)

{
  thunk_FUN_11175770(PTR_DAT_12126b6c,"onlineupdate-inprogress.txt");
  return;
}


// Reference entry 110fc270; body size 42 bytes.
#line 1 "ENTRY_110fc270"

void FUN_110fc270(void)

{
  if (DAT_122e8a1c != '\0') {
    free(PTR_DAT_1211df30);
    PTR_DAT_1211df30 = (int *)(&DAT_1186d2ee);
    DAT_122e8a1c = (int)('\0');
  }
  return;
}


// Reference entry 110fd290; body size 17 bytes.
#line 1 "ENTRY_110fd290"

int __thiscall Recovered_Bulk::m_FUN_110fd290(int param_2)
{
  int param_1 = (int )this;
  return (int)(param_2 * 0x4d4 + *(int *)(param_1 + 0x1a14));
}


// Reference entry 110ff4e0; body size 49 bytes.
#line 1 "ENTRY_110ff4e0"

void __fastcall FUN_110ff4e0(int param_1)

{
  if ((*(char *)(param_1 + 0x1a34) == '\0') && (*(char *)(param_1 + 0x1a35) == '\0')) {
    thunk_FUN_1107e1f0<>(param_1);
  }
  *(undefined1*)(param_1 + 0x1a34) = (undefined1)(1);
  *(undefined4*)(param_1 + 0x1a24) = (undefined4)(6);
  return;
}


// Reference entry 111001c0; body size 34 bytes.
#line 1 "ENTRY_111001c0"

void __fastcall FUN_111001c0(int param_1)

{
  if (*(int *)(param_1 + 0x1a38) != 0) {
    thunk_FUN_11175760(*(int *)(param_1 + 0x1a38));
  }
  *(undefined4*)(param_1 + 0x1a38) = (undefined4)(0);
  return;
}


// Reference entry 111002e0; body size 22 bytes.
#line 1 "ENTRY_111002e0"

int __fastcall FUN_111002e0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x1a24));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 3) && (iVar1 != 4)) {
    return (int)((uint)uVar2 << 8);
  }
  return (int)(((uint)(uVar2) << 8 | (uint)(1)));
}


// Reference entry 11100300; body size 21 bytes.
#line 1 "ENTRY_11100300"

int __fastcall FUN_11100300(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x1a24));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 0) && (iVar1 != 10)) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 11100320; body size 36 bytes.
#line 1 "ENTRY_11100320"

void __fastcall FUN_11100320(int param_1)

{
  *(undefined2*)(param_1 + 0x28) = (undefined2)(0x101);
  SetEvent(*(HANDLE *)(param_1 + 0x2c));
  thunk_FUN_112a82d0(param_1 + 4);
  *(undefined1*)(param_1 + 0x2a) = (undefined1)(0);
  return;
}


// Reference entry 11101900; body size 46 bytes.
#line 1 "ENTRY_11101900"

undefined4 __fastcall FUN_11101900(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x24) + 0x13dc) != '\0') {
    thunk_FUN_110facf0(1);
    *(undefined4*)(param_1 + 0x1a24) = (undefined4)(6);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 11101940; body size 37 bytes.
#line 1 "ENTRY_11101940"

uint __fastcall FUN_11101940(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)((**(code **)(*param_1 + 0x10))(), 0);
  uVar2 = (uint)((**(code **)(*(int *)param_1[1] + 4))(param_1), 0);
  (**(code **)*param_1)(1);
  return (uint)(uVar1 | uVar2);
}


// Reference entry 11101c70; body size 50 bytes.
#line 1 "ENTRY_11101c70"

void FUN_11101c70(char *param_1)

{
  if (DAT_122e8a1c != '\0') {
    free(PTR_DAT_1211df30);
  }
  PTR_DAT_1211df30 = (int *)(_strdup(param_1), 0);
  DAT_122e8a1c = (int)('\x01');
  return;
}


// Reference entry 11101cb0; body size 24 bytes.
#line 1 "ENTRY_11101cb0"

void __thiscall Recovered_Bulk::m_FUN_11101cb0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1145c250(param_1 + 0x1b1c,param_2,0x21);
  return;
}


// Reference entry 11102250; body size 26 bytes.
#line 1 "ENTRY_11102250"

bool FUN_11102250(void)

{
  short sVar1;
  short sVar2;
  
  sVar1 = (short)(thunk_FUN_110ce370(), 0);
  sVar2 = (short)(thunk_FUN_11272de0(), 0);
  return (bool)(sVar1 == sVar2);
}


// Reference entry 11102d50; body size 37 bytes.
#line 1 "ENTRY_11102d50"

void __fastcall FUN_11102d50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RNSQueryNetParamsOp);
  thunk_FUN_113cfb70(param_1 + 0x8d,0x3c8);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  return;
}


// Reference entry 111030d0; body size 33 bytes.
#line 1 "ENTRY_111030d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111030d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x3c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111031e0; body size 62 bytes.
#line 1 "ENTRY_111031e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111031e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RNSQueryNetParamsOp);
  thunk_FUN_113cfb70(param_1 + 0x8d,0x3c8);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x608);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11103230; body size 33 bytes.
#line 1 "ENTRY_11103230"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11103230(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x3c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11103360; body size 32 bytes.
#line 1 "ENTRY_11103360"

undefined4 __thiscall Recovered_Bulk::m_FUN_11103360(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1125d9d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}


// Reference entry 11103420; body size 35 bytes.
#line 1 "ENTRY_11103420"

undefined4 __thiscall Recovered_Bulk::m_FUN_11103420(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11102ee0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6bc);
  }
  return (undefined4)(param_1);
}


// Reference entry 11103e70; body size 45 bytes.
#line 1 "ENTRY_11103e70"

void __thiscall Recovered_Bulk::m_FUN_11103e70(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 11103fb0; body size 51 bytes.
#line 1 "ENTRY_11103fb0"

void FUN_11103fb0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(DAT_122e8a20);
  if ((undefined4 *)(DAT_122e8a20) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(DAT_122e8a20 + 1), 0);
    if ((iVar2 == 0) && ((undefined4 *)(puVar1) != (undefined4 *)(0x0))) {
      (**(code **)*puVar1)(1);
    }
  }
  DAT_122e8a20 = (int)((undefined4 *)0x0);
  return;
}


// Reference entry 11104170; body size 51 bytes.
#line 1 "ENTRY_11104170"

void __fastcall FUN_11104170(int param_1)

{
  undefined2 uVar1;
  
  thunk_FUN_112af4e0("joinhh",10,"RNSGetChannelAssessmentOp: doWork()");
  uVar1 = (undefined2)(thunk_FUN_1125de40(param_1 + 0x10,param_1 + 0x18,param_1 + 0x34, *(undefined1 *)(param_1 + 0x38)), 0);
  *(undefined2*)(param_1 + 0xc) = (undefined2)(uVar1);
  return;
}


// Reference entry 111044f0; body size 50 bytes.
#line 1 "ENTRY_111044f0"

void __fastcall FUN_111044f0(int param_1)

{
  undefined2 uVar1;
  
  thunk_FUN_112af4e0("joinhh",10,"RNSRevertChannelOp: doWork()");
  uVar1 = (undefined2)(thunk_FUN_1125f590(param_1 + 0x10,param_1 + 0x18,*(undefined4 *)(param_1 + 0x34), *(undefined1 *)(param_1 + 0x38)), 0);
  *(undefined2*)(param_1 + 0xc) = (undefined2)(uVar1);
  return;
}


// Reference entry 111045e0; body size 43 bytes.
#line 1 "ENTRY_111045e0"

void __fastcall FUN_111045e0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 11106f40; body size 39 bytes.
#line 1 "ENTRY_11106f40"

void __fastcall FUN_11106f40(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x28));
  if (iVar1 != 0) {
    thunk_FUN_1125d9d0();
    thunk_FUN_1148a50e(iVar1,4);
    *(undefined4*)(param_1 + 0x28) = (undefined4)(0);
  }
  return;
}


// Reference entry 11106f80; body size 55 bytes.
#line 1 "ENTRY_11106f80"

void __fastcall FUN_11106f80(int param_1)

{
  *(undefined1*)(param_1 + 0x50) = (undefined1)(1);
  FUN_112a9d50(param_1 + 0x1c);
  *(undefined1*)(param_1 + 0x52) = (undefined1)(1);
  FUN_112aa350(param_1 + 0x24);
  FUN_112a9d70(param_1 + 0x1c);
  FUN_112a9e10(param_1 + 4);
  *(undefined1*)(param_1 + 0x51) = (undefined1)(0);
  return;
}


// Reference entry 11107bc0; body size 38 bytes.
#line 1 "ENTRY_11107bc0"

void __fastcall FUN_11107bc0(int param_1)

{
  FUN_112a9d50(param_1 + 0x1c);
  *(undefined1*)(param_1 + 0x52) = (undefined1)(1);
  FUN_112aa350(param_1 + 0x24);
  FUN_112a9d70(param_1 + 0x1c);
  return;
}


// Reference entry 11108ca0; body size 57 bytes.
#line 1 "ENTRY_11108ca0"

void __stdcall FUN_11108ca0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_11108ca0(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x20);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 11108cf0; body size 49 bytes.
#line 1 "ENTRY_11108cf0"

int __thiscall Recovered_Bulk::m_FUN_11108cf0(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_11108d30((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || ((int)(*param_2) < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 11109990; body size 48 bytes.
#line 1 "ENTRY_11109990"

undefined4 * __fastcall FUN_11109990(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 1110b060; body size 56 bytes.
#line 1 "ENTRY_1110b060"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1110b060(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4bc0(param_2,"Array");
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjArray);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1110b2f0; body size 19 bytes.
#line 1 "ENTRY_1110b2f0"

void __fastcall FUN_1110b2f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x20);
  }
  return;
}


// Reference entry 1110b3a0; body size 17 bytes.
#line 1 "ENTRY_1110b3a0"

void __fastcall FUN_1110b3a0(undefined4 *param_1)

{
  thunk_FUN_111084f0(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 1110ca60; body size 38 bytes.
#line 1 "ENTRY_1110ca60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1110ca60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1110ca90; body size 38 bytes.
#line 1 "ENTRY_1110ca90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1110ca90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1110cac0; body size 38 bytes.
#line 1 "ENTRY_1110cac0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1110cac0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1110caf0; body size 38 bytes.
#line 1 "ENTRY_1110caf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1110caf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1110cb20; body size 38 bytes.
#line 1 "ENTRY_1110cb20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1110cb20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1110cb50; body size 38 bytes.
#line 1 "ENTRY_1110cb50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1110cb50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1110cb80; body size 38 bytes.
#line 1 "ENTRY_1110cb80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1110cb80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1110cbb0; body size 38 bytes.
#line 1 "ENTRY_1110cbb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1110cbb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1110cbe0; body size 38 bytes.
#line 1 "ENTRY_1110cbe0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1110cbe0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1110cc10; body size 38 bytes.
#line 1 "ENTRY_1110cc10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1110cc10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1110cc40; body size 38 bytes.
#line 1 "ENTRY_1110cc40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1110cc40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1110cc70; body size 38 bytes.
#line 1 "ENTRY_1110cc70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1110cc70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1110ce80; body size 33 bytes.
#line 1 "ENTRY_1110ce80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1110ce80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RACListCallback);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1110ceb0; body size 35 bytes.
#line 1 "ENTRY_1110ceb0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1110ceb0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1110b4d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc28);
  }
  return (undefined4)(param_1);
}


// Reference entry 1110cee0; body size 58 bytes.
#line 1 "ENTRY_1110cee0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1110cee0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACGetFormatAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACGetFormatAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACGetFormatAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1110cf30; body size 58 bytes.
#line 1 "ENTRY_1110cf30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1110cf30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACGetTimeNowAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACGetTimeNowAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACGetTimeNowAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd820);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1110cf80; body size 58 bytes.
#line 1 "ENTRY_1110cf80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1110cf80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACGetTimeServerAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACGetTimeServerAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACGetTimeServerAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd858);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1110cfd0; body size 58 bytes.
#line 1 "ENTRY_1110cfd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1110cfd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACGetTimeZoneAndRuleAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACGetTimeZoneAndRuleAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACGetTimeZoneAndRuleAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7f8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1110d020; body size 58 bytes.
#line 1 "ENTRY_1110d020"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1110d020(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACListAlarmsAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACListAlarmsAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACListAlarmsAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7f0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1110d070; body size 58 bytes.
#line 1 "ENTRY_1110d070"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1110d070(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpRCGetOutputFixedAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpRCGetOutputFixedAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpRCGetOutputFixedAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1110d0c0; body size 38 bytes.
#line 1 "ENTRY_1110d0c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1110d0c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjAC);
  thunk_FUN_1113e6f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1110d280; body size 35 bytes.
#line 1 "ENTRY_1110d280"

undefined4 __thiscall Recovered_Bulk::m_FUN_1110d280(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1110b940();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x218);
  }
  return (undefined4)(param_1);
}


// Reference entry 1110d2b0; body size 32 bytes.
#line 1 "ENTRY_1110d2b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1110d2b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_111a8370();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4)(param_1);
}


// Reference entry 1110d700; body size 63 bytes.
#line 1 "ENTRY_1110d700"

void FUN_1110d700(undefined1 *param_1)

{
  thunk_FUN_111a6a30(&DAT_119c9c20,*param_1);
  thunk_FUN_111a6a30("minute",param_1[1]);
  thunk_FUN_111a6a30("second",param_1[2]);
  return;
}


// Reference entry 1110d9d0; body size 25 bytes.
#line 1 "ENTRY_1110d9d0"

void __fastcall FUN_1110d9d0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 1110dd10; body size 20 bytes.
#line 1 "ENTRY_1110dd10"

void __thiscall Recovered_Bulk::m_FUN_1110dd10(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_111084f0(param_2,param_3,param_1);
  return;
}


// Reference entry 1110ea40; body size 31 bytes.
#line 1 "ENTRY_1110ea40"

int * FUN_1110ea40(int *param_1)

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


// Reference entry 1110ef60; body size 32 bytes.
#line 1 "ENTRY_1110ef60"

void __thiscall Recovered_Bulk::m_FUN_1110ef60(undefined4 param_2)
{
  int param_1 = (int )this;
  FUN_10070892(param_2);
  if (*(char *)(param_1 + 0x34) == '\0') {
    thunk_FUN_1111c700();
  }
  return;
}


// Reference entry 1110f120; body size 45 bytes.
#line 1 "ENTRY_1110f120"

void __thiscall Recovered_Bulk::m_FUN_1110f120(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 1110f4a0; body size 30 bytes.
#line 1 "ENTRY_1110f4a0"

void __fastcall FUN_1110f4a0(int param_1)

{
  thunk_FUN_110b0460(1);
  thunk_FUN_110adac0(param_1 + 0x68);
  return;
}


// Reference entry 1110f630; body size 46 bytes.
#line 1 "ENTRY_1110f630"

void __fastcall FUN_1110f630(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  iVar2 = (int)(*param_1);
  if (iVar2 != iVar1) {
    do {
      thunk_FUN_10ba6fd0();
      iVar2 = (int)(iVar2 + 0x24);
    } while (iVar2 != iVar1);
    param_1[1] = (int)(*param_1);
    return;
  }
  param_1[1] = (int)(iVar2);
  return;
}


// Reference entry 1110f670; body size 24 bytes.
#line 1 "ENTRY_1110f670"

void __fastcall FUN_1110f670(undefined4 *param_1)

{
  thunk_FUN_111084f0(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 1110fc20; body size 60 bytes.
#line 1 "ENTRY_1110fc20"

void __stdcall FUN_1110fc20(int param_1,int param_2)

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


// Reference entry 1110ff50; body size 43 bytes.
#line 1 "ENTRY_1110ff50"

void __fastcall FUN_1110ff50(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 11110b90; body size 59 bytes.
#line 1 "ENTRY_11110b90"

void __thiscall Recovered_Bulk::m_FUN_11110b90(uint *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  if (*(char *)(param_1 + 0x170) != '\0') {
    thunk_FUN_11119580();
    return;
  }
  thunk_FUN_111191d0();
  if ((uint *)(param_2) != (uint *)(0x0)) {
    uVar1 = (uint)(thunk_FUN_111a7100("OnAlarmsChanged",0,0), 0);
    *param_2 = (uint)(*param_2 | uVar1);
  }
  return;
}


// Reference entry 11111570; body size 50 bytes.
#line 1 "ENTRY_11111570"

undefined4 FUN_11111570(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)(thunk_FUN_110828b0(), 0);
  iVar2 = (int)((*(code *)**(undefined4 **)(iVar2 + 0x1c))(), 0);
  if (iVar2 != 0) {
    cVar1 = (char)(thunk_FUN_110d3ac0(), 0);
    if (cVar1 != '\0') {
      iVar2 = (int)(thunk_FUN_110cb560(), 0);
      if (iVar2 != 0) {
        return (undefined4)(*(undefined4 *)(iVar2 + 0x2c));
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 111115b0; body size 34 bytes.
#line 1 "ENTRY_111115b0"

undefined4 __fastcall FUN_111115b0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar1 = (int)(thunk_FUN_110cb840(), 0);
    if (iVar1 != 0) {
      iVar1 = (int)(thunk_FUN_110cb840(), 0);
      return (undefined4)(*(undefined4 *)(iVar1 + 0x2c));
    }
  }
  return (undefined4)(0);
}


// Reference entry 111115e0; body size 36 bytes.
#line 1 "ENTRY_111115e0"

undefined4 __thiscall Recovered_Bulk::m_FUN_111115e0(uint param_2)
{
  int param_1 = (int )this;
  if ((uint)(*(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x8c) >> 2) <= param_2) {
    return (undefined4)(0);
  }
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x8c) + param_2 * 4));
}


// Reference entry 11111610; body size 16 bytes.
#line 1 "ENTRY_11111610"

int __fastcall FUN_11111610(int param_1)

{
  return (int)(*(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x8c) >> 2);
}


// Reference entry 11111e10; body size 36 bytes.
#line 1 "ENTRY_11111e10"

undefined1 __fastcall FUN_11111e10(int param_1)

{
  undefined1 uVar1;
  short sVar2;
  
  if (*(char *)(param_1 + 0x14d) == -1) {
    sVar2 = (short)(thunk_FUN_11119c00(), 0);
    if (sVar2 != 0) {
      uVar1 = (undefined1)(thunk_FUN_1115c410(), 0);
      return (undefined1)(uVar1);
    }
  }
  return (undefined1)(*(undefined1 *)(param_1 + 0x14d));
}


// Reference entry 11111e40; body size 21 bytes.
#line 1 "ENTRY_11111e40"

void __fastcall FUN_11111e40(int param_1)

{
  if (*(char *)(param_1 + 0x14d) == -1) {
    thunk_FUN_11119cb0();
    thunk_FUN_1115c410();
    return;
  }
  return;
}


// Reference entry 11112330; body size 18 bytes.
#line 1 "ENTRY_11112330"

undefined ** __stdcall FUN_11112330(undefined4 *param_1)

{
  *param_1 = (undefined4)(7);
  return (undefined **)(&PTR_s_AlarmListVersion_119c93b4);
}


// Reference entry 11112590; body size 36 bytes.
#line 1 "ENTRY_11112590"

void __thiscall Recovered_Bulk::m_FUN_11112590(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0xc7e) = (undefined1)(1);
  *(undefined4*)(param_1 + 0xc8c) = (undefined4)(param_4);
  thunk_FUN_11115d10(param_2,param_3);
  return;
}


// Reference entry 111135c0; body size 36 bytes.
#line 1 "ENTRY_111135c0"

undefined1 __fastcall FUN_111135c0(int param_1)

{
  undefined1 uVar1;
  short sVar2;
  
  if (*(char *)(param_1 + 0x14c) == -1) {
    sVar2 = (short)(thunk_FUN_11119c00(), 0);
    if (sVar2 != 0) {
      uVar1 = (undefined1)(thunk_FUN_1115c4e0(), 0);
      return (undefined1)(uVar1);
    }
  }
  return (undefined1)(*(undefined1 *)(param_1 + 0x14c));
}


// Reference entry 111135f0; body size 21 bytes.
#line 1 "ENTRY_111135f0"

void __fastcall FUN_111135f0(int param_1)

{
  if (*(char *)(param_1 + 0x14c) == -1) {
    thunk_FUN_11119cb0();
    thunk_FUN_1115c4e0();
    return;
  }
  return;
}


// Reference entry 111138b0; body size 21 bytes.
#line 1 "ENTRY_111138b0"

int __fastcall FUN_111138b0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x50));
  if (iVar1 == 0) {
    thunk_FUN_1111cb60<>(0);
    iVar1 = (int)(*(int *)(param_1 + 0x50));
  }
  return (int)(iVar1);
}


// Reference entry 111138d0; body size 20 bytes.
#line 1 "ENTRY_111138d0"

int __fastcall FUN_111138d0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x50));
  if (iVar1 == 0) {
    thunk_FUN_1111cd70();
    iVar1 = (int)(*(int *)(param_1 + 0x50));
  }
  return (int)(iVar1);
}


// Reference entry 11113bb0; body size 48 bytes.
#line 1 "ENTRY_11113bb0"

undefined4 __thiscall Recovered_Bulk::m_FUN_11113bb0(undefined4 *param_2,undefined1 *param_3)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x140));
  *param_3 = (undefined1)(*(undefined1 *)(param_1 + 0x144));
  if (*(int *)(param_1 + 0x140) == -1) {
    thunk_FUN_1111cf00();
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 11113c60; body size 59 bytes.
#line 1 "ENTRY_11113c60"

uint __thiscall Recovered_Bulk::m_FUN_11113c60(undefined4 param_2,char param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined1 local_10 [16];
  
  if ((*(int *)(param_1 + 0x168) != 0 || *(int *)(param_1 + 0x16c) != 0) && (param_3 == '\0')) {
    uVar1 = (uint)(thunk_FUN_11111ca0(param_2,(uint)&local_10,0), 0);
    return (uint)(uVar1);
  }
  uVar1 = (uint)(thunk_FUN_11119940(), 0);
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 11115a00; body size 47 bytes.
#line 1 "ENTRY_11115a00"

int __thiscall Recovered_Bulk::m_FUN_11115a00(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x8c), 0);
  while( true ) {
    if ((int *)(piVar1) == *(int **)(param_1 + 0x90)) {
      return (int)(0);
    }
    if (*(int *)(*piVar1 + 0x1c) == (int)(param_2)) break;
    piVar1 = (int *)(piVar1 + 1);
  }
  return (int)(*piVar1);
}


// Reference entry 1111a090; body size 40 bytes.
#line 1 "ENTRY_1111a090"

void __thiscall Recovered_Bulk::m_FUN_1111a090(undefined4 param_2)
{
  int param_1 = (int )this;
  FUN_10065348(param_2);
  if (*(int *)(param_1 + 0x24) == 0) {
    thunk_FUN_110828b0(param_1);
    thunk_FUN_11095e00<>();
  }
  return;
}


// Reference entry 1111b0a0; body size 42 bytes.
#line 1 "ENTRY_1111b0a0"

int __fastcall FUN_1111b0a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(0x81);
  iVar1 = (int)(param_1 + 0xd7d0);
  thunk_FUN_1124ff50("CurrentTimeServer");
  thunk_FUN_112503c0(iVar1,uVar2);
  return (int)(param_1);
}


// Reference entry 1111b510; body size 21 bytes.
#line 1 "ENTRY_1111b510"

void __thiscall Recovered_Bulk::m_FUN_1111b510(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1106a8d0(param_1 + 0x4c,param_2,0x19);
  return;
}


// Reference entry 1111b630; body size 24 bytes.
#line 1 "ENTRY_1111b630"

void __thiscall Recovered_Bulk::m_FUN_1111b630(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1106a8d0(param_1 + 0xc90,param_2,0x20);
  return;
}


// Reference entry 1111bc70; body size 21 bytes.
#line 1 "ENTRY_1111bc70"

void __thiscall Recovered_Bulk::m_FUN_1111bc70(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1106a8d0(param_1 + 0x33,param_2,0x19);
  return;
}


// Reference entry 1111c6a0; body size 37 bytes.
#line 1 "ENTRY_1111c6a0"

void FUN_1111c6a0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_110828b0(), 0);
  if ((iVar1 != 0) && (DAT_122e8a24 != 0)) {
    *(undefined1*)(DAT_122e8a24 + 0x4d) = (undefined1)(0);
    thunk_FUN_11096350<>(DAT_122e8a24);
  }
  return;
}


// Reference entry 1111d190; body size 47 bytes.
#line 1 "ENTRY_1111d190"

void FUN_1111d190(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(DAT_122e8a28);
  iVar2 = (int)(thunk_FUN_1106a250(param_1,param_2,DAT_122e8a28), 0);
  if (iVar2 == 0) {
    thunk_FUN_1106a270(param_1,param_2,uVar1);
  }
  return;
}


// Reference entry 1111d1f0; body size 39 bytes.
#line 1 "ENTRY_1111d1f0"

int * __thiscall Recovered_Bulk::m_FUN_1111d1f0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  undefined4 *puVar2;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar1 = (int)(*param_2);
    *param_2 = (int)(0);
    puVar2 = (undefined4 *)((undefined4 *)*param_1);
    *param_1 = (int)(iVar1);
    if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  return (int *)(param_1);
}


// Reference entry 1111d490; body size 55 bytes.
#line 1 "ENTRY_1111d490"

void FUN_1111d490(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = (int)(thunk_FUN_1122e970(), 0);
  puVar1 = (undefined4 *)(DAT_122e8a2c);
  if (iVar2 != 0) {
    thunk_FUN_1122e450();
  }
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    if ((undefined4 *)(DAT_122e8a2c) != (undefined4 *)(0x0)) {
      (**(code **)DAT_122e8a2c)(1);
    }
    DAT_122e8a2c = (int)((undefined4 *)0x0);
  }
  return;
}


// Reference entry 1111ecc0; body size 39 bytes.
#line 1 "ENTRY_1111ecc0"

undefined4 * __fastcall FUN_1111ecc0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x28), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1111f310; body size 19 bytes.
#line 1 "ENTRY_1111f310"

void __fastcall FUN_1111f310(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x28);
  }
  return;
}


// Reference entry 1111f410; body size 38 bytes.
#line 1 "ENTRY_1111f410"

void __fastcall FUN_1111f410(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1111f4b0();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x28);
  }
  return;
}


// Reference entry 1111fc80; body size 27 bytes.
#line 1 "ENTRY_1111fc80"

int __stdcall FUN_1111fc80(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_1111e210<>((uint)&local_8,param_1), 0);
  return (int)(*piVar1 + 0x10);
}


// Reference entry 1111fe60; body size 38 bytes.
#line 1 "ENTRY_1111fe60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1111fe60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1111fe90; body size 38 bytes.
#line 1 "ENTRY_1111fe90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1111fe90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1111fec0; body size 32 bytes.
#line 1 "ENTRY_1111fec0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1111fec0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1111f4b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4)(param_1);
}


// Reference entry 111202c0; body size 25 bytes.
#line 1 "ENTRY_111202c0"

void __fastcall FUN_111202c0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x28), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 11121f20; body size 60 bytes.
#line 1 "ENTRY_11121f20"

void __thiscall Recovered_Bulk::m_FUN_11121f20(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int *_Dst;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x14), 0);
  _Dst = (int *)(*(int **)(param_1 + 0x10), 0);
  if ((int *)((_Dst)) != (int *)(piVar1)) {
    while (*_Dst != (int)((param_2))) {
      _Dst = (int *)(_Dst + 1);
      if ((int *)((_Dst)) == (int *)(piVar1)) {
        return;
      }
    }
    if ((int *)((_Dst)) != (int *)(piVar1)) {
      memmove(_Dst,_Dst + 1,(int)piVar1 - (int)(_Dst + 1));
      *(int*)(param_1 + 0x14) = (int)(*(int *)(param_1 + 0x14) + -4);
    }
  }
  return;
}


// Reference entry 11121f80; body size 27 bytes.
#line 1 "ENTRY_11121f80"

void FUN_11121f80(void)

{
  if ((undefined4 *)(DAT_122e8a34) != (undefined4 *)(0x0)) {
    (**(code **)DAT_122e8a34)(1);
  }
  DAT_122e8a34 = (int)((undefined4 *)0x0);
  return;
}


// Reference entry 11122380; body size 43 bytes.
#line 1 "ENTRY_11122380"

int __fastcall FUN_11122380(int param_1)

{
  if (*(HANDLE *)(param_1 + 0xc084) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 0xc084));
    *(undefined4*)(param_1 + 0xc084) = (undefined4)(0xffffffff);
    return (int)(param_1 + 0xc088);
  }
  return (int)(0);
}


// Reference entry 111223e0; body size 46 bytes.
#line 1 "ENTRY_111223e0"

void __thiscall Recovered_Bulk::m_FUN_111223e0(uint param_2)
{
  int param_1 = (int )this;
  if (((short)param_2 == 0) && (*(int *)(param_1 + 0xc074) != 0)) {
    param_2 = (uint)(thunk_FUN_11245770(*(int *)(param_1 + 0xc074)), 0);
    param_2 = (uint)(param_2 & 0xffff);
  }
  thunk_FUN_11261fc0(param_2);
  return;
}


// Reference entry 11122950; body size 57 bytes.
#line 1 "ENTRY_11122950"

void __thiscall Recovered_Bulk::m_FUN_11122950(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x14), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 0x18)) {
    *puVar1 = (undefined4)(param_2);
    *(int*)(param_1 + 0x14) = (int)(*(int *)(param_1 + 0x14) + 4);
    thunk_FUN_11123c70();
    return;
  }
  thunk_FUN_1111de10(puVar1,&param_2);
  thunk_FUN_11123c70();
  return;
}


// Reference entry 111242a0; body size 45 bytes.
#line 1 "ENTRY_111242a0"

void __stdcall FUN_111242a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = (undefined4)(0xffffffff);
  local_4 = (undefined4)(0xffffffff);
  FUN_11124310(param_1,param_2,param_3,&local_8);
  return;
}


// Reference entry 111242e0; body size 27 bytes.
#line 1 "ENTRY_111242e0"

void __stdcall FUN_111242e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_11124310(param_1,param_2,param_3,param_4);
  return;
}


// Reference entry 11125cd0; body size 34 bytes.
#line 1 "ENTRY_11125cd0"

undefined4 __thiscall Recovered_Bulk::m_FUN_11125cd0(undefined4 param_2,int param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (param_3 != 0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(*(int *)(param_1 + 0xc068) + 4))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 11125d90; body size 41 bytes.
#line 1 "ENTRY_11125d90"

void FUN_11125d90(undefined4 param_1,undefined4 param_2)

{ int stack0x0000000c;
 try {
  uint *puVar1;
  
  puVar1 = (uint *)((uint *)thunk_FUN_101b9120(param_1,0xffffffff,param_2,0,&stack0x0000000c), 0);
  __stdio_common_vsscanf(*puVar1 | 1,puVar1[1]);
  return;

 } catch (...) { }
}


// Reference entry 11126d40; body size 17 bytes.
#line 1 "ENTRY_11126d40"

void __fastcall FUN_11126d40(undefined4 *param_1)

{
  thunk_FUN_11126050(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 111276e0; body size 20 bytes.
#line 1 "ENTRY_111276e0"

void __thiscall Recovered_Bulk::m_FUN_111276e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11126050(param_2,param_3,param_1);
  return;
}


// Reference entry 11127ac0; body size 59 bytes.
#line 1 "ENTRY_11127ac0"

void __thiscall Recovered_Bulk::m_FUN_11127ac0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return;
}


// Reference entry 11127b10; body size 59 bytes.
#line 1 "ENTRY_11127b10"

void __thiscall Recovered_Bulk::m_FUN_11127b10(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return;
}


// Reference entry 11127bc0; body size 45 bytes.
#line 1 "ENTRY_11127bc0"

void __thiscall Recovered_Bulk::m_FUN_11127bc0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 11127c00; body size 45 bytes.
#line 1 "ENTRY_11127c00"

void __thiscall Recovered_Bulk::m_FUN_11127c00(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 11127c40; body size 45 bytes.
#line 1 "ENTRY_11127c40"

void __thiscall Recovered_Bulk::m_FUN_11127c40(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 11127ca0; body size 60 bytes.
#line 1 "ENTRY_11127ca0"

void FUN_11127ca0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(DAT_122e8a44);
  if ((undefined4 *)(DAT_122e8a44) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(DAT_122e8a44 + 1), 0);
    if ((iVar2 == 0) && ((undefined4 *)(puVar1) != (undefined4 *)(0x0))) {
      (**(code **)*puVar1)(1);
    }
  }
  DAT_122e8a44 = (int)((undefined4 *)0x0);
  thunk_FUN_11176190();
  thunk_FUN_110ae4a0();
  return;
}


// Reference entry 111280b0; body size 60 bytes.
#line 1 "ENTRY_111280b0"

void __stdcall FUN_111280b0(int param_1,int param_2)

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


// Reference entry 11128100; body size 43 bytes.
#line 1 "ENTRY_11128100"

void __fastcall FUN_11128100(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 11128ff0; body size 46 bytes.
#line 1 "ENTRY_11128ff0"

uint FUN_11128ff0(int param_1,int *param_2)

{
  uint in_EAX;
  undefined4 uVar1;
  uint uVar2;
  
  if ((param_1 != 0) && ((int *)(param_2) != (int *)(0x0))) {
    uVar1 = (undefined4)((**(code **)(*param_2 + 0x28))(), 0);
    uVar2 = (uint)(thunk_FUN_11177120(param_1,uVar1), 0);
    return (uint)(uVar2);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1112a990; body size 32 bytes.
#line 1 "ENTRY_1112a990"

void __fastcall FUN_1112a990(int param_1)

{
  thunk_FUN_112af4e0("SwfObjBrowseCacheMgr",2,"suspending polling");
  *(undefined1*)(param_1 + 0x7ac) = (undefined1)(1);
  return;
}


// Reference entry 1112b500; body size 35 bytes.
#line 1 "ENTRY_1112b500"

undefined4 __thiscall Recovered_Bulk::m_FUN_1112b500(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11259410();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa8);
  }
  return (undefined4)(param_1);
}


// Reference entry 1112b530; body size 32 bytes.
#line 1 "ENTRY_1112b530"

undefined4 __thiscall Recovered_Bulk::m_FUN_1112b530(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11270ae0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28);
  }
  return (undefined4)(param_1);
}


// Reference entry 1112b560; body size 32 bytes.
#line 1 "ENTRY_1112b560"

undefined4 __thiscall Recovered_Bulk::m_FUN_1112b560(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1112b330();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x58);
  }
  return (undefined4)(param_1);
}


// Reference entry 1112bb60; body size 45 bytes.
#line 1 "ENTRY_1112bb60"

void __thiscall Recovered_Bulk::m_FUN_1112bb60(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 1112bc20; body size 51 bytes.
#line 1 "ENTRY_1112bc20"

void FUN_1112bc20(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(DAT_122e8a48);
  if ((undefined4 *)(DAT_122e8a48) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(DAT_122e8a48 + 1), 0);
    if ((iVar2 == 0) && ((undefined4 *)(puVar1) != (undefined4 *)(0x0))) {
      (**(code **)*puVar1)(1);
    }
  }
  DAT_122e8a48 = (int)((undefined4 *)0x0);
  return;
}


// Reference entry 1112bdb0; body size 43 bytes.
#line 1 "ENTRY_1112bdb0"

void __fastcall FUN_1112bdb0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 1112bfd0; body size 61 bytes.
#line 1 "ENTRY_1112bfd0"

void __fastcall FUN_1112bfd0(int param_1)

{
  if (*(char *)(param_1 + 0x36) == '\0') {
    *(undefined1*)(param_1 + 0x36) = (undefined1)(1);
    (**(code **)(**(int **)(param_1 + 0x24) + 0x28))();
    (**(code **)(**(int **)(param_1 + 0x28) + 0x28))();
    thunk_FUN_1125a250(0,*(undefined4 *)(param_1 + 0x24));
    thunk_FUN_112611c0();
                    
                    
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))();
    return;
  }
  return;
}


// Reference entry 1112c280; body size 25 bytes.
#line 1 "ENTRY_1112c280"

undefined4 __stdcall FUN_1112c280(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = (undefined4)(FUN_10065348(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 1112c310; body size 22 bytes.
#line 1 "ENTRY_1112c310"

void __fastcall FUN_1112c310(int param_1)

{
  *(undefined1*)(*(int *)(param_1 + 0x24) + 4) = (undefined1)(1);
  *(undefined1*)(*(int *)(param_1 + 0x28) + 4) = (undefined1)(1);
  *(undefined1*)(*(int *)(param_1 + 0x2c) + 4) = (undefined1)(1);
  return;
}


// Reference entry 1112cd10; body size 28 bytes.
#line 1 "ENTRY_1112cd10"

int __fastcall FUN_1112cd10(int param_1)

{
  thunk_FUN_1127a020();
  *(undefined4*)(param_1 + 0x508) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 1112d6e0; body size 38 bytes.
#line 1 "ENTRY_1112d6e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1112d6e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1112d710; body size 38 bytes.
#line 1 "ENTRY_1112d710"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1112d710(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1112d740; body size 38 bytes.
#line 1 "ENTRY_1112d740"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1112d740(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1112dbd0; body size 58 bytes.
#line 1 "ENTRY_1112dbd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1112dbd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPAddHTSatelliteAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPAddHTSatelliteAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPAddHTSatelliteAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1112dc20; body size 58 bytes.
#line 1 "ENTRY_1112dc20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1112dc20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPRemoveHTSatelliteAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPRemoveHTSatelliteAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPRemoveHTSatelliteAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1112ea40; body size 41 bytes.
#line 1 "ENTRY_1112ea40"

uint __fastcall FUN_1112ea40(int param_1)

{
  uint in_EAX;
  
  if ((*(uint *)(param_1 + 4) < 3) && (in_EAX = (uint)(thunk_FUN_1127ca70(), 0), (char)in_EAX == '\0')) {
    return (uint)((uint)(*(int *)(param_1 + 4) != 0));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 11130320; body size 30 bytes.
#line 1 "ENTRY_11130320"

undefined1 __fastcall FUN_11130320(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1127c6b0(1), 0);
  if (0 < iVar1) {
    thunk_FUN_1127af20(iVar1);
    return (undefined1)(*param_1);
  }
  return (undefined1)(0);
}


// Reference entry 111307b0; body size 38 bytes.
#line 1 "ENTRY_111307b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_111307b0(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("HTSatChanMapSet",0), 0);
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 111307e0; body size 38 bytes.
#line 1 "ENTRY_111307e0"

undefined4 __thiscall Recovered_Bulk::m_FUN_111307e0(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("SatRoomUUID",0), 0);
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 11131340; body size 30 bytes.
#line 1 "ENTRY_11131340"

void __thiscall Recovered_Bulk::m_FUN_11131340(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x34) != (int *)((0x0))) {
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x34) + 4))(param_1 + 8,param_2), 0);
    *(undefined4*)(param_1 + 0x38) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 11131370; body size 30 bytes.
#line 1 "ENTRY_11131370"

void __thiscall Recovered_Bulk::m_FUN_11131370(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x34) != (int *)((0x0))) {
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x34) + 4))(param_1 + 8,param_2), 0);
    *(undefined4*)(param_1 + 0x38) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 111313a0; body size 30 bytes.
#line 1 "ENTRY_111313a0"

void __thiscall Recovered_Bulk::m_FUN_111313a0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x34) != (int *)((0x0))) {
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x34) + 4))(param_1 + 8,param_2), 0);
    *(undefined4*)(param_1 + 0x38) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 11132910; body size 20 bytes.
#line 1 "ENTRY_11132910"

void __thiscall Recovered_Bulk::m_FUN_11132910(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11131580(param_2,param_3,param_1);
  return;
}


// Reference entry 11132b40; body size 59 bytes.
#line 1 "ENTRY_11132b40"

void __stdcall FUN_11132b40(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0xc);
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


// Reference entry 11132ba0; body size 34 bytes.
#line 1 "ENTRY_11132ba0"

int __fastcall FUN_11132ba0(int param_1)

{
  thunk_FUN_1106b190(param_1,0,0);
  thunk_FUN_11133a40();
  return (int)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2);
}


// Reference entry 11132bd0; body size 38 bytes.
#line 1 "ENTRY_11132bd0"

int __fastcall FUN_11132bd0(int param_1)

{
  thunk_FUN_1106b190(param_1,0,0);
  thunk_FUN_11133a40();
  *(undefined1*)(param_1 + 0x20) = (undefined1)(1);
  return (int)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2);
}


// Reference entry 11132c10; body size 46 bytes.
#line 1 "ENTRY_11132c10"

undefined4 __thiscall Recovered_Bulk::m_FUN_11132c10(uint param_2)
{
  int param_1 = (int )this;
  if (*(char *)(param_1 + 0x1d) == '\0') {
    thunk_FUN_11133a40();
    if (param_2 < (uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2)) {
      return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x10) + param_2 * 4));
    }
  }
  return (undefined4)(0);
}


// Reference entry 111339e0; body size 38 bytes.
#line 1 "ENTRY_111339e0"

undefined1 __fastcall FUN_111339e0(int param_1)

{
  if (*(char *)(param_1 + 0x20) == '\0') {
    thunk_FUN_1106b190(param_1,0,0);
    thunk_FUN_11133a40();
    *(undefined1*)(param_1 + 0x20) = (undefined1)(1);
  }
  return (undefined1)(*(undefined1 *)(param_1 + 0x21));
}


// Reference entry 11133a10; body size 38 bytes.
#line 1 "ENTRY_11133a10"

undefined1 __fastcall FUN_11133a10(int param_1)

{
  if (*(char *)(param_1 + 0x20) == '\0') {
    thunk_FUN_1106b190(param_1,0,0);
    thunk_FUN_11133a40();
    *(undefined1*)(param_1 + 0x20) = (undefined1)(1);
  }
  return (undefined1)(*(undefined1 *)(param_1 + 0x22));
}


// Reference entry 111342b0; body size 38 bytes.
#line 1 "ENTRY_111342b0"

bool FUN_111342b0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(thunk_FUN_110cead0(), 0);
  uVar1 = (undefined4)(thunk_FUN_110cead0(uVar1), 0);
  iVar2 = (int)(thunk_FUN_1111d190(uVar1), 0);
  return (bool)(iVar2 < 0);
}


// Reference entry 11135050; body size 46 bytes.
#line 1 "ENTRY_11135050"

undefined1 FUN_11135050(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_110d3ac0(), 0);
  if (((cVar1 != '\0') && (*(char *)(param_1 + 0x51e) == '\0')) &&
     (*(char *)(param_1 + 0x551) != '\0')) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 11135390; body size 38 bytes.
#line 1 "ENTRY_11135390"

undefined4 __thiscall Recovered_Bulk::m_FUN_11135390(int param_2)
{
  int param_1 = (int )this;
  if (((*(char *)(param_1 + 0x20) != '\0') || (*(char *)(param_2 + 0x520) != '\0')) &&
     (*(int *)(param_2 + 0x53c) != 0)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 11135420; body size 48 bytes.
#line 1 "ENTRY_11135420"

undefined1 FUN_11135420(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_110d3ac0(), 0);
  if (cVar1 == '\0') {
    return (undefined1)(0);
  }
  if ((*(char *)(param_1 + 0x51e) != '\0') && (cVar1 = (char)(FUN_1005a7b3(), 0), cVar1 == '\0')) {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 11135460; body size 48 bytes.
#line 1 "ENTRY_11135460"

undefined1 FUN_11135460(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x520) == '\0') {
    return (undefined1)(0);
  }
  cVar1 = (char)(thunk_FUN_110d3140(), 0);
  if ((cVar1 != '\0') && (cVar1 = (char)(thunk_FUN_110d55a0(), 0), cVar1 == '\0')) {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 111354c0; body size 19 bytes.
#line 1 "ENTRY_111354c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_111354c0(int param_2)
{
  int param_1 = (int )this;
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_2 + 0x538) >> 8)) << 8 | (uint)(*(int *)((param_2 + 0x538)) == *(int *)((param_1 + 0x20)))));
}


// Reference entry 11135a30; body size 46 bytes.
#line 1 "ENTRY_11135a30"

undefined1 FUN_11135a30(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_110d3ac0(), 0);
  if (((cVar1 != '\0') && (*(char *)(param_1 + 0x51e) == '\0')) &&
     (*(char *)(param_1 + 0x520) == '\0')) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 11135a70; body size 48 bytes.
#line 1 "ENTRY_11135a70"

undefined1 FUN_11135a70(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x520) != '\0') {
    cVar1 = (char)(thunk_FUN_110d5780(), 0);
    if (cVar1 != '\0') {
      cVar1 = (char)(FUN_100487ed(), 0);
      if (cVar1 != '\0') {
        return (undefined1)(1);
      }
    }
  }
  return (undefined1)(0);
}


// Reference entry 11135ab0; body size 32 bytes.
#line 1 "ENTRY_11135ab0"

undefined4 FUN_11135ab0(int param_1)

{
  if ((*(char *)(param_1 + 0x520) != '\0') && (*(int *)(param_1 + 0x53c) == 2)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 11135ae0; body size 19 bytes.
#line 1 "ENTRY_11135ae0"

undefined4 __thiscall Recovered_Bulk::m_FUN_11135ae0(int param_2)
{
  int param_1 = (int )this;
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_2 + 0x528) >> 8)) << 8 | (uint)(*(int *)((param_2 + 0x528)) == *(int *)((param_1 + 0x20)))));
}


// Reference entry 11136010; body size 39 bytes.
#line 1 "ENTRY_11136010"

void __fastcall FUN_11136010(int param_1)

{
  *(undefined***)(param_1 + 0x28) = (undefined **)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  *(undefined***)(param_1 + 0x1c) = (undefined **)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  thunk_FUN_11261f10();
  return;
}


// Reference entry 11136170; body size 61 bytes.
#line 1 "ENTRY_11136170"

void __fastcall FUN_11136170(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSystemPropertiesManager);
  thunk_FUN_112a7f20(param_1 + 0xc);
  thunk_FUN_110721b0(param_1 + 9,*(undefined4 *)(param_1[9] + 4));
  thunk_FUN_1148a50e(param_1[9],0x14);
  thunk_FUN_10bfb3d0();
  return;
}


// Reference entry 111362a0; body size 38 bytes.
#line 1 "ENTRY_111362a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111362a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111362d0; body size 38 bytes.
#line 1 "ENTRY_111362d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111362d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11136300; body size 62 bytes.
#line 1 "ENTRY_11136300"

int __thiscall Recovered_Bulk::m_FUN_11136300(byte param_2)
{
  int param_1 = (int )this;
  *(undefined***)(param_1 + 0x28) = (undefined **)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  *(undefined***)(param_1 + 0x1c) = (undefined **)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x54);
  }
  return (int)(param_1);
}


// Reference entry 11136510; body size 58 bytes.
#line 1 "ENTRY_11136510"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11136510(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPGetRDMAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpSPGetRDMAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpSPGetRDMAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11136560; body size 58 bytes.
#line 1 "ENTRY_11136560"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11136560(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPGetStringAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpSPGetStringAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpSPGetStringAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdfd0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11136750; body size 33 bytes.
#line 1 "ENTRY_11136750"

void __fastcall FUN_11136750(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_110721b0(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 11136830; body size 39 bytes.
#line 1 "ENTRY_11136830"

undefined1 __fastcall FUN_11136830(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  
  cVar2 = (char)(thunk_FUN_112a7f50(param_1 + 0x30), 0);
  uVar1 = (undefined1)(*(undefined1 *)(param_1 + 0x2c));
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x30);
  }
  return (undefined1)(uVar1);
}


// Reference entry 11136fe0; body size 39 bytes.
#line 1 "ENTRY_11136fe0"

undefined1 __fastcall FUN_11136fe0(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  
  cVar2 = (char)(thunk_FUN_112a7f50(param_1 + 0x30), 0);
  uVar1 = (undefined1)(*(undefined1 *)(param_1 + 0x2d));
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x30);
  }
  return (undefined1)(uVar1);
}


// Reference entry 11137120; body size 37 bytes.
#line 1 "ENTRY_11137120"

int __fastcall FUN_11137120(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1 + 0xd7d0);
  thunk_FUN_1124ff50("RDMValue");
  thunk_FUN_112505b0(iVar1);
  return (int)(param_1);
}


// Reference entry 11137300; body size 45 bytes.
#line 1 "ENTRY_11137300"

void __thiscall Recovered_Bulk::m_FUN_11137300(undefined1 param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_112a7f50(param_1 + 0x30), 0);
  *(undefined1*)(param_1 + 0x2c) = (undefined1)(param_2);
  *(undefined1*)(param_1 + 0x2d) = (undefined1)(1);
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x30);
  }
  return;
}


// Reference entry 11137410; body size 21 bytes.
#line 1 "ENTRY_11137410"

undefined4 __thiscall Recovered_Bulk::m_FUN_11137410(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101ba530(param_2);
  return (undefined4)(param_1);
}


// Reference entry 11138180; body size 36 bytes.
#line 1 "ENTRY_11138180"

void __fastcall FUN_11138180(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 0x60));
  thunk_FUN_10e460f0(*puVar1,*(undefined4 *)(param_1 + 100),puVar1);
  *(undefined4*)(param_1 + 100) = (undefined4)(*puVar1);
  *(undefined4*)(param_1 + 0x6c) = (undefined4)(0);
  return;
}


// Reference entry 11138260; body size 33 bytes.
#line 1 "ENTRY_11138260"

void __fastcall FUN_11138260(int param_1)

{
  if (((*(char *)(param_1 + 0x70) == '\0') && (*(int *)(param_1 + 0x6c) == 0)) &&
     (*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60) >> 2 != 0)) {
    *(undefined4*)(param_1 + 0x6c) = (undefined4)(1);
  }
  return;
}


// Reference entry 111382a0; body size 32 bytes.
#line 1 "ENTRY_111382a0"

int __thiscall Recovered_Bulk::m_FUN_111382a0(int param_2)
{
  int param_1 = (int )this;
  if ((param_2 != 0) && (param_2 == 1)) {
    return (int)(*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60) >> 2);
  }
  return (int)(*(int *)(param_1 + 0x6c));
}


// Reference entry 11138590; body size 50 bytes.
#line 1 "ENTRY_11138590"

undefined4 __thiscall Recovered_Bulk::m_FUN_11138590(uint param_2,int param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  
  if ((param_3 == 0) || (param_3 != 1)) {
    uVar1 = (uint)(*(uint *)(param_1 + 0x6c));
  }
  else {
    uVar1 = (uint)(*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60) >> 2);
  }
  if (param_2 < uVar1) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x60) + param_2 * 4));
  }
  return (undefined4)(0);
}


// Reference entry 111389e0; body size 52 bytes.
#line 1 "ENTRY_111389e0"

undefined4 __fastcall FUN_111389e0(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(0);
  uVar3 = (uint)(*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60) >> 2);
  if (uVar3 != 0) {
    do {
      cVar1 = (char)(thunk_FUN_110d5760(), 0);
      if (cVar1 != '\0') {
        return (undefined4)(1);
      }
      uVar2 = (uint)(uVar2 + 1);
    } while (uVar2 < uVar3);
  }
  return (undefined4)(0);
}


// Reference entry 11138bf0; body size 21 bytes.
#line 1 "ENTRY_11138bf0"

void __thiscall Recovered_Bulk::m_FUN_11138bf0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1145c250(param_1 + 0x44,param_2,0x19);
  return;
}


// Reference entry 11139450; body size 19 bytes.
#line 1 "ENTRY_11139450"

void FUN_11139450(void)

{
  thunk_FUN_112341b0();
  FUN_1003d5d7();
  return;
}


// Reference entry 11139470; body size 49 bytes.
#line 1 "ENTRY_11139470"

void __fastcall FUN_11139470(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RStringTableParserCB);
  if ((FILE *)param_1[0x92] != (FILE *)(((0x0)))) {
    fclose((FILE *)param_1[0x92]);
  }
  if ((void *)param_1[0x91] != (void *)(((0x0)))) {
    free((void *)param_1[0x91]);
  }
  return;
}


// Reference entry 11139660; body size 38 bytes.
#line 1 "ENTRY_11139660"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11139660(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11139850; body size 45 bytes.
#line 1 "ENTRY_11139850"

undefined4 __thiscall Recovered_Bulk::m_FUN_11139850(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_112341b0();
  FUN_1003d5d7();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x47c);
  }
  return (undefined4)(param_1);
}


// Reference entry 1113a340; body size 35 bytes.
#line 1 "ENTRY_1113a340"

void __fastcall FUN_1113a340(int param_1)

{
  thunk_FUN_112a7f50(param_1 + 0x1c);
  thunk_FUN_1113b2a0();
  thunk_FUN_112a8010(param_1 + 0x1c);
  return;
}


// Reference entry 1113a820; body size 30 bytes.
#line 1 "ENTRY_1113a820"

void __stdcall FUN_1113a820(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  thunk_FUN_1113af60(param_1,param_2,param_3,param_4,0,param_5);
  return;
}


// Reference entry 1113b500; body size 28 bytes.
#line 1 "ENTRY_1113b500"

void __stdcall FUN_1113b500(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_1113af60(param_1,param_2,param_3,param_4,1,0);
  return;
}


// Reference entry 1113b540; body size 51 bytes.
#line 1 "ENTRY_1113b540"

undefined1 __fastcall FUN_1113b540(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)(0);
  FUN_112a9d50(param_1 + 0x1c);
  if ((*(int *)(param_1 + 8) == 0) ||
     (*(uint *)((*(int *)(param_1 + 8) + 4)) < *(uint *)(param_1 + 0x38))) {
    uVar1 = (undefined1)(1);
  }
  FUN_112a9d70(param_1 + 0x1c);
  return (undefined1)(uVar1);
}


#line 1 "ENTRY_1113b580"

void __stdcall FUN_1113b580(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, unsigned int recovered_unused_stack_0)

{
  thunk_FUN_11269bc0(param_1,0,0,0,param_2,param_3,param_4,&DAT_1188db18,0,0);
  return;
}


// Reference entry 1113be80; body size 37 bytes.
#line 1 "ENTRY_1113be80"

undefined4 __thiscall Recovered_Bulk::m_FUN_1113be80(int param_2,int param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if ((param_3 != 0) && (param_2 != 0)) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc06c) + 4))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 1113bff0; body size 38 bytes.
#line 1 "ENTRY_1113bff0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1113bff0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjCD);
  thunk_FUN_1113e6f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x3c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1113c270; body size 21 bytes.
#line 1 "ENTRY_1113c270"

void FUN_1113c270(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(&DAT_119cacd8);
  *param_2 = (undefined4)(3);
  return;
}


// Reference entry 1113c2d0; body size 18 bytes.
#line 1 "ENTRY_1113c2d0"

undefined ** __stdcall FUN_1113c2d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(7);
  return (undefined **)(&PTR_s_RadioFavoritesUpdateID_119cad20);
}


// Reference entry 1113cf20; body size 16 bytes.
#line 1 "ENTRY_1113cf20"

undefined4 __fastcall FUN_1113cf20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return (undefined4)(0);
  }
  uVar1 = (undefined4)(thunk_FUN_111a66c0<>(), 0);
  return (undefined4)(uVar1);
}


// Reference entry 1113d060; body size 38 bytes.
#line 1 "ENTRY_1113d060"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1113d060(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjAI);
  thunk_FUN_1113e6f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1113d120; body size 18 bytes.
#line 1 "ENTRY_1113d120"

undefined ** __stdcall FUN_1113d120(undefined4 *param_1)

{
  *param_1 = (undefined4)(2);
  return (undefined **)(&PTR_s_LineLevel_119cb040);
}


// Reference entry 1113d180; body size 21 bytes.
#line 1 "ENTRY_1113d180"

void FUN_1113d180(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(&DAT_119caf78);
  *param_2 = (undefined4)(10);
  return;
}


// Reference entry 1113da80; body size 27 bytes.
#line 1 "ENTRY_1113da80"

int __fastcall FUN_1113da80(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(*(int **)(param_1 + 4), 0);
  piVar2 = (int *)(piVar1);
  if (*piVar1 != (int)((0))) {
    piVar2 = (int *)((int *)0x0);
  }
  if (((int *)(piVar2) == (int *)(0x0)) || (iVar3 = (int)(piVar2[0x18]), iVar3 == 0)) {
    iVar3 = (int)(piVar1[5]);
  }
  return (int)(iVar3);
}


// Reference entry 1113dab0; body size 27 bytes.
#line 1 "ENTRY_1113dab0"

int __fastcall FUN_1113dab0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(*(int **)(param_1 + 4), 0);
  piVar2 = (int *)(piVar1);
  if (*piVar1 != (int)((0))) {
    piVar2 = (int *)((int *)0x0);
  }
  if (((int *)(piVar2) == (int *)(0x0)) || (iVar3 = (int)(piVar2[0x15]), iVar3 == 0)) {
    iVar3 = (int)(piVar1[5]);
  }
  return (int)(iVar3);
}


// Reference entry 1113de60; body size 50 bytes.
#line 1 "ENTRY_1113de60"

uint __fastcall FUN_1113de60(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uStack_4;
  
  piVar1 = (int *)(*(int **)(param_1 + 4), 0);
  uStack_4 = (undefined4)(param_1 & 0xffffff);
  piVar2 = (int *)(piVar1);
  if (*piVar1 != (int)((0))) {
    piVar2 = (int *)((int *)0x0);
  }
  if (((int *)(piVar2) == (int *)(0x0)) || (iVar3 = (int)(piVar2[0x1e]), iVar3 == 0)) {
    iVar3 = (int)(piVar1[0x10]);
  }
  thunk_FUN_11246370(iVar3,(int)&uStack_4 + 3);
  return (uint)(uStack_4 >> 0x18);
}


// Reference entry 1113df70; body size 27 bytes.
#line 1 "ENTRY_1113df70"

int __fastcall FUN_1113df70(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(*(int **)(param_1 + 4), 0);
  piVar2 = (int *)(piVar1);
  if (*piVar1 != (int)((0))) {
    piVar2 = (int *)((int *)0x0);
  }
  if (((int *)(piVar2) == (int *)(0x0)) || (iVar3 = (int)(piVar2[0x1a]), iVar3 == 0)) {
    iVar3 = (int)(piVar1[0xc]);
  }
  return (int)(iVar3);
}


// Reference entry 1113dfa0; body size 27 bytes.
#line 1 "ENTRY_1113dfa0"

int __fastcall FUN_1113dfa0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(*(int **)(param_1 + 4), 0);
  piVar2 = (int *)(piVar1);
  if (*piVar1 != (int)((0))) {
    piVar2 = (int *)((int *)0x0);
  }
  if (((int *)(piVar2) == (int *)(0x0)) || (iVar3 = (int)(piVar2[0x1b]), iVar3 == 0)) {
    iVar3 = (int)(piVar1[0xd]);
  }
  return (int)(iVar3);
}


// Reference entry 1113dfd0; body size 27 bytes.
#line 1 "ENTRY_1113dfd0"

int __fastcall FUN_1113dfd0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(*(int **)(param_1 + 4), 0);
  piVar2 = (int *)(piVar1);
  if (*piVar1 != (int)((0))) {
    piVar2 = (int *)((int *)0x0);
  }
  if (((int *)(piVar2) == (int *)(0x0)) || (iVar3 = (int)(piVar2[0x1d]), iVar3 == 0)) {
    iVar3 = (int)(piVar1[0xf]);
  }
  return (int)(iVar3);
}


// Reference entry 1113e4f0; body size 55 bytes.
#line 1 "ENTRY_1113e4f0"

char * FUN_1113e4f0(char *param_1,uint param_2)

{
  uint uVar1;
  
  do {
    param_1 = (char *)(param_1 + -1);
    uVar1 = (uint)(param_2 / 10);
    *param_1 = (char)((char)param_2 + (char)uVar1 * -10 + '0');
    param_2 = (uint)(uVar1);
  } while (uVar1 != 0);
  return (char *)(param_1);
}


// Reference entry 1113e9f0; body size 38 bytes.
#line 1 "ENTRY_1113e9f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1113e9f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfUpnpEventHandler);
  thunk_FUN_111a4f00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1113f0e0; body size 30 bytes.
#line 1 "ENTRY_1113f0e0"

void __stdcall FUN_1113f0e0(undefined4 param_1, unsigned int recovered_unused_stack_0)

{
  FUN_10070892(param_1);
  thunk_FUN_11140420<>(param_1);
  return;
}


// Reference entry 1113f110; body size 59 bytes.
#line 1 "ENTRY_1113f110"

void __thiscall Recovered_Bulk::m_FUN_1113f110(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return;
}


// Reference entry 1113f560; body size 19 bytes.
#line 1 "ENTRY_1113f560"

void __fastcall FUN_1113f560(int param_1)

{
  thunk_FUN_111401c0<>(1);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  return;
}


// Reference entry 1113f9e0; body size 36 bytes.
#line 1 "ENTRY_1113f9e0"

undefined4 FUN_1113f9e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(thunk_FUN_1113f590<>(param_1), 0);
  if (iVar1 != 0) {
    uVar2 = (undefined4)(thunk_FUN_111a5f10<>(param_2,param_3), 0);
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 11140c20; body size 38 bytes.
#line 1 "ENTRY_11140c20"

void __thiscall Recovered_Bulk::m_FUN_11140c20(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  FUN_10065348(param_2);
  if (*(int *)(param_1 + 0x18) == 0) {
    thunk_FUN_111401c0<>(param_2);
  }
  return;
}


// Reference entry 11142b00; body size 38 bytes.
#line 1 "ENTRY_11142b00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11142b00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11142b30; body size 38 bytes.
#line 1 "ENTRY_11142b30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11142b30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11142b60; body size 38 bytes.
#line 1 "ENTRY_11142b60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11142b60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11142b90; body size 38 bytes.
#line 1 "ENTRY_11142b90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11142b90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11142bc0; body size 38 bytes.
#line 1 "ENTRY_11142bc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11142bc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11142bf0; body size 38 bytes.
#line 1 "ENTRY_11142bf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11142bf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11142c20; body size 38 bytes.
#line 1 "ENTRY_11142c20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11142c20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11142c50; body size 32 bytes.
#line 1 "ENTRY_11142c50"

undefined4 __thiscall Recovered_Bulk::m_FUN_11142c50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11142290();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x74);
  }
  return (undefined4)(param_1);
}


// Reference entry 11142e00; body size 33 bytes.
#line 1 "ENTRY_11142e00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11142e00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperationConnectCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11142f30; body size 58 bytes.
#line 1 "ENTRY_11142f30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11142f30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpQAddMultipleURIsAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpQAddMultipleURIsAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpQAddMultipleURIsAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7e0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11142f80; body size 58 bytes.
#line 1 "ENTRY_11142f80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11142f80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpQAddURIAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpQAddURIAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpQAddURIAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7e0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11142fd0; body size 58 bytes.
#line 1 "ENTRY_11142fd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11142fd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpQReplaceAllTracksAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpQReplaceAllTracksAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpQReplaceAllTracksAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111436e0; body size 42 bytes.
#line 1 "ENTRY_111436e0"

void __stdcall FUN_111436e0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(*param_2);
  uVar1 = (undefined4)(Ordinal_12(uVar2,0), 0);
  thunk_FUN_111a1a50<>("#ip_addr_of_dv#",uVar1,uVar2);
  thunk_FUN_111446b0();
  return;
}


// Reference entry 11147f30; body size 34 bytes.
#line 1 "ENTRY_11147f30"

void __thiscall Recovered_Bulk::m_FUN_11147f30(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *(undefined4*)(param_1 + 0x34) = (undefined4)(param_2);
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x20) + 4))(param_1 + 8,param_2), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 11147f60; body size 34 bytes.
#line 1 "ENTRY_11147f60"

void __thiscall Recovered_Bulk::m_FUN_11147f60(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *(undefined4*)(param_1 + 0x5c) = (undefined4)(param_2);
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x20) + 4))(param_1 + 8,param_2), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 111482a0; body size 29 bytes.
#line 1 "ENTRY_111482a0"

void __fastcall FUN_111482a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAesEncoder);
  thunk_FUN_113d3650(param_1 + 4);
  *param_1 = (undefined4)((uint)&ghidra_vftable_REncryptedDataEncoder);
  return;
}


// Reference entry 11148420; body size 54 bytes.
#line 1 "ENTRY_11148420"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11148420(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAesEncoder);
  thunk_FUN_113d3650(param_1 + 4);
  *param_1 = (undefined4)((uint)&ghidra_vftable_REncryptedDataEncoder);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11148470; body size 33 bytes.
#line 1 "ENTRY_11148470"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11148470(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_REncryptedDataEncoder);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111484a0; body size 33 bytes.
#line 1 "ENTRY_111484a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111484a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_REncryptedStringEncoder);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11149270; body size 59 bytes.
#line 1 "ENTRY_11149270"

void __thiscall Recovered_Bulk::m_FUN_11149270(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return;
}


// Reference entry 111492c0; body size 37 bytes.
#line 1 "ENTRY_111492c0"

void __thiscall Recovered_Bulk::m_FUN_111492c0(undefined4 param_2,char *param_3, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(strncmp(param_3,"S:",2), 0);
  if (iVar1 == 0) {
    *(undefined4*)(param_1 + 0x420) = (undefined4)(0);
  }
  return;
}


// Reference entry 1114a6f0; body size 58 bytes.
#line 1 "ENTRY_1114a6f0"

void __thiscall Recovered_Bulk::m_FUN_1114a6f0(uint param_2)
{
  int *param_1 = (int *)this;
  if ((uint)((param_1[2] - *param_1) / 0xc08) < param_2) {
    if (0x154725 < param_2) {
                    
      thunk_FUN_111491e0();
    }
    thunk_FUN_11148fb0(param_2);
  }
  return;
}


// Reference entry 1114a740; body size 17 bytes.
#line 1 "ENTRY_1114a740"

void __fastcall FUN_1114a740(int param_1)

{
  *(undefined2*)(param_1 + 0xc) = (undefined2)(0x101);
  thunk_FUN_113d3650(param_1 + 0x10);
  return;
}


// Reference entry 1114a7f0; body size 20 bytes.
#line 1 "ENTRY_1114a7f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1114a7f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfUpnpSubscriptionInterface);
  DAT_122e8a50 = (int)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1114b170; body size 33 bytes.
#line 1 "ENTRY_1114b170"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1114b170(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpgradeClientCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1114b950; body size 58 bytes.
#line 1 "ENTRY_1114b950"

void __fastcall FUN_1114b950(int param_1)

{
  if (*(char *)(param_1 + 0x420) != '\0') {
    if (*(int *)(param_1 + 0x834) == 3) {
      thunk_FUN_1114d110<>(2);
      return;
    }
    thunk_FUN_1114d110<>(4);
    *(undefined1*)(*(int *)(param_1 + 0x868) + 0x4cc) = (undefined1)(1);
  }
  return;
}


// Reference entry 1114b9d0; body size 54 bytes.
#line 1 "ENTRY_1114b9d0"

void __thiscall Recovered_Bulk::m_FUN_1114b9d0(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  FUN_112a9d50(param_1 + 0x858);
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x864));
  *param_3 = (undefined4)(*(undefined4 *)(param_1 + 0x860));
  FUN_112a9d70(param_1 + 0x858);
  return;
}



void __fastcall FUN_1114d980(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjLastFMCP);
  thunk_FUN_11231440();
  thunk_FUN_11167180();
  return;
}


// Reference entry 1114d9c0; body size 58 bytes.
#line 1 "ENTRY_1114d9c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1114d9c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPEditAccountMdAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpSPEditAccountMdAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpSPEditAccountMdAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1114da10; body size 51 bytes.
#line 1 "ENTRY_1114da10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1114da10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjLastFMCP);
  thunk_FUN_11231440();
  thunk_FUN_11167180();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x144);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1114ede0; body size 28 bytes.
#line 1 "ENTRY_1114ede0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1114ede0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x105) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1114f4f0; body size 52 bytes.
#line 1 "ENTRY_1114f4f0"

void __fastcall FUN_1114f4f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjCPPerformActionOp);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_SwfObjCPPerformActionOp);
  if ((undefined4 *)param_1[8] != (undefined4 *)(((0x0)))) {
    (*(code *)**(undefined4 **)param_1[8])(1);
  }
  thunk_FUN_111a6f10();
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  thunk_FUN_111a4f00();
  return;
}


// Reference entry 1114f720; body size 41 bytes.
#line 1 "ENTRY_1114f720"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1114f720(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RFindPrefixCB);
  thunk_FUN_11202570();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x414);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1114f840; body size 32 bytes.
#line 1 "ENTRY_1114f840"

undefined4 __thiscall Recovered_Bulk::m_FUN_1114f840(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1114f3e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4)(param_1);
}


// Reference entry 11150140; body size 27 bytes.
#line 1 "ENTRY_11150140"

void __fastcall FUN_11150140(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((**(code **)(**(int **)(param_1 + 0xc) + 0x44)) (*(undefined4 *)(param_1 + 0x10),param_1 + 0x14), 0);
  *(undefined2*)(param_1 + 0x416) = (undefined2)(uVar1);
  return;
}


// Reference entry 11150470; body size 43 bytes.
#line 1 "ENTRY_11150470"

undefined1 __thiscall Recovered_Bulk::m_FUN_11150470(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  
  if (*(char *)(param_1 + 0x68) == '\0') {
    cVar1 = (char)((**(code **)(*param_2 + 0x6c))(param_3,param_1), 0);
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
    *(undefined1*)(param_1 + 0x68) = (undefined1)(1);
  }
  return (undefined1)(1);
}


// Reference entry 11151f00; body size 29 bytes.
#line 1 "ENTRY_11151f00"

void __fastcall FUN_11151f00(undefined4 param_1)

{
  thunk_FUN_1113f0e0(param_1,0);
  thunk_FUN_1109f7f0(param_1);
  thunk_FUN_1109de60();
  return;
}


// Reference entry 11152240; body size 34 bytes.
#line 1 "ENTRY_11152240"

void __fastcall FUN_11152240(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1123fcd0(param_1 + -0x10), 0);
  if ((iVar1 == 0) && ((undefined4 *)((param_1 + -0x14)) != (undefined4 *)(0x0))) {
    (*(code *)**(undefined4 **)(param_1 + -0x14))(1);
  }
  return;
}


// Reference entry 11152270; body size 34 bytes.
#line 1 "ENTRY_11152270"

void __fastcall FUN_11152270(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1123fcd0(param_1 + -0x10), 0);
  if ((iVar1 == 0) && ((undefined4 *)((param_1 + -0x14)) != (undefined4 *)(0x0))) {
    (*(code *)**(undefined4 **)(param_1 + -0x14))(1);
  }
  return;
}


// Reference entry 111522a0; body size 34 bytes.
#line 1 "ENTRY_111522a0"

void __fastcall FUN_111522a0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1123fcd0(param_1 + -0x10), 0);
  if ((iVar1 == 0) && ((undefined4 *)((param_1 + -0x14)) != (undefined4 *)(0x0))) {
    (*(code *)**(undefined4 **)(param_1 + -0x14))(1);
  }
  return;
}


// Reference entry 11153390; body size 38 bytes.
#line 1 "ENTRY_11153390"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11153390(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111533c0; body size 38 bytes.
#line 1 "ENTRY_111533c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111533c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111533f0; body size 35 bytes.
#line 1 "ENTRY_111533f0"

undefined4 __thiscall Recovered_Bulk::m_FUN_111533f0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11152e70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1e0);
  }
  return (undefined4)(param_1);
}


// Reference entry 11153420; body size 58 bytes.
#line 1 "ENTRY_11153420"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11153420(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpRCResetBasicEQAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpRCResetBasicEQAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpRCResetBasicEQAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7e0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11153470; body size 58 bytes.
#line 1 "ENTRY_11153470"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11153470(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpRCResetExtEQAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpRCResetExtEQAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpRCResetExtEQAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111534c0; body size 58 bytes.
#line 1 "ENTRY_111534c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111534c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetBassAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetBassAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetBassAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11153510; body size 58 bytes.
#line 1 "ENTRY_11153510"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11153510(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetEQAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetEQAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetEQAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11153560; body size 58 bytes.
#line 1 "ENTRY_11153560"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11153560(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetLoudnessAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetLoudnessAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetLoudnessAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111535b0; body size 58 bytes.
#line 1 "ENTRY_111535b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111535b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetTrebleAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetTrebleAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetTrebleAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11153600; body size 58 bytes.
#line 1 "ENTRY_11153600"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11153600(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetVolumeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetVolumeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetVolumeAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11158050; body size 23 bytes.
#line 1 "ENTRY_11158050"

void __thiscall Recovered_Bulk::m_FUN_11158050(short param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11155f40<>((int)param_2);
  *(int*)(param_1 + 0x40) = (int)((int)param_2);
  return;
}


// Reference entry 11158070; body size 27 bytes.
#line 1 "ENTRY_11158070"

void __thiscall Recovered_Bulk::m_FUN_11158070(short param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11156160<>((int)param_2);
  *(short*)(param_1 + 0x58) = (short)(param_2);
  return;
}


// Reference entry 111580a0; body size 30 bytes.
#line 1 "ENTRY_111580a0"

void __thiscall Recovered_Bulk::m_FUN_111580a0(short param_2)
{
  int param_1 = (int )this;
  thunk_FUN_111564a0<>((int)param_2);
  *(short*)(param_1 + 400) = (short)(param_2);
  return;
}


// Reference entry 111580d0; body size 30 bytes.
#line 1 "ENTRY_111580d0"

void __thiscall Recovered_Bulk::m_FUN_111580d0(short param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11156630<>((int)param_2);
  *(short*)(param_1 + 0x168) = (short)(param_2);
  return;
}


// Reference entry 11158120; body size 26 bytes.
#line 1 "ENTRY_11158120"

void __thiscall Recovered_Bulk::m_FUN_11158120(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_111567c0<>(param_2);
  *(ushort*)(param_1 + 0x6e) = (ushort)((ushort)param_2 & 0xff);
  return;
}


// Reference entry 11158140; body size 30 bytes.
#line 1 "ENTRY_11158140"

void __thiscall Recovered_Bulk::m_FUN_11158140(short param_2)
{
  int param_1 = (int )this;
  thunk_FUN_111569a0<>((int)param_2);
  *(short*)(param_1 + 0x118) = (short)(param_2);
  return;
}


// Reference entry 11158170; body size 27 bytes.
#line 1 "ENTRY_11158170"

void __thiscall Recovered_Bulk::m_FUN_11158170(byte param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11156b30<>(param_2);
  *(ushort*)(param_1 + 0x140) = (ushort)((ushort)param_2);
  return;
}


// Reference entry 111581a0; body size 30 bytes.
#line 1 "ENTRY_111581a0"

void __thiscall Recovered_Bulk::m_FUN_111581a0(short param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11156e50<>((int)param_2);
  *(short*)(param_1 + 0x17c) = (short)(param_2);
  return;
}


// Reference entry 11158240; body size 27 bytes.
#line 1 "ENTRY_11158240"

void __thiscall Recovered_Bulk::m_FUN_11158240(byte param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11156fe0<>(param_2);
  *(ushort*)(param_1 + 200) = (ushort)((ushort)param_2);
  return;
}


// Reference entry 11158270; body size 30 bytes.
#line 1 "ENTRY_11158270"

void __thiscall Recovered_Bulk::m_FUN_11158270(short param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11156310<>((int)param_2);
  *(short*)(param_1 + 0x8c) = (short)(param_2);
  return;
}


// Reference entry 111582a0; body size 27 bytes.
#line 1 "ENTRY_111582a0"

void __thiscall Recovered_Bulk::m_FUN_111582a0(byte param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11156cc0<>(param_2);
  *(ushort*)(param_1 + 0xb4) = (ushort)((ushort)param_2);
  return;
}


// Reference entry 111582d0; body size 30 bytes.
#line 1 "ENTRY_111582d0"

void __thiscall Recovered_Bulk::m_FUN_111582d0(short param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11157af0((int)param_2);
  *(short*)(param_1 + 0xa0) = (short)(param_2);
  return;
}


// Reference entry 11158300; body size 27 bytes.
#line 1 "ENTRY_11158300"

void __thiscall Recovered_Bulk::m_FUN_11158300(byte param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11157170<>(param_2);
  *(ushort*)(param_1 + 300) = (ushort)((ushort)param_2);
  return;
}


// Reference entry 11158330; body size 30 bytes.
#line 1 "ENTRY_11158330"

void __thiscall Recovered_Bulk::m_FUN_11158330(short param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11157300<>((int)param_2);
  *(short*)(param_1 + 0x104) = (short)(param_2);
  return;
}


// Reference entry 11158360; body size 30 bytes.
#line 1 "ENTRY_11158360"

void __thiscall Recovered_Bulk::m_FUN_11158360(short param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11157490<>((int)param_2);
  *(short*)(param_1 + 0x154) = (short)(param_2);
  return;
}


// Reference entry 11158390; body size 30 bytes.
#line 1 "ENTRY_11158390"

void __thiscall Recovered_Bulk::m_FUN_11158390(short param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11157620<>((int)param_2);
  *(short*)(param_1 + 0xf0) = (short)(param_2);
  return;
}


// Reference entry 111583c0; body size 30 bytes.
#line 1 "ENTRY_111583c0"

void __thiscall Recovered_Bulk::m_FUN_111583c0(byte param_2)
{
  int param_1 = (int )this;
  thunk_FUN_111577b0<>((ushort)param_2);
  *(ushort*)(param_1 + 0xdc) = (ushort)((ushort)param_2);
  return;
}


// Reference entry 11158420; body size 27 bytes.
#line 1 "ENTRY_11158420"

void __thiscall Recovered_Bulk::m_FUN_11158420(short param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11157940<>((int)param_2);
  *(short*)(param_1 + 0x68) = (short)(param_2);
  return;
}


// Reference entry 11158760; body size 18 bytes.
#line 1 "ENTRY_11158760"

undefined ** __stdcall FUN_11158760(undefined4 *param_1)

{
  *param_1 = (undefined4)(2);
  return (undefined **)(&PTR_s_TOSLinkConnected_119ccb90);
}


// Reference entry 11159760; body size 36 bytes.
#line 1 "ENTRY_11159760"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11159760(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RQueueInstance);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x110);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11159790; body size 58 bytes.
#line 1 "ENTRY_11159790"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11159790(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpQAttachQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpQAttachQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpQAttachQueueAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdbd8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111597e0; body size 58 bytes.
#line 1 "ENTRY_111597e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111597e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpQBackupAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpQBackupAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpQBackupAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11159830; body size 58 bytes.
#line 1 "ENTRY_11159830"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11159830(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpQBrowseAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpQBrowseAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpQBrowseAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7e0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11159880; body size 58 bytes.
#line 1 "ENTRY_11159880"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11159880(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpQCreateQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpQCreateQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpQCreateQueueAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111598d0; body size 58 bytes.
#line 1 "ENTRY_111598d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111598d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpQRemoveAllTracksAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpQRemoveAllTracksAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpQRemoveAllTracksAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11159920; body size 58 bytes.
#line 1 "ENTRY_11159920"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11159920(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpQRemoveTrackRangeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpQRemoveTrackRangeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpQRemoveTrackRangeAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11159970; body size 58 bytes.
#line 1 "ENTRY_11159970"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11159970(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpQReorderTracksAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpQReorderTracksAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpQReorderTracksAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11159cc0; body size 33 bytes.
#line 1 "ENTRY_11159cc0"

void __thiscall Recovered_Bulk::m_FUN_11159cc0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 0x40) == 0) {
    thunk_FUN_1113f0e0(param_1,0);
  }
  FUN_10070892(param_2);
  return;
}


// Reference entry 11159df0; body size 51 bytes.
#line 1 "ENTRY_11159df0"

void __fastcall FUN_11159df0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x34), 0);
  if ((int *)(piVar1) != *(int **)(param_1 + 0x38)) {
    do {
      if ((undefined4 *)*piVar1 != (undefined4 *)((0x0))) {
        (*(code *)**(undefined4 **)*piVar1)(1);
      }
      piVar1 = (int *)(piVar1 + 1);
    } while ((int *)(piVar1) != *(int **)(param_1 + 0x38));
    *(undefined4*)(param_1 + 0x38) = (undefined4)(*(undefined4 *)(param_1 + 0x34));
    return;
  }
  *(int**)(param_1 + 0x38) = (int *)(piVar1);
  return;
}


// Reference entry 1115b460; body size 52 bytes.
#line 1 "ENTRY_1115b460"

int __thiscall Recovered_Bulk::m_FUN_1115b460(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x34), 0);
  uVar2 = (uint)(0);
  uVar3 = (uint)(*(int *)(param_1 + 0x38) - (int)piVar1 >> 2);
  if (uVar3 != 0) {
    do {
      if ((int)(param_2) == *(int *)(*piVar1 + 4)) {
        return (int)(*piVar1);
      }
      uVar2 = (uint)(uVar2 + 1);
      piVar1 = (int *)(piVar1 + 1);
    } while (uVar2 < uVar3);
  }
  return (int)(0);
}


// Reference entry 1115c4e0; body size 63 bytes.
#line 1 "ENTRY_1115c4e0"

undefined4 FUN_1115c4e0(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  
  iVar2 = (int)(thunk_FUN_1109f7f0(), 0);
  pbVar3 = (byte *)((byte *)(iVar2 + 0xe1));
  pbVar4 = (byte *)((byte *)&DAT_1188a1d4);
  while( true ) {
    bVar1 = (byte)(*pbVar3);
    bVar5 = (bool)((byte)(bVar1) < *pbVar4);
    if ((byte)(bVar1) != *pbVar4) break;
    if (bVar1 == 0) {
      return (undefined4)(0);
    }
    bVar1 = (byte)(pbVar3[1]);
    bVar5 = (bool)((byte)((bVar1)) < pbVar4[1]);
    if ((byte)((bVar1)) != pbVar4[1]) break;
    pbVar3 = (byte *)(pbVar3 + 2);
    pbVar4 = (byte *)(pbVar4 + 2);
    if (bVar1 == 0) {
      return (undefined4)(0);
    }
  }
  return (undefined4)(((uint)((int3)(-(uint)bVar5 >> 8)) << 8 | (uint)((-(uint)bVar5 | 1) != 0)));
}


// Reference entry 1115c530; body size 38 bytes.
#line 1 "ENTRY_1115c530"

undefined1 * FUN_1115c530(char param_1)

{
  if (param_1 != '\0') {
    if (param_1 == '\x01') {
      return (undefined1 *)(&DAT_119cd1ac);
    }
    if (param_1 == '\x02') {
      return (undefined1 *)(&DAT_119cd1b0);
    }
  }
  return (undefined1 *)(&DAT_119cd1a8);
}


// Reference entry 1115c560; body size 26 bytes.
#line 1 "ENTRY_1115c560"

undefined1 * FUN_1115c560(char param_1)

{
  undefined1 *puVar1;
  
  if ((param_1 == '\0') || (puVar1 = (undefined1 *)(&DAT_119cd1b8), param_1 != '\x01')) {
    puVar1 = (undefined1 *)(&DAT_119cd1b4);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 1115c810; body size 60 bytes.
#line 1 "ENTRY_1115c810"

undefined4 * __fastcall FUN_1115c810(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfWorkerThread);
  param_1[9] = (undefined4)(0);
  *(undefined2*)(param_1 + 10) = (undefined2)(0);
  *(undefined1*)((int)param_1 + 0x2a) = (undefined1)(0);
  thunk_FUN_112a9cf0(param_1 + 7);
  thunk_FUN_112a9cf0(param_1 + 0x15);
  thunk_FUN_112aa310(param_1 + 0xb);
  return (undefined4 *)(param_1);
}


// Reference entry 1115ca20; body size 39 bytes.
#line 1 "ENTRY_1115ca20"

undefined4 __fastcall FUN_1115ca20(int param_1)

{
  undefined4 uVar1;
  
  FUN_112a9d50(param_1 + 0x1c);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x24));
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  FUN_112a9d70(param_1 + 0x1c);
  return (undefined4)(uVar1);
}



void __fastcall FUN_1115ca50(int param_1)

{
  int *piVar1;
  
  thunk_FUN_112a7f50(param_1 + 0x1c);
  piVar1 = (int *)(*(int **)(param_1 + 0x24), 0);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  thunk_FUN_112a8010(param_1 + 0x1c);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0xc))();
    thunk_FUN_1106b190(piVar1,0,0);
  }
  return;
}


// Reference entry 1115cbd0; body size 23 bytes.
#line 1 "ENTRY_1115cbd0"

void __fastcall FUN_1115cbd0(int *param_1)

{
  (**(code **)(*param_1 + 0xc))();
  thunk_FUN_1106b190(param_1,0,0);
  return;
}


// Reference entry 1115cd30; body size 40 bytes.
#line 1 "ENTRY_1115cd30"

void __fastcall FUN_1115cd30(int param_1)

{
  if (*(char *)(param_1 + 0x29) == '\0') {
    thunk_FUN_112a9da0(param_1 + 4,"swfworker",LAB_100323a8,param_1,0);
    *(undefined1*)(param_1 + 0x29) = (undefined1)(1);
  }
  return;
}


// Reference entry 1115ced0; body size 51 bytes.
#line 1 "ENTRY_1115ced0"

void __fastcall FUN_1115ced0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1 + 0x54);
  FUN_112a9d50(iVar1);
  if (*(char *)(param_1 + 0x2a) == '\0') {
    FUN_112aa380(param_1 + 0x2c,iVar1);
  }
  *(undefined1*)(param_1 + 0x2a) = (undefined1)(0);
  FUN_112a9d70(iVar1);
  return;
}


template<class... A> int FUN_1115e0c0(A...)

{
  thunk_FUN_1115cfe0(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 1115e4d0; body size 58 bytes.
#line 1 "ENTRY_1115e4d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1115e4d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpRCRampToVolumeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpRCRampToVolumeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpRCRampToVolumeAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1115e520; body size 58 bytes.
#line 1 "ENTRY_1115e520"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1115e520(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetMuteAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetMuteAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetMuteAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1115e570; body size 58 bytes.
#line 1 "ENTRY_1115e570"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1115e570(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetRelativeVolumeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetRelativeVolumeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetRelativeVolumeAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1115e5c0; body size 35 bytes.
#line 1 "ENTRY_1115e5c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1115e5c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1115e1f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x80);
  }
  return (undefined4)(param_1);
}


// Reference entry 1115e770; body size 20 bytes.
#line 1 "ENTRY_1115e770"

void __thiscall Recovered_Bulk::m_FUN_1115e770(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1115cfe0(param_2,param_3,param_1);
  return;
}


// Reference entry 1115ebe0; body size 45 bytes.
#line 1 "ENTRY_1115ebe0"

void __thiscall Recovered_Bulk::m_FUN_1115ebe0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 1115ed20; body size 19 bytes.
#line 1 "ENTRY_1115ed20"

void __fastcall FUN_1115ed20(undefined4 param_1)

{
  thunk_FUN_1115ed60();
  thunk_FUN_11095e00<>(param_1);
  return;
}


// Reference entry 1115ed40; body size 24 bytes.
#line 1 "ENTRY_1115ed40"

void __fastcall FUN_1115ed40(undefined4 *param_1)

{
  thunk_FUN_1115cfe0(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 1115ee10; body size 60 bytes.
#line 1 "ENTRY_1115ee10"

void __stdcall FUN_1115ee10(int param_1,int param_2)

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


// Reference entry 1115f330; body size 28 bytes.
#line 1 "ENTRY_1115f330"

bool FUN_1115f330(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11160050(param_1), 0);
  if (iVar1 != 0) {
    return (bool)(*(int *)(iVar1 + 0x44) == 1);
  }
  return (bool)(false);
}


// Reference entry 1115f360; body size 28 bytes.
#line 1 "ENTRY_1115f360"

bool FUN_1115f360(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11160050(param_1), 0);
  if (iVar1 != 0) {
    return (bool)(*(int *)(iVar1 + 0x40) == 1);
  }
  return (bool)(false);
}


// Reference entry 1115f390; body size 36 bytes.
#line 1 "ENTRY_1115f390"

bool FUN_1115f390(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11160050(param_1), 0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x3c) != -1)) {
    return (bool)(*(int *)(iVar1 + 0x3c) != 0);
  }
  return (bool)(false);
}


// Reference entry 1115ff80; body size 28 bytes.
#line 1 "ENTRY_1115ff80"

bool FUN_1115ff80(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11160050(param_1), 0);
  if (iVar1 != 0) {
    return (bool)(*(int *)(iVar1 + 0x44) != -1);
  }
  return (bool)(false);
}


// Reference entry 1115ffd0; body size 28 bytes.
#line 1 "ENTRY_1115ffd0"

bool FUN_1115ffd0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11160050(param_1), 0);
  if (iVar1 != 0) {
    return (bool)(*(int *)(iVar1 + 0x40) != -1);
  }
  return (bool)(false);
}


// Reference entry 111611f0; body size 49 bytes.
#line 1 "ENTRY_111611f0"

undefined4 __thiscall Recovered_Bulk::m_FUN_111611f0(int param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 0x18) != 0) {
    if ((int)(param_2) != *(int *)(param_1 + 0x38)) {
      if (*(int *)((param_1 + 0x50)) == *(int *)((param_1 + 0x38))) {
        thunk_FUN_11160980<>(param_2);
      }
      *(int*)(param_1 + 0x38) = (int)(param_2);
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 111619e0; body size 50 bytes.
#line 1 "ENTRY_111619e0"

undefined4 __thiscall Recovered_Bulk::m_FUN_111619e0(byte param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = (uint)((uint)param_2);
    if ((uint)(uVar1) != *(uint *)(param_1 + 0x70)) {
      if (*(uint *)((param_1 + 0x3c)) == *(uint *)((param_1 + 0x70))) {
        thunk_FUN_11160b70<>(uVar1);
      }
      *(uint*)(param_1 + 0x70) = (uint)(uVar1);
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 11161d90; body size 51 bytes.
#line 1 "ENTRY_11161d90"

void __fastcall FUN_11161d90(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(0);
  uVar3 = (uint)(*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48) >> 2);
  if (uVar3 != 0) {
    do {
      iVar1 = (int)(*(int *)(*(int *)(param_1 + 0x48) + uVar2 * 4));
      uVar2 = (uint)(uVar2 + 1);
      *(undefined4*)(iVar1 + 0x48) = (undefined4)(*(undefined4 *)(iVar1 + 0x38));
    } while (uVar2 < uVar3);
  }
  *(undefined4*)(param_1 + 0x9c) = (undefined4)(*(undefined4 *)(param_1 + 0x8c));
  return;
}


// Reference entry 11161dd0; body size 19 bytes.
#line 1 "ENTRY_11161dd0"

void __fastcall FUN_11161dd0(undefined4 param_1)

{
  thunk_FUN_1115ed60();
  thunk_FUN_11095e00<>(param_1);
  return;
}


// Reference entry 11162290; body size 33 bytes.
#line 1 "ENTRY_11162290"

void __thiscall Recovered_Bulk::m_FUN_11162290(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 0x30) == 0) {
    thunk_FUN_1113f0e0(param_1,0);
  }
  FUN_10070892(param_2);
  return;
}


// Reference entry 11162e40; body size 35 bytes.
#line 1 "ENTRY_11162e40"

undefined4 __thiscall Recovered_Bulk::m_FUN_11162e40(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11162c00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc394);
  }
  return (undefined4)(param_1);
}


// Reference entry 11162e70; body size 27 bytes.
#line 1 "ENTRY_11162e70"

undefined4 __thiscall Recovered_Bulk::m_FUN_11162e70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}


// Reference entry 11162ea0; body size 30 bytes.
#line 1 "ENTRY_11162ea0"

undefined4 __thiscall Recovered_Bulk::m_FUN_11162ea0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x3c70);
  }
  return (undefined4)(param_1);
}


// Reference entry 11163e50; body size 48 bytes.
#line 1 "ENTRY_11163e50"

void __thiscall Recovered_Bulk::m_FUN_11163e50(undefined4 *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x2e0) < 5) {
    puVar2 = (undefined4 *)((undefined4 *)(param_1 + 0x10 + *(int *)(param_1 + 0x2e0) * 0x90));
    for (iVar1 = (int)(0x24); iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(*param_2);
      param_2 = (undefined4 *)(param_2 + 1);
      puVar2 = (undefined4 *)(puVar2 + 1);
    }
    *(int*)(param_1 + 0x2e0) = (int)(*(int *)(param_1 + 0x2e0) + 1);
  }
  return;
}


// Reference entry 111644c0; body size 37 bytes.
#line 1 "ENTRY_111644c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_111644c0(int param_2,int param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if ((param_3 == 0) && (param_2 == 0)) {
    return (undefined4)(1);
  }
                    
                    
  uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc070) + 4))(), 0);
  return (undefined4)(uVar1);
}


// Reference entry 11164710; body size 31 bytes.
#line 1 "ENTRY_11164710"

undefined4 * __fastcall FUN_11164710(undefined4 *param_1)

{
  thunk_FUN_111a4bc0(0,"SwfObjIndexListener");
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjIndexListener);
  return (undefined4 *)(param_1);
}


// Reference entry 11165f60; body size 38 bytes.
#line 1 "ENTRY_11165f60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11165f60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11165f90; body size 32 bytes.
#line 1 "ENTRY_11165f90"

undefined4 __thiscall Recovered_Bulk::m_FUN_11165f90(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  return (undefined4)(param_1);
}


// Reference entry 111662d0; body size 54 bytes.
#line 1 "ENTRY_111662d0"

undefined4 __fastcall FUN_111662d0(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x14)) {
  default:
    return (undefined4)(6);
  case 1:
    return (undefined4)(0);
  case 2:
    return (undefined4)(4);
  case 3:
    return (undefined4)(1);
  case 4:
    return (undefined4)(5);
  case 5:
    return (undefined4)(3);
  case 6:
    return (undefined4)(2);
  }
}


// Reference entry 11166390; body size 17 bytes.
#line 1 "ENTRY_11166390"

undefined1 * __fastcall FUN_11166390(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    return (undefined1 *)((undefined1 *)(*(int *)(param_1 + 0x20) + 0x65));
  }
  return (undefined1 *)(&DAT_1186d2ee);
}


// Reference entry 111663d0; body size 57 bytes.
#line 1 "ENTRY_111663d0"

undefined4 __thiscall Recovered_Bulk::m_FUN_111663d0(undefined4 param_2,short *param_3)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  if ((*param_3 == (short)((0))) || (*param_3 == (short)((0x3ea)))) {
    thunk_FUN_11128910();
    puVar1 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x28) != (undefined1 *)((0x0))) {
      puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x28), 0);
    }
    thunk_FUN_11128570(puVar1);
  }
  return (undefined4)(1);
}


// Reference entry 111664b0; body size 30 bytes.
#line 1 "ENTRY_111664b0"

void __thiscall Recovered_Bulk::m_FUN_111664b0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x20) + 4))(param_1 + 8,param_2), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 111669a0; body size 38 bytes.
#line 1 "ENTRY_111669a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111669a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11167050; body size 52 bytes.
#line 1 "ENTRY_11167050"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11167050(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1114ef60(param_2,param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjWebSvcCP);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  *(undefined1*)(param_1 + 10) = (undefined1)(1);
  return (undefined4 *)(param_1);
}


// Reference entry 11167580; body size 45 bytes.
#line 1 "ENTRY_11167580"

void __thiscall Recovered_Bulk::m_FUN_11167580(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 11167760; body size 52 bytes.
#line 1 "ENTRY_11167760"

void __thiscall Recovered_Bulk::m_FUN_11167760(undefined4 param_2,byte param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(99);
  if (param_3 == 0) {
    uVar1 = (undefined4)(0x40);
  }
  thunk_FUN_1106a8d0((uint)param_3 * 0x40 + param_1 + 0x670,param_2,uVar1);
  return;
}


// Reference entry 11167970; body size 42 bytes.
#line 1 "ENTRY_11167970"

int * __fastcall FUN_11167970(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x98))(), 0);
  iVar1 = (int)(*piVar2);
  uVar3 = (undefined4)((**(code **)(*param_1 + 0xe0))(), 0);
  (**(code **)(iVar1 + 0xdc))(uVar3);
  return (int *)(piVar2);
}


// Reference entry 11169430; body size 21 bytes.
#line 1 "ENTRY_11169430"

undefined4 __fastcall FUN_11169430(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x41c) == (int *)((0x0))) {
    return (undefined4)(0);
  }
                    
                    
  uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x41c) + 0xc4))(), 0);
  return (undefined4)(uVar1);
}


// Reference entry 11169670; body size 24 bytes.
#line 1 "ENTRY_11169670"

void __fastcall FUN_11169670(int param_1)

{
  int iVar1;
  
  if ((0 < *(int *)(param_1 + 0x24)) &&
     (iVar1 = (int)(*(int *)(param_1 + 0x24) + -1), *(int *)(param_1 + 0x24) = iVar1, iVar1 == 0)) {
    thunk_FUN_1112a730();
    return;
  }
  return;
}


// Reference entry 111696a0; body size 54 bytes.
#line 1 "ENTRY_111696a0"

void __fastcall FUN_111696a0(int param_1)

{
  if (((*(uint *)(param_1 + 0x424) & 0xffffff00) == 0x12f00) && (*(int *)(param_1 + 0x608) == 3)) {
    thunk_FUN_1109aba0(0x2bab,&DAT_11882ff0);
    return;
  }
  thunk_FUN_11169070(0);
  return;
}


// Reference entry 11169c60; body size 40 bytes.
#line 1 "ENTRY_11169c60"

int __thiscall Recovered_Bulk::m_FUN_11169c60(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_11169ca0((uint)&local_8,param_2,param_3), 0);
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 1116a8e0; body size 39 bytes.
#line 1 "ENTRY_1116a8e0"

undefined4 * __fastcall FUN_1116a8e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1116ae90; body size 19 bytes.
#line 1 "ENTRY_1116ae90"

void __fastcall FUN_1116ae90(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 1116b070; body size 25 bytes.
#line 1 "ENTRY_1116b070"

void __fastcall FUN_1116b070(undefined4 *param_1)

{
  thunk_FUN_11169d70(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 1116b4a0; body size 50 bytes.
#line 1 "ENTRY_1116b4a0"

void __fastcall FUN_1116b4a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_ZPConnRec);
  free((void *)param_1[1]);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  return;
}


// Reference entry 1116b5c0; body size 27 bytes.
#line 1 "ENTRY_1116b5c0"

int __stdcall FUN_1116b5c0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_11169f40<>((uint)&local_8,param_1), 0);
  return (int)(*piVar1 + 0xc);
}


// Reference entry 1116b6a0; body size 38 bytes.
#line 1 "ENTRY_1116b6a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1116b6a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1116b6d0; body size 38 bytes.
#line 1 "ENTRY_1116b6d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1116b6d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1116b950; body size 58 bytes.
#line 1 "ENTRY_1116b950"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1116b950(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpZGTReportUnresponsiveDeviceAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpZGTReportUnresponsiveDeviceAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpZGTReportUnresponsiveDeviceAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1116b9a0; body size 32 bytes.
#line 1 "ENTRY_1116b9a0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1116b9a0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1116b2f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  return (undefined4)(param_1);
}


// Reference entry 1116ba50; body size 25 bytes.
#line 1 "ENTRY_1116ba50"

void __fastcall FUN_1116ba50(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 1116c2b0; body size 25 bytes.
#line 1 "ENTRY_1116c2b0"

void __fastcall FUN_1116c2b0(undefined4 *param_1)

{
  thunk_FUN_11169d70(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 1116c7d0; body size 32 bytes.
#line 1 "ENTRY_1116c7d0"

void __fastcall FUN_1116c7d0(int *param_1)

{
  thunk_FUN_11169d70(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 1116c930; body size 19 bytes.
#line 1 "ENTRY_1116c930"

void __stdcall FUN_1116c930(undefined4 param_1)

{
  thunk_FUN_1116e480(0,param_1,0x3e9);
  return;
}


// Reference entry 1116d520; body size 29 bytes.
#line 1 "ENTRY_1116d520"

void __fastcall FUN_1116d520(int param_1)

{
  FUN_112a9d50(param_1 + 0xc);
  *(undefined1*)(param_1 + 0x14) = (undefined1)(0);
  FUN_112a9d70(param_1 + 0xc);
  return;
}


void __fastcall FUN_1116d550(int param_1)

{
  FUN_112a9d50(param_1 + 0xc);
  *(undefined1*)(param_1 + 0x14) = (undefined1)(1);
  FUN_112a9d70(param_1 + 0xc);
  return;
}


void __thiscall Recovered_Bulk::m_FUN_1116d580(int param_2, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0x1c) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x1c) + 0xc))(), 0);
    if (cVar1 != '\0') {
      iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x1c) + 8))(), 0);
      goto LAB_1116d5a2;
    }
  }
  iVar2 = (int)(*(int *)(param_1 + 0x20));
LAB_1116d5a2:
  if (iVar2 == param_2) {
    *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  }
  return;
}


// Reference entry 1116e6d0; body size 58 bytes.
#line 1 "ENTRY_1116e6d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1116e6d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDRequestResortAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDRequestResortAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDRequestResortAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1116ea70; body size 38 bytes.
#line 1 "ENTRY_1116ea70"

undefined4 __thiscall Recovered_Bulk::m_FUN_1116ea70(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("SortOrder",0), 0);
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 1116ed30; body size 35 bytes.
#line 1 "ENTRY_1116ed30"

undefined4 __thiscall Recovered_Bulk::m_FUN_1116ed30(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1127e5b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2cd34);
  }
  return (undefined4)(param_1);
}


// Reference entry 1116f300; body size 38 bytes.
#line 1 "ENTRY_1116f300"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1116f300(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RRTFXmlWriter);
  thunk_FUN_112741c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1116fe20; body size 39 bytes.
#line 1 "ENTRY_1116fe20"

undefined4 * __fastcall FUN_1116fe20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 111704b0; body size 40 bytes.
#line 1 "ENTRY_111704b0"

int __thiscall Recovered_Bulk::m_FUN_111704b0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_111704f0((uint)&local_8,param_2,param_3), 0);
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 111711d0; body size 55 bytes.
#line 1 "ENTRY_111711d0"

void __thiscall Recovered_Bulk::m_FUN_111711d0(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  int iVar2;
  undefined1 local_8 [8];
  
  uVar1 = (undefined4)(thunk_FUN_101c3fc0(param_3), 0);
  iVar2 = (int)(thunk_FUN_111704f0((uint)&local_8,param_3,uVar1), 0);
  iVar2 = (int)(*(int *)(iVar2 + 4));
  if (iVar2 == 0) {
    iVar2 = (int)(*(int *)(param_1 + 4));
  }
  *param_2 = (int)(iVar2);
  return;
}


// Reference entry 11171c40; body size 39 bytes.
#line 1 "ENTRY_11171c40"

undefined4 * __fastcall FUN_11171c40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 11172570; body size 19 bytes.
#line 1 "ENTRY_11172570"

void __fastcall FUN_11172570(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 11172750; body size 34 bytes.
#line 1 "ENTRY_11172750"

void __fastcall FUN_11172750(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  for (iVar2 = (int)(*param_1); iVar2 != iVar1; iVar2 = iVar2 + 0x24) {
    thunk_FUN_11172590();
  }
  return;
}


// Reference entry 11172780; body size 25 bytes.
#line 1 "ENTRY_11172780"

void __fastcall FUN_11172780(undefined4 *param_1)

{
  thunk_FUN_111705c0(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 11172e30; body size 35 bytes.
#line 1 "ENTRY_11172e30"

undefined4 __thiscall Recovered_Bulk::m_FUN_11172e30(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11172590();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4)(param_1);
}


// Reference entry 11173010; body size 25 bytes.
#line 1 "ENTRY_11173010"

void __fastcall FUN_11173010(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 11173390; body size 36 bytes.
#line 1 "ENTRY_11173390"

void __stdcall FUN_11173390(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x24) {
    thunk_FUN_11172590();
  }
  return;
}


// Reference entry 11173a30; body size 25 bytes.
#line 1 "ENTRY_11173a30"

void __fastcall FUN_11173a30(undefined4 *param_1)

{
  thunk_FUN_111705c0(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 11174050; body size 45 bytes.
#line 1 "ENTRY_11174050"

void __thiscall Recovered_Bulk::m_FUN_11174050(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 11174220; body size 32 bytes.
#line 1 "ENTRY_11174220"

void __fastcall FUN_11174220(int *param_1)

{
  thunk_FUN_111705c0(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 11174520; body size 59 bytes.
#line 1 "ENTRY_11174520"

void __stdcall FUN_11174520(int param_1,int param_2)

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


// Reference entry 11175630; body size 53 bytes.
#line 1 "ENTRY_11175630"

void FUN_11175630(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(thunk_FUN_111a32a0(), 0);
  iVar2 = (int)(thunk_FUN_113b9ec0(uVar1,&DAT_1187b728), 0);
  if (iVar2 == 0) {
    return;
  }
  thunk_FUN_111a66c0<>(param_1,param_2);
  return;
}


// Reference entry 11175710; body size 34 bytes.
#line 1 "ENTRY_11175710"

undefined4 FUN_11175710(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_1145c720(param_3,param_4,"%s/%s",param_1,param_2);
  return (undefined4)(param_3);
}


// Reference entry 11175740; body size 19 bytes.
#line 1 "ENTRY_11175740"

void FUN_11175740(TIMERPROC param_1,UINT param_2)

{
  SetTimer((HWND)0x0,0,param_2,param_1);
  return;
}


// Reference entry 11175b40; body size 53 bytes.
#line 1 "ENTRY_11175b40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11175b40(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  param_1[3] = (undefined4)(param_4);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RBrowseChildIterator);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 11175cc0; body size 38 bytes.
#line 1 "ENTRY_11175cc0"

void __fastcall FUN_11175cc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RTrackMetaDataCacheCB);
  if (param_1[6] != 0) {
    *(int*)(param_1[2] + 8) = (int)((param_1[0x32] * 4 - *(int *)(param_1[2] + 0xc)) + param_1[6]);
  }
  thunk_FUN_11202570();
  return;
}


// Reference entry 11175fc0; body size 22 bytes.
#line 1 "ENTRY_11175fc0"

void __stdcall FUN_11175fc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_11175fe0(param_1,param_2,0,param_3);
  return;
}


// Reference entry 11176190; body size 31 bytes.
#line 1 "ENTRY_11176190"

void FUN_11176190(void)

{
  if (DAT_122e8a94 != 0) {
    thunk_FUN_1148a50e(DAT_122e8a94,8);
  }
  DAT_122e8a94 = (int)(0);
  return;
}


// Reference entry 11176270; body size 29 bytes.
#line 1 "ENTRY_11176270"

void __thiscall Recovered_Bulk::m_FUN_11176270(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_111761d0(1,param_2,param_3);
  *(undefined4*)(param_1 + 0x54) = (undefined4)(0);
  return;
}


// Reference entry 111767c0; body size 38 bytes.
#line 1 "ENTRY_111767c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_111767c0(uint param_2)
{
  uint *param_1 = (uint *)this;
  uint uVar1;
  
  uVar1 = (uint)(*param_1);
  if ((uVar1 <= param_2) && ((uint)((param_2)) < param_1[1] + uVar1)) {
    return (undefined4)(*(undefined4 *)(param_1[3] + (param_2 - uVar1) * 4));
  }
  return (undefined4)(0);
}


// Reference entry 11177260; body size 16 bytes.
#line 1 "ENTRY_11177260"

void __fastcall FUN_11177260(undefined4 *param_1)

{
  param_1[3] = (undefined4)(*param_1);
  param_1[2] = (undefined4)(param_1[1]);
  *(undefined1*)(param_1 + 4) = (undefined1)(0);
  return;
}


// Reference entry 11179630; body size 33 bytes.
#line 1 "ENTRY_11179630"

void __thiscall Recovered_Bulk::m_FUN_11179630(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_11179750<>(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 11179660; body size 33 bytes.
#line 1 "ENTRY_11179660"

void __thiscall Recovered_Bulk::m_FUN_11179660(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_11179840<>(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 11179690; body size 33 bytes.
#line 1 "ENTRY_11179690"

void __thiscall Recovered_Bulk::m_FUN_11179690(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_11179930(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 11179720; body size 33 bytes.
#line 1 "ENTRY_11179720"

void __thiscall Recovered_Bulk::m_FUN_11179720(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_11179a70(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x24);
  return;
}


// Reference entry 11179a20; body size 57 bytes.
#line 1 "ENTRY_11179a20"

void __stdcall FUN_11179a20(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_11179a20(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x18);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 11179ac0; body size 60 bytes.
#line 1 "ENTRY_11179ac0"

int __thiscall Recovered_Bulk::m_FUN_11179ac0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_11179c30<>((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (cVar1 = (char)(thunk_FUN_111a0940(local_4 + 0x10), 0), cVar1 == '\0')) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 11179b10; body size 60 bytes.
#line 1 "ENTRY_11179b10"

int __thiscall Recovered_Bulk::m_FUN_11179b10(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_11179ca0((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (cVar1 = (char)(thunk_FUN_111a0940(local_4 + 0x10), 0), cVar1 == '\0')) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 11179b60; body size 60 bytes.
#line 1 "ENTRY_11179b60"

int __thiscall Recovered_Bulk::m_FUN_11179b60(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_11179d10((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (cVar1 = (char)(thunk_FUN_111a0940(local_4 + 0x10), 0), cVar1 == '\0')) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 11179bb0; body size 49 bytes.
#line 1 "ENTRY_11179bb0"

int __thiscall Recovered_Bulk::m_FUN_11179bb0(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_11179d80((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || ((int)(*param_2) < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 11179bf0; body size 49 bytes.
#line 1 "ENTRY_11179bf0"

int __thiscall Recovered_Bulk::m_FUN_11179bf0(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_11179de0((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || ((int)(*param_2) < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 1117e0a0; body size 48 bytes.
#line 1 "ENTRY_1117e0a0"

undefined4 * __fastcall FUN_1117e0a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 1117e0e0; body size 48 bytes.
#line 1 "ENTRY_1117e0e0"

undefined4 * __fastcall FUN_1117e0e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 1117e120; body size 48 bytes.
#line 1 "ENTRY_1117e120"

undefined4 * __fastcall FUN_1117e120(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 1117e160; body size 48 bytes.
#line 1 "ENTRY_1117e160"

undefined4 * __fastcall FUN_1117e160(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 1117e1a0; body size 48 bytes.
#line 1 "ENTRY_1117e1a0"

undefined4 * __fastcall FUN_1117e1a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 1117fa40; body size 19 bytes.
#line 1 "ENTRY_1117fa40"

void __fastcall FUN_1117fa40(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 1117fa60; body size 19 bytes.
#line 1 "ENTRY_1117fa60"

void __fastcall FUN_1117fa60(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 1117fa80; body size 19 bytes.
#line 1 "ENTRY_1117fa80"

void __fastcall FUN_1117fa80(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 1117faa0; body size 19 bytes.
#line 1 "ENTRY_1117faa0"

void __fastcall FUN_1117faa0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 1117fac0; body size 19 bytes.
#line 1 "ENTRY_1117fac0"

void __fastcall FUN_1117fac0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x24);
  }
  return;
}


// Reference entry 1117fae0; body size 28 bytes.
#line 1 "ENTRY_1117fae0"

void __fastcall FUN_1117fae0(int *param_1)

{
  thunk_FUN_11179750<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 1117fb10; body size 28 bytes.
#line 1 "ENTRY_1117fb10"

void __fastcall FUN_1117fb10(int *param_1)

{
  thunk_FUN_11179840<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 1117fb40; body size 28 bytes.
#line 1 "ENTRY_1117fb40"

void __fastcall FUN_1117fb40(int *param_1)

{
  thunk_FUN_11179930(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 1117fbc0; body size 28 bytes.
#line 1 "ENTRY_1117fbc0"

void __fastcall FUN_1117fbc0(int *param_1)

{
  thunk_FUN_11179a70(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x24);
  return;
}


// Reference entry 1117fe80; body size 19 bytes.
#line 1 "ENTRY_1117fe80"

void __fastcall FUN_1117fe80(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 1117fea0; body size 19 bytes.
#line 1 "ENTRY_1117fea0"

void __fastcall FUN_1117fea0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 1117fec0; body size 19 bytes.
#line 1 "ENTRY_1117fec0"

void __fastcall FUN_1117fec0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 1117ff00; body size 19 bytes.
#line 1 "ENTRY_1117ff00"

void __fastcall FUN_1117ff00(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x24);
  }
  return;
}


// Reference entry 1117ff20; body size 17 bytes.
#line 1 "ENTRY_1117ff20"

void __fastcall FUN_1117ff20(undefined4 *param_1)

{
  thunk_FUN_102a2fd0(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 1117ff40; body size 17 bytes.
#line 1 "ENTRY_1117ff40"

void __fastcall FUN_1117ff40(undefined4 *param_1)

{
  thunk_FUN_11178510(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 1117ff60; body size 17 bytes.
#line 1 "ENTRY_1117ff60"

void __fastcall FUN_1117ff60(undefined4 *param_1)

{
  thunk_FUN_111785d0(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 1117ff80; body size 28 bytes.
#line 1 "ENTRY_1117ff80"

void __fastcall FUN_1117ff80(int *param_1)

{
  thunk_FUN_11179750<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 1117ffb0; body size 28 bytes.
#line 1 "ENTRY_1117ffb0"

void __fastcall FUN_1117ffb0(int *param_1)

{
  thunk_FUN_11179840<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 1117ffe0; body size 28 bytes.
#line 1 "ENTRY_1117ffe0"

void __fastcall FUN_1117ffe0(int *param_1)

{
  thunk_FUN_11179930(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 11180020; body size 28 bytes.
#line 1 "ENTRY_11180020"

void __fastcall FUN_11180020(int *param_1)

{
  thunk_FUN_11179a70(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x24);
  return;
}


// Reference entry 11181b00; body size 38 bytes.
#line 1 "ENTRY_11181b00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11181b00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11181ee0; body size 32 bytes.
#line 1 "ENTRY_11181ee0"

undefined4 __thiscall Recovered_Bulk::m_FUN_11181ee0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11180420();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 11182160; body size 32 bytes.
#line 1 "ENTRY_11182160"

undefined4 __thiscall Recovered_Bulk::m_FUN_11182160(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11180720();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28);
  }
  return (undefined4)(param_1);
}


// Reference entry 111822b0; body size 32 bytes.
#line 1 "ENTRY_111822b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_111822b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11180a30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x70);
  }
  return (undefined4)(param_1);
}


// Reference entry 111824e0; body size 25 bytes.
#line 1 "ENTRY_111824e0"

void __fastcall FUN_111824e0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 11182500; body size 25 bytes.
#line 1 "ENTRY_11182500"

void __fastcall FUN_11182500(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 11182520; body size 25 bytes.
#line 1 "ENTRY_11182520"

void __fastcall FUN_11182520(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 11182540; body size 25 bytes.
#line 1 "ENTRY_11182540"

void __fastcall FUN_11182540(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 11182560; body size 25 bytes.
#line 1 "ENTRY_11182560"

void __fastcall FUN_11182560(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x24), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 11182be0; body size 20 bytes.
#line 1 "ENTRY_11182be0"

void __thiscall Recovered_Bulk::m_FUN_11182be0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11178510(param_2,param_3,param_1);
  return;
}


// Reference entry 11182c00; body size 20 bytes.
#line 1 "ENTRY_11182c00"

void __thiscall Recovered_Bulk::m_FUN_11182c00(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_111785d0(param_2,param_3,param_1);
  return;
}


// Reference entry 11187ac0; body size 54 bytes.
#line 1 "ENTRY_11187ac0"

void __fastcall FUN_11187ac0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 8) + -4));
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    *puVar2 = (undefined4)(0);
    *(undefined4**)(iVar1 + 0x14) = (undefined4 *)(puVar2);
    *puVar2 = (undefined4)(0);
    return;
  }
  *(undefined4*)(iVar1 + 0x14) = (undefined4)(0);
  uRam00000000 = (int)(0);
  return;
}


// Reference entry 111888f0; body size 42 bytes.
#line 1 "ENTRY_111888f0"

void __fastcall FUN_111888f0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_110c2c60(), 0);
  if (iVar1 != 0) {
    thunk_FUN_1118ec30(*(undefined4 *)(param_1 + 0x1c),-(uint)(param_1 != 0) & param_1 + 8U);
  }
  return;
}


// Reference entry 111891a0; body size 33 bytes.
#line 1 "ENTRY_111891a0"

void __fastcall FUN_111891a0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_11179750<>(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 111891d0; body size 33 bytes.
#line 1 "ENTRY_111891d0"

void __fastcall FUN_111891d0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_11179840<>(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 11189200; body size 33 bytes.
#line 1 "ENTRY_11189200"

void __fastcall FUN_11189200(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_11179930(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 11189230; body size 33 bytes.
#line 1 "ENTRY_11189230"

void __fastcall FUN_11189230(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_11179a70(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 11189270; body size 24 bytes.
#line 1 "ENTRY_11189270"

void __fastcall FUN_11189270(undefined4 *param_1)

{
  thunk_FUN_111785d0(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 111898b0; body size 60 bytes.
#line 1 "ENTRY_111898b0"

void __stdcall FUN_111898b0(int param_1,int param_2)

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


// Reference entry 11189900; body size 60 bytes.
#line 1 "ENTRY_11189900"

void __stdcall FUN_11189900(int param_1,int param_2)

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


// Reference entry 1118c1a0; body size 57 bytes.
#line 1 "ENTRY_1118c1a0"

int * FUN_1118c1a0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (int)(thunk_FUN_1118b510<>(param_1,3), 0);
  if (iVar1 != 0) {
    for (puVar2 = (undefined4 *)((undefined4 *)**(undefined4 **)(iVar1 + 0x14), 0);(undefined4 *)(
        puVar2) != (undefined4 *)(*(undefined4 **)(iVar1 + 0x14))[1]; puVar2 = puVar2 + 1) {
      if (*(int *)*puVar2 == (int)(((param_2)))) {
        return (int *)((int *)*puVar2);
      }
    }
  }
  return (int *)((int *)0x0);
}


// Reference entry 1118c3e0; body size 25 bytes.
#line 1 "ENTRY_1118c3e0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1118c3e0(uint param_2)
{
  int param_1 = (int )this;
  if ((*(char *)(param_1 + 0x68) != '\0') && ((uint)(param_2) <= *(uint *)(param_1 + 0x44))) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 1118d1f0; body size 44 bytes.
#line 1 "ENTRY_1118d1f0"

void __fastcall FUN_1118d1f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_110c2c60(), 0);
  if (iVar1 != 0) {
    thunk_FUN_1118ee50(param_1 + 8,*(undefined4 *)(param_1 + 0x1c),param_1 + 0x20,param_1 + 0x24);
  }
  return;
}


// Reference entry 1118d4c0; body size 33 bytes.
#line 1 "ENTRY_1118d4c0"

void __thiscall Recovered_Bulk::m_FUN_1118d4c0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_1118d4f0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x24);
  return;
}


// Reference entry 1118d8f0; body size 48 bytes.
#line 1 "ENTRY_1118d8f0"

undefined4 * __fastcall FUN_1118d8f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 1118dcc0; body size 19 bytes.
#line 1 "ENTRY_1118dcc0"

void __fastcall FUN_1118dcc0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x24);
  }
  return;
}


// Reference entry 1118dce0; body size 28 bytes.
#line 1 "ENTRY_1118dce0"

void __fastcall FUN_1118dce0(int *param_1)

{
  thunk_FUN_1118d4f0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x24);
  return;
}


// Reference entry 1118dd10; body size 38 bytes.
#line 1 "ENTRY_1118dd10"

void __fastcall FUN_1118dd10(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    ((pair<> *)(0))->m_op_dtor();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x24);
  }
  return;
}


// Reference entry 1118dd60; body size 28 bytes.
#line 1 "ENTRY_1118dd60"

void __fastcall FUN_1118dd60(int *param_1)

{
  thunk_FUN_1118d4f0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x24);
  return;
}


// Reference entry 1118e480; body size 38 bytes.
#line 1 "ENTRY_1118e480"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1118e480(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1118e4b0; body size 35 bytes.
#line 1 "ENTRY_1118e4b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1118e4b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  ((pair<> *)(0))->m_op_dtor();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4)(param_1);
}


// Reference entry 1118e6c0; body size 32 bytes.
#line 1 "ENTRY_1118e6c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1118e6c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1118dfd0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4)(param_1);
}


// Reference entry 1118e720; body size 25 bytes.
#line 1 "ENTRY_1118e720"

void __fastcall FUN_1118e720(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x24), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 1118ecb0; body size 33 bytes.
#line 1 "ENTRY_1118ecb0"

void __fastcall FUN_1118ecb0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_1118d4f0(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 1118f4d0; body size 57 bytes.
#line 1 "ENTRY_1118f4d0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1118f4d0(void *param_2,uint param_3)
{
  int param_1 = (int )this;
  size_t sVar1;
  
  if ((param_3 == 0) && ((void *)(param_2) == (void *)(0x0))) {
    return (undefined4)(1);
  }
  if ((*(FILE **)(param_1 + 0xc078) != (FILE *)((0x0))) &&
     (sVar1 = (size_t)(fwrite(param_2,1,param_3,*(FILE **)(param_1 + 0xc078)), 0), param_3 <= sVar1)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 1118f7c0; body size 38 bytes.
#line 1 "ENTRY_1118f7c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1118f7c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjDP);
  thunk_FUN_1113e6f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11190390; body size 18 bytes.
#line 1 "ENTRY_11190390"

void __fastcall FUN_11190390(int param_1)

{
  if (*(void **)(param_1 + 8) != (char *)(((param_1 + 0xc)))) {
    free(*(void **)(param_1 + 8));
  }
  return;
}


// Reference entry 111903c0; body size 38 bytes.
#line 1 "ENTRY_111903c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111903c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjRC);
  thunk_FUN_1113e6f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11190480; body size 18 bytes.
#line 1 "ENTRY_11190480"

undefined ** __stdcall FUN_11190480(undefined4 *param_1)

{
  *param_1 = (undefined4)(0x1d);
  return (undefined **)(&PTR_s_Volume_Master_119ce998);
}


// Reference entry 11191dc0; body size 19 bytes.
#line 1 "ENTRY_11191dc0"

void FUN_11191dc0(void)

{
  thunk_FUN_111fed00();
  thunk_FUN_1114f320();
  return;
}


// Reference entry 11191df0; body size 35 bytes.
#line 1 "ENTRY_11191df0"

undefined4 __thiscall Recovered_Bulk::m_FUN_11191df0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11191b90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c48);
  }
  return (undefined4)(param_1);
}


// Reference entry 11191ec0; body size 42 bytes.
#line 1 "ENTRY_11191ec0"

undefined4 __thiscall Recovered_Bulk::m_FUN_11191ec0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_111fed00();
  thunk_FUN_1114f320();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x4c);
  }
  return (undefined4)(param_1);
}


// Reference entry 11192780; body size 17 bytes.
#line 1 "ENTRY_11192780"

undefined1 * __fastcall FUN_11192780(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x1c40) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x1c40), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 11192d20; body size 18 bytes.
#line 1 "ENTRY_11192d20"

bool __stdcall FUN_11192d20(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11192d60(param_1), 0);
  return (bool)(iVar1 != -1);
}


// Reference entry 11193300; body size 38 bytes.
#line 1 "ENTRY_11193300"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11193300(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11193490; body size 45 bytes.
#line 1 "ENTRY_11193490"

void __thiscall Recovered_Bulk::m_FUN_11193490(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 11193c40; body size 27 bytes.
#line 1 "ENTRY_11193c40"

void __stdcall FUN_11193c40(unsigned int recovered_unused_stack_0)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_111a7100("onRatingsChanged",0,0), 0);
  thunk_FUN_1106b260(uVar1);
  return;
}


// Reference entry 11194190; body size 54 bytes.
#line 1 "ENTRY_11194190"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11194190(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11202480();
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RTrackMetaDataObjCB);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 111941f0; body size 45 bytes.
#line 1 "ENTRY_111941f0"

void __thiscall Recovered_Bulk::m_FUN_111941f0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 11194230; body size 20 bytes.
#line 1 "ENTRY_11194230"

void __thiscall Recovered_Bulk::m_FUN_11194230(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0)
{
  int *param_1 = (int *)this;
  (**(code **)(*param_1 + 8))(param_2,param_3,param_4);
  return;
}


// Reference entry 11194cd0; body size 18 bytes.
#line 1 "ENTRY_11194cd0"

int __fastcall FUN_11194cd0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0xc));
  if (iVar1 != 0) {
    *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
    return (int)(iVar1);
  }
  return (int)(0);
}


// Reference entry 11195470; body size 52 bytes.
#line 1 "ENTRY_11195470"

void __fastcall FUN_11195470(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RRestoreAVTStateAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RRestoreAVTStateAIOOp);
  param_1[0xd] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  param_1[10] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  thunk_FUN_11261f10();
  return;
}


// Reference entry 11195890; body size 38 bytes.
#line 1 "ENTRY_11195890"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11195890(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111958c0; body size 38 bytes.
#line 1 "ENTRY_111958c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111958c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111958f0; body size 38 bytes.
#line 1 "ENTRY_111958f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111958f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11195920; body size 38 bytes.
#line 1 "ENTRY_11195920"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11195920(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11195950; body size 38 bytes.
#line 1 "ENTRY_11195950"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11195950(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11195980; body size 38 bytes.
#line 1 "ENTRY_11195980"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11195980(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11195c00; body size 58 bytes.
#line 1 "ENTRY_11195c00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11195c00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetCrossfadeModeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetCrossfadeModeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetCrossfadeModeAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11195c50; body size 58 bytes.
#line 1 "ENTRY_11195c50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11195c50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetTransportInfoAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetTransportInfoAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetTransportInfoAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe3d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11195ca0; body size 58 bytes.
#line 1 "ENTRY_11195ca0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11195ca0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetTransportSettingsAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetTransportSettingsAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetTransportSettingsAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdfd0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1119a0c0; body size 38 bytes.
#line 1 "ENTRY_1119a0c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1119a0c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1119a0f0; body size 32 bytes.
#line 1 "ENTRY_1119a0f0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1119a0f0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11199b90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  return (undefined4)(param_1);
}


// Reference entry 1119a1d0; body size 33 bytes.
#line 1 "ENTRY_1119a1d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1119a1d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHouseholdListenerCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1119a200; body size 32 bytes.
#line 1 "ENTRY_1119a200"

undefined4 __thiscall Recovered_Bulk::m_FUN_1119a200(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11165d70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4)(param_1);
}


// Reference entry 1119a230; body size 33 bytes.
#line 1 "ENTRY_1119a230"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1119a230(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RefCountBase);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1119a260; body size 32 bytes.
#line 1 "ENTRY_1119a260"

undefined4 __thiscall Recovered_Bulk::m_FUN_1119a260(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11199df0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x58);
  }
  return (undefined4)(param_1);
}


// Reference entry 1119a2f0; body size 32 bytes.
#line 1 "ENTRY_1119a2f0"

void __fastcall FUN_1119a2f0(int param_1)

{
  thunk_FUN_1106b1c0(-(uint)(param_1 != 0) & param_1 + 8U);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(0);
  return;
}


// Reference entry 1119a4a0; body size 40 bytes.
#line 1 "ENTRY_1119a4a0"

int * __thiscall Recovered_Bulk::m_FUN_1119a4a0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x20));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 1119a980; body size 21 bytes.
#line 1 "ENTRY_1119a980"

undefined4 __thiscall Recovered_Bulk::m_FUN_1119a980(uint param_2)
{
  int param_1 = (int )this;
  if ((uint)(param_2) < *(uint *)(param_1 + 0x34)) {
    return (undefined4)(*(undefined4 *)(param_1 + 0x38 + param_2 * 4));
  }
  return (undefined4)(0);
}


// Reference entry 1119a9a0; body size 46 bytes.
#line 1 "ENTRY_1119a9a0"

int * __thiscall Recovered_Bulk::m_FUN_1119a9a0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = (uint)(0);
  if (*(uint *)(param_1 + 0x34) != 0) {
    puVar2 = (undefined4 *)((undefined4 *)(param_1 + 0x38));
    do {
      if (*(int *)*puVar2 == (int)(((param_2)))) {
        return (int *)((int *)*puVar2);
      }
      uVar1 = (uint)(uVar1 + 1);
      puVar2 = (undefined4 *)(puVar2 + 1);
    } while ((uint)(uVar1) < *(uint *)(param_1 + 0x34));
  }
  return (int *)((int *)0x0);
}


// Reference entry 1119a9f0; body size 40 bytes.
#line 1 "ENTRY_1119a9f0"

int * __thiscall Recovered_Bulk::m_FUN_1119a9f0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x2c));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 1119ac90; body size 40 bytes.
#line 1 "ENTRY_1119ac90"

int * __thiscall Recovered_Bulk::m_FUN_1119ac90(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x1c));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 1119ace0; body size 63 bytes.
#line 1 "ENTRY_1119ace0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1119ace0(undefined4 param_2,short *param_3)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined1*)(param_1 + 0x34) = (undefined1)(1);
  if (*param_3 != (short)((0))) {
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x24), 0);
    if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 1119ba20; body size 23 bytes.
#line 1 "ENTRY_1119ba20"

undefined4 __fastcall FUN_1119ba20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x20) + 4))(param_1 + -8);
  }
  return (undefined4)(0);
}


// Reference entry 1119bd70; body size 49 bytes.
#line 1 "ENTRY_1119bd70"

void __thiscall Recovered_Bulk::m_FUN_1119bd70(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  *(undefined4*)(param_1 + 0x28) = (undefined4)(param_2);
  if (*(char *)(param_1 + 0x30) == '\0') {
    iVar1 = (int)(thunk_FUN_1119b010(), 0);
    if (iVar1 == 0) {
      return;
    }
    *(undefined1*)(param_1 + 0x30) = (undefined1)(1);
  }
  thunk_FUN_1106b190(param_1 + 8,0,0);
  return;
}


// Reference entry 1119bdc0; body size 30 bytes.
#line 1 "ENTRY_1119bdc0"

void __thiscall Recovered_Bulk::m_FUN_1119bdc0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x2c) + 4))(param_1 + 8,param_2), 0);
    *(undefined4*)(param_1 + 0x30) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 1119bdf0; body size 38 bytes.
#line 1 "ENTRY_1119bdf0"

void __thiscall Recovered_Bulk::m_FUN_1119bdf0(int param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x30) = (undefined1)(1);
  if (param_2 != 0) {
    thunk_FUN_1119ad30<>(param_2);
  }
  if (*(int **)(param_1 + 0x28) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x28) + 4))(param_1);
  }
  return;
}


// Reference entry 1119bf70; body size 33 bytes.
#line 1 "ENTRY_1119bf70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1119bf70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RPresentationMapParserCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1119bfa0; body size 35 bytes.
#line 1 "ENTRY_1119bfa0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1119bfa0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  FUN_1125b8f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x294);
  }
  return (undefined4)(param_1);
}


undefined4 * __thiscall Recovered_Bulk::m_FUN_1119bfd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RPresentationMapParserCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1119c0c0; body size 30 bytes.
#line 1 "ENTRY_1119c0c0"

void __thiscall Recovered_Bulk::m_FUN_1119c0c0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  thunk_FUN_1118b7b0(*(undefined4 *)(param_1 + 8),param_2,param_3,param_4,param_5);
  return;
}


// Reference entry 1119c150; body size 30 bytes.
#line 1 "ENTRY_1119c150"

void __thiscall Recovered_Bulk::m_FUN_1119c150(undefined4 param_2,undefined1 param_3,undefined1 param_4)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  *(undefined1*)(*(int *)(param_1 + 4) + 0x6a) = (undefined1)(param_3);
  *(undefined1*)(*(int *)(param_1 + 4) + 0x6b) = (undefined1)(param_4);
  return;
}


// Reference entry 1119c190; body size 50 bytes.
#line 1 "ENTRY_1119c190"

void __thiscall Recovered_Bulk::m_FUN_1119c190(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)
{
  int param_1 = (int )this;
  thunk_FUN_111879d0(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + 1);
  return;
}


// Reference entry 1119cfc0; body size 36 bytes.
#line 1 "ENTRY_1119cfc0"

undefined4 FUN_1119cfc0(int param_1)

{
  if ((((param_1 != 0xff) && (param_1 != 0)) && (param_1 != 1)) &&
     ((param_1 != 2 && (param_1 != 8)))) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 111a00f0; body size 45 bytes.
#line 1 "ENTRY_111a00f0"

void __thiscall Recovered_Bulk::m_FUN_111a00f0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 111a0360; body size 42 bytes.
#line 1 "ENTRY_111a0360"

void __fastcall FUN_111a0360(int param_1)

{
  if (*(char *)(param_1 + 0x1c) == '\0') {
    thunk_FUN_1107e1f0<>(param_1);
    thunk_FUN_1107e550(param_1);
    thunk_FUN_1107e200<>(param_1);
    *(undefined1*)(param_1 + 0x1c) = (undefined1)(1);
  }
  return;
}


// Reference entry 111a03a0; body size 47 bytes.
#line 1 "ENTRY_111a03a0"

void __fastcall FUN_111a03a0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 4));
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x1c) != '\0')) {
    thunk_FUN_11095e00<>(iVar1);
    thunk_FUN_11096350<>(iVar1);
    thunk_FUN_11095e10<>(iVar1);
    *(undefined1*)(iVar1 + 0x1c) = (undefined1)(0);
  }
  return;
}


// Reference entry 111a03e0; body size 42 bytes.
#line 1 "ENTRY_111a03e0"

void __fastcall FUN_111a03e0(int param_1)

{
  if (*(char *)(param_1 + 0x1c) != '\0') {
    thunk_FUN_11095e00<>(param_1);
    thunk_FUN_11096350<>(param_1);
    thunk_FUN_11095e10<>(param_1);
    *(undefined1*)(param_1 + 0x1c) = (undefined1)(0);
  }
  return;
}


// Reference entry 111a05c0; body size 16 bytes.
#line 1 "ENTRY_111a05c0"

void __thiscall Recovered_Bulk::m_FUN_111a05c0(int param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(int*)(param_1 + 4) = (int)(param_2);
  return;
}


// Reference entry 111a05e0; body size 49 bytes.
#line 1 "ENTRY_111a05e0"

void __thiscall Recovered_Bulk::m_FUN_111a05e0(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 4));
  piVar2 = (int *)((int *)(param_1 + 4));
  if (iVar1 != 0) {
    while (iVar1 != param_2) {
      piVar2 = (int *)((int *)(iVar1 + 4));
      iVar1 = (int)(*piVar2);
      if (iVar1 == 0) {
        return;
      }
    }
    *piVar2 = (int)(*(int *)(iVar1 + 4));
    *(undefined4*)(param_2 + 4) = (undefined4)(0);
  }
  return;
}


// Reference entry 111a0620; body size 24 bytes.
#line 1 "ENTRY_111a0620"

void __fastcall FUN_111a0620(int param_1)

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


// Reference entry 111a0f30; body size 52 bytes.
#line 1 "ENTRY_111a0f30"

bool __thiscall Recovered_Bulk::m_FUN_111a0f30(char *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  char *pcVar1;
  
  if (((char *)(param_2) == (char *)(0x0)) || (*param_2 == (char)(('\0')))) {
    return (bool)(true);
  }
  pcVar1 = (char *)((char *)*param_1);
  if (((char *)(pcVar1) != (char *)(0x0)) && (*pcVar1 != (char)(('\0')))) {
    pcVar1 = (char *)(strstr(pcVar1,param_2), 0);
    return(char *)( pcVar1) != (char *)(0x0);
  }
  return (bool)(false);
}


// Reference entry 111a1fd0; body size 24 bytes.
#line 1 "ENTRY_111a1fd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111a1fd0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(0);
  thunk_FUN_111a2370<>(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 111a2cb0; body size 34 bytes.
#line 1 "ENTRY_111a2cb0"

int __fastcall FUN_111a2cb0(int *param_1)

{
  int iVar1;
  
  if ((*param_1 == (int)((6))) && ((int *)param_1[2] != (int *)(((0x0))))) {
    iVar1 = (int)((**(code **)(*(int *)param_1[2] + 0x20))(), 0);
    if (iVar1 == 8) {
      return (int)(param_1[2]);
    }
  }
  return (int)(0);
}


// Reference entry 111a32a0; body size 62 bytes.
#line 1 "ENTRY_111a32a0"

char * __fastcall FUN_111a32a0(undefined4 *param_1)

{
  char *pcVar1;
  
  switch(*param_1) {
  default:
    return (char *)("");
  case 1:
    return (char *)("null");
  case 2:
    pcVar1 = (char *)("");
    if ((char *)param_1[2] != (char *)(((0x0)))) {
      pcVar1 = (char *)((char *)param_1[2]);
    }
    break;
  case 3:
    return (char *)((char *)param_1[2]);
  case 5:
    pcVar1 = (char *)("true");
    if (param_1[2] == 0) {
      pcVar1 = (char *)("false");
    }
    return (char *)(pcVar1);
  }
  return (char *)(pcVar1);
}


// Reference entry 111a3760; body size 63 bytes.
#line 1 "ENTRY_111a3760"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_111a3760(double param_1)

{
  int iVar1;
  
  iVar1 = (int)(_isnan(param_1), 0);
  if ((iVar1 == 0) &&
     (DAT_119d00b0 <= (double)((unsigned long long)((uint)((ulonglong)param_1 >> 0x20) & _UNK_118a1554) << 32 | (unsigned long long)((uint)((*(unsigned long long *)&(param_1)) >> ((0) * 8)) & DAT_118a1550)))) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 111a3d30; body size 56 bytes.
#line 1 "ENTRY_111a3d30"

int FUN_111a3d30(void)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)((float10)thunk_FUN_111a3ca0(), 0);
  iVar1 = (int)(_isnan((double)fVar2), 0);
  if (iVar1 != 0) {
    return (int)(0);
  }
  return (int)((int)fVar2);
}


// Reference entry 111a4800; body size 33 bytes.
#line 1 "ENTRY_111a4800"

void __thiscall Recovered_Bulk::m_FUN_111a4800(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_111a4830(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 111a4b00; body size 48 bytes.
#line 1 "ENTRY_111a4b00"

undefined4 * __fastcall FUN_111a4b00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 111a4e00; body size 28 bytes.
#line 1 "ENTRY_111a4e00"

void __fastcall FUN_111a4e00(int *param_1)

{
  thunk_FUN_111a4830(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 111a4e30; body size 28 bytes.
#line 1 "ENTRY_111a4e30"

void __fastcall FUN_111a4e30(int *param_1)

{
  thunk_FUN_111a4830(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 111a5160; body size 32 bytes.
#line 1 "ENTRY_111a5160"

undefined4 __thiscall Recovered_Bulk::m_FUN_111a5160(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_111a4f00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4)(param_1);
}


// Reference entry 111a5190; body size 33 bytes.
#line 1 "ENTRY_111a5190"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111a5190(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjIter);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111a5270; body size 33 bytes.
#line 1 "ENTRY_111a5270"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111a5270(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjIter);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111a53f0; body size 41 bytes.
#line 1 "ENTRY_111a53f0"

void FUN_111a53f0(int param_1)

{
  if (param_1 == 0) {
    thunk_FUN_111a74d0("FlashDebugObjects",1,"RdumpSwfObj: can\'t dump NULL object\n");
    return;
  }
  thunk_FUN_111a5430(param_1,0);
  return;
}


// Reference entry 111a5a00; body size 25 bytes.
#line 1 "ENTRY_111a5a00"

void __stdcall FUN_111a5a00(unsigned int recovered_unused_stack_0)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_111a32a0(), 0);
  thunk_FUN_111a42a0(uVar1);
  return;
}


// Reference entry 111a62a0; body size 34 bytes.
#line 1 "ENTRY_111a62a0"

bool __thiscall Recovered_Bulk::m_FUN_111a62a0(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)((0x0))) {
    puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 8), 0);
  }
  iVar1 = (int)(thunk_FUN_113b9ec0(param_2,puVar2), 0);
  return (bool)(iVar1 == 0);
}


// Reference entry 111a6a00; body size 28 bytes.
#line 1 "ENTRY_111a6a00"

undefined4 __stdcall FUN_111a6a00(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_111a4170<>(param_1);
  thunk_FUN_111a45e0(param_2);
  return (undefined4)(0);
}


// Reference entry 111a6c40; body size 16 bytes.
#line 1 "ENTRY_111a6c40"

void __fastcall FUN_111a6c40(undefined4 *param_1)

{
  thunk_FUN_111a36f0();
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 111a6e70; body size 16 bytes.
#line 1 "ENTRY_111a6e70"

undefined4 * __fastcall FUN_111a6e70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 111a6f10; body size 54 bytes.
#line 1 "ENTRY_111a6f10"

void FUN_111a6f10(void)

{ int stack0xfffffffc;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  thunk_FUN_111a7300(DAT_12126b84 ^ (uint)&stack0xfffffffc);

  return;

 } catch (...) { }
}


// Reference entry 111a72b0; body size 27 bytes.
#line 1 "ENTRY_111a72b0"

int __thiscall Recovered_Bulk::m_FUN_111a72b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_2 = (int)(*piVar1);
    return (int)(piVar1[1]);
  }
  return (int)(0);
}


// Reference entry 111a72e0; body size 25 bytes.
#line 1 "ENTRY_111a72e0"

undefined4 FUN_111a72e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(*piVar1);
    return (undefined4)(piVar1[1]);
  }
  return (undefined4)(0);
}


// Reference entry 111a74d0; body size 32 bytes.
#line 1 "ENTRY_111a74d0"

void FUN_111a74d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{ int stack0x00000010;
 try {
  if ((code *)(DAT_122e8adc) != (code *)(0x0)) {
    (*(code *)(uint)(DAT_122e8adc))(param_1,param_2,param_3,&stack0x00000010);
  }
  return;

 } catch (...) { }
}


// Reference entry 111a7590; body size 47 bytes.
#line 1 "ENTRY_111a7590"

undefined4 * FUN_111a7590(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x14), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    thunk_FUN_111a4bc0(param_1,"Object");
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwfObjObject);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 111a7630; body size 35 bytes.
#line 1 "ENTRY_111a7630"

void FUN_111a7630(undefined4 *param_1)

{
  int iVar1;
  
  if ((undefined4 *)(param_1) != (undefined4 *)(0x0)) {
    iVar1 = (int)(thunk_FUN_1123fcd0(param_1 + 1), 0);
    if (iVar1 == 0) {
      (**(code **)*param_1)(1);
    }
  }
  return;
}


// Reference entry 111a8570; body size 32 bytes.
#line 1 "ENTRY_111a8570"

undefined4 __thiscall Recovered_Bulk::m_FUN_111a8570(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_111a5000();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4)(param_1);
}


// Reference entry 111a8780; body size 63 bytes.
#line 1 "ENTRY_111a8780"

void __thiscall Recovered_Bulk::m_FUN_111a8780(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  void *_Dst;
  
  iVar1 = (int)(param_1[1]);
  iVar2 = (int)(*param_1);
  _Dst = (void *)((void *)thunk_FUN_111a8930(param_2), 0);
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  thunk_FUN_111a86c0(_Dst,iVar1 - iVar2 >> 2,param_2);
  return;
}


// Reference entry 111a92e0; body size 30 bytes.
#line 1 "ENTRY_111a92e0"

undefined1 __fastcall FUN_111a92e0(int param_1)

{
  char cVar1;
  
  if ((uint)(*(int *)(*(int *)(param_1 + 4) + 0x18) - *(int *)(*(int *)(param_1 + 4) + 0x14) >> 2) <= *(uint *)(param_1 + 0xc)) {
    cVar1 = (char)(thunk_FUN_111a6260(), 0);
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 111ab110; body size 46 bytes.
#line 1 "ENTRY_111ab110"

void __thiscall Recovered_Bulk::m_FUN_111ab110(uint param_2)
{
  int param_1 = (int )this;
  if (param_2 <= (uint)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14) >> 2)) {
    return;
  }
  if (param_2 < 0x40000000) {
    thunk_FUN_111a8780();
    return;
  }
                    
  thunk_FUN_111a8920();
}


// Reference entry 111ab2c0; body size 40 bytes.
#line 1 "ENTRY_111ab2c0"

int * __thiscall Recovered_Bulk::m_FUN_111ab2c0(int *param_2)
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


// Reference entry 111abf70; body size 29 bytes.
#line 1 "ENTRY_111abf70"

void FUN_111abf70(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1);
  thunk_FUN_111af700(param_1);
                    
  exit(1);
}


// Reference entry 111ac070; body size 34 bytes.
#line 1 "ENTRY_111ac070"

void FUN_111ac070(undefined4 param_1,undefined4 param_2)

{ int stack0x0000000c;
 try {
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_101a6c80(param_1,param_2,0,&stack0x0000000c), 0);
  __stdio_common_vfprintf(*puVar1,puVar1[1]);
  return;

 } catch (...) { }
}


// Reference entry 111ac1c0; body size 48 bytes.
#line 1 "ENTRY_111ac1c0"

int FUN_111ac1c0(undefined4 param_1,undefined4 param_2)

{ int stack0x0000000c;
 try {
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)((uint *)thunk_FUN_101a6c80(param_1,0xffffffff,param_2,0,&stack0x0000000c), 0);
  iVar2 = (int)(__stdio_common_vsprintf(*puVar1 | 1,puVar1[1]), 0);
  if (iVar2 < 0) {
    iVar2 = (int)(-1);
  }
  return (int)(iVar2);

 } catch (...) { }
}


// Reference entry 111af650; body size 57 bytes.
#line 1 "ENTRY_111af650"

void FUN_111af650(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0x24))(param_1,1);
    if (*(char *)(param_1 + 0x10) != '\0') {
      *(undefined4*)(param_1 + 0x14) = (undefined4)(200);
      *(undefined4*)(param_1 + 0x10c) = (undefined4)(0);
      return;
    }
    *(undefined4*)(param_1 + 0x14) = (undefined4)(100);
  }
  return;
}


// Reference entry 111af6a0; body size 30 bytes.
#line 1 "ENTRY_111af6a0"

void FUN_111af6a0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)((*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x112), 0);
  *(undefined1*)(iVar1 + 0x111) = (undefined1)(0);
  return;
}


// Reference entry 111af6d0; body size 30 bytes.
#line 1 "ENTRY_111af6d0"

void FUN_111af6d0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)((*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x82), 0);
  *(undefined1*)(iVar1 + 0x80) = (undefined1)(0);
  return;
}


// Reference entry 111af700; body size 37 bytes.
#line 1 "ENTRY_111af700"

void FUN_111af700(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0x28))(param_1);
  }
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 111afe20; body size 61 bytes.
#line 1 "ENTRY_111afe20"

void FUN_111afe20(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)param_1[100]);
  *puVar1 = (undefined4)(FUN_111af730);
  *(undefined2*)(puVar1 + 4) = (undefined2)(0);
  *(undefined1*)(puVar1 + 5) = (undefined1)(1);
  (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)param_1[0x65])(param_1);
  param_1[0x23] = (int)(0);
  return;
}


// Reference entry 111b1210; body size 51 bytes.
#line 1 "ENTRY_111b1210"

void FUN_111b1210(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x1c), 0);
  *(undefined4**)(param_1 + 0x180) = (undefined4 *)(puVar1);
  *puVar1 = (undefined4)(FUN_111b1900);
  puVar1[1] = (undefined4)(LAB_111b11e0);
  *(undefined1*)(puVar1 + 2) = (undefined1)(0);
  FUN_111b15e0(param_1);
  return;
}


// Reference entry 111b1c00; body size 25 bytes.
#line 1 "ENTRY_111b1c00"

void FUN_111b1c00(void *param_1,void *param_2,int param_3)

{
  memcpy(param_2,param_1,param_3 << 7);
  return;
}


// Reference entry 111b1ca0; body size 23 bytes.
#line 1 "ENTRY_111b1ca0"

int FUN_111b1ca0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(param_1 + -1 + param_2);
  return (int)(iVar1 - iVar1 % param_2);
}


// Reference entry 111b1cc0; body size 19 bytes.
#line 1 "ENTRY_111b1cc0"

void FUN_111b1cc0(void *param_1,size_t param_2)

{
  memset(param_1,0,param_2);
  return;
}


// Reference entry 111b1d50; body size 22 bytes.
#line 1 "ENTRY_111b1d50"

void FUN_111b1d50(int *param_1)

{
  *(undefined4*)(*param_1 + 0x14) = (undefined4)(0x31);
  (**(code **)*param_1)(param_1);
  return;
}


// Reference entry 111bce20; body size 25 bytes.
#line 1 "ENTRY_111bce20"

void __thiscall Recovered_Bulk::m_FUN_111bce20(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_111bf230(*(undefined4 *)(param_1 + 0x218),param_2,param_3);
  return;
}


// Reference entry 111bce40; body size 25 bytes.
#line 1 "ENTRY_111bce40"

void __thiscall Recovered_Bulk::m_FUN_111bce40(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_111bf320(*(undefined4 *)(param_1 + 0x218),param_2,param_3);
  return;
}


// Reference entry 111bcee0; body size 49 bytes.
#line 1 "ENTRY_111bcee0"

void __thiscall Recovered_Bulk::m_FUN_111bcee0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)
{
  int param_1 = (int )this;
  thunk_FUN_111bfa10(*(undefined4 *)(param_1 + 0x218),param_2,param_3,param_4,param_5,param_6, param_7,param_8,param_9);
  return;
}


// Reference entry 111bcf20; body size 25 bytes.
#line 1 "ENTRY_111bcf20"

void __thiscall Recovered_Bulk::m_FUN_111bcf20(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_111bfeb0(*(undefined4 *)(param_1 + 0x218),param_2,param_3);
  return;
}


// Reference entry 111bcf40; body size 21 bytes.
#line 1 "ENTRY_111bcf40"

void __thiscall Recovered_Bulk::m_FUN_111bcf40(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_111c0040(*(undefined4 *)(param_1 + 0x218),param_2);
  return;
}


// Reference entry 111bcf60; body size 25 bytes.
#line 1 "ENTRY_111bcf60"

void __thiscall Recovered_Bulk::m_FUN_111bcf60(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_111c0070(*(undefined4 *)(param_1 + 0x218),param_2,param_3);
  return;
}


// Reference entry 111bcfc0; body size 25 bytes.
#line 1 "ENTRY_111bcfc0"

void __thiscall Recovered_Bulk::m_FUN_111bcfc0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_111c0380(*(undefined4 *)(param_1 + 0x218),param_2,param_3);
  return;
}


// Reference entry 111bcfe0; body size 25 bytes.
#line 1 "ENTRY_111bcfe0"

void __thiscall Recovered_Bulk::m_FUN_111bcfe0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_111c03c0(*(undefined4 *)(param_1 + 0x218),param_2,param_3);
  return;
}


// Reference entry 111bd000; body size 55 bytes.
#line 1 "ENTRY_111bd000"

void __thiscall Recovered_Bulk::m_FUN_111bd000(int param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 0x214) != (int)(param_2)) {
    thunk_FUN_111bdc10(param_1,&DAT_119d25d0,3,"dtls-state : %s", (&PTR_s_DTLS_STATE_DISCONNECTED_119d2487_5_121202ec)[param_2]);
    *(int*)(param_1 + 0x214) = (int)(param_2);
  }
  return;
}


// Reference entry 111bdc10; body size 34 bytes.
#line 1 "ENTRY_111bdc10"

void FUN_111bdc10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{ int stack0x00000014;
 try {
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x10) + 4))(param_2,param_3,param_4,&stack0x00000014);
  }
  return;

 } catch (...) { }
}


// Reference entry 111be2e0; body size 49 bytes.
#line 1 "ENTRY_111be2e0"

undefined4 __fastcall FUN_111be2e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x214));
  if (((iVar1 != 2) && (iVar1 != 1)) && (iVar1 != 6)) {
    return (undefined4)(0xffffffff);
  }
  uVar2 = (undefined4)(thunk_FUN_113e99b0(*(undefined4 *)(param_1 + 0xc),(*(int *)(param_1 + 8) != 0) + '\x01', 100), 0);
  return (undefined4)(uVar2);
}


// Reference entry 111be750; body size 22 bytes.
#line 1 "ENTRY_111be750"

undefined4 __thiscall Recovered_Bulk::m_FUN_111be750(int param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 0x10) == (int)(param_2)) {
    return (undefined4)(0);
  }
  *(int*)(param_1 + 0x10) = (int)(param_2);
  return (undefined4)(1);
}


// Reference entry 111be770; body size 58 bytes.
#line 1 "ENTRY_111be770"

void __fastcall FUN_111be770(int param_1)

{
  thunk_FUN_113db5a0(param_1 + 0x18);
  *(undefined4*)(param_1 + 0x220) = (undefined4)(0);
  memset((char *)(param_1 + 0x224),0,0x5dc);
  thunk_FUN_113beaf0(param_1 + 0x800);
  return;
}


// Reference entry 111bec60; body size 45 bytes.
#line 1 "ENTRY_111bec60"

int __fastcall FUN_111bec60(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(thunk_FUN_111bed40(), 0);
  if (-1 < iVar1) {
    iVar2 = (int)(thunk_FUN_113e2f30(param_1 + 0x18), 0);
    if (iVar2 != 0) {
      iVar1 = (int)(thunk_FUN_111be320(), 0);
      return (int)(iVar1);
    }
  }
  return (int)(iVar1);
}


// Reference entry 111bf4b0; body size 50 bytes.
#line 1 "ENTRY_111bf4b0"

undefined4 FUN_111bf4b0(int param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)((char *)(param_1 + 0x110));
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  if (((char *)(pcVar2) != (char *)(param_1 + 0x111)) && (*(int *)(param_1 + 0x18) != 0)) {
    *param_2 = (int)(param_1 + 0x110);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 111bfa10; body size 47 bytes.
#line 1 "ENTRY_111bfa10"

void FUN_111bfa10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  thunk_FUN_111bfa50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0);
  return;
}


// Reference entry 111c0040; body size 35 bytes.
#line 1 "ENTRY_111c0040"

undefined1 FUN_111c0040(int param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(FUN_111c0400(param_1,param_2), 0);
  if (cVar1 == '\0') {
    return (undefined1)(0);
  }
  *(undefined4*)(param_1 + 0x18) = (undefined4)(4);
  return (undefined1)(1);
}


// Reference entry 111c0380; body size 51 bytes.
#line 1 "ENTRY_111c0380"

void FUN_111c0380(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (((undefined4 *)(param_2) != (undefined4 *)(0x0)) && (param_3 == 0x20)) {
    uVar1 = (undefined4)(param_2[1]);
    uVar2 = (undefined4)(param_2[2]);
    uVar3 = (undefined4)(param_2[3]);
    *(undefined4*)(param_1 + 0x14c) = (undefined4)(*param_2);
    *(undefined4*)(param_1 + 0x150) = (undefined4)(uVar1);
    *(undefined4*)(param_1 + 0x154) = (undefined4)(uVar2);
    *(undefined4*)(param_1 + 0x158) = (undefined4)(uVar3);
    uVar1 = (undefined4)(param_2[5]);
    uVar2 = (undefined4)(param_2[6]);
    uVar3 = (undefined4)(param_2[7]);
    *(undefined4*)(param_1 + 0x15c) = (undefined4)(param_2[4]);
    *(undefined4*)(param_1 + 0x160) = (undefined4)(uVar1);
    *(undefined4*)(param_1 + 0x164) = (undefined4)(uVar2);
    *(undefined4*)(param_1 + 0x168) = (undefined4)(uVar3);
    *(undefined4*)(param_1 + 0x148) = (undefined4)(0x20);
  }
  return;
}


// Reference entry 111c03c0; body size 43 bytes.
#line 1 "ENTRY_111c03c0"

void FUN_111c03c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_113bfb20(param_1 + 0xf0,0x20,param_1 + 0xe4,*(undefined4 *)(param_1 + 0xd4),param_2, param_3);
  return;
}


// Reference entry 111c0480; body size 51 bytes.
#line 1 "ENTRY_111c0480"

int FUN_111c0480(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{ int stack0x00000010;
 try {
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)((uint *)thunk_FUN_101a6c80(param_1,param_2,param_3,0,&stack0x00000010), 0);
  iVar2 = (int)(__stdio_common_vsprintf(*puVar1 | 2,puVar1[1]), 0);
  if (iVar2 < 0) {
    iVar2 = (int)(-1);
  }
  return (int)(iVar2);

 } catch (...) { }
}


// Reference entry 111c0a60; body size 22 bytes.
#line 1 "ENTRY_111c0a60"

void FUN_111c0a60(void)

{
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  return;
}


// Reference entry 111c0a80; body size 56 bytes.
#line 1 "ENTRY_111c0a80"

void __fastcall FUN_111c0a80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpBaseNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpBaseNoRedirectAIOOp);
  if ((undefined4 *)param_1[0x91f] != (undefined4 *)(((0x0)))) {
    (*(code *)**(undefined4 **)param_1[0x91f])(1);
  }
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 111c0ad0; body size 18 bytes.
#line 1 "ENTRY_111c0ad0"

void __fastcall FUN_111c0ad0(undefined4 *param_1)

{
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RNullAsyncIOOperation);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 111c0b90; body size 56 bytes.
#line 1 "ENTRY_111c0b90"

void __fastcall FUN_111c0b90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXMLRPCAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RXMLRPCAsyncIOOperation);
  if ((undefined4 *)param_1[0x28ee] != (undefined4 *)(((0x0)))) {
    (*(code *)**(undefined4 **)param_1[0x28ee])(1);
  }
  thunk_FUN_11235fb0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 111c0c10; body size 27 bytes.
#line 1 "ENTRY_111c0c10"

undefined4 __thiscall Recovered_Bulk::m_FUN_111c0c10(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}


// Reference entry 111c0c40; body size 27 bytes.
#line 1 "ENTRY_111c0c40"

undefined4 __thiscall Recovered_Bulk::m_FUN_111c0c40(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}


// Reference entry 111c0c70; body size 27 bytes.
#line 1 "ENTRY_111c0c70"

undefined4 __thiscall Recovered_Bulk::m_FUN_111c0c70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4)(param_1);
}


// Reference entry 111c0ca0; body size 27 bytes.
#line 1 "ENTRY_111c0ca0"

undefined4 __thiscall Recovered_Bulk::m_FUN_111c0ca0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}


// Reference entry 111c0cd0; body size 38 bytes.
#line 1 "ENTRY_111c0cd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111c0cd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x60);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111c0d70; body size 45 bytes.
#line 1 "ENTRY_111c0d70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111c0d70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RNullAsyncIOOperation);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111c1270; body size 26 bytes.
#line 1 "ENTRY_111c1270"

undefined4 __thiscall Recovered_Bulk::m_FUN_111c1270(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x2474));
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x2470));
  param_2[1] = (undefined4)(uVar1);
  return (undefined4)(1);
}


// Reference entry 111c1290; body size 20 bytes.
#line 1 "ENTRY_111c1290"

undefined4 __thiscall Recovered_Bulk::m_FUN_111c1290(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x50));
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x4c));
  param_2[1] = (undefined4)(uVar1);
  return (undefined4)(1);
}


// Reference entry 111c12b0; body size 20 bytes.
#line 1 "ENTRY_111c12b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_111c12b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x50));
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x4c));
  param_2[1] = (undefined4)(uVar1);
  return (undefined4)(1);
}


// Reference entry 111c12d0; body size 20 bytes.
#line 1 "ENTRY_111c12d0"

undefined4 __thiscall Recovered_Bulk::m_FUN_111c12d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x50));
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x4c));
  param_2[1] = (undefined4)(uVar1);
  return (undefined4)(1);
}


// Reference entry 111c12f0; body size 31 bytes.
#line 1 "ENTRY_111c12f0"

void __fastcall FUN_111c12f0(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)(0);
  if (*(int *)(param_1 + 0x2478) != 0) {
    uVar1 = (undefined2)(*(undefined2 *)(param_1 + 0x5c));
  }
  (**(code **)(**(int **)(param_1 + 0x54) + 4))(*(undefined4 *)(param_1 + 0xc),uVar1);
  return;
}


// Reference entry 111c1320; body size 21 bytes.
#line 1 "ENTRY_111c1320"

void __fastcall FUN_111c1320(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x54) + 4)) (*(undefined4 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 0x5c));
  return;
}


// Reference entry 111c1340; body size 21 bytes.
#line 1 "ENTRY_111c1340"

void __fastcall FUN_111c1340(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x54) + 4)) (*(undefined4 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 0x5c));
  return;
}


// Reference entry 111c1360; body size 21 bytes.
#line 1 "ENTRY_111c1360"

void __fastcall FUN_111c1360(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x54) + 4)) (*(undefined4 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 0x5c));
  return;
}


// Reference entry 111c1390; body size 49 bytes.
#line 1 "ENTRY_111c1390"

void __thiscall Recovered_Bulk::m_FUN_111c1390(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = (char)(thunk_FUN_1124ae40(), 0);
  if (cVar2 != '\0') {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x30));
    *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x2c));
    param_2[1] = (undefined4)(uVar1);
    return;
  }
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x38));
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x34));
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 111c13d0; body size 18 bytes.
#line 1 "ENTRY_111c13d0"

void __thiscall Recovered_Bulk::m_FUN_111c13d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x68));
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 100));
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 111c1460; body size 57 bytes.
#line 1 "ENTRY_111c1460"

void __thiscall Recovered_Bulk::m_FUN_111c1460(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  char cVar2;
  
  if ((*(int *)(param_1 + 8) != 0) && (cVar2 = (char)(thunk_FUN_1124ae40(), 0), cVar2 != '\0')) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x30));
    *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x2c));
    param_2[1] = (undefined4)(uVar1);
    return;
  }
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x38));
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x34));
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 111c1b60; body size 21 bytes.
#line 1 "ENTRY_111c1b60"

undefined1 __thiscall Recovered_Bulk::m_FUN_111c1b60(int *param_2)
{
  int param_1 = (int )this;
  *param_2 = (int)(param_1 + 0x2480);
  return (undefined1)(*(undefined1 *)(param_1 + 0x4481));
}


// Reference entry 111c1bd0; body size 41 bytes.
#line 1 "ENTRY_111c1bd0"

undefined4 __thiscall Recovered_Bulk::m_FUN_111c1bd0(undefined4 param_2,int param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *(undefined4*)(param_1 + 0x54) = (undefined4)(param_2);
  *(int*)(param_1 + 0x58) = (int)(param_3);
  if ((&DAT_122f5650)[param_3] != 0) {
    uVar1 = (undefined4)(thunk_FUN_11241ee0(param_1), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 111c1d40; body size 29 bytes.
#line 1 "ENTRY_111c1d40"

void __thiscall Recovered_Bulk::m_FUN_111c1d40(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1145c930(param_1 + 0x4c,0);
  thunk_FUN_1145ad70(param_1 + 0x4c,param_2);
  return;
}


// Reference entry 111c1e90; body size 62 bytes.
#line 1 "ENTRY_111c1e90"

undefined4 __fastcall FUN_111c1e90(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(8), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    *puVar1 = (undefined4)((uint)&ghidra_vftable_RAsyncNullIOSession);
    puVar1[1] = (undefined4)(-(uint)(param_1 != 0) & param_1 + 0x60U);
    *(undefined4**)(param_1 + 8) = (undefined4 *)(puVar1);
    return (undefined4)(0);
  }
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (undefined4)(0);
}


// Reference entry 111c2060; body size 55 bytes.
#line 1 "ENTRY_111c2060"

uint __fastcall FUN_111c2060(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int *)(param_1 + -0x50) == 2) {
    if (*(char *)(param_1 + 0x4422) != '\0') {
      in_EAX = (uint)(thunk_FUN_11241dd0(), 0);
    }
    if (*(char *)(param_1 + 0x4421) == '\0') {
                    
                    
      uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x4424) + 0xc))(), 0);
      return (uint)(uVar1);
    }
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 111c2330; body size 59 bytes.
#line 1 "ENTRY_111c2330"

int * __thiscall Recovered_Bulk::m_FUN_111c2330(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar1 = (int)(*param_2);
    *param_2 = (int)(0);
    iVar2 = (int)(*param_1);
    *param_1 = (int)(iVar1);
    if (iVar2 != 0) {
      thunk_FUN_1124d790();
      thunk_FUN_1148a50e(iVar2,0x20);
    }
    return (int *)(param_1);
  }
  return (int *)(param_1);
}


// Reference entry 111c2590; body size 33 bytes.
#line 1 "ENTRY_111c2590"

void __thiscall Recovered_Bulk::m_FUN_111c2590(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_111c25c0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x2c);
  return;
}


// Reference entry 111c2670; body size 62 bytes.
#line 1 "ENTRY_111c2670"

int __thiscall Recovered_Bulk::m_FUN_111c2670(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_111c29a0((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (cVar1 = (char)(thunk_FUN_111c3d40(param_2,local_4 + 0x10), 0), cVar1 == '\0')) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 111c2fe0; body size 48 bytes.
#line 1 "ENTRY_111c2fe0"

undefined4 * __fastcall FUN_111c2fe0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x2c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 111c3960; body size 19 bytes.
#line 1 "ENTRY_111c3960"

void __fastcall FUN_111c3960(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x2c);
  }
  return;
}


// Reference entry 111c3980; body size 28 bytes.
#line 1 "ENTRY_111c3980"

void __fastcall FUN_111c3980(int *param_1)

{
  thunk_FUN_111c25c0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x2c);
  return;
}


// Reference entry 111c39b0; body size 44 bytes.
#line 1 "ENTRY_111c39b0"

void __fastcall FUN_111c39b0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (param_1[1] != 0) {
    thunk_FUN_111c2c00(*param_1,param_1[1] + 0x10);
    iVar1 = (int)(param_1[1]);
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x2c);
  }
  return;
}


// Reference entry 111c39f0; body size 19 bytes.
#line 1 "ENTRY_111c39f0"

void __fastcall FUN_111c39f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x2c);
  }
  return;
}


// Reference entry 111c3a70; body size 28 bytes.
#line 1 "ENTRY_111c3a70"

void __fastcall FUN_111c3a70(int *param_1)

{
  thunk_FUN_111c25c0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x2c);
  return;
}


// Reference entry 111c3ae0; body size 55 bytes.
#line 1 "ENTRY_111c3ae0"

void FUN_111c3ae0(void)

{
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  return;
}


// Reference entry 111c3e80; body size 27 bytes.
#line 1 "ENTRY_111c3e80"

undefined4 __thiscall Recovered_Bulk::m_FUN_111c3e80(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}


// Reference entry 111c3eb0; body size 27 bytes.
#line 1 "ENTRY_111c3eb0"

undefined4 __thiscall Recovered_Bulk::m_FUN_111c3eb0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}


// Reference entry 111c3f50; body size 48 bytes.
#line 1 "ENTRY_111c3f50"

undefined4 __thiscall Recovered_Bulk::m_FUN_111c3f50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa914);
  }
  return (undefined4)(param_1);
}


// Reference entry 111c4010; body size 32 bytes.
#line 1 "ENTRY_111c4010"

undefined4 __thiscall Recovered_Bulk::m_FUN_111c4010(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1124d790();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4)(param_1);
}


// Reference entry 111c4040; body size 38 bytes.
#line 1 "ENTRY_111c4040"

undefined4 __thiscall Recovered_Bulk::m_FUN_111c4040(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11286500();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x494);
  }
  return (undefined4)(param_1);
}


// Reference entry 111c4360; body size 25 bytes.
#line 1 "ENTRY_111c4360"

void __fastcall FUN_111c4360(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x2c), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 111c4830; body size 62 bytes.
#line 1 "ENTRY_111c4830"

char FUN_111c4830(int param_1)

{
  char cVar1;
  
  if (param_1 != 0) {
    cVar1 = (char)(thunk_FUN_1125b030<>(param_1,0), 0);
    if (cVar1 == '\0') {
      thunk_FUN_112b0270("control_client",4,"Failed to add custom header -- buffer is full?");
    }
    return (char)(cVar1);
  }
  return (char)('\0');
}


// Reference entry 111c4b80; body size 53 bytes.
#line 1 "ENTRY_111c4b80"

void __thiscall Recovered_Bulk::m_FUN_111c4b80(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x235d) = (undefined1)(1);
  thunk_FUN_1145c250(param_1 + 0x235e,param_2,0x21);
  thunk_FUN_1145c250(param_1 + 0x237f,param_3,0x11);
  return;
}


// Reference entry 111c5620; body size 56 bytes.
#line 1 "ENTRY_111c5620"

void __fastcall FUN_111c5620(int param_1)

{
  if ((int *)(DAT_122e8b20) != (int *)(0x0)) {
    (**(code **)(*(int *)(uint)(DAT_122e8b20) + 4)) (*(undefined4 *)(param_1 + 0x4b8),*(undefined4 *)(param_1 + 0x4bc),param_1 + 0x2280);
    thunk_FUN_1145c930(param_1 + 0x27a4,0);
  }
  return;
}


// Reference entry 111c5e90; body size 48 bytes.
#line 1 "ENTRY_111c5e90"

void __thiscall Recovered_Bulk::m_FUN_111c5e90(undefined4 param_2,undefined4 param_3,int *param_4)
{
  int param_1 = (int )this;
  int local_4;
  
  *(undefined1*)(param_1 + 0xa45) = (undefined1)(1);
  local_4 = (int)(param_1);
  thunk_FUN_11250a70(param_2,param_3,&local_4);
  if ((int *)(param_4) != (int *)(0x0)) {
    *param_4 = (int)(local_4);
  }
  return;
}


// Reference entry 111c63d0; body size 55 bytes.
#line 1 "ENTRY_111c63d0"

void __fastcall FUN_111c63d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x235d) != '\0') {
    uVar1 = (undefined4)(thunk_FUN_112869b0(0,0,param_1 + 0x2344,param_1 + 0x235e,param_1 + 0x237f), 0);
    thunk_FUN_112ea860(uVar1);
  }
  return;
}


// Reference entry 111c66d0; body size 24 bytes.
#line 1 "ENTRY_111c66d0"

void __thiscall Recovered_Bulk::m_FUN_111c66d0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1145c250(param_1 + 0xa2a,param_2,0x11);
  return;
}


// Reference entry 111c7940; body size 33 bytes.
#line 1 "ENTRY_111c7940"

void __thiscall Recovered_Bulk::m_FUN_111c7940(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_111c7970(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x44);
  return;
}


// Reference entry 111c79d0; body size 40 bytes.
#line 1 "ENTRY_111c79d0"

int __thiscall Recovered_Bulk::m_FUN_111c79d0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_111c7b30<>((uint)&local_8,param_2,param_3), 0);
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 111c9fb0; body size 48 bytes.
#line 1 "ENTRY_111c9fb0"

undefined4 * __fastcall FUN_111c9fb0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x44), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 111ca1e0; body size 39 bytes.
#line 1 "ENTRY_111ca1e0"

undefined4 * __fastcall FUN_111ca1e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x24), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 111ca210; body size 39 bytes.
#line 1 "ENTRY_111ca210"

undefined4 * __fastcall FUN_111ca210(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x5c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 111ca240; body size 61 bytes.
#line 1 "ENTRY_111ca240"

uint * __fastcall FUN_111ca240(uint *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  uint uVar2;
  
  *param_1 = (uint)(0);
  param_1[1] = (uint)(0);
  pvVar1 = (void *)(operator_new(0x18ab), 0);
  if ((void *)(pvVar1) != (void *)(0x0)) {
    uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
    *(void**)(uVar2 - 4) = (void *)(pvVar1);
    *(uint*)uVar2 = (uint)((uint)(uVar2));
    *(uint*)(uVar2 + 4) = (uint)(uVar2);
    *param_1 = (uint)(uVar2);
    return (uint *)(param_1);
  }
                    
  _invalid_parameter_noinfo_noreturn();
}


// Reference entry 111cb020; body size 51 bytes.
#line 1 "ENTRY_111cb020"

int * __thiscall Recovered_Bulk::m_FUN_111cb020(int param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int iVar2;
  
  *param_1 = (int)(0);
  cVar1 = (char)(thunk_FUN_111f1980(param_2,param_3), 0);
  if (cVar1 != '\0') {
    iVar2 = (int)(param_2 + 1);
    if ((char)param_3 == '\0') {
      iVar2 = (int)(param_2);
    }
    *param_1 = (int)(iVar2);
  }
  return (int *)(param_1);
}


// Reference entry 111cc320; body size 55 bytes.
#line 1 "ENTRY_111cc320"

int __fastcall FUN_111cc320(int param_1)

{
  char cVar1;
  
  thunk_FUN_112a9cf0(param_1);
  cVar1 = (char)(thunk_FUN_112a7f50(param_1), 0);
  *(undefined4*)(param_1 + 0x8508) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x850c) = (undefined4)(0);
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1);
  }
  return (int)(param_1);
}


// Reference entry 111cc4f0; body size 25 bytes.
#line 1 "ENTRY_111cc4f0"

undefined4 * __fastcall FUN_111cc4f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  thunk_FUN_112a9cf0(param_1 + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 111cfc00; body size 38 bytes.
#line 1 "ENTRY_111cfc00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111cfc00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(0);
  *(undefined1*)(param_1 + 2) = (undefined1)(0);
  param_1[0xa5] = (undefined4)(0);
  thunk_FUN_111e7a30(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 111cfc30; body size 22 bytes.
#line 1 "ENTRY_111cfc30"

int __thiscall Recovered_Bulk::m_FUN_111cfc30(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 8) = (undefined1)(0);
  thunk_FUN_111df3d0<>(param_2);
  return (int)(param_1);
}


// Reference entry 111cfc50; body size 55 bytes.
#line 1 "ENTRY_111cfc50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111cfc50(undefined4 param_2,undefined1 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)(0);
  *(undefined1*)(param_1 + 2) = (undefined1)(param_3);
  param_1[0xa5] = (undefined4)(0);
  *(undefined1*)((int)param_1 + 0x191) = (undefined1)(0);
  thunk_FUN_111f2a80<>(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 111cfd00; body size 39 bytes.
#line 1 "ENTRY_111cfd00"

undefined4 * __fastcall FUN_111cfd00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0xff);
  *(undefined2*)(param_1 + 2) = (undefined2)(0);
  param_1[0xa5] = (undefined4)(0);
  *(undefined1*)((int)param_1 + 0x191) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 111d00e0; body size 61 bytes.
#line 1 "ENTRY_111d00e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111d00e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111d0010(param_2);
  param_1[0x524] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosPositionInformationParam);
  *(undefined1*)(param_1 + 0x525) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0x1595) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0x15a5) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 111d2ea0; body size 19 bytes.
#line 1 "ENTRY_111d2ea0"

void __fastcall FUN_111d2ea0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x24);
  }
  return;
}


// Reference entry 111d2ec0; body size 19 bytes.
#line 1 "ENTRY_111d2ec0"

void __fastcall FUN_111d2ec0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x5c);
  }
  return;
}


// Reference entry 111d2ee0; body size 41 bytes.
#line 1 "ENTRY_111d2ee0"

void __fastcall FUN_111d2ee0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 4));
  if (iVar1 != 0) {
    if (0x1f < (iVar1 - *(int *)(iVar1 + -4)) - 4U) {
                    
                    
                    
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    thunk_FUN_1148a50e(*(int *)(iVar1 + -4),0x18ab);
  }
  return;
}


// Reference entry 111d2f20; body size 19 bytes.
#line 1 "ENTRY_111d2f20"

void __fastcall FUN_111d2f20(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x44);
  }
  return;
}


// Reference entry 111d3230; body size 44 bytes.
#line 1 "ENTRY_111d3230"

void __fastcall FUN_111d3230(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (param_1[1] != 0) {
    thunk_FUN_111c8f80(*param_1,param_1[1] + 8);
    iVar1 = (int)(param_1[1]);
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x24);
  }
  return;
}


// Reference entry 111d3270; body size 44 bytes.
#line 1 "ENTRY_111d3270"

void __fastcall FUN_111d3270(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (param_1[1] != 0) {
    thunk_FUN_111c9000(*param_1,param_1[1] + 8);
    iVar1 = (int)(param_1[1]);
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x5c);
  }
  return;
}


// Reference entry 111d32b0; body size 60 bytes.
#line 1 "ENTRY_111d32b0"

void __fastcall FUN_111d32b0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_111d35e0();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    if (0x1f < (iVar1 - *(int *)(iVar1 + -4)) - 4U) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
    thunk_FUN_1148a50e(*(int *)(iVar1 + -4),0x18ab);
  }
  return;
}


// Reference entry 111d3300; body size 28 bytes.
#line 1 "ENTRY_111d3300"

void __fastcall FUN_111d3300(int *param_1)

{
  thunk_FUN_111c7970(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x44);
  return;
}


// Reference entry 111d3330; body size 38 bytes.
#line 1 "ENTRY_111d3330"

void __fastcall FUN_111d3330(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_111d34c0();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x44);
  }
  return;
}


// Reference entry 111d3360; body size 19 bytes.
#line 1 "ENTRY_111d3360"

void __fastcall FUN_111d3360(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x44);
  }
  return;
}


// Reference entry 111d33b0; body size 25 bytes.
#line 1 "ENTRY_111d33b0"

void __fastcall FUN_111d33b0(undefined4 *param_1)

{
  thunk_FUN_111c7e10(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x24);
  return;
}


// Reference entry 111d33d0; body size 25 bytes.
#line 1 "ENTRY_111d33d0"

void __fastcall FUN_111d33d0(undefined4 *param_1)

{
  thunk_FUN_111c7eb0(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x5c);
  return;
}


// Reference entry 111d33f0; body size 51 bytes.
#line 1 "ENTRY_111d33f0"

void __fastcall FUN_111d33f0(int *param_1)

{
  int iVar1;
  
  thunk_FUN_111c7f50(param_1,*param_1);
  iVar1 = (int)(*(int *)(*param_1 + -4));
  if (0x1f < (*param_1 - iVar1) - 4U) {
                    
    _invalid_parameter_noinfo_noreturn();
  }
  thunk_FUN_1148a50e(iVar1,0x18ab);
  return;
}


// Reference entry 111d3430; body size 28 bytes.
#line 1 "ENTRY_111d3430"

void __fastcall FUN_111d3430(int *param_1)

{
  thunk_FUN_111c7970(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x44);
  return;
}


// Reference entry 111d3ab0; body size 18 bytes.
#line 1 "ENTRY_111d3ab0"

void __fastcall FUN_111d3ab0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCPValidateOperation);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RCPValidateOperation);
  thunk_FUN_11261f10();
  return;
}


// Reference entry 111d3c60; body size 23 bytes.
#line 1 "ENTRY_111d3c60"

void FUN_111d3c60(void)

{
  thunk_FUN_1124eda0();
  thunk_FUN_1124f190();
  return;
}


// Reference entry 111d3e40; body size 33 bytes.
#line 1 "ENTRY_111d3e40"

void __fastcall FUN_111d3e40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosContentProviderMediaSessions);
  thunk_FUN_112a7f20(param_1 + 2);
  thunk_FUN_111d2fc0();
  return;
}


// Reference entry 111d43a0; body size 42 bytes.
#line 1 "ENTRY_111d43a0"

void __fastcall FUN_111d43a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosGetExtendedMetadataTextParam);
  thunk_FUN_112341b0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  return;
}


// Reference entry 111d4600; body size 58 bytes.
#line 1 "ENTRY_111d4600"

void __fastcall FUN_111d4600(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosGetObjIDsForAlbumAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RSonosGetObjIDsForAlbumAIOOp);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RSonosGetObjIDsForAlbumAIOOp);
  param_1[0x89] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  thunk_FUN_11202570();
  thunk_FUN_11261f10();
  return;
}


// Reference entry 111d4650; body size 58 bytes.
#line 1 "ENTRY_111d4650"

void __fastcall FUN_111d4650(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosGetObjIDsForTrackAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RSonosGetObjIDsForTrackAIOOp);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RSonosGetObjIDsForTrackAIOOp);
  param_1[0xc9] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  thunk_FUN_11202570();
  thunk_FUN_11261f10();
  return;
}


// Reference entry 111d46e0; body size 25 bytes.
#line 1 "ENTRY_111d46e0"

void __fastcall FUN_111d46e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  return;
}


// Reference entry 111d4700; body size 25 bytes.
#line 1 "ENTRY_111d4700"

void __fastcall FUN_111d4700(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  return;
}


// Reference entry 111d4720; body size 25 bytes.
#line 1 "ENTRY_111d4720"

void __fastcall FUN_111d4720(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  return;
}


// Reference entry 111d4740; body size 25 bytes.
#line 1 "ENTRY_111d4740"

void __fastcall FUN_111d4740(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  return;
}


// Reference entry 111d4900; body size 39 bytes.
#line 1 "ENTRY_111d4900"

void __fastcall FUN_111d4900(int param_1)

{
  *(undefined***)(param_1 + 0x34) = (undefined **)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  *(undefined***)(param_1 + 0x28) = (undefined **)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  thunk_FUN_11261f10();
  return;
}


// Reference entry 111d4930; body size 42 bytes.
#line 1 "ENTRY_111d4930"

void __fastcall FUN_111d4930(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosRelatedActionsParam);
  thunk_FUN_1125acd0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  return;
}


// Reference entry 111d4970; body size 46 bytes.
#line 1 "ENTRY_111d4970"

void __fastcall FUN_111d4970(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosRelatedInfoParam);
  free((void *)param_1[0x524]);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  return;
}


// Reference entry 111d49b0; body size 25 bytes.
#line 1 "ENTRY_111d49b0"

void __fastcall FUN_111d49b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  return;
}


// Reference entry 111d4c70; body size 25 bytes.
#line 1 "ENTRY_111d4c70"

void __fastcall FUN_111d4c70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  return;
}


// Reference entry 111d4c90; body size 54 bytes.
#line 1 "ENTRY_111d4c90"

void __fastcall FUN_111d4c90(int param_1)

{
  thunk_FUN_1124eda0();
  thunk_FUN_1124f190();
  thunk_FUN_1124f190();
  *(undefined***)(param_1 + 0xd954) = (undefined **)((uint)&ghidra_vftable_RSOAPFaultHandler);
  thunk_FUN_111c0af0<>();
  return;
}


// Reference entry 111d4d80; body size 25 bytes.
#line 1 "ENTRY_111d4d80"

void __fastcall FUN_111d4d80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  return;
}


// Reference entry 111d50b0; body size 18 bytes.
#line 1 "ENTRY_111d50b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_111d50b0(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_111e7a30(param_2);
  return (undefined4)(param_1);
}


// Reference entry 111d5210; body size 27 bytes.
#line 1 "ENTRY_111d5210"

int __stdcall FUN_111d5210(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_111c85c0<>((uint)&local_8,param_1), 0);
  return (int)(*piVar1 + 0x28);
}


// Reference entry 111d5240; body size 27 bytes.
#line 1 "ENTRY_111d5240"

int __stdcall FUN_111d5240(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_111c8350<>((uint)&local_8,param_1), 0);
  return (int)(*piVar1 + 0x20);
}


// Reference entry 111d5270; body size 27 bytes.
#line 1 "ENTRY_111d5270"

int __stdcall FUN_111d5270(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_111c87b0<>((uint)&local_8,param_1), 0);
  return (int)(*piVar1 + 0x20);
}


// Reference entry 111d57e0; body size 38 bytes.
#line 1 "ENTRY_111d57e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111d57e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d5810; body size 38 bytes.
#line 1 "ENTRY_111d5810"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111d5810(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d5840; body size 38 bytes.
#line 1 "ENTRY_111d5840"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111d5840(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d5870; body size 38 bytes.
#line 1 "ENTRY_111d5870"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111d5870(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d58a0; body size 38 bytes.
#line 1 "ENTRY_111d58a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111d58a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d58d0; body size 38 bytes.
#line 1 "ENTRY_111d58d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111d58d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d5980; body size 32 bytes.
#line 1 "ENTRY_111d5980"

undefined4 __thiscall Recovered_Bulk::m_FUN_111d5980(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_111d34c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x34);
  }
  return (undefined4)(param_1);
}


// Reference entry 111d5a30; body size 35 bytes.
#line 1 "ENTRY_111d5a30"

undefined4 __thiscall Recovered_Bulk::m_FUN_111d5a30(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_111d35e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1880);
  }
  return (undefined4)(param_1);
}


// Reference entry 111d5a60; body size 32 bytes.
#line 1 "ENTRY_111d5a60"

undefined4 __thiscall Recovered_Bulk::m_FUN_111d5a60(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11202570();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 111d5a90; body size 32 bytes.
#line 1 "ENTRY_111d5a90"

undefined4 __thiscall Recovered_Bulk::m_FUN_111d5a90(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11202570();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 111d5ac0; body size 32 bytes.
#line 1 "ENTRY_111d5ac0"

undefined4 __thiscall Recovered_Bulk::m_FUN_111d5ac0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11202570();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 111d5af0; body size 32 bytes.
#line 1 "ENTRY_111d5af0"

undefined4 __thiscall Recovered_Bulk::m_FUN_111d5af0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11202570();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  return (undefined4)(param_1);
}


// Reference entry 111d5b20; body size 32 bytes.
#line 1 "ENTRY_111d5b20"

undefined4 __thiscall Recovered_Bulk::m_FUN_111d5b20(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11202570();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 111d5d00; body size 32 bytes.
#line 1 "ENTRY_111d5d00"

undefined4 __thiscall Recovered_Bulk::m_FUN_111d5d00(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_111d38f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,100);
  }
  return (undefined4)(param_1);
}


// Reference entry 111d5e30; body size 45 bytes.
#line 1 "ENTRY_111d5e30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111d5e30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCPValidateOperation);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RCPValidateOperation);
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d5e70; body size 38 bytes.
#line 1 "ENTRY_111d5e70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111d5e70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RContentKeyParam);
  thunk_FUN_1124eb30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d5ea0; body size 35 bytes.
#line 1 "ENTRY_111d5ea0"

undefined4 __thiscall Recovered_Bulk::m_FUN_111d5ea0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_111d3ae0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x430);
  }
  return (undefined4)(param_1);
}


// Reference entry 111d5fc0; body size 33 bytes.
#line 1 "ENTRY_111d5fc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111d5fc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RGetAllPrefixLocationsCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d5ff0; body size 41 bytes.
#line 1 "ENTRY_111d5ff0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111d5ff0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpHeadersParam);
  thunk_FUN_1124eb30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x418);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d60c0; body size 35 bytes.
#line 1 "ENTRY_111d60c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_111d60c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_111d3d00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x16e0);
  }
  return (undefined4)(param_1);
}


// Reference entry 111d60f0; body size 41 bytes.
#line 1 "ENTRY_111d60f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111d60f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosContentProviderImpl);
  thunk_FUN_1124d790();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x34);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d6130; body size 59 bytes.
#line 1 "ENTRY_111d6130"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111d6130(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosContentProviderMediaSessions);
  thunk_FUN_112a7f20(param_1 + 2);
  thunk_FUN_111d2fc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1868);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d6180; body size 41 bytes.
#line 1 "ENTRY_111d6180"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111d6180(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosContentProviderImpl);
  thunk_FUN_1124d790();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x34);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d6b90; body size 45 bytes.
#line 1 "ENTRY_111d6b90"

int __thiscall Recovered_Bulk::m_FUN_111d6b90(byte param_2)
{
  int param_1 = (int )this;
  *(undefined***)(param_1 + 0xd954) = (undefined **)((uint)&ghidra_vftable_RSOAPFaultHandler);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe9e8);
  }
  return (int)(param_1);
}


// Reference entry 111d6bd0; body size 45 bytes.
#line 1 "ENTRY_111d6bd0"

int __thiscall Recovered_Bulk::m_FUN_111d6bd0(byte param_2)
{
  int param_1 = (int )this;
  *(undefined***)(param_1 + 0xd954) = (undefined **)((uint)&ghidra_vftable_RSOAPFaultHandler);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe9e8);
  }
  return (int)(param_1);
}


// Reference entry 111d6c10; body size 51 bytes.
#line 1 "ENTRY_111d6c10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111d6c10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x4e0c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d6c50; body size 51 bytes.
#line 1 "ENTRY_111d6c50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111d6c50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x5370);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d6c90; body size 51 bytes.
#line 1 "ENTRY_111d6c90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111d6c90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1490);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d6cd0; body size 51 bytes.
#line 1 "ENTRY_111d6cd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111d6cd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x15a8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d6dc0; body size 55 bytes.
#line 1 "ENTRY_111d6dc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111d6dc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosRateItemOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RSonosRateItemOp);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RSonosRateItemOp);
  thunk_FUN_111d38f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x168);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d6f40; body size 62 bytes.
#line 1 "ENTRY_111d6f40"

int __thiscall Recovered_Bulk::m_FUN_111d6f40(byte param_2)
{
  int param_1 = (int )this;
  *(undefined***)(param_1 + 0x34) = (undefined **)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  *(undefined***)(param_1 + 0x28) = (undefined **)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x44);
  }
  return (int)(param_1);
}


// Reference entry 111d7050; body size 51 bytes.
#line 1 "ENTRY_111d7050"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111d7050(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18bc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d73c0; body size 51 bytes.
#line 1 "ENTRY_111d73c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111d73c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x39bc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d7530; body size 51 bytes.
#line 1 "ENTRY_111d7530"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111d7530(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x15f8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d75f0; body size 32 bytes.
#line 1 "ENTRY_111d75f0"

undefined4 __thiscall Recovered_Bulk::m_FUN_111d75f0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11202570();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4)(param_1);
}


// Reference entry 111d7620; body size 31 bytes.
#line 1 "ENTRY_111d7620"

void FUN_111d7620(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  param_1[0x401] = (undefined1)(0);
  param_1[0x802] = (undefined1)(0);
  *(undefined2*)(param_1 + 0xc03) = (undefined2)(1);
  return;
}


// Reference entry 111d7b80; body size 25 bytes.
#line 1 "ENTRY_111d7b80"

void __fastcall FUN_111d7b80(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x24), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 111d7ba0; body size 25 bytes.
#line 1 "ENTRY_111d7ba0"

void __fastcall FUN_111d7ba0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x5c), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 111d7bc0; body size 47 bytes.
#line 1 "ENTRY_111d7bc0"

void __fastcall FUN_111d7bc0(int param_1)

{
  void *pvVar1;
  uint uVar2;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18ab), 0);
  if ((void *)(pvVar1) != (void *)(0x0)) {
    uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
    *(void**)(uVar2 - 4) = (void *)(pvVar1);
    *(uint*)(param_1 + 4) = (uint)(uVar2);
    return;
  }
                    
  _invalid_parameter_noinfo_noreturn();
}


// Reference entry 111d7c00; body size 25 bytes.
#line 1 "ENTRY_111d7c00"

void __fastcall FUN_111d7c00(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x44), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 111d7f80; body size 29 bytes.
#line 1 "ENTRY_111d7f80"

void __fastcall FUN_111d7f80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[2]);
  param_1[2] = (int)(*piVar1);
  thunk_FUN_111c8050(*param_1,piVar1);
  *(int*)(*param_1 + 4) = (int)(*(int *)(*param_1 + 4) + -1);
  return;
}


// Reference entry 111d7fb0; body size 29 bytes.
#line 1 "ENTRY_111d7fb0"

void __fastcall FUN_111d7fb0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[2]);
  param_1[2] = (int)(*piVar1);
  thunk_FUN_111c80d0(*param_1,piVar1);
  *(int*)(*param_1 + 4) = (int)(*(int *)(*param_1 + 4) + -1);
  return;
}


// Reference entry 111d7fe0; body size 61 bytes.
#line 1 "ENTRY_111d7fe0"

void __fastcall FUN_111d7fe0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[2]);
  param_1[2] = (int)(*piVar1);
  thunk_FUN_111d35e0();
  if (0x1f < (uint)((int)piVar1 + (-4 - piVar1[-1]))) {
                    
    _invalid_parameter_noinfo_noreturn();
  }
  thunk_FUN_1148a50e(piVar1[-1],0x18ab);
  *(int*)(*param_1 + 4) = (int)(*(int *)(*param_1 + 4) + -1);
  return;
}


// Reference entry 111d9c80; body size 25 bytes.
#line 1 "ENTRY_111d9c80"

void __fastcall FUN_111d9c80(undefined4 *param_1)

{
  thunk_FUN_111c7e10(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x24);
  return;
}


// Reference entry 111d9ca0; body size 25 bytes.
#line 1 "ENTRY_111d9ca0"

void __fastcall FUN_111d9ca0(undefined4 *param_1)

{
  thunk_FUN_111c7eb0(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x5c);
  return;
}


// Reference entry 111d9cc0; body size 51 bytes.
#line 1 "ENTRY_111d9cc0"

void __fastcall FUN_111d9cc0(int *param_1)

{
  int iVar1;
  
  thunk_FUN_111c7f50(param_1,*param_1);
  iVar1 = (int)(*(int *)(*param_1 + -4));
  if (0x1f < (*param_1 - iVar1) - 4U) {
                    
    _invalid_parameter_noinfo_noreturn();
  }
  thunk_FUN_1148a50e(iVar1,0x18ab);
  return;
}


// Reference entry 111dbb80; body size 41 bytes.
#line 1 "ENTRY_111dbb80"

void __fastcall FUN_111dbb80(int param_1)

{
  if (*(char *)(param_1 + 0x40) == '\0') {
    if ((*(char *)(param_1 + 0x41) != '\0') && (*(int *)(param_1 + 0x38) != 0)) {
      thunk_FUN_101badc0();
      return;
    }
  }
  else if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_101badc0();
    return;
  }
  return;
}


// Reference entry 111dbfc0; body size 32 bytes.
#line 1 "ENTRY_111dbfc0"

void __fastcall FUN_111dbfc0(int *param_1)

{
  thunk_FUN_111c7e10(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 111dbff0; body size 32 bytes.
#line 1 "ENTRY_111dbff0"

void __fastcall FUN_111dbff0(int *param_1)

{
  thunk_FUN_111c7eb0(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 111dc020; body size 32 bytes.
#line 1 "ENTRY_111dc020"

void __fastcall FUN_111dc020(int *param_1)

{
  thunk_FUN_111c7f50(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 111dd8b0; body size 53 bytes.
#line 1 "ENTRY_111dd8b0"

short __stdcall FUN_111dd8b0(undefined4 param_1)

{
  short sVar1;
  
  sVar1 = (short)(thunk_FUN_111e8d70(param_1), 0);
  if ((sVar1 == 0x3fc) || (sVar1 == 0x40d)) {
    sVar1 = (short)(thunk_FUN_111e8d70(param_1), 0);
  }
  return (short)(sVar1);
}


// Reference entry 111df370; body size 53 bytes.
#line 1 "ENTRY_111df370"

short __stdcall FUN_111df370(undefined4 param_1)

{
  short sVar1;
  
  sVar1 = (short)(thunk_FUN_111e9460(param_1), 0);
  if ((sVar1 == 0x3fc) || (sVar1 == 0x40d)) {
    sVar1 = (short)(thunk_FUN_111e9460(param_1), 0);
  }
  return (short)(sVar1);
}


// Reference entry 111dfcf0; body size 44 bytes.
#line 1 "ENTRY_111dfcf0"

void FUN_111dfcf0(void)

{
  thunk_FUN_11234290();
  return;
}


// Reference entry 111dfd30; body size 20 bytes.
#line 1 "ENTRY_111dfd30"

void __fastcall FUN_111dfd30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  if (*(char *)(param_1 + 0x148d) != '\0') {
    thunk_FUN_1124fdc0();
    return;
  }
  return;
}


// Reference entry 111dfd60; body size 19 bytes.
#line 1 "ENTRY_111dfd60"

void __fastcall FUN_111dfd60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(char *)(param_1 + 0x411) != '\0') {
    *(undefined1*)(param_1 + 0x411) = (undefined1)(0);
  }
  return;
}


// Reference entry 111e08c0; body size 25 bytes.
#line 1 "ENTRY_111e08c0"

void __fastcall FUN_111e08c0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x1490) + 0x20)) (&DAT_1187b728,*(undefined4 *)(param_1 + 0x149c));
  return;
}


// Reference entry 111e2cb0; body size 58 bytes.
#line 1 "ENTRY_111e2cb0"

undefined4 __thiscall Recovered_Bulk::m_FUN_111e2cb0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_111c1810<>(param_2), 0);
  thunk_FUN_111f6c30(*(undefined4 *)(param_1 + 0x107ec),*(undefined4 *)(param_1 + 0x107f0), *(undefined1 *)(*(int *)(param_1 + 0xd8d8) + 0x108c));
  return (undefined4)(uVar1);
}


// Reference entry 111e3f20; body size 31 bytes.
#line 1 "ENTRY_111e3f20"

int __fastcall FUN_111e3f20(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 4) == 1)) ||
     (iVar1 = (int)(0x11), *(char *)(param_1 + 9) == '\0')) {
    iVar1 = (int)(9);
  }
  return (int)(iVar1 + param_1);
}


// Reference entry 111e3f50; body size 30 bytes.
#line 1 "ENTRY_111e3f50"

undefined4 FUN_111e3f50(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_111c8350<>((uint)&local_8,param_1), 0);
  return (undefined4)(*(undefined4 *)(*piVar1 + 0x20));
}


// Reference entry 111e4640; body size 24 bytes.
#line 1 "ENTRY_111e4640"

int __fastcall FUN_111e4640(int param_1)

{
  if (*(char *)(param_1 + 0x65) == '\0') {
    return (int)(*(int *)(param_1 + 0x68) + 0x11d0c);
  }
  return (int)(*(int *)(param_1 + 0x6c) + 0x11d0c);
}


// Reference entry 111e4690; body size 25 bytes.
#line 1 "ENTRY_111e4690"

int __fastcall FUN_111e4690(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 4) == 0) || (iVar1 = (int)(0x191), *(int *)(param_1 + 4) == 1)) {
    iVar1 = (int)(9);
  }
  return (int)(iVar1 + param_1);
}


// Reference entry 111e4c10; body size 26 bytes.
#line 1 "ENTRY_111e4c10"

undefined4 __fastcall FUN_111e4c10(int param_1)

{
  if (*(char *)(param_1 + 0x65) == '\0') {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x11d08));
  }
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x11d08));
}


// Reference entry 111e7f20; body size 60 bytes.
#line 1 "ENTRY_111e7f20"

void __fastcall FUN_111e7f20(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xeb30) + 4))();
  (**(code **)(*(int *)(param_1 + 0xfd60) + 4))();
  (**(code **)(*(int *)(param_1 + 0xd8e0) + 4))();
  thunk_FUN_11253c70();
  return;
}


// Reference entry 111f17b0; body size 36 bytes.
#line 1 "ENTRY_111f17b0"

undefined4 __fastcall FUN_111f17b0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 9) != '\0') {
    iVar1 = (int)(strncmp((char *)(param_1 + 0x11),"favorites",9), 0);
    if (iVar1 != 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 111f1920; body size 25 bytes.
#line 1 "ENTRY_111f1920"

undefined4 FUN_111f1920(int param_1)

{
  if (((param_1 != 0x16) && (param_1 != 0x15)) && (param_1 != 0x14)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 111f3c00; body size 50 bytes.
#line 1 "ENTRY_111f3c00"

void __thiscall Recovered_Bulk::m_FUN_111f3c00(int param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_112a7f50(param_1 + 1), 0);
  *(int*)(param_2 + 0x16c4) = (int)(*param_1);
  *param_1 = (int)(param_2);
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1 + 1);
  }
  return;
}


// Reference entry 111f3f20; body size 28 bytes.
#line 1 "ENTRY_111f3f20"

void __fastcall FUN_111f3f20(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x20) + 4))();
                    
                    
  (**(code **)(*(int *)(param_1 + 0x1250) + 4))();
  return;
}


// Reference entry 111f3f50; body size 47 bytes.
#line 1 "ENTRY_111f3f50"

void __fastcall FUN_111f3f50(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_112a7f50(param_1), 0);
  *(undefined4*)(param_1 + 0x8508) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x850c) = (undefined4)(0);
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1);
  }
  return;
}


// Reference entry 111f42a0; body size 22 bytes.
#line 1 "ENTRY_111f42a0"

void __fastcall FUN_111f42a0(int param_1)

{
  *(undefined1*)(param_1 + 0x1494) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x1595) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x15a5) = (undefined1)(0);
  return;
}


// Reference entry 111f4480; body size 22 bytes.
#line 1 "ENTRY_111f4480"

void __fastcall FUN_111f4480(int param_1)

{
  *(undefined1*)(param_1 + 0x1490) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x1591) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x15d2) = (undefined1)(0);
  return;
}


// Reference entry 111f4a70; body size 32 bytes.
#line 1 "ENTRY_111f4a70"

void __thiscall Recovered_Bulk::m_FUN_111f4a70(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_111f4960(*(undefined4 *)(*(int *)(param_1 + 0xd8dc) + 0x165c), *(int *)(param_1 + 0xd8dc) + 2,param_3);
  return;
}


// Reference entry 111f4ce0; body size 20 bytes.
#line 1 "ENTRY_111f4ce0"

void FUN_111f4ce0(undefined4 param_1)

{
  thunk_FUN_1145c250(&DAT_122e8b50,param_1,0x21);
  return;
}


// Reference entry 111f4db0; body size 27 bytes.
#line 1 "ENTRY_111f4db0"

void __thiscall Recovered_Bulk::m_FUN_111f4db0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1106a8d0(param_1 + 0x83,param_2,0x81);
  return;
}


// Reference entry 111f4e40; body size 58 bytes.
#line 1 "ENTRY_111f4e40"

void FUN_111f4e40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1145c250(&DAT_122e8b78,param_1,0xc0);
  thunk_FUN_1145c250(&DAT_122e8c38,param_2,0xc0);
  thunk_FUN_1145c250(&DAT_122e8cf8,param_3,0x21);
  return;
}


// Reference entry 111f5210; body size 20 bytes.
#line 1 "ENTRY_111f5210"

void FUN_111f5210(undefined4 param_1)

{
  thunk_FUN_1145c250(&DAT_122e8b30,param_1,0x20);
  return;
}


// Reference entry 111f5630; body size 23 bytes.
#line 1 "ENTRY_111f5630"

void __thiscall Recovered_Bulk::m_FUN_111f5630(undefined4 param_2)
{
  int *param_1 = (int *)this;
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x20))(param_2);
  return;
}


// Reference entry 111f5990; body size 33 bytes.
#line 1 "ENTRY_111f5990"

void __thiscall Recovered_Bulk::m_FUN_111f5990(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(param_1 + 8);
  if (param_1 == 4) {
    iVar1 = (int)(0);
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 4))(iVar1,param_2);
  return;
}


// Reference entry 111f59c0; body size 36 bytes.
#line 1 "ENTRY_111f59c0"

void __thiscall Recovered_Bulk::m_FUN_111f59c0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x228) != (int *)((0x0))) {
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x228) + 4))(param_1 + 8,param_2), 0);
    *(undefined4*)(param_1 + 0x22c) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 111f59f0; body size 36 bytes.
#line 1 "ENTRY_111f59f0"

void __thiscall Recovered_Bulk::m_FUN_111f59f0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x328) != (int *)((0x0))) {
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x328) + 4))(param_1 + 8,param_2), 0);
    *(undefined4*)(param_1 + 0x32c) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 111f5a20; body size 30 bytes.
#line 1 "ENTRY_111f5a20"

void __thiscall Recovered_Bulk::m_FUN_111f5a20(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x28) != (int *)((0x0))) {
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x28) + 4))(param_1 + 8,param_2), 0);
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 111f6bf0; body size 38 bytes.
#line 1 "ENTRY_111f6bf0"

void __thiscall Recovered_Bulk::m_FUN_111f6bf0(int param_2)
{
  int param_1 = (int )this;
  if (param_2 != 0) {
    thunk_FUN_1145c250((undefined1 *)(param_1 + 0x1494),param_2,0x81);
    return;
  }
  *(undefined1*)(param_1 + 0x1494) = (undefined1)(0);
  return;
}


// Reference entry 111f6e80; body size 32 bytes.
#line 1 "ENTRY_111f6e80"

undefined4 __thiscall Recovered_Bulk::m_FUN_111f6e80(int param_2)
{
  int param_1 = (int )this;
  if ((param_2 != 0) && ((int)(param_2) != *(int *)(param_1 + 0x1520))) {
    *(int*)(param_1 + 0x1520) = (int)(param_2);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 111f75b0; body size 46 bytes.
#line 1 "ENTRY_111f75b0"

void FUN_111f75b0(undefined4 param_1)

{ int stack0x00000008;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = (undefined4)(__acrt_iob_func(1), 0);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_101a6c80(uVar1,param_1,0,&stack0x00000008), 0);
  __stdio_common_vfprintf(*puVar2,puVar2[1]);
  return;

 } catch (...) { }
}


// Reference entry 111f7790; body size 55 bytes.
#line 1 "ENTRY_111f7790"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111f7790(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1125b880(param_1,LAB_100841f3,LAB_10088519);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZoneGroupStateProcessor);
  param_1[3] = (undefined4)(0);
  *(undefined1*)(param_1 + 4) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 111f7820; body size 42 bytes.
#line 1 "ENTRY_111f7820"

void __fastcall FUN_111f7820(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RNotifyBodyParserCallback);
  if ((void *)param_1[0x304] != (char *)(((int)param_1 + 0x40f))) {
    free((void *)param_1[0x304]);
  }
  FUN_1003d5d7();
  return;
}


// Reference entry 111f7880; body size 33 bytes.
#line 1 "ENTRY_111f7880"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111f7880(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLastChangeCallback);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111f78b0; body size 41 bytes.
#line 1 "ENTRY_111f78b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111f78b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLastChangeProcessor);
  FUN_1125b8f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x418);
  }
  return (undefined4 *)(param_1);
}


undefined4 * __thiscall Recovered_Bulk::m_FUN_111f78f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMediaServerCallback);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111f7920; body size 41 bytes.
#line 1 "ENTRY_111f7920"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111f7920(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMediaServerProcessor);
  FUN_1125b8f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x218);
  }
  return (undefined4 *)(param_1);
}


undefined4 * __thiscall Recovered_Bulk::m_FUN_111f79c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RNotifyBodyParserCallback);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111f79f0; body size 38 bytes.
#line 1 "ENTRY_111f79f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111f79f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZoneGroupStateProcessor);
  FUN_1125b8f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


undefined4 __thiscall Recovered_Bulk::m_FUN_111fc380(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_111fc270();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc084);
  }
  return (undefined4)(param_1);
}


// Reference entry 111fc3b0; body size 35 bytes.
#line 1 "ENTRY_111fc3b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_111fc3b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_111fc270();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc084);
  }
  return (undefined4)(param_1);
}


// Reference entry 111fc550; body size 52 bytes.
#line 1 "ENTRY_111fc550"

undefined1 __thiscall Recovered_Bulk::m_FUN_111fc550(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 uVar1;
  
  uVar1 = (undefined1)(thunk_FUN_111c1530(param_2), 0);
  switch(*(undefined4 *)(param_1 + 0x442c)) {
  case 0xc9:
  case 0xca:
  case 0xcc:
  case 0x199:
    uVar1 = (undefined1)(1);
  }
  return (undefined1)(uVar1);
}


// Reference entry 111fc6a0; body size 35 bytes.
#line 1 "ENTRY_111fc6a0"

void __thiscall Recovered_Bulk::m_FUN_111fc6a0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_111c1530(param_2);
  if (399 < *(int *)(param_1 + 0x442c)) {
    *(undefined1*)(param_1 + 0x4430) = (undefined1)(1);
  }
  return;
}


// Reference entry 111fc6d0; body size 52 bytes.
#line 1 "ENTRY_111fc6d0"

undefined1 __thiscall Recovered_Bulk::m_FUN_111fc6d0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 uVar1;
  
  uVar1 = (undefined1)(thunk_FUN_111c1530(param_2), 0);
  switch(*(undefined4 *)(param_1 + 0x442c)) {
  case 0xc9:
  case 0xca:
  case 0xcc:
  case 0x199:
    uVar1 = (undefined1)(1);
  }
  return (undefined1)(uVar1);
}


// Reference entry 111fc820; body size 52 bytes.
#line 1 "ENTRY_111fc820"

undefined1 __thiscall Recovered_Bulk::m_FUN_111fc820(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 uVar1;
  
  uVar1 = (undefined1)(thunk_FUN_111c1530(param_2), 0);
  switch(*(undefined4 *)(param_1 + 0x442c)) {
  case 0xc9:
  case 0xca:
  case 0xcc:
  case 0x199:
    uVar1 = (undefined1)(1);
  }
  return (undefined1)(uVar1);
}


// Reference entry 111fd510; body size 52 bytes.
#line 1 "ENTRY_111fd510"

char * FUN_111fd510(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (char *)("CLIENT_KEY_PROD");
  case 1:
    return (char *)("CLIENT_KEY_PERF");
  case 2:
    return (char *)("CLIENT_KEY_STAGE");
  case 3:
    return (char *)("CLIENT_KEY_TEST");
  case 4:
    return (char *)("CLIENT_KEY_INT");
  default:
    return (char *)("");
  }
}


// Reference entry 111fd570; body size 23 bytes.
#line 1 "ENTRY_111fd570"

void FUN_111fd570(void *param_1)

{
  thunk_FUN_113cfb70(param_1,0x80);
                    
                    
  free(param_1);
  return;
}


// Reference entry 111fd590; body size 23 bytes.
#line 1 "ENTRY_111fd590"

void FUN_111fd590(void *param_1)

{
  thunk_FUN_113cfb70(param_1,0x100);
                    
                    
  free(param_1);
  return;
}


// Reference entry 111fe350; body size 59 bytes.
#line 1 "ENTRY_111fe350"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111fe350(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RContentProvider);
  param_1[1] = (undefined4)(0);
  thunk_FUN_1145c930(param_1 + 2,0);
  param_1[5] = (undefined4)(param_2);
  *(undefined1*)(param_1 + 4) = (undefined1)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RBrowseContentProvider);
  return (undefined4 *)(param_1);
}


// Reference entry 111fe400; body size 38 bytes.
#line 1 "ENTRY_111fe400"

undefined4 * __fastcall FUN_111fe400(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RContentProvider);
  param_1[1] = (undefined4)(0);
  thunk_FUN_1145c930(param_1 + 2,0);
  *(undefined1*)(param_1 + 4) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 111feb30; body size 24 bytes.
#line 1 "ENTRY_111feb30"

void __fastcall FUN_111feb30(undefined4 *param_1)

{
  if ((undefined4 *)param_1[6] != (undefined4 *)(((0x0)))) {
    (*(code *)**(undefined4 **)param_1[6])(1);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RContentProvider);
  return;
}


// Reference entry 111fed10; body size 24 bytes.
#line 1 "ENTRY_111fed10"

void __fastcall FUN_111fed10(undefined4 *param_1)

{
  if ((undefined4 *)param_1[8] != (undefined4 *)(((0x0)))) {
    (*(code *)**(undefined4 **)param_1[8])(1);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RContentProvider);
  return;
}


// Reference entry 111feda0; body size 33 bytes.
#line 1 "ENTRY_111feda0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111feda0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RContentProvider);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111fedd0; body size 46 bytes.
#line 1 "ENTRY_111fedd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111fedd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)param_1[6] != (undefined4 *)(((0x0)))) {
    (*(code *)**(undefined4 **)param_1[6])(1);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RContentProvider);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111fee10; body size 33 bytes.
#line 1 "ENTRY_111fee10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111fee10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RContentProvider);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111fee40; body size 33 bytes.
#line 1 "ENTRY_111fee40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111fee40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSCPBrowseAIOOpBase);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111fee70; body size 35 bytes.
#line 1 "ENTRY_111fee70"

undefined4 __thiscall Recovered_Bulk::m_FUN_111fee70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11202570();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x510);
  }
  return (undefined4)(param_1);
}


// Reference entry 111ff030; body size 35 bytes.
#line 1 "ENTRY_111ff030"

undefined4 __thiscall Recovered_Bulk::m_FUN_111ff030(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11202570();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1418);
  }
  return (undefined4)(param_1);
}


// Reference entry 111ff060; body size 38 bytes.
#line 1 "ENTRY_111ff060"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111ff060(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSCPPropNameTranslator);
  thunk_FUN_11202590();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111ff090; body size 35 bytes.
#line 1 "ENTRY_111ff090"

undefined4 __thiscall Recovered_Bulk::m_FUN_111ff090(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11202570();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x490);
  }
  return (undefined4)(param_1);
}


// Reference entry 111ff0c0; body size 33 bytes.
#line 1 "ENTRY_111ff0c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111ff0c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RContentProvider);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111ff0f0; body size 49 bytes.
#line 1 "ENTRY_111ff0f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111ff0f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)param_1[8] != (undefined4 *)(((0x0)))) {
    (*(code *)**(undefined4 **)param_1[8])(1);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RContentProvider);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x428);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111ff130; body size 36 bytes.
#line 1 "ENTRY_111ff130"

undefined4 * __thiscall Recovered_Bulk::m_FUN_111ff130(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RContentProvider);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x118);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111ff630; body size 19 bytes.
#line 1 "ENTRY_111ff630"

void __fastcall FUN_111ff630(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *(undefined2*)(param_1 + 0x40c) = (undefined2)(1);
  *(undefined1*)(param_1 + 0x40f) = (undefined1)(0);
  return;
}


// Reference entry 111ff660; body size 63 bytes.
#line 1 "ENTRY_111ff660"

void __thiscall Recovered_Bulk::m_FUN_111ff660(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x808) + 8))(param_2,param_3,param_4);
  *(undefined1*)(param_1 + 0x80c) = (undefined1)(1);
  *(undefined2*)(param_1 + 0x80f) = (undefined2)(0);
  *(undefined1*)(param_1 + 0xc10) = (undefined1)(0);
  *(undefined4*)(param_1 + 0x1414) = (undefined4)(0);
  return;
}


// Reference entry 11200570; body size 18 bytes.
#line 1 "ENTRY_11200570"

undefined4 __stdcall FUN_11200570(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4, unsigned int recovered_unused_stack_5, unsigned int recovered_unused_stack_6)

{
  undefined4 *in_stack_0000001c;
  
  *in_stack_0000001c = (undefined4)(0);
  return (undefined4)(1000);
}


// Reference entry 112007a0; body size 32 bytes.
#line 1 "ENTRY_112007a0"

void __fastcall FUN_112007a0(int param_1)

{
  if (*(char *)(param_1 + 0x50c) != '\0') {
    (**(code **)(**(int **)(param_1 + 0x408) + 0x2c))();
    *(undefined1*)(param_1 + 0x50c) = (undefined1)(0);
  }
  return;
}


// Reference entry 11200a70; body size 58 bytes.
#line 1 "ENTRY_11200a70"

int __thiscall Recovered_Bulk::m_FUN_11200a70(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_111c1810<>(param_2), 0);
  if (iVar1 == 0) {
    if (*(short *)(param_1 + 0x5c) == 0) {
      iVar1 = (int)((**(code **)(*(int *)(param_1 + -8) + 8))(), 0);
      if ((iVar1 == 0) && (*(char *)(param_1 + 0xd7e0) != '\0')) {
        *(undefined2*)(param_1 + 0x5c) = (undefined2)(0x2bd);
      }
    }
    iVar1 = (int)(0);
  }
  return (int)(iVar1);
}


// Reference entry 11202140; body size 22 bytes.
#line 1 "ENTRY_11202140"

void __fastcall FUN_11202140(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  int iStack00000004;
  
  iStack00000004 = (int)(param_1 + 4);
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    (**(code **)(**(int **)(param_1 + 8) + 4))();
    return;
  }
  return;
}


// Reference entry 112022a0; body size 35 bytes.
#line 1 "ENTRY_112022a0"

void __thiscall Recovered_Bulk::m_FUN_112022a0(undefined4 param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(param_2);
  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x10))(), 0);
  (**(code **)(*piVar1 + 4))(param_1 + -4,1);
  return;
}


// Reference entry 112023b0; body size 49 bytes.
#line 1 "ENTRY_112023b0"

undefined4 FUN_112023b0(char *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (char)(*param_1);
  if (cVar1 != '\0') {
    while (iVar2 = (int)(isalpha((int)cVar1), 0), iVar2 != 0) {
      cVar1 = (char)(param_1[1]);
      param_1 = (char *)(param_1 + 1);
      if (cVar1 == '\0') {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 11202440; body size 49 bytes.
#line 1 "ENTRY_11202440"

undefined4 FUN_11202440(char *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (char)(*param_1);
  if (cVar1 != '\0') {
    while (iVar2 = (int)(isdigit((int)cVar1), 0), iVar2 != 0) {
      cVar1 = (char)(param_1[1]);
      param_1 = (char *)(param_1 + 1);
      if (cVar1 == '\0') {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 11202500; body size 16 bytes.
#line 1 "ENTRY_11202500"

undefined4 * __fastcall FUN_11202500(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCDBrowsePropNameTranslator);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 112025b0; body size 33 bytes.
#line 1 "ENTRY_112025b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_112025b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCDBrowseCallback);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 112025e0; body size 41 bytes.
#line 1 "ENTRY_112025e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_112025e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCDBrowseProcessor);
  FUN_1125b8f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x984);
  }
  return (undefined4 *)(param_1);
}


undefined4 * __thiscall Recovered_Bulk::m_FUN_11202620(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCDBrowsePropNameTranslator);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11202650; body size 41 bytes.
#line 1 "ENTRY_11202650"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11202650(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCDUpdateProcessor);
  FUN_1125b8f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x410);
  }
  return (undefined4 *)(param_1);
}




// Reference entry 11203970; body size 16 bytes.
#line 1 "ENTRY_11203970"

undefined4 * __fastcall FUN_11203970(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSocketTxnManager);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 11203a40; body size 47 bytes.
#line 1 "ENTRY_11203a40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11203a40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  thunk_FUN_11265ef0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUnsubscribeRequest);
  uVar1 = (undefined4)(*param_2);
  param_1[0x215b] = (undefined4)(param_2[1]);
  param_1[0x215a] = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 11204020; body size 33 bytes.
#line 1 "ENTRY_11204020"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11204020(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSocketTxnManager);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11204050; body size 35 bytes.
#line 1 "ENTRY_11204050"

undefined4 __thiscall Recovered_Bulk::m_FUN_11204050(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_112665b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x8618);
  }
  return (undefined4)(param_1);
}


// Reference entry 11204080; body size 41 bytes.
#line 1 "ENTRY_11204080"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11204080(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUnsubscribeRequest);
  thunk_FUN_112665b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x8570);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 112041a0; body size 19 bytes.
#line 1 "ENTRY_112041a0"

void __thiscall Recovered_Bulk::m_FUN_112041a0(int param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_2 + 0x490) = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(int*)(param_1 + 4) = (int)(param_2);
  return;
}


// Reference entry 11204570; body size 20 bytes.
#line 1 "ENTRY_11204570"

void __thiscall Recovered_Bulk::m_FUN_11204570(int *param_2)
{
  int param_1 = (int )this;
  (**(code **)(*param_2 + 4))(*(undefined4 *)(param_1 + -0x34c));
  return;
}


// Reference entry 112045a0; body size 57 bytes.
#line 1 "ENTRY_112045a0"

void __thiscall Recovered_Bulk::m_FUN_112045a0(int *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)(0);
  if (*(int *)(param_1 + -0x40) != 0) {
    iVar3 = (int)(param_1 + -0x348);
    do {
      cVar1 = (char)((**(code **)(*param_2 + 4))(iVar3), 0);
      if (cVar1 == '\0') {
        return;
      }
      uVar2 = (uint)(uVar2 + 1);
      iVar3 = (int)(iVar3 + 0x81);
    } while ((uint)(uVar2) < *(uint *)(param_1 + -0x40));
  }
  return;
}


// Reference entry 112046d0; body size 18 bytes.
#line 1 "ENTRY_112046d0"

void __thiscall Recovered_Bulk::m_FUN_112046d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + -0x38));
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + -0x3c));
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 112046f0; body size 24 bytes.
#line 1 "ENTRY_112046f0"

undefined1 __fastcall FUN_112046f0(int param_1)

{
  if ((*(char *)(param_1 + -0x350) != '\0') && (*(char *)(param_1 + -0x5bc) != '\0')) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 11204720; body size 57 bytes.
#line 1 "ENTRY_11204720"

undefined1 * __thiscall Recovered_Bulk::m_FUN_11204720(undefined1 *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  *(undefined4*)(param_2 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x14) = (undefined4)(0xf);
  *param_2 = (undefined1)(0);
  pcVar2 = (char *)((char *)(param_1 + -0x30));
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1012d130((char *)(param_1 + -0x30),(int)pcVar2 - (param_1 + -0x2f));
  return (undefined1 *)(param_2);
}


// Reference entry 11205180; body size 27 bytes.
#line 1 "ENTRY_11205180"

void __thiscall Recovered_Bulk::m_FUN_11205180(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1145c250(param_1 + -0x4db,param_2,0xc0);
  return;
}


// Reference entry 112051b0; body size 35 bytes.
#line 1 "ENTRY_112051b0"

void __thiscall Recovered_Bulk::m_FUN_112051b0(int param_2)
{
  int param_1 = (int )this;
  if (param_2 != 0) {
    thunk_FUN_1145c250((undefined1 *)(param_1 + 0x669),param_2,0x10);
    return;
  }
  *(undefined1*)(param_1 + 0x669) = (undefined1)(0);
  return;
}


// Reference entry 112051e0; body size 24 bytes.
#line 1 "ENTRY_112051e0"

void __thiscall Recovered_Bulk::m_FUN_112051e0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1145c250(param_1 + 0x325,param_2,0xb);
  return;
}


// Reference entry 11205240; body size 27 bytes.
#line 1 "ENTRY_11205240"

void __thiscall Recovered_Bulk::m_FUN_11205240(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1145c250(param_1 + -0x41b,param_2,0xc0);
  return;
}


// Reference entry 11205270; body size 18 bytes.
#line 1 "ENTRY_11205270"

void __thiscall Recovered_Bulk::m_FUN_11205270(undefined4 *param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + -0x3c) = (undefined4)(*param_2);
  *(undefined4*)(param_1 + -0x38) = (undefined4)(param_2[1]);
  return;
}


// Reference entry 112052f0; body size 21 bytes.
#line 1 "ENTRY_112052f0"

void __thiscall Recovered_Bulk::m_FUN_112052f0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1145c250(param_1 + -0x30,param_2,0x11);
  return;
}


// Reference entry 11205330; body size 49 bytes.
#line 1 "ENTRY_11205330"

void FUN_11205330(void)

{
  thunk_FUN_11286ff0();
  FUN_1008b877();
  return;
}


// Reference entry 11205490; body size 43 bytes.
#line 1 "ENTRY_11205490"

int __fastcall FUN_11205490(int param_1)

{
  if (DAT_122f5600 != 0) {
    thunk_FUN_1123a890<>(param_1 + -0x680,*(undefined4 *)(param_1 + -0x3c),0xe10,0);
  }
  return (int)(param_1 + -0x35b);
}


// Reference entry 112056a0; body size 53 bytes.
#line 1 "ENTRY_112056a0"

void __thiscall Recovered_Bulk::m_FUN_112056a0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + -0x17) = (undefined1)(0);
  if (*(char *)(param_1 + -0x35b) != '\0') {
    if (DAT_122f5600 != 0) {
      thunk_FUN_1123bf80<>(param_1 + -0x680,param_2);
    }
    *(undefined1*)(param_1 + -0x35b) = (undefined1)(0);
  }
  return;
}


// Reference entry 11205700; body size 33 bytes.
#line 1 "ENTRY_11205700"

undefined1 __fastcall FUN_11205700(int param_1)

{
  if ((*(char *)(param_1 + -0x67c) != '\0') &&
     ((*(char *)(param_1 + -0x4db) != '\0' || (*(char *)(param_1 + -0x41b) != '\0')))) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 11205a20; body size 27 bytes.
#line 1 "ENTRY_11205a20"

undefined4 __thiscall Recovered_Bulk::m_FUN_11205a20(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}


// Reference entry 11205a50; body size 48 bytes.
#line 1 "ENTRY_11205a50"

undefined4 __thiscall Recovered_Bulk::m_FUN_11205a50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  thunk_FUN_11287ac0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 11205a90; body size 32 bytes.
#line 1 "ENTRY_11205a90"

undefined4 __thiscall Recovered_Bulk::m_FUN_11205a90(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11287ac0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 11206ea0; body size 52 bytes.
#line 1 "ENTRY_11206ea0"

undefined4 __fastcall FUN_11206ea0(int *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)((char *)(**(code **)(*param_1 + 4))(), 0);
  pcVar2 = (char *)(strstr(pcVar1,"&token"), 0);
  if ((char *)(pcVar2) != (char *)(0x0)) {
    pcVar1 = (char *)(strstr(pcVar1,"&subst"), 0);
    if ((char *)(pcVar1) != (char *)(0x0)) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 112075b0; body size 41 bytes.
#line 1 "ENTRY_112075b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_112075b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceXMLParser);
  FUN_1125b8f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x548);
  }
  return (undefined4 *)(param_1);
}




// Reference entry 11208430; body size 51 bytes.
#line 1 "ENTRY_11208430"

void __thiscall Recovered_Bulk::m_FUN_11208430(undefined4 *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x370) < 5) {
    puVar2 = (undefined4 *)((undefined4 *)(param_1 + 0xa0 + *(int *)(param_1 + 0x370) * 0x90));
    for (iVar1 = (int)(0x24); iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(*param_2);
      param_2 = (undefined4 *)(param_2 + 1);
      puVar2 = (undefined4 *)(puVar2 + 1);
    }
    *(int*)(param_1 + 0x370) = (int)(*(int *)(param_1 + 0x370) + 1);
  }
  return;
}


// Reference entry 11208e60; body size 32 bytes.
#line 1 "ENTRY_11208e60"

undefined4 __thiscall Recovered_Bulk::m_FUN_11208e60(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_112624a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 11208e90; body size 48 bytes.
#line 1 "ENTRY_11208e90"

undefined4 __thiscall Recovered_Bulk::m_FUN_11208e90(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  thunk_FUN_112624a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 1120bb20; body size 32 bytes.
#line 1 "ENTRY_1120bb20"

undefined4 __thiscall Recovered_Bulk::m_FUN_1120bb20(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1128f110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 1120bb50; body size 48 bytes.
#line 1 "ENTRY_1120bb50"

undefined4 __thiscall Recovered_Bulk::m_FUN_1120bb50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  thunk_FUN_1128f110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 1120cc40; body size 32 bytes.
#line 1 "ENTRY_1120cc40"

undefined4 __thiscall Recovered_Bulk::m_FUN_1120cc40(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1128f0a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 1120cc70; body size 48 bytes.
#line 1 "ENTRY_1120cc70"

undefined4 __thiscall Recovered_Bulk::m_FUN_1120cc70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  thunk_FUN_1128f0a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 11214580; body size 27 bytes.
#line 1 "ENTRY_11214580"

undefined4 __thiscall Recovered_Bulk::m_FUN_11214580(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 112145b0; body size 41 bytes.
#line 1 "ENTRY_112145b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_112145b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x74c);
  }
  return (undefined4)(param_1);
}


// Reference entry 112145f0; body size 27 bytes.
#line 1 "ENTRY_112145f0"

undefined4 __thiscall Recovered_Bulk::m_FUN_112145f0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}


// Reference entry 112172e0; body size 27 bytes.
#line 1 "ENTRY_112172e0"

void __thiscall Recovered_Bulk::m_FUN_112172e0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1145c250(param_1 + 0x684,param_2,0xc0);
  return;
}


// Reference entry 11217550; body size 32 bytes.
#line 1 "ENTRY_11217550"

undefined4 __thiscall Recovered_Bulk::m_FUN_11217550(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1128f160();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 11217580; body size 48 bytes.
#line 1 "ENTRY_11217580"

undefined4 __thiscall Recovered_Bulk::m_FUN_11217580(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  thunk_FUN_1128f160();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 11218060; body size 32 bytes.
#line 1 "ENTRY_11218060"

undefined4 __thiscall Recovered_Bulk::m_FUN_11218060(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1128f1b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 11218090; body size 48 bytes.
#line 1 "ENTRY_11218090"

undefined4 __thiscall Recovered_Bulk::m_FUN_11218090(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  thunk_FUN_1128f1b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 11218c70; body size 32 bytes.
#line 1 "ENTRY_11218c70"

undefined4 __thiscall Recovered_Bulk::m_FUN_11218c70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1128f200();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 11218ca0; body size 48 bytes.
#line 1 "ENTRY_11218ca0"

undefined4 __thiscall Recovered_Bulk::m_FUN_11218ca0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  thunk_FUN_1128f200();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 11219c50; body size 33 bytes.
#line 1 "ENTRY_11219c50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11219c50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTControl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11219c80; body size 47 bytes.
#line 1 "ENTRY_11219c80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11219c80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11203e10();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTControl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1121aff0; body size 33 bytes.
#line 1 "ENTRY_1121aff0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1121aff0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMusicServicesDirectory);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1121b020; body size 47 bytes.
#line 1 "ENTRY_1121b020"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1121b020(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11203e10();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMusicServicesDirectory);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1121b930; body size 27 bytes.
#line 1 "ENTRY_1121b930"

undefined4 __thiscall Recovered_Bulk::m_FUN_1121b930(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 1121b960; body size 41 bytes.
#line 1 "ENTRY_1121b960"

undefined4 __thiscall Recovered_Bulk::m_FUN_1121b960(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 1121b9a0; body size 27 bytes.
#line 1 "ENTRY_1121b9a0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1121b9a0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}


// Reference entry 1121dcd0; body size 48 bytes.
#line 1 "ENTRY_1121dcd0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1121dcd0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  thunk_FUN_1128f250();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 1121dd10; body size 32 bytes.
#line 1 "ENTRY_1121dd10"

undefined4 __thiscall Recovered_Bulk::m_FUN_1121dd10(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1128f250();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 112220c0; body size 41 bytes.
#line 1 "ENTRY_112220c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_112220c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 11222100; body size 27 bytes.
#line 1 "ENTRY_11222100"

undefined4 __thiscall Recovered_Bulk::m_FUN_11222100(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}


// Reference entry 11222130; body size 27 bytes.
#line 1 "ENTRY_11222130"

undefined4 __thiscall Recovered_Bulk::m_FUN_11222130(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 112238a0; body size 32 bytes.
#line 1 "ENTRY_112238a0"

undefined4 __thiscall Recovered_Bulk::m_FUN_112238a0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1128f0f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 112238d0; body size 48 bytes.
#line 1 "ENTRY_112238d0"

undefined4 __thiscall Recovered_Bulk::m_FUN_112238d0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  thunk_FUN_1128f0f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 11223910; body size 32 bytes.
#line 1 "ENTRY_11223910"

undefined4 __thiscall Recovered_Bulk::m_FUN_11223910(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1128f0f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}


// Reference entry 11227f90; body size 48 bytes.
#line 1 "ENTRY_11227f90"

undefined4 __thiscall Recovered_Bulk::m_FUN_11227f90(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  thunk_FUN_1128f080();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 11227fd0; body size 32 bytes.
#line 1 "ENTRY_11227fd0"

undefined4 __thiscall Recovered_Bulk::m_FUN_11227fd0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1128f080();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}


// Reference entry 11228000; body size 32 bytes.
#line 1 "ENTRY_11228000"

undefined4 __thiscall Recovered_Bulk::m_FUN_11228000(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1128f080();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 1122add0; body size 55 bytes.
#line 1 "ENTRY_1122add0"

void __thiscall Recovered_Bulk::m_FUN_1122add0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = (int)(*(int *)(param_1 + 4));
  iVar2 = (int)(*param_2);
  if (iVar1 != 0) {
    iVar3 = (int)(*(int *)(param_1 + 0xc));
    piVar4 = (int *)(*(int **)(iVar2 + 4), 0);
    piVar5 = (int *)(*(int **)(param_1 + 8), 0);
    *(int**)(iVar3 + 4) = (int *)(piVar4);
    *piVar4 = (int)(iVar3);
    *piVar5 = (int)(iVar2);
    *(int**)(iVar2 + 4) = (int *)(piVar5);
    param_2[1] = (int)(param_2[1] + iVar1);
    *(undefined4*)(param_1 + 4) = (undefined4)(0);
  }
  return;
}


// Reference entry 1122b5a0; body size 48 bytes.
#line 1 "ENTRY_1122b5a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1122b5a0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  *(undefined8*)(param_1 + 1) = (undefined8)(0);
  __std_exception_copy(param_2 + 4,param_1 + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_nonstd_optional_lite_bad_optional_access);
  return (undefined4 *)(param_1);
}


// Reference entry 1122b640; body size 58 bytes.
#line 1 "ENTRY_1122b640"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1122b640(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 local_8;
  undefined1 local_4;
  
  local_8 = (undefined4)(param_2);
  local_4 = (undefined1)(1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  *(undefined8*)(param_1 + 1) = (undefined8)(0);
  __std_exception_copy(&local_8,param_1 + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 1122b690; body size 48 bytes.
#line 1 "ENTRY_1122b690"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1122b690(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  *(undefined8*)(param_1 + 1) = (undefined8)(0);
  __std_exception_copy(param_2 + 4,param_1 + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_logic_error);
  return (undefined4 *)(param_1);
}


// Reference entry 1122bbf0; body size 45 bytes.
#line 1 "ENTRY_1122bbf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1122bbf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1122bc30; body size 45 bytes.
#line 1 "ENTRY_1122bc30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1122bc30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1122bd10; body size 21 bytes.
#line 1 "ENTRY_1122bd10"

void __fastcall FUN_1122bd10(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_10bf66a0<>(*(undefined4 *)(param_1 + 8)), 0);
  thunk_FUN_10bf6a10(uVar1);
  return;
}


// Reference entry 1122ded0; body size 38 bytes.
#line 1 "ENTRY_1122ded0"

char * __fastcall FUN_1122ded0(char *param_1)

{
  undefined1 local_c [12];
  
  if (*param_1 != (char)(('\0'))) {
    return (char *)(param_1 + 4);
  }
  thunk_FUN_1122b5e0();
                    
  _CxxThrowException((uint)&local_c,(ThrowInfo *)&DAT_1205bd78);
}


// Reference entry 1122e1c0; body size 35 bytes.
#line 1 "ENTRY_1122e1c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1122e1c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1123ec80<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc590);
  }
  return (undefined4)(param_1);
}


// Reference entry 1122e1f0; body size 45 bytes.
#line 1 "ENTRY_1122e1f0"

int __thiscall Recovered_Bulk::m_FUN_1122e1f0(byte param_2)
{
  int param_1 = (int )this;
  FUN_112a9d40(param_1 + 0x150);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x79c);
  }
  return (int)(param_1);
}


undefined1 __thiscall Recovered_Bulk::m_FUN_1122e250(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)
{
  int *param_1 = (int *)this;
  undefined1 uVar1;
  
  uVar1 = (undefined1)(thunk_FUN_1123ecd0<>(param_2,param_3,param_4,param_5,param_6), 0);
  (**(code **)(*param_1 + 0x5c))("<UsageMetrics>");
  (**(code **)(*param_1 + 0x5c))("<ver>2</ver>");
  return (undefined1)(uVar1);
}


// Reference entry 1122e450; body size 49 bytes.
#line 1 "ENTRY_1122e450"

void FUN_1122e450(void)

{
  int iVar1;
  
  iVar1 = (int)(DAT_122f55fc);
  if (DAT_122f55fc != 0) {
    FUN_112a9d40(DAT_122f55fc + 0x150);
    thunk_FUN_1148a50e(iVar1,0x79c);
  }
  DAT_122f55fc = (int)(0);
  return;
}




// Reference entry 1122f1a0; body size 53 bytes.
#line 1 "ENTRY_1122f1a0"

void __thiscall Recovered_Bulk::m_FUN_1122f1a0(int param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  FUN_112a9d50(param_1 + 0x150);
  if (param_2 < 2) {
    piVar1 = (int *)((int *)(param_1 + 0x768 + param_2 * 4));
    *piVar1 = (int)(*piVar1 + param_3);
  }
  FUN_112a9d70(param_1 + 0x150);
  return;
}




// Reference entry 11230350; body size 38 bytes.
#line 1 "ENTRY_11230350"



// Reference entry 112314f0; body size 62 bytes.
#line 1 "ENTRY_112314f0"

void __fastcall FUN_112314f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLastFMRequest);
  param_1[0x1b4d] = (undefined4)((uint)&ghidra_vftable_RLastFMResultParser);
  thunk_FUN_112341b0();
  FUN_1003d5d7();
  thunk_FUN_11285ab0();
  thunk_FUN_1124a3f0();
  return;
}


// Reference entry 11231550; body size 25 bytes.
#line 1 "ENTRY_11231550"

void __fastcall FUN_11231550(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLastFMResultParser);
  thunk_FUN_112341b0();
  FUN_1003d5d7();
  return;
}


// Reference entry 11231660; body size 33 bytes.
#line 1 "ENTRY_11231660"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11231660(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLastFMResultCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11231700; body size 41 bytes.
#line 1 "ENTRY_11231700"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11231700(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLastFMContentProvider);
  thunk_FUN_111feb50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x118);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11231860; body size 33 bytes.
#line 1 "ENTRY_11231860"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11231860(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLastFMResultCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11231890; body size 51 bytes.
#line 1 "ENTRY_11231890"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11231890(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLastFMResultParser);
  thunk_FUN_112341b0();
  FUN_1003d5d7();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x464);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11231b20; body size 38 bytes.
#line 1 "ENTRY_11231b20"

undefined4 FUN_11231b20(void)

{
  undefined4 *in_stack_0000001c;
  undefined4 *in_stack_00000020;
  undefined4 *in_stack_00000024;
  
  *in_stack_0000001c = (undefined4)(0);
  *in_stack_00000020 = (undefined4)(0);
  *in_stack_00000024 = (undefined4)(0);
  return (undefined4)(0x2bd);
}


// Reference entry 11232950; body size 21 bytes.
#line 1 "ENTRY_11232950"

void __fastcall FUN_11232950(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x54) + 4)) (*(undefined4 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 0x5c));
  return;
}


// Reference entry 11232970; body size 49 bytes.
#line 1 "ENTRY_11232970"

void __thiscall Recovered_Bulk::m_FUN_11232970(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = (char)(thunk_FUN_1124ae40(), 0);
  if (cVar2 != '\0') {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x30));
    *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x2c));
    param_2[1] = (undefined4)(uVar1);
    return;
  }
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x38));
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x34));
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 11232ce0; body size 58 bytes.
#line 1 "ENTRY_11232ce0"

undefined4 FUN_11232ce0(char *param_1)

{
  int iVar1;
  
  iVar1 = (int)(strncmp(param_1,"HTTP/1.1 ",9), 0);
  if (iVar1 != 0) {
    iVar1 = (int)(strncmp(param_1,"HTTP/1.0 ",9), 0);
    if (iVar1 != 0) {
      return (undefined4)(0);
    }
  }
  return (undefined4)(1);
}


// Reference entry 112333d0; body size 24 bytes.
#line 1 "ENTRY_112333d0"

void __thiscall Recovered_Bulk::m_FUN_112333d0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1106a8d0(param_1 + 0x95,param_2,0x41);
  return;
}


// Reference entry 11233890; body size 26 bytes.
#line 1 "ENTRY_11233890"

void __thiscall Recovered_Bulk::m_FUN_11233890(undefined4 param_2)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xdc) + 4))(param_1 + 8,param_2);
  return;
}


// Reference entry 112338b0; body size 52 bytes.
#line 1 "ENTRY_112338b0"

void __fastcall FUN_112338b0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_112334a0<>(1), 0);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x30))(0);
    return;
  }
  if (iVar1 == 0xb) {
    thunk_FUN_11240be0<>((int)param_1 + -0x7192);
  }
  return;
}


// Reference entry 11234160; body size 33 bytes.
#line 1 "ENTRY_11234160"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11234160(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RStringTableParserCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11234190; body size 25 bytes.
#line 1 "ENTRY_11234190"

undefined4 * __fastcall FUN_11234190(undefined4 *param_1)

{
  *param_1 = (undefined4)(0x400);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  param_1[2] = (undefined4)(param_1 + 3);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 112341b0; body size 18 bytes.
#line 1 "ENTRY_112341b0"

void __fastcall FUN_112341b0(int param_1)

{
  if (*(void **)(param_1 + 8) != (char *)(((param_1 + 0xc)))) {
    free(*(void **)(param_1 + 8));
  }
  return;
}


// Reference entry 11234340; body size 45 bytes.
#line 1 "ENTRY_11234340"

void __fastcall FUN_11234340(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 3);
  if ((undefined4 *)param_1[2] != (undefined4 *)((puVar1))) {
    free((undefined4 *)param_1[2]);
  }
  param_1[2] = (undefined4)(puVar1);
  *(undefined1*)puVar1 = (undefined1)((undefined4 *)(0));
  *param_1 = (undefined4)(0x400);
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 11234420; body size 38 bytes.
#line 1 "ENTRY_11234420"

void __thiscall Recovered_Bulk::m_FUN_11234420(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_1123fe90(param_1[2],*param_1,param_1[2],param_1[1],param_2,param_3,1), 0);
  param_1[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 11234510; body size 22 bytes.
#line 1 "ENTRY_11234510"

void FUN_11234510(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_11299700();
  return;
}


// Reference entry 11234620; body size 22 bytes.
#line 1 "ENTRY_11234620"

void FUN_11234620(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_11299700();
  return;
}


// Reference entry 11234fd0; body size 44 bytes.
#line 1 "ENTRY_11234fd0"

undefined4 FUN_11234fd0(char *param_1,int param_2)

{
  long lVar1;
  char *local_4;
  
  lVar1 = (long)(strtol(param_1,&local_4,10), 0);
  if ((*local_4 == (char)(('.'))) && (param_2 <= lVar1)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 11235500; body size 24 bytes.
#line 1 "ENTRY_11235500"

void __thiscall Recovered_Bulk::m_FUN_11235500(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1106a8d0(param_1 + 4,param_2,0x80);
  return;
}


// Reference entry 11235f00; body size 29 bytes.
#line 1 "ENTRY_11235f00"

void __fastcall FUN_11235f00(int param_1)

{
  *(undefined***)(param_1 + 0x414) = (undefined **)((uint)&ghidra_vftable_RXMLRPCResultParser);
  FUN_1003d5d7();
  *(undefined***)(param_1 + 4) = (undefined **)((uint)&ghidra_vftable_RXMLRPCResultCB);
  return;
}


// Reference entry 11236060; body size 26 bytes.
#line 1 "ENTRY_11236060"

void __fastcall FUN_11236060(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXMLRPCInParam);
  thunk_FUN_11285ab0();
  thunk_FUN_11285ab0();
  return;
}


// Reference entry 11236110; body size 20 bytes.
#line 1 "ENTRY_11236110"

void FUN_11236110(void)

{
  thunk_FUN_11285ab0();
  thunk_FUN_11285ab0();
  return;
}


// Reference entry 112362e0; body size 36 bytes.
#line 1 "ENTRY_112362e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_112362e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXMLRPCResultCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x410);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 112363e0; body size 49 bytes.
#line 1 "ENTRY_112363e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_112363e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXMLRPCInParam);
  thunk_FUN_11285ab0();
  thunk_FUN_11285ab0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x5c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11236420; body size 33 bytes.
#line 1 "ENTRY_11236420"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11236420(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXMLRPCResultCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11236450; body size 41 bytes.
#line 1 "ENTRY_11236450"



// Reference entry 112365c0; body size 33 bytes.
#line 1 "ENTRY_112365c0"

undefined1 __fastcall FUN_112365c0(int param_1)

{
  if (((*(int *)(param_1 + 0x3038) == 2) && (*(char *)(param_1 + 0x3017) == '\a')) &&
     (*(char *)(param_1 + 0x3018) == '\x03')) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 11236630; body size 26 bytes.
#line 1 "ENTRY_11236630"

int __fastcall FUN_11236630(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x3038));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x3016 + param_1) == '\f')) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 11236650; body size 37 bytes.
#line 1 "ENTRY_11236650"

int __fastcall FUN_11236650(int param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x3038));
  uVar2 = (uint3)((uint3)(uVar1 >> 8));
  if (((1 < uVar1) && (*(char *)(uVar1 + 0x3016 + param_1) == '\x06')) &&
     (*(char *)(uVar1 + 0x3015 + param_1) == '\f')) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 11236680; body size 47 bytes.
#line 1 "ENTRY_11236680"

int __fastcall FUN_11236680(int param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x3038));
  uVar2 = (uint3)((uint3)(uVar1 >> 8));
  if ((((2 < uVar1) && (*(char *)(uVar1 + 0x3016 + param_1) == '\b')) &&
      (*(char *)(uVar1 + 0x3015 + param_1) == '\x06')) &&
     (*(char *)(uVar1 + 0x3014 + param_1) == '\f')) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 112366c0; body size 26 bytes.
#line 1 "ENTRY_112366c0"

int __fastcall FUN_112366c0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x3038));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x3016 + param_1) == '\r')) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 112366e0; body size 50 bytes.
#line 1 "ENTRY_112366e0"

undefined1 __fastcall FUN_112366e0(int param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = (uint)(*(uint *)(param_1 + 0x3038));
  if (((1 < uVar2) &&
      ((((cVar1 = (char)(*(char *)(uVar2 + 0x3016 + param_1)), cVar1 == '\x01' || (cVar1 == '\x04')) ||
        (cVar1 == '\x05')) || (cVar1 == '\v')))) && (*(char *)(uVar2 + 0x3015 + param_1) == '\r')) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 11237be0; body size 58 bytes.
#line 1 "ENTRY_11237be0"

undefined4 FUN_11237be0(char *param_1)

{
  int iVar1;
  
  iVar1 = (int)(strncmp(param_1,"HTTP/1.1 ",9), 0);
  if (iVar1 != 0) {
    iVar1 = (int)(strncmp(param_1,"HTTP/1.0 ",9), 0);
    if (iVar1 != 0) {
      return (undefined4)(0);
    }
  }
  return (undefined4)(1);
}


// Reference entry 11237cf0; body size 49 bytes.
#line 1 "ENTRY_11237cf0"

int __fastcall FUN_11237cf0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (int)(0x1c);
  uVar3 = (uint)(0);
  if (*(uint *)(param_1 + 0x380) != 0) {
    do {
      iVar1 = (int)(thunk_FUN_11237dd0(), 0);
      uVar3 = (uint)(uVar3 + 1);
      iVar2 = (int)(iVar2 + iVar1);
    } while ((uint)(uVar3) < *(uint *)(param_1 + 0x380));
  }
  return (int)(iVar2);
}


// Reference entry 11237da0; body size 30 bytes.
#line 1 "ENTRY_11237da0"

int __fastcall FUN_11237da0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(thunk_FUN_11285d80(*param_1), 0);
  iVar2 = (int)(thunk_FUN_11237dd0(), 0);
  return (int)(iVar2 + iVar1 + 0x1e);
}


// Reference entry 11238260; body size 43 bytes.
#line 1 "ENTRY_11238260"

void __fastcall FUN_11238260(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(0);
  if (*(int *)(param_1 + 0x5c4) != 0) {
    do {
      thunk_FUN_11238060<>(0);
      uVar1 = (uint)(uVar1 + 1);
    } while ((uint)(uVar1) < *(uint *)(param_1 + 0x5c4));
  }
  return;
}


// Reference entry 112382e0; body size 48 bytes.
#line 1 "ENTRY_112382e0"

void __thiscall Recovered_Bulk::m_FUN_112382e0(undefined4 param_2,undefined4 param_3,int *param_4)
{
  int param_1 = (int )this;
  int local_4;
  
  *(undefined1*)(param_1 + 0x434c) = (undefined1)(1);
  local_4 = (int)(param_1);
  thunk_FUN_112368f0(param_2,param_3,&local_4);
  if ((int *)(param_4) != (int *)(0x0)) {
    *param_4 = (int)(local_4);
  }
  return;
}


// Reference entry 112386e0; body size 20 bytes.
#line 1 "ENTRY_112386e0"

void __thiscall Recovered_Bulk::m_FUN_112386e0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(char *)(param_1 + 5) != '\0') {
    *(undefined1*)(param_1 + 6) = (undefined1)(1);
    *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  }
  return;
}


// Reference entry 11238700; body size 34 bytes.
#line 1 "ENTRY_11238700"

void __thiscall Recovered_Bulk::m_FUN_11238700(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(char *)(param_1 + 0xc) != '\0') {
    *(undefined1*)(param_1 + 0xd) = (undefined1)(1);
    thunk_FUN_1106a8d0(param_1 + 0xe,param_2,0x400);
  }
  return;
}


// Reference entry 11238b30; body size 42 bytes.
#line 1 "ENTRY_11238b30"

undefined1 __thiscall Recovered_Bulk::m_FUN_11238b30(undefined4 param_2,int param_3)
{
  int param_1 = (int )this;
  char cVar1;
  
  if (param_3 != 0) {
    cVar1 = (char)((**(code **)(*(int *)(param_1 + 0x1310) + 4))(param_2,param_3), 0);
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 11238b70; body size 18 bytes.
#line 1 "ENTRY_11238b70"

undefined1 __fastcall FUN_11238b70(int param_1)

{
  if ((*(char *)(param_1 + 6) != '\0') && (*(char *)(param_1 + 0xd) != '\0')) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 11239ce0; body size 59 bytes.
#line 1 "ENTRY_11239ce0"

void __thiscall Recovered_Bulk::m_FUN_11239ce0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return;
}


// Reference entry 11239d30; body size 16 bytes.
#line 1 "ENTRY_11239d30"

void __fastcall FUN_11239d30(int param_1)

{
  if (*(int **)(param_1 + 0x990) != (int *)((0x0))) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x990) + 0x10))();
    return;
  }
  return;
}


// Reference entry 11239d50; body size 20 bytes.
#line 1 "ENTRY_11239d50"

undefined4 __fastcall FUN_11239d50(int param_1)

{
  if (*(int *)(param_1 + 0x990) != 0) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x990) + 0xd7d0));
  }
  return (undefined4)(0);
}


// Reference entry 11239d70; body size 20 bytes.
#line 1 "ENTRY_11239d70"

undefined4 __fastcall FUN_11239d70(int param_1)

{
  if (*(int *)(param_1 + 0x990) != 0) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x990) + 0xd7d4));
  }
  return (undefined4)(0);
}


// Reference entry 11239d90; body size 20 bytes.
#line 1 "ENTRY_11239d90"

undefined4 __fastcall FUN_11239d90(int param_1)

{
  if (*(int *)(param_1 + 0x990) != 0) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x990) + 0xd7d8));
  }
  return (undefined4)(0);
}


// Reference entry 11239db0; body size 22 bytes.
#line 1 "ENTRY_11239db0"

void __fastcall FUN_11239db0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  int iStack00000004;
  
  iStack00000004 = (int)(param_1 + 4);
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    (**(code **)(**(int **)(param_1 + 8) + 4))();
    return;
  }
  return;
}


// Reference entry 11239de0; body size 54 bytes.
#line 1 "ENTRY_11239de0"

void __thiscall Recovered_Bulk::m_FUN_11239de0(undefined4 param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x990), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *(undefined4*)(param_1 + 4) = (undefined4)(param_2);
    if (0 < *(int *)(param_1 + 8)) {
      thunk_FUN_111c1d40(*(int *)(param_1 + 8));
      piVar1 = (int *)(*(int **)(param_1 + 0x990), 0);
    }
    (**(code **)(*piVar1 + 4))(param_1 + -4,1);
  }
  return;
}


// Reference entry 1123a750; body size 35 bytes.
#line 1 "ENTRY_1123a750"

undefined4 __thiscall Recovered_Bulk::m_FUN_1123a750(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1123a320();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x4ac);
  }
  return (undefined4)(param_1);
}


// Reference entry 1123ad20; body size 35 bytes.
#line 1 "ENTRY_1123ad20"

int * __thiscall Recovered_Bulk::m_FUN_1123ad20(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x49c), 0);
  while( true ) {
    if ((int *)(piVar1) == (int *)(0x0)) {
      return (int *)((int *)0x0);
    }
    if (*piVar1 == (int)((param_2))) break;
    piVar1 = (int *)((int *)piVar1[0x32]);
  }
  return (int *)(piVar1);
}


// Reference entry 1123b1c0; body size 20 bytes.
#line 1 "ENTRY_1123b1c0"

void __stdcall FUN_1123b1c0(undefined4 param_1)

{
  thunk_FUN_1148a50e(param_1,0xcc);
  return;
}


// Reference entry 1123b1e0; body size 25 bytes.
#line 1 "ENTRY_1123b1e0"

void __thiscall Recovered_Bulk::m_FUN_1123b1e0(int param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_2 + 0xd8) = (undefined4)(*(undefined4 *)(param_1 + 0x494));
  *(int*)(param_1 + 0x494) = (int)(param_2);
  return;
}


// Reference entry 1123ebd0; body size 24 bytes.
#line 1 "ENTRY_1123ebd0"

undefined1 __fastcall FUN_1123ebd0(int param_1)

{
  if ((*(char *)(param_1 + 0x8590) != '\0') && (*(char *)(param_1 + 0x8612) != '\0')) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 1123ec90; body size 41 bytes.
#line 1 "ENTRY_1123ec90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1123ec90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXmlPostClient);
  thunk_FUN_112665b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc588);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1123ef00; body size 28 bytes.
#line 1 "ENTRY_1123ef00"

void __thiscall Recovered_Bulk::m_FUN_1123ef00(int *param_2, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  (**(code **)(*param_2 + 4))(*(undefined4 *)(param_1 + 0xc574),*(undefined4 *)(param_1 + 0xc578));
  return;
}


// Reference entry 1123f550; body size 32 bytes.
#line 1 "ENTRY_1123f550"

undefined4 __thiscall Recovered_Bulk::m_FUN_1123f550(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11299700();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 1123f580; body size 48 bytes.
#line 1 "ENTRY_1123f580"

undefined4 __thiscall Recovered_Bulk::m_FUN_1123f580(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  thunk_FUN_11299700();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 11240600; body size 37 bytes.
#line 1 "ENTRY_11240600"

int __fastcall FUN_11240600(int param_1)

{
  *(undefined4*)(param_1 + 8) = (undefined4)(1);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0x7fffffff);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  thunk_FUN_112a9cf0(param_1);
  return (int)(param_1);
}


// Reference entry 11240680; body size 41 bytes.
#line 1 "ENTRY_11240680"

int __thiscall Recovered_Bulk::m_FUN_11240680(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *(undefined4*)(param_1 + 0x1210) = (undefined4)(0);
  uVar1 = (undefined4)(WSACreateEvent(), 0);
  *(undefined4*)(param_1 + 0x208) = (undefined4)(uVar1);
  *(undefined4*)(param_1 + 0x20c) = (undefined4)(param_2);
  return (int)(param_1);
}


// Reference entry 11240a80; body size 36 bytes.
#line 1 "ENTRY_11240a80"



// Reference entry 11242af0; body size 18 bytes.
#line 1 "ENTRY_11242af0"

undefined1 __fastcall FUN_11242af0(int param_1)

{
  if ((*(int *)(param_1 + 4) == 1) && (*(int *)(param_1 + 0x14) != 0)) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 11242b10; body size 40 bytes.
#line 1 "ENTRY_11242b10"

void __fastcall FUN_11242b10(int param_1)

{
  thunk_FUN_112a7f50(param_1 + 0x20);
  thunk_FUN_11242b50(&DAT_11c03b9c);
  thunk_FUN_112a8010(param_1 + 0x20);
  return;
}


// Reference entry 11242c60; body size 47 bytes.
#line 1 "ENTRY_11242c60"

undefined1 __thiscall Recovered_Bulk::m_FUN_11242c60(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 uVar1;
  
  thunk_FUN_112a7f50(param_1 + 0x20);
  uVar1 = (undefined1)(thunk_FUN_11242b50(param_2), 0);
  thunk_FUN_112a8010(param_1 + 0x20);
  return (undefined1)(uVar1);
}


// Reference entry 11242ca0; body size 46 bytes.
#line 1 "ENTRY_11242ca0"



// Reference entry 11243350; body size 31 bytes.
#line 1 "ENTRY_11243350"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_11243350(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)(_UNK_119df2dc);
  uVar3 = (undefined4)(_UNK_119df2d8);
  uVar2 = (undefined4)(_UNK_119df2d4);
  uVar1 = (undefined4)(DAT_119df2d0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RJsonWriterBase);
  param_1[9] = (undefined4)(0);
  param_1[1] = (undefined4)(uVar1);
  param_1[2] = (undefined4)(uVar2);
  param_1[3] = (undefined4)(uVar3);
  param_1[4] = (undefined4)(uVar4);
  param_1[5] = (undefined4)(uVar1);
  param_1[6] = (undefined4)(uVar2);
  param_1[7] = (undefined4)(uVar3);
  param_1[8] = (undefined4)(uVar4);
  return (undefined4 *)(param_1);
}


// Reference entry 11243380; body size 48 bytes.
#line 1 "ENTRY_11243380"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11243380(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  *(undefined8*)(param_1 + 1) = (undefined8)(0);
  __std_exception_copy(param_2 + 4,param_1 + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_nonstd_variants_bad_variant_access);
  return (undefined4 *)(param_1);
}


// Reference entry 11243480; body size 17 bytes.
#line 1 "ENTRY_11243480"

void __fastcall FUN_11243480(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  __std_exception_destroy(param_1 + 1);
  return;
}


// Reference entry 11243600; body size 45 bytes.
#line 1 "ENTRY_11243600"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11243600(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11243640; body size 33 bytes.
#line 1 "ENTRY_11243640"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11243640(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RJsonWriterBase);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11243670; body size 45 bytes.
#line 1 "ENTRY_11243670"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11243670(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11243770; body size 36 bytes.
#line 1 "ENTRY_11243770"

void __fastcall FUN_11243770(int *param_1)

{
  (**(code **)(*param_1 + 4))(&DAT_119361e8,1);
  *(undefined1*)(param_1[9] + 4 + (int)param_1) = (undefined1)(0);
  if (-1 < param_1[9] + -1) {
    param_1[9] = (int)(param_1[9] + -1);
  }
  return;
}


// Reference entry 112437a0; body size 36 bytes.
#line 1 "ENTRY_112437a0"

void __fastcall FUN_112437a0(int *param_1)

{
  (**(code **)(*param_1 + 4))(&DAT_118872bc,1);
  *(undefined1*)(param_1[9] + 4 + (int)param_1) = (undefined1)(0);
  if (-1 < param_1[9] + -1) {
    param_1[9] = (int)(param_1[9] + -1);
  }
  return;
}


// Reference entry 11243860; body size 53 bytes.
#line 1 "ENTRY_11243860"

void FUN_11243860(undefined4 param_1)

{
  undefined1 auStack_2c [4];
  undefined1 local_28 [36];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)(uint)&auStack_2c);
  thunk_FUN_10118c40<>(param_1);
  thunk_FUN_11243220();
                    
  _CxxThrowException((uint)&local_28,(ThrowInfo *)&DAT_1205ce40);
}


// Reference entry 11243910; body size 43 bytes.
#line 1 "ENTRY_11243910"

void __fastcall FUN_11243910(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 4))(&DAT_119361e4,1);
  iVar1 = (int)(param_1[9]);
  if (iVar1 + 1 < 0x20) {
    param_1[9] = (int)(iVar1 + 1);
    *(undefined1*)(iVar1 + 5 + (int)param_1) = (undefined1)(1);
    return;
  }
  *(undefined1*)(iVar1 + 4 + (int)param_1) = (undefined1)(1);
  return;
}


// Reference entry 11243a40; body size 43 bytes.
#line 1 "ENTRY_11243a40"

void __fastcall FUN_11243a40(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 4))(&DAT_118872b8,1);
  iVar1 = (int)(param_1[9]);
  if (iVar1 + 1 < 0x20) {
    param_1[9] = (int)(iVar1 + 1);
    *(undefined1*)(iVar1 + 5 + (int)param_1) = (undefined1)(1);
    return;
  }
  *(undefined1*)(iVar1 + 4 + (int)param_1) = (undefined1)(1);
  return;
}


// Reference entry 11244810; body size 29 bytes.
#line 1 "ENTRY_11244810"

void __fastcall FUN_11244810(int *param_1)

{
  if (*(char *)(param_1[9] + 4 + (int)param_1) == '\0') {
    (**(code **)(*param_1 + 4))(&DAT_118850bc,1);
    return;
  }
  *(undefined1*)(param_1[9] + 4 + (int)param_1) = (undefined1)(0);
  return;
}


// Reference entry 11244c70; body size 36 bytes.
#line 1 "ENTRY_11244c70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11244c70(undefined1 *param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_3);
  *param_1 = (undefined4)(param_2);
  *(undefined1*)(param_1 + 3) = (undefined1)(1);
  param_1[2] = (undefined4)(0);
  if (param_3 != 0) {
    *param_2 = (undefined1)(0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11244ca0; body size 58 bytes.
#line 1 "ENTRY_11244ca0"

undefined1 * __thiscall Recovered_Bulk::m_FUN_11244ca0(undefined4 param_2,int param_3)
{
  undefined1 *param_1 = (undefined1 *)this;
  int iVar1;
  
  if (param_3 == 0) {
    param_2 = (undefined4)(Ordinal_8(param_2), 0);
  }
  iVar1 = (int)(inet_ntop(2,&param_2,param_1,0x10), 0);
  if (iVar1 == 0) {
    *param_1 = (undefined1)(0);
  }
  return (undefined1 *)(param_1);
}


// Reference entry 11244d80; body size 21 bytes.
#line 1 "ENTRY_11244d80"

undefined4 * __fastcall FUN_11244d80(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKeyValuePairsQueryParams);
  return (undefined4 *)(param_1);
}


// Reference entry 11245090; body size 36 bytes.
#line 1 "ENTRY_11245090"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11245090(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKeyValueUrlPairs);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x918);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 112450c0; body size 36 bytes.
#line 1 "ENTRY_112450c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_112450c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKeyValueUrlPairs);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x918);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 112454d0; body size 17 bytes.
#line 1 "ENTRY_112454d0"

undefined4 FUN_112454d0(int param_1)

{
  return (undefined4)(((uint)((int3)((uint)(param_1 + -0x412) >> 8)) << 8 | (uint)((ushort)(param_1 + -0x412) < 4)));
}


// Reference entry 112454f0; body size 61 bytes.
#line 1 "ENTRY_112454f0"

undefined2 FUN_112454f0(ushort param_1)

{
  if ((((param_1 < 0x3f2) || (0x3fb < param_1)) && ((param_1 < 8000 || (8999 < param_1)))) &&
     (param_1 != 0x40c)) {
    return (undefined2)(0);
  }
  return (undefined2)(1);
}


// Reference entry 11245810; body size 35 bytes.
#line 1 "ENTRY_11245810"

void FUN_11245810(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  thunk_FUN_11245d70(param_1,param_2,param_3,param_4,param_5,param_6,0x3d);
  return;
}


// Reference entry 11246be0; body size 23 bytes.
#line 1 "ENTRY_11246be0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_11246be0(undefined4 param_1)

{
  short sVar1;
  
  sVar1 = (short)(thunk_FUN_112470f0(param_1), 0);
  return (short)(sVar1 + DAT_11c03cf0);
}


// Reference entry 11246cb0; body size 49 bytes.
#line 1 "ENTRY_11246cb0"

void FUN_11246cb0(int param_1,undefined1 *param_2,uint param_3)

{
  uint _Size;
  
  *param_2 = (undefined1)(0);
  _Size = (uint)(*(uint *)(param_1 + 0xc));
  if ((_Size != 0) && (_Size < param_3)) {
    memcpy(param_2,*(void **)(param_1 + 8),_Size);
    param_2[*(int*)(param_1 + 0xc)] = (int)((undefined1)(0));
  }
  return;
}


// Reference entry 112471a0; body size 23 bytes.
#line 1 "ENTRY_112471a0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_112471a0(undefined4 param_1)

{
  short sVar1;
  
  sVar1 = (short)(thunk_FUN_112470f0(param_1), 0);
  return (short)(sVar1 + DAT_11c03cec);
}


// Reference entry 11247bb0; body size 26 bytes.
#line 1 "ENTRY_11247bb0"

bool FUN_11247bb0(char *param_1)

{
  int iVar1;
  
  iVar1 = (int)(strncmp(param_1,"Sonos_MTM_",10), 0);
  return (bool)(iVar1 == 0);
}


// Reference entry 11247bd0; body size 26 bytes.
#line 1 "ENTRY_11247bd0"

bool FUN_11247bd0(char *param_1)

{
  int iVar1;
  
  iVar1 = (int)(strncmp(param_1,"Sonos_RDM_",10), 0);
  return (bool)(iVar1 == 0);
}


// Reference entry 11247c30; body size 16 bytes.
#line 1 "ENTRY_11247c30"

void __stdcall FUN_11247c30(undefined4 param_1)

{
  thunk_FUN_11247c50(param_1,0x3d,0x26);
  return;
}


// Reference entry 11247e90; body size 26 bytes.
#line 1 "ENTRY_11247e90"

void FUN_11247e90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_11247ed0(param_1,param_2,param_3,"$-_.!*\'(),");
  return;
}


// Reference entry 112482b0; body size 30 bytes.
#line 1 "ENTRY_112482b0"

void __fastcall FUN_112482b0(int param_1)

{
  thunk_FUN_112a7f20(param_1 + 0x4e8);
  thunk_FUN_1128f6e0();
  return;
}


// Reference entry 112482e0; body size 56 bytes.
#line 1 "ENTRY_112482e0"

int __thiscall Recovered_Bulk::m_FUN_112482e0(byte param_2)
{
  int param_1 = (int )this;
  thunk_FUN_112a7f20(param_1 + 0x4e8);
  thunk_FUN_1128f6e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x4f0);
  }
  return (int)(param_1);
}


// Reference entry 11248330; body size 63 bytes.
#line 1 "ENTRY_11248330"

void FUN_11248330(void)

{
  int iVar1;
  
  iVar1 = (int)(DAT_122f5674);
  if (DAT_122f5674 != 0) {
    thunk_FUN_112a7f20(DAT_122f5674 + 0x4e8);
    thunk_FUN_1128f6e0();
    thunk_FUN_1148a50e(iVar1,0x4f0);
  }
  DAT_122f5674 = (int)(0);
  return;
}


// Reference entry 11248ae0; body size 53 bytes.
#line 1 "ENTRY_11248ae0"

undefined8 __fastcall FUN_11248ae0(int param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = (char)(thunk_FUN_112a7f50(param_1 + 0x4e8), 0);
  uVar1 = (undefined8)(*(undefined8 *)(param_1 + 0x4a8));
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x4e8);
  }
  return (undefined8)(uVar1);
}


// Reference entry 11248ba0; body size 36 bytes.
#line 1 "ENTRY_11248ba0"

bool __thiscall Recovered_Bulk::m_FUN_11248ba0(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_113d6b60(*(int *)(param_1 + 0x404) + param_1,*(undefined4 *)(param_1 + 0x408), param_2), 0);
  return (bool)(iVar1 == 1);
}


// Reference entry 11249060; body size 61 bytes.
#line 1 "ENTRY_11249060"

undefined4 * __fastcall FUN_11249060(undefined4 *param_1)

{
  thunk_FUN_11273f80();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKVReportData);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  thunk_FUN_1145c930(param_1 + 4,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKVReportData);
  *(undefined1*)(param_1 + 6) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 11249170; body size 33 bytes.
#line 1 "ENTRY_11249170"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11249170(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKeyValueEnumCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 112491a0; body size 33 bytes.
#line 1 "ENTRY_112491a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_112491a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKeyValueEnumCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 112491d0; body size 33 bytes.
#line 1 "ENTRY_112491d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_112491d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKeyValueEnumCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11249200; body size 33 bytes.
#line 1 "ENTRY_11249200"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11249200(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKeyValueEnumCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11249a70; body size 27 bytes.
#line 1 "ENTRY_11249a70"

void FUN_11249a70(void)

{
  thunk_FUN_11249230<>();
  return;
}


// Reference entry 11249df0; body size 49 bytes.
#line 1 "ENTRY_11249df0"

undefined1 __stdcall FUN_11249df0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_112747a0(param_1,0,0);
  thunk_FUN_11274a70(param_2);
  thunk_FUN_11274880(param_1);
  return (undefined1)(1);
}


// Reference entry 11249e30; body size 26 bytes.
#line 1 "ENTRY_11249e30"

void __thiscall Recovered_Bulk::m_FUN_11249e30(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined1 uVar1;
  
  uVar1 = (undefined1)(thunk_FUN_11249230<>(param_2,param_3), 0);
  *(undefined1*)(param_1 + 8) = (undefined1)(uVar1);
  return;
}


// Reference entry 1124a2d0; body size 31 bytes.
#line 1 "ENTRY_1124a2d0"

undefined4 * __fastcall FUN_1124a2d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPRequestHeadersBuilder);
  *(undefined2*)(param_1 + 2) = (undefined2)(0);
  *(undefined1*)((int)param_1 + 0x40b) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 10) = (undefined1)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1124a3a0; body size 36 bytes.
#line 1 "ENTRY_1124a3a0"

void __fastcall FUN_1124a3a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPAsyncSocketIOSessionCB);
  param_1[1] = (undefined4)((uint)&ghidra_vftable_RHTTPAsyncSocketIOSessionCB);
  if (*(char *)(param_1 + 0x218) != '\0') {
    thunk_FUN_113c7de0(param_1 + 0x219);
  }
  return;
}


// Reference entry 1124a420; body size 41 bytes.
#line 1 "ENTRY_1124a420"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1124a420(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAsyncSocketIOSession);
  thunk_FUN_1124d050();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x4488);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1124a460; body size 27 bytes.
#line 1 "ENTRY_1124a460"

undefined4 __thiscall Recovered_Bulk::m_FUN_1124a460(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4)(param_1);
}


// Reference entry 1124a4f0; body size 36 bytes.
#line 1 "ENTRY_1124a4f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1124a4f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPRequestHeadersBuilder);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x610c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1124a520; body size 36 bytes.
#line 1 "ENTRY_1124a520"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1124a520(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPRequestHeadersBuilder);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x620c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1124a550; body size 36 bytes.
#line 1 "ENTRY_1124a550"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1124a550(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPRequestHeadersBuilder);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1124a580; body size 36 bytes.
#line 1 "ENTRY_1124a580"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1124a580(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPRequestHeadersBuilder);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x610c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1124a5b0; body size 32 bytes.
#line 1 "ENTRY_1124a5b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1124a5b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11294d60();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 1124ae40; body size 28 bytes.
#line 1 "ENTRY_1124ae40"

undefined1 __fastcall FUN_1124ae40(int param_1)

{
  if (*(char *)(param_1 + 0xc) == '\0') {
    return (undefined1)(0);
  }
  if (*(char *)(param_1 + 0x4424) != '\0') {
    return (undefined1)(*(undefined1 *)(param_1 + 0x4425));
  }
  return (undefined1)(1);
}


// Reference entry 1124b7f0; body size 57 bytes.
#line 1 "ENTRY_1124b7f0"

void __fastcall FUN_1124b7f0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x20))();
  thunk_FUN_112b0270("asyncio",4,"Session status 0x%x connected %d wantWrite %d wantRead %d", *(undefined4 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0xc), *(undefined1 *)(param_1 + 0x4485),*(undefined1 *)(param_1 + 0x4484));
  return;
}


// Reference entry 1124b850; body size 27 bytes.
#line 1 "ENTRY_1124b850"

void __fastcall FUN_1124b850(int param_1)

{
  thunk_FUN_112b0270("asyncio",4,"Current state: %d Current Status 0x%08x", *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  return;
}


// Reference entry 1124ce80; body size 19 bytes.
#line 1 "ENTRY_1124ce80"

uint __stdcall FUN_1124ce80(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  if ((undefined4 *)(param_3) != (undefined4 *)(0x0)) {
    *param_3 = (undefined4)(0);
  }
  return (uint)((uint)param_3 & 0xffffff00);
}


// Reference entry 1124cea0; body size 60 bytes.
#line 1 "ENTRY_1124cea0"

void __thiscall Recovered_Bulk::m_FUN_1124cea0(undefined4 *param_2,undefined2 *param_3,undefined4 param_4,
            undefined4 param_5,undefined1 *param_6)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 8));
  *param_2 = (undefined4)(*(undefined4 *)(iVar1 + 4));
  *param_3 = (undefined2)(*(undefined2 *)(iVar1 + 8));
  thunk_FUN_1145c250(param_4,iVar1 + 10,param_5);
  *param_6 = (undefined1)(*(undefined1 *)(iVar1 + 0x40b));
  return;
}


// Reference entry 1124d1e0; body size 29 bytes.
#line 1 "ENTRY_1124d1e0"

undefined4 __fastcall FUN_1124d1e0(int param_1)

{
  if ((*(char *)(param_1 + 0x854) != '\0') &&
     (*(int *)((param_1 + 0x858)) != *(int *)((param_1 + 0x85c)))) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 1124d500; body size 62 bytes.
#line 1 "ENTRY_1124d500"

void __thiscall Recovered_Bulk::m_FUN_1124d500(int param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  do {
    if (param_3 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0xc) == 3) {
      iVar1 = (int)(thunk_FUN_1124cc10<>(param_2,param_3), 0);
    }
    else {
      if (*(int *)(param_1 + 0xc) != 4) {
        return;
      }
      iVar1 = (int)(thunk_FUN_1124c8a0(param_2,param_3), 0);
    }
    param_2 = (int)(param_2 + iVar1);
    param_3 = (int)(param_3 - iVar1);
  } while( true );
}


// Reference entry 1124d5b0; body size 19 bytes.
#line 1 "ENTRY_1124d5b0"

uint __fastcall FUN_1124d5b0(int param_1)

{
  uint uVar1;
  
  if ((*(int *)(param_1 + 0xc) != 3) && (uVar1 = (uint)(*(int *)(param_1 + 0xc) - 4), uVar1 != 0)) {
    return (uint)(uVar1 & 0xffffff00);
  }
  return (uint)(1);
}


// Reference entry 1124d630; body size 19 bytes.
#line 1 "ENTRY_1124d630"

uint __fastcall FUN_1124d630(int param_1)

{
  uint uVar1;
  
  if ((*(int *)(param_1 + 0xc) != 1) && (uVar1 = (uint)(*(int *)(param_1 + 0xc) - 2), uVar1 != 0)) {
    return (uint)(uVar1 & 0xffffff00);
  }
  return (uint)(1);
}


// Reference entry 1124d740; body size 38 bytes.
#line 1 "ENTRY_1124d740"

int __thiscall Recovered_Bulk::m_FUN_1124d740(int param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1145f900(param_1,param_2);
  thunk_FUN_1145f900(param_1 + 0x10,param_2 + 0x10);
  return (int)(param_1);
}


// Reference entry 1124d770; body size 25 bytes.
#line 1 "ENTRY_1124d770"

int __fastcall FUN_1124d770(int param_1)

{
  thunk_FUN_1145f8f0(param_1);
  thunk_FUN_1145f8f0(param_1 + 0x10);
  return (int)(param_1);
}


// Reference entry 1124d7a0; body size 42 bytes.
#line 1 "ENTRY_1124d7a0"

int __thiscall Recovered_Bulk::m_FUN_1124d7a0(int param_2)
{
  int param_1 = (int )this;
  if (param_1 != param_2) {
    thunk_FUN_1145f900(param_1,param_2);
    thunk_FUN_1145f900(param_1 + 0x10,param_2 + 0x10);
  }
  return (int)(param_1);
}


// Reference entry 1124d7e0; body size 33 bytes.
#line 1 "ENTRY_1124d7e0"

int FUN_1124d7e0(int param_1)

{
  thunk_FUN_1145f8f0(param_1);
  thunk_FUN_1145f8f0(param_1 + 0x10);
  thunk_FUN_1145f920(param_1);
  return (int)(param_1);
}


// Reference entry 1124dee0; body size 38 bytes.
#line 1 "ENTRY_1124dee0"

undefined4 * __fastcall FUN_1124dee0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  *(undefined2*)(param_1 + 0xc) = (undefined2)(0);
  *(undefined1*)((int)param_1 + 0x32) = (undefined1)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCROutParamShallowCopy);
  param_1[0xd] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1124eb60; body size 43 bytes.
#line 1 "ENTRY_1124eb60"

void __fastcall FUN_1124eb60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRInParamDeepCopy);
  free((void *)param_1[0x16]);
  free((void *)param_1[0x17]);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRInParamDeepCopy);
  thunk_FUN_11285ab0();
  return;
}


// Reference entry 1124ecc0; body size 53 bytes.
#line 1 "ENTRY_1124ecc0"

void __fastcall FUN_1124ecc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRResultParser);
  param_1[0x4a] = (undefined4)((uint)&ghidra_vftable_REncryptedStringDecoder);
  param_1[8] = (undefined4)((uint)&ghidra_vftable_RAesDecoder);
  thunk_FUN_113d3650(param_1 + 0x16);
  param_1[8] = (undefined4)((uint)&ghidra_vftable_REncryptedDataDecoder);
  FUN_1003d5d7();
  return;
}


// Reference entry 1124ed10; body size 53 bytes.
#line 1 "ENTRY_1124ed10"

void __fastcall FUN_1124ed10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_REncryptedStringEmitter);
  param_1[0x3f] = (undefined4)((uint)&ghidra_vftable_REncryptedStringEncoder);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RAesEncoder);
  thunk_FUN_113d3650(param_1 + 0xb);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_REncryptedDataEncoder);
  thunk_FUN_11285ab0();
  return;
}


// Reference entry 1124ed70; body size 31 bytes.
#line 1 "ENTRY_1124ed70"

void __fastcall FUN_1124ed70(undefined4 *param_1)

{
  param_1[8] = (undefined4)((uint)&ghidra_vftable_RSOAPComplexInParam);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPComplexInParam);
  thunk_FUN_11285aa0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPWriter);
  return;
}


// Reference entry 1124f160; body size 25 bytes.
#line 1 "ENTRY_1124f160"

void __fastcall FUN_1124f160(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPFaultWriter);
  thunk_FUN_11285ab0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPWriter);
  return;
}


// Reference entry 1124f2a0; body size 40 bytes.
#line 1 "ENTRY_1124f2a0"

void __thiscall Recovered_Bulk::m_FUN_1124f2a0(short param_2)
{
  int param_1 = (int )this;
  *(short*)(param_1 + 0x10) = (short)(param_2);
  *(undefined4*)(param_1 + 8) = (undefined4)(2);
  thunk_FUN_1145c720(param_1 + 0x38,0x18,&DAT_11884800,(int)param_2);
  return;
}


// Reference entry 1124f2e0; body size 42 bytes.
#line 1 "ENTRY_1124f2e0"

void __thiscall Recovered_Bulk::m_FUN_1124f2e0(undefined2 param_2)
{
  int param_1 = (int )this;
  *(undefined2*)(param_1 + 0x10) = (undefined2)(param_2);
  *(undefined4*)(param_1 + 8) = (undefined4)(1);
  thunk_FUN_1145c720(param_1 + 0x38,0x18,&DAT_1188f3d4,param_2);
  return;
}


// Reference entry 1124f320; body size 37 bytes.
#line 1 "ENTRY_1124f320"

void __thiscall Recovered_Bulk::m_FUN_1124f320(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 8) = (undefined4)(4);
  thunk_FUN_1145c720(param_1 + 0x38,0x18,&DAT_11884800,param_2);
  return;
}


// Reference entry 1124f350; body size 37 bytes.
#line 1 "ENTRY_1124f350"

void __thiscall Recovered_Bulk::m_FUN_1124f350(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 8) = (undefined4)(3);
  thunk_FUN_1145c720(param_1 + 0x38,0x18,&DAT_1188f3d4,param_2);
  return;
}


// Reference entry 1124f3c0; body size 49 bytes.
#line 1 "ENTRY_1124f3c0"

void __thiscall Recovered_Bulk::m_FUN_1124f3c0(char param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_118872c0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(char*)(param_1 + 0x10) = (char)(param_2);
  if (param_2 != '\0') {
    puVar1 = (undefined1 *)(&DAT_11881128);
  }
  thunk_FUN_1145c250(param_1 + 0x38,puVar1,0x18);
  return;
}


// Reference entry 1124f480; body size 21 bytes.
#line 1 "ENTRY_1124f480"

void __thiscall Recovered_Bulk::m_FUN_1124f480(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 8) = (undefined4)(7);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_2);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  return;
}


// Reference entry 1124f4c0; body size 21 bytes.
#line 1 "ENTRY_1124f4c0"

void __thiscall Recovered_Bulk::m_FUN_1124f4c0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 8) = (undefined4)(8);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_2);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  return;
}


// Reference entry 1124f4e0; body size 21 bytes.
#line 1 "ENTRY_1124f4e0"

void __thiscall Recovered_Bulk::m_FUN_1124f4e0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 8) = (undefined4)(6);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_2);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  return;
}


// Reference entry 1124f510; body size 33 bytes.
#line 1 "ENTRY_1124f510"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1124f510(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRCustomParamRX);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1124f540; body size 41 bytes.
#line 1 "ENTRY_1124f540"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1124f540(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRInParamDeepCopy);
  thunk_FUN_11285ab0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x58);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1124f5e0; body size 41 bytes.
#line 1 "ENTRY_1124f5e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1124f5e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRInParamDeepCopy);
  thunk_FUN_11285ab0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x60);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1124f620; body size 33 bytes.
#line 1 "ENTRY_1124f620"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1124f620(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCROutParamShallowCopy);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x34);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1124f650; body size 32 bytes.
#line 1 "ENTRY_1124f650"

undefined4 __thiscall Recovered_Bulk::m_FUN_1124f650(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1124ebd0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  return (undefined4)(param_1);
}


// Reference entry 1124f680; body size 33 bytes.
#line 1 "ENTRY_1124f680"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1124f680(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCROutParamShallowCopy);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1124f790; body size 32 bytes.
#line 1 "ENTRY_1124f790"

undefined4 __thiscall Recovered_Bulk::m_FUN_1124f790(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_112741d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 1124f7c0; body size 53 bytes.
#line 1 "ENTRY_1124f7c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1124f7c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[8] = (undefined4)((uint)&ghidra_vftable_RSOAPComplexInParam);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPComplexInParam);
  thunk_FUN_11285aa0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPWriter);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1124f8d0; body size 35 bytes.
#line 1 "ENTRY_1124f8d0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1124f8d0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1124ee40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2e8);
  }
  return (undefined4)(param_1);
}


// Reference entry 1124fa40; body size 35 bytes.
#line 1 "ENTRY_1124fa40"

undefined4 __thiscall Recovered_Bulk::m_FUN_1124fa40(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1124efc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x117c);
  }
  return (undefined4)(param_1);
}


// Reference entry 1124fbb0; body size 47 bytes.
#line 1 "ENTRY_1124fbb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1124fbb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPFaultWriter);
  thunk_FUN_11285ab0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPWriter);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1124fbf0; body size 36 bytes.
#line 1 "ENTRY_1124fbf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1124fbf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPWriter);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc30);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1124fcc0; body size 33 bytes.
#line 1 "ENTRY_1124fcc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1124fcc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPWriter);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1124fcf0; body size 33 bytes.
#line 1 "ENTRY_1124fcf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1124fcf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPWriter);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1124fe20; body size 62 bytes.
#line 1 "ENTRY_1124fe20"

void __thiscall Recovered_Bulk::m_FUN_1124fe20(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x38));
  if (((uVar1 < 2) && (param_2 != 0)) && (*(int *)(param_2 + 8) != 0)) {
    *(int*)(param_1 + 0x2c + uVar1 * 4) = (int)(param_2);
    *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
    if (uVar1 != 0) {
      *(undefined1*)(*(int *)(param_1 + 0x28 + uVar1 * 4) + 0xc2d) = (undefined1)(0);
      *(undefined1*)(param_2 + 0xc2c) = (undefined1)(0);
    }
    *(int*)(param_1 + 0x38) = (int)(*(int *)(param_1 + 0x38) + 1);
  }
  return;
}


// Reference entry 1124fe70; body size 62 bytes.
#line 1 "ENTRY_1124fe70"

void __thiscall Recovered_Bulk::m_FUN_1124fe70(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x38));
  if (((uVar1 < 2) && (param_2 != 0)) && (*(int *)(param_2 + 8) != 0)) {
    *(int*)(param_1 + 0x2c + uVar1 * 4) = (int)(param_2);
    *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
    if (uVar1 != 0) {
      *(undefined1*)(*(int *)(param_1 + 0x28 + uVar1 * 4) + 0xc2d) = (undefined1)(0);
      *(undefined1*)(param_2 + 0xc2c) = (undefined1)(0);
    }
    *(int*)(param_1 + 0x38) = (int)(*(int *)(param_1 + 0x38) + 1);
  }
  return;
}


// Reference entry 1124fec0; body size 46 bytes.
#line 1 "ENTRY_1124fec0"

int __thiscall Recovered_Bulk::m_FUN_1124fec0(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 8));
  if (uVar1 < 0x19) {
    *(uint*)(param_1 + 8) = (uint)(uVar1 + 1);
  }
  else {
    uVar1 = (uint)(uVar1 - 1);
  }
  param_1 = (int)(uVar1 * 0x60 + param_1);
  (**(code **)(*(int *)(param_1 + 0x28) + 4))(param_2);
  return (int)(param_1 + 0x28);
}


// Reference entry 1124ff50; body size 63 bytes.
#line 1 "ENTRY_1124ff50"

int __thiscall Recovered_Bulk::m_FUN_1124ff50(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 4));
  if (uVar1 < 0x10) {
    *(uint*)(param_1 + 4) = (uint)(uVar1 + 1);
  }
  else {
    uVar1 = (uint)(uVar1 - 1);
  }
  *(int*)(param_1 + 8) = (int)(*(int *)(param_1 + 8) + 1);
  (**(code **)(*(int *)(param_1 + 0x2e8 + uVar1 * 0x38) + 4))(param_2);
  return (int)(param_1 + uVar1 * 0x38 + 0x2e8);
}


// Reference entry 11250060; body size 55 bytes.
#line 1 "ENTRY_11250060"

int __thiscall Recovered_Bulk::m_FUN_11250060(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 8));
  if (uVar1 < 0x10) {
    *(uint*)(param_1 + 8) = (uint)(uVar1 + 1);
  }
  else {
    uVar1 = (uint)(uVar1 - 1);
  }
  param_1 = (int)(uVar1 * 0x60 + param_1);
  (**(code **)(*(int *)(param_1 + 0xc30) + 4))(param_2);
  return (int)(param_1 + 0xc30);
}


// Reference entry 112500b0; body size 57 bytes.
#line 1 "ENTRY_112500b0"

int __thiscall Recovered_Bulk::m_FUN_112500b0(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x2a4));
  if (uVar1 < 0xc) {
    *(uint*)(param_1 + 0x2a4) = (uint)(uVar1 + 1);
  }
  else {
    uVar1 = (uint)(uVar1 - 1);
  }
  (**(code **)(*(int *)(param_1 + 4 + uVar1 * 0x38) + 4))(param_2);
  return (int)(param_1 + uVar1 * 0x38 + 4);
}


// Reference entry 1125033f; body size 46 bytes.
#line 1 "ENTRY_1125033f"

void FUN_1125033f(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int unaff_EDI;
  
  *(undefined4*)(unaff_EDI + 4) = (undefined4)(7);
  uVar1 = (undefined4)(thunk_FUN_1148b586(param_3), 0);
  *(undefined4*)(unaff_EDI + 0x10) = (undefined4)(param_3);
  *(undefined4*)(unaff_EDI + 8) = (undefined4)(uVar1);
  *(undefined4*)(unaff_EDI + 0xc) = (undefined4)(uVar1);
  *(undefined4*)(unaff_EDI + 0x14) = (undefined4)(0);
  *(undefined1*)(unaff_EDI + 0x31) = (undefined1)(0);
  return;
}


// Reference entry 112503c0; body size 38 bytes.
#line 1 "ENTRY_112503c0"

void __thiscall Recovered_Bulk::m_FUN_112503c0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(7);
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined1*)(param_1 + 0x31) = (undefined1)(0);
  return;
}


// Reference entry 112503f0; body size 41 bytes.
#line 1 "ENTRY_112503f0"

void __thiscall Recovered_Bulk::m_FUN_112503f0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0x18);
  *(int*)(param_1 + 0xc) = (int)(param_1 + 0x18);
  *(undefined4*)(param_1 + 4) = (undefined4)(3);
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined1*)(param_1 + 0x31) = (undefined1)(0);
  return;
}


// Reference entry 11250430; body size 41 bytes.
#line 1 "ENTRY_11250430"

void __thiscall Recovered_Bulk::m_FUN_11250430(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0x18);
  *(int*)(param_1 + 0xc) = (int)(param_1 + 0x18);
  *(undefined4*)(param_1 + 4) = (undefined4)(2);
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined1*)(param_1 + 0x31) = (undefined1)(0);
  return;
}


// Reference entry 11250470; body size 41 bytes.
#line 1 "ENTRY_11250470"

void __thiscall Recovered_Bulk::m_FUN_11250470(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0x18);
  *(int*)(param_1 + 0xc) = (int)(param_1 + 0x18);
  *(undefined4*)(param_1 + 4) = (undefined4)(5);
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined1*)(param_1 + 0x31) = (undefined1)(0);
  return;
}


// Reference entry 112504b0; body size 41 bytes.
#line 1 "ENTRY_112504b0"

void __thiscall Recovered_Bulk::m_FUN_112504b0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0x18);
  *(int*)(param_1 + 0xc) = (int)(param_1 + 0x18);
  *(undefined4*)(param_1 + 4) = (undefined4)(4);
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined1*)(param_1 + 0x31) = (undefined1)(0);
  return;
}


// Reference entry 112504f0; body size 42 bytes.
#line 1 "ENTRY_112504f0"

void __thiscall Recovered_Bulk::m_FUN_112504f0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 4) = (undefined4)(9);
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined1*)(param_1 + 0x31) = (undefined1)(0);
  return;
}


// Reference entry 11250530; body size 42 bytes.
#line 1 "ENTRY_11250530"

void __thiscall Recovered_Bulk::m_FUN_11250530(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 4) = (undefined4)(8);
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined1*)(param_1 + 0x31) = (undefined1)(0);
  return;
}


// Reference entry 112505b0; body size 41 bytes.
#line 1 "ENTRY_112505b0"

void __thiscall Recovered_Bulk::m_FUN_112505b0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0x18);
  *(int*)(param_1 + 0xc) = (int)(param_1 + 0x18);
  *(undefined4*)(param_1 + 4) = (undefined4)(1);
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined1*)(param_1 + 0x31) = (undefined1)(0);
  return;
}


// Reference entry 112519d0; body size 48 bytes.
#line 1 "ENTRY_112519d0"

void __fastcall FUN_112519d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  if (*(int *)(param_1 + 0x2a8) == -1) {
    return;
  }
  param_1 = (int)(param_1 + *(int *)(param_1 + 0x2a8) * 0x38);
  if (*(int *)(param_1 + 8) == 9) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0xc) + 0xc))();
    return;
  }
  thunk_FUN_1124fdc0();
  return;
}


// Reference entry 11252550; body size 18 bytes.
#line 1 "ENTRY_11252550"

int __thiscall Recovered_Bulk::m_FUN_11252550(int param_2)
{
  int param_1 = (int )this;
  return (int)(param_2 * 0x60 + param_1 + 0x28);
}


// Reference entry 11252570; body size 18 bytes.
#line 1 "ENTRY_11252570"

int __thiscall Recovered_Bulk::m_FUN_11252570(int param_2)
{
  int param_1 = (int )this;
  return (int)(param_2 * 0x60 + param_1 + 0x28);
}


// Reference entry 11252590; body size 25 bytes.
#line 1 "ENTRY_11252590"

int __thiscall Recovered_Bulk::m_FUN_11252590(int param_2)
{
  int param_1 = (int )this;
  return (int)(param_1 + 0x2e8 + param_2 * 0x38);
}


// Reference entry 112525b0; body size 25 bytes.
#line 1 "ENTRY_112525b0"

int __thiscall Recovered_Bulk::m_FUN_112525b0(int param_2)
{
  int param_1 = (int )this;
  return (int)(param_1 + 0x2e8 + param_2 * 0x38);
}


// Reference entry 112525d0; body size 25 bytes.
#line 1 "ENTRY_112525d0"

int __thiscall Recovered_Bulk::m_FUN_112525d0(int param_2)
{
  int param_1 = (int )this;
  return (int)(param_1 + 0x2e8 + param_2 * 0x38);
}


// Reference entry 112525f0; body size 25 bytes.
#line 1 "ENTRY_112525f0"

int __thiscall Recovered_Bulk::m_FUN_112525f0(int param_2)
{
  int param_1 = (int )this;
  return (int)(param_1 + 0x2e8 + param_2 * 0x38);
}


// Reference entry 11252610; body size 21 bytes.
#line 1 "ENTRY_11252610"

int __thiscall Recovered_Bulk::m_FUN_11252610(int param_2)
{
  int param_1 = (int )this;
  return (int)(param_2 * 0x60 + param_1 + 0x1180);
}


// Reference entry 11252630; body size 21 bytes.
#line 1 "ENTRY_11252630"

int __thiscall Recovered_Bulk::m_FUN_11252630(int param_2)
{
  int param_1 = (int )this;
  return (int)(param_2 * 0x60 + param_1 + 0x1180);
}


// Reference entry 11252650; body size 21 bytes.
#line 1 "ENTRY_11252650"

int __thiscall Recovered_Bulk::m_FUN_11252650(int param_2)
{
  int param_1 = (int )this;
  return (int)(param_2 * 0x60 + param_1 + 0x1180);
}


// Reference entry 11252670; body size 21 bytes.
#line 1 "ENTRY_11252670"

int __thiscall Recovered_Bulk::m_FUN_11252670(int param_2)
{
  int param_1 = (int )this;
  return (int)(param_2 * 0x60 + param_1 + 0x1180);
}


// Reference entry 11252690; body size 21 bytes.
#line 1 "ENTRY_11252690"

int __thiscall Recovered_Bulk::m_FUN_11252690(int param_2)
{
  int param_1 = (int )this;
  return (int)(param_2 * 0x60 + param_1 + 0xc30);
}


// Reference entry 112526b0; body size 21 bytes.
#line 1 "ENTRY_112526b0"

int __thiscall Recovered_Bulk::m_FUN_112526b0(int param_2)
{
  int param_1 = (int )this;
  return (int)(param_2 * 0x60 + param_1 + 0xc30);
}


// Reference entry 11252830; body size 39 bytes.
#line 1 "ENTRY_11252830"

undefined1 * __fastcall FUN_11252830(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    return (undefined1 *)((undefined1 *)(param_1 + 0x38));
  case 6:
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x10), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 11253bf0; body size 51 bytes.
#line 1 "ENTRY_11253bf0"

void __fastcall FUN_11253bf0(int param_1)

{
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined1*)(param_1 + 0x18) = (undefined1)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(0);
  *(undefined1*)(param_1 + 0x2c) = (undefined1)(0);
  return;
}


// Reference entry 11253c30; body size 40 bytes.
#line 1 "ENTRY_11253c30"

void __fastcall FUN_11253c30(int param_1)

{
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined1*)(param_1 + 0x18) = (undefined1)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  return;
}


// Reference entry 11253c70; body size 45 bytes.
#line 1 "ENTRY_11253c70"

void __fastcall FUN_11253c70(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x38));
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)((undefined4 *)(param_1 + 0x28 + iVar1 * 4));
    do {
      *puVar2 = (undefined4)(0);
      puVar2 = (undefined4 *)(puVar2 + -1);
      iVar1 = (int)(iVar1 + -1);
    } while (iVar1 != 0);
  }
  *(undefined4*)(param_1 + 0x34) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x38) = (undefined4)(0);
  return;
}


// Reference entry 11253cd0; body size 62 bytes.
#line 1 "ENTRY_11253cd0"

void __thiscall Recovered_Bulk::m_FUN_11253cd0(char *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  void *_Dst;
  
  free(*(void **)(param_1 + 0x58));
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  _Dst = (char *)((char *)thunk_FUN_1148b586(pcVar2 + (1 - (int)(param_2 + 1))), 0);
  *(void**)(param_1 + 0x58) = (void *)(_Dst);
  memcpy(_Dst,param_2,(size_t)(pcVar2 + (1 - (int)(param_2 + 1))));
  return;
}


// Reference entry 11253d30; body size 62 bytes.
#line 1 "ENTRY_11253d30"

void __thiscall Recovered_Bulk::m_FUN_11253d30(char *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  void *_Dst;
  
  free(*(void **)(param_1 + 0x34));
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  _Dst = (char *)((char *)thunk_FUN_1148b586(pcVar2 + (1 - (int)(param_2 + 1))), 0);
  *(void**)(param_1 + 0x34) = (void *)(_Dst);
  memcpy(_Dst,param_2,(size_t)(pcVar2 + (1 - (int)(param_2 + 1))));
  return;
}


// Reference entry 11253df0; body size 32 bytes.
#line 1 "ENTRY_11253df0"

void __fastcall FUN_11253df0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 0x2a8) != -1) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0xc + *(int *)(param_1 + 0x2a8) * 0x38) + 4))();
    return;
  }
  return;
}


// Reference entry 11254500; body size 41 bytes.
#line 1 "ENTRY_11254500"

void __thiscall Recovered_Bulk::m_FUN_11254500(char *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  (**(code **)(*param_1 + 4))(param_2,(int)pcVar2 - (int)(param_2 + 1));
  return;
}


// Reference entry 11254d80; body size 59 bytes.
#line 1 "ENTRY_11254d80"

byte * __thiscall Recovered_Bulk::m_FUN_11254d80(undefined4 param_2)
{
  byte *param_1 = (byte *)this;
  uint local_4;
  
  local_4 = (uint)(0);
  thunk_FUN_101b9160(param_2,&DAT_119e0b2c,&local_4);
  *param_1 = (byte)((byte)local_4 & 1);
  param_1[1] = (byte)((byte)(local_4 >> 1) & 1);
  return (byte *)(param_1);
}


// Reference entry 112554f0; body size 63 bytes.
#line 1 "ENTRY_112554f0"

void __fastcall FUN_112554f0(int param_1)

{
  if (*(void **)(param_1 + 0x1e4) != (void *)((0x0))) {
    free(*(void **)(param_1 + 0x1e4));
    *(undefined4*)(param_1 + 0x1e4) = (undefined4)(0);
  }
  if (*(void **)(param_1 + 0x1e8) != (void *)((0x0))) {
    free(*(void **)(param_1 + 0x1e8));
    *(undefined4*)(param_1 + 0x1e8) = (undefined4)(0);
  }
  return;
}


// Reference entry 11255560; body size 63 bytes.
#line 1 "ENTRY_11255560"

void __fastcall FUN_11255560(int param_1)

{
  if (*(void **)(param_1 + 0x1ec) != (void *)((0x0))) {
    free(*(void **)(param_1 + 0x1ec));
    *(undefined4*)(param_1 + 0x1ec) = (undefined4)(0);
  }
  if (*(void **)(param_1 + 0x1f0) != (void *)((0x0))) {
    free(*(void **)(param_1 + 0x1f0));
    *(undefined4*)(param_1 + 0x1f0) = (undefined4)(0);
  }
  return;
}


// Reference entry 11255dc0; body size 27 bytes.
#line 1 "ENTRY_11255dc0"

undefined4 __thiscall Recovered_Bulk::m_FUN_11255dc0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 11255df0; body size 61 bytes.
#line 1 "ENTRY_11255df0"

void FUN_11255df0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != 0) {
    thunk_FUN_1145c720(param_3,param_4,"%s_%x",param_2,param_1);
    return;
  }
  thunk_FUN_1145c720(param_3,param_4,&DAT_1188bc94,param_2);
  return;
}


// Reference entry 11255f20; body size 37 bytes.
#line 1 "ENTRY_11255f20"

ulong FUN_11255f20(char *param_1)

{
  char *pcVar1;
  ulong uVar2;
  
  pcVar1 = (char *)(strchr(param_1,0x2d), 0);
  if ((char *)(pcVar1) != (char *)(0x0)) {
    uVar2 = (ulong)(strtoul(pcVar1 + 1,(char **)0x0,0x10), 0);
    return (ulong)(uVar2);
  }
  return (ulong)(0);
}


// Reference entry 11255f80; body size 30 bytes.
#line 1 "ENTRY_11255f80"

void FUN_11255f80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_1145c720(param_3,param_4,"X_#Svc%u-%x-Token",param_1,param_2);
  return;
}


// Reference entry 11257550; body size 63 bytes.
#line 1 "ENTRY_11257550"

void __fastcall FUN_11257550(int param_1)

{
  if (*(void **)(param_1 + 0x1e4) != (void *)((0x0))) {
    free(*(void **)(param_1 + 0x1e4));
    *(undefined4*)(param_1 + 0x1e4) = (undefined4)(0);
  }
  if (*(void **)(param_1 + 0x1e8) != (void *)((0x0))) {
    free(*(void **)(param_1 + 0x1e8));
    *(undefined4*)(param_1 + 0x1e8) = (undefined4)(0);
  }
  return;
}


// Reference entry 112576a0; body size 34 bytes.
#line 1 "ENTRY_112576a0"

ulong __fastcall FUN_112576a0(char *param_1)

{
  char *pcVar1;
  ulong uVar2;
  
  pcVar1 = (char *)(strchr(param_1,0x2d), 0);
  if ((char *)(pcVar1) != (char *)(0x0)) {
    uVar2 = (ulong)(strtoul(pcVar1 + 1,(char **)0x0,0x10), 0);
    return (ulong)(uVar2);
  }
  return (ulong)(0);
}


// Reference entry 11257750; body size 41 bytes.
#line 1 "ENTRY_11257750"

undefined4 __thiscall Recovered_Bulk::m_FUN_11257750(undefined1 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *param_2 = (undefined1)(0);
  if (*(int *)(param_1 + 0x1f0) != 0) {
    thunk_FUN_1145c250(param_2,*(int *)(param_1 + 0x1f0),param_3);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 11257790; body size 41 bytes.
#line 1 "ENTRY_11257790"

undefined4 __thiscall Recovered_Bulk::m_FUN_11257790(undefined1 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *param_2 = (undefined1)(0);
  if (*(int *)(param_1 + 0x1ec) != 0) {
    thunk_FUN_1145c250(param_2,*(int *)(param_1 + 0x1ec),param_3);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 112577d0; body size 52 bytes.
#line 1 "ENTRY_112577d0"

ulong FUN_112577d0(char *param_1)

{
  int iVar1;
  ulong uVar2;
  
  if ((char *)(param_1) != (char *)(0x0)) {
    iVar1 = (int)(strncmp(param_1,"SA_RINCON",9), 0);
    if (iVar1 == 0) {
      uVar2 = (ulong)(strtoul(param_1 + 9,(char **)0x0,10), 0);
      return (ulong)(uVar2);
    }
  }
  return (ulong)(0);
}


// Reference entry 112578f0; body size 60 bytes.
#line 1 "ENTRY_112578f0"

undefined4 __fastcall FUN_112578f0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (*(int *)(param_1 + 0x1ec) != 0) {
    return (undefined4)(1);
  }
  pcVar3 = (char *)((char *)(param_1 + 8));
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  if ((3 < (uint)((int)pcVar3 - (param_1 + 9))) &&
     (iVar2 = (int)(strncmp("X_#",(char *)(param_1 + 8),3), 0), iVar2 == 0)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 11258440; body size 59 bytes.
#line 1 "ENTRY_11258440"

void FUN_11258440(void)

{
  int local_c;
  undefined1 local_8 [4];
  int local_4;
  
  local_c = (int)(0);
  do {
    thunk_FUN_113d2fb0(&local_c,4);
    thunk_FUN_1145c930((uint)&local_8,0);
  } while (local_c << 8 == local_4);
  return;
}


// Reference entry 112584f0; body size 61 bytes.
#line 1 "ENTRY_112584f0"

void FUN_112584f0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0) {
    thunk_FUN_1145c720(param_3,param_4,"SA_RINCON%u_",param_1);
    return;
  }
  thunk_FUN_1145c720(param_3,param_4,"SA_RINCON%u_%s",param_1,param_2);
  return;
}


// Reference entry 11258890; body size 44 bytes.
#line 1 "ENTRY_11258890"

void __thiscall Recovered_Bulk::m_FUN_11258890(undefined4 param_2,undefined4 param_3)
{
  char *param_1 = (char *)this;
  byte bVar1;
  
  bVar1 = (byte)(*param_1 != (char)(('\0')) | 2);
  if (param_1[1] == '\0') {
    bVar1 = (byte)(*param_1 != (char)(('\0')));
  }
  thunk_FUN_1145c720(param_2,param_3,&DAT_119e0b2c,bVar1);
  return;
}


// Reference entry 11258f20; body size 52 bytes.
#line 1 "ENTRY_11258f20"

ulong __fastcall FUN_11258f20(int param_1)

{
  size_t sVar1;
  ulong uVar2;
  
  sVar1 = (size_t)(strnlen((char *)(param_1 + 4),0x23), 0);
  if ((0x19 < sVar1) && (*(char *)(param_1 + 0x1c) == ':')) {
    uVar2 = (ulong)(strtoul((char *)(param_1 + 0x1d),(char **)0x0,10), 0);
    return (ulong)(uVar2);
  }
  return (ulong)(0);
}


// Reference entry 11259530; body size 33 bytes.
#line 1 "ENTRY_11259530"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11259530(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceDiscoveryCallback);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11259e40; body size 25 bytes.
#line 1 "ENTRY_11259e40"

short __fastcall FUN_11259e40(int param_1)

{
  short sVar1;
  
  sVar1 = (short)(*(short *)(param_1 + 0x44a));
  if (sVar1 == 0) {
    sVar1 = (short)(*(short *)(param_1 + 0x446) + 0x1bb);
  }
  return (short)(sVar1);
}


// Reference entry 11259ef0; body size 24 bytes.
#line 1 "ENTRY_11259ef0"

short __fastcall FUN_11259ef0(int param_1)

{
  short sVar1;
  
  sVar1 = (short)(*(short *)(param_1 + 0x448));
  if (sVar1 == 0) {
    sVar1 = (short)(*(short *)(param_1 + 0x446) + 0x2b);
  }
  return (short)(sVar1);
}


// Reference entry 1125a370; body size 45 bytes.
#line 1 "ENTRY_1125a370"

void __fastcall FUN_1125a370(int param_1)

{
  FUN_112a9d50(param_1 + 0x84);
  *(undefined1*)(param_1 + 0x90) = (undefined1)(1);
  *(undefined4*)(param_1 + 0x94) = (undefined4)(0);
  FUN_112a9d70(param_1 + 0x84);
  return;
}





// Reference entry 1125b610; body size 28 bytes.
#line 1 "ENTRY_1125b610"

void __fastcall FUN_1125b610(int *param_1)

{
  *(undefined1 *)*param_1 = (int)(0);
  *(undefined1*)(*param_1 + 1) = (undefined1)(0);
  param_1[1] = (int)(*param_1);
  *(undefined1*)(param_1 + 3) = (undefined1)(1);
  param_1[4] = (int)(0);
  return;
}


// Reference entry 1125b8f0; body size 35 bytes.
#line 1 "ENTRY_1125b8f0"

void __fastcall FUN_1125b8f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXMLParserBase);
  thunk_FUN_112c8b80(param_1[1]);
  param_1[1] = (undefined4)(0);
  thunk_FUN_11285a90();
  return;
}


// Reference entry 1125b920; body size 58 bytes.
#line 1 "ENTRY_1125b920"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1125b920(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXMLParserBase);
  thunk_FUN_112c8b80(param_1[1]);
  param_1[1] = (undefined4)(0);
  thunk_FUN_11285a90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1125ba00; body size 22 bytes.
#line 1 "ENTRY_1125ba00"

void __thiscall Recovered_Bulk::m_FUN_1125ba00(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_112c8e00(*(undefined4 *)(param_1 + 4),param_2,param_3);
  return;
}


// Reference entry 1125bcb0; body size 43 bytes.
#line 1 "ENTRY_1125bcb0"

void FUN_1125bcb0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1145c250(&DAT_122f57d8,param_1,0x25);
  thunk_FUN_1145c250(&DAT_122f5800,param_2,0x25);
  DAT_122f57d4 = (int)(1);
  return;
}


// Reference entry 1125bcf0; body size 36 bytes.
#line 1 "ENTRY_1125bcf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1125bcf0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_TestPointHandler);
  param_1[1] = (undefined4)(param_2);
  thunk_FUN_11244d80();
  return (undefined4 *)(param_1);
}


// Reference entry 1125bd40; body size 44 bytes.
#line 1 "ENTRY_1125bd40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1125bd40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_TestPointHandler);
  thunk_FUN_11244ee0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x920);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1125bf20; body size 22 bytes.
#line 1 "ENTRY_1125bf20"

void __thiscall Recovered_Bulk::m_FUN_1125bf20(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  FUN_112aa2c0(*(undefined4 *)(param_1 + 4),param_2,param_3);
  return;
}




// Reference entry 1125
void __fastcall FUN_1125bf40(int param_1)

{
  FUN_112aa200(*(undefined4 *)(param_1 + 4),200);
  FUN_112aa1f0(*(undefined4 *)(param_1 + 4),"Content-type","text/html");
  thunk_FUN_112aa2e0(*(undefined4 *)(param_1 + 4));
  return;
}




// Reference entry 1125cec0; body size 19 bytes.
#line 1 "ENTRY_1125cec0"

void __thiscall Recovered_Bulk::m_FUN_1125cec0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  *(undefined2*)(param_2 + 1) = (undefined2)(*(undefined2 *)(param_1 + 1));
  return;
}


// Reference entry 1125cee0; body size 25 bytes.
#line 1 "ENTRY_1125cee0"

undefined4 FUN_1125cee0(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  if (param_3 < 6) {
    return (undefined4)(0);
  }
  *param_2 = (undefined4)(0);
  *(undefined2*)(param_2 + 1) = (undefined2)(0);
  return (undefined4)(1);
}


// Reference entry 1125cf00; body size 21 bytes.
#line 1 "ENTRY_1125cf00"

bool __fastcall FUN_1125cf00(char *param_1)

{
  return (bool)(((((param_1[5] != '\0' || param_1[4] != '\0') || param_1[3] != '\0') || param_1[2] != '\0') || param_1[1] != '\0') || *param_1 != (char)(('\0')));
}


// Reference entry 1125cf20; body size 19 bytes.
#line 1 "ENTRY_1125cf20"

void __thiscall Recovered_Bulk::m_FUN_1125cf20(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined2*)(param_1 + 1) = (undefined2)(*(undefined2 *)(param_2 + 1));
  return;
}


// Reference entry 1125d870; body size 59 bytes.
#line 1 "ENTRY_1125d870"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1125d870(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[6] = (undefined4)(param_2);
  param_1[7] = (undefined4)(param_3);
  *(undefined1*)(param_1 + 1) = (undefined1)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0xffffffff);
  param_1[4] = (undefined4)(0);
  *(undefined1*)(param_1 + 5) = (undefined1)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RIPNetStartListenerDevDisc);
  return (undefined4 *)(param_1);
}


// Reference entry 1125d900; body size 17 bytes.
#line 1 "ENTRY_1125d900"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1125d900(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  DAT_122f5838 = (int)(DAT_122f5838 + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 1125d9a0; body size 28 bytes.
#line 1 "ENTRY_1125d9a0"

void __fastcall FUN_1125d9a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RIPNetStartListenerBase);
  if ((*(char *)(param_1 + 5) == '\0') && (param_1[3] != -1)) {
    Ordinal_3(param_1[3]);
  }
  return;
}


// Reference entry 1125d9f0; body size 54 bytes.
#line 1 "ENTRY_1125d9f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1125d9f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RIPNetStartListenerBase);
  if ((*(char *)(param_1 + 5) == '\0') && (param_1[3] != -1)) {
    Ordinal_3(param_1[3]);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1125da40; body size 54 bytes.
#line 1 "ENTRY_1125da40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1125da40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RIPNetStartListenerBase);
  if ((*(char *)(param_1 + 5) == '\0') && (param_1[3] != -1)) {
    Ordinal_3(param_1[3]);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1125da90; body size 57 bytes.
#line 1 "ENTRY_1125da90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1125da90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RIPNetStartListenerBase);
  if ((*(char *)(param_1 + 5) == '\0') && (param_1[3] != -1)) {
    Ordinal_3(param_1[3]);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x81c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1125dae0; body size 27 bytes.
#line 1 "ENTRY_1125dae0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1125dae0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 1125fd30; body size 53 bytes.
#line 1 "ENTRY_1125fd30"

void FUN_1125fd30(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  if ((char *)(param_1) != (char *)(0x0)) {
    pcVar2 = (char *)(param_1);
    do {
      cVar1 = (char)(*pcVar2);
      pcVar2 = (char *)(pcVar2 + 1);
    } while (cVar1 != '\0');
    thunk_FUN_112c6c00(param_1,(int)pcVar2 - (int)(param_1 + 1),0);
    return;
  }
  thunk_FUN_112c6c00(0,0,0);
  return;
}


// Reference entry 112607d0; body size 26 bytes.
#line 1 "ENTRY_112607d0"

void FUN_112607d0(undefined1 param_1)

{
  if (DAT_122f583d == '\0') {
    DAT_122f583c = (int)(param_1);
    DAT_122f583d = (int)('\x01');
  }
  return;
}


// Reference entry 11260bb0; body size 18 bytes.
#line 1 "ENTRY_11260bb0"

byte __fastcall FUN_11260bb0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_112c7e70(), 0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(uVar1);
  return (byte)((byte)((uint)uVar1 >> 0x1f) ^ 1);
}


// Reference entry 11260bd0; body size 62 bytes.
#line 1 "ENTRY_11260bd0"

void __fastcall FUN_11260bd0(int param_1)

{
  char cVar1;
  
  *(undefined1*)(param_1 + 4) = (undefined1)(0);
  if (*(int *)(param_1 + 0xc) != -1) {
    Ordinal_3(*(int *)(param_1 + 0xc));
    *(undefined4*)(param_1 + 0xc) = (undefined4)(0xffffffff);
  }
  cVar1 = (char)(thunk_FUN_112611c0(), 0);
  if (cVar1 == '\0') {
    thunk_FUN_112b0270("hwmon",4,"failed to re-bind NetStart socket!");
  }
  return;
}


// Reference entry 11260f50; body size 34 bytes.
#line 1 "ENTRY_11260f50"

void __thiscall Recovered_Bulk::m_FUN_11260f50(void *param_2,size_t param_3)
{
  int param_1 = (int )this;
  *(size_t*)(param_1 + 0x818) = (size_t)(param_3);
  if (param_3 != 0) {
    memcpy((char *)(param_1 + 0x18),param_2,param_3);
  }
  return;
}


// Reference entry 11261570; body size 28 bytes.
#line 1 "ENTRY_11261570"

void FUN_11261570(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_11261ab0(param_1,param_2,0x21,param_3,&DAT_1191eafc);
  return;
}


// Reference entry 11261f10; body size 31 bytes.
#line 1 "ENTRY_11261f10"

void __fastcall FUN_11261f10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCompoundAsyncIOOperation);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RefCountBase);
  return;
}


// Reference entry 11261f40; body size 53 bytes.
#line 1 "ENTRY_11261f40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11261f40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCompoundAsyncIOOperation);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RefCountBase);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11261f90; body size 33 bytes.
#line 1 "ENTRY_11261f90"

void __fastcall FUN_11261f90(int param_1)

{
  if (((*(int *)(param_1 + 0x10) != -1) && (*(int *)(param_1 + 0x14) != 0)) &&
     ((&DAT_122f5650)[*(int *)(param_1 + 0x10)] != 0)) {
    thunk_FUN_11240cc0<>(*(int *)(param_1 + 0x14));
  }
  return;
}


// Reference entry 11261fc0; body size 24 bytes.
#line 1 "ENTRY_11261fc0"

void __thiscall Recovered_Bulk::m_FUN_11261fc0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0xc) + 4))(*(undefined4 *)(param_1 + 0x14),param_2);
  }
  return;
}


// Reference entry 11262070; body size 54 bytes.
#line 1 "ENTRY_11262070"

int __thiscall Recovered_Bulk::m_FUN_11262070(int param_2,int param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  param_1[3] = (int)(param_2);
  param_1[4] = (int)(param_3);
  if ((&DAT_122f5650)[param_3] != 0) {
    iVar1 = (int)(thunk_FUN_11241d50(param_1), 0);
    param_1[5] = (int)(iVar1);
  }
  (**(code **)(*param_1 + 0x14))(param_3);
  return (int)(param_1[5]);
}


// Reference entry 11262300; body size 21 bytes.
#line 1 "ENTRY_11262300"

undefined1 * __thiscall Recovered_Bulk::m_FUN_11262300(undefined1 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(*param_2);
  param_1[1] = (undefined1)(param_2[1]);
  return (undefined1 *)(param_1);
}


// Reference entry 11262320; body size 28 bytes.
#line 1 "ENTRY_11262320"

undefined1 * __thiscall Recovered_Bulk::m_FUN_11262320(undefined1 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(*param_2);
  param_1[1] = (undefined1)(param_2[1]);
  param_1[2] = (undefined1)(param_2[2]);
  return (undefined1 *)(param_1);
}


// Reference entry 11262460; body size 45 bytes.
#line 1 "ENTRY_11262460"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11262460(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSystemTime);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *(undefined1*)(param_1 + 5) = (undefined1)(0);
  thunk_FUN_112637d0(param_2,param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 112626c0; body size 25 bytes.
#line 1 "ENTRY_112626c0"

undefined1 * __thiscall Recovered_Bulk::m_FUN_112626c0(undefined1 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  if ((undefined1 *)(param_1) != (undefined1 *)(param_2)) {
    *param_1 = (undefined1)(*param_2);
    param_1[1] = (undefined1)(param_2[1]);
  }
  return (undefined1 *)(param_1);
}


// Reference entry 112626e0; body size 32 bytes.
#line 1 "ENTRY_112626e0"

undefined1 * __thiscall Recovered_Bulk::m_FUN_112626e0(undefined1 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  if ((undefined1 *)(param_1) != (undefined1 *)(param_2)) {
    *param_1 = (undefined1)(*param_2);
    param_1[1] = (undefined1)(param_2[1]);
    param_1[2] = (undefined1)(param_2[2]);
  }
  return (undefined1 *)(param_1);
}


// Reference entry 11262980; body size 35 bytes.
#line 1 "ENTRY_11262980"

bool __thiscall Recovered_Bulk::m_FUN_11262980(char *param_2)
{
  char *param_1 = (char *)this;
  if ((*param_1 == (char)(('\x04'))) && (*param_2 == (char)(('\x04')))) {
    return (bool)(param_1[1] == param_2[1]);
  }
  return (bool)(*param_1 == (char)(*(param_2)));
}


// Reference entry 112629b0; body size 36 bytes.
#line 1 "ENTRY_112629b0"

undefined1 __thiscall Recovered_Bulk::m_FUN_112629b0(char *param_2)
{
  char *param_1 = (char *)this;
  if (((*param_1 == (char)(*(param_2))) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 11262af0; body size 36 bytes.
#line 1 "ENTRY_11262af0"

undefined1 __thiscall Recovered_Bulk::m_FUN_11262af0(char *param_2)
{
  char *param_1 = (char *)this;
  if (((*param_1 == (char)(*(param_2))) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 11262bc0; body size 33 bytes.
#line 1 "ENTRY_11262bc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11262bc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAlarmClockListAlarms);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11262bf0; body size 33 bytes.
#line 1 "ENTRY_11262bf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11262bf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAlarmClockListAlarms);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11262c80; body size 18 bytes.
#line 1 "ENTRY_11262c80"

void __fastcall FUN_11262c80(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined1*)(param_1 + 0x14) = (undefined1)(0);
  return;
}


// Reference entry 11262ca0; body size 21 bytes.
#line 1 "ENTRY_11262ca0"

void __fastcall FUN_11262ca0(undefined8 *param_1)

{
  *param_1 = (undefined8)(0);
  *(undefined4*)(param_1 + 1) = (undefined4)(0);
  *(undefined2*)((int)param_1 + 0xc) = (undefined2)(0);
  return;
}


// Reference entry 11262cc0; body size 37 bytes.
#line 1 "ENTRY_11262cc0"

void __thiscall Recovered_Bulk::m_FUN_11262cc0(char param_2)
{
  undefined2 *param_1 = (undefined2 *)this;
  if (param_2 == '\0') {
    *(undefined4*)(param_1 + 1) = (undefined4)(0);
    *(undefined4*)(param_1 + 3) = (undefined4)(0);
    *(undefined4*)(param_1 + 5) = (undefined4)(0);
    *param_1 = (undefined2)(*param_1);
  }
  return;
}


// Reference entry 11263260; body size 54 bytes.
#line 1 "ENTRY_11263260"

void __thiscall Recovered_Bulk::m_FUN_11263260(undefined4 param_2,undefined4 param_3, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  thunk_FUN_1145c720(param_2,param_3,"%04hu-%02hu-%02hu %02hu:%02hu:%02hu", *(undefined2 *)(param_1 + 4),*(undefined2 *)(param_1 + 6), *(undefined2 *)(param_1 + 10),*(undefined2 *)(param_1 + 0xc), *(undefined2 *)(param_1 + 0xe),*(undefined2 *)(param_1 + 0x10));
  return;
}


// Reference entry 11263580; body size 42 bytes.
#line 1 "ENTRY_11263580"

bool __thiscall Recovered_Bulk::m_FUN_11263580(short *param_2)
{
  short *param_1 = (short *)this;
  undefined1 uVar1;
  
  if ((char)param_1[1] != (short)param_2[1]) {
    return (bool)(false);
  }
  if ((char)param_1[1] == '\0') {
    return (bool)(*param_1 == (short)(*(param_2)));
  }
  uVar1 = (undefined1)(thunk_FUN_11262a60<>(), 0);
  return (bool)((bool)uVar1);
}


// Reference entry 112638b0; body size 18 bytes.
#line 1 "ENTRY_112638b0"

undefined1 __fastcall FUN_112638b0(int param_1)

{
  if ((*(char *)(param_1 + 2) != '\0') && (*(char *)(param_1 + 8) != '\0')) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 11264170; body size 38 bytes.
#line 1 "ENTRY_11264170"

void __thiscall Recovered_Bulk::m_FUN_11264170(undefined4 param_2,undefined4 param_3)
{
  undefined1 *param_1 = (undefined1 *)this;
  thunk_FUN_1145c720(param_2,param_3,"%02hu:%02hu:%02hu",*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 11264450; body size 30 bytes.
#line 1 "ENTRY_11264450"

void __fastcall FUN_11264450(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0x107d1);
  *(undefined4*)(param_1 + 8) = (undefined4)(0x10000);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0xc);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined1*)(param_1 + 0x14) = (undefined1)(0);
  return;
}


// Reference entry 11264740; body size 21 bytes.
#line 1 "ENTRY_11264740"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11264740(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  *(undefined2*)(param_1 + 1) = (undefined2)(1);
  *(undefined1*)((int)param_1 + 6) = (undefined1)(1);
  return (undefined4 *)(param_1);
}


// Reference entry 11264a40; body size 19 bytes.
#line 1 "ENTRY_11264a40"

undefined4 FUN_11264a40(char *param_1)

{
  if (((char *)(param_1) != (char *)(0x0)) && (*param_1 != (char)(('\0')))) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 11264cd0; body size 31 bytes.
#line 1 "ENTRY_11264cd0"

void FUN_11264cd0(char *param_1,char param_2)

{
  char *pcVar1;
  
  if ((char *)(param_1) != (char *)(0x0)) {
    pcVar1 = (char *)(strrchr(param_1,(int)param_2), 0);
    if ((char *)(pcVar1) != (char *)(0x0)) {
      *pcVar1 = (char)('\0');
    }
  }
  return;
}


// Reference entry 112658f0; body size 19 bytes.
#line 1 "ENTRY_112658f0"

void FUN_112658f0(undefined4 param_1,undefined4 param_2)

{
  DAT_122f5d94 = (int)(param_1);
  DAT_122f5d98 = (int)(param_2);
  return;
}


// Reference entry 11266450; body size 50 bytes.
#line 1 "ENTRY_11266450"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11266450(undefined1 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11287890();
  param_1[2] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RStringBuilder);
  param_1[1] = (undefined4)(param_2);
  param_1[3] = (undefined4)(0);
  *param_2 = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 11266490; body size 47 bytes.
#line 1 "ENTRY_11266490"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11266490(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11287860();
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RStringStream);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 11266870; body size 28 bytes.
#line 1 "ENTRY_11266870"

void __fastcall FUN_11266870(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPSeekableDataProvider);
  thunk_FUN_11266700();
  thunk_FUN_112878d0();
  return;
}


// Reference entry 112668d0; body size 33 bytes.
#line 1 "ENTRY_112668d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_112668d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_ChunkLengthParser);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11266900; body size 38 bytes.
#line 1 "ENTRY_11266900"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11266900(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RChunkedSocketWriter);
  thunk_FUN_112878e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11266930; body size 38 bytes.
#line 1 "ENTRY_11266930"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11266930(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCountWritableStream);
  thunk_FUN_112878e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11266bd0; body size 35 bytes.
#line 1 "ENTRY_11266bd0"

undefined4 __thiscall Recovered_Bulk::m_FUN_11266bd0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11266700();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc318);
  }
  return (undefined4)(param_1);
}


// Reference entry 11266cd0; body size 54 bytes.
#line 1 "ENTRY_11266cd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11266cd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPSeekableDataProvider);
  thunk_FUN_11266700();
  thunk_FUN_112878d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x12348);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11266d20; body size 41 bytes.
#line 1 "ENTRY_11266d20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11266d20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSocketWriter);
  thunk_FUN_112878e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x4020);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11266d60; body size 38 bytes.
#line 1 "ENTRY_11266d60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11266d60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RStringBuilder);
  thunk_FUN_112878e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11266d90; body size 38 bytes.
#line 1 "ENTRY_11266d90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11266d90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RStringStream);
  thunk_FUN_112878c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11266dc0; body size 31 bytes.
#line 1 "ENTRY_11266dc0"

void FUN_11266dc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_11295de0(param_1,param_2,param_3,param_4,DAT_122f5de0);
  return;
}


// Reference entry 11268b60; body size 40 bytes.
#line 1 "ENTRY_11268b60"

undefined4 __thiscall Recovered_Bulk::m_FUN_11268b60(undefined4 *param_2)
{
  int param_1 = (int )this;
  if ((*(char *)(param_1 + 0x44b4) != '\0') && (*(char *)(param_1 + 0x4a8) == '\0')) {
    *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x44b8));
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 11268fa0; body size 27 bytes.
#line 1 "ENTRY_11268fa0"

int __thiscall Recovered_Bulk::m_FUN_11268fa0(char param_2)
{
  int param_1 = (int )this;
  if (param_2 != '\0') {
    return (int)(0);
  }
  return (int)(*(int *)(param_1 + 0x44ec) - *(int *)(param_1 + 0x44e8));
}


// Reference entry 11269ac0; body size 51 bytes.
#line 1 "ENTRY_11269ac0"

void __thiscall Recovered_Bulk::m_FUN_11269ac0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)
{
  int param_1 = (int )this;
  thunk_FUN_1106a8d0(param_1 + 4,param_2,0x2001);
  thunk_FUN_1126b0a0(param_3,param_4,param_5,param_6);
  return;
}


// Reference entry 11269b00; body size 45 bytes.
#line 1 "ENTRY_11269b00"

void __stdcall FUN_11269b00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  thunk_FUN_11269bc0(param_1,param_2,param_3,param_4,0,0,param_5,"DELETE",param_6,param_7);
  return;
}


// Reference entry 11269b40; body size 45 bytes.
#line 1 "ENTRY_11269b40"

void __stdcall FUN_11269b40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  thunk_FUN_11269bc0(param_1,param_2,param_3,param_4,0,0,param_5,&DAT_11892e78,param_6,param_7);
  return;
}


// Reference entry 11269b80; body size 45 bytes.
#line 1 "ENTRY_11269b80"

void __stdcall FUN_11269b80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  thunk_FUN_11269bc0(param_1,param_2,param_3,param_4,0,0,param_5,&DAT_1189dca4,param_6,param_7);
  return;
}


// Reference entry 1126b940; body size 22 bytes.
#line 1 "ENTRY_1126b940"

undefined4 __thiscall Recovered_Bulk::m_FUN_1126b940(uint param_2, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  if ((uint)(param_2) <= *(uint *)(param_1 + 8)) {
    *(uint*)(param_1 + 0xc) = (uint)(param_2);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 1126bf20; body size 43 bytes.
#line 1 "ENTRY_1126bf20"

void FUN_1126bf20(void)

{
  thunk_FUN_112960d0();
  thunk_FUN_11297ec0();
  thunk_FUN_11408fc0();
  thunk_FUN_112ef180();
  DAT_122f5de0 = (int)(0);
  thunk_FUN_11248330();
  FUN_1007d574();
  return;
}


// Reference entry 1126bf60; body size 17 bytes.
#line 1 "ENTRY_1126bf60"

void __fastcall FUN_1126bf60(int *param_1)

{
                    
                    
  (**(code **)(*param_1 + 0xc))();
  return;
}


// Reference entry 1126bf80; body size 23 bytes.
#line 1 "ENTRY_1126bf80"

undefined4 __thiscall Recovered_Bulk::m_FUN_1126bf80(int param_2, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)(*(int *)(param_1 + 0xc) + param_2);
  uVar1 = (uint)(*(uint *)(param_1 + 8));
  if ((uint)(uVar2) <= *(uint *)(param_1 + 8)) {
    uVar1 = (uint)(uVar2);
  }
  *(uint*)(param_1 + 0xc) = (uint)(uVar1);
  return (undefined4)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 1126ca20; body size 58 bytes.
#line 1 "ENTRY_1126ca20"

uint __thiscall Recovered_Bulk::m_FUN_1126ca20(void *param_2,uint param_3)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  uint in_EAX;
  
  if ((uint)(param_3) < *(uint *)(param_1 + 8)) {
    memcpy(*(void **)(param_1 + 4),param_2,param_3);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + param_3);
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 4), 0);
    *(int*)(param_1 + 8) = (int)(*(int *)(param_1 + 8) - param_3);
    *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + param_3);
    *puVar1 = (undefined1)(0);
    return (uint)(((uint)((int3)((uint)puVar1 >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1126cb20; body size 17 bytes.
#line 1 "ENTRY_1126cb20"

void __fastcall FUN_1126cb20(int param_1)

{
                    
                    
  (**(code **)(*(int *)(param_1 + 0x8554) + 4))();
  return;
}


// Reference entry 1126cb40; body size 53 bytes.
#line 1 "ENTRY_1126cb40"

undefined4 __thiscall Recovered_Bulk::m_FUN_1126cb40(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  
  if (param_1[0x215a] == 0) {
    cVar1 = (char)((**(code **)(*param_1 + 0x48))(param_2,param_3), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
    param_1[0x215a] = (int)(-0x7ffffff9);
  }
  return (undefined4)(0);
}


// Reference entry 1126d350; body size 57 bytes.
#line 1 "ENTRY_1126d350"

void __stdcall FUN_1126d350(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_1126d350(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x38);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 1126d3a0; body size 59 bytes.
#line 1 "ENTRY_1126d3a0"

int __thiscall Recovered_Bulk::m_FUN_1126d3a0(uint *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_1126d6d0((uint)&local_c,param_2);
  if (((*(char *)(local_4 + 0xd) != '\0') || ((uint)(*param_2) < *(uint *)(local_4 + 0x10))) ||
     (((uint)(*param_2) == *(uint *)(local_4 + 0x10) && ((uint)(param_2[1]) < *(uint *)(local_4 + 0x14))))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 1126dd90; body size 48 bytes.
#line 1 "ENTRY_1126dd90"

undefined4 * __fastcall FUN_1126dd90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 1126e270; body size 19 bytes.
#line 1 "ENTRY_1126e270"

void __fastcall FUN_1126e270(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x38);
  }
  return;
}


// Reference entry 1126e750; body size 58 bytes.
#line 1 "ENTRY_1126e750"

int FUN_1126e750(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint3 uVar2;
  
  uVar1 = (uint)(*param_1);
  uVar2 = (uint3)((uint3)(uVar1 >> 8));
  if ((uint)(uVar1) < *param_2) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  if ((uint)(uVar1) == *param_2) {
    return (int)(((uint)((int3)(param_1[1] >> 8)) << 8 | (uint)(param_1[1] < param_2[1])));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 1126e7b0; body size 32 bytes.
#line 1 "ENTRY_1126e7b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1126e7b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1126e330();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x7c);
  }
  return (undefined4)(param_1);
}


// Reference entry 1126e7e0; body size 27 bytes.
#line 1 "ENTRY_1126e7e0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1126e7e0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}


// Reference entry 1126e840; body size 25 bytes.
#line 1 "ENTRY_1126e840"

void __fastcall FUN_1126e840(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x38), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 1126efa0; body size 30 bytes.
#line 1 "ENTRY_1126efa0"

int FUN_1126efa0(int param_1)

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


// Reference entry 1126efd0; body size 31 bytes.
#line 1 "ENTRY_1126efd0"

int * FUN_1126efd0(int *param_1)

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


// Reference entry 1126f680; body size 19 bytes.
#line 1 "ENTRY_1126f680"

void __stdcall FUN_1126f680(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1145c1b0(param_1,param_2);
  return;
}


// Reference entry 1126fcc0; body size 47 bytes.
#line 1 "ENTRY_1126fcc0"

void __fastcall FUN_1126fcc0(int param_1)

{
  FUN_112a9d50(param_1 + 0x18);
  *(undefined1*)(param_1 + 0x60) = (undefined1)(1);
  FUN_112aa350(param_1 + 0x20);
  FUN_112a9d70(param_1 + 0x18);
  FUN_112a9e10(param_1 + 0x48);
  return;
}




// Reference entry 112702b0; body size 40 bytes.
#line 1 "ENTRY_112702b0"

void __thiscall Recovered_Bulk::m_FUN_112702b0(char *param_2)
{
  int param_1 = (int )this;
  if (((char *)(param_2) != (char *)(0x0)) && (*param_2 != (char)(('\0')))) {
    *(char**)(param_1 + 0x14) = (char *)(param_2);
  }
  thunk_FUN_112a9da0(param_1 + 0x48,param_2,LAB_1006b14e,param_1,0);
  return;
}


// Reference entry 11270930; body size 45 bytes.
#line 1 "ENTRY_11270930"

void __fastcall FUN_11270930(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_112a7f50(param_1 + 0x18), 0);
  thunk_FUN_112a7c70(param_1 + 0x20);
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x18);
  }
  return;
}


// Reference entry 11270ae0; body size 22 bytes.
#line 1 "ENTRY_11270ae0"

void __fastcall FUN_11270ae0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMSearchNotifyHandler);
  if (param_1[3] != -1) {
    Ordinal_3(param_1[3]);
  }
  return;
}


// Reference entry 11270b00; body size 48 bytes.
#line 1 "ENTRY_11270b00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11270b00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMSearchNotifyHandler);
  if (param_1[3] != -1) {
    Ordinal_3(param_1[3]);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x34);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11270b40; body size 48 bytes.
#line 1 "ENTRY_11270b40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11270b40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMSearchNotifyHandler);
  if (param_1[3] != -1) {
    Ordinal_3(param_1[3]);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11272130; body size 19 bytes.
#line 1 "ENTRY_11272130"

void FUN_11272130(undefined4 param_1,undefined4 param_2)

{
  DAT_122f5df4 = (int)(param_1);
  DAT_122f5df8 = (int)(param_2);
  return;
}


// Reference entry 11272150; body size 19 bytes.
#line 1 "ENTRY_11272150"

void FUN_11272150(undefined4 param_1,undefined4 param_2)

{
  DAT_122f5dfc = (int)(param_1);
  DAT_122f5e00 = (int)(param_2);
  return;
}


// Reference entry 11272c50; body size 47 bytes.
#line 1 "ENTRY_11272c50"

void __fastcall FUN_11272c50(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(*(int **)(param_1 + 4), 0);
  if ((int *)(piVar2) != (int *)(0x0)) {
    LOCK();
    iVar3 = (int)(piVar2[1] + -1);
    piVar2[1] = (int)(iVar3);
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*piVar2)();
      LOCK();
      piVar1 = (int *)(piVar2 + 2);
      iVar3 = (int)(*piVar1);
      *piVar1 = (int)(*piVar1 + -1);
      UNLOCK();
      if (iVar3 == 1) {
                    
                    
        (**(code **)(*piVar2 + 4))();
        return;
      }
    }
  }
  return;
}


// Reference entry 11272d50; body size 33 bytes.
#line 1 "ENTRY_11272d50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11272d50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Ref_count_obj2);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11273130; body size 22 bytes.
#line 1 "ENTRY_11273130"

void FUN_11273130(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1145c720(param_1,param_2,&DAT_118872c0);
  return;
}


// Reference entry 11273960; body size 58 bytes.
#line 1 "ENTRY_11273960"

void FUN_11273960(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (char)(*param_1);
  if (cVar1 == '\0') {
    *param_2 = (char)('\0');
    return;
  }
  iVar2 = (int)(0);
  do {
    if (param_3 + -1 <= iVar2) break;
    if ((cVar1 != '.') && (cVar1 != '-')) {
      *param_2 = (char)(cVar1);
      param_2 = (char *)(param_2 + 1);
      iVar2 = (int)(iVar2 + 1);
    }
    cVar1 = (char)(param_1[1]);
    param_1 = (char *)(param_1 + 1);
  } while (cVar1 != '\0');
  *param_2 = (char)('\0');
  return;
}


// Reference entry 112739b0; body size 28 bytes.
#line 1 "ENTRY_112739b0"

void FUN_112739b0(uint *param_1,int param_2)

{
  *param_1 = (uint)((uint)*(byte *)(param_2 + 1));
  param_1[1] = (uint)((uint)*(byte *)(param_2 + 2));
  param_1[2] = (uint)(*(uint *)(param_2 + 4));
  return;
}


// Reference entry 112739e0; body size 51 bytes.
#line 1 "ENTRY_112739e0"

void FUN_112739e0(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)(strchr(param_1,0x2d), 0);
  if ((char *)(pcVar1) != (char *)(0x0)) {
    pcVar2 = (char *)(pcVar1 + 6);
    while ((pcVar1 = (char *)(pcVar1 + 1),(char *)( pcVar1) < (char *)(pcVar2) && ((byte)(*pcVar1 - 0x30U) < 10))) {
      *pcVar1 = (char)('0');
    }
  }
  return;
}


// Reference entry 11273ef0; body size 50 bytes.
#line 1 "ENTRY_11273ef0"

/* WARNING: Switch with 1 destination removed at 0x11273f0c : 6 cases all go to same destination */ void __thiscall Recovered_Bulk::m_FUN_11273ef0(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  undefined8 *param_1 = (undefined8 *)this;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = (undefined4)((undefined4)*param_1);
  uStack_4 = (undefined4)((undefined4)((ulonglong)*param_1 >> 0x20));
  *param_2 = (undefined4)(local_8);
  param_2[1] = (undefined4)(uStack_4);
  return;
}


// Reference entry 11273f80; body size 30 bytes.
#line 1 "ENTRY_11273f80"

undefined4 * __fastcall FUN_11273f80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKeyValueBase);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 11274040; body size 56 bytes.
#line 1 "ENTRY_11274040"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11274040(undefined1 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *(undefined1*)(param_1 + 0x405) = (undefined1)(param_2);
  param_1[2] = (undefined4)(param_1 + 5);
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXmlBuffer);
  param_1[3] = (undefined4)(0x1000);
  param_1[4] = (undefined4)(0);
  *(undefined1*)(param_1 + 5) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 112740e0; body size 51 bytes.
#line 1 "ENTRY_112740e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_112740e0(undefined1 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[3] = (undefined4)(param_3);
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXmlStaticBuffer);
  param_1[2] = (undefined4)(param_2);
  param_1[4] = (undefined4)(0);
  *(undefined1*)(param_1 + 5) = (undefined1)(0);
  *param_2 = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 11274120; body size 16 bytes.
#line 1 "ENTRY_11274120"

undefined4 * __fastcall FUN_11274120(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXmlWriter);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 11274140; body size 30 bytes.
#line 1 "ENTRY_11274140"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11274140(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[2] = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RxmlWritableStreamWriter);
  return (undefined4 *)(param_1);
}


// Reference entry 11274170; body size 36 bytes.
#line 1 "ENTRY_11274170"

void __fastcall FUN_11274170(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXmlBuffer);
  if ((undefined4 *)param_1[2] != (undefined4 *)((param_1) + 5)) {
    free((undefined4 *)param_1[2]);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXmlWriter);
  return;
}


// Reference entry 112741e0; body size 61 bytes.
#line 1 "ENTRY_112741e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_112741e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXmlBuffer);
  if ((undefined4 *)param_1[2] != (undefined4 *)((param_1) + 5)) {
    free((undefined4 *)param_1[2]);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXmlWriter);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1018);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11274230; body size 33 bytes.
#line 1 "ENTRY_11274230"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11274230(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXmlWriter);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11274260; body size 33 bytes.
#line 1 "ENTRY_11274260"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11274260(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXmlWriter);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11274290; body size 33 bytes.
#line 1 "ENTRY_11274290"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11274290(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXmlWriter);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 112742c0; body size 33 bytes.
#line 1 "ENTRY_112742c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_112742c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXmlWriter);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 112742f0; body size 58 bytes.
#line 1 "ENTRY_112742f0"

void __fastcall FUN_112742f0(int param_1)

{
  undefined1 *puVar1;
  undefined1 *_Memory;
  
  _Memory = (undefined1 *)(*(undefined1 **)(param_1 + 8), 0);
  puVar1 = (undefined1 *)((undefined1 *)(param_1 + 0x14));
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0x1000);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  if ((undefined1 *)((_Memory)) != (undefined1 *)(puVar1)) {
    free(_Memory);
    *(undefined1**)(param_1 + 8) = (undefined1 *)(puVar1);
    puVar1[*(int*)(param_1 + 0x10)] = (int)((undefined1)(0));
    return;
  }
  *_Memory = (undefined1)(0);
  return;
}


// Reference entry 11274540; body size 41 bytes.
#line 1 "ENTRY_11274540"

void __thiscall Recovered_Bulk::m_FUN_11274540(char *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  (**(code **)(*param_1 + 8))(param_2,(int)pcVar2 - (int)(param_2 + 1));
  return;
}


// Reference entry 112747a0; body size 24 bytes.
#line 1 "ENTRY_112747a0"

void __stdcall FUN_112747a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_112743a0(param_1,param_2,param_3,1,0);
  return;
}


// Reference entry 11274a70; body size 41 bytes.
#line 1 "ENTRY_11274a70"

void __thiscall Recovered_Bulk::m_FUN_11274a70(char *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  (**(code **)(*param_1 + 4))(param_2,(int)pcVar2 - (int)(param_2 + 1));
  return;
}


// Reference entry 11274b30; body size 24 bytes.
#line 1 "ENTRY_11274b30"

void __stdcall FUN_11274b30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_112743a0(param_1,param_2,param_3,0,0);
  return;
}


// Reference entry 11275f20; body size 24 bytes.
#line 1 "ENTRY_11275f20"

void __thiscall Recovered_Bulk::m_FUN_11275f20(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x38) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(param_4);
  return;
}


// Reference entry 112765b0; body size 48 bytes.
#line 1 "ENTRY_112765b0"

void __fastcall FUN_112765b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportFileLoaderCB);
  param_1[0x14a] = (undefined4)((uint)&ghidra_vftable_RReportCategoryInfo);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RReportUploaderInfo);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RReportFileParserCB);
  FUN_1003d5d7();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportFileParserCB);
  return;
}


// Reference entry 11276620; body size 36 bytes.
#line 1 "ENTRY_11276620"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11276620(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportCategoryInfo);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x188);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 112766b0; body size 38 bytes.
#line 1 "ENTRY_112766b0"



// Reference entry 11276710; body size 36 bytes.
#line 1 "ENTRY_11276710"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11276710(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportUploaderInfo);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11276dd0; body size 62 bytes.
#line 1 "ENTRY_11276dd0"

void __thiscall Recovered_Bulk::m_FUN_11276dd0(int param_2,int param_3)
{
  int param_1 = (int )this;
  if (param_2 != 0) {
    thunk_FUN_1145c250(param_1 + 0x20,param_2,0x81);
  }
  if (param_3 != 0) {
    thunk_FUN_1145c250(param_1 + 0xa1,param_3,0x81);
  }
  return;
}


// Reference entry 11276e20; body size 36 bytes.
#line 1 "ENTRY_11276e20"

void __fastcall FUN_11276e20(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_1 + 0x528);
  *(undefined2*)(param_1 + 0x52c) = (undefined2)(0);
  *(undefined1*)(param_1 + 0x62e) = (undefined1)(0);
  return;
}


// Reference entry 11276e60; body size 45 bytes.
#line 1 "ENTRY_11276e60"

void __fastcall FUN_11276e60(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x10))(param_1 + 0x1c);
  *(undefined1*)(param_1 + 0x20) = (undefined1)(0);
  *(undefined1*)(param_1 + 0xa1) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x122) = (undefined1)(0);
  *(undefined4*)(param_1 + 0x524) = (undefined4)(0);
  return;
}


// Reference entry 11277f20; body size 27 bytes.
#line 1 "ENTRY_11277f20"

undefined4 __thiscall Recovered_Bulk::m_FUN_11277f20(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}


// Reference entry 11277f50; body size 33 bytes.
#line 1 "ENTRY_11277f50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11277f50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportFileLoaderCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11277f80; body size 43 bytes.
#line 1 "ENTRY_11277f80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11277f80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)((uint)&ghidra_vftable_RReportManager);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportFileLoaderCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x148);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11277fc0; body size 52 bytes.
#line 1 "ENTRY_11277fc0"

char __fastcall FUN_11277fc0(int param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(*(int *)(param_1 + 0x118) != 0);
  if (bVar1) {
    thunk_FUN_112752d0();
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
    thunk_FUN_112752d0();
    return (char)(bVar1 + '\x01');
  }
  return (char)(bVar1);
}


// Reference entry 11278180; body size 32 bytes.
#line 1 "ENTRY_11278180"

void __fastcall FUN_11278180(int param_1)

{
  thunk_FUN_112b0270("reportmgr",4,"reporting xml configuration format error");
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0x78);
  return;
}


// Reference entry 11278b20; body size 40 bytes.
#line 1 "ENTRY_11278b20"

void __thiscall Recovered_Bulk::m_FUN_11278b20(char *param_2)
{
  int param_1 = (int )this; int stack0xfffffffc;
 try {
  int iVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 unaff_EDI;
  void *pvStack_10;
  undefined1 *puStack_c;
  char *pcStack_8;
  
  if (*(int *)(param_1 + 0x118) != 0) {
    pcStack_8 = (char *)(param_2);
    puStack_c = (undefined1 *)((undefined1 *)0x11278b36);
    thunk_FUN_11275f40<>();
  }
  if (*(int *)(param_1 + 0x11c) == 0) {
    return;
  }
  pcStack_8 = (char *)((char *)0xffffffff);

  iVar1 = (int)(*(int *)(param_1 + 0x11c) + 0x164);
  cVar3 = (char)(thunk_FUN_112a7f50(iVar1,DAT_12126b84 ^ (uint)&stack0xfffffffc,unaff_EDI), 0);
  pcStack_8 = (char *)((char *)0x0);
  pcVar5 = (char *)("");
  if ((char *)(param_2) != (char *)(0x0)) {
    pcVar5 = (char *)(param_2);
  }
  pcVar4 = (char *)(pcVar5);
  do {
    cVar2 = (char)(*pcVar4);
    pcVar4 = (char *)(pcVar4 + 1);
  } while (cVar2 != '\0');
  thunk_FUN_1012d130(pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  if (cVar3 != '\0') {
    thunk_FUN_112a8010(iVar1);
  }

  return;

 } catch (...) { }
}


// Reference entry 11278b70; body size 63 bytes.
#line 1 "ENTRY_11278b70"

char __fastcall FUN_11278b70(int param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(*(int *)(param_1 + 0x118) != 0);
  if (bVar1) {
    thunk_FUN_11276000(param_1 + 0x121);
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
    thunk_FUN_11276000(param_1 + 0x121);
    return (char)(bVar1 + '\x01');
  }
  return (char)(bVar1);
}


// Reference entry 11279400; body size 18 bytes.
#line 1 "ENTRY_11279400"

void __fastcall FUN_11279400(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,8);
  }
  return;
}


// Reference entry 11279580; body size 44 bytes.
#line 1 "ENTRY_11279580"

int * __thiscall Recovered_Bulk::m_FUN_11279580(byte param_2)
{
  int *param_1 = (int *)this;
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,8);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (int *)(param_1);
}


// Reference entry 11279650; body size 33 bytes.
#line 1 "ENTRY_11279650"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11279650(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportCategoryStore);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11279b70; body size 56 bytes.
#line 1 "ENTRY_11279b70"

void __fastcall FUN_11279b70(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  piVar2 = (int *)((int *)*param_1);
  if ((int *)((piVar2)) != (int *)(piVar1)) {
    do {
      if (*piVar2 != (int)((0))) {
        thunk_FUN_1148a50e(*piVar2,8);
      }
      piVar2 = (int *)(piVar2 + 1);
    } while ((int *)((piVar2)) != (int *)(piVar1));
    param_1[1] = (int)(*param_1);
    return;
  }
  param_1[1] = (int)((int)piVar2);
  return;
}


// Reference entry 11279dd0; body size 57 bytes.
#line 1 "ENTRY_11279dd0"

void __fastcall FUN_11279dd0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x6c), 0);
  piVar2 = (int *)(*(int **)(param_1 + 0x68), 0);
  if ((int *)((piVar2)) != (int *)(piVar1)) {
    do {
      if (*piVar2 != (int)((0))) {
        thunk_FUN_1148a50e(*piVar2,8);
      }
      piVar2 = (int *)(piVar2 + 1);
    } while ((int *)((piVar2)) != (int *)(piVar1));
    *(undefined4*)(param_1 + 0x6c) = (undefined4)(*(undefined4 *)(param_1 + 0x68));
    return;
  }
  *(int**)(param_1 + 0x6c) = (int *)(piVar2);
  return;
}


// Reference entry 11279fe0; body size 43 bytes.
#line 1 "ENTRY_11279fe0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_11279fe0(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = (undefined8)(_UNK_119d7b28);
  uVar1 = (undefined8)(DAT_119d7b20);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(1);
  *(undefined8*)(param_1 + 2) = (undefined8)(uVar1);
  *(undefined8*)(param_1 + 4) = (undefined8)(uVar2);
  *(undefined8*)(param_1 + 6) = (undefined8)(uVar1);
  *(undefined8*)(param_1 + 8) = (undefined8)(uVar2);
  *(undefined8*)(param_1 + 10) = (undefined8)(uVar1);
  param_1[0xc] = (undefined4)(0xffffffff);
  return (undefined4 *)(param_1);
}


// Reference entry 1127a220; body size 31 bytes.
#line 1 "ENTRY_1127a220"

undefined * FUN_1127a220(uint param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0x12) {
    return (undefined *)((&PTR_DAT_12120e30)[param_1]);
  }
  puVar1 = (undefined *)(&DAT_1194bf40);
  if (param_1 != 0xffffffff) {
    puVar1 = (undefined *)((undefined *)0x0);
  }
  return (undefined *)(puVar1);
}


// Reference entry 1127a280; body size 37 bytes.
#line 1 "ENTRY_1127a280"

undefined1 __thiscall Recovered_Bulk::m_FUN_1127a280(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(0);
  do {
    if (*(int *)(param_1 + uVar1 * 4) == (int)(param_2)) {
      return (undefined1)(1);
    }
    uVar1 = (uint)(uVar1 + 1);
  } while (uVar1 < 0xd);
  return (undefined1)(0);
}


// Reference entry 1127a400; body size 18 bytes.
#line 1 "ENTRY_1127a400"

int __thiscall Recovered_Bulk::m_FUN_1127a400(int param_2)
{
  int param_1 = (int )this;
  return (int)(param_2 * 0x50 + param_1 + 8);
}


// Reference entry 1127a510; body size 31 bytes.
#line 1 "ENTRY_1127a510"

undefined1 * __thiscall Recovered_Bulk::m_FUN_1127a510(uint param_2)
{
  int param_1 = (int )this;
  if (*(uint *)(param_1 + 4) <= (uint)(param_2)) {
    return (undefined1 *)(&DAT_1186d2ee);
  }
  return (undefined1 *)((undefined1 *)(param_2 * 0x50 + 0x3c + param_1));
}


// Reference entry 1127afa0; body size 60 bytes.
#line 1 "ENTRY_1127afa0"

undefined1 __thiscall Recovered_Bulk::m_FUN_1127afa0(undefined4 *param_2,int param_3)
{
  undefined1 *param_1 = (undefined1 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (undefined4)(param_2[1]);
  uVar2 = (undefined4)(param_2[2]);
  uVar3 = (undefined4)(param_2[3]);
  *(undefined4*)(param_1 + param_3 * 0x50 + 8) = (undefined4)(*param_2);
  *(undefined4*)(param_1 + param_3 * 0x50 + 0xc) = (undefined4)(uVar1);
  *(undefined4*)(param_1 + param_3 * 0x50 + 0x10) = (undefined4)(uVar2);
  *(undefined4*)(param_1 + param_3 * 0x50 + 0x14) = (undefined4)(uVar3);
  uVar1 = (undefined4)(param_2[5]);
  uVar2 = (undefined4)(param_2[6]);
  uVar3 = (undefined4)(param_2[7]);
  *(undefined4*)(param_1 + param_3 * 0x50 + 0x18) = (undefined4)(param_2[4]);
  *(undefined4*)(param_1 + param_3 * 0x50 + 0x1c) = (undefined4)(uVar1);
  *(undefined4*)(param_1 + param_3 * 0x50 + 0x20) = (undefined4)(uVar2);
  *(undefined4*)(param_1 + param_3 * 0x50 + 0x24) = (undefined4)(uVar3);
  uVar1 = (undefined4)(param_2[9]);
  uVar2 = (undefined4)(param_2[10]);
  uVar3 = (undefined4)(param_2[0xb]);
  *(undefined4*)(param_1 + param_3 * 0x50 + 0x28) = (undefined4)(param_2[8]);
  *(undefined4*)(param_1 + param_3 * 0x50 + 0x2c) = (undefined4)(uVar1);
  *(undefined4*)(param_1 + param_3 * 0x50 + 0x30) = (undefined4)(uVar2);
  *(undefined4*)(param_1 + param_3 * 0x50 + 0x34) = (undefined4)(uVar3);
  uVar1 = (undefined4)(param_2[0xd]);
  uVar2 = (undefined4)(param_2[0xe]);
  uVar3 = (undefined4)(param_2[0xf]);
  *(undefined4*)(param_1 + param_3 * 0x50 + 0x38) = (undefined4)(param_2[0xc]);
  *(undefined4*)(param_1 + param_3 * 0x50 + 0x3c) = (undefined4)(uVar1);
  *(undefined4*)(param_1 + param_3 * 0x50 + 0x40) = (undefined4)(uVar2);
  *(undefined4*)(param_1 + param_3 * 0x50 + 0x44) = (undefined4)(uVar3);
  uVar1 = (undefined4)(param_2[0x11]);
  uVar2 = (undefined4)(param_2[0x12]);
  uVar3 = (undefined4)(param_2[0x13]);
  *(undefined4*)(param_1 + param_3 * 0x50 + 0x48) = (undefined4)(param_2[0x10]);
  *(undefined4*)(param_1 + param_3 * 0x50 + 0x4c) = (undefined4)(uVar1);
  *(undefined4*)(param_1 + param_3 * 0x50 + 0x50) = (undefined4)(uVar2);
  *(undefined4*)(param_1 + param_3 * 0x50 + 0x54) = (undefined4)(uVar3);
  return (undefined1)(*param_1);
}


// Reference entry 1127b030; body size 57 bytes.
#line 1 "ENTRY_1127b030"

void __thiscall Recovered_Bulk::m_FUN_1127b030(char *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char *pcVar1;
  char *pcVar2;
  
  thunk_FUN_1145c250(param_1 + 0x34,param_3,0x19);
  pcVar1 = (char *)(param_2);
  do {
    pcVar2 = (char *)(pcVar1);
    pcVar1 = (char *)(pcVar2 + 1);
  } while (*pcVar2 != (char)(('\0')));
  thunk_FUN_1127ac70(param_2,pcVar2);
  return;
}


// Reference entry 1127c4b0; body size 18 bytes.
#line 1 "ENTRY_1127c4b0"

void __fastcall FUN_1127c4b0(int param_1)

{
  thunk_FUN_1127a510(*(int *)(param_1 + 0x508) == 0);
  return;
}


// Reference entry 1127c6d0; body size 39 bytes.
#line 1 "ENTRY_1127c6d0"

undefined1 * FUN_1127c6d0(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = (int)(thunk_FUN_1127c4e0(3,param_1), 0);
  if (-1 < iVar1) {
    puVar2 = (undefined1 *)((undefined1 *)thunk_FUN_1127a510(iVar1), 0);
    return (undefined1 *)(puVar2);
  }
  return (undefined1 *)(&DAT_1186d2ee);
}


// Reference entry 1127cc30; body size 18 bytes.
#line 1 "ENTRY_1127cc30"

void __stdcall FUN_1127cc30(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{ int stack0x00000004; int stack0x00000008;
 try {
  thunk_FUN_1127bbb0<>(&stack0x00000004,&stack0x00000008);
  return;

 } catch (...) { }
}


// Reference entry 1127ccf0; body size 28 bytes.
#line 1 "ENTRY_1127ccf0"

undefined4 FUN_1127ccf0(int param_1,int param_2)

{
  if (((param_1 == 0x2b) && (param_2 != 0)) && (param_2 != 0xc)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 1127d050; body size 45 bytes.
#line 1 "ENTRY_1127d050"

undefined4 * __fastcall FUN_1127d050(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  *(undefined1*)((int)param_1 + 0x84b) = (undefined1)(0);
  *(undefined1*)(param_1 + 2) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0x49) = (undefined1)(0);
  param_1[0x223] = (undefined4)(0);
  *(undefined1*)((int)param_1 + 0x44a) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1127d300; body size 38 bytes.
#line 1 "ENTRY_1127d300"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1127d300(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpdateItemParserCallback);
  FUN_1125b8f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}




// Reference entry 1127d360; body size 33 bytes.
#line 1 "ENTRY_1127d360"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1127d360(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpdateItemParserCallback);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1127d390; body size 33 bytes.
#line 1 "ENTRY_1127d390"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1127d390(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpdateItemParserCallback);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1127d780; body size 36 bytes.
#line 1 "ENTRY_1127d780"

uint * __thiscall Recovered_Bulk::m_FUN_1127d780(uint param_2)
{
  uint *param_1 = (uint *)this;
  uint *puVar1;
  uint uVar2;
  
  uVar2 = (uint)(0);
  if (*param_1 != (uint)((0))) {
    puVar1 = (uint *)(param_1 + 1);
    do {
      if (*puVar1 == (uint)((param_2))) {
        return (uint *)(puVar1);
      }
      uVar2 = (uint)(uVar2 + 1);
      puVar1 = (uint *)(puVar1 + 0x224);
    } while ((uint)(uVar2) < *param_1);
  }
  return (uint *)((uint *)0x0);
}


// Reference entry 1127dee0; body size 37 bytes.
#line 1 "ENTRY_1127dee0"

void __fastcall FUN_1127dee0(int param_1)

{
  *(undefined1*)(param_1 + 8) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x49) = (undefined1)(0);
  *(undefined4*)(param_1 + 0x88c) = (undefined4)(0);
  *(undefined1*)(param_1 + 0x44a) = (undefined1)(0);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined1*)(param_1 + 0x84b) = (undefined1)(0);
  return;
}


// Reference entry 1127e380; body size 40 bytes.
#line 1 "ENTRY_1127e380"

char * FUN_1127e380(int param_1)

{
  if (param_1 == 0) {
    return (char *)("");
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return (char *)((char *)0x0);
    }
    return (char *)("RadioList");
  }
  return (char *)("Software");
}


// Reference entry 1127e3d0; body size 26 bytes.
#line 1 "ENTRY_1127e3d0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1127e3d0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1127fa70(param_2,param_3,param_4);
  return (undefined4)(param_1);
}


// Reference entry 1127e3f0; body size 33 bytes.
#line 1 "ENTRY_1127e3f0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1127e3f0(int param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1127fa70(param_2 + 0x49,param_2 + 8,param_2 + 0x44a);
  return (undefined4)(param_1);
}


// Reference entry 1127e420; body size 27 bytes.
#line 1 "ENTRY_1127e420"

undefined4 __fastcall FUN_1127e420(undefined4 param_1)

{
  thunk_FUN_1127fa70(&DAT_1186d2ee,&DAT_1186d2ee,&DAT_1186d2ee);
  return (undefined4)(param_1);
}


// Reference entry 1127e630; body size 32 bytes.
#line 1 "ENTRY_1127e630"

undefined4 __thiscall Recovered_Bulk::m_FUN_1127e630(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1129b3f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4)(param_1);
}


// Reference entry 1127e660; body size 41 bytes.
#line 1 "ENTRY_1127e660"



// Reference entry 11280230; body size 49 bytes.
#line 1 "ENTRY_11280230"

void __thiscall Recovered_Bulk::m_FUN_11280230(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_112b0270("updsched",10,"manifest: Setting base version=%s",param_2);
  thunk_FUN_1145c250(param_1 + 0x401,param_2,0x41);
  return;
}


// Reference entry 112802f0; body size 38 bytes.
#line 1 "ENTRY_112802f0"

void __thiscall Recovered_Bulk::m_FUN_112802f0(int param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1127fa70(param_2 + 0x49,param_2 + 8,param_2 + 0x44a);
  *(undefined1*)(param_1 + 0xd0c) = (undefined1)(1);
  return;
}


// Reference entry 11280320; body size 22 bytes.
#line 1 "ENTRY_11280320"

void __stdcall FUN_11280320(undefined4 param_1)

{
  thunk_FUN_1127fa70(&DAT_1186d2ee,&DAT_1186d2ee,param_1);
  return;
}


// Reference entry 11281670; body size 60 bytes.
#line 1 "ENTRY_11281670"

int __thiscall Recovered_Bulk::m_FUN_11281670(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x20) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x60) = (undefined1)(0);
  *(undefined1*)(param_1 + 0xa0) = (undefined1)(0);
  *(undefined1*)(param_1 + 0xe0) = (undefined1)(0);
  *(undefined2*)(param_1 + 0x140) = (undefined2)(0);
  *(undefined8*)(param_1 + 0x138) = (undefined8)(0);
  thunk_FUN_11281f90(param_2);
  return (int)(param_1);
}


// Reference entry 11281730; body size 48 bytes.
#line 1 "ENTRY_11281730"

undefined4 * __fastcall FUN_11281730(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  _eh_vector_constructor_iterator_(param_1 + 1,0x144,0x100,thunk_FUN_112816c0,thunk_FUN_112818d0);
  return (undefined4 *)(param_1);
}


// Reference entry 11281970; body size 19 bytes.
#line 1 "ENTRY_11281970"

void __fastcall FUN_11281970(undefined4 *param_1)

{
  thunk_FUN_11282620();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMusicServiceListCB);
  return;
}


// Reference entry 11281ab0; body size 18 bytes.
#line 1 "ENTRY_11281ab0"

undefined4 __thiscall Recovered_Bulk::m_FUN_11281ab0(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11281f90(param_2);
  return (undefined4)(param_1);
}


// Reference entry 11281c90; body size 36 bytes.
#line 1 "ENTRY_11281c90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11281c90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMSRating);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x454);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11281cc0; body size 33 bytes.
#line 1 "ENTRY_11281cc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11281cc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMusicServiceListCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11281cf0; body size 38 bytes.
#line 1 "ENTRY_11281cf0"



// Reference entry 11282d60; body size 55 bytes.
#line 1 "ENTRY_11282d60"

undefined4 __thiscall Recovered_Bulk::m_FUN_11282d60(byte *param_2)
{
  byte *param_1 = (byte *)this;
  byte bVar1;
  bool bVar2;
  
  while( true ) {
    bVar1 = (byte)(*param_1);
    bVar2 = (bool)((byte)(bVar1) < *param_2);
    if ((byte)(bVar1) != *param_2) break;
    if (bVar1 == 0) {
      return (undefined4)(1);
    }
    bVar1 = (byte)(param_1[1]);
    bVar2 = (bool)((byte)((bVar1)) < param_2[1]);
    if ((byte)((bVar1)) != param_2[1]) break;
    param_1 = (byte *)(param_1 + 2);
    param_2 = (byte *)(param_2 + 2);
    if (bVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(((uint)((int3)(-(uint)bVar2 >> 8)) << 8 | (uint)((-(uint)bVar2 | 1) == 0)));
}


// Reference entry 11282f20; body size 58 bytes.
#line 1 "ENTRY_11282f20"

uint * __thiscall Recovered_Bulk::m_FUN_11282f20(uint param_2)
{
  uint *param_1 = (uint *)this;
  uint uVar1;
  uint *puVar2;
  
  uVar1 = (uint)(0);
  if (*param_1 != (uint)((0))) {
    puVar2 = (uint *)(param_1 + 0x4e);
    do {
      if (*puVar2 == (uint)((param_2))) {
        return (uint *)(param_1 + uVar1 * 0x51 + 1);
      }
      uVar1 = (uint)(uVar1 + 1);
      puVar2 = (uint *)(puVar2 + 0x51);
    } while ((uint)(uVar1) < *param_1);
  }
  return (uint *)((uint *)0x0);
}


// Reference entry 11282f90; body size 30 bytes.
#line 1 "ENTRY_11282f90"

void FUN_11282f90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_1145c720(param_1,param_2,"ratingIcon_%s_%u",param_3,param_4);
  return;
}


// Reference entry 11282fc0; body size 26 bytes.
#line 1 "ENTRY_11282fc0"

void FUN_11282fc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1145c720(param_1,param_2,"ratingIcon_%u",param_3);
  return;
}


// Reference entry 11283190; body size 62 bytes.
#line 1 "ENTRY_11283190"

void __thiscall Recovered_Bulk::m_FUN_11283190(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(char *)(param_1 + 8) == '\0') {
    thunk_FUN_1145c720(param_2,param_3,"ratingIcon_%u");
    return;
  }
  thunk_FUN_1145c720(param_2,param_3,"ratingIcon_%s_%u",param_1 + 8,*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 11283440; body size 35 bytes.
#line 1 "ENTRY_11283440"

undefined4 __fastcall FUN_11283440(int param_1)

{
  if (((*(char *)(param_1 + 0x12d) != '\x03') && (*(int *)(param_1 + 0x134) != 0x12f)) &&
     (*(int *)(param_1 + 0x134) != 500)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 11283ad0; body size 30 bytes.
#line 1 "ENTRY_11283ad0"

void __thiscall Recovered_Bulk::m_FUN_11283ad0(undefined2 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined2*)(param_1 + 0x128) = (undefined2)(param_2);
  thunk_FUN_11284370<>(param_3);
  return;
}


// Reference entry 11283d00; body size 30 bytes.
#line 1 "ENTRY_11283d00"

void __thiscall Recovered_Bulk::m_FUN_11283d00(undefined2 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined2*)(param_1 + 0x126) = (undefined2)(param_2);
  thunk_FUN_11284370<>(param_3);
  return;
}


// Reference entry 11283fc0; body size 27 bytes.
#line 1 "ENTRY_11283fc0"

void __thiscall Recovered_Bulk::m_FUN_11283fc0(undefined2 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined2*)(param_1 + 0x124) = (undefined2)(param_2);
  thunk_FUN_11284370<>(param_3);
  return;
}


// Reference entry 11284060; body size 52 bytes.
#line 1 "ENTRY_11284060"

uint FUN_11284060(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = (uint)(0);
  if (param_2 != 0) {
    piVar2 = (int *)((int *)(param_1 + 0x134));
    do {
      if (*piVar2 == (int)((param_3))) {
        return (uint)(uVar1);
      }
      uVar1 = (uint)(uVar1 + 1);
      piVar2 = (int *)(piVar2 + 0x51);
    } while (uVar1 < param_2);
  }
  return (uint)(0xffffffff);
}


// Reference entry 112840c0; body size 57 bytes.
#line 1 "ENTRY_112840c0"

uint __thiscall Recovered_Bulk::m_FUN_112840c0(undefined2 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  
  if (**(uint **)(param_1 + 0x158) == (uint)(*(uint *)(param_1 + 0x150))) {
    return (uint)(**(uint **)(param_1 + 0x158) & 0xffffff00);
  }
  *(undefined2*)(*(int *)(param_1 + 0x148) + 0x128) = (undefined2)(param_2);
  uVar1 = (uint)(thunk_FUN_11284370<>(param_3), 0);
  return (uint)(uVar1);
}


// Reference entry 11284310; body size 57 bytes.
#line 1 "ENTRY_11284310"

uint __thiscall Recovered_Bulk::m_FUN_11284310(undefined2 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  
  if (**(uint **)(param_1 + 0x158) == (uint)(*(uint *)(param_1 + 0x150))) {
    return (uint)(**(uint **)(param_1 + 0x158) & 0xffffff00);
  }
  *(undefined2*)(*(int *)(param_1 + 0x148) + 0x126) = (undefined2)(param_2);
  uVar1 = (uint)(thunk_FUN_11284370<>(param_3), 0);
  return (uint)(uVar1);
}


// Reference entry 11285720; body size 54 bytes.
#line 1 "ENTRY_11285720"

uint __thiscall Recovered_Bulk::m_FUN_11285720(undefined2 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  
  if (**(uint **)(param_1 + 0x158) == (uint)(*(uint *)(param_1 + 0x150))) {
    return (uint)(**(uint **)(param_1 + 0x158) & 0xffffff00);
  }
  *(undefined2*)(*(int *)(param_1 + 0x148) + 0x124) = (undefined2)(param_2);
  uVar1 = (uint)(thunk_FUN_11284370<>(param_3), 0);
  return (uint)(uVar1);
}


// Reference entry 11285850; body size 44 bytes.
#line 1 "ENTRY_11285850"

undefined4 __thiscall Recovered_Bulk::m_FUN_11285850(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_1145e290(param_1,param_2,param_3,param_4,param_5), 0);
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined1*)(param_1 + 8) = (undefined1)(0);
    uVar1 = (undefined4)(0);
  }
  return (undefined4)(uVar1);
}


// Reference entry 11285a10; body size 48 bytes.
#line 1 "ENTRY_11285a10"

undefined4 * __fastcall FUN_11285a10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRStringEmitter);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  *(undefined1*)(param_1 + 4) = (undefined1)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 11285ad0; body size 33 bytes.
#line 1 "ENTRY_11285ad0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11285ad0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRStreamParamRX);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11285b00; body size 33 bytes.
#line 1 "ENTRY_11285b00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11285b00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRStreamParamTX);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11285b30; body size 33 bytes.
#line 1 "ENTRY_11285b30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11285b30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRStringEmitter);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11285b60; body size 33 bytes.
#line 1 "ENTRY_11285b60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11285b60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRStreamParamRX);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11285e20; body size 45 bytes.
#line 1 "ENTRY_11285e20"

void __thiscall Recovered_Bulk::m_FUN_11285e20(undefined4 param_2,undefined4 param_3,undefined1 param_4)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 8) = (undefined4)(param_3);
  *(undefined1*)(param_1 + 0x10) = (undefined1)(param_4);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  return;
}


// Reference entry 11286500; body size 45 bytes.
#line 1 "ENTRY_11286500"

void __fastcall FUN_11286500(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x42c));
  if (iVar1 != 0) {
    thunk_FUN_11294d60();
    thunk_FUN_1148a50e(iVar1,0xc);
    *(undefined4*)(param_1 + 0x42c) = (undefined4)(0);
  }
  return;
}


// Reference entry 11287900; body size 33 bytes.
#line 1 "ENTRY_11287900"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11287900(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RForwardOnlyDataStream);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11287930; body size 33 bytes.
#line 1 "ENTRY_11287930"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11287930(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RForwardOnlyDataStream);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11287960; body size 33 bytes.
#line 1 "ENTRY_11287960"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11287960(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RWritableStream);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11287990; body size 33 bytes.
#line 1 "ENTRY_11287990"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11287990(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RWritableStream);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 112879c0; body size 44 bytes.
#line 1 "ENTRY_112879c0"

uint __thiscall Recovered_Bulk::m_FUN_112879c0(uint param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((**(code **)(*param_1 + 0x10))(), 0);
  if (param_2 < uVar1) {
    return (uint)(uVar1 & 0xffffff00);
  }
  uVar1 = (uint)((**(code **)(*param_1 + 8))(param_2 - uVar1,param_3), 0);
  return (uint)(uVar1);
}


// Reference entry 11287ad0; body size 33 bytes.
#line 1 "ENTRY_11287ad0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11287ad0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZoneGroupTopology);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11287e20; body size 29 bytes.
#line 1 "ENTRY_11287e20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11287e20(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(0);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 112882c0; body size 49 bytes.
#line 1 "ENTRY_112882c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_112882c0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11247e90(param_2,*param_1,param_1[1]), 0);
  if ((uint)param_1[1] <= iVar1 + 3U) {
    return (undefined4)(0);
  }
  *param_1 = (int)(*param_1 + iVar1);
  param_1[1] = (int)(param_1[1] - iVar1);
  return (undefined4)(1);
}


// Reference entry 11288300; body size 46 bytes.
#line 1 "ENTRY_11288300"

undefined4 __thiscall Recovered_Bulk::m_FUN_11288300(undefined4 param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(thunk_FUN_1145c250(*param_1,param_2,param_1[1]), 0);
  if ((uint)param_1[1] <= uVar1) {
    return (undefined4)(0);
  }
  *param_1 = (int)(*param_1 + uVar1);
  param_1[1] = (int)(param_1[1] - uVar1);
  return (undefined4)(1);
}


// Reference entry 11289300; body size 47 bytes.
#line 1 "ENTRY_11289300"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11289300(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11287870();
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMemoryBufferStream);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 11289350; body size 38 bytes.
#line 1 "ENTRY_11289350"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11289350(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMemoryBufferStream);
  thunk_FUN_112878d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 112893b0; body size 56 bytes.
#line 1 "ENTRY_112893b0"

void __thiscall Recovered_Bulk::m_FUN_112893b0(void *param_2,uint *param_3, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  uint _Size;
  
  _Size = (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc));
  if (*param_3 <= (uint)((_Size))) {
    _Size = (uint)(*param_3);
  }
  if (_Size != 0) {
    memcpy(param_2,(char *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc)),_Size);
    *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + _Size);
  }
  *param_3 = (uint)(_Size);
  return;
}


// Reference entry 11289400; body size 22 bytes.
#line 1 "ENTRY_11289400"

undefined4 __thiscall Recovered_Bulk::m_FUN_11289400(uint param_2, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  if ((uint)(param_2) <= *(uint *)(param_1 + 8)) {
    *(uint*)(param_1 + 0xc) = (uint)(param_2);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 11289420; body size 26 bytes.
#line 1 "ENTRY_11289420"

uint __thiscall Recovered_Bulk::m_FUN_11289420(uint param_2, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 8));
  if (param_2 <= uVar1) {
    *(uint*)(param_1 + 0xc) = (uint)(uVar1 - param_2);
    return (uint)(((uint)((int3)(uVar1 - param_2 >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 11289440; body size 25 bytes.
#line 1 "ENTRY_11289440"

int __thiscall Recovered_Bulk::m_FUN_11289440(int param_2, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  uint uVar1;
  uint3 uVar2;
  
  uVar1 = (uint)(param_2 + *(int *)(param_1 + 0xc));
  uVar2 = (uint3)((uint3)(uVar1 >> 8));
  if (*(uint *)(param_1 + 8) < (uint)(uVar1)) {
    return (int)((uint)uVar2 << 8);
  }
  *(uint*)(param_1 + 0xc) = (uint)(uVar1);
  return (int)(((uint)(uVar2) << 8 | (uint)(1)));
}


// Reference entry 1128aa80; body size 23 bytes.
#line 1 "ENTRY_1128aa80"

undefined4 * __fastcall FUN_1128aa80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1128abd0; body size 35 bytes.
#line 1 "ENTRY_1128abd0"

undefined4 * __fastcall FUN_1128abd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(5);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *(undefined8*)(param_1 + 4) = (undefined8)(0);
  *(undefined1*)(param_1 + 6) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1128ae90; body size 27 bytes.
#line 1 "ENTRY_1128ae90"

undefined4 __thiscall Recovered_Bulk::m_FUN_1128ae90(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4)(param_1);
}


// Reference entry 1128aec0; body size 27 bytes.
#line 1 "ENTRY_1128aec0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1128aec0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}


// Reference entry 1128aef0; body size 36 bytes.
#line 1 "ENTRY_1128aef0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1128aef0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RJsonParser);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xca8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1128af70; body size 16 bytes.
#line 1 "ENTRY_1128af70"

int __thiscall Recovered_Bulk::m_FUN_1128af70(int param_2)
{
  int param_1 = (int )this;
  return (int)(*(int *)(param_1 + 0x14) + param_2 * 0x24);
}


// Reference entry 1128af90; body size 26 bytes.
#line 1 "ENTRY_1128af90"

int __thiscall Recovered_Bulk::m_FUN_1128af90(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)((**(code **)**(undefined4 **)(param_1 + 0xca0))(), 0);
  return (int)(*(int *)(iVar1 + 8) + param_2 * 0x24);
}


// Reference entry 1128c350; body size 26 bytes.
#line 1 "ENTRY_1128c350"

void __thiscall Recovered_Bulk::m_FUN_1128c350(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_112c35f0(param_1 + 0x800,param_2,param_3);
  return;
}


// Reference entry 1128da40; body size 32 bytes.
#line 1 "ENTRY_1128da40"

undefined4 * __fastcall FUN_1128da40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  *(undefined1*)(param_1 + 2) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0x19) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0x5a) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0x7b) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1128df20; body size 27 bytes.
#line 1 "ENTRY_1128df20"

undefined4 __thiscall Recovered_Bulk::m_FUN_1128df20(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}


// Reference entry 1128e030; body size 52 bytes.
#line 1 "ENTRY_1128e030"

undefined4 __fastcall FUN_1128e030(int param_1)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = (uint)(0);
  pbVar2 = (byte *)((byte *)(param_1 + 0xcd9));
  while( true ) {
    cVar1 = (char)(thunk_FUN_1128c260(), 0);
    if ((cVar1 != '\0') && ((*pbVar2 & 2) != 0)) break;
    uVar3 = (uint)(uVar3 + 1);
    pbVar2 = (byte *)(pbVar2 + 0x24);
    if (3 < uVar3) {
      return (undefined4)(0);
    }
  }
  return (undefined4)(1);
}


// Reference entry 1128ea10; body size 32 bytes.
#line 1 "ENTRY_1128ea10"

void FUN_1128ea10(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_113c41f0(param_1,0xffffffff,8,param_2,5,0,"1.2.12",0x38);
  return;
}


// Reference entry 1128ea50; body size 24 bytes.
#line 1 "ENTRY_1128ea50"

void FUN_1128ea50(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_113c7f60(param_1,param_2,"1.2.12",0x38);
  return;
}


// Reference entry 1128f0b0; body size 33 bytes.
#line 1 "ENTRY_1128f0b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1128f0b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAVTransport);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1128f120; body size 33 bytes.
#line 1 "ENTRY_1128f120"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1128f120(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAudioIn);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1128f170; body size 33 bytes.
#line 1 "ENTRY_1128f170"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1128f170(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RConnectionManager);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1128f1c0; body size 33 bytes.
#line 1 "ENTRY_1128f1c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1128f1c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RGroupManagement);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1128f210; body size 33 bytes.
#line 1 "ENTRY_1128f210"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1128f210(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RGroupRenderingControl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1128f260; body size 33 bytes.
#line 1 "ENTRY_1128f260"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1128f260(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RRenderingControl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1128f310; body size 33 bytes.
#line 1 "ENTRY_1128f310"

undefined4 * __fastcall FUN_1128f310(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_MusicPlaybackQuality);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *(undefined2*)(param_1 + 3) = (undefined2)(0);
  *(undefined1*)((int)param_1 + 0xe) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1128f390; body size 33 bytes.
#line 1 "ENTRY_1128f390"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1128f390(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_MusicPlaybackQuality);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1128f4e0; body size 18 bytes.
#line 1 "ENTRY_1128f4e0"

undefined1 __fastcall FUN_1128f4e0(int param_1)

{
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) != 0)) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 1128f6b0; body size 36 bytes.
#line 1 "ENTRY_1128f6b0"

undefined1 * __fastcall FUN_1128f6b0(undefined1 *param_1)

{
  *(undefined4*)(param_1 + 0x28) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  *param_1 = (undefined1)(0);
  thunk_FUN_112a9cf0(param_1 + 0x30);
  return (undefined1 *)(param_1);
}


// Reference entry 1128f8c0; body size 49 bytes.
#line 1 "ENTRY_1128f8c0"

void __fastcall FUN_1128f8c0(undefined1 *param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_112a7f50(param_1 + 0x30), 0);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  *param_1 = (undefined1)(0);
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x30);
  }
  return;
}


// Reference entry 1128faf0; body size 38 bytes.
#line 1 "ENTRY_1128faf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1128faf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDIDLResponse);
  thunk_FUN_112741c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11291db0; body size 50 bytes.
#line 1 "ENTRY_11291db0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11291db0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_REncryptedStringDecoder);
  *(undefined1*)(param_1 + 1) = (undefined1)(1);
  param_1[2] = (undefined4)(0);
  thunk_FUN_1145e270(param_1 + 4);
  param_1[7] = (undefined4)(param_2);
  (**(code **)(*param_2 + 8))();
  return (undefined4 *)(param_1);
}


// Reference entry 11291df0; body size 45 bytes.
#line 1 "ENTRY_11291df0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11291df0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_REncryptedStringEncoder);
  *(undefined2*)(param_1 + 1) = (undefined2)(0x101);
  thunk_FUN_1145ed60(param_1 + 2);
  param_1[5] = (undefined4)(param_2);
  (**(code **)(*param_2 + 8))();
  return (undefined4 *)(param_1);
}


// Reference entry 112928f0; body size 46 bytes.
#line 1 "ENTRY_112928f0"

int __thiscall Recovered_Bulk::m_FUN_112928f0(int param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x1c) + 0x14))(param_2,param_3 + -1), 0);
    *(undefined1*)(iVar1 + param_2) = (undefined1)(0);
    return (int)(iVar1);
  }
  *(undefined1*)(param_1 + 4) = (undefined1)(0);
  return (int)(0);
}


// Reference entry 112929b0; body size 47 bytes.
#line 1 "ENTRY_112929b0"

undefined4 __fastcall FUN_112929b0(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 4) != '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x1c) + 0xc))(), 0);
    if (cVar1 != '\0') {
      cVar1 = (char)(thunk_FUN_1145e260(param_1 + 0x10), 0);
      if (cVar1 != '\0') {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 112929f0; body size 47 bytes.
#line 1 "ENTRY_112929f0"

undefined4 __fastcall FUN_112929f0(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 4) != '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x14) + 0xc))(), 0);
    if (cVar1 != '\0') {
      cVar1 = (char)(thunk_FUN_1145eb60(param_1 + 8), 0);
      if (cVar1 != '\0') {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 11292a30; body size 35 bytes.
#line 1 "ENTRY_11292a30"

void __fastcall FUN_11292a30(int param_1)

{
  *(undefined1*)(param_1 + 4) = (undefined1)(1);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  thunk_FUN_1145e270(param_1 + 0x10);
                    
                    
  (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
  return;
}


// Reference entry 11292a60; body size 30 bytes.
#line 1 "ENTRY_11292a60"

void __fastcall FUN_11292a60(int param_1)

{
  *(undefined2*)(param_1 + 4) = (undefined2)(0x101);
  thunk_FUN_1145ed60(param_1 + 8);
                    
                    
  (**(code **)(**(int **)(param_1 + 0x14) + 8))();
  return;
}


// Reference entry 11292af0; body size 45 bytes.
#line 1 "ENTRY_11292af0"

undefined4 * __fastcall FUN_11292af0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUsageDataSharing);
  param_1[1] = (undefined4)(0xffffffff);
  *(undefined2*)(param_1 + 2) = (undefined2)(0);
  param_1[0xb] = (undefined4)(2);
  thunk_FUN_112a9cf0(param_1 + 0xc);
  return (undefined4 *)(param_1);
}


// Reference entry 11292b50; body size 45 bytes.
#line 1 "ENTRY_11292b50"



// Reference entry 11292dc0; body size 43 bytes.
#line 1 "ENTRY_11292dc0"

bool __fastcall FUN_11292dc0(int param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = (char)(thunk_FUN_112a7f50(param_1 + 0x30), 0);
  iVar1 = (int)(*(int *)(param_1 + 4));
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x30);
  }
  return (bool)(iVar1 == 0);
}


// Reference entry 11292f20; body size 45 bytes.
#line 1 "ENTRY_11292f20"

void __thiscall Recovered_Bulk::m_FUN_11292f20(byte param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_112a7f50(param_1 + 0x30), 0);
  *(uint*)(param_1 + 4) = (uint)(param_2 ^ 1);
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x30);
  }
  return;
}


// Reference entry 11292f70; body size 51 bytes.
#line 1 "ENTRY_11292f70"

undefined4 * __fastcall FUN_11292f70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSelectThread);
  *(undefined1*)(param_1 + 0x51) = (undefined1)(0);
  thunk_FUN_112a9cf0(param_1 + 0x4f);
  memset(param_1 + 1,0,0x120);
  return (undefined4 *)(param_1);
}


// Reference entry 11292ff0; body size 51 bytes.
#line 1 "ENTRY_11292ff0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11292ff0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSelectThread);
  FUN_112a9d40(param_1 + 0x4f);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x148);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 112931c0; body size 47 bytes.
#line 1 "ENTRY_112931c0"

void __fastcall FUN_112931c0(int param_1)

{
  FUN_112a9d50(param_1 + 0x13c);
  *(undefined1*)(param_1 + 0x144) = (undefined1)(1);
  FUN_112a9d70(param_1 + 0x13c);
  FUN_112a9e10(param_1 + 0x124);
  return;
}


undefined4 * __thiscall Recovered_Bulk::m_FUN_112937c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11287860();
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReadFileStream);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 11293810; body size 38 bytes.
#line 1 "ENTRY_11293810"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11293810(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReadFileStream);
  thunk_FUN_112878c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 112938b0; body size 27 bytes.
#line 1 "ENTRY_112938b0"

bool __thiscall Recovered_Bulk::m_FUN_112938b0(long param_2, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  long lVar1;
  
  lVar1 = (long)(_lseek(*(int *)(param_1 + 4),param_2,0), 0);
  return (bool)(lVar1 != -1);
}


// Reference entry 112938e0; body size 27 bytes.
#line 1 "ENTRY_112938e0"

bool __thiscall Recovered_Bulk::m_FUN_112938e0(long param_2, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  long lVar1;
  
  lVar1 = (long)(_lseek(*(int *)(param_1 + 4),param_2,1), 0);
  return (bool)(lVar1 != -1);
}


// Reference entry 11293910; body size 17 bytes.
#line 1 "ENTRY_11293910"

void __fastcall FUN_11293910(int param_1)

{
  _lseek(*(int *)(param_1 + 4),0,1);
  return;
}


// Reference entry 11293960; body size 57 bytes.
#line 1 "ENTRY_11293960"

void FUN_11293960(undefined4 param_1,undefined4 param_2,uint param_3)

{
  thunk_FUN_112b0270(&DAT_119e73b4,param_1,"%s -> %d.%d.%d.%d",param_2,param_3 >> 0x18, param_3 >> 0x10 & 0xff,param_3 >> 8 & 0xff,param_3 & 0xff);
  return;
}


// Reference entry 11293aa0; body size 47 bytes.
#line 1 "ENTRY_11293aa0"

int FUN_11293aa0(void)

{
  int local_8;
  int local_4;
  
  thunk_FUN_1145c930(&local_8,0);
  return (int)(local_4 / 1000 + local_8 * 1000);
}


// Reference entry 11293dd0; body size 19 bytes.
#line 1 "ENTRY_11293dd0"

void __stdcall FUN_11293dd0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_11293bf0(param_1,param_2);
  return;
}


// Reference entry 11293e20; body size 54 bytes.
#line 1 "ENTRY_11293e20"

void FUN_11293e20(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  thunk_FUN_1145c930(param_1,0);
  uVar1 = (undefined4)(param_1[1]);
  *param_3 = (undefined4)(*param_1);
  param_3[1] = (undefined4)(uVar1);
  thunk_FUN_1145ad70(param_1,param_2);
  thunk_FUN_1145ad70(param_3,param_4);
  return;
}


// Reference entry 112942e0; body size 57 bytes.
#line 1 "ENTRY_112942e0"

void __stdcall FUN_112942e0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_112942e0(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x18);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 11294820; body size 48 bytes.
#line 1 "ENTRY_11294820"

undefined4 * __fastcall FUN_11294820(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 112949a0; body size 57 bytes.
#line 1 "ENTRY_112949a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_112949a0(int param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)(0x1000000);
  param_1[2] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_112effc0(param_3,param_1 + 1);
    thunk_FUN_112eeea0(param_1[2]);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 112949f0; body size 57 bytes.
#line 1 "ENTRY_112949f0"

undefined4 * __fastcall FUN_112949f0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0x1000000);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  pvVar1 = (void *)(malloc(0xc0), 0);
  param_1[1] = (undefined4)(pvVar1);
  thunk_FUN_113daff0(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 11294ae0; body size 19 bytes.
#line 1 "ENTRY_11294ae0"

void __fastcall FUN_11294ae0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 11294de0; body size 51 bytes.
#line 1 "ENTRY_11294de0"

void __fastcall FUN_11294de0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_113cfe50(*(int *)(param_1 + 8));
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
  }
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_113d47d0(*(int *)(param_1 + 4));
    *(undefined4*)(param_1 + 4) = (undefined4)(0);
  }
  return;
}


// Reference entry 112953c0; body size 25 bytes.
#line 1 "ENTRY_112953c0"

void __fastcall FUN_112953c0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 11297630; body size 24 bytes.
#line 1 "ENTRY_11297630"

void FUN_11297630(undefined4 param_1)

{
  thunk_FUN_11296ca0(param_1);
  thunk_FUN_11298430();
  thunk_FUN_112983c0();
  return;
}


// Reference entry 11297bb0; body size 33 bytes.
#line 1 "ENTRY_11297bb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11297bb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_DoublyLinkedListNode);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11297be0; body size 27 bytes.
#line 1 "ENTRY_11297be0"

undefined4 __thiscall Recovered_Bulk::m_FUN_11297be0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}


// Reference entry 11297c10; body size 27 bytes.
#line 1 "ENTRY_11297c10"

undefined4 __thiscall Recovered_Bulk::m_FUN_11297c10(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}


// Reference entry 11297f70; body size 23 bytes.
#line 1 "ENTRY_11297f70"

void __thiscall Recovered_Bulk::m_FUN_11297f70(int param_2)
{
  int *param_1 = (int *)this;
  (**(code **)(*param_1 + 8))(param_2 + 0x12,*(undefined2 *)(param_2 + 0x10));
  return;
}


// Reference entry 11297f90; body size 38 bytes.
#line 1 "ENTRY_11297f90"

int __thiscall Recovered_Bulk::m_FUN_11297f90(undefined4 param_2,ushort param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_113b9ec0(param_1 + 0x12,param_2), 0);
  if (iVar1 == 0) {
    iVar1 = (int)((uint)*(ushort *)(param_1 + 0x10) - (uint)param_3);
  }
  return (int)(iVar1);
}


// Reference entry 112983c0; body size 43 bytes.
#line 1 "ENTRY_112983c0"

void __fastcall FUN_112983c0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_112a7f50(param_1 + 4), 0);
  thunk_FUN_11298310();
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1 + 4);
  }
  return;
}


// Reference entry 11299710; body size 33 bytes.
#line 1 "ENTRY_11299710"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11299710(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMediaReceiverRegistrar);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11299740; body size 43 bytes.
#line 1 "ENTRY_11299740"

undefined4 FUN_11299740(int param_1)

{
  if (param_1 == 2) {
    return (undefined4)(0x81000008);
  }
  if (param_1 != 0xd) {
    if (param_1 != 0x8c) {
      return (undefined4)(0x80000002);
    }
    return (undefined4)(0x80000026);
  }
  return (undefined4)(0x81000009);
}


// Reference entry 11299c80; body size 27 bytes.
#line 1 "ENTRY_11299c80"

undefined4 FUN_11299c80(uint param_1)

{
  if ((-1 < (int)param_1) && (param_1 < 10)) {
    return (undefined4)(*(undefined4 *)(&DAT_12121d88 + param_1 * 4));
  }
  return (undefined4)(0xb);
}


// Reference entry 11299d40; body size 19 bytes.
#line 1 "ENTRY_11299d40"

bool FUN_11299d40(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_11248b40(0x12), 0);
  return (bool)(cVar1 != '\0');
}


// Reference entry 1129ad00; body size 28 bytes.
#line 1 "ENTRY_1129ad00"

void FUN_1129ad00(int param_1)

{
  *(undefined1**)(param_1 + 0x4c) = (undefined1 *)(LAB_1007e6b3);
  thunk_FUN_113dada0(param_1,LAB_10031520,0);
  return;
}


// Reference entry 1129b080; body size 42 bytes.
#line 1 "ENTRY_1129b080"

undefined4 * __fastcall FUN_1129b080(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_ChunkLengthParser);
  *(undefined8*)(param_1 + 1) = (undefined8)(0);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1129b0c0; body size 42 bytes.
#line 1 "ENTRY_1129b0c0"

void FUN_1129b0c0(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = (int)(*param_2);
  if ((((iVar1 + 1U < param_3) && (param_1 != 0)) && (*(char *)(iVar1 + param_1) == '\r')) &&
     (*(char *)(iVar1 + 1 + param_1) == '\n')) {
    *param_2 = (int)(iVar1 + 2);
  }
  return;
}


// Reference entry 1129b2a0; body size 34 bytes.
#line 1 "ENTRY_1129b2a0"

void __fastcall FUN_1129b2a0(int param_1)

{
  *(undefined8*)(param_1 + 4) = (undefined8)(0);
  *(undefined1*)(param_1 + 0xc) = (undefined1)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  return;
}


// Reference entry 1129bb20; body size 63 bytes.
#line 1 "ENTRY_1129bb20"

undefined4 FUN_1129bb20(char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  cVar1 = (char)(*param_1);
  pcVar3 = (char *)(param_1);
  while( true ) {
    if (cVar1 == '\0') {
      thunk_FUN_1145c460(param_1,param_2);
      return (undefined4)(1);
    }
    iVar2 = (int)(isalpha((int)*param_1), 0);
    if (iVar2 != 0) break;
    pcVar3 = (char *)(pcVar3 + 1);
    cVar1 = (char)(*pcVar3);
  }
  return (undefined4)(0);
}


// Reference entry 1129c130; body size 54 bytes.
#line 1 "ENTRY_1129c130"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1129c130(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  switch(*(undefined1 *)(param_1 + 6)) {
  case 0:
    (**(code **)*param_1)(0);
  }
  *(undefined1*)(param_1 + 6) = (undefined1)(0xff);
  uVar1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  *param_1 = (undefined4)(uVar1);
  *(undefined1*)(param_1 + 6) = (undefined1)(1);
  return (undefined4 *)(param_1);
}


// Reference entry 1129c7e0; body size 36 bytes.
#line 1 "ENTRY_1129c7e0"

void __fastcall FUN_1129c7e0(undefined4 *param_1)

{
  if (*(char *)(param_1 + 6) != -1) {
    switch(*(char *)(param_1 + 6)) {
    case '\0':
      (**(code **)*param_1)(0);
    }
  }
  return;
}


// Reference entry 1129cdc0; body size 56 bytes.
#line 1 "ENTRY_1129cdc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1129cdc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if (*(char *)(param_1 + 6) != -1) {
    switch(*(char *)(param_1 + 6)) {
    case '\0':
      (**(code **)*param_1)(0);
    }
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1129d2a0; body size 35 bytes.
#line 1 "ENTRY_1129d2a0"

void FUN_1129d2a0(undefined1 param_1,undefined4 *param_2)

{
  switch(param_1) {
  case 0:
    (**(code **)*param_2)(0);
  }
  return;
}


// Reference entry 1129db20; body size 17 bytes.
#line 1 "ENTRY_1129db20"



// Reference entry 
undefined4 * __thiscall Recovered_Bulk::m_FUN_1129db40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_CertvalStats);
  FUN_112a9d40(param_1 + 10);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1129e0d0; body size 53 bytes.
#line 1 "ENTRY_1129e0d0"

void FUN_1129e0d0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(malloc(0x10), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    *puVar1 = (undefined4)(param_2);
    puVar1[3] = (undefined4)(0);
    if (param_1 < 0) {
      param_1 = (int)(1);
    }
    puVar1[2] = (undefined4)(0);
    puVar1[1] = (undefined4)(param_1);
  }
  return;
}


// Reference entry 1129e4e0; body size 34 bytes.
#line 1 "ENTRY_1129e4e0"

undefined4 FUN_1129e4e0(int *param_1,int param_2)

{
  if ((((int *)(param_1) != (int *)(0x0)) && (-1 < param_2)) && (param_2 < (int)(uint)*(ushort *)(param_1 + 1)) ) {
    return (undefined4)(*(undefined4 *)(*param_1 + param_2 * 4));
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 1129e510; body size 23 bytes.
#line 1 "ENTRY_1129e510"

void FUN_1129e510(undefined4 *param_1)

{
  if ((undefined4 *)(param_1) != (undefined4 *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
  }
  return;
}


// Reference entry 1129e530; body size 27 bytes.
#line 1 "ENTRY_1129e530"

void FUN_1129e530(undefined4 *param_1)

{
  if ((undefined4 *)(param_1) != (undefined4 *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(1);
  }
  return;
}


// Reference entry 1129e560; body size 61 bytes.
#line 1 "ENTRY_1129e560"

uint FUN_1129e560(int *param_1,int param_2)

{
  uint in_EAX;
  int *piVar1;
  
  if (((int *)(param_1) != (int *)(0x0)) && (param_2 != 0)) {
    in_EAX = (uint)(0);
    if (*(ushort *)(param_1 + 1) != 0) {
      piVar1 = (int *)((int *)*param_1);
      do {
        if (*piVar1 == (int)((param_2))) {
          ((int *)*param_1)[in_EAX] = 0;
          return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
        }
        in_EAX = (uint)(in_EAX + 1);
        piVar1 = (int *)(piVar1 + 1);
      } while ((int)in_EAX < (int)(uint)*(ushort *)(param_1 + 1));
    }
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1129e790; body size 55 bytes.
#line 1 "ENTRY_1129e790"

void FUN_1129e790(undefined4 *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  if ((undefined4 *)(param_1) != (undefined4 *)(0x0)) {
    _Memory = (void *)((void *)*param_1);
    while ((void *)(_Memory) != (void *)(0x0)) {
      pvVar1 = (char *)(*(void **)((int)_Memory + 8), 0);
      free(_Memory);
      _Memory = (void *)(pvVar1);
    }
    thunk_FUN_112a7f20();
    return;
  }
  return;
}


// Reference entry 1129e8e0; body size 48 bytes.
#line 1 "ENTRY_1129e8e0"

void FUN_1129e8e0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(malloc(param_1 + 0x10), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    piVar1[2] = (int)(0);
    *piVar1 = (int)((int)(piVar1 + 4));
    piVar1[1] = (int)((int)(piVar1 + 4) + param_1);
    piVar1[3] = (int)(0);
  }
  return;
}


// Reference entry 1129ee10; body size 29 bytes.
#line 1 "ENTRY_1129ee10"

void FUN_1129ee10(undefined4 *param_1)

{
  if ((undefined4 *)(param_1) != (undefined4 *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
  }
  return;
}


// Reference entry 1129eea0; body size 56 bytes.
#line 1 "ENTRY_1129eea0"

bool FUN_1129eea0(int *param_1)

{
  int iVar1;
  
  if ((int *)(param_1) == (int *)(0x0)) {
    return (bool)(false);
  }
  if ((void *)param_1[5] != (void *)(((0x0)))) {
    free((void *)param_1[5]);
    param_1[5] = (int)(0);
  }
  iVar1 = (int)(_close(*param_1), 0);
  return (bool)(iVar1 != -1);
}


// Reference entry 1129eef0; body size 17 bytes.
#line 1 "ENTRY_1129eef0"

void FUN_1129eef0(undefined4 *param_1)

{
  if ((undefined4 *)(param_1) != (undefined4 *)(0x0)) {
    FindClose((HANDLE)*param_1);
  }
  return;
}


// Reference entry 1129efe0; body size 34 bytes.
#line 1 "ENTRY_1129efe0"

bool FUN_1129efe0(undefined4 *param_1,LPWIN32_FIND_DATAW param_2)

{
  BOOL BVar1;
  
  if (((undefined4 *)(param_1) != (undefined4 *)(0x0)) && (param_2 != 0x0)) {
    BVar1 = (BOOL)(FindNextFileW((HANDLE)*param_1,param_2), 0);
    return (bool)(BVar1 != (BOOL)(0));
  }
  return (bool)(false);
}


// Reference entry 1129f260; body size 37 bytes.
#line 1 "ENTRY_1129f260"

bool FUN_1129f260(int *param_1,long param_2,int param_3)

{
  long lVar1;
  
  if ((int *)(param_1) == (int *)(0x0)) {
    return (bool)(false);
  }
  lVar1 = (long)(_lseek(*param_1,param_2,param_3), 0);
  return (bool)(lVar1 != -1);
}


// Reference entry 1129f300; body size 36 bytes.
#line 1 "ENTRY_1129f300"

bool FUN_1129f300(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = (int)(thunk_FUN_1145d560(param_1,param_2), 0);
    return (bool)(iVar1 != -1);
  }
  return (bool)(false);
}


// Reference entry 1129fb30; body size 59 bytes.
#line 1 "ENTRY_1129fb30"

bool FUN_1129fb30(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = (int)(thunk_FUN_112a95e0(param_1 + 0x3c), 0);
    if (iVar1 != 0) {
      return (bool)(true);
    }
  }
  iVar1 = (int)(thunk_FUN_112a9190(param_1 + 8,1,0,param_2), 0);
  return (bool)(iVar1 == 1);
}


// Reference entry 112a0060; body size 56 bytes.
#line 1 "ENTRY_112a0060"

int FUN_112a0060(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (int)(param_1[5] - param_2[5]);
  if ((((iVar1 == 0) && (iVar1 = (int)(param_1[4] - param_2[4]), iVar1 == 0)) &&
      (iVar1 = (int)(param_1[3] - param_2[3]), iVar1 == 0)) &&
     ((iVar1 = (int)(param_1[2] - param_2[2]), iVar1 == 0 && (iVar1 = (int)(param_1[1] - param_2[1]), iVar1 == 0)) )) {
    return (int)(*param_1 - *param_2);
  }
  return (int)(iVar1);
}


// Reference entry 112a09d0; body size 24 bytes.
#line 1 "ENTRY_112a09d0"

void FUN_112a09d0(int param_1,byte param_2)

{
  *(byte*)(param_1 + 0xb8) = (byte)(param_2);
  *(uint*)(param_1 + 0xb4) = (uint)((uint)param_2);
  return;
}


// Reference entry 112a0ac0; body size 37 bytes.
#line 1 "ENTRY_112a0ac0"

int FUN_112a0ac0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(thunk_FUN_1129fa70(*(undefined4 *)(param_1 + 0x70),param_2,param_3,param_4), 0);
  iVar2 = (int)(0);
  if (-1 < iVar1) {
    iVar2 = (int)(iVar1);
  }
  return (int)(iVar2);
}


// Reference entry 112a0af0; body size 59 bytes.
#line 1 "ENTRY_112a0af0"

char * FUN_112a0af0(ushort param_1)

{
  ushort uVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)(&DAT_119e7b58);
  if (99 < param_1) {
    uVar1 = (ushort)(100);
    do {
      if (uVar1 == 0) {
        return (char *)("No Reason");
      }
      if (uVar1 == param_1) {
        return (char *)(*(char **)(puVar2 + 4));
      }
      uVar1 = (ushort)(*(ushort *)(puVar2 + 8));
      puVar2 = (undefined *)(puVar2 + 8);
    } while (uVar1 <= param_1);
  }
  return (char *)("No Reason");
}


// Reference entry 112a0c30; body size 51 bytes.
#line 1 "ENTRY_112a0c30"

undefined4 FUN_112a0c30(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0xb8) != '\0') && (*(int *)(param_1 + 0xb4) != 0)) {
    *(undefined1*)(param_1 + 0xb8) = (undefined1)(0);
    uVar1 = (undefined4)(thunk_FUN_1129fc20(*(undefined4 *)(param_1 + 0x70),"0\r\n\r\n",5), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 112a0fd0; body size 39 bytes.
#line 1 "ENTRY_112a0fd0"

void FUN_112a0fd0(void)

{
  thunk_FUN_1129e510(&DAT_122fb0a0);
  thunk_FUN_1129e510(&DAT_122fb090);
  thunk_FUN_1129e690(&DAT_122fb060,0x400);
  return;
}


// Reference entry 112a1000; body size 34 bytes.
#line 1 "ENTRY_112a1000"

void FUN_112a1000(void)

{
  thunk_FUN_1129e450(&DAT_122fb0a0);
  thunk_FUN_1129e450(&DAT_122fb090);
  thunk_FUN_1129e790(&DAT_122fb060);
  return;
}


// Reference entry 112a1060; body size 40 bytes.
#line 1 "ENTRY_112a1060"

uint FUN_112a1060(undefined4 *param_1)

{
  char cVar1;
  uint in_EAX;
  char *pcVar2;
  
  if (((undefined4 *)(param_1) != (undefined4 *)(0x0)) &&
     (pcVar2 = (char *)((char *)*param_1), in_EAX = (uint)(0),(char *)( pcVar2) != (char *)(0x0))) {
    for (; (cVar1 = (char)((char)(*pcVar2)), cVar1 == '\t' || (cVar1 == ' ')); pcVar2 = pcVar2 + 1) {
    }
    *param_1 = (undefined4)(pcVar2);
    return (uint)(((uint)((int3)((uint)pcVar2 >> 8)) << 8 | (uint)(cVar1 == '\0')));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 112a1350; body size 21 bytes.
#line 1 "ENTRY_112a1350"

void FUN_112a1350(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  thunk_FUN_1129ec00();
  return;
}


// Reference entry 112a2890; body size 46 bytes.
#line 1 "ENTRY_112a2890"

void FUN_112a2890(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_113b9ec0(param_2,"connection"), 0);
  if (iVar1 == 0) {
    *(undefined4*)(param_1 + 100) = (undefined4)(1);
  }
  thunk_FUN_1129e920();
  return;
}


// Reference entry 112a28d0; body size 54 bytes.
#line 1 "ENTRY_112a28d0"

undefined4 FUN_112a28d0(int param_1)

{
  if ((*(char *)(param_1 + 0x75) != '\0') && (*(char *)(param_1 + 0x74) != '\0')) {
    *(undefined4*)(param_1 + 0xb4) = (undefined4)(1);
    *(undefined1*)(param_1 + 0xb8) = (undefined1)(1);
    return (undefined4)(1);
  }
  *(undefined1*)(param_1 + 0xb8) = (undefined1)(1);
  *(undefined4*)(param_1 + 0xb4) = (undefined4)(0);
  return (undefined4)(1);
}


// Reference entry 112a29b0; body size 57 bytes.
#line 1 "ENTRY_112a29b0"

void FUN_112a29b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_113b9ec0("Content-type","connection"), 0);
  if (iVar1 == 0) {
    *(undefined4*)(param_1 + 100) = (undefined4)(1);
  }
  thunk_FUN_1129e920(param_1 + 0x8c,"Content-type",param_2);
  return;
}


// Reference entry 112a2b30; body size 56 bytes.
#line 1 "ENTRY_112a2b30"

void FUN_112a2b30(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(_errno(), 0);
  if (*piVar1 == (int)((2))) {
    *(undefined2*)(param_1 + 0x3c) = (undefined2)(0x194);
    return;
  }
  if (*piVar1 != (int)((0xd))) {
    *(undefined2*)(param_1 + 0x3c) = (undefined2)(500);
    return;
  }
  *(undefined2*)(param_1 + 0x3c) = (undefined2)(0x193);
  return;
}


// Reference entry 112a3190; body size 32 bytes.
#line 1 "ENTRY_112a3190"

undefined4 FUN_112a3190(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(uint)*(ushort *)(param_1 + 4) <= (ushort)(param_2)) {
    return (undefined4)(0);
  }
  uVar1 = (undefined4)(thunk_FUN_1129e4e0(), 0);
  return (undefined4)(uVar1);
}


// Reference entry 112a31c0; body size 47 bytes.
#line 1 "ENTRY_112a31c0"

undefined4 FUN_112a31c0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1129e4e0(param_1,*(ushort *)(param_1 + 4) - 1), 0);
  if ((*(short *)(param_1 + 4) != 0) && ((*piVar1 == (int)((0)) || (piVar1[1] == 0)))) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 112a3470; body size 33 bytes.
#line 1 "ENTRY_112a3470"

undefined4 FUN_112a3470(int param_1)

{
  undefined4 uVar1;
  
  if ((int)(uint)DAT_122f697c <= param_1) {
    return (undefined4)(0);
  }
  uVar1 = (undefined4)(thunk_FUN_1129e4e0(&DAT_122f6978,param_1), 0);
  return (undefined4)(uVar1);
}


// Reference entry 112a4c30; body size 34 bytes.
#line 1 "ENTRY_112a4c30"

void FUN_112a4c30(void)

{
  thunk_FUN_1129e510(&DAT_122f6978);
  thunk_FUN_1129e530(&DAT_122f6984);
  thunk_FUN_112a9770(&DAT_122f6970);
  return;
}


// Reference entry 112a4e30; body size 31 bytes.
#line 1 "ENTRY_112a4e30"

void FUN_112a4e30(int param_1,short param_2)

{
  *(short*)(param_1 + 0xb8) = (short)(*(short *)(param_1 + 0xb8) + param_2);
  *(short*)(param_1 + 0xba) = (short)(*(short *)(param_1 + 0xba) + param_2);
  *(short*)(param_1 + 0xbc) = (short)(*(short *)(param_1 + 0xbc) + param_2);
  return;
}


// Reference entry 112a5110; body size 19 bytes.
#line 1 "ENTRY_112a5110"

void FUN_112a5110(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4*)(param_1 + 0x11c) = (undefined4)(param_2);
  }
  return;
}


// Reference entry 112a5130; body size 23 bytes.
#line 1 "ENTRY_112a5130"

void FUN_112a5130(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(int*)(param_1 + 0xa0) = (int)(param_2);
  }
  return;
}


// Reference entry 112a5340; body size 56 bytes.
#line 1 "ENTRY_112a5340"

void FUN_112a5340(int param_1)

{
  if (param_1 != 0) {
    if (*(short *)(param_1 + 0xba) != 0) {
      thunk_FUN_112a9690(param_1 + 0x30);
    }
    if (*(short *)(param_1 + 0xbc) != 0) {
      thunk_FUN_112a9690();
      return;
    }
  }
  return;
}


// Reference entry 112a7b20; body size 61 bytes.
#line 1 "ENTRY_112a7b20"

undefined4 FUN_112a7b20(int *param_1)

{
  if (((int *)(param_1) != (int *)(0x0)) && (*param_1 != (int)((0)))) {
    param_1[9] = (int)(1);
    ReleaseSemaphore((HANDLE)param_1[7],*param_1,(LPLONG)0x0);
    WaitForSingleObject(param_1 + 8,0xffffffff);
    param_1[9] = (int)(0);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 112a7c30; body size 45 bytes.
#line 1 "ENTRY_112a7c30"

undefined4 FUN_112a7c30(int param_1)

{
  if (param_1 == 0) {
    return (undefined4)(0);
  }
  CloseHandle(*(HANDLE *)(param_1 + 0x20));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  CloseHandle(*(HANDLE *)(param_1 + 0x1c));
  return (undefined4)(1);
}


// Reference entry 112a7c70; body size 38 bytes.
#line 1 "ENTRY_112a7c70"

bool FUN_112a7c70(int *param_1)

{
  BOOL BVar1;
  
  if (((int *)(param_1) != (int *)(0x0)) && ((int)(0) < *param_1)) {
    BVar1 = (BOOL)(ReleaseSemaphore((HANDLE)param_1[7],1,(LPLONG)&param_1), 0);
    return (bool)(BVar1 != (BOOL)(0));
  }
  return (bool)(false);
}


// Reference entry 112a7ea0; body size 41 bytes.
#line 1 "ENTRY_112a7ea0"

bool FUN_112a7ea0(undefined4 *param_1)

{
  HANDLE pvVar1;
  
  if ((undefined4 *)(param_1) == (undefined4 *)(0x0)) {
    return (bool)(false);
  }
  pvVar1 = (HANDLE)(CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0), 0);
  *param_1 = (undefined4)(pvVar1);
  param_1[1] = (undefined4)(0);
  return (bool)(pvVar1 != 0x0);
}


// Reference entry 112a7ee0; body size 41 bytes.
#line 1 "ENTRY_112a7ee0"

bool FUN_112a7ee0(undefined4 *param_1)

{
  HANDLE pvVar1;
  
  if ((undefined4 *)(param_1) == (undefined4 *)(0x0)) {
    return (bool)(false);
  }
  pvVar1 = (HANDLE)(CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0), 0);
  *param_1 = (undefined4)(pvVar1);
  param_1[1] = (undefined4)(0);
  return (bool)(pvVar1 != 0x0);
}


// Reference entry 112a7f20; body size 37 bytes.
#line 1 "ENTRY_112a7f20"

void FUN_112a7f20(undefined4 *param_1)

{
  if (((undefined4 *)(param_1) != (undefined4 *)(0x0)) && ((HANDLE)*param_1 != 0x0)) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 112a8010; body size 37 bytes.
#line 1 "ENTRY_112a8010"

bool FUN_112a8010(undefined4 *param_1)

{
  BOOL BVar1;
  
  if (((undefined4 *)(param_1) != (undefined4 *)(0x0)) && ((HANDLE)*param_1 != 0x0)) {
    param_1[1] = (undefined4)(0);
    BVar1 = (BOOL)(ReleaseMutex((HANDLE)*param_1), 0);
    return (bool)(BVar1 != (BOOL)(0));
  }
  return (bool)(false);
}


// Reference entry 112a8280; body size 37 bytes.
#line 1 "ENTRY_112a8280"

void FUN_112a8280(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_112b0270("thread",5,"%s id:%zu pid:%lu %s",param_1[5],*param_1,param_1[1],param_2);
  return;
}


// Reference entry 112a8810; body size 55 bytes.
#line 1 "ENTRY_112a8810"

uint FUN_112a8810(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (((int *)(param_1) != (int *)(0x0)) && (*param_1 != -1)) {
    iVar1 = (int)(Ordinal_10(*param_1,0x8004667e,&param_2), 0);
    return (uint)((uint)(iVar1 != -1));
  }
  return (uint)(0xffffffff);
}


// Reference entry 112a8860; body size 61 bytes.
#line 1 "ENTRY_112a8860"

undefined4 FUN_112a8860(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_4;
  
  local_4 = (undefined4)(0);
  if (((int *)(param_1) != (int *)(0x0)) && (*param_1 != -1)) {
    uVar3 = (undefined4)(0x4004667f);
    iVar1 = (int)(Ordinal_10(*param_1,0x4004667f,&local_4), 0);
    uVar2 = (undefined4)(0);
    if (iVar1 == 0) {
      uVar2 = (undefined4)(uVar3);
    }
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 112a8930; body size 41 bytes.
#line 1 "ENTRY_112a8930"

bool FUN_112a8930(int *param_1)

{
  int iVar1;
  
  if (((int *)(param_1) != (int *)(0x0)) && (iVar1 = (int)(*param_1), iVar1 != -1)) {
    *param_1 = (int)(-1);
    *(undefined1*)(param_1 + 1) = (undefined1)(0);
    iVar1 = (int)(Ordinal_3(iVar1), 0);
    return (bool)(iVar1 == 0);
  }
  return (bool)(false);
}


// Reference entry 112a8b50; body size 40 bytes.
#line 1 "ENTRY_112a8b50"

undefined4 FUN_112a8b50(int *param_1)

{
  int iVar1;
  
  if ((int *)(param_1) != (int *)(0x0)) {
    iVar1 = (int)(Ordinal_23(2,1,0), 0);
    *param_1 = (int)(iVar1);
    if (iVar1 != -1) {
      *(undefined1*)(param_1 + 1) = (undefined1)(0);
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 112a8cc0; body size 61 bytes.
#line 1 "ENTRY_112a8cc0"

void FUN_112a8cc0(void)

{
  undefined1 local_194 [400];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)(uint)&local_194);
  Ordinal_115(0x202,(uint)&local_194);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112a9120; body size 33 bytes.
#line 1 "ENTRY_112a9120"

undefined4 FUN_112a9120(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = (undefined4)(FUN_112a8970(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 112a9160; body size 35 bytes.
#line 1 "ENTRY_112a9160"

bool FUN_112a9160(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (((int *)(param_1) != (int *)(0x0)) && (*param_1 != -1)) {
    iVar1 = (int)(Ordinal_22(*param_1,param_2), 0);
    return (bool)(iVar1 == 0);
  }
  return (bool)(false);
}


// Reference entry 112a9380; body size 21 bytes.
#line 1 "ENTRY_112a9380"

void FUN_112a9380(undefined4 param_1,undefined4 param_2)

{
  FUN_112a8970(0,0,param_1,param_2);
  return;
}


// Reference entry 112a94d0; body size 31 bytes.
#line 1 "ENTRY_112a94d0"

void FUN_112a94d0(int param_1)

{ int stack0x00000008;
 try {
  if (param_1 != 0) {
    FUN_112a9570(param_1,&stack0x00000008);
                    
    exit(1);
  }
  return;

 } catch (...) { }
}


// Reference entry 112a9770; body size 37 bytes.
#line 1 "ENTRY_112a9770"

undefined4 FUN_112a9770(undefined4 *param_1)

{
  HANDLE pvVar1;
  
  if ((undefined4 *)(param_1) != (undefined4 *)(0x0)) {
    pvVar1 = (HANDLE)(CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0), 0);
    *param_1 = (undefined4)(pvVar1);
    if (pvVar1 != 0x0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 112a97a0; body size 22 bytes.
#line 1 "ENTRY_112a97a0"

void FUN_112a97a0(undefined4 *param_1)

{
  if (((undefined4 *)(param_1) != (undefined4 *)(0x0)) && ((HANDLE)*param_1 != 0x0)) {
    CloseHandle((HANDLE)*param_1);
  }
  return;
}


// Reference entry 112a97e0; body size 17 bytes.
#line 1 "ENTRY_112a97e0"

void FUN_112a97e0(undefined4 *param_1)

{
  if ((undefined4 *)(param_1) != (undefined4 *)(0x0)) {
    SetEvent((HANDLE)*param_1);
  }
  return;
}


// Reference entry 112a9800; body size 17 bytes.
#line 1 "ENTRY_112a9800"

void FUN_112a9800(undefined4 *param_1)

{
  if ((undefined4 *)(param_1) != (undefined4 *)(0x0)) {
    ResetEvent((HANDLE)*param_1);
  }
  return;
}


// Reference entry 112a9d20; body size 19 bytes.
#line 1 "ENTRY_112a9d20"

void FUN_112a9d20(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_112a7ee0(param_1,param_2,1);
  return;
}


// Reference entry 112a9da0; body size 31 bytes.
#line 1 "ENTRY_112a9da0"

void FUN_112a9da0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  thunk_FUN_112a8040(param_1,param_2,param_3,param_4,param_5,0);
  return;
}


// Reference entry 112a9f10; body size 33 bytes.
#line 1 "ENTRY_112a9f10"

undefined4 FUN_112a9f10(int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    return (undefined4)(0);
  }
  if ((*(char *)(param_1 + 0x60) == '\0') && (cVar1 = (char)(FUN_112a9f40(param_1), 0), cVar1 == '\0')) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 112aae70; body size 40 bytes.
#line 1 "ENTRY_112aae70"

char * FUN_112aae70(uint param_1)

{
  char *pcVar1;
  
  if ((param_1 & 2) != 0) {
    return (char *)("application/octet");
  }
  if ((param_1 & 4) != 0) {
    return (char *)("text/plain");
  }
  pcVar1 = (char *)("text/html");
  if ((param_1 & 8) == 0) {
    pcVar1 = (char *)("text/xml");
  }
  return (char *)(pcVar1);
}


// Reference entry 112ab370; body size 41 bytes.
#line 1 "ENTRY_112ab370"

void FUN_112ab370(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_1145ddd0(param_1[1],*(undefined4 *)(param_1[1] + 0xc)), 0);
  thunk_FUN_112a0b40(*param_1,uVar1);
  thunk_FUN_1145de30(param_1[1]);
  return;
}


// Reference entry 112ab3b0; body size 43 bytes.
#line 1 "ENTRY_112ab3b0"

void FUN_112ab3b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_4);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(param_5);
  *(undefined1*)(param_1 + 5) = (undefined1)(0);
  return;
}


// Reference entry 112ac1b0; body size 26 bytes.
#line 1 "ENTRY_112ac1b0"

void FUN_112ac1b0(void)

{
  thunk_FUN_112a7f20(DAT_122f6b7c);
  thunk_FUN_112a7f20(DAT_122f6b80);
  return;
}


// Reference entry 112ac970; body size 61 bytes.
#line 1 "ENTRY_112ac970"

void * FUN_112ac970(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  void *_Dst;
  
  if ((char *)(param_2) == (char *)(0x0)) {
    return (void *)((void *)0x0);
  }
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  _Dst = (void *)((void *)thunk_FUN_112ac820(param_1,pcVar2 + (1 - (int)(param_2 + 1))), 0);
  memcpy(_Dst,param_2,(size_t)(pcVar2 + (1 - (int)(param_2 + 1))));
  return (void *)(_Dst);
}


// Reference entry 112acda0; body size 63 bytes.
#line 1 "ENTRY_112acda0"

void FUN_112acda0(int param_1)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  
  uVar3 = (uint)(*(uint *)(*(int *)(param_1 + 0x130) + 0xc));
  uVar1 = (uint)(uVar3 + *(int *)(*(int *)(param_1 + 0x130) + 8) * 0xc);
  for (; uVar3 < uVar1; uVar3 = uVar3 + 0xc) {
    if ((*(int *)(uVar3 + 4) != 0) &&
       (pcVar2 = (code *)(*(code **)(*(int *)(uVar3 + 4) + 100), 0),(code *)( pcVar2) != (code *)(0x0))) {
      (*pcVar2)(param_1);
    }
  }
  return;
}


// Reference entry 112acdf0; body size 63 bytes.
#line 1 "ENTRY_112acdf0"

void FUN_112acdf0(int param_1)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  
  uVar3 = (uint)(*(uint *)(*(int *)(param_1 + 0x130) + 0xc));
  uVar1 = (uint)(uVar3 + *(int *)(*(int *)(param_1 + 0x130) + 8) * 0xc);
  for (; uVar3 < uVar1; uVar3 = uVar3 + 0xc) {
    if ((*(int *)(uVar3 + 4) != 0) &&
       (pcVar2 = (code *)(*(code **)(*(int *)(uVar3 + 4) + 0x5c), 0),(code *)( pcVar2) != (code *)(0x0))) {
      (*pcVar2)(param_1);
    }
  }
  return;
}


// Reference entry 112ace40; body size 63 bytes.
#line 1 "ENTRY_112ace40"

void FUN_112ace40(int param_1)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  
  uVar3 = (uint)(*(uint *)(*(int *)(param_1 + 0x130) + 0xc));
  uVar1 = (uint)(uVar3 + *(int *)(*(int *)(param_1 + 0x130) + 8) * 0xc);
  for (; uVar3 < uVar1; uVar3 = uVar3 + 0xc) {
    if ((*(int *)(uVar3 + 4) != 0) &&
       (pcVar2 = (code *)(*(code **)(*(int *)(uVar3 + 4) + 0x60), 0),(code *)( pcVar2) != (code *)(0x0))) {
      (*pcVar2)(param_1);
    }
  }
  return;
}


// Reference entry 112ad0e0; body size 63 bytes.
#line 1 "ENTRY_112ad0e0"

void FUN_112ad0e0(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  
  iVar2 = (int)(*(int *)(*(int *)(param_1 + 0x20) + 0x130));
  uVar4 = (uint)(*(uint *)(iVar2 + 0xc));
  uVar1 = (uint)(uVar4 + *(int *)(iVar2 + 8) * 0xc);
  for (; uVar4 < uVar1; uVar4 = uVar4 + 0xc) {
    if ((*(int *)(uVar4 + 4) != 0) &&
       (pcVar3 = (code *)(*(code **)(*(int *)(uVar4 + 4) + 0x70), 0),(code *)( pcVar3) != (code *)(0x0))) {
      (*pcVar3)(param_1);
    }
  }
  return;
}


// Reference entry 112ad130; body size 63 bytes.
#line 1 "ENTRY_112ad130"

void FUN_112ad130(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  
  iVar2 = (int)(*(int *)(*(int *)(param_1 + 0x20) + 0x130));
  uVar4 = (uint)(*(uint *)(iVar2 + 0xc));
  uVar1 = (uint)(uVar4 + *(int *)(iVar2 + 8) * 0xc);
  for (; uVar4 < uVar1; uVar4 = uVar4 + 0xc) {
    if ((*(int *)(uVar4 + 4) != 0) &&
       (pcVar3 = (code *)(*(code **)(*(int *)(uVar4 + 4) + 0x6c), 0),(code *)( pcVar3) != (code *)(0x0))) {
      (*pcVar3)(param_1);
    }
  }
  return;
}


// Reference entry 112adb20; body size 35 bytes.
#line 1 "ENTRY_112adb20"

void FUN_112adb20(int param_1,char *param_2)

{
  if (*param_2 != (char)(('/'))) {
    thunk_FUN_112af420(*(undefined4 *)(param_1 + 300),*(undefined4 *)(param_1 + 0x90),param_2);
  }
  return;
}


// Reference entry 112ae930; body size 23 bytes.
#line 1 "ENTRY_112ae930"

void FUN_112ae930(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_1129e0d0(0x40,0xc), 0);
  *(undefined4*)(param_1 + 0x130) = (undefined4)(uVar1);
  return;
}


// Reference entry 112af170; body size 32 bytes.
#line 1 "ENTRY_112af170"

void FUN_112af170(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4*)(*(int *)(*(int *)(param_1 + 0x130) + 0xc) + 8 + *(int *)(param_2 + 8) * 0xc) = (undefined4)(param_3);
  return;
}


// Reference entry 112af4e0; body size 26 bytes.
#line 1 "ENTRY_112af4e0"

void FUN_112af4e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{ int stack0x00000010;
 try {
  FUN_112afbd0(param_1,param_2,param_3,&stack0x00000010);
  return;

 } catch (...) { }
}


// Reference entry 112b0270; body size 38 bytes.
#line 1 "ENTRY_112b0270"

void FUN_112b0270(undefined4 param_1,int param_2,undefined4 param_3)

{ int stack0x00000010;
 try {
  int iVar1;
  
  iVar1 = (int)(param_2 + -3);
  if (param_2 < 3) {
    iVar1 = (int)(0);
  }
  thunk_FUN_112afbd0(param_1,iVar1,param_3,&stack0x00000010);
  return;

 } catch (...) { }
}


// Reference entry 112b0310; body size 30 bytes.
#line 1 "ENTRY_112b0310"

longlong FUN_112b0310(void)

{
  __time64_t _Var1;
  
  _Var1 = (__time64_t)(_time64((__time64_t *)0x0), 0);
  return (longlong)(_Var1 + ((unsigned long long)(DAT_122f6bdc) << 32 | (unsigned long long)(DAT_122f6bd8)));
}


// Reference entry 112b04b0; body size 53 bytes.
#line 1 "ENTRY_112b04b0"

uint FUN_112b04b0(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (uint)(0x811c9dc5);
  if ((byte *)(param_1) == (byte *)(0x0)) {
    return (uint)(0);
  }
  bVar1 = (byte)(*param_1);
  while (bVar1 != 0) {
    param_1 = (byte *)(param_1 + 1);
    uVar2 = (uint)(uVar2 * 0x1000193 ^ (uint)bVar1);
    bVar1 = (byte)(*param_1);
  }
  return (uint)(uVar2);
}


// Reference entry 112b0880; body size 43 bytes.
#line 1 "ENTRY_112b0880"

void FUN_112b0880(undefined4 *param_1)

{
  if ((undefined4 *)(param_1) != (undefined4 *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
  }
  return;
}


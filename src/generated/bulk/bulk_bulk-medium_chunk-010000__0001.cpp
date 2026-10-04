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
namespace std { template<class... A> int _Xbad_function_call(A...); template<class... A> int _Xout_of_range(A...); }
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int getSingleton(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); static int op_ctor(...) { return 0; } static int op_eq(...) { return 0; } static int op_lt(...) { return 0; } };
template<class...> struct pair { char _pad; pair(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int op_dtor(...) { return 0; } };
struct AccountSignInWizard { char _pad; AccountSignInWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct AlexaAuthWizard { char _pad; AlexaAuthWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct AlexaAuthenticationWizard { char _pad; AlexaAuthenticationWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Cancel { char _pad; Cancel(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Canceling { char _pad; Canceling(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ChannelMapSet { char _pad; ChannelMapSet(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Check { char _pad; Check(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ClearSearchHistory { char _pad; ClearSearchHistory(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Close { char _pad; Close(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ContainerID { char _pad; ContainerID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DesiredTimeServer { char _pad; DesiredTimeServer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DisplayCustomControl { char _pad; DisplayCustomControl(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Dtls { char _pad; Dtls(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Email { char _pad; Email(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Error { char _pad; Error(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Event { char _pad; Event(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct History { char _pad; History(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct InfoViewWrapper { char _pad; InfoViewWrapper(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct InvalidateStack { char _pad; InvalidateStack(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct KeepAlive { char _pad; KeepAlive(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct LEDFeedbackState { char _pad; LEDFeedbackState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Match { char _pad; Match(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct MenuDismissSetting { char _pad; MenuDismissSetting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct MenuSelectSetting { char _pad; MenuSelectSetting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Netstart2Manager { char _pad; Netstart2Manager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Not { char _pad; Not(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Password { char _pad; Password(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RadioDatasource { char _pad; RadioDatasource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Re { char _pad; Re(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Remove { char _pad; Remove(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RenameLineIn { char _pad; RenameLineIn(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAccountEmailItem { char _pad; SCAccountEmailItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAccountSettingsDataSource { char _pad; SCAccountSettingsDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAccountSignInItem { char _pad; SCAccountSignInItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAlexaAuthReminderState { char _pad; SCAlexaAuthReminderState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAsyncBrowseDataSource { char _pad; SCAsyncBrowseDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCDateTimeManager { char _pad; SCDateTimeManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCDeleteVoiceAccountAction { char _pad; SCDeleteVoiceAccountAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategoryDefault { char _pad; SCIActionCategoryDefault(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategoryEdit { char _pad; SCIActionCategoryEdit(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategoryPush { char _pad; SCIActionCategoryPush(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategorySettings { char _pad; SCIActionCategorySettings(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionContext { char _pad; SCIActionContext(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBrowseItem { char _pad; SCIBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIDateTimeManager { char _pad; SCIDateTimeManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIHousehold { char _pad; SCIHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIIntegerSettingsProperty { char _pad; SCIIntegerSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCINowPlaying { char _pad; SCINowPlaying(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIStringFromCustomSettingsProperty { char _pad; SCIStringFromCustomSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIStringFromListSettingsProperty { char _pad; SCIStringFromListSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIWizard { char _pad; SCIWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCLegacyMusicLibrarySetupWizard { char _pad; SCLegacyMusicLibrarySetupWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCLegacyWelcomeLoginWizard { char _pad; SCLegacyWelcomeLoginWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCLifecycleMixedLegacyWizard { char _pad; SCLifecycleMixedLegacyWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCLifecycleModernWizard { char _pad; SCLifecycleModernWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCMyPlaylistsDataSource { char _pad; SCMyPlaylistsDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCOpCheckForUpdate { char _pad; SCOpCheckForUpdate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCOpSendSetupMessage { char _pad; SCOpSendSetupMessage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCOpVerifyProduct { char _pad; SCOpVerifyProduct(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCPasswordResetURLHandler { char _pad; SCPasswordResetURLHandler(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCPopulateMusicServiceContentAction { char _pad; SCPopulateMusicServiceContentAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSearchHistoryBrowseDataSource { char _pad; SCSearchHistoryBrowseDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSearchHistoryBrowseItem { char _pad; SCSearchHistoryBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSearchHistoryPageDataSource { char _pad; SCSearchHistoryPageDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSearchPageDataSource { char _pad; SCSearchPageDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSearchResultBrowseItem { char _pad; SCSearchResultBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSearchViewBrowseItem { char _pad; SCSearchViewBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCShare { char _pad; SCShare(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSwfObjACInternalListener { char _pad; SCSwfObjACInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCVerifyEmailURLHandler { char _pad; SCVerifyEmailURLHandler(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCVoiceResponseHandler { char _pad; SCVoiceResponseHandler(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Search { char _pad; Search(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SecureExistingWizard { char _pad; SecureExistingWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SecurePlayerWizard { char _pad; SecurePlayerWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SecureRegistrationWizard { char _pad; SecureRegistrationWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SecureTransferWizard { char _pad; SecureTransferWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ShareMusic { char _pad; ShareMusic(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Sink { char _pad; Sink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SliderSelectSetting { char _pad; SliderSelectSetting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SonanceDetectionWizard { char _pad; SonanceDetectionWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Stop { char _pad; Stop(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ToggleBoolSetting { char _pad; ToggleBoolSetting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UnknownWizardType { char _pad; UnknownWizardType(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *CUSTOM_SUB_WIZARD_LIBRARY_SETUP;
typedef void *K;
typedef void *REST;
typedef void *STATE_ALEXA_AUTH_AUTH_SUCCESS;
typedef void *STATE_ALEXA_AUTH_CHECKLIST_DOWNLOAD_ALEXA;
typedef void *STATE_ALEXA_AUTH_CHECKLIST_MSP_ALEXA_EDUCATION;
typedef void *STATE_ALEXA_AUTH_CHECKLIST_VOICE_EDUCATION;
typedef void *STATE_ALEXA_AUTH_COMPLETE;
typedef void *STATE_ALEXA_AUTH_GENERIC_ERROR;
typedef void *STATE_ALEXA_AUTH_INIT;
typedef void *STATE_ALEXA_AUTH_INTRO_STATE;
typedef void *STATE_ALEXA_AUTH_LOW_MEMORY_ERROR;
typedef void *STATE_ALEXA_AUTH_LWA;
typedef void *STATE_ALEXA_AUTH_MIC_INFO;
typedef void *STATE_ALEXA_AUTH_MISSING_PLAYERS_ERROR;
typedef void *STATE_ALEXA_AUTH_PUSH_AUTH_CODE;
typedef void *STATE_ALEXA_AUTH_ROOM;
typedef void *STATE_ALEXA_AUTH_WRONG_ACCOUNT_ERROR;
typedef void *STATE_ALEXA_ENABLE_ACK_CHIME_SPINNER_STATE;
typedef void *STATE_ALEXA_ENABLE_ACK_CHIME_STATE;
typedef void *STATE_ALEXA_SETUP_MUSIC_SERVICES_STATE;
typedef void *STATE_SECURE_EXISTING_BEGIN_SECURE_TRANSFER;
typedef void *STATE_SECURE_EXISTING_BUTTONS;
typedef void *STATE_SECURE_EXISTING_CHECK_EXISTING;
typedef void *STATE_SECURE_EXISTING_COMPLETE;
typedef void *STATE_SECURE_EXISTING_EMAIL;
typedef void *STATE_SECURE_EXISTING_ERROR_NETWORK;
typedef void *STATE_SECURE_EXISTING_FINISH_SECURE_REG;
typedef void *STATE_SECURE_EXISTING_INIT;
typedef void *STATE_SECURE_EXISTING_KNOWN_EMAIL_MATCH;
typedef void *STATE_SECURE_EXISTING_ORPHAN_ACCOUNT_NO_ACCESS;
typedef void *STATE_SECURE_EXISTING_PRESS_BUTTON;
typedef void *STATE_SECURE_EXISTING_SPEAKER_CHOICE;
typedef void *STATE_SECURE_EXISTING_SYSTEM_REGISTRATION_LOOKUP;
typedef void *STATE_SECURE_EXISTING_WAITING_FOR_TRANSFER;
typedef void *STATE_SECURE_TRANSFER_BEGIN_SECURE_TRANSFER;
typedef void *STATE_SECURE_TRANSFER_COMPLETE;
typedef void *STATE_SECURE_TRANSFER_ERROR_NETWORK;
typedef void *STATE_SECURE_TRANSFER_EXISTING_BUTTONS;
typedef void *STATE_SECURE_TRANSFER_INIT;
typedef void *STATE_SECURE_TRANSFER_INTRO;
typedef void *STATE_SECURE_TRANSFER_PLAYER_SUCCESS;
typedef void *STATE_SECURE_TRANSFER_PRESS_BUTTON;
typedef void *STATE_SECURE_TRANSFER_SPEAKER_CHOICE;
typedef void *STATE_SECURE_TRANSFER_WAITING_FOR_TRANSFER;
typedef void *T;
typedef void *UDN;
typedef void *WARNING;
using namespace std;
struct Recovered_Bulk { char _pad; undefined4 __thiscall m_FUN_10d5e6a0(byte param_2); template<class... A> int m_FUN_10d5e6a0(A...); undefined4 __thiscall m_FUN_10d5e880(byte param_2); template<class... A> int m_FUN_10d5e880(A...); int * __thiscall m_FUN_10d5f490(int *param_2,int param_3); template<class... A> int m_FUN_10d5f490(A...); undefined4 __thiscall m_FUN_10d61370(byte param_2); template<class... A> int m_FUN_10d61370(A...); int * __thiscall m_FUN_10d61e70(int *param_2,uint param_3); template<class... A> int m_FUN_10d61e70(A...); void __thiscall m_FUN_10d63d20(int param_2); template<class... A> int m_FUN_10d63d20(A...); undefined4 * __thiscall m_FUN_10d63ea0(int *param_2); template<class... A> int m_FUN_10d63ea0(A...); undefined4 * __thiscall m_FUN_10d63ee0(int *param_2); template<class... A> int m_FUN_10d63ee0(A...); undefined4 * __thiscall m_FUN_10d64c90(byte param_2); template<class... A> int m_FUN_10d64c90(A...); undefined4 * __thiscall m_FUN_10d64cd0(byte param_2); template<class... A> int m_FUN_10d64cd0(A...); undefined4 * __thiscall m_FUN_10d64d10(byte param_2); template<class... A> int m_FUN_10d64d10(A...); undefined4 * __thiscall m_FUN_10d64d40(byte param_2); template<class... A> int m_FUN_10d64d40(A...); undefined4 * __thiscall m_FUN_10d64d70(byte param_2); template<class... A> int m_FUN_10d64d70(A...); undefined4 * __thiscall m_FUN_10d64da0(byte param_2); template<class... A> int m_FUN_10d64da0(A...); undefined4 * __thiscall m_FUN_10d65030(byte param_2); template<class... A> int m_FUN_10d65030(A...); void __thiscall m_FUN_10d652f0(undefined4 *param_2); template<class... A> int m_FUN_10d652f0(A...); void __thiscall m_FUN_10d65310(undefined4 *param_2); template<class... A> int m_FUN_10d65310(A...); void __thiscall m_FUN_10d65330(char param_2); template<class... A> int m_FUN_10d65330(A...); void __thiscall m_FUN_10d65350(char param_2); template<class... A> int m_FUN_10d65350(A...); void __thiscall m_FUN_10d653c0(undefined4 *param_2); template<class... A> int m_FUN_10d653c0(A...); void __thiscall m_FUN_10d653e0(undefined4 *param_2); template<class... A> int m_FUN_10d653e0(A...); void __thiscall m_FUN_10d654c0(int param_2); template<class... A> int m_FUN_10d654c0(A...); int * __thiscall m_FUN_10d65ca0(int *param_2); template<class... A> int m_FUN_10d65ca0(A...); int * __thiscall m_FUN_10d65ce0(int *param_2); template<class... A> int m_FUN_10d65ce0(A...); int * __thiscall m_FUN_10d666f0(int *param_2,uint param_3); template<class... A> int m_FUN_10d666f0(A...); SCStr * __thiscall m_FUN_10d66740(SCStr *param_2); template<class... A> int m_FUN_10d66740(A...); SCStr * __thiscall m_FUN_10d66970(SCStr *param_2); template<class... A> int m_FUN_10d66970(A...); SCStr * __thiscall m_FUN_10d66cc0(SCStr *param_2); template<class... A> int m_FUN_10d66cc0(A...); SCStr * __thiscall m_FUN_10d66e30(SCStr *param_2); template<class... A> int m_FUN_10d66e30(A...); void __thiscall m_FUN_10d684c0(undefined4 param_2); template<class... A> int m_FUN_10d684c0(A...); int __thiscall m_FUN_10d685b0(uint *param_2); template<class... A> int m_FUN_10d685b0(A...); undefined4 * __thiscall m_FUN_10d6a130(byte param_2); template<class... A> int m_FUN_10d6a130(A...); undefined4 * __thiscall m_FUN_10d6a1f0(byte param_2); template<class... A> int m_FUN_10d6a1f0(A...); int * __thiscall m_FUN_10d6bf60(int *param_2); template<class... A> int m_FUN_10d6bf60(A...); SCStr * __thiscall m_FUN_10d6d430(SCStr *param_2); template<class... A> int m_FUN_10d6d430(A...); undefined4 __thiscall m_FUN_10d6d450(undefined4 param_2); template<class... A> int m_FUN_10d6d450(A...); int * __thiscall m_FUN_10d6d470(int *param_2); template<class... A> int m_FUN_10d6d470(A...); SCStr * __thiscall m_FUN_10d6d490(SCStr *param_2); template<class... A> int m_FUN_10d6d490(A...); undefined4 __thiscall m_FUN_10d6d850(int param_2); template<class... A> int m_FUN_10d6d850(A...); SCStr * __thiscall m_FUN_10d6d880(SCStr *param_2,int param_3,undefined4 param_4); template<class... A> int m_FUN_10d6d880(A...); void __thiscall m_FUN_10d70fc0(undefined4 param_2); template<class... A> int m_FUN_10d70fc0(A...); void __thiscall m_FUN_10d71000(undefined4 param_2); template<class... A> int m_FUN_10d71000(A...); void __thiscall m_FUN_10d71030(undefined4 param_2); template<class... A> int m_FUN_10d71030(A...); undefined4 * __thiscall m_FUN_10d74540(int *param_2); template<class... A> int m_FUN_10d74540(A...); undefined4 * __thiscall m_FUN_10d74580(int *param_2); template<class... A> int m_FUN_10d74580(A...); undefined4 * __thiscall m_FUN_10d745c0(int *param_2); template<class... A> int m_FUN_10d745c0(A...); undefined4 __thiscall m_FUN_10d76180(byte param_2); template<class... A> int m_FUN_10d76180(A...); undefined4 __thiscall m_FUN_10d761b0(byte param_2); template<class... A> int m_FUN_10d761b0(A...); undefined4 __thiscall m_FUN_10d761e0(byte param_2); template<class... A> int m_FUN_10d761e0(A...); undefined4 * __thiscall m_FUN_10d76210(byte param_2); template<class... A> int m_FUN_10d76210(A...); undefined4 __thiscall m_FUN_10d762f0(byte param_2); template<class... A> int m_FUN_10d762f0(A...); undefined4 __thiscall m_FUN_10d76320(byte param_2); template<class... A> int m_FUN_10d76320(A...); undefined4 * __thiscall m_FUN_10d76590(byte param_2); template<class... A> int m_FUN_10d76590(A...); int * __thiscall m_FUN_10d7c010(int *param_2); template<class... A> int m_FUN_10d7c010(A...); undefined4 * __thiscall m_FUN_10d7ca90(int *param_2); template<class... A> int m_FUN_10d7ca90(A...); undefined4 * __thiscall m_FUN_10d7cad0(int *param_2); template<class... A> int m_FUN_10d7cad0(A...); undefined4 * __thiscall m_FUN_10d7cb10(int *param_2); template<class... A> int m_FUN_10d7cb10(A...); undefined4 * __thiscall m_FUN_10d7cb50(int *param_2); template<class... A> int m_FUN_10d7cb50(A...); undefined4 * __thiscall m_FUN_10d7cb90(int *param_2); template<class... A> int m_FUN_10d7cb90(A...); undefined4 * __thiscall m_FUN_10d7cbd0(int *param_2); template<class... A> int m_FUN_10d7cbd0(A...); undefined4 * __thiscall m_FUN_10d7cc10(int *param_2); template<class... A> int m_FUN_10d7cc10(A...); undefined4 * __thiscall m_FUN_10d7cc50(int *param_2); template<class... A> int m_FUN_10d7cc50(A...); int * __thiscall m_FUN_10d82200(int *param_2); template<class... A> int m_FUN_10d82200(A...); undefined4 * __thiscall m_FUN_10d82320(byte param_2); template<class... A> int m_FUN_10d82320(A...); undefined4 * __thiscall m_FUN_10d82350(byte param_2); template<class... A> int m_FUN_10d82350(A...); undefined4 * __thiscall m_FUN_10d82380(byte param_2); template<class... A> int m_FUN_10d82380(A...); undefined4 __thiscall m_FUN_10d823b0(byte param_2); template<class... A> int m_FUN_10d823b0(A...); undefined4 __thiscall m_FUN_10d823e0(byte param_2); template<class... A> int m_FUN_10d823e0(A...); undefined4 __thiscall m_FUN_10d82410(byte param_2); template<class... A> int m_FUN_10d82410(A...); undefined4 __thiscall m_FUN_10d82440(byte param_2); template<class... A> int m_FUN_10d82440(A...); undefined4 __thiscall m_FUN_10d82470(byte param_2); template<class... A> int m_FUN_10d82470(A...); undefined4 __thiscall m_FUN_10d82660(byte param_2); template<class... A> int m_FUN_10d82660(A...); undefined4 __thiscall m_FUN_10d82690(byte param_2); template<class... A> int m_FUN_10d82690(A...); undefined4 __thiscall m_FUN_10d826c0(byte param_2); template<class... A> int m_FUN_10d826c0(A...); undefined4 * __thiscall m_FUN_10d826f0(byte param_2); template<class... A> int m_FUN_10d826f0(A...); undefined4 * __thiscall m_FUN_10d82730(byte param_2); template<class... A> int m_FUN_10d82730(A...); undefined4 * __thiscall m_FUN_10d82760(byte param_2); template<class... A> int m_FUN_10d82760(A...); undefined4 * __thiscall m_FUN_10d82790(byte param_2); template<class... A> int m_FUN_10d82790(A...); undefined4 * __thiscall m_FUN_10d827c0(byte param_2); template<class... A> int m_FUN_10d827c0(A...); undefined4 * __thiscall m_FUN_10d82960(byte param_2); template<class... A> int m_FUN_10d82960(A...); undefined4 * __thiscall m_FUN_10d82990(byte param_2); template<class... A> int m_FUN_10d82990(A...); undefined4 * __thiscall m_FUN_10d829d0(byte param_2); template<class... A> int m_FUN_10d829d0(A...); undefined4 * __thiscall m_FUN_10d82a10(byte param_2); template<class... A> int m_FUN_10d82a10(A...); undefined4 * __thiscall m_FUN_10d82a50(byte param_2); template<class... A> int m_FUN_10d82a50(A...); SCStr * __thiscall m_FUN_10d83560(SCStr *param_2); template<class... A> int m_FUN_10d83560(A...); SCStr * __thiscall m_FUN_10d83580(SCStr *param_2); template<class... A> int m_FUN_10d83580(A...); SCStr * __thiscall m_FUN_10d835a0(SCStr *param_2); template<class... A> int m_FUN_10d835a0(A...); SCStr * __thiscall m_FUN_10d838d0(SCStr *param_2); template<class... A> int m_FUN_10d838d0(A...); SCStr * __thiscall m_FUN_10d838f0(SCStr *param_2); template<class... A> int m_FUN_10d838f0(A...); SCStr * __thiscall m_FUN_10d83980(SCStr *param_2); template<class... A> int m_FUN_10d83980(A...); SCStr * __thiscall m_FUN_10d839a0(SCStr *param_2); template<class... A> int m_FUN_10d839a0(A...); SCStr * __thiscall m_FUN_10d839c0(SCStr *param_2); template<class... A> int m_FUN_10d839c0(A...); SCStr * __thiscall m_FUN_10d83b10(SCStr *param_2); template<class... A> int m_FUN_10d83b10(A...); SCStr * __thiscall m_FUN_10d83b30(SCStr *param_2); template<class... A> int m_FUN_10d83b30(A...); SCStr * __thiscall m_FUN_10d83b50(SCStr *param_2); template<class... A> int m_FUN_10d83b50(A...); SCStr * __thiscall m_FUN_10d83b90(SCStr *param_2); template<class... A> int m_FUN_10d83b90(A...); SCStr * __thiscall m_FUN_10d83bb0(SCStr *param_2); template<class... A> int m_FUN_10d83bb0(A...); undefined4 * __thiscall m_FUN_10d87c20(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10d87c20(A...); undefined4 * __thiscall m_FUN_10d88060(int *param_2); template<class... A> int m_FUN_10d88060(A...); undefined4 * __thiscall m_FUN_10d88cc0(byte param_2); template<class... A> int m_FUN_10d88cc0(A...); undefined4 __thiscall m_FUN_10d8aea0(byte param_2); template<class... A> int m_FUN_10d8aea0(A...); void __thiscall m_FUN_10d8be90(int param_2); template<class... A> int m_FUN_10d8be90(A...); void __thiscall m_FUN_10d8bec0(int param_2); template<class... A> int m_FUN_10d8bec0(A...); undefined4 __thiscall m_FUN_10d8d410(byte param_2); template<class... A> int m_FUN_10d8d410(A...); undefined4 __thiscall m_FUN_10d8d4f0(byte param_2); template<class... A> int m_FUN_10d8d4f0(A...); undefined4 __thiscall m_FUN_10d8d530(byte param_2); template<class... A> int m_FUN_10d8d530(A...); undefined4 __thiscall m_FUN_10d8d600(byte param_2); template<class... A> int m_FUN_10d8d600(A...); undefined4 __thiscall m_FUN_10d8d630(byte param_2); template<class... A> int m_FUN_10d8d630(A...); void __thiscall m_FUN_10d8d670(int param_2); template<class... A> int m_FUN_10d8d670(A...); void __thiscall m_FUN_10d8d6a0(int param_2); template<class... A> int m_FUN_10d8d6a0(A...); undefined4 * __thiscall m_FUN_10d90800(int *param_2); template<class... A> int m_FUN_10d90800(A...); undefined4 * __thiscall m_FUN_10d94070(int *param_2); template<class... A> int m_FUN_10d94070(A...); undefined4 * __thiscall m_FUN_10d940b0(int *param_2); template<class... A> int m_FUN_10d940b0(A...); undefined4 * __thiscall m_FUN_10d940f0(int *param_2); template<class... A> int m_FUN_10d940f0(A...); undefined4 * __thiscall m_FUN_10d947f0(byte param_2); template<class... A> int m_FUN_10d947f0(A...); undefined4 * __thiscall m_FUN_10d97380(int *param_2); template<class... A> int m_FUN_10d97380(A...); undefined4 * __thiscall m_FUN_10d973c0(int *param_2); template<class... A> int m_FUN_10d973c0(A...); undefined4 __thiscall m_FUN_10d97800(byte param_2); template<class... A> int m_FUN_10d97800(A...); void __thiscall m_FUN_10d9aa40(int param_2); template<class... A> int m_FUN_10d9aa40(A...); undefined4 * __thiscall m_FUN_10d9acb0(int *param_2); template<class... A> int m_FUN_10d9acb0(A...); undefined4 * __thiscall m_FUN_10d9ad30(int *param_2); template<class... A> int m_FUN_10d9ad30(A...); undefined4 * __thiscall m_FUN_10d9be10(byte param_2); template<class... A> int m_FUN_10d9be10(A...); undefined4 __thiscall m_FUN_10d9be50(byte param_2); template<class... A> int m_FUN_10d9be50(A...); undefined4 * __thiscall m_FUN_10d9be80(byte param_2); template<class... A> int m_FUN_10d9be80(A...); undefined4 * __thiscall m_FUN_10d9beb0(byte param_2); template<class... A> int m_FUN_10d9beb0(A...); undefined4 * __thiscall m_FUN_10d9bee0(byte param_2); template<class... A> int m_FUN_10d9bee0(A...); undefined4 * __thiscall m_FUN_10d9bf20(byte param_2); template<class... A> int m_FUN_10d9bf20(A...); undefined4 * __thiscall m_FUN_10d9bf60(byte param_2); template<class... A> int m_FUN_10d9bf60(A...); undefined4 * __thiscall m_FUN_10d9bfa0(byte param_2); template<class... A> int m_FUN_10d9bfa0(A...); undefined4 * __thiscall m_FUN_10d9c0b0(byte param_2); template<class... A> int m_FUN_10d9c0b0(A...); void __thiscall m_FUN_10d9c6c0(int *param_2); template<class... A> int m_FUN_10d9c6c0(A...); void __thiscall m_FUN_10d9c710(int param_2); template<class... A> int m_FUN_10d9c710(A...); int __thiscall m_FUN_10d9c780(int param_2); template<class... A> int m_FUN_10d9c780(A...); undefined4 * __thiscall m_FUN_10d9e230(int *param_2); template<class... A> int m_FUN_10d9e230(A...); void __thiscall m_FUN_10d9e560(char param_2); template<class... A> int m_FUN_10d9e560(A...); SCStr * __thiscall m_FUN_10d9e5d0(SCStr *param_2); template<class... A> int m_FUN_10d9e5d0(A...); void __thiscall m_FUN_10d9e5f0(int *param_2); template<class... A> int m_FUN_10d9e5f0(A...); void __thiscall m_FUN_10d9e6d0(SCStr *param_2); template<class... A> int m_FUN_10d9e6d0(A...); void __thiscall m_FUN_10d9ec60(undefined4 param_2); template<class... A> int m_FUN_10d9ec60(A...); int __thiscall m_FUN_10d9ed50(int *param_2); template<class... A> int m_FUN_10d9ed50(A...); undefined4 * __thiscall m_FUN_10da1ff0(int *param_2); template<class... A> int m_FUN_10da1ff0(A...); undefined4 * __thiscall m_FUN_10da2550(byte param_2); template<class... A> int m_FUN_10da2550(A...); undefined4 * __thiscall m_FUN_10da2590(byte param_2); template<class... A> int m_FUN_10da2590(A...); undefined4 * __thiscall m_FUN_10da4700(int param_2); template<class... A> int m_FUN_10da4700(A...); undefined4 * __thiscall m_FUN_10da4750(int *param_2); template<class... A> int m_FUN_10da4750(A...); undefined4 * __thiscall m_FUN_10da4790(int *param_2); template<class... A> int m_FUN_10da4790(A...); undefined4 * __thiscall m_FUN_10da47d0(int *param_2); template<class... A> int m_FUN_10da47d0(A...); undefined4 * __thiscall m_FUN_10da5790(byte param_2); template<class... A> int m_FUN_10da5790(A...); undefined4 * __thiscall m_FUN_10da57d0(byte param_2); template<class... A> int m_FUN_10da57d0(A...); int __thiscall m_FUN_10da5810(byte param_2); template<class... A> int m_FUN_10da5810(A...); undefined4 * __thiscall m_FUN_10da5860(byte param_2); template<class... A> int m_FUN_10da5860(A...); undefined4 * __thiscall m_FUN_10da58a0(byte param_2); template<class... A> int m_FUN_10da58a0(A...); undefined4 * __thiscall m_FUN_10da58f0(byte param_2); template<class... A> int m_FUN_10da58f0(A...); undefined4 * __thiscall m_FUN_10da5940(byte param_2); template<class... A> int m_FUN_10da5940(A...); undefined4 * __thiscall m_FUN_10da5990(byte param_2); template<class... A> int m_FUN_10da5990(A...); undefined4 * __thiscall m_FUN_10da5ae0(byte param_2); template<class... A> int m_FUN_10da5ae0(A...); undefined4 * __thiscall m_FUN_10da5b10(byte param_2); template<class... A> int m_FUN_10da5b10(A...); void __thiscall m_FUN_10da5bf0(char param_2); template<class... A> int m_FUN_10da5bf0(A...); void __thiscall m_FUN_10da5c40(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_10da5c40(A...); void __thiscall m_FUN_10da6880(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10da6880(A...); undefined4 __thiscall m_FUN_10da6c80(undefined4 param_2); template<class... A> int m_FUN_10da6c80(A...); undefined4 __thiscall m_FUN_10da7930(undefined4 param_2); template<class... A> int m_FUN_10da7930(A...); undefined4 * __thiscall m_FUN_10da8ea0(byte param_2); template<class... A> int m_FUN_10da8ea0(A...); void __thiscall m_FUN_10daa070(int param_2); template<class... A> int m_FUN_10daa070(A...); undefined4 * __thiscall m_FUN_10daa110(int *param_2); template<class... A> int m_FUN_10daa110(A...); undefined4 * __thiscall m_FUN_10daa7a0(byte param_2); template<class... A> int m_FUN_10daa7a0(A...); void __thiscall m_FUN_10daa990(int param_2); template<class... A> int m_FUN_10daa990(A...); undefined4 __thiscall m_FUN_10dae5c0(byte param_2); template<class... A> int m_FUN_10dae5c0(A...); int * __thiscall m_FUN_10db2230(int *param_2); template<class... A> int m_FUN_10db2230(A...); SCStr * __thiscall m_FUN_10db4920(SCStr *param_2); template<class... A> int m_FUN_10db4920(A...); undefined4 * __thiscall m_FUN_10db66e0(int *param_2); template<class... A> int m_FUN_10db66e0(A...); undefined4 * __thiscall m_FUN_10db9020(byte param_2); template<class... A> int m_FUN_10db9020(A...); undefined4 * __thiscall m_FUN_10db9060(byte param_2); template<class... A> int m_FUN_10db9060(A...); undefined4 __thiscall m_FUN_10db90b0(byte param_2); template<class... A> int m_FUN_10db90b0(A...); undefined4 * __thiscall m_FUN_10db90e0(byte param_2); template<class... A> int m_FUN_10db90e0(A...); undefined4 * __thiscall m_FUN_10db92a0(byte param_2); template<class... A> int m_FUN_10db92a0(A...); undefined4 __thiscall m_FUN_10db9690(byte param_2); template<class... A> int m_FUN_10db9690(A...); undefined4 __thiscall m_FUN_10db9880(byte param_2); template<class... A> int m_FUN_10db9880(A...); void __thiscall m_FUN_10db99c0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10db99c0(A...); void __thiscall m_FUN_10dbb680(int param_2); template<class... A> int m_FUN_10dbb680(A...); SCStr * __thiscall m_FUN_10dc5c20(SCStr *param_2); template<class... A> int m_FUN_10dc5c20(A...); int * __thiscall m_FUN_10dc5d40(int *param_2); template<class... A> int m_FUN_10dc5d40(A...); void __thiscall m_FUN_10dc7a70(int param_2); template<class... A> int m_FUN_10dc7a70(A...); undefined4 __thiscall m_FUN_10dcae90(byte param_2); template<class... A> int m_FUN_10dcae90(A...); undefined4 __thiscall m_FUN_10dcaec0(byte param_2); template<class... A> int m_FUN_10dcaec0(A...); undefined4 * __thiscall m_FUN_10dcb000(byte param_2); template<class... A> int m_FUN_10dcb000(A...); undefined4 * __thiscall m_FUN_10dcb040(byte param_2); template<class... A> int m_FUN_10dcb040(A...); SCStr * __thiscall m_FUN_10dcd6c0(SCStr *param_2); template<class... A> int m_FUN_10dcd6c0(A...); undefined4 * __thiscall m_FUN_10dce3c0(byte param_2); template<class... A> int m_FUN_10dce3c0(A...); undefined4 * __thiscall m_FUN_10dce400(byte param_2); template<class... A> int m_FUN_10dce400(A...); SCStr * __thiscall m_FUN_10dce8f0(SCStr *param_2); template<class... A> int m_FUN_10dce8f0(A...); SCStr * __thiscall m_FUN_10dced30(SCStr *param_2); template<class... A> int m_FUN_10dced30(A...); SCStr * __thiscall m_FUN_10dceed0(SCStr *param_2); template<class... A> int m_FUN_10dceed0(A...); SCStr * __thiscall m_FUN_10dceef0(SCStr *param_2); template<class... A> int m_FUN_10dceef0(A...); SCStr * __thiscall m_FUN_10dcef10(SCStr *param_2); template<class... A> int m_FUN_10dcef10(A...); void __thiscall m_FUN_10dcf120(SCStr *param_2); template<class... A> int m_FUN_10dcf120(A...); void __thiscall m_FUN_10dcf260(SCStr *param_2); template<class... A> int m_FUN_10dcf260(A...); void __thiscall m_FUN_10dcf290(SCStr *param_2); template<class... A> int m_FUN_10dcf290(A...); void __thiscall m_FUN_10dcf2c0(SCStr *param_2); template<class... A> int m_FUN_10dcf2c0(A...); SCStr * __thiscall m_FUN_10dcfb00(SCStr *param_2); template<class... A> int m_FUN_10dcfb00(A...); undefined4 * __thiscall m_FUN_10dd0290(int *param_2); template<class... A> int m_FUN_10dd0290(A...); undefined4 * __thiscall m_FUN_10dd02f0(int *param_2); template<class... A> int m_FUN_10dd02f0(A...); undefined4 __thiscall m_FUN_10dd1950(byte param_2); template<class... A> int m_FUN_10dd1950(A...); undefined4 * __thiscall m_FUN_10dd1980(byte param_2); template<class... A> int m_FUN_10dd1980(A...); undefined4 * __thiscall m_FUN_10dd1a60(byte param_2); template<class... A> int m_FUN_10dd1a60(A...); undefined4 __thiscall m_FUN_10dd1a90(byte param_2); template<class... A> int m_FUN_10dd1a90(A...); void __thiscall m_FUN_10dd2090(int *param_2); template<class... A> int m_FUN_10dd2090(A...); void __thiscall m_FUN_10dd2230(undefined4 *param_2); template<class... A> int m_FUN_10dd2230(A...); SCStr * __thiscall m_FUN_10dd2780(SCStr *param_2); template<class... A> int m_FUN_10dd2780(A...); undefined4 __thiscall m_FUN_10dd2b90(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10dd2b90(A...); void __thiscall m_FUN_10dd5c80(uint param_2); template<class... A> int m_FUN_10dd5c80(A...); void __thiscall m_FUN_10dd5d50(int param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10dd5d50(A...); void __thiscall m_FUN_10dd6680(undefined4 param_2); template<class... A> int m_FUN_10dd6680(A...); void __thiscall m_FUN_10dd66b0(undefined4 param_2); template<class... A> int m_FUN_10dd66b0(A...); int __thiscall m_FUN_10dd67a0(uint *param_2); template<class... A> int m_FUN_10dd67a0(A...); int __thiscall m_FUN_10dd67e0(uint *param_2); template<class... A> int m_FUN_10dd67e0(A...); undefined4 __thiscall m_FUN_10dd8a50(byte param_2); template<class... A> int m_FUN_10dd8a50(A...); undefined4 __thiscall m_FUN_10dd8a80(byte param_2); template<class... A> int m_FUN_10dd8a80(A...); void __thiscall m_FUN_10dd9c10(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined2 param_6); template<class... A> int m_FUN_10dd9c10(A...); undefined4 * __thiscall m_FUN_10ddd150(int *param_2); template<class... A> int m_FUN_10ddd150(A...); undefined4 * __thiscall m_FUN_10dde9b0(byte param_2); template<class... A> int m_FUN_10dde9b0(A...); undefined4 __thiscall m_FUN_10dde9f0(byte param_2); template<class... A> int m_FUN_10dde9f0(A...); undefined4 * __thiscall m_FUN_10ddea20(byte param_2); template<class... A> int m_FUN_10ddea20(A...); undefined4 * __thiscall m_FUN_10ddea50(byte param_2); template<class... A> int m_FUN_10ddea50(A...); undefined4 * __thiscall m_FUN_10ddeb20(byte param_2); template<class... A> int m_FUN_10ddeb20(A...); undefined4 * __thiscall m_FUN_10ddeb50(byte param_2); template<class... A> int m_FUN_10ddeb50(A...); SCStr * __thiscall m_FUN_10de1e00(SCStr *param_2); template<class... A> int m_FUN_10de1e00(A...); SCStr * __thiscall m_FUN_10de20b0(SCStr *param_2); template<class... A> int m_FUN_10de20b0(A...); SCStr * __thiscall m_FUN_10de20d0(SCStr *param_2); template<class... A> int m_FUN_10de20d0(A...); SCStr * __thiscall m_FUN_10de2100(SCStr *param_2); template<class... A> int m_FUN_10de2100(A...); undefined4 * __thiscall m_FUN_10de4880(int *param_2); template<class... A> int m_FUN_10de4880(A...); undefined4 * __thiscall m_FUN_10de48c0(int *param_2); template<class... A> int m_FUN_10de48c0(A...); undefined4 * __thiscall m_FUN_10de4900(int *param_2); template<class... A> int m_FUN_10de4900(A...); undefined4 * __thiscall m_FUN_10de57e0(byte param_2); template<class... A> int m_FUN_10de57e0(A...); undefined4 * __thiscall m_FUN_10de5810(byte param_2); template<class... A> int m_FUN_10de5810(A...); undefined4 __thiscall m_FUN_10de5850(byte param_2); template<class... A> int m_FUN_10de5850(A...); undefined4 * __thiscall m_FUN_10de5880(byte param_2); template<class... A> int m_FUN_10de5880(A...); undefined4 * __thiscall m_FUN_10de5ae0(byte param_2); template<class... A> int m_FUN_10de5ae0(A...); undefined4 * __thiscall m_FUN_10de5c70(byte param_2); template<class... A> int m_FUN_10de5c70(A...); void __thiscall m_FUN_10de5f80(undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            short param_6); template<class... A> int m_FUN_10de5f80(A...); void __thiscall m_FUN_10dec550(undefined4 param_2); template<class... A> int m_FUN_10dec550(A...); int __thiscall m_FUN_10dec700(undefined4 param_2); template<class... A> int m_FUN_10dec700(A...); uint __thiscall m_FUN_10def450(SCStr *param_2); template<class... A> int m_FUN_10def450(A...); uint __thiscall m_FUN_10def6b0(SCStr *param_2); template<class... A> int m_FUN_10def6b0(A...); undefined4 __thiscall m_FUN_10def940(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10def940(A...); undefined4 __thiscall m_FUN_10defb40(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10defb40(A...); void __thiscall m_FUN_10df0500(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10df0500(A...); SCStr * __thiscall m_FUN_10df0ea0(SCStr *param_2); template<class... A> int m_FUN_10df0ea0(A...); void __thiscall m_FUN_10df15a0(undefined4 param_2); template<class... A> int m_FUN_10df15a0(A...); void __thiscall m_FUN_10df3190(undefined4 param_2); template<class... A> int m_FUN_10df3190(A...); void __thiscall m_FUN_10df4e50(int param_2); template<class... A> int m_FUN_10df4e50(A...); undefined4 * __thiscall m_FUN_10e006f0(byte param_2); template<class... A> int m_FUN_10e006f0(A...); void __thiscall m_FUN_10e00ac0(int param_2); template<class... A> int m_FUN_10e00ac0(A...); void __thiscall m_FUN_10e0b470(undefined4 param_2); template<class... A> int m_FUN_10e0b470(A...); void __thiscall m_FUN_10e0b4a0(undefined4 param_2); template<class... A> int m_FUN_10e0b4a0(A...); undefined4 __thiscall m_FUN_10e0cba0(byte param_2); template<class... A> int m_FUN_10e0cba0(A...); undefined4 __thiscall m_FUN_10e10e70(undefined4 param_2); template<class... A> int m_FUN_10e10e70(A...); undefined4 * __thiscall m_FUN_10e12220(int *param_2); template<class... A> int m_FUN_10e12220(A...); undefined4 * __thiscall m_FUN_10e13970(byte param_2); template<class... A> int m_FUN_10e13970(A...); undefined4 * __thiscall m_FUN_10e139a0(byte param_2); template<class... A> int m_FUN_10e139a0(A...); undefined4 * __thiscall m_FUN_10e139d0(byte param_2); template<class... A> int m_FUN_10e139d0(A...); undefined4 * __thiscall m_FUN_10e13b50(byte param_2); template<class... A> int m_FUN_10e13b50(A...); undefined4 * __thiscall m_FUN_10e13b80(byte param_2); template<class... A> int m_FUN_10e13b80(A...); undefined4 * __thiscall m_FUN_10e13bb0(byte param_2); template<class... A> int m_FUN_10e13bb0(A...); undefined4 __thiscall m_FUN_10e13ee0(byte param_2); template<class... A> int m_FUN_10e13ee0(A...); undefined4 * __thiscall m_FUN_10e13f10(byte param_2); template<class... A> int m_FUN_10e13f10(A...); undefined4 * __thiscall m_FUN_10e13f40(byte param_2); template<class... A> int m_FUN_10e13f40(A...); undefined4 __thiscall m_FUN_10e14040(byte param_2); template<class... A> int m_FUN_10e14040(A...); undefined4 * __thiscall m_FUN_10e14070(byte param_2); template<class... A> int m_FUN_10e14070(A...); undefined4 * __thiscall m_FUN_10e14180(byte param_2); template<class... A> int m_FUN_10e14180(A...); undefined4 * __thiscall m_FUN_10e141b0(byte param_2); template<class... A> int m_FUN_10e141b0(A...); undefined4 __thiscall m_FUN_10e19ca0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10e19ca0(A...); undefined4 __thiscall m_FUN_10e19cf0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10e19cf0(A...); int * __thiscall m_FUN_10e19d10(int *param_2,int param_3); template<class... A> int m_FUN_10e19d10(A...); undefined4 * __thiscall m_FUN_10e23140(undefined4 param_2); template<class... A> int m_FUN_10e23140(A...); undefined4 * __thiscall m_FUN_10e23660(byte param_2); template<class... A> int m_FUN_10e23660(A...); undefined4 * __thiscall m_FUN_10e23690(byte param_2); template<class... A> int m_FUN_10e23690(A...); undefined4 * __thiscall m_FUN_10e23720(byte param_2); template<class... A> int m_FUN_10e23720(A...); undefined4 * __thiscall m_FUN_10e23750(byte param_2); template<class... A> int m_FUN_10e23750(A...); undefined4 * __thiscall m_FUN_10e23850(byte param_2); template<class... A> int m_FUN_10e23850(A...); undefined4 __thiscall m_FUN_10e24330(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10e24330(A...); undefined4 __thiscall m_FUN_10e24380(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10e24380(A...); undefined4 * __thiscall m_FUN_10e25320(int *param_2); template<class... A> int m_FUN_10e25320(A...); undefined4 * __thiscall m_FUN_10e25360(int *param_2); template<class... A> int m_FUN_10e25360(A...); undefined4 * __thiscall m_FUN_10e253a0(int *param_2); template<class... A> int m_FUN_10e253a0(A...); undefined4 * __thiscall m_FUN_10e253e0(int *param_2); template<class... A> int m_FUN_10e253e0(A...); undefined4 __thiscall m_FUN_10e29180(byte param_2); template<class... A> int m_FUN_10e29180(A...); undefined4 __thiscall m_FUN_10e291b0(byte param_2); template<class... A> int m_FUN_10e291b0(A...); undefined4 __thiscall m_FUN_10e291e0(byte param_2); template<class... A> int m_FUN_10e291e0(A...); undefined4 __thiscall m_FUN_10e29210(byte param_2); template<class... A> int m_FUN_10e29210(A...); undefined4 * __thiscall m_FUN_10e29240(byte param_2); template<class... A> int m_FUN_10e29240(A...); undefined4 * __thiscall m_FUN_10e294e0(byte param_2); template<class... A> int m_FUN_10e294e0(A...); undefined4 __thiscall m_FUN_10e29610(byte param_2); template<class... A> int m_FUN_10e29610(A...); undefined4 * __thiscall m_FUN_10e298a0(byte param_2); template<class... A> int m_FUN_10e298a0(A...); undefined4 * __thiscall m_FUN_10e299c0(byte param_2); template<class... A> int m_FUN_10e299c0(A...); undefined4 * __thiscall m_FUN_10e29bf0(byte param_2); template<class... A> int m_FUN_10e29bf0(A...); undefined4 * __thiscall m_FUN_10e29d90(byte param_2); template<class... A> int m_FUN_10e29d90(A...); undefined4 __thiscall m_FUN_10e29f70(byte param_2); template<class... A> int m_FUN_10e29f70(A...); undefined4 * __thiscall m_FUN_10e2a090(byte param_2); template<class... A> int m_FUN_10e2a090(A...); undefined4 * __thiscall m_FUN_10e2a0c0(byte param_2); template<class... A> int m_FUN_10e2a0c0(A...); undefined4 * __thiscall m_FUN_10e2a0f0(byte param_2); template<class... A> int m_FUN_10e2a0f0(A...); undefined4 * __thiscall m_FUN_10e2a2d0(byte param_2); template<class... A> int m_FUN_10e2a2d0(A...); undefined4 * __thiscall m_FUN_10e2a500(byte param_2); template<class... A> int m_FUN_10e2a500(A...); undefined4 * __thiscall m_FUN_10e2a530(byte param_2); template<class... A> int m_FUN_10e2a530(A...); undefined4 * __thiscall m_FUN_10e2a650(byte param_2); template<class... A> int m_FUN_10e2a650(A...); undefined4 * __thiscall m_FUN_10e2a680(byte param_2); template<class... A> int m_FUN_10e2a680(A...); undefined4 * __thiscall m_FUN_10e2a6b0(byte param_2); template<class... A> int m_FUN_10e2a6b0(A...); undefined4 * __thiscall m_FUN_10e2a8c0(byte param_2); template<class... A> int m_FUN_10e2a8c0(A...); void __thiscall m_FUN_10e2b430(int param_2); template<class... A> int m_FUN_10e2b430(A...); void __thiscall m_FUN_10e2b550(int param_2); template<class... A> int m_FUN_10e2b550(A...); void __thiscall m_FUN_10e2bfe0(int param_2,ushort param_3); template<class... A> int m_FUN_10e2bfe0(A...); SCStr * __thiscall m_FUN_10e30510(SCStr *param_2); template<class... A> int m_FUN_10e30510(A...); SCStr * __thiscall m_FUN_10e30780(SCStr *param_2); template<class... A> int m_FUN_10e30780(A...); SCStr * __thiscall m_FUN_10e307b0(SCStr *param_2); template<class... A> int m_FUN_10e307b0(A...); undefined4 __thiscall m_FUN_10e30890(int param_2); template<class... A> int m_FUN_10e30890(A...); int * __thiscall m_FUN_10e30b00(int *param_2,int param_3); template<class... A> int m_FUN_10e30b00(A...); int * __thiscall m_FUN_10e30b40(int *param_2,int param_3); template<class... A> int m_FUN_10e30b40(A...); int * __thiscall m_FUN_10e30c40(int *param_2,int param_3); template<class... A> int m_FUN_10e30c40(A...); int * __thiscall m_FUN_10e30c80(int *param_2,int param_3); template<class... A> int m_FUN_10e30c80(A...); void __thiscall m_FUN_10e46b00(undefined4 *param_2); template<class... A> int m_FUN_10e46b00(A...); undefined4 * __thiscall m_FUN_10e47b70(byte param_2); template<class... A> int m_FUN_10e47b70(A...); undefined4 * __thiscall m_FUN_10e47ba0(byte param_2); template<class... A> int m_FUN_10e47ba0(A...); undefined4 * __thiscall m_FUN_10e47bd0(byte param_2); template<class... A> int m_FUN_10e47bd0(A...); undefined4 * __thiscall m_FUN_10e47c00(byte param_2); template<class... A> int m_FUN_10e47c00(A...); undefined4 * __thiscall m_FUN_10e47d70(byte param_2); template<class... A> int m_FUN_10e47d70(A...); undefined4 * __thiscall m_FUN_10e47da0(byte param_2); template<class... A> int m_FUN_10e47da0(A...); undefined4 * __thiscall m_FUN_10e47dd0(byte param_2); template<class... A> int m_FUN_10e47dd0(A...); undefined4 * __thiscall m_FUN_10e47ed0(byte param_2); template<class... A> int m_FUN_10e47ed0(A...); undefined4 * __thiscall m_FUN_10e47f00(byte param_2); template<class... A> int m_FUN_10e47f00(A...); undefined4 * __thiscall m_FUN_10e47f30(byte param_2); template<class... A> int m_FUN_10e47f30(A...); undefined4 * __thiscall m_FUN_10e47f60(byte param_2); template<class... A> int m_FUN_10e47f60(A...); undefined4 * __thiscall m_FUN_10e47f90(byte param_2); template<class... A> int m_FUN_10e47f90(A...); void __thiscall m_FUN_10e483a0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10e483a0(A...); void __thiscall m_FUN_10e483c0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10e483c0(A...); undefined4 __thiscall m_FUN_10e4afe0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10e4afe0(A...); undefined4 __thiscall m_FUN_10e4b030(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10e4b030(A...); void __thiscall m_FUN_10e4e590(undefined4 *param_2); template<class... A> int m_FUN_10e4e590(A...); undefined4 * __thiscall m_FUN_10e51910(byte param_2); template<class... A> int m_FUN_10e51910(A...); undefined4 * __thiscall m_FUN_10e51ad0(byte param_2); template<class... A> int m_FUN_10e51ad0(A...); undefined4 * __thiscall m_FUN_10e51bd0(byte param_2); template<class... A> int m_FUN_10e51bd0(A...); undefined4 * __thiscall m_FUN_10e51ce0(byte param_2); template<class... A> int m_FUN_10e51ce0(A...); undefined4 * __thiscall m_FUN_10e51d10(byte param_2); template<class... A> int m_FUN_10e51d10(A...); undefined4 * __thiscall m_FUN_10e51e10(byte param_2); template<class... A> int m_FUN_10e51e10(A...); undefined4 * __thiscall m_FUN_10e51e40(byte param_2); template<class... A> int m_FUN_10e51e40(A...); undefined4 * __thiscall m_FUN_10e51e70(byte param_2); template<class... A> int m_FUN_10e51e70(A...); undefined4 __thiscall m_FUN_10e55780(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10e55780(A...); undefined4 __thiscall m_FUN_10e557d0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10e557d0(A...); void __thiscall m_FUN_10e5abb0(undefined4 param_2); template<class... A> int m_FUN_10e5abb0(A...); int __thiscall m_FUN_10e5acb0(uint *param_2); template<class... A> int m_FUN_10e5acb0(A...); undefined4 * __thiscall m_FUN_10e5bdb0(int *param_2); template<class... A> int m_FUN_10e5bdb0(A...); undefined4 * __thiscall m_FUN_10e5bdf0(int *param_2); template<class... A> int m_FUN_10e5bdf0(A...); undefined4 * __thiscall m_FUN_10e5be30(int *param_2); template<class... A> int m_FUN_10e5be30(A...); undefined4 * __thiscall m_FUN_10e5be70(int *param_2); template<class... A> int m_FUN_10e5be70(A...); undefined4 * __thiscall m_FUN_10e60050(byte param_2); template<class... A> int m_FUN_10e60050(A...); undefined4 __thiscall m_FUN_10e60090(byte param_2); template<class... A> int m_FUN_10e60090(A...); undefined4 __thiscall m_FUN_10e600c0(byte param_2); template<class... A> int m_FUN_10e600c0(A...); undefined4 __thiscall m_FUN_10e600f0(byte param_2); template<class... A> int m_FUN_10e600f0(A...); undefined4 __thiscall m_FUN_10e60120(byte param_2); template<class... A> int m_FUN_10e60120(A...); undefined4 __thiscall m_FUN_10e60150(byte param_2); template<class... A> int m_FUN_10e60150(A...); undefined4 * __thiscall m_FUN_10e60240(byte param_2); template<class... A> int m_FUN_10e60240(A...); undefined4 * __thiscall m_FUN_10e60300(byte param_2); template<class... A> int m_FUN_10e60300(A...); undefined4 * __thiscall m_FUN_10e60530(byte param_2); template<class... A> int m_FUN_10e60530(A...); undefined4 * __thiscall m_FUN_10e60640(byte param_2); template<class... A> int m_FUN_10e60640(A...); undefined4 * __thiscall m_FUN_10e60730(byte param_2); template<class... A> int m_FUN_10e60730(A...); undefined4 * __thiscall m_FUN_10e60760(byte param_2); template<class... A> int m_FUN_10e60760(A...); undefined4 __thiscall m_FUN_10e60790(byte param_2); template<class... A> int m_FUN_10e60790(A...); undefined4 * __thiscall m_FUN_10e60880(byte param_2); template<class... A> int m_FUN_10e60880(A...); undefined4 * __thiscall m_FUN_10e608b0(byte param_2); template<class... A> int m_FUN_10e608b0(A...); undefined4 __thiscall m_FUN_10e609b0(byte param_2); template<class... A> int m_FUN_10e609b0(A...); undefined4 * __thiscall m_FUN_10e609e0(byte param_2); template<class... A> int m_FUN_10e609e0(A...); undefined4 * __thiscall m_FUN_10e60ae0(byte param_2); template<class... A> int m_FUN_10e60ae0(A...); undefined4 * __thiscall m_FUN_10e60d20(byte param_2); template<class... A> int m_FUN_10e60d20(A...); undefined4 * __thiscall m_FUN_10e60e10(byte param_2); template<class... A> int m_FUN_10e60e10(A...); undefined4 * __thiscall m_FUN_10e60e40(byte param_2); template<class... A> int m_FUN_10e60e40(A...); void __thiscall m_FUN_10e61210(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10e61210(A...); void __thiscall m_FUN_10e62aa0(int param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10e62aa0(A...); undefined4 __thiscall m_FUN_10e69d50(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10e69d50(A...); undefined4 __thiscall m_FUN_10e69dd0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10e69dd0(A...); undefined4 * __thiscall m_FUN_10e76de0(byte param_2); template<class... A> int m_FUN_10e76de0(A...); undefined4 * __thiscall m_FUN_10e76e70(byte param_2); template<class... A> int m_FUN_10e76e70(A...); undefined4 * __thiscall m_FUN_10e77270(byte param_2); template<class... A> int m_FUN_10e77270(A...); undefined4 * __thiscall m_FUN_10e772a0(byte param_2); template<class... A> int m_FUN_10e772a0(A...); undefined4 * __thiscall m_FUN_10e773a0(byte param_2); template<class... A> int m_FUN_10e773a0(A...); undefined4 __thiscall m_FUN_10e79760(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10e79760(A...); undefined4 __thiscall m_FUN_10e79a40(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10e79a40(A...); undefined4 * __thiscall m_FUN_10e7fe10(byte param_2); template<class... A> int m_FUN_10e7fe10(A...); undefined4 * __thiscall m_FUN_10e7fe40(byte param_2); template<class... A> int m_FUN_10e7fe40(A...); undefined4 * __thiscall m_FUN_10e7fe70(byte param_2); template<class... A> int m_FUN_10e7fe70(A...); undefined4 __thiscall m_FUN_10e7fea0(byte param_2); template<class... A> int m_FUN_10e7fea0(A...); int * __thiscall m_FUN_10e80f80(int *param_2,int param_3); template<class... A> int m_FUN_10e80f80(A...); undefined4 * __thiscall m_FUN_10e83250(int *param_2); template<class... A> int m_FUN_10e83250(A...); undefined4 * __thiscall m_FUN_10e83a70(byte param_2); template<class... A> int m_FUN_10e83a70(A...); undefined4 * __thiscall m_FUN_10e83ba0(byte param_2); template<class... A> int m_FUN_10e83ba0(A...); undefined4 * __thiscall m_FUN_10e83bd0(byte param_2); template<class... A> int m_FUN_10e83bd0(A...); undefined4 * __thiscall m_FUN_10e83c00(byte param_2); template<class... A> int m_FUN_10e83c00(A...); undefined4 * __thiscall m_FUN_10e83d40(byte param_2); template<class... A> int m_FUN_10e83d40(A...); undefined4 * __thiscall m_FUN_10e83d70(byte param_2); template<class... A> int m_FUN_10e83d70(A...); undefined4 __thiscall m_FUN_10e84e70(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10e84e70(A...); undefined4 __thiscall m_FUN_10e84ec0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10e84ec0(A...); undefined4 * __thiscall m_FUN_10e86e40(undefined4 param_2); template<class... A> int m_FUN_10e86e40(A...); undefined4 * __thiscall m_FUN_10e86fa0(byte param_2); template<class... A> int m_FUN_10e86fa0(A...); undefined4 * __thiscall m_FUN_10e86fd0(byte param_2); template<class... A> int m_FUN_10e86fd0(A...); undefined4 * __thiscall m_FUN_10e87000(byte param_2); template<class... A> int m_FUN_10e87000(A...); undefined4 * __thiscall m_FUN_10e87030(byte param_2); template<class... A> int m_FUN_10e87030(A...); undefined4 * __thiscall m_FUN_10e87060(byte param_2); template<class... A> int m_FUN_10e87060(A...); undefined4 * __thiscall m_FUN_10e87090(byte param_2); template<class... A> int m_FUN_10e87090(A...); undefined4 * __thiscall m_FUN_10e87120(byte param_2); template<class... A> int m_FUN_10e87120(A...); undefined4 * __thiscall m_FUN_10e87150(byte param_2); template<class... A> int m_FUN_10e87150(A...); undefined4 * __thiscall m_FUN_10e89b70(byte param_2); template<class... A> int m_FUN_10e89b70(A...); undefined4 * __thiscall m_FUN_10e89c00(byte param_2); template<class... A> int m_FUN_10e89c00(A...); undefined4 * __thiscall m_FUN_10e89c30(byte param_2); template<class... A> int m_FUN_10e89c30(A...); undefined4 * __thiscall m_FUN_10e89c60(byte param_2); template<class... A> int m_FUN_10e89c60(A...); undefined4 * __thiscall m_FUN_10e89c90(byte param_2); template<class... A> int m_FUN_10e89c90(A...); undefined4 * __thiscall m_FUN_10e8b9c0(int *param_2); template<class... A> int m_FUN_10e8b9c0(A...); undefined4 * __thiscall m_FUN_10e8ba00(int *param_2); template<class... A> int m_FUN_10e8ba00(A...); undefined4 * __thiscall m_FUN_10e8ba40(int *param_2); template<class... A> int m_FUN_10e8ba40(A...); undefined4 * __thiscall m_FUN_10e8ba80(int *param_2); template<class... A> int m_FUN_10e8ba80(A...); undefined4 * __thiscall m_FUN_10e8bac0(int *param_2); template<class... A> int m_FUN_10e8bac0(A...); undefined4 * __thiscall m_FUN_10e8bb00(int *param_2); template<class... A> int m_FUN_10e8bb00(A...); undefined4 * __thiscall m_FUN_10e8bb60(int *param_2); template<class... A> int m_FUN_10e8bb60(A...); undefined4 * __thiscall m_FUN_10e8bba0(int *param_2); template<class... A> int m_FUN_10e8bba0(A...); undefined4 * __thiscall m_FUN_10e8bbe0(int *param_2); template<class... A> int m_FUN_10e8bbe0(A...); undefined4 * __thiscall m_FUN_10e8bc20(int *param_2); template<class... A> int m_FUN_10e8bc20(A...); undefined4 * __thiscall m_FUN_10e8bc60(int *param_2); template<class... A> int m_FUN_10e8bc60(A...); undefined4 * __thiscall m_FUN_10e8bca0(int *param_2); template<class... A> int m_FUN_10e8bca0(A...); undefined4 * __thiscall m_FUN_10e8bce0(int *param_2); template<class... A> int m_FUN_10e8bce0(A...); undefined4 * __thiscall m_FUN_10e8bd20(int *param_2); template<class... A> int m_FUN_10e8bd20(A...); undefined4 * __thiscall m_FUN_10e8bd60(int *param_2); template<class... A> int m_FUN_10e8bd60(A...); undefined4 * __thiscall m_FUN_10e8bda0(int *param_2); template<class... A> int m_FUN_10e8bda0(A...); undefined4 * __thiscall m_FUN_10e8bde0(int *param_2); template<class... A> int m_FUN_10e8bde0(A...); undefined4 * __thiscall m_FUN_10e8be40(int *param_2); template<class... A> int m_FUN_10e8be40(A...); undefined4 * __thiscall m_FUN_10e8be80(int *param_2); template<class... A> int m_FUN_10e8be80(A...); undefined4 * __thiscall m_FUN_10e8bec0(int *param_2); template<class... A> int m_FUN_10e8bec0(A...); undefined4 * __thiscall m_FUN_10e8bf00(int *param_2); template<class... A> int m_FUN_10e8bf00(A...); undefined4 * __thiscall m_FUN_10e8bf40(int *param_2); template<class... A> int m_FUN_10e8bf40(A...); undefined4 * __thiscall m_FUN_10e8bf80(int *param_2); template<class... A> int m_FUN_10e8bf80(A...); undefined4 * __thiscall m_FUN_10e97020(byte param_2); template<class... A> int m_FUN_10e97020(A...); undefined4 * __thiscall m_FUN_10e97050(byte param_2); template<class... A> int m_FUN_10e97050(A...); undefined4 * __thiscall m_FUN_10e97090(byte param_2); template<class... A> int m_FUN_10e97090(A...); undefined4 * __thiscall m_FUN_10e970d0(byte param_2); template<class... A> int m_FUN_10e970d0(A...); undefined4 * __thiscall m_FUN_10e97110(byte param_2); template<class... A> int m_FUN_10e97110(A...); undefined4 __thiscall m_FUN_10e97150(byte param_2); template<class... A> int m_FUN_10e97150(A...); undefined4 __thiscall m_FUN_10e97180(byte param_2); template<class... A> int m_FUN_10e97180(A...); undefined4 __thiscall m_FUN_10e971b0(byte param_2); template<class... A> int m_FUN_10e971b0(A...); undefined4 __thiscall m_FUN_10e971e0(byte param_2); template<class... A> int m_FUN_10e971e0(A...); undefined4 __thiscall m_FUN_10e97210(byte param_2); template<class... A> int m_FUN_10e97210(A...); undefined4 __thiscall m_FUN_10e97240(byte param_2); template<class... A> int m_FUN_10e97240(A...); undefined4 __thiscall m_FUN_10e97270(byte param_2); template<class... A> int m_FUN_10e97270(A...); undefined4 * __thiscall m_FUN_10e972a0(byte param_2); template<class... A> int m_FUN_10e972a0(A...); undefined4 * __thiscall m_FUN_10e979c0(byte param_2); template<class... A> int m_FUN_10e979c0(A...); undefined4 * __thiscall m_FUN_10e979f0(byte param_2); template<class... A> int m_FUN_10e979f0(A...); undefined4 * __thiscall m_FUN_10e97a20(byte param_2); template<class... A> int m_FUN_10e97a20(A...); undefined4 * __thiscall m_FUN_10e97a50(byte param_2); template<class... A> int m_FUN_10e97a50(A...); undefined4 * __thiscall m_FUN_10e97a80(byte param_2); template<class... A> int m_FUN_10e97a80(A...); undefined4 * __thiscall m_FUN_10e981f0(byte param_2); template<class... A> int m_FUN_10e981f0(A...); undefined4 __thiscall m_FUN_10e98ea0(byte param_2); template<class... A> int m_FUN_10e98ea0(A...); void __thiscall m_FUN_10e9c020(int param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10e9c020(A...); void __thiscall m_FUN_10e9cd00(int *param_2); template<class... A> int m_FUN_10e9cd00(A...); void __thiscall m_FUN_10e9cd50(int *param_2); template<class... A> int m_FUN_10e9cd50(A...); void __thiscall m_FUN_10e9cda0(int *param_2); template<class... A> int m_FUN_10e9cda0(A...); void __thiscall m_FUN_10e9cdf0(int *param_2); template<class... A> int m_FUN_10e9cdf0(A...); void __thiscall m_FUN_10e9ce40(int *param_2); template<class... A> int m_FUN_10e9ce40(A...); void __thiscall m_FUN_10e9ce90(int *param_2); template<class... A> int m_FUN_10e9ce90(A...); void __thiscall m_FUN_10e9cee0(int *param_2); template<class... A> int m_FUN_10e9cee0(A...); void __thiscall m_FUN_10e9cf30(int *param_2); template<class... A> int m_FUN_10e9cf30(A...); void __thiscall m_FUN_10e9cf80(int *param_2); template<class... A> int m_FUN_10e9cf80(A...); SCStr * __thiscall m_FUN_10e9d720(SCStr *param_2); template<class... A> int m_FUN_10e9d720(A...); SCStr * __thiscall m_FUN_10e9de40(SCStr *param_2); template<class... A> int m_FUN_10e9de40(A...); SCStr * __thiscall m_FUN_10e9de60(SCStr *param_2); template<class... A> int m_FUN_10e9de60(A...); SCStr * __thiscall m_FUN_10e9de80(SCStr *param_2); template<class... A> int m_FUN_10e9de80(A...); undefined4 * __thiscall m_FUN_10e9deb0(undefined4 *param_2); template<class... A> int m_FUN_10e9deb0(A...); undefined4 * __thiscall m_FUN_10e9dee0(undefined4 *param_2); template<class... A> int m_FUN_10e9dee0(A...); SCStr * __thiscall m_FUN_10e9df10(SCStr *param_2); template<class... A> int m_FUN_10e9df10(A...); SCStr * __thiscall m_FUN_10e9df90(SCStr *param_2); template<class... A> int m_FUN_10e9df90(A...); SCStr * __thiscall m_FUN_10e9dfb0(SCStr *param_2); template<class... A> int m_FUN_10e9dfb0(A...); int * __thiscall m_FUN_10e9fb30(int *param_2); template<class... A> int m_FUN_10e9fb30(A...); int * __thiscall m_FUN_10ea1ad0(int *param_2); template<class... A> int m_FUN_10ea1ad0(A...); SCStr * __thiscall m_FUN_10ea1b00(SCStr *param_2); template<class... A> int m_FUN_10ea1b00(A...); SCStr * __thiscall m_FUN_10ea1b20(SCStr *param_2); template<class... A> int m_FUN_10ea1b20(A...); SCStr * __thiscall m_FUN_10ea1b40(SCStr *param_2); template<class... A> int m_FUN_10ea1b40(A...); SCStr * __thiscall m_FUN_10ea1c30(SCStr *param_2); template<class... A> int m_FUN_10ea1c30(A...); SCStr * __thiscall m_FUN_10ea1dd0(SCStr *param_2); template<class... A> int m_FUN_10ea1dd0(A...); SCStr * __thiscall m_FUN_10ea1ec0(SCStr *param_2); template<class... A> int m_FUN_10ea1ec0(A...); SCStr * __thiscall m_FUN_10ea1f80(SCStr *param_2); template<class... A> int m_FUN_10ea1f80(A...); SCStr * __thiscall m_FUN_10ea1fd0(SCStr *param_2); template<class... A> int m_FUN_10ea1fd0(A...); SCStr * __thiscall m_FUN_10ea2020(SCStr *param_2); template<class... A> int m_FUN_10ea2020(A...); undefined4 * __thiscall m_FUN_10eaa520(int *param_2); template<class... A> int m_FUN_10eaa520(A...); undefined4 * __thiscall m_FUN_10eaa560(int *param_2); template<class... A> int m_FUN_10eaa560(A...); undefined4 __thiscall m_FUN_10eabb40(byte param_2); template<class... A> int m_FUN_10eabb40(A...); undefined4 __thiscall m_FUN_10eabc20(byte param_2); template<class... A> int m_FUN_10eabc20(A...); void __thiscall m_FUN_10eabdb0(undefined4 *param_2); template<class... A> int m_FUN_10eabdb0(A...); void __thiscall m_FUN_10eabdd0(char param_2); template<class... A> int m_FUN_10eabdd0(A...); void __thiscall m_FUN_10eabf30(undefined4 *param_2); template<class... A> int m_FUN_10eabf30(A...); SCStr * __thiscall m_FUN_10eac830(SCStr *param_2); template<class... A> int m_FUN_10eac830(A...); SCStr * __thiscall m_FUN_10eac880(SCStr *param_2); template<class... A> int m_FUN_10eac880(A...); int * __thiscall m_FUN_10eacb60(int *param_2); template<class... A> int m_FUN_10eacb60(A...); int * __thiscall m_FUN_10eaccb0(int *param_2); template<class... A> int m_FUN_10eaccb0(A...); SCStr * __thiscall m_FUN_10eacd80(SCStr *param_2); template<class... A> int m_FUN_10eacd80(A...); SCStr * __thiscall m_FUN_10eacda0(SCStr *param_2); template<class... A> int m_FUN_10eacda0(A...); SCStr * __thiscall m_FUN_10eacde0(SCStr *param_2); template<class... A> int m_FUN_10eacde0(A...); SCStr * __thiscall m_FUN_10eace00(SCStr *param_2); template<class... A> int m_FUN_10eace00(A...); void __thiscall m_FUN_10ead100(int *param_2); template<class... A> int m_FUN_10ead100(A...); void __thiscall m_FUN_10ead150(int *param_2); template<class... A> int m_FUN_10ead150(A...); void __thiscall m_FUN_10ead520(SCStr *param_2); template<class... A> int m_FUN_10ead520(A...); void __thiscall m_FUN_10ead590(SCStr *param_2); template<class... A> int m_FUN_10ead590(A...); void __thiscall m_FUN_10ead930(SCStr *param_2); template<class... A> int m_FUN_10ead930(A...); void __thiscall m_FUN_10ead960(SCStr *param_2); template<class... A> int m_FUN_10ead960(A...); void __thiscall m_FUN_10eadd60(SCStr *param_2); template<class... A> int m_FUN_10eadd60(A...); void __thiscall m_FUN_10eadd90(SCStr *param_2); template<class... A> int m_FUN_10eadd90(A...); undefined4 * __thiscall m_FUN_10eae0a0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10eae0a0(A...); undefined4 * __thiscall m_FUN_10eae0f0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); template<class... A> int m_FUN_10eae0f0(A...); undefined4 * __thiscall m_FUN_10eae120(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10eae120(A...); undefined4 __thiscall m_FUN_10eb2610(undefined4 param_2); template<class... A> int m_FUN_10eb2610(A...); void __thiscall m_FUN_10eb3a80(uint param_2); template<class... A> int m_FUN_10eb3a80(A...); void __thiscall m_FUN_10eb4c30(undefined4 param_2); template<class... A> int m_FUN_10eb4c30(A...); void __thiscall m_FUN_10eb4c60(undefined4 param_2); template<class... A> int m_FUN_10eb4c60(A...); void __thiscall m_FUN_10eb4c90(undefined4 param_2); template<class... A> int m_FUN_10eb4c90(A...); int __thiscall m_FUN_10eb4f60(SCStr *param_2); template<class... A> int m_FUN_10eb4f60(A...); int __thiscall m_FUN_10eb4fb0(SCStr *param_2); template<class... A> int m_FUN_10eb4fb0(A...); int __thiscall m_FUN_10eb5000(SCStr *param_2); template<class... A> int m_FUN_10eb5000(A...); undefined4 __thiscall m_FUN_10eb9540(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10eb9540(A...); void __thiscall m_FUN_10eba5f0(undefined4 param_2); template<class... A> int m_FUN_10eba5f0(A...); void __thiscall m_FUN_10ebb360(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ebb360(A...); void __thiscall m_FUN_10ebb790(undefined4 param_2); template<class... A> int m_FUN_10ebb790(A...); void __thiscall m_FUN_10ebb7d0(undefined4 param_2); template<class... A> int m_FUN_10ebb7d0(A...); void __thiscall m_FUN_10ebb810(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10ebb810(A...); void __thiscall m_FUN_10ebb850(int param_2); template<class... A> int m_FUN_10ebb850(A...); void __thiscall m_FUN_10ebb890(int param_2,int param_3); template<class... A> int m_FUN_10ebb890(A...); void __thiscall m_FUN_10ebb8e0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ebb8e0(A...); void __thiscall m_FUN_10ebba70(undefined4 param_2); template<class... A> int m_FUN_10ebba70(A...); void __thiscall m_FUN_10ebbab0(uint param_2); template<class... A> int m_FUN_10ebbab0(A...); void __thiscall m_FUN_10ebbaf0(uint param_2); template<class... A> int m_FUN_10ebbaf0(A...); void __thiscall m_FUN_10ebc210(undefined4 param_2); template<class... A> int m_FUN_10ebc210(A...); void __thiscall m_FUN_10ebc2a0(undefined4 param_2,int *param_3); template<class... A> int m_FUN_10ebc2a0(A...); void __thiscall m_FUN_10ebc5d0(SCStr *param_2); template<class... A> int m_FUN_10ebc5d0(A...); void __thiscall m_FUN_10ebfa70(undefined4 *param_2); template<class... A> int m_FUN_10ebfa70(A...); int __thiscall m_FUN_10ec35e0(undefined4 *param_2); template<class... A> int m_FUN_10ec35e0(A...); int __thiscall m_FUN_10ec3610(undefined4 *param_2); template<class... A> int m_FUN_10ec3610(A...); void __thiscall m_FUN_10ec99c0(undefined4 *param_2); template<class... A> int m_FUN_10ec99c0(A...); void __thiscall m_FUN_10ec9a10(uint param_2); template<class... A> int m_FUN_10ec9a10(A...); void __thiscall m_FUN_10ed00c0(undefined4 param_2); template<class... A> int m_FUN_10ed00c0(A...); undefined4 * __thiscall m_FUN_10edf460(int *param_2); template<class... A> int m_FUN_10edf460(A...); undefined4 __thiscall m_FUN_10edfbd0(byte param_2); template<class... A> int m_FUN_10edfbd0(A...); void __thiscall m_FUN_10ee16d0(int param_2,int param_3, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1); template<class... A> int m_FUN_10ee16d0(A...); void __thiscall m_FUN_10ee1710(int param_2,int param_3, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1); template<class... A> int m_FUN_10ee1710(A...); void __thiscall m_FUN_10ee1750(int param_2,int param_3, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1); template<class... A> int m_FUN_10ee1750(A...); undefined4 * __thiscall m_FUN_10ee1c80(int *param_2); template<class... A> int m_FUN_10ee1c80(A...); undefined4 __thiscall m_FUN_10ee2690(byte param_2); template<class... A> int m_FUN_10ee2690(A...); undefined4 __thiscall m_FUN_10ee26c0(byte param_2); template<class... A> int m_FUN_10ee26c0(A...); undefined4 __thiscall m_FUN_10ee26f0(byte param_2); template<class... A> int m_FUN_10ee26f0(A...); undefined4 * __thiscall m_FUN_10eeb730(int *param_2); template<class... A> int m_FUN_10eeb730(A...); undefined4 __thiscall m_FUN_10eec0d0(byte param_2); template<class... A> int m_FUN_10eec0d0(A...); undefined4 __thiscall m_FUN_10eec100(byte param_2); template<class... A> int m_FUN_10eec100(A...); undefined4 * __thiscall m_FUN_10ef1d20(byte param_2); template<class... A> int m_FUN_10ef1d20(A...); undefined4 __thiscall m_FUN_10ef1d50(byte param_2); template<class... A> int m_FUN_10ef1d50(A...); undefined4 __thiscall m_FUN_10ef1e50(byte param_2); template<class... A> int m_FUN_10ef1e50(A...); undefined4 * __thiscall m_FUN_10ef1e80(byte param_2); template<class... A> int m_FUN_10ef1e80(A...); int * __thiscall m_FUN_10ef2290(int *param_2); template<class... A> int m_FUN_10ef2290(A...); SCStr * __thiscall m_FUN_10ef3150(SCStr *param_2); template<class... A> int m_FUN_10ef3150(A...); SCStr * __thiscall m_FUN_10ef3170(SCStr *param_2); template<class... A> int m_FUN_10ef3170(A...); SCStr * __thiscall m_FUN_10ef3190(SCStr *param_2); template<class... A> int m_FUN_10ef3190(A...); undefined4 * __thiscall m_FUN_10ef3450(undefined4 param_2); template<class... A> int m_FUN_10ef3450(A...); undefined4 * __thiscall m_FUN_10ef56c0(byte param_2); template<class... A> int m_FUN_10ef56c0(A...); undefined4 * __thiscall m_FUN_10ef5700(byte param_2); template<class... A> int m_FUN_10ef5700(A...); void __thiscall m_FUN_10ef5ee0(int param_2); template<class... A> int m_FUN_10ef5ee0(A...); void __thiscall m_FUN_10ef8280(undefined4 *param_2); template<class... A> int m_FUN_10ef8280(A...); void __thiscall m_FUN_10ef82c0(int param_2); template<class... A> int m_FUN_10ef82c0(A...); int __thiscall m_FUN_10ef9850(int *param_2); template<class... A> int m_FUN_10ef9850(A...); SCStr * __thiscall m_FUN_10efb220(SCStr *param_2); template<class... A> int m_FUN_10efb220(A...); undefined4 * __thiscall m_FUN_10efdbb0(undefined4 *param_2); template<class... A> int m_FUN_10efdbb0(A...); void __thiscall m_FUN_10f01c60(undefined4 param_2); template<class... A> int m_FUN_10f01c60(A...); undefined4 * __thiscall m_FUN_10f0db40(int *param_2); template<class... A> int m_FUN_10f0db40(A...); undefined4 * __thiscall m_FUN_10f0ffa0(byte param_2); template<class... A> int m_FUN_10f0ffa0(A...); undefined4 * __thiscall m_FUN_10f0ffd0(byte param_2); template<class... A> int m_FUN_10f0ffd0(A...); undefined4 * __thiscall m_FUN_10f10000(byte param_2); template<class... A> int m_FUN_10f10000(A...); undefined4 * __thiscall m_FUN_10f10030(byte param_2); template<class... A> int m_FUN_10f10030(A...); undefined4 * __thiscall m_FUN_10f10060(byte param_2); template<class... A> int m_FUN_10f10060(A...); undefined4 * __thiscall m_FUN_10f10090(byte param_2); template<class... A> int m_FUN_10f10090(A...); undefined4 __thiscall m_FUN_10f100d0(byte param_2); template<class... A> int m_FUN_10f100d0(A...); undefined4 __thiscall m_FUN_10f10100(byte param_2); template<class... A> int m_FUN_10f10100(A...); undefined4 __thiscall m_FUN_10f10130(byte param_2); template<class... A> int m_FUN_10f10130(A...); undefined4 __thiscall m_FUN_10f102a0(byte param_2); template<class... A> int m_FUN_10f102a0(A...); undefined4 __thiscall m_FUN_10f102d0(byte param_2); template<class... A> int m_FUN_10f102d0(A...); undefined4 __thiscall m_FUN_10f10300(byte param_2); template<class... A> int m_FUN_10f10300(A...); undefined4 __thiscall m_FUN_10f10330(byte param_2); template<class... A> int m_FUN_10f10330(A...); undefined4 __thiscall m_FUN_10f10360(byte param_2); template<class... A> int m_FUN_10f10360(A...); undefined4 * __thiscall m_FUN_10f10630(byte param_2); template<class... A> int m_FUN_10f10630(A...); undefined4 * __thiscall m_FUN_10f10680(byte param_2); template<class... A> int m_FUN_10f10680(A...); undefined4 * __thiscall m_FUN_10f106b0(byte param_2); template<class... A> int m_FUN_10f106b0(A...); undefined4 * __thiscall m_FUN_10f106f0(byte param_2); template<class... A> int m_FUN_10f106f0(A...); undefined4 * __thiscall m_FUN_10f10730(byte param_2); template<class... A> int m_FUN_10f10730(A...); SCStr * __thiscall m_FUN_10f11bf0(SCStr *param_2); template<class... A> int m_FUN_10f11bf0(A...); SCStr * __thiscall m_FUN_10f11c30(SCStr *param_2); template<class... A> int m_FUN_10f11c30(A...); SCStr * __thiscall m_FUN_10f11ff0(SCStr *param_2); template<class... A> int m_FUN_10f11ff0(A...); SCStr * __thiscall m_FUN_10f12030(SCStr *param_2); template<class... A> int m_FUN_10f12030(A...); void __thiscall m_FUN_10f16250(undefined4 param_2); template<class... A> int m_FUN_10f16250(A...); int __thiscall m_FUN_10f163a0(SCStr *param_2); template<class... A> int m_FUN_10f163a0(A...); void __thiscall m_FUN_10f16c50(undefined4 *param_2); template<class... A> int m_FUN_10f16c50(A...); int * __thiscall m_FUN_10f18020(byte param_2); template<class... A> int m_FUN_10f18020(A...); int __thiscall m_FUN_10f182e0(byte param_2); template<class... A> int m_FUN_10f182e0(A...); void __thiscall m_FUN_10f1aa30(undefined4 *param_2); template<class... A> int m_FUN_10f1aa30(A...); void __thiscall m_FUN_10f1b1e0(undefined4 param_2); template<class... A> int m_FUN_10f1b1e0(A...); void __thiscall m_FUN_10f1b210(undefined4 param_2); template<class... A> int m_FUN_10f1b210(A...); undefined4 * __thiscall m_FUN_10f21b00(byte param_2); template<class... A> int m_FUN_10f21b00(A...); void __thiscall m_FUN_10f228a0(int param_2); template<class... A> int m_FUN_10f228a0(A...); void __thiscall m_FUN_10f239f0(undefined4 param_2); template<class... A> int m_FUN_10f239f0(A...); undefined4 * __thiscall m_FUN_10f267e0(byte param_2); template<class... A> int m_FUN_10f267e0(A...); undefined4 __thiscall m_FUN_10f26810(byte param_2); template<class... A> int m_FUN_10f26810(A...); undefined4 * __thiscall m_FUN_10f26a90(byte param_2); template<class... A> int m_FUN_10f26a90(A...); undefined4 * __thiscall m_FUN_10f26b80(byte param_2); template<class... A> int m_FUN_10f26b80(A...); undefined4 * __thiscall m_FUN_10f26bc0(byte param_2); template<class... A> int m_FUN_10f26bc0(A...); undefined4 __thiscall m_FUN_10f2ce50(undefined4 param_2); template<class... A> int m_FUN_10f2ce50(A...); undefined4 * __thiscall m_FUN_10f32910(byte param_2); template<class... A> int m_FUN_10f32910(A...); undefined4 * __thiscall m_FUN_10f32940(byte param_2); template<class... A> int m_FUN_10f32940(A...); undefined4 * __thiscall m_FUN_10f32970(byte param_2); template<class... A> int m_FUN_10f32970(A...); undefined4 * __thiscall m_FUN_10f329a0(byte param_2); template<class... A> int m_FUN_10f329a0(A...); undefined4 __thiscall m_FUN_10f329d0(byte param_2); template<class... A> int m_FUN_10f329d0(A...); undefined4 __thiscall m_FUN_10f32a00(byte param_2); template<class... A> int m_FUN_10f32a00(A...); undefined4 __thiscall m_FUN_10f32a30(byte param_2); template<class... A> int m_FUN_10f32a30(A...); undefined4 __thiscall m_FUN_10f32a60(byte param_2); template<class... A> int m_FUN_10f32a60(A...); undefined4 __thiscall m_FUN_10f32c20(byte param_2); template<class... A> int m_FUN_10f32c20(A...); undefined4 __thiscall m_FUN_10f32d30(byte param_2); template<class... A> int m_FUN_10f32d30(A...); undefined4 __thiscall m_FUN_10f32e40(byte param_2); template<class... A> int m_FUN_10f32e40(A...); undefined4 __thiscall m_FUN_10f32f50(byte param_2); template<class... A> int m_FUN_10f32f50(A...); undefined4 * __thiscall m_FUN_10f32f80(byte param_2); template<class... A> int m_FUN_10f32f80(A...); undefined4 * __thiscall m_FUN_10f32fc0(byte param_2); template<class... A> int m_FUN_10f32fc0(A...); };

extern int FUN_100517a8(...);
extern int FUN_1006aac8(...);
extern int FUN_10dc6500(...);
extern int FUN_10e06bc0(...);
extern int FUN_10ea7290(...);
extern int FUN_111138d0(...);
extern __declspec(dllimport) int __stdio_common_vsprintf(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int cancelTimeout(...);
extern int events(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern __declspec(dllimport) int strrchr(...);
extern __declspec(dllimport) int terminate(...);
extern int thunk_FUN_101a33f0(...);
extern int thunk_FUN_101a6c80(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101d7220(...);
extern int thunk_FUN_101f4930(...);
extern int thunk_FUN_10202e00(...);
extern int thunk_FUN_1020fe60(...);
extern int thunk_FUN_102105a0(...);
template<class... A> int __stdcall thunk_FUN_10210700(A...);
template<class... A> int __stdcall thunk_FUN_1021d0d0(A...);
extern int thunk_FUN_10288040(...);
template<class... A> int __stdcall thunk_FUN_1028a000(A...);
extern int thunk_FUN_102a3ea0(...);
extern int thunk_FUN_102f5770(...);
extern int thunk_FUN_103021f0(...);
extern int thunk_FUN_10302280(...);
extern int thunk_FUN_10302310(...);
extern int thunk_FUN_1030a0d0(...);
extern int thunk_FUN_1033c720(...);
extern int thunk_FUN_1036e480(...);
template<class... A> int __stdcall thunk_FUN_103d65f0(A...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_103eb560(...);
extern int thunk_FUN_103eb620(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_104ed870(...);
extern int thunk_FUN_104f77f0(...);
extern int thunk_FUN_10503c60(...);
extern int thunk_FUN_10504170(...);
extern int thunk_FUN_1050e5b0(...);
template<class... A> int __stdcall thunk_FUN_10545740(A...);
extern int thunk_FUN_1057b1f0(...);
extern int thunk_FUN_10595470(...);
extern int thunk_FUN_10595510(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_105a26b0(...);
template<class... A> int __stdcall thunk_FUN_105a2cd0(A...);
template<class... A> int __stdcall thunk_FUN_105a2e60(A...);
extern int thunk_FUN_105a3010(...);
extern int thunk_FUN_105a5630(...);
template<class... A> int __stdcall thunk_FUN_105a8c20(A...);
extern int thunk_FUN_105aa0f0(...);
template<class... A> int __stdcall thunk_FUN_105aa9d0(A...);
extern int thunk_FUN_105ad900(...);
extern int thunk_FUN_105ad940(...);
extern int thunk_FUN_105ae230(...);
extern int thunk_FUN_105ae450(...);
template<class... A> int __stdcall thunk_FUN_105ae560(A...);
template<class... A> int __stdcall thunk_FUN_105ae900(A...);
extern int thunk_FUN_105aeb50(...);
template<class... A> int __stdcall thunk_FUN_105aef50(A...);
extern int thunk_FUN_105aefc0(...);
extern int thunk_FUN_105af180(...);
template<class... A> int __stdcall thunk_FUN_105af1c0(A...);
template<class... A> int __stdcall thunk_FUN_105af2b0(A...);
template<class... A> int __stdcall thunk_FUN_105b02b0(A...);
extern int thunk_FUN_105b6490(...);
extern int thunk_FUN_105d3a20(...);
extern int thunk_FUN_105d44d0(...);
template<class... A> int __stdcall thunk_FUN_105f6050(A...);
template<class... A> int __stdcall thunk_FUN_10604c90(A...);
template<class... A> int __stdcall thunk_FUN_10604cd0(A...);
extern int thunk_FUN_106845c0(...);
extern int thunk_FUN_106c9af0(...);
extern int thunk_FUN_106c9eb0(...);
extern int thunk_FUN_106cf0e0(...);
extern int thunk_FUN_106d8310(...);
extern int thunk_FUN_106d8350(...);
extern int thunk_FUN_106d83f0(...);
extern int thunk_FUN_106dc520(...);
extern int thunk_FUN_106dc540(...);
extern int thunk_FUN_106dc570(...);
extern int thunk_FUN_106dc650(...);
extern int thunk_FUN_106dc6c0(...);
extern int thunk_FUN_106dfa00(...);
extern int thunk_FUN_10785c60(...);
extern int thunk_FUN_10799310(...);
extern int thunk_FUN_107cccd0(...);
extern int thunk_FUN_1086f290(...);
extern int thunk_FUN_108754f0(...);
template<class... A> int __stdcall thunk_FUN_10be2e40(A...);
extern int thunk_FUN_10be4f80(...);
template<class... A> int __stdcall thunk_FUN_10be6f80(A...);
extern int thunk_FUN_10c5e5a0(...);
extern int thunk_FUN_10c96760(...);
extern int thunk_FUN_10c98710(...);
template<class... A> int __stdcall thunk_FUN_10c9b9b0(A...);
extern int thunk_FUN_10d5e270(...);
extern int thunk_FUN_10d5f7c0(...);
extern int thunk_FUN_10d60e30(...);
extern int thunk_FUN_10d62720(...);
extern int thunk_FUN_10d684f0(...);
extern int thunk_FUN_10d685f0(...);
extern int thunk_FUN_10d751f0(...);
extern int thunk_FUN_10d752e0(...);
extern int thunk_FUN_10d753d0(...);
extern int thunk_FUN_10d75760(...);
extern int thunk_FUN_10d75960(...);
extern int thunk_FUN_10d798f0(...);
extern int thunk_FUN_10d806c0(...);
extern int thunk_FUN_10d80810(...);
extern int thunk_FUN_10d80960(...);
extern int thunk_FUN_10d80ab0(...);
extern int thunk_FUN_10d81060(...);
extern int thunk_FUN_10d81360(...);
extern int thunk_FUN_10d814e0(...);
extern int thunk_FUN_10d81890(...);
extern int thunk_FUN_10d8ceb0(...);
extern int thunk_FUN_10d8d010(...);
extern int thunk_FUN_10d97600(...);
extern int thunk_FUN_10d9b8e0(...);
extern int thunk_FUN_10d9ec90(...);
extern int thunk_FUN_10d9efd0(...);
extern int thunk_FUN_10da1370(...);
extern int thunk_FUN_10da1450(...);
extern int thunk_FUN_10da1530(...);
extern int thunk_FUN_10da15c0(...);
extern int thunk_FUN_10da1650(...);
extern int thunk_FUN_10da1740(...);
extern int thunk_FUN_10da1830(...);
extern int thunk_FUN_10da1c70(...);
extern int thunk_FUN_10da1cd0(...);
extern int thunk_FUN_10da1e80(...);
extern int thunk_FUN_10da1ea0(...);
extern int thunk_FUN_10db5760(...);
extern int thunk_FUN_10db8010(...);
extern int thunk_FUN_10db8100(...);
extern int thunk_FUN_10db8940(...);
extern int thunk_FUN_10db8c10(...);
extern int thunk_FUN_10dca8f0(...);
extern int thunk_FUN_10dcfdb0(...);
extern int thunk_FUN_10dd0610(...);
extern int thunk_FUN_10dd0b60(...);
extern int thunk_FUN_10dd10c0(...);
extern int thunk_FUN_10dd1440(...);
extern int thunk_FUN_10dd66e0(...);
extern int thunk_FUN_10dd6740(...);
extern int thunk_FUN_10dd6820(...);
extern int thunk_FUN_10dd6880(...);
extern int thunk_FUN_10dde6b0(...);
extern int thunk_FUN_10de4fe0(...);
extern int thunk_FUN_10de7a90(...);
extern int thunk_FUN_10de84c0(...);
template<class... A> int __stdcall thunk_FUN_10dec1c0(A...);
extern int thunk_FUN_10dec580(...);
extern int thunk_FUN_10dec7c0(...);
extern int thunk_FUN_10dedc10(...);
template<class... A> int __stdcall thunk_FUN_10deea50(A...);
template<class... A> int __stdcall thunk_FUN_10deeca0(A...);
extern int thunk_FUN_10def0d0(...);
template<class... A> int __stdcall thunk_FUN_10def4a0(A...);
extern int thunk_FUN_10def6b0(...);
extern int thunk_FUN_10defa10(...);
template<class... A> int __stdcall thunk_FUN_10df0720(A...);
extern int thunk_FUN_10df0ea0(...);
template<class... A> int __stdcall thunk_FUN_10df1180(A...);
extern int thunk_FUN_10df1530(...);
extern int thunk_FUN_10df15d0(...);
template<class... A> int __stdcall thunk_FUN_10df2460(A...);
extern int thunk_FUN_10df2e20(...);
extern int thunk_FUN_10df2e40(...);
extern int thunk_FUN_10df2ea0(...);
template<class... A> int __stdcall thunk_FUN_10df3040(A...);
template<class... A> int __stdcall thunk_FUN_10df3190(A...);
extern int thunk_FUN_10df31d0(...);
template<class... A> int __stdcall thunk_FUN_10df3a40(A...);
extern int thunk_FUN_10df3e90(...);
extern int thunk_FUN_10df3ed0(...);
extern int thunk_FUN_10df3fd0(...);
extern int thunk_FUN_10dfd3a0(...);
extern int thunk_FUN_10e00af0(...);
extern int thunk_FUN_10e01790(...);
template<class... A> int __stdcall thunk_FUN_10e0b4d0(A...);
extern int thunk_FUN_10e0b5b0(...);
extern int thunk_FUN_10e0b690(...);
extern int thunk_FUN_10e0b6f0(...);
template<class... A> int __stdcall thunk_FUN_10e0c800(A...);
extern int thunk_FUN_10e0d700(...);
template<class... A> int __stdcall thunk_FUN_10e0f0d0(A...);
template<class... A> int __stdcall thunk_FUN_10e0f500(A...);
extern int thunk_FUN_10e0f790(...);
extern int thunk_FUN_10e10dc0(...);
extern int thunk_FUN_10e12fb0(...);
extern int thunk_FUN_10e13320(...);
extern int thunk_FUN_10e19870(...);
extern int thunk_FUN_10e1dfc0(...);
extern int thunk_FUN_10e23ff0(...);
extern int thunk_FUN_10e26da0(...);
extern int thunk_FUN_10e26e90(...);
extern int thunk_FUN_10e26f80(...);
extern int thunk_FUN_10e27070(...);
extern int thunk_FUN_10e27890(...);
extern int thunk_FUN_10e28170(...);
extern int thunk_FUN_10e3cae0(...);
extern int thunk_FUN_10e44d70(...);
extern int thunk_FUN_10e460f0(...);
extern int thunk_FUN_10e46190(...);
template<class... A> int __stdcall thunk_FUN_10e46300(A...);
extern int thunk_FUN_10e4a9e0(...);
extern int thunk_FUN_10e4ddb0(...);
extern int thunk_FUN_10e55410(...);
extern int thunk_FUN_10e5a5e0(...);
extern int thunk_FUN_10e5abe0(...);
extern int thunk_FUN_10e5acf0(...);
extern int thunk_FUN_10e5ca20(...);
extern int thunk_FUN_10e5db70(...);
extern int thunk_FUN_10e5dc60(...);
extern int thunk_FUN_10e5dd50(...);
extern int thunk_FUN_10e5de40(...);
extern int thunk_FUN_10e5df30(...);
extern int thunk_FUN_10e5ead0(...);
extern int thunk_FUN_10e5ef30(...);
extern int thunk_FUN_10e697b0(...);
extern int thunk_FUN_10e79390(...);
extern int thunk_FUN_10e7fac0(...);
template<class... A> int __stdcall thunk_FUN_10e82310(A...);
extern int thunk_FUN_10e84bd0(...);
extern int thunk_FUN_10e92f40(...);
extern int thunk_FUN_10e93090(...);
extern int thunk_FUN_10e93180(...);
extern int thunk_FUN_10e93270(...);
extern int thunk_FUN_10e93360(...);
extern int thunk_FUN_10e93450(...);
extern int thunk_FUN_10e93540(...);
extern int thunk_FUN_10e95b70(...);
extern int thunk_FUN_10ea8130(...);
extern int thunk_FUN_10eab3e0(...);
extern int thunk_FUN_10eb2520(...);
extern int thunk_FUN_10eb27e0(...);
extern int thunk_FUN_10eb29d0(...);
extern int thunk_FUN_10eb4020(...);
template<class... A> int __stdcall thunk_FUN_10eb4cc0(A...);
template<class... A> int __stdcall thunk_FUN_10eb4d80(A...);
extern int thunk_FUN_10eb4e80(...);
extern int thunk_FUN_10eb5050(...);
extern int thunk_FUN_10eb50c0(...);
extern int thunk_FUN_10eb5130(...);
extern int thunk_FUN_10ebc8e0(...);
template<class... A> int __stdcall thunk_FUN_10ebd6e0(A...);
extern int thunk_FUN_10ebf160(...);
extern int thunk_FUN_10ec1d20(...);
extern int thunk_FUN_10ec2f90(...);
extern int thunk_FUN_10ed00f0(...);
extern int thunk_FUN_10ed98d0(...);
extern int thunk_FUN_10edf790(...);
extern int thunk_FUN_10ee15b0(...);
extern int thunk_FUN_10ee2200(...);
extern int thunk_FUN_10ee22e0(...);
extern int thunk_FUN_10eebae0(...);
extern int thunk_FUN_10eebbd0(...);
extern int thunk_FUN_10eed870(...);
extern int thunk_FUN_10eeee80(...);
extern int thunk_FUN_10ef1910(...);
extern int thunk_FUN_10ef1b10(...);
extern int thunk_FUN_10ef4620(...);
extern int thunk_FUN_10ef70c0(...);
extern int thunk_FUN_10ef9890(...);
extern int thunk_FUN_10f00850(...);
template<class... A> int __stdcall thunk_FUN_10f01a30(A...);
extern int thunk_FUN_10f01c90(...);
extern int thunk_FUN_10f01e70(...);
extern int thunk_FUN_10f0b5e0(...);
extern int thunk_FUN_10f0ef30(...);
extern int thunk_FUN_10f0f080(...);
extern int thunk_FUN_10f0f1d0(...);
extern int thunk_FUN_10f0f4b0(...);
extern int thunk_FUN_10f0f600(...);
extern int thunk_FUN_10f0f7a0(...);
extern int thunk_FUN_10f0f8e0(...);
extern int thunk_FUN_10f0fa30(...);
template<class... A> int __stdcall thunk_FUN_10f11890(A...);
template<class... A> int __stdcall thunk_FUN_10f15f70(A...);
extern int thunk_FUN_10f16280(...);
extern int thunk_FUN_10f163f0(...);
extern int thunk_FUN_10f19370(...);
template<class... A> int __stdcall thunk_FUN_10f1b240(A...);
template<class... A> int __stdcall thunk_FUN_10f1b340(A...);
extern int thunk_FUN_10f1b420(...);
extern int thunk_FUN_10f1b480(...);
extern int thunk_FUN_10f1b4e0(...);
extern int thunk_FUN_10f220c0(...);
extern int thunk_FUN_10f22380(...);
template<class... A> int __stdcall thunk_FUN_10f23a20(A...);
extern int thunk_FUN_10f259f0(...);
template<class... A> int __stdcall thunk_FUN_10f29d90(A...);
extern int thunk_FUN_10f31800(...);
extern int thunk_FUN_10f31950(...);
extern int thunk_FUN_10f31aa0(...);
extern int thunk_FUN_10f31bf0(...);
extern int thunk_FUN_10f31e90(...);
extern int thunk_FUN_10f32100(...);
extern int thunk_FUN_10f32370(...);
extern int thunk_FUN_10f32630(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a3e90(...);
template<class... A> int __stdcall thunk_FUN_110dde00(A...);
extern int thunk_FUN_11111e40(...);
extern int thunk_FUN_111135f0(...);
extern int thunk_FUN_11113bb0(...);
extern int thunk_FUN_11132140(...);
extern int thunk_FUN_111a4bc0(...);
extern int thunk_FUN_111a4f00(...);
extern int thunk_FUN_111bd050(...);
extern int thunk_FUN_111bd6b0(...);
extern int thunk_FUN_111be2e0(...);
template<class... A> int __stdcall thunk_FUN_111c0ad0(A...);
template<class... A> int __stdcall thunk_FUN_111c0af0(A...);
extern int thunk_FUN_111e9ad0(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_112503c0(...);
extern int thunk_FUN_1125f8a0(...);
extern int thunk_FUN_112a7c70(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_112afbd0(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_1186d2ee;
extern int DAT_11882ff0;
extern int DAT_1211a230;
extern int DAT_12126b84;
extern int g_lSCObjCount;
extern int ghidra_vftable_ExtractArchiveOp;
extern int ghidra_vftable_HHSettingsReader;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RDataSource;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RUpnpACSetFormatAIOOp;
extern int ghidra_vftable_RUpnpACSetTimeNowAIOOp;
extern int ghidra_vftable_RUpnpACSetTimeServerAIOOp;
extern int ghidra_vftable_RUpnpACSetTimeZoneAIOOp;
extern int ghidra_vftable_RUpnpAVTAddURIToSavedQueueAIOOp;
extern int ghidra_vftable_RUpnpDPAddBondedZonesAIOOp;
extern int ghidra_vftable_RUpnpHTCGetLEDFeedbackStateAIOOp;
extern int ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp;
extern int ghidra_vftable_RZPTransferButtonEnumerator;
extern int ghidra_vftable_SCAccountDeletionRequest;
extern int ghidra_vftable_SCAccountRolePostRequest;
extern int ghidra_vftable_SCAlexaAuthChecklistDownloadAlexaState;
extern int ghidra_vftable_SCAlexaAuthCompleteState;
extern int ghidra_vftable_SCAlexaAuthEnableAckChimeState;
extern int ghidra_vftable_SCAuthorizeAccountGetRequest;
extern int ghidra_vftable_SCAuthorizeRedirectGetRequest;
extern int ghidra_vftable_SCBrowsePageExtensionRootBrowseTuneInMigrationTile;
extern int ghidra_vftable_SCBrowsePageExtensionServiceBrowseTuneInMigrationTile;
extern int ghidra_vftable_SCCPInfoListDataSource;
extern int ghidra_vftable_SCChangeEmailWizCompleteState;
extern int ghidra_vftable_SCChangeEmailWizInitState;
extern int ghidra_vftable_SCContentUrlGetRequest;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCInfoViewAIOOpGeneratorCB;
extern int ghidra_vftable_SCInfoviewMenuInfo;
extern int ghidra_vftable_SCInfoviewViewBuilder_HeaderMapping;
extern int ghidra_vftable_SCInfoviewViewBuilder_MenuItemMapping;
extern int ghidra_vftable_SCLegacyMusicLibrarySetupWizardCompleteState;
extern int ghidra_vftable_SCLegacyMusicLibrarySetupWizardInitState;
extern int ghidra_vftable_SCLegacyMusicLibrarySetupWizardSubwizardState;
extern int ghidra_vftable_SCLegacyWelcomeLoginWizard;
extern int ghidra_vftable_SCLegacyWelcomeLoginWizardInitState;
extern int ghidra_vftable_SCLifecycleMixedLegacyCompleteState;
extern int ghidra_vftable_SCLifecycleMixedLegacyIncompatPlayersState;
extern int ghidra_vftable_SCLifecycleMixedLegacyWizard;
extern int ghidra_vftable_SCLifecycleModernCompleteState;
extern int ghidra_vftable_SCLifecycleWizardMixedLegacyInitState;
extern int ghidra_vftable_SCLifecycleWizardModernInitState;
extern int ghidra_vftable_SCMusicIndexUpdateTimeAction;
extern int ghidra_vftable_SCMySonosPageExtensionSonosRadioTile;
extern int ghidra_vftable_SCNewWizEventSource;
extern int ghidra_vftable_SCNewWizParams;
extern int ghidra_vftable_SCNewWizStayPut;
extern int ghidra_vftable_SCOAuthTokenPostRequest;
extern int ghidra_vftable_SCOpAVTransportAddURIToSavedQueue;
extern int ghidra_vftable_SCOpAccountCreate;
extern int ghidra_vftable_SCOpAccountDeletion;
extern int ghidra_vftable_SCOpAccountLogin;
extern int ghidra_vftable_SCOpAccountRefreshTokens;
extern int ghidra_vftable_SCOpBonding;
extern int ghidra_vftable_SCOpContentDirectoryRefreshShareIndex;
extern int ghidra_vftable_SCOpControllerOnlySubmitDirectDiagnostics;
extern int ghidra_vftable_SCOpGetEthernetStatus;
extern int ghidra_vftable_SCOpGetNetworkConnectivityTestResult;
extern int ghidra_vftable_SCOpHTControlGetLEDFeedbackState;
extern int ghidra_vftable_SCOpHdmiGetInfo;
extern int ghidra_vftable_SCOpSetViewContributingAsync;
extern int ghidra_vftable_SCOpSubmitDiagnostics;
extern int ghidra_vftable_SCOpSubmitDirectDiagnostics;
extern int ghidra_vftable_SCOpUnbonding;
extern int ghidra_vftable_SCScheduleIndexUpdateToggleAction;
extern int ghidra_vftable_SCSearchUrlGetRequest;
extern int ghidra_vftable_SCSecureExistingCompleteState;
extern int ghidra_vftable_SCSecureExistingInitState;
extern int ghidra_vftable_SCSecurePlayerCompleteState;
extern int ghidra_vftable_SCSecurePlayerInitState;
extern int ghidra_vftable_SCSecureRegistrationCompleteState;
extern int ghidra_vftable_SCSecureRegistrationInitState;
extern int ghidra_vftable_SCSecureTransferWizCompleteState;
extern int ghidra_vftable_SCSecureTransferWizInitState;
extern int ghidra_vftable_SCSecureTransferWizIntroState;
extern int ghidra_vftable_SCSelectAlbumsSelectAction;
extern int ghidra_vftable_SCSonanceDetectionInitState;
extern int ghidra_vftable_SCSonanceDetectionIntroState;
extern int ghidra_vftable_SCStrPropDelegate;
extern int ghidra_vftable_SCSubwizState;
extern int ghidra_vftable_SCSwfObjSPListener;
extern int ghidra_vftable_SCSwfObjSysInternalListener;
extern int ghidra_vftable_SCViewContributingArtistsToggleAction;
extern int ghidra_vftable_SCWizardState;
extern int ghidra_vftable_Tarball;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_EAX;
extern int uStack_20;
extern int uStack_48;
extern int uStack_50;
extern int uStack_8;
extern int uStack_88;
extern int uStack_8c;
extern int uStack_c;
extern undefined1 LAB_10060b9a[];
extern undefined1 LAB_105ad9e2[];
extern undefined1 LAB_105adbb7[];
extern undefined1 LAB_10d7750b[];
extern undefined1 LAB_10e2b4ee[];
extern undefined1 LAB_115a8bef[];
extern undefined1 LAB_1171dd80[];
extern undefined1 LAB_1171eee0[];
extern undefined1 LAB_11731340[];
extern void *ExceptionList;
extern int FUN_112a9d50(...);
extern int FUN_112a9d70(...);
extern int FUN_112aa350(...);
extern int FUN_112afbc0(...);
void __stdcall FUN_10d5e990(int param_1,int param_2);
template<class... A> int FUN_10d5e990(A...);
void __stdcall FUN_10d5ed90(int param_1);
template<class... A> int FUN_10d5ed90(A...);
void __stdcall FUN_10d5efd0(int param_1,int param_2);
template<class... A> int FUN_10d5efd0(A...);
void __stdcall FUN_10d5f020(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_10d5f020(A...);
SCStr * __stdcall FUN_10d5f050(SCStr *param_1);
template<class... A> int FUN_10d5f050(A...);
SCStr * __stdcall FUN_10d5f370(SCStr *param_1);
template<class... A> int FUN_10d5f370(A...);
int __fastcall FUN_10d5f4d0(int param_1);
template<class... A> int FUN_10d5f4d0(A...);
undefined4 __stdcall FUN_10d5f500(int param_1);
template<class... A> int FUN_10d5f500(A...);
SCStr * __stdcall FUN_10d5f520(SCStr *param_1, int param_2, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10d5f520(A...);
undefined4 FUN_10d5fc00(int param_1);
template<class... A> int FUN_10d5fc00(A...);
SCStr * __stdcall FUN_10d615f0(SCStr *param_1);
template<class... A> int FUN_10d615f0(A...);
SCStr * __stdcall FUN_10d61610(SCStr *param_1);
template<class... A> int FUN_10d61610(A...);
SCStr * __stdcall FUN_10d61630(SCStr *param_1);
template<class... A> int FUN_10d61630(A...);
undefined4 __fastcall FUN_10d61910(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d61910(A...);
undefined4 __fastcall FUN_10d61e50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d61e50(A...);
SCStr * __stdcall FUN_10d61ed0(SCStr *param_1);
template<class... A> int FUN_10d61ed0(A...);
int __fastcall FUN_10d61f10(int param_1);
template<class... A> int FUN_10d61f10(A...);
SCStr * __stdcall FUN_10d62130(SCStr *param_1);
template<class... A> int FUN_10d62130(A...);
SCStr * __stdcall FUN_10d62440(SCStr *param_1);
template<class... A> int FUN_10d62440(A...);
SCStr * __stdcall FUN_10d62460(SCStr *param_1);
template<class... A> int FUN_10d62460(A...);
undefined4 __fastcall FUN_10d62490(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d62490(A...);
SCStr * __stdcall FUN_10d626c0(SCStr *param_1);
template<class... A> int FUN_10d626c0(A...);
SCStr * __stdcall FUN_10d626e0(SCStr *param_1);
template<class... A> int FUN_10d626e0(A...);
SCStr * __stdcall FUN_10d62700(SCStr *param_1);
template<class... A> int FUN_10d62700(A...);
undefined4 __fastcall FUN_10d63300(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d63300(A...);
void __fastcall FUN_10d634d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d634d0(A...);
void __fastcall FUN_10d63600(int *param_1);
template<class... A> int FUN_10d63600(A...);
uint __fastcall FUN_10d638e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d638e0(A...);
void __fastcall FUN_10d645b0(undefined4 *param_1);
template<class... A> int FUN_10d645b0(A...);
void __fastcall FUN_10d65370(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10d65370(A...);
SCStr * __stdcall FUN_10d65550(SCStr *param_1);
template<class... A> int FUN_10d65550(A...);
SCStr * __stdcall FUN_10d65570(SCStr *param_1);
template<class... A> int FUN_10d65570(A...);
SCStr * __stdcall FUN_10d65590(SCStr *param_1);
template<class... A> int FUN_10d65590(A...);
void __fastcall FUN_10d655b0(int *param_1);
template<class... A> int FUN_10d655b0(A...);
SCStr * __stdcall FUN_10d65860(SCStr *param_1);
template<class... A> int FUN_10d65860(A...);
SCStr * __stdcall FUN_10d65cc0(SCStr *param_1);
template<class... A> int FUN_10d65cc0(A...);
SCStr * __stdcall FUN_10d66760(SCStr *param_1);
template<class... A> int FUN_10d66760(A...);
SCStr * FUN_10d668e0(SCStr *param_1,int param_2);
template<class... A> int FUN_10d668e0(A...);
SCStr * __stdcall FUN_10d66990(SCStr *param_1);
template<class... A> int FUN_10d66990(A...);
SCStr * __stdcall FUN_10d66e50(SCStr *param_1);
template<class... A> int FUN_10d66e50(A...);
undefined4 __fastcall FUN_10d67100(int param_1);
template<class... A> int FUN_10d67100(A...);
void __stdcall FUN_10d67eb0(int param_1);
template<class... A> int FUN_10d67eb0(A...);
undefined4 * __fastcall FUN_10d68a40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d68a40(A...);
void __fastcall FUN_10d69740(undefined4 *param_1);
template<class... A> int FUN_10d69740(A...);
void __fastcall FUN_10d69760(int param_1);
template<class... A> int FUN_10d69760(A...);
void __fastcall FUN_10d69780(int *param_1);
template<class... A> int FUN_10d69780(A...);
void __fastcall FUN_10d69860(int *param_1);
template<class... A> int FUN_10d69860(A...);
void __fastcall FUN_10d6a810(int param_1);
template<class... A> int FUN_10d6a810(A...);
void __stdcall FUN_10d6add0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5);
template<class... A> int FUN_10d6add0(A...);
void __fastcall FUN_10d6af90(int *param_1);
template<class... A> int FUN_10d6af90(A...);
SCStr * __stdcall FUN_10d6bb30(SCStr *param_1);
template<class... A> int FUN_10d6bb30(A...);
SCStr * __stdcall FUN_10d6bb50(SCStr *param_1);
template<class... A> int FUN_10d6bb50(A...);
SCStr * __stdcall FUN_10d6bb70(SCStr *param_1);
template<class... A> int FUN_10d6bb70(A...);
SCStr * __stdcall FUN_10d6c020(SCStr *param_1);
template<class... A> int FUN_10d6c020(A...);
int __fastcall FUN_10d6d4c0(int param_1);
template<class... A> int FUN_10d6d4c0(A...);
undefined4 __fastcall FUN_10d71620(int param_1);
template<class... A> int FUN_10d71620(A...);
void __stdcall FUN_10d73f00(int param_1);
template<class... A> int FUN_10d73f00(A...);
void __fastcall FUN_10d755b0(int *param_1);
template<class... A> int FUN_10d755b0(A...);
void __fastcall FUN_10d755e0(int *param_1);
template<class... A> int FUN_10d755e0(A...);
void __fastcall FUN_10d75610(int *param_1);
template<class... A> int FUN_10d75610(A...);
void __fastcall FUN_10d75640(int *param_1);
template<class... A> int FUN_10d75640(A...);
void __fastcall FUN_10d75670(int *param_1);
template<class... A> int FUN_10d75670(A...);
void __fastcall FUN_10d756a0(int *param_1);
template<class... A> int FUN_10d756a0(A...);
int * __fastcall FUN_10d75dc0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d75dc0(A...);
int * __fastcall FUN_10d75df0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d75df0(A...);
int * __fastcall FUN_10d75e20(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d75e20(A...);
void __fastcall FUN_10d766e0(int *param_1);
template<class... A> int FUN_10d766e0(A...);
void __fastcall FUN_10d76710(int *param_1);
template<class... A> int FUN_10d76710(A...);
void __fastcall FUN_10d76740(int *param_1);
template<class... A> int FUN_10d76740(A...);
char __fastcall FUN_10d774f0(int param_1);
template<class... A> int FUN_10d774f0(A...);
void __fastcall FUN_10d77940(int param_1);
template<class... A> int FUN_10d77940(A...);
void FUN_10d77b40(void);
template<class... A> int FUN_10d77b40(A...);
SCStr * __stdcall FUN_10d77e70(SCStr *param_1);
template<class... A> int FUN_10d77e70(A...);
SCStr * __stdcall FUN_10d77e90(SCStr *param_1);
template<class... A> int FUN_10d77e90(A...);
SCStr * __stdcall FUN_10d77eb0(SCStr *param_1);
template<class... A> int FUN_10d77eb0(A...);
SCStr * __stdcall FUN_10d77f20(SCStr *param_1);
template<class... A> int FUN_10d77f20(A...);
SCStr * __stdcall FUN_10d79410(SCStr *param_1);
template<class... A> int FUN_10d79410(A...);
bool __fastcall FUN_10d79fc0(int param_1);
template<class... A> int FUN_10d79fc0(A...);
void FUN_10d7a4a0(void);
template<class... A> int FUN_10d7a4a0(A...);
SCStr * __stdcall FUN_10d83a40(SCStr *param_1);
template<class... A> int FUN_10d83a40(A...);
SCStr * __stdcall FUN_10d83a60(SCStr *param_1);
template<class... A> int FUN_10d83a60(A...);
SCStr * __stdcall FUN_10d83a80(SCStr *param_1);
template<class... A> int FUN_10d83a80(A...);
SCStr * __stdcall FUN_10d83aa0(SCStr *param_1);
template<class... A> int FUN_10d83aa0(A...);
int __fastcall FUN_10d893e0(int param_1);
template<class... A> int FUN_10d893e0(A...);
SCStr * __stdcall FUN_10d8ace0(SCStr *param_1);
template<class... A> int FUN_10d8ace0(A...);
SCStr * __stdcall FUN_10d8ad10(SCStr *param_1);
template<class... A> int FUN_10d8ad10(A...);
SCStr * __stdcall FUN_10d8ad40(SCStr *param_1);
template<class... A> int FUN_10d8ad40(A...);
SCStr * __stdcall FUN_10d8ad70(SCStr *param_1);
template<class... A> int FUN_10d8ad70(A...);
void FUN_10d8ce00(void);
template<class... A> int FUN_10d8ce00(A...);
void __fastcall FUN_10d8f2b0(int *param_1);
template<class... A> int FUN_10d8f2b0(A...);
void __fastcall FUN_10d8f2e0(int *param_1);
template<class... A> int FUN_10d8f2e0(A...);
void __fastcall FUN_10d92ec0(int param_1);
template<class... A> int FUN_10d92ec0(A...);
SCStr * __stdcall FUN_10d97030(SCStr *param_1);
template<class... A> int FUN_10d97030(A...);
SCStr * __stdcall FUN_10d97060(SCStr *param_1);
template<class... A> int FUN_10d97060(A...);
SCStr * __stdcall FUN_10d97090(SCStr *param_1);
template<class... A> int FUN_10d97090(A...);
SCStr * __stdcall FUN_10d970c0(SCStr *param_1);
template<class... A> int FUN_10d970c0(A...);
SCStr * __stdcall FUN_10d970f0(SCStr *param_1);
template<class... A> int FUN_10d970f0(A...);
void __fastcall FUN_10d97510(int *param_1);
template<class... A> int FUN_10d97510(A...);
void __fastcall FUN_10d9b8c0(undefined4 *param_1);
template<class... A> int FUN_10d9b8c0(A...);
void __fastcall FUN_10d9bb70(int *param_1);
template<class... A> int FUN_10d9bb70(A...);
void __fastcall FUN_10d9c750(int *param_1);
template<class... A> int FUN_10d9c750(A...);
SCStr * __stdcall FUN_10d9c930(SCStr *param_1);
template<class... A> int FUN_10d9c930(A...);
SCStr * __stdcall FUN_10d9c960(SCStr *param_1);
template<class... A> int FUN_10d9c960(A...);
SCStr * __stdcall FUN_10d9c990(SCStr *param_1);
template<class... A> int FUN_10d9c990(A...);
SCStr * __stdcall FUN_10d9cb10(SCStr *param_1);
template<class... A> int FUN_10d9cb10(A...);
undefined4 * __fastcall FUN_10d9f530(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d9f530(A...);
void __fastcall FUN_10d9f950(int param_1);
template<class... A> int FUN_10d9f950(A...);
void __fastcall FUN_10d9f970(int *param_1);
template<class... A> int FUN_10d9f970(A...);
void __fastcall FUN_10d9fa30(int param_1);
template<class... A> int FUN_10d9fa30(A...);
void __fastcall FUN_10d9fa50(int *param_1);
template<class... A> int FUN_10d9fa50(A...);
void __fastcall FUN_10da00b0(int param_1);
template<class... A> int FUN_10da00b0(A...);
SCStr * __stdcall FUN_10da0840(SCStr *param_1);
template<class... A> int FUN_10da0840(A...);
SCStr * __stdcall FUN_10da0860(SCStr *param_1);
template<class... A> int FUN_10da0860(A...);
undefined4 FUN_10da1830(void);
template<class... A> int FUN_10da1830(A...);
bool FUN_10da1e80(void);
template<class... A> int FUN_10da1e80(A...);
undefined4 * __fastcall FUN_10da4720(undefined4 *param_1);
template<class... A> int FUN_10da4720(A...);
void __fastcall FUN_10da4f20(undefined4 *param_1);
template<class... A> int FUN_10da4f20(A...);
void __fastcall FUN_10da4f40(undefined4 *param_1);
template<class... A> int FUN_10da4f40(A...);
void __fastcall FUN_10da5040(int *param_1);
template<class... A> int FUN_10da5040(A...);
void __fastcall FUN_10da50a0(int *param_1);
template<class... A> int FUN_10da50a0(A...);
void __fastcall FUN_10da5350(int *param_1);
template<class... A> int FUN_10da5350(A...);
void __fastcall FUN_10da5d90(int *param_1);
template<class... A> int FUN_10da5d90(A...);
void __fastcall FUN_10da6830(int param_1);
template<class... A> int FUN_10da6830(A...);
uint __fastcall FUN_10da6b80(int param_1);
template<class... A> int FUN_10da6b80(A...);
uint __fastcall FUN_10da7060(int param_1);
template<class... A> int FUN_10da7060(A...);
undefined4 __fastcall FUN_10da7080(int param_1);
template<class... A> int FUN_10da7080(A...);
undefined4 __fastcall FUN_10da71e0(int param_1);
template<class... A> int FUN_10da71e0(A...);
undefined4 __fastcall FUN_10da73d0(int *param_1);
template<class... A> int FUN_10da73d0(A...);
void __fastcall FUN_10da73f0(int param_1);
template<class... A> int FUN_10da73f0(A...);
void __fastcall FUN_10da7430(int param_1);
template<class... A> int FUN_10da7430(A...);
void __fastcall FUN_10da7460(int param_1);
template<class... A> int FUN_10da7460(A...);
void __fastcall FUN_10da7490(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10da7490(A...);
void __fastcall FUN_10da74c0(int param_1);
template<class... A> int FUN_10da74c0(A...);
void __fastcall FUN_10da74f0(int param_1);
template<class... A> int FUN_10da74f0(A...);
void __stdcall FUN_10da7e10(int param_1);
template<class... A> int FUN_10da7e10(A...);
SCStr * __stdcall FUN_10da8a80(SCStr *param_1);
template<class... A> int FUN_10da8a80(A...);
SCStr * __stdcall FUN_10da8ca0(SCStr *param_1);
template<class... A> int FUN_10da8ca0(A...);
undefined4 __fastcall FUN_10da9750(int param_1);
template<class... A> int FUN_10da9750(A...);
void __fastcall FUN_10dab3a0(int *param_1);
template<class... A> int FUN_10dab3a0(A...);
SCStr * __stdcall FUN_10db1e60(SCStr *param_1);
template<class... A> int FUN_10db1e60(A...);
SCStr * __stdcall FUN_10db1e80(SCStr *param_1);
template<class... A> int FUN_10db1e80(A...);
SCStr * __stdcall FUN_10db1ea0(SCStr *param_1);
template<class... A> int FUN_10db1ea0(A...);
SCStr * __stdcall FUN_10db1ec0(SCStr *param_1);
template<class... A> int FUN_10db1ec0(A...);
void __fastcall FUN_10db2270(int *param_1);
template<class... A> int FUN_10db2270(A...);
void __fastcall FUN_10db22c0(int *param_1);
template<class... A> int FUN_10db22c0(A...);
void __fastcall FUN_10db2460(int *param_1);
template<class... A> int FUN_10db2460(A...);
void __fastcall FUN_10db3250(int param_1);
template<class... A> int FUN_10db3250(A...);
void __fastcall FUN_10db3270(int param_1);
template<class... A> int FUN_10db3270(A...);
void __fastcall FUN_10db3760(int param_1);
template<class... A> int FUN_10db3760(A...);
void __fastcall FUN_10db3780(int param_1);
template<class... A> int FUN_10db3780(A...);
void __fastcall FUN_10db7ff0(undefined4 *param_1);
template<class... A> int FUN_10db7ff0(A...);
void __stdcall FUN_10dbd9b0(int param_1,int param_2);
template<class... A> int FUN_10dbd9b0(A...);
undefined4 __fastcall FUN_10dc3e30(int param_1);
template<class... A> int FUN_10dc3e30(A...);
SCStr * __stdcall FUN_10dc5230(SCStr *param_1);
template<class... A> int FUN_10dc5230(A...);
SCStr * __stdcall FUN_10dc5370(SCStr *param_1);
template<class... A> int FUN_10dc5370(A...);
SCStr * __stdcall FUN_10dc5390(SCStr *param_1);
template<class... A> int FUN_10dc5390(A...);
SCStr * __stdcall FUN_10dc5690(SCStr *param_1);
template<class... A> int FUN_10dc5690(A...);
SCStr * __stdcall FUN_10dc56b0(SCStr *param_1);
template<class... A> int FUN_10dc56b0(A...);
SCStr * __stdcall FUN_10dc56d0(SCStr *param_1);
template<class... A> int FUN_10dc56d0(A...);
SCStr * __stdcall FUN_10dc56f0(SCStr *param_1);
template<class... A> int FUN_10dc56f0(A...);
SCStr * __stdcall FUN_10dc5c40(SCStr *param_1);
template<class... A> int FUN_10dc5c40(A...);
SCStr * __stdcall FUN_10dc5c60(SCStr *param_1);
template<class... A> int FUN_10dc5c60(A...);
bool __fastcall FUN_10dc7740(int param_1);
template<class... A> int FUN_10dc7740(A...);
void __fastcall FUN_10dc7950(int param_1);
template<class... A> int FUN_10dc7950(A...);
SCStr * __stdcall FUN_10dcd630(SCStr *param_1);
template<class... A> int FUN_10dcd630(A...);
SCStr * __stdcall FUN_10dcd650(SCStr *param_1);
template<class... A> int FUN_10dcd650(A...);
SCStr * __stdcall FUN_10dcd670(SCStr *param_1);
template<class... A> int FUN_10dcd670(A...);
SCStr * __stdcall FUN_10dcd690(SCStr *param_1);
template<class... A> int FUN_10dcd690(A...);
SCStr * __stdcall FUN_10dcd7f0(SCStr *param_1);
template<class... A> int FUN_10dcd7f0(A...);
SCStr * __stdcall FUN_10dcd810(SCStr *param_1);
template<class... A> int FUN_10dcd810(A...);
void __fastcall FUN_10dcdda0(int *param_1);
template<class... A> int FUN_10dcdda0(A...);
void __fastcall FUN_10dce130(undefined4 *param_1);
template<class... A> int FUN_10dce130(A...);
SCStr * __stdcall FUN_10dcfac0(SCStr *param_1);
template<class... A> int FUN_10dcfac0(A...);
SCStr * __stdcall FUN_10dcfae0(SCStr *param_1);
template<class... A> int FUN_10dcfae0(A...);
undefined4 * __fastcall FUN_10dd0460(undefined4 *param_1);
template<class... A> int FUN_10dd0460(A...);
void __fastcall FUN_10dd1150(undefined4 *param_1);
template<class... A> int FUN_10dd1150(A...);
int __fastcall FUN_10dd2280(int param_1);
template<class... A> int FUN_10dd2280(A...);
void __fastcall FUN_10dd2650(undefined4 *param_1);
template<class... A> int FUN_10dd2650(A...);
SCStr * __stdcall FUN_10dd2fa0(SCStr *param_1);
template<class... A> int FUN_10dd2fa0(A...);
undefined4 __stdcall FUN_10dd3040(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10dd3040(A...);
void __fastcall FUN_10dd44c0(int param_1);
template<class... A> int FUN_10dd44c0(A...);
int __fastcall FUN_10dd5e60(int param_1);
template<class... A> int FUN_10dd5e60(A...);
int __fastcall FUN_10dd5ea0(int param_1);
template<class... A> int FUN_10dd5ea0(A...);
undefined4 * __fastcall FUN_10dd7220(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10dd7220(A...);
undefined4 * __fastcall FUN_10dd7260(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10dd7260(A...);
void __fastcall FUN_10dd7ec0(int param_1);
template<class... A> int FUN_10dd7ec0(A...);
void __fastcall FUN_10dd7ee0(int param_1);
template<class... A> int FUN_10dd7ee0(A...);
void __fastcall FUN_10dd7f00(int *param_1);
template<class... A> int FUN_10dd7f00(A...);
void __fastcall FUN_10dd7f30(int *param_1);
template<class... A> int FUN_10dd7f30(A...);
void __fastcall FUN_10dd7f60(int param_1);
template<class... A> int FUN_10dd7f60(A...);
void __fastcall FUN_10dd7f90(int param_1);
template<class... A> int FUN_10dd7f90(A...);
void __fastcall FUN_10dd8000(int *param_1);
template<class... A> int FUN_10dd8000(A...);
void __fastcall FUN_10dd8030(int *param_1);
template<class... A> int FUN_10dd8030(A...);
void __fastcall FUN_10dd8f40(int param_1);
template<class... A> int FUN_10dd8f40(A...);
void __fastcall FUN_10dd8f60(int param_1);
template<class... A> int FUN_10dd8f60(A...);
void __stdcall FUN_10dd9be0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5);
template<class... A> int FUN_10dd9be0(A...);
void __fastcall FUN_10dde620(undefined4 *param_1);
template<class... A> int FUN_10dde620(A...);
void __fastcall FUN_10de2180(int param_1);
template<class... A> int FUN_10de2180(A...);
void __fastcall FUN_10de4fc0(undefined4 *param_1);
template<class... A> int FUN_10de4fc0(A...);
SCStr * __stdcall FUN_10de6b80(SCStr *param_1);
template<class... A> int FUN_10de6b80(A...);
SCStr * __stdcall FUN_10de6d90(SCStr *param_1);
template<class... A> int FUN_10de6d90(A...);
SCStr * __stdcall FUN_10de6db0(SCStr *param_1);
template<class... A> int FUN_10de6db0(A...);
SCStr * __stdcall FUN_10de6e50(SCStr *param_1);
template<class... A> int FUN_10de6e50(A...);
undefined4 * __fastcall FUN_10de9cd0(undefined4 *param_1);
template<class... A> int FUN_10de9cd0(A...);
void FUN_10de9dd0(void);
template<class... A> int FUN_10de9dd0(A...);
undefined4 * __fastcall FUN_10dee260(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10dee260(A...);
undefined4 * __fastcall FUN_10deef20(undefined4 *param_1);
template<class... A> int FUN_10deef20(A...);
void __fastcall FUN_10deef50(int param_1);
template<class... A> int FUN_10deef50(A...);
void __fastcall FUN_10deef70(int param_1);
template<class... A> int FUN_10deef70(A...);
void __fastcall FUN_10deef90(int *param_1);
template<class... A> int FUN_10deef90(A...);
void __fastcall FUN_10deefc0(undefined4 *param_1);
template<class... A> int FUN_10deefc0(A...);
void __fastcall FUN_10deeff0(int param_1);
template<class... A> int FUN_10deeff0(A...);
void __fastcall FUN_10def020(int param_1);
template<class... A> int FUN_10def020(A...);
void __fastcall FUN_10def040(int *param_1);
template<class... A> int FUN_10def040(A...);
bool __fastcall FUN_10def6f0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10def6f0(A...);
void __fastcall FUN_10defcb0(int param_1);
template<class... A> int FUN_10defcb0(A...);
void __fastcall FUN_10defcd0(int param_1);
template<class... A> int FUN_10defcd0(A...);
bool __fastcall FUN_10df0700(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10df0700(A...);
bool __fastcall FUN_10df1160(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10df1160(A...);
uint FUN_10df16f0(undefined4 param_1,int param_2);
template<class... A> int FUN_10df16f0(A...);
undefined4 __fastcall FUN_10df2d90(int param_1);
template<class... A> int FUN_10df2d90(A...);
undefined4 __fastcall FUN_10df2dc0(int *param_1);
template<class... A> int FUN_10df2dc0(A...);
undefined4 __fastcall FUN_10df2df0(int param_1);
template<class... A> int FUN_10df2df0(A...);
undefined4 __fastcall FUN_10df2e20(int param_1);
template<class... A> int FUN_10df2e20(A...);
undefined1 __fastcall FUN_10df3e90(int *param_1);
template<class... A> int FUN_10df3e90(A...);
uint __fastcall FUN_10df3eb0(uint *param_1);
template<class... A> int FUN_10df3eb0(A...);
uint __fastcall FUN_10df3ed0(uint *param_1);
template<class... A> int FUN_10df3ed0(A...);
void __fastcall FUN_10dfe620(int *param_1);
template<class... A> int FUN_10dfe620(A...);
void __fastcall FUN_10dfe710(int param_1);
template<class... A> int FUN_10dfe710(A...);
int FUN_10e00af0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10e00af0(A...);
undefined1 FUN_10e01da0(SCStr *param_1);
template<class... A> int FUN_10e01da0(A...);
int FUN_10e0ac50(void);
template<class... A> int FUN_10e0ac50(A...);
SCStr * __stdcall FUN_10e0ae30(SCStr *param_1);
template<class... A> int FUN_10e0ae30(A...);
undefined4 * __fastcall FUN_10e0bf10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e0bf10(A...);
undefined4 * __fastcall FUN_10e0bf50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e0bf50(A...);
void __fastcall FUN_10e0c410(int param_1);
template<class... A> int FUN_10e0c410(A...);
void __fastcall FUN_10e0c430(int param_1);
template<class... A> int FUN_10e0c430(A...);
void __fastcall FUN_10e0c450(int *param_1);
template<class... A> int FUN_10e0c450(A...);
void __fastcall FUN_10e0c480(int *param_1);
template<class... A> int FUN_10e0c480(A...);
void __fastcall FUN_10e0c610(int param_1);
template<class... A> int FUN_10e0c610(A...);
void __fastcall FUN_10e0c630(int *param_1);
template<class... A> int FUN_10e0c630(A...);
void __fastcall FUN_10e0c660(int *param_1);
template<class... A> int FUN_10e0c660(A...);
void __fastcall FUN_10e0cc30(int param_1);
template<class... A> int FUN_10e0cc30(A...);
void __fastcall FUN_10e0cc50(int param_1);
template<class... A> int FUN_10e0cc50(A...);
int __stdcall FUN_10e0d650(int *param_1);
template<class... A> int FUN_10e0d650(A...);
undefined4 FUN_10e0eb00(int *param_1);
template<class... A> int FUN_10e0eb00(A...);
undefined4 FUN_10e0eb50(SCStr *param_1);
template<class... A> int FUN_10e0eb50(A...);
SCStr * __stdcall FUN_10e0fde0(SCStr *param_1);
template<class... A> int FUN_10e0fde0(A...);
undefined4 FUN_10e10e20(SCStr *param_1);
template<class... A> int FUN_10e10e20(A...);
void __stdcall FUN_10e11fa0(undefined4 param_1);
template<class... A> int FUN_10e11fa0(A...);
void __stdcall FUN_10e120a0(undefined4 param_1);
template<class... A> int FUN_10e120a0(A...);
undefined4 __fastcall FUN_10e15150(int param_1);
template<class... A> int FUN_10e15150(A...);
undefined1 __fastcall FUN_10e151c0(int param_1);
template<class... A> int FUN_10e151c0(A...);
undefined1 __fastcall FUN_10e15210(int param_1);
template<class... A> int FUN_10e15210(A...);
void __fastcall FUN_10e15650(int param_1);
template<class... A> int FUN_10e15650(A...);
void __fastcall FUN_10e158c0(int param_1);
template<class... A> int FUN_10e158c0(A...);
void __fastcall FUN_10e158f0(undefined4 *param_1);
template<class... A> int FUN_10e158f0(A...);
undefined4 * __fastcall FUN_10e16b00(undefined4 param_1);
template<class... A> int FUN_10e16b00(A...);
undefined4 * __fastcall FUN_10e16b40(undefined4 param_1);
template<class... A> int FUN_10e16b40(A...);
void FUN_10e16b80(void);
template<class... A> int FUN_10e16b80(A...);
undefined4 __fastcall FUN_10e19980(int param_1);
template<class... A> int FUN_10e19980(A...);
SCStr * __stdcall FUN_10e19a90(SCStr *param_1);
template<class... A> int FUN_10e19a90(A...);
SCStr * __stdcall FUN_10e19ab0(SCStr *param_1);
template<class... A> int FUN_10e19ab0(A...);
SCStr * __stdcall FUN_10e19ad0(SCStr *param_1);
template<class... A> int FUN_10e19ad0(A...);
SCStr * __stdcall FUN_10e19af0(SCStr *param_1);
template<class... A> int FUN_10e19af0(A...);
SCStr * __stdcall FUN_10e19b10(SCStr *param_1);
template<class... A> int FUN_10e19b10(A...);
SCStr * __stdcall FUN_10e19b30(SCStr *param_1);
template<class... A> int FUN_10e19b30(A...);
SCStr * __stdcall FUN_10e19b50(SCStr *param_1);
template<class... A> int FUN_10e19b50(A...);
SCStr * __stdcall FUN_10e19b70(SCStr *param_1);
template<class... A> int FUN_10e19b70(A...);
SCStr * __stdcall FUN_10e19b90(SCStr *param_1);
template<class... A> int FUN_10e19b90(A...);
SCStr * __stdcall FUN_10e19bb0(SCStr *param_1);
template<class... A> int FUN_10e19bb0(A...);
SCStr * __stdcall FUN_10e19bd0(SCStr *param_1);
template<class... A> int FUN_10e19bd0(A...);
SCStr * __stdcall FUN_10e19bf0(SCStr *param_1);
template<class... A> int FUN_10e19bf0(A...);
SCStr * __stdcall FUN_10e19c10(SCStr *param_1);
template<class... A> int FUN_10e19c10(A...);
SCStr * __stdcall FUN_10e19c30(SCStr *param_1);
template<class... A> int FUN_10e19c30(A...);
undefined4 __fastcall FUN_10e19c70(int param_1);
template<class... A> int FUN_10e19c70(A...);
SCStr * __stdcall FUN_10e19cc0(SCStr *param_1);
template<class... A> int FUN_10e19cc0(A...);
SCStr * __stdcall FUN_10e1ca90(SCStr *param_1);
template<class... A> int FUN_10e1ca90(A...);
void __fastcall FUN_10e1eb40(int param_1);
template<class... A> int FUN_10e1eb40(A...);
void __fastcall FUN_10e1eb70(int param_1);
template<class... A> int FUN_10e1eb70(A...);
void __fastcall FUN_10e1eba0(int param_1);
template<class... A> int FUN_10e1eba0(A...);
undefined4 __fastcall FUN_10e1ef50(int param_1);
template<class... A> int FUN_10e1ef50(A...);
undefined4 __fastcall FUN_10e1f010(int *param_1);
template<class... A> int FUN_10e1f010(A...);
undefined1 FUN_10e1f040(SCStr *param_1);
template<class... A> int FUN_10e1f040(A...);
void __fastcall FUN_10e1f6f0(int *param_1);
template<class... A> int FUN_10e1f6f0(A...);
void __fastcall FUN_10e1f770(int param_1);
template<class... A> int FUN_10e1f770(A...);
void __fastcall FUN_10e1f7b0(int param_1);
template<class... A> int FUN_10e1f7b0(A...);
void __fastcall FUN_10e1fd00(int param_1);
template<class... A> int FUN_10e1fd00(A...);
undefined1 __fastcall FUN_10e238b0(int param_1);
template<class... A> int FUN_10e238b0(A...);
undefined1 __fastcall FUN_10e238e0(int param_1);
template<class... A> int FUN_10e238e0(A...);
undefined4 * __fastcall FUN_10e239c0(undefined4 param_1);
template<class... A> int FUN_10e239c0(A...);
undefined4 __fastcall FUN_10e24220(int param_1);
template<class... A> int FUN_10e24220(A...);
SCStr * __stdcall FUN_10e24280(SCStr *param_1);
template<class... A> int FUN_10e24280(A...);
SCStr * __stdcall FUN_10e242a0(SCStr *param_1);
template<class... A> int FUN_10e242a0(A...);
SCStr * __stdcall FUN_10e242c0(SCStr *param_1);
template<class... A> int FUN_10e242c0(A...);
undefined4 __fastcall FUN_10e24300(int param_1);
template<class... A> int FUN_10e24300(A...);
SCStr * __stdcall FUN_10e24350(SCStr *param_1);
template<class... A> int FUN_10e24350(A...);
SCStr * __stdcall FUN_10e24860(SCStr *param_1);
template<class... A> int FUN_10e24860(A...);
undefined4 __fastcall FUN_10e24930(int param_1);
template<class... A> int FUN_10e24930(A...);
undefined4 __fastcall FUN_10e24960(int *param_1);
template<class... A> int FUN_10e24960(A...);
undefined1 FUN_10e24990(SCStr *param_1);
template<class... A> int FUN_10e24990(A...);
void __fastcall FUN_10e24a70(int *param_1);
template<class... A> int FUN_10e24a70(A...);
void __fastcall FUN_10e27410(int *param_1);
template<class... A> int FUN_10e27410(A...);
void __fastcall FUN_10e27440(int *param_1);
template<class... A> int FUN_10e27440(A...);
void __fastcall FUN_10e27470(int *param_1);
template<class... A> int FUN_10e27470(A...);
void __fastcall FUN_10e274a0(int *param_1);
template<class... A> int FUN_10e274a0(A...);
void __fastcall FUN_10e274d0(int *param_1);
template<class... A> int FUN_10e274d0(A...);
void __fastcall FUN_10e27500(int *param_1);
template<class... A> int FUN_10e27500(A...);
void __fastcall FUN_10e27530(int *param_1);
template<class... A> int FUN_10e27530(A...);
void __fastcall FUN_10e27560(int *param_1);
template<class... A> int FUN_10e27560(A...);
int * __fastcall FUN_10e28c10(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e28c10(A...);
int * __fastcall FUN_10e28c40(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e28c40(A...);
int * __fastcall FUN_10e28c70(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e28c70(A...);
int * __fastcall FUN_10e28ca0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e28ca0(A...);
void __fastcall FUN_10e2aae0(int *param_1);
template<class... A> int FUN_10e2aae0(A...);
void __fastcall FUN_10e2ab10(int *param_1);
template<class... A> int FUN_10e2ab10(A...);
void __fastcall FUN_10e2ab40(int *param_1);
template<class... A> int FUN_10e2ab40(A...);
void __fastcall FUN_10e2ab70(int *param_1);
template<class... A> int FUN_10e2ab70(A...);
undefined4 __fastcall FUN_10e2ccf0(int param_1);
template<class... A> int FUN_10e2ccf0(A...);
void __fastcall FUN_10e2d310(int param_1);
template<class... A> int FUN_10e2d310(A...);
void __fastcall FUN_10e2d350(int param_1);
template<class... A> int FUN_10e2d350(A...);
void __fastcall FUN_10e2d390(int param_1);
template<class... A> int FUN_10e2d390(A...);
void __fastcall FUN_10e2d510(int param_1);
template<class... A> int FUN_10e2d510(A...);
void __fastcall FUN_10e2d550(int param_1);
template<class... A> int FUN_10e2d550(A...);
void __fastcall FUN_10e2d600(int param_1);
template<class... A> int FUN_10e2d600(A...);
void __fastcall FUN_10e2d640(int param_1);
template<class... A> int FUN_10e2d640(A...);
void __fastcall FUN_10e2d680(int param_1);
template<class... A> int FUN_10e2d680(A...);
undefined4 * __fastcall FUN_10e2d6c0(undefined4 param_1);
template<class... A> int FUN_10e2d6c0(A...);
undefined4 * __fastcall FUN_10e2d700(undefined4 param_1);
template<class... A> int FUN_10e2d700(A...);
void FUN_10e2e8a0(void);
template<class... A> int FUN_10e2e8a0(A...);
void FUN_10e2e8d0(void);
template<class... A> int FUN_10e2e8d0(A...);
SCStr * __stdcall FUN_10e2f1f0(SCStr *param_1);
template<class... A> int FUN_10e2f1f0(A...);
SCStr * __stdcall FUN_10e2f210(SCStr *param_1);
template<class... A> int FUN_10e2f210(A...);
undefined4 __fastcall FUN_10e302d0(int param_1);
template<class... A> int FUN_10e302d0(A...);
undefined4 __fastcall FUN_10e30410(int param_1);
template<class... A> int FUN_10e30410(A...);
undefined4 __fastcall FUN_10e30430(int param_1);
template<class... A> int FUN_10e30430(A...);
SCStr * __stdcall FUN_10e30450(SCStr *param_1);
template<class... A> int FUN_10e30450(A...);
SCStr * __stdcall FUN_10e30470(SCStr *param_1);
template<class... A> int FUN_10e30470(A...);
SCStr * __stdcall FUN_10e30490(SCStr *param_1);
template<class... A> int FUN_10e30490(A...);
SCStr * __stdcall FUN_10e304b0(SCStr *param_1);
template<class... A> int FUN_10e304b0(A...);
SCStr * __stdcall FUN_10e304d0(SCStr *param_1);
template<class... A> int FUN_10e304d0(A...);
SCStr * __stdcall FUN_10e304f0(SCStr *param_1);
template<class... A> int FUN_10e304f0(A...);
SCStr * __stdcall FUN_10e30540(SCStr *param_1);
template<class... A> int FUN_10e30540(A...);
SCStr * __stdcall FUN_10e30560(SCStr *param_1);
template<class... A> int FUN_10e30560(A...);
SCStr * __stdcall FUN_10e30580(SCStr *param_1);
template<class... A> int FUN_10e30580(A...);
SCStr * __stdcall FUN_10e305a0(SCStr *param_1);
template<class... A> int FUN_10e305a0(A...);
SCStr * __stdcall FUN_10e305c0(SCStr *param_1);
template<class... A> int FUN_10e305c0(A...);
SCStr * __stdcall FUN_10e305e0(SCStr *param_1);
template<class... A> int FUN_10e305e0(A...);
SCStr * __stdcall FUN_10e30600(SCStr *param_1);
template<class... A> int FUN_10e30600(A...);
SCStr * __stdcall FUN_10e30620(SCStr *param_1);
template<class... A> int FUN_10e30620(A...);
SCStr * __stdcall FUN_10e30640(SCStr *param_1);
template<class... A> int FUN_10e30640(A...);
SCStr * __stdcall FUN_10e30660(SCStr *param_1);
template<class... A> int FUN_10e30660(A...);
SCStr * __stdcall FUN_10e30680(SCStr *param_1);
template<class... A> int FUN_10e30680(A...);
SCStr * __stdcall FUN_10e306a0(SCStr *param_1);
template<class... A> int FUN_10e306a0(A...);
SCStr * __stdcall FUN_10e306c0(SCStr *param_1);
template<class... A> int FUN_10e306c0(A...);
SCStr * __stdcall FUN_10e306e0(SCStr *param_1);
template<class... A> int FUN_10e306e0(A...);
SCStr * __stdcall FUN_10e30700(SCStr *param_1);
template<class... A> int FUN_10e30700(A...);
SCStr * __stdcall FUN_10e30720(SCStr *param_1);
template<class... A> int FUN_10e30720(A...);
SCStr * __stdcall FUN_10e30740(SCStr *param_1);
template<class... A> int FUN_10e30740(A...);
SCStr * __stdcall FUN_10e30760(SCStr *param_1);
template<class... A> int FUN_10e30760(A...);
SCStr * __stdcall FUN_10e381c0(SCStr *param_1);
template<class... A> int FUN_10e381c0(A...);
bool __fastcall FUN_10e3e500(int param_1);
template<class... A> int FUN_10e3e500(A...);
void __fastcall FUN_10e3e990(int param_1);
template<class... A> int FUN_10e3e990(A...);
void __fastcall FUN_10e3f460(int param_1);
template<class... A> int FUN_10e3f460(A...);
void __fastcall FUN_10e3f480(int param_1);
template<class... A> int FUN_10e3f480(A...);
void __fastcall FUN_10e47340(undefined4 *param_1);
template<class... A> int FUN_10e47340(A...);
void __fastcall FUN_10e47360(undefined4 *param_1);
template<class... A> int FUN_10e47360(A...);
undefined1 __fastcall FUN_10e48ba0(int param_1);
template<class... A> int FUN_10e48ba0(A...);
undefined1 __fastcall FUN_10e48c10(int param_1);
template<class... A> int FUN_10e48c10(A...);
void __fastcall FUN_10e48d30(undefined4 *param_1);
template<class... A> int FUN_10e48d30(A...);
undefined4 * __fastcall FUN_10e48e80(undefined4 param_1);
template<class... A> int FUN_10e48e80(A...);
undefined4 * __fastcall FUN_10e48ec0(undefined4 param_1);
template<class... A> int FUN_10e48ec0(A...);
void FUN_10e49720(void);
template<class... A> int FUN_10e49720(A...);
void FUN_10e4a2e0(void);
template<class... A> int FUN_10e4a2e0(A...);
void FUN_10e4a310(void);
template<class... A> int FUN_10e4a310(A...);
void __stdcall FUN_10e4a6b0(int param_1,int param_2);
template<class... A> int FUN_10e4a6b0(A...);
void __stdcall FUN_10e4a700(int param_1,int param_2);
template<class... A> int FUN_10e4a700(A...);
undefined4 __fastcall FUN_10e4ad50(int param_1);
template<class... A> int FUN_10e4ad50(A...);
SCStr * __stdcall FUN_10e4ae30(SCStr *param_1);
template<class... A> int FUN_10e4ae30(A...);
SCStr * __stdcall FUN_10e4ae50(SCStr *param_1);
template<class... A> int FUN_10e4ae50(A...);
SCStr * __stdcall FUN_10e4ae70(SCStr *param_1);
template<class... A> int FUN_10e4ae70(A...);
SCStr * __stdcall FUN_10e4ae90(SCStr *param_1);
template<class... A> int FUN_10e4ae90(A...);
SCStr * __stdcall FUN_10e4aeb0(SCStr *param_1);
template<class... A> int FUN_10e4aeb0(A...);
SCStr * __stdcall FUN_10e4aed0(SCStr *param_1);
template<class... A> int FUN_10e4aed0(A...);
SCStr * __stdcall FUN_10e4aef0(SCStr *param_1);
template<class... A> int FUN_10e4aef0(A...);
SCStr * __stdcall FUN_10e4af10(SCStr *param_1);
template<class... A> int FUN_10e4af10(A...);
SCStr * __stdcall FUN_10e4af30(SCStr *param_1);
template<class... A> int FUN_10e4af30(A...);
SCStr * __stdcall FUN_10e4af50(SCStr *param_1);
template<class... A> int FUN_10e4af50(A...);
SCStr * __stdcall FUN_10e4af70(SCStr *param_1);
template<class... A> int FUN_10e4af70(A...);
undefined4 __fastcall FUN_10e4afb0(int param_1);
template<class... A> int FUN_10e4afb0(A...);
SCStr * __stdcall FUN_10e4b000(SCStr *param_1);
template<class... A> int FUN_10e4b000(A...);
SCStr * __stdcall FUN_10e4d360(SCStr *param_1);
template<class... A> int FUN_10e4d360(A...);
undefined4 __fastcall FUN_10e4e2d0(int param_1);
template<class... A> int FUN_10e4e2d0(A...);
undefined4 __fastcall FUN_10e4e380(int *param_1);
template<class... A> int FUN_10e4e380(A...);
undefined1 FUN_10e4e410(SCStr *param_1);
template<class... A> int FUN_10e4e410(A...);
void __fastcall FUN_10e4e530(int *param_1);
template<class... A> int FUN_10e4e530(A...);
undefined1 __fastcall FUN_10e523e0(int param_1);
template<class... A> int FUN_10e523e0(A...);
undefined1 __fastcall FUN_10e52450(int param_1);
template<class... A> int FUN_10e52450(A...);
void __fastcall FUN_10e52740(int param_1);
template<class... A> int FUN_10e52740(A...);
undefined4 * __fastcall FUN_10e53580(undefined4 param_1);
template<class... A> int FUN_10e53580(A...);
undefined4 * __fastcall FUN_10e535c0(undefined4 param_1);
template<class... A> int FUN_10e535c0(A...);
undefined4 * __fastcall FUN_10e53d00(int param_1);
template<class... A> int FUN_10e53d00(A...);
undefined4 * __fastcall FUN_10e54630(int param_1);
template<class... A> int FUN_10e54630(A...);
undefined4 * __fastcall FUN_10e54940(int param_1);
template<class... A> int FUN_10e54940(A...);
undefined4 __fastcall FUN_10e55520(int param_1);
template<class... A> int FUN_10e55520(A...);
SCStr * __stdcall FUN_10e555f0(SCStr *param_1);
template<class... A> int FUN_10e555f0(A...);
SCStr * __stdcall FUN_10e55610(SCStr *param_1);
template<class... A> int FUN_10e55610(A...);
SCStr * __stdcall FUN_10e55630(SCStr *param_1);
template<class... A> int FUN_10e55630(A...);
SCStr * __stdcall FUN_10e55650(SCStr *param_1);
template<class... A> int FUN_10e55650(A...);
SCStr * __stdcall FUN_10e55670(SCStr *param_1);
template<class... A> int FUN_10e55670(A...);
SCStr * __stdcall FUN_10e55690(SCStr *param_1);
template<class... A> int FUN_10e55690(A...);
SCStr * __stdcall FUN_10e556b0(SCStr *param_1);
template<class... A> int FUN_10e556b0(A...);
SCStr * __stdcall FUN_10e556d0(SCStr *param_1);
template<class... A> int FUN_10e556d0(A...);
SCStr * __stdcall FUN_10e556f0(SCStr *param_1);
template<class... A> int FUN_10e556f0(A...);
SCStr * __stdcall FUN_10e55710(SCStr *param_1);
template<class... A> int FUN_10e55710(A...);
undefined4 __fastcall FUN_10e55750(int param_1);
template<class... A> int FUN_10e55750(A...);
SCStr * __stdcall FUN_10e557a0(SCStr *param_1);
template<class... A> int FUN_10e557a0(A...);
SCStr * __stdcall FUN_10e57980(SCStr *param_1);
template<class... A> int FUN_10e57980(A...);
void __fastcall FUN_10e58620(int param_1);
template<class... A> int FUN_10e58620(A...);
void __fastcall FUN_10e58670(int param_1);
template<class... A> int FUN_10e58670(A...);
void __fastcall FUN_10e586a0(int param_1);
template<class... A> int FUN_10e586a0(A...);
uint __fastcall FUN_10e586d0(int *param_1);
template<class... A> int FUN_10e586d0(A...);
undefined4 __fastcall FUN_10e587e0(int param_1);
template<class... A> int FUN_10e587e0(A...);
undefined4 __fastcall FUN_10e588a0(int *param_1);
template<class... A> int FUN_10e588a0(A...);
undefined1 FUN_10e588f0(SCStr *param_1);
template<class... A> int FUN_10e588f0(A...);
void __fastcall FUN_10e590b0(int *param_1);
template<class... A> int FUN_10e590b0(A...);
void __fastcall FUN_10e59100(int param_1);
template<class... A> int FUN_10e59100(A...);
void __fastcall FUN_10e59140(int param_1);
template<class... A> int FUN_10e59140(A...);
undefined4 * __fastcall FUN_10e5c000(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e5c000(A...);
void __fastcall FUN_10e5e300(int param_1);
template<class... A> int FUN_10e5e300(A...);
void __fastcall FUN_10e5e320(int *param_1);
template<class... A> int FUN_10e5e320(A...);
void __fastcall FUN_10e5e350(int *param_1);
template<class... A> int FUN_10e5e350(A...);
void __fastcall FUN_10e5e380(int *param_1);
template<class... A> int FUN_10e5e380(A...);
void __fastcall FUN_10e5e3b0(int *param_1);
template<class... A> int FUN_10e5e3b0(A...);
void __fastcall FUN_10e5e3e0(int *param_1);
template<class... A> int FUN_10e5e3e0(A...);
void __fastcall FUN_10e5e410(int *param_1);
template<class... A> int FUN_10e5e410(A...);
void __fastcall FUN_10e5e500(undefined4 *param_1);
template<class... A> int FUN_10e5e500(A...);
void __fastcall FUN_10e5e520(int *param_1);
template<class... A> int FUN_10e5e520(A...);
void __fastcall FUN_10e5e550(int *param_1);
template<class... A> int FUN_10e5e550(A...);
void __fastcall FUN_10e5e580(int *param_1);
template<class... A> int FUN_10e5e580(A...);
void __fastcall FUN_10e5e5b0(int *param_1);
template<class... A> int FUN_10e5e5b0(A...);
void __fastcall FUN_10e5e5e0(int *param_1);
template<class... A> int FUN_10e5e5e0(A...);
void __fastcall FUN_10e5e610(int *param_1);
template<class... A> int FUN_10e5e610(A...);
int * __fastcall FUN_10e5f6b0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e5f6b0(A...);
int * __fastcall FUN_10e5f6e0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e5f6e0(A...);
int * __fastcall FUN_10e5f710(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e5f710(A...);
int * __fastcall FUN_10e5f740(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e5f740(A...);
int * __fastcall FUN_10e5f770(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e5f770(A...);
void __fastcall FUN_10e610d0(int param_1);
template<class... A> int FUN_10e610d0(A...);
int * FUN_10e61b20(int *param_1);
template<class... A> int FUN_10e61b20(A...);
void __fastcall FUN_10e61cf0(int *param_1);
template<class... A> int FUN_10e61cf0(A...);
void __fastcall FUN_10e61d20(int *param_1);
template<class... A> int FUN_10e61d20(A...);
void __fastcall FUN_10e61d50(int *param_1);
template<class... A> int FUN_10e61d50(A...);
void __fastcall FUN_10e61d80(int *param_1);
template<class... A> int FUN_10e61d80(A...);
void __fastcall FUN_10e61db0(int *param_1);
template<class... A> int FUN_10e61db0(A...);
undefined1 __fastcall FUN_10e65ed0(int param_1);
template<class... A> int FUN_10e65ed0(A...);
undefined1 __fastcall FUN_10e66010(int param_1);
template<class... A> int FUN_10e66010(A...);
void __fastcall FUN_10e66420(int param_1);
template<class... A> int FUN_10e66420(A...);
void __fastcall FUN_10e66450(int param_1);
template<class... A> int FUN_10e66450(A...);
void __fastcall FUN_10e667a0(int param_1);
template<class... A> int FUN_10e667a0(A...);
void __fastcall FUN_10e66930(int param_1);
template<class... A> int FUN_10e66930(A...);
void __fastcall FUN_10e66ae0(int param_1);
template<class... A> int FUN_10e66ae0(A...);
void __fastcall FUN_10e66b50(int *param_1);
template<class... A> int FUN_10e66b50(A...);
void __fastcall FUN_10e66b80(undefined4 *param_1);
template<class... A> int FUN_10e66b80(A...);
undefined4 * __fastcall FUN_10e66bc0(undefined4 param_1);
template<class... A> int FUN_10e66bc0(A...);
undefined4 * __fastcall FUN_10e66ec0(int param_1);
template<class... A> int FUN_10e66ec0(A...);
undefined4 * __fastcall FUN_10e68250(int param_1);
template<class... A> int FUN_10e68250(A...);
undefined4 __fastcall FUN_10e685c0(int param_1);
template<class... A> int FUN_10e685c0(A...);
void __stdcall FUN_10e69350(int param_1,int param_2);
template<class... A> int FUN_10e69350(A...);
SCStr * __stdcall FUN_10e69660(SCStr *param_1);
template<class... A> int FUN_10e69660(A...);
undefined4 __fastcall FUN_10e698c0(int param_1);
template<class... A> int FUN_10e698c0(A...);
SCStr * __stdcall FUN_10e69a20(SCStr *param_1);
template<class... A> int FUN_10e69a20(A...);
SCStr * __stdcall FUN_10e69a40(SCStr *param_1);
template<class... A> int FUN_10e69a40(A...);
SCStr * __stdcall FUN_10e69a60(SCStr *param_1);
template<class... A> int FUN_10e69a60(A...);
SCStr * __stdcall FUN_10e69a80(SCStr *param_1);
template<class... A> int FUN_10e69a80(A...);
SCStr * __stdcall FUN_10e69aa0(SCStr *param_1);
template<class... A> int FUN_10e69aa0(A...);
SCStr * __stdcall FUN_10e69ac0(SCStr *param_1);
template<class... A> int FUN_10e69ac0(A...);
SCStr * __stdcall FUN_10e69ae0(SCStr *param_1);
template<class... A> int FUN_10e69ae0(A...);
SCStr * __stdcall FUN_10e69b00(SCStr *param_1);
template<class... A> int FUN_10e69b00(A...);
SCStr * __stdcall FUN_10e69b20(SCStr *param_1);
template<class... A> int FUN_10e69b20(A...);
SCStr * __stdcall FUN_10e69b40(SCStr *param_1);
template<class... A> int FUN_10e69b40(A...);
SCStr * __stdcall FUN_10e69b60(SCStr *param_1);
template<class... A> int FUN_10e69b60(A...);
SCStr * __stdcall FUN_10e69b80(SCStr *param_1);
template<class... A> int FUN_10e69b80(A...);
SCStr * __stdcall FUN_10e69ba0(SCStr *param_1);
template<class... A> int FUN_10e69ba0(A...);
SCStr * __stdcall FUN_10e69bc0(SCStr *param_1);
template<class... A> int FUN_10e69bc0(A...);
SCStr * __stdcall FUN_10e69be0(SCStr *param_1);
template<class... A> int FUN_10e69be0(A...);
SCStr * __stdcall FUN_10e69c00(SCStr *param_1);
template<class... A> int FUN_10e69c00(A...);
SCStr * __stdcall FUN_10e69c20(SCStr *param_1);
template<class... A> int FUN_10e69c20(A...);
SCStr * __stdcall FUN_10e69c40(SCStr *param_1);
template<class... A> int FUN_10e69c40(A...);
SCStr * __stdcall FUN_10e69c60(SCStr *param_1);
template<class... A> int FUN_10e69c60(A...);
SCStr * __stdcall FUN_10e69c80(SCStr *param_1);
template<class... A> int FUN_10e69c80(A...);
undefined4 __fastcall FUN_10e69cd0(int param_1);
template<class... A> int FUN_10e69cd0(A...);
SCStr * __stdcall FUN_10e69d70(SCStr *param_1);
template<class... A> int FUN_10e69d70(A...);
SCStr * __stdcall FUN_10e70060(SCStr *param_1);
template<class... A> int FUN_10e70060(A...);
undefined4 __fastcall FUN_10e714a0(int param_1);
template<class... A> int FUN_10e714a0(A...);
undefined4 __fastcall FUN_10e71570(int *param_1);
template<class... A> int FUN_10e71570(A...);
undefined1 FUN_10e71680(SCStr *param_1);
template<class... A> int FUN_10e71680(A...);
void __stdcall FUN_10e716d0(SCStr *param_1);
template<class... A> int FUN_10e716d0(A...);
void __fastcall FUN_10e71f60(int *param_1);
template<class... A> int FUN_10e71f60(A...);
undefined4 __fastcall FUN_10e72180(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e72180(A...);
void __stdcall FUN_10e755c0(int param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10e755c0(A...);
void __stdcall FUN_10e755e0(int param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10e755e0(A...);
void __stdcall FUN_10e75600(int param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10e75600(A...);
void __stdcall FUN_10e75620(int param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10e75620(A...);
void __stdcall FUN_10e75640(int param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10e75640(A...);
undefined1 __fastcall FUN_10e78060(int param_1);
template<class... A> int FUN_10e78060(A...);
undefined1 __fastcall FUN_10e78090(int param_1);
template<class... A> int FUN_10e78090(A...);
void __fastcall FUN_10e780f0(int param_1);
template<class... A> int FUN_10e780f0(A...);
void __fastcall FUN_10e78120(int param_1);
template<class... A> int FUN_10e78120(A...);
undefined4 * __fastcall FUN_10e78740(undefined4 param_1);
template<class... A> int FUN_10e78740(A...);
undefined4 * __fastcall FUN_10e78cf0(int param_1);
template<class... A> int FUN_10e78cf0(A...);
undefined4 __fastcall FUN_10e795c0(int param_1);
template<class... A> int FUN_10e795c0(A...);
SCStr * __stdcall FUN_10e79650(SCStr *param_1);
template<class... A> int FUN_10e79650(A...);
SCStr * __stdcall FUN_10e79670(SCStr *param_1);
template<class... A> int FUN_10e79670(A...);
SCStr * __stdcall FUN_10e79690(SCStr *param_1);
template<class... A> int FUN_10e79690(A...);
SCStr * __stdcall FUN_10e796b0(SCStr *param_1);
template<class... A> int FUN_10e796b0(A...);
SCStr * __stdcall FUN_10e796d0(SCStr *param_1);
template<class... A> int FUN_10e796d0(A...);
SCStr * __stdcall FUN_10e796f0(SCStr *param_1);
template<class... A> int FUN_10e796f0(A...);
undefined4 __fastcall FUN_10e79730(int param_1);
template<class... A> int FUN_10e79730(A...);
SCStr * __stdcall FUN_10e7ad20(SCStr *param_1);
template<class... A> int FUN_10e7ad20(A...);
undefined4 __fastcall FUN_10e7b410(int param_1);
template<class... A> int FUN_10e7b410(A...);
undefined4 __fastcall FUN_10e7b460(int *param_1);
template<class... A> int FUN_10e7b460(A...);
undefined1 FUN_10e7b490(SCStr *param_1);
template<class... A> int FUN_10e7b490(A...);
void __fastcall FUN_10e7b570(int *param_1);
template<class... A> int FUN_10e7b570(A...);
undefined4 __fastcall FUN_10e80b00(int param_1);
template<class... A> int FUN_10e80b00(A...);
void __fastcall FUN_10e80b60(int param_1);
template<class... A> int FUN_10e80b60(A...);
void __fastcall FUN_10e80ba0(int param_1);
template<class... A> int FUN_10e80ba0(A...);
undefined4 * __fastcall FUN_10e80be0(undefined4 param_1);
template<class... A> int FUN_10e80be0(A...);
undefined4 * __fastcall FUN_10e80c20(undefined4 param_1);
template<class... A> int FUN_10e80c20(A...);
void FUN_10e80e00(void);
template<class... A> int FUN_10e80e00(A...);
void FUN_10e80e30(void);
template<class... A> int FUN_10e80e30(A...);
SCStr * __stdcall FUN_10e80eb0(SCStr *param_1);
template<class... A> int FUN_10e80eb0(A...);
SCStr * __stdcall FUN_10e80ed0(SCStr *param_1);
template<class... A> int FUN_10e80ed0(A...);
SCStr * __stdcall FUN_10e80ef0(SCStr *param_1);
template<class... A> int FUN_10e80ef0(A...);
SCStr * __stdcall FUN_10e80f10(SCStr *param_1);
template<class... A> int FUN_10e80f10(A...);
SCStr * __stdcall FUN_10e80f30(SCStr *param_1);
template<class... A> int FUN_10e80f30(A...);
SCStr * __stdcall FUN_10e80f50(SCStr *param_1);
template<class... A> int FUN_10e80f50(A...);
void __stdcall FUN_10e82e70(int param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10e82e70(A...);
undefined1 __fastcall FUN_10e83fe0(int param_1);
template<class... A> int FUN_10e83fe0(A...);
undefined1 __fastcall FUN_10e84010(int param_1);
template<class... A> int FUN_10e84010(A...);
undefined4 * __fastcall FUN_10e84090(undefined4 param_1);
template<class... A> int FUN_10e84090(A...);
undefined4 * __fastcall FUN_10e840d0(undefined4 param_1);
template<class... A> int FUN_10e840d0(A...);
undefined4 __fastcall FUN_10e84ce0(int param_1);
template<class... A> int FUN_10e84ce0(A...);
SCStr * __stdcall FUN_10e84d60(SCStr *param_1);
template<class... A> int FUN_10e84d60(A...);
SCStr * __stdcall FUN_10e84d80(SCStr *param_1);
template<class... A> int FUN_10e84d80(A...);
SCStr * __stdcall FUN_10e84da0(SCStr *param_1);
template<class... A> int FUN_10e84da0(A...);
SCStr * __stdcall FUN_10e84dc0(SCStr *param_1);
template<class... A> int FUN_10e84dc0(A...);
SCStr * __stdcall FUN_10e84de0(SCStr *param_1);
template<class... A> int FUN_10e84de0(A...);
SCStr * __stdcall FUN_10e84e00(SCStr *param_1);
template<class... A> int FUN_10e84e00(A...);
undefined4 __fastcall FUN_10e84e40(int param_1);
template<class... A> int FUN_10e84e40(A...);
SCStr * __stdcall FUN_10e84e90(SCStr *param_1);
template<class... A> int FUN_10e84e90(A...);
SCStr * __stdcall FUN_10e85f70(SCStr *param_1);
template<class... A> int FUN_10e85f70(A...);
undefined4 __fastcall FUN_10e86660(int param_1);
template<class... A> int FUN_10e86660(A...);
undefined4 __fastcall FUN_10e866e0(int *param_1);
template<class... A> int FUN_10e866e0(A...);
undefined1 FUN_10e86710(SCStr *param_1);
template<class... A> int FUN_10e86710(A...);
void __fastcall FUN_10e867f0(int *param_1);
template<class... A> int FUN_10e867f0(A...);
undefined4 * __fastcall FUN_10e871a0(undefined4 param_1);
template<class... A> int FUN_10e871a0(A...);
undefined4 * __fastcall FUN_10e871e0(undefined4 param_1);
template<class... A> int FUN_10e871e0(A...);
undefined4 * __fastcall FUN_10e87520(int param_1);
template<class... A> int FUN_10e87520(A...);
undefined4 * __fastcall FUN_10e87720(int param_1);
template<class... A> int FUN_10e87720(A...);
SCStr * __stdcall FUN_10e877c0(SCStr *param_1);
template<class... A> int FUN_10e877c0(A...);
SCStr * __stdcall FUN_10e877e0(SCStr *param_1);
template<class... A> int FUN_10e877e0(A...);
SCStr * __stdcall FUN_10e87800(SCStr *param_1);
template<class... A> int FUN_10e87800(A...);
SCStr * __stdcall FUN_10e87820(SCStr *param_1);
template<class... A> int FUN_10e87820(A...);
SCStr * __stdcall FUN_10e87840(SCStr *param_1);
template<class... A> int FUN_10e87840(A...);
SCStr * __stdcall FUN_10e87860(SCStr *param_1);
template<class... A> int FUN_10e87860(A...);
SCStr * __stdcall FUN_10e87890(SCStr *param_1);
template<class... A> int FUN_10e87890(A...);
SCStr * __stdcall FUN_10e892a0(SCStr *param_1);
template<class... A> int FUN_10e892a0(A...);
undefined4 * __fastcall FUN_10e89cd0(undefined4 param_1);
template<class... A> int FUN_10e89cd0(A...);
undefined4 * __fastcall FUN_10e89d10(undefined4 param_1);
template<class... A> int FUN_10e89d10(A...);
undefined4 * __fastcall FUN_10e89d50(int param_1);
template<class... A> int FUN_10e89d50(A...);
undefined4 * __fastcall FUN_10e89d90(int param_1);
template<class... A> int FUN_10e89d90(A...);
SCStr * __stdcall FUN_10e89dd0(SCStr *param_1);
template<class... A> int FUN_10e89dd0(A...);
SCStr * __stdcall FUN_10e89e20(SCStr *param_1);
template<class... A> int FUN_10e89e20(A...);
SCStr * __stdcall FUN_10e89e40(SCStr *param_1);
template<class... A> int FUN_10e89e40(A...);
SCStr * __stdcall FUN_10e89e60(SCStr *param_1);
template<class... A> int FUN_10e89e60(A...);
SCStr * __stdcall FUN_10e89e90(SCStr *param_1);
template<class... A> int FUN_10e89e90(A...);
SCStr * __stdcall FUN_10e89ec0(SCStr *param_1);
template<class... A> int FUN_10e89ec0(A...);
void __fastcall FUN_10e92ec0(undefined4 *param_1);
template<class... A> int FUN_10e92ec0(A...);
void __fastcall FUN_10e92ee0(undefined4 *param_1);
template<class... A> int FUN_10e92ee0(A...);
void __fastcall FUN_10e92f00(undefined4 *param_1);
template<class... A> int FUN_10e92f00(A...);
void __fastcall FUN_10e92f20(undefined4 *param_1);
template<class... A> int FUN_10e92f20(A...);
void __fastcall FUN_10e940b0(int *param_1);
template<class... A> int FUN_10e940b0(A...);
void __fastcall FUN_10e940e0(int *param_1);
template<class... A> int FUN_10e940e0(A...);
void __fastcall FUN_10e94110(int *param_1);
template<class... A> int FUN_10e94110(A...);
void __fastcall FUN_10e94140(int *param_1);
template<class... A> int FUN_10e94140(A...);
void __fastcall FUN_10e94170(int *param_1);
template<class... A> int FUN_10e94170(A...);
void __fastcall FUN_10e941a0(int *param_1);
template<class... A> int FUN_10e941a0(A...);
void __fastcall FUN_10e941d0(int *param_1);
template<class... A> int FUN_10e941d0(A...);
void __fastcall FUN_10e94200(int *param_1);
template<class... A> int FUN_10e94200(A...);
void __fastcall FUN_10e94230(int *param_1);
template<class... A> int FUN_10e94230(A...);
void __fastcall FUN_10e94260(int *param_1);
template<class... A> int FUN_10e94260(A...);
void __fastcall FUN_10e94290(int *param_1);
template<class... A> int FUN_10e94290(A...);
void __fastcall FUN_10e942c0(int *param_1);
template<class... A> int FUN_10e942c0(A...);
int * __fastcall FUN_10e96720(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e96720(A...);
int * __fastcall FUN_10e96750(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e96750(A...);
int * __fastcall FUN_10e96780(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e96780(A...);
int * __fastcall FUN_10e967b0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e967b0(A...);
int * __fastcall FUN_10e967e0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e967e0(A...);
int * __fastcall FUN_10e96810(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e96810(A...);
void __fastcall FUN_10e99bb0(int *param_1);
template<class... A> int FUN_10e99bb0(A...);
void __fastcall FUN_10e99be0(int *param_1);
template<class... A> int FUN_10e99be0(A...);
void __fastcall FUN_10e99c10(int *param_1);
template<class... A> int FUN_10e99c10(A...);
void __fastcall FUN_10e99c40(int *param_1);
template<class... A> int FUN_10e99c40(A...);
void __fastcall FUN_10e99c70(int *param_1);
template<class... A> int FUN_10e99c70(A...);
void __fastcall FUN_10e99ca0(int *param_1);
template<class... A> int FUN_10e99ca0(A...);
SCStr * __stdcall FUN_10e9d460(SCStr *param_1);
template<class... A> int FUN_10e9d460(A...);
SCStr * __stdcall FUN_10e9d480(SCStr *param_1);
template<class... A> int FUN_10e9d480(A...);
SCStr * __stdcall FUN_10e9d4a0(SCStr *param_1);
template<class... A> int FUN_10e9d4a0(A...);
SCStr * __stdcall FUN_10e9d4c0(SCStr *param_1);
template<class... A> int FUN_10e9d4c0(A...);
SCStr * __stdcall FUN_10e9d4e0(SCStr *param_1);
template<class... A> int FUN_10e9d4e0(A...);
SCStr * __stdcall FUN_10e9d500(SCStr *param_1);
template<class... A> int FUN_10e9d500(A...);
SCStr * __stdcall FUN_10e9d520(SCStr *param_1);
template<class... A> int FUN_10e9d520(A...);
SCStr * __stdcall FUN_10e9d540(SCStr *param_1);
template<class... A> int FUN_10e9d540(A...);
SCStr * __stdcall FUN_10e9dab0(SCStr *param_1);
template<class... A> int FUN_10e9dab0(A...);
SCStr * __stdcall FUN_10e9dad0(SCStr *param_1);
template<class... A> int FUN_10e9dad0(A...);
SCStr * __stdcall FUN_10e9daf0(SCStr *param_1);
template<class... A> int FUN_10e9daf0(A...);
SCStr * __stdcall FUN_10e9db30(SCStr *param_1);
template<class... A> int FUN_10e9db30(A...);
SCStr * __stdcall FUN_10e9db50(SCStr *param_1);
template<class... A> int FUN_10e9db50(A...);
SCStr * __stdcall FUN_10e9db80(SCStr *param_1);
template<class... A> int FUN_10e9db80(A...);
SCStr * __stdcall FUN_10e9dbb0(SCStr *param_1);
template<class... A> int FUN_10e9dbb0(A...);
SCStr * __stdcall FUN_10e9dbe0(SCStr *param_1);
template<class... A> int FUN_10e9dbe0(A...);
SCStr * __stdcall FUN_10e9dc10(SCStr *param_1);
template<class... A> int FUN_10e9dc10(A...);
SCStr * __stdcall FUN_10e9dc40(SCStr *param_1);
template<class... A> int FUN_10e9dc40(A...);
SCStr * __stdcall FUN_10e9dc70(SCStr *param_1);
template<class... A> int FUN_10e9dc70(A...);
SCStr * __stdcall FUN_10e9dca0(SCStr *param_1);
template<class... A> int FUN_10e9dca0(A...);
SCStr * __stdcall FUN_10e9dcd0(SCStr *param_1);
template<class... A> int FUN_10e9dcd0(A...);
SCStr * __stdcall FUN_10e9dd00(SCStr *param_1);
template<class... A> int FUN_10e9dd00(A...);
SCStr * __stdcall FUN_10e9dd30(SCStr *param_1);
template<class... A> int FUN_10e9dd30(A...);
SCStr * __stdcall FUN_10e9dd60(SCStr *param_1);
template<class... A> int FUN_10e9dd60(A...);
SCStr * __stdcall FUN_10e9dd90(SCStr *param_1);
template<class... A> int FUN_10e9dd90(A...);
SCStr * __stdcall FUN_10e9ddc0(SCStr *param_1);
template<class... A> int FUN_10e9ddc0(A...);
SCStr * __stdcall FUN_10e9ddf0(SCStr *param_1);
template<class... A> int FUN_10e9ddf0(A...);
SCStr * __stdcall FUN_10e9dfd0(SCStr *param_1);
template<class... A> int FUN_10e9dfd0(A...);
SCStr * __stdcall FUN_10ea1810(SCStr *param_1);
template<class... A> int FUN_10ea1810(A...);
SCStr * __stdcall FUN_10ea1830(SCStr *param_1);
template<class... A> int FUN_10ea1830(A...);
SCStr * __stdcall FUN_10ea1850(SCStr *param_1);
template<class... A> int FUN_10ea1850(A...);
void FUN_10ea4530(void);
template<class... A> int FUN_10ea4530(A...);
int __fastcall FUN_10ea6c00(int param_1);
template<class... A> int FUN_10ea6c00(A...);
void __fastcall FUN_10ea6f20(int param_1);
template<class... A> int FUN_10ea6f20(A...);
void __stdcall FUN_10ea8130(undefined4 param_1,int *param_2);
template<class... A> int FUN_10ea8130(A...);
void __fastcall FUN_10eab2a0(int param_1);
template<class... A> int FUN_10eab2a0(A...);
void __fastcall FUN_10eab2c0(undefined4 *param_1);
template<class... A> int FUN_10eab2c0(A...);
void __fastcall FUN_10eab2f0(undefined4 *param_1);
template<class... A> int FUN_10eab2f0(A...);
void __fastcall FUN_10eab310(int *param_1);
template<class... A> int FUN_10eab310(A...);
void __fastcall FUN_10eabc80(int param_1);
template<class... A> int FUN_10eabc80(A...);
void __stdcall FUN_10eabdf0(int param_1,int param_2);
template<class... A> int FUN_10eabdf0(A...);
void __stdcall FUN_10eabe20(undefined4 *param_1);
template<class... A> int FUN_10eabe20(A...);
void __fastcall FUN_10eac550(int *param_1);
template<class... A> int FUN_10eac550(A...);
void __fastcall FUN_10eac590(int *param_1);
template<class... A> int FUN_10eac590(A...);
void __stdcall FUN_10eac620(int param_1,int param_2);
template<class... A> int FUN_10eac620(A...);
int __fastcall FUN_10eacd00(int *param_1);
template<class... A> int FUN_10eacd00(A...);
int __fastcall FUN_10eacd20(int *param_1);
template<class... A> int FUN_10eacd20(A...);
int __fastcall FUN_10eace20(int *param_1);
template<class... A> int FUN_10eace20(A...);
void __fastcall FUN_10eb0a30(undefined4 *param_1);
template<class... A> int FUN_10eb0a30(A...);
undefined4 __fastcall FUN_10eb25f0(undefined4 param_1);
template<class... A> int FUN_10eb25f0(A...);
undefined4 * __fastcall FUN_10eb26d0(undefined4 *param_1);
template<class... A> int FUN_10eb26d0(A...);
uint __fastcall FUN_10eb3a60(uint *param_1);
template<class... A> int FUN_10eb3a60(A...);
int __fastcall FUN_10eb3b50(int *param_1);
template<class... A> int FUN_10eb3b50(A...);
undefined4 __stdcall FUN_10eb4160(undefined4 param_1);
template<class... A> int FUN_10eb4160(A...);
SCStr * __stdcall FUN_10eb4180(SCStr *param_1);
template<class... A> int FUN_10eb4180(A...);
undefined4 * __fastcall FUN_10eb6040(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10eb6040(A...);
undefined4 * __fastcall FUN_10eb6080(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10eb6080(A...);
undefined4 * __fastcall FUN_10eb60c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10eb60c0(A...);
void __fastcall FUN_10eb66d0(int param_1);
template<class... A> int FUN_10eb66d0(A...);
void __fastcall FUN_10eb66f0(int param_1);
template<class... A> int FUN_10eb66f0(A...);
void __fastcall FUN_10eb6710(int param_1);
template<class... A> int FUN_10eb6710(A...);
void __fastcall FUN_10eb6730(int *param_1);
template<class... A> int FUN_10eb6730(A...);
void __fastcall FUN_10eb6760(int *param_1);
template<class... A> int FUN_10eb6760(A...);
void __fastcall FUN_10eb6790(int *param_1);
template<class... A> int FUN_10eb6790(A...);
void __fastcall FUN_10eb69d0(int param_1);
template<class... A> int FUN_10eb69d0(A...);
void __fastcall FUN_10eb69f0(int param_1);
template<class... A> int FUN_10eb69f0(A...);
void __fastcall FUN_10eb6a10(int param_1);
template<class... A> int FUN_10eb6a10(A...);
void __fastcall FUN_10eb6a30(int *param_1);
template<class... A> int FUN_10eb6a30(A...);
void __fastcall FUN_10eb6a60(int *param_1);
template<class... A> int FUN_10eb6a60(A...);
void __fastcall FUN_10eb6a90(int *param_1);
template<class... A> int FUN_10eb6a90(A...);
void __fastcall FUN_10eb77c0(int param_1);
template<class... A> int FUN_10eb77c0(A...);
void __fastcall FUN_10eb77e0(int param_1);
template<class... A> int FUN_10eb77e0(A...);
void __fastcall FUN_10eb7800(int param_1);
template<class... A> int FUN_10eb7800(A...);
void __fastcall FUN_10ebba40(int *param_1);
template<class... A> int FUN_10ebba40(A...);
void __fastcall FUN_10ebc110(undefined4 *param_1);
template<class... A> int FUN_10ebc110(A...);
void __stdcall FUN_10ebc260(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10ebc260(A...);
undefined4 * __fastcall FUN_10ec0fb0(undefined4 *param_1);
template<class... A> int FUN_10ec0fb0(A...);
undefined4 __fastcall FUN_10ec1d20(undefined4 param_1);
template<class... A> int FUN_10ec1d20(A...);
undefined4 FUN_10ec67a0(SCStr *param_1);
template<class... A> int FUN_10ec67a0(A...);
undefined4 __stdcall FUN_10ec7200(undefined4 param_1);
template<class... A> int FUN_10ec7200(A...);
int __fastcall FUN_10eca560(int *param_1);
template<class... A> int FUN_10eca560(A...);
int * __fastcall FUN_10eca590(int *param_1);
template<class... A> int FUN_10eca590(A...);
undefined4 * __fastcall FUN_10ed09d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10ed09d0(A...);
void __fastcall FUN_10ed0c50(int param_1);
template<class... A> int FUN_10ed0c50(A...);
void __fastcall FUN_10ed0c70(int *param_1);
template<class... A> int FUN_10ed0c70(A...);
void __fastcall FUN_10ed0d60(int param_1);
template<class... A> int FUN_10ed0d60(A...);
void __fastcall FUN_10ed0d80(int *param_1);
template<class... A> int FUN_10ed0d80(A...);
void __fastcall FUN_10ed1340(int param_1);
template<class... A> int FUN_10ed1340(A...);
undefined4 FUN_10ed4080(undefined4 param_1,int param_2);
template<class... A> int FUN_10ed4080(A...);
undefined4 FUN_10ed4340(undefined4 param_1,int param_2);
template<class... A> int FUN_10ed4340(A...);
undefined4 FUN_10ed4390(undefined4 param_1,int param_2);
template<class... A> int FUN_10ed4390(A...);
undefined4 FUN_10ed43e0(undefined4 param_1,int param_2);
template<class... A> int FUN_10ed43e0(A...);
undefined4 FUN_10ed4740(undefined4 param_1,int param_2);
template<class... A> int FUN_10ed4740(A...);
undefined4 FUN_10ed4790(undefined4 param_1,int param_2);
template<class... A> int FUN_10ed4790(A...);
undefined4 FUN_10ed47e0(undefined4 param_1,int param_2);
template<class... A> int FUN_10ed47e0(A...);
undefined4 FUN_10ed4830(undefined4 param_1,int param_2);
template<class... A> int FUN_10ed4830(A...);
undefined4 FUN_10ed5e70(undefined4 param_1,int param_2);
template<class... A> int FUN_10ed5e70(A...);
undefined4 FUN_10ed5ec0(undefined4 param_1,int param_2);
template<class... A> int FUN_10ed5ec0(A...);
undefined4 FUN_10ed5f10(undefined4 param_1,int param_2);
template<class... A> int FUN_10ed5f10(A...);
undefined4 FUN_10ed8e20(undefined4 param_1,int param_2);
template<class... A> int FUN_10ed8e20(A...);
undefined4 FUN_10ed8f80(undefined4 param_1,int param_2);
template<class... A> int FUN_10ed8f80(A...);
undefined4 FUN_10ed8fd0(undefined4 param_1,int param_2);
template<class... A> int FUN_10ed8fd0(A...);
undefined4 FUN_10ed9020(undefined4 param_1,int param_2);
template<class... A> int FUN_10ed9020(A...);
undefined4 FUN_10ede180(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_10ede180(A...);
void __fastcall FUN_10edf8f0(int *param_1);
template<class... A> int FUN_10edf8f0(A...);
void __fastcall FUN_10edf920(int *param_1);
template<class... A> int FUN_10edf920(A...);
int * __fastcall FUN_10edfac0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10edfac0(A...);
void __fastcall FUN_10edfdf0(int *param_1);
template<class... A> int FUN_10edfdf0(A...);
SCStr * __stdcall FUN_10ee0730(SCStr *param_1);
template<class... A> int FUN_10ee0730(A...);
SCStr * __stdcall FUN_10ee0750(SCStr *param_1);
template<class... A> int FUN_10ee0750(A...);
undefined4 __fastcall FUN_10ee0770(int param_1);
template<class... A> int FUN_10ee0770(A...);
SCStr * __stdcall FUN_10ee07a0(SCStr *param_1);
template<class... A> int FUN_10ee07a0(A...);
void __fastcall FUN_10ee1160(int param_1);
template<class... A> int FUN_10ee1160(A...);
SCStr * __stdcall FUN_10ee1590(SCStr *param_1);
template<class... A> int FUN_10ee1590(A...);
void __fastcall FUN_10ee2d60(int param_1);
template<class... A> int FUN_10ee2d60(A...);
void __fastcall FUN_10ee2fa0(int param_1);
template<class... A> int FUN_10ee2fa0(A...);
void __fastcall FUN_10ee2fd0(int param_1);
template<class... A> int FUN_10ee2fd0(A...);
void __stdcall FUN_10ee34e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_10ee34e0(A...);
void __fastcall FUN_10ee3bb0(int param_1);
template<class... A> int FUN_10ee3bb0(A...);
void __fastcall FUN_10ee4150(int param_1);
template<class... A> int FUN_10ee4150(A...);
int __fastcall FUN_10ee42f0(int param_1);
template<class... A> int FUN_10ee42f0(A...);
SCStr * __stdcall FUN_10ee43d0(SCStr *param_1);
template<class... A> int FUN_10ee43d0(A...);
SCStr * __stdcall FUN_10ee43f0(SCStr *param_1);
template<class... A> int FUN_10ee43f0(A...);
undefined4 __fastcall FUN_10ee4470(int param_1);
template<class... A> int FUN_10ee4470(A...);
undefined4 __fastcall FUN_10ee4880(int param_1);
template<class... A> int FUN_10ee4880(A...);
undefined4 __fastcall FUN_10ee49c0(int param_1);
template<class... A> int FUN_10ee49c0(A...);
int __fastcall FUN_10ee4a00(int param_1);
template<class... A> int FUN_10ee4a00(A...);
void __fastcall FUN_10ee7150(int param_1);
template<class... A> int FUN_10ee7150(A...);
undefined4 __fastcall FUN_10ee7510(int param_1);
template<class... A> int FUN_10ee7510(A...);
bool __fastcall FUN_10ee7f70(int param_1);
template<class... A> int FUN_10ee7f70(A...);
undefined1 __fastcall FUN_10eea820(int param_1);
template<class... A> int FUN_10eea820(A...);
void 
void __fastcall FUN_10eeb490(int param_1);
template<class... A> int FUN_10eeb490(A...);
void __fastcall FUN_10eebd30(int *param_1);
template<class... A> int FUN_10eebd30(A...);
void __fastcall FUN_10eebd60(int *param_1);
template<class... A> int FUN_10eebd60(A...);
void __fastcall FUN_10eebd90(int *param_1);
template<class... A> int FUN_10eebd90(A...);
void __fastcall FUN_10eebdc0(int *param_1);
template<class... A> int FUN_10eebdc0(A...);
int * __fastcall FUN_10eebed0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10eebed0(A...);
int * __fastcall FUN_10eebf00(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10eebf00(A...);
void __fastcall FUN_10eec2f0(int *param_1);
template<class... A> int FUN_10eec2f0(A...);
void __fastcall FUN_10eec320(int *param_1);
template<class... A> int FUN_10eec320(A...);
SCStr * __stdcall FUN_10eeceb0(SCStr *param_1);
template<class... A> int FUN_10eeceb0(A...);
SCStr * __stdcall FUN_10eeced0(SCStr *param_1);
template<class... A> int FUN_10eeced0(A...);
SCStr * __stdcall FUN_10eecf80(SCStr *param_1);
template<class... A> int FUN_10eecf80(A...);
void __fastcall FUN_10eedbb0(int param_1);
template<class... A> int FUN_10eedbb0(A...);
void __fastcall FUN_10eedc60(int param_1);
template<class... A> int FUN_10eedc60(A...);
void __fastcall FUN_10eedd90(int param_1);
template<class... A> int FUN_10eedd90(A...);
undefined4 FUN_10eee200(SCStr *param_1);
template<class... A> int FUN_10eee200(A...);
SCStr * __stdcall FUN_10eee810(SCStr *param_1);
template<class... A> int FUN_10eee810(A...);
undefined4 FUN_10eee9f0(SCStr *param_1);
template<class... A> int FUN_10eee9f0(A...);
void __fastcall FUN_10eef240(int param_1);
template<class... A> int FUN_10eef240(A...);
void __fastcall FUN_10eef2f0(int param_1);
template<class... A> int FUN_10eef2f0(A...);
void __fastcall FUN_10eef420(int param_1);
template<class... A> int FUN_10eef420(A...);
int __stdcall FUN_10eefae0(int *param_1);
template<class... A> int FUN_10eefae0(A...);
undefined4 FUN_10eefdc0(int *param_1);
template<class... A> int FUN_10eefdc0(A...);
undefined4 FUN_10eefe10(SCStr *param_1);
template<class... A> int FUN_10eefe10(A...);
SCStr * __stdcall FUN_10ef05f0(SCStr *param_1);
template<class... A> int FUN_10ef05f0(A...);
undefined4 FUN_10ef0990(SCStr *param_1);
template<class... A> int FUN_10ef0990(A...);
undefined1 * __fastcall FUN_10ef21e0(int param_1);
template<class... A> int FUN_10ef21e0(A...);
SCStr * __stdcall FUN_10ef22f0(SCStr *param_1);
template<class... A> int FUN_10ef22f0(A...);
void __fastcall FUN_10ef30c0(undefined4 *param_1);
template<class... A> int FUN_10ef30c0(A...);
SCStr * __stdcall FUN_10ef30f0(SCStr *param_1);
template<class... A> int FUN_10ef30f0(A...);
char * FUN_10ef3110(char *param_1);
template<class... A> int FUN_10ef3110(A...);
int FUN_10ef4180(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10ef4180(A...);
void FUN_10ef4da0(undefined4 *param_1,int *param_2,int *param_3,int *param_4);
template<class... A> int FUN_10ef4da0(A...);
void __fastcall FUN_10ef5120(int param_1);
template<class... A> int FUN_10ef5120(A...);
void __fastcall FUN_10ef5200(int param_1);
template<class... A> int FUN_10ef5200(A...);
void __fastcall FUN_10ef5730(int param_1);
template<class... A> int FUN_10ef5730(A...);
void __fastcall FUN_10ef64b0(int param_1);
template<class... A> int FUN_10ef64b0(A...);
void __fastcall FUN_10ef9de0(int param_1);
template<class... A> int FUN_10ef9de0(A...);
void __fastcall FUN_10efa290(int param_1);
template<class... A> int FUN_10efa290(A...);
undefined4 __fastcall FUN_10f00a60(int param_1);
template<class... A> int FUN_10f00a60(A...);
void __stdcall FUN_10f01ee0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10f01ee0(A...);
undefined4 * __fastcall FUN_10f02150(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10f02150(A...);
undefined4 * __fastcall FUN_10f021f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10f021f0(A...);
void __fastcall FUN_10f02dd0(int param_1);
template<class... A> int FUN_10f02dd0(A...);
void __fastcall FUN_10f02df0(int *param_1);
template<class... A> int FUN_10f02df0(A...);
void __fastcall FUN_10f02e20(undefined4 *param_1);
template<class... A> int FUN_10f02e20(A...);
void __fastcall FUN_10f02e80(int param_1);
template<class... A> int FUN_10f02e80(A...);
void __fastcall FUN_10f02ec0(int *param_1);
template<class... A> int FUN_10f02ec0(A...);
void __fastcall FUN_10f03230(int param_1);
template<class... A> int FUN_10f03230(A...);
undefined4 __fastcall FUN_10f04f60(int *param_1);
template<class... A> int FUN_10f04f60(A...);
undefined1 FUN_10f04fa0(void);
template<class... A> int FUN_10f04fa0(A...);
undefined4 __fastcall FUN_10f04fe0(int *param_1);
template<class... A> int FUN_10f04fe0(A...);
undefined1 FUN_10f05120(void);
template<class... A> int FUN_10f05120(A...);
undefined4 __fastcall FUN_10f05160(int *param_1);
template<class... A> int FUN_10f05160(A...);
undefined1 FUN_10f05290(void);
template<class... A> int FUN_10f05290(A...);
undefined1 FUN_10f052d0(void);
template<class... A> int FUN_10f052d0(A...);
undefined4 __fastcall FUN_10f05330(int *param_1);
template<class... A> int FUN_10f05330(A...);
undefined1 FUN_10f054a0(void);
template<class... A> int FUN_10f054a0(A...);
undefined1 FUN_10f05830(void);
template<class... A> int FUN_10f05830(A...);
undefined1 __fastcall FUN_10f058f0(int param_1);
template<class... A> int FUN_10f058f0(A...);
undefined4 __fastcall FUN_10f060e0(undefined4 param_1);
template<class... A> int FUN_10f060e0(A...);
undefined4 FUN_10f06350(void);
template<class... A> int FUN_10f06350(A...);
char FUN_10f06390(void);
template<class... A> int FUN_10f06390(A...);
undefined4 __fastcall FUN_10f063e0(undefined4 param_1);
template<class... A> int FUN_10f063e0(A...);
undefined4 FUN_10f067b0(void);
template<class... A> int FUN_10f067b0(A...);
undefined4 FUN_10f06840(void);
template<class... A> int FUN_10f06840(A...);
SCStr * __stdcall FUN_10f084a0(SCStr *param_1);
template<class... A> int FUN_10f084a0(A...);
SCStr * __stdcall FUN_10f08a80(SCStr *param_1);
template<class... A> int FUN_10f08a80(A...);
SCStr * __stdcall FUN_10f08aa0(SCStr *param_1);
template<class... A> int FUN_10f08aa0(A...);
SCStr * __stdcall FUN_10f091a0(SCStr *param_1);
template<class... A> int FUN_10f091a0(A...);
undefined4 FUN_10f09a10(void);
template<class... A> int FUN_10f09a10(A...);
undefined4 FUN_10f0b840(void);
template<class... A> int FUN_10f0b840(A...);
undefined1 FUN_10f0b9a0(void);
template<class... A> int FUN_10f0b9a0(A...);
undefined4 __fastcall FUN_10f0bd80(int param_1);
template<class... A> int FUN_10f0bd80(A...);
SCStr * __stdcall FUN_10f0c7b0(SCStr *param_1);
template<class... A> int FUN_10f0c7b0(A...);
void __fastcall FUN_10f0ef10(undefined4 *param_1);
template<class... A> int FUN_10f0ef10(A...);
undefined1 * __fastcall FUN_10f114f0(int param_1);
template<class... A> int FUN_10f114f0(A...);
undefined4 __fastcall FUN_10f11640(int param_1);
template<class... A> int FUN_10f11640(A...);
SCStr * __stdcall FUN_10f11b70(SCStr *param_1);
template<class... A> int FUN_10f11b70(A...);
undefined4 __stdcall FUN_10f11b90(undefined4 param_1);
template<class... A> int FUN_10f11b90(A...);
SCStr * __stdcall FUN_10f11c10(SCStr *param_1);
template<class... A> int FUN_10f11c10(A...);
SCStr * __stdcall FUN_10f11f40(SCStr *param_1);
template<class... A> int FUN_10f11f40(A...);
SCStr * __stdcall FUN_10f11f60(SCStr *param_1);
template<class... A> int FUN_10f11f60(A...);
SCStr * __stdcall FUN_10f11f80(SCStr *param_1);
template<class... A> int FUN_10f11f80(A...);
SCStr * __stdcall FUN_10f12010(SCStr *param_1);
template<class... A> int FUN_10f12010(A...);
undefined4 * __fastcall FUN_10f16f30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10f16f30(A...);
undefined4 * __fastcall FUN_10f170c0(undefined4 *param_1);
template<class... A> int FUN_10f170c0(A...);
void __fastcall FUN_10f174e0(int param_1);
template<class... A> int FUN_10f174e0(A...);
void __fastcall FUN_10f17500(int *param_1);
template<class... A> int FUN_10f17500(A...);
void __fastcall FUN_10f175b0(int param_1);
template<class... A> int FUN_10f175b0(A...);
void __fastcall FUN_10f17600(undefined4 *param_1);
template<class... A> int FUN_10f17600(A...);
void __fastcall FUN_10f17630(int *param_1);
template<class... A> int FUN_10f17630(A...);
void __fastcall FUN_10f17710(undefined4 *param_1);
template<class... A> int FUN_10f17710(A...);
void __fastcall FUN_10f17740(int *param_1);
template<class... A> int FUN_10f17740(A...);
void __fastcall FUN_10f18340(int param_1);
template<class... A> int FUN_10f18340(A...);
int * FUN_10f18f60(int *param_1);
template<class... A> int FUN_10f18f60(A...);
void __stdcall FUN_10f19500(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10f19500(A...);
void __fastcall FUN_10f19c80(int *param_1);
template<class... A> int FUN_10f19c80(A...);
undefined4 * __fastcall FUN_10f1bf40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10f1bf40(A...);
undefined4 * __fastcall FUN_10f1bf80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10f1bf80(A...);
void __fastcall FUN_10f1c470(int param_1);
template<class... A> int FUN_10f1c470(A...);
void __fastcall FUN_10f1c490(int param_1);
template<class... A> int FUN_10f1c490(A...);
void __fastcall FUN_10f1c4b0(int param_1);
template<class... A> int FUN_10f1c4b0(A...);
void __fastcall FUN_10f1c4d0(int *param_1);
template<class... A> int FUN_10f1c4d0(A...);
void __fastcall FUN_10f1c500(int *param_1);
template<class... A> int FUN_10f1c500(A...);
void __fastcall FUN_10f1c770(int param_1);
template<class... A> int FUN_10f1c770(A...);
void __fastcall FUN_10f1c790(int *param_1);
template<class... A> int FUN_10f1c790(A...);
void __fastcall FUN_10f1c7c0(int *param_1);
template<class... A> int FUN_10f1c7c0(A...);
void __fastcall FUN_10f1d1a0(int param_1);
template<class... A> int FUN_10f1d1a0(A...);
void __fastcall FUN_10f1d1c0(int param_1);
template<class... A> int FUN_10f1d1c0(A...);
void __fastcall FUN_10f1d1e0(int param_1);
template<class... A> int FUN_10f1d1e0(A...);
int __stdcall FUN_10f1df20(int *param_1);
template<class... A> int FUN_10f1df20(A...);
int __stdcall FUN_10f1df70(int *param_1);
template<class... A> int FUN_10f1df70(A...);
undefined4 FUN_10f1f800(int *param_1);
template<class... A> int FUN_10f1f800(A...);
undefined4 FUN_10f1f850(int *param_1);
template<class... A> int FUN_10f1f850(A...);
undefined4 FUN_10f1f8a0(SCStr *param_1);
template<class... A> int FUN_10f1f8a0(A...);
SCStr * __stdcall FUN_10f20790(SCStr *param_1);
template<class... A> int FUN_10f20790(A...);
SCStr * __stdcall FUN_10f207b0(SCStr *param_1);
template<class... A> int FUN_10f207b0(A...);
void __stdcall FUN_10f207d0(undefined4 *param_1);
template<class... A> int FUN_10f207d0(A...);
undefined4 FUN_10f209a0(SCStr *param_1);
template<class... A> int FUN_10f209a0(A...);
uint __fastcall FUN_10f209f0(int param_1);
template<class... A> int FUN_10f209f0(A...);
void __fastcall FUN_10f21f30(int param_1);
template<class... A> int FUN_10f21f30(A...);
SCStr * __stdcall FUN_10f21f60(SCStr *param_1);
template<class... A> int FUN_10f21f60(A...);
SCStr * __stdcall FUN_10f21f80(SCStr *param_1);
template<class... A> int FUN_10f21f80(A...);
SCStr * __stdcall FUN_10f21fc0(SCStr *param_1);
template<class... A> int FUN_10f21fc0(A...);
undefined4 * __fastcall FUN_10f24a40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10f24a40(A...);
undefined4 * __fastcall FUN_10f24c20(undefined4 *param_1);
template<class... A> int FUN_10f24c20(A...);
void __fastcall FUN_10f25b40(int param_1);
template<class... A> int FUN_10f25b40(A...);
void __fastcall FUN_10f25b90(int *param_1);
template<class... A> int FUN_10f25b90(A...);
void __fastcall FUN_10f25bc0(undefined4 *param_1);
template<class... A> int FUN_10f25bc0(A...);
void __fastcall FUN_10f25bf0(undefined4 *param_1);
template<class... A> int FUN_10f25bf0(A...);
void __fastcall FUN_10f25e50(int *param_1);
template<class... A> int FUN_10f25e50(A...);
void __fastcall FUN_10f26c50(int param_1);
template<class... A> int FUN_10f26c50(A...);
undefined4 __stdcall FUN_10f2a8e0(undefined4 param_1);
template<class... A> int FUN_10f2a8e0(A...);
undefined4 __stdcall FUN_10f2a900(undefined4 param_1);
template<class... A> int FUN_10f2a900(A...);
SCStr * __stdcall FUN_10f2a950(SCStr *param_1);
template<class... A> int FUN_10f2a950(A...);
void __fastcall FUN_10f2f730(int param_1);
template<class... A> int FUN_10f2f730(A...);
// Reference entry 10d5e6a0; body size 32 bytes.
#line 1 "ENTRY_10d5e6a0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d5e6a0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d5e270();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d5e880; body size 32 bytes.
#line 1 "ENTRY_10d5e880"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d5e880(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1057b1f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d5e990; body size 35 bytes.
#line 1 "ENTRY_10d5e990"

void __stdcall FUN_10d5e990(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    thunk_FUN_10d5e270();
  }
  return;
}


// Reference entry 10d5ed90; body size 21 bytes.
#line 1 "ENTRY_10d5ed90"

void __stdcall FUN_10d5ed90(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_10d5f7c0();
  }
  return;
}


// Reference entry 10d5efd0; body size 56 bytes.
#line 1 "ENTRY_10d5efd0"

void __stdcall FUN_10d5efd0(int param_1,int param_2)

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


// Reference entry 10d5f020; body size 36 bytes.
#line 1 "ENTRY_10d5f020"

void __stdcall FUN_10d5f020(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq(":onFavoritesChanged"), 0);
  if (bVar1) {
    thunk_FUN_10d5f7c0();
  }
  return;
}


// Reference entry 10d5f050; body size 21 bytes.
#line 1 "ENTRY_10d5f050"

SCStr * __stdcall FUN_10d5f050(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCMyPlaylistsDataSource");
  return (SCStr *)(param_1);
}


// Reference entry 10d5f370; body size 21 bytes.
#line 1 "ENTRY_10d5f370"

SCStr * __stdcall FUN_10d5f370(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryEdit");
  return (SCStr *)(param_1);
}


// Reference entry 10d5f490; body size 35 bytes.
#line 1 "ENTRY_10d5f490"

int * __thiscall Recovered_Bulk::m_FUN_10d5f490(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0xac) + param_3 * 8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d5f4d0; body size 35 bytes.
#line 1 "ENTRY_10d5f4d0"

int __fastcall FUN_10d5f4d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x60));
  if (iVar1 == 0) {
    return (int)(0);
  }
  iVar2 = (int)(*(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xac) >> 3);
  if ((0 < iVar1) && (iVar1 < iVar2)) {
    iVar2 = (int)(iVar1);
  }
  return (int)(iVar2);
}


// Reference entry 10d5f500; body size 20 bytes.
#line 1 "ENTRY_10d5f500"

undefined4 __stdcall FUN_10d5f500(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(7);
  if (param_1 == 2) {
    uVar1 = (undefined4)(4);
  }
  return (undefined4)(uVar1);
}


// Reference entry 10d5f520; body size 48 bytes.
#line 1 "ENTRY_10d5f520"

SCStr * __stdcall FUN_10d5f520(SCStr *param_1, int param_2, unsigned int recovered_unused_stack_0)

{
  if (param_2 == 2) {
    ((SCStr *)(param_1))->int_allocRep("emptyplaylists");
    return (SCStr *)(param_1);
  }
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d5fc00; body size 29 bytes.
#line 1 "ENTRY_10d5fc00"

undefined4 FUN_10d5fc00(int param_1)

{
  if (((param_1 != 0) && (param_1 != 1)) && (param_1 != 4)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 10d61370; body size 35 bytes.
#line 1 "ENTRY_10d61370"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d61370(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d60e30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d615f0; body size 21 bytes.
#line 1 "ENTRY_10d615f0"

SCStr * __stdcall FUN_10d615f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAccountEmailItem");
  return (SCStr *)(param_1);
}


// Reference entry 10d61610; body size 21 bytes.
#line 1 "ENTRY_10d61610"

SCStr * __stdcall FUN_10d61610(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAccountSettingsDataSource");
  return (SCStr *)(param_1);
}


// Reference entry 10d61630; body size 21 bytes.
#line 1 "ENTRY_10d61630"

SCStr * __stdcall FUN_10d61630(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAccountSignInItem");
  return (SCStr *)(param_1);
}


// Reference entry 10d61910; body size 20 bytes.
#line 1 "ENTRY_10d61910"

undefined4 __fastcall FUN_10d61910(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x2c) + 0x38))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10d61e50; body size 17 bytes.
#line 1 "ENTRY_10d61e50"

undefined4 __fastcall FUN_10d61e50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x2c) + 0x18))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d61e70; body size 60 bytes.
#line 1 "ENTRY_10d61e70"

int * __thiscall Recovered_Bulk::m_FUN_10d61e70(int *param_2,uint param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  uint uVar2;
  
  uVar2 = (uint)((**(code **)(*param_1 + 0x58))(), 0);
  if (uVar2 <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(param_1[0x27] + param_3 * 8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d61ed0; body size 21 bytes.
#line 1 "ENTRY_10d61ed0"

SCStr * __stdcall FUN_10d61ed0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d61f10; body size 16 bytes.
#line 1 "ENTRY_10d61f10"

int __fastcall FUN_10d61f10(int param_1)

{
  return (int)(*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c) >> 3);
}


// Reference entry 10d62130; body size 21 bytes.
#line 1 "ENTRY_10d62130"

SCStr * __stdcall FUN_10d62130(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d62440; body size 21 bytes.
#line 1 "ENTRY_10d62440"

SCStr * __stdcall FUN_10d62440(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d62460; body size 21 bytes.
#line 1 "ENTRY_10d62460"

SCStr * __stdcall FUN_10d62460(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d62490; body size 17 bytes.
#line 1 "ENTRY_10d62490"

undefined4 __fastcall FUN_10d62490(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x2c) + 0x3c))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d626c0; body size 21 bytes.
#line 1 "ENTRY_10d626c0"

SCStr * __stdcall FUN_10d626c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d626e0; body size 21 bytes.
#line 1 "ENTRY_10d626e0"

SCStr * __stdcall FUN_10d626e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d62700; body size 21 bytes.
#line 1 "ENTRY_10d62700"

SCStr * __stdcall FUN_10d62700(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d63300; body size 19 bytes.
#line 1 "ENTRY_10d63300"

undefined4 __fastcall FUN_10d63300(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x2c) + 0x24))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10d634d0; body size 30 bytes.
#line 1 "ENTRY_10d634d0"

void __fastcall FUN_10d634d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10d62720();
  (**(code **)(*(int *)(param_1 + -0x84) + 0x114))(0);
  return;
}


// Reference entry 10d63600; body size 22 bytes.
#line 1 "ENTRY_10d63600"

void __fastcall FUN_10d63600(int *param_1)

{
  thunk_FUN_10d62720();
  (**(code **)(*param_1 + 0x114))(0);
  return;
}


// Reference entry 10d638e0; body size 19 bytes.
#line 1 "ENTRY_10d638e0"

uint __fastcall FUN_10d638e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x2c) + 0x28))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d63d20; body size 30 bytes.
#line 1 "ENTRY_10d63d20"

void __thiscall Recovered_Bulk::m_FUN_10d63d20(int param_2)
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


// Reference entry 10d63ea0; body size 41 bytes.
#line 1 "ENTRY_10d63ea0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d63ea0(int *param_2)
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


// Reference entry 10d63ee0; body size 41 bytes.
#line 1 "ENTRY_10d63ee0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d63ee0(int *param_2)
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


// Reference entry 10d645b0; body size 19 bytes.
#line 1 "ENTRY_10d645b0"

void __fastcall FUN_10d645b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d64c90; body size 45 bytes.
#line 1 "ENTRY_10d64c90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d64c90(byte param_2)
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


// Reference entry 10d64cd0; body size 45 bytes.
#line 1 "ENTRY_10d64cd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d64cd0(byte param_2)
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


// Reference entry 10d64d10; body size 33 bytes.
#line 1 "ENTRY_10d64d10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d64d10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d64d40; body size 33 bytes.
#line 1 "ENTRY_10d64d40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d64d40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d64d70; body size 33 bytes.
#line 1 "ENTRY_10d64d70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d64d70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d64da0; body size 33 bytes.
#line 1 "ENTRY_10d64da0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d64da0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d65030; body size 45 bytes.
#line 1 "ENTRY_10d65030"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d65030(byte param_2)
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


// Reference entry 10d652f0; body size 19 bytes.
#line 1 "ENTRY_10d652f0"

void __thiscall Recovered_Bulk::m_FUN_10d652f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d65310; body size 19 bytes.
#line 1 "ENTRY_10d65310"

void __thiscall Recovered_Bulk::m_FUN_10d65310(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d65330; body size 21 bytes.
#line 1 "ENTRY_10d65330"

void __thiscall Recovered_Bulk::m_FUN_10d65330(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10d65350; body size 21 bytes.
#line 1 "ENTRY_10d65350"

void __thiscall Recovered_Bulk::m_FUN_10d65350(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10d65370; body size 16 bytes.
#line 1 "ENTRY_10d65370"

void __fastcall FUN_10d65370(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x114))(0);
  return;
}


// Reference entry 10d653c0; body size 19 bytes.
#line 1 "ENTRY_10d653c0"

void __thiscall Recovered_Bulk::m_FUN_10d653c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d653e0; body size 19 bytes.
#line 1 "ENTRY_10d653e0"

void __thiscall Recovered_Bulk::m_FUN_10d653e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d654c0; body size 30 bytes.
#line 1 "ENTRY_10d654c0"

void __thiscall Recovered_Bulk::m_FUN_10d654c0(int param_2)
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


// Reference entry 10d65550; body size 21 bytes.
#line 1 "ENTRY_10d65550"

SCStr * __stdcall FUN_10d65550(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCSearchHistoryBrowseDataSource");
  return (SCStr *)(param_1);
}


// Reference entry 10d65570; body size 21 bytes.
#line 1 "ENTRY_10d65570"

SCStr * __stdcall FUN_10d65570(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCSearchHistoryBrowseItem");
  return (SCStr *)(param_1);
}


// Reference entry 10d65590; body size 21 bytes.
#line 1 "ENTRY_10d65590"

SCStr * __stdcall FUN_10d65590(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCSearchHistoryPageDataSource");
  return (SCStr *)(param_1);
}


// Reference entry 10d655b0; body size 28 bytes.
#line 1 "ENTRY_10d655b0"

void __fastcall FUN_10d655b0(int *param_1)

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


// Reference entry 10d65860; body size 21 bytes.
#line 1 "ENTRY_10d65860"

SCStr * __stdcall FUN_10d65860(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("ClearSearchHistory");
  return (SCStr *)(param_1);
}


// Reference entry 10d65ca0; body size 25 bytes.
#line 1 "ENTRY_10d65ca0"

int * __thiscall Recovered_Bulk::m_FUN_10d65ca0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x1c), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d65cc0; body size 21 bytes.
#line 1 "ENTRY_10d65cc0"

SCStr * __stdcall FUN_10d65cc0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryEdit");
  return (SCStr *)(param_1);
}


// Reference entry 10d65ce0; body size 25 bytes.
#line 1 "ENTRY_10d65ce0"

int * __thiscall Recovered_Bulk::m_FUN_10d65ce0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x24), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d666f0; body size 55 bytes.
#line 1 "ENTRY_10d666f0"

int * __thiscall Recovered_Bulk::m_FUN_10d666f0(int *param_2,uint param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  uint uVar2;
  
  uVar2 = (uint)((**(code **)(*param_1 + 0x58))(), 0);
  if (uVar2 <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)((int *)param_1[0x22]);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d66740; body size 20 bytes.
#line 1 "ENTRY_10d66740"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d66740(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x30));
  return (SCStr *)(param_2);
}


// Reference entry 10d66760; body size 35 bytes.
#line 1 "ENTRY_10d66760"

SCStr * __stdcall FUN_10d66760(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2b12,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d668e0; body size 59 bytes.
#line 1 "ENTRY_10d668e0"

SCStr * FUN_10d668e0(SCStr *param_1,int param_2)

{
  if ((param_2 != 6) && (param_2 != 7)) {
    ((SCStr *)(param_1))->int_allocRep("Search History");
    return (SCStr *)(param_1);
  }
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d66970; body size 20 bytes.
#line 1 "ENTRY_10d66970"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d66970(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x40));
  return (SCStr *)(param_2);
}


// Reference entry 10d66990; body size 35 bytes.
#line 1 "ENTRY_10d66990"

SCStr * __stdcall FUN_10d66990(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2b11,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d66cc0; body size 20 bytes.
#line 1 "ENTRY_10d66cc0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d66cc0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x4c));
  return (SCStr *)(param_2);
}


// Reference entry 10d66e30; body size 20 bytes.
#line 1 "ENTRY_10d66e30"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d66e30(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x44));
  return (SCStr *)(param_2);
}


// Reference entry 10d66e50; body size 21 bytes.
#line 1 "ENTRY_10d66e50"

SCStr * __stdcall FUN_10d66e50(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d67100; body size 22 bytes.
#line 1 "ENTRY_10d67100"

undefined4 __fastcall FUN_10d67100(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x24) + 0x58))(), 0);
    if (iVar1 != 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10d67eb0; body size 23 bytes.
#line 1 "ENTRY_10d67eb0"

void __stdcall FUN_10d67eb0(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10d684c0; body size 33 bytes.
#line 1 "ENTRY_10d684c0"

void __thiscall Recovered_Bulk::m_FUN_10d684c0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10d684f0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10d685b0; body size 49 bytes.
#line 1 "ENTRY_10d685b0"

int __thiscall Recovered_Bulk::m_FUN_10d685b0(uint *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10d685f0((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || ((uint)(*param_2) < *(uint *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10d68a40; body size 48 bytes.
#line 1 "ENTRY_10d68a40"

undefined4 * __fastcall FUN_10d68a40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10d69740; body size 19 bytes.
#line 1 "ENTRY_10d69740"

void __fastcall FUN_10d69740(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d69760; body size 19 bytes.
#line 1 "ENTRY_10d69760"

void __fastcall FUN_10d69760(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10d69780; body size 28 bytes.
#line 1 "ENTRY_10d69780"

void __fastcall FUN_10d69780(int *param_1)

{
  thunk_FUN_10d684f0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10d69860; body size 28 bytes.
#line 1 "ENTRY_10d69860"

void __fastcall FUN_10d69860(int *param_1)

{
  thunk_FUN_10d684f0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10d6a130; body size 45 bytes.
#line 1 "ENTRY_10d6a130"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d6a130(byte param_2)
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


// Reference entry 10d6a1f0; body size 33 bytes.
#line 1 "ENTRY_10d6a1f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d6a1f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d6a810; body size 25 bytes.
#line 1 "ENTRY_10d6a810"

void __fastcall FUN_10d6a810(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10d6add0; body size 37 bytes.
#line 1 "ENTRY_10d6add0"

void __stdcall FUN_10d6add0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5)

{
  thunk_FUN_112af4e0("SCSearchResultBrowseItem",2, "Re-browse failed for objectId: %s, UDN: %s, res %d",param_2,param_1,param_5);
  return;
}


// Reference entry 10d6af90; body size 33 bytes.
#line 1 "ENTRY_10d6af90"

void __fastcall FUN_10d6af90(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10d684f0(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10d6bb30; body size 21 bytes.
#line 1 "ENTRY_10d6bb30"

SCStr * __stdcall FUN_10d6bb30(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCSearchPageDataSource");
  return (SCStr *)(param_1);
}


// Reference entry 10d6bb50; body size 21 bytes.
#line 1 "ENTRY_10d6bb50"

SCStr * __stdcall FUN_10d6bb50(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCSearchResultBrowseItem");
  return (SCStr *)(param_1);
}


// Reference entry 10d6bb70; body size 21 bytes.
#line 1 "ENTRY_10d6bb70"

SCStr * __stdcall FUN_10d6bb70(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCSearchViewBrowseItem");
  return (SCStr *)(param_1);
}


// Reference entry 10d6bf60; body size 28 bytes.
#line 1 "ENTRY_10d6bf60"

int * __thiscall Recovered_Bulk::m_FUN_10d6bf60(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x134), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d6c020; body size 21 bytes.
#line 1 "ENTRY_10d6c020"

SCStr * __stdcall FUN_10d6c020(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("REST");
  return (SCStr *)(param_1);
}


// Reference entry 10d6d430; body size 20 bytes.
#line 1 "ENTRY_10d6d430"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d6d430(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 10d6d450; body size 23 bytes.
#line 1 "ENTRY_10d6d450"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d6d450(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_104f77f0(param_2,param_1 + 0x14);
  return (undefined4)(param_2);
}


// Reference entry 10d6d470; body size 25 bytes.
#line 1 "ENTRY_10d6d470"

int * __thiscall Recovered_Bulk::m_FUN_10d6d470(int *param_2)
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


// Reference entry 10d6d490; body size 23 bytes.
#line 1 "ENTRY_10d6d490"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d6d490(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x274));
  return (SCStr *)(param_2);
}


// Reference entry 10d6d4c0; body size 43 bytes.
#line 1 "ENTRY_10d6d4c0"

int __fastcall FUN_10d6d4c0(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (char)((**(code **)(*(int *)(param_1 + -0x10) + 0x38))(), 0);
  if (cVar1 != '\0') {
    return (int)(*(int *)(param_1 + 0x280) - *(int *)(param_1 + 0x27c) >> 3);
  }
  iVar2 = (int)(thunk_FUN_1020fe60(), 0);
  return (int)(iVar2);
}


// Reference entry 10d6d850; body size 35 bytes.
#line 1 "ENTRY_10d6d850"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d6d850(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x260) != '\0') && (param_2 == 3)) {
    return (undefined4)(4);
  }
  uVar1 = (undefined4)(thunk_FUN_102105a0(), 0);
  return (undefined4)(uVar1);
}


// Reference entry 10d6d880; body size 62 bytes.
#line 1 "ENTRY_10d6d880"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d6d880(SCStr *param_2,int param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  if ((*(char *)(param_1 + 0x260) != '\0') && (param_3 == 3)) {
    ((SCStr *)(param_2))->int_allocRep("icon_search_error");
    return (SCStr *)(param_2);
  }
  thunk_FUN_10210700(param_2,param_3,param_4);
  return (SCStr *)(param_2);
}


// Reference entry 10d70fc0; body size 42 bytes.
#line 1 "ENTRY_10d70fc0"

void __thiscall Recovered_Bulk::m_FUN_10d70fc0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  
  thunk_FUN_1021d0d0(param_2);
  cVar1 = (char)((**(code **)(*param_1 + 0x90))(), 0);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x94))();
  }
  return;
}


// Reference entry 10d71000; body size 26 bytes.
#line 1 "ENTRY_10d71000"

void __thiscall Recovered_Bulk::m_FUN_10d71000(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_1021d0d0(param_2);
  (**(code **)(*param_1 + 0x94))();
  return;
}


// Reference entry 10d71030; body size 32 bytes.
#line 1 "ENTRY_10d71030"

void __thiscall Recovered_Bulk::m_FUN_10d71030(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x5c))(), 0);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x114))(param_2);
  }
  return;
}


// Reference entry 10d71620; body size 28 bytes.
#line 1 "ENTRY_10d71620"

undefined4 __fastcall FUN_10d71620(int param_1)

{
  if (*(int *)(param_1 + -8) == 0) {
    return (undefined4)(0);
  }
  *(undefined1*)(param_1 + 0xc5) = (undefined1)(0);
  (**(code **)(*(int *)(param_1 + -0x10) + 0x1c))();
  return (undefined4)(1);
}


// Reference entry 10d73f00; body size 23 bytes.
#line 1 "ENTRY_10d73f00"

void __stdcall FUN_10d73f00(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10d74540; body size 41 bytes.
#line 1 "ENTRY_10d74540"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d74540(int *param_2)
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


// Reference entry 10d74580; body size 41 bytes.
#line 1 "ENTRY_10d74580"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d74580(int *param_2)
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


// Reference entry 10d745c0; body size 41 bytes.
#line 1 "ENTRY_10d745c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d745c0(int *param_2)
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


// Reference entry 10d755b0; body size 33 bytes.
#line 1 "ENTRY_10d755b0"

void __fastcall FUN_10d755b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10d755e0; body size 33 bytes.
#line 1 "ENTRY_10d755e0"

void __fastcall FUN_10d755e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10d75610; body size 33 bytes.
#line 1 "ENTRY_10d75610"

void __fastcall FUN_10d75610(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10d75640; body size 33 bytes.
#line 1 "ENTRY_10d75640"

void __fastcall FUN_10d75640(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10d75670; body size 33 bytes.
#line 1 "ENTRY_10d75670"

void __fastcall FUN_10d75670(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10d756a0; body size 33 bytes.
#line 1 "ENTRY_10d756a0"

void __fastcall FUN_10d756a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10d75dc0; body size 37 bytes.
#line 1 "ENTRY_10d75dc0"

int * __fastcall FUN_10d75dc0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10d75df0; body size 37 bytes.
#line 1 "ENTRY_10d75df0"

int * __fastcall FUN_10d75df0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10d75e20; body size 37 bytes.
#line 1 "ENTRY_10d75e20"

int * __fastcall FUN_10d75e20(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10d76180; body size 32 bytes.
#line 1 "ENTRY_10d76180"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d76180(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d751f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d761b0; body size 32 bytes.
#line 1 "ENTRY_10d761b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d761b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d752e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d761e0; body size 32 bytes.
#line 1 "ENTRY_10d761e0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d761e0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d753d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d76210; body size 33 bytes.
#line 1 "ENTRY_10d76210"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d76210(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d762f0; body size 35 bytes.
#line 1 "ENTRY_10d762f0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d762f0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d75760();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x110);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d76320; body size 35 bytes.
#line 1 "ENTRY_10d76320"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d76320(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d75960();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,200);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d76590; body size 33 bytes.
#line 1 "ENTRY_10d76590"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d76590(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStrPropDelegate);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d766e0; body size 33 bytes.
#line 1 "ENTRY_10d766e0"

void __fastcall FUN_10d766e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10d76710; body size 33 bytes.
#line 1 "ENTRY_10d76710"

void __fastcall FUN_10d76710(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10d76740; body size 33 bytes.
#line 1 "ENTRY_10d76740"

void __fastcall FUN_10d76740(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10d774f0; body size 63 bytes.
#line 1 "ENTRY_10d774f0"

char __fastcall FUN_10d774f0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x30) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x30) + 0x30))(), 0);
    if (cVar1 != '\0') {
      cVar1 = (char)('\x01');
      goto LAB_10d7750b;
    }
  }
  cVar1 = (char)('\0');
LAB_10d7750b:
  if ((*(int *)(param_1 + 0x38) != 0) && (*(int **)(param_1 + 0x28) != (int *)((0x0)))) {
    if (cVar1 != '\0') {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x28) + 0x30))(), 0);
      if (cVar1 != '\0') {
        return (char)('\x01');
      }
    }
    cVar1 = (char)('\0');
  }
  return (char)(cVar1);
}


// Reference entry 10d77940; body size 41 bytes.
#line 1 "ENTRY_10d77940"

void __fastcall FUN_10d77940(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x44) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x44) + 0x1c))(), 0);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x44) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x40) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10d77b40; body size 28 bytes.
#line 1 "ENTRY_10d77b40"

void FUN_10d77b40(void)

{
  SCStr aSStack_c [4];
  
  ((SCStr *)((uint)&aSStack_c))->int_allocRep("acct_sign_in.complete");
  thunk_FUN_10d798f0();
  return;
}


// Reference entry 10d77e70; body size 21 bytes.
#line 1 "ENTRY_10d77e70"

SCStr * __stdcall FUN_10d77e70(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("acct_sign_in.complete");
  return (SCStr *)(param_1);
}


// Reference entry 10d77e90; body size 21 bytes.
#line 1 "ENTRY_10d77e90"

SCStr * __stdcall FUN_10d77e90(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("acct_sign_in.init");
  return (SCStr *)(param_1);
}


// Reference entry 10d77eb0; body size 21 bytes.
#line 1 "ENTRY_10d77eb0"

SCStr * __stdcall FUN_10d77eb0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("acct_sign_in.main_page");
  return (SCStr *)(param_1);
}


// Reference entry 10d77f20; body size 35 bytes.
#line 1 "ENTRY_10d77f20"

SCStr * __stdcall FUN_10d77f20(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x23f5,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d79410; body size 21 bytes.
#line 1 "ENTRY_10d79410"

SCStr * __stdcall FUN_10d79410(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("AccountSignInWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10d79fc0; body size 19 bytes.
#line 1 "ENTRY_10d79fc0"

bool __fastcall FUN_10d79fc0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 8) + 0xf8))(), 0);
  return (bool)(cVar1 == '\0');
}


// Reference entry 10d7a4a0; body size 27 bytes.
#line 1 "ENTRY_10d7a4a0"

void FUN_10d7a4a0(void)

{
  SCStr aSStack_c [4];
  
  ((SCStr *)((uint)&aSStack_c))->int_allocRep("no_descriptor");
  thunk_FUN_10545740();
  return;
}


// Reference entry 10d7c010; body size 43 bytes.
#line 1 "ENTRY_10d7c010"

int * __thiscall Recovered_Bulk::m_FUN_10d7c010(int *param_2)
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


// Reference entry 10d7ca90; body size 41 bytes.
#line 1 "ENTRY_10d7ca90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d7ca90(int *param_2)
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


// Reference entry 10d7cad0; body size 41 bytes.
#line 1 "ENTRY_10d7cad0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d7cad0(int *param_2)
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


// Reference entry 10d7cb10; body size 41 bytes.
#line 1 "ENTRY_10d7cb10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d7cb10(int *param_2)
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


// Reference entry 10d7cb50; body size 41 bytes.
#line 1 "ENTRY_10d7cb50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d7cb50(int *param_2)
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


// Reference entry 10d7cb90; body size 41 bytes.
#line 1 "ENTRY_10d7cb90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d7cb90(int *param_2)
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


// Reference entry 10d7cbd0; body size 41 bytes.
#line 1 "ENTRY_10d7cbd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d7cbd0(int *param_2)
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


// Reference entry 10d7cc10; body size 41 bytes.
#line 1 "ENTRY_10d7cc10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d7cc10(int *param_2)
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


// Reference entry 10d7cc50; body size 41 bytes.
#line 1 "ENTRY_10d7cc50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d7cc50(int *param_2)
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


// Reference entry 10d82200; body size 49 bytes.
#line 1 "ENTRY_10d82200"

int * __thiscall Recovered_Bulk::m_FUN_10d82200(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
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


// Reference entry 10d82320; body size 38 bytes.
#line 1 "ENTRY_10d82320"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d82320(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d82350; body size 38 bytes.
#line 1 "ENTRY_10d82350"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d82350(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d82380; body size 38 bytes.
#line 1 "ENTRY_10d82380"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d82380(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d823b0; body size 32 bytes.
#line 1 "ENTRY_10d823b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d823b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d806c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d823e0; body size 32 bytes.
#line 1 "ENTRY_10d823e0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d823e0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d80810();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d82410; body size 32 bytes.
#line 1 "ENTRY_10d82410"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d82410(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d80960();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d82440; body size 32 bytes.
#line 1 "ENTRY_10d82440"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d82440(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d80ab0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d82470; body size 32 bytes.
#line 1 "ENTRY_10d82470"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d82470(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d81060();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x34);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d82660; body size 32 bytes.
#line 1 "ENTRY_10d82660"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d82660(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d81360();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d82690; body size 35 bytes.
#line 1 "ENTRY_10d82690"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d82690(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d814e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x160);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d826c0; body size 32 bytes.
#line 1 "ENTRY_10d826c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d826c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d81890();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x5c);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d826f0; body size 45 bytes.
#line 1 "ENTRY_10d826f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d826f0(byte param_2)
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


// Reference entry 10d82730; body size 38 bytes.
#line 1 "ENTRY_10d82730"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d82730(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionRequest);
  thunk_FUN_106845c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d82760; body size 38 bytes.
#line 1 "ENTRY_10d82760"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d82760(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountRolePostRequest);
  thunk_FUN_106845c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d82790; body size 38 bytes.
#line 1 "ENTRY_10d82790"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d82790(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAuthorizeAccountGetRequest);
  thunk_FUN_106845c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d827c0; body size 38 bytes.
#line 1 "ENTRY_10d827c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d827c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAuthorizeRedirectGetRequest);
  thunk_FUN_106845c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d82960; body size 38 bytes.
#line 1 "ENTRY_10d82960"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d82960(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOAuthTokenPostRequest);
  thunk_FUN_106845c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d82990; body size 45 bytes.
#line 1 "ENTRY_10d82990"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d82990(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAccountCreate);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAccountCreate);
  thunk_FUN_10d806c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d829d0; body size 45 bytes.
#line 1 "ENTRY_10d829d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d829d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAccountDeletion);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAccountDeletion);
  thunk_FUN_10d80810();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d82a10; body size 45 bytes.
#line 1 "ENTRY_10d82a10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d82a10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAccountLogin);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAccountLogin);
  thunk_FUN_10d80960();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d82a50; body size 45 bytes.
#line 1 "ENTRY_10d82a50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d82a50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAccountRefreshTokens);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAccountRefreshTokens);
  thunk_FUN_10d80ab0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d83560; body size 23 bytes.
#line 1 "ENTRY_10d83560"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d83560(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x78));
  return (SCStr *)(param_2);
}


// Reference entry 10d83580; body size 25 bytes.
#line 1 "ENTRY_10d83580"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d83580(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x150));
  return (SCStr *)(param_2);
}


// Reference entry 10d835a0; body size 23 bytes.
#line 1 "ENTRY_10d835a0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d835a0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x4c));
  return (SCStr *)(param_2);
}


// Reference entry 10d838d0; body size 23 bytes.
#line 1 "ENTRY_10d838d0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d838d0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x70));
  return (SCStr *)(param_2);
}


// Reference entry 10d838f0; body size 25 bytes.
#line 1 "ENTRY_10d838f0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d838f0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x148));
  return (SCStr *)(param_2);
}


// Reference entry 10d83980; body size 23 bytes.
#line 1 "ENTRY_10d83980"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d83980(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x7c));
  return (SCStr *)(param_2);
}


// Reference entry 10d839a0; body size 25 bytes.
#line 1 "ENTRY_10d839a0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d839a0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x154));
  return (SCStr *)(param_2);
}


// Reference entry 10d839c0; body size 23 bytes.
#line 1 "ENTRY_10d839c0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d839c0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x50));
  return (SCStr *)(param_2);
}


// Reference entry 10d83a40; body size 21 bytes.
#line 1 "ENTRY_10d83a40"

SCStr * __stdcall FUN_10d83a40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d83a60; body size 21 bytes.
#line 1 "ENTRY_10d83a60"

SCStr * __stdcall FUN_10d83a60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d83a80; body size 21 bytes.
#line 1 "ENTRY_10d83a80"

SCStr * __stdcall FUN_10d83a80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d83aa0; body size 21 bytes.
#line 1 "ENTRY_10d83aa0"

SCStr * __stdcall FUN_10d83aa0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d83b10; body size 23 bytes.
#line 1 "ENTRY_10d83b10"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d83b10(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x6c));
  return (SCStr *)(param_2);
}


// Reference entry 10d83b30; body size 25 bytes.
#line 1 "ENTRY_10d83b30"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d83b30(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x130));
  return (SCStr *)(param_2);
}


// Reference entry 10d83b50; body size 23 bytes.
#line 1 "ENTRY_10d83b50"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d83b50(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x48));
  return (SCStr *)(param_2);
}


// Reference entry 10d83b90; body size 23 bytes.
#line 1 "ENTRY_10d83b90"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d83b90(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x60));
  return (SCStr *)(param_2);
}


// Reference entry 10d83bb0; body size 25 bytes.
#line 1 "ENTRY_10d83bb0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d83bb0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x128));
  return (SCStr *)(param_2);
}


// Reference entry 10d87c20; body size 51 bytes.
#line 1 "ENTRY_10d87c20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d87c20(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4bc0(0,"SCSwfObjACInternalListener");
  param_1[6] = (undefined4)(param_2);
  param_1[7] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjSysInternalListener);
  *(undefined1*)(param_1 + 5) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d88060; body size 41 bytes.
#line 1 "ENTRY_10d88060"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d88060(int *param_2)
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


// Reference entry 10d88cc0; body size 45 bytes.
#line 1 "ENTRY_10d88cc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d88cc0(byte param_2)
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


// Reference entry 10d893e0; body size 22 bytes.
#line 1 "ENTRY_10d893e0"

int __fastcall FUN_10d893e0(int param_1)

{
  int iVar1;
  
  if ((*(int **)(param_1 + 0x28) != (int *)((0x0))) &&
     (iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x28) + 0x58))(), 0), iVar1 != 0)) {
    return (int)(iVar1);
  }
  return (int)(1);
}


// Reference entry 10d8ace0; body size 35 bytes.
#line 1 "ENTRY_10d8ace0"

SCStr * __stdcall FUN_10d8ace0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2568,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d8ad10; body size 35 bytes.
#line 1 "ENTRY_10d8ad10"

SCStr * __stdcall FUN_10d8ad10(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x260c,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d8ad40; body size 35 bytes.
#line 1 "ENTRY_10d8ad40"

SCStr * __stdcall FUN_10d8ad40(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x223f,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d8ad70; body size 35 bytes.
#line 1 "ENTRY_10d8ad70"

SCStr * __stdcall FUN_10d8ad70(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x260d,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d8aea0; body size 32 bytes.
#line 1 "ENTRY_10d8aea0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d8aea0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104ed870();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2c);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d8be90; body size 30 bytes.
#line 1 "ENTRY_10d8be90"

void __thiscall Recovered_Bulk::m_FUN_10d8be90(int param_2)
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


// Reference entry 10d8bec0; body size 30 bytes.
#line 1 "ENTRY_10d8bec0"

void __thiscall Recovered_Bulk::m_FUN_10d8bec0(int param_2)
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


// Reference entry 10d8ce00; body size 19 bytes.
#line 1 "ENTRY_10d8ce00"

void FUN_10d8ce00(void)

{
  thunk_FUN_101f4930();
  thunk_FUN_105d3a20();
  return;
}


// Reference entry 10d8d410; body size 32 bytes.
#line 1 "ENTRY_10d8d410"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d8d410(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d8ceb0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d8d4f0; body size 42 bytes.
#line 1 "ENTRY_10d8d4f0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d8d4f0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101f4930();
  thunk_FUN_105d3a20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x54);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d8d530; body size 32 bytes.
#line 1 "ENTRY_10d8d530"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d8d530(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d8ceb0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d8d600; body size 32 bytes.
#line 1 "ENTRY_10d8d600"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d8d600(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d8ceb0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x3c);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d8d630; body size 32 bytes.
#line 1 "ENTRY_10d8d630"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d8d630(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d8d010();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x34);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d8d670; body size 30 bytes.
#line 1 "ENTRY_10d8d670"

void __thiscall Recovered_Bulk::m_FUN_10d8d670(int param_2)
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


// Reference entry 10d8d6a0; body size 30 bytes.
#line 1 "ENTRY_10d8d6a0"

void __thiscall Recovered_Bulk::m_FUN_10d8d6a0(int param_2)
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


// Reference entry 10d8f2b0; body size 28 bytes.
#line 1 "ENTRY_10d8f2b0"

void __fastcall FUN_10d8f2b0(int *param_1)

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


// Reference entry 10d8f2e0; body size 28 bytes.
#line 1 "ENTRY_10d8f2e0"

void __fastcall FUN_10d8f2e0(int *param_1)

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


// Reference entry 10d90800; body size 41 bytes.
#line 1 "ENTRY_10d90800"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d90800(int *param_2)
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


// Reference entry 10d92ec0; body size 35 bytes.
#line 1 "ENTRY_10d92ec0"

void __fastcall FUN_10d92ec0(int param_1)

{
  if (*(char *)(param_1 + 0x1c) != '\0') {
    if ((*(int **)(param_1 + 0x10) != (int *)((0x0))) && (*(int *)(param_1 + 8) != 0)) {
      (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(*(int *)(param_1 + 8));
    }
    *(undefined1*)(param_1 + 0x1c) = (undefined1)(0);
  }
  return;
}


// Reference entry 10d94070; body size 41 bytes.
#line 1 "ENTRY_10d94070"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d94070(int *param_2)
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


// Reference entry 10d940b0; body size 41 bytes.
#line 1 "ENTRY_10d940b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d940b0(int *param_2)
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


// Reference entry 10d940f0; body size 41 bytes.
#line 1 "ENTRY_10d940f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d940f0(int *param_2)
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


// Reference entry 10d947f0; body size 45 bytes.
#line 1 "ENTRY_10d947f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d947f0(byte param_2)
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


// Reference entry 10d97030; body size 35 bytes.
#line 1 "ENTRY_10d97030"

SCStr * __stdcall FUN_10d97030(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2092,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d97060; body size 35 bytes.
#line 1 "ENTRY_10d97060"

SCStr * __stdcall FUN_10d97060(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2525,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d97090; body size 35 bytes.
#line 1 "ENTRY_10d97090"

SCStr * __stdcall FUN_10d97090(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2527,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d970c0; body size 35 bytes.
#line 1 "ENTRY_10d970c0"

SCStr * __stdcall FUN_10d970c0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2fb,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d970f0; body size 35 bytes.
#line 1 "ENTRY_10d970f0"

SCStr * __stdcall FUN_10d970f0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2007,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d97380; body size 41 bytes.
#line 1 "ENTRY_10d97380"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d97380(int *param_2)
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


// Reference entry 10d973c0; body size 41 bytes.
#line 1 "ENTRY_10d973c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d973c0(int *param_2)
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


// Reference entry 10d97510; body size 60 bytes.
#line 1 "ENTRY_10d97510"

void __fastcall FUN_10d97510(int *param_1)

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


// Reference entry 10d97800; body size 32 bytes.
#line 1 "ENTRY_10d97800"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d97800(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d97600();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d9aa40; body size 30 bytes.
#line 1 "ENTRY_10d9aa40"

void __thiscall Recovered_Bulk::m_FUN_10d9aa40(int param_2)
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


// Reference entry 10d9acb0; body size 41 bytes.
#line 1 "ENTRY_10d9acb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9acb0(int *param_2)
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


// Reference entry 10d9ad30; body size 24 bytes.
#line 1 "ENTRY_10d9ad30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9ad30(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d9b8c0; body size 19 bytes.
#line 1 "ENTRY_10d9b8c0"

void __fastcall FUN_10d9b8c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d9bb70; body size 60 bytes.
#line 1 "ENTRY_10d9bb70"

void __fastcall FUN_10d9bb70(int *param_1)

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


// Reference entry 10d9be10; body size 45 bytes.
#line 1 "ENTRY_10d9be10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9be10(byte param_2)
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


// Reference entry 10d9be50; body size 32 bytes.
#line 1 "ENTRY_10d9be50"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d9be50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d9b8e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d9be80; body size 33 bytes.
#line 1 "ENTRY_10d9be80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9be80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d9beb0; body size 38 bytes.
#line 1 "ENTRY_10d9beb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9beb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicIndexUpdateTimeAction);
  thunk_FUN_10d8ceb0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x3c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d9bee0; body size 45 bytes.
#line 1 "ENTRY_10d9bee0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9bee0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpContentDirectoryRefreshShareIndex);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpContentDirectoryRefreshShareIndex);
  thunk_FUN_10d9b8e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d9bf20; body size 45 bytes.
#line 1 "ENTRY_10d9bf20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9bf20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSetViewContributingAsync);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_SCOpSetViewContributingAsync);
  thunk_FUN_111c0ad0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x70);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d9bf60; body size 45 bytes.
#line 1 "ENTRY_10d9bf60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9bf60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCScheduleIndexUpdateToggleAction);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCScheduleIndexUpdateToggleAction);
  thunk_FUN_105d44d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d9bfa0; body size 38 bytes.
#line 1 "ENTRY_10d9bfa0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9bfa0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelectAlbumsSelectAction);
  thunk_FUN_105d3a20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x4c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d9c0b0; body size 45 bytes.
#line 1 "ENTRY_10d9c0b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9c0b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCViewContributingArtistsToggleAction);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCViewContributingArtistsToggleAction);
  thunk_FUN_105d44d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d9c6c0; body size 61 bytes.
#line 1 "ENTRY_10d9c6c0"

void __thiscall Recovered_Bulk::m_FUN_10d9c6c0(int *param_2)
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


// Reference entry 10d9c710; body size 30 bytes.
#line 1 "ENTRY_10d9c710"

void __thiscall Recovered_Bulk::m_FUN_10d9c710(int param_2)
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


// Reference entry 10d9c750; body size 28 bytes.
#line 1 "ENTRY_10d9c750"

void __fastcall FUN_10d9c750(int *param_1)

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


// Reference entry 10d9c780; body size 43 bytes.
#line 1 "ENTRY_10d9c780"

int __thiscall Recovered_Bulk::m_FUN_10d9c780(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  if (param_2 == 0) {
    *(undefined2*)(param_1 + 0x5c) = (undefined2)(0);
    uVar1 = (uint)((uint)(*(char *)(param_1 + 0x6c) == '\0'));
    thunk_FUN_1109f7f0(uVar1);
    thunk_FUN_110a3e90(uVar1);
  }
  return (int)(param_2);
}


// Reference entry 10d9c930; body size 35 bytes.
#line 1 "ENTRY_10d9c930"

SCStr * __stdcall FUN_10d9c930(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x201e,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d9c960; body size 35 bytes.
#line 1 "ENTRY_10d9c960"

SCStr * __stdcall FUN_10d9c960(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2020,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d9c990; body size 35 bytes.
#line 1 "ENTRY_10d9c990"

SCStr * __stdcall FUN_10d9c990(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x201d,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d9cb10; body size 21 bytes.
#line 1 "ENTRY_10d9cb10"

SCStr * __stdcall FUN_10d9cb10(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d9e230; body size 41 bytes.
#line 1 "ENTRY_10d9e230"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d9e230(int *param_2)
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


// Reference entry 10d9e560; body size 21 bytes.
#line 1 "ENTRY_10d9e560"

void __thiscall Recovered_Bulk::m_FUN_10d9e560(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10d9e5d0; body size 22 bytes.
#line 1 "ENTRY_10d9e5d0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d9e5d0(SCStr *param_2)
{
  int *param_1 = (int *)this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10d9e5f0; body size 63 bytes.
#line 1 "ENTRY_10d9e5f0"

void __thiscall Recovered_Bulk::m_FUN_10d9e5f0(int *param_2)
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
  return;
}


// Reference entry 10d9e6d0; body size 38 bytes.
#line 1 "ENTRY_10d9e6d0"

void __thiscall Recovered_Bulk::m_FUN_10d9e6d0(SCStr *param_2)
{
  int *param_1 = (int *)this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(*param_1 + 8));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10d9ec60; body size 33 bytes.
#line 1 "ENTRY_10d9ec60"

void __thiscall Recovered_Bulk::m_FUN_10d9ec60(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10d9ec90(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10d9ed50; body size 49 bytes.
#line 1 "ENTRY_10d9ed50"

int __thiscall Recovered_Bulk::m_FUN_10d9ed50(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10d9efd0((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || ((int)(*param_2) < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10d9f530; body size 48 bytes.
#line 1 "ENTRY_10d9f530"

undefined4 * __fastcall FUN_10d9f530(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10d9f950; body size 19 bytes.
#line 1 "ENTRY_10d9f950"

void __fastcall FUN_10d9f950(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10d9f970; body size 28 bytes.
#line 1 "ENTRY_10d9f970"

void __fastcall FUN_10d9f970(int *param_1)

{
  thunk_FUN_10d9ec90(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10d9fa30; body size 19 bytes.
#line 1 "ENTRY_10d9fa30"

void __fastcall FUN_10d9fa30(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10d9fa50; body size 28 bytes.
#line 1 "ENTRY_10d9fa50"

void __fastcall FUN_10d9fa50(int *param_1)

{
  thunk_FUN_10d9ec90(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10da00b0; body size 25 bytes.
#line 1 "ENTRY_10da00b0"

void __fastcall FUN_10da00b0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10da0840; body size 21 bytes.
#line 1 "ENTRY_10da0840"

SCStr * __stdcall FUN_10da0840(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("MenuDismissSetting");
  return (SCStr *)(param_1);
}


// Reference entry 10da0860; body size 21 bytes.
#line 1 "ENTRY_10da0860"

SCStr * __stdcall FUN_10da0860(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10da1830; body size 31 bytes.
#line 1 "ENTRY_10da1830"

undefined4 FUN_10da1830(void)

{
  SCLibrary *pSVar1;
  int iVar2;
  
  pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  iVar2 = (int)((**(code **)(*(int *)pSVar1 + 0x124))(), 0);
  if ((iVar2 != 1) && (iVar2 != 3)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10da1e80; body size 21 bytes.
#line 1 "ENTRY_10da1e80"

bool FUN_10da1e80(void)

{
  SCLibrary *pSVar1;
  int iVar2;
  
  pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  iVar2 = (int)((**(code **)(*(int *)pSVar1 + 0xf4))(), 0);
  return (bool)(iVar2 == 0);
}


// Reference entry 10da1ff0; body size 41 bytes.
#line 1 "ENTRY_10da1ff0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10da1ff0(int *param_2)
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


// Reference entry 10da2550; body size 45 bytes.
#line 1 "ENTRY_10da2550"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10da2550(byte param_2)
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


// Reference entry 10da2590; body size 33 bytes.
#line 1 "ENTRY_10da2590"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10da2590(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjSPListener);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10da4700; body size 21 bytes.
#line 1 "ENTRY_10da4700"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10da4700(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (undefined4 *)(param_1);
}


// Reference entry 10da4720; body size 27 bytes.
#line 1 "ENTRY_10da4720"

undefined4 * __fastcall FUN_10da4720(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10da4750; body size 41 bytes.
#line 1 "ENTRY_10da4750"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10da4750(int *param_2)
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


// Reference entry 10da4790; body size 41 bytes.
#line 1 "ENTRY_10da4790"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10da4790(int *param_2)
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


// Reference entry 10da47d0; body size 24 bytes.
#line 1 "ENTRY_10da47d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10da47d0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10da4f20; body size 19 bytes.
#line 1 "ENTRY_10da4f20"

void __fastcall FUN_10da4f20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10da4f40; body size 19 bytes.
#line 1 "ENTRY_10da4f40"

void __fastcall FUN_10da4f40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10da5040; body size 33 bytes.
#line 1 "ENTRY_10da5040"

void __fastcall FUN_10da5040(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10da50a0; body size 33 bytes.
#line 1 "ENTRY_10da50a0"

void __fastcall FUN_10da50a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10da5350; body size 18 bytes.
#line 1 "ENTRY_10da5350"

void __fastcall FUN_10da5350(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 10da5790; body size 45 bytes.
#line 1 "ENTRY_10da5790"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10da5790(byte param_2)
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


// Reference entry 10da57d0; body size 45 bytes.
#line 1 "ENTRY_10da57d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10da57d0(byte param_2)
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


// Reference entry 10da5810; body size 60 bytes.
#line 1 "ENTRY_10da5810"

int __thiscall Recovered_Bulk::m_FUN_10da5810(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (int)(param_1);
}


// Reference entry 10da5860; body size 45 bytes.
#line 1 "ENTRY_10da5860"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10da5860(byte param_2)
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


// Reference entry 10da58a0; body size 58 bytes.
#line 1 "ENTRY_10da58a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10da58a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACSetFormatAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetFormatAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetFormatAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10da58f0; body size 58 bytes.
#line 1 "ENTRY_10da58f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10da58f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeNowAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeNowAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeNowAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10da5940; body size 58 bytes.
#line 1 "ENTRY_10da5940"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10da5940(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeServerAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeServerAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeServerAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10da5990; body size 58 bytes.
#line 1 "ENTRY_10da5990"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10da5990(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeZoneAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeZoneAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetTimeZoneAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10da5ae0; body size 33 bytes.
#line 1 "ENTRY_10da5ae0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10da5ae0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10da5b10; body size 33 bytes.
#line 1 "ENTRY_10da5b10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10da5b10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10da5bf0; body size 58 bytes.
#line 1 "ENTRY_10da5bf0"

void __thiscall Recovered_Bulk::m_FUN_10da5bf0(char param_2)
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


// Reference entry 10da5c40; body size 39 bytes.
#line 1 "ENTRY_10da5c40"

void __thiscall Recovered_Bulk::m_FUN_10da5c40(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 10da5d90; body size 33 bytes.
#line 1 "ENTRY_10da5d90"

void __fastcall FUN_10da5d90(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10da6830; body size 22 bytes.
#line 1 "ENTRY_10da6830"

void __fastcall FUN_10da6830(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4*)(*(int *)(param_1 + 0x18) + 0x1c) = (undefined4)(0);
  }
  return;
}


// Reference entry 10da6880; body size 35 bytes.
#line 1 "ENTRY_10da6880"

void __thiscall Recovered_Bulk::m_FUN_10da6880(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0x3c), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 10da6b80; body size 20 bytes.
#line 1 "ENTRY_10da6b80"

uint __fastcall FUN_10da6b80(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = (uint)(thunk_FUN_11111e40(), 0);
    return (uint)(uVar1 & 0xff);
  }
  return (uint)(0xffffffff);
}


// Reference entry 10da6c80; body size 20 bytes.
#line 1 "ENTRY_10da6c80"

undefined4 __thiscall Recovered_Bulk::m_FUN_10da6c80(undefined4 param_2)
{
  int *param_1 = (int *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0);
  (**(code **)(*param_1 + 0x4c))(param_2,0,1);
  return (undefined4)(uVar1);
}


// Reference entry 10da7060; body size 20 bytes.
#line 1 "ENTRY_10da7060"

uint __fastcall FUN_10da7060(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = (uint)(thunk_FUN_111135f0(), 0);
    return (uint)(uVar1 & 0xff);
  }
  return (uint)(0xffffffff);
}


// Reference entry 10da7080; body size 19 bytes.
#line 1 "ENTRY_10da7080"

undefined4 __fastcall FUN_10da7080(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return (undefined4)(0);
  }
  uVar1 = (undefined4)(FUN_111138d0(), 0);
  return (undefined4)(uVar1);
}


// Reference entry 10da71e0; body size 40 bytes.
#line 1 "ENTRY_10da71e0"

undefined4 __fastcall FUN_10da71e0(int param_1)

{
  undefined1 local_5;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return (undefined4)(0xffffffff);
  }
  thunk_FUN_11113bb0(&local_4,&local_5);
  return (undefined4)(local_4);
}


// Reference entry 10da73d0; body size 21 bytes.
#line 1 "ENTRY_10da73d0"

undefined4 __fastcall FUN_10da73d0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(*param_1 + 0x1c))(), 0);
  if ((iVar1 != 2) && (iVar1 != 4)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 10da73f0; body size 34 bytes.
#line 1 "ENTRY_10da73f0"

void __fastcall FUN_10da73f0(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -8);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIDateTimeManager:onDateFormatChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10da7430; body size 34 bytes.
#line 1 "ENTRY_10da7430"

void __fastcall FUN_10da7430(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -8);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIDateTimeManager:onTimeFormatChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10da7460; body size 34 bytes.
#line 1 "ENTRY_10da7460"

void __fastcall FUN_10da7460(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -8);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIDateTimeManager:onTimeGenerationChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10da7490; body size 36 bytes.
#line 1 "ENTRY_10da7490"

void __fastcall FUN_10da7490(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -8);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIDateTimeManager:onTimeServerChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10da74c0; body size 34 bytes.
#line 1 "ENTRY_10da74c0"

void __fastcall FUN_10da74c0(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -8);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIDateTimeManager:onTimeStatusChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10da74f0; body size 34 bytes.
#line 1 "ENTRY_10da74f0"

void __fastcall FUN_10da74f0(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -8);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIDateTimeManager:onTimeZoneChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10da7930; body size 38 bytes.
#line 1 "ENTRY_10da7930"

undefined4 __thiscall Recovered_Bulk::m_FUN_10da7930(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("DesiredTimeServer",0), 0);
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 10da7e10; body size 43 bytes.
#line 1 "ENTRY_10da7e10"

void __stdcall FUN_10da7e10(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930(param_1);
    thunk_FUN_112af4e0("SCDateTimeManager",3,"Remove Event Sink %p",param_1);
  }
  return;
}


// Reference entry 10da8a80; body size 21 bytes.
#line 1 "ENTRY_10da8a80"

SCStr * __stdcall FUN_10da8a80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCDeleteVoiceAccountAction");
  return (SCStr *)(param_1);
}


// Reference entry 10da8ca0; body size 21 bytes.
#line 1 "ENTRY_10da8ca0"

SCStr * __stdcall FUN_10da8ca0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10da8ea0; body size 38 bytes.
#line 1 "ENTRY_10da8ea0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10da8ea0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentUrlGetRequest);
  thunk_FUN_106845c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10da9750; body size 40 bytes.
#line 1 "ENTRY_10da9750"

undefined4 __fastcall FUN_10da9750(int param_1)

{
  switch(*(undefined1 *)(param_1 + 300)) {
  case 0:
  case 1:
    return (undefined4)(3);
  case 2:
    return (undefined4)(1);
  case 3:
  case 4:
    return (undefined4)(2);
  default:
    return (undefined4)(0);
  }
}


// Reference entry 10daa070; body size 30 bytes.
#line 1 "ENTRY_10daa070"

void __thiscall Recovered_Bulk::m_FUN_10daa070(int param_2)
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


// Reference entry 10daa110; body size 41 bytes.
#line 1 "ENTRY_10daa110"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10daa110(int *param_2)
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


// Reference entry 10daa7a0; body size 38 bytes.
#line 1 "ENTRY_10daa7a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10daa7a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSearchUrlGetRequest);
  thunk_FUN_106845c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10daa990; body size 30 bytes.
#line 1 "ENTRY_10daa990"

void __thiscall Recovered_Bulk::m_FUN_10daa990(int param_2)
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


// Reference entry 10dab3a0; body size 28 bytes.
#line 1 "ENTRY_10dab3a0"

void __fastcall FUN_10dab3a0(int *param_1)

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


// Reference entry 10dae5c0; body size 35 bytes.
#line 1 "ENTRY_10dae5c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10dae5c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10503c60();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xb4);
  }
  return (undefined4)(param_1);
}


// Reference entry 10db1e60; body size 21 bytes.
#line 1 "ENTRY_10db1e60"

SCStr * __stdcall FUN_10db1e60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("InfoViewWrapper");
  return (SCStr *)(param_1);
}


// Reference entry 10db1e80; body size 21 bytes.
#line 1 "ENTRY_10db1e80"

SCStr * __stdcall FUN_10db1e80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("InfoViewWrapper");
  return (SCStr *)(param_1);
}


// Reference entry 10db1ea0; body size 21 bytes.
#line 1 "ENTRY_10db1ea0"

SCStr * __stdcall FUN_10db1ea0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryPush");
  return (SCStr *)(param_1);
}


// Reference entry 10db1ec0; body size 21 bytes.
#line 1 "ENTRY_10db1ec0"

SCStr * __stdcall FUN_10db1ec0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryPush");
  return (SCStr *)(param_1);
}


// Reference entry 10db2230; body size 40 bytes.
#line 1 "ENTRY_10db2230"

int * __thiscall Recovered_Bulk::m_FUN_10db2230(int *param_2)
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


// Reference entry 10db2270; body size 62 bytes.
#line 1 "ENTRY_10db2270"

void __fastcall FUN_10db2270(int *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  
  bVar1 = (byte)((**(code **)(*param_1 + 4))(), 0);
  uVar3 = (uint)((1 << (bVar1 & 0x1f)) - 1);
  param_1[1] = (int)(uVar3);
  if (((char *)param_1[2] == (char *)(((0x0)))) || (*(char *)param_1[2] == '\0')) {
    param_1[1] = (int)(uVar3 & 0xfffffff9);
  }
  else {
    cVar2 = (char)(thunk_FUN_1050e5b0(), 0);
    if (cVar2 != '\0') {
      param_1[1] = (int)(param_1[1] & 0xfffffffb);
      return;
    }
  }
  return;
}


// Reference entry 10db22c0; body size 23 bytes.
#line 1 "ENTRY_10db22c0"

void __fastcall FUN_10db22c0(int *param_1)

{
  byte bVar1;
  
  bVar1 = (byte)((**(code **)(*param_1 + 4))(), 0);
  param_1[1] = (int)((1 << (bVar1 & 0x1f)) + -1);
  return;
}


// Reference entry 10db2460; body size 23 bytes.
#line 1 "ENTRY_10db2460"

void __fastcall FUN_10db2460(int *param_1)

{
  byte bVar1;
  
  bVar1 = (byte)((**(code **)(*param_1 + 4))(), 0);
  param_1[1] = (int)((1 << (bVar1 & 0x1f)) + -1);
  return;
}


// Reference entry 10db3250; body size 19 bytes.
#line 1 "ENTRY_10db3250"

void __fastcall FUN_10db3250(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10db3270; body size 19 bytes.
#line 1 "ENTRY_10db3270"

void __fastcall FUN_10db3270(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10db3760; body size 25 bytes.
#line 1 "ENTRY_10db3760"

void __fastcall FUN_10db3760(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10db3780; body size 25 bytes.
#line 1 "ENTRY_10db3780"

void __fastcall FUN_10db3780(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10db4920; body size 23 bytes.
#line 1 "ENTRY_10db4920"

SCStr * __thiscall Recovered_Bulk::m_FUN_10db4920(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x1f8));
  return (SCStr *)(param_2);
}


// Reference entry 10db66e0; body size 41 bytes.
#line 1 "ENTRY_10db66e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10db66e0(int *param_2)
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


// Reference entry 10db7ff0; body size 17 bytes.
#line 1 "ENTRY_10db7ff0"

void __fastcall FUN_10db7ff0(undefined4 *param_1)

{
  thunk_FUN_10db5760(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 10db9020; body size 45 bytes.
#line 1 "ENTRY_10db9020"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10db9020(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoviewViewBuilder_HeaderMapping);
  free((void *)param_1[3]);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10db9060; body size 54 bytes.
#line 1 "ENTRY_10db9060"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10db9060(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoviewViewBuilder_MenuItemMapping);
  free((void *)param_1[4]);
  free((void *)param_1[2]);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10db90b0; body size 32 bytes.
#line 1 "ENTRY_10db90b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10db90b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10db8100();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  return (undefined4)(param_1);
}


// Reference entry 10db90e0; body size 33 bytes.
#line 1 "ENTRY_10db90e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10db90e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoViewAIOOpGeneratorCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10db92a0; body size 41 bytes.
#line 1 "ENTRY_10db92a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10db92a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoviewMenuInfo);
  thunk_FUN_10db8010();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10db9690; body size 35 bytes.
#line 1 "ENTRY_10db9690"

undefined4 __thiscall Recovered_Bulk::m_FUN_10db9690(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10db8940();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe4);
  }
  return (undefined4)(param_1);
}


// Reference entry 10db9880; body size 32 bytes.
#line 1 "ENTRY_10db9880"

undefined4 __thiscall Recovered_Bulk::m_FUN_10db9880(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10db8c10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x44);
  }
  return (undefined4)(param_1);
}


// Reference entry 10db99c0; body size 20 bytes.
#line 1 "ENTRY_10db99c0"

void __thiscall Recovered_Bulk::m_FUN_10db99c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10db5760(param_2,param_3,param_1);
  return;
}


// Reference entry 10dbb680; body size 45 bytes.
#line 1 "ENTRY_10dbb680"

void __thiscall Recovered_Bulk::m_FUN_10dbb680(int param_2)
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


// Reference entry 10dbd9b0; body size 59 bytes.
#line 1 "ENTRY_10dbd9b0"

void __stdcall FUN_10dbd9b0(int param_1,int param_2)

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


// Reference entry 10dc3e30; body size 61 bytes.
#line 1 "ENTRY_10dc3e30"

undefined4 __fastcall FUN_10dc3e30(int param_1)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = (undefined4)(0);
  iVar1 = (int)(FUN_10dc6500(param_1 + 0x2c0), 0);
  if (iVar1 != 0) {
    thunk_FUN_110dde00(&local_4,param_1 + 4,param_1 + 0x29c);
  }
  return (undefined4)(local_4);
}


// Reference entry 10dc5230; body size 21 bytes.
#line 1 "ENTRY_10dc5230"

SCStr * __stdcall FUN_10dc5230(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("InfoViewWrapper");
  return (SCStr *)(param_1);
}


// Reference entry 10dc5370; body size 21 bytes.
#line 1 "ENTRY_10dc5370"

SCStr * __stdcall FUN_10dc5370(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("InfoViewWrapper");
  return (SCStr *)(param_1);
}


// Reference entry 10dc5390; body size 21 bytes.
#line 1 "ENTRY_10dc5390"

SCStr * __stdcall FUN_10dc5390(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("InfoViewWrapper");
  return (SCStr *)(param_1);
}


// Reference entry 10dc5690; body size 21 bytes.
#line 1 "ENTRY_10dc5690"

SCStr * __stdcall FUN_10dc5690(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryPush");
  return (SCStr *)(param_1);
}


// Reference entry 10dc56b0; body size 21 bytes.
#line 1 "ENTRY_10dc56b0"

SCStr * __stdcall FUN_10dc56b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10dc56d0; body size 21 bytes.
#line 1 "ENTRY_10dc56d0"

SCStr * __stdcall FUN_10dc56d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10dc56f0; body size 21 bytes.
#line 1 "ENTRY_10dc56f0"

SCStr * __stdcall FUN_10dc56f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10dc5c20; body size 20 bytes.
#line 1 "ENTRY_10dc5c20"

SCStr * __thiscall Recovered_Bulk::m_FUN_10dc5c20(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x10));
  return (SCStr *)(param_2);
}


// Reference entry 10dc5c40; body size 21 bytes.
#line 1 "ENTRY_10dc5c40"

SCStr * __stdcall FUN_10dc5c40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10dc5c60; body size 21 bytes.
#line 1 "ENTRY_10dc5c60"

SCStr * __stdcall FUN_10dc5c60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10dc5d40; body size 25 bytes.
#line 1 "ENTRY_10dc5d40"

int * __thiscall Recovered_Bulk::m_FUN_10dc5d40(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10dc7740; body size 25 bytes.
#line 1 "ENTRY_10dc7740"

bool __fastcall FUN_10dc7740(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(*(char *)(*(int *)(param_1 + 0x168) + 0xd9));
  *(undefined1*)(*(int *)(param_1 + 0x168) + 0xd9) = (undefined1)(1);
  return (bool)(cVar1 == '\0');
}


// Reference entry 10dc7950; body size 60 bytes.
#line 1 "ENTRY_10dc7950"

void __fastcall FUN_10dc7950(int param_1)

{
  *(undefined4*)(param_1 + 0x11c) = (undefined4)(0);
  *(undefined1*)(param_1 + 0x120) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x5f8) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x65b) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x6be) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x721) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x784) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x7e7) = (undefined1)(0);
  return;
}


// Reference entry 10dc7a70; body size 18 bytes.
#line 1 "ENTRY_10dc7a70"

void __thiscall Recovered_Bulk::m_FUN_10dc7a70(int param_2)
{
  int *param_1 = (int *)this;
  if ((int)(param_2) != *param_1) {
    *param_1 = (int)(param_2);
    thunk_FUN_111e9ad0();
  }
  return;
}


// Reference entry 10dcae90; body size 35 bytes.
#line 1 "ENTRY_10dcae90"

undefined4 __thiscall Recovered_Bulk::m_FUN_10dcae90(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10504170();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xb4);
  }
  return (undefined4)(param_1);
}


// Reference entry 10dcaec0; body size 35 bytes.
#line 1 "ENTRY_10dcaec0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10dcaec0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10dca8f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xb4);
  }
  return (undefined4)(param_1);
}


// Reference entry 10dcb000; body size 50 bytes.
#line 1 "ENTRY_10dcb000"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10dcb000(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xac);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10dcb040; body size 50 bytes.
#line 1 "ENTRY_10dcb040"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10dcb040(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xac);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10dcd630; body size 21 bytes.
#line 1 "ENTRY_10dcd630"

SCStr * __stdcall FUN_10dcd630(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("InfoViewWrapper");
  return (SCStr *)(param_1);
}


// Reference entry 10dcd650; body size 21 bytes.
#line 1 "ENTRY_10dcd650"

SCStr * __stdcall FUN_10dcd650(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("InfoViewWrapper");
  return (SCStr *)(param_1);
}


// Reference entry 10dcd670; body size 21 bytes.
#line 1 "ENTRY_10dcd670"

SCStr * __stdcall FUN_10dcd670(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10dcd690; body size 21 bytes.
#line 1 "ENTRY_10dcd690"

SCStr * __stdcall FUN_10dcd690(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10dcd6c0; body size 23 bytes.
#line 1 "ENTRY_10dcd6c0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10dcd6c0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x138));
  return (SCStr *)(param_2);
}


// Reference entry 10dcd7f0; body size 21 bytes.
#line 1 "ENTRY_10dcd7f0"

SCStr * __stdcall FUN_10dcd7f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10dcd810; body size 21 bytes.
#line 1 "ENTRY_10dcd810"

SCStr * __stdcall FUN_10dcd810(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10dcdda0; body size 23 bytes.
#line 1 "ENTRY_10dcdda0"

void __fastcall FUN_10dcdda0(int *param_1)

{
  byte bVar1;
  
  bVar1 = (byte)((**(code **)(*param_1 + 4))(), 0);
  param_1[1] = (int)((1 << (bVar1 & 0x1f)) + -1);
  return;
}


// Reference entry 10dce130; body size 19 bytes.
#line 1 "ENTRY_10dce130"

void __fastcall FUN_10dce130(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10dce3c0; body size 45 bytes.
#line 1 "ENTRY_10dce3c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10dce3c0(byte param_2)
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


// Reference entry 10dce400; body size 33 bytes.
#line 1 "ENTRY_10dce400"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10dce400(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10dce8f0; body size 20 bytes.
#line 1 "ENTRY_10dce8f0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10dce8f0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x2c));
  return (SCStr *)(param_2);
}


// Reference entry 10dced30; body size 20 bytes.
#line 1 "ENTRY_10dced30"

SCStr * __thiscall Recovered_Bulk::m_FUN_10dced30(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10dceed0; body size 20 bytes.
#line 1 "ENTRY_10dceed0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10dceed0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 10dceef0; body size 20 bytes.
#line 1 "ENTRY_10dceef0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10dceef0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 10dcef10; body size 20 bytes.
#line 1 "ENTRY_10dcef10"

SCStr * __thiscall Recovered_Bulk::m_FUN_10dcef10(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x10));
  return (SCStr *)(param_2);
}


// Reference entry 10dcf120; body size 36 bytes.
#line 1 "ENTRY_10dcf120"

void __thiscall Recovered_Bulk::m_FUN_10dcf120(SCStr *param_2)
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


// Reference entry 10dcf260; body size 36 bytes.
#line 1 "ENTRY_10dcf260"

void __thiscall Recovered_Bulk::m_FUN_10dcf260(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x18));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10dcf290; body size 36 bytes.
#line 1 "ENTRY_10dcf290"

void __thiscall Recovered_Bulk::m_FUN_10dcf290(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x14));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10dcf2c0; body size 36 bytes.
#line 1 "ENTRY_10dcf2c0"

void __thiscall Recovered_Bulk::m_FUN_10dcf2c0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x10));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10dcfac0; body size 21 bytes.
#line 1 "ENTRY_10dcfac0"

SCStr * __stdcall FUN_10dcfac0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("DisplayCustomControl.ShareMusic");
  return (SCStr *)(param_1);
}


// Reference entry 10dcfae0; body size 21 bytes.
#line 1 "ENTRY_10dcfae0"

SCStr * __stdcall FUN_10dcfae0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10dcfb00; body size 20 bytes.
#line 1 "ENTRY_10dcfb00"

SCStr * __thiscall Recovered_Bulk::m_FUN_10dcfb00(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10dd0290; body size 41 bytes.
#line 1 "ENTRY_10dd0290"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd0290(int *param_2)
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


// Reference entry 10dd02f0; body size 24 bytes.
#line 1 "ENTRY_10dd02f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd02f0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10dd0460; body size 62 bytes.
#line 1 "ENTRY_10dd0460"

undefined4 * __fastcall FUN_10dd0460(undefined4 *param_1)

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


// Reference entry 10dd1150; body size 19 bytes.
#line 1 "ENTRY_10dd1150"

void __fastcall FUN_10dd1150(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10dd1950; body size 32 bytes.
#line 1 "ENTRY_10dd1950"

undefined4 __thiscall Recovered_Bulk::m_FUN_10dd1950(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10dd10c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4)(param_1);
}


// Reference entry 10dd1980; body size 45 bytes.
#line 1 "ENTRY_10dd1980"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd1980(byte param_2)
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


// Reference entry 10dd1a60; body size 33 bytes.
#line 1 "ENTRY_10dd1a60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10dd1a60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10dd1a90; body size 35 bytes.
#line 1 "ENTRY_10dd1a90"

undefined4 __thiscall Recovered_Bulk::m_FUN_10dd1a90(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10dd1440();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd0);
  }
  return (undefined4)(param_1);
}


// Reference entry 10dd2090; body size 61 bytes.
#line 1 "ENTRY_10dd2090"

void __thiscall Recovered_Bulk::m_FUN_10dd2090(int *param_2)
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


// Reference entry 10dd2230; body size 50 bytes.
#line 1 "ENTRY_10dd2230"

void __thiscall Recovered_Bulk::m_FUN_10dd2230(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 0x10)) {
    uVar2 = (undefined4)(param_2[1]);
    *puVar1 = (undefined4)(*param_2);
    puVar1[1] = (undefined4)(uVar2);
    *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + 8);
    return;
  }
  thunk_FUN_10dcfdb0(puVar1,param_2);
  return;
}


// Reference entry 10dd2280; body size 43 bytes.
#line 1 "ENTRY_10dd2280"

int __fastcall FUN_10dd2280(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1);
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 2 & *(int *)(param_1 + 8) - 1U) * 4) + (uVar1 & 3) * 4);
}


// Reference entry 10dd2650; body size 43 bytes.
#line 1 "ENTRY_10dd2650"

void __fastcall FUN_10dd2650(undefined4 *param_1)

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


// Reference entry 10dd2780; body size 55 bytes.
#line 1 "ENTRY_10dd2780"

SCStr * __thiscall Recovered_Bulk::m_FUN_10dd2780(SCStr *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  cVar1 = (char)((**(code **)(*param_1 + 100))(), 0);
  if (cVar1 == '\0') {
    uVar3 = (undefined4)(0x2091);
  }
  else {
    uVar3 = (undefined4)(0x209e);
  }
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(uVar3,&DAT_11882ff0), 0);
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10dd2b90; body size 23 bytes.
#line 1 "ENTRY_10dd2b90"

undefined4 __thiscall Recovered_Bulk::m_FUN_10dd2b90(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 8) + 0x44))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10dd2fa0; body size 21 bytes.
#line 1 "ENTRY_10dd2fa0"

SCStr * __stdcall FUN_10dd2fa0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("UnknownWizardType");
  return (SCStr *)(param_1);
}


// Reference entry 10dd3040; body size 22 bytes.
#line 1 "ENTRY_10dd3040"

undefined4 __stdcall FUN_10dd3040(unsigned int recovered_unused_stack_0)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_102f5770(), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
                    
                    
    uVar2 = (undefined4)((**(code **)*puVar1)(), 0);
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 10dd44c0; body size 41 bytes.
#line 1 "ENTRY_10dd44c0"

void __fastcall FUN_10dd44c0(int param_1)

{
  if (*(int *)(param_1 + 0xa8) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0xa8));
    *(undefined4*)(param_1 + 0xa8) = (undefined4)(0);
    *(undefined1*)(param_1 + 0xad) = (undefined1)(0);
  }
  return;
}


// Reference entry 10dd5c80; body size 52 bytes.
#line 1 "ENTRY_10dd5c80"

void __thiscall Recovered_Bulk::m_FUN_10dd5c80(uint param_2)
{
  int param_1 = (int )this;
  void *_Src;
  void *_Dst;
  
  if (param_2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3)) {
    _Dst = (char *)((char *)(*(int *)(param_1 + 8) + param_2 * 8));
    _Src = (char *)((char *)((int)_Dst + 8));
    memmove(_Dst,_Src,*(int *)(param_1 + 0xc) - (int)_Src);
    *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + -8);
  }
  return;
}


// Reference entry 10dd5d50; body size 39 bytes.
#line 1 "ENTRY_10dd5d50"

void __thiscall Recovered_Bulk::m_FUN_10dd5d50(int param_2, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  char cVar1;
  
  if (param_2 != -1) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 4) + 0x58))(), 0);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0xa8))();
    }
  }
  return;
}


// Reference entry 10dd5e60; body size 43 bytes.
#line 1 "ENTRY_10dd5e60"

int __fastcall FUN_10dd5e60(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1);
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 2 & *(int *)(param_1 + 8) - 1U) * 4) + (uVar1 & 3) * 4);
}


// Reference entry 10dd5ea0; body size 43 bytes.
#line 1 "ENTRY_10dd5ea0"

int __fastcall FUN_10dd5ea0(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1);
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 2 & *(int *)(param_1 + 8) - 1U) * 4) + (uVar1 & 3) * 4);
}


// Reference entry 10dd6680; body size 33 bytes.
#line 1 "ENTRY_10dd6680"

void __thiscall Recovered_Bulk::m_FUN_10dd6680(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10dd66e0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10dd66b0; body size 33 bytes.
#line 1 "ENTRY_10dd66b0"

void __thiscall Recovered_Bulk::m_FUN_10dd66b0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10dd6740(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10dd67a0; body size 49 bytes.
#line 1 "ENTRY_10dd67a0"

int __thiscall Recovered_Bulk::m_FUN_10dd67a0(uint *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10dd6820((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || ((uint)(*param_2) < *(uint *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10dd67e0; body size 49 bytes.
#line 1 "ENTRY_10dd67e0"

int __thiscall Recovered_Bulk::m_FUN_10dd67e0(uint *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10dd6880((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || ((uint)(*param_2) < *(uint *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10dd7220; body size 48 bytes.
#line 1 "ENTRY_10dd7220"

undefined4 * __fastcall FUN_10dd7220(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10dd7260; body size 48 bytes.
#line 1 "ENTRY_10dd7260"

undefined4 * __fastcall FUN_10dd7260(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10dd7ec0; body size 19 bytes.
#line 1 "ENTRY_10dd7ec0"

void __fastcall FUN_10dd7ec0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x20);
  }
  return;
}


// Reference entry 10dd7ee0; body size 19 bytes.
#line 1 "ENTRY_10dd7ee0"

void __fastcall FUN_10dd7ee0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x20);
  }
  return;
}


// Reference entry 10dd7f00; body size 28 bytes.
#line 1 "ENTRY_10dd7f00"

void __fastcall FUN_10dd7f00(int *param_1)

{
  thunk_FUN_10dd66e0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10dd7f30; body size 28 bytes.
#line 1 "ENTRY_10dd7f30"

void __fastcall FUN_10dd7f30(int *param_1)

{
  thunk_FUN_10dd6740(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10dd7f60; body size 38 bytes.
#line 1 "ENTRY_10dd7f60"

void __fastcall FUN_10dd7f60(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    ((pair<> *)(0))->m_op_dtor();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x20);
  }
  return;
}


// Reference entry 10dd7f90; body size 38 bytes.
#line 1 "ENTRY_10dd7f90"

void __fastcall FUN_10dd7f90(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_101a33f0();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x20);
  }
  return;
}


// Reference entry 10dd8000; body size 28 bytes.
#line 1 "ENTRY_10dd8000"

void __fastcall FUN_10dd8000(int *param_1)

{
  thunk_FUN_10dd66e0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10dd8030; body size 28 bytes.
#line 1 "ENTRY_10dd8030"

void __fastcall FUN_10dd8030(int *param_1)

{
  thunk_FUN_10dd6740(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10dd8a50; body size 32 bytes.
#line 1 "ENTRY_10dd8a50"

undefined4 __thiscall Recovered_Bulk::m_FUN_10dd8a50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  ((pair<> *)(0))->m_op_dtor();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4)(param_1);
}


// Reference entry 10dd8a80; body size 35 bytes.
#line 1 "ENTRY_10dd8a80"

undefined4 __thiscall Recovered_Bulk::m_FUN_10dd8a80(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101a33f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4)(param_1);
}


// Reference entry 10dd8f40; body size 25 bytes.
#line 1 "ENTRY_10dd8f40"

void __fastcall FUN_10dd8f40(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10dd8f60; body size 25 bytes.
#line 1 "ENTRY_10dd8f60"

void __fastcall FUN_10dd8f60(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10dd9be0; body size 37 bytes.
#line 1 "ENTRY_10dd9be0"

void __stdcall FUN_10dd9be0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5)

{
  thunk_FUN_112af4e0("SCAsyncBrowseDataSource[RadioDatasource]",1, "browseFailed! UDN: [%s] ContainerID: [%s] res: [%d]",param_1,param_2,param_5);
  return;
}


// Reference entry 10dd9c10; body size 53 bytes.
#line 1 "ENTRY_10dd9c10"

void __thiscall Recovered_Bulk::m_FUN_10dd9c10(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined2 param_6)
{
  int param_1 = (int )this;
  thunk_FUN_112af4e0("SCPopulateMusicServiceContentAction",1, "browseFailed! UDN: [%s] ContainerID: [%s] res: [%d]",param_2,param_3,param_6);
  (**(code **)(**(int **)(param_1 + -0xc) + 0x18))(param_1 + -0x18);
  return;
}


// Reference entry 10ddd150; body size 41 bytes.
#line 1 "ENTRY_10ddd150"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ddd150(int *param_2)
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


// Reference entry 10dde620; body size 19 bytes.
#line 1 "ENTRY_10dde620"

void __fastcall FUN_10dde620(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10dde9b0; body size 45 bytes.
#line 1 "ENTRY_10dde9b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10dde9b0(byte param_2)
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


// Reference entry 10dde9f0; body size 32 bytes.
#line 1 "ENTRY_10dde9f0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10dde9f0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10dde6b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  return (undefined4)(param_1);
}


// Reference entry 10ddea20; body size 38 bytes.
#line 1 "ENTRY_10ddea20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ddea20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowsePageExtensionRootBrowseTuneInMigrationTile);
  thunk_FUN_10dde6b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ddea50; body size 38 bytes.
#line 1 "ENTRY_10ddea50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ddea50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowsePageExtensionServiceBrowseTuneInMigrationTile);
  thunk_FUN_10dde6b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ddeb20; body size 33 bytes.
#line 1 "ENTRY_10ddeb20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ddeb20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ddeb50; body size 38 bytes.
#line 1 "ENTRY_10ddeb50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ddeb50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMySonosPageExtensionSonosRadioTile);
  thunk_FUN_10dde6b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10de1e00; body size 20 bytes.
#line 1 "ENTRY_10de1e00"

SCStr * __thiscall Recovered_Bulk::m_FUN_10de1e00(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x20));
  return (SCStr *)(param_2);
}


// Reference entry 10de20b0; body size 20 bytes.
#line 1 "ENTRY_10de20b0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10de20b0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x2c));
  return (SCStr *)(param_2);
}


// Reference entry 10de20d0; body size 20 bytes.
#line 1 "ENTRY_10de20d0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10de20d0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x34));
  return (SCStr *)(param_2);
}


// Reference entry 10de2100; body size 20 bytes.
#line 1 "ENTRY_10de2100"

SCStr * __thiscall Recovered_Bulk::m_FUN_10de2100(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x28));
  return (SCStr *)(param_2);
}


// Reference entry 10de2180; body size 19 bytes.
#line 1 "ENTRY_10de2180"

void __fastcall FUN_10de2180(int param_1)

{
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x48))(param_1 + 8);
  }
  return;
}


// Reference entry 10de4880; body size 41 bytes.
#line 1 "ENTRY_10de4880"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10de4880(int *param_2)
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


// Reference entry 10de48c0; body size 41 bytes.
#line 1 "ENTRY_10de48c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10de48c0(int *param_2)
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


// Reference entry 10de4900; body size 41 bytes.
#line 1 "ENTRY_10de4900"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10de4900(int *param_2)
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


// Reference entry 10de4fc0; body size 19 bytes.
#line 1 "ENTRY_10de4fc0"

void __fastcall FUN_10de4fc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10de57e0; body size 38 bytes.
#line 1 "ENTRY_10de57e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10de57e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10de5810; body size 45 bytes.
#line 1 "ENTRY_10de5810"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10de5810(byte param_2)
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


// Reference entry 10de5850; body size 32 bytes.
#line 1 "ENTRY_10de5850"

undefined4 __thiscall Recovered_Bulk::m_FUN_10de5850(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10de4fe0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10de5880; body size 58 bytes.
#line 1 "ENTRY_10de5880"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10de5880(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddURIToSavedQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddURIToSavedQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddURIToSavedQueueAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7e0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10de5ae0; body size 33 bytes.
#line 1 "ENTRY_10de5ae0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10de5ae0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10de5c70; body size 45 bytes.
#line 1 "ENTRY_10de5c70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10de5c70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAVTransportAddURIToSavedQueue);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAVTransportAddURIToSavedQueue);
  thunk_FUN_10de4fe0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10de5f80; body size 60 bytes.
#line 1 "ENTRY_10de5f80"

void __thiscall Recovered_Bulk::m_FUN_10de5f80(undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            short param_6)
{
  int param_1 = (int )this;
  if ((param_6 == 0x403) && (param_4 == 0)) {
    thunk_FUN_10de84c0(1);
    return;
  }
  *(undefined1*)(param_1 + 0xb3) = (undefined1)(0);
  *(short*)(param_1 + 0xb4) = (short)(param_6);
  thunk_FUN_10de7a90();
  return;
}


// Reference entry 10de6b80; body size 21 bytes.
#line 1 "ENTRY_10de6b80"

SCStr * __stdcall FUN_10de6b80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("InvalidateStack");
  return (SCStr *)(param_1);
}


// Reference entry 10de6d90; body size 21 bytes.
#line 1 "ENTRY_10de6d90"

SCStr * __stdcall FUN_10de6d90(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10de6db0; body size 35 bytes.
#line 1 "ENTRY_10de6db0"

SCStr * __stdcall FUN_10de6db0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2099,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10de6e50; body size 21 bytes.
#line 1 "ENTRY_10de6e50"

SCStr * __stdcall FUN_10de6e50(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10de9cd0; body size 49 bytes.
#line 1 "ENTRY_10de9cd0"

undefined4 * __fastcall FUN_10de9cd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10de9dd0; body size 19 bytes.
#line 1 "ENTRY_10de9dd0"

void FUN_10de9dd0(void)

{
  thunk_FUN_10595470();
  thunk_FUN_10595510();
  return;
}


// Reference entry 10dec550; body size 33 bytes.
#line 1 "ENTRY_10dec550"

void __thiscall Recovered_Bulk::m_FUN_10dec550(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10dec580(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10dec700; body size 62 bytes.
#line 1 "ENTRY_10dec700"

int __thiscall Recovered_Bulk::m_FUN_10dec700(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10dec7c0((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (cVar1 = (char)(thunk_FUN_10defa10(param_2,local_4 + 0x10), 0), cVar1 == '\0')) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10dee260; body size 48 bytes.
#line 1 "ENTRY_10dee260"

undefined4 * __fastcall FUN_10dee260(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10deef20; body size 35 bytes.
#line 1 "ENTRY_10deef20"

undefined4 * __fastcall FUN_10deef20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizEventSource);
  param_1[1] = (undefined4)(0xffffffff);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10deef50; body size 19 bytes.
#line 1 "ENTRY_10deef50"

void __fastcall FUN_10deef50(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x2c);
  }
  return;
}


// Reference entry 10deef70; body size 19 bytes.
#line 1 "ENTRY_10deef70"

void __fastcall FUN_10deef70(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10deef90; body size 28 bytes.
#line 1 "ENTRY_10deef90"

void __fastcall FUN_10deef90(int *param_1)

{
  thunk_FUN_10dec580(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10deefc0; body size 36 bytes.
#line 1 "ENTRY_10deefc0"

void __fastcall FUN_10deefc0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    thunk_FUN_10dec580(*param_1,*(undefined4 *)(*piVar1 + 4));
    thunk_FUN_1148a50e(*piVar1,0x1c);
  }
  return;
}


// Reference entry 10deeff0; body size 38 bytes.
#line 1 "ENTRY_10deeff0"

void __fastcall FUN_10deeff0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_10def0d0();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x2c);
  }
  return;
}


// Reference entry 10def020; body size 19 bytes.
#line 1 "ENTRY_10def020"

void __fastcall FUN_10def020(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x2c);
  }
  return;
}


// Reference entry 10def040; body size 28 bytes.
#line 1 "ENTRY_10def040"

void __fastcall FUN_10def040(int *param_1)

{
  thunk_FUN_10dec580(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10def450; body size 42 bytes.
#line 1 "ENTRY_10def450"

uint __thiscall Recovered_Bulk::m_FUN_10def450(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq(param_1), 0);
  uVar2 = (uint)(((uint)(extraout_var) << 8 | (uint)(bVar1)));
  if ((bVar1) && (uVar2 = (uint)(*(uint *)(param_2 + 4)),(uint)( uVar2) == *(uint *)(param_1 + 4))) {
    return (uint)(((uint)((int3)(uVar2 >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 10def6b0; body size 42 bytes.
#line 1 "ENTRY_10def6b0"

uint __thiscall Recovered_Bulk::m_FUN_10def6b0(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq(param_1), 0);
  uVar2 = (uint)(((uint)(extraout_var) << 8 | (uint)(bVar1)));
  if ((bVar1) && (uVar2 = (uint)(*(uint *)(param_2 + 4)),(uint)( uVar2) == *(uint *)(param_1 + 4))) {
    return (uint)(uVar2 & 0xffffff00);
  }
  return (uint)(((uint)((int3)(uVar2 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 10def6f0; body size 18 bytes.
#line 1 "ENTRY_10def6f0"

bool __fastcall FUN_10def6f0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10def4a0(param_1), 0);
  return (bool)(cVar1 == '\0');
}


// Reference entry 10def940; body size 23 bytes.
#line 1 "ENTRY_10def940"

undefined4 __thiscall Recovered_Bulk::m_FUN_10def940(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10deeca0(0,param_1,param_3);
  return (undefined4)(param_2);
}


// Reference entry 10defb40; body size 23 bytes.
#line 1 "ENTRY_10defb40"

undefined4 __thiscall Recovered_Bulk::m_FUN_10defb40(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10deeca0(1,param_1,param_3);
  return (undefined4)(param_2);
}


// Reference entry 10defcb0; body size 25 bytes.
#line 1 "ENTRY_10defcb0"

void __fastcall FUN_10defcb0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x2c), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10defcd0; body size 25 bytes.
#line 1 "ENTRY_10defcd0"

void __fastcall FUN_10defcd0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10df0500; body size 24 bytes.
#line 1 "ENTRY_10df0500"

void __thiscall Recovered_Bulk::m_FUN_10df0500(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10dedc10(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10df0700; body size 22 bytes.
#line 1 "ENTRY_10df0700"

bool __fastcall FUN_10df0700(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10df0720(param_1), 0);
  return (bool)(0 < iVar1);
}


// Reference entry 10df0ea0; body size 17 bytes.
#line 1 "ENTRY_10df0ea0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10df0ea0(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_2))->m_op_ctor(param_1);
  return (SCStr *)(param_2);
}


// Reference entry 10df1160; body size 18 bytes.
#line 1 "ENTRY_10df1160"

bool __fastcall FUN_10df1160(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10df0720(param_1), 0);
  return (bool)(0 < iVar1);
}


// Reference entry 10df15a0; body size 27 bytes.
#line 1 "ENTRY_10df15a0"

void __thiscall Recovered_Bulk::m_FUN_10df15a0(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 auStack_bc [36];
  undefined1 auStack_98 [8];
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int *piStack_84;
  void *pvStack_80;
  undefined1 *puStack_7c;
  int iStack_78;
  undefined4 auStack_74 [9];
  undefined4 uStack_50;
  int *piStack_4c;
  undefined4 uStack_48;
  int *piStack_44;
  uint *puStack_40;
  uint *puStack_3c;
  int iStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int iStack_24;
  uint uStack_20;
  int *piStack_1c;
  uint *puStack_18;
  int *piStack_14;
  int *piStack_10;
  uint uStack_c;
  char cStack_6;
  char cStack_5;
  
  piVar1 = (int *)(*(int **)(param_1 + 8), 0);
  if (((int *)(piVar1) == (int *)(0x0)) || ((*(uint *)(param_1 + 4) & piVar1[0x36]) == 0)) {
    return;
  }
  iStack_78 = (int)(0xffffffff);

  piStack_10 = (int *)((int *)0x0);
  piStack_14 = (int *)((int *)0x0);
  piStack_30 = (int *)((int *)0x0);
  piStack_34 = (int *)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    piStack_30 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)(uint)&auStack_74), 0);
    (**(code **)(*piStack_30 + 4))();
  }
  iStack_78 = (int)(0);
  cVar3 = (char)(thunk_FUN_106dc570(), 0);
  if (cVar3 == '\0') {
    auStack_74[0] = (undefined4)(1);
    thunk_FUN_10deea50(param_2);

    piStack_4c = (int *)((int *)0x0);

    piStack_44 = (int *)((int *)0x0);
    iStack_78 = (int)(((uint)(*(unsigned short *)((char *)&iStack_78 + 1)) << 8 | (uint)(1)));
    piStack_14 = (int *)((int *)0x1);
    piStack_10 = (int *)((int *)0x1);
    cVar3 = (char)(thunk_FUN_105af2b0((uint)&auStack_74), 0);
    if (cVar3 != '\0') {
      bVar2 = (bool)(false);
      goto LAB_105ad9e2;
    }
  }
  bVar2 = (bool)(true);
LAB_105ad9e2:
  piVar6 = (int *)(piStack_44);
  iStack_78 = (int)(0);
  if (((uint)piStack_14 & 1) != 0) {
    piStack_14 = (int *)((int *)((uint)piStack_14 & 0xfffffffe));
    *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(2);
    *(unsigned short*)((char *)&iStack_78 + 1) = (unsigned short)(0);
    if ((int *)(piStack_44) != (int *)(0x0)) {

      piStack_44 = (int *)((int *)0x0);
      (**(code **)(*piVar6 + 8))();
    }
    piVar6 = (int *)(piStack_4c);
    *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(3);
    if ((int *)(piStack_4c) != (int *)(0x0)) {

      piStack_4c = (int *)((int *)0x0);
      (**(code **)(*piVar6 + 8))();
    }
    iStack_78 = (int)((uint)*(unsigned short *)((char *)&iStack_78 + 1) << 8);
    thunk_FUN_10def0d0();
  }
  if (!bVar2) {
    piStack_1c = (int *)((int *)thunk_FUN_10288040(), 0);
    cVar3 = (char)(thunk_FUN_10df3e90(), 0);
    if ((cVar3 == '\0') || (cVar3 = (char)(thunk_FUN_106dc570(), 0), cVar3 != '\0')) {
      bVar2 = (bool)(false);
    }
    else {
      bVar2 = (bool)(true);
    }
    thunk_FUN_10df2e40((uint)&auStack_bc);
    uVar5 = (undefined4)(param_2);
    *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(5);
    if (bVar2) {
      thunk_FUN_10df2460(0,param_2);
      *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(6);
      thunk_FUN_106dc6c0((uint)&auStack_74,uVar5);
      thunk_FUN_10df3190(uVar5);
      FUN_100517a8();
    }
    else {
      cVar3 = (char)(thunk_FUN_106dc540(), 0);
      uVar5 = (undefined4)(param_2);
      if (cVar3 == '\0') {
        uVar4 = (undefined4)(thunk_FUN_10dfd3a0(), 0);
        uVar5 = (undefined4)(param_2);
        *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(8);
        thunk_FUN_10def6b0(uVar4);
        *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(5);
        thunk_FUN_10def0d0();
        uVar5 = (undefined4)(thunk_FUN_10df2460(2,uVar5), 0);
        *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(9);
        thunk_FUN_105a8c20(uVar5);
        iStack_78 = (int)(((uint)(*(unsigned short *)((char *)&iStack_78 + 1)) << 8 | (uint)(5)));
        FUN_100517a8();
        thunk_FUN_106dc650(piVar1 + 0x1c,piVar1 + 2);
      }
      else {
        uVar4 = (undefined4)(thunk_FUN_10df2460(1,param_2), 0);
        *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(10);
        thunk_FUN_105a8c20(uVar4);
        iStack_78 = (int)(((uint)(*(unsigned short *)((char *)&iStack_78 + 1)) << 8 | (uint)(5)));
        FUN_100517a8();
        thunk_FUN_106dc6c0(piVar1 + 0x1c,uVar5);
      }
      cVar3 = (char)(thunk_FUN_10df3ed0(), 0);
      if (cVar3 != '\0') {
        piVar1[0x36] = (int)(0);
      }
      thunk_FUN_10e01790(&puStack_40);
      *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0xb);
      puStack_18 = (uint *)(puStack_3c);
      puVar14 = (uint *)(puStack_40);
      if ((uint *)(puStack_40) != (uint *)(puStack_3c)) {
        do {
          uStack_20 = (uint)(*puVar14);
          uStack_c = (uint)(uStack_20);
          thunk_FUN_105a5630((uint)&auStack_98,&uStack_c);
          if (*(char *)(iStack_90 + 0xd) == '\0') {
            uVar11 = (uint)(uStack_20);
            if ((int)(int)(uStack_20) < *(int *)(iStack_90 + 0x10)) goto LAB_105adbb7;
            iStack_24 = (int)(piVar1[0x34]);
            iVar7 = (int)(iStack_90);
          }
          else {
            uVar11 = (uint)(*puVar14);
LAB_105adbb7:
            iStack_24 = (int)(piVar1[0x34]);
            iVar7 = (int)(iStack_24);
          }
          if ((uVar11 & piVar1[0x36]) == 0) {
            if (iVar7 != iStack_24) {
              if (*(int **)(iVar7 + 0x14) != (int *)((0x0))) {
                (**(code **)(**(int **)(iVar7 + 0x14) + 0x14))(1);
              }
              uVar5 = (undefined4)(thunk_FUN_105aa0f0(iVar7), 0);
              thunk_FUN_1148a50e(uVar5,0x18);
            }
          }
          else if (iVar7 == iStack_24) {
            thunk_FUN_105a5630(&uStack_8c,&uStack_c);
            piStack_10 = (int *)(piStack_84);
            if ((*(char *)((int)piStack_84 + 0xd) != '\0') ||
               (uVar11 = (uint)(uStack_20), (int)(int)((uStack_20)) < piStack_84[4])) {
              if (piVar1[0x35] == 0xaaaaaaa) {
                    
                thunk_FUN_101d7220();
              }
              *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0xc);
              piStack_28 = (int *)((int *)0x0);
              piStack_2c = (int *)(piVar1 + 0x34);
              piVar6 = (int *)(operator_new(0x18), 0);
              *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0xb);
              piStack_28 = (int *)((int *)0x0);
              piVar6[4] = (int)(uStack_c);
              piVar6[5] = (int)(0);
              *piVar6 = (int)(iStack_24);
              piVar6[1] = (int)(iStack_24);
              piVar6[2] = (int)(iStack_24);
              *(undefined2*)(piVar6 + 3) = (undefined2)(0);
              piStack_10 = (int *)((int *)thunk_FUN_105aa9d0(uStack_8c,uStack_88,piVar6), 0);
              uVar11 = (uint)(uStack_c);
            }
            iVar7 = (int)(thunk_FUN_10e00af0(uVar11,piVar1), 0);
            piStack_10[5] = (int)(iVar7);
          }
          puVar14 = (uint *)(puVar14 + 1);
        } while ((uint *)(puVar14) != (uint *)(puStack_18));
      }
      *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(5);
      if ((uint *)(puStack_40) != (uint *)(0x0)) {
        uVar11 = (uint)((iStack_38 - (int)puStack_40 >> 2) * 4);
        puVar14 = (uint *)(puStack_40);
        if (0xfff < uVar11) {
          puVar14 = (uint *)((uint *)puStack_40[-1]);
          uVar11 = (uint)(uVar11 + 0x23);
          if (0x1f < (uint)((int)puStack_40 + (-4 - (int)puVar14))) {
                    
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1148a50e(puVar14,uVar11);
      }
      cStack_5 = (char)('\0');
      cStack_6 = (char)('\0');
      thunk_FUN_10df31d0(piVar1 + 0x1b,&cStack_5,&cStack_6);
      if ((cStack_5 == '\0') && (cVar3 = (char)(thunk_FUN_10def6b0((uint)&auStack_bc), 0), cVar3 == '\0')) {
        piVar1[0x29] = (int)(piVar1[0x29] + 1);
      }
      else {
        iVar7 = (int)(thunk_FUN_10df2e20(), 0);
        if (((int *)((0)) < (int *)(piVar1[0x29])) && (iVar7 != 0)) {
          puVar9 = (undefined4 *)((undefined4 *)thunk_FUN_10df0ea0(&puStack_18), 0);
          *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0xd);
          puVar8 = (undefined4 *)((undefined4 *)thunk_FUN_106dfa00(&param_2), 0);
          *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0xe);
          puVar12 = (undefined1 *)(&DAT_1186d2ee);
          if ((undefined1 *)*puVar9 != (undefined1 *)((0x0))) {
            puVar12 = (undefined1 *)((undefined1 *)*puVar9);
          }
          puVar13 = (undefined1 *)(&DAT_1186d2ee);
          if ((undefined1 *)*puVar8 != (undefined1 *)((0x0))) {
            puVar13 = (undefined1 *)((undefined1 *)*puVar8);
          }
          thunk_FUN_10302280(piVar1 + 6,"%s ignored duplicate events (%s x%i)",puVar13,puVar12, piVar1[0x29]);
          *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0xf);
          ((SCStr *)((SCStr *)&param_2))->int_release();
          param_2 = (undefined4)(0);
          *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0x10);
          ((SCStr *)((SCStr *)&puStack_18))->int_release();
          *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(5);
        }
        piVar1[0x29] = (int)(0);
      }
      if (cStack_6 != '\0') {
        uVar5 = (undefined4)(thunk_FUN_10df3fd0(&param_2), 0);
        *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0x11);
        thunk_FUN_10302310(uVar5);
        *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0x12);
        ((SCStr *)((SCStr *)&param_2))->int_release();
        *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(5);
      }
      if (cStack_5 != '\0') {
        cVar3 = (char)(thunk_FUN_10df3ed0(), 0);
        if (cVar3 == '\0') {
          if (piVar1[0x25] == 0) {
            iVar7 = (int)(-1);
          }
          else {
            ((SCStr *)((SCStr *)&param_2))->int_allocRep("style");
            piStack_14 = (int *)((int *)((uint)piStack_14 | 2));
            iStack_78 = (int)(((uint)(*(unsigned short *)((char *)&iStack_78 + 1)) << 8 | (uint)(0x13)));
            piStack_10 = (int *)(piStack_14);
            iVar7 = (int)((**(code **)(*(int *)piVar1[0x25] + 0x24))(&param_2), 0);
          }
          *(unsigned short*)((char *)&iStack_78 + 1) = (unsigned short)(0);
          if (((uint)piStack_14 & 2) != 0) {
            iStack_78 = (int)(0x14);
            ((SCStr *)((SCStr *)&param_2))->int_release();
          }
          *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(5);
          if ((int *)piVar1[0x16] == (int *)(((0x0)))) {
            if (iVar7 == 0) {
              thunk_FUN_105b02b0(1);
            }
          }
          else if (iVar7 == 1) {
            ((SCStr *)((SCStr *)&param_2))->int_allocRep("{}");
            *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0x15);
            (**(code **)(*(int *)piVar1[0x16] + 0x14))(&param_2,piVar1);
            *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0x16);
            ((SCStr *)((SCStr *)&param_2))->int_release();
          }
          else {
            (**(code **)(*(int *)piVar1[0x16] + 0x14))(piVar1 + 0x1b,piVar1);
          }
        }
        else {
          thunk_FUN_1028a000(piVar1);
          ((SCStr *)((SCStr *)&uStack_c))->int_allocRep("postTerminationAction");
          *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0x17);
          puVar9 = (undefined4 *)((undefined4 *)(**(code **)(*(int *)piVar1[0x27] + 0x6c))(&piStack_10,&uStack_c), 0);
          piVar6 = (int *)((int *)*puVar9);
          *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0x18);
          *puVar9 = (undefined4)(0);
          piStack_2c = (int *)(piVar6);
          if ((int *)(piVar6) == (int *)(0x0)) {
            piVar10 = (int *)((int *)0x0);
          }
          else {
            piVar10 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(), 0);
          }
          *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0x19);
          piStack_28 = (int *)(piVar10);
          if ((int *)(piVar6) == (int *)(0x0)) {
            puVar14 = (uint *)((uint *)0x0);
            puStack_18 = (uint *)((uint *)0x0);
          }
          else {
            ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIActionContext");
            *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0x1a);
            puVar9 = (undefined4 *)((undefined4 *)(**(code **)*piVar6)(&piStack_1c,&param_2), 0);
            puVar14 = (uint *)((uint *)*puVar9);
            *puVar9 = (undefined4)(0);
            *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0x1c);
            puStack_18 = (uint *)(puVar14);
            if ((int *)(piStack_1c) != (int *)(0x0)) {
              (**(code **)(*piStack_1c + 8))();
            }
            *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0x1d);
            ((SCStr *)((SCStr *)&param_2))->int_release();
            param_2 = (undefined4)(0);
          }
          *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0x1e);
          if ((int *)(piVar10) != (int *)(0x0)) {
            (**(code **)(*piVar10 + 8))();
          }
          *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0x21);
          if ((int *)(piStack_10) != (int *)(0x0)) {
            (**(code **)(*piStack_10 + 8))();
          }
          *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0x23);
          ((SCStr *)((SCStr *)&uStack_c))->int_release();

          *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0x22);
          if ((uint *)(puVar14) != (uint *)(0x0)) {
            (**(code **)(*puVar14 + 0x14))();
          }
          if (piVar1[0x16] != 0) {
            ((SCStr *)((SCStr *)&param_2))->int_allocRep("{}");
            *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0x24);
            (**(code **)(*(int *)piVar1[0x16] + 0x14))(&param_2,piVar1);
            *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0x25);
            ((SCStr *)((SCStr *)&param_2))->int_release();
            *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0x22);
          }
          if (piVar1[0x32] == 0) {
            (**(code **)(*(int *)piVar1[0x15] + 0x3c))();
          }
          *(unsigned char*)((char *)&iStack_78 + 0) = (unsigned char)(0x26);
          if ((uint *)(puVar14) != (uint *)(0x0)) {
            (**(code **)(*puVar14 + 8))();
          }
        }
      }
    }
    thunk_FUN_10def0d0();
  }
  iStack_78 = (int)(0x27);
  if ((int *)(piStack_30) != (int *)(0x0)) {
    (**(code **)(*piStack_30 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10df16f0; body size 46 bytes.
#line 1 "ENTRY_10df16f0"

uint FUN_10df16f0(undefined4 param_1,int param_2)

{
  undefined2 extraout_var;
  uint uVar1;
  
  uVar1 = (uint)(0);
  if (param_2 != 0) {
    thunk_FUN_10df1180(&param_2,param_1,param_2);
    uVar1 = (uint)(((uint)(extraout_var) << 16 | (uint)((undefined2)param_2)));
    if (((char)param_2 != '\0') && ((char)((uint)param_2 >> 8) != '\0')) {
      return (uint)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1)));
    }
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 10df2d90; body size 28 bytes.
#line 1 "ENTRY_10df2d90"

undefined4 __fastcall FUN_10df2d90(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4);
  if (uVar1 < 2) {
    return (undefined4)(0);
  }
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 4) + (uVar1 - 2) * 0x10));
}


// Reference entry 10df2dc0; body size 31 bytes.
#line 1 "ENTRY_10df2dc0"

undefined4 __fastcall FUN_10df2dc0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1[2] - param_1[1] >> 4);
  if ((iVar1 != 0) && (*param_1 == (int)((2)))) {
    return (undefined4)(*(undefined4 *)(param_1[1] + -0x10 + iVar1 * 0x10));
  }
  return (undefined4)(0);
}


// Reference entry 10df2df0; body size 39 bytes.
#line 1 "ENTRY_10df2df0"

undefined4 __fastcall FUN_10df2df0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 4));
  uVar2 = (uint)(*(int *)(param_1 + 8) - iVar1 >> 4);
  if ((1 < uVar2) && (*(int *)(iVar1 + -4 + uVar2 * 0x10) == 0)) {
    return (undefined4)(*(undefined4 *)(iVar1 + (uVar2 - 2) * 0x10));
  }
  return (undefined4)(0);
}


// Reference entry 10df2e20; body size 22 bytes.
#line 1 "ENTRY_10df2e20"

undefined4 __fastcall FUN_10df2e20(int param_1)

{
  if (*(int *)(param_1 + 8) - (int)*(undefined4 **)(param_1 + 4) >> 4 == 0) {
    return (undefined4)(0);
  }
  return (undefined4)(**(undefined4 **)(param_1 + 4));
}


// Reference entry 10df3190; body size 43 bytes.
#line 1 "ENTRY_10df3190"

void __thiscall Recovered_Bulk::m_FUN_10df3190(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 0x14)) != *(int *)((param_1 + 0x18))) {
    thunk_FUN_10deea50(param_2);
    *(int*)(param_1 + 0x14) = (int)(*(int *)(param_1 + 0x14) + 0x18);
    return;
  }
  thunk_FUN_10dec1c0(*(int *)(param_1 + 0x14),param_2);
  return;
}


// Reference entry 10df3e90; body size 17 bytes.
#line 1 "ENTRY_10df3e90"

undefined1 __fastcall FUN_10df3e90(int *param_1)

{
  if ((param_1[7] == 0) && (*param_1 != (int)((0)))) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 10df3eb0; body size 23 bytes.
#line 1 "ENTRY_10df3eb0"

uint __fastcall FUN_10df3eb0(uint *param_1)

{
  uint in_EAX;
  
  if (((param_1[9] == 0) && (in_EAX = (uint)(*param_1), in_EAX != 0)) && (in_EAX != 1)) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10df3ed0; body size 23 bytes.
#line 1 "ENTRY_10df3ed0"

uint __fastcall FUN_10df3ed0(uint *param_1)

{
  uint in_EAX;
  
  if (((param_1[7] == 0) && (in_EAX = (uint)(*param_1), in_EAX != 0)) && (in_EAX != 1)) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10df4e50; body size 30 bytes.
#line 1 "ENTRY_10df4e50"

void __thiscall Recovered_Bulk::m_FUN_10df4e50(int param_2)
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


// Reference entry 10dfe620; body size 60 bytes.
#line 1 "ENTRY_10dfe620"

void __fastcall FUN_10dfe620(int *param_1)

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


// Reference entry 10dfe710; body size 19 bytes.
#line 1 "ENTRY_10dfe710"

void __fastcall FUN_10dfe710(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10e006f0; body size 45 bytes.
#line 1 "ENTRY_10e006f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e006f0(byte param_2)
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


// Reference entry 10e00ac0; body size 30 bytes.
#line 1 "ENTRY_10e00ac0"

void __thiscall Recovered_Bulk::m_FUN_10e00ac0(int param_2)
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


// Reference entry 10e00af0; body size 38 bytes.
#line 1 "ENTRY_10e00af0"

int FUN_10e00af0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (int)(FUN_10e06bc0(param_1), 0);
  if (iVar1 != 0) {
    thunk_FUN_10df1530(param_1,param_2);
  }
  return (int)(iVar1);
}


// Reference entry 10e01da0; body size 63 bytes.
#line 1 "ENTRY_10e01da0"

undefined1 FUN_10e01da0(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIHousehold:onZoneGroupsChanged"), 0);
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIHousehold:onSecureSettingsChanged"), 0);
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIHousehold:onFinishedConnectingToZPs"), 0);
      if (!bVar1) {
        return (undefined1)(0);
      }
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e0ac50; body size 31 bytes.
#line 1 "ENTRY_10e0ac50"

int FUN_10e0ac50(void)

{
  DAT_1211a230 = (int)(DAT_1211a230 + -1);
  if (DAT_1211a230 == 0) {
    DAT_1211a230 = (int)(0x7ffffffe);
  }
  return (int)(DAT_1211a230);
}


// Reference entry 10e0ae30; body size 21 bytes.
#line 1 "ENTRY_10e0ae30"

SCStr * __stdcall FUN_10e0ae30(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10e0b470; body size 33 bytes.
#line 1 "ENTRY_10e0b470"

void __thiscall Recovered_Bulk::m_FUN_10e0b470(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10e0b4d0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10e0b4a0; body size 33 bytes.
#line 1 "ENTRY_10e0b4a0"

void __thiscall Recovered_Bulk::m_FUN_10e0b4a0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10e0b5b0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10e0bf10; body size 48 bytes.
#line 1 "ENTRY_10e0bf10"

undefined4 * __fastcall FUN_10e0bf10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10e0bf50; body size 48 bytes.
#line 1 "ENTRY_10e0bf50"

undefined4 * __fastcall FUN_10e0bf50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10e0c410; body size 19 bytes.
#line 1 "ENTRY_10e0c410"

void __fastcall FUN_10e0c410(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10e0c430; body size 19 bytes.
#line 1 "ENTRY_10e0c430"

void __fastcall FUN_10e0c430(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10e0c450; body size 28 bytes.
#line 1 "ENTRY_10e0c450"

void __fastcall FUN_10e0c450(int *param_1)

{
  thunk_FUN_10e0b4d0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10e0c480; body size 28 bytes.
#line 1 "ENTRY_10e0c480"

void __fastcall FUN_10e0c480(int *param_1)

{
  thunk_FUN_10e0b5b0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10e0c610; body size 19 bytes.
#line 1 "ENTRY_10e0c610"

void __fastcall FUN_10e0c610(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10e0c630; body size 28 bytes.
#line 1 "ENTRY_10e0c630"

void __fastcall FUN_10e0c630(int *param_1)

{
  thunk_FUN_10e0b4d0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10e0c660; body size 28 bytes.
#line 1 "ENTRY_10e0c660"

void __fastcall FUN_10e0c660(int *param_1)

{
  thunk_FUN_10e0b5b0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10e0cba0; body size 32 bytes.
#line 1 "ENTRY_10e0cba0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e0cba0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e0c800();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e0cc30; body size 25 bytes.
#line 1 "ENTRY_10e0cc30"

void __fastcall FUN_10e0cc30(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10e0cc50; body size 25 bytes.
#line 1 "ENTRY_10e0cc50"

void __fastcall FUN_10e0cc50(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10e0d650; body size 56 bytes.
#line 1 "ENTRY_10e0d650"

int __stdcall FUN_10e0d650(int *param_1)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10e0b690((uint)&local_c,param_1);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= (int)(*param_1))) {
    return (int)(local_4 + 0x14);
  }
                    
  std::_Xout_of_range("invalid map<K, T> key");
}


// Reference entry 10e0eb00; body size 55 bytes.
#line 1 "ENTRY_10e0eb00"

undefined4 FUN_10e0eb00(int *param_1)

{
  int iVar1;
  undefined1 local_c [12];
  
  iVar1 = (int)(thunk_FUN_10e0b690((uint)&local_c,param_1), 0);
  if ((*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') &&
     (*(int *)(*(int *)(iVar1 + 8) + 0x10) <= (int)(*param_1))) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10e0eb50; body size 61 bytes.
#line 1 "ENTRY_10e0eb50"

undefined4 FUN_10e0eb50(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_10e0b6f0((uint)&local_c,param_1), 0);
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)), 0);
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e0fde0; body size 21 bytes.
#line 1 "ENTRY_10e0fde0"

SCStr * __stdcall FUN_10e0fde0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("wizard/setup/v4.1");
  return (SCStr *)(param_1);
}


// Reference entry 10e10e20; body size 61 bytes.
#line 1 "ENTRY_10e10e20"

undefined4 FUN_10e10e20(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_10e0b6f0((uint)&local_c,param_1), 0);
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)), 0);
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e10e70; body size 32 bytes.
#line 1 "ENTRY_10e10e70"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e10e70(undefined4 param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  if (*(int **)(param_1 + 0x28) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x28) + 0x74))(param_2), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e11fa0; body size 21 bytes.
#line 1 "ENTRY_10e11fa0"

void __stdcall FUN_10e11fa0(undefined4 param_1)

{
  thunk_FUN_10e0f0d0(param_1,0);
  thunk_FUN_10e0d700();
  return;
}


// Reference entry 10e120a0; body size 17 bytes.
#line 1 "ENTRY_10e120a0"

void __stdcall FUN_10e120a0(undefined4 param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)((undefined1 *)thunk_FUN_10e0f0d0(param_1,0), 0);
  *puVar1 = (undefined1)(1);
  return;
}


// Reference entry 10e12220; body size 41 bytes.
#line 1 "ENTRY_10e12220"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e12220(int *param_2)
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


// Reference entry 10e13970; body size 33 bytes.
#line 1 "ENTRY_10e13970"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e13970(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e139a0; body size 38 bytes.
#line 1 "ENTRY_10e139a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e139a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPTransferButtonEnumerator);
  thunk_FUN_11132140();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e139d0; body size 33 bytes.
#line 1 "ENTRY_10e139d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e139d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e13b50; body size 33 bytes.
#line 1 "ENTRY_10e13b50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e13b50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e13b80; body size 33 bytes.
#line 1 "ENTRY_10e13b80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e13b80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e13bb0; body size 33 bytes.
#line 1 "ENTRY_10e13bb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e13bb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e13ee0; body size 32 bytes.
#line 1 "ENTRY_10e13ee0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e13ee0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e12fb0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e13f10; body size 33 bytes.
#line 1 "ENTRY_10e13f10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e13f10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e13f40; body size 33 bytes.
#line 1 "ENTRY_10e13f40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e13f40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e14040; body size 32 bytes.
#line 1 "ENTRY_10e14040"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e14040(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e13320();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e14070; body size 33 bytes.
#line 1 "ENTRY_10e14070"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e14070(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e14180; body size 33 bytes.
#line 1 "ENTRY_10e14180"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e14180(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e141b0; body size 33 bytes.
#line 1 "ENTRY_10e141b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e141b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e15150; body size 24 bytes.
#line 1 "ENTRY_10e15150"

undefined4 __fastcall FUN_10e15150(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x1c) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x1c) + 0x30))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e151c0; body size 37 bytes.
#line 1 "ENTRY_10e151c0"

undefined1 __fastcall FUN_10e151c0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x58))(), 0);
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e15210; body size 37 bytes.
#line 1 "ENTRY_10e15210"

undefined1 __fastcall FUN_10e15210(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x60))(), 0);
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e15650; body size 48 bytes.
#line 1 "ENTRY_10e15650"

void __fastcall FUN_10e15650(int param_1)

{
  char cVar1;
  
  *(undefined1*)(param_1 + 0x94) = (undefined1)(0);
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x20) + 0x1c))(), 0);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x20) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x1c) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e158c0; body size 33 bytes.
#line 1 "ENTRY_10e158c0"

void __fastcall FUN_10e158c0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x14) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x14) + 0x1c))(), 0);
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0x10) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e158f0; body size 24 bytes.
#line 1 "ENTRY_10e158f0"

void __fastcall FUN_10e158f0(undefined4 *param_1)

{
  thunk_FUN_105b6490(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10e16b00; body size 42 bytes.
#line 1 "ENTRY_10e16b00"

undefined4 * __fastcall FUN_10e16b00(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSecureExistingCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e16b40; body size 46 bytes.
#line 1 "ENTRY_10e16b40"

undefined4 * __fastcall FUN_10e16b40(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSecureExistingInitState);
    *(undefined1*)(puVar1 + 3) = (undefined1)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e16b80; body size 28 bytes.
#line 1 "ENTRY_10e16b80"

void FUN_10e16b80(void)

{
  SCStr aSStack_c [4];
  
  ((SCStr *)((uint)&aSStack_c))->int_allocRep("sec_existing.launch_cust_reg_orphan_noaccess");
  thunk_FUN_10e1dfc0();
  return;
}


// Reference entry 10e19980; body size 34 bytes.
#line 1 "ENTRY_10e19980"

undefined4 __fastcall FUN_10e19980(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
    if (cVar1 == '\0') {
                    
                    
      uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc) + 0x14))(), 0);
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e19a90; body size 21 bytes.
#line 1 "ENTRY_10e19a90"

SCStr * __stdcall FUN_10e19a90(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SECURE_EXISTING_ORPHAN_ACCOUNT_NO_ACCESS");
  return (SCStr *)(param_1);
}


// Reference entry 10e19ab0; body size 21 bytes.
#line 1 "ENTRY_10e19ab0"

SCStr * __stdcall FUN_10e19ab0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SECURE_EXISTING_BEGIN_SECURE_TRANSFER");
  return (SCStr *)(param_1);
}


// Reference entry 10e19ad0; body size 21 bytes.
#line 1 "ENTRY_10e19ad0"

SCStr * __stdcall FUN_10e19ad0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SECURE_EXISTING_BUTTONS");
  return (SCStr *)(param_1);
}


// Reference entry 10e19af0; body size 21 bytes.
#line 1 "ENTRY_10e19af0"

SCStr * __stdcall FUN_10e19af0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SECURE_EXISTING_CHECK_EXISTING");
  return (SCStr *)(param_1);
}


// Reference entry 10e19b10; body size 21 bytes.
#line 1 "ENTRY_10e19b10"

SCStr * __stdcall FUN_10e19b10(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SECURE_EXISTING_COMPLETE");
  return (SCStr *)(param_1);
}


// Reference entry 10e19b30; body size 21 bytes.
#line 1 "ENTRY_10e19b30"

SCStr * __stdcall FUN_10e19b30(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SECURE_EXISTING_EMAIL");
  return (SCStr *)(param_1);
}


// Reference entry 10e19b50; body size 21 bytes.
#line 1 "ENTRY_10e19b50"

SCStr * __stdcall FUN_10e19b50(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SECURE_EXISTING_FINISH_SECURE_REG");
  return (SCStr *)(param_1);
}


// Reference entry 10e19b70; body size 21 bytes.
#line 1 "ENTRY_10e19b70"

SCStr * __stdcall FUN_10e19b70(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SECURE_EXISTING_INIT");
  return (SCStr *)(param_1);
}


// Reference entry 10e19b90; body size 21 bytes.
#line 1 "ENTRY_10e19b90"

SCStr * __stdcall FUN_10e19b90(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SECURE_EXISTING_KNOWN_EMAIL_MATCH");
  return (SCStr *)(param_1);
}


// Reference entry 10e19bb0; body size 21 bytes.
#line 1 "ENTRY_10e19bb0"

SCStr * __stdcall FUN_10e19bb0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SECURE_EXISTING_SYSTEM_REGISTRATION_LOOKUP");
  return (SCStr *)(param_1);
}


// Reference entry 10e19bd0; body size 21 bytes.
#line 1 "ENTRY_10e19bd0"

SCStr * __stdcall FUN_10e19bd0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SECURE_EXISTING_ERROR_NETWORK");
  return (SCStr *)(param_1);
}


// Reference entry 10e19bf0; body size 21 bytes.
#line 1 "ENTRY_10e19bf0"

SCStr * __stdcall FUN_10e19bf0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SECURE_EXISTING_PRESS_BUTTON");
  return (SCStr *)(param_1);
}


// Reference entry 10e19c10; body size 21 bytes.
#line 1 "ENTRY_10e19c10"

SCStr * __stdcall FUN_10e19c10(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SECURE_EXISTING_SPEAKER_CHOICE");
  return (SCStr *)(param_1);
}


// Reference entry 10e19c30; body size 21 bytes.
#line 1 "ENTRY_10e19c30"

SCStr * __stdcall FUN_10e19c30(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SECURE_EXISTING_WAITING_FOR_TRANSFER");
  return (SCStr *)(param_1);
}


// Reference entry 10e19c70; body size 30 bytes.
#line 1 "ENTRY_10e19c70"

undefined4 __fastcall FUN_10e19c70(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e19ca0; body size 26 bytes.
#line 1 "ENTRY_10e19ca0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e19ca0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e19cc0; body size 35 bytes.
#line 1 "ENTRY_10e19cc0"

SCStr * __stdcall FUN_10e19cc0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x20f0,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10e19cf0; body size 23 bytes.
#line 1 "ENTRY_10e19cf0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e19cf0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e19d10; body size 45 bytes.
#line 1 "ENTRY_10e19d10"

int * __thiscall Recovered_Bulk::m_FUN_10e19d10(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_3 == 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x1c), 0);
    *param_2 = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
    return (int *)(param_2);
  }
  *param_2 = (int)(0);
  return (int *)(param_2);
}


// Reference entry 10e1ca90; body size 21 bytes.
#line 1 "ENTRY_10e1ca90"

SCStr * __stdcall FUN_10e1ca90(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SecureExistingWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10e1eb40; body size 37 bytes.
#line 1 "ENTRY_10e1eb40"

void __fastcall FUN_10e1eb40(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  }
  return;
}


// Reference entry 10e1eb70; body size 37 bytes.
#line 1 "ENTRY_10e1eb70"

void __fastcall FUN_10e1eb70(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  }
  return;
}


// Reference entry 10e1eba0; body size 37 bytes.
#line 1 "ENTRY_10e1eba0"

void __fastcall FUN_10e1eba0(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  }
  return;
}


// Reference entry 10e1ef50; body size 24 bytes.
#line 1 "ENTRY_10e1ef50"

undefined4 __fastcall FUN_10e1ef50(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x40))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e1f010; body size 39 bytes.
#line 1 "ENTRY_10e1f010"

undefined4 __fastcall FUN_10e1f010(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x9c))(), 0);
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x6c))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e1f040; body size 63 bytes.
#line 1 "ENTRY_10e1f040"

undefined1 FUN_10e1f040(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateChanged"), 0);
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateTransitionsEnabled"), 0);
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateUpdate"), 0);
      if (!bVar1) {
        return (undefined1)(0);
      }
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e1f6f0; body size 61 bytes.
#line 1 "ENTRY_10e1f6f0"

void __fastcall FUN_10e1f6f0(int *param_1)

{
  char cVar1;
  
  if ((int *)param_1[3] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[3] + 0xcc))(param_1[5]);
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x30))(), 0);
    if (cVar1 == '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x94))(), 0);
      if (cVar1 == '\0') {
        thunk_FUN_10e19870();
        return;
      }
    }
  }
  return;
}


// Reference entry 10e1f770; body size 46 bytes.
#line 1 "ENTRY_10e1f770"

void __fastcall FUN_10e1f770(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x10) + 8))();
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  }
  return;
}


// Reference entry 10e1f7b0; body size 46 bytes.
#line 1 "ENTRY_10e1f7b0"

void __fastcall FUN_10e1f7b0(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x10) + 8))();
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  }
  return;
}


// Reference entry 10e1fd00; body size 38 bytes.
#line 1 "ENTRY_10e1fd00"

void __fastcall FUN_10e1fd00(int param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 4) + 0x34))(), 0);
  if (iVar1 == 4) {
    (**(code **)(**(int **)(param_1 + 4) + 0x40))();
                    
                    
    (**(code **)(**(int **)(param_1 + -0x10) + 0x88))();
    return;
  }
  return;
}


// Reference entry 10e23140; body size 58 bytes.
#line 1 "ENTRY_10e23140"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e23140(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10dd0610(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyWelcomeLoginWizard);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCLegacyWelcomeLoginWizard);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCLegacyWelcomeLoginWizard);
  param_1[0x12] = (undefined4)((uint)&ghidra_vftable_SCLegacyWelcomeLoginWizard);
  param_1[0x13] = (undefined4)((uint)&ghidra_vftable_SCLegacyWelcomeLoginWizard);
  return (undefined4 *)(param_1);
}


// Reference entry 10e23660; body size 33 bytes.
#line 1 "ENTRY_10e23660"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e23660(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e23690; body size 33 bytes.
#line 1 "ENTRY_10e23690"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e23690(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_HHSettingsReader);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e23720; body size 33 bytes.
#line 1 "ENTRY_10e23720"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e23720(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e23750; body size 33 bytes.
#line 1 "ENTRY_10e23750"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e23750(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e23850; body size 33 bytes.
#line 1 "ENTRY_10e23850"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e23850(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e238b0; body size 37 bytes.
#line 1 "ENTRY_10e238b0"

undefined1 __fastcall FUN_10e238b0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x58))(), 0);
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e238e0; body size 37 bytes.
#line 1 "ENTRY_10e238e0"

undefined1 __fastcall FUN_10e238e0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x60))(), 0);
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e239c0; body size 42 bytes.
#line 1 "ENTRY_10e239c0"

undefined4 * __fastcall FUN_10e239c0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLegacyWelcomeLoginWizardInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e24220; body size 34 bytes.
#line 1 "ENTRY_10e24220"

undefined4 __fastcall FUN_10e24220(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
    if (cVar1 == '\0') {
                    
                    
      uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc) + 0x14))(), 0);
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e24280; body size 21 bytes.
#line 1 "ENTRY_10e24280"

SCStr * __stdcall FUN_10e24280(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("legacy_welcome_login.complete");
  return (SCStr *)(param_1);
}


// Reference entry 10e242a0; body size 21 bytes.
#line 1 "ENTRY_10e242a0"

SCStr * __stdcall FUN_10e242a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("legacy_welcome_login.init");
  return (SCStr *)(param_1);
}


// Reference entry 10e242c0; body size 21 bytes.
#line 1 "ENTRY_10e242c0"

SCStr * __stdcall FUN_10e242c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("legacy_welcome_login.sec_reg_subwiz");
  return (SCStr *)(param_1);
}


// Reference entry 10e24300; body size 30 bytes.
#line 1 "ENTRY_10e24300"

undefined4 __fastcall FUN_10e24300(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e24330; body size 26 bytes.
#line 1 "ENTRY_10e24330"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e24330(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e24350; body size 35 bytes.
#line 1 "ENTRY_10e24350"

SCStr * __stdcall FUN_10e24350(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x20ea,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10e24380; body size 23 bytes.
#line 1 "ENTRY_10e24380"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e24380(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e24860; body size 21 bytes.
#line 1 "ENTRY_10e24860"

SCStr * __stdcall FUN_10e24860(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCLegacyWelcomeLoginWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10e24930; body size 24 bytes.
#line 1 "ENTRY_10e24930"

undefined4 __fastcall FUN_10e24930(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x40))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e24960; body size 39 bytes.
#line 1 "ENTRY_10e24960"

undefined4 __fastcall FUN_10e24960(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x9c))(), 0);
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x6c))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e24990; body size 63 bytes.
#line 1 "ENTRY_10e24990"

undefined1 FUN_10e24990(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateChanged"), 0);
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateTransitionsEnabled"), 0);
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateUpdate"), 0);
      if (!bVar1) {
        return (undefined1)(0);
      }
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e24a70; body size 61 bytes.
#line 1 "ENTRY_10e24a70"

void __fastcall FUN_10e24a70(int *param_1)

{
  char cVar1;
  
  if ((int *)param_1[3] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[3] + 0xcc))(param_1[5]);
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x30))(), 0);
    if (cVar1 == '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x94))(), 0);
      if (cVar1 == '\0') {
        thunk_FUN_10e23ff0();
        return;
      }
    }
  }
  return;
}


// Reference entry 10e25320; body size 41 bytes.
#line 1 "ENTRY_10e25320"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e25320(int *param_2)
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


// Reference entry 10e25360; body size 41 bytes.
#line 1 "ENTRY_10e25360"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e25360(int *param_2)
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


// Reference entry 10e253a0; body size 41 bytes.
#line 1 "ENTRY_10e253a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e253a0(int *param_2)
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


// Reference entry 10e253e0; body size 41 bytes.
#line 1 "ENTRY_10e253e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e253e0(int *param_2)
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


// Reference entry 10e27410; body size 33 bytes.
#line 1 "ENTRY_10e27410"

void __fastcall FUN_10e27410(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e27440; body size 33 bytes.
#line 1 "ENTRY_10e27440"

void __fastcall FUN_10e27440(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e27470; body size 33 bytes.
#line 1 "ENTRY_10e27470"

void __fastcall FUN_10e27470(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e274a0; body size 33 bytes.
#line 1 "ENTRY_10e274a0"

void __fastcall FUN_10e274a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e274d0; body size 33 bytes.
#line 1 "ENTRY_10e274d0"

void __fastcall FUN_10e274d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e27500; body size 33 bytes.
#line 1 "ENTRY_10e27500"

void __fastcall FUN_10e27500(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e27530; body size 33 bytes.
#line 1 "ENTRY_10e27530"

void __fastcall FUN_10e27530(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e27560; body size 33 bytes.
#line 1 "ENTRY_10e27560"

void __fastcall FUN_10e27560(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e28c10; body size 37 bytes.
#line 1 "ENTRY_10e28c10"

int * __fastcall FUN_10e28c10(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e28c40; body size 37 bytes.
#line 1 "ENTRY_10e28c40"

int * __fastcall FUN_10e28c40(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e28c70; body size 37 bytes.
#line 1 "ENTRY_10e28c70"

int * __fastcall FUN_10e28c70(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e28ca0; body size 37 bytes.
#line 1 "ENTRY_10e28ca0"

int * __fastcall FUN_10e28ca0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e29180; body size 32 bytes.
#line 1 "ENTRY_10e29180"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e29180(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e26da0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e291b0; body size 32 bytes.
#line 1 "ENTRY_10e291b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e291b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e26e90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e291e0; body size 32 bytes.
#line 1 "ENTRY_10e291e0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e291e0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e26f80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e29210; body size 32 bytes.
#line 1 "ENTRY_10e29210"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e29210(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e27070();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e29240; body size 33 bytes.
#line 1 "ENTRY_10e29240"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e29240(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e294e0; body size 45 bytes.
#line 1 "ENTRY_10e294e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e294e0(byte param_2)
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


// Reference entry 10e29610; body size 32 bytes.
#line 1 "ENTRY_10e29610"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e29610(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e27890();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x44);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e298a0; body size 33 bytes.
#line 1 "ENTRY_10e298a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e298a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e299c0; body size 33 bytes.
#line 1 "ENTRY_10e299c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e299c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e29bf0; body size 33 bytes.
#line 1 "ENTRY_10e29bf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e29bf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e29d90; body size 33 bytes.
#line 1 "ENTRY_10e29d90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e29d90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e29f70; body size 35 bytes.
#line 1 "ENTRY_10e29f70"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e29f70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e28170();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xb8);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e2a090; body size 33 bytes.
#line 1 "ENTRY_10e2a090"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e2a090(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e2a0c0; body size 33 bytes.
#line 1 "ENTRY_10e2a0c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e2a0c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e2a0f0; body size 33 bytes.
#line 1 "ENTRY_10e2a0f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e2a0f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e2a2d0; body size 33 bytes.
#line 1 "ENTRY_10e2a2d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e2a2d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e2a500; body size 33 bytes.
#line 1 "ENTRY_10e2a500"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e2a500(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e2a530; body size 33 bytes.
#line 1 "ENTRY_10e2a530"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e2a530(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e2a650; body size 33 bytes.
#line 1 "ENTRY_10e2a650"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e2a650(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e2a680; body size 33 bytes.
#line 1 "ENTRY_10e2a680"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e2a680(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e2a6b0; body size 33 bytes.
#line 1 "ENTRY_10e2a6b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e2a6b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e2a8c0; body size 45 bytes.
#line 1 "ENTRY_10e2a8c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e2a8c0(byte param_2)
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


// Reference entry 10e2aae0; body size 33 bytes.
#line 1 "ENTRY_10e2aae0"

void __fastcall FUN_10e2aae0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e2ab10; body size 33 bytes.
#line 1 "ENTRY_10e2ab10"

void __fastcall FUN_10e2ab10(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e2ab40; body size 33 bytes.
#line 1 "ENTRY_10e2ab40"

void __fastcall FUN_10e2ab40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e2ab70; body size 33 bytes.
#line 1 "ENTRY_10e2ab70"

void __fastcall FUN_10e2ab70(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e2b430; body size 60 bytes.
#line 1 "ENTRY_10e2b430"

void __thiscall Recovered_Bulk::m_FUN_10e2b430(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 uVar2;
  char *pcStack_8;
  
  if (*(int **)(param_1 + 0x10) == (int *)((0x0))) {
    iVar1 = (int)(0);
  }
  else {
    pcStack_8 = (char *)((char *)0x10e2b43f);
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x10) + 0x20))(), 0);
  }
  if (param_2 == iVar1) {
    pcStack_8 = (char *)((char *)0x10e2b455);
    uVar2 = (undefined4)(thunk_FUN_103eb620(), 0);
    switch(uVar2) {
    case 0:
    case 2:
      ((SCStr *)((SCStr *)&pcStack_8))->int_allocRep("login_account");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
      return;
    case 1:
      ((SCStr *)((SCStr *)&pcStack_8))->int_allocRep("need_password");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
      return;
    case 3:
      pcStack_8 = (char *)("Email check failed: Not Match, should never get");
      break;
    case 4:
      ((SCStr *)((SCStr *)&pcStack_8))->int_allocRep("create_account");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
      return;
    case 0xfffffffe:
      pcStack_8 = (char *)("Email check failed: network error");
      break;
    default:
      goto LAB_10e2b4ee;
    }
    thunk_FUN_112af4e0("sec_reg",1);
    ((SCStr *)((SCStr *)&pcStack_8))->int_allocRep("network_error");
    (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
  }
LAB_10e2b4ee:
  return;
}


// Reference entry 10e2b550; body size 56 bytes.
#line 1 "ENTRY_10e2b550"

void __thiscall Recovered_Bulk::m_FUN_10e2b550(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_8;
  
  if (*(int **)(param_1 + 0x10) == (int *)((0x0))) {
    iVar1 = (int)(0);
  }
  else {
    uStack_8 = (undefined4)(0x10e2b55f);
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x10) + 0x20))(), 0);
  }
  if (param_2 == iVar1) {
    uStack_8 = (undefined4)(0x10e2b575);
    uVar2 = (undefined4)(thunk_FUN_103eb620(), 0);
    switch(uVar2) {
    case 0:
    case 2:
      ((SCStr *)((SCStr *)&uStack_8))->int_allocRep("password_set");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
      return;
    case 1:
      ((SCStr *)((SCStr *)&uStack_8))->int_allocRep("password_unset");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
      return;
    case 0xfffffffe:
    case 3:
    case 4:
      uStack_8 = (undefined4)(0x10e2b5c4);
      uStack_8 = (undefined4)(thunk_FUN_103eb620(), 0);
      thunk_FUN_112af4e0("sec_reg",1,"Password Check failed: %d");
      ((SCStr *)((SCStr *)&uStack_8))->int_allocRep("network_error");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
    }
  }
  return;
}


// Reference entry 10e2bfe0; body size 60 bytes.
#line 1 "ENTRY_10e2bfe0"

void __thiscall Recovered_Bulk::m_FUN_10e2bfe0(int param_2,ushort param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 uVar2;
  uint uStack_8;
  
  if (*(int **)(param_1 + 0x10) == (int *)((0x0))) {
    iVar1 = (int)(0);
  }
  else {
    uStack_8 = (uint)(0x10e2bfef);
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x10) + 0x20))(), 0);
  }
  if (param_2 == iVar1) {
    uStack_8 = (uint)(0x10e2c005);
    uVar2 = (undefined4)(thunk_FUN_103eb560(), 0);
    switch(uVar2) {
    case 0:
      uStack_8 = (uint)(1);
      thunk_FUN_10e44d70();
      ((SCStr *)((SCStr *)&uStack_8))->int_allocRep("login.success");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
      return;
    case 1:
      uStack_8 = (uint)(0);
      thunk_FUN_10e44d70();
      ((SCStr *)((SCStr *)&uStack_8))->int_allocRep("login.verify");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
      return;
    case 0xfffffffe:
    case 2:
    case 3:
      uStack_8 = (uint)((uint)param_3);
      thunk_FUN_112af4e0("sec_reg",1,"Error in login %d");
      ((SCStr *)((SCStr *)&uStack_8))->int_allocRep("network_error");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
    }
  }
  return;
}


// Reference entry 10e2ccf0; body size 47 bytes.
#line 1 "ENTRY_10e2ccf0"

undefined4 __fastcall FUN_10e2ccf0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x1c) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x1c) + 0x30))(), 0);
    if ((cVar1 != '\0') && (*(int **)(param_1 + 0x24) != (int *)((0x0)))) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x24) + 0x30))(), 0);
      if (cVar1 != '\0') {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e2d310; body size 41 bytes.
#line 1 "ENTRY_10e2d310"

void __fastcall FUN_10e2d310(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x14) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x14) + 0x1c))(), 0);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x14) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x10) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e2d350; body size 41 bytes.
#line 1 "ENTRY_10e2d350"

void __fastcall FUN_10e2d350(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))(), 0);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x10) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0xc) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e2d390; body size 41 bytes.
#line 1 "ENTRY_10e2d390"

void __fastcall FUN_10e2d390(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))(), 0);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x10) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0xc) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e2d510; body size 41 bytes.
#line 1 "ENTRY_10e2d510"

void __fastcall FUN_10e2d510(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x38) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x38) + 0x1c))(), 0);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x38) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x34) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e2d550; body size 41 bytes.
#line 1 "ENTRY_10e2d550"

void __fastcall FUN_10e2d550(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))(), 0);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x10) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0xc) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e2d600; body size 41 bytes.
#line 1 "ENTRY_10e2d600"

void __fastcall FUN_10e2d600(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0x1c))(), 0);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x18) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x14) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e2d640; body size 41 bytes.
#line 1 "ENTRY_10e2d640"

void __fastcall FUN_10e2d640(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0x1c))(), 0);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x18) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x14) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e2d680; body size 41 bytes.
#line 1 "ENTRY_10e2d680"

void __fastcall FUN_10e2d680(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))(), 0);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x10) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0xc) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e2d6c0; body size 42 bytes.
#line 1 "ENTRY_10e2d6c0"

undefined4 * __fastcall FUN_10e2d6c0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e2d700; body size 42 bytes.
#line 1 "ENTRY_10e2d700"

undefined4 * __fastcall FUN_10e2d700(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e2e8a0; body size 28 bytes.
#line 1 "ENTRY_10e2e8a0"

void FUN_10e2e8a0(void)

{
  SCStr aSStack_c [4];
  
  ((SCStr *)((uint)&aSStack_c))->int_allocRep("sec_registration.complete");
  thunk_FUN_10e3cae0();
  return;
}


// Reference entry 10e2e8d0; body size 28 bytes.
#line 1 "ENTRY_10e2e8d0"

void FUN_10e2e8d0(void)

{
  SCStr aSStack_c [4];
  
  ((SCStr *)((uint)&aSStack_c))->int_allocRep("sec_registration.data_opt_in_submit");
  thunk_FUN_10e3cae0();
  return;
}


// Reference entry 10e2f1f0; body size 21 bytes.
#line 1 "ENTRY_10e2f1f0"

SCStr * __stdcall FUN_10e2f1f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCPasswordResetURLHandler");
  return (SCStr *)(param_1);
}


// Reference entry 10e2f210; body size 21 bytes.
#line 1 "ENTRY_10e2f210"

SCStr * __stdcall FUN_10e2f210(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCVerifyEmailURLHandler");
  return (SCStr *)(param_1);
}


// Reference entry 10e302d0; body size 21 bytes.
#line 1 "ENTRY_10e302d0"

undefined4 __fastcall FUN_10e302d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0x11);
  if (*(char *)(param_1 + 0x108) != '\0') {
    uVar1 = (undefined4)(10);
  }
  return (undefined4)(uVar1);
}


// Reference entry 10e30410; body size 21 bytes.
#line 1 "ENTRY_10e30410"

undefined4 __fastcall FUN_10e30410(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0xb);
  if (*(char *)(param_1 + 0x88) != '\0') {
    uVar1 = (undefined4)(8);
  }
  return (undefined4)(uVar1);
}


// Reference entry 10e30430; body size 21 bytes.
#line 1 "ENTRY_10e30430"

undefined4 __fastcall FUN_10e30430(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0xc);
  if (*(char *)(param_1 + 0x80) != '\0') {
    uVar1 = (undefined4)(9);
  }
  return (undefined4)(uVar1);
}


// Reference entry 10e30450; body size 21 bytes.
#line 1 "ENTRY_10e30450"

SCStr * __stdcall FUN_10e30450(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_registration.account_email");
  return (SCStr *)(param_1);
}


// Reference entry 10e30470; body size 21 bytes.
#line 1 "ENTRY_10e30470"

SCStr * __stdcall FUN_10e30470(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_registration.account_email_submit");
  return (SCStr *)(param_1);
}


// Reference entry 10e30490; body size 21 bytes.
#line 1 "ENTRY_10e30490"

SCStr * __stdcall FUN_10e30490(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_registration.error.account_already_exists");
  return (SCStr *)(param_1);
}


// Reference entry 10e304b0; body size 21 bytes.
#line 1 "ENTRY_10e304b0"

SCStr * __stdcall FUN_10e304b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_registration.password_email_submit");
  return (SCStr *)(param_1);
}


// Reference entry 10e304d0; body size 21 bytes.
#line 1 "ENTRY_10e304d0"

SCStr * __stdcall FUN_10e304d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_registration.complete");
  return (SCStr *)(param_1);
}


// Reference entry 10e304f0; body size 21 bytes.
#line 1 "ENTRY_10e304f0"

SCStr * __stdcall FUN_10e304f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_registration.country");
  return (SCStr *)(param_1);
}


// Reference entry 10e30510; body size 37 bytes.
#line 1 "ENTRY_10e30510"

SCStr * __thiscall Recovered_Bulk::m_FUN_10e30510(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  
  pcVar1 = (char *)("sec_registration.account_create_password");
  if (*(char *)(param_1 + 0x108) == '\0') {
    pcVar1 = (char *)("sec_registration.reset_password_input");
  }
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 10e30540; body size 21 bytes.
#line 1 "ENTRY_10e30540"

SCStr * __stdcall FUN_10e30540(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_registration.account_created");
  return (SCStr *)(param_1);
}


// Reference entry 10e30560; body size 21 bytes.
#line 1 "ENTRY_10e30560"

SCStr * __stdcall FUN_10e30560(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_registration.data_opt_in_submit");
  return (SCStr *)(param_1);
}


// Reference entry 10e30580; body size 21 bytes.
#line 1 "ENTRY_10e30580"

SCStr * __stdcall FUN_10e30580(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("secure_registration.init");
  return (SCStr *)(param_1);
}


// Reference entry 10e305a0; body size 21 bytes.
#line 1 "ENTRY_10e305a0"

SCStr * __stdcall FUN_10e305a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_registration.login_prep");
  return (SCStr *)(param_1);
}


// Reference entry 10e305c0; body size 21 bytes.
#line 1 "ENTRY_10e305c0"

SCStr * __stdcall FUN_10e305c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_registration.input_login");
  return (SCStr *)(param_1);
}


// Reference entry 10e305e0; body size 21 bytes.
#line 1 "ENTRY_10e305e0"

SCStr * __stdcall FUN_10e305e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_registration.login_submit");
  return (SCStr *)(param_1);
}


// Reference entry 10e30600; body size 21 bytes.
#line 1 "ENTRY_10e30600"

SCStr * __stdcall FUN_10e30600(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_registration.error.network");
  return (SCStr *)(param_1);
}


// Reference entry 10e30620; body size 21 bytes.
#line 1 "ENTRY_10e30620"

SCStr * __stdcall FUN_10e30620(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_registration.new_account_intro");
  return (SCStr *)(param_1);
}


// Reference entry 10e30640; body size 21 bytes.
#line 1 "ENTRY_10e30640"

SCStr * __stdcall FUN_10e30640(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_registration.error.new_account.network");
  return (SCStr *)(param_1);
}


// Reference entry 10e30660; body size 21 bytes.
#line 1 "ENTRY_10e30660"

SCStr * __stdcall FUN_10e30660(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_registration.new_account");
  return (SCStr *)(param_1);
}


// Reference entry 10e30680; body size 21 bytes.
#line 1 "ENTRY_10e30680"

SCStr * __stdcall FUN_10e30680(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_registration.password_set");
  return (SCStr *)(param_1);
}


// Reference entry 10e306a0; body size 21 bytes.
#line 1 "ENTRY_10e306a0"

SCStr * __stdcall FUN_10e306a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_registration.phone");
  return (SCStr *)(param_1);
}


// Reference entry 10e306c0; body size 21 bytes.
#line 1 "ENTRY_10e306c0"

SCStr * __stdcall FUN_10e306c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_registration.postal");
  return (SCStr *)(param_1);
}


// Reference entry 10e306e0; body size 21 bytes.
#line 1 "ENTRY_10e306e0"

SCStr * __stdcall FUN_10e306e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_registration.reset_password_email_fail");
  return (SCStr *)(param_1);
}


// Reference entry 10e30700; body size 21 bytes.
#line 1 "ENTRY_10e30700"

SCStr * __stdcall FUN_10e30700(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_registration.reset_password_fail");
  return (SCStr *)(param_1);
}


// Reference entry 10e30720; body size 21 bytes.
#line 1 "ENTRY_10e30720"

SCStr * __stdcall FUN_10e30720(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_registration.reset_password");
  return (SCStr *)(param_1);
}


// Reference entry 10e30740; body size 21 bytes.
#line 1 "ENTRY_10e30740"

SCStr * __stdcall FUN_10e30740(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_registration.reset_password_success_other");
  return (SCStr *)(param_1);
}


// Reference entry 10e30760; body size 21 bytes.
#line 1 "ENTRY_10e30760"

SCStr * __stdcall FUN_10e30760(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_registration.verify_email_error");
  return (SCStr *)(param_1);
}


// Reference entry 10e30780; body size 37 bytes.
#line 1 "ENTRY_10e30780"

SCStr * __thiscall Recovered_Bulk::m_FUN_10e30780(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  
  pcVar1 = (char *)("sec_registration.verify_email.existing");
  if (*(char *)(param_1 + 0x88) == '\0') {
    pcVar1 = (char *)("sec_registration.verify_email");
  }
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 10e307b0; body size 37 bytes.
#line 1 "ENTRY_10e307b0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10e307b0(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  
  pcVar1 = (char *)("sec_registration.verify_email_submit.existing");
  if (*(char *)(param_1 + 0x80) == '\0') {
    pcVar1 = (char *)("sec_registration.verify_email_submit");
  }
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 10e30890; body size 18 bytes.
#line 1 "ENTRY_10e30890"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e30890(int param_2)
{
  int param_1 = (int )this;
  if (param_2 == 0) {
    return (undefined4)(*(undefined4 *)(param_1 + 0xc));
  }
  return (undefined4)(0);
}


// Reference entry 10e30b00; body size 48 bytes.
#line 1 "ENTRY_10e30b00"

int * __thiscall Recovered_Bulk::m_FUN_10e30b00(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_3 == 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x88), 0);
    *param_2 = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
    return (int *)(param_2);
  }
  *param_2 = (int)(0);
  return (int *)(param_2);
}


// Reference entry 10e30b40; body size 45 bytes.
#line 1 "ENTRY_10e30b40"

int * __thiscall Recovered_Bulk::m_FUN_10e30b40(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_3 == 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x1c), 0);
    *param_2 = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
    return (int *)(param_2);
  }
  *param_2 = (int)(0);
  return (int *)(param_2);
}


// Reference entry 10e30c40; body size 45 bytes.
#line 1 "ENTRY_10e30c40"

int * __thiscall Recovered_Bulk::m_FUN_10e30c40(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_3 != 0) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x10), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10e30c80; body size 45 bytes.
#line 1 "ENTRY_10e30c80"

int * __thiscall Recovered_Bulk::m_FUN_10e30c80(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_3 != 0) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x10), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10e381c0; body size 21 bytes.
#line 1 "ENTRY_10e381c0"

SCStr * __stdcall FUN_10e381c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SecureRegistrationWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10e3e500; body size 19 bytes.
#line 1 "ENTRY_10e3e500"

bool __fastcall FUN_10e3e500(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 8) + 0xf8))(), 0);
  return (bool)(cVar1 == '\0');
}


// Reference entry 10e3e990; body size 20 bytes.
#line 1 "ENTRY_10e3e990"

void __fastcall FUN_10e3e990(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x44))();
                    
                    
  (**(code **)(**(int **)(param_1 + 0x24) + 0x44))();
  return;
}


// Reference entry 10e3f460; body size 23 bytes.
#line 1 "ENTRY_10e3f460"

void __fastcall FUN_10e3f460(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x7c) + 0x40))();
                    
                    
  (**(code **)(**(int **)(param_1 + -4) + 0x88))();
  return;
}


// Reference entry 10e3f480; body size 38 bytes.
#line 1 "ENTRY_10e3f480"

void __fastcall FUN_10e3f480(int param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 4) + 0x34))(), 0);
  if (iVar1 == 4) {
    (**(code **)(**(int **)(param_1 + 4) + 0x40))();
                    
                    
    (**(code **)(**(int **)(param_1 + -0x10) + 0x88))();
    return;
  }
  return;
}


// Reference entry 10e46b00; body size 59 bytes.
#line 1 "ENTRY_10e46b00"

void __thiscall Recovered_Bulk::m_FUN_10e46b00(undefined4 *param_2)
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
  thunk_FUN_10e46300(puVar1,param_2);
  return;
}


// Reference entry 10e47340; body size 17 bytes.
#line 1 "ENTRY_10e47340"

void __fastcall FUN_10e47340(undefined4 *param_1)

{
  thunk_FUN_10e460f0(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 10e47360; body size 17 bytes.
#line 1 "ENTRY_10e47360"

void __fastcall FUN_10e47360(undefined4 *param_1)

{
  thunk_FUN_10e46190(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 10e47b70; body size 33 bytes.
#line 1 "ENTRY_10e47b70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e47b70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e47ba0; body size 33 bytes.
#line 1 "ENTRY_10e47ba0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e47ba0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e47bd0; body size 33 bytes.
#line 1 "ENTRY_10e47bd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e47bd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e47c00; body size 33 bytes.
#line 1 "ENTRY_10e47c00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e47c00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e47d70; body size 33 bytes.
#line 1 "ENTRY_10e47d70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e47d70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e47da0; body size 33 bytes.
#line 1 "ENTRY_10e47da0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e47da0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e47dd0; body size 33 bytes.
#line 1 "ENTRY_10e47dd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e47dd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e47ed0; body size 33 bytes.
#line 1 "ENTRY_10e47ed0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e47ed0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e47f00; body size 33 bytes.
#line 1 "ENTRY_10e47f00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e47f00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e47f30; body size 33 bytes.
#line 1 "ENTRY_10e47f30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e47f30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e47f60; body size 33 bytes.
#line 1 "ENTRY_10e47f60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e47f60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e47f90; body size 33 bytes.
#line 1 "ENTRY_10e47f90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e47f90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e483a0; body size 20 bytes.
#line 1 "ENTRY_10e483a0"

void __thiscall Recovered_Bulk::m_FUN_10e483a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e460f0(param_2,param_3,param_1);
  return;
}


// Reference entry 10e483c0; body size 20 bytes.
#line 1 "ENTRY_10e483c0"

void __thiscall Recovered_Bulk::m_FUN_10e483c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e46190(param_2,param_3,param_1);
  return;
}


// Reference entry 10e48ba0; body size 37 bytes.
#line 1 "ENTRY_10e48ba0"

undefined1 __fastcall FUN_10e48ba0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x58))(), 0);
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e48c10; body size 37 bytes.
#line 1 "ENTRY_10e48c10"

undefined1 __fastcall FUN_10e48c10(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x60))(), 0);
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e48d30; body size 24 bytes.
#line 1 "ENTRY_10e48d30"

void __fastcall FUN_10e48d30(undefined4 *param_1)

{
  thunk_FUN_10e46190(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10e48e80; body size 42 bytes.
#line 1 "ENTRY_10e48e80"

undefined4 * __fastcall FUN_10e48e80(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSecurePlayerCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e48ec0; body size 42 bytes.
#line 1 "ENTRY_10e48ec0"

undefined4 * __fastcall FUN_10e48ec0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSecurePlayerInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e49720; body size 28 bytes.
#line 1 "ENTRY_10e49720"

void FUN_10e49720(void)

{
  SCStr aSStack_c [4];
  
  ((SCStr *)((uint)&aSStack_c))->int_allocRep("sec_player.complete");
  thunk_FUN_10e4ddb0();
  return;
}


// Reference entry 10e4a2e0; body size 28 bytes.
#line 1 "ENTRY_10e4a2e0"

void FUN_10e4a2e0(void)

{
  SCStr aSStack_c [4];
  
  ((SCStr *)((uint)&aSStack_c))->int_allocRep("sec_player.complete");
  thunk_FUN_10e4ddb0();
  return;
}


// Reference entry 10e4a310; body size 28 bytes.
#line 1 "ENTRY_10e4a310"

void FUN_10e4a310(void)

{
  SCStr aSStack_c [4];
  
  ((SCStr *)((uint)&aSStack_c))->int_allocRep("sec_player.complete");
  thunk_FUN_10e4ddb0();
  return;
}


// Reference entry 10e4a6b0; body size 60 bytes.
#line 1 "ENTRY_10e4a6b0"

void __stdcall FUN_10e4a6b0(int param_1,int param_2)

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


// Reference entry 10e4a700; body size 60 bytes.
#line 1 "ENTRY_10e4a700"

void __stdcall FUN_10e4a700(int param_1,int param_2)

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


// Reference entry 10e4ad50; body size 34 bytes.
#line 1 "ENTRY_10e4ad50"

undefined4 __fastcall FUN_10e4ad50(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
    if (cVar1 == '\0') {
                    
                    
      uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc) + 0x14))(), 0);
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e4ae30; body size 21 bytes.
#line 1 "ENTRY_10e4ae30"

SCStr * __stdcall FUN_10e4ae30(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_player_calc_confirm");
  return (SCStr *)(param_1);
}


// Reference entry 10e4ae50; body size 21 bytes.
#line 1 "ENTRY_10e4ae50"

SCStr * __stdcall FUN_10e4ae50(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_player.complete");
  return (SCStr *)(param_1);
}


// Reference entry 10e4ae70; body size 21 bytes.
#line 1 "ENTRY_10e4ae70"

SCStr * __stdcall FUN_10e4ae70(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_player_confirm");
  return (SCStr *)(param_1);
}


// Reference entry 10e4ae90; body size 21 bytes.
#line 1 "ENTRY_10e4ae90"

SCStr * __stdcall FUN_10e4ae90(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_player_do_register");
  return (SCStr *)(param_1);
}


// Reference entry 10e4aeb0; body size 21 bytes.
#line 1 "ENTRY_10e4aeb0"

SCStr * __stdcall FUN_10e4aeb0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_player_failure_bad_token");
  return (SCStr *)(param_1);
}


// Reference entry 10e4aed0; body size 21 bytes.
#line 1 "ENTRY_10e4aed0"

SCStr * __stdcall FUN_10e4aed0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_player_failure");
  return (SCStr *)(param_1);
}


// Reference entry 10e4aef0; body size 21 bytes.
#line 1 "ENTRY_10e4aef0"

SCStr * __stdcall FUN_10e4aef0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("init");
  return (SCStr *)(param_1);
}


// Reference entry 10e4af10; body size 21 bytes.
#line 1 "ENTRY_10e4af10"

SCStr * __stdcall FUN_10e4af10(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_player_link_players_intro");
  return (SCStr *)(param_1);
}


// Reference entry 10e4af30; body size 21 bytes.
#line 1 "ENTRY_10e4af30"

SCStr * __stdcall FUN_10e4af30(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_player_success");
  return (SCStr *)(param_1);
}


// Reference entry 10e4af50; body size 21 bytes.
#line 1 "ENTRY_10e4af50"

SCStr * __stdcall FUN_10e4af50(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_player_transfer_failure");
  return (SCStr *)(param_1);
}


// Reference entry 10e4af70; body size 21 bytes.
#line 1 "ENTRY_10e4af70"

SCStr * __stdcall FUN_10e4af70(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sec_player_unconfirmed");
  return (SCStr *)(param_1);
}


// Reference entry 10e4afb0; body size 30 bytes.
#line 1 "ENTRY_10e4afb0"

undefined4 __fastcall FUN_10e4afb0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e4afe0; body size 26 bytes.
#line 1 "ENTRY_10e4afe0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e4afe0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e4b000; body size 35 bytes.
#line 1 "ENTRY_10e4b000"

SCStr * __stdcall FUN_10e4b000(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x20f0,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10e4b030; body size 23 bytes.
#line 1 "ENTRY_10e4b030"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e4b030(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e4d360; body size 21 bytes.
#line 1 "ENTRY_10e4d360"

SCStr * __stdcall FUN_10e4d360(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SecurePlayerWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10e4e2d0; body size 24 bytes.
#line 1 "ENTRY_10e4e2d0"

undefined4 __fastcall FUN_10e4e2d0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x40))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e4e380; body size 39 bytes.
#line 1 "ENTRY_10e4e380"

undefined4 __fastcall FUN_10e4e380(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x9c))(), 0);
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x6c))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e4e410; body size 63 bytes.
#line 1 "ENTRY_10e4e410"

undefined1 FUN_10e4e410(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateChanged"), 0);
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateTransitionsEnabled"), 0);
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateUpdate"), 0);
      if (!bVar1) {
        return (undefined1)(0);
      }
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e4e530; body size 61 bytes.
#line 1 "ENTRY_10e4e530"

void __fastcall FUN_10e4e530(int *param_1)

{
  char cVar1;
  
  if ((int *)param_1[3] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[3] + 0xcc))(param_1[5]);
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x30))(), 0);
    if (cVar1 == '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x94))(), 0);
      if (cVar1 == '\0') {
        thunk_FUN_10e4a9e0();
        return;
      }
    }
  }
  return;
}


// Reference entry 10e4e590; body size 59 bytes.
#line 1 "ENTRY_10e4e590"

void __thiscall Recovered_Bulk::m_FUN_10e4e590(undefined4 *param_2)
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
  thunk_FUN_10e46300(puVar1,param_2);
  return;
}


// Reference entry 10e51910; body size 33 bytes.
#line 1 "ENTRY_10e51910"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e51910(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e51ad0; body size 33 bytes.
#line 1 "ENTRY_10e51ad0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e51ad0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e51bd0; body size 33 bytes.
#line 1 "ENTRY_10e51bd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e51bd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e51ce0; body size 33 bytes.
#line 1 "ENTRY_10e51ce0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e51ce0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e51d10; body size 33 bytes.
#line 1 "ENTRY_10e51d10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e51d10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e51e10; body size 33 bytes.
#line 1 "ENTRY_10e51e10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e51e10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e51e40; body size 33 bytes.
#line 1 "ENTRY_10e51e40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e51e40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e51e70; body size 33 bytes.
#line 1 "ENTRY_10e51e70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e51e70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e523e0; body size 37 bytes.
#line 1 "ENTRY_10e523e0"

undefined1 __fastcall FUN_10e523e0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x58))(), 0);
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e52450; body size 37 bytes.
#line 1 "ENTRY_10e52450"

undefined1 __fastcall FUN_10e52450(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x60))(), 0);
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e52740; body size 33 bytes.
#line 1 "ENTRY_10e52740"

void __fastcall FUN_10e52740(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x14) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x14) + 0x1c))(), 0);
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0x10) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e53580; body size 42 bytes.
#line 1 "ENTRY_10e53580"

undefined4 * __fastcall FUN_10e53580(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferWizCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e535c0; body size 42 bytes.
#line 1 "ENTRY_10e535c0"

undefined4 * __fastcall FUN_10e535c0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferWizInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e53d00; body size 45 bytes.
#line 1 "ENTRY_10e53d00"

undefined4 * __fastcall FUN_10e53d00(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferWizCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e54630; body size 45 bytes.
#line 1 "ENTRY_10e54630"

undefined4 * __fastcall FUN_10e54630(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferWizCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e54940; body size 45 bytes.
#line 1 "ENTRY_10e54940"

undefined4 * __fastcall FUN_10e54940(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferWizIntroState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e55520; body size 34 bytes.
#line 1 "ENTRY_10e55520"

undefined4 __fastcall FUN_10e55520(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
    if (cVar1 == '\0') {
                    
                    
      uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc) + 0x14))(), 0);
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e555f0; body size 21 bytes.
#line 1 "ENTRY_10e555f0"

SCStr * __stdcall FUN_10e555f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SECURE_TRANSFER_BEGIN_SECURE_TRANSFER");
  return (SCStr *)(param_1);
}


// Reference entry 10e55610; body size 21 bytes.
#line 1 "ENTRY_10e55610"

SCStr * __stdcall FUN_10e55610(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SECURE_TRANSFER_EXISTING_BUTTONS");
  return (SCStr *)(param_1);
}


// Reference entry 10e55630; body size 21 bytes.
#line 1 "ENTRY_10e55630"

SCStr * __stdcall FUN_10e55630(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SECURE_TRANSFER_ERROR_NETWORK");
  return (SCStr *)(param_1);
}


// Reference entry 10e55650; body size 21 bytes.
#line 1 "ENTRY_10e55650"

SCStr * __stdcall FUN_10e55650(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SECURE_TRANSFER_PRESS_BUTTON");
  return (SCStr *)(param_1);
}


// Reference entry 10e55670; body size 21 bytes.
#line 1 "ENTRY_10e55670"

SCStr * __stdcall FUN_10e55670(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SECURE_TRANSFER_SPEAKER_CHOICE");
  return (SCStr *)(param_1);
}


// Reference entry 10e55690; body size 21 bytes.
#line 1 "ENTRY_10e55690"

SCStr * __stdcall FUN_10e55690(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SECURE_TRANSFER_PLAYER_SUCCESS");
  return (SCStr *)(param_1);
}


// Reference entry 10e556b0; body size 21 bytes.
#line 1 "ENTRY_10e556b0"

SCStr * __stdcall FUN_10e556b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SECURE_TRANSFER_WAITING_FOR_TRANSFER");
  return (SCStr *)(param_1);
}


// Reference entry 10e556d0; body size 21 bytes.
#line 1 "ENTRY_10e556d0"

SCStr * __stdcall FUN_10e556d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SECURE_TRANSFER_COMPLETE");
  return (SCStr *)(param_1);
}


// Reference entry 10e556f0; body size 21 bytes.
#line 1 "ENTRY_10e556f0"

SCStr * __stdcall FUN_10e556f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SECURE_TRANSFER_INIT");
  return (SCStr *)(param_1);
}


// Reference entry 10e55710; body size 21 bytes.
#line 1 "ENTRY_10e55710"

SCStr * __stdcall FUN_10e55710(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SECURE_TRANSFER_INTRO");
  return (SCStr *)(param_1);
}


// Reference entry 10e55750; body size 30 bytes.
#line 1 "ENTRY_10e55750"

undefined4 __fastcall FUN_10e55750(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e55780; body size 26 bytes.
#line 1 "ENTRY_10e55780"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e55780(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e557a0; body size 35 bytes.
#line 1 "ENTRY_10e557a0"

SCStr * __stdcall FUN_10e557a0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x20ef,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10e557d0; body size 23 bytes.
#line 1 "ENTRY_10e557d0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e557d0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e57980; body size 21 bytes.
#line 1 "ENTRY_10e57980"

SCStr * __stdcall FUN_10e57980(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SecureTransferWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10e58620; body size 60 bytes.
#line 1 "ENTRY_10e58620"

void __fastcall FUN_10e58620(int param_1)

{
  if (*(int *)(param_1 + 0x4c) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0x4c));
    *(undefined4*)(param_1 + 0x4c) = (undefined4)(0);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x38) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x38))(1);
    }
    *(undefined4*)(param_1 + 0x38) = (undefined4)(0);
  }
  return;
}


// Reference entry 10e58670; body size 37 bytes.
#line 1 "ENTRY_10e58670"

void __fastcall FUN_10e58670(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  }
  return;
}


// Reference entry 10e586a0; body size 37 bytes.
#line 1 "ENTRY_10e586a0"

void __fastcall FUN_10e586a0(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  }
  return;
}


// Reference entry 10e586d0; body size 16 bytes.
#line 1 "ENTRY_10e586d0"

uint __fastcall FUN_10e586d0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(*param_1 + 0x14))(), 0);
  if (iVar1 - 2U != 0) {
    return (uint)(iVar1 - 2U & 0xffffff00);
  }
  return (uint)(1);
}


// Reference entry 10e587e0; body size 24 bytes.
#line 1 "ENTRY_10e587e0"

undefined4 __fastcall FUN_10e587e0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x40))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e588a0; body size 39 bytes.
#line 1 "ENTRY_10e588a0"

undefined4 __fastcall FUN_10e588a0(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x9c))(), 0);
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x6c))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e588f0; body size 63 bytes.
#line 1 "ENTRY_10e588f0"

undefined1 FUN_10e588f0(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateChanged"), 0);
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateTransitionsEnabled"), 0);
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateUpdate"), 0);
      if (!bVar1) {
        return (undefined1)(0);
      }
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e590b0; body size 61 bytes.
#line 1 "ENTRY_10e590b0"

void __fastcall FUN_10e590b0(int *param_1)

{
  char cVar1;
  
  if ((int *)param_1[3] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[3] + 0xcc))(param_1[5]);
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x30))(), 0);
    if (cVar1 == '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x94))(), 0);
      if (cVar1 == '\0') {
        thunk_FUN_10e55410();
        return;
      }
    }
  }
  return;
}


// Reference entry 10e59100; body size 46 bytes.
#line 1 "ENTRY_10e59100"

void __fastcall FUN_10e59100(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x10) + 8))();
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  }
  return;
}


// Reference entry 10e59140; body size 46 bytes.
#line 1 "ENTRY_10e59140"

void __fastcall FUN_10e59140(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x10) + 8))();
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  }
  return;
}


// Reference entry 10e5abb0; body size 33 bytes.
#line 1 "ENTRY_10e5abb0"

void __thiscall Recovered_Bulk::m_FUN_10e5abb0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10e5abe0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10e5acb0; body size 49 bytes.
#line 1 "ENTRY_10e5acb0"

int __thiscall Recovered_Bulk::m_FUN_10e5acb0(uint *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10e5acf0((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || ((uint)(*param_2) < *(uint *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10e5bdb0; body size 41 bytes.
#line 1 "ENTRY_10e5bdb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e5bdb0(int *param_2)
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


// Reference entry 10e5bdf0; body size 41 bytes.
#line 1 "ENTRY_10e5bdf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e5bdf0(int *param_2)
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


// Reference entry 10e5be30; body size 41 bytes.
#line 1 "ENTRY_10e5be30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e5be30(int *param_2)
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


// Reference entry 10e5be70; body size 41 bytes.
#line 1 "ENTRY_10e5be70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e5be70(int *param_2)
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


// Reference entry 10e5c000; body size 48 bytes.
#line 1 "ENTRY_10e5c000"

undefined4 * __fastcall FUN_10e5c000(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10e5e300; body size 19 bytes.
#line 1 "ENTRY_10e5e300"

void __fastcall FUN_10e5e300(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10e5e320; body size 33 bytes.
#line 1 "ENTRY_10e5e320"

void __fastcall FUN_10e5e320(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e5e350; body size 33 bytes.
#line 1 "ENTRY_10e5e350"

void __fastcall FUN_10e5e350(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e5e380; body size 33 bytes.
#line 1 "ENTRY_10e5e380"

void __fastcall FUN_10e5e380(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e5e3b0; body size 33 bytes.
#line 1 "ENTRY_10e5e3b0"

void __fastcall FUN_10e5e3b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e5e3e0; body size 33 bytes.
#line 1 "ENTRY_10e5e3e0"

void __fastcall FUN_10e5e3e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e5e410; body size 28 bytes.
#line 1 "ENTRY_10e5e410"

void __fastcall FUN_10e5e410(int *param_1)

{
  thunk_FUN_10e5abe0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10e5e500; body size 17 bytes.
#line 1 "ENTRY_10e5e500"

void __fastcall FUN_10e5e500(undefined4 *param_1)

{
  thunk_FUN_10e5a5e0(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 10e5e520; body size 33 bytes.
#line 1 "ENTRY_10e5e520"

void __fastcall FUN_10e5e520(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e5e550; body size 33 bytes.
#line 1 "ENTRY_10e5e550"

void __fastcall FUN_10e5e550(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e5e580; body size 33 bytes.
#line 1 "ENTRY_10e5e580"

void __fastcall FUN_10e5e580(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e5e5b0; body size 33 bytes.
#line 1 "ENTRY_10e5e5b0"

void __fastcall FUN_10e5e5b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e5e5e0; body size 33 bytes.
#line 1 "ENTRY_10e5e5e0"

void __fastcall FUN_10e5e5e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e5e610; body size 28 bytes.
#line 1 "ENTRY_10e5e610"

void __fastcall FUN_10e5e610(int *param_1)

{
  thunk_FUN_10e5abe0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10e5f6b0; body size 37 bytes.
#line 1 "ENTRY_10e5f6b0"

int * __fastcall FUN_10e5f6b0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e5f6e0; body size 37 bytes.
#line 1 "ENTRY_10e5f6e0"

int * __fastcall FUN_10e5f6e0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e5f710; body size 37 bytes.
#line 1 "ENTRY_10e5f710"

int * __fastcall FUN_10e5f710(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e5f740; body size 37 bytes.
#line 1 "ENTRY_10e5f740"

int * __fastcall FUN_10e5f740(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e5f770; body size 37 bytes.
#line 1 "ENTRY_10e5f770"

int * __fastcall FUN_10e5f770(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e60050; body size 45 bytes.
#line 1 "ENTRY_10e60050"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e60050(byte param_2)
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


// Reference entry 10e60090; body size 32 bytes.
#line 1 "ENTRY_10e60090"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e60090(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e5db70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e600c0; body size 32 bytes.
#line 1 "ENTRY_10e600c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e600c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e5dc60();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e600f0; body size 32 bytes.
#line 1 "ENTRY_10e600f0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e600f0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e5dd50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e60120; body size 32 bytes.
#line 1 "ENTRY_10e60120"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e60120(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e5de40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e60150; body size 32 bytes.
#line 1 "ENTRY_10e60150"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e60150(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e5df30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e60240; body size 33 bytes.
#line 1 "ENTRY_10e60240"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e60240(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e60300; body size 48 bytes.
#line 1 "ENTRY_10e60300"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e60300(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthChecklistDownloadAlexaState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthChecklistDownloadAlexaState);
  thunk_FUN_10e5ef30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e60530; body size 33 bytes.
#line 1 "ENTRY_10e60530"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e60530(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e60640; body size 33 bytes.
#line 1 "ENTRY_10e60640"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e60640(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e60730; body size 33 bytes.
#line 1 "ENTRY_10e60730"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e60730(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e60760; body size 33 bytes.
#line 1 "ENTRY_10e60760"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e60760(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e60790; body size 35 bytes.
#line 1 "ENTRY_10e60790"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e60790(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e5ead0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x490);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e60880; body size 33 bytes.
#line 1 "ENTRY_10e60880"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e60880(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e608b0; body size 33 bytes.
#line 1 "ENTRY_10e608b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e608b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e609b0; body size 35 bytes.
#line 1 "ENTRY_10e609b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e609b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e5ef30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c0);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e609e0; body size 33 bytes.
#line 1 "ENTRY_10e609e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e609e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e60ae0; body size 33 bytes.
#line 1 "ENTRY_10e60ae0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e60ae0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e60d20; body size 33 bytes.
#line 1 "ENTRY_10e60d20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e60d20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e60e10; body size 33 bytes.
#line 1 "ENTRY_10e60e10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e60e10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e60e40; body size 33 bytes.
#line 1 "ENTRY_10e60e40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e60e40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e610d0; body size 25 bytes.
#line 1 "ENTRY_10e610d0"

void __fastcall FUN_10e610d0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10e61210; body size 20 bytes.
#line 1 "ENTRY_10e61210"

void __thiscall Recovered_Bulk::m_FUN_10e61210(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e5a5e0(param_2,param_3,param_1);
  return;
}


// Reference entry 10e61b20; body size 31 bytes.
#line 1 "ENTRY_10e61b20"

int * FUN_10e61b20(int *param_1)

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


// Reference entry 10e61cf0; body size 33 bytes.
#line 1 "ENTRY_10e61cf0"

void __fastcall FUN_10e61cf0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e61d20; body size 33 bytes.
#line 1 "ENTRY_10e61d20"

void __fastcall FUN_10e61d20(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e61d50; body size 33 bytes.
#line 1 "ENTRY_10e61d50"

void __fastcall FUN_10e61d50(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e61d80; body size 33 bytes.
#line 1 "ENTRY_10e61d80"

void __fastcall FUN_10e61d80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e61db0; body size 33 bytes.
#line 1 "ENTRY_10e61db0"

void __fastcall FUN_10e61db0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e62aa0; body size 33 bytes.
#line 1 "ENTRY_10e62aa0"

void __thiscall Recovered_Bulk::m_FUN_10e62aa0(int param_2, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int **)(param_1 + 0x24) == (int *)((0x0))) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x24) + 0x20))(), 0);
  }
  if (param_2 == iVar1) {
    *(undefined1*)(param_1 + 0x18) = (undefined1)(0);
  }
  return;
}


// Reference entry 10e65ed0; body size 37 bytes.
#line 1 "ENTRY_10e65ed0"

undefined1 __fastcall FUN_10e65ed0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x58))(), 0);
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e66010; body size 37 bytes.
#line 1 "ENTRY_10e66010"

undefined1 __fastcall FUN_10e66010(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x60))(), 0);
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e66420; body size 33 bytes.
#line 1 "ENTRY_10e66420"

void __fastcall FUN_10e66420(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0x1c))(), 0);
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0x14) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e66450; body size 33 bytes.
#line 1 "ENTRY_10e66450"

void __fastcall FUN_10e66450(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(), 0);
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0x20) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e667a0; body size 60 bytes.
#line 1 "ENTRY_10e667a0"

void __fastcall FUN_10e667a0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))(), 0);
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0xc) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x78) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x78) + 0x1c))(), 0);
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0x74) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e66930; body size 33 bytes.
#line 1 "ENTRY_10e66930"

void __fastcall FUN_10e66930(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x14) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x14) + 0x1c))(), 0);
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0x10) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e66ae0; body size 61 bytes.
#line 1 "ENTRY_10e66ae0"

void __fastcall FUN_10e66ae0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x84) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x84) + 0x1c))(), 0);
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x80) + 4))();
      thunk_FUN_112af4e0("AlexaAuthWizard",2, "SCAlexaAuthReminderState:cancelTimeout() - Canceling polling timeout");
    }
  }
  return;
}


// Reference entry 10e66b50; body size 33 bytes.
#line 1 "ENTRY_10e66b50"

void __fastcall FUN_10e66b50(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10e5abe0(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10e66b80; body size 24 bytes.
#line 1 "ENTRY_10e66b80"

void __fastcall FUN_10e66b80(undefined4 *param_1)

{
  thunk_FUN_10e5a5e0(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10e66bc0; body size 42 bytes.
#line 1 "ENTRY_10e66bc0"

undefined4 * __fastcall FUN_10e66bc0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e66ec0; body size 45 bytes.
#line 1 "ENTRY_10e66ec0"

undefined4 * __fastcall FUN_10e66ec0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e68250; body size 49 bytes.
#line 1 "ENTRY_10e68250"

undefined4 * __fastcall FUN_10e68250(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0x10), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthEnableAckChimeState);
    *(undefined1*)(puVar2 + 3) = (undefined1)(0);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e685c0; body size 43 bytes.
#line 1 "ENTRY_10e685c0"

undefined4 __fastcall FUN_10e685c0(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  
  pvVar1 = (void *)(operator_new(0x490), 0);
  if ((void *)(pvVar1) != (void *)(0x0)) {
    uVar2 = (undefined4)(thunk_FUN_10e5ca20(*(undefined4 *)(param_1 + 8)), 0);
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 10e69350; body size 59 bytes.
#line 1 "ENTRY_10e69350"

void __stdcall FUN_10e69350(int param_1,int param_2)

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


// Reference entry 10e69660; body size 21 bytes.
#line 1 "ENTRY_10e69660"

SCStr * __stdcall FUN_10e69660(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCVoiceResponseHandler");
  return (SCStr *)(param_1);
}


// Reference entry 10e698c0; body size 34 bytes.
#line 1 "ENTRY_10e698c0"

undefined4 __fastcall FUN_10e698c0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
    if (cVar1 == '\0') {
                    
                    
      uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc) + 0x14))(), 0);
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e69a20; body size 21 bytes.
#line 1 "ENTRY_10e69a20"

SCStr * __stdcall FUN_10e69a20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ALEXA_AUTH_CHECKLIST_DOWNLOAD_ALEXA");
  return (SCStr *)(param_1);
}


// Reference entry 10e69a40; body size 21 bytes.
#line 1 "ENTRY_10e69a40"

SCStr * __stdcall FUN_10e69a40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ALEXA_AUTH_CHECKLIST_MSP_ALEXA_EDUCATION");
  return (SCStr *)(param_1);
}


// Reference entry 10e69a60; body size 21 bytes.
#line 1 "ENTRY_10e69a60"

SCStr * __stdcall FUN_10e69a60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ALEXA_AUTH_CHECKLIST_VOICE_EDUCATION");
  return (SCStr *)(param_1);
}


// Reference entry 10e69a80; body size 21 bytes.
#line 1 "ENTRY_10e69a80"

SCStr * __stdcall FUN_10e69a80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ALEXA_AUTH_COMPLETE");
  return (SCStr *)(param_1);
}


// Reference entry 10e69aa0; body size 21 bytes.
#line 1 "ENTRY_10e69aa0"

SCStr * __stdcall FUN_10e69aa0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ALEXA_ENABLE_ACK_CHIME_SPINNER_STATE");
  return (SCStr *)(param_1);
}


// Reference entry 10e69ac0; body size 21 bytes.
#line 1 "ENTRY_10e69ac0"

SCStr * __stdcall FUN_10e69ac0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ALEXA_ENABLE_ACK_CHIME_STATE");
  return (SCStr *)(param_1);
}


// Reference entry 10e69ae0; body size 21 bytes.
#line 1 "ENTRY_10e69ae0"

SCStr * __stdcall FUN_10e69ae0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ALEXA_AUTH_GENERIC_ERROR");
  return (SCStr *)(param_1);
}


// Reference entry 10e69b00; body size 21 bytes.
#line 1 "ENTRY_10e69b00"

SCStr * __stdcall FUN_10e69b00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ALEXA_AUTH_INIT");
  return (SCStr *)(param_1);
}


// Reference entry 10e69b20; body size 21 bytes.
#line 1 "ENTRY_10e69b20"

SCStr * __stdcall FUN_10e69b20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ALEXA_AUTH_INTRO_STATE");
  return (SCStr *)(param_1);
}


// Reference entry 10e69b40; body size 21 bytes.
#line 1 "ENTRY_10e69b40"

SCStr * __stdcall FUN_10e69b40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ALEXA_AUTH_LWA");
  return (SCStr *)(param_1);
}


// Reference entry 10e69b60; body size 21 bytes.
#line 1 "ENTRY_10e69b60"

SCStr * __stdcall FUN_10e69b60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ALEXA_AUTH_LOW_MEMORY_ERROR");
  return (SCStr *)(param_1);
}


// Reference entry 10e69b80; body size 21 bytes.
#line 1 "ENTRY_10e69b80"

SCStr * __stdcall FUN_10e69b80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ALEXA_AUTH_MIC_INFO");
  return (SCStr *)(param_1);
}


// Reference entry 10e69ba0; body size 21 bytes.
#line 1 "ENTRY_10e69ba0"

SCStr * __stdcall FUN_10e69ba0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ALEXA_AUTH_MISSING_PLAYERS_ERROR");
  return (SCStr *)(param_1);
}


// Reference entry 10e69bc0; body size 21 bytes.
#line 1 "ENTRY_10e69bc0"

SCStr * __stdcall FUN_10e69bc0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ALEXA_AUTH_PUSH_AUTH_CODE");
  return (SCStr *)(param_1);
}


// Reference entry 10e69be0; body size 21 bytes.
#line 1 "ENTRY_10e69be0"

SCStr * __stdcall FUN_10e69be0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ALEXA_AUTH_ROOM");
  return (SCStr *)(param_1);
}


// Reference entry 10e69c00; body size 21 bytes.
#line 1 "ENTRY_10e69c00"

SCStr * __stdcall FUN_10e69c00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("alexa_auth.select_rooms");
  return (SCStr *)(param_1);
}


// Reference entry 10e69c20; body size 21 bytes.
#line 1 "ENTRY_10e69c20"

SCStr * __stdcall FUN_10e69c20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ALEXA_AUTH_AUTH_SUCCESS");
  return (SCStr *)(param_1);
}


// Reference entry 10e69c40; body size 21 bytes.
#line 1 "ENTRY_10e69c40"

SCStr * __stdcall FUN_10e69c40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ALEXA_AUTH_WRONG_ACCOUNT_ERROR");
  return (SCStr *)(param_1);
}


// Reference entry 10e69c60; body size 21 bytes.
#line 1 "ENTRY_10e69c60"

SCStr * __stdcall FUN_10e69c60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ALEXA_AUTH_WRONG_ACCOUNT_ERROR");
  return (SCStr *)(param_1);
}


// Reference entry 10e69c80; body size 21 bytes.
#line 1 "ENTRY_10e69c80"

SCStr * __stdcall FUN_10e69c80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ALEXA_SETUP_MUSIC_SERVICES_STATE");
  return (SCStr *)(param_1);
}


// Reference entry 10e69cd0; body size 30 bytes.
#line 1 "ENTRY_10e69cd0"

undefined4 __fastcall FUN_10e69cd0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e69d50; body size 26 bytes.
#line 1 "ENTRY_10e69d50"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e69d50(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e69d70; body size 35 bytes.
#line 1 "ENTRY_10e69d70"

SCStr * __stdcall FUN_10e69d70(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x24a9,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10e69dd0; body size 23 bytes.
#line 1 "ENTRY_10e69dd0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e69dd0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e70060; body size 21 bytes.
#line 1 "ENTRY_10e70060"

SCStr * __stdcall FUN_10e70060(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("AlexaAuthenticationWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10e714a0; body size 24 bytes.
#line 1 "ENTRY_10e714a0"

undefined4 __fastcall FUN_10e714a0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x40))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e71570; body size 39 bytes.
#line 1 "ENTRY_10e71570"

undefined4 __fastcall FUN_10e71570(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x9c))(), 0);
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x6c))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e71680; body size 63 bytes.
#line 1 "ENTRY_10e71680"

undefined1 FUN_10e71680(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateChanged"), 0);
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateTransitionsEnabled"), 0);
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateUpdate"), 0);
      if (!bVar1) {
        return (undefined1)(0);
      }
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e716d0; body size 17 bytes.
#line 1 "ENTRY_10e716d0"

void __stdcall FUN_10e716d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_eq("SCINowPlaying:onMusicChanged");
  return;
}


// Reference entry 10e71f60; body size 61 bytes.
#line 1 "ENTRY_10e71f60"

void __fastcall FUN_10e71f60(int *param_1)

{
  char cVar1;
  
  if ((int *)param_1[3] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[3] + 0xcc))(param_1[5]);
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x30))(), 0);
    if (cVar1 == '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x94))(), 0);
      if (cVar1 == '\0') {
        thunk_FUN_10e697b0();
        return;
      }
    }
  }
  return;
}


// Reference entry 10e72180; body size 24 bytes.
#line 1 "ENTRY_10e72180"

undefined4 __fastcall FUN_10e72180(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)((0x0))) {
    (**(code **)**(undefined4 **)(param_1 + 4)) (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  }
  return (undefined4)(0);
}


// Reference entry 10e755c0; body size 25 bytes.
#line 1 "ENTRY_10e755c0"

void __stdcall FUN_10e755c0(int param_1, unsigned int recovered_unused_stack_0)

{
  if ((param_1 == 0) || (param_1 == 1)) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10e755e0; body size 18 bytes.
#line 1 "ENTRY_10e755e0"

void __stdcall FUN_10e755e0(int param_1, unsigned int recovered_unused_stack_0)

{
  if (param_1 == 0) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10e75600; body size 18 bytes.
#line 1 "ENTRY_10e75600"

void __stdcall FUN_10e75600(int param_1, unsigned int recovered_unused_stack_0)

{
  if (param_1 == 0) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10e75620; body size 25 bytes.
#line 1 "ENTRY_10e75620"

void __stdcall FUN_10e75620(int param_1, unsigned int recovered_unused_stack_0)

{
  if ((param_1 == 0) || (param_1 == 1)) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10e75640; body size 25 bytes.
#line 1 "ENTRY_10e75640"

void __stdcall FUN_10e75640(int param_1, unsigned int recovered_unused_stack_0)

{
  if ((param_1 == 0) || (param_1 == 1)) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10e76de0; body size 33 bytes.
#line 1 "ENTRY_10e76de0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e76de0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e76e70; body size 33 bytes.
#line 1 "ENTRY_10e76e70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e76e70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e77270; body size 33 bytes.
#line 1 "ENTRY_10e77270"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e77270(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e772a0; body size 33 bytes.
#line 1 "ENTRY_10e772a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e772a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e773a0; body size 33 bytes.
#line 1 "ENTRY_10e773a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e773a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e78060; body size 37 bytes.
#line 1 "ENTRY_10e78060"

undefined1 __fastcall FUN_10e78060(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x58))(), 0);
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e78090; body size 37 bytes.
#line 1 "ENTRY_10e78090"

undefined1 __fastcall FUN_10e78090(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x60))(), 0);
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e780f0; body size 33 bytes.
#line 1 "ENTRY_10e780f0"

void __fastcall FUN_10e780f0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))(), 0);
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0xc) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e78120; body size 60 bytes.
#line 1 "ENTRY_10e78120"

void __fastcall FUN_10e78120(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))(), 0);
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0xc) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x78) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x78) + 0x1c))(), 0);
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0x74) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e78740; body size 42 bytes.
#line 1 "ENTRY_10e78740"

undefined4 * __fastcall FUN_10e78740(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e78cf0; body size 45 bytes.
#line 1 "ENTRY_10e78cf0"

undefined4 * __fastcall FUN_10e78cf0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionIntroState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e795c0; body size 34 bytes.
#line 1 "ENTRY_10e795c0"

undefined4 __fastcall FUN_10e795c0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
    if (cVar1 == '\0') {
                    
                    
      uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc) + 0x14))(), 0);
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e79650; body size 21 bytes.
#line 1 "ENTRY_10e79650"

SCStr * __stdcall FUN_10e79650(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sonance_detection.complete");
  return (SCStr *)(param_1);
}


// Reference entry 10e79670; body size 21 bytes.
#line 1 "ENTRY_10e79670"

SCStr * __stdcall FUN_10e79670(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sonance_detection.detect.error");
  return (SCStr *)(param_1);
}


// Reference entry 10e79690; body size 21 bytes.
#line 1 "ENTRY_10e79690"

SCStr * __stdcall FUN_10e79690(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sonance_detection.detect.results");
  return (SCStr *)(param_1);
}


// Reference entry 10e796b0; body size 21 bytes.
#line 1 "ENTRY_10e796b0"

SCStr * __stdcall FUN_10e796b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sonance_detection.detect");
  return (SCStr *)(param_1);
}


// Reference entry 10e796d0; body size 21 bytes.
#line 1 "ENTRY_10e796d0"

SCStr * __stdcall FUN_10e796d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sonance_detection.init");
  return (SCStr *)(param_1);
}


// Reference entry 10e796f0; body size 21 bytes.
#line 1 "ENTRY_10e796f0"

SCStr * __stdcall FUN_10e796f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("sonance_detection.intro");
  return (SCStr *)(param_1);
}


// Reference entry 10e79730; body size 30 bytes.
#line 1 "ENTRY_10e79730"

undefined4 __fastcall FUN_10e79730(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e79760; body size 26 bytes.
#line 1 "ENTRY_10e79760"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e79760(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e79a40; body size 23 bytes.
#line 1 "ENTRY_10e79a40"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e79a40(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e7ad20; body size 21 bytes.
#line 1 "ENTRY_10e7ad20"

SCStr * __stdcall FUN_10e7ad20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SonanceDetectionWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10e7b410; body size 24 bytes.
#line 1 "ENTRY_10e7b410"

undefined4 __fastcall FUN_10e7b410(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x40))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e7b460; body size 39 bytes.
#line 1 "ENTRY_10e7b460"

undefined4 __fastcall FUN_10e7b460(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x9c))(), 0);
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x6c))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e7b490; body size 63 bytes.
#line 1 "ENTRY_10e7b490"

undefined1 FUN_10e7b490(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateChanged"), 0);
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateTransitionsEnabled"), 0);
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateUpdate"), 0);
      if (!bVar1) {
        return (undefined1)(0);
      }
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e7b570; body size 61 bytes.
#line 1 "ENTRY_10e7b570"

void __fastcall FUN_10e7b570(int *param_1)

{
  char cVar1;
  
  if ((int *)param_1[3] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[3] + 0xcc))(param_1[5]);
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x30))(), 0);
    if (cVar1 == '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x94))(), 0);
      if (cVar1 == '\0') {
        thunk_FUN_10e79390();
        return;
      }
    }
  }
  return;
}


// Reference entry 10e7fe10; body size 33 bytes.
#line 1 "ENTRY_10e7fe10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e7fe10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e7fe40; body size 33 bytes.
#line 1 "ENTRY_10e7fe40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e7fe40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e7fe70; body size 33 bytes.
#line 1 "ENTRY_10e7fe70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e7fe70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e7fea0; body size 35 bytes.
#line 1 "ENTRY_10e7fea0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e7fea0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e7fac0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x118);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e80b00; body size 24 bytes.
#line 1 "ENTRY_10e80b00"

undefined4 __fastcall FUN_10e80b00(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x28) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x28) + 0x30))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e80b60; body size 41 bytes.
#line 1 "ENTRY_10e80b60"

void __fastcall FUN_10e80b60(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x38) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x38) + 0x1c))(), 0);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x38) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x34) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e80ba0; body size 41 bytes.
#line 1 "ENTRY_10e80ba0"

void __fastcall FUN_10e80ba0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x20) + 0x1c))(), 0);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x20) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x1c) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e80be0; body size 42 bytes.
#line 1 "ENTRY_10e80be0"

undefined4 * __fastcall FUN_10e80be0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCChangeEmailWizCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e80c20; body size 42 bytes.
#line 1 "ENTRY_10e80c20"

undefined4 * __fastcall FUN_10e80c20(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCChangeEmailWizInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e80e00; body size 28 bytes.
#line 1 "ENTRY_10e80e00"

void FUN_10e80e00(void)

{
  SCStr aSStack_c [4];
  
  ((SCStr *)((uint)&aSStack_c))->int_allocRep("change_email.complete");
  thunk_FUN_10e82310();
  return;
}


// Reference entry 10e80e30; body size 28 bytes.
#line 1 "ENTRY_10e80e30"

void FUN_10e80e30(void)

{
  SCStr aSStack_c [4];
  
  ((SCStr *)((uint)&aSStack_c))->int_allocRep("change_email.complete");
  thunk_FUN_10e82310();
  return;
}


// Reference entry 10e80eb0; body size 21 bytes.
#line 1 "ENTRY_10e80eb0"

SCStr * __stdcall FUN_10e80eb0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("change_email.complete");
  return (SCStr *)(param_1);
}


// Reference entry 10e80ed0; body size 21 bytes.
#line 1 "ENTRY_10e80ed0"

SCStr * __stdcall FUN_10e80ed0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("change_email.init");
  return (SCStr *)(param_1);
}


// Reference entry 10e80ef0; body size 21 bytes.
#line 1 "ENTRY_10e80ef0"

SCStr * __stdcall FUN_10e80ef0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("change_email.mainpage");
  return (SCStr *)(param_1);
}


// Reference entry 10e80f10; body size 21 bytes.
#line 1 "ENTRY_10e80f10"

SCStr * __stdcall FUN_10e80f10(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("change_email.transfer");
  return (SCStr *)(param_1);
}


// Reference entry 10e80f30; body size 21 bytes.
#line 1 "ENTRY_10e80f30"

SCStr * __stdcall FUN_10e80f30(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("change_email.verify");
  return (SCStr *)(param_1);
}


// Reference entry 10e80f50; body size 35 bytes.
#line 1 "ENTRY_10e80f50"

SCStr * __stdcall FUN_10e80f50(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2401,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10e80f80; body size 45 bytes.
#line 1 "ENTRY_10e80f80"

int * __thiscall Recovered_Bulk::m_FUN_10e80f80(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_3 != 0) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x28), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10e82e70; body size 18 bytes.
#line 1 "ENTRY_10e82e70"

void __stdcall FUN_10e82e70(int param_1, unsigned int recovered_unused_stack_0)

{
  if (param_1 == 0) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10e83250; body size 41 bytes.
#line 1 "ENTRY_10e83250"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e83250(int *param_2)
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


// Reference entry 10e83a70; body size 33 bytes.
#line 1 "ENTRY_10e83a70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e83a70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e83ba0; body size 33 bytes.
#line 1 "ENTRY_10e83ba0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e83ba0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e83bd0; body size 33 bytes.
#line 1 "ENTRY_10e83bd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e83bd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e83c00; body size 33 bytes.
#line 1 "ENTRY_10e83c00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e83c00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e83d40; body size 33 bytes.
#line 1 "ENTRY_10e83d40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e83d40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e83d70; body size 33 bytes.
#line 1 "ENTRY_10e83d70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e83d70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e83fe0; body size 37 bytes.
#line 1 "ENTRY_10e83fe0"

undefined1 __fastcall FUN_10e83fe0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x58))(), 0);
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e84010; body size 37 bytes.
#line 1 "ENTRY_10e84010"

undefined1 __fastcall FUN_10e84010(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x60))(), 0);
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e84090; body size 42 bytes.
#line 1 "ENTRY_10e84090"

undefined4 * __fastcall FUN_10e84090(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleModernCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e840d0; body size 42 bytes.
#line 1 "ENTRY_10e840d0"

undefined4 * __fastcall FUN_10e840d0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleWizardModernInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e84ce0; body size 34 bytes.
#line 1 "ENTRY_10e84ce0"

undefined4 __fastcall FUN_10e84ce0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
    if (cVar1 == '\0') {
                    
                    
      uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc) + 0x14))(), 0);
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e84d60; body size 21 bytes.
#line 1 "ENTRY_10e84d60"

SCStr * __stdcall FUN_10e84d60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_modern.display_bridge_removal");
  return (SCStr *)(param_1);
}


// Reference entry 10e84d80; body size 21 bytes.
#line 1 "ENTRY_10e84d80"

SCStr * __stdcall FUN_10e84d80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_modern.complete");
  return (SCStr *)(param_1);
}


// Reference entry 10e84da0; body size 21 bytes.
#line 1 "ENTRY_10e84da0"

SCStr * __stdcall FUN_10e84da0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_modern.ready_for_download");
  return (SCStr *)(param_1);
}


// Reference entry 10e84dc0; body size 21 bytes.
#line 1 "ENTRY_10e84dc0"

SCStr * __stdcall FUN_10e84dc0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_modern.remind_me_later");
  return (SCStr *)(param_1);
}


// Reference entry 10e84de0; body size 21 bytes.
#line 1 "ENTRY_10e84de0"

SCStr * __stdcall FUN_10e84de0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_modern.terms_of_use");
  return (SCStr *)(param_1);
}


// Reference entry 10e84e00; body size 21 bytes.
#line 1 "ENTRY_10e84e00"

SCStr * __stdcall FUN_10e84e00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_modern.init");
  return (SCStr *)(param_1);
}


// Reference entry 10e84e40; body size 30 bytes.
#line 1 "ENTRY_10e84e40"

undefined4 __fastcall FUN_10e84e40(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e84e70; body size 26 bytes.
#line 1 "ENTRY_10e84e70"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e84e70(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e84e90; body size 35 bytes.
#line 1 "ENTRY_10e84e90"

SCStr * __stdcall FUN_10e84e90(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2686,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10e84ec0; body size 23 bytes.
#line 1 "ENTRY_10e84ec0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e84ec0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e85f70; body size 21 bytes.
#line 1 "ENTRY_10e85f70"

SCStr * __stdcall FUN_10e85f70(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCLifecycleModernWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10e86660; body size 24 bytes.
#line 1 "ENTRY_10e86660"

undefined4 __fastcall FUN_10e86660(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x40))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e866e0; body size 39 bytes.
#line 1 "ENTRY_10e866e0"

undefined4 __fastcall FUN_10e866e0(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x9c))(), 0);
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x6c))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e86710; body size 63 bytes.
#line 1 "ENTRY_10e86710"

undefined1 FUN_10e86710(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateChanged"), 0);
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateTransitionsEnabled"), 0);
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateUpdate"), 0);
      if (!bVar1) {
        return (undefined1)(0);
      }
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e867f0; body size 61 bytes.
#line 1 "ENTRY_10e867f0"

void __fastcall FUN_10e867f0(int *param_1)

{
  char cVar1;
  
  if ((int *)param_1[3] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[3] + 0xcc))(param_1[5]);
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x30))(), 0);
    if (cVar1 == '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x94))(), 0);
      if (cVar1 == '\0') {
        thunk_FUN_10e84bd0();
        return;
      }
    }
  }
  return;
}


// Reference entry 10e86e40; body size 60 bytes.
#line 1 "ENTRY_10e86e40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e86e40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10dd0b60(param_2,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleMixedLegacyWizard);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCLifecycleMixedLegacyWizard);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCLifecycleMixedLegacyWizard);
  param_1[0x12] = (undefined4)((uint)&ghidra_vftable_SCLifecycleMixedLegacyWizard);
  param_1[0x13] = (undefined4)((uint)&ghidra_vftable_SCLifecycleMixedLegacyWizard);
  return (undefined4 *)(param_1);
}


// Reference entry 10e86fa0; body size 33 bytes.
#line 1 "ENTRY_10e86fa0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e86fa0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e86fd0; body size 33 bytes.
#line 1 "ENTRY_10e86fd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e86fd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e87000; body size 33 bytes.
#line 1 "ENTRY_10e87000"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e87000(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e87030; body size 33 bytes.
#line 1 "ENTRY_10e87030"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e87030(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e87060; body size 33 bytes.
#line 1 "ENTRY_10e87060"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e87060(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e87090; body size 33 bytes.
#line 1 "ENTRY_10e87090"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e87090(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e87120; body size 33 bytes.
#line 1 "ENTRY_10e87120"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e87120(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e87150; body size 33 bytes.
#line 1 "ENTRY_10e87150"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e87150(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e871a0; body size 42 bytes.
#line 1 "ENTRY_10e871a0"

undefined4 * __fastcall FUN_10e871a0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleMixedLegacyCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e871e0; body size 42 bytes.
#line 1 "ENTRY_10e871e0"

undefined4 * __fastcall FUN_10e871e0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleWizardMixedLegacyInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e87520; body size 45 bytes.
#line 1 "ENTRY_10e87520"

undefined4 * __fastcall FUN_10e87520(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLifecycleMixedLegacyCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e87720; body size 45 bytes.
#line 1 "ENTRY_10e87720"

undefined4 * __fastcall FUN_10e87720(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLifecycleMixedLegacyIncompatPlayersState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e877c0; body size 21 bytes.
#line 1 "ENTRY_10e877c0"

SCStr * __stdcall FUN_10e877c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_mixedlegacy.complete");
  return (SCStr *)(param_1);
}


// Reference entry 10e877e0; body size 21 bytes.
#line 1 "ENTRY_10e877e0"

SCStr * __stdcall FUN_10e877e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_mixedlegacy.incompat_players");
  return (SCStr *)(param_1);
}


// Reference entry 10e87800; body size 21 bytes.
#line 1 "ENTRY_10e87800"

SCStr * __stdcall FUN_10e87800(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_mixedlegacy.options");
  return (SCStr *)(param_1);
}


// Reference entry 10e87820; body size 21 bytes.
#line 1 "ENTRY_10e87820"

SCStr * __stdcall FUN_10e87820(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_mixedlegacy.outro");
  return (SCStr *)(param_1);
}


// Reference entry 10e87840; body size 21 bytes.
#line 1 "ENTRY_10e87840"

SCStr * __stdcall FUN_10e87840(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_mixedlegacy.remind_me_later");
  return (SCStr *)(param_1);
}


// Reference entry 10e87860; body size 21 bytes.
#line 1 "ENTRY_10e87860"

SCStr * __stdcall FUN_10e87860(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_mixedlegacy.init");
  return (SCStr *)(param_1);
}


// Reference entry 10e87890; body size 35 bytes.
#line 1 "ENTRY_10e87890"

SCStr * __stdcall FUN_10e87890(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2686,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10e892a0; body size 21 bytes.
#line 1 "ENTRY_10e892a0"

SCStr * __stdcall FUN_10e892a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCLifecycleMixedLegacyWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10e89b70; body size 33 bytes.
#line 1 "ENTRY_10e89b70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e89b70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e89c00; body size 33 bytes.
#line 1 "ENTRY_10e89c00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e89c00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e89c30; body size 33 bytes.
#line 1 "ENTRY_10e89c30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e89c30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e89c60; body size 33 bytes.
#line 1 "ENTRY_10e89c60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e89c60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e89c90; body size 33 bytes.
#line 1 "ENTRY_10e89c90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e89c90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e89cd0; body size 42 bytes.
#line 1 "ENTRY_10e89cd0"

undefined4 * __fastcall FUN_10e89cd0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLegacyMusicLibrarySetupWizardCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e89d10; body size 42 bytes.
#line 1 "ENTRY_10e89d10"

undefined4 * __fastcall FUN_10e89d10(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLegacyMusicLibrarySetupWizardInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e89d50; body size 45 bytes.
#line 1 "ENTRY_10e89d50"

undefined4 * __fastcall FUN_10e89d50(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLegacyMusicLibrarySetupWizardSubwizardState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e89d90; body size 45 bytes.
#line 1 "ENTRY_10e89d90"

undefined4 * __fastcall FUN_10e89d90(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLegacyMusicLibrarySetupWizardCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e89dd0; body size 21 bytes.
#line 1 "ENTRY_10e89dd0"

SCStr * __stdcall FUN_10e89dd0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("CUSTOM_SUB_WIZARD_LIBRARY_SETUP");
  return (SCStr *)(param_1);
}


// Reference entry 10e89e20; body size 21 bytes.
#line 1 "ENTRY_10e89e20"

SCStr * __stdcall FUN_10e89e20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("legacy_music_library_setup.complete");
  return (SCStr *)(param_1);
}


// Reference entry 10e89e40; body size 21 bytes.
#line 1 "ENTRY_10e89e40"

SCStr * __stdcall FUN_10e89e40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("legacy_music_library_setup.init");
  return (SCStr *)(param_1);
}


// Reference entry 10e89e60; body size 21 bytes.
#line 1 "ENTRY_10e89e60"

SCStr * __stdcall FUN_10e89e60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("legacy_music_library_setup.subwiz");
  return (SCStr *)(param_1);
}


// Reference entry 10e89e90; body size 35 bytes.
#line 1 "ENTRY_10e89e90"

SCStr * __stdcall FUN_10e89e90(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x20ea,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10e89ec0; body size 21 bytes.
#line 1 "ENTRY_10e89ec0"

SCStr * __stdcall FUN_10e89ec0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCLegacyMusicLibrarySetupWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10e8b9c0; body size 41 bytes.
#line 1 "ENTRY_10e8b9c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e8b9c0(int *param_2)
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


// Reference entry 10e8ba00; body size 41 bytes.
#line 1 "ENTRY_10e8ba00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e8ba00(int *param_2)
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


// Reference entry 10e8ba40; body size 41 bytes.
#line 1 "ENTRY_10e8ba40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e8ba40(int *param_2)
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


// Reference entry 10e8ba80; body size 41 bytes.
#line 1 "ENTRY_10e8ba80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e8ba80(int *param_2)
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


// Reference entry 10e8bac0; body size 41 bytes.
#line 1 "ENTRY_10e8bac0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e8bac0(int *param_2)
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


// Reference entry 10e8bb00; body size 41 bytes.
#line 1 "ENTRY_10e8bb00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e8bb00(int *param_2)
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


// Reference entry 10e8bb60; body size 41 bytes.
#line 1 "ENTRY_10e8bb60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e8bb60(int *param_2)
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


// Reference entry 10e8bba0; body size 41 bytes.
#line 1 "ENTRY_10e8bba0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e8bba0(int *param_2)
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


// Reference entry 10e8bbe0; body size 41 bytes.
#line 1 "ENTRY_10e8bbe0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e8bbe0(int *param_2)
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


// Reference entry 10e8bc20; body size 41 bytes.
#line 1 "ENTRY_10e8bc20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e8bc20(int *param_2)
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


// Reference entry 10e8bc60; body size 41 bytes.
#line 1 "ENTRY_10e8bc60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e8bc60(int *param_2)
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


// Reference entry 10e8bca0; body size 41 bytes.
#line 1 "ENTRY_10e8bca0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e8bca0(int *param_2)
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


// Reference entry 10e8bce0; body size 41 bytes.
#line 1 "ENTRY_10e8bce0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e8bce0(int *param_2)
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


// Reference entry 10e8bd20; body size 41 bytes.
#line 1 "ENTRY_10e8bd20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e8bd20(int *param_2)
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


// Reference entry 10e8bd60; body size 41 bytes.
#line 1 "ENTRY_10e8bd60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e8bd60(int *param_2)
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


// Reference entry 10e8bda0; body size 41 bytes.
#line 1 "ENTRY_10e8bda0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e8bda0(int *param_2)
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


// Reference entry 10e8bde0; body size 41 bytes.
#line 1 "ENTRY_10e8bde0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e8bde0(int *param_2)
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


// Reference entry 10e8be40; body size 41 bytes.
#line 1 "ENTRY_10e8be40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e8be40(int *param_2)
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


// Reference entry 10e8be80; body size 41 bytes.
#line 1 "ENTRY_10e8be80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e8be80(int *param_2)
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


// Reference entry 10e8bec0; body size 41 bytes.
#line 1 "ENTRY_10e8bec0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e8bec0(int *param_2)
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


// Reference entry 10e8bf00; body size 41 bytes.
#line 1 "ENTRY_10e8bf00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e8bf00(int *param_2)
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


// Reference entry 10e8bf40; body size 41 bytes.
#line 1 "ENTRY_10e8bf40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e8bf40(int *param_2)
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


// Reference entry 10e8bf80; body size 41 bytes.
#line 1 "ENTRY_10e8bf80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e8bf80(int *param_2)
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


// Reference entry 10e92ec0; body size 19 bytes.
#line 1 "ENTRY_10e92ec0"

void __fastcall FUN_10e92ec0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10e92ee0; body size 19 bytes.
#line 1 "ENTRY_10e92ee0"

void __fastcall FUN_10e92ee0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10e92f00; body size 19 bytes.
#line 1 "ENTRY_10e92f00"

void __fastcall FUN_10e92f00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10e92f20; body size 19 bytes.
#line 1 "ENTRY_10e92f20"

void __fastcall FUN_10e92f20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10e940b0; body size 33 bytes.
#line 1 "ENTRY_10e940b0"

void __fastcall FUN_10e940b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e940e0; body size 33 bytes.
#line 1 "ENTRY_10e940e0"

void __fastcall FUN_10e940e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e94110; body size 33 bytes.
#line 1 "ENTRY_10e94110"

void __fastcall FUN_10e94110(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e94140; body size 33 bytes.
#line 1 "ENTRY_10e94140"

void __fastcall FUN_10e94140(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e94170; body size 33 bytes.
#line 1 "ENTRY_10e94170"

void __fastcall FUN_10e94170(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e941a0; body size 33 bytes.
#line 1 "ENTRY_10e941a0"

void __fastcall FUN_10e941a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e941d0; body size 33 bytes.
#line 1 "ENTRY_10e941d0"

void __fastcall FUN_10e941d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e94200; body size 33 bytes.
#line 1 "ENTRY_10e94200"

void __fastcall FUN_10e94200(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e94230; body size 33 bytes.
#line 1 "ENTRY_10e94230"

void __fastcall FUN_10e94230(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e94260; body size 33 bytes.
#line 1 "ENTRY_10e94260"

void __fastcall FUN_10e94260(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e94290; body size 33 bytes.
#line 1 "ENTRY_10e94290"

void __fastcall FUN_10e94290(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e942c0; body size 33 bytes.
#line 1 "ENTRY_10e942c0"

void __fastcall FUN_10e942c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e96720; body size 37 bytes.
#line 1 "ENTRY_10e96720"

int * __fastcall FUN_10e96720(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e96750; body size 37 bytes.
#line 1 "ENTRY_10e96750"

int * __fastcall FUN_10e96750(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e96780; body size 37 bytes.
#line 1 "ENTRY_10e96780"

int * __fastcall FUN_10e96780(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e967b0; body size 37 bytes.
#line 1 "ENTRY_10e967b0"

int * __fastcall FUN_10e967b0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e967e0; body size 37 bytes.
#line 1 "ENTRY_10e967e0"

int * __fastcall FUN_10e967e0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e96810; body size 37 bytes.
#line 1 "ENTRY_10e96810"

int * __fastcall FUN_10e96810(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e97020; body size 38 bytes.
#line 1 "ENTRY_10e97020"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e97020(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e97050; body size 45 bytes.
#line 1 "ENTRY_10e97050"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e97050(byte param_2)
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


// Reference entry 10e97090; body size 45 bytes.
#line 1 "ENTRY_10e97090"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e97090(byte param_2)
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


// Reference entry 10e970d0; body size 45 bytes.
#line 1 "ENTRY_10e970d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e970d0(byte param_2)
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


// Reference entry 10e97110; body size 45 bytes.
#line 1 "ENTRY_10e97110"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e97110(byte param_2)
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


// Reference entry 10e97150; body size 32 bytes.
#line 1 "ENTRY_10e97150"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e97150(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e92f40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e97180; body size 32 bytes.
#line 1 "ENTRY_10e97180"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e97180(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e93090();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e971b0; body size 32 bytes.
#line 1 "ENTRY_10e971b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e971b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e93180();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e971e0; body size 32 bytes.
#line 1 "ENTRY_10e971e0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e971e0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e93270();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e97210; body size 32 bytes.
#line 1 "ENTRY_10e97210"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e97210(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e93360();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e97240; body size 32 bytes.
#line 1 "ENTRY_10e97240"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e97240(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e93450();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e97270; body size 32 bytes.
#line 1 "ENTRY_10e97270"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e97270(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e93540();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e972a0; body size 58 bytes.
#line 1 "ENTRY_10e972a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e972a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpHTCGetLEDFeedbackStateAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCGetLEDFeedbackStateAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCGetLEDFeedbackStateAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e979c0; body size 33 bytes.
#line 1 "ENTRY_10e979c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e979c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e979f0; body size 33 bytes.
#line 1 "ENTRY_10e979f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e979f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e97a20; body size 33 bytes.
#line 1 "ENTRY_10e97a20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e97a20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e97a50; body size 33 bytes.
#line 1 "ENTRY_10e97a50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e97a50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e97a80; body size 33 bytes.
#line 1 "ENTRY_10e97a80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e97a80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e981f0; body size 45 bytes.
#line 1 "ENTRY_10e981f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e981f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpHTControlGetLEDFeedbackState);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpHTControlGetLEDFeedbackState);
  thunk_FUN_10e92f40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10e98ea0; body size 32 bytes.
#line 1 "ENTRY_10e98ea0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10e98ea0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e95b70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x3c);
  }
  return (undefined4)(param_1);
}


// Reference entry 10e99bb0; body size 33 bytes.
#line 1 "ENTRY_10e99bb0"

void __fastcall FUN_10e99bb0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e99be0; body size 33 bytes.
#line 1 "ENTRY_10e99be0"

void __fastcall FUN_10e99be0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e99c10; body size 33 bytes.
#line 1 "ENTRY_10e99c10"

void __fastcall FUN_10e99c10(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e99c40; body size 33 bytes.
#line 1 "ENTRY_10e99c40"

void __fastcall FUN_10e99c40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e99c70; body size 33 bytes.
#line 1 "ENTRY_10e99c70"

void __fastcall FUN_10e99c70(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e99ca0; body size 33 bytes.
#line 1 "ENTRY_10e99ca0"

void __fastcall FUN_10e99ca0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e9c020; body size 43 bytes.
#line 1 "ENTRY_10e9c020"

void __thiscall Recovered_Bulk::m_FUN_10e9c020(int param_2, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int **)(param_1 + 0x18) == (int *)((0x0))) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x18) + 0x20))(), 0);
  }
  if (iVar1 == param_2) {
    (**(code **)(*(int *)(param_1 + -0x7c) + 0xe8))(0);
  }
  return;
}


// Reference entry 10e9cd00; body size 61 bytes.
#line 1 "ENTRY_10e9cd00"

void __thiscall Recovered_Bulk::m_FUN_10e9cd00(int *param_2)
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


// Reference entry 10e9cd50; body size 61 bytes.
#line 1 "ENTRY_10e9cd50"

void __thiscall Recovered_Bulk::m_FUN_10e9cd50(int *param_2)
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


// Reference entry 10e9cda0; body size 61 bytes.
#line 1 "ENTRY_10e9cda0"

void __thiscall Recovered_Bulk::m_FUN_10e9cda0(int *param_2)
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


// Reference entry 10e9cdf0; body size 61 bytes.
#line 1 "ENTRY_10e9cdf0"

void __thiscall Recovered_Bulk::m_FUN_10e9cdf0(int *param_2)
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


// Reference entry 10e9ce40; body size 61 bytes.
#line 1 "ENTRY_10e9ce40"

void __thiscall Recovered_Bulk::m_FUN_10e9ce40(int *param_2)
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


// Reference entry 10e9ce90; body size 61 bytes.
#line 1 "ENTRY_10e9ce90"

void __thiscall Recovered_Bulk::m_FUN_10e9ce90(int *param_2)
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


// Reference entry 10e9cee0; body size 61 bytes.
#line 1 "ENTRY_10e9cee0"

void __thiscall Recovered_Bulk::m_FUN_10e9cee0(int *param_2)
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


// Reference entry 10e9cf30; body size 61 bytes.
#line 1 "ENTRY_10e9cf30"

void __thiscall Recovered_Bulk::m_FUN_10e9cf30(int *param_2)
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


// Reference entry 10e9cf80; body size 61 bytes.
#line 1 "ENTRY_10e9cf80"

void __thiscall Recovered_Bulk::m_FUN_10e9cf80(int *param_2)
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


// Reference entry 10e9d460; body size 21 bytes.
#line 1 "ENTRY_10e9d460"

SCStr * __stdcall FUN_10e9d460(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("MenuSelectSetting");
  return (SCStr *)(param_1);
}


// Reference entry 10e9d480; body size 21 bytes.
#line 1 "ENTRY_10e9d480"

SCStr * __stdcall FUN_10e9d480(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("RenameLineIn");
  return (SCStr *)(param_1);
}


// Reference entry 10e9d4a0; body size 21 bytes.
#line 1 "ENTRY_10e9d4a0"

SCStr * __stdcall FUN_10e9d4a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SliderSelectSetting");
  return (SCStr *)(param_1);
}


// Reference entry 10e9d4c0; body size 21 bytes.
#line 1 "ENTRY_10e9d4c0"

SCStr * __stdcall FUN_10e9d4c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("ToggleBoolSetting");
  return (SCStr *)(param_1);
}


// Reference entry 10e9d4e0; body size 21 bytes.
#line 1 "ENTRY_10e9d4e0"

SCStr * __stdcall FUN_10e9d4e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategorySettings");
  return (SCStr *)(param_1);
}


// Reference entry 10e9d500; body size 21 bytes.
#line 1 "ENTRY_10e9d500"

SCStr * __stdcall FUN_10e9d500(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategorySettings");
  return (SCStr *)(param_1);
}


// Reference entry 10e9d520; body size 21 bytes.
#line 1 "ENTRY_10e9d520"

SCStr * __stdcall FUN_10e9d520(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategorySettings");
  return (SCStr *)(param_1);
}


// Reference entry 10e9d540; body size 21 bytes.
#line 1 "ENTRY_10e9d540"

SCStr * __stdcall FUN_10e9d540(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategorySettings");
  return (SCStr *)(param_1);
}


// Reference entry 10e9d720; body size 20 bytes.
#line 1 "ENTRY_10e9d720"

SCStr * __thiscall Recovered_Bulk::m_FUN_10e9d720(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x34));
  return (SCStr *)(param_2);
}


// Reference entry 10e9dab0; body size 21 bytes.
#line 1 "ENTRY_10e9dab0"

SCStr * __stdcall FUN_10e9dab0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIIntegerSettingsProperty");
  return (SCStr *)(param_1);
}


// Reference entry 10e9dad0; body size 21 bytes.
#line 1 "ENTRY_10e9dad0"

SCStr * __stdcall FUN_10e9dad0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIStringFromCustomSettingsProperty");
  return (SCStr *)(param_1);
}


// Reference entry 10e9daf0; body size 21 bytes.
#line 1 "ENTRY_10e9daf0"

SCStr * __stdcall FUN_10e9daf0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIStringFromListSettingsProperty");
  return (SCStr *)(param_1);
}


// Reference entry 10e9db30; body size 21 bytes.
#line 1 "ENTRY_10e9db30"

SCStr * __stdcall FUN_10e9db30(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10e9db50; body size 35 bytes.
#line 1 "ENTRY_10e9db50"

SCStr * __stdcall FUN_10e9db50(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1fdd,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10e9db80; body size 35 bytes.
#line 1 "ENTRY_10e9db80"

SCStr * __stdcall FUN_10e9db80(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1fde,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10e9dbb0; body size 35 bytes.
#line 1 "ENTRY_10e9dbb0"

SCStr * __stdcall FUN_10e9dbb0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1fe9,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10e9dbe0; body size 35 bytes.
#line 1 "ENTRY_10e9dbe0"

SCStr * __stdcall FUN_10e9dbe0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1fe4,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10e9dc10; body size 35 bytes.
#line 1 "ENTRY_10e9dc10"

SCStr * __stdcall FUN_10e9dc10(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2069,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10e9dc40; body size 35 bytes.
#line 1 "ENTRY_10e9dc40"

SCStr * __stdcall FUN_10e9dc40(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2b9,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10e9dc70; body size 35 bytes.
#line 1 "ENTRY_10e9dc70"

SCStr * __stdcall FUN_10e9dc70(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2019,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10e9dca0; body size 35 bytes.
#line 1 "ENTRY_10e9dca0"

SCStr * __stdcall FUN_10e9dca0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2012,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10e9dcd0; body size 35 bytes.
#line 1 "ENTRY_10e9dcd0"

SCStr * __stdcall FUN_10e9dcd0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2013,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10e9dd00; body size 35 bytes.
#line 1 "ENTRY_10e9dd00"

SCStr * __stdcall FUN_10e9dd00(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x200b,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10e9dd30; body size 35 bytes.
#line 1 "ENTRY_10e9dd30"

SCStr * __stdcall FUN_10e9dd30(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1fe6,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10e9dd60; body size 35 bytes.
#line 1 "ENTRY_10e9dd60"

SCStr * __stdcall FUN_10e9dd60(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2049,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10e9dd90; body size 35 bytes.
#line 1 "ENTRY_10e9dd90"

SCStr * __stdcall FUN_10e9dd90(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x204a,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10e9ddc0; body size 35 bytes.
#line 1 "ENTRY_10e9ddc0"

SCStr * __stdcall FUN_10e9ddc0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1fe7,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10e9ddf0; body size 35 bytes.
#line 1 "ENTRY_10e9ddf0"

SCStr * __stdcall FUN_10e9ddf0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2068,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10e9de40; body size 20 bytes.
#line 1 "ENTRY_10e9de40"

SCStr * __thiscall Recovered_Bulk::m_FUN_10e9de40(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 10e9de60; body size 20 bytes.
#line 1 "ENTRY_10e9de60"

SCStr * __thiscall Recovered_Bulk::m_FUN_10e9de60(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 10e9de80; body size 20 bytes.
#line 1 "ENTRY_10e9de80"

SCStr * __thiscall Recovered_Bulk::m_FUN_10e9de80(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 10e9deb0; body size 39 bytes.
#line 1 "ENTRY_10e9deb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e9deb0(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)0x0);
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x18))();
    piVar1 = (int *)(*(int **)(param_1 + 0x18), 0);
  }
  *param_2 = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10e9dee0; body size 39 bytes.
#line 1 "ENTRY_10e9dee0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10e9dee0(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)0x0);
  if (*(int **)(param_1 + 0x1c) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))();
    piVar1 = (int *)(*(int **)(param_1 + 0x1c), 0);
  }
  *param_2 = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10e9df10; body size 20 bytes.
#line 1 "ENTRY_10e9df10"

SCStr * __thiscall Recovered_Bulk::m_FUN_10e9df10(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x30));
  return (SCStr *)(param_2);
}


// Reference entry 10e9df90; body size 20 bytes.
#line 1 "ENTRY_10e9df90"

SCStr * __thiscall Recovered_Bulk::m_FUN_10e9df90(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 10e9dfb0; body size 20 bytes.
#line 1 "ENTRY_10e9dfb0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10e9dfb0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 10e9dfd0; body size 21 bytes.
#line 1 "ENTRY_10e9dfd0"

SCStr * __stdcall FUN_10e9dfd0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10e9fb30; body size 50 bytes.
#line 1 "ENTRY_10e9fb30"

int * __thiscall Recovered_Bulk::m_FUN_10e9fb30(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if ((*(char *)(param_1 + 0x89) != '\0') &&
     (piVar1 = (int *)(*(int **)(param_1 + 0x90), 0),(int *)( piVar1) != (int *)(0x0))) {
    *param_2 = (int)((int)piVar1);
    (**(code **)(*piVar1 + 4))();
    return (int *)(param_2);
  }
  *param_2 = (int)(0);
  return (int *)(param_2);
}


// Reference entry 10ea1810; body size 18 bytes.
#line 1 "ENTRY_10ea1810"

SCStr * __stdcall FUN_10ea1810(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep((char *)0x0);
  return (SCStr *)(param_1);
}


// Reference entry 10ea1830; body size 18 bytes.
#line 1 "ENTRY_10ea1830"

SCStr * __stdcall FUN_10ea1830(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep((char *)0x0);
  return (SCStr *)(param_1);
}


// Reference entry 10ea1850; body size 18 bytes.
#line 1 "ENTRY_10ea1850"

SCStr * __stdcall FUN_10ea1850(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep((char *)0x0);
  return (SCStr *)(param_1);
}


// Reference entry 10ea1ad0; body size 25 bytes.
#line 1 "ENTRY_10ea1ad0"

int * __thiscall Recovered_Bulk::m_FUN_10ea1ad0(int *param_2)
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


// Reference entry 10ea1b00; body size 20 bytes.
#line 1 "ENTRY_10ea1b00"

SCStr * __thiscall Recovered_Bulk::m_FUN_10ea1b00(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x10));
  return (SCStr *)(param_2);
}


// Reference entry 10ea1b20; body size 20 bytes.
#line 1 "ENTRY_10ea1b20"

SCStr * __thiscall Recovered_Bulk::m_FUN_10ea1b20(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x10));
  return (SCStr *)(param_2);
}


// Reference entry 10ea1b40; body size 20 bytes.
#line 1 "ENTRY_10ea1b40"

SCStr * __thiscall Recovered_Bulk::m_FUN_10ea1b40(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x38));
  return (SCStr *)(param_2);
}


// Reference entry 10ea1c30; body size 56 bytes.
#line 1 "ENTRY_10ea1c30"

SCStr * __thiscall Recovered_Bulk::m_FUN_10ea1c30(SCStr *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x80) + 0x20))(), 0);
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0), 0);
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10ea1dd0; body size 53 bytes.
#line 1 "ENTRY_10ea1dd0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10ea1dd0(SCStr *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0x20))(), 0);
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0), 0);
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10ea1ec0; body size 53 bytes.
#line 1 "ENTRY_10ea1ec0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10ea1ec0(SCStr *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x20) + 0x20))(), 0);
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0), 0);
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10ea1f80; body size 56 bytes.
#line 1 "ENTRY_10ea1f80"

SCStr * __thiscall Recovered_Bulk::m_FUN_10ea1f80(SCStr *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x88) + 0x20))(), 0);
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0), 0);
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10ea1fd0; body size 53 bytes.
#line 1 "ENTRY_10ea1fd0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10ea1fd0(SCStr *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x14) + 0x20))(), 0);
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0), 0);
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10ea2020; body size 56 bytes.
#line 1 "ENTRY_10ea2020"

SCStr * __thiscall Recovered_Bulk::m_FUN_10ea2020(SCStr *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x88) + 0x20))(), 0);
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0), 0);
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10ea4530; body size 31 bytes.
#line 1 "ENTRY_10ea4530"

void FUN_10ea4530(void)

{
  SCStr aSStack_14 [8];
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  ((SCStr *)((uint)&aSStack_14))->int_allocRep("SCIBrowseItem:onItemChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10ea6c00; body size 39 bytes.
#line 1 "ENTRY_10ea6c00"

int __fastcall FUN_10ea6c00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(4);
  iVar1 = (int)(param_1 + 0xd7d0);
  thunk_FUN_1124ff50("LEDFeedbackState");
  thunk_FUN_112503c0(iVar1,uVar2);
  return (int)(param_1);
}


// Reference entry 10ea6f20; body size 55 bytes.
#line 1 "ENTRY_10ea6f20"

void __fastcall FUN_10ea6f20(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x80) == '\0') {
    if (*(int **)(param_1 + 0x1c) != (int *)((0x0))) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))(), 0);
      if (cVar1 != '\0') {
        (**(code **)(*(int *)(param_1 + 0x18) + 4))();
      }
    }
    (**(code **)(*(int *)(param_1 + -0x78) + 0xe8))(0);
  }
  return;
}


// Reference entry 10ea8130; body size 57 bytes.
#line 1 "ENTRY_10ea8130"

void __stdcall FUN_10ea8130(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_10ea8130(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x14);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 10eaa520; body size 41 bytes.
#line 1 "ENTRY_10eaa520"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10eaa520(int *param_2)
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


// Reference entry 10eaa560; body size 41 bytes.
#line 1 "ENTRY_10eaa560"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10eaa560(int *param_2)
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


// Reference entry 10eab2a0; body size 19 bytes.
#line 1 "ENTRY_10eab2a0"

void __fastcall FUN_10eab2a0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10eab2c0; body size 36 bytes.
#line 1 "ENTRY_10eab2c0"

void __fastcall FUN_10eab2c0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    thunk_FUN_102a3ea0(*param_1,*(undefined4 *)(*piVar1 + 4));
    thunk_FUN_1148a50e(*piVar1,0x14);
  }
  return;
}


// Reference entry 10eab2f0; body size 17 bytes.
#line 1 "ENTRY_10eab2f0"

void __fastcall FUN_10eab2f0(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    thunk_FUN_1086f290(*param_1);
  }
  return;
}


// Reference entry 10eab310; body size 33 bytes.
#line 1 "ENTRY_10eab310"

void __fastcall FUN_10eab310(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  for (iVar2 = (int)(*param_1); iVar2 != iVar1; iVar2 = iVar2 + 0x4c) {
    thunk_FUN_108754f0();
  }
  return;
}


// Reference entry 10eabb40; body size 35 bytes.
#line 1 "ENTRY_10eabb40"

undefined4 __thiscall Recovered_Bulk::m_FUN_10eabb40(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10eab3e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xfc);
  }
  return (undefined4)(param_1);
}


// Reference entry 10eabc20; body size 32 bytes.
#line 1 "ENTRY_10eabc20"

undefined4 __thiscall Recovered_Bulk::m_FUN_10eabc20(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_108754f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x4c);
  }
  return (undefined4)(param_1);
}


// Reference entry 10eabc80; body size 25 bytes.
#line 1 "ENTRY_10eabc80"

void __fastcall FUN_10eabc80(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10eabdb0; body size 19 bytes.
#line 1 "ENTRY_10eabdb0"

void __thiscall Recovered_Bulk::m_FUN_10eabdb0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10eabdd0; body size 21 bytes.
#line 1 "ENTRY_10eabdd0"

void __thiscall Recovered_Bulk::m_FUN_10eabdd0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10eabdf0; body size 35 bytes.
#line 1 "ENTRY_10eabdf0"

void __stdcall FUN_10eabdf0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x4c) {
    thunk_FUN_108754f0();
  }
  return;
}


// Reference entry 10eabe20; body size 17 bytes.
#line 1 "ENTRY_10eabe20"

void __stdcall FUN_10eabe20(undefined4 *param_1)

{
  FUN_10ea7290(*param_1);
  return;
}


// Reference entry 10eabf30; body size 19 bytes.
#line 1 "ENTRY_10eabf30"

void __thiscall Recovered_Bulk::m_FUN_10eabf30(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10eac550; body size 46 bytes.
#line 1 "ENTRY_10eac550"

void __fastcall FUN_10eac550(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  iVar2 = (int)(*param_1);
  if (iVar2 != iVar1) {
    do {
      thunk_FUN_108754f0();
      iVar2 = (int)(iVar2 + 0x4c);
    } while (iVar2 != iVar1);
    param_1[1] = (int)(*param_1);
    return;
  }
  param_1[1] = (int)(iVar2);
  return;
}


// Reference entry 10eac590; body size 47 bytes.
#line 1 "ENTRY_10eac590"

void __fastcall FUN_10eac590(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)(*param_1);
  iVar2 = (int)(*(int *)(iVar1 + 0x10));
  iVar3 = (int)(*(int *)(iVar1 + 0xc));
  if (iVar3 != iVar2) {
    do {
      thunk_FUN_108754f0();
      iVar3 = (int)(iVar3 + 0x4c);
    } while (iVar3 != iVar2);
    *(undefined4*)(iVar1 + 0x10) = (undefined4)(*(undefined4 *)(iVar1 + 0xc));
    return;
  }
  *(int*)(iVar1 + 0x10) = (int)(iVar3);
  return;
}


// Reference entry 10eac620; body size 54 bytes.
#line 1 "ENTRY_10eac620"

void __stdcall FUN_10eac620(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x4c);
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


// Reference entry 10eac830; body size 24 bytes.
#line 1 "ENTRY_10eac830"

SCStr * __thiscall Recovered_Bulk::m_FUN_10eac830(SCStr *param_2)
{
  int *param_1 = (int *)this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*param_1 + 0xf4));
  return (SCStr *)(param_2);
}


// Reference entry 10eac880; body size 22 bytes.
#line 1 "ENTRY_10eac880"

SCStr * __thiscall Recovered_Bulk::m_FUN_10eac880(SCStr *param_2)
{
  int *param_1 = (int *)this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*param_1 + 0x30));
  return (SCStr *)(param_2);
}


// Reference entry 10eacb60; body size 27 bytes.
#line 1 "ENTRY_10eacb60"

int * __thiscall Recovered_Bulk::m_FUN_10eacb60(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*param_1 + 0x18), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10eaccb0; body size 27 bytes.
#line 1 "ENTRY_10eaccb0"

int * __thiscall Recovered_Bulk::m_FUN_10eaccb0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*param_1 + 8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10eacd00; body size 26 bytes.
#line 1 "ENTRY_10eacd00"

int __fastcall FUN_10eacd00(int *param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(*param_1 + 0x10));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if (((iVar1 != 4) && (iVar1 != 5)) && (iVar1 != 6)) {
    return (int)((uint)uVar2 << 8);
  }
  return (int)(((uint)(uVar2) << 8 | (uint)(1)));
}


// Reference entry 10eacd20; body size 20 bytes.
#line 1 "ENTRY_10eacd20"

int __fastcall FUN_10eacd20(int *param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*param_1);
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((*(int *)(iVar1 + 0x10) == 1) && (*(int *)(iVar1 + 0x18) == 1)) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 10eacd80; body size 22 bytes.
#line 1 "ENTRY_10eacd80"

SCStr * __thiscall Recovered_Bulk::m_FUN_10eacd80(SCStr *param_2)
{
  int *param_1 = (int *)this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*param_1 + 0x2c));
  return (SCStr *)(param_2);
}


// Reference entry 10eacda0; body size 22 bytes.
#line 1 "ENTRY_10eacda0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10eacda0(SCStr *param_2)
{
  int *param_1 = (int *)this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*param_1 + 0x28));
  return (SCStr *)(param_2);
}


// Reference entry 10eacde0; body size 22 bytes.
#line 1 "ENTRY_10eacde0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10eacde0(SCStr *param_2)
{
  int *param_1 = (int *)this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*param_1 + 0x24));
  return (SCStr *)(param_2);
}


// Reference entry 10eace00; body size 22 bytes.
#line 1 "ENTRY_10eace00"

SCStr * __thiscall Recovered_Bulk::m_FUN_10eace00(SCStr *param_2)
{
  int *param_1 = (int *)this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*param_1 + 0x20));
  return (SCStr *)(param_2);
}


// Reference entry 10eace20; body size 32 bytes.
#line 1 "ENTRY_10eace20"

int __fastcall FUN_10eace20(int *param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*param_1);
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((*(char *)(iVar1 + 0x39) == '\0') &&
     ((*(int *)(iVar1 + 0x10) == 2 ||
      ((*(int *)(iVar1 + 0x10) == 1 && (*(int *)(iVar1 + 0x18) != 1)))))) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 10ead100; body size 63 bytes.
#line 1 "ENTRY_10ead100"

void __thiscall Recovered_Bulk::m_FUN_10ead100(int *param_2)
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
  return;
}


// Reference entry 10ead150; body size 63 bytes.
#line 1 "ENTRY_10ead150"

void __thiscall Recovered_Bulk::m_FUN_10ead150(int *param_2)
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
  return;
}


// Reference entry 10ead520; body size 41 bytes.
#line 1 "ENTRY_10ead520"

void __thiscall Recovered_Bulk::m_FUN_10ead520(SCStr *param_2)
{
  int *param_1 = (int *)this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(*param_1 + 0xf4));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10ead590; body size 38 bytes.
#line 1 "ENTRY_10ead590"

void __thiscall Recovered_Bulk::m_FUN_10ead590(SCStr *param_2)
{
  int *param_1 = (int *)this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(*param_1 + 0x30));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10ead930; body size 38 bytes.
#line 1 "ENTRY_10ead930"

void __thiscall Recovered_Bulk::m_FUN_10ead930(SCStr *param_2)
{
  int *param_1 = (int *)this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(*param_1 + 0x2c));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10ead960; body size 38 bytes.
#line 1 "ENTRY_10ead960"

void __thiscall Recovered_Bulk::m_FUN_10ead960(SCStr *param_2)
{
  int *param_1 = (int *)this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(*param_1 + 0x28));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10eadd60; body size 38 bytes.
#line 1 "ENTRY_10eadd60"

void __thiscall Recovered_Bulk::m_FUN_10eadd60(SCStr *param_2)
{
  int *param_1 = (int *)this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(*param_1 + 0x24));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10eadd90; body size 38 bytes.
#line 1 "ENTRY_10eadd90"

void __thiscall Recovered_Bulk::m_FUN_10eadd90(SCStr *param_2)
{
  int *param_1 = (int *)this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(*param_1 + 0x20));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10eae0a0; body size 57 bytes.
#line 1 "ENTRY_10eae0a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10eae0a0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_106dc520(), 0);
  param_1[2] = (undefined4)(uVar1);
  param_1[1] = (undefined4)(param_2);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizParams);
  return (undefined4 *)(param_1);
}


// Reference entry 10eae0f0; body size 39 bytes.
#line 1 "ENTRY_10eae0f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10eae0f0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  param_1[3] = (undefined4)(param_4);
  param_1[4] = (undefined4)(param_5);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizParams);
  return (undefined4 *)(param_1);
}


// Reference entry 10eae120; body size 25 bytes.
#line 1 "ENTRY_10eae120"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10eae120(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb0a30; body size 31 bytes.
#line 1 "ENTRY_10eb0a30"

void __fastcall FUN_10eb0a30(undefined4 *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)param_1[2]);
  if (((char *)(pcVar1) != (char *)(0x0)) && (*pcVar1 != (char)(('\0')))) {
    thunk_FUN_1030a0d0("wizard",pcVar1,*param_1,0);
  }
  return;
}


// Reference entry 10eb25f0; body size 20 bytes.
#line 1 "ENTRY_10eb25f0"

undefined4 __fastcall FUN_10eb25f0(undefined4 param_1)

{
  thunk_FUN_106d8310(0);
  return (undefined4)(param_1);
}


// Reference entry 10eb2610; body size 26 bytes.
#line 1 "ENTRY_10eb2610"

undefined4 __thiscall Recovered_Bulk::m_FUN_10eb2610(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10eb27e0(2,param_2);
  return (undefined4)(param_1);
}


// Reference entry 10eb26d0; body size 31 bytes.
#line 1 "ENTRY_10eb26d0"

undefined4 * __fastcall FUN_10eb26d0(undefined4 *param_1)

{
  thunk_FUN_10eb2520(1,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStayPut);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb3a60; body size 23 bytes.
#line 1 "ENTRY_10eb3a60"

uint __fastcall FUN_10eb3a60(uint *param_1)

{
  uint in_EAX;
  
  if (((param_1[2] == 0) && (in_EAX = (uint)(*param_1), in_EAX != 0)) && (in_EAX != 1)) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10eb3a80; body size 58 bytes.
#line 1 "ENTRY_10eb3a80"

void __thiscall Recovered_Bulk::m_FUN_10eb3a80(uint param_2)
{
  int *param_1 = (int *)this;
  if ((uint)((param_1[2] - *param_1) / 0x34) < param_2) {
    if (0x4ec4ec4 < param_2) {
                    
      thunk_FUN_10604c90();
    }
    thunk_FUN_10eb29d0(param_2);
  }
  return;
}


// Reference entry 10eb3b50; body size 17 bytes.
#line 1 "ENTRY_10eb3b50"

int __fastcall FUN_10eb3b50(int *param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*param_1);
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 0) && (iVar1 != 1)) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 10eb4160; body size 19 bytes.
#line 1 "ENTRY_10eb4160"

undefined4 __stdcall FUN_10eb4160(undefined4 param_1)

{
  thunk_FUN_106dfa00(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10eb4180; body size 21 bytes.
#line 1 "ENTRY_10eb4180"

SCStr * __stdcall FUN_10eb4180(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("newwiz");
  return (SCStr *)(param_1);
}


// Reference entry 10eb4c30; body size 33 bytes.
#line 1 "ENTRY_10eb4c30"

void __thiscall Recovered_Bulk::m_FUN_10eb4c30(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10eb4cc0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10eb4c60; body size 33 bytes.
#line 1 "ENTRY_10eb4c60"

void __thiscall Recovered_Bulk::m_FUN_10eb4c60(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10eb4d80(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10eb4c90; body size 33 bytes.
#line 1 "ENTRY_10eb4c90"

void __thiscall Recovered_Bulk::m_FUN_10eb4c90(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10eb4e80(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10eb4f60; body size 60 bytes.
#line 1 "ENTRY_10eb4f60"

int __thiscall Recovered_Bulk::m_FUN_10eb4f60(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10eb5050((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), 0), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10eb4fb0; body size 60 bytes.
#line 1 "ENTRY_10eb4fb0"

int __thiscall Recovered_Bulk::m_FUN_10eb4fb0(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10eb50c0((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), 0), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10eb5000; body size 60 bytes.
#line 1 "ENTRY_10eb5000"

int __thiscall Recovered_Bulk::m_FUN_10eb5000(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10eb5130((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), 0), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10eb6040; body size 48 bytes.
#line 1 "ENTRY_10eb6040"

undefined4 * __fastcall FUN_10eb6040(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10eb6080; body size 48 bytes.
#line 1 "ENTRY_10eb6080"

undefined4 * __fastcall FUN_10eb6080(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10eb60c0; body size 48 bytes.
#line 1 "ENTRY_10eb60c0"

undefined4 * __fastcall FUN_10eb60c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10eb66d0; body size 19 bytes.
#line 1 "ENTRY_10eb66d0"

void __fastcall FUN_10eb66d0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10eb66f0; body size 19 bytes.
#line 1 "ENTRY_10eb66f0"

void __fastcall FUN_10eb66f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x20);
  }
  return;
}


// Reference entry 10eb6710; body size 19 bytes.
#line 1 "ENTRY_10eb6710"

void __fastcall FUN_10eb6710(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10eb6730; body size 28 bytes.
#line 1 "ENTRY_10eb6730"

void __fastcall FUN_10eb6730(int *param_1)

{
  thunk_FUN_10eb4cc0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10eb6760; body size 28 bytes.
#line 1 "ENTRY_10eb6760"

void __fastcall FUN_10eb6760(int *param_1)

{
  thunk_FUN_10eb4d80(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10eb6790; body size 28 bytes.
#line 1 "ENTRY_10eb6790"

void __fastcall FUN_10eb6790(int *param_1)

{
  thunk_FUN_10eb4e80(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10eb69d0; body size 19 bytes.
#line 1 "ENTRY_10eb69d0"

void __fastcall FUN_10eb69d0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10eb69f0; body size 19 bytes.
#line 1 "ENTRY_10eb69f0"

void __fastcall FUN_10eb69f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x20);
  }
  return;
}


// Reference entry 10eb6a10; body size 19 bytes.
#line 1 "ENTRY_10eb6a10"

void __fastcall FUN_10eb6a10(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10eb6a30; body size 28 bytes.
#line 1 "ENTRY_10eb6a30"

void __fastcall FUN_10eb6a30(int *param_1)

{
  thunk_FUN_10eb4cc0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10eb6a60; body size 28 bytes.
#line 1 "ENTRY_10eb6a60"

void __fastcall FUN_10eb6a60(int *param_1)

{
  thunk_FUN_10eb4d80(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10eb6a90; body size 28 bytes.
#line 1 "ENTRY_10eb6a90"

void __fastcall FUN_10eb6a90(int *param_1)

{
  thunk_FUN_10eb4e80(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10eb77c0; body size 25 bytes.
#line 1 "ENTRY_10eb77c0"

void __fastcall FUN_10eb77c0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10eb77e0; body size 25 bytes.
#line 1 "ENTRY_10eb77e0"

void __fastcall FUN_10eb77e0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10eb7800; body size 25 bytes.
#line 1 "ENTRY_10eb7800"

void __fastcall FUN_10eb7800(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10eb9540; body size 27 bytes.
#line 1 "ENTRY_10eb9540"

undefined4 __thiscall Recovered_Bulk::m_FUN_10eb9540(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_2);
  (**(code **)(*param_1 + 8))(param_2,param_3);
  thunk_FUN_105ae230(uVar1,param_3);
  return (undefined4)(param_2);
}


// Reference entry 10eba5f0; body size 19 bytes.
#line 1 "ENTRY_10eba5f0"

void __thiscall Recovered_Bulk::m_FUN_10eba5f0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  (**(code **)(*param_1 + 8))(param_2);
  thunk_FUN_105ae450(param_2);
  return;
}


// Reference entry 10ebb360; body size 46 bytes.
#line 1 "ENTRY_10ebb360"

void __thiscall Recovered_Bulk::m_FUN_10ebb360(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  undefined4 uVar1;
  
  thunk_FUN_105a26b0();
  thunk_FUN_10df2ea0();
  uVar1 = (undefined4)(0);
  (**(code **)(*param_1 + 0xc))(param_2,param_3,0);
  thunk_FUN_105ae560(param_2,param_3,uVar1);
  return;
}


// Reference entry 10ebb790; body size 40 bytes.
#line 1 "ENTRY_10ebb790"

void __thiscall Recovered_Bulk::m_FUN_10ebb790(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_105a26b0();
  thunk_FUN_10df2ea0();
  (**(code **)(*param_1 + 0xc))(param_2);
  thunk_FUN_105ad940(param_2);
  return;
}


// Reference entry 10ebb7d0; body size 40 bytes.
#line 1 "ENTRY_10ebb7d0"

void __thiscall Recovered_Bulk::m_FUN_10ebb7d0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_105a26b0();
  thunk_FUN_10df2ea0();
  (**(code **)(*param_1 + 0xc))(param_2);
  thunk_FUN_105ae900(param_2);
  return;
}


// Reference entry 10ebb810; body size 48 bytes.
#line 1 "ENTRY_10ebb810"

void __thiscall Recovered_Bulk::m_FUN_10ebb810(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int *param_1 = (int *)this;
  thunk_FUN_105a26b0();
  thunk_FUN_10df2ea0();
  (**(code **)(*param_1 + 0xc))(param_2,param_3,param_4);
  thunk_FUN_105aeb50(param_2,param_3,param_4);
  return;
}


// Reference entry 10ebb850; body size 50 bytes.
#line 1 "ENTRY_10ebb850"

void __thiscall Recovered_Bulk::m_FUN_10ebb850(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  thunk_FUN_105a26b0();
  iVar1 = (int)(thunk_FUN_10df2ea0(), 0);
  if ((iVar1 != 0) && (0 < param_2)) {
    iVar1 = (int)(param_2);
    (**(code **)(*param_1 + 0xc))(param_2,param_2);
    thunk_FUN_105aef50(param_2,iVar1);
  }
  return;
}


// Reference entry 10ebb890; body size 58 bytes.
#line 1 "ENTRY_10ebb890"

void __thiscall Recovered_Bulk::m_FUN_10ebb890(int param_2,int param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  thunk_FUN_105a26b0();
  iVar1 = (int)(thunk_FUN_10df2ea0(), 0);
  if (((iVar1 != 0) && (0 < param_2)) && (0 < param_3)) {
    (**(code **)(*param_1 + 0xc))(param_2,param_3);
    thunk_FUN_105aef50(param_2,param_3);
  }
  return;
}


// Reference entry 10ebb8e0; body size 44 bytes.
#line 1 "ENTRY_10ebb8e0"

void __thiscall Recovered_Bulk::m_FUN_10ebb8e0(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  thunk_FUN_105a26b0();
  thunk_FUN_10df2ea0();
  (**(code **)(*param_1 + 0xc))(param_2,param_3);
  thunk_FUN_105aefc0(param_2,param_3);
  return;
}


// Reference entry 10ebba40; body size 33 bytes.
#line 1 "ENTRY_10ebba40"

void __fastcall FUN_10ebba40(int *param_1)

{
  thunk_FUN_105a26b0();
  thunk_FUN_10df2ea0();
  (**(code **)(*param_1 + 0xc))();
  thunk_FUN_105af180();
  return;
}


// Reference entry 10ebba70; body size 40 bytes.
#line 1 "ENTRY_10ebba70"

void __thiscall Recovered_Bulk::m_FUN_10ebba70(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_105a26b0();
  thunk_FUN_10df2ea0();
  (**(code **)(*param_1 + 0xc))(param_2);
  thunk_FUN_105af1c0(param_2);
  return;
}


// Reference entry 10ebbab0; body size 41 bytes.
#line 1 "ENTRY_10ebbab0"

void __thiscall Recovered_Bulk::m_FUN_10ebbab0(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  thunk_FUN_105a26b0();
  thunk_FUN_10df2ea0();
  iVar1 = (int)((**(code **)(*param_1 + 0xc))(), 0);
  *(uint*)(iVar1 + 0xd8) = (uint)(*(uint *)(iVar1 + 0xd8) | param_2);
  return;
}


// Reference entry 10ebbaf0; body size 43 bytes.
#line 1 "ENTRY_10ebbaf0"

void __thiscall Recovered_Bulk::m_FUN_10ebbaf0(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  thunk_FUN_105a26b0();
  thunk_FUN_10df2ea0();
  iVar1 = (int)((**(code **)(*param_1 + 0xc))(), 0);
  *(uint*)(iVar1 + 0xd8) = (uint)(*(uint *)(iVar1 + 0xd8) & ~param_2);
  return;
}


// Reference entry 10ebc110; body size 38 bytes.
#line 1 "ENTRY_10ebc110"

void __fastcall FUN_10ebc110(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10ebc210; body size 53 bytes.
#line 1 "ENTRY_10ebc210"

void __thiscall Recovered_Bulk::m_FUN_10ebc210(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_105a2cd0(param_2);
  thunk_FUN_105a2cd0(param_2);
  (**(code **)(*param_1 + 0x3c))();
  thunk_FUN_106dc650(param_2,param_1);
  return;
}


// Reference entry 10ebc260; body size 50 bytes.
#line 1 "ENTRY_10ebc260"

void __stdcall FUN_10ebc260(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10df15d0(param_2);
  thunk_FUN_105a2e60(param_2);
  thunk_FUN_106dc6c0(param_1,param_2);
  return;
}


// Reference entry 10ebc2a0; body size 63 bytes.
#line 1 "ENTRY_10ebc2a0"

void __thiscall Recovered_Bulk::m_FUN_10ebc2a0(undefined4 param_2,int *param_3)
{
  int *param_1 = (int *)this;
  thunk_FUN_10df3040(param_1);
  thunk_FUN_105a3010(param_2);
  (**(code **)(*param_1 + 0x40))();
  thunk_FUN_10df3a40(param_1,param_1[0x2f]);
  *param_3 = (int)(param_1[0x2f]);
  return;
}


// Reference entry 10ebc5d0; body size 42 bytes.
#line 1 "ENTRY_10ebc5d0"

void __thiscall Recovered_Bulk::m_FUN_10ebc5d0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(*(SCStr **)(param_1 + 4)))->m_op_ctor(param_2);
  thunk_FUN_105f6050(param_2 + 4);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x24);
  return;
}


// Reference entry 10ebfa70; body size 59 bytes.
#line 1 "ENTRY_10ebfa70"

void __thiscall Recovered_Bulk::m_FUN_10ebfa70(undefined4 *param_2)
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
  thunk_FUN_10ebc8e0(puVar1,param_2);
  return;
}


// Reference entry 10ec0fb0; body size 28 bytes.
#line 1 "ENTRY_10ec0fb0"

undefined4 * __fastcall FUN_10ec0fb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ec1d20; body size 18 bytes.
#line 1 "ENTRY_10ec1d20"

undefined4 __fastcall FUN_10ec1d20(undefined4 param_1)

{
  thunk_FUN_106d8350();
  return (undefined4)(param_1);
}


// Reference entry 10ec35e0; body size 30 bytes.
#line 1 "ENTRY_10ec35e0"

int __thiscall Recovered_Bulk::m_FUN_10ec35e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10ebd6e0(*(undefined4 *)(param_1 + 4),*param_2,param_2[1],param_2);
  return (int)(param_1);
}


// Reference entry 10ec3610; body size 63 bytes.
#line 1 "ENTRY_10ec3610"

int __thiscall Recovered_Bulk::m_FUN_10ec3610(undefined4 *param_2)
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
    return (int)(param_1);
  }
  thunk_FUN_10ebc8e0(puVar1,param_2);
  return (int)(param_1);
}


// Reference entry 10ec67a0; body size 61 bytes.
#line 1 "ENTRY_10ec67a0"

undefined4 FUN_10ec67a0(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_10eb5130((uint)&local_c,param_1), 0);
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)), 0);
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10ec7200; body size 19 bytes.
#line 1 "ENTRY_10ec7200"

undefined4 __stdcall FUN_10ec7200(undefined4 param_1)

{
  thunk_FUN_106d83f0(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10ec99c0; body size 59 bytes.
#line 1 "ENTRY_10ec99c0"

void __thiscall Recovered_Bulk::m_FUN_10ec99c0(undefined4 *param_2)
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
  thunk_FUN_10ebc8e0(puVar1,param_2);
  return;
}


// Reference entry 10ec9a10; body size 57 bytes.
#line 1 "ENTRY_10ec9a10"

void __thiscall Recovered_Bulk::m_FUN_10ec9a10(uint param_2)
{
  int *param_1 = (int *)this;
  if ((uint)((param_1[2] - *param_1) / 0xc) < param_2) {
    if (0x15555555 < param_2) {
                    
      thunk_FUN_10604cd0();
    }
    thunk_FUN_10ec2f90(param_2);
  }
  return;
}


// Reference entry 10eca560; body size 23 bytes.
#line 1 "ENTRY_10eca560"

int __fastcall FUN_10eca560(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0x24);
}


// Reference entry 10eca590; body size 34 bytes.
#line 1 "ENTRY_10eca590"

int * __fastcall FUN_10eca590(int *param_1)

{
  thunk_FUN_10ebf160(*param_1,param_1[1],param_1[1] - *param_1 >> 3,LAB_10060b9a);
  return (int *)(param_1);
}


// Reference entry 10ed00c0; body size 33 bytes.
#line 1 "ENTRY_10ed00c0"

void __thiscall Recovered_Bulk::m_FUN_10ed00c0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10ed00f0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x30);
  return;
}


// Reference entry 10ed09d0; body size 48 bytes.
#line 1 "ENTRY_10ed09d0"

undefined4 * __fastcall FUN_10ed09d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10ed0c50; body size 19 bytes.
#line 1 "ENTRY_10ed0c50"

void __fastcall FUN_10ed0c50(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x30);
  }
  return;
}


// Reference entry 10ed0c70; body size 28 bytes.
#line 1 "ENTRY_10ed0c70"

void __fastcall FUN_10ed0c70(int *param_1)

{
  thunk_FUN_10ed00f0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x30);
  return;
}


// Reference entry 10ed0d60; body size 19 bytes.
#line 1 "ENTRY_10ed0d60"

void __fastcall FUN_10ed0d60(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x30);
  }
  return;
}


// Reference entry 10ed0d80; body size 28 bytes.
#line 1 "ENTRY_10ed0d80"

void __fastcall FUN_10ed0d80(int *param_1)

{
  thunk_FUN_10ed00f0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x30);
  return;
}


// Reference entry 10ed1340; body size 25 bytes.
#line 1 "ENTRY_10ed1340"

void __fastcall FUN_10ed1340(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10ed4080; body size 58 bytes.
#line 1 "ENTRY_10ed4080"

undefined4 FUN_10ed4080(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0x15), 0);
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0x15);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed4340; body size 58 bytes.
#line 1 "ENTRY_10ed4340"

undefined4 FUN_10ed4340(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0xd), 0);
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0xd);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed4390; body size 58 bytes.
#line 1 "ENTRY_10ed4390"

undefined4 FUN_10ed4390(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0xc), 0);
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0xc);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed43e0; body size 58 bytes.
#line 1 "ENTRY_10ed43e0"

undefined4 FUN_10ed43e0(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0xb), 0);
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0xb);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed4740; body size 58 bytes.
#line 1 "ENTRY_10ed4740"

undefined4 FUN_10ed4740(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0x2d), 0);
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0x2d);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed4790; body size 58 bytes.
#line 1 "ENTRY_10ed4790"

undefined4 FUN_10ed4790(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0x2c), 0);
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0x2c);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed47e0; body size 58 bytes.
#line 1 "ENTRY_10ed47e0"

undefined4 FUN_10ed47e0(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0x13), 0);
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0x13);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed4830; body size 58 bytes.
#line 1 "ENTRY_10ed4830"

undefined4 FUN_10ed4830(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0x14), 0);
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0x14);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed5e70; body size 58 bytes.
#line 1 "ENTRY_10ed5e70"

undefined4 FUN_10ed5e70(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0xe), 0);
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0xe);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed5ec0; body size 58 bytes.
#line 1 "ENTRY_10ed5ec0"

undefined4 FUN_10ed5ec0(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0x11), 0);
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0x11);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed5f10; body size 58 bytes.
#line 1 "ENTRY_10ed5f10"

undefined4 FUN_10ed5f10(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(1), 0);
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,1);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed8e20; body size 58 bytes.
#line 1 "ENTRY_10ed8e20"

undefined4 FUN_10ed8e20(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0x16), 0);
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0x16);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed8f80; body size 58 bytes.
#line 1 "ENTRY_10ed8f80"

undefined4 FUN_10ed8f80(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0x10), 0);
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0x10);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed8fd0; body size 58 bytes.
#line 1 "ENTRY_10ed8fd0"

undefined4 FUN_10ed8fd0(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0x12), 0);
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0x12);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed9020; body size 58 bytes.
#line 1 "ENTRY_10ed9020"

undefined4 FUN_10ed9020(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0xf), 0);
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0xf);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ede180; body size 31 bytes.
#line 1 "ENTRY_10ede180"

undefined4 FUN_10ede180(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_10ed98d0(param_1,param_2,3,param_3,param_4);
  return (undefined4)(param_1);
}


// Reference entry 10edf460; body size 41 bytes.
#line 1 "ENTRY_10edf460"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10edf460(int *param_2)
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


// Reference entry 10edf8f0; body size 33 bytes.
#line 1 "ENTRY_10edf8f0"

void __fastcall FUN_10edf8f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10edf920; body size 33 bytes.
#line 1 "ENTRY_10edf920"

void __fastcall FUN_10edf920(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10edfac0; body size 37 bytes.
#line 1 "ENTRY_10edfac0"

int * __fastcall FUN_10edfac0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10edfbd0; body size 32 bytes.
#line 1 "ENTRY_10edfbd0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10edfbd0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10edf790();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10edfdf0; body size 33 bytes.
#line 1 "ENTRY_10edfdf0"

void __fastcall FUN_10edfdf0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10ee0730; body size 21 bytes.
#line 1 "ENTRY_10ee0730"

SCStr * __stdcall FUN_10ee0730(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCOpCheckForUpdate");
  return (SCStr *)(param_1);
}


// Reference entry 10ee0750; body size 21 bytes.
#line 1 "ENTRY_10ee0750"

SCStr * __stdcall FUN_10ee0750(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("setup_ops");
  return (SCStr *)(param_1);
}


// Reference entry 10ee0770; body size 22 bytes.
#line 1 "ENTRY_10ee0770"

undefined4 __fastcall FUN_10ee0770(int param_1)

{
  if ((*(int *)(param_1 + 0x20) != 5) && (*(int *)(param_1 + 0x20) != 6)) {
    return (undefined4)(0x1f5);
  }
  return (undefined4)(0);
}


// Reference entry 10ee07a0; body size 21 bytes.
#line 1 "ENTRY_10ee07a0"

SCStr * __stdcall FUN_10ee07a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10ee1160; body size 31 bytes.
#line 1 "ENTRY_10ee1160"

void __fastcall FUN_10ee1160(int param_1)

{
  thunk_FUN_1033c720(*(undefined4 *)(param_1 + 0x100));
  thunk_FUN_10ee15b0(2);
  return;
}


// Reference entry 10ee1590; body size 21 bytes.
#line 1 "ENTRY_10ee1590"

SCStr * __stdcall FUN_10ee1590(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10ee16d0; body size 41 bytes.
#line 1 "ENTRY_10ee16d0"

void __thiscall Recovered_Bulk::m_FUN_10ee16d0(int param_2,int param_3, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)
{
  int param_1 = (int )this;
  if (((param_2 != 0) && ((int)(param_2) == *(int *)(param_1 + 0xfc))) &&
     ((int)(param_3) == *(int *)(param_1 + 0xf8))) {
    thunk_FUN_10ee15b0(3);
  }
  return;
}


// Reference entry 10ee1710; body size 41 bytes.
#line 1 "ENTRY_10ee1710"

void __thiscall Recovered_Bulk::m_FUN_10ee1710(int param_2,int param_3, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)
{
  int param_1 = (int )this;
  if (((param_2 != 0) && ((int)(param_2) == *(int *)(param_1 + 0xfc))) &&
     ((int)(param_3) == *(int *)(param_1 + 0xf8))) {
    thunk_FUN_10ee15b0(4);
  }
  return;
}


// Reference entry 10ee1750; body size 41 bytes.
#line 1 "ENTRY_10ee1750"

void __thiscall Recovered_Bulk::m_FUN_10ee1750(int param_2,int param_3, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)
{
  int param_1 = (int )this;
  if (((param_2 != 0) && ((int)(param_2) == *(int *)(param_1 + 0xfc))) &&
     ((int)(param_3) == *(int *)(param_1 + 0xf8))) {
    thunk_FUN_10ee15b0(6);
  }
  return;
}


// Reference entry 10ee1c80; body size 41 bytes.
#line 1 "ENTRY_10ee1c80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ee1c80(int *param_2)
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


// Reference entry 10ee2690; body size 27 bytes.
#line 1 "ENTRY_10ee2690"

undefined4 __thiscall Recovered_Bulk::m_FUN_10ee2690(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}


// Reference entry 10ee26c0; body size 32 bytes.
#line 1 "ENTRY_10ee26c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10ee26c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ee2200();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x34);
  }
  return (undefined4)(param_1);
}


// Reference entry 10ee26f0; body size 35 bytes.
#line 1 "ENTRY_10ee26f0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10ee26f0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ee22e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x3590);
  }
  return (undefined4)(param_1);
}


// Reference entry 10ee2d60; body size 62 bytes.
#line 1 "ENTRY_10ee2d60"

void __fastcall FUN_10ee2d60(int param_1)

{
  *(undefined4*)(param_1 + 0xc0) = (undefined4)(0);
  thunk_FUN_10302280(param_1 + 4,"Stop the KeepAlive timer");
  *(undefined4*)(param_1 + 0xa8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xac) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xb0) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xb4) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xb8) = (undefined4)(1);
  thunk_FUN_111bd6b0();
  return;
}


// Reference entry 10ee2fa0; body size 35 bytes.
#line 1 "ENTRY_10ee2fa0"

void __fastcall FUN_10ee2fa0(int param_1)

{
  thunk_FUN_103021f0(param_1 + 4,5,"Cancel connection timer");
  *(undefined8*)(param_1 + 0x9c) = (undefined8)(0);
  return;
}


// Reference entry 10ee2fd0; body size 33 bytes.
#line 1 "ENTRY_10ee2fd0"

void __fastcall FUN_10ee2fd0(int param_1)

{
  thunk_FUN_10302280(param_1 + 4,"Cancel retransmit timer");
  *(undefined8*)(param_1 + 0x94) = (undefined8)(0);
  return;
}


// Reference entry 10ee34e0; body size 27 bytes.
#line 1 "ENTRY_10ee34e0"

void __stdcall FUN_10ee34e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_112afbc0(param_1,param_2,param_3,param_4);
  return;
}


// Reference entry 10ee3bb0; body size 41 bytes.
#line 1 "ENTRY_10ee3bb0"

void __fastcall FUN_10ee3bb0(int param_1)

{
  thunk_FUN_10302280(param_1 + 4,"Dtls session is connected");
  if (*(int *)(param_1 + 0xb8) == 1) {
    *(undefined4*)(param_1 + 0xc0) = (undefined4)(4);
  }
  return;
}


// Reference entry 10ee4150; body size 58 bytes.
#line 1 "ENTRY_10ee4150"

void __fastcall FUN_10ee4150(int param_1)

{
  *(undefined4*)(param_1 + 0xc0) = (undefined4)(0);
  thunk_FUN_111bd050(*(undefined1 *)(param_1 + 0x358c));
  *(undefined1*)(param_1 + 0x358c) = (undefined1)(0);
  thunk_FUN_10302280(param_1 + 4,"Close notify sent");
  return;
}


// Reference entry 10ee42f0; body size 57 bytes.
#line 1 "ENTRY_10ee42f0"

int __fastcall FUN_10ee42f0(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (char)(thunk_FUN_112a7f50(param_1 + 0x2c), 0);
  if (*(int *)(param_1 + 0x90) < 1) {
    iVar2 = (int)(60000);
  }
  else {
    iVar2 = (int)(*(int *)(param_1 + 0x90) * 1000);
  }
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x2c);
  }
  return (int)(iVar2);
}


// Reference entry 10ee43d0; body size 21 bytes.
#line 1 "ENTRY_10ee43d0"

SCStr * __stdcall FUN_10ee43d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("Netstart2Manager");
  return (SCStr *)(param_1);
}


// Reference entry 10ee43f0; body size 21 bytes.
#line 1 "ENTRY_10ee43f0"

SCStr * __stdcall FUN_10ee43f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("ns2");
  return (SCStr *)(param_1);
}


// Reference entry 10ee4470; body size 43 bytes.
#line 1 "ENTRY_10ee4470"

undefined4 __fastcall FUN_10ee4470(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = (char)(thunk_FUN_112a7f50(param_1 + 0x2c), 0);
  uVar1 = (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0xd4) + 0x1c));
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x2c);
  }
  return (undefined4)(uVar1);
}


// Reference entry 10ee4880; body size 40 bytes.
#line 1 "ENTRY_10ee4880"

undefined4 __fastcall FUN_10ee4880(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = (char)(thunk_FUN_112a7f50(param_1 + 0x2c), 0);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 400));
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x2c);
  }
  return (undefined4)(uVar1);
}


// Reference entry 10ee49c0; body size 50 bytes.
#line 1 "ENTRY_10ee49c0"

undefined4 __fastcall FUN_10ee49c0(int param_1)

{
  thunk_FUN_111bd050(*(undefined1 *)(param_1 + 0x358c));
  *(undefined1*)(param_1 + 0x358c) = (undefined1)(0);
  thunk_FUN_10302280(param_1 + 4,"Close notify sent");
  return (undefined4)(0);
}


// Reference entry 10ee4a00; body size 23 bytes.
#line 1 "ENTRY_10ee4a00"

int __fastcall FUN_10ee4a00(int param_1)

{
  if (0 < *(int *)(param_1 + 0x90)) {
    return (int)(*(int *)(param_1 + 0x90) * 1000);
  }
  return (int)(60000);
}


// Reference entry 10ee7150; body size 32 bytes.
#line 1 "ENTRY_10ee7150"

void __fastcall FUN_10ee7150(int param_1)

{
  thunk_FUN_10302280(param_1 + 4,"Stop the KeepAlive timer");
  *(undefined4*)(param_1 + 0xa8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xac) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xb0) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xb4) = (undefined4)(0);
  return;
}


// Reference entry 10ee7510; body size 50 bytes.
#line 1 "ENTRY_10ee7510"

undefined4 __fastcall FUN_10ee7510(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x84) != 0) && (*(int *)(param_1 + 0xb8) != 0)) {
    iVar1 = (int)(thunk_FUN_111be2e0(), 0);
    if (0 < iVar1) {
      thunk_FUN_111bd6b0();
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10ee7f70; body size 46 bytes.
#line 1 "ENTRY_10ee7f70"

bool __fastcall FUN_10ee7f70(int param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = (char)(thunk_FUN_112a7f50(param_1 + 0x2c), 0);
  iVar1 = (int)(*(int *)(param_1 + 0xb8));
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x2c);
  }
  return (bool)(iVar1 == 2);
}


// Reference entry 10eea820; body size 42 bytes.
#line 1 "ENTRY_10eea820"

undefined1 __fastcall FUN_10eea820(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  
  cVar2 = (char)(thunk_FUN_112a7f50(param_1 + 0x2c), 0);
  uVar1 = (undefined1)(*(undefined1 *)(param_1 + 0x8c));
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x2c);
  }
  return (undefined1)(uVar1);
}


// Reference entry 10eeb490; body size 41 bytes.
#line 1 "ENTRY_10eeb490"

void 
void __fastcall FUN_10eeb490(int param_1)

{
  FUN_112a9d50(param_1 + 0x2c);
  *(undefined1*)(param_1 + 0x8d) = (undefined1)(0);
  FUN_112aa350(param_1 + 0x34);
  FUN_112a9d70(param_1 + 0x2c);
  return;
}


erence entry 10eeb730; body size 41 bytes.
#line 1 "ENTRY_10eeb730"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10eeb730(int *param_2)
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


// Reference entry 10eebd30; body size 33 bytes.
#line 1 "ENTRY_10eebd30"

void __fastcall FUN_10eebd30(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10eebd60; body size 33 bytes.
#line 1 "ENTRY_10eebd60"

void __fastcall FUN_10eebd60(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10eebd90; body size 33 bytes.
#line 1 "ENTRY_10eebd90"

void __fastcall FUN_10eebd90(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10eebdc0; body size 33 bytes.
#line 1 "ENTRY_10eebdc0"

void __fastcall FUN_10eebdc0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10eebed0; body size 37 bytes.
#line 1 "ENTRY_10eebed0"

int * __fastcall FUN_10eebed0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10eebf00; body size 37 bytes.
#line 1 "ENTRY_10eebf00"

int * __fastcall FUN_10eebf00(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10eec0d0; body size 32 bytes.
#line 1 "ENTRY_10eec0d0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10eec0d0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10eebae0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10eec100; body size 32 bytes.
#line 1 "ENTRY_10eec100"

undefined4 __thiscall Recovered_Bulk::m_FUN_10eec100(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10eebbd0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10eec2f0; body size 33 bytes.
#line 1 "ENTRY_10eec2f0"

void __fastcall FUN_10eec2f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10eec320; body size 33 bytes.
#line 1 "ENTRY_10eec320"

void __fastcall FUN_10eec320(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10eeceb0; body size 21 bytes.
#line 1 "ENTRY_10eeceb0"

SCStr * __stdcall FUN_10eeceb0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCOpVerifyProduct");
  return (SCStr *)(param_1);
}


// Reference entry 10eeced0; body size 21 bytes.
#line 1 "ENTRY_10eeced0"

SCStr * __stdcall FUN_10eeced0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("setup_ops");
  return (SCStr *)(param_1);
}


// Reference entry 10eecf80; body size 21 bytes.
#line 1 "ENTRY_10eecf80"

SCStr * __stdcall FUN_10eecf80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10eedbb0; body size 19 bytes.
#line 1 "ENTRY_10eedbb0"

void __fastcall FUN_10eedbb0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10eedc60; body size 19 bytes.
#line 1 "ENTRY_10eedc60"

void __fastcall FUN_10eedc60(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10eedd90; body size 25 bytes.
#line 1 "ENTRY_10eedd90"

void __fastcall FUN_10eedd90(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10eee200; body size 61 bytes.
#line 1 "ENTRY_10eee200"

undefined4 FUN_10eee200(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_10eed870((uint)&local_c,param_1), 0);
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)), 0);
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10eee810; body size 21 bytes.
#line 1 "ENTRY_10eee810"

SCStr * __stdcall FUN_10eee810(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("wizard/helpsheets/v2.1");
  return (SCStr *)(param_1);
}


// Reference entry 10eee9f0; body size 61 bytes.
#line 1 "ENTRY_10eee9f0"

undefined4 FUN_10eee9f0(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_10eed870((uint)&local_c,param_1), 0);
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)), 0);
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10eef240; body size 19 bytes.
#line 1 "ENTRY_10eef240"

void __fastcall FUN_10eef240(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10eef2f0; body size 19 bytes.
#line 1 "ENTRY_10eef2f0"

void __fastcall FUN_10eef2f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10eef420; body size 25 bytes.
#line 1 "ENTRY_10eef420"

void __fastcall FUN_10eef420(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10eefae0; body size 56 bytes.
#line 1 "ENTRY_10eefae0"

int __stdcall FUN_10eefae0(int *param_1)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10c5e5a0((uint)&local_c,param_1);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= (int)(*param_1))) {
    return (int)(local_4 + 0x14);
  }
                    
  std::_Xout_of_range("invalid map<K, T> key");
}


// Reference entry 10eefdc0; body size 55 bytes.
#line 1 "ENTRY_10eefdc0"

undefined4 FUN_10eefdc0(int *param_1)

{
  int iVar1;
  undefined1 local_c [12];
  
  iVar1 = (int)(thunk_FUN_10c5e5a0((uint)&local_c,param_1), 0);
  if ((*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') &&
     (*(int *)(*(int *)(iVar1 + 8) + 0x10) <= (int)(*param_1))) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10eefe10; body size 61 bytes.
#line 1 "ENTRY_10eefe10"

undefined4 FUN_10eefe10(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_10eeee80((uint)&local_c,param_1), 0);
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)), 0);
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10ef05f0; body size 21 bytes.
#line 1 "ENTRY_10ef05f0"

SCStr * __stdcall FUN_10ef05f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("wizard/update/v4.1");
  return (SCStr *)(param_1);
}


// Reference entry 10ef0990; body size 61 bytes.
#line 1 "ENTRY_10ef0990"

undefined4 FUN_10ef0990(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_10eeee80((uint)&local_c,param_1), 0);
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)), 0);
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10ef1d20; body size 38 bytes.
#line 1 "ENTRY_10ef1d20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef1d20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ef1d50; body size 32 bytes.
#line 1 "ENTRY_10ef1d50"

undefined4 __thiscall Recovered_Bulk::m_FUN_10ef1d50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ef1910();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10ef1e50; body size 35 bytes.
#line 1 "ENTRY_10ef1e50"

undefined4 __thiscall Recovered_Bulk::m_FUN_10ef1e50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ef1b10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6148);
  }
  return (undefined4)(param_1);
}


// Reference entry 10ef1e80; body size 45 bytes.
#line 1 "ENTRY_10ef1e80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef1e80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpHdmiGetInfo);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpHdmiGetInfo);
  thunk_FUN_10ef1910();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ef21e0; body size 17 bytes.
#line 1 "ENTRY_10ef21e0"

undefined1 * __fastcall FUN_10ef21e0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6124) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6124), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10ef2290; body size 31 bytes.
#line 1 "ENTRY_10ef2290"

int * __thiscall Recovered_Bulk::m_FUN_10ef2290(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x18) + 0x6154), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10ef22f0; body size 21 bytes.
#line 1 "ENTRY_10ef22f0"

SCStr * __stdcall FUN_10ef22f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10ef30c0; body size 19 bytes.
#line 1 "ENTRY_10ef30c0"

void __fastcall FUN_10ef30c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10ef30f0; body size 21 bytes.
#line 1 "ENTRY_10ef30f0"

SCStr * __stdcall FUN_10ef30f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCShare");
  return (SCStr *)(param_1);
}


// Reference entry 10ef3110; body size 41 bytes.
#line 1 "ENTRY_10ef3110"

char * FUN_10ef3110(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  if ((char *)(param_1) != (char *)(0x0)) {
    pcVar1 = (char *)(strrchr(param_1,0x2f), 0);
    if ((char *)(pcVar1) != (char *)(0x0)) {
      pcVar2 = (char *)(pcVar1 + 1);
      if (pcVar1[1] == '\0') {
        pcVar2 = (char *)(param_1);
      }
      return (char *)(pcVar2);
    }
  }
  return (char *)(param_1);
}


// Reference entry 10ef3150; body size 20 bytes.
#line 1 "ENTRY_10ef3150"

SCStr * __thiscall Recovered_Bulk::m_FUN_10ef3150(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->int_allocRep((char *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10ef3170; body size 23 bytes.
#line 1 "ENTRY_10ef3170"

SCStr * __thiscall Recovered_Bulk::m_FUN_10ef3170(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->int_allocRep((char *)(param_1 + 0x80a));
  return (SCStr *)(param_2);
}


// Reference entry 10ef3190; body size 23 bytes.
#line 1 "ENTRY_10ef3190"

SCStr * __thiscall Recovered_Bulk::m_FUN_10ef3190(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->int_allocRep((char *)(param_1 + 0x409));
  return (SCStr *)(param_2);
}


// Reference entry 10ef3450; body size 22 bytes.
#line 1 "ENTRY_10ef3450"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef3450(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_Tarball);
  *(undefined1*)(param_1 + 1) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ef4180; body size 51 bytes.
#line 1 "ENTRY_10ef4180"

int FUN_10ef4180(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{ int stack0x00000010;
 try {
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)((uint *)thunk_FUN_101a6c80(param_1,param_2,param_3,0,&stack0x00000010), 0);
  iVar2 = (int)(__stdio_common_vsprintf(*puVar1 | 1,puVar1[1]), 0);
  if (iVar2 < 0) {
    iVar2 = (int)(-1);
  }
  return (int)(iVar2);

 } catch (...) { }
}


// Reference entry 10ef4da0; body size 36 bytes.
#line 1 "ENTRY_10ef4da0"

void FUN_10ef4da0(undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  if ((int *)(param_2) != (int *)(param_3)) {
    do {
      if (*param_2 == (int)(*(param_4))) break;
      param_2 = (int *)(param_2 + 1);
    } while ((int *)(param_2) != (int *)(param_3));
  }
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10ef5120; body size 19 bytes.
#line 1 "ENTRY_10ef5120"

void __fastcall FUN_10ef5120(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10ef5200; body size 19 bytes.
#line 1 "ENTRY_10ef5200"

void __fastcall FUN_10ef5200(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10ef56c0; body size 45 bytes.
#line 1 "ENTRY_10ef56c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef56c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_ExtractArchiveOp);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  thunk_FUN_111a4f00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ef5700; body size 33 bytes.
#line 1 "ENTRY_10ef5700"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef5700(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ef5730; body size 25 bytes.
#line 1 "ENTRY_10ef5730"

void __fastcall FUN_10ef5730(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10ef5ee0; body size 62 bytes.
#line 1 "ENTRY_10ef5ee0"

void __thiscall Recovered_Bulk::m_FUN_10ef5ee0(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  for (piVar1 = (int *)(*(int **)(param_1 + 4), 0);(int *)( piVar1) != *(int **)(param_1 + 8); piVar1 = piVar1 + 1) {
    if (*piVar1 == (int)((param_2))) {
      return;
    }
  }
  piVar1 = (int *)(*(int **)(param_1 + 8), 0);
  if ((int *)(piVar1) == *(int **)(param_1 + 0xc)) {
    thunk_FUN_10ef4620(piVar1,&param_2);
    return;
  }
  *piVar1 = (int)(param_2);
  *(int*)(param_1 + 8) = (int)(*(int *)(param_1 + 8) + 4);
  return;
}


// Reference entry 10ef64b0; body size 23 bytes.
#line 1 "ENTRY_10ef64b0"

void __fastcall FUN_10ef64b0(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  thunk_FUN_10e0f790(uVar2);
  uVar1 = (undefined1)(thunk_FUN_10ef70c0(uVar2), 0);
  *(undefined1*)(param_1 + 8) = (undefined1)(uVar1);
  return;
}


// Reference entry 10ef8280; body size 36 bytes.
#line 1 "ENTRY_10ef8280"

void __thiscall Recovered_Bulk::m_FUN_10ef8280(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10ef4620(puVar1,param_2);
  return;
}


// Reference entry 10ef82c0; body size 60 bytes.
#line 1 "ENTRY_10ef82c0"

void __thiscall Recovered_Bulk::m_FUN_10ef82c0(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int *_Dst;
  
  piVar1 = (int *)(*(int **)(param_1 + 8), 0);
  _Dst = (int *)(*(int **)(param_1 + 4), 0);
  if ((int *)((_Dst)) != (int *)(piVar1)) {
    while (*_Dst != (int)((param_2))) {
      _Dst = (int *)(_Dst + 1);
      if ((int *)((_Dst)) == (int *)(piVar1)) {
        return;
      }
    }
    if ((int *)((_Dst)) != (int *)(piVar1)) {
      memmove(_Dst,_Dst + 1,(int)piVar1 - (int)(_Dst + 1));
      *(int*)(param_1 + 8) = (int)(*(int *)(param_1 + 8) + -4);
    }
  }
  return;
}


// Reference entry 10ef9850; body size 49 bytes.
#line 1 "ENTRY_10ef9850"

int __thiscall Recovered_Bulk::m_FUN_10ef9850(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10ef9890((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || ((int)(*param_2) < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10ef9de0; body size 19 bytes.
#line 1 "ENTRY_10ef9de0"

void __fastcall FUN_10ef9de0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10efa290; body size 25 bytes.
#line 1 "ENTRY_10efa290"

void __fastcall FUN_10efa290(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10efb220; body size 20 bytes.
#line 1 "ENTRY_10efb220"

SCStr * __thiscall Recovered_Bulk::m_FUN_10efb220(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 10efdbb0; body size 41 bytes.
#line 1 "ENTRY_10efdbb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10efdbb0(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)0x0);
  if (*(int *)(param_1 + 0x10) != 0) {
    thunk_FUN_10c9b9b0(1);
    piVar1 = (int *)(*(int **)(param_1 + 0x10), 0);
  }
  *param_2 = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10f00a60; body size 52 bytes.
#line 1 "ENTRY_10f00a60"

undefined4 __fastcall FUN_10f00a60(int param_1)

{
  char cVar1;
  
  if (((*(int *)(param_1 + 0x10) != 0) ||
      ((*(char **)(param_1 + 8) != (char *)((0x0) )&& (**(char **)(param_1 + 8) != '\0')))) &&
     ((*(int *)(param_1 + 0x30) != 0 ||
      (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34) >> 3 != 0)))) {
    cVar1 = (char)(thunk_FUN_10f00850(), 0);
    if (cVar1 == '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10f01c60; body size 33 bytes.
#line 1 "ENTRY_10f01c60"

void __thiscall Recovered_Bulk::m_FUN_10f01c60(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10f01c90(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x74);
  return;
}


// Reference entry 10f01ee0; body size 43 bytes.
#line 1 "ENTRY_10f01ee0"

void __stdcall FUN_10f01ee0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_8;
  undefined1 local_4;
  
  thunk_FUN_10f01a30(&local_8,param_2,param_3);
  *param_1 = (undefined4)(local_8);
  *(undefined1*)(param_1 + 1) = (undefined1)(local_4);
  return;
}


// Reference entry 10f02150; body size 48 bytes.
#line 1 "ENTRY_10f02150"

undefined4 * __fastcall FUN_10f02150(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x74), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10f021f0; body size 48 bytes.
#line 1 "ENTRY_10f021f0"

undefined4 * __fastcall FUN_10f021f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10f02dd0; body size 19 bytes.
#line 1 "ENTRY_10f02dd0"

void __fastcall FUN_10f02dd0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x74);
  }
  return;
}


// Reference entry 10f02df0; body size 28 bytes.
#line 1 "ENTRY_10f02df0"

void __fastcall FUN_10f02df0(int *param_1)

{
  thunk_FUN_10f01c90(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x74);
  return;
}


// Reference entry 10f02e20; body size 44 bytes.
#line 1 "ENTRY_10f02e20"

void __fastcall FUN_10f02e20(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (param_1[1] != 0) {
    thunk_FUN_10f01e70(*param_1,param_1[1] + 0x10);
    iVar1 = (int)(param_1[1]);
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x74);
  }
  return;
}


// Reference entry 10f02e80; body size 19 bytes.
#line 1 "ENTRY_10f02e80"

void __fastcall FUN_10f02e80(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x74);
  }
  return;
}


// Reference entry 10f02ec0; body size 28 bytes.
#line 1 "ENTRY_10f02ec0"

void __fastcall FUN_10f02ec0(int *param_1)

{
  thunk_FUN_10f01c90(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x74);
  return;
}


// Reference entry 10f03230; body size 25 bytes.
#line 1 "ENTRY_10f03230"

void __fastcall FUN_10f03230(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x74), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10f04f60; body size 44 bytes.
#line 1 "ENTRY_10f04f60"

undefined4 __fastcall FUN_10f04f60(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10da1cd0(), 0);
  if ((cVar1 == '\0') && (cVar1 = (char)(thunk_FUN_10da15c0(), 0), cVar1 == '\0')) {
    return (undefined4)(0);
  }
  cVar1 = (char)((**(code **)(*param_1 + 0x24))(), 0);
  if (cVar1 == '\0') {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 10f04fa0; body size 31 bytes.
#line 1 "ENTRY_10f04fa0"

undefined1 FUN_10f04fa0(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10da1cd0(), 0);
  if (cVar1 != '\0') {
    cVar1 = (char)(thunk_FUN_10da1650(), 0);
    if (cVar1 == '\0') {
      return (undefined1)(1);
    }
  }
  return (undefined1)(0);
}


// Reference entry 10f04fe0; body size 50 bytes.
#line 1 "ENTRY_10f04fe0"

undefined4 __fastcall FUN_10f04fe0(int *param_1)

{
  char cVar1;
  
  if ((char)param_1[6] != '\0') {
    cVar1 = (char)(thunk_FUN_10da1cd0(), 0);
    if (cVar1 != '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x24))(), 0);
      if (cVar1 != '\0') {
        cVar1 = (char)(thunk_FUN_10da1650(), 0);
        if (cVar1 == '\0') {
          return (undefined4)(1);
        }
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 10f05120; body size 37 bytes.
#line 1 "ENTRY_10f05120"

undefined1 FUN_10f05120(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_106cf0e0(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_10da1650(), 0);
    if (cVar1 == '\0') {
      return (undefined1)(1);
    }
  }
  return (undefined1)(0);
}


// Reference entry 10f05160; body size 56 bytes.
#line 1 "ENTRY_10f05160"

undefined4 __fastcall FUN_10f05160(int *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (char)(thunk_FUN_10da1cd0(), 0);
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*param_1 + 0x24))(), 0);
    if (cVar1 != '\0') {
      iVar2 = (int)((**(code **)(*param_1 + 0x18))(), 0);
      if (iVar2 != 0x10) {
        cVar1 = (char)(thunk_FUN_10da1650(), 0);
        if (cVar1 == '\0') {
          return (undefined4)(1);
        }
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 10f05290; body size 37 bytes.
#line 1 "ENTRY_10f05290"

undefined1 FUN_10f05290(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_106cf0e0(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_10da1650(), 0);
    if (cVar1 == '\0') {
      return (undefined1)(1);
    }
  }
  return (undefined1)(0);
}


// Reference entry 10f052d0; body size 52 bytes.
#line 1 "ENTRY_10f052d0"

undefined1 FUN_10f052d0(void)

{
  char cVar1;
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(1);
  thunk_FUN_10c98710((uint)&auStack_10);
  cVar1 = (char)(thunk_FUN_106c9eb0(), 0);
  if (cVar1 != '\0') {
    uStack_c = (undefined4)(0x10f052f6);
    cVar1 = (char)(thunk_FUN_10da1650(), 0);
    if (cVar1 == '\0') {
      return (undefined1)(1);
    }
  }
  return (undefined1)(0);
}


// Reference entry 10f05330; body size 44 bytes.
#line 1 "ENTRY_10f05330"

undefined4 __fastcall FUN_10f05330(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10da1cd0(), 0);
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*param_1 + 0x24))(), 0);
    if (cVar1 != '\0') {
      cVar1 = (char)(thunk_FUN_10da1650(), 0);
      if (cVar1 == '\0') {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 10f054a0; body size 53 bytes.
#line 1 "ENTRY_10f054a0"

undefined1 FUN_10f054a0(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10da1740(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_10da15c0(), 0);
    if (cVar1 == '\0') {
      cVar1 = (char)(thunk_FUN_10da1370(), 0);
      if (cVar1 != '\0') {
        cVar1 = (char)(thunk_FUN_10da1e80(), 0);
        if (cVar1 != '\0') {
          return (undefined1)(1);
        }
      }
    }
  }
  return (undefined1)(0);
}


// Reference entry 10f05830; body size 53 bytes.
#line 1 "ENTRY_10f05830"

undefined1 FUN_10f05830(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10da15c0(), 0);
  if (cVar1 != '\0') {
    cVar1 = (char)(thunk_FUN_10da1830(), 0);
    if (cVar1 != '\0') {
      cVar1 = (char)(thunk_FUN_10da1530(), 0);
      if (cVar1 == '\0') {
        cVar1 = (char)(thunk_FUN_10da1450(), 0);
        if (cVar1 == '\0') {
          return (undefined1)(1);
        }
      }
    }
  }
  return (undefined1)(0);
}


// Reference entry 10f058f0; body size 62 bytes.
#line 1 "ENTRY_10f058f0"

undefined1 __fastcall FUN_10f058f0(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    cVar1 = (char)(thunk_FUN_10da1cd0(), 0);
    if (cVar1 != '\0') {
      cVar1 = (char)(thunk_FUN_10da15c0(), 0);
      if (cVar1 == '\0') {
        cVar1 = (char)(thunk_FUN_10da1370(), 0);
        if (cVar1 != '\0') {
          cVar1 = (char)(thunk_FUN_10da1c70(*(undefined4 *)(param_1 + 0x18)), 0);
          if (cVar1 != '\0') {
            return (undefined1)(1);
          }
        }
      }
    }
  }
  return (undefined1)(0);
}


// Reference entry 10f060e0; body size 32 bytes.
#line 1 "ENTRY_10f060e0"

undefined4 __fastcall FUN_10f060e0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (char)(thunk_FUN_106c9af0(param_1,1), 0);
  uVar2 = (undefined4)(3);
  if (cVar1 != '\0') {
    uVar2 = (undefined4)(8);
  }
  return (undefined4)(uVar2);
}


// Reference entry 10f06350; body size 35 bytes.
#line 1 "ENTRY_10f06350"

undefined4 FUN_10f06350(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10da1830(), 0);
  if ((cVar1 == '\0') && (cVar1 = (char)(thunk_FUN_10f0b5e0(), 0), cVar1 != '\0')) {
    return (undefined4)(1);
  }
  return (undefined4)(4);
}


// Reference entry 10f06390; body size 57 bytes.
#line 1 "ENTRY_10f06390"

char FUN_10f06390(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_c [12];
  
  puVar4 = (undefined1 *)((uint)&local_c);
  uVar6 = (undefined4)(1);
  uVar5 = (undefined4)(3);
  thunk_FUN_10be4f80((uint)&local_c,3,1);
  piVar3 = (int *)((int *)thunk_FUN_10be2e40(puVar4,uVar5,uVar6), 0);
  iVar1 = (int)(piVar3[1]);
  iVar2 = (int)(*piVar3);
  thunk_FUN_1036e480();
  return (char)((iVar1 - iVar2 >> 3 != 0) + '\a');
}


// Reference entry 10f063e0; body size 32 bytes.
#line 1 "ENTRY_10f063e0"

undefined4 __fastcall FUN_10f063e0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (char)(thunk_FUN_106c9af0(param_1,1), 0);
  uVar2 = (undefined4)(3);
  if (cVar1 != '\0') {
    uVar2 = (undefined4)(6);
  }
  return (undefined4)(uVar2);
}


// Reference entry 10f067b0; body size 46 bytes.
#line 1 "ENTRY_10f067b0"

undefined4 FUN_10f067b0(void)

{
  int iVar1;
  
  thunk_FUN_105ad900();
  iVar1 = (int)(thunk_FUN_10799310(), 0);
  if (iVar1 == 1) {
    return (undefined4)(2);
  }
  if ((iVar1 != 7) && (iVar1 != 8)) {
    return (undefined4)(0xffffffff);
  }
  return (undefined4)(1);
}


// Reference entry 10f06840; body size 32 bytes.
#line 1 "ENTRY_10f06840"

undefined4 FUN_10f06840(void)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(3);
  thunk_FUN_10be4f80(3);
  cVar1 = (char)(thunk_FUN_10be6f80(uVar2), 0);
  uVar2 = (undefined4)(8);
  if (cVar1 != '\0') {
    uVar2 = (undefined4)(5);
  }
  return (undefined4)(uVar2);
}


// Reference entry 10f084a0; body size 21 bytes.
#line 1 "ENTRY_10f084a0"

SCStr * __stdcall FUN_10f084a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f08a80; body size 18 bytes.
#line 1 "ENTRY_10f08a80"

SCStr * __stdcall FUN_10f08a80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep((char *)0x0);
  return (SCStr *)(param_1);
}


// Reference entry 10f08aa0; body size 18 bytes.
#line 1 "ENTRY_10f08aa0"

SCStr * __stdcall FUN_10f08aa0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep((char *)0x0);
  return (SCStr *)(param_1);
}


// Reference entry 10f091a0; body size 18 bytes.
#line 1 "ENTRY_10f091a0"

SCStr * __stdcall FUN_10f091a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep((char *)0x0);
  return (SCStr *)(param_1);
}


// Reference entry 10f09a10; body size 38 bytes.
#line 1 "ENTRY_10f09a10"

undefined4 FUN_10f09a10(void)

{
  char cVar1;
  undefined4 uVar2;
  
  thunk_FUN_105ad900();
  uVar2 = (undefined4)(thunk_FUN_10799310(), 0);
  switch(uVar2) {
  case 1:
    break;
  default:
    return (undefined4)(0x1a);
  case 3:
    return (undefined4)(7);
  case 4:
    return (undefined4)(9);
  case 7:
    return (undefined4)(6);
  case 8:
    return (undefined4)(8);
  }
  thunk_FUN_105ad900();
  cVar1 = (char)(thunk_FUN_107cccd0(), 0);
  uVar2 = (undefined4)(5);
  if (cVar1 != '\0') {
    uVar2 = (undefined4)(0x10);
  }
  return (undefined4)(uVar2);
}


// Reference entry 10f0b840; body size 41 bytes.
#line 1 "ENTRY_10f0b840"

undefined4 FUN_10f0b840(void)

{
  char cVar1;
  
  thunk_FUN_105ad900();
  cVar1 = (char)(thunk_FUN_106dc570(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_10da1ea0(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10f0b9a0; body size 53 bytes.
#line 1 "ENTRY_10f0b9a0"

undefined1 FUN_10f0b9a0(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10da1740(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_10da15c0(), 0);
    if (cVar1 == '\0') {
      cVar1 = (char)(thunk_FUN_10da1370(), 0);
      if (cVar1 != '\0') {
        cVar1 = (char)(thunk_FUN_10da1e80(), 0);
        if (cVar1 != '\0') {
          return (undefined1)(1);
        }
      }
    }
  }
  return (undefined1)(0);
}


// Reference entry 10f0bd80; body size 31 bytes.
#line 1 "ENTRY_10f0bd80"

undefined4 __fastcall FUN_10f0bd80(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = (int)(thunk_FUN_10c96760(), 0);
    if ((iVar1 == 0x15) || (iVar1 == 0x22)) {
      return (undefined4)(0);
    }
  }
  return (undefined4)(0xe);
}


// Reference entry 10f0c7b0; body size 21 bytes.
#line 1 "ENTRY_10f0c7b0"

SCStr * __stdcall FUN_10f0c7b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f0db40; body size 41 bytes.
#line 1 "ENTRY_10f0db40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f0db40(int *param_2)
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


// Reference entry 10f0ef10; body size 19 bytes.
#line 1 "ENTRY_10f0ef10"

void __fastcall FUN_10f0ef10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f0ffa0; body size 38 bytes.
#line 1 "ENTRY_10f0ffa0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f0ffa0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f0ffd0; body size 38 bytes.
#line 1 "ENTRY_10f0ffd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f0ffd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f10000; body size 38 bytes.
#line 1 "ENTRY_10f10000"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f10000(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f10030; body size 38 bytes.
#line 1 "ENTRY_10f10030"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f10030(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f10060; body size 38 bytes.
#line 1 "ENTRY_10f10060"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f10060(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f10090; body size 45 bytes.
#line 1 "ENTRY_10f10090"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f10090(byte param_2)
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


// Reference entry 10f100d0; body size 32 bytes.
#line 1 "ENTRY_10f100d0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f100d0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f0ef30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f10100; body size 32 bytes.
#line 1 "ENTRY_10f10100"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f10100(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f0f080();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f10130; body size 32 bytes.
#line 1 "ENTRY_10f10130"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f10130(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f0f1d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f102a0; body size 35 bytes.
#line 1 "ENTRY_10f102a0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f102a0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f0f4b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6244);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f102d0; body size 35 bytes.
#line 1 "ENTRY_10f102d0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f102d0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f0f600();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6144);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f10300; body size 35 bytes.
#line 1 "ENTRY_10f10300"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f10300(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f0f7a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6128);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f10330; body size 35 bytes.
#line 1 "ENTRY_10f10330"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f10330(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f0f8e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6234);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f10360; body size 35 bytes.
#line 1 "ENTRY_10f10360"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f10360(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f0fa30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6230);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f10630; body size 58 bytes.
#line 1 "ENTRY_10f10630"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f10630(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f10680; body size 33 bytes.
#line 1 "ENTRY_10f10680"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f10680(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f106b0; body size 45 bytes.
#line 1 "ENTRY_10f106b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f106b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpControllerOnlySubmitDirectDiagnostics);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpControllerOnlySubmitDirectDiagnostics);
  thunk_FUN_10f0ef30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f106f0; body size 45 bytes.
#line 1 "ENTRY_10f106f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f106f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSubmitDiagnostics);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSubmitDiagnostics);
  thunk_FUN_10f0f080();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f10730; body size 45 bytes.
#line 1 "ENTRY_10f10730"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f10730(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSubmitDirectDiagnostics);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSubmitDirectDiagnostics);
  thunk_FUN_10f0f1d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f114f0; body size 17 bytes.
#line 1 "ENTRY_10f114f0"

undefined1 * __fastcall FUN_10f114f0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6128) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6128), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10f11640; body size 20 bytes.
#line 1 "ENTRY_10f11640"

undefined4 __fastcall FUN_10f11640(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 0x18) + 0x20));
  if (iVar1 != 0) {
    return (undefined4)(*(undefined4 *)(iVar1 + 0xd7d0));
  }
  return (undefined4)(0);
}


// Reference entry 10f11b70; body size 21 bytes.
#line 1 "ENTRY_10f11b70"

SCStr * __stdcall FUN_10f11b70(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f11b90; body size 19 bytes.
#line 1 "ENTRY_10f11b90"

undefined4 __stdcall FUN_10f11b90(undefined4 param_1)

{
  thunk_FUN_10f11890(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10f11bf0; body size 23 bytes.
#line 1 "ENTRY_10f11bf0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10f11bf0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->int_allocRep((char *)(*(int *)(param_1 + 0x18) + 0x39));
  return (SCStr *)(param_2);
}


// Reference entry 10f11c10; body size 21 bytes.
#line 1 "ENTRY_10f11c10"

SCStr * __stdcall FUN_10f11c10(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f11c30; body size 25 bytes.
#line 1 "ENTRY_10f11c30"

SCStr * __thiscall Recovered_Bulk::m_FUN_10f11c30(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->int_allocRep((char *)(*(int *)(param_1 + 0x18) + 0x618d));
  return (SCStr *)(param_2);
}


// Reference entry 10f11f40; body size 21 bytes.
#line 1 "ENTRY_10f11f40"

SCStr * __stdcall FUN_10f11f40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f11f60; body size 21 bytes.
#line 1 "ENTRY_10f11f60"

SCStr * __stdcall FUN_10f11f60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f11f80; body size 21 bytes.
#line 1 "ENTRY_10f11f80"

SCStr * __stdcall FUN_10f11f80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f11ff0; body size 23 bytes.
#line 1 "ENTRY_10f11ff0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10f11ff0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->int_allocRep((char *)(*(int *)(param_1 + 0x18) + 0x7a));
  return (SCStr *)(param_2);
}


// Reference entry 10f12010; body size 21 bytes.
#line 1 "ENTRY_10f12010"

SCStr * __stdcall FUN_10f12010(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f12030; body size 25 bytes.
#line 1 "ENTRY_10f12030"

SCStr * __thiscall Recovered_Bulk::m_FUN_10f12030(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->int_allocRep((char *)(*(int *)(param_1 + 0x18) + 0x61ce));
  return (SCStr *)(param_2);
}


// Reference entry 10f16250; body size 33 bytes.
#line 1 "ENTRY_10f16250"

void __thiscall Recovered_Bulk::m_FUN_10f16250(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10f16280(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x30);
  return;
}


// Reference entry 10f163a0; body size 60 bytes.
#line 1 "ENTRY_10f163a0"

int __thiscall Recovered_Bulk::m_FUN_10f163a0(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10f163f0((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), 0), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10f16c50; body size 63 bytes.
#line 1 "ENTRY_10f16c50"

void __thiscall Recovered_Bulk::m_FUN_10f16c50(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    uVar2 = (undefined4)(*param_2);
    uVar3 = (undefined4)(param_2[1]);
    *param_2 = (undefined4)(0);
    param_2[1] = (undefined4)(0);
    *puVar1 = (undefined4)(uVar2);
    puVar1[1] = (undefined4)(uVar3);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10f15f70(puVar1,param_2);
  return;
}


// Reference entry 10f16f30; body size 48 bytes.
#line 1 "ENTRY_10f16f30"

undefined4 * __fastcall FUN_10f16f30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10f170c0; body size 62 bytes.
#line 1 "ENTRY_10f170c0"

undefined4 * __fastcall FUN_10f170c0(undefined4 *param_1)

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


// Reference entry 10f174e0; body size 19 bytes.
#line 1 "ENTRY_10f174e0"

void __fastcall FUN_10f174e0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x30);
  }
  return;
}


// Reference entry 10f17500; body size 28 bytes.
#line 1 "ENTRY_10f17500"

void __fastcall FUN_10f17500(int *param_1)

{
  thunk_FUN_10f16280(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x30);
  return;
}


// Reference entry 10f175b0; body size 19 bytes.
#line 1 "ENTRY_10f175b0"

void __fastcall FUN_10f175b0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x30);
  }
  return;
}


// Reference entry 10f17600; body size 29 bytes.
#line 1 "ENTRY_10f17600"

void __fastcall FUN_10f17600(undefined4 *param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_10f19370();
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  thunk_FUN_1148a50e(uVar1,8);
  return;
}


// Reference entry 10f17630; body size 28 bytes.
#line 1 "ENTRY_10f17630"

void __fastcall FUN_10f17630(int *param_1)

{
  thunk_FUN_10f16280(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x30);
  return;
}


// Reference entry 10f17710; body size 29 bytes.
#line 1 "ENTRY_10f17710"

void __fastcall FUN_10f17710(undefined4 *param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_10f19370();
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  thunk_FUN_1148a50e(uVar1,8);
  return;
}


// Reference entry 10f17740; body size 18 bytes.
#line 1 "ENTRY_10f17740"

void __fastcall FUN_10f17740(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,4);
  }
  return;
}


// Reference entry 10f18020; body size 55 bytes.
#line 1 "ENTRY_10f18020"

int * __thiscall Recovered_Bulk::m_FUN_10f18020(byte param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28);
  }
  return (int *)(param_1);
}


// Reference entry 10f182e0; body size 39 bytes.
#line 1 "ENTRY_10f182e0"

int __thiscall Recovered_Bulk::m_FUN_10f182e0(byte param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 4) != 0) {
                    
    terminate();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (int)(param_1);
}


// Reference entry 10f18340; body size 25 bytes.
#line 1 "ENTRY_10f18340"

void __fastcall FUN_10f18340(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10f18f60; body size 31 bytes.
#line 1 "ENTRY_10f18f60"

int * FUN_10f18f60(int *param_1)

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


// Reference entry 10f19500; body size 56 bytes.
#line 1 "ENTRY_10f19500"

void __stdcall FUN_10f19500(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 2) {
    uVar1 = (undefined4)(*param_1);
    uVar2 = (undefined4)(param_1[1]);
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    *param_3 = (undefined4)(uVar1);
    param_3[1] = (undefined4)(uVar2);
    param_3 = (undefined4 *)(param_3 + 2);
  }
  return;
}


// Reference entry 10f19c80; body size 33 bytes.
#line 1 "ENTRY_10f19c80"

void __fastcall FUN_10f19c80(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10f16280(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10f1aa30; body size 63 bytes.
#line 1 "ENTRY_10f1aa30"

void __thiscall Recovered_Bulk::m_FUN_10f1aa30(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    uVar2 = (undefined4)(*param_2);
    uVar3 = (undefined4)(param_2[1]);
    *param_2 = (undefined4)(0);
    param_2[1] = (undefined4)(0);
    *puVar1 = (undefined4)(uVar2);
    puVar1[1] = (undefined4)(uVar3);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10f15f70(puVar1,param_2);
  return;
}


// Reference entry 10f1b1e0; body size 33 bytes.
#line 1 "ENTRY_10f1b1e0"

void __thiscall Recovered_Bulk::m_FUN_10f1b1e0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10f1b240(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10f1b210; body size 33 bytes.
#line 1 "ENTRY_10f1b210"

void __thiscall Recovered_Bulk::m_FUN_10f1b210(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10f1b340(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10f1bf40; body size 48 bytes.
#line 1 "ENTRY_10f1bf40"

undefined4 * __fastcall FUN_10f1bf40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10f1bf80; body size 48 bytes.
#line 1 "ENTRY_10f1bf80"

undefined4 * __fastcall FUN_10f1bf80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10f1c470; body size 19 bytes.
#line 1 "ENTRY_10f1c470"

void __fastcall FUN_10f1c470(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x20);
  }
  return;
}


// Reference entry 10f1c490; body size 19 bytes.
#line 1 "ENTRY_10f1c490"

void __fastcall FUN_10f1c490(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10f1c4b0; body size 19 bytes.
#line 1 "ENTRY_10f1c4b0"

void __fastcall FUN_10f1c4b0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10f1c4d0; body size 28 bytes.
#line 1 "ENTRY_10f1c4d0"

void __fastcall FUN_10f1c4d0(int *param_1)

{
  thunk_FUN_10f1b240(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10f1c500; body size 28 bytes.
#line 1 "ENTRY_10f1c500"

void __fastcall FUN_10f1c500(int *param_1)

{
  thunk_FUN_10f1b340(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10f1c770; body size 19 bytes.
#line 1 "ENTRY_10f1c770"

void __fastcall FUN_10f1c770(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10f1c790; body size 28 bytes.
#line 1 "ENTRY_10f1c790"

void __fastcall FUN_10f1c790(int *param_1)

{
  thunk_FUN_10f1b240(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10f1c7c0; body size 28 bytes.
#line 1 "ENTRY_10f1c7c0"

void __fastcall FUN_10f1c7c0(int *param_1)

{
  thunk_FUN_10f1b340(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10f1d1a0; body size 25 bytes.
#line 1 "ENTRY_10f1d1a0"

void __fastcall FUN_10f1d1a0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10f1d1c0; body size 25 bytes.
#line 1 "ENTRY_10f1d1c0"

void __fastcall FUN_10f1d1c0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10f1d1e0; body size 25 bytes.
#line 1 "ENTRY_10f1d1e0"

void __fastcall FUN_10f1d1e0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10f1df20; body size 56 bytes.
#line 1 "ENTRY_10f1df20"

int __stdcall FUN_10f1df20(int *param_1)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10f1b420((uint)&local_c,param_1);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= (int)(*param_1))) {
    return (int)(local_4 + 0x14);
  }
                    
  std::_Xout_of_range("invalid map<K, T> key");
}


// Reference entry 10f1df70; body size 56 bytes.
#line 1 "ENTRY_10f1df70"

int __stdcall FUN_10f1df70(int *param_1)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10f1b480((uint)&local_c,param_1);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= (int)(*param_1))) {
    return (int)(local_4 + 0x14);
  }
                    
  std::_Xout_of_range("invalid map<K, T> key");
}


// Reference entry 10f1f800; body size 55 bytes.
#line 1 "ENTRY_10f1f800"

undefined4 FUN_10f1f800(int *param_1)

{
  int iVar1;
  undefined1 local_c [12];
  
  iVar1 = (int)(thunk_FUN_10f1b420((uint)&local_c,param_1), 0);
  if ((*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') &&
     (*(int *)(*(int *)(iVar1 + 8) + 0x10) <= (int)(*param_1))) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10f1f850; body size 55 bytes.
#line 1 "ENTRY_10f1f850"

undefined4 FUN_10f1f850(int *param_1)

{
  int iVar1;
  undefined1 local_c [12];
  
  iVar1 = (int)(thunk_FUN_10f1b480((uint)&local_c,param_1), 0);
  if ((*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') &&
     (*(int *)(*(int *)(iVar1 + 8) + 0x10) <= (int)(*param_1))) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10f1f8a0; body size 61 bytes.
#line 1 "ENTRY_10f1f8a0"

undefined4 FUN_10f1f8a0(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_10f1b4e0((uint)&local_c,param_1), 0);
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)), 0);
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10f20790; body size 21 bytes.
#line 1 "ENTRY_10f20790"

SCStr * __stdcall FUN_10f20790(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("wizard/voiceservices/v2");
  return (SCStr *)(param_1);
}


// Reference entry 10f207b0; body size 21 bytes.
#line 1 "ENTRY_10f207b0"

SCStr * __stdcall FUN_10f207b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("voice_services_assets");
  return (SCStr *)(param_1);
}


// Reference entry 10f207d0; body size 27 bytes.
#line 1 "ENTRY_10f207d0"

void __stdcall FUN_10f207d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return;
}


// Reference entry 10f209a0; body size 61 bytes.
#line 1 "ENTRY_10f209a0"

undefined4 FUN_10f209a0(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_10f1b4e0((uint)&local_c,param_1), 0);
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)), 0);
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10f209f0; body size 60 bytes.
#line 1 "ENTRY_10f209f0"

uint __fastcall FUN_10f209f0(int param_1)

{
  uint in_EAX;
  int iVar1;
  undefined4 local_10;
  undefined1 local_c [12];
  
  if (*(int *)(param_1 + 0x28) != 0) {
    local_10 = (undefined4)(0x13);
    iVar1 = (int)(thunk_FUN_10f1b480((uint)&local_c,&local_10), 0);
    in_EAX = (uint)(*(uint *)(iVar1 + 8));
    if ((*(char *)(in_EAX + 0xd) == '\0') && (*(int *)(in_EAX + 0x10) < 0x14)) {
      return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
    }
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10f21b00; body size 33 bytes.
#line 1 "ENTRY_10f21b00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f21b00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x58);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f21f30; body size 37 bytes.
#line 1 "ENTRY_10f21f30"

void __fastcall FUN_10f21f30(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)(thunk_FUN_1125f8a0(param_1 + 0x10,param_1 + 0x39,param_1 + 0x18, *(undefined4 *)(param_1 + 0x54),*(undefined1 *)(param_1 + 0x52)), 0);
  *(undefined2*)(param_1 + 0xc) = (undefined2)(uVar1);
  return;
}


// Reference entry 10f21f60; body size 21 bytes.
#line 1 "ENTRY_10f21f60"

SCStr * __stdcall FUN_10f21f60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCOpSendSetupMessage");
  return (SCStr *)(param_1);
}


// Reference entry 10f21f80; body size 21 bytes.
#line 1 "ENTRY_10f21f80"

SCStr * __stdcall FUN_10f21f80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("setup_ops");
  return (SCStr *)(param_1);
}


// Reference entry 10f21fc0; body size 21 bytes.
#line 1 "ENTRY_10f21fc0"

SCStr * __stdcall FUN_10f21fc0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f228a0; body size 36 bytes.
#line 1 "ENTRY_10f228a0"

void __thiscall Recovered_Bulk::m_FUN_10f228a0(int param_2)
{
  int param_1 = (int )this;
  if ((int)(param_2) == *(int *)(param_1 + 0x34)) {
    thunk_FUN_10f220c0();
    return;
  }
  if ((int)(param_2) == *(int *)(param_1 + 0x38)) {
    thunk_FUN_10f22380();
  }
  return;
}


// Reference entry 10f239f0; body size 33 bytes.
#line 1 "ENTRY_10f239f0"

void __thiscall Recovered_Bulk::m_FUN_10f239f0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10f23a20(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10f24a40; body size 48 bytes.
#line 1 "ENTRY_10f24a40"

undefined4 * __fastcall FUN_10f24a40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10f24c20; body size 62 bytes.
#line 1 "ENTRY_10f24c20"

undefined4 * __fastcall FUN_10f24c20(undefined4 *param_1)

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


// Reference entry 10f25b40; body size 19 bytes.
#line 1 "ENTRY_10f25b40"

void __fastcall FUN_10f25b40(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10f25b90; body size 28 bytes.
#line 1 "ENTRY_10f25b90"

void __fastcall FUN_10f25b90(int *param_1)

{
  thunk_FUN_10f23a20(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10f25bc0; body size 36 bytes.
#line 1 "ENTRY_10f25bc0"

void __fastcall FUN_10f25bc0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    thunk_FUN_10f23a20(*param_1,*(undefined4 *)(*piVar1 + 4));
    thunk_FUN_1148a50e(*piVar1,0x1c);
  }
  return;
}


// Reference entry 10f25bf0; body size 36 bytes.
#line 1 "ENTRY_10f25bf0"

void __fastcall FUN_10f25bf0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    thunk_FUN_10785c60(*param_1,*(undefined4 *)(*piVar1 + 4));
    thunk_FUN_1148a50e(*piVar1,0x1c);
  }
  return;
}


// Reference entry 10f25e50; body size 28 bytes.
#line 1 "ENTRY_10f25e50"

void __fastcall FUN_10f25e50(int *param_1)

{
  thunk_FUN_10f23a20(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10f267e0; body size 38 bytes.
#line 1 "ENTRY_10f267e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f267e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f26810; body size 32 bytes.
#line 1 "ENTRY_10f26810"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f26810(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f259f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f26a90; body size 58 bytes.
#line 1 "ENTRY_10f26a90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f26a90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPAddBondedZonesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPAddBondedZonesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPAddBondedZonesAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f26b80; body size 45 bytes.
#line 1 "ENTRY_10f26b80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f26b80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpBonding);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpBonding);
  thunk_FUN_10f259f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f26bc0; body size 45 bytes.
#line 1 "ENTRY_10f26bc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f26bc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpUnbonding);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpUnbonding);
  thunk_FUN_10f259f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f26c50; body size 25 bytes.
#line 1 "ENTRY_10f26c50"

void __fastcall FUN_10f26c50(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10f2a8e0; body size 19 bytes.
#line 1 "ENTRY_10f2a8e0"

undefined4 __stdcall FUN_10f2a8e0(undefined4 param_1)

{
  thunk_FUN_10f29d90(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10f2a900; body size 19 bytes.
#line 1 "ENTRY_10f2a900"

undefined4 __stdcall FUN_10f2a900(undefined4 param_1)

{
  thunk_FUN_10f29d90(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10f2a950; body size 21 bytes.
#line 1 "ENTRY_10f2a950"

SCStr * __stdcall FUN_10f2a950(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f2ce50; body size 38 bytes.
#line 1 "ENTRY_10f2ce50"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f2ce50(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("ChannelMapSet",0), 0);
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 10f2f730; body size 46 bytes.
#line 1 "ENTRY_10f2f730"

void __fastcall FUN_10f2f730(int param_1)

{
  if (*(int *)(param_1 + 0x538) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x538) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x538))(1);
    }
    *(undefined4*)(param_1 + 0x538) = (undefined4)(0);
  }
  return;
}


// Reference entry 10f32910; body size 38 bytes.
#line 1 "ENTRY_10f32910"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f32910(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f32940; body size 38 bytes.
#line 1 "ENTRY_10f32940"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f32940(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f32970; body size 38 bytes.
#line 1 "ENTRY_10f32970"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f32970(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f329a0; body size 38 bytes.
#line 1 "ENTRY_10f329a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f329a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f329d0; body size 32 bytes.
#line 1 "ENTRY_10f329d0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f329d0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f31800();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f32a00; body size 32 bytes.
#line 1 "ENTRY_10f32a00"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f32a00(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f31950();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f32a30; body size 32 bytes.
#line 1 "ENTRY_10f32a30"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f32a30(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f31aa0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f32a60; body size 32 bytes.
#line 1 "ENTRY_10f32a60"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f32a60(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f31bf0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f32c20; body size 35 bytes.
#line 1 "ENTRY_10f32c20"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f32c20(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f31e90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6144);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f32d30; body size 35 bytes.
#line 1 "ENTRY_10f32d30"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f32d30(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f32100();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6144);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f32e40; body size 35 bytes.
#line 1 "ENTRY_10f32e40"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f32e40(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f32370();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6258);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f32f50; body size 35 bytes.
#line 1 "ENTRY_10f32f50"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f32f50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f32630();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6238);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f32f80; body size 45 bytes.
#line 1 "ENTRY_10f32f80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f32f80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGetEthernetStatus);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpGetEthernetStatus);
  thunk_FUN_10f31800();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f32fc0; body size 45 bytes.
#line 1 "ENTRY_10f32fc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f32fc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGetNetworkConnectivityTestResult);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpGetNetworkConnectivityTestResult);
  thunk_FUN_10f31950();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


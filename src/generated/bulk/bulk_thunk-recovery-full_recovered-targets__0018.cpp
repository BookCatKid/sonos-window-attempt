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
struct SCOpRefBase { char _pad; SCOpRefBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int int_start(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int hash(A...); template<class... A> int int_addref(A...); template<class... A> int int_release(A...); static int op_ctor(...) { return 0; } static int op_eq(...) { return 0; } };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct End { char _pad; End(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Reading { char _pad; Reading(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCBrowseDataSourceProxy { char _pad; SCBrowseDataSourceProxy(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIAppRatingManager { char _pad; SCIAppRatingManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIAudioData { char _pad; SCIAudioData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCICancellable { char _pad; SCICancellable(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIConnectedPartnersManager { char _pad; SCIConnectedPartnersManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCILocalMediaCollectionListener { char _pad; SCILocalMediaCollectionListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIMusicServer { char _pad; SCIMusicServer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIServiceAppInteropManager { char _pad; SCIServiceAppInteropManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIUrlConnection { char _pad; SCIUrlConnection(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIVoiceServiceDelegate { char _pad; SCIVoiceServiceDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCMusicServerData { char _pad; SCMusicServerData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCUriExclusiveFilter { char _pad; SCUriExclusiveFilter(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCUriFilterBase { char _pad; SCUriFilterBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *E9;
typedef void *WARNING;
using namespace std;
struct Recovered_Bulk { char _pad; void __thiscall m_FUN_10bd1d00(void *param_2,int param_3); template<class... A> int m_FUN_10bd1d00(A...); void __thiscall m_FUN_10bd2640(undefined4 *param_2); template<class... A> int m_FUN_10bd2640(A...); void __thiscall m_FUN_10bd2670(undefined4 *param_2); template<class... A> int m_FUN_10bd2670(A...); void __thiscall m_FUN_10bd2760(undefined4 param_2); template<class... A> int m_FUN_10bd2760(A...); void __thiscall m_FUN_10bd2f80(int *param_2,int param_3,undefined4 param_4,undefined4 param_5); template<class... A> int m_FUN_10bd2f80(A...); undefined4 * __thiscall m_FUN_10bd31f0(undefined4 *param_2); template<class... A> int m_FUN_10bd31f0(A...); undefined4 * __thiscall m_FUN_10bd32a0(undefined4 param_2); template<class... A> int m_FUN_10bd32a0(A...); undefined4 * __thiscall m_FUN_10bd32c0(undefined4 param_2); template<class... A> int m_FUN_10bd32c0(A...); undefined4 * __thiscall m_FUN_10bd32e0(undefined4 param_2); template<class... A> int m_FUN_10bd32e0(A...); undefined4 * __thiscall m_FUN_10bd3300(undefined4 param_2); template<class... A> int m_FUN_10bd3300(A...); undefined4 * __thiscall m_FUN_10bd3320(undefined4 param_2); template<class... A> int m_FUN_10bd3320(A...); undefined4 * __thiscall m_FUN_10bd3340(undefined4 param_2); template<class... A> int m_FUN_10bd3340(A...); undefined4 * __thiscall m_FUN_10bd3360(undefined4 param_2); template<class... A> int m_FUN_10bd3360(A...); undefined4 * __thiscall m_FUN_10bd3380(undefined4 param_2); template<class... A> int m_FUN_10bd3380(A...); undefined4 * __thiscall m_FUN_10bd33a0(undefined4 param_2); template<class... A> int m_FUN_10bd33a0(A...); undefined4 * __thiscall m_FUN_10bd3660(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3660(A...); undefined4 * __thiscall m_FUN_10bd3670(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3670(A...); undefined4 * __thiscall m_FUN_10bd3680(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3680(A...); undefined4 * __thiscall m_FUN_10bd3690(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3690(A...); undefined4 * __thiscall m_FUN_10bd36a0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd36a0(A...); undefined4 * __thiscall m_FUN_10bd36b0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd36b0(A...); undefined4 * __thiscall m_FUN_10bd36c0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd36c0(A...); undefined4 * __thiscall m_FUN_10bd36d0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd36d0(A...); undefined4 * __thiscall m_FUN_10bd36e0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd36e0(A...); undefined4 * __thiscall m_FUN_10bd36f0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd36f0(A...); undefined4 * __thiscall m_FUN_10bd3700(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3700(A...); undefined4 * __thiscall m_FUN_10bd3710(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3710(A...); undefined4 * __thiscall m_FUN_10bd3720(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3720(A...); undefined4 * __thiscall m_FUN_10bd3730(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3730(A...); undefined4 * __thiscall m_FUN_10bd3740(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3740(A...); undefined4 * __thiscall m_FUN_10bd3bd0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3bd0(A...); undefined4 * __thiscall m_FUN_10bd3be0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3be0(A...); undefined4 * __thiscall m_FUN_10bd3bf0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3bf0(A...); undefined4 * __thiscall m_FUN_10bd3c00(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3c00(A...); undefined4 * __thiscall m_FUN_10bd3c10(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3c10(A...); undefined4 * __thiscall m_FUN_10bd3c20(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3c20(A...); undefined4 * __thiscall m_FUN_10bd3c30(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3c30(A...); undefined4 * __thiscall m_FUN_10bd3c40(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3c40(A...); undefined4 * __thiscall m_FUN_10bd3c50(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3c50(A...); undefined4 * __thiscall m_FUN_10bd3d80(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10bd3d80(A...); undefined4 * __thiscall m_FUN_10bd3da0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10bd3da0(A...); undefined4 * __thiscall m_FUN_10bd3dc0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10bd3dc0(A...); undefined4 * __thiscall m_FUN_10bd3de0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3de0(A...); undefined4 * __thiscall m_FUN_10bd3df0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3df0(A...); undefined4 * __thiscall m_FUN_10bd3e10(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3e10(A...); undefined4 * __thiscall m_FUN_10bd3e30(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3e30(A...); undefined4 * __thiscall m_FUN_10bd3e40(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3e40(A...); undefined4 * __thiscall m_FUN_10bd3e50(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3e50(A...); undefined4 * __thiscall m_FUN_10bd3e60(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3e60(A...); undefined4 * __thiscall m_FUN_10bd3e70(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3e70(A...); undefined4 * __thiscall m_FUN_10bd3e90(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3e90(A...); undefined4 * __thiscall m_FUN_10bd3eb0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3eb0(A...); undefined4 * __thiscall m_FUN_10bd3ec0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3ec0(A...); undefined4 * __thiscall m_FUN_10bd3ed0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd3ed0(A...); undefined4 * __thiscall m_FUN_10bd3ee0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10bd3ee0(A...); undefined4 * __thiscall m_FUN_10bd3f40(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10bd3f40(A...); undefined4 * __thiscall m_FUN_10bd3f80(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10bd3f80(A...); undefined4 * __thiscall m_FUN_10bd4060(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10bd4060(A...); undefined4 * __thiscall m_FUN_10bd41c0(undefined4 *param_2); template<class... A> int m_FUN_10bd41c0(A...); SCStr * __thiscall m_FUN_10bd4360(SCStr *param_2); template<class... A> int m_FUN_10bd4360(A...); undefined4 * __thiscall m_FUN_10bd4390(undefined4 *param_2); template<class... A> int m_FUN_10bd4390(A...); undefined4 * __thiscall m_FUN_10bd4410(undefined4 *param_2); template<class... A> int m_FUN_10bd4410(A...); undefined4 * __thiscall m_FUN_10bd4420(undefined4 *param_2); template<class... A> int m_FUN_10bd4420(A...); undefined4 * __thiscall m_FUN_10bd44d0(undefined4 *param_2); template<class... A> int m_FUN_10bd44d0(A...); undefined4 * __thiscall m_FUN_10bd4550(undefined4 *param_2); template<class... A> int m_FUN_10bd4550(A...); undefined4 * __thiscall m_FUN_10bd45b0(undefined4 *param_2); template<class... A> int m_FUN_10bd45b0(A...); undefined4 * __thiscall m_FUN_10bd4650(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10bd4650(A...); int * __thiscall m_FUN_10bd73e0(int *param_2); template<class... A> int m_FUN_10bd73e0(A...); int * __thiscall m_FUN_10bd7440(int *param_2); template<class... A> int m_FUN_10bd7440(A...); int * __thiscall m_FUN_10bd7510(int *param_2); template<class... A> int m_FUN_10bd7510(A...); int * __thiscall m_FUN_10bd75e0(int *param_2); template<class... A> int m_FUN_10bd75e0(A...); int * __thiscall m_FUN_10bd76b0(int *param_2); template<class... A> int m_FUN_10bd76b0(A...); undefined1 * __thiscall m_FUN_10bd7780(undefined1 *param_2); template<class... A> int m_FUN_10bd7780(A...); bool __thiscall m_FUN_10bd79d0(int *param_2); template<class... A> int m_FUN_10bd79d0(A...); bool __thiscall m_FUN_10bd79f0(int *param_2); template<class... A> int m_FUN_10bd79f0(A...); bool __thiscall m_FUN_10bd7a10(int *param_2); template<class... A> int m_FUN_10bd7a10(A...); bool __thiscall m_FUN_10bd7a30(int *param_2); template<class... A> int m_FUN_10bd7a30(A...); bool __thiscall m_FUN_10bd7a50(int *param_2); template<class... A> int m_FUN_10bd7a50(A...); bool __thiscall m_FUN_10bd7a70(int *param_2); template<class... A> int m_FUN_10bd7a70(A...); bool __thiscall m_FUN_10bd7a90(int *param_2); template<class... A> int m_FUN_10bd7a90(A...); bool __thiscall m_FUN_10bd7ab0(int *param_2); template<class... A> int m_FUN_10bd7ab0(A...); bool __thiscall m_FUN_10bd7ad0(int *param_2); template<class... A> int m_FUN_10bd7ad0(A...); bool __thiscall m_FUN_10bd7af0(int *param_2); template<class... A> int m_FUN_10bd7af0(A...); bool __thiscall m_FUN_10bd7b10(int *param_2); template<class... A> int m_FUN_10bd7b10(A...); bool __thiscall m_FUN_10bd7b30(int *param_2); template<class... A> int m_FUN_10bd7b30(A...); bool __thiscall m_FUN_10bd7b50(int *param_2); template<class... A> int m_FUN_10bd7b50(A...); bool __thiscall m_FUN_10bd7b70(int *param_2); template<class... A> int m_FUN_10bd7b70(A...); bool __thiscall m_FUN_10bd7b90(int *param_2); template<class... A> int m_FUN_10bd7b90(A...); bool __thiscall m_FUN_10bd7bb0(int *param_2); template<class... A> int m_FUN_10bd7bb0(A...); bool __thiscall m_FUN_10bd7bd0(int *param_2); template<class... A> int m_FUN_10bd7bd0(A...); bool __thiscall m_FUN_10bd7bf0(int *param_2); template<class... A> int m_FUN_10bd7bf0(A...); bool __thiscall m_FUN_10bd7c10(int *param_2); template<class... A> int m_FUN_10bd7c10(A...); bool __thiscall m_FUN_10bd7c30(int *param_2); template<class... A> int m_FUN_10bd7c30(A...); bool __thiscall m_FUN_10bd7c50(int *param_2); template<class... A> int m_FUN_10bd7c50(A...); bool __thiscall m_FUN_10bd7c70(int *param_2); template<class... A> int m_FUN_10bd7c70(A...); bool __thiscall m_FUN_10bd7c90(int *param_2); template<class... A> int m_FUN_10bd7c90(A...); bool __thiscall m_FUN_10bd7cb0(int *param_2); template<class... A> int m_FUN_10bd7cb0(A...); bool __thiscall m_FUN_10bd7cd0(int *param_2); template<class... A> int m_FUN_10bd7cd0(A...); bool __thiscall m_FUN_10bd7cf0(int *param_2); template<class... A> int m_FUN_10bd7cf0(A...); bool __thiscall m_FUN_10bd7d10(int *param_2); template<class... A> int m_FUN_10bd7d10(A...); bool __thiscall m_FUN_10bd7d30(int *param_2); template<class... A> int m_FUN_10bd7d30(A...); bool __thiscall m_FUN_10bd7d50(int *param_2); template<class... A> int m_FUN_10bd7d50(A...); bool __thiscall m_FUN_10bd7d70(int *param_2); template<class... A> int m_FUN_10bd7d70(A...); bool __thiscall m_FUN_10bd7d90(int *param_2); template<class... A> int m_FUN_10bd7d90(A...); bool __thiscall m_FUN_10bd7db0(int *param_2); template<class... A> int m_FUN_10bd7db0(A...); void __thiscall m_FUN_10bd8d20(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd8d20(A...); void __thiscall m_FUN_10bd8d50(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd8d50(A...); void __thiscall m_FUN_10bd8d80(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd8d80(A...); void __thiscall m_FUN_10bd95c0(uint param_2); template<class... A> int m_FUN_10bd95c0(A...); uint __thiscall m_FUN_10bd9630(uint param_2); template<class... A> int m_FUN_10bd9630(A...); uint __thiscall m_FUN_10bd9670(uint param_2); template<class... A> int m_FUN_10bd9670(A...); uint __thiscall m_FUN_10bd96b0(uint param_2); template<class... A> int m_FUN_10bd96b0(A...); uint __thiscall m_FUN_10bd9700(uint param_2); template<class... A> int m_FUN_10bd9700(A...); uint __thiscall m_FUN_10bd9760(uint param_2); template<class... A> int m_FUN_10bd9760(A...); void __thiscall m_FUN_10bdbba0(int param_2); template<class... A> int m_FUN_10bdbba0(A...); void __thiscall m_FUN_10bdbc10(int param_2); template<class... A> int m_FUN_10bdbc10(A...); void __thiscall m_FUN_10bdbc80(int param_2); template<class... A> int m_FUN_10bdbc80(A...); void __thiscall m_FUN_10bdbcf0(int param_2); template<class... A> int m_FUN_10bdbcf0(A...); void __thiscall m_FUN_10bdbd60(int param_2); template<class... A> int m_FUN_10bdbd60(A...); void __thiscall m_FUN_10bdbdd0(int param_2); template<class... A> int m_FUN_10bdbdd0(A...); void __thiscall m_FUN_10bdbe40(int param_2); template<class... A> int m_FUN_10bdbe40(A...); void __thiscall m_FUN_10bdbeb0(int param_2); template<class... A> int m_FUN_10bdbeb0(A...); void __thiscall m_FUN_10bdbf20(int param_2); template<class... A> int m_FUN_10bdbf20(A...); void __thiscall m_FUN_10bdbf90(int *param_2,int param_3); template<class... A> int m_FUN_10bdbf90(A...); void __thiscall m_FUN_10bdc230(int *param_2); template<class... A> int m_FUN_10bdc230(A...); void __thiscall m_FUN_10bdc2a0(int *param_2); template<class... A> int m_FUN_10bdc2a0(A...); void __thiscall m_FUN_10bdc310(int *param_2); template<class... A> int m_FUN_10bdc310(A...); void __thiscall m_FUN_10bdc380(int *param_2); template<class... A> int m_FUN_10bdc380(A...); void __thiscall m_FUN_10bdc3f0(int *param_2); template<class... A> int m_FUN_10bdc3f0(A...); void __thiscall m_FUN_10bdc460(int *param_2); template<class... A> int m_FUN_10bdc460(A...); void __thiscall m_FUN_10bdc4d0(int *param_2); template<class... A> int m_FUN_10bdc4d0(A...); void __thiscall m_FUN_10bdc540(int *param_2); template<class... A> int m_FUN_10bdc540(A...); void __thiscall m_FUN_10bdc5b0(int *param_2); template<class... A> int m_FUN_10bdc5b0(A...); void __thiscall m_FUN_10bdc620(undefined4 param_2); template<class... A> int m_FUN_10bdc620(A...); void __thiscall m_FUN_10bdc630(undefined4 *param_2); template<class... A> int m_FUN_10bdc630(A...); void __thiscall m_FUN_10bdcf70(undefined4 *param_2); template<class... A> int m_FUN_10bdcf70(A...); void __thiscall m_FUN_10bde540(undefined4 *param_2); template<class... A> int m_FUN_10bde540(A...); void __thiscall m_FUN_10bde550(undefined4 *param_2); template<class... A> int m_FUN_10bde550(A...); void __thiscall m_FUN_10bde560(undefined4 *param_2); template<class... A> int m_FUN_10bde560(A...); void __thiscall m_FUN_10bde570(undefined4 *param_2); template<class... A> int m_FUN_10bde570(A...); void __thiscall m_FUN_10bde590(undefined4 *param_2); template<class... A> int m_FUN_10bde590(A...); void __thiscall m_FUN_10bde5a0(undefined4 *param_2); template<class... A> int m_FUN_10bde5a0(A...); void __thiscall m_FUN_10bde5b0(undefined4 *param_2); template<class... A> int m_FUN_10bde5b0(A...); void __thiscall m_FUN_10bde5c0(undefined4 *param_2); template<class... A> int m_FUN_10bde5c0(A...); void __thiscall m_FUN_10bde5d0(undefined4 *param_2); template<class... A> int m_FUN_10bde5d0(A...); void __thiscall m_FUN_10bde5e0(undefined4 *param_2); template<class... A> int m_FUN_10bde5e0(A...); void __thiscall m_FUN_10bde5f0(undefined4 *param_2); template<class... A> int m_FUN_10bde5f0(A...); void __thiscall m_FUN_10bde600(undefined4 *param_2); template<class... A> int m_FUN_10bde600(A...); void __thiscall m_FUN_10be2090(undefined4 *param_2); template<class... A> int m_FUN_10be2090(A...); void __thiscall m_FUN_10be20a0(undefined4 *param_2); template<class... A> int m_FUN_10be20a0(A...); void __thiscall m_FUN_10be20b0(undefined4 *param_2); template<class... A> int m_FUN_10be20b0(A...); void __thiscall m_FUN_10be20c0(undefined4 *param_2); template<class... A> int m_FUN_10be20c0(A...); void __thiscall m_FUN_10be20d0(undefined4 *param_2); template<class... A> int m_FUN_10be20d0(A...); void __thiscall m_FUN_10be20e0(undefined4 *param_2); template<class... A> int m_FUN_10be20e0(A...); void __thiscall m_FUN_10be20f0(undefined4 *param_2); template<class... A> int m_FUN_10be20f0(A...); void __thiscall m_FUN_10be2100(undefined4 *param_2); template<class... A> int m_FUN_10be2100(A...); void __thiscall m_FUN_10be2110(undefined4 *param_2); template<class... A> int m_FUN_10be2110(A...); void __thiscall m_FUN_10be2120(undefined4 *param_2); template<class... A> int m_FUN_10be2120(A...); void __thiscall m_FUN_10be2130(undefined4 *param_2); template<class... A> int m_FUN_10be2130(A...); void __thiscall m_FUN_10be2140(undefined4 *param_2); template<class... A> int m_FUN_10be2140(A...); void __thiscall m_FUN_10be2160(undefined4 *param_2); template<class... A> int m_FUN_10be2160(A...); void __thiscall m_FUN_10be2170(undefined4 *param_2); template<class... A> int m_FUN_10be2170(A...); void __thiscall m_FUN_10be2180(undefined4 *param_2); template<class... A> int m_FUN_10be2180(A...); void __thiscall m_FUN_10be2190(undefined4 *param_2); template<class... A> int m_FUN_10be2190(A...); void __thiscall m_FUN_10be21a0(undefined4 *param_2); template<class... A> int m_FUN_10be21a0(A...); void __thiscall m_FUN_10be21b0(undefined4 *param_2); template<class... A> int m_FUN_10be21b0(A...); void __thiscall m_FUN_10be21c0(undefined4 *param_2); template<class... A> int m_FUN_10be21c0(A...); void __thiscall m_FUN_10be21d0(undefined4 *param_2); template<class... A> int m_FUN_10be21d0(A...); void __thiscall m_FUN_10be8300(int *param_2,int param_3,undefined4 param_4,undefined4 param_5); template<class... A> int m_FUN_10be8300(A...); void __thiscall m_FUN_10be9d20(undefined4 *param_2); template<class... A> int m_FUN_10be9d20(A...); void __thiscall m_FUN_10be9d50(undefined4 *param_2); template<class... A> int m_FUN_10be9d50(A...); void __thiscall m_FUN_10be9e40(undefined4 param_2); template<class... A> int m_FUN_10be9e40(A...); int * __thiscall m_FUN_10bedc80(int *param_2); template<class... A> int m_FUN_10bedc80(A...); int * __thiscall m_FUN_10bee910(int *param_2); template<class... A> int m_FUN_10bee910(A...); int * __thiscall m_FUN_10bee950(int *param_2); template<class... A> int m_FUN_10bee950(A...); int * __thiscall m_FUN_10bee970(int *param_2); template<class... A> int m_FUN_10bee970(A...); int * __thiscall m_FUN_10bee990(int *param_2); template<class... A> int m_FUN_10bee990(A...); int * __thiscall m_FUN_10bee9b0(int *param_2); template<class... A> int m_FUN_10bee9b0(A...); int * __thiscall m_FUN_10bee9d0(int *param_2); template<class... A> int m_FUN_10bee9d0(A...); int * __thiscall m_FUN_10bee9f0(int *param_2); template<class... A> int m_FUN_10bee9f0(A...); undefined4 * __thiscall m_FUN_10beeb70(undefined4 *param_2); template<class... A> int m_FUN_10beeb70(A...); int * __thiscall m_FUN_10bf0410(int *param_2); template<class... A> int m_FUN_10bf0410(A...); void __thiscall m_FUN_10bf0990(int param_2); template<class... A> int m_FUN_10bf0990(A...); void __thiscall m_FUN_10bf18a0(undefined4 param_2); template<class... A> int m_FUN_10bf18a0(A...); int * __thiscall m_FUN_10bf20f0(int *param_2); template<class... A> int m_FUN_10bf20f0(A...); undefined4 * __thiscall m_FUN_10bf2140(undefined4 param_2); template<class... A> int m_FUN_10bf2140(A...); undefined4 * __thiscall m_FUN_10bf2180(undefined4 param_2); template<class... A> int m_FUN_10bf2180(A...); undefined4 * __thiscall m_FUN_10bf2210(undefined4 param_2); template<class... A> int m_FUN_10bf2210(A...); int * __thiscall m_FUN_10bf3650(undefined4 param_2,int *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bf3650(A...); undefined4 * __thiscall m_FUN_10bf36a0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bf36a0(A...); undefined4 * __thiscall m_FUN_10bf38d0(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_10bf38d0(A...); undefined4 * __thiscall m_FUN_10bf38e0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bf38e0(A...); undefined4 * __thiscall m_FUN_10bf3920(undefined4 param_2,undefined4 param_3,undefined4 *param_4); template<class... A> int m_FUN_10bf3920(A...); undefined4 * __thiscall m_FUN_10bf3930(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bf3930(A...); int * __thiscall m_FUN_10bf3970(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10bf3970(A...); void __thiscall m_FUN_10bf3b00(undefined4 *param_2); template<class... A> int m_FUN_10bf3b00(A...); void __thiscall m_FUN_10bf3b20(undefined4 *param_2); template<class... A> int m_FUN_10bf3b20(A...); void __thiscall m_FUN_10bf47d0(int *param_2,undefined4 *param_3); template<class... A> int m_FUN_10bf47d0(A...); undefined4 * __thiscall m_FUN_10bf4d10(undefined4 param_2); template<class... A> int m_FUN_10bf4d10(A...); undefined4 * __thiscall m_FUN_10bf4d30(undefined4 param_2); template<class... A> int m_FUN_10bf4d30(A...); undefined4 * __thiscall m_FUN_10bf4ef0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bf4ef0(A...); undefined4 * __thiscall m_FUN_10bf4f00(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bf4f00(A...); undefined4 * __thiscall m_FUN_10bf4f10(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bf4f10(A...); undefined4 * __thiscall m_FUN_10bf4f20(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bf4f20(A...); undefined4 * __thiscall m_FUN_10bf4f30(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bf4f30(A...); undefined4 * __thiscall m_FUN_10bf4f40(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bf4f40(A...); undefined4 * __thiscall m_FUN_10bf4f50(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bf4f50(A...); undefined4 * __thiscall m_FUN_10bf4f60(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bf4f60(A...); undefined4 * __thiscall m_FUN_10bf4fc0(undefined4 *param_2); template<class... A> int m_FUN_10bf4fc0(A...); undefined4 * __thiscall m_FUN_10bf4fd0(undefined4 param_2); template<class... A> int m_FUN_10bf4fd0(A...); undefined4 * __thiscall m_FUN_10bf4ff0(undefined4 param_2); template<class... A> int m_FUN_10bf4ff0(A...); undefined4 * __thiscall m_FUN_10bf5010(undefined4 *param_2); template<class... A> int m_FUN_10bf5010(A...); undefined4 * __thiscall m_FUN_10bf5080(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10bf5080(A...); undefined4 * __thiscall m_FUN_10bf5600(undefined4 param_2); template<class... A> int m_FUN_10bf5600(A...); undefined4 * __thiscall m_FUN_10bf5610(undefined4 param_2); template<class... A> int m_FUN_10bf5610(A...); undefined4 * __thiscall m_FUN_10bf5620(undefined4 param_2,int param_3); template<class... A> int m_FUN_10bf5620(A...); bool __thiscall m_FUN_10bf5e40(int *param_2); template<class... A> int m_FUN_10bf5e40(A...); bool __thiscall m_FUN_10bf5e60(int *param_2); template<class... A> int m_FUN_10bf5e60(A...); bool __thiscall m_FUN_10bf5e80(int *param_2); template<class... A> int m_FUN_10bf5e80(A...); bool __thiscall m_FUN_10bf5ea0(int *param_2); template<class... A> int m_FUN_10bf5ea0(A...); bool __thiscall m_FUN_10bf5ec0(int *param_2); template<class... A> int m_FUN_10bf5ec0(A...); bool __thiscall m_FUN_10bf5ee0(int *param_2); template<class... A> int m_FUN_10bf5ee0(A...); bool __thiscall m_FUN_10bf5f00(int *param_2); template<class... A> int m_FUN_10bf5f00(A...); bool __thiscall m_FUN_10bf5f20(int *param_2); template<class... A> int m_FUN_10bf5f20(A...); int * __thiscall m_FUN_10bf6cf0(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10bf6cf0(A...); int * __thiscall m_FUN_10bf6d70(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10bf6d70(A...); void __thiscall m_FUN_10bf7280(undefined4 *param_2); template<class... A> int m_FUN_10bf7280(A...); void __thiscall m_FUN_10bf72a0(undefined4 *param_2); template<class... A> int m_FUN_10bf72a0(A...); void __thiscall m_FUN_10bf72c0(undefined4 *param_2); template<class... A> int m_FUN_10bf72c0(A...); void __thiscall m_FUN_10bf72d0(undefined4 *param_2); template<class... A> int m_FUN_10bf72d0(A...); void __thiscall m_FUN_10bf72e0(undefined4 *param_2); template<class... A> int m_FUN_10bf72e0(A...); void __thiscall m_FUN_10bf72f0(undefined4 *param_2); template<class... A> int m_FUN_10bf72f0(A...); void __thiscall m_FUN_10bf7300(undefined4 *param_2); template<class... A> int m_FUN_10bf7300(A...); void __thiscall m_FUN_10bf7310(undefined4 *param_2); template<class... A> int m_FUN_10bf7310(A...); void __thiscall m_FUN_10bf77d0(undefined4 *param_2); template<class... A> int m_FUN_10bf77d0(A...); void __thiscall m_FUN_10bf7800(undefined4 *param_2); template<class... A> int m_FUN_10bf7800(A...); uint __thiscall m_FUN_10bf7810(undefined4 *param_2); template<class... A> int m_FUN_10bf7810(A...); uint __thiscall m_FUN_10bf7840(undefined4 *param_2); template<class... A> int m_FUN_10bf7840(A...); void __thiscall m_FUN_10bf7e20(undefined4 *param_2); template<class... A> int m_FUN_10bf7e20(A...); void __thiscall m_FUN_10bf7e30(undefined4 *param_2); template<class... A> int m_FUN_10bf7e30(A...); void __thiscall m_FUN_10bf7e40(undefined4 *param_2); template<class... A> int m_FUN_10bf7e40(A...); void __thiscall m_FUN_10bf7e60(undefined4 *param_2); template<class... A> int m_FUN_10bf7e60(A...); void __thiscall m_FUN_10bf7e70(undefined4 *param_2); template<class... A> int m_FUN_10bf7e70(A...); void __thiscall m_FUN_10bf7e80(undefined4 *param_2); template<class... A> int m_FUN_10bf7e80(A...); int * __thiscall m_FUN_10bfa220(undefined4 param_2,int *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bfa220(A...); undefined4 * __thiscall m_FUN_10bfa270(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bfa270(A...); undefined4 * __thiscall m_FUN_10bfa3a0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bfa3a0(A...); int * __thiscall m_FUN_10bfa3e0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10bfa3e0(A...); void __thiscall m_FUN_10bfa490(undefined4 *param_2); template<class... A> int m_FUN_10bfa490(A...); undefined4 * __thiscall m_FUN_10bfab50(undefined4 param_2); template<class... A> int m_FUN_10bfab50(A...); undefined4 * __thiscall m_FUN_10bfac40(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bfac40(A...); undefined4 * __thiscall m_FUN_10bfac50(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bfac50(A...); undefined4 * __thiscall m_FUN_10bfac60(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bfac60(A...); undefined4 * __thiscall m_FUN_10bfac70(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bfac70(A...); undefined4 * __thiscall m_FUN_10bfaca0(undefined4 *param_2); template<class... A> int m_FUN_10bfaca0(A...); undefined4 * __thiscall m_FUN_10bfacb0(undefined4 param_2); template<class... A> int m_FUN_10bfacb0(A...); undefined4 * __thiscall m_FUN_10bfb320(undefined4 param_2); template<class... A> int m_FUN_10bfb320(A...); bool __thiscall m_FUN_10bfba50(int *param_2); template<class... A> int m_FUN_10bfba50(A...); bool __thiscall m_FUN_10bfba70(int *param_2); template<class... A> int m_FUN_10bfba70(A...); bool __thiscall m_FUN_10bfba90(int *param_2); template<class... A> int m_FUN_10bfba90(A...); bool __thiscall m_FUN_10bfbab0(int *param_2); template<class... A> int m_FUN_10bfbab0(A...); int * __thiscall m_FUN_10bfc240(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10bfc240(A...); void __thiscall m_FUN_10bfc500(undefined4 *param_2); template<class... A> int m_FUN_10bfc500(A...); void __thiscall m_FUN_10bfc520(undefined4 *param_2); template<class... A> int m_FUN_10bfc520(A...); void __thiscall m_FUN_10bfc530(undefined4 *param_2); template<class... A> int m_FUN_10bfc530(A...); void __thiscall m_FUN_10bfc540(undefined4 *param_2); template<class... A> int m_FUN_10bfc540(A...); void __thiscall m_FUN_10bfc670(undefined4 *param_2); template<class... A> int m_FUN_10bfc670(A...); void __thiscall m_FUN_10bfc690(undefined4 *param_2); template<class... A> int m_FUN_10bfc690(A...); uint __thiscall m_FUN_10bfc6a0(undefined4 param_2); template<class... A> int m_FUN_10bfc6a0(A...); void __thiscall m_FUN_10bfc8b0(undefined4 *param_2); template<class... A> int m_FUN_10bfc8b0(A...); void __thiscall m_FUN_10bfc8c0(undefined4 *param_2); template<class... A> int m_FUN_10bfc8c0(A...); int * __thiscall m_FUN_10bfe290(int *param_2); template<class... A> int m_FUN_10bfe290(A...); int * __thiscall m_FUN_10bfe310(int *param_2); template<class... A> int m_FUN_10bfe310(A...); int * __thiscall m_FUN_10bfe330(int *param_2); template<class... A> int m_FUN_10bfe330(A...); undefined4 * __thiscall m_FUN_10bfe370(undefined4 *param_2); template<class... A> int m_FUN_10bfe370(A...); int * __thiscall m_FUN_10bfe390(int *param_2); template<class... A> int m_FUN_10bfe390(A...); int * __thiscall m_FUN_10bfe3b0(int *param_2); template<class... A> int m_FUN_10bfe3b0(A...); int * __thiscall m_FUN_10bfe3d0(int *param_2); template<class... A> int m_FUN_10bfe3d0(A...); int * __thiscall m_FUN_10bfe440(int *param_2); template<class... A> int m_FUN_10bfe440(A...); undefined4 * __thiscall m_FUN_10c013a0(undefined4 param_2,SCStr *param_3); template<class... A> int m_FUN_10c013a0(A...); int * __thiscall m_FUN_10c013d0(int *param_2); template<class... A> int m_FUN_10c013d0(A...); undefined4 * __thiscall m_FUN_10c01db0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c01db0(A...); undefined4 * __thiscall m_FUN_10c01dd0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c01dd0(A...); undefined4 * __thiscall m_FUN_10c01df0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c01df0(A...); SCStr * __thiscall m_FUN_10c01e70(SCStr *param_2); template<class... A> int m_FUN_10c01e70(A...); SCStr * __thiscall m_FUN_10c01ea0(SCStr *param_2); template<class... A> int m_FUN_10c01ea0(A...); SCStr * __thiscall m_FUN_10c02510(SCStr *param_2); template<class... A> int m_FUN_10c02510(A...); bool __thiscall m_FUN_10c02550(int *param_2); template<class... A> int m_FUN_10c02550(A...); bool __thiscall m_FUN_10c02570(int *param_2); template<class... A> int m_FUN_10c02570(A...); uint __thiscall m_FUN_10c028d0(uint param_2); template<class... A> int m_FUN_10c028d0(A...); void __thiscall m_FUN_10c02de0(undefined4 *param_2); template<class... A> int m_FUN_10c02de0(A...); void __thiscall m_FUN_10c02e70(undefined4 *param_2); template<class... A> int m_FUN_10c02e70(A...); int * __thiscall m_FUN_10c04370(int *param_2); template<class... A> int m_FUN_10c04370(A...); int * __thiscall m_FUN_10c043b0(int *param_2); template<class... A> int m_FUN_10c043b0(A...); undefined4 * __thiscall m_FUN_10c052a0(undefined4 param_2); template<class... A> int m_FUN_10c052a0(A...); undefined4 * __thiscall m_FUN_10c052e0(undefined4 param_2); template<class... A> int m_FUN_10c052e0(A...); undefined4 * __thiscall m_FUN_10c05400(undefined1 param_2); template<class... A> int m_FUN_10c05400(A...); void __thiscall m_FUN_10c06250(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c06250(A...); undefined4 __thiscall m_FUN_10c06270(int param_2); template<class... A> int m_FUN_10c06270(A...); void __thiscall m_FUN_10c071e0(undefined4 *param_2); template<class... A> int m_FUN_10c071e0(A...); undefined4 __thiscall m_FUN_10c07600(int param_2); template<class... A> int m_FUN_10c07600(A...); int * __thiscall m_FUN_10c16ee0(int *param_2); template<class... A> int m_FUN_10c16ee0(A...); int * __thiscall m_FUN_10c16f60(int *param_2); template<class... A> int m_FUN_10c16f60(A...); undefined4 * __thiscall m_FUN_10c17860(undefined4 param_2); template<class... A> int m_FUN_10c17860(A...); SCStr * __thiscall m_FUN_10c19520(SCStr *param_2); template<class... A> int m_FUN_10c19520(A...); int * __thiscall m_FUN_10c21120(int *param_2); template<class... A> int m_FUN_10c21120(A...); int * __thiscall m_FUN_10c211a0(int *param_2); template<class... A> int m_FUN_10c211a0(A...); SCStr * __thiscall m_FUN_10c21bb0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c21bb0(A...); undefined4 * __thiscall m_FUN_10c21c00(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10c21c00(A...); SCStr * __thiscall m_FUN_10c21dc0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c21dc0(A...); undefined4 * __thiscall m_FUN_10c21df0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10c21df0(A...); SCStr * __thiscall m_FUN_10c21e30(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10c21e30(A...); SCStr * __thiscall m_FUN_10c21e70(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10c21e70(A...); int * __thiscall m_FUN_10c21ef0(int *param_2); template<class... A> int m_FUN_10c21ef0(A...); void __thiscall m_FUN_10c22010(undefined4 *param_2); template<class... A> int m_FUN_10c22010(A...); void __thiscall m_FUN_10c22040(undefined4 *param_2); template<class... A> int m_FUN_10c22040(A...); void __thiscall m_FUN_10c22060(undefined4 *param_2); template<class... A> int m_FUN_10c22060(A...); void __thiscall m_FUN_10c22090(undefined4 *param_2); template<class... A> int m_FUN_10c22090(A...); void __thiscall m_FUN_10c220c0(undefined4 *param_2); template<class... A> int m_FUN_10c220c0(A...); undefined4 * __thiscall m_FUN_10c238c0(undefined4 param_2); template<class... A> int m_FUN_10c238c0(A...); undefined4 * __thiscall m_FUN_10c239c0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c239c0(A...); undefined4 * __thiscall m_FUN_10c239d0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c239d0(A...); undefined8 * __thiscall m_FUN_10c23a00(undefined8 *param_2); template<class... A> int m_FUN_10c23a00(A...); undefined4 * __thiscall m_FUN_10c23a20(undefined4 param_2); template<class... A> int m_FUN_10c23a20(A...); undefined4 * __thiscall m_FUN_10c23a40(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c23a40(A...); undefined4 * __thiscall m_FUN_10c23a60(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c23a60(A...); undefined4 * __thiscall m_FUN_10c23a70(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c23a70(A...); undefined4 * __thiscall m_FUN_10c23e10(undefined4 param_2); template<class... A> int m_FUN_10c23e10(A...); bool __thiscall m_FUN_10c24320(int *param_2); template<class... A> int m_FUN_10c24320(A...); bool __thiscall m_FUN_10c24340(int *param_2); template<class... A> int m_FUN_10c24340(A...); bool __thiscall m_FUN_10c24360(int *param_2); template<class... A> int m_FUN_10c24360(A...); bool __thiscall m_FUN_10c24380(int *param_2); template<class... A> int m_FUN_10c24380(A...); int __thiscall m_FUN_10c246a0(int param_2); template<class... A> int m_FUN_10c246a0(A...); uint __thiscall m_FUN_10c24b50(uint param_2); template<class... A> int m_FUN_10c24b50(A...); void __thiscall m_FUN_10c25620(undefined4 *param_2); template<class... A> int m_FUN_10c25620(A...); void __thiscall m_FUN_10c25640(undefined4 *param_2); template<class... A> int m_FUN_10c25640(A...); void __thiscall m_FUN_10c25650(undefined4 *param_2); template<class... A> int m_FUN_10c25650(A...); void __thiscall m_FUN_10c25660(undefined4 *param_2); template<class... A> int m_FUN_10c25660(A...); void __thiscall m_FUN_10c25830(undefined4 *param_2); template<class... A> int m_FUN_10c25830(A...); uint __thiscall m_FUN_10c25840(undefined4 param_2); template<class... A> int m_FUN_10c25840(A...); undefined4 __thiscall m_FUN_10c26050(undefined4 param_2); template<class... A> int m_FUN_10c26050(A...); void __thiscall m_FUN_10c265d0(undefined4 *param_2); template<class... A> int m_FUN_10c265d0(A...); void __thiscall m_FUN_10c273c0(uint param_2); template<class... A> int m_FUN_10c273c0(A...); int * __thiscall m_FUN_10c28ec0(int *param_2); template<class... A> int m_FUN_10c28ec0(A...); int * __thiscall m_FUN_10c293c0(int *param_2); template<class... A> int m_FUN_10c293c0(A...); void __thiscall m_FUN_10c2abe0(undefined4 *param_2); template<class... A> int m_FUN_10c2abe0(A...); void __thiscall m_FUN_10c2b630(undefined4 *param_2); template<class... A> int m_FUN_10c2b630(A...); undefined4 * __thiscall m_FUN_10c2b870(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c2b870(A...); int __thiscall m_FUN_10c2c090(int param_2); template<class... A> int m_FUN_10c2c090(A...); uint __thiscall m_FUN_10c2c220(uint param_2); template<class... A> int m_FUN_10c2c220(A...); uint __thiscall m_FUN_10c2c260(uint param_2); template<class... A> int m_FUN_10c2c260(A...); SCStr * __thiscall m_FUN_10c2e0d0(SCStr *param_2); template<class... A> int m_FUN_10c2e0d0(A...); SCStr * __thiscall m_FUN_10c2e0f0(SCStr *param_2); template<class... A> int m_FUN_10c2e0f0(A...); SCStr * __thiscall m_FUN_10c2eba0(SCStr *param_2); template<class... A> int m_FUN_10c2eba0(A...); SCStr * __thiscall m_FUN_10c2ebc0(SCStr *param_2); template<class... A> int m_FUN_10c2ebc0(A...); void __thiscall m_FUN_10c311b0(int *param_2); template<class... A> int m_FUN_10c311b0(A...); void __thiscall m_FUN_10c32680(undefined4 *param_2); template<class... A> int m_FUN_10c32680(A...); undefined4 * __thiscall m_FUN_10c34710(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10c34710(A...); undefined4 * __thiscall m_FUN_10c34730(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c34730(A...); undefined1 * __thiscall m_FUN_10c34860(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_10c34860(A...); undefined4 * __thiscall m_FUN_10c34880(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10c34880(A...); undefined1 * __thiscall m_FUN_10c348c0(undefined4 param_2,undefined4 param_3,undefined4 *param_4); template<class... A> int m_FUN_10c348c0(A...); undefined4 * __thiscall m_FUN_10c348e0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10c348e0(A...); int * __thiscall m_FUN_10c34910(int *param_2); template<class... A> int m_FUN_10c34910(A...); int * __thiscall m_FUN_10c34990(int *param_2); template<class... A> int m_FUN_10c34990(A...); int * __thiscall m_FUN_10c34a10(int *param_2); template<class... A> int m_FUN_10c34a10(A...); void __thiscall m_FUN_10c34b50(undefined4 *param_2); template<class... A> int m_FUN_10c34b50(A...); int __thiscall m_FUN_10c35050(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10c35050(A...); undefined4 * __thiscall m_FUN_10c35460(undefined4 *param_2); template<class... A> int m_FUN_10c35460(A...); undefined4 * __thiscall m_FUN_10c354b0(undefined4 param_2); template<class... A> int m_FUN_10c354b0(A...); undefined4 * __thiscall m_FUN_10c355c0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c355c0(A...); undefined4 * __thiscall m_FUN_10c355d0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c355d0(A...); undefined8 * __thiscall m_FUN_10c35620(undefined8 *param_2); template<class... A> int m_FUN_10c35620(A...); undefined4 * __thiscall m_FUN_10c35640(undefined4 param_2); template<class... A> int m_FUN_10c35640(A...); undefined4 * __thiscall m_FUN_10c35bd0(undefined4 param_2); template<class... A> int m_FUN_10c35bd0(A...); undefined4 * __thiscall m_FUN_10c35c10(undefined4 param_2); template<class... A> int m_FUN_10c35c10(A...); };

extern int FUN_10becdc0(...);
extern int FUN_10c35e50(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int fclose(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
template<class... A> int __stdcall thunk_FUN_10118c40(A...);
extern int thunk_FUN_10120220(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101a2e90(...);
extern int thunk_FUN_101a3180(...);
extern int thunk_FUN_101a9bd0(...);
extern int thunk_FUN_101a9c10(...);
extern int thunk_FUN_101c3fc0(...);
extern int thunk_FUN_101c82e0(...);
extern int thunk_FUN_10202e00(...);
extern int thunk_FUN_102ac6a0(...);
extern int thunk_FUN_102adbf0(...);
extern int thunk_FUN_102adcc0(...);
extern int thunk_FUN_102ae200(...);
extern int thunk_FUN_1031f5f0(...);
extern int thunk_FUN_10320510(...);
extern int thunk_FUN_10320a30(...);
template<class... A> int __stdcall thunk_FUN_10320fd0(A...);
template<class... A> int __stdcall thunk_FUN_10324520(A...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_10405e20(...);
extern int thunk_FUN_10475400(...);
extern int thunk_FUN_104da760(...);
extern int thunk_FUN_106845c0(...);
template<class... A> int __stdcall thunk_FUN_10bccc10(A...);
template<class... A> int __stdcall thunk_FUN_10bcd530(A...);
template<class... A> int __stdcall thunk_FUN_10bcd670(A...);
template<class... A> int __stdcall thunk_FUN_10bcdfc0(A...);
template<class... A> int __stdcall thunk_FUN_10bce170(A...);
extern int thunk_FUN_10bce670(...);
template<class... A> int __stdcall thunk_FUN_10bceec0(A...);
template<class... A> int __stdcall thunk_FUN_10bcf040(A...);
template<class... A> int __stdcall thunk_FUN_10bd01a0(A...);
template<class... A> int __stdcall thunk_FUN_10bd5dc0(A...);
extern int thunk_FUN_10bd9ba0(...);
extern int thunk_FUN_10bf3bc0(...);
extern int thunk_FUN_10bf3d70(...);
extern int thunk_FUN_10bf4690(...);
extern int thunk_FUN_10bf4900(...);
extern int thunk_FUN_10bf56b0(...);
extern int thunk_FUN_10bf5720(...);
extern int thunk_FUN_10bf5910(...);
extern int thunk_FUN_10bf5990(...);
extern int thunk_FUN_10bfb3d0(...);
extern int thunk_FUN_10bfb4f0(...);
extern int thunk_FUN_10bfb550(...);
template<class... A> int __stdcall thunk_FUN_10c17080(A...);
extern int thunk_FUN_10c17bb0(...);
extern int thunk_FUN_10c22600(...);
extern int thunk_FUN_10c234e0(...);
extern int thunk_FUN_10c23ed0(...);
template<class... A> int __stdcall thunk_FUN_10c2aca0(A...);
extern int thunk_FUN_10c31e60(...);
extern int thunk_FUN_10c35e50(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_111382a0(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_12126b84;
extern int DAT_121a524c;
extern int DAT_121a5254;
extern int DAT_121a5338;
extern int DAT_121a533c;
extern int DAT_121a5348;
extern int DAT_121a534c;
extern int DAT_121a5368;
extern int DAT_121a536c;
extern int DAT_121a5378;
extern int g_lSCObjCount;
extern int ghidra_vftable_SCAudioData;
extern int ghidra_vftable_SCChickenExitActionDescriptor;
extern int ghidra_vftable_SCIAppRatingManager;
extern int ghidra_vftable_SCIAudioData;
extern int ghidra_vftable_SCIAudioInputResource;
extern int ghidra_vftable_SCICachedHousehold;
extern int ghidra_vftable_SCICancellable;
extern int ghidra_vftable_SCIConnectedPartnersManager;
extern int ghidra_vftable_SCILocalMediaCollectionListener;
extern int ghidra_vftable_SCIMusicServer;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIOpFactory;
extern int ghidra_vftable_SCIOwnedObjImpl;
extern int ghidra_vftable_SCIRoomResource;
extern int ghidra_vftable_SCIServiceAppInteropManager;
extern int ghidra_vftable_SCITearOffObjImpl;
extern int ghidra_vftable_SCIUrlRequest;
extern int ghidra_vftable_SCIZoneGroupMgr;
extern int ghidra_vftable_SCLocalMusicBrowseItem;
extern int ghidra_vftable_SCLocalMusicShuffleAllNodeBrowseItem;
extern int ghidra_vftable_SCMediaItemCollectionEnumerator;
extern int ghidra_vftable_SCMusicServer;
extern int ghidra_vftable_SCMusicServerData;
extern int ghidra_vftable_SCOpFactory;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCSettingsReplicatorAlarmSink;
extern int ghidra_vftable_SCUrlDeleteRequest;
extern int ghidra_vftable_SCUrlPostRequest;
extern int ghidra_vftable_SCUrlPutRequest;
extern int ghidra_vftable_SCUrlRequest;
extern int uStack_8;
extern undefined1 LAB_10bd1c4b[];
extern undefined1 LAB_10bd30db[];
extern undefined1 LAB_10c04499[];
extern undefined1 LAB_10c04bce[];
extern undefined1 LAB_115d2530[];
extern undefined1 LAB_116ca208[];
extern undefined1 LAB_116ca8b0[];
extern undefined1 LAB_116ceb70[];
extern undefined1 LAB_116cf720[];
extern undefined1 LAB_116cfec0[];
extern undefined1 LAB_116d4e00[];
extern undefined1 LAB_116d7be0[];
extern void *ExceptionList;
extern int FUN_112a9d50(...);
extern int FUN_112a9d70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1ae0(undefined4 param_1);
template<class... A> int FUN_10bd1ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1af0(undefined4 param_1);
template<class... A> int FUN_10bd1af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1b00(undefined4 param_1);
template<class... A> int FUN_10bd1b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1b10(undefined4 param_1);
template<class... A> int FUN_10bd1b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1b20(undefined4 param_1);
template<class... A> int FUN_10bd1b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1b30(undefined4 param_1);
template<class... A> int FUN_10bd1b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1b40(undefined4 param_1);
template<class... A> int FUN_10bd1b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1b50(undefined4 param_1);
template<class... A> int FUN_10bd1b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1b60(undefined4 param_1);
template<class... A> int FUN_10bd1b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1b70(undefined4 param_1);
template<class... A> int FUN_10bd1b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1b80(undefined4 param_1);
template<class... A> int FUN_10bd1b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1b90(undefined4 param_1);
template<class... A> int FUN_10bd1b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1ba0(undefined4 param_1);
template<class... A> int FUN_10bd1ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd1be0(int *param_1,int param_2);
template<class... A> int FUN_10bd1be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bd1ce0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10bd1ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd1d60(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10bd1d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd1d70(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10bd1d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd1d80(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10bd1d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd1db0(undefined4 param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_10bd1db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd1de0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10bd1de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd1e10(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10bd1e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd1e30(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10bd1e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd1e50(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10bd1e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *
FUN_10bd1e70(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10bd1e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *
FUN_10bd1eb0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10bd1eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd1ef0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10bd1ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd1f20(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10bd1f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd1f50(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10bd1f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd2100(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10bd2100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd2120(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10bd2120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd2140(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10bd2140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd2170(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10bd2170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd21a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10bd21a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd21d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10bd21d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd21e0(void);
template<class... A> int FUN_10bd21e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd2340(undefined4 param_1,int param_2);
template<class... A> int FUN_10bd2340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd25a0(void);
template<class... A> int FUN_10bd25a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bd25b0(int param_1,int param_2);
template<class... A> int FUN_10bd25b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bd25c0(int param_1,int param_2);
template<class... A> int FUN_10bd25c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bd25d0(int *param_1,int *param_2);
template<class... A> int FUN_10bd25d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd27f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd27f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2810(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd2810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2830(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd2830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2850(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd2850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2870(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd2870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2890(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd2890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd28b0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd28b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd28d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd28d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd28f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd28f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2910(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd2910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2930(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd2930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2950(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd2950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2970(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd2970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2990(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd2990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd29b0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd29b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd29d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd29d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd29f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd29f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2a10(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd2a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2a30(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd2a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2a50(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd2a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2a70(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd2a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_10bd2a90(undefined4 *param_1,int *param_2,int *param_3,int *param_4);
template<class... A> int FUN_10bd2a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_10bd2ac0(undefined4 *param_1,int *param_2,int *param_3,int *param_4);
template<class... A> int FUN_10bd2ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2af0(undefined4 param_1);
template<class... A> int FUN_10bd2af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2b00(undefined4 param_1);
template<class... A> int FUN_10bd2b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2b10(undefined4 param_1);
template<class... A> int FUN_10bd2b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2b20(undefined4 param_1);
template<class... A> int FUN_10bd2b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2b30(undefined4 param_1);
template<class... A> int FUN_10bd2b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2b40(undefined4 param_1);
template<class... A> int FUN_10bd2b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2b50(undefined4 param_1);
template<class... A> int FUN_10bd2b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2b60(undefined4 param_1);
template<class... A> int FUN_10bd2b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2b70(undefined4 param_1);
template<class... A> int FUN_10bd2b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2b80(undefined4 param_1);
template<class... A> int FUN_10bd2b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2b90(undefined4 param_1);
template<class... A> int FUN_10bd2b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2ba0(undefined4 param_1);
template<class... A> int FUN_10bd2ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2bb0(undefined4 param_1);
template<class... A> int FUN_10bd2bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2bc0(undefined4 param_1);
template<class... A> int FUN_10bd2bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2bd0(undefined4 param_1);
template<class... A> int FUN_10bd2bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2be0(undefined4 param_1);
template<class... A> int FUN_10bd2be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2bf0(undefined4 param_1);
template<class... A> int FUN_10bd2bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2c00(undefined4 param_1);
template<class... A> int FUN_10bd2c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2c10(undefined4 param_1);
template<class... A> int FUN_10bd2c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2c20(undefined4 param_1);
template<class... A> int FUN_10bd2c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2c30(undefined4 param_1);
template<class... A> int FUN_10bd2c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2c40(undefined4 param_1);
template<class... A> int FUN_10bd2c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2c50(undefined4 param_1);
template<class... A> int FUN_10bd2c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2c60(undefined4 param_1);
template<class... A> int FUN_10bd2c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2c70(undefined4 param_1);
template<class... A> int FUN_10bd2c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2c80(undefined4 param_1);
template<class... A> int FUN_10bd2c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2c90(undefined4 param_1);
template<class... A> int FUN_10bd2c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2ca0(undefined4 param_1);
template<class... A> int FUN_10bd2ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2cb0(undefined4 param_1);
template<class... A> int FUN_10bd2cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2cc0(undefined4 param_1);
template<class... A> int FUN_10bd2cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2cd0(undefined4 param_1);
template<class... A> int FUN_10bd2cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2ce0(undefined4 param_1);
template<class... A> int FUN_10bd2ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2cf0(undefined4 param_1);
template<class... A> int FUN_10bd2cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2d00(undefined4 param_1);
template<class... A> int FUN_10bd2d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2d10(undefined4 param_1);
template<class... A> int FUN_10bd2d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2d20(undefined4 param_1);
template<class... A> int FUN_10bd2d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2d30(undefined4 param_1);
template<class... A> int FUN_10bd2d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2d40(undefined4 param_1);
template<class... A> int FUN_10bd2d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2d50(undefined4 param_1);
template<class... A> int FUN_10bd2d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2d60(undefined4 param_1);
template<class... A> int FUN_10bd2d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2d70(undefined4 param_1);
template<class... A> int FUN_10bd2d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2d80(undefined4 param_1);
template<class... A> int FUN_10bd2d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2d90(undefined4 param_1);
template<class... A> int FUN_10bd2d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2da0(undefined4 param_1);
template<class... A> int FUN_10bd2da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2db0(undefined4 param_1);
template<class... A> int FUN_10bd2db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2dc0(undefined4 param_1);
template<class... A> int FUN_10bd2dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2dd0(undefined4 param_1);
template<class... A> int FUN_10bd2dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2de0(undefined4 param_1);
template<class... A> int FUN_10bd2de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2df0(undefined4 param_1);
template<class... A> int FUN_10bd2df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2e00(undefined4 param_1);
template<class... A> int FUN_10bd2e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2e10(undefined4 param_1);
template<class... A> int FUN_10bd2e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd2e20(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10bd2e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd2e30(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10bd2e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bd2e40(void);
template<class... A> int FUN_10bd2e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2fc0(undefined4 param_1);
template<class... A> int FUN_10bd2fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2fd0(undefined4 param_1);
template<class... A> int FUN_10bd2fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2fe0(undefined4 param_1);
template<class... A> int FUN_10bd2fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd2ff0(undefined4 param_1);
template<class... A> int FUN_10bd2ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd3000(undefined4 param_1);
template<class... A> int FUN_10bd3000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd3010(undefined4 param_1);
template<class... A> int FUN_10bd3010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd3020(undefined4 param_1);
template<class... A> int FUN_10bd3020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd3030(undefined4 param_1);
template<class... A> int FUN_10bd3030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd3040(undefined4 param_1);
template<class... A> int FUN_10bd3040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd3050(undefined4 param_1);
template<class... A> int FUN_10bd3050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd3060(undefined4 param_1);
template<class... A> int FUN_10bd3060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_10bd3070(undefined4 *param_1,int *param_2,int param_3);
template<class... A> int FUN_10bd3070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd3190(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd3190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd3260(undefined4 *param_1);
template<class... A> int FUN_10bd3260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd3c60(undefined4 *param_1);
template<class... A> int FUN_10bd3c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd3c80(undefined4 *param_1);
template<class... A> int FUN_10bd3c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd3ca0(undefined4 *param_1);
template<class... A> int FUN_10bd3ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd3cc0(undefined4 *param_1);
template<class... A> int FUN_10bd3cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd3ce0(undefined4 *param_1);
template<class... A> int FUN_10bd3ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd3d00(undefined4 *param_1);
template<class... A> int FUN_10bd3d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd3d20(undefined4 *param_1);
template<class... A> int FUN_10bd3d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd3d40(undefined4 *param_1);
template<class... A> int FUN_10bd3d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd3d60(undefined4 *param_1);
template<class... A> int FUN_10bd3d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd3e00(undefined4 *param_1);
template<class... A> int FUN_10bd3e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd3e20(undefined4 *param_1);
template<class... A> int FUN_10bd3e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd3e80(undefined4 *param_1);
template<class... A> int FUN_10bd3e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd3ea0(undefined4 *param_1);
template<class... A> int FUN_10bd3ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd3f00(undefined4 *param_1);
template<class... A> int FUN_10bd3f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd3f20(undefined4 *param_1);
template<class... A> int FUN_10bd3f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd3f60(undefined4 *param_1);
template<class... A> int FUN_10bd3f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd3fa0(undefined4 param_1);
template<class... A> int FUN_10bd3fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd3fb0(undefined4 param_1);
template<class... A> int FUN_10bd3fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd3fc0(undefined4 param_1);
template<class... A> int FUN_10bd3fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd3fd0(undefined4 param_1);
template<class... A> int FUN_10bd3fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd3fe0(undefined4 param_1);
template<class... A> int FUN_10bd3fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd3ff0(undefined4 param_1);
template<class... A> int FUN_10bd3ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd4000(undefined4 param_1);
template<class... A> int FUN_10bd4000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd4010(undefined4 param_1);
template<class... A> int FUN_10bd4010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd4020(undefined4 param_1);
template<class... A> int FUN_10bd4020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd4030(undefined4 param_1);
template<class... A> int FUN_10bd4030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd4040(undefined4 param_1);
template<class... A> int FUN_10bd4040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd4050(undefined4 param_1);
template<class... A> int FUN_10bd4050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd4080(undefined4 *param_1);
template<class... A> int FUN_10bd4080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd40d0(undefined4 *param_1);
template<class... A> int FUN_10bd40d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd4120(undefined4 *param_1);
template<class... A> int FUN_10bd4120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd4170(undefined4 *param_1);
template<class... A> int FUN_10bd4170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd4220(undefined4 *param_1);
template<class... A> int FUN_10bd4220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd4270(undefined4 *param_1);
template<class... A> int FUN_10bd4270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd42c0(undefined4 *param_1);
template<class... A> int FUN_10bd42c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd4310(undefined4 *param_1);
template<class... A> int FUN_10bd4310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd43c0(undefined4 *param_1);
template<class... A> int FUN_10bd43c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd4510(undefined4 *param_1);
template<class... A> int FUN_10bd4510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd4530(undefined4 *param_1);
template<class... A> int FUN_10bd4530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd4590(undefined4 *param_1);
template<class... A> int FUN_10bd4590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd4670(undefined4 *param_1);
template<class... A> int FUN_10bd4670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bd4690(undefined4 *param_1);
template<class... A> int FUN_10bd4690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd6380(undefined4 *param_1);
template<class... A> int FUN_10bd6380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd6580(int param_1);
template<class... A> int FUN_10bd6580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd6960(int param_1);
template<class... A> int FUN_10bd6960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd6980(int param_1);
template<class... A> int FUN_10bd6980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd69e0(int param_1);
template<class... A> int FUN_10bd69e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd6a20(int param_1);
template<class... A> int FUN_10bd6a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd6a40(int param_1);
template<class... A> int FUN_10bd6a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd6a60(int param_1);
template<class... A> int FUN_10bd6a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd6a80(int param_1);
template<class... A> int FUN_10bd6a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd6ae0(void);
template<class... A> int FUN_10bd6ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd6d20(int param_1);
template<class... A> int FUN_10bd6d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd86e0(undefined4 *param_1);
template<class... A> int FUN_10bd86e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bd86f0(int *param_1);
template<class... A> int FUN_10bd86f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bd8700(int *param_1);
template<class... A> int FUN_10bd8700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd8710(undefined4 *param_1);
template<class... A> int FUN_10bd8710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd8720(undefined4 *param_1);
template<class... A> int FUN_10bd8720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd8730(undefined4 *param_1);
template<class... A> int FUN_10bd8730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd8740(int *param_1);
template<class... A> int FUN_10bd8740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd8750(int *param_1);
template<class... A> int FUN_10bd8750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd8760(int *param_1);
template<class... A> int FUN_10bd8760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd8770(int *param_1);
template<class... A> int FUN_10bd8770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd8780(int *param_1);
template<class... A> int FUN_10bd8780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd8790(int *param_1);
template<class... A> int FUN_10bd8790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd87a0(int *param_1);
template<class... A> int FUN_10bd87a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd87b0(int *param_1);
template<class... A> int FUN_10bd87b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd87c0(int *param_1);
template<class... A> int FUN_10bd87c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd87d0(int *param_1);
template<class... A> int FUN_10bd87d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd87e0(int *param_1);
template<class... A> int FUN_10bd87e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd87f0(int *param_1);
template<class... A> int FUN_10bd87f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd8800(int *param_1);
template<class... A> int FUN_10bd8800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd8810(undefined4 *param_1);
template<class... A> int FUN_10bd8810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd8820(undefined4 *param_1);
template<class... A> int FUN_10bd8820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd8830(int *param_1);
template<class... A> int FUN_10bd8830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd8840(int *param_1);
template<class... A> int FUN_10bd8840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd8850(int *param_1);
template<class... A> int FUN_10bd8850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd8860(int *param_1);
template<class... A> int FUN_10bd8860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd8870(int *param_1);
template<class... A> int FUN_10bd8870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd8880(int *param_1);
template<class... A> int FUN_10bd8880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd8890(int *param_1);
template<class... A> int FUN_10bd8890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd88a0(int *param_1);
template<class... A> int FUN_10bd88a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd88b0(int *param_1);
template<class... A> int FUN_10bd88b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd88c0(int *param_1);
template<class... A> int FUN_10bd88c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd88d0(int *param_1);
template<class... A> int FUN_10bd88d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd88e0(int *param_1);
template<class... A> int FUN_10bd88e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd88f0(int *param_1);
template<class... A> int FUN_10bd88f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bd8900(int *param_1);
template<class... A> int FUN_10bd8900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd8910(undefined4 *param_1);
template<class... A> int FUN_10bd8910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd8920(undefined4 *param_1);
template<class... A> int FUN_10bd8920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd8930(undefined4 *param_1);
template<class... A> int FUN_10bd8930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd8940(undefined4 *param_1);
template<class... A> int FUN_10bd8940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd8950(undefined4 *param_1);
template<class... A> int FUN_10bd8950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd8960(undefined4 *param_1);
template<class... A> int FUN_10bd8960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd8970(undefined4 *param_1);
template<class... A> int FUN_10bd8970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd8980(undefined4 *param_1);
template<class... A> int FUN_10bd8980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd8990(undefined4 *param_1);
template<class... A> int FUN_10bd8990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd89a0(undefined4 *param_1);
template<class... A> int FUN_10bd89a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10bd8cc0(int *param_1);
template<class... A> int FUN_10bd8cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10bd8cd0(int *param_1);
template<class... A> int FUN_10bd8cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10bd8ce0(int *param_1);
template<class... A> int FUN_10bd8ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10bd8cf0(int *param_1);
template<class... A> int FUN_10bd8cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10bd8d00(int *param_1);
template<class... A> int FUN_10bd8d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10bd8d10(int *param_1);
template<class... A> int FUN_10bd8d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10bd8d40(int *param_1);
template<class... A> int FUN_10bd8d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10bd8d70(int *param_1);
template<class... A> int FUN_10bd8d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10bd8e40(int *param_1,int *param_2);
template<class... A> int FUN_10bd8e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd92f0(undefined4 *param_1);
template<class... A> int FUN_10bd92f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd9320(undefined4 *param_1);
template<class... A> int FUN_10bd9320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd9350(undefined4 *param_1);
template<class... A> int FUN_10bd9350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd9380(undefined4 *param_1);
template<class... A> int FUN_10bd9380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd93b0(undefined4 *param_1);
template<class... A> int FUN_10bd93b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd93e0(undefined4 *param_1);
template<class... A> int FUN_10bd93e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd9410(undefined4 *param_1);
template<class... A> int FUN_10bd9410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd9440(undefined4 *param_1);
template<class... A> int FUN_10bd9440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd9470(undefined4 *param_1);
template<class... A> int FUN_10bd9470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd9a80(int param_1);
template<class... A> int FUN_10bd9a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd9aa0(int param_1);
template<class... A> int FUN_10bd9aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd9ac0(int param_1);
template<class... A> int FUN_10bd9ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd9ae0(int param_1);
template<class... A> int FUN_10bd9ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd9b00(int param_1);
template<class... A> int FUN_10bd9b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd9b20(int param_1);
template<class... A> int FUN_10bd9b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd9b40(int param_1);
template<class... A> int FUN_10bd9b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd9b60(int param_1);
template<class... A> int FUN_10bd9b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bd9b80(int param_1);
template<class... A> int FUN_10bd9b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bd9c60(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10bd9c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bd9c70(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10bd9c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bd9c80(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10bd9c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bd9c90(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10bd9c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bd9ca0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10bd9ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bd9cb0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10bd9cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bd9cc0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10bd9cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bd9e50(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bd9e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bd9e60(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bd9e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd9eb0(undefined4 param_1);
template<class... A> int FUN_10bd9eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd9ec0(undefined4 param_1);
template<class... A> int FUN_10bd9ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd9ed0(undefined4 param_1);
template<class... A> int FUN_10bd9ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd9ee0(undefined4 param_1);
template<class... A> int FUN_10bd9ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd9ef0(undefined4 param_1);
template<class... A> int FUN_10bd9ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd9f00(undefined4 param_1);
template<class... A> int FUN_10bd9f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd9f10(undefined4 param_1);
template<class... A> int FUN_10bd9f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd9f20(undefined4 param_1);
template<class... A> int FUN_10bd9f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd9f30(undefined4 param_1);
template<class... A> int FUN_10bd9f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd9f40(undefined4 param_1);
template<class... A> int FUN_10bd9f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd9f50(undefined4 param_1);
template<class... A> int FUN_10bd9f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd9f60(undefined4 param_1);
template<class... A> int FUN_10bd9f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd9f70(undefined4 param_1);
template<class... A> int FUN_10bd9f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd9f80(undefined4 param_1);
template<class... A> int FUN_10bd9f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd9f90(undefined4 param_1);
template<class... A> int FUN_10bd9f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd9fa0(undefined4 param_1);
template<class... A> int FUN_10bd9fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd9fb0(undefined4 param_1);
template<class... A> int FUN_10bd9fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd9fc0(undefined4 param_1);
template<class... A> int FUN_10bd9fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd9fd0(undefined4 param_1);
template<class... A> int FUN_10bd9fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd9fe0(undefined4 param_1);
template<class... A> int FUN_10bd9fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bd9ff0(undefined4 param_1);
template<class... A> int FUN_10bd9ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda000(undefined4 param_1);
template<class... A> int FUN_10bda000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda010(undefined4 param_1);
template<class... A> int FUN_10bda010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda020(undefined4 param_1);
template<class... A> int FUN_10bda020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda030(undefined4 param_1);
template<class... A> int FUN_10bda030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda040(undefined4 param_1);
template<class... A> int FUN_10bda040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda050(undefined4 param_1);
template<class... A> int FUN_10bda050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda060(undefined4 param_1);
template<class... A> int FUN_10bda060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda070(undefined4 param_1);
template<class... A> int FUN_10bda070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda080(undefined4 param_1);
template<class... A> int FUN_10bda080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda090(undefined4 param_1);
template<class... A> int FUN_10bda090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda0a0(undefined4 param_1);
template<class... A> int FUN_10bda0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda0b0(undefined4 param_1);
template<class... A> int FUN_10bda0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda0c0(undefined4 param_1);
template<class... A> int FUN_10bda0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda0d0(undefined4 param_1);
template<class... A> int FUN_10bda0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda0e0(undefined4 param_1);
template<class... A> int FUN_10bda0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda0f0(undefined4 param_1);
template<class... A> int FUN_10bda0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda100(undefined4 param_1);
template<class... A> int FUN_10bda100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda110(undefined4 param_1);
template<class... A> int FUN_10bda110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda120(undefined4 param_1);
template<class... A> int FUN_10bda120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda130(undefined4 param_1);
template<class... A> int FUN_10bda130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda140(undefined4 param_1);
template<class... A> int FUN_10bda140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda150(undefined4 param_1);
template<class... A> int FUN_10bda150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda160(undefined4 param_1);
template<class... A> int FUN_10bda160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda170(undefined4 param_1);
template<class... A> int FUN_10bda170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda180(undefined4 param_1);
template<class... A> int FUN_10bda180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda190(undefined4 param_1);
template<class... A> int FUN_10bda190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda1a0(undefined4 param_1);
template<class... A> int FUN_10bda1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda1b0(undefined4 param_1);
template<class... A> int FUN_10bda1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda1c0(undefined4 param_1);
template<class... A> int FUN_10bda1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda1d0(undefined4 param_1);
template<class... A> int FUN_10bda1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda1e0(undefined4 param_1);
template<class... A> int FUN_10bda1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda1f0(undefined4 param_1);
template<class... A> int FUN_10bda1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda200(undefined4 param_1);
template<class... A> int FUN_10bda200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda210(undefined4 param_1);
template<class... A> int FUN_10bda210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda220(undefined4 param_1);
template<class... A> int FUN_10bda220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda230(undefined4 param_1);
template<class... A> int FUN_10bda230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda240(undefined4 param_1);
template<class... A> int FUN_10bda240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda260(undefined4 param_1);
template<class... A> int FUN_10bda260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda270(undefined4 param_1);
template<class... A> int FUN_10bda270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda280(undefined4 param_1);
template<class... A> int FUN_10bda280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda2a0(undefined4 param_1);
template<class... A> int FUN_10bda2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda2b0(undefined4 param_1);
template<class... A> int FUN_10bda2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda2c0(undefined4 param_1);
template<class... A> int FUN_10bda2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda2d0(undefined4 param_1);
template<class... A> int FUN_10bda2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda2e0(undefined4 param_1);
template<class... A> int FUN_10bda2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda2f0(undefined4 param_1);
template<class... A> int FUN_10bda2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda300(undefined4 param_1);
template<class... A> int FUN_10bda300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda310(undefined4 param_1);
template<class... A> int FUN_10bda310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda320(undefined4 param_1);
template<class... A> int FUN_10bda320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda330(undefined4 param_1);
template<class... A> int FUN_10bda330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda340(undefined4 param_1);
template<class... A> int FUN_10bda340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda350(undefined4 param_1);
template<class... A> int FUN_10bda350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda360(undefined4 param_1);
template<class... A> int FUN_10bda360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda370(undefined4 param_1);
template<class... A> int FUN_10bda370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda380(undefined4 param_1);
template<class... A> int FUN_10bda380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda390(undefined4 param_1);
template<class... A> int FUN_10bda390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda3a0(undefined4 param_1);
template<class... A> int FUN_10bda3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda3b0(undefined4 param_1);
template<class... A> int FUN_10bda3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda3c0(undefined4 param_1);
template<class... A> int FUN_10bda3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda3d0(undefined4 param_1);
template<class... A> int FUN_10bda3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda3e0(undefined4 param_1);
template<class... A> int FUN_10bda3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda3f0(undefined4 param_1);
template<class... A> int FUN_10bda3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda400(undefined4 param_1);
template<class... A> int FUN_10bda400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda410(undefined4 param_1);
template<class... A> int FUN_10bda410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda420(undefined4 param_1);
template<class... A> int FUN_10bda420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda430(undefined4 param_1);
template<class... A> int FUN_10bda430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda440(undefined4 param_1);
template<class... A> int FUN_10bda440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda450(undefined4 param_1);
template<class... A> int FUN_10bda450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda460(undefined4 param_1);
template<class... A> int FUN_10bda460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bda470(undefined4 param_1);
template<class... A> int FUN_10bda470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bdbb90(undefined4 param_1);
template<class... A> int FUN_10bdbb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bdbfb0(int param_1);
template<class... A> int FUN_10bdbfb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bdbfe0(int param_1);
template<class... A> int FUN_10bdbfe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bdc010(int param_1);
template<class... A> int FUN_10bdc010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10bdc040(int *param_1);
template<class... A> int FUN_10bdc040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10bdc070(int *param_1);
template<class... A> int FUN_10bdc070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10bdc0a0(int *param_1);
template<class... A> int FUN_10bdc0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10bdc0d0(int *param_1);
template<class... A> int FUN_10bdc0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bdc100(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10bdc100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bdc110(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10bdc110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bdc120(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bdc120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bdc130(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bdc130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bdc140(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bdc140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bdc150(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bdc150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bdc160(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bdc160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bdc170(int param_1);
template<class... A> int FUN_10bdc170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bdc180(int param_1);
template<class... A> int FUN_10bdc180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bdc190(int param_1);
template<class... A> int FUN_10bdc190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bdc1a0(int param_1);
template<class... A> int FUN_10bdc1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bdc1b0(int param_1);
template<class... A> int FUN_10bdc1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bdc1c0(int param_1);
template<class... A> int FUN_10bdc1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bdc1d0(int param_1);
template<class... A> int FUN_10bdc1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bdc1e0(int param_1);
template<class... A> int FUN_10bdc1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bdc1f0(int param_1);
template<class... A> int FUN_10bdc1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bdc200(undefined4 *param_1);
template<class... A> int FUN_10bdc200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bdc210(undefined4 *param_1);
template<class... A> int FUN_10bdc210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bdc220(undefined4 *param_1);
template<class... A> int FUN_10bdc220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10bdc7f0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10bdc7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10bdc820(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10bdc820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bdca70(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10bdca70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bdcaa0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10bdcaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bdccf0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10bdccf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bdcd20(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10bdcd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bdcf80(undefined4 *param_1);
template<class... A> int FUN_10bdcf80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bdcf90(undefined4 *param_1);
template<class... A> int FUN_10bdcf90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bddef0(uint param_1);
template<class... A> int FUN_10bddef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bddfd0(uint param_1);
template<class... A> int FUN_10bddfd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bde050(uint param_1);
template<class... A> int FUN_10bde050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bde0d0(uint param_1);
template<class... A> int FUN_10bde0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bde150(uint param_1);
template<class... A> int FUN_10bde150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bde1d0(uint param_1);
template<class... A> int FUN_10bde1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bde250(uint param_1);
template<class... A> int FUN_10bde250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bde2d0(uint param_1);
template<class... A> int FUN_10bde2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bde350(uint param_1);
template<class... A> int FUN_10bde350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bde3d0(uint param_1);
template<class... A> int FUN_10bde3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bde450(uint param_1);
template<class... A> int FUN_10bde450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bde4d0(uint param_1);
template<class... A> int FUN_10bde4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bde580(undefined4 *param_1);
template<class... A> int FUN_10bde580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10be04a0(int *param_1);
template<class... A> int FUN_10be04a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10be04b0(int *param_1);
template<class... A> int FUN_10be04b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10be04c0(int *param_1);
template<class... A> int FUN_10be04c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10be04e0(int *param_1);
template<class... A> int FUN_10be04e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10be0510(int *param_1);
template<class... A> int FUN_10be0510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10be11b0(undefined4 *param_1);
template<class... A> int FUN_10be11b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10be11c0(undefined4 *param_1);
template<class... A> int FUN_10be11c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10be1250(undefined4 *param_1);
template<class... A> int FUN_10be1250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10be1640(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10be1640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10be1690(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10be1690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10be16e0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10be16e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10be1730(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10be1730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10be1780(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10be1780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10be17d0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10be17d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10be1820(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10be1820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10be1870(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10be1870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10be18c0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10be18c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10be1910(int param_1,int param_2);
template<class... A> int FUN_10be1910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10be1960(int param_1,int param_2);
template<class... A> int FUN_10be1960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10be19b0(int param_1,int param_2);
template<class... A> int FUN_10be19b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10be1a10(int param_1,int param_2);
template<class... A> int FUN_10be1a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10be1a60(int param_1,int param_2);
template<class... A> int FUN_10be1a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10be1ab0(int param_1,int param_2);
template<class... A> int FUN_10be1ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10be1b00(int param_1,int param_2);
template<class... A> int FUN_10be1b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10be1b50(int param_1,int param_2);
template<class... A> int FUN_10be1b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10be1bb0(int param_1,int param_2);
template<class... A> int FUN_10be1bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10be1c10(int param_1,int param_2);
template<class... A> int FUN_10be1c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10be1c70(int param_1,int param_2);
template<class... A> int FUN_10be1c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10be2070(int *param_1);
template<class... A> int FUN_10be2070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10be2080(int *param_1);
template<class... A> int FUN_10be2080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10be2150(int param_1);
template<class... A> int FUN_10be2150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10be8340(void);
template<class... A> int FUN_10be8340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10be9330(undefined4 param_1);
template<class... A> int FUN_10be9330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9a80(void);
template<class... A> int FUN_10be9a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9a90(void);
template<class... A> int FUN_10be9a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9aa0(void);
template<class... A> int FUN_10be9aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9ab0(void);
template<class... A> int FUN_10be9ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9ac0(void);
template<class... A> int FUN_10be9ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9ad0(void);
template<class... A> int FUN_10be9ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9ae0(void);
template<class... A> int FUN_10be9ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9af0(void);
template<class... A> int FUN_10be9af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9b00(void);
template<class... A> int FUN_10be9b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9b10(void);
template<class... A> int FUN_10be9b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9b20(void);
template<class... A> int FUN_10be9b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9b30(void);
template<class... A> int FUN_10be9b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9b40(void);
template<class... A> int FUN_10be9b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9b50(void);
template<class... A> int FUN_10be9b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9b60(void);
template<class... A> int FUN_10be9b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9b70(void);
template<class... A> int FUN_10be9b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9b80(void);
template<class... A> int FUN_10be9b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9b90(void);
template<class... A> int FUN_10be9b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9ba0(void);
template<class... A> int FUN_10be9ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9bb0(void);
template<class... A> int FUN_10be9bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9bc0(void);
template<class... A> int FUN_10be9bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9bd0(void);
template<class... A> int FUN_10be9bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9be0(void);
template<class... A> int FUN_10be9be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9bf0(void);
template<class... A> int FUN_10be9bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9c00(void);
template<class... A> int FUN_10be9c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9c10(void);
template<class... A> int FUN_10be9c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9c20(void);
template<class... A> int FUN_10be9c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9c30(void);
template<class... A> int FUN_10be9c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9c40(undefined4 param_1);
template<class... A> int FUN_10be9c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9c50(undefined4 param_1);
template<class... A> int FUN_10be9c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9c60(undefined4 param_1);
template<class... A> int FUN_10be9c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9c70(undefined4 param_1);
template<class... A> int FUN_10be9c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9c80(undefined4 param_1);
template<class... A> int FUN_10be9c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9c90(undefined4 param_1);
template<class... A> int FUN_10be9c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9ca0(undefined4 param_1);
template<class... A> int FUN_10be9ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9cb0(undefined4 param_1);
template<class... A> int FUN_10be9cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9cc0(undefined4 param_1);
template<class... A> int FUN_10be9cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9cd0(undefined4 param_1);
template<class... A> int FUN_10be9cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9ce0(undefined4 param_1);
template<class... A> int FUN_10be9ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9cf0(undefined4 param_1);
template<class... A> int FUN_10be9cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10be9d00(undefined4 param_1);
template<class... A> int FUN_10be9d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10be9d10(undefined4 *param_1);
template<class... A> int FUN_10be9d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bea0f0(undefined4 *param_1);
template<class... A> int FUN_10bea0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bea120(undefined4 *param_1);
template<class... A> int FUN_10bea120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bea150(int *param_1);
template<class... A> int FUN_10bea150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10bec770(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10bec770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bec7c0(int param_1);
template<class... A> int FUN_10bec7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bedb40(void);
template<class... A> int FUN_10bedb40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bedb50(void);
template<class... A> int FUN_10bedb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bedcf0(undefined4 *param_1);
template<class... A> int FUN_10bedcf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bee080(undefined4 *param_1);
template<class... A> int FUN_10bee080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bee230(void);
template<class... A> int FUN_10bee230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10beea60(int param_1);
template<class... A> int FUN_10beea60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10beea70(void);
template<class... A> int FUN_10beea70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10beea80(void);
template<class... A> int FUN_10beea80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10beea90(undefined4 *param_1);
template<class... A> int FUN_10beea90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10beeac0(undefined4 *param_1);
template<class... A> int FUN_10beeac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10beeba0(undefined4 *param_1);
template<class... A> int FUN_10beeba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10beed30(undefined4 *param_1);
template<class... A> int FUN_10beed30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10beed40(undefined4 *param_1);
template<class... A> int FUN_10beed40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf0150(undefined4 *param_1);
template<class... A> int FUN_10bf0150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf0280(undefined4 *param_1);
template<class... A> int FUN_10bf0280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf02a0(undefined4 *param_1);
template<class... A> int FUN_10bf02a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf02b0(undefined4 *param_1);
template<class... A> int FUN_10bf02b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf0580(undefined4 *param_1);
template<class... A> int FUN_10bf0580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bf0590(int *param_1);
template<class... A> int FUN_10bf0590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf05a0(undefined4 *param_1);
template<class... A> int FUN_10bf05a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bf05b0(int param_1);
template<class... A> int FUN_10bf05b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf05c0(undefined4 *param_1);
template<class... A> int FUN_10bf05c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf05d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bf05d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bf1150(void);
template<class... A> int FUN_10bf1150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bf12c0(void);
template<class... A> int FUN_10bf12c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bf12d0(void);
template<class... A> int FUN_10bf12d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bf12e0(int *param_1);
template<class... A> int FUN_10bf12e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf12f0(undefined4 *param_1);
template<class... A> int FUN_10bf12f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf1300(undefined4 *param_1);
template<class... A> int FUN_10bf1300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf1310(undefined4 *param_1);
template<class... A> int FUN_10bf1310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf1560(undefined4 *param_1);
template<class... A> int FUN_10bf1560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf1590(undefined4 *param_1);
template<class... A> int FUN_10bf1590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf2110(undefined4 *param_1);
template<class... A> int FUN_10bf2110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf2200(undefined4 *param_1);
template<class... A> int FUN_10bf2200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf2250(undefined4 *param_1);
template<class... A> int FUN_10bf2250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf2270(undefined4 *param_1);
template<class... A> int FUN_10bf2270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf2290(undefined4 *param_1);
template<class... A> int FUN_10bf2290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf22b0(undefined4 *param_1);
template<class... A> int FUN_10bf22b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf22c0(undefined4 *param_1);
template<class... A> int FUN_10bf22c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf22e0(undefined4 *param_1);
template<class... A> int FUN_10bf22e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bf2760(int param_1);
template<class... A> int FUN_10bf2760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf2770(undefined4 *param_1);
template<class... A> int FUN_10bf2770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf2c90(undefined4 *param_1);
template<class... A> int FUN_10bf2c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf2cc0(undefined4 *param_1);
template<class... A> int FUN_10bf2cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf2de0(undefined4 *param_1);
template<class... A> int FUN_10bf2de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf3160(undefined4 *param_1);
template<class... A> int FUN_10bf3160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf3260(undefined4 *param_1);
template<class... A> int FUN_10bf3260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf3340(undefined4 *param_1);
template<class... A> int FUN_10bf3340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf3780(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10bf3780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf37a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10bf37a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf37c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bf37c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf37e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10bf37e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf3800(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10bf3800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf3820(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bf3820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf3900(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bf3900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf3910(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bf3910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf3950(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bf3950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf3960(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bf3960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10bf39c0(undefined4 *param_1);
template<class... A> int FUN_10bf39c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte __stdcall FUN_10bf3a10(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10bf3a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf3a30(void);
template<class... A> int FUN_10bf3a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf3a40(void);
template<class... A> int FUN_10bf3a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf3a50(void);
template<class... A> int FUN_10bf3a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf3a60(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bf3a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf3a70(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bf3a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf3a80(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bf3a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf3a90(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bf3a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf3aa0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bf3aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf3ab0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bf3ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf3ac0(void);
template<class... A> int FUN_10bf3ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf3ad0(void);
template<class... A> int FUN_10bf3ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf3ae0(void);
template<class... A> int FUN_10bf3ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf3af0(void);
template<class... A> int FUN_10bf3af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf3d30(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_10bf3d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf3e10(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10bf3e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf3e30(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10bf3e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf3e50(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10bf3e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf3ef0(undefined4 *param_1);
template<class... A> int FUN_10bf3ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf3f00(undefined4 *param_1);
template<class... A> int FUN_10bf3f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf3f10(undefined4 *param_1);
template<class... A> int FUN_10bf3f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf3f20(undefined4 param_1);
template<class... A> int FUN_10bf3f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf41b0(undefined4 param_1);
template<class... A> int FUN_10bf41b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf41c0(undefined4 param_1);
template<class... A> int FUN_10bf41c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf41d0(undefined4 param_1);
template<class... A> int FUN_10bf41d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf41e0(undefined4 param_1);
template<class... A> int FUN_10bf41e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf41f0(undefined4 param_1);
template<class... A> int FUN_10bf41f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf4200(undefined4 param_1);
template<class... A> int FUN_10bf4200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf4210(undefined4 param_1);
template<class... A> int FUN_10bf4210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf4220(undefined4 param_1);
template<class... A> int FUN_10bf4220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf4230(undefined4 param_1);
template<class... A> int FUN_10bf4230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf4240(undefined4 param_1);
template<class... A> int FUN_10bf4240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf4250(undefined4 param_1);
template<class... A> int FUN_10bf4250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf4260(undefined4 param_1);
template<class... A> int FUN_10bf4260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf4270(undefined4 param_1);
template<class... A> int FUN_10bf4270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf4280(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10bf4280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf42d0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10bf42d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf42f0(undefined4 param_1,int *param_2);
template<class... A> int FUN_10bf42f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf45d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bf45d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf45f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bf45f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf4850(undefined4 param_1);
template<class... A> int FUN_10bf4850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf4860(undefined4 param_1);
template<class... A> int FUN_10bf4860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf4870(undefined4 param_1);
template<class... A> int FUN_10bf4870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf4880(undefined4 param_1);
template<class... A> int FUN_10bf4880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf4890(undefined4 param_1);
template<class... A> int FUN_10bf4890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf48a0(undefined4 param_1);
template<class... A> int FUN_10bf48a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf48b0(undefined4 param_1);
template<class... A> int FUN_10bf48b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf48c0(undefined4 param_1);
template<class... A> int FUN_10bf48c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf48d0(undefined4 param_1);
template<class... A> int FUN_10bf48d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf48e0(undefined4 param_1);
template<class... A> int FUN_10bf48e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bf48f0(void);
template<class... A> int FUN_10bf48f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf4bb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10bf4bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf4be0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10bf4be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf4ce0(undefined4 *param_1);
template<class... A> int FUN_10bf4ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf4f70(undefined4 *param_1);
template<class... A> int FUN_10bf4f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf4f90(undefined4 *param_1);
template<class... A> int FUN_10bf4f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf4fb0(undefined4 *param_1);
template<class... A> int FUN_10bf4fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf5020(undefined4 *param_1);
template<class... A> int FUN_10bf5020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf5040(undefined4 *param_1);
template<class... A> int FUN_10bf5040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf5060(undefined4 param_1);
template<class... A> int FUN_10bf5060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf5070(undefined4 param_1);
template<class... A> int FUN_10bf5070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf55d0(undefined4 *param_1);
template<class... A> int FUN_10bf55d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf55e0(undefined4 *param_1);
template<class... A> int FUN_10bf55e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf5640(int param_1);
template<class... A> int FUN_10bf5640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf58f0(void);
template<class... A> int FUN_10bf58f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf5900(void);
template<class... A> int FUN_10bf5900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf5a80(int param_1);
template<class... A> int FUN_10bf5a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf5a90(int param_1);
template<class... A> int FUN_10bf5a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf5c60(undefined4 *param_1);
template<class... A> int FUN_10bf5c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf5e20(int param_1);
template<class... A> int FUN_10bf5e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bf5f70(int *param_1);
template<class... A> int FUN_10bf5f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bf5f80(int *param_1);
template<class... A> int FUN_10bf5f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bf5f90(int *param_1);
template<class... A> int FUN_10bf5f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bf5fa0(int *param_1);
template<class... A> int FUN_10bf5fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bf5fb0(int *param_1);
template<class... A> int FUN_10bf5fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bf5fc0(int *param_1);
template<class... A> int FUN_10bf5fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf5fd0(undefined4 *param_1);
template<class... A> int FUN_10bf5fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf5fe0(undefined4 *param_1);
template<class... A> int FUN_10bf5fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf5ff0(undefined4 *param_1);
template<class... A> int FUN_10bf5ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf6000(undefined4 *param_1);
template<class... A> int FUN_10bf6000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bf6010(undefined4 *param_1);
template<class... A> int FUN_10bf6010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10bf6020(int *param_1);
template<class... A> int FUN_10bf6020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10bf6030(int *param_1);
template<class... A> int FUN_10bf6030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bf6040(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10bf6040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf6200(undefined4 *param_1);
template<class... A> int FUN_10bf6200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf6220(undefined4 *param_1);
template<class... A> int FUN_10bf6220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf64f0(int param_1);
template<class... A> int FUN_10bf64f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf6510(int param_1);
template<class... A> int FUN_10bf6510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bf6530(float *param_1);
template<class... A> int FUN_10bf6530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bf6590(float *param_1);
template<class... A> int FUN_10bf6590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf6bf0(undefined4 param_1);
template<class... A> int FUN_10bf6bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf6c00(undefined4 param_1);
template<class... A> int FUN_10bf6c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf6c10(undefined4 param_1);
template<class... A> int FUN_10bf6c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf6c20(undefined4 param_1);
template<class... A> int FUN_10bf6c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf6c30(undefined4 param_1);
template<class... A> int FUN_10bf6c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf6c40(undefined4 param_1);
template<class... A> int FUN_10bf6c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf6c50(undefined4 param_1);
template<class... A> int FUN_10bf6c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf6c60(undefined4 param_1);
template<class... A> int FUN_10bf6c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf6c70(undefined4 param_1);
template<class... A> int FUN_10bf6c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf6c80(undefined4 param_1);
template<class... A> int FUN_10bf6c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf6c90(undefined4 param_1);
template<class... A> int FUN_10bf6c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf6ca0(undefined4 param_1);
template<class... A> int FUN_10bf6ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf6cb0(undefined4 param_1);
template<class... A> int FUN_10bf6cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf6cc0(undefined4 param_1);
template<class... A> int FUN_10bf6cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf6cd0(undefined4 param_1);
template<class... A> int FUN_10bf6cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf6ce0(undefined4 param_1);
template<class... A> int FUN_10bf6ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf6df0(undefined4 param_1);
template<class... A> int FUN_10bf6df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bf6e00(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10bf6e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bf6e10(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10bf6e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bf6e20(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10bf6e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bf6e30(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10bf6e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf6e40(undefined4 param_1);
template<class... A> int FUN_10bf6e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf6e50(undefined4 param_1);
template<class... A> int FUN_10bf6e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf6e60(undefined4 param_1);
template<class... A> int FUN_10bf6e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf6e70(undefined4 param_1);
template<class... A> int FUN_10bf6e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf6f60(void);
template<class... A> int FUN_10bf6f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf6f70(void);
template<class... A> int FUN_10bf6f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf70e0(int param_1);
template<class... A> int FUN_10bf70e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf70f0(int param_1);
template<class... A> int FUN_10bf70f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf7100(undefined4 *param_1);
template<class... A> int FUN_10bf7100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf7110(undefined4 *param_1);
template<class... A> int FUN_10bf7110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf7570(int param_1,int param_2,int param_3);
template<class... A> int FUN_10bf7570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf75b0(int param_1,int param_2,int param_3);
template<class... A> int FUN_10bf75b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bf7600(uint param_1);
template<class... A> int FUN_10bf7600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bf7680(uint param_1);
template<class... A> int FUN_10bf7680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bf76f0(uint param_1);
template<class... A> int FUN_10bf76f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bf7760(uint param_1);
template<class... A> int FUN_10bf7760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf77f0(undefined4 *param_1);
template<class... A> int FUN_10bf77f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf7890(int param_1);
template<class... A> int FUN_10bf7890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf78a0(int param_1);
template<class... A> int FUN_10bf78a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bf78f0(int param_1);
template<class... A> int FUN_10bf78f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf7c40(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10bf7c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bf7c90(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10bf7c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bf7ce0(int param_1,int param_2);
template<class... A> int FUN_10bf7ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bf7d30(int param_1,int param_2);
template<class... A> int FUN_10bf7d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bf7d80(int param_1,int param_2);
template<class... A> int FUN_10bf7d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bf7dd0(int param_1,int param_2);
template<class... A> int FUN_10bf7dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf7e50(int param_1);
template<class... A> int FUN_10bf7e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bf8860(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10bf8860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bf8880(void);
template<class... A> int FUN_10bf8880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10bf8ed0(float *param_1);
template<class... A> int FUN_10bf8ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10bf8ee0(float *param_1);
template<class... A> int FUN_10bf8ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf8ef0(void);
template<class... A> int FUN_10bf8ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf8f00(void);
template<class... A> int FUN_10bf8f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf8f10(void);
template<class... A> int FUN_10bf8f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf8f20(void);
template<class... A> int FUN_10bf8f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf8f30(void);
template<class... A> int FUN_10bf8f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf8f40(void);
template<class... A> int FUN_10bf8f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf8f50(void);
template<class... A> int FUN_10bf8f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf8f60(void);
template<class... A> int FUN_10bf8f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bf92e0(undefined4 param_1);
template<class... A> int FUN_10bf92e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf9a30(int param_1);
template<class... A> int FUN_10bf9a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bf9a40(int *param_1);
template<class... A> int FUN_10bf9a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bf9a50(int *param_1);
template<class... A> int FUN_10bf9a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bf9a60(int param_1);
template<class... A> int FUN_10bf9a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bfa340(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10bfa340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bfa360(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10bfa360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bfa380(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bfa380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bfa3c0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bfa3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bfa3d0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bfa3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bfa430(void);
template<class... A> int FUN_10bfa430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bfa440(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bfa440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bfa450(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bfa450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bfa460(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bfa460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bfa470(void);
template<class... A> int FUN_10bfa470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bfa480(void);
template<class... A> int FUN_10bfa480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bfa580(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_10bfa580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bfa5c0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10bfa5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bfa5e0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10bfa5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bfa600(undefined4 *param_1);
template<class... A> int FUN_10bfa600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bfa610(undefined4 param_1);
template<class... A> int FUN_10bfa610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bfa890(undefined4 param_1);
template<class... A> int FUN_10bfa890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bfa8a0(undefined4 param_1);
template<class... A> int FUN_10bfa8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bfa8b0(undefined4 param_1);
template<class... A> int FUN_10bfa8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bfa8c0(undefined4 param_1);
template<class... A> int FUN_10bfa8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bfa8d0(undefined4 param_1);
template<class... A> int FUN_10bfa8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bfa8e0(undefined4 param_1);
template<class... A> int FUN_10bfa8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bfa8f0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10bfa8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bfa930(undefined4 param_1,int *param_2);
template<class... A> int FUN_10bfa930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bfa940(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bfa940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bfa9e0(undefined4 param_1);
template<class... A> int FUN_10bfa9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bfa9f0(undefined4 param_1);
template<class... A> int FUN_10bfa9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bfaa00(undefined4 param_1);
template<class... A> int FUN_10bfaa00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bfaa10(undefined4 param_1);
template<class... A> int FUN_10bfaa10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bfaa20(undefined4 param_1);
template<class... A> int FUN_10bfaa20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bfaa30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10bfaa30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bfab30(undefined4 *param_1);
template<class... A> int FUN_10bfab30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bfac80(undefined4 *param_1);
template<class... A> int FUN_10bfac80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bfacd0(undefined4 *param_1);
template<class... A> int FUN_10bfacd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bfacf0(undefined4 param_1);
template<class... A> int FUN_10bfacf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bfb4e0(void);
template<class... A> int FUN_10bfb4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bfb640(int param_1);
template<class... A> int FUN_10bfb640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bfbb00(undefined4 *param_1);
template<class... A> int FUN_10bfbb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bfbb10(int *param_1);
template<class... A> int FUN_10bfbb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bfbb20(int *param_1);
template<class... A> int FUN_10bfbb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bfbb30(int *param_1);
template<class... A> int FUN_10bfbb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bfbb40(int *param_1);
template<class... A> int FUN_10bfbb40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bfbb50(int *param_1);
template<class... A> int FUN_10bfbb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bfbb60(int *param_1);
template<class... A> int FUN_10bfbb60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bfbb70(undefined4 *param_1);
template<class... A> int FUN_10bfbb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bfbb80(undefined4 *param_1);
template<class... A> int FUN_10bfbb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bfbb90(undefined4 *param_1);
template<class... A> int FUN_10bfbb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bfbba0(undefined4 *param_1);
template<class... A> int FUN_10bfbba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10bfbbb0(int *param_1);
template<class... A> int FUN_10bfbbb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bfbcb0(undefined4 *param_1);
template<class... A> int FUN_10bfbcb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bfbe10(int param_1);
template<class... A> int FUN_10bfbe10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bfbe30(float *param_1);
template<class... A> int FUN_10bfbe30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bfc1e0(undefined4 param_1);
template<class... A> int FUN_10bfc1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bfc1f0(undefined4 param_1);
template<class... A> int FUN_10bfc1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bfc200(undefined4 param_1);
template<class... A> int FUN_10bfc200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bfc210(undefined4 param_1);
template<class... A> int FUN_10bfc210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bfc220(undefined4 param_1);
template<class... A> int FUN_10bfc220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bfc230(undefined4 param_1);
template<class... A> int FUN_10bfc230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bfc2c0(undefined4 param_1);
template<class... A> int FUN_10bfc2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bfc2d0(undefined4 param_1);
template<class... A> int FUN_10bfc2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bfc350(void);
template<class... A> int FUN_10bfc350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bfc410(int param_1);
template<class... A> int FUN_10bfc410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bfc420(undefined4 *param_1);
template<class... A> int FUN_10bfc420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bfc550(int param_1,int param_2,int param_3);
template<class... A> int FUN_10bfc550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bfc590(uint param_1);
template<class... A> int FUN_10bfc590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bfc600(uint param_1);
template<class... A> int FUN_10bfc600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bfc6c0(int param_1);
template<class... A> int FUN_10bfc6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bfc7c0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10bfc7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bfc810(int param_1,int param_2);
template<class... A> int FUN_10bfc810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bfc860(int param_1,int param_2);
template<class... A> int FUN_10bfc860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10bfd890(float *param_1);
template<class... A> int FUN_10bfd890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bfd8a0(void);
template<class... A> int FUN_10bfd8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bfd8b0(void);
template<class... A> int FUN_10bfd8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bfd8c0(void);
template<class... A> int FUN_10bfd8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bfd8d0(void);
template<class... A> int FUN_10bfd8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bfdae0(undefined4 param_1);
template<class... A> int FUN_10bfdae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bfdaf0(undefined4 *param_1);
template<class... A> int FUN_10bfdaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bfdb80(undefined4 *param_1);
template<class... A> int FUN_10bfdb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bfe110(int *param_1);
template<class... A> int FUN_10bfe110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bfe4b0(void);
template<class... A> int FUN_10bfe4b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bfe4c0(void);
template<class... A> int FUN_10bfe4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bfe4d0(undefined4 *param_1);
template<class... A> int FUN_10bfe4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bfe500(undefined4 *param_1);
template<class... A> int FUN_10bfe500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bfe570(undefined4 *param_1);
template<class... A> int FUN_10bfe570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bfe590(undefined4 *param_1);
template<class... A> int FUN_10bfe590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bfe630(undefined4 *param_1);
template<class... A> int FUN_10bfe630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bfe6c0(undefined4 *param_1);
template<class... A> int FUN_10bfe6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bfe6d0(undefined4 *param_1);
template<class... A> int FUN_10bfe6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bfe6e0(undefined4 *param_1);
template<class... A> int FUN_10bfe6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bfe730(undefined4 *param_1);
template<class... A> int FUN_10bfe730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bfe770(undefined4 *param_1);
template<class... A> int FUN_10bfe770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bfe7e0(undefined4 *param_1);
template<class... A> int FUN_10bfe7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bfe800(undefined4 *param_1);
template<class... A> int FUN_10bfe800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bfea40(undefined4 *param_1);
template<class... A> int FUN_10bfea40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bfea70(undefined4 *param_1);
template<class... A> int FUN_10bfea70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bfea80(undefined4 *param_1);
template<class... A> int FUN_10bfea80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bfede0(undefined4 *param_1);
template<class... A> int FUN_10bfede0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bfedf0(int *param_1);
template<class... A> int FUN_10bfedf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bfee00(undefined4 *param_1);
template<class... A> int FUN_10bfee00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bfee10(int *param_1);
template<class... A> int FUN_10bfee10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bfee20(undefined4 *param_1);
template<class... A> int FUN_10bfee20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bfee30(undefined4 *param_1);
template<class... A> int FUN_10bfee30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bfee40(undefined4 *param_1);
template<class... A> int FUN_10bfee40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bfee50(undefined4 *param_1);
template<class... A> int FUN_10bfee50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bfee60(undefined4 *param_1);
template<class... A> int FUN_10bfee60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bfee70(undefined4 *param_1);
template<class... A> int FUN_10bfee70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bff8b0(undefined4 *param_1);
template<class... A> int FUN_10bff8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c00ac0(void);
template<class... A> int FUN_10c00ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c00ad0(void);
template<class... A> int FUN_10c00ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c00c20(undefined4 *param_1);
template<class... A> int FUN_10c00c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c00c30(undefined4 *param_1);
template<class... A> int FUN_10c00c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c00c40(undefined4 *param_1);
template<class... A> int FUN_10c00c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c00c50(undefined4 *param_1);
template<class... A> int FUN_10c00c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c00c60(undefined4 *param_1);
template<class... A> int FUN_10c00c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c00fd0(undefined4 *param_1);
template<class... A> int FUN_10c00fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c01000(undefined4 *param_1);
template<class... A> int FUN_10c01000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c01030(undefined4 *param_1);
template<class... A> int FUN_10c01030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c01060(undefined4 *param_1);
template<class... A> int FUN_10c01060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c01380(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c01380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c013f0(undefined4 param_1);
template<class... A> int FUN_10c013f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c017d0(undefined4 *param_1);
template<class... A> int FUN_10c017d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_10c017e0(SCStr *param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_10c017e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_10c01840(SCStr *param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_10c01840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c018a0(undefined4 param_1);
template<class... A> int FUN_10c018a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c019f0(undefined4 param_1);
template<class... A> int FUN_10c019f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c01a00(undefined4 param_1);
template<class... A> int FUN_10c01a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c01a10(undefined4 param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_10c01a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c01a40(undefined4 param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_10c01a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c01a70(undefined4 param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_10c01a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c01cb0(undefined4 param_1);
template<class... A> int FUN_10c01cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c01cc0(undefined4 param_1);
template<class... A> int FUN_10c01cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c01cd0(undefined4 param_1);
template<class... A> int FUN_10c01cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c01ce0(void);
template<class... A> int FUN_10c01ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c01cf0(undefined4 param_1);
template<class... A> int FUN_10c01cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c01d00(undefined4 *param_1);
template<class... A> int FUN_10c01d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c01de0(undefined4 *param_1);
template<class... A> int FUN_10c01de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c01e00(undefined4 *param_1);
template<class... A> int FUN_10c01e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c01e10(undefined4 *param_1);
template<class... A> int FUN_10c01e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c01e30(undefined4 param_1);
template<class... A> int FUN_10c01e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c01e40(undefined4 *param_1);
template<class... A> int FUN_10c01e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c01e60(undefined4 *param_1);
template<class... A> int FUN_10c01e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c022f0(undefined4 *param_1);
template<class... A> int FUN_10c022f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c02590(undefined4 *param_1);
template<class... A> int FUN_10c02590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c025a0(undefined4 *param_1);
template<class... A> int FUN_10c025a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c025b0(undefined4 *param_1);
template<class... A> int FUN_10c025b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c025c0(undefined4 *param_1);
template<class... A> int FUN_10c025c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10c025d0(int *param_1);
template<class... A> int FUN_10c025d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10c025e0(int *param_1);
template<class... A> int FUN_10c025e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c02990(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10c02990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c02a30(undefined4 param_1);
template<class... A> int FUN_10c02a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c02a40(undefined4 param_1);
template<class... A> int FUN_10c02a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c02a50(undefined4 param_1);
template<class... A> int FUN_10c02a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c02a60(undefined4 param_1);
template<class... A> int FUN_10c02a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c02a70(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10c02a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c02a80(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c02a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c02a90(undefined4 *param_1);
template<class... A> int FUN_10c02a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c02d70(uint param_1);
template<class... A> int FUN_10c02d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c02df0(int *param_1);
template<class... A> int FUN_10c02df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c03730(void);
template<class... A> int FUN_10c03730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c03740(int *param_1);
template<class... A> int FUN_10c03740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c03750(void);
template<class... A> int FUN_10c03750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c03760(void);
template<class... A> int FUN_10c03760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c03930(undefined4 *param_1);
template<class... A> int FUN_10c03930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c03940(undefined4 *param_1);
template<class... A> int FUN_10c03940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c03cc0(undefined4 *param_1);
template<class... A> int FUN_10c03cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c03d90(int *param_1);
template<class... A> int FUN_10c03d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10c04420(int param_1,int param_2);
template<class... A> int FUN_10c04420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10c04b50(int param_1,int param_2);
template<class... A> int FUN_10c04b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c05270(undefined4 *param_1);
template<class... A> int FUN_10c05270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c05440(undefined4 *param_1);
template<class... A> int FUN_10c05440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c05ae0(undefined4 *param_1);
template<class... A> int FUN_10c05ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c05b00(undefined4 *param_1);
template<class... A> int FUN_10c05b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c05d70(undefined4 *param_1);
template<class... A> int FUN_10c05d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c05d90(undefined4 *param_1);
template<class... A> int FUN_10c05d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c061d0(undefined4 *param_1);
template<class... A> int FUN_10c061d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c061e0(undefined4 *param_1);
template<class... A> int FUN_10c061e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c061f0(int *param_1);
template<class... A> int FUN_10c061f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c06200(int *param_1);
template<class... A> int FUN_10c06200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c06210(undefined4 *param_1);
template<class... A> int FUN_10c06210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c06220(undefined4 *param_1);
template<class... A> int FUN_10c06220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c06230(undefined4 *param_1);
template<class... A> int FUN_10c06230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c06240(undefined4 *param_1);
template<class... A> int FUN_10c06240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c07050(void);
template<class... A> int FUN_10c07050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c0e540(int param_1);
template<class... A> int FUN_10c0e540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c10150(int param_1);
template<class... A> int FUN_10c10150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __stdcall FUN_10c10880(int param_1);
template<class... A> int FUN_10c10880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c108b0(int param_1);
template<class... A> int FUN_10c108b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10c146c0(int param_1);
template<class... A> int FUN_10c146c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c14aa0(int *param_1);
template<class... A> int FUN_10c14aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c15610(undefined4 *param_1);
template<class... A> int FUN_10c15610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c15620(undefined4 *param_1);
template<class... A> int FUN_10c15620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c15a70(undefined4 *param_1);
template<class... A> int FUN_10c15a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c15aa0(undefined4 *param_1);
template<class... A> int FUN_10c15aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10c16be0(int param_1);
template<class... A> int FUN_10c16be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c16e40(int param_1);
template<class... A> int FUN_10c16e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c16f80(void);
template<class... A> int FUN_10c16f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c17070(undefined4 *param_1);
template<class... A> int FUN_10c17070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c17920(undefined4 *param_1);
template<class... A> int FUN_10c17920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c17ca0(undefined4 *param_1);
template<class... A> int FUN_10c17ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c17cc0(undefined4 *param_1);
template<class... A> int FUN_10c17cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c17cd0(int *param_1);
template<class... A> int FUN_10c17cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c17ce0(undefined4 *param_1);
template<class... A> int FUN_10c17ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c1ec40(int param_1);
template<class... A> int FUN_10c1ec40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c1ec50(int param_1);
template<class... A> int FUN_10c1ec50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c1ec60(int param_1);
template<class... A> int FUN_10c1ec60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c1ed50(void);
template<class... A> int FUN_10c1ed50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c1ede0(int *param_1);
template<class... A> int FUN_10c1ede0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c1edf0(int param_1);
template<class... A> int FUN_10c1edf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c1ef00(int *param_1);
template<class... A> int FUN_10c1ef00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c20b10(undefined4 *param_1);
template<class... A> int FUN_10c20b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c20d10(undefined4 *param_1);
template<class... A> int FUN_10c20d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c20ed0(int param_1);
template<class... A> int FUN_10c20ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c21290(undefined4 *param_1);
template<class... A> int FUN_10c21290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c21b80(undefined4 *param_1);
template<class... A> int FUN_10c21b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c21be0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c21be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c21d60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10c21d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c21d80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10c21d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c21da0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c21da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c21e10(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c21e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c21e20(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c21e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c21f10(void);
template<class... A> int FUN_10c21f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c21f20(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c21f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c21f30(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c21f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c21f40(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c21f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c21f50(void);
template<class... A> int FUN_10c21f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c21f60(void);
template<class... A> int FUN_10c21f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c226e0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10c226e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c227a0(undefined4 *param_1);
template<class... A> int FUN_10c227a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c227b0(undefined4 *param_1);
template<class... A> int FUN_10c227b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c227c0(undefined4 param_1);
template<class... A> int FUN_10c227c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c22b10(undefined4 param_1);
template<class... A> int FUN_10c22b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c22c60(undefined4 param_1);
template<class... A> int FUN_10c22c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c22c70(undefined4 param_1);
template<class... A> int FUN_10c22c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c22c80(undefined4 param_1);
template<class... A> int FUN_10c22c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c22c90(undefined4 param_1);
template<class... A> int FUN_10c22c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c22ca0(undefined4 param_1);
template<class... A> int FUN_10c22ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c22cb0(undefined4 param_1);
template<class... A> int FUN_10c22cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c22cc0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10c22cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c22cf0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10c22cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c22d20(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10c22d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c22d50(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10c22d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c234c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c234c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c23560(undefined4 param_1);
template<class... A> int FUN_10c23560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c23570(undefined4 param_1);
template<class... A> int FUN_10c23570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c23580(undefined4 param_1);
template<class... A> int FUN_10c23580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c23590(undefined4 param_1);
template<class... A> int FUN_10c23590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c235a0(undefined4 param_1);
template<class... A> int FUN_10c235a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c235b0(undefined4 param_1);
template<class... A> int FUN_10c235b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c235c0(undefined4 param_1);
template<class... A> int FUN_10c235c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c235d0(undefined4 param_1);
template<class... A> int FUN_10c235d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c23750(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10c23750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c23870(undefined4 *param_1);
template<class... A> int FUN_10c23870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c239e0(undefined4 *param_1);
template<class... A> int FUN_10c239e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c23a80(undefined4 *param_1);
template<class... A> int FUN_10c23a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c23aa0(undefined4 *param_1);
template<class... A> int FUN_10c23aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c23ac0(undefined4 param_1);
template<class... A> int FUN_10c23ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c23ad0(undefined4 param_1);
template<class... A> int FUN_10c23ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c23c00(undefined4 *param_1);
template<class... A> int FUN_10c23c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c23e00(undefined4 *param_1);
template<class... A> int FUN_10c23e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c24070(void);
template<class... A> int FUN_10c24070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c24150(int param_1);
template<class... A> int FUN_10c24150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c242b0(undefined4 *param_1);
template<class... A> int FUN_10c242b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c246b0(undefined4 *param_1);
template<class... A> int FUN_10c246b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c246c0(int *param_1);
template<class... A> int FUN_10c246c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c246d0(int *param_1);
template<class... A> int FUN_10c246d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c246e0(undefined4 *param_1);
template<class... A> int FUN_10c246e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c246f0(undefined4 *param_1);
template<class... A> int FUN_10c246f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c24700(undefined4 *param_1);
template<class... A> int FUN_10c24700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c24710(undefined4 *param_1);
template<class... A> int FUN_10c24710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10c24720(int *param_1);
template<class... A> int FUN_10c24720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10c24730(int *param_1);
template<class... A> int FUN_10c24730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10c24740(int *param_1);
template<class... A> int FUN_10c24740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c249f0(undefined4 *param_1);
template<class... A> int FUN_10c249f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c24c20(int param_1);
template<class... A> int FUN_10c24c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c24c40(int param_1);
template<class... A> int FUN_10c24c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c24ca0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10c24ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c24fb0(undefined4 param_1);
template<class... A> int FUN_10c24fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c24fc0(undefined4 param_1);
template<class... A> int FUN_10c24fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c24fd0(undefined4 param_1);
template<class... A> int FUN_10c24fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c24fe0(undefined4 param_1);
template<class... A> int FUN_10c24fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c24ff0(undefined4 param_1);
template<class... A> int FUN_10c24ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c25000(undefined4 param_1);
template<class... A> int FUN_10c25000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c25010(undefined4 param_1);
template<class... A> int FUN_10c25010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c25020(undefined4 param_1);
template<class... A> int FUN_10c25020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c25030(undefined4 param_1);
template<class... A> int FUN_10c25030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c25040(undefined4 param_1);
template<class... A> int FUN_10c25040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c250d0(int param_1);
template<class... A> int FUN_10c250d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c250e0(int param_1);
template<class... A> int FUN_10c250e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c25160(void);
template<class... A> int FUN_10c25160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c25170(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c25170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c25300(int param_1);
template<class... A> int FUN_10c25300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c25310(undefined4 *param_1);
template<class... A> int FUN_10c25310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c25320(undefined4 *param_1);
template<class... A> int FUN_10c25320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c25670(int param_1,int param_2,int param_3);
template<class... A> int FUN_10c25670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c256d0(uint param_1);
template<class... A> int FUN_10c256d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c25750(uint param_1);
template<class... A> int FUN_10c25750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c257c0(uint param_1);
template<class... A> int FUN_10c257c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c25860(int param_1);
template<class... A> int FUN_10c25860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c26080(int *param_1);
template<class... A> int FUN_10c26080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c26090(int param_1);
template<class... A> int FUN_10c26090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c26140(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10c26140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c26190(int param_1,int param_2);
template<class... A> int FUN_10c26190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c26230(int param_1,int param_2);
template<class... A> int FUN_10c26230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c262a0(undefined4 param_1);
template<class... A> int FUN_10c262a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined * FUN_10c262c0(undefined4 param_1,int *param_2);
template<class... A> int FUN_10c262c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c263b0(int *param_1);
template<class... A> int FUN_10c263b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c263d0(int *param_1);
template<class... A> int FUN_10c263d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c263e0(int *param_1);
template<class... A> int FUN_10c263e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c26490(undefined4 param_1);
template<class... A> int FUN_10c26490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined * FUN_10c264b0(undefined4 param_1,int *param_2);
template<class... A> int FUN_10c264b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c264d0(undefined4 param_1);
template<class... A> int FUN_10c264d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined * FUN_10c264f0(undefined4 param_1,int *param_2);
template<class... A> int FUN_10c264f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c26510(undefined4 param_1);
template<class... A> int FUN_10c26510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined * FUN_10c26530(undefined4 param_1,int *param_2);
template<class... A> int FUN_10c26530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c26550(undefined4 param_1);
template<class... A> int FUN_10c26550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined * FUN_10c265b0(undefined4 param_1,int *param_2);
template<class... A> int FUN_10c265b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10c27170(int param_1);
template<class... A> int FUN_10c27170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c27180(void);
template<class... A> int FUN_10c27180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c27190(void);
template<class... A> int FUN_10c27190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c271a0(void);
template<class... A> int FUN_10c271a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c271b0(void);
template<class... A> int FUN_10c271b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c271c0(void);
template<class... A> int FUN_10c271c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c271d0(void);
template<class... A> int FUN_10c271d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c273a0(int *param_1);
template<class... A> int FUN_10c273a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c27b30(int param_1);
template<class... A> int FUN_10c27b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c27b40(int *param_1);
template<class... A> int FUN_10c27b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c27b50(int param_1);
template<class... A> int FUN_10c27b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c28f40(void);
template<class... A> int FUN_10c28f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c28f50(undefined4 *param_1);
template<class... A> int FUN_10c28f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c28f80(undefined4 *param_1);
template<class... A> int FUN_10c28f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c29060(undefined4 *param_1);
template<class... A> int FUN_10c29060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c292b0(undefined4 *param_1);
template<class... A> int FUN_10c292b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c29490(undefined4 *param_1);
template<class... A> int FUN_10c29490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c294a0(undefined4 *param_1);
template<class... A> int FUN_10c294a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c294b0(undefined4 *param_1);
template<class... A> int FUN_10c294b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c2a5e0(void);
template<class... A> int FUN_10c2a5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c2a5f0(int *param_1);
template<class... A> int FUN_10c2a5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c2a660(undefined4 *param_1);
template<class... A> int FUN_10c2a660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c2a7c0(undefined4 *param_1);
template<class... A> int FUN_10c2a7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c2a920(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c2a920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c2aa60(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10c2aa60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c2aa90(void);
template<class... A> int FUN_10c2aa90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c2b170(undefined4 *param_1);
template<class... A> int FUN_10c2b170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c2b180(undefined4 *param_1);
template<class... A> int FUN_10c2b180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c2b1c0(undefined4 param_1);
template<class... A> int FUN_10c2b1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c2b2a0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10c2b2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c2b460(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10c2b460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c2b620(void);
template<class... A> int FUN_10c2b620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c2b720(undefined4 param_1);
template<class... A> int FUN_10c2b720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c2b730(undefined4 param_1);
template<class... A> int FUN_10c2b730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c2b750(undefined4 param_1);
template<class... A> int FUN_10c2b750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c2b770(undefined4 param_1);
template<class... A> int FUN_10c2b770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c2b860(undefined4 *param_1);
template<class... A> int FUN_10c2b860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c2b890(undefined4 *param_1);
template<class... A> int FUN_10c2b890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c2b8b0(undefined4 param_1);
template<class... A> int FUN_10c2b8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c2b8c0(undefined4 *param_1);
template<class... A> int FUN_10c2b8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c2c0a0(undefined4 *param_1);
template<class... A> int FUN_10c2c0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c2c0b0(int *param_1);
template<class... A> int FUN_10c2c0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c2c0c0(int *param_1);
template<class... A> int FUN_10c2c0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c2c0d0(undefined4 *param_1);
template<class... A> int FUN_10c2c0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c2c3f0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c2c3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c2c450(undefined4 param_1);
template<class... A> int FUN_10c2c450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c2c460(undefined4 param_1);
template<class... A> int FUN_10c2c460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c2c470(undefined4 param_1);
template<class... A> int FUN_10c2c470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c2c480(undefined4 param_1);
template<class... A> int FUN_10c2c480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c2c490(undefined4 param_1);
template<class... A> int FUN_10c2c490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c2c4a0(undefined4 param_1);
template<class... A> int FUN_10c2c4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c2c4d0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c2c4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c2c4e0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c2c4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c2c4f0(undefined4 *param_1);
template<class... A> int FUN_10c2c4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10c2c580(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10c2c580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c2c670(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10c2c670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c2c760(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10c2c760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c2d650(uint param_1);
template<class... A> int FUN_10c2d650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c2d6c0(uint param_1);
template<class... A> int FUN_10c2d6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c2d860(int *param_1);
template<class... A> int FUN_10c2d860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c2d870(int *param_1);
template<class... A> int FUN_10c2d870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c2dc40(int param_1,int param_2);
template<class... A> int FUN_10c2dc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c324f0(void);
template<class... A> int FUN_10c324f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c32500(void);
template<class... A> int FUN_10c32500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c32510(void);
template<class... A> int FUN_10c32510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c32520(void);
template<class... A> int FUN_10c32520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c32660(int param_1);
template<class... A> int FUN_10c32660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c32670(undefined4 *param_1);
template<class... A> int FUN_10c32670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c32880(undefined4 *param_1);
template<class... A> int FUN_10c32880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c32f90(int *param_1);
template<class... A> int FUN_10c32f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c34800(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10c34800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c34820(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10c34820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c34840(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c34840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c348a0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c348a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c348b0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c348b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_10c34a30(byte *param_1);
template<class... A> int FUN_10c34a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10c34a80(int *param_1,int *param_2);
template<class... A> int FUN_10c34a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c34aa0(byte *param_1);
template<class... A> int FUN_10c34aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c34af0(void);
template<class... A> int FUN_10c34af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c34b00(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c34b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c34b10(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c34b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c34b20(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c34b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c34b30(void);
template<class... A> int FUN_10c34b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c34b40(void);
template<class... A> int FUN_10c34b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c34cb0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10c34cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c34d50(undefined4 *param_1);
template<class... A> int FUN_10c34d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c34d60(undefined4 param_1);
template<class... A> int FUN_10c34d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c35000(undefined4 param_1);
template<class... A> int FUN_10c35000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c35010(undefined4 param_1);
template<class... A> int FUN_10c35010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c35020(undefined4 param_1);
template<class... A> int FUN_10c35020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c35030(undefined4 param_1);
template<class... A> int FUN_10c35030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c35040(undefined4 param_1);
template<class... A> int FUN_10c35040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c35100(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10c35100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c351a0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c351a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c35240(undefined4 param_1);
template<class... A> int FUN_10c35240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c35250(undefined4 param_1);
template<class... A> int FUN_10c35250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c35260(undefined4 param_1);
template<class... A> int FUN_10c35260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c35270(undefined4 param_1);
template<class... A> int FUN_10c35270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c35280(undefined4 param_1);
template<class... A> int FUN_10c35280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c35290(undefined4 param_1);
template<class... A> int FUN_10c35290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c352a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10c352a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c353c0(undefined4 *param_1);
template<class... A> int FUN_10c353c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c35490(undefined4 *param_1);
template<class... A> int FUN_10c35490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c354d0(int param_1);
template<class... A> int FUN_10c354d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c355e0(undefined4 *param_1);
template<class... A> int FUN_10c355e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10c35600(undefined1 *param_1);
template<class... A> int FUN_10c35600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c35660(undefined4 *param_1);
template<class... A> int FUN_10c35660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c35680(undefined4 param_1);
template<class... A> int FUN_10c35680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c35690(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c35690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c35c20(void);
template<class... A> int FUN_10c35c20(A...);
extern void __fastcall FUN_106845c0(void *param_1);

extern void __fastcall thunk_FUN_106845c0(void *param_1);

// Reference entry 10bd1ae0; body size 5 bytes.
#line 1 "ENTRY_10bd1ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1ae0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1af0; body size 5 bytes.
#line 1 "ENTRY_10bd1af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1af0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1b00; body size 5 bytes.
#line 1 "ENTRY_10bd1b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1b00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1b10; body size 5 bytes.
#line 1 "ENTRY_10bd1b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1b10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1b20; body size 5 bytes.
#line 1 "ENTRY_10bd1b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1b20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1b30; body size 5 bytes.
#line 1 "ENTRY_10bd1b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1b30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1b40; body size 5 bytes.
#line 1 "ENTRY_10bd1b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1b40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1b50; body size 5 bytes.
#line 1 "ENTRY_10bd1b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1b50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1b60; body size 5 bytes.
#line 1 "ENTRY_10bd1b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1b60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1b70; body size 5 bytes.
#line 1 "ENTRY_10bd1b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1b70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1b80; body size 5 bytes.
#line 1 "ENTRY_10bd1b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1b80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1b90; body size 5 bytes.
#line 1 "ENTRY_10bd1b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1b90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1ba0; body size 5 bytes.
#line 1 "ENTRY_10bd1ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1ba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1be0; body size 198 bytes.
#line 1 "ENTRY_10bd1be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd1be0(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if (-1 < param_2) {
    for (; 0 < param_2; param_2 = param_2 + -1) {
      piVar3 = (int *)((int *)*param_1);
      piVar4 = (int *)((int *)piVar3[2]);
      if (*(char *)((int)piVar4 + 0xd) == '\0') {
        cVar1 = (char)(*(char *)(*piVar4 + 0xd));
        piVar3 = (int *)((int *)*piVar4);
        while (cVar1 == '\0') {
          cVar1 = (char)(*(char *)(*piVar3 + 0xd));
          piVar4 = (int *)(piVar3);
          piVar3 = (int *)((int *)*piVar3);
        }
      }
      else {
        cVar1 = (char)(*(char *)(piVar3[1] + 0xd));
        piVar4 = (int *)((int *)piVar3[1]);
        while ((cVar1 == '\0' && ((int *)(piVar3) == (int *)piVar4[2]))) {
          *param_1 = (int)((int)piVar4);
          cVar1 = (char)(*(char *)(piVar4[1] + 0xd));
          piVar3 = (int *)(piVar4);
          piVar4 = (int *)((int *)piVar4[1]);
        }
      }
      *param_1 = (int)((int)piVar4);
    }
    return;
  }
  param_2 = (int)(-param_2);
  piVar3 = (int *)((int *)*param_1);
  do {
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      piVar4 = (int *)((int *)*piVar3);
      if (*(char *)((int)piVar4 + 0xd) == '\0') {
        cVar1 = (char)(*(char *)(piVar4[2] + 0xd));
        piVar3 = (int *)((int *)piVar4[2]);
        while (cVar1 == '\0') {
          cVar1 = (char)(*(char *)(piVar3[2] + 0xd));
          piVar4 = (int *)(piVar3);
          piVar3 = (int *)((int *)piVar3[2]);
        }
        goto LAB_10bd1c4b;
      }
      cVar1 = (char)(*(char *)(piVar3[1] + 0xd));
      piVar4 = (int *)((int *)piVar3[1]);
      while ((piVar2 = (int *)(piVar4), cVar1 == '\0' && ((int *)(piVar3) == (int *)((int *)*piVar2)))) {
        *param_1 = (int)((int)piVar2);
        cVar1 = (char)(*(char *)(piVar2[1] + 0xd));
        piVar4 = (int *)((int *)piVar2[1]);
        piVar3 = (int *)(piVar2);
      }
      piVar3 = (int *)((int *)*param_1);
      if (*(char *)(*param_1 + 0xd) == '\0') {
        *param_1 = (int)((int)piVar2);
        piVar3 = (int *)(piVar2);
      }
    }
    else {
      piVar4 = (int *)((int *)piVar3[2]);
LAB_10bd1c4b:
      *param_1 = (int)((int)piVar4);
      piVar3 = (int *)(piVar4);
    }
    param_2 = (int)(param_2 + -1);
    if (param_2 == 0) {
      return;
    }
  } while( true );
}


// Reference entry 10bd1ce0; body size 20 bytes.
#line 1 "ENTRY_10bd1ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bd1ce0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10bccc10<>(param_1,param_2,param_2);
  return;
}


// Reference entry 10bd1d00; body size 71 bytes.
#line 1 "ENTRY_10bd1d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bd1d00(void *param_2,int param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  void *_Dst;
  
  uVar1 = (uint)(param_3 - (int)param_2 >> 2);
  _Dst = (void *)((void *)*param_1);
  if ((uint)(param_1[2] - (int)_Dst >> 2) < uVar1) {
    thunk_FUN_10bd9ba0(uVar1);
    _Dst = (void *)((void *)*param_1);
  }
  memmove(_Dst,param_2,param_3 - (int)param_2);
  param_1[1] = (int)((int)_Dst + (param_3 - (int)param_2));
  return;
}


// Reference entry 10bd1d60; body size 13 bytes.
#line 1 "ENTRY_10bd1d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd1d60(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10bd1d70; body size 13 bytes.
#line 1 "ENTRY_10bd1d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd1d70(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10bd1d80; body size 29 bytes.
#line 1 "ENTRY_10bd1d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd1d80(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10bd1db0; body size 27 bytes.
#line 1 "ENTRY_10bd1db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd1db0(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
  ((SCStr *)(param_2))->m_op_ctor(param_3);
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_3 + 4));
  return;
}


// Reference entry 10bd1de0; body size 27 bytes.
#line 1 "ENTRY_10bd1de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd1de0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10bd1e10; body size 24 bytes.
#line 1 "ENTRY_10bd1e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd1e10(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  param_2[4] = (SCStr)((SCStr)0x0);
  return;
}


// Reference entry 10bd1e30; body size 25 bytes.
#line 1 "ENTRY_10bd1e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd1e30(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  ((SCStr *)((SCStr *)(param_2 + 1)))->m_op_ctor((SCStr *)(param_3 + 1));
  return;
}


// Reference entry 10bd1e50; body size 22 bytes.
#line 1 "ENTRY_10bd1e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd1e50(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 10bd1e70; body size 40 bytes.
#line 1 "ENTRY_10bd1e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *
FUN_10bd1e70(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
 try {
  void *pvVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  param_2[4] = (undefined4)(0);
  *(undefined8*)(param_2 + 5) = (undefined8)(0);
  param_2[7] = (undefined4)(0);

  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);

  param_2[4] = (undefined4)(0);
  param_2[5] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  param_2[4] = (undefined4)(pvVar1);
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(1)));
  param_2[6] = (undefined4)(0);
  param_2[7] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  param_2[6] = (undefined4)(pvVar1);

  return (undefined4 *)(param_2 + 1);

 } catch (...) { }
}


// Reference entry 10bd1eb0; body size 40 bytes.
#line 1 "ENTRY_10bd1eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *
FUN_10bd1eb0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
 try {
  void *pvVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  param_2[4] = (undefined4)(0);
  *(undefined8*)(param_2 + 5) = (undefined8)(0);
  param_2[7] = (undefined4)(0);

  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);

  param_2[4] = (undefined4)(0);
  param_2[5] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  param_2[4] = (undefined4)(pvVar1);
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(1)));
  param_2[6] = (undefined4)(0);
  param_2[7] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  param_2[6] = (undefined4)(pvVar1);

  return (undefined4 *)(param_2 + 1);

 } catch (...) { }
}


// Reference entry 10bd1ef0; body size 29 bytes.
#line 1 "ENTRY_10bd1ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd1ef0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10bd1f20; body size 29 bytes.
#line 1 "ENTRY_10bd1f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd1f20(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10bd1f50; body size 29 bytes.
#line 1 "ENTRY_10bd1f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd1f50(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10bd2100; body size 14 bytes.
#line 1 "ENTRY_10bd2100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd2100(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10475400(param_3);
  return;
}


// Reference entry 10bd2120; body size 14 bytes.
#line 1 "ENTRY_10bd2120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd2120(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10bd5dc0<>(param_3);
  return;
}


// Reference entry 10bd2140; body size 28 bytes.
#line 1 "ENTRY_10bd2140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd2140(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  *param_2 = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
                    
                    
    (**(code **)(*piVar1 + 4))();
    return;
  }
  return;
}


// Reference entry 10bd2170; body size 28 bytes.
#line 1 "ENTRY_10bd2170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd2170(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  *param_2 = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
                    
                    
    (**(code **)(*piVar1 + 4))();
    return;
  }
  return;
}


// Reference entry 10bd21a0; body size 28 bytes.
#line 1 "ENTRY_10bd21a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd21a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  *param_2 = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
                    
                    
    (**(code **)(*piVar1 + 4))();
    return;
  }
  return;
}


// Reference entry 10bd21d0; body size 13 bytes.
#line 1 "ENTRY_10bd21d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd21d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10bd21e0; body size 3 bytes.
#line 1 "ENTRY_10bd21e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd21e0(void)

{
  return;
}


// Reference entry 10bd2340; body size 12 bytes.
#line 1 "ENTRY_10bd2340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd2340(undefined4 param_1,int param_2)

{
 try {
  uint uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_10bceec0<>((undefined4 *)(param_2 + 0x18),*(undefined4 *)(*(int *)(param_2 + 0x18) + 4));
  thunk_FUN_1148a50e(*(undefined4 *)(param_2 + 0x18),0x18,uVar1);
  thunk_FUN_10bcf040<>((undefined4 *)(param_2 + 0x10),*(undefined4 *)(*(int *)(param_2 + 0x10) + 4));
  thunk_FUN_1148a50e(*(undefined4 *)(param_2 + 0x10),0x18);

  ((SCStr *)((SCStr *)(param_2 + 0xc)))->int_release();
  *(undefined4*)(param_2 + 0xc) = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_2 + 8)))->int_release();
  *(undefined4*)(param_2 + 8) = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10bd25a0; body size 3 bytes.
#line 1 "ENTRY_10bd25a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd25a0(void)

{
  return;
}


// Reference entry 10bd25b0; body size 12 bytes.
#line 1 "ENTRY_10bd25b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10bd25b0(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 2);
}


// Reference entry 10bd25c0; body size 12 bytes.
#line 1 "ENTRY_10bd25c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10bd25c0(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 2);
}


// Reference entry 10bd25d0; body size 86 bytes.
#line 1 "ENTRY_10bd25d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10bd25d0(int *param_1,int *param_2)

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


// Reference entry 10bd2640; body size 36 bytes.
#line 1 "ENTRY_10bd2640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bd2640(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10bcdfc0<>(puVar1,param_2);
  return;
}


// Reference entry 10bd2670; body size 36 bytes.
#line 1 "ENTRY_10bd2670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bd2670(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10bce170<>(puVar1,param_2);
  return;
}


// Reference entry 10bd2760; body size 40 bytes.
#line 1 "ENTRY_10bd2760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bd2760(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_10475400(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x1c);
    return;
  }
  thunk_FUN_10bce670(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 10bd27f0; body size 15 bytes.
#line 1 "ENTRY_10bd27f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd27f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bd2810; body size 15 bytes.
#line 1 "ENTRY_10bd2810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2810(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bd2830; body size 15 bytes.
#line 1 "ENTRY_10bd2830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2830(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bd2850; body size 15 bytes.
#line 1 "ENTRY_10bd2850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2850(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bd2870; body size 15 bytes.
#line 1 "ENTRY_10bd2870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2870(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bd2890; body size 15 bytes.
#line 1 "ENTRY_10bd2890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2890(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bd28b0; body size 15 bytes.
#line 1 "ENTRY_10bd28b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd28b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bd28d0; body size 15 bytes.
#line 1 "ENTRY_10bd28d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd28d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bd28f0; body size 15 bytes.
#line 1 "ENTRY_10bd28f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd28f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bd2910; body size 15 bytes.
#line 1 "ENTRY_10bd2910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2910(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bd2930; body size 15 bytes.
#line 1 "ENTRY_10bd2930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2930(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bd2950; body size 15 bytes.
#line 1 "ENTRY_10bd2950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2950(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bd2970; body size 15 bytes.
#line 1 "ENTRY_10bd2970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2970(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bd2990; body size 15 bytes.
#line 1 "ENTRY_10bd2990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2990(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bd29b0; body size 15 bytes.
#line 1 "ENTRY_10bd29b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd29b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bd29d0; body size 15 bytes.
#line 1 "ENTRY_10bd29d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd29d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bd29f0; body size 15 bytes.
#line 1 "ENTRY_10bd29f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd29f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bd2a10; body size 15 bytes.
#line 1 "ENTRY_10bd2a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2a10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bd2a30; body size 15 bytes.
#line 1 "ENTRY_10bd2a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2a30(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bd2a50; body size 15 bytes.
#line 1 "ENTRY_10bd2a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2a50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bd2a70; body size 15 bytes.
#line 1 "ENTRY_10bd2a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2a70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bd2a90; body size 36 bytes.
#line 1 "ENTRY_10bd2a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  FUN_10bd2a90(undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  if ((int *)(param_2) != (int *)(param_3)) {
    do {
      if (*param_2 == (int)(*(param_4))) break;
      param_2 = (int *)(param_2 + 1);
    } while ((int *)(param_2) != (int *)(param_3));
  }
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd2ac0; body size 36 bytes.
#line 1 "ENTRY_10bd2ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  FUN_10bd2ac0(undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  if ((int *)(param_2) != (int *)(param_3)) {
    do {
      if (*param_2 == (int)(*(param_4))) break;
      param_2 = (int *)(param_2 + 1);
    } while ((int *)(param_2) != (int *)(param_3));
  }
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd2af0; body size 5 bytes.
#line 1 "ENTRY_10bd2af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2af0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2b00; body size 5 bytes.
#line 1 "ENTRY_10bd2b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2b00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2b10; body size 5 bytes.
#line 1 "ENTRY_10bd2b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2b10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2b20; body size 5 bytes.
#line 1 "ENTRY_10bd2b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2b20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2b30; body size 5 bytes.
#line 1 "ENTRY_10bd2b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2b30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2b40; body size 5 bytes.
#line 1 "ENTRY_10bd2b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2b40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2b50; body size 5 bytes.
#line 1 "ENTRY_10bd2b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2b50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2b60; body size 5 bytes.
#line 1 "ENTRY_10bd2b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2b60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2b70; body size 5 bytes.
#line 1 "ENTRY_10bd2b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2b70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2b80; body size 5 bytes.
#line 1 "ENTRY_10bd2b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2b80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2b90; body size 5 bytes.
#line 1 "ENTRY_10bd2b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2b90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2ba0; body size 5 bytes.
#line 1 "ENTRY_10bd2ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2ba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2bb0; body size 5 bytes.
#line 1 "ENTRY_10bd2bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2bb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2bc0; body size 5 bytes.
#line 1 "ENTRY_10bd2bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2bc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2bd0; body size 5 bytes.
#line 1 "ENTRY_10bd2bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2bd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2be0; body size 5 bytes.
#line 1 "ENTRY_10bd2be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2be0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2bf0; body size 5 bytes.
#line 1 "ENTRY_10bd2bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2bf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2c00; body size 5 bytes.
#line 1 "ENTRY_10bd2c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2c00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2c10; body size 5 bytes.
#line 1 "ENTRY_10bd2c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2c10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2c20; body size 5 bytes.
#line 1 "ENTRY_10bd2c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2c20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2c30; body size 5 bytes.
#line 1 "ENTRY_10bd2c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2c30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2c40; body size 5 bytes.
#line 1 "ENTRY_10bd2c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2c40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2c50; body size 5 bytes.
#line 1 "ENTRY_10bd2c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2c50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2c60; body size 5 bytes.
#line 1 "ENTRY_10bd2c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2c60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2c70; body size 5 bytes.
#line 1 "ENTRY_10bd2c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2c70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2c80; body size 5 bytes.
#line 1 "ENTRY_10bd2c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2c80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2c90; body size 5 bytes.
#line 1 "ENTRY_10bd2c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2c90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2ca0; body size 5 bytes.
#line 1 "ENTRY_10bd2ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2ca0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2cb0; body size 5 bytes.
#line 1 "ENTRY_10bd2cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2cb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2cc0; body size 5 bytes.
#line 1 "ENTRY_10bd2cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2cc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2cd0; body size 5 bytes.
#line 1 "ENTRY_10bd2cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2cd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2ce0; body size 5 bytes.
#line 1 "ENTRY_10bd2ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2ce0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2cf0; body size 5 bytes.
#line 1 "ENTRY_10bd2cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2cf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2d00; body size 5 bytes.
#line 1 "ENTRY_10bd2d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2d00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2d10; body size 5 bytes.
#line 1 "ENTRY_10bd2d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2d10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2d20; body size 5 bytes.
#line 1 "ENTRY_10bd2d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2d20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2d30; body size 5 bytes.
#line 1 "ENTRY_10bd2d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2d30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2d40; body size 5 bytes.
#line 1 "ENTRY_10bd2d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2d40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2d50; body size 5 bytes.
#line 1 "ENTRY_10bd2d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2d50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2d60; body size 5 bytes.
#line 1 "ENTRY_10bd2d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2d60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2d70; body size 5 bytes.
#line 1 "ENTRY_10bd2d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2d70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2d80; body size 5 bytes.
#line 1 "ENTRY_10bd2d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2d80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2d90; body size 5 bytes.
#line 1 "ENTRY_10bd2d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2d90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2da0; body size 5 bytes.
#line 1 "ENTRY_10bd2da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2da0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2db0; body size 5 bytes.
#line 1 "ENTRY_10bd2db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2db0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2dc0; body size 5 bytes.
#line 1 "ENTRY_10bd2dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2dc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2dd0; body size 5 bytes.
#line 1 "ENTRY_10bd2dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2dd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2de0; body size 5 bytes.
#line 1 "ENTRY_10bd2de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2de0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2df0; body size 5 bytes.
#line 1 "ENTRY_10bd2df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2df0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2e00; body size 5 bytes.
#line 1 "ENTRY_10bd2e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2e00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2e10; body size 5 bytes.
#line 1 "ENTRY_10bd2e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2e10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2e20; body size 11 bytes.
#line 1 "ENTRY_10bd2e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd2e20(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10bd2e30; body size 11 bytes.
#line 1 "ENTRY_10bd2e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd2e30(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10bd2e40; body size 6 bytes.
#line 1 "ENTRY_10bd2e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bd2e40(void)

{
  return (char *)("SCIVoiceServiceDelegate");
}


// Reference entry 10bd2f80; body size 49 bytes.
#line 1 "ENTRY_10bd2f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bd2f80(int *param_2,int param_3,undefined4 param_4,undefined4 param_5)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10bd01a0<>(param_3,param_4,param_5,param_3);
  *param_2 = (int)(*param_1 + (param_3 - iVar1 >> 2) * 4);
  return;
}


// Reference entry 10bd2fc0; body size 5 bytes.
#line 1 "ENTRY_10bd2fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2fc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2fd0; body size 5 bytes.
#line 1 "ENTRY_10bd2fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2fd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2fe0; body size 5 bytes.
#line 1 "ENTRY_10bd2fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2fe0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd2ff0; body size 5 bytes.
#line 1 "ENTRY_10bd2ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd2ff0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd3000; body size 5 bytes.
#line 1 "ENTRY_10bd3000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd3000(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd3010; body size 5 bytes.
#line 1 "ENTRY_10bd3010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd3010(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd3020; body size 5 bytes.
#line 1 "ENTRY_10bd3020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd3020(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd3030; body size 5 bytes.
#line 1 "ENTRY_10bd3030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd3030(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd3040; body size 5 bytes.
#line 1 "ENTRY_10bd3040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd3040(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd3050; body size 5 bytes.
#line 1 "ENTRY_10bd3050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd3050(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd3060; body size 5 bytes.
#line 1 "ENTRY_10bd3060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd3060(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd3070; body size 227 bytes.
#line 1 "ENTRY_10bd3070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * FUN_10bd3070(undefined4 *param_1,int *param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  if (-1 < param_3) {
    if (0 < param_3) {
      do {
        piVar3 = (int *)((int *)param_2[2]);
        if (*(char *)((int)piVar3 + 0xd) == '\0') {
          cVar1 = (char)(*(char *)(*piVar3 + 0xd));
          param_2 = (int *)(piVar3);
          piVar3 = (int *)((int *)*piVar3);
          while (cVar1 == '\0') {
            cVar1 = (char)(*(char *)(*piVar3 + 0xd));
            param_2 = (int *)(piVar3);
            piVar3 = (int *)((int *)*piVar3);
          }
        }
        else {
          cVar1 = (char)(*(char *)(param_2[1] + 0xd));
          piVar2 = (int *)((int *)param_2[1]);
          piVar3 = (int *)(param_2);
          while ((param_2 = (int *)(piVar2), cVar1 == '\0' && ((int *)(piVar3) == (int *)param_2[2]))) {
            cVar1 = (char)(*(char *)(param_2[1] + 0xd));
            piVar2 = (int *)((int *)param_2[1]);
            piVar3 = (int *)(param_2);
          }
        }
        param_3 = (int)(param_3 + -1);
      } while (0 < param_3);
      *param_1 = (undefined4)(param_2);
      return (undefined4 *)(param_1);
    }
    *param_1 = (undefined4)(param_2);
    return (undefined4 *)(param_1);
  }
  param_3 = (int)(-param_3);
  do {
    if (*(char *)((int)param_2 + 0xd) == '\0') {
      piVar3 = (int *)((int *)*param_2);
      if (*(char *)((int)piVar3 + 0xd) == '\0') {
        cVar1 = (char)(*(char *)(piVar3[2] + 0xd));
        piVar2 = (int *)((int *)piVar3[2]);
        while (cVar1 == '\0') {
          cVar1 = (char)(*(char *)(piVar2[2] + 0xd));
          piVar3 = (int *)(piVar2);
          piVar2 = (int *)((int *)piVar2[2]);
        }
        goto LAB_10bd30db;
      }
      cVar1 = (char)(*(char *)(param_2[1] + 0xd));
      piVar2 = (int *)((int *)param_2[1]);
      while ((piVar3 = (int *)(piVar2), cVar1 == '\0' && ((int *)(param_2) == (int *)((int *)*piVar3)))) {
        cVar1 = (char)(*(char *)(piVar3[1] + 0xd));
        piVar2 = (int *)((int *)piVar3[1]);
        param_2 = (int *)(piVar3);
      }
      if (*(char *)((int)param_2 + 0xd) == '\0') goto LAB_10bd30db;
    }
    else {
      piVar3 = (int *)((int *)param_2[2]);
LAB_10bd30db:
      param_2 = (int *)(piVar3);
    }
    param_3 = (int)(param_3 + -1);
    if (param_3 == 0) {
      *param_1 = (undefined4)(param_2);
      return (undefined4 *)(param_1);
    }
  } while( true );
}


// Reference entry 10bd3190; body size 19 bytes.
#line 1 "ENTRY_10bd3190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd3190(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10bd31f0; body size 32 bytes.
#line 1 "ENTRY_10bd31f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd31f0(undefined4 *param_2)
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


// Reference entry 10bd3260; body size 16 bytes.
#line 1 "ENTRY_10bd3260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd3260(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd32a0; body size 18 bytes.
#line 1 "ENTRY_10bd32a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd32a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd32c0; body size 18 bytes.
#line 1 "ENTRY_10bd32c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd32c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd32e0; body size 18 bytes.
#line 1 "ENTRY_10bd32e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd32e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3300; body size 18 bytes.
#line 1 "ENTRY_10bd3300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3300(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3320; body size 18 bytes.
#line 1 "ENTRY_10bd3320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3320(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3340; body size 18 bytes.
#line 1 "ENTRY_10bd3340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3340(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3360; body size 18 bytes.
#line 1 "ENTRY_10bd3360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3360(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3380; body size 18 bytes.
#line 1 "ENTRY_10bd3380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3380(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd33a0; body size 18 bytes.
#line 1 "ENTRY_10bd33a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd33a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3660; body size 11 bytes.
#line 1 "ENTRY_10bd3660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3660(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3670; body size 11 bytes.
#line 1 "ENTRY_10bd3670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3670(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3680; body size 11 bytes.
#line 1 "ENTRY_10bd3680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3680(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3690; body size 11 bytes.
#line 1 "ENTRY_10bd3690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3690(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd36a0; body size 11 bytes.
#line 1 "ENTRY_10bd36a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd36a0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd36b0; body size 11 bytes.
#line 1 "ENTRY_10bd36b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd36b0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd36c0; body size 11 bytes.
#line 1 "ENTRY_10bd36c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd36c0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd36d0; body size 11 bytes.
#line 1 "ENTRY_10bd36d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd36d0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd36e0; body size 11 bytes.
#line 1 "ENTRY_10bd36e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd36e0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd36f0; body size 11 bytes.
#line 1 "ENTRY_10bd36f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd36f0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3700; body size 11 bytes.
#line 1 "ENTRY_10bd3700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3700(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3710; body size 11 bytes.
#line 1 "ENTRY_10bd3710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3710(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3720; body size 11 bytes.
#line 1 "ENTRY_10bd3720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3720(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3730; body size 11 bytes.
#line 1 "ENTRY_10bd3730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3730(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3740; body size 11 bytes.
#line 1 "ENTRY_10bd3740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3740(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3bd0; body size 11 bytes.
#line 1 "ENTRY_10bd3bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3bd0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3be0; body size 11 bytes.
#line 1 "ENTRY_10bd3be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3be0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3bf0; body size 11 bytes.
#line 1 "ENTRY_10bd3bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3bf0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3c00; body size 11 bytes.
#line 1 "ENTRY_10bd3c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3c00(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3c10; body size 11 bytes.
#line 1 "ENTRY_10bd3c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3c10(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3c20; body size 11 bytes.
#line 1 "ENTRY_10bd3c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3c20(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3c30; body size 11 bytes.
#line 1 "ENTRY_10bd3c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3c30(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3c40; body size 11 bytes.
#line 1 "ENTRY_10bd3c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3c40(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3c50; body size 11 bytes.
#line 1 "ENTRY_10bd3c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3c50(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3c60; body size 16 bytes.
#line 1 "ENTRY_10bd3c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd3c60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3c80; body size 16 bytes.
#line 1 "ENTRY_10bd3c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd3c80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3ca0; body size 16 bytes.
#line 1 "ENTRY_10bd3ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd3ca0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3cc0; body size 16 bytes.
#line 1 "ENTRY_10bd3cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd3cc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3ce0; body size 16 bytes.
#line 1 "ENTRY_10bd3ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd3ce0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3d00; body size 16 bytes.
#line 1 "ENTRY_10bd3d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd3d00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3d20; body size 16 bytes.
#line 1 "ENTRY_10bd3d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd3d20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3d40; body size 16 bytes.
#line 1 "ENTRY_10bd3d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd3d40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3d60; body size 16 bytes.
#line 1 "ENTRY_10bd3d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd3d60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3d80; body size 21 bytes.
#line 1 "ENTRY_10bd3d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3d80(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3da0; body size 21 bytes.
#line 1 "ENTRY_10bd3da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3da0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3dc0; body size 21 bytes.
#line 1 "ENTRY_10bd3dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3dc0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3de0; body size 11 bytes.
#line 1 "ENTRY_10bd3de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3de0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3df0; body size 11 bytes.
#line 1 "ENTRY_10bd3df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3df0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3e00; body size 9 bytes.
#line 1 "ENTRY_10bd3e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd3e00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3e10; body size 11 bytes.
#line 1 "ENTRY_10bd3e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3e10(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3e20; body size 9 bytes.
#line 1 "ENTRY_10bd3e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd3e20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3e30; body size 11 bytes.
#line 1 "ENTRY_10bd3e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3e30(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3e40; body size 11 bytes.
#line 1 "ENTRY_10bd3e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3e40(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3e50; body size 11 bytes.
#line 1 "ENTRY_10bd3e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3e50(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3e60; body size 11 bytes.
#line 1 "ENTRY_10bd3e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3e60(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3e70; body size 11 bytes.
#line 1 "ENTRY_10bd3e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3e70(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3e80; body size 9 bytes.
#line 1 "ENTRY_10bd3e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd3e80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3e90; body size 11 bytes.
#line 1 "ENTRY_10bd3e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3e90(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3ea0; body size 9 bytes.
#line 1 "ENTRY_10bd3ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd3ea0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3eb0; body size 11 bytes.
#line 1 "ENTRY_10bd3eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3eb0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3ec0; body size 11 bytes.
#line 1 "ENTRY_10bd3ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3ec0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3ed0; body size 11 bytes.
#line 1 "ENTRY_10bd3ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3ed0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3ee0; body size 25 bytes.
#line 1 "ENTRY_10bd3ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3ee0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3f00; body size 23 bytes.
#line 1 "ENTRY_10bd3f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd3f00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3f20; body size 23 bytes.
#line 1 "ENTRY_10bd3f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd3f20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3f40; body size 25 bytes.
#line 1 "ENTRY_10bd3f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3f40(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3f60; body size 23 bytes.
#line 1 "ENTRY_10bd3f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd3f60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3f80; body size 25 bytes.
#line 1 "ENTRY_10bd3f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd3f80(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3fa0; body size 3 bytes.
#line 1 "ENTRY_10bd3fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd3fa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd3fb0; body size 3 bytes.
#line 1 "ENTRY_10bd3fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd3fb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd3fc0; body size 3 bytes.
#line 1 "ENTRY_10bd3fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd3fc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd3fd0; body size 3 bytes.
#line 1 "ENTRY_10bd3fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd3fd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd3fe0; body size 3 bytes.
#line 1 "ENTRY_10bd3fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd3fe0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd3ff0; body size 3 bytes.
#line 1 "ENTRY_10bd3ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd3ff0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd4000; body size 3 bytes.
#line 1 "ENTRY_10bd4000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd4000(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd4010; body size 3 bytes.
#line 1 "ENTRY_10bd4010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd4010(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd4020; body size 3 bytes.
#line 1 "ENTRY_10bd4020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd4020(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd4030; body size 3 bytes.
#line 1 "ENTRY_10bd4030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd4030(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd4040; body size 3 bytes.
#line 1 "ENTRY_10bd4040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd4040(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd4050; body size 3 bytes.
#line 1 "ENTRY_10bd4050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd4050(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd4060; body size 18 bytes.
#line 1 "ENTRY_10bd4060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd4060(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd4080; body size 52 bytes.
#line 1 "ENTRY_10bd4080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd4080(undefined4 *param_1)

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


// Reference entry 10bd40d0; body size 52 bytes.
#line 1 "ENTRY_10bd40d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd40d0(undefined4 *param_1)

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


// Reference entry 10bd4120; body size 52 bytes.
#line 1 "ENTRY_10bd4120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd4120(undefined4 *param_1)

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


// Reference entry 10bd4170; body size 52 bytes.
#line 1 "ENTRY_10bd4170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd4170(undefined4 *param_1)

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


// Reference entry 10bd41c0; body size 76 bytes.
#line 1 "ENTRY_10bd41c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd41c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *pvVar2;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar2 = (void *)(operator_new(0x30), 0);
  *(void**)pvVar2 = (void *)((void *)(pvVar2));
  *(void**)((int)pvVar2 + 4) = (void *)(pvVar2);
  *(void**)((int)pvVar2 + 8) = (void *)(pvVar2);
  *(undefined2*)((int)pvVar2 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar2);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(pvVar2);
  uVar1 = (undefined4)(param_1[1]);
  param_1[1] = (undefined4)(param_2[1]);
  param_2[1] = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd4220; body size 52 bytes.
#line 1 "ENTRY_10bd4220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd4220(undefined4 *param_1)

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


// Reference entry 10bd4270; body size 52 bytes.
#line 1 "ENTRY_10bd4270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd4270(undefined4 *param_1)

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


// Reference entry 10bd42c0; body size 52 bytes.
#line 1 "ENTRY_10bd42c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd42c0(undefined4 *param_1)

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


// Reference entry 10bd4310; body size 52 bytes.
#line 1 "ENTRY_10bd4310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd4310(undefined4 *param_1)

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


// Reference entry 10bd4360; body size 33 bytes.
#line 1 "ENTRY_10bd4360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10bd4360(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (SCStr *)(param_1);
}


// Reference entry 10bd4390; body size 35 bytes.
#line 1 "ENTRY_10bd4390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd4390(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->m_op_ctor((SCStr *)(param_2 + 1));
  return (undefined4 *)(param_1);
}


// Reference entry 10bd43c0; body size 52 bytes.
#line 1 "ENTRY_10bd43c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd43c0(undefined4 *param_1)

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


// Reference entry 10bd4410; body size 13 bytes.
#line 1 "ENTRY_10bd4410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd4410(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd4420; body size 13 bytes.
#line 1 "ENTRY_10bd4420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd4420(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd44d0; body size 49 bytes.
#line 1 "ENTRY_10bd44d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd44d0(undefined4 *param_2)
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


// Reference entry 10bd4510; body size 23 bytes.
#line 1 "ENTRY_10bd4510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd4510(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd4530; body size 23 bytes.
#line 1 "ENTRY_10bd4530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd4530(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd4550; body size 49 bytes.
#line 1 "ENTRY_10bd4550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd4550(undefined4 *param_2)
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


// Reference entry 10bd4590; body size 23 bytes.
#line 1 "ENTRY_10bd4590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd4590(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd45b0; body size 49 bytes.
#line 1 "ENTRY_10bd45b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd45b0(undefined4 *param_2)
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


// Reference entry 10bd4650; body size 18 bytes.
#line 1 "ENTRY_10bd4650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bd4650(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd4670; body size 16 bytes.
#line 1 "ENTRY_10bd4670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd4670(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd4690; body size 42 bytes.
#line 1 "ENTRY_10bd4690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bd4690(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd6380; body size 16 bytes.
#line 1 "ENTRY_10bd6380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd6380(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  piVar2 = (int *)((int *)*param_1);
  if ((int *)(piVar2) == (int *)(0x0)) {
    return;
  }
  iVar1 = (int)(*piVar2);
  if (iVar1 != 0) {
    uVar4 = (uint)(piVar2[2] - iVar1 & 0xfffffffc);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar4) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar4);
    *piVar2 = (int)(0);
    piVar2[1] = (int)(0);
    piVar2[2] = (int)(0);
  }
  return;
}


// Reference entry 10bd6580; body size 19 bytes.
#line 1 "ENTRY_10bd6580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd6580(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10bd6960; body size 19 bytes.
#line 1 "ENTRY_10bd6960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd6960(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10bd6980; body size 19 bytes.
#line 1 "ENTRY_10bd6980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd6980(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10bd69e0; body size 19 bytes.
#line 1 "ENTRY_10bd69e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd69e0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10bd6a20; body size 19 bytes.
#line 1 "ENTRY_10bd6a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd6a20(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10bd6a40; body size 19 bytes.
#line 1 "ENTRY_10bd6a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd6a40(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10bd6a60; body size 19 bytes.
#line 1 "ENTRY_10bd6a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd6a60(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10bd6a80; body size 19 bytes.
#line 1 "ENTRY_10bd6a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd6a80(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10bd6ae0; body size 3 bytes.
#line 1 "ENTRY_10bd6ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd6ae0(void)

{
  return;
}


// Reference entry 10bd6d20; body size 8 bytes.
#line 1 "ENTRY_10bd6d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd6d20(int param_1)

{
 try {
  uint uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_10bceec0<>((undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x18) + 4));
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 0x18),0x18,uVar1);
  thunk_FUN_10bcf040<>((undefined4 *)(param_1 + 0x10),*(undefined4 *)(*(int *)(param_1 + 0x10) + 4));
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 0x10),0x18);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  *(undefined4*)(param_1 + 8) = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10bd73e0; body size 65 bytes.
#line 1 "ENTRY_10bd73e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bd73e0(int *param_2)
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


// Reference entry 10bd7440; body size 165 bytes.
#line 1 "ENTRY_10bd7440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bd7440(int *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar2 = (int)(*param_1);
    thunk_FUN_10bceec0<>(param_1,*(undefined4 *)(iVar2 + 4));
    *(int*)(iVar2 + 4) = (int)(iVar2);
    *(int*)iVar2 = (int)((int)(iVar2));
    *(int*)(iVar2 + 8) = (int)(iVar2);
    param_1[1] = (int)(0);
    uVar7 = (undefined4)(thunk_FUN_10bcd530<>(*(undefined4 *)(*param_2 + 4),*param_1,param_2), 0);
    *(undefined4*)(*param_1 + 4) = (undefined4)(uVar7);
    piVar3 = (int *)((int *)*param_1);
    param_1[1] = (int)(param_2[1]);
    piVar4 = (int *)((int *)piVar3[1]);
    if (*(char *)((int)piVar4 + 0xd) == '\0') {
      cVar1 = (char)(*(char *)(*piVar4 + 0xd));
      piVar6 = (int *)((int *)*piVar4);
      while (cVar1 == '\0') {
        cVar1 = (char)(*(char *)(*piVar6 + 0xd));
        piVar4 = (int *)(piVar6);
        piVar6 = (int *)((int *)*piVar6);
      }
      *piVar3 = (int)((int)piVar4);
      iVar2 = (int)(*(int *)(*param_1 + 4));
      iVar5 = (int)(*(int *)(iVar2 + 8));
      cVar1 = (char)(*(char *)(iVar5 + 0xd));
      while (cVar1 == '\0') {
        cVar1 = (char)(*(char *)(*(int *)(iVar5 + 8) + 0xd));
        iVar2 = (int)(iVar5);
        iVar5 = (int)(*(int *)(iVar5 + 8));
      }
      *(int*)(*param_1 + 8) = (int)(iVar2);
      return (int *)(param_1);
    }
    *piVar3 = (int)((int)piVar3);
    *(int*)(*param_1 + 8) = (int)(*param_1);
  }
  return (int *)(param_1);
}


// Reference entry 10bd7510; body size 165 bytes.
#line 1 "ENTRY_10bd7510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bd7510(int *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar2 = (int)(*param_1);
    thunk_FUN_10bcf040<>(param_1,*(undefined4 *)(iVar2 + 4));
    *(int*)(iVar2 + 4) = (int)(iVar2);
    *(int*)iVar2 = (int)((int)(iVar2));
    *(int*)(iVar2 + 8) = (int)(iVar2);
    param_1[1] = (int)(0);
    uVar7 = (undefined4)(thunk_FUN_10bcd670<>(*(undefined4 *)(*param_2 + 4),*param_1,param_2), 0);
    *(undefined4*)(*param_1 + 4) = (undefined4)(uVar7);
    piVar3 = (int *)((int *)*param_1);
    param_1[1] = (int)(param_2[1]);
    piVar4 = (int *)((int *)piVar3[1]);
    if (*(char *)((int)piVar4 + 0xd) == '\0') {
      cVar1 = (char)(*(char *)(*piVar4 + 0xd));
      piVar6 = (int *)((int *)*piVar4);
      while (cVar1 == '\0') {
        cVar1 = (char)(*(char *)(*piVar6 + 0xd));
        piVar4 = (int *)(piVar6);
        piVar6 = (int *)((int *)*piVar6);
      }
      *piVar3 = (int)((int)piVar4);
      iVar2 = (int)(*(int *)(*param_1 + 4));
      iVar5 = (int)(*(int *)(iVar2 + 8));
      cVar1 = (char)(*(char *)(iVar5 + 0xd));
      while (cVar1 == '\0') {
        cVar1 = (char)(*(char *)(*(int *)(iVar5 + 8) + 0xd));
        iVar2 = (int)(iVar5);
        iVar5 = (int)(*(int *)(iVar5 + 8));
      }
      *(int*)(*param_1 + 8) = (int)(iVar2);
      return (int *)(param_1);
    }
    *piVar3 = (int)((int)piVar3);
    *(int*)(*param_1 + 8) = (int)(*param_1);
  }
  return (int *)(param_1);
}


// Reference entry 10bd75e0; body size 165 bytes.
#line 1 "ENTRY_10bd75e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bd75e0(int *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar2 = (int)(*param_1);
    thunk_FUN_10bceec0<>(param_1,*(undefined4 *)(iVar2 + 4));
    *(int*)(iVar2 + 4) = (int)(iVar2);
    *(int*)iVar2 = (int)((int)(iVar2));
    *(int*)(iVar2 + 8) = (int)(iVar2);
    param_1[1] = (int)(0);
    uVar7 = (undefined4)(thunk_FUN_10bcd530<>(*(undefined4 *)(*param_2 + 4),*param_1,param_2), 0);
    *(undefined4*)(*param_1 + 4) = (undefined4)(uVar7);
    piVar3 = (int *)((int *)*param_1);
    param_1[1] = (int)(param_2[1]);
    piVar4 = (int *)((int *)piVar3[1]);
    if (*(char *)((int)piVar4 + 0xd) == '\0') {
      cVar1 = (char)(*(char *)(*piVar4 + 0xd));
      piVar6 = (int *)((int *)*piVar4);
      while (cVar1 == '\0') {
        cVar1 = (char)(*(char *)(*piVar6 + 0xd));
        piVar4 = (int *)(piVar6);
        piVar6 = (int *)((int *)*piVar6);
      }
      *piVar3 = (int)((int)piVar4);
      iVar2 = (int)(*(int *)(*param_1 + 4));
      iVar5 = (int)(*(int *)(iVar2 + 8));
      cVar1 = (char)(*(char *)(iVar5 + 0xd));
      while (cVar1 == '\0') {
        cVar1 = (char)(*(char *)(*(int *)(iVar5 + 8) + 0xd));
        iVar2 = (int)(iVar5);
        iVar5 = (int)(*(int *)(iVar5 + 8));
      }
      *(int*)(*param_1 + 8) = (int)(iVar2);
      return (int *)(param_1);
    }
    *piVar3 = (int)((int)piVar3);
    *(int*)(*param_1 + 8) = (int)(*param_1);
  }
  return (int *)(param_1);
}


// Reference entry 10bd76b0; body size 165 bytes.
#line 1 "ENTRY_10bd76b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bd76b0(int *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar2 = (int)(*param_1);
    thunk_FUN_10bcf040<>(param_1,*(undefined4 *)(iVar2 + 4));
    *(int*)(iVar2 + 4) = (int)(iVar2);
    *(int*)iVar2 = (int)((int)(iVar2));
    *(int*)(iVar2 + 8) = (int)(iVar2);
    param_1[1] = (int)(0);
    uVar7 = (undefined4)(thunk_FUN_10bcd670<>(*(undefined4 *)(*param_2 + 4),*param_1,param_2), 0);
    *(undefined4*)(*param_1 + 4) = (undefined4)(uVar7);
    piVar3 = (int *)((int *)*param_1);
    param_1[1] = (int)(param_2[1]);
    piVar4 = (int *)((int *)piVar3[1]);
    if (*(char *)((int)piVar4 + 0xd) == '\0') {
      cVar1 = (char)(*(char *)(*piVar4 + 0xd));
      piVar6 = (int *)((int *)*piVar4);
      while (cVar1 == '\0') {
        cVar1 = (char)(*(char *)(*piVar6 + 0xd));
        piVar4 = (int *)(piVar6);
        piVar6 = (int *)((int *)*piVar6);
      }
      *piVar3 = (int)((int)piVar4);
      iVar2 = (int)(*(int *)(*param_1 + 4));
      iVar5 = (int)(*(int *)(iVar2 + 8));
      cVar1 = (char)(*(char *)(iVar5 + 0xd));
      while (cVar1 == '\0') {
        cVar1 = (char)(*(char *)(*(int *)(iVar5 + 8) + 0xd));
        iVar2 = (int)(iVar5);
        iVar5 = (int)(*(int *)(iVar5 + 8));
      }
      *(int*)(*param_1 + 8) = (int)(iVar2);
      return (int *)(param_1);
    }
    *piVar3 = (int)((int)piVar3);
    *(int*)(*param_1 + 8) = (int)(*param_1);
  }
  return (int *)(param_1);
}


// Reference entry 10bd7780; body size 80 bytes.
#line 1 "ENTRY_10bd7780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::m_FUN_10bd7780(undefined1 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)((SCStr *)(param_1 + 4));
  *param_1 = (undefined1)(*param_2);
  if ((SCStr *)((param_2 + 4)) != (SCStr *)(pSVar1)) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)(param_2 + 4)));
    ((SCStr *)(pSVar1))->int_addref();
  }
  pSVar1 = (SCStr *)((SCStr *)(param_1 + 8));
  if ((SCStr *)((param_2 + 8)) != (SCStr *)(pSVar1)) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)(param_2 + 8)));
    ((SCStr *)(pSVar1))->int_addref();
  }
  return (undefined1 *)(param_1);
}


// Reference entry 10bd79d0; body size 14 bytes.
#line 1 "ENTRY_10bd79d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd79d0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10bd79f0; body size 14 bytes.
#line 1 "ENTRY_10bd79f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd79f0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10bd7a10; body size 14 bytes.
#line 1 "ENTRY_10bd7a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7a10(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10bd7a30; body size 14 bytes.
#line 1 "ENTRY_10bd7a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7a30(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10bd7a50; body size 14 bytes.
#line 1 "ENTRY_10bd7a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7a50(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10bd7a70; body size 14 bytes.
#line 1 "ENTRY_10bd7a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7a70(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10bd7a90; body size 14 bytes.
#line 1 "ENTRY_10bd7a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7a90(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10bd7ab0; body size 14 bytes.
#line 1 "ENTRY_10bd7ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7ab0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10bd7ad0; body size 14 bytes.
#line 1 "ENTRY_10bd7ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7ad0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10bd7af0; body size 14 bytes.
#line 1 "ENTRY_10bd7af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7af0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10bd7b10; body size 14 bytes.
#line 1 "ENTRY_10bd7b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7b10(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10bd7b30; body size 14 bytes.
#line 1 "ENTRY_10bd7b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7b30(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10bd7b50; body size 14 bytes.
#line 1 "ENTRY_10bd7b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7b50(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10bd7b70; body size 14 bytes.
#line 1 "ENTRY_10bd7b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7b70(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10bd7b90; body size 14 bytes.
#line 1 "ENTRY_10bd7b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7b90(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10bd7bb0; body size 14 bytes.
#line 1 "ENTRY_10bd7bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7bb0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10bd7bd0; body size 14 bytes.
#line 1 "ENTRY_10bd7bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7bd0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10bd7bf0; body size 14 bytes.
#line 1 "ENTRY_10bd7bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7bf0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10bd7c10; body size 14 bytes.
#line 1 "ENTRY_10bd7c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7c10(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10bd7c30; body size 14 bytes.
#line 1 "ENTRY_10bd7c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7c30(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10bd7c50; body size 14 bytes.
#line 1 "ENTRY_10bd7c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7c50(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10bd7c70; body size 14 bytes.
#line 1 "ENTRY_10bd7c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7c70(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10bd7c90; body size 14 bytes.
#line 1 "ENTRY_10bd7c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7c90(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10bd7cb0; body size 14 bytes.
#line 1 "ENTRY_10bd7cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7cb0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10bd7cd0; body size 14 bytes.
#line 1 "ENTRY_10bd7cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7cd0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10bd7cf0; body size 14 bytes.
#line 1 "ENTRY_10bd7cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7cf0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10bd7d10; body size 14 bytes.
#line 1 "ENTRY_10bd7d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7d10(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10bd7d30; body size 14 bytes.
#line 1 "ENTRY_10bd7d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7d30(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10bd7d50; body size 14 bytes.
#line 1 "ENTRY_10bd7d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7d50(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10bd7d70; body size 14 bytes.
#line 1 "ENTRY_10bd7d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7d70(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10bd7d90; body size 14 bytes.
#line 1 "ENTRY_10bd7d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7d90(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10bd7db0; body size 14 bytes.
#line 1 "ENTRY_10bd7db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bd7db0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10bd86e0; body size 3 bytes.
#line 1 "ENTRY_10bd86e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd86e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd86f0; body size 7 bytes.
#line 1 "ENTRY_10bd86f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bd86f0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10bd8700; body size 7 bytes.
#line 1 "ENTRY_10bd8700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bd8700(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10bd8710; body size 3 bytes.
#line 1 "ENTRY_10bd8710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd8710(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd8720; body size 3 bytes.
#line 1 "ENTRY_10bd8720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd8720(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd8730; body size 3 bytes.
#line 1 "ENTRY_10bd8730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd8730(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd8740; body size 6 bytes.
#line 1 "ENTRY_10bd8740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd8740(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd8750; body size 6 bytes.
#line 1 "ENTRY_10bd8750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd8750(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd8760; body size 6 bytes.
#line 1 "ENTRY_10bd8760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd8760(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd8770; body size 6 bytes.
#line 1 "ENTRY_10bd8770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd8770(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd8780; body size 6 bytes.
#line 1 "ENTRY_10bd8780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd8780(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd8790; body size 6 bytes.
#line 1 "ENTRY_10bd8790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd8790(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd87a0; body size 6 bytes.
#line 1 "ENTRY_10bd87a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd87a0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd87b0; body size 6 bytes.
#line 1 "ENTRY_10bd87b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd87b0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd87c0; body size 6 bytes.
#line 1 "ENTRY_10bd87c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd87c0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd87d0; body size 6 bytes.
#line 1 "ENTRY_10bd87d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd87d0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd87e0; body size 6 bytes.
#line 1 "ENTRY_10bd87e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd87e0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd87f0; body size 6 bytes.
#line 1 "ENTRY_10bd87f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd87f0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd8800; body size 6 bytes.
#line 1 "ENTRY_10bd8800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd8800(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd8810; body size 3 bytes.
#line 1 "ENTRY_10bd8810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd8810(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd8820; body size 3 bytes.
#line 1 "ENTRY_10bd8820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd8820(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd8830; body size 6 bytes.
#line 1 "ENTRY_10bd8830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd8830(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd8840; body size 6 bytes.
#line 1 "ENTRY_10bd8840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd8840(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd8850; body size 6 bytes.
#line 1 "ENTRY_10bd8850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd8850(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd8860; body size 6 bytes.
#line 1 "ENTRY_10bd8860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd8860(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd8870; body size 6 bytes.
#line 1 "ENTRY_10bd8870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd8870(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd8880; body size 6 bytes.
#line 1 "ENTRY_10bd8880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd8880(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd8890; body size 6 bytes.
#line 1 "ENTRY_10bd8890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd8890(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd88a0; body size 6 bytes.
#line 1 "ENTRY_10bd88a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd88a0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd88b0; body size 6 bytes.
#line 1 "ENTRY_10bd88b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd88b0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd88c0; body size 6 bytes.
#line 1 "ENTRY_10bd88c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd88c0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd88d0; body size 6 bytes.
#line 1 "ENTRY_10bd88d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd88d0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd88e0; body size 6 bytes.
#line 1 "ENTRY_10bd88e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd88e0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd88f0; body size 6 bytes.
#line 1 "ENTRY_10bd88f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd88f0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd8900; body size 6 bytes.
#line 1 "ENTRY_10bd8900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bd8900(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10bd8910; body size 3 bytes.
#line 1 "ENTRY_10bd8910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd8910(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd8920; body size 3 bytes.
#line 1 "ENTRY_10bd8920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd8920(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd8930; body size 3 bytes.
#line 1 "ENTRY_10bd8930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd8930(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd8940; body size 3 bytes.
#line 1 "ENTRY_10bd8940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd8940(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd8950; body size 3 bytes.
#line 1 "ENTRY_10bd8950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd8950(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd8960; body size 3 bytes.
#line 1 "ENTRY_10bd8960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd8960(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd8970; body size 3 bytes.
#line 1 "ENTRY_10bd8970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd8970(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd8980; body size 3 bytes.
#line 1 "ENTRY_10bd8980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd8980(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd8990; body size 3 bytes.
#line 1 "ENTRY_10bd8990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd8990(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd89a0; body size 3 bytes.
#line 1 "ENTRY_10bd89a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd89a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd8cc0; body size 6 bytes.
#line 1 "ENTRY_10bd8cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10bd8cc0(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 10bd8cd0; body size 6 bytes.
#line 1 "ENTRY_10bd8cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10bd8cd0(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 10bd8ce0; body size 6 bytes.
#line 1 "ENTRY_10bd8ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10bd8ce0(int *param_1)

{
  *param_1 = (int)(*param_1 + 0xc);
  return (int *)(param_1);
}


// Reference entry 10bd8cf0; body size 6 bytes.
#line 1 "ENTRY_10bd8cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10bd8cf0(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 10bd8d00; body size 6 bytes.
#line 1 "ENTRY_10bd8d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10bd8d00(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 10bd8d10; body size 6 bytes.
#line 1 "ENTRY_10bd8d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10bd8d10(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 10bd8d20; body size 16 bytes.
#line 1 "ENTRY_10bd8d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bd8d20(int *param_2, unsigned int recovered_unused_stack_0)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 4);
  return;
}


// Reference entry 10bd8d40; body size 6 bytes.
#line 1 "ENTRY_10bd8d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10bd8d40(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 10bd8d50; body size 16 bytes.
#line 1 "ENTRY_10bd8d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bd8d50(int *param_2, unsigned int recovered_unused_stack_0)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 0xc);
  return;
}


// Reference entry 10bd8d70; body size 6 bytes.
#line 1 "ENTRY_10bd8d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10bd8d70(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 10bd8d80; body size 16 bytes.
#line 1 "ENTRY_10bd8d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bd8d80(int *param_2, unsigned int recovered_unused_stack_0)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 4);
  return;
}


// Reference entry 10bd8e40; body size 18 bytes.
#line 1 "ENTRY_10bd8e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10bd8e40(int *param_1,int *param_2)

{
  return (bool)(*param_1 < (int)(*(param_2)));
}


// Reference entry 10bd92f0; body size 31 bytes.
#line 1 "ENTRY_10bd92f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd92f0(undefined4 *param_1)

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


// Reference entry 10bd9320; body size 31 bytes.
#line 1 "ENTRY_10bd9320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd9320(undefined4 *param_1)

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


// Reference entry 10bd9350; body size 31 bytes.
#line 1 "ENTRY_10bd9350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd9350(undefined4 *param_1)

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


// Reference entry 10bd9380; body size 31 bytes.
#line 1 "ENTRY_10bd9380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd9380(undefined4 *param_1)

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


// Reference entry 10bd93b0; body size 31 bytes.
#line 1 "ENTRY_10bd93b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd93b0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x30), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10bd93e0; body size 31 bytes.
#line 1 "ENTRY_10bd93e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd93e0(undefined4 *param_1)

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


// Reference entry 10bd9410; body size 31 bytes.
#line 1 "ENTRY_10bd9410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd9410(undefined4 *param_1)

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


// Reference entry 10bd9440; body size 31 bytes.
#line 1 "ENTRY_10bd9440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd9440(undefined4 *param_1)

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


// Reference entry 10bd9470; body size 31 bytes.
#line 1 "ENTRY_10bd9470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd9470(undefined4 *param_1)

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


// Reference entry 10bd95c0; body size 43 bytes.
#line 1 "ENTRY_10bd95c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bd95c0(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  if (param_2 < 0x40000000) {
    iVar1 = (int)(thunk_FUN_101a9c10(param_2), 0);
    *param_1 = (int)(iVar1);
    param_1[1] = (int)(iVar1);
    param_1[2] = (int)(iVar1 + param_2 * 4);
    return;
  }
                    
  thunk_FUN_101a9bd0();
}


// Reference entry 10bd9630; body size 49 bytes.
#line 1 "ENTRY_10bd9630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10bd9630(uint param_2)
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


// Reference entry 10bd9670; body size 49 bytes.
#line 1 "ENTRY_10bd9670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10bd9670(uint param_2)
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


// Reference entry 10bd96b0; body size 62 bytes.
#line 1 "ENTRY_10bd96b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10bd96b0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0xc);
  if (0x15555555 - (uVar1 >> 1) < uVar1) {
    return (uint)(0x15555555);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 10bd9700; body size 65 bytes.
#line 1 "ENTRY_10bd9700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10bd9700(uint param_2)
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


// Reference entry 10bd9760; body size 49 bytes.
#line 1 "ENTRY_10bd9760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10bd9760(uint param_2)
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


// Reference entry 10bd9a80; body size 14 bytes.
#line 1 "ENTRY_10bd9a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd9a80(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10bd9aa0; body size 14 bytes.
#line 1 "ENTRY_10bd9aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd9aa0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10bd9ac0; body size 14 bytes.
#line 1 "ENTRY_10bd9ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd9ac0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10bd9ae0; body size 14 bytes.
#line 1 "ENTRY_10bd9ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd9ae0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10bd9b00; body size 14 bytes.
#line 1 "ENTRY_10bd9b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd9b00(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x5555555) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10bd9b20; body size 14 bytes.
#line 1 "ENTRY_10bd9b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd9b20(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10bd9b40; body size 14 bytes.
#line 1 "ENTRY_10bd9b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd9b40(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10bd9b60; body size 14 bytes.
#line 1 "ENTRY_10bd9b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd9b60(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10bd9b80; body size 14 bytes.
#line 1 "ENTRY_10bd9b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bd9b80(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xccccccc) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10bd9c60; body size 3 bytes.
#line 1 "ENTRY_10bd9c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bd9c60(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10bd9c70; body size 3 bytes.
#line 1 "ENTRY_10bd9c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bd9c70(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10bd9c80; body size 3 bytes.
#line 1 "ENTRY_10bd9c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bd9c80(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10bd9c90; body size 3 bytes.
#line 1 "ENTRY_10bd9c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bd9c90(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10bd9ca0; body size 3 bytes.
#line 1 "ENTRY_10bd9ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bd9ca0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10bd9cb0; body size 3 bytes.
#line 1 "ENTRY_10bd9cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bd9cb0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10bd9cc0; body size 3 bytes.
#line 1 "ENTRY_10bd9cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bd9cc0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10bd9e50; body size 3 bytes.
#line 1 "ENTRY_10bd9e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bd9e50(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10bd9e60; body size 3 bytes.
#line 1 "ENTRY_10bd9e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bd9e60(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10bd9eb0; body size 5 bytes.
#line 1 "ENTRY_10bd9eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd9eb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd9ec0; body size 3 bytes.
#line 1 "ENTRY_10bd9ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd9ec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd9ed0; body size 3 bytes.
#line 1 "ENTRY_10bd9ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd9ed0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd9ee0; body size 3 bytes.
#line 1 "ENTRY_10bd9ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd9ee0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd9ef0; body size 3 bytes.
#line 1 "ENTRY_10bd9ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd9ef0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd9f00; body size 3 bytes.
#line 1 "ENTRY_10bd9f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd9f00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd9f10; body size 3 bytes.
#line 1 "ENTRY_10bd9f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd9f10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd9f20; body size 3 bytes.
#line 1 "ENTRY_10bd9f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd9f20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd9f30; body size 3 bytes.
#line 1 "ENTRY_10bd9f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd9f30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd9f40; body size 3 bytes.
#line 1 "ENTRY_10bd9f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd9f40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd9f50; body size 3 bytes.
#line 1 "ENTRY_10bd9f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd9f50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd9f60; body size 3 bytes.
#line 1 "ENTRY_10bd9f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd9f60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd9f70; body size 3 bytes.
#line 1 "ENTRY_10bd9f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd9f70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd9f80; body size 3 bytes.
#line 1 "ENTRY_10bd9f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd9f80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd9f90; body size 3 bytes.
#line 1 "ENTRY_10bd9f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd9f90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd9fa0; body size 3 bytes.
#line 1 "ENTRY_10bd9fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd9fa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd9fb0; body size 3 bytes.
#line 1 "ENTRY_10bd9fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd9fb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd9fc0; body size 3 bytes.
#line 1 "ENTRY_10bd9fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd9fc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd9fd0; body size 3 bytes.
#line 1 "ENTRY_10bd9fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd9fd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd9fe0; body size 3 bytes.
#line 1 "ENTRY_10bd9fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd9fe0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd9ff0; body size 3 bytes.
#line 1 "ENTRY_10bd9ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bd9ff0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda000; body size 3 bytes.
#line 1 "ENTRY_10bda000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda000(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda010; body size 3 bytes.
#line 1 "ENTRY_10bda010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda010(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda020; body size 3 bytes.
#line 1 "ENTRY_10bda020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda020(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda030; body size 3 bytes.
#line 1 "ENTRY_10bda030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda030(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda040; body size 3 bytes.
#line 1 "ENTRY_10bda040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda040(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda050; body size 3 bytes.
#line 1 "ENTRY_10bda050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda050(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda060; body size 3 bytes.
#line 1 "ENTRY_10bda060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda060(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda070; body size 3 bytes.
#line 1 "ENTRY_10bda070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda070(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda080; body size 3 bytes.
#line 1 "ENTRY_10bda080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda080(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda090; body size 3 bytes.
#line 1 "ENTRY_10bda090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda090(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda0a0; body size 3 bytes.
#line 1 "ENTRY_10bda0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda0a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda0b0; body size 3 bytes.
#line 1 "ENTRY_10bda0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda0b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda0c0; body size 3 bytes.
#line 1 "ENTRY_10bda0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda0c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda0d0; body size 3 bytes.
#line 1 "ENTRY_10bda0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda0d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda0e0; body size 3 bytes.
#line 1 "ENTRY_10bda0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda0e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda0f0; body size 3 bytes.
#line 1 "ENTRY_10bda0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda0f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda100; body size 3 bytes.
#line 1 "ENTRY_10bda100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda110; body size 3 bytes.
#line 1 "ENTRY_10bda110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda120; body size 3 bytes.
#line 1 "ENTRY_10bda120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda130; body size 3 bytes.
#line 1 "ENTRY_10bda130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda130(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda140; body size 3 bytes.
#line 1 "ENTRY_10bda140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda140(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda150; body size 3 bytes.
#line 1 "ENTRY_10bda150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda150(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda160; body size 3 bytes.
#line 1 "ENTRY_10bda160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda160(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda170; body size 3 bytes.
#line 1 "ENTRY_10bda170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda170(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda180; body size 3 bytes.
#line 1 "ENTRY_10bda180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda190; body size 3 bytes.
#line 1 "ENTRY_10bda190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda1a0; body size 3 bytes.
#line 1 "ENTRY_10bda1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda1a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda1b0; body size 3 bytes.
#line 1 "ENTRY_10bda1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda1b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda1c0; body size 3 bytes.
#line 1 "ENTRY_10bda1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda1c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda1d0; body size 3 bytes.
#line 1 "ENTRY_10bda1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda1d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda1e0; body size 3 bytes.
#line 1 "ENTRY_10bda1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda1e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda1f0; body size 3 bytes.
#line 1 "ENTRY_10bda1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda1f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda200; body size 3 bytes.
#line 1 "ENTRY_10bda200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda200(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda210; body size 3 bytes.
#line 1 "ENTRY_10bda210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda220; body size 3 bytes.
#line 1 "ENTRY_10bda220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda220(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda230; body size 3 bytes.
#line 1 "ENTRY_10bda230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda230(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda240; body size 3 bytes.
#line 1 "ENTRY_10bda240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda260; body size 3 bytes.
#line 1 "ENTRY_10bda260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda270; body size 3 bytes.
#line 1 "ENTRY_10bda270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda280; body size 3 bytes.
#line 1 "ENTRY_10bda280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda280(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda2a0; body size 3 bytes.
#line 1 "ENTRY_10bda2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda2a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda2b0; body size 3 bytes.
#line 1 "ENTRY_10bda2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda2b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda2c0; body size 3 bytes.
#line 1 "ENTRY_10bda2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda2c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda2d0; body size 3 bytes.
#line 1 "ENTRY_10bda2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda2d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda2e0; body size 3 bytes.
#line 1 "ENTRY_10bda2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda2e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda2f0; body size 3 bytes.
#line 1 "ENTRY_10bda2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda2f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda300; body size 3 bytes.
#line 1 "ENTRY_10bda300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda310; body size 3 bytes.
#line 1 "ENTRY_10bda310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda320; body size 3 bytes.
#line 1 "ENTRY_10bda320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda320(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda330; body size 3 bytes.
#line 1 "ENTRY_10bda330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda340; body size 3 bytes.
#line 1 "ENTRY_10bda340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda350; body size 3 bytes.
#line 1 "ENTRY_10bda350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda350(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda360; body size 3 bytes.
#line 1 "ENTRY_10bda360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda370; body size 3 bytes.
#line 1 "ENTRY_10bda370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda380; body size 3 bytes.
#line 1 "ENTRY_10bda380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda390; body size 3 bytes.
#line 1 "ENTRY_10bda390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda3a0; body size 3 bytes.
#line 1 "ENTRY_10bda3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda3a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda3b0; body size 3 bytes.
#line 1 "ENTRY_10bda3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda3b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda3c0; body size 3 bytes.
#line 1 "ENTRY_10bda3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda3c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda3d0; body size 3 bytes.
#line 1 "ENTRY_10bda3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda3d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda3e0; body size 3 bytes.
#line 1 "ENTRY_10bda3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda3e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda3f0; body size 3 bytes.
#line 1 "ENTRY_10bda3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda3f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda400; body size 3 bytes.
#line 1 "ENTRY_10bda400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda400(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda410; body size 3 bytes.
#line 1 "ENTRY_10bda410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda420; body size 3 bytes.
#line 1 "ENTRY_10bda420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda420(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda430; body size 3 bytes.
#line 1 "ENTRY_10bda430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda430(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda440; body size 3 bytes.
#line 1 "ENTRY_10bda440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda440(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda450; body size 3 bytes.
#line 1 "ENTRY_10bda450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda460; body size 3 bytes.
#line 1 "ENTRY_10bda460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda460(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bda470; body size 3 bytes.
#line 1 "ENTRY_10bda470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bda470(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bdbb90; body size 5 bytes.
#line 1 "ENTRY_10bdbb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bdbb90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bdbba0; body size 79 bytes.
#line 1 "ENTRY_10bdbba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bdbba0(int param_2)
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


// Reference entry 10bdbc10; body size 79 bytes.
#line 1 "ENTRY_10bdbc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bdbc10(int param_2)
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


// Reference entry 10bdbc80; body size 79 bytes.
#line 1 "ENTRY_10bdbc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bdbc80(int param_2)
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


// Reference entry 10bdbcf0; body size 79 bytes.
#line 1 "ENTRY_10bdbcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bdbcf0(int param_2)
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


// Reference entry 10bdbd60; body size 79 bytes.
#line 1 "ENTRY_10bdbd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bdbd60(int param_2)
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


// Reference entry 10bdbdd0; body size 79 bytes.
#line 1 "ENTRY_10bdbdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bdbdd0(int param_2)
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


// Reference entry 10bdbe40; body size 79 bytes.
#line 1 "ENTRY_10bdbe40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bdbe40(int param_2)
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


// Reference entry 10bdbeb0; body size 79 bytes.
#line 1 "ENTRY_10bdbeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bdbeb0(int param_2)
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


// Reference entry 10bdbf20; body size 79 bytes.
#line 1 "ENTRY_10bdbf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bdbf20(int param_2)
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


// Reference entry 10bdbf90; body size 18 bytes.
#line 1 "ENTRY_10bdbf90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bdbf90(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 4);
  return;
}


// Reference entry 10bdbfb0; body size 30 bytes.
#line 1 "ENTRY_10bdbfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10bdbfb0(int param_1)

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


// Reference entry 10bdbfe0; body size 30 bytes.
#line 1 "ENTRY_10bdbfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10bdbfe0(int param_1)

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


// Reference entry 10bdc010; body size 30 bytes.
#line 1 "ENTRY_10bdc010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10bdc010(int param_1)

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


// Reference entry 10bdc040; body size 31 bytes.
#line 1 "ENTRY_10bdc040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10bdc040(int *param_1)

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


// Reference entry 10bdc070; body size 31 bytes.
#line 1 "ENTRY_10bdc070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10bdc070(int *param_1)

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


// Reference entry 10bdc0a0; body size 31 bytes.
#line 1 "ENTRY_10bdc0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10bdc0a0(int *param_1)

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


// Reference entry 10bdc0d0; body size 31 bytes.
#line 1 "ENTRY_10bdc0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10bdc0d0(int *param_1)

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


// Reference entry 10bdc100; body size 3 bytes.
#line 1 "ENTRY_10bdc100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bdc100(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10bdc110; body size 3 bytes.
#line 1 "ENTRY_10bdc110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bdc110(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10bdc120; body size 3 bytes.
#line 1 "ENTRY_10bdc120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bdc120(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10bdc130; body size 3 bytes.
#line 1 "ENTRY_10bdc130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bdc130(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10bdc140; body size 3 bytes.
#line 1 "ENTRY_10bdc140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bdc140(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10bdc150; body size 3 bytes.
#line 1 "ENTRY_10bdc150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bdc150(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10bdc160; body size 3 bytes.
#line 1 "ENTRY_10bdc160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bdc160(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10bdc170; body size 11 bytes.
#line 1 "ENTRY_10bdc170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bdc170(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10bdc180; body size 11 bytes.
#line 1 "ENTRY_10bdc180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bdc180(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10bdc190; body size 11 bytes.
#line 1 "ENTRY_10bdc190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bdc190(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10bdc1a0; body size 11 bytes.
#line 1 "ENTRY_10bdc1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bdc1a0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10bdc1b0; body size 11 bytes.
#line 1 "ENTRY_10bdc1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bdc1b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10bdc1c0; body size 11 bytes.
#line 1 "ENTRY_10bdc1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bdc1c0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10bdc1d0; body size 11 bytes.
#line 1 "ENTRY_10bdc1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bdc1d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10bdc1e0; body size 11 bytes.
#line 1 "ENTRY_10bdc1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bdc1e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10bdc1f0; body size 11 bytes.
#line 1 "ENTRY_10bdc1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bdc1f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10bdc200; body size 6 bytes.
#line 1 "ENTRY_10bdc200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bdc200(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10bdc210; body size 6 bytes.
#line 1 "ENTRY_10bdc210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bdc210(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10bdc220; body size 6 bytes.
#line 1 "ENTRY_10bdc220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bdc220(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10bdc230; body size 83 bytes.
#line 1 "ENTRY_10bdc230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bdc230(int *param_2)
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


// Reference entry 10bdc2a0; body size 83 bytes.
#line 1 "ENTRY_10bdc2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bdc2a0(int *param_2)
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


// Reference entry 10bdc310; body size 83 bytes.
#line 1 "ENTRY_10bdc310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bdc310(int *param_2)
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


// Reference entry 10bdc380; body size 83 bytes.
#line 1 "ENTRY_10bdc380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bdc380(int *param_2)
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


// Reference entry 10bdc3f0; body size 83 bytes.
#line 1 "ENTRY_10bdc3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bdc3f0(int *param_2)
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


// Reference entry 10bdc460; body size 83 bytes.
#line 1 "ENTRY_10bdc460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bdc460(int *param_2)
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


// Reference entry 10bdc4d0; body size 83 bytes.
#line 1 "ENTRY_10bdc4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bdc4d0(int *param_2)
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


// Reference entry 10bdc540; body size 83 bytes.
#line 1 "ENTRY_10bdc540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bdc540(int *param_2)
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


// Reference entry 10bdc5b0; body size 83 bytes.
#line 1 "ENTRY_10bdc5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bdc5b0(int *param_2)
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


// Reference entry 10bdc620; body size 9 bytes.
#line 1 "ENTRY_10bdc620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bdc620(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10bdc630; body size 33 bytes.
#line 1 "ENTRY_10bdc630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bdc630(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  uVar1 = (undefined4)(param_1[1]);
  param_1[1] = (undefined4)(param_2[1]);
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 10bdc7f0; body size 38 bytes.
#line 1 "ENTRY_10bdc7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10bdc7f0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10bdc820; body size 38 bytes.
#line 1 "ENTRY_10bdc820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10bdc820(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10bdca70; body size 27 bytes.
#line 1 "ENTRY_10bdca70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bdca70(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10bdcaa0; body size 27 bytes.
#line 1 "ENTRY_10bdcaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bdcaa0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10bdccf0; body size 27 bytes.
#line 1 "ENTRY_10bdccf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bdccf0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10bdcd20; body size 27 bytes.
#line 1 "ENTRY_10bdcd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bdcd20(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10bdcf70; body size 11 bytes.
#line 1 "ENTRY_10bdcf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bdcf70(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10bdcf80; body size 3 bytes.
#line 1 "ENTRY_10bdcf80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bdcf80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bdcf90; body size 3 bytes.
#line 1 "ENTRY_10bdcf90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bdcf90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bddef0; body size 87 bytes.
#line 1 "ENTRY_10bddef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bddef0(uint param_1)

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


// Reference entry 10bddfd0; body size 97 bytes.
#line 1 "ENTRY_10bddfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bddfd0(uint param_1)

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


// Reference entry 10bde050; body size 90 bytes.
#line 1 "ENTRY_10bde050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bde050(uint param_1)

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


// Reference entry 10bde0d0; body size 90 bytes.
#line 1 "ENTRY_10bde0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bde0d0(uint param_1)

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


// Reference entry 10bde150; body size 90 bytes.
#line 1 "ENTRY_10bde150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bde150(uint param_1)

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


// Reference entry 10bde1d0; body size 90 bytes.
#line 1 "ENTRY_10bde1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bde1d0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x5555556) {
    param_1 = (uint)(param_1 * 0x30);
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


// Reference entry 10bde250; body size 97 bytes.
#line 1 "ENTRY_10bde250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bde250(uint param_1)

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


// Reference entry 10bde2d0; body size 97 bytes.
#line 1 "ENTRY_10bde2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bde2d0(uint param_1)

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


// Reference entry 10bde350; body size 97 bytes.
#line 1 "ENTRY_10bde350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bde350(uint param_1)

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


// Reference entry 10bde3d0; body size 90 bytes.
#line 1 "ENTRY_10bde3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bde3d0(uint param_1)

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


// Reference entry 10bde450; body size 90 bytes.
#line 1 "ENTRY_10bde450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bde450(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x15555556) {
    param_1 = (uint)(param_1 * 0xc);
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


// Reference entry 10bde4d0; body size 87 bytes.
#line 1 "ENTRY_10bde4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bde4d0(uint param_1)

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


// Reference entry 10bde540; body size 13 bytes.
#line 1 "ENTRY_10bde540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bde540(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10bde550; body size 13 bytes.
#line 1 "ENTRY_10bde550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bde550(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10bde560; body size 13 bytes.
#line 1 "ENTRY_10bde560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bde560(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10bde570; body size 13 bytes.
#line 1 "ENTRY_10bde570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bde570(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10bde580; body size 3 bytes.
#line 1 "ENTRY_10bde580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bde580(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bde590; body size 11 bytes.
#line 1 "ENTRY_10bde590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bde590(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10bde5a0; body size 11 bytes.
#line 1 "ENTRY_10bde5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bde5a0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10bde5b0; body size 11 bytes.
#line 1 "ENTRY_10bde5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bde5b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10bde5c0; body size 11 bytes.
#line 1 "ENTRY_10bde5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bde5c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10bde5d0; body size 11 bytes.
#line 1 "ENTRY_10bde5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bde5d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10bde5e0; body size 11 bytes.
#line 1 "ENTRY_10bde5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bde5e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10bde5f0; body size 11 bytes.
#line 1 "ENTRY_10bde5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bde5f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10bde600; body size 11 bytes.
#line 1 "ENTRY_10bde600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bde600(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10be04a0; body size 9 bytes.
#line 1 "ENTRY_10be04a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10be04a0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10be04b0; body size 9 bytes.
#line 1 "ENTRY_10be04b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10be04b0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10be04c0; body size 22 bytes.
#line 1 "ENTRY_10be04c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10be04c0(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0xc);
}


// Reference entry 10be04e0; body size 27 bytes.
#line 1 "ENTRY_10be04e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10be04e0(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0x1c);
}


// Reference entry 10be0510; body size 9 bytes.
#line 1 "ENTRY_10be0510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10be0510(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10be11b0; body size 6 bytes.
#line 1 "ENTRY_10be11b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10be11b0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10be11c0; body size 6 bytes.
#line 1 "ENTRY_10be11c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10be11c0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10be1250; body size 6 bytes.
#line 1 "ENTRY_10be1250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10be1250(undefined4 *param_1)

{
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10be1640; body size 63 bytes.
#line 1 "ENTRY_10be1640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10be1640(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10be1690; body size 57 bytes.
#line 1 "ENTRY_10be1690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10be1690(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10be16e0; body size 57 bytes.
#line 1 "ENTRY_10be16e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10be16e0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10be1730; body size 57 bytes.
#line 1 "ENTRY_10be1730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10be1730(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10be1780; body size 57 bytes.
#line 1 "ENTRY_10be1780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10be1780(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x30);
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


// Reference entry 10be17d0; body size 63 bytes.
#line 1 "ENTRY_10be17d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10be17d0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10be1820; body size 63 bytes.
#line 1 "ENTRY_10be1820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10be1820(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10be1870; body size 63 bytes.
#line 1 "ENTRY_10be1870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10be1870(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10be18c0; body size 57 bytes.
#line 1 "ENTRY_10be18c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10be18c0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10be1910; body size 61 bytes.
#line 1 "ENTRY_10be1910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10be1910(int param_1,int param_2)

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


// Reference entry 10be1960; body size 61 bytes.
#line 1 "ENTRY_10be1960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10be1960(int param_1,int param_2)

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


// Reference entry 10be19b0; body size 66 bytes.
#line 1 "ENTRY_10be19b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10be19b0(int param_1,int param_2)

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


// Reference entry 10be1a10; body size 60 bytes.
#line 1 "ENTRY_10be1a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10be1a10(int param_1,int param_2)

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


// Reference entry 10be1a60; body size 60 bytes.
#line 1 "ENTRY_10be1a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10be1a60(int param_1,int param_2)

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


// Reference entry 10be1ab0; body size 60 bytes.
#line 1 "ENTRY_10be1ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10be1ab0(int param_1,int param_2)

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


// Reference entry 10be1b00; body size 60 bytes.
#line 1 "ENTRY_10be1b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10be1b00(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x30);
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


// Reference entry 10be1b50; body size 66 bytes.
#line 1 "ENTRY_10be1b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10be1b50(int param_1,int param_2)

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


// Reference entry 10be1bb0; body size 66 bytes.
#line 1 "ENTRY_10be1bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10be1bb0(int param_1,int param_2)

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


// Reference entry 10be1c10; body size 66 bytes.
#line 1 "ENTRY_10be1c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10be1c10(int param_1,int param_2)

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


// Reference entry 10be1c70; body size 60 bytes.
#line 1 "ENTRY_10be1c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10be1c70(int param_1,int param_2)

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


// Reference entry 10be2070; body size 9 bytes.
#line 1 "ENTRY_10be2070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10be2070(int *param_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*param_1 == (int)((param_1))[1])));
}


// Reference entry 10be2080; body size 9 bytes.
#line 1 "ENTRY_10be2080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10be2080(int *param_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*param_1 == (int)((param_1))[1])));
}


// Reference entry 10be2090; body size 11 bytes.
#line 1 "ENTRY_10be2090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10be2090(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10be20a0; body size 11 bytes.
#line 1 "ENTRY_10be20a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10be20a0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10be20b0; body size 11 bytes.
#line 1 "ENTRY_10be20b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10be20b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10be20c0; body size 11 bytes.
#line 1 "ENTRY_10be20c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10be20c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10be20d0; body size 11 bytes.
#line 1 "ENTRY_10be20d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10be20d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10be20e0; body size 11 bytes.
#line 1 "ENTRY_10be20e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10be20e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10be20f0; body size 11 bytes.
#line 1 "ENTRY_10be20f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10be20f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10be2100; body size 11 bytes.
#line 1 "ENTRY_10be2100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10be2100(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10be2110; body size 11 bytes.
#line 1 "ENTRY_10be2110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10be2110(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10be2120; body size 11 bytes.
#line 1 "ENTRY_10be2120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10be2120(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10be2130; body size 11 bytes.
#line 1 "ENTRY_10be2130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10be2130(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10be2140; body size 11 bytes.
#line 1 "ENTRY_10be2140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10be2140(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10be2150; body size 4 bytes.
#line 1 "ENTRY_10be2150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10be2150(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10be2160; body size 12 bytes.
#line 1 "ENTRY_10be2160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10be2160(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10be2170; body size 12 bytes.
#line 1 "ENTRY_10be2170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10be2170(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10be2180; body size 12 bytes.
#line 1 "ENTRY_10be2180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10be2180(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10be2190; body size 12 bytes.
#line 1 "ENTRY_10be2190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10be2190(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10be21a0; body size 12 bytes.
#line 1 "ENTRY_10be21a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10be21a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10be21b0; body size 12 bytes.
#line 1 "ENTRY_10be21b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10be21b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10be21c0; body size 12 bytes.
#line 1 "ENTRY_10be21c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10be21c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10be21d0; body size 12 bytes.
#line 1 "ENTRY_10be21d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10be21d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10be8300; body size 49 bytes.
#line 1 "ENTRY_10be8300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10be8300(int *param_2,int param_3,undefined4 param_4,undefined4 param_5)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10bd01a0<>(param_3,param_4,param_5,param_3);
  *param_2 = (int)(*param_1 + (param_3 - iVar1 >> 2) * 4);
  return;
}


// Reference entry 10be8340; body size 6 bytes.
#line 1 "ENTRY_10be8340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10be8340(void)

{
  return (char *)("SCIVoiceServiceDelegate");
}


// Reference entry 10be9330; body size 7 bytes.
#line 1 "ENTRY_10be9330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10be9330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10be9a80; body size 6 bytes.
#line 1 "ENTRY_10be9a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9a80(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10be9a90; body size 6 bytes.
#line 1 "ENTRY_10be9a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9a90(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10be9aa0; body size 6 bytes.
#line 1 "ENTRY_10be9aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9aa0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10be9ab0; body size 6 bytes.
#line 1 "ENTRY_10be9ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9ab0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10be9ac0; body size 6 bytes.
#line 1 "ENTRY_10be9ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9ac0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10be9ad0; body size 6 bytes.
#line 1 "ENTRY_10be9ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9ad0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10be9ae0; body size 6 bytes.
#line 1 "ENTRY_10be9ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9ae0(void)

{
  return (undefined4)(0x5555555);
}


// Reference entry 10be9af0; body size 6 bytes.
#line 1 "ENTRY_10be9af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9af0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10be9b00; body size 6 bytes.
#line 1 "ENTRY_10be9b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9b00(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10be9b10; body size 6 bytes.
#line 1 "ENTRY_10be9b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9b10(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10be9b20; body size 6 bytes.
#line 1 "ENTRY_10be9b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9b20(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10be9b30; body size 6 bytes.
#line 1 "ENTRY_10be9b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9b30(void)

{
  return (undefined4)(0x15555555);
}


// Reference entry 10be9b40; body size 6 bytes.
#line 1 "ENTRY_10be9b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9b40(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10be9b50; body size 6 bytes.
#line 1 "ENTRY_10be9b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9b50(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10be9b60; body size 6 bytes.
#line 1 "ENTRY_10be9b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9b60(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10be9b70; body size 6 bytes.
#line 1 "ENTRY_10be9b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9b70(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10be9b80; body size 6 bytes.
#line 1 "ENTRY_10be9b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9b80(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10be9b90; body size 6 bytes.
#line 1 "ENTRY_10be9b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9b90(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10be9ba0; body size 6 bytes.
#line 1 "ENTRY_10be9ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9ba0(void)

{
  return (undefined4)(0x5555555);
}


// Reference entry 10be9bb0; body size 6 bytes.
#line 1 "ENTRY_10be9bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9bb0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10be9bc0; body size 6 bytes.
#line 1 "ENTRY_10be9bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9bc0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10be9bd0; body size 6 bytes.
#line 1 "ENTRY_10be9bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9bd0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10be9be0; body size 6 bytes.
#line 1 "ENTRY_10be9be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9be0(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10be9bf0; body size 6 bytes.
#line 1 "ENTRY_10be9bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9bf0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10be9c00; body size 6 bytes.
#line 1 "ENTRY_10be9c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9c00(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10be9c10; body size 6 bytes.
#line 1 "ENTRY_10be9c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9c10(void)

{
  return (undefined4)(0x15555555);
}


// Reference entry 10be9c20; body size 6 bytes.
#line 1 "ENTRY_10be9c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9c20(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10be9c30; body size 6 bytes.
#line 1 "ENTRY_10be9c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9c30(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10be9c40; body size 5 bytes.
#line 1 "ENTRY_10be9c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9c40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10be9c50; body size 5 bytes.
#line 1 "ENTRY_10be9c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9c50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10be9c60; body size 5 bytes.
#line 1 "ENTRY_10be9c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9c60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10be9c70; body size 5 bytes.
#line 1 "ENTRY_10be9c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9c70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10be9c80; body size 5 bytes.
#line 1 "ENTRY_10be9c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9c80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10be9c90; body size 5 bytes.
#line 1 "ENTRY_10be9c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9c90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10be9ca0; body size 5 bytes.
#line 1 "ENTRY_10be9ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9ca0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10be9cb0; body size 5 bytes.
#line 1 "ENTRY_10be9cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9cb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10be9cc0; body size 5 bytes.
#line 1 "ENTRY_10be9cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9cc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10be9cd0; body size 5 bytes.
#line 1 "ENTRY_10be9cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9cd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10be9ce0; body size 5 bytes.
#line 1 "ENTRY_10be9ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9ce0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10be9cf0; body size 5 bytes.
#line 1 "ENTRY_10be9cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9cf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10be9d00; body size 5 bytes.
#line 1 "ENTRY_10be9d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10be9d00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10be9d10; body size 3 bytes.
#line 1 "ENTRY_10be9d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10be9d10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10be9d20; body size 36 bytes.
#line 1 "ENTRY_10be9d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10be9d20(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10bcdfc0<>(puVar1,param_2);
  return;
}


// Reference entry 10be9d50; body size 36 bytes.
#line 1 "ENTRY_10be9d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10be9d50(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10bce170<>(puVar1,param_2);
  return;
}


// Reference entry 10be9e40; body size 40 bytes.
#line 1 "ENTRY_10be9e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10be9e40(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_10475400(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x1c);
    return;
  }
  thunk_FUN_10bce670(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 10bea0f0; body size 28 bytes.
#line 1 "ENTRY_10bea0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bea0f0(undefined4 *param_1)

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


// Reference entry 10bea120; body size 28 bytes.
#line 1 "ENTRY_10bea120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bea120(undefined4 *param_1)

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


// Reference entry 10bea150; body size 20 bytes.
#line 1 "ENTRY_10bea150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bea150(int *param_1)

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


// Reference entry 10bec770; body size 53 bytes.
#line 1 "ENTRY_10bec770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10bec770(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(FUN_10becdc0(param_1), 0);
  uVar2 = (uint)(FUN_10becdc0(param_2), 0);
  if ((uVar1 == uVar2) && (uVar2 != 0)) {
    return (uint)(0xffffffff);
  }
  return (uint)((uint)(uVar1 < uVar2));
}


// Reference entry 10bec7c0; body size 32 bytes.
#line 1 "ENTRY_10bec7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bec7c0(int param_1)

{
  if (param_1 == 1) {
    return (undefined4)(0x18);
  }
  if (param_1 != 2) {
    return (undefined4)(0);
  }
  return (undefined4)(0x1b);
}


// Reference entry 10bedb40; body size 6 bytes.
#line 1 "ENTRY_10bedb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bedb40(void)

{
  return (char *)("SCUriExclusiveFilter");
}


// Reference entry 10bedb50; body size 6 bytes.
#line 1 "ENTRY_10bedb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bedb50(void)

{
  return (char *)("SCUriFilterBase");
}


// Reference entry 10bedc80; body size 78 bytes.
#line 1 "ENTRY_10bedc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bedc80(int *param_2)
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


// Reference entry 10bedcf0; body size 16 bytes.
#line 1 "ENTRY_10bedcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bedcf0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bee080; body size 3 bytes.
#line 1 "ENTRY_10bee080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bee080(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bee230; body size 6 bytes.
#line 1 "ENTRY_10bee230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bee230(void)

{
  return (char *)("SCBrowseDataSourceProxy");
}


// Reference entry 10bee910; body size 43 bytes.
#line 1 "ENTRY_10bee910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bee910(int *param_2)
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


// Reference entry 10bee950; body size 26 bytes.
#line 1 "ENTRY_10bee950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bee950(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10bee970; body size 26 bytes.
#line 1 "ENTRY_10bee970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bee970(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10bee990; body size 26 bytes.
#line 1 "ENTRY_10bee990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bee990(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10bee9b0; body size 26 bytes.
#line 1 "ENTRY_10bee9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bee9b0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10bee9d0; body size 26 bytes.
#line 1 "ENTRY_10bee9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bee9d0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10bee9f0; body size 83 bytes.
#line 1 "ENTRY_10bee9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bee9f0(int *param_2)
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


// Reference entry 10beea60; body size 12 bytes.
#line 1 "ENTRY_10beea60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10beea60(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10beea70; body size 6 bytes.
#line 1 "ENTRY_10beea70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10beea70(void)

{
  return (char *)("SCICancellable");
}


// Reference entry 10beea80; body size 6 bytes.
#line 1 "ENTRY_10beea80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10beea80(void)

{
  return (char *)("SCIUrlConnection");
}


// Reference entry 10beea90; body size 27 bytes.
#line 1 "ENTRY_10beea90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10beea90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10beeac0; body size 27 bytes.
#line 1 "ENTRY_10beeac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10beeac0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10beeb70; body size 32 bytes.
#line 1 "ENTRY_10beeb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10beeb70(undefined4 *param_2)
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


// Reference entry 10beeba0; body size 16 bytes.
#line 1 "ENTRY_10beeba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10beeba0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10beed30; body size 9 bytes.
#line 1 "ENTRY_10beed30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10beed30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCICancellable);
  return (undefined4 *)(param_1);
}


// Reference entry 10beed40; body size 9 bytes.
#line 1 "ENTRY_10beed40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10beed40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIUrlRequest);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf0150; body size 5 bytes.
#line 1 "ENTRY_10bf0150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf0150(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrlRequest);

  ((SCStr *)((SCStr *)(param_1 + 0x12)))->int_release();
  param_1[0x12] = (undefined4)(0);
  piVar1 = (int *)((int *)param_1[0x11]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x10] = (undefined4)(0);
    param_1[0x11] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0xf]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0xe] = (undefined4)(0);
    param_1[0xf] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_10120220();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10bf0280; body size 11 bytes.
#line 1 "ENTRY_10bf0280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf0280(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrlDeleteRequest);

  thunk_FUN_106845c0(param_1);

}


// Reference entry 10bf02a0; body size 11 bytes.
#line 1 "ENTRY_10bf02a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf02a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrlPostRequest);

  thunk_FUN_106845c0(param_1);

}


// Reference entry 10bf02b0; body size 11 bytes.
#line 1 "ENTRY_10bf02b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf02b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrlPutRequest);

  thunk_FUN_106845c0(param_1);

}


// Reference entry 10bf0410; body size 65 bytes.
#line 1 "ENTRY_10bf0410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bf0410(int *param_2)
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


// Reference entry 10bf0580; body size 3 bytes.
#line 1 "ENTRY_10bf0580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf0580(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bf0590; body size 7 bytes.
#line 1 "ENTRY_10bf0590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bf0590(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10bf05a0; body size 3 bytes.
#line 1 "ENTRY_10bf05a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf05a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bf05b0; body size 8 bytes.
#line 1 "ENTRY_10bf05b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bf05b0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10bf05c0; body size 3 bytes.
#line 1 "ENTRY_10bf05c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf05c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bf05d0; body size 25 bytes.
#line 1 "ENTRY_10bf05d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf05d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{ int stack0x00000004;
 try {
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 10bf0990; body size 26 bytes.
#line 1 "ENTRY_10bf0990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bf0990(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10bf1150; body size 64 bytes.
#line 1 "ENTRY_10bf1150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10bf1150(void)

{
  int iVar1;
  
  FUN_112a9d50(&DAT_121a524c);
  DAT_121a5254 = (int)(DAT_121a5254 + 1);
  if (DAT_121a5254 == -1) {
    DAT_121a5254 = (int)(1);
  }
  iVar1 = (int)(DAT_121a5254);
  FUN_112a9d70(&DAT_121a524c);
  return (int)(iVar1);
}


// Reference entry 10bf12c0; body size 6 bytes.
#line 1 "ENTRY_10bf12c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bf12c0(void)

{
  return (char *)("SCICancellable");
}


// Reference entry 10bf12d0; body size 6 bytes.
#line 1 "ENTRY_10bf12d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bf12d0(void)

{
  return (char *)("SCIUrlConnection");
}


// Reference entry 10bf12e0; body size 7 bytes.
#line 1 "ENTRY_10bf12e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bf12e0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10bf12f0; body size 3 bytes.
#line 1 "ENTRY_10bf12f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf12f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bf1300; body size 3 bytes.
#line 1 "ENTRY_10bf1300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf1300(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bf1310; body size 3 bytes.
#line 1 "ENTRY_10bf1310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf1310(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bf1560; body size 28 bytes.
#line 1 "ENTRY_10bf1560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf1560(undefined4 *param_1)

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


// Reference entry 10bf1590; body size 28 bytes.
#line 1 "ENTRY_10bf1590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf1590(undefined4 *param_1)

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


// Reference entry 10bf18a0; body size 10 bytes.
#line 1 "ENTRY_10bf18a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bf18a0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  return;
}


// Reference entry 10bf20f0; body size 26 bytes.
#line 1 "ENTRY_10bf20f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bf20f0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10bf2110; body size 27 bytes.
#line 1 "ENTRY_10bf2110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf2110(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf2140; body size 42 bytes.
#line 1 "ENTRY_10bf2140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf2140(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOwnedObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf2180; body size 42 bytes.
#line 1 "ENTRY_10bf2180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf2180(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITearOffObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf2200; body size 9 bytes.
#line 1 "ENTRY_10bf2200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf2200(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpFactory);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf2210; body size 42 bytes.
#line 1 "ENTRY_10bf2210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf2210(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpFactory);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf2250; body size 19 bytes.
#line 1 "ENTRY_10bf2250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf2250(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bf2270; body size 26 bytes.
#line 1 "ENTRY_10bf2270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf2270(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bf2290; body size 26 bytes.
#line 1 "ENTRY_10bf2290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf2290(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bf22b0; body size 7 bytes.
#line 1 "ENTRY_10bf22b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf22b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bf22c0; body size 26 bytes.
#line 1 "ENTRY_10bf22c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf22c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bf22e0; body size 3 bytes.
#line 1 "ENTRY_10bf22e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf22e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bf2760; body size 8 bytes.
#line 1 "ENTRY_10bf2760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bf2760(int param_1)

{
  return (bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 10bf2770; body size 3 bytes.
#line 1 "ENTRY_10bf2770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf2770(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bf2c90; body size 27 bytes.
#line 1 "ENTRY_10bf2c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf2c90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf2cc0; body size 14 bytes.
#line 1 "ENTRY_10bf2cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf2cc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIRoomResource);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf2de0; body size 7 bytes.
#line 1 "ENTRY_10bf2de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf2de0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bf3160; body size 27 bytes.
#line 1 "ENTRY_10bf3160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf3160(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf3260; body size 14 bytes.
#line 1 "ENTRY_10bf3260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf3260(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIAudioInputResource);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf3340; body size 7 bytes.
#line 1 "ENTRY_10bf3340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf3340(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bf3650; body size 58 bytes.
#line 1 "ENTRY_10bf3650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bf3650(undefined4 param_2,int *param_3, unsigned int recovered_unused_stack_0)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_3);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_1[1] = (int)(0);
  *(undefined1*)(param_1 + 2) = (undefined1)(0);
  return (int *)(param_1);
}


// Reference entry 10bf36a0; body size 22 bytes.
#line 1 "ENTRY_10bf36a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf36a0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf3780; body size 18 bytes.
#line 1 "ENTRY_10bf3780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf3780(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf37a0; body size 25 bytes.
#line 1 "ENTRY_10bf37a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf37a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf37c0; body size 25 bytes.
#line 1 "ENTRY_10bf37c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf37c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf37e0; body size 18 bytes.
#line 1 "ENTRY_10bf37e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf37e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf3800; body size 25 bytes.
#line 1 "ENTRY_10bf3800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf3800(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf3820; body size 25 bytes.
#line 1 "ENTRY_10bf3820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf3820(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf38d0; body size 13 bytes.
#line 1 "ENTRY_10bf38d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf38d0(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf38e0; body size 22 bytes.
#line 1 "ENTRY_10bf38e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf38e0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf3900; body size 5 bytes.
#line 1 "ENTRY_10bf3900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf3900(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf3910; body size 5 bytes.
#line 1 "ENTRY_10bf3910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf3910(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf3920; body size 13 bytes.
#line 1 "ENTRY_10bf3920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf3920(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf3930; body size 22 bytes.
#line 1 "ENTRY_10bf3930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf3930(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf3950; body size 5 bytes.
#line 1 "ENTRY_10bf3950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf3950(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf3960; body size 5 bytes.
#line 1 "ENTRY_10bf3960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf3960(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf3970; body size 60 bytes.
#line 1 "ENTRY_10bf3970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bf3970(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*(int *)*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_1[1] = (int)(0);
  *(undefined1*)(param_1 + 2) = (undefined1)(0);
  return (int *)(param_1);
}


// Reference entry 10bf39c0; body size 56 bytes.
#line 1 "ENTRY_10bf39c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __stdcall FUN_10bf39c0(undefined4 *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar4 = (undefined4 *)((undefined4 *)*param_1);
  }
  uVar2 = (uint)(0);
  uVar3 = (uint)(0x811c9dc5);
  if (param_1[4] != 0) {
    do {
      pbVar1 = (byte *)((byte *)(uVar2 + (int)puVar4));
      uVar2 = (uint)(uVar2 + 1);
      uVar3 = (uint)((*pbVar1 ^ uVar3) * 0x1000193);
    } while (uVar2 < (uint)param_1[4]);
  }
  return (uint)(uVar3);
}


// Reference entry 10bf3a10; body size 21 bytes.
#line 1 "ENTRY_10bf3a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

byte __stdcall FUN_10bf3a10(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  
  bVar1 = (byte)(thunk_FUN_10405e20(param_1,param_2), 0);
  return (byte)(bVar1 ^ 1);
}


// Reference entry 10bf3a30; body size 3 bytes.
#line 1 "ENTRY_10bf3a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf3a30(void)

{
  return;
}


// Reference entry 10bf3a40; body size 3 bytes.
#line 1 "ENTRY_10bf3a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf3a40(void)

{
  return;
}


// Reference entry 10bf3a50; body size 3 bytes.
#line 1 "ENTRY_10bf3a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf3a50(void)

{
  return;
}


// Reference entry 10bf3a60; body size 13 bytes.
#line 1 "ENTRY_10bf3a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf3a60(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bf3a70; body size 13 bytes.
#line 1 "ENTRY_10bf3a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf3a70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bf3a80; body size 13 bytes.
#line 1 "ENTRY_10bf3a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf3a80(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bf3a90; body size 13 bytes.
#line 1 "ENTRY_10bf3a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf3a90(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bf3aa0; body size 13 bytes.
#line 1 "ENTRY_10bf3aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf3aa0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bf3ab0; body size 13 bytes.
#line 1 "ENTRY_10bf3ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf3ab0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bf3ac0; body size 3 bytes.
#line 1 "ENTRY_10bf3ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf3ac0(void)

{
  return;
}


// Reference entry 10bf3ad0; body size 3 bytes.
#line 1 "ENTRY_10bf3ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf3ad0(void)

{
  return;
}


// Reference entry 10bf3ae0; body size 3 bytes.
#line 1 "ENTRY_10bf3ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf3ae0(void)

{
  return;
}


// Reference entry 10bf3af0; body size 3 bytes.
#line 1 "ENTRY_10bf3af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf3af0(void)

{
  return;
}


// Reference entry 10bf3b00; body size 18 bytes.
#line 1 "ENTRY_10bf3b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bf3b00(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10bf3b20; body size 18 bytes.
#line 1 "ENTRY_10bf3b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bf3b20(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10bf3d30; body size 51 bytes.
#line 1 "ENTRY_10bf3d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf3d30(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4*)param_2[1] = (undefined4)((undefined4)(0));
  puVar2 = (undefined4 *)((undefined4 *)*param_2);
  while ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar2);
    thunk_FUN_10bf5990();
    thunk_FUN_1148a50e(puVar2,0x14);
    puVar2 = (undefined4 *)(puVar1);
  }
  return;
}


// Reference entry 10bf3e10; body size 15 bytes.
#line 1 "ENTRY_10bf3e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf3e10(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10bf3e30; body size 15 bytes.
#line 1 "ENTRY_10bf3e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf3e30(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x20);
  return;
}


// Reference entry 10bf3e50; body size 26 bytes.
#line 1 "ENTRY_10bf3e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf3e50(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10bf5990();
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10bf3ef0; body size 7 bytes.
#line 1 "ENTRY_10bf3ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf3ef0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bf3f00; body size 7 bytes.
#line 1 "ENTRY_10bf3f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf3f00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bf3f10; body size 7 bytes.
#line 1 "ENTRY_10bf3f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf3f10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bf3f20; body size 5 bytes.
#line 1 "ENTRY_10bf3f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf3f20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf41b0; body size 5 bytes.
#line 1 "ENTRY_10bf41b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf41b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf41c0; body size 5 bytes.
#line 1 "ENTRY_10bf41c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf41c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf41d0; body size 5 bytes.
#line 1 "ENTRY_10bf41d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf41d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf41e0; body size 5 bytes.
#line 1 "ENTRY_10bf41e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf41e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf41f0; body size 5 bytes.
#line 1 "ENTRY_10bf41f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf41f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf4200; body size 5 bytes.
#line 1 "ENTRY_10bf4200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf4200(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf4210; body size 5 bytes.
#line 1 "ENTRY_10bf4210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf4210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf4220; body size 5 bytes.
#line 1 "ENTRY_10bf4220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf4220(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf4230; body size 5 bytes.
#line 1 "ENTRY_10bf4230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf4230(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf4240; body size 5 bytes.
#line 1 "ENTRY_10bf4240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf4240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf4250; body size 5 bytes.
#line 1 "ENTRY_10bf4250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf4250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf4260; body size 5 bytes.
#line 1 "ENTRY_10bf4260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf4260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf4270; body size 5 bytes.
#line 1 "ENTRY_10bf4270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf4270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf4280; body size 52 bytes.
#line 1 "ENTRY_10bf4280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf4280(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)*param_4);
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_2[1] = (int)(0);
  *(undefined1*)(param_2 + 2) = (undefined1)(0);
  return;
}


// Reference entry 10bf42d0; body size 14 bytes.
#line 1 "ENTRY_10bf42d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf42d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10118c40<>(param_3);
  return;
}


// Reference entry 10bf42f0; body size 9 bytes.
#line 1 "ENTRY_10bf42f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf42f0(undefined4 param_1,int *param_2)

{
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  iVar1 = (int)(param_2[1]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10),uVar2), 0);
    if (iVar3 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(*param_2);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10),uVar2), 0);
    if (iVar3 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10bf45d0; body size 15 bytes.
#line 1 "ENTRY_10bf45d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf45d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bf45f0; body size 15 bytes.
#line 1 "ENTRY_10bf45f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf45f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bf47d0; body size 94 bytes.
#line 1 "ENTRY_10bf47d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bf47d0(int *param_2,undefined4 *param_3)
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
  iVar2 = (int)(thunk_FUN_10bf3bc0((uint)&auStack_8,param_3,uVar4), 0);
  iVar2 = (int)(*(int *)(iVar2 + 4));
  if (iVar2 == 0) {
    iVar2 = (int)(*(int *)(param_1 + 4));
  }
  *param_2 = (int)(iVar2);
  return;
}


// Reference entry 10bf4850; body size 5 bytes.
#line 1 "ENTRY_10bf4850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf4850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf4860; body size 5 bytes.
#line 1 "ENTRY_10bf4860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf4860(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf4870; body size 5 bytes.
#line 1 "ENTRY_10bf4870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf4870(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf4880; body size 5 bytes.
#line 1 "ENTRY_10bf4880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf4880(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf4890; body size 5 bytes.
#line 1 "ENTRY_10bf4890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf4890(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf48a0; body size 5 bytes.
#line 1 "ENTRY_10bf48a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf48a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf48b0; body size 5 bytes.
#line 1 "ENTRY_10bf48b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf48b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf48c0; body size 5 bytes.
#line 1 "ENTRY_10bf48c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf48c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf48d0; body size 5 bytes.
#line 1 "ENTRY_10bf48d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf48d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf48e0; body size 5 bytes.
#line 1 "ENTRY_10bf48e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf48e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf48f0; body size 6 bytes.
#line 1 "ENTRY_10bf48f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bf48f0(void)

{
  return (char *)("SCIAppRatingManager");
}


// Reference entry 10bf4bb0; body size 30 bytes.
#line 1 "ENTRY_10bf4bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf4bb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10bf4be0; body size 30 bytes.
#line 1 "ENTRY_10bf4be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf4be0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10bf4ce0; body size 27 bytes.
#line 1 "ENTRY_10bf4ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf4ce0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf4d10; body size 18 bytes.
#line 1 "ENTRY_10bf4d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf4d10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf4d30; body size 18 bytes.
#line 1 "ENTRY_10bf4d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf4d30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf4ef0; body size 11 bytes.
#line 1 "ENTRY_10bf4ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf4ef0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf4f00; body size 11 bytes.
#line 1 "ENTRY_10bf4f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf4f00(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf4f10; body size 11 bytes.
#line 1 "ENTRY_10bf4f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf4f10(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf4f20; body size 11 bytes.
#line 1 "ENTRY_10bf4f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf4f20(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf4f30; body size 11 bytes.
#line 1 "ENTRY_10bf4f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf4f30(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf4f40; body size 11 bytes.
#line 1 "ENTRY_10bf4f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf4f40(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf4f50; body size 11 bytes.
#line 1 "ENTRY_10bf4f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf4f50(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf4f60; body size 11 bytes.
#line 1 "ENTRY_10bf4f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf4f60(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf4f70; body size 16 bytes.
#line 1 "ENTRY_10bf4f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf4f70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf4f90; body size 16 bytes.
#line 1 "ENTRY_10bf4f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf4f90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf4fb0; body size 9 bytes.
#line 1 "ENTRY_10bf4fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf4fb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf4fc0; body size 13 bytes.
#line 1 "ENTRY_10bf4fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf4fc0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf4fd0; body size 14 bytes.
#line 1 "ENTRY_10bf4fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf4fd0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf4ff0; body size 14 bytes.
#line 1 "ENTRY_10bf4ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf4ff0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf5010; body size 13 bytes.
#line 1 "ENTRY_10bf5010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf5010(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf5020; body size 23 bytes.
#line 1 "ENTRY_10bf5020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf5020(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf5040; body size 23 bytes.
#line 1 "ENTRY_10bf5040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf5040(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf5060; body size 3 bytes.
#line 1 "ENTRY_10bf5060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf5060(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf5070; body size 3 bytes.
#line 1 "ENTRY_10bf5070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf5070(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf5080; body size 18 bytes.
#line 1 "ENTRY_10bf5080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf5080(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf55d0; body size 9 bytes.
#line 1 "ENTRY_10bf55d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf55d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIAppRatingManager);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf55e0; body size 18 bytes.
#line 1 "ENTRY_10bf55e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf55e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  *(undefined1*)(param_1 + 1) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf5600; body size 11 bytes.
#line 1 "ENTRY_10bf5600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf5600(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf5610; body size 11 bytes.
#line 1 "ENTRY_10bf5610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf5610(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf5620; body size 24 bytes.
#line 1 "ENTRY_10bf5620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf5620(undefined4 param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(*(undefined4 *)(param_3 + 4));
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf5640; body size 5 bytes.
#line 1 "ENTRY_10bf5640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf5640(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(*(int *)(param_1 + 0xc));
  uVar3 = (uint)(*(int *)(param_1 + 0x10) - iVar1 & 0xfffffffc);
  iVar2 = (int)(iVar1);
  if (0xfff < uVar3) {
    iVar2 = (int)(*(int *)(iVar1 + -4));
    uVar3 = (uint)(uVar3 + 0x23);
    if (0x1f < (iVar1 - iVar2) - 4U) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(iVar2,uVar3);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  thunk_FUN_10bf5910();
  return;
}


// Reference entry 10bf58f0; body size 3 bytes.
#line 1 "ENTRY_10bf58f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf58f0(void)

{
  return;
}


// Reference entry 10bf5900; body size 3 bytes.
#line 1 "ENTRY_10bf5900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf5900(void)

{
  return;
}


// Reference entry 10bf5a80; body size 5 bytes.
#line 1 "ENTRY_10bf5a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf5a80(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(*(int *)(param_1 + 0xc));
  uVar3 = (uint)(*(int *)(param_1 + 0x10) - iVar1 & 0xfffffffc);
  iVar2 = (int)(iVar1);
  if (0xfff < uVar3) {
    iVar2 = (int)(*(int *)(iVar1 + -4));
    uVar3 = (uint)(uVar3 + 0x23);
    if (0x1f < (iVar1 - iVar2) - 4U) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(iVar2,uVar3);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  thunk_FUN_10bf5910();
  return;
}


// Reference entry 10bf5a90; body size 5 bytes.
#line 1 "ENTRY_10bf5a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf5a90(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = (int)(*(int *)(param_1 + 0xc));
  uVar3 = (uint)(*(int *)(param_1 + 0x10) - iVar1 & 0xfffffffc);
  iVar2 = (int)(iVar1);
  if (0xfff < uVar3) {
    iVar2 = (int)(*(int *)(iVar1 + -4));
    uVar3 = (uint)(uVar3 + 0x23);
    if (0x1f < (iVar1 - iVar2) - 4U) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(iVar2,uVar3);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  puVar4 = (undefined4 *)((undefined4 *)(param_1 + 4));
  thunk_FUN_10bf3d70(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x20);
  return;
}


// Reference entry 10bf5c60; body size 7 bytes.
#line 1 "ENTRY_10bf5c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf5c60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bf5e20; body size 18 bytes.
#line 1 "ENTRY_10bf5e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf5e20(int param_1)

{
  **(undefined4**)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_1 + 8));
  *(undefined4*)(*(int *)(param_1 + 8) + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10bf5e40; body size 14 bytes.
#line 1 "ENTRY_10bf5e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bf5e40(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10bf5e60; body size 14 bytes.
#line 1 "ENTRY_10bf5e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bf5e60(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10bf5e80; body size 14 bytes.
#line 1 "ENTRY_10bf5e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bf5e80(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10bf5ea0; body size 14 bytes.
#line 1 "ENTRY_10bf5ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bf5ea0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10bf5ec0; body size 14 bytes.
#line 1 "ENTRY_10bf5ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bf5ec0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10bf5ee0; body size 14 bytes.
#line 1 "ENTRY_10bf5ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bf5ee0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10bf5f00; body size 14 bytes.
#line 1 "ENTRY_10bf5f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bf5f00(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10bf5f20; body size 14 bytes.
#line 1 "ENTRY_10bf5f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bf5f20(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10bf5f70; body size 6 bytes.
#line 1 "ENTRY_10bf5f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bf5f70(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10bf5f80; body size 6 bytes.
#line 1 "ENTRY_10bf5f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bf5f80(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10bf5f90; body size 6 bytes.
#line 1 "ENTRY_10bf5f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bf5f90(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10bf5fa0; body size 6 bytes.
#line 1 "ENTRY_10bf5fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bf5fa0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10bf5fb0; body size 6 bytes.
#line 1 "ENTRY_10bf5fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bf5fb0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10bf5fc0; body size 6 bytes.
#line 1 "ENTRY_10bf5fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bf5fc0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10bf5fd0; body size 9 bytes.
#line 1 "ENTRY_10bf5fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf5fd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf5fe0; body size 9 bytes.
#line 1 "ENTRY_10bf5fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf5fe0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf5ff0; body size 9 bytes.
#line 1 "ENTRY_10bf5ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf5ff0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf6000; body size 9 bytes.
#line 1 "ENTRY_10bf6000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf6000(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf6010; body size 9 bytes.
#line 1 "ENTRY_10bf6010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bf6010(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf6020; body size 10 bytes.
#line 1 "ENTRY_10bf6020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10bf6020(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10bf6030; body size 10 bytes.
#line 1 "ENTRY_10bf6030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10bf6030(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10bf6040; body size 19 bytes.
#line 1 "ENTRY_10bf6040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bf6040(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10405e20(param_1,param_2);
  return;
}


// Reference entry 10bf6200; body size 22 bytes.
#line 1 "ENTRY_10bf6200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf6200(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10bf6220; body size 22 bytes.
#line 1 "ENTRY_10bf6220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf6220(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x20), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10bf64f0; body size 20 bytes.
#line 1 "ENTRY_10bf64f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf64f0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xccccccc) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10bf6510; body size 20 bytes.
#line 1 "ENTRY_10bf6510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf6510(int param_1)

{
  if (*(int *)(param_1 + 8) != 0x7ffffff) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10bf6530; body size 66 bytes.
#line 1 "ENTRY_10bf6530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bf6530(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) + (double)(uint)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(uint)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= (float)((fVar1)) && (float)(fVar1) != *param_1);
}


// Reference entry 10bf6590; body size 66 bytes.
#line 1 "ENTRY_10bf6590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bf6590(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) + (double)(uint)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(uint)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= (float)((fVar1)) && (float)(fVar1) != *param_1);
}


// Reference entry 10bf6bf0; body size 3 bytes.
#line 1 "ENTRY_10bf6bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf6bf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf6c00; body size 3 bytes.
#line 1 "ENTRY_10bf6c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf6c00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf6c10; body size 3 bytes.
#line 1 "ENTRY_10bf6c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf6c10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf6c20; body size 3 bytes.
#line 1 "ENTRY_10bf6c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf6c20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf6c30; body size 3 bytes.
#line 1 "ENTRY_10bf6c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf6c30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf6c40; body size 3 bytes.
#line 1 "ENTRY_10bf6c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf6c40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf6c50; body size 3 bytes.
#line 1 "ENTRY_10bf6c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf6c50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf6c60; body size 3 bytes.
#line 1 "ENTRY_10bf6c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf6c60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf6c70; body size 3 bytes.
#line 1 "ENTRY_10bf6c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf6c70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf6c80; body size 3 bytes.
#line 1 "ENTRY_10bf6c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf6c80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf6c90; body size 3 bytes.
#line 1 "ENTRY_10bf6c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf6c90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf6ca0; body size 3 bytes.
#line 1 "ENTRY_10bf6ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf6ca0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf6cb0; body size 3 bytes.
#line 1 "ENTRY_10bf6cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf6cb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf6cc0; body size 3 bytes.
#line 1 "ENTRY_10bf6cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf6cc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf6cd0; body size 3 bytes.
#line 1 "ENTRY_10bf6cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf6cd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf6ce0; body size 3 bytes.
#line 1 "ENTRY_10bf6ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf6ce0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf6cf0; body size 92 bytes.
#line 1 "ENTRY_10bf6cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bf6cf0(uint param_2,int param_3,int *param_4)
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


// Reference entry 10bf6d70; body size 92 bytes.
#line 1 "ENTRY_10bf6d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bf6d70(uint param_2,int param_3,int *param_4)
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


// Reference entry 10bf6df0; body size 5 bytes.
#line 1 "ENTRY_10bf6df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf6df0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf6e00; body size 13 bytes.
#line 1 "ENTRY_10bf6e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bf6e00(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10bf6e10; body size 13 bytes.
#line 1 "ENTRY_10bf6e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bf6e10(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10bf6e20; body size 13 bytes.
#line 1 "ENTRY_10bf6e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bf6e20(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10bf6e30; body size 13 bytes.
#line 1 "ENTRY_10bf6e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bf6e30(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10bf6e40; body size 3 bytes.
#line 1 "ENTRY_10bf6e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf6e40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf6e50; body size 3 bytes.
#line 1 "ENTRY_10bf6e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf6e50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf6e60; body size 3 bytes.
#line 1 "ENTRY_10bf6e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf6e60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf6e70; body size 3 bytes.
#line 1 "ENTRY_10bf6e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf6e70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf6f60; body size 3 bytes.
#line 1 "ENTRY_10bf6f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf6f60(void)

{
  return;
}


// Reference entry 10bf6f70; body size 3 bytes.
#line 1 "ENTRY_10bf6f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf6f70(void)

{
  return;
}


// Reference entry 10bf70e0; body size 11 bytes.
#line 1 "ENTRY_10bf70e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf70e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10bf70f0; body size 11 bytes.
#line 1 "ENTRY_10bf70f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf70f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10bf7100; body size 6 bytes.
#line 1 "ENTRY_10bf7100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf7100(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10bf7110; body size 6 bytes.
#line 1 "ENTRY_10bf7110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf7110(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10bf7280; body size 14 bytes.
#line 1 "ENTRY_10bf7280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bf7280(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4), 0);
  return;
}


// Reference entry 10bf72a0; body size 14 bytes.
#line 1 "ENTRY_10bf72a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bf72a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4), 0);
  return;
}


// Reference entry 10bf72c0; body size 13 bytes.
#line 1 "ENTRY_10bf72c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bf72c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10bf72d0; body size 13 bytes.
#line 1 "ENTRY_10bf72d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bf72d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10bf72e0; body size 12 bytes.
#line 1 "ENTRY_10bf72e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bf72e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10bf72f0; body size 12 bytes.
#line 1 "ENTRY_10bf72f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bf72f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10bf7300; body size 11 bytes.
#line 1 "ENTRY_10bf7300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bf7300(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10bf7310; body size 11 bytes.
#line 1 "ENTRY_10bf7310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bf7310(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10bf7570; body size 43 bytes.
#line 1 "ENTRY_10bf7570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf7570(int param_1,int param_2,int param_3)

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


// Reference entry 10bf75b0; body size 43 bytes.
#line 1 "ENTRY_10bf75b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf75b0(int param_1,int param_2,int param_3)

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


// Reference entry 10bf7600; body size 90 bytes.
#line 1 "ENTRY_10bf7600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bf7600(uint param_1)

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


// Reference entry 10bf7680; body size 87 bytes.
#line 1 "ENTRY_10bf7680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bf7680(uint param_1)

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


// Reference entry 10bf76f0; body size 87 bytes.
#line 1 "ENTRY_10bf76f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bf76f0(uint param_1)

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


// Reference entry 10bf7760; body size 87 bytes.
#line 1 "ENTRY_10bf7760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bf7760(uint param_1)

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


// Reference entry 10bf77d0; body size 14 bytes.
#line 1 "ENTRY_10bf77d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bf77d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4), 0);
  return;
}


// Reference entry 10bf77f0; body size 3 bytes.
#line 1 "ENTRY_10bf77f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf77f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bf7800; body size 13 bytes.
#line 1 "ENTRY_10bf7800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bf7800(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10bf7810; body size 35 bytes.
#line 1 "ENTRY_10bf7810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10bf7810(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)((0x0))) {
    puVar2 = (undefined1 *)((undefined1 *)*param_2);
  }
  uVar1 = (uint)(thunk_FUN_101c82e0(puVar2), 0);
  return (uint)(uVar1 & *(uint *)(param_1 + 0x18));
}


// Reference entry 10bf7840; body size 61 bytes.
#line 1 "ENTRY_10bf7840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10bf7840(undefined4 *param_2)
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


// Reference entry 10bf7890; body size 4 bytes.
#line 1 "ENTRY_10bf7890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf7890(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10bf78a0; body size 4 bytes.
#line 1 "ENTRY_10bf78a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf78a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10bf78f0; body size 108 bytes.
#line 1 "ENTRY_10bf78f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bf78f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iStack_4;
  
  if (*(int *)(param_1 + 8) != 0) {
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
    *(undefined4*)puVar1[1] = (undefined4)((undefined4)(0));
    puVar1 = (undefined4 *)((undefined4 *)*puVar1);
    iStack_4 = (int)(param_1);
    while ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
      puVar2 = (undefined4 *)((undefined4 *)*puVar1);
      thunk_FUN_10bf5990();
      thunk_FUN_1148a50e(puVar1,0x14);
      puVar1 = (undefined4 *)(puVar2);
    }
    *(undefined4 *)*(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
    *(int*)(*(int *)(param_1 + 4) + 4) = (int)(*(int *)(param_1 + 4));
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*(int *)(param_1 + 4));
    thunk_FUN_10bf4690(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 10bf7c40; body size 57 bytes.
#line 1 "ENTRY_10bf7c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf7c40(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10bf7c90; body size 54 bytes.
#line 1 "ENTRY_10bf7c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bf7c90(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10bf7ce0; body size 60 bytes.
#line 1 "ENTRY_10bf7ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bf7ce0(int param_1,int param_2)

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


// Reference entry 10bf7d30; body size 57 bytes.
#line 1 "ENTRY_10bf7d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bf7d30(int param_1,int param_2)

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


// Reference entry 10bf7d80; body size 61 bytes.
#line 1 "ENTRY_10bf7d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bf7d80(int param_1,int param_2)

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


// Reference entry 10bf7dd0; body size 61 bytes.
#line 1 "ENTRY_10bf7dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bf7dd0(int param_1,int param_2)

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


// Reference entry 10bf7e20; body size 12 bytes.
#line 1 "ENTRY_10bf7e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bf7e20(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10bf7e30; body size 12 bytes.
#line 1 "ENTRY_10bf7e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bf7e30(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10bf7e40; body size 12 bytes.
#line 1 "ENTRY_10bf7e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bf7e40(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10bf7e50; body size 4 bytes.
#line 1 "ENTRY_10bf7e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf7e50(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10bf7e60; body size 11 bytes.
#line 1 "ENTRY_10bf7e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bf7e60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10bf7e70; body size 11 bytes.
#line 1 "ENTRY_10bf7e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bf7e70(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10bf7e80; body size 11 bytes.
#line 1 "ENTRY_10bf7e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bf7e80(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10bf8860; body size 16 bytes.
#line 1 "ENTRY_10bf8860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bf8860(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10bf4900(param_1,param_2);
  return;
}


// Reference entry 10bf8880; body size 6 bytes.
#line 1 "ENTRY_10bf8880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bf8880(void)

{
  return (char *)("SCIAppRatingManager");
}


// Reference entry 10bf8ed0; body size 3 bytes.
#line 1 "ENTRY_10bf8ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10bf8ed0(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 10bf8ee0; body size 3 bytes.
#line 1 "ENTRY_10bf8ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10bf8ee0(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 10bf8ef0; body size 6 bytes.
#line 1 "ENTRY_10bf8ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf8ef0(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10bf8f00; body size 6 bytes.
#line 1 "ENTRY_10bf8f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf8f00(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 10bf8f10; body size 6 bytes.
#line 1 "ENTRY_10bf8f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf8f10(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10bf8f20; body size 6 bytes.
#line 1 "ENTRY_10bf8f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf8f20(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10bf8f30; body size 6 bytes.
#line 1 "ENTRY_10bf8f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf8f30(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10bf8f40; body size 6 bytes.
#line 1 "ENTRY_10bf8f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf8f40(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10bf8f50; body size 6 bytes.
#line 1 "ENTRY_10bf8f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf8f50(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10bf8f60; body size 6 bytes.
#line 1 "ENTRY_10bf8f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf8f60(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 10bf92e0; body size 5 bytes.
#line 1 "ENTRY_10bf92e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bf92e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bf9a30; body size 4 bytes.
#line 1 "ENTRY_10bf9a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf9a30(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10bf9a40; body size 9 bytes.
#line 1 "ENTRY_10bf9a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bf9a40(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10bf9a50; body size 9 bytes.
#line 1 "ENTRY_10bf9a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bf9a50(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10bf9a60; body size 4 bytes.
#line 1 "ENTRY_10bf9a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bf9a60(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10bfa220; body size 54 bytes.
#line 1 "ENTRY_10bfa220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bfa220(undefined4 param_2,int *param_3, unsigned int recovered_unused_stack_0)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_3);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10bfa270; body size 22 bytes.
#line 1 "ENTRY_10bfa270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bfa270(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfa340; body size 18 bytes.
#line 1 "ENTRY_10bfa340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bfa340(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfa360; body size 25 bytes.
#line 1 "ENTRY_10bfa360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bfa360(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfa380; body size 25 bytes.
#line 1 "ENTRY_10bfa380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bfa380(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfa3a0; body size 22 bytes.
#line 1 "ENTRY_10bfa3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bfa3a0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfa3c0; body size 5 bytes.
#line 1 "ENTRY_10bfa3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bfa3c0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bfa3d0; body size 5 bytes.
#line 1 "ENTRY_10bfa3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bfa3d0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bfa3e0; body size 56 bytes.
#line 1 "ENTRY_10bfa3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bfa3e0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*(int *)*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10bfa430; body size 3 bytes.
#line 1 "ENTRY_10bfa430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bfa430(void)

{
  return;
}


// Reference entry 10bfa440; body size 13 bytes.
#line 1 "ENTRY_10bfa440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bfa440(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bfa450; body size 13 bytes.
#line 1 "ENTRY_10bfa450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bfa450(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bfa460; body size 13 bytes.
#line 1 "ENTRY_10bfa460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bfa460(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bfa470; body size 3 bytes.
#line 1 "ENTRY_10bfa470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bfa470(void)

{
  return;
}


// Reference entry 10bfa480; body size 3 bytes.
#line 1 "ENTRY_10bfa480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bfa480(void)

{
  return;
}


// Reference entry 10bfa490; body size 18 bytes.
#line 1 "ENTRY_10bfa490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bfa490(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10bfa580; body size 51 bytes.
#line 1 "ENTRY_10bfa580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bfa580(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4*)param_2[1] = (undefined4)((undefined4)(0));
  puVar2 = (undefined4 *)((undefined4 *)*param_2);
  while ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar2);
    thunk_FUN_10bfb550();
    thunk_FUN_1148a50e(puVar2,0x10);
    puVar2 = (undefined4 *)(puVar1);
  }
  return;
}


// Reference entry 10bfa5c0; body size 15 bytes.
#line 1 "ENTRY_10bfa5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bfa5c0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x10);
  return;
}


// Reference entry 10bfa5e0; body size 26 bytes.
#line 1 "ENTRY_10bfa5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bfa5e0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10bfb550();
  thunk_FUN_1148a50e(param_2,0x10);
  return;
}


// Reference entry 10bfa600; body size 7 bytes.
#line 1 "ENTRY_10bfa600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bfa600(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bfa610; body size 5 bytes.
#line 1 "ENTRY_10bfa610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bfa610(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bfa890; body size 5 bytes.
#line 1 "ENTRY_10bfa890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bfa890(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bfa8a0; body size 5 bytes.
#line 1 "ENTRY_10bfa8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bfa8a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bfa8b0; body size 5 bytes.
#line 1 "ENTRY_10bfa8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bfa8b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bfa8c0; body size 5 bytes.
#line 1 "ENTRY_10bfa8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bfa8c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bfa8d0; body size 5 bytes.
#line 1 "ENTRY_10bfa8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bfa8d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bfa8e0; body size 5 bytes.
#line 1 "ENTRY_10bfa8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bfa8e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bfa8f0; body size 48 bytes.
#line 1 "ENTRY_10bfa8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bfa8f0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)*param_4);
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_2[1] = (int)(0);
  return;
}


// Reference entry 10bfa930; body size 9 bytes.
#line 1 "ENTRY_10bfa930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bfa930(undefined4 param_1,int *param_2)

{
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  iVar1 = (int)(param_2[1]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10),uVar2), 0);
    if (iVar3 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(*param_2);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10),uVar2), 0);
    if (iVar3 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10bfa940; body size 15 bytes.
#line 1 "ENTRY_10bfa940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bfa940(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bfa9e0; body size 5 bytes.
#line 1 "ENTRY_10bfa9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bfa9e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bfa9f0; body size 5 bytes.
#line 1 "ENTRY_10bfa9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bfa9f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bfaa00; body size 5 bytes.
#line 1 "ENTRY_10bfaa00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bfaa00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bfaa10; body size 5 bytes.
#line 1 "ENTRY_10bfaa10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bfaa10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bfaa20; body size 5 bytes.
#line 1 "ENTRY_10bfaa20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bfaa20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bfaa30; body size 30 bytes.
#line 1 "ENTRY_10bfaa30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bfaa30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10bfab30; body size 16 bytes.
#line 1 "ENTRY_10bfab30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bfab30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfab50; body size 18 bytes.
#line 1 "ENTRY_10bfab50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bfab50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfac40; body size 11 bytes.
#line 1 "ENTRY_10bfac40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bfac40(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfac50; body size 11 bytes.
#line 1 "ENTRY_10bfac50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bfac50(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfac60; body size 11 bytes.
#line 1 "ENTRY_10bfac60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bfac60(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfac70; body size 11 bytes.
#line 1 "ENTRY_10bfac70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bfac70(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfac80; body size 16 bytes.
#line 1 "ENTRY_10bfac80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bfac80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfaca0; body size 13 bytes.
#line 1 "ENTRY_10bfaca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bfaca0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfacb0; body size 14 bytes.
#line 1 "ENTRY_10bfacb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bfacb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfacd0; body size 23 bytes.
#line 1 "ENTRY_10bfacd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bfacd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfacf0; body size 3 bytes.
#line 1 "ENTRY_10bfacf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bfacf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bfb320; body size 11 bytes.
#line 1 "ENTRY_10bfb320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bfb320(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfb4e0; body size 3 bytes.
#line 1 "ENTRY_10bfb4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bfb4e0(void)

{
  return;
}


// Reference entry 10bfb640; body size 5 bytes.
#line 1 "ENTRY_10bfb640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bfb640(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(*(int *)(param_1 + 0xc));
  uVar3 = (uint)(*(int *)(param_1 + 0x10) - iVar1 & 0xfffffffc);
  iVar2 = (int)(iVar1);
  if (0xfff < uVar3) {
    iVar2 = (int)(*(int *)(iVar1 + -4));
    uVar3 = (uint)(uVar3 + 0x23);
    if (0x1f < (iVar1 - iVar2) - 4U) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(iVar2,uVar3);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  thunk_FUN_10bfb4f0();
  return;
}


// Reference entry 10bfba50; body size 14 bytes.
#line 1 "ENTRY_10bfba50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bfba50(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10bfba70; body size 14 bytes.
#line 1 "ENTRY_10bfba70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bfba70(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10bfba90; body size 14 bytes.
#line 1 "ENTRY_10bfba90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bfba90(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10bfbab0; body size 14 bytes.
#line 1 "ENTRY_10bfbab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bfbab0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10bfbb00; body size 3 bytes.
#line 1 "ENTRY_10bfbb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bfbb00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bfbb10; body size 7 bytes.
#line 1 "ENTRY_10bfbb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bfbb10(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10bfbb20; body size 6 bytes.
#line 1 "ENTRY_10bfbb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bfbb20(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10bfbb30; body size 6 bytes.
#line 1 "ENTRY_10bfbb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bfbb30(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10bfbb40; body size 6 bytes.
#line 1 "ENTRY_10bfbb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bfbb40(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10bfbb50; body size 6 bytes.
#line 1 "ENTRY_10bfbb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bfbb50(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10bfbb60; body size 6 bytes.
#line 1 "ENTRY_10bfbb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bfbb60(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10bfbb70; body size 9 bytes.
#line 1 "ENTRY_10bfbb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bfbb70(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfbb80; body size 9 bytes.
#line 1 "ENTRY_10bfbb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bfbb80(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfbb90; body size 9 bytes.
#line 1 "ENTRY_10bfbb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bfbb90(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfbba0; body size 9 bytes.
#line 1 "ENTRY_10bfbba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bfbba0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfbbb0; body size 10 bytes.
#line 1 "ENTRY_10bfbbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10bfbbb0(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10bfbcb0; body size 22 bytes.
#line 1 "ENTRY_10bfbcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bfbcb0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10bfbe10; body size 20 bytes.
#line 1 "ENTRY_10bfbe10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bfbe10(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xfffffff) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10bfbe30; body size 66 bytes.
#line 1 "ENTRY_10bfbe30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bfbe30(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) + (double)(uint)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(uint)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= (float)((fVar1)) && (float)(fVar1) != *param_1);
}


// Reference entry 10bfc1e0; body size 3 bytes.
#line 1 "ENTRY_10bfc1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bfc1e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bfc1f0; body size 3 bytes.
#line 1 "ENTRY_10bfc1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bfc1f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bfc200; body size 3 bytes.
#line 1 "ENTRY_10bfc200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bfc200(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bfc210; body size 3 bytes.
#line 1 "ENTRY_10bfc210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bfc210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bfc220; body size 3 bytes.
#line 1 "ENTRY_10bfc220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bfc220(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bfc230; body size 3 bytes.
#line 1 "ENTRY_10bfc230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bfc230(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bfc240; body size 92 bytes.
#line 1 "ENTRY_10bfc240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bfc240(uint param_2,int param_3,int *param_4)
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


// Reference entry 10bfc2c0; body size 3 bytes.
#line 1 "ENTRY_10bfc2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bfc2c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bfc2d0; body size 3 bytes.
#line 1 "ENTRY_10bfc2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bfc2d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bfc350; body size 3 bytes.
#line 1 "ENTRY_10bfc350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bfc350(void)

{
  return;
}


// Reference entry 10bfc410; body size 11 bytes.
#line 1 "ENTRY_10bfc410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bfc410(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10bfc420; body size 6 bytes.
#line 1 "ENTRY_10bfc420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bfc420(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10bfc500; body size 14 bytes.
#line 1 "ENTRY_10bfc500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bfc500(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4), 0);
  return;
}


// Reference entry 10bfc520; body size 13 bytes.
#line 1 "ENTRY_10bfc520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bfc520(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10bfc530; body size 12 bytes.
#line 1 "ENTRY_10bfc530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bfc530(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10bfc540; body size 11 bytes.
#line 1 "ENTRY_10bfc540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bfc540(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10bfc550; body size 43 bytes.
#line 1 "ENTRY_10bfc550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bfc550(int param_1,int param_2,int param_3)

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


// Reference entry 10bfc590; body size 87 bytes.
#line 1 "ENTRY_10bfc590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bfc590(uint param_1)

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


// Reference entry 10bfc600; body size 87 bytes.
#line 1 "ENTRY_10bfc600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bfc600(uint param_1)

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


// Reference entry 10bfc670; body size 14 bytes.
#line 1 "ENTRY_10bfc670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bfc670(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4), 0);
  return;
}


// Reference entry 10bfc690; body size 13 bytes.
#line 1 "ENTRY_10bfc690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bfc690(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10bfc6a0; body size 19 bytes.
#line 1 "ENTRY_10bfc6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10bfc6a0(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(thunk_FUN_101c3fc0(param_2), 0);
  return (uint)(uVar1 & *(uint *)(param_1 + 0x18));
}


// Reference entry 10bfc6c0; body size 4 bytes.
#line 1 "ENTRY_10bfc6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bfc6c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10bfc7c0; body size 54 bytes.
#line 1 "ENTRY_10bfc7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bfc7c0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10bfc810; body size 57 bytes.
#line 1 "ENTRY_10bfc810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bfc810(int param_1,int param_2)

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


// Reference entry 10bfc860; body size 61 bytes.
#line 1 "ENTRY_10bfc860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bfc860(int param_1,int param_2)

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


// Reference entry 10bfc8b0; body size 12 bytes.
#line 1 "ENTRY_10bfc8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bfc8b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10bfc8c0; body size 11 bytes.
#line 1 "ENTRY_10bfc8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bfc8c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10bfd890; body size 3 bytes.
#line 1 "ENTRY_10bfd890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10bfd890(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 10bfd8a0; body size 6 bytes.
#line 1 "ENTRY_10bfd8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bfd8a0(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 10bfd8b0; body size 6 bytes.
#line 1 "ENTRY_10bfd8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bfd8b0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10bfd8c0; body size 6 bytes.
#line 1 "ENTRY_10bfd8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bfd8c0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10bfd8d0; body size 6 bytes.
#line 1 "ENTRY_10bfd8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bfd8d0(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 10bfdae0; body size 5 bytes.
#line 1 "ENTRY_10bfdae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bfdae0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bfdaf0; body size 3 bytes.
#line 1 "ENTRY_10bfdaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bfdaf0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bfdb80; body size 28 bytes.
#line 1 "ENTRY_10bfdb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bfdb80(undefined4 *param_1)

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


// Reference entry 10bfe110; body size 9 bytes.
#line 1 "ENTRY_10bfe110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bfe110(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10bfe290; body size 91 bytes.
#line 1 "ENTRY_10bfe290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bfe290(int *param_2)
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


// Reference entry 10bfe310; body size 26 bytes.
#line 1 "ENTRY_10bfe310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bfe310(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10bfe330; body size 43 bytes.
#line 1 "ENTRY_10bfe330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bfe330(int *param_2)
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


// Reference entry 10bfe370; body size 25 bytes.
#line 1 "ENTRY_10bfe370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bfe370(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfe390; body size 26 bytes.
#line 1 "ENTRY_10bfe390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bfe390(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10bfe3b0; body size 26 bytes.
#line 1 "ENTRY_10bfe3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bfe3b0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10bfe3d0; body size 78 bytes.
#line 1 "ENTRY_10bfe3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bfe3d0(int *param_2)
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


// Reference entry 10bfe440; body size 78 bytes.
#line 1 "ENTRY_10bfe440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bfe440(int *param_2)
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


// Reference entry 10bfe4b0; body size 6 bytes.
#line 1 "ENTRY_10bfe4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bfe4b0(void)

{
  return (char *)("SCIAudioData");
}


// Reference entry 10bfe4c0; body size 6 bytes.
#line 1 "ENTRY_10bfe4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bfe4c0(void)

{
  return (char *)("SCIMusicServer");
}


// Reference entry 10bfe4d0; body size 27 bytes.
#line 1 "ENTRY_10bfe4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bfe4d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfe500; body size 27 bytes.
#line 1 "ENTRY_10bfe500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bfe500(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfe570; body size 16 bytes.
#line 1 "ENTRY_10bfe570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bfe570(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfe590; body size 16 bytes.
#line 1 "ENTRY_10bfe590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bfe590(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfe630; body size 115 bytes.
#line 1 "ENTRY_10bfe630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bfe630(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServerData);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0xffffffff);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[10] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAudioData);
  param_1[9] = (undefined4)((uint)&ghidra_vftable_SCAudioData);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfe6c0; body size 9 bytes.
#line 1 "ENTRY_10bfe6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bfe6c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIAudioData);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfe6d0; body size 9 bytes.
#line 1 "ENTRY_10bfe6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bfe6d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIMusicServer);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfe6e0; body size 61 bytes.
#line 1 "ENTRY_10bfe6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bfe6e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMediaItemCollectionEnumerator);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0xffffffff);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfe730; body size 47 bytes.
#line 1 "ENTRY_10bfe730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bfe730(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServer);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfe770; body size 82 bytes.
#line 1 "ENTRY_10bfe770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bfe770(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServerData);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0xffffffff);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfe7e0; body size 19 bytes.
#line 1 "ENTRY_10bfe7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bfe7e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bfe800; body size 19 bytes.
#line 1 "ENTRY_10bfe800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bfe800(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bfea40; body size 31 bytes.
#line 1 "ENTRY_10bfea40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bfea40(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAudioData);
  param_1[9] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[9] = (undefined4)((uint)&ghidra_vftable_SCIObj);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServerData);
  if ((param_1[7] == 0) || (param_1[8] == 0)) {
    if ((FILE *)param_1[6] != (FILE *)(((0x0)))) {
      fclose((FILE *)param_1[6]);
      param_1[6] = (undefined4)(0);
      (**(code **)(*(int *)param_1[2] + 0x20))();
    }
    thunk_FUN_112af4e0("SCMusicServerData",1,"End Reading",uVar2);
  }
  if ((void *)param_1[7] != (void *)(((0x0)))) {
    free((void *)param_1[7]);
    param_1[7] = (undefined4)(0);
    param_1[8] = (undefined4)(0);
  }

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


// Reference entry 10bfea70; body size 7 bytes.
#line 1 "ENTRY_10bfea70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bfea70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bfea80; body size 7 bytes.
#line 1 "ENTRY_10bfea80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bfea80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bfede0; body size 3 bytes.
#line 1 "ENTRY_10bfede0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bfede0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bfedf0; body size 7 bytes.
#line 1 "ENTRY_10bfedf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bfedf0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10bfee00; body size 3 bytes.
#line 1 "ENTRY_10bfee00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bfee00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bfee10; body size 7 bytes.
#line 1 "ENTRY_10bfee10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bfee10(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10bfee20; body size 3 bytes.
#line 1 "ENTRY_10bfee20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bfee20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bfee30; body size 3 bytes.
#line 1 "ENTRY_10bfee30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bfee30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bfee40; body size 3 bytes.
#line 1 "ENTRY_10bfee40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bfee40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bfee50; body size 3 bytes.
#line 1 "ENTRY_10bfee50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bfee50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bfee60; body size 3 bytes.
#line 1 "ENTRY_10bfee60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bfee60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bfee70; body size 3 bytes.
#line 1 "ENTRY_10bfee70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bfee70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bff8b0; body size 9 bytes.
#line 1 "ENTRY_10bff8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bff8b0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10c00ac0; body size 6 bytes.
#line 1 "ENTRY_10c00ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c00ac0(void)

{
  return (char *)("SCIAudioData");
}


// Reference entry 10c00ad0; body size 6 bytes.
#line 1 "ENTRY_10c00ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c00ad0(void)

{
  return (char *)("SCIMusicServer");
}


// Reference entry 10c00c20; body size 3 bytes.
#line 1 "ENTRY_10c00c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c00c20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c00c30; body size 3 bytes.
#line 1 "ENTRY_10c00c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c00c30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c00c40; body size 3 bytes.
#line 1 "ENTRY_10c00c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c00c40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c00c50; body size 3 bytes.
#line 1 "ENTRY_10c00c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c00c50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c00c60; body size 3 bytes.
#line 1 "ENTRY_10c00c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c00c60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c00fd0; body size 28 bytes.
#line 1 "ENTRY_10c00fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c00fd0(undefined4 *param_1)

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


// Reference entry 10c01000; body size 28 bytes.
#line 1 "ENTRY_10c01000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c01000(undefined4 *param_1)

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


// Reference entry 10c01030; body size 28 bytes.
#line 1 "ENTRY_10c01030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c01030(undefined4 *param_1)

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


// Reference entry 10c01060; body size 28 bytes.
#line 1 "ENTRY_10c01060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c01060(undefined4 *param_1)

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


// Reference entry 10c01380; body size 25 bytes.
#line 1 "ENTRY_10c01380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c01380(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c013a0; body size 38 bytes.
#line 1 "ENTRY_10c013a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c013a0(undefined4 param_2,SCStr *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->m_op_ctor(param_3);
  param_1[2] = (undefined4)(*(undefined4 *)(param_3 + 4));
  return (undefined4 *)(param_1);
}


// Reference entry 10c013d0; body size 26 bytes.
#line 1 "ENTRY_10c013d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c013d0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10c013f0; body size 5 bytes.
#line 1 "ENTRY_10c013f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c013f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c017d0; body size 7 bytes.
#line 1 "ENTRY_10c017d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c017d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c017e0; body size 77 bytes.
#line 1 "ENTRY_10c017e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * FUN_10c017e0(SCStr *param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *this_;
  SCStr *pSVar1;
  
  if ((SCStr *)((param_2)) == (SCStr *)(param_1)) {
    return (SCStr *)(param_3);
  }
  do {
    pSVar1 = (SCStr *)(param_2 + -8);
    this_ = (SCStr *)(param_3 + -8);
    if ((SCStr *)((pSVar1)) != (SCStr *)(this_)) {
      ((SCStr *)(this_))->int_release();
      *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)pSVar1));
      ((SCStr *)(this_))->int_addref();
    }
    *(undefined4*)(param_3 + -4) = (undefined4)(*(undefined4 *)(param_2 + -4));
    param_3 = (SCStr *)(this_);
    param_2 = (SCStr *)(pSVar1);
  } while ((SCStr *)(pSVar1) != (SCStr *)(param_1));
  return (SCStr *)(this_);
}


// Reference entry 10c01840; body size 70 bytes.
#line 1 "ENTRY_10c01840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * FUN_10c01840(SCStr *param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  if ((SCStr *)(param_1) == (SCStr *)(param_2)) {
    return (SCStr *)(param_3);
  }
  do {
    if ((SCStr *)(param_1) != (SCStr *)(param_3)) {
      ((SCStr *)(param_3))->int_release();
      *(undefined4*)param_3 = (undefined4)((SCStr *)(*(undefined4 *)param_1));
      ((SCStr *)(param_3))->int_addref();
    }
    pSVar1 = (SCStr *)(param_1 + 4);
    param_1 = (SCStr *)(param_1 + 8);
    *(undefined4*)(param_3 + 4) = (undefined4)(*(undefined4 *)pSVar1);
    param_3 = (SCStr *)(param_3 + 8);
  } while ((SCStr *)(param_1) != (SCStr *)(param_2));
  return (SCStr *)(param_3);
}


// Reference entry 10c018a0; body size 5 bytes.
#line 1 "ENTRY_10c018a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c018a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c019f0; body size 5 bytes.
#line 1 "ENTRY_10c019f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c019f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c01a00; body size 5 bytes.
#line 1 "ENTRY_10c01a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c01a00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c01a10; body size 27 bytes.
#line 1 "ENTRY_10c01a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c01a10(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
  ((SCStr *)(param_2))->m_op_ctor(param_3);
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_3 + 4));
  return;
}


// Reference entry 10c01a40; body size 27 bytes.
#line 1 "ENTRY_10c01a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c01a40(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
  ((SCStr *)(param_2))->m_op_ctor(param_3);
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_3 + 4));
  return;
}


// Reference entry 10c01a70; body size 27 bytes.
#line 1 "ENTRY_10c01a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c01a70(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
  ((SCStr *)(param_2))->m_op_ctor(param_3);
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_3 + 4));
  return;
}


// Reference entry 10c01cb0; body size 5 bytes.
#line 1 "ENTRY_10c01cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c01cb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c01cc0; body size 5 bytes.
#line 1 "ENTRY_10c01cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c01cc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c01cd0; body size 5 bytes.
#line 1 "ENTRY_10c01cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c01cd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c01ce0; body size 6 bytes.
#line 1 "ENTRY_10c01ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c01ce0(void)

{
  return (char *)("SCIServiceAppInteropManager");
}


// Reference entry 10c01cf0; body size 5 bytes.
#line 1 "ENTRY_10c01cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c01cf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c01d00; body size 27 bytes.
#line 1 "ENTRY_10c01d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c01d00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c01db0; body size 21 bytes.
#line 1 "ENTRY_10c01db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c01db0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c01dd0; body size 11 bytes.
#line 1 "ENTRY_10c01dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c01dd0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c01de0; body size 9 bytes.
#line 1 "ENTRY_10c01de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c01de0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c01df0; body size 11 bytes.
#line 1 "ENTRY_10c01df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c01df0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c01e00; body size 9 bytes.
#line 1 "ENTRY_10c01e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c01e00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c01e10; body size 23 bytes.
#line 1 "ENTRY_10c01e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c01e10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c01e30; body size 3 bytes.
#line 1 "ENTRY_10c01e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c01e30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c01e40; body size 23 bytes.
#line 1 "ENTRY_10c01e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c01e40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c01e60; body size 9 bytes.
#line 1 "ENTRY_10c01e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c01e60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIServiceAppInteropManager);
  return (undefined4 *)(param_1);
}


// Reference entry 10c01e70; body size 33 bytes.
#line 1 "ENTRY_10c01e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10c01e70(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (SCStr *)(param_1);
}


// Reference entry 10c01ea0; body size 33 bytes.
#line 1 "ENTRY_10c01ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10c01ea0(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (SCStr *)(param_1);
}


// Reference entry 10c022f0; body size 7 bytes.
#line 1 "ENTRY_10c022f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c022f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c02510; body size 41 bytes.
#line 1 "ENTRY_10c02510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10c02510(SCStr *param_2)
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


// Reference entry 10c02550; body size 14 bytes.
#line 1 "ENTRY_10c02550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c02550(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10c02570; body size 14 bytes.
#line 1 "ENTRY_10c02570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c02570(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10c02590; body size 3 bytes.
#line 1 "ENTRY_10c02590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c02590(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c025a0; body size 3 bytes.
#line 1 "ENTRY_10c025a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c025a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c025b0; body size 3 bytes.
#line 1 "ENTRY_10c025b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c025b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c025c0; body size 3 bytes.
#line 1 "ENTRY_10c025c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c025c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c025d0; body size 6 bytes.
#line 1 "ENTRY_10c025d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10c025d0(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 10c025e0; body size 6 bytes.
#line 1 "ENTRY_10c025e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10c025e0(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 10c028d0; body size 49 bytes.
#line 1 "ENTRY_10c028d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10c028d0(uint param_2)
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


// Reference entry 10c02990; body size 3 bytes.
#line 1 "ENTRY_10c02990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c02990(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10c02a30; body size 3 bytes.
#line 1 "ENTRY_10c02a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c02a30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c02a40; body size 3 bytes.
#line 1 "ENTRY_10c02a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c02a40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c02a50; body size 3 bytes.
#line 1 "ENTRY_10c02a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c02a50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c02a60; body size 3 bytes.
#line 1 "ENTRY_10c02a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c02a60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c02a70; body size 13 bytes.
#line 1 "ENTRY_10c02a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c02a70(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10c02a80; body size 3 bytes.
#line 1 "ENTRY_10c02a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c02a80(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10c02a90; body size 6 bytes.
#line 1 "ENTRY_10c02a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c02a90(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10c02d70; body size 87 bytes.
#line 1 "ENTRY_10c02d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c02d70(uint param_1)

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


// Reference entry 10c02de0; body size 11 bytes.
#line 1 "ENTRY_10c02de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c02de0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10c02df0; body size 9 bytes.
#line 1 "ENTRY_10c02df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c02df0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10c02e70; body size 12 bytes.
#line 1 "ENTRY_10c02e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c02e70(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10c03730; body size 6 bytes.
#line 1 "ENTRY_10c03730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c03730(void)

{
  return (char *)("SCIServiceAppInteropManager");
}


// Reference entry 10c03740; body size 7 bytes.
#line 1 "ENTRY_10c03740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c03740(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10c03750; body size 6 bytes.
#line 1 "ENTRY_10c03750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c03750(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10c03760; body size 6 bytes.
#line 1 "ENTRY_10c03760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c03760(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10c03930; body size 3 bytes.
#line 1 "ENTRY_10c03930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c03930(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c03940; body size 3 bytes.
#line 1 "ENTRY_10c03940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c03940(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c03cc0; body size 28 bytes.
#line 1 "ENTRY_10c03cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c03cc0(undefined4 *param_1)

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


// Reference entry 10c03d90; body size 9 bytes.
#line 1 "ENTRY_10c03d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c03d90(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 10c04370; body size 43 bytes.
#line 1 "ENTRY_10c04370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c04370(int *param_2)
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


// Reference entry 10c043b0; body size 83 bytes.
#line 1 "ENTRY_10c043b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c043b0(int *param_2)
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


// Reference entry 10c04420; body size 135 bytes.
#line 1 "ENTRY_10c04420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10c04420(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar7;
  
  uVar7 = (uint)(*(uint *)(param_1 + 8));
  if ((uint)(uVar7) != *(uint *)(param_2 + 8)) {
    return (uint)(uVar7 & 0xffffff00);
  }
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  puVar2 = (undefined4 *)((undefined4 *)*puVar1);
  while( true ) {
    if ((undefined4 *)((puVar2)) == (undefined4 *)(puVar1)) {
      return (uint)(((uint)((int3)(uVar7 >> 8)) << 8 | (uint)(1)));
    }
    uVar6 = (uint)(((SCStr *)((SCStr *)(puVar2 + 2)))->hash(), 0);
    uVar6 = (uint)(*(uint *)(param_2 + 0x18) & uVar6);
    uVar7 = (uint)(*(uint *)(param_2 + 0xc));
    iVar3 = (int)(*(int *)(uVar7 + 4 + uVar6 * 8));
    if ((int)(iVar3) == *(int *)(param_2 + 4)) break;
    iVar4 = (int)(*(int *)(uVar7 + uVar6 * 8));
    bVar5 = (bool)(((SCStr *)((SCStr *)(puVar2 + 2)))->op_eq((SCStr *)(iVar3 + 8)), 0);
    uVar7 = (uint)(((uint)(extraout_var) << 8 | (uint)(bVar5)));
    while (!bVar5) {
      if (iVar3 == iVar4) goto LAB_10c04499;
      iVar3 = (int)(*(int *)(iVar3 + 4));
      bVar5 = (bool)(((SCStr *)((SCStr *)(puVar2 + 2)))->op_eq((SCStr *)(iVar3 + 8)), 0);
      uVar7 = (uint)(((uint)(extraout_var_00) << 8 | (uint)(bVar5)));
    }
    if (iVar3 == 0) break;
    puVar2 = (undefined4 *)((undefined4 *)*puVar2);
  }
LAB_10c04499:
  return (uint)(uVar7 & 0xffffff00);
}


// Reference entry 10c04b50; body size 133 bytes.
#line 1 "ENTRY_10c04b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10c04b50(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar7;
  
  uVar7 = (uint)(*(uint *)(param_1 + 8));
  if ((uint)(uVar7) == *(uint *)(param_2 + 8)) {
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    while( true ) {
      if ((undefined4 *)((puVar2)) == (undefined4 *)(puVar1)) {
        return (uint)(((uint)((int3)(uVar7 >> 8)) << 8 | (uint)(1)));
      }
      uVar6 = (uint)(((SCStr *)((SCStr *)(puVar2 + 2)))->hash(), 0);
      uVar6 = (uint)(*(uint *)(param_2 + 0x18) & uVar6);
      uVar7 = (uint)(*(uint *)(param_2 + 0xc));
      iVar3 = (int)(*(int *)(uVar7 + 4 + uVar6 * 8));
      if ((int)(iVar3) == *(int *)(param_2 + 4)) break;
      iVar4 = (int)(*(int *)(uVar7 + uVar6 * 8));
      bVar5 = (bool)(((SCStr *)((SCStr *)(puVar2 + 2)))->op_eq((SCStr *)(iVar3 + 8)), 0);
      uVar7 = (uint)(((uint)(extraout_var) << 8 | (uint)(bVar5)));
      while (!bVar5) {
        if (iVar3 == iVar4) goto LAB_10c04bce;
        iVar3 = (int)(*(int *)(iVar3 + 4));
        bVar5 = (bool)(((SCStr *)((SCStr *)(puVar2 + 2)))->op_eq((SCStr *)(iVar3 + 8)), 0);
        uVar7 = (uint)(((uint)(extraout_var_00) << 8 | (uint)(bVar5)));
      }
      if (iVar3 == 0) break;
      puVar2 = (undefined4 *)((undefined4 *)*puVar2);
    }
  }
LAB_10c04bce:
  return (uint)(uVar7 & 0xffffff00);
}


// Reference entry 10c05270; body size 27 bytes.
#line 1 "ENTRY_10c05270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c05270(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c052a0; body size 42 bytes.
#line 1 "ENTRY_10c052a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c052a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOwnedObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 10c052e0; body size 42 bytes.
#line 1 "ENTRY_10c052e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c052e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITearOffObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 10c05400; body size 42 bytes.
#line 1 "ENTRY_10c05400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c05400(undefined1 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *(undefined1*)(param_1 + 2) = (undefined1)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCChickenExitActionDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10c05440; body size 9 bytes.
#line 1 "ENTRY_10c05440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c05440(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIZoneGroupMgr);
  return (undefined4 *)(param_1);
}


// Reference entry 10c05ae0; body size 19 bytes.
#line 1 "ENTRY_10c05ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c05ae0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c05b00; body size 26 bytes.
#line 1 "ENTRY_10c05b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c05b00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c05d70; body size 19 bytes.
#line 1 "ENTRY_10c05d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c05d70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c05d90; body size 7 bytes.
#line 1 "ENTRY_10c05d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c05d90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c061d0; body size 3 bytes.
#line 1 "ENTRY_10c061d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c061d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c061e0; body size 3 bytes.
#line 1 "ENTRY_10c061e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c061e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c061f0; body size 7 bytes.
#line 1 "ENTRY_10c061f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c061f0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10c06200; body size 7 bytes.
#line 1 "ENTRY_10c06200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c06200(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10c06210; body size 3 bytes.
#line 1 "ENTRY_10c06210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c06210(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c06220; body size 3 bytes.
#line 1 "ENTRY_10c06220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c06220(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c06230; body size 3 bytes.
#line 1 "ENTRY_10c06230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c06230(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c06240; body size 3 bytes.
#line 1 "ENTRY_10c06240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c06240(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c06250; body size 16 bytes.
#line 1 "ENTRY_10c06250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c06250(int *param_2, unsigned int recovered_unused_stack_0)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 8);
  return;
}


// Reference entry 10c06270; body size 49 bytes.
#line 1 "ENTRY_10c06270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10c06270(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  
  if (*(byte *)((param_2 + 1)) < *(byte *)((param_1 + 1))) {
    return (undefined4)(1);
  }
  if (*(byte *)((param_1 + 1)) == *(byte *)((param_2 + 1))) {
    if (*(byte *)((param_2 + 2)) < *(byte *)((param_1 + 2))) {
      return (undefined4)(1);
    }
    if (*(byte *)((param_1 + 2)) == *(byte *)((param_2 + 2))) {
      uVar1 = (uint)(*(uint *)(param_1 + 4));
      uVar2 = (uint)(*(uint *)(param_2 + 4));
      if (uVar2 <= uVar1 && uVar1 != uVar2) {
        return (undefined4)(1);
      }
      if (uVar1 == uVar2) {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 10c07050; body size 3 bytes.
#line 1 "ENTRY_10c07050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c07050(void)

{
  return (undefined4)(0);
}


// Reference entry 10c071e0; body size 14 bytes.
#line 1 "ENTRY_10c071e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c071e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4), 0);
  return;
}


// Reference entry 10c07600; body size 47 bytes.
#line 1 "ENTRY_10c07600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10c07600(int param_2)
{
  int param_1 = (int )this;
  if (*(byte *)((param_2 + 1)) < *(byte *)((param_1 + 1))) {
    return (undefined4)(1);
  }
  if (*(byte *)((param_1 + 1)) == *(byte *)((param_2 + 1))) {
    if (*(byte *)((param_2 + 2)) < *(byte *)((param_1 + 2))) {
      return (undefined4)(1);
    }
    if (*(byte *)((param_1 + 2)) == *(byte *)((param_2 + 2))) {
      return (undefined4)(0);
    }
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 10c0e540; body size 11 bytes.
#line 1 "ENTRY_10c0e540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c0e540(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x52c) != 0);
}


// Reference entry 10c10150; body size 4 bytes.
#line 1 "ENTRY_10c10150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c10150(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10c10880; body size 21 bytes.
#line 1 "ENTRY_10c10880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __stdcall FUN_10c10880(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)(1);
  if ((param_1 == 1) || (param_1 == 3)) {
    uVar1 = (undefined1)(0);
  }
  return (undefined1)(uVar1);
}


// Reference entry 10c108b0; body size 8 bytes.
#line 1 "ENTRY_10c108b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c108b0(int param_1)

{
  return (bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 10c146c0; body size 33 bytes.
#line 1 "ENTRY_10c146c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10c146c0(int param_1)

{
  if (((*(char *)(param_1 + 0x520) != '\0') && (*(char *)(param_1 + 0x51f) != '\0')) &&
     (*(char *)(param_1 + 0x51e) == '\0')) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 10c14aa0; body size 7 bytes.
#line 1 "ENTRY_10c14aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c14aa0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10c15610; body size 3 bytes.
#line 1 "ENTRY_10c15610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c15610(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c15620; body size 3 bytes.
#line 1 "ENTRY_10c15620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c15620(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c15a70; body size 28 bytes.
#line 1 "ENTRY_10c15a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c15a70(undefined4 *param_1)

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


// Reference entry 10c15aa0; body size 28 bytes.
#line 1 "ENTRY_10c15aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c15aa0(undefined4 *param_1)

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


// Reference entry 10c16be0; body size 103 bytes.
#line 1 "ENTRY_10c16be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_10c16be0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  uVar1 = (uint)(thunk_FUN_110828b0(), 0);
  if (((uVar1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x18) != 0)) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x28) != (undefined1 *)((0x0))) {
      puVar4 = (undefined1 *)(*(undefined1 **)(param_1 + 0x28), 0);
    }
    iVar2 = (int)((**(code **)(*(int *)(uVar1 + 0x1c) + 0xc))(puVar4), 0);
    uVar1 = (uint)(0);
    if (iVar2 != 0) {
      uVar3 = (uint)((**(code **)(**(int **)(param_1 + 0x20) + 0x14))(), 0);
      uVar1 = (uint)(thunk_FUN_111382a0(0), 0);
      if (uVar1 == uVar3) {
        uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x18) + 0x14))(), 0);
        if (uVar1 == 0) {
          return (uint)(1);
        }
      }
    }
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 10c16e40; body size 7 bytes.
#line 1 "ENTRY_10c16e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c16e40(int param_1)

{
  return (int)(param_1 + 0x843);
}


// Reference entry 10c16ee0; body size 91 bytes.
#line 1 "ENTRY_10c16ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c16ee0(int *param_2)
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


// Reference entry 10c16f60; body size 26 bytes.
#line 1 "ENTRY_10c16f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c16f60(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10c16f80; body size 6 bytes.
#line 1 "ENTRY_10c16f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c16f80(void)

{
  return (char *)("SCILocalMediaCollectionListener");
}


// Reference entry 10c17070; body size 9 bytes.
#line 1 "ENTRY_10c17070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c17070(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCILocalMediaCollectionListener);
  return (undefined4 *)(param_1);
}


// Reference entry 10c17860; body size 44 bytes.
#line 1 "ENTRY_10c17860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c17860(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10c17080<>(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLocalMusicShuffleAllNodeBrowseItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCLocalMusicShuffleAllNodeBrowseItem);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCLocalMusicShuffleAllNodeBrowseItem);
  return (undefined4 *)(param_1);
}


// Reference entry 10c17920; body size 5 bytes.
#line 1 "ENTRY_10c17920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c17920(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLocalMusicBrowseItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCLocalMusicBrowseItem);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCLocalMusicBrowseItem);
  if ((int *)param_1[0x11] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[0x11] + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 0x3b)))->int_release();
  param_1[0x3b] = (undefined4)(0);
  thunk_FUN_10202e00();
  piVar1 = (int *)((int *)param_1[0x10]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0xf] = (undefined4)(0);
    param_1[0x10] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();

  return;

 } catch (...) { }
}


// Reference entry 10c17ca0; body size 25 bytes.
#line 1 "ENTRY_10c17ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c17ca0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLocalMusicShuffleAllNodeBrowseItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCLocalMusicShuffleAllNodeBrowseItem);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCLocalMusicShuffleAllNodeBrowseItem);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLocalMusicBrowseItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCLocalMusicBrowseItem);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCLocalMusicBrowseItem);
  if ((int *)param_1[0x11] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[0x11] + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 0x3b)))->int_release();
  param_1[0x3b] = (undefined4)(0);
  thunk_FUN_10202e00();
  piVar1 = (int *)((int *)param_1[0x10]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0xf] = (undefined4)(0);
    param_1[0x10] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();

  return;

 } catch (...) { }
}


// Reference entry 10c17cc0; body size 3 bytes.
#line 1 "ENTRY_10c17cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c17cc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c17cd0; body size 7 bytes.
#line 1 "ENTRY_10c17cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c17cd0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10c17ce0; body size 3 bytes.
#line 1 "ENTRY_10c17ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c17ce0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c19520; body size 23 bytes.
#line 1 "ENTRY_10c19520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10c19520(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x150));
  return (SCStr *)(param_2);
}


// Reference entry 10c1ec40; body size 7 bytes.
#line 1 "ENTRY_10c1ec40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c1ec40(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xa8));
}


// Reference entry 10c1ec50; body size 7 bytes.
#line 1 "ENTRY_10c1ec50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c1ec50(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xa0));
}


// Reference entry 10c1ec60; body size 21 bytes.
#line 1 "ENTRY_10c1ec60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c1ec60(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0xa8) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0xa8) + 0x30))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10c1ed50; body size 6 bytes.
#line 1 "ENTRY_10c1ed50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c1ed50(void)

{
  return (char *)("SCILocalMediaCollectionListener");
}


// Reference entry 10c1ede0; body size 7 bytes.
#line 1 "ENTRY_10c1ede0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c1ede0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10c1edf0; body size 18 bytes.
#line 1 "ENTRY_10c1edf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c1edf0(int param_1)

{
  char *pcVar1;
  uint3 uVar2;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0xc), 0);
  uVar2 = (uint3)((uint3)((uint)pcVar1 >> 8));
  if (((char *)(pcVar1) != (char *)(0x0)) && (*pcVar1 != (char)(('\0')))) {
    return (int)((uint)uVar2 << 8);
  }
  return (int)(((uint)(uVar2) << 8 | (uint)(1)));
}


// Reference entry 10c1ef00; body size 7 bytes.
#line 1 "ENTRY_10c1ef00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c1ef00(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10c20b10; body size 3 bytes.
#line 1 "ENTRY_10c20b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c20b10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c20d10; body size 28 bytes.
#line 1 "ENTRY_10c20d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c20d10(undefined4 *param_1)

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


// Reference entry 10c20ed0; body size 18 bytes.
#line 1 "ENTRY_10c20ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c20ed0(int param_1)

{
  if (*(int **)(param_1 + 0xa0) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0xa0) + 0x20))(0);
  }
  return;
}


// Reference entry 10c21120; body size 91 bytes.
#line 1 "ENTRY_10c21120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c21120(int *param_2)
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


// Reference entry 10c211a0; body size 91 bytes.
#line 1 "ENTRY_10c211a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c211a0(int *param_2)
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


// Reference entry 10c21290; body size 3 bytes.
#line 1 "ENTRY_10c21290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c21290(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c21b80; body size 28 bytes.
#line 1 "ENTRY_10c21b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c21b80(undefined4 *param_1)

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


// Reference entry 10c21bb0; body size 38 bytes.
#line 1 "ENTRY_10c21bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10c21bb0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 10c21be0; body size 25 bytes.
#line 1 "ENTRY_10c21be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c21be0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c21c00; body size 22 bytes.
#line 1 "ENTRY_10c21c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c21c00(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c21d60; body size 18 bytes.
#line 1 "ENTRY_10c21d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c21d60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c21d80; body size 25 bytes.
#line 1 "ENTRY_10c21d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c21d80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c21da0; body size 25 bytes.
#line 1 "ENTRY_10c21da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c21da0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c21dc0; body size 38 bytes.
#line 1 "ENTRY_10c21dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10c21dc0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 10c21df0; body size 22 bytes.
#line 1 "ENTRY_10c21df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c21df0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c21e10; body size 5 bytes.
#line 1 "ENTRY_10c21e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c21e10(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c21e20; body size 5 bytes.
#line 1 "ENTRY_10c21e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c21e20(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c21e30; body size 40 bytes.
#line 1 "ENTRY_10c21e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10c21e30(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 10c21e70; body size 40 bytes.
#line 1 "ENTRY_10c21e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10c21e70(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 10c21ef0; body size 26 bytes.
#line 1 "ENTRY_10c21ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c21ef0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10c21f10; body size 3 bytes.
#line 1 "ENTRY_10c21f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c21f10(void)

{
  return;
}


// Reference entry 10c21f20; body size 13 bytes.
#line 1 "ENTRY_10c21f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c21f20(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c21f30; body size 13 bytes.
#line 1 "ENTRY_10c21f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c21f30(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c21f40; body size 13 bytes.
#line 1 "ENTRY_10c21f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c21f40(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c21f50; body size 3 bytes.
#line 1 "ENTRY_10c21f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c21f50(void)

{
  return;
}


// Reference entry 10c21f60; body size 3 bytes.
#line 1 "ENTRY_10c21f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c21f60(void)

{
  return;
}


// Reference entry 10c22010; body size 39 bytes.
#line 1 "ENTRY_10c22010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c22010(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10c22040; body size 18 bytes.
#line 1 "ENTRY_10c22040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c22040(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10c22060; body size 39 bytes.
#line 1 "ENTRY_10c22060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c22060(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10c22090; body size 39 bytes.
#line 1 "ENTRY_10c22090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c22090(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10c220c0; body size 39 bytes.
#line 1 "ENTRY_10c220c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c220c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10c226e0; body size 15 bytes.
#line 1 "ENTRY_10c226e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c226e0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10c227a0; body size 7 bytes.
#line 1 "ENTRY_10c227a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c227a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c227b0; body size 7 bytes.
#line 1 "ENTRY_10c227b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c227b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c227c0; body size 5 bytes.
#line 1 "ENTRY_10c227c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c227c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c22b10; body size 5 bytes.
#line 1 "ENTRY_10c22b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c22b10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c22c60; body size 5 bytes.
#line 1 "ENTRY_10c22c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c22c60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c22c70; body size 5 bytes.
#line 1 "ENTRY_10c22c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c22c70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c22c80; body size 5 bytes.
#line 1 "ENTRY_10c22c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c22c80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c22c90; body size 5 bytes.
#line 1 "ENTRY_10c22c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c22c90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c22ca0; body size 5 bytes.
#line 1 "ENTRY_10c22ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c22ca0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c22cb0; body size 5 bytes.
#line 1 "ENTRY_10c22cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c22cb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c22cc0; body size 34 bytes.
#line 1 "ENTRY_10c22cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c22cc0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  return;
}


// Reference entry 10c22cf0; body size 34 bytes.
#line 1 "ENTRY_10c22cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c22cf0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  return;
}


// Reference entry 10c22d20; body size 28 bytes.
#line 1 "ENTRY_10c22d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c22d20(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  *param_2 = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
                    
                    
    (**(code **)(*piVar1 + 4))();
    return;
  }
  return;
}


// Reference entry 10c22d50; body size 28 bytes.
#line 1 "ENTRY_10c22d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c22d50(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  *param_2 = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
                    
                    
    (**(code **)(*piVar1 + 4))();
    return;
  }
  return;
}


// Reference entry 10c234c0; body size 15 bytes.
#line 1 "ENTRY_10c234c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c234c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10c23560; body size 5 bytes.
#line 1 "ENTRY_10c23560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c23560(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c23570; body size 5 bytes.
#line 1 "ENTRY_10c23570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c23570(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c23580; body size 5 bytes.
#line 1 "ENTRY_10c23580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c23580(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c23590; body size 5 bytes.
#line 1 "ENTRY_10c23590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c23590(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c235a0; body size 5 bytes.
#line 1 "ENTRY_10c235a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c235a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c235b0; body size 5 bytes.
#line 1 "ENTRY_10c235b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c235b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c235c0; body size 5 bytes.
#line 1 "ENTRY_10c235c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c235c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c235d0; body size 5 bytes.
#line 1 "ENTRY_10c235d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c235d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c23750; body size 30 bytes.
#line 1 "ENTRY_10c23750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c23750(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10c23870; body size 27 bytes.
#line 1 "ENTRY_10c23870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c23870(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c238c0; body size 18 bytes.
#line 1 "ENTRY_10c238c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c238c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c239c0; body size 11 bytes.
#line 1 "ENTRY_10c239c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c239c0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c239d0; body size 11 bytes.
#line 1 "ENTRY_10c239d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c239d0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c239e0; body size 16 bytes.
#line 1 "ENTRY_10c239e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c239e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c23a00; body size 23 bytes.
#line 1 "ENTRY_10c23a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 * __thiscall Recovered_Bulk::m_FUN_10c23a00(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
  *param_1 = (undefined8)(*param_2);
  *(undefined4*)(param_1 + 1) = (undefined4)(*(undefined4 *)(param_2 + 1));
  return (undefined8 *)(param_1);
}


// Reference entry 10c23a20; body size 14 bytes.
#line 1 "ENTRY_10c23a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c23a20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c23a40; body size 21 bytes.
#line 1 "ENTRY_10c23a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c23a40(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c23a60; body size 11 bytes.
#line 1 "ENTRY_10c23a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c23a60(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c23a70; body size 11 bytes.
#line 1 "ENTRY_10c23a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c23a70(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c23a80; body size 23 bytes.
#line 1 "ENTRY_10c23a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c23a80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c23aa0; body size 23 bytes.
#line 1 "ENTRY_10c23aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c23aa0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c23ac0; body size 3 bytes.
#line 1 "ENTRY_10c23ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c23ac0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c23ad0; body size 3 bytes.
#line 1 "ENTRY_10c23ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c23ad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c23c00; body size 23 bytes.
#line 1 "ENTRY_10c23c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c23c00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c23e00; body size 9 bytes.
#line 1 "ENTRY_10c23e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c23e00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCICachedHousehold);
  return (undefined4 *)(param_1);
}


// Reference entry 10c23e10; body size 11 bytes.
#line 1 "ENTRY_10c23e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c23e10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c24070; body size 3 bytes.
#line 1 "ENTRY_10c24070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c24070(void)

{
  return;
}


// Reference entry 10c24150; body size 5 bytes.
#line 1 "ENTRY_10c24150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c24150(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = (int)(*(int *)(param_1 + 0x14));
  uVar3 = (uint)(*(int *)(param_1 + 0x18) - iVar1 & 0xfffffffc);
  iVar2 = (int)(iVar1);
  if (0xfff < uVar3) {
    iVar2 = (int)(*(int *)(iVar1 + -4));
    uVar3 = (uint)(uVar3 + 0x23);
    if (0x1f < (iVar1 - iVar2) - 4U) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(iVar2,uVar3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  puVar4 = (undefined4 *)((undefined4 *)(param_1 + 0xc));
  thunk_FUN_10c22600(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x14);
  return;
}


// Reference entry 10c242b0; body size 7 bytes.
#line 1 "ENTRY_10c242b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c242b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c24320; body size 14 bytes.
#line 1 "ENTRY_10c24320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c24320(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10c24340; body size 14 bytes.
#line 1 "ENTRY_10c24340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c24340(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10c24360; body size 14 bytes.
#line 1 "ENTRY_10c24360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c24360(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10c24380; body size 14 bytes.
#line 1 "ENTRY_10c24380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c24380(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10c246a0; body size 12 bytes.
#line 1 "ENTRY_10c246a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10c246a0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 10c246b0; body size 3 bytes.
#line 1 "ENTRY_10c246b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c246b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c246c0; body size 6 bytes.
#line 1 "ENTRY_10c246c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c246c0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c246d0; body size 6 bytes.
#line 1 "ENTRY_10c246d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c246d0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c246e0; body size 3 bytes.
#line 1 "ENTRY_10c246e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c246e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c246f0; body size 3 bytes.
#line 1 "ENTRY_10c246f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c246f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c24700; body size 9 bytes.
#line 1 "ENTRY_10c24700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c24700(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c24710; body size 9 bytes.
#line 1 "ENTRY_10c24710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c24710(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c24720; body size 6 bytes.
#line 1 "ENTRY_10c24720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10c24720(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 10c24730; body size 6 bytes.
#line 1 "ENTRY_10c24730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10c24730(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 10c24740; body size 10 bytes.
#line 1 "ENTRY_10c24740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10c24740(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10c249f0; body size 22 bytes.
#line 1 "ENTRY_10c249f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c249f0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10c24b50; body size 49 bytes.
#line 1 "ENTRY_10c24b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10c24b50(uint param_2)
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


// Reference entry 10c24c20; body size 20 bytes.
#line 1 "ENTRY_10c24c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c24c20(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0xccccccc) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10c24c40; body size 67 bytes.
#line 1 "ENTRY_10c24c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c24c40(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10) + 1);
  fVar2 = (float)((float)((double)iVar1 + (double)(uint)(&DAT_11880fb0)[-(iVar1 >> 0x1f)]) /
          (float)((double)*(int *)(param_1 + 0x24) + (double)(uint)(&DAT_11880fb0)[-(*(int *)(param_1 + 0x24) >> 0x1f)]));
  return (bool)(*(float *)(param_1 + 8) <= (float)(fVar2) &&(float)( fVar2) != *(float *)(param_1 + 8));
}


// Reference entry 10c24ca0; body size 3 bytes.
#line 1 "ENTRY_10c24ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c24ca0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10c24fb0; body size 3 bytes.
#line 1 "ENTRY_10c24fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c24fb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c24fc0; body size 3 bytes.
#line 1 "ENTRY_10c24fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c24fc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c24fd0; body size 3 bytes.
#line 1 "ENTRY_10c24fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c24fd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c24fe0; body size 3 bytes.
#line 1 "ENTRY_10c24fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c24fe0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c24ff0; body size 3 bytes.
#line 1 "ENTRY_10c24ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c24ff0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c25000; body size 3 bytes.
#line 1 "ENTRY_10c25000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c25000(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c25010; body size 3 bytes.
#line 1 "ENTRY_10c25010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c25010(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c25020; body size 3 bytes.
#line 1 "ENTRY_10c25020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c25020(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c25030; body size 3 bytes.
#line 1 "ENTRY_10c25030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c25030(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c25040; body size 3 bytes.
#line 1 "ENTRY_10c25040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c25040(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c250d0; body size 4 bytes.
#line 1 "ENTRY_10c250d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c250d0(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10c250e0; body size 4 bytes.
#line 1 "ENTRY_10c250e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c250e0(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10c25160; body size 3 bytes.
#line 1 "ENTRY_10c25160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c25160(void)

{
  return;
}


// Reference entry 10c25170; body size 3 bytes.
#line 1 "ENTRY_10c25170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c25170(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10c25300; body size 11 bytes.
#line 1 "ENTRY_10c25300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c25300(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10c25310; body size 6 bytes.
#line 1 "ENTRY_10c25310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c25310(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10c25320; body size 6 bytes.
#line 1 "ENTRY_10c25320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c25320(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10c25620; body size 14 bytes.
#line 1 "ENTRY_10c25620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c25620(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0xc), 0);
  return;
}


// Reference entry 10c25640; body size 13 bytes.
#line 1 "ENTRY_10c25640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c25640(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10c25650; body size 12 bytes.
#line 1 "ENTRY_10c25650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c25650(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 10c25660; body size 11 bytes.
#line 1 "ENTRY_10c25660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c25660(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10c25670; body size 43 bytes.
#line 1 "ENTRY_10c25670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c25670(int param_1,int param_2,int param_3)

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


// Reference entry 10c256d0; body size 90 bytes.
#line 1 "ENTRY_10c256d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c256d0(uint param_1)

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


// Reference entry 10c25750; body size 87 bytes.
#line 1 "ENTRY_10c25750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c25750(uint param_1)

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


// Reference entry 10c257c0; body size 87 bytes.
#line 1 "ENTRY_10c257c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c257c0(uint param_1)

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


// Reference entry 10c25830; body size 11 bytes.
#line 1 "ENTRY_10c25830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c25830(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10c25840; body size 19 bytes.
#line 1 "ENTRY_10c25840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10c25840(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(thunk_FUN_101a3180(param_2), 0);
  return (uint)(uVar1 & *(uint *)(param_1 + 0x20));
}


// Reference entry 10c25860; body size 4 bytes.
#line 1 "ENTRY_10c25860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c25860(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10c26050; body size 27 bytes.
#line 1 "ENTRY_10c26050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10c26050(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_101a2e90(param_2,param_1 + 0xc,param_1 + 8);
  return (undefined4)(param_2);
}


// Reference entry 10c26080; body size 9 bytes.
#line 1 "ENTRY_10c26080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c26080(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10c26090; body size 68 bytes.
#line 1 "ENTRY_10c26090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c26090(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar1 = (int *)((int *)(param_1 + 0xc));
    iStack_4 = (int)(param_1);
    thunk_FUN_10c22600(piVar1,*(undefined4 *)(param_1 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_10c234e0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),&iStack_4);
  }
  return;
}


// Reference entry 10c26140; body size 57 bytes.
#line 1 "ENTRY_10c26140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c26140(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10c26190; body size 60 bytes.
#line 1 "ENTRY_10c26190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c26190(int param_1,int param_2)

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


// Reference entry 10c26230; body size 61 bytes.
#line 1 "ENTRY_10c26230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c26230(int param_1,int param_2)

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


// Reference entry 10c262a0; body size 18 bytes.
#line 1 "ENTRY_10c262a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c262a0(undefined4 param_1)

{
  thunk_FUN_10320a30(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10c262c0; body size 23 bytes.
#line 1 "ENTRY_10c262c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined * FUN_10c262c0(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_1);
  return (undefined *)(&DAT_121a5348);
}


// Reference entry 10c263b0; body size 17 bytes.
#line 1 "ENTRY_10c263b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c263b0(int *param_1)

{
  (**(code **)(*param_1 + 0x3c))(&DAT_121a5338);
  return;
}


// Reference entry 10c263d0; body size 11 bytes.
#line 1 "ENTRY_10c263d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c263d0(int *param_1)

{
                    
                    
  (**(code **)(*param_1 + 0x20))();
  return;
}


// Reference entry 10c263e0; body size 17 bytes.
#line 1 "ENTRY_10c263e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c263e0(int *param_1)

{
  (**(code **)(*param_1 + 0x3c))(&DAT_121a533c);
  return;
}


// Reference entry 10c26490; body size 18 bytes.
#line 1 "ENTRY_10c26490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c26490(undefined4 param_1)

{
  thunk_FUN_10320fd0<>(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10c264b0; body size 23 bytes.
#line 1 "ENTRY_10c264b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined * FUN_10c264b0(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_1);
  return (undefined *)(&DAT_121a536c);
}


// Reference entry 10c264d0; body size 18 bytes.
#line 1 "ENTRY_10c264d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c264d0(undefined4 param_1)

{
  thunk_FUN_10320510(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10c264f0; body size 23 bytes.
#line 1 "ENTRY_10c264f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined * FUN_10c264f0(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_1);
  return (undefined *)(&DAT_121a534c);
}


// Reference entry 10c26510; body size 18 bytes.
#line 1 "ENTRY_10c26510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c26510(undefined4 param_1)

{
  thunk_FUN_10324520<>(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10c26530; body size 23 bytes.
#line 1 "ENTRY_10c26530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined * FUN_10c26530(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_1);
  return (undefined *)(&DAT_121a5378);
}


// Reference entry 10c26550; body size 18 bytes.
#line 1 "ENTRY_10c26550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c26550(undefined4 param_1)

{
  thunk_FUN_1031f5f0(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10c265b0; body size 23 bytes.
#line 1 "ENTRY_10c265b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined * FUN_10c265b0(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_1);
  return (undefined *)(&DAT_121a5368);
}


// Reference entry 10c265d0; body size 12 bytes.
#line 1 "ENTRY_10c265d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c265d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10c27170; body size 4 bytes.
#line 1 "ENTRY_10c27170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10c27170(int param_1)

{
  return (float10)((float10)*(float *)(param_1 + 8));
}


// Reference entry 10c27180; body size 6 bytes.
#line 1 "ENTRY_10c27180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c27180(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10c27190; body size 6 bytes.
#line 1 "ENTRY_10c27190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c27190(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10c271a0; body size 6 bytes.
#line 1 "ENTRY_10c271a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c271a0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10c271b0; body size 6 bytes.
#line 1 "ENTRY_10c271b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c271b0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10c271c0; body size 6 bytes.
#line 1 "ENTRY_10c271c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c271c0(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10c271d0; body size 6 bytes.
#line 1 "ENTRY_10c271d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c271d0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10c273a0; body size 20 bytes.
#line 1 "ENTRY_10c273a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c273a0(int *param_1)

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


// Reference entry 10c273c0; body size 41 bytes.
#line 1 "ENTRY_10c273c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c273c0(uint param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  if (param_2 <= (uint)(param_1[2] - *param_1 >> 3)) {
    return;
  }
  if (param_2 < 0x20000000) {


    iVar1 = (int)(param_1[1]);
    iVar2 = (int)(*param_1);
    uVar3 = (undefined4)(thunk_FUN_102ae200(param_2), 0);

    thunk_FUN_102adbf0(*param_1,param_1[1],uVar3);
    thunk_FUN_102ac6a0(uVar3,iVar1 - iVar2 >> 3,param_2);

    return;
  }
                    
  thunk_FUN_102adcc0();

 } catch (...) { }
}


// Reference entry 10c27b30; body size 4 bytes.
#line 1 "ENTRY_10c27b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c27b30(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 10c27b40; body size 9 bytes.
#line 1 "ENTRY_10c27b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c27b40(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10c27b50; body size 4 bytes.
#line 1 "ENTRY_10c27b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c27b50(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c28ec0; body size 91 bytes.
#line 1 "ENTRY_10c28ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c28ec0(int *param_2)
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


// Reference entry 10c28f40; body size 6 bytes.
#line 1 "ENTRY_10c28f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c28f40(void)

{
  return (char *)("SCIConnectedPartnersManager");
}


// Reference entry 10c28f50; body size 27 bytes.
#line 1 "ENTRY_10c28f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c28f50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c28f80; body size 16 bytes.
#line 1 "ENTRY_10c28f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c28f80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c29060; body size 9 bytes.
#line 1 "ENTRY_10c29060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c29060(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIConnectedPartnersManager);
  return (undefined4 *)(param_1);
}


// Reference entry 10c292b0; body size 7 bytes.
#line 1 "ENTRY_10c292b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c292b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c293c0; body size 65 bytes.
#line 1 "ENTRY_10c293c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c293c0(int *param_2)
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


// Reference entry 10c29490; body size 3 bytes.
#line 1 "ENTRY_10c29490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c29490(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c294a0; body size 3 bytes.
#line 1 "ENTRY_10c294a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c294a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c294b0; body size 3 bytes.
#line 1 "ENTRY_10c294b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c294b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c2a5e0; body size 6 bytes.
#line 1 "ENTRY_10c2a5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c2a5e0(void)

{
  return (char *)("SCIConnectedPartnersManager");
}


// Reference entry 10c2a5f0; body size 7 bytes.
#line 1 "ENTRY_10c2a5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c2a5f0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10c2a660; body size 3 bytes.
#line 1 "ENTRY_10c2a660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c2a660(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c2a7c0; body size 28 bytes.
#line 1 "ENTRY_10c2a7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c2a7c0(undefined4 *param_1)

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


// Reference entry 10c2a920; body size 25 bytes.
#line 1 "ENTRY_10c2a920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c2a920(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c2aa60; body size 33 bytes.
#line 1 "ENTRY_10c2aa60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c2aa60(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10c2aa90; body size 3 bytes.
#line 1 "ENTRY_10c2aa90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c2aa90(void)

{
  return;
}


// Reference entry 10c2abe0; body size 18 bytes.
#line 1 "ENTRY_10c2abe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c2abe0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10c2b170; body size 7 bytes.
#line 1 "ENTRY_10c2b170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c2b170(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c2b180; body size 7 bytes.
#line 1 "ENTRY_10c2b180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c2b180(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c2b1c0; body size 5 bytes.
#line 1 "ENTRY_10c2b1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c2b1c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c2b2a0; body size 36 bytes.
#line 1 "ENTRY_10c2b2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c2b2a0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10c2b460; body size 13 bytes.
#line 1 "ENTRY_10c2b460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c2b460(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10c2b620; body size 3 bytes.
#line 1 "ENTRY_10c2b620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c2b620(void)

{
  return;
}


// Reference entry 10c2b630; body size 36 bytes.
#line 1 "ENTRY_10c2b630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c2b630(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10c2aca0<>(puVar1,param_2);
  return;
}


// Reference entry 10c2b720; body size 5 bytes.
#line 1 "ENTRY_10c2b720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c2b720(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c2b730; body size 5 bytes.
#line 1 "ENTRY_10c2b730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c2b730(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c2b750; body size 5 bytes.
#line 1 "ENTRY_10c2b750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c2b750(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c2b770; body size 5 bytes.
#line 1 "ENTRY_10c2b770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c2b770(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c2b860; body size 9 bytes.
#line 1 "ENTRY_10c2b860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c2b860(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c2b870; body size 21 bytes.
#line 1 "ENTRY_10c2b870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c2b870(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c2b890; body size 23 bytes.
#line 1 "ENTRY_10c2b890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c2b890(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c2b8b0; body size 3 bytes.
#line 1 "ENTRY_10c2b8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c2b8b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c2b8c0; body size 23 bytes.
#line 1 "ENTRY_10c2b8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c2b8c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c2c090; body size 12 bytes.
#line 1 "ENTRY_10c2c090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10c2c090(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 4);
}


// Reference entry 10c2c0a0; body size 3 bytes.
#line 1 "ENTRY_10c2c0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c2c0a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c2c0b0; body size 7 bytes.
#line 1 "ENTRY_10c2c0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c2c0b0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10c2c0c0; body size 7 bytes.
#line 1 "ENTRY_10c2c0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c2c0c0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10c2c0d0; body size 3 bytes.
#line 1 "ENTRY_10c2c0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c2c0d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c2c220; body size 49 bytes.
#line 1 "ENTRY_10c2c220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10c2c220(uint param_2)
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


// Reference entry 10c2c260; body size 49 bytes.
#line 1 "ENTRY_10c2c260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10c2c260(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 4);
  if (0xfffffff - (uVar1 >> 1) < uVar1) {
    return (uint)(0xfffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 10c2c3f0; body size 3 bytes.
#line 1 "ENTRY_10c2c3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c2c3f0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10c2c450; body size 3 bytes.
#line 1 "ENTRY_10c2c450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c2c450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c2c460; body size 3 bytes.
#line 1 "ENTRY_10c2c460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c2c460(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c2c470; body size 3 bytes.
#line 1 "ENTRY_10c2c470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c2c470(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c2c480; body size 3 bytes.
#line 1 "ENTRY_10c2c480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c2c480(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c2c490; body size 3 bytes.
#line 1 "ENTRY_10c2c490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c2c490(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c2c4a0; body size 3 bytes.
#line 1 "ENTRY_10c2c4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c2c4a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c2c4d0; body size 3 bytes.
#line 1 "ENTRY_10c2c4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c2c4d0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10c2c4e0; body size 3 bytes.
#line 1 "ENTRY_10c2c4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c2c4e0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10c2c4f0; body size 6 bytes.
#line 1 "ENTRY_10c2c4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c2c4f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10c2c580; body size 38 bytes.
#line 1 "ENTRY_10c2c580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10c2c580(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10c2c670; body size 27 bytes.
#line 1 "ENTRY_10c2c670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c2c670(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10c2c760; body size 27 bytes.
#line 1 "ENTRY_10c2c760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c2c760(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10c2d650; body size 87 bytes.
#line 1 "ENTRY_10c2d650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c2d650(uint param_1)

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


// Reference entry 10c2d6c0; body size 87 bytes.
#line 1 "ENTRY_10c2d6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c2d6c0(uint param_1)

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


// Reference entry 10c2d860; body size 9 bytes.
#line 1 "ENTRY_10c2d860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c2d860(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10c2d870; body size 9 bytes.
#line 1 "ENTRY_10c2d870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c2d870(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 4);
}


// Reference entry 10c2dc40; body size 61 bytes.
#line 1 "ENTRY_10c2dc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c2dc40(int param_1,int param_2)

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


// Reference entry 10c2e0d0; body size 20 bytes.
#line 1 "ENTRY_10c2e0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10c2e0d0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x1c));
  return (SCStr *)(param_2);
}


// Reference entry 10c2e0f0; body size 20 bytes.
#line 1 "ENTRY_10c2e0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10c2e0f0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x18));
  return (SCStr *)(param_2);
}


// Reference entry 10c2eba0; body size 20 bytes.
#line 1 "ENTRY_10c2eba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10c2eba0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 10c2ebc0; body size 20 bytes.
#line 1 "ENTRY_10c2ebc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10c2ebc0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x10));
  return (SCStr *)(param_2);
}


// Reference entry 10c311b0; body size 52 bytes.
#line 1 "ENTRY_10c311b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c311b0(int *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_2 + 0x8c))(5,0), 0);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x38))(*(undefined4 *)(param_1 + 0x18));
    thunk_FUN_10c31e60(0);
  }
  return;
}


// Reference entry 10c324f0; body size 6 bytes.
#line 1 "ENTRY_10c324f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c324f0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10c32500; body size 6 bytes.
#line 1 "ENTRY_10c32500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c32500(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 10c32510; body size 6 bytes.
#line 1 "ENTRY_10c32510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c32510(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10c32520; body size 6 bytes.
#line 1 "ENTRY_10c32520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c32520(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 10c32660; body size 5 bytes.
#line 1 "ENTRY_10c32660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c32660(int param_1)

{
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -4);
  return;
}


// Reference entry 10c32670; body size 3 bytes.
#line 1 "ENTRY_10c32670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c32670(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c32680; body size 36 bytes.
#line 1 "ENTRY_10c32680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c32680(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10c2aca0<>(puVar1,param_2);
  return;
}


// Reference entry 10c32880; body size 28 bytes.
#line 1 "ENTRY_10c32880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c32880(undefined4 *param_1)

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


// Reference entry 10c32f90; body size 9 bytes.
#line 1 "ENTRY_10c32f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c32f90(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10c34710; body size 22 bytes.
#line 1 "ENTRY_10c34710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c34710(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c34730; body size 32 bytes.
#line 1 "ENTRY_10c34730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c34730(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c34800; body size 18 bytes.
#line 1 "ENTRY_10c34800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c34800(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c34820; body size 25 bytes.
#line 1 "ENTRY_10c34820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c34820(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c34840; body size 25 bytes.
#line 1 "ENTRY_10c34840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c34840(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c34860; body size 17 bytes.
#line 1 "ENTRY_10c34860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::m_FUN_10c34860(undefined4 param_2,undefined4 *param_3)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(0);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (undefined1 *)(param_1);
}


// Reference entry 10c34880; body size 22 bytes.
#line 1 "ENTRY_10c34880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c34880(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c348a0; body size 5 bytes.
#line 1 "ENTRY_10c348a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c348a0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c348b0; body size 5 bytes.
#line 1 "ENTRY_10c348b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c348b0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c348c0; body size 21 bytes.
#line 1 "ENTRY_10c348c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::m_FUN_10c348c0(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(0);
  param_1[4] = (undefined1)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(*param_4);
  return (undefined1 *)(param_1);
}


// Reference entry 10c348e0; body size 34 bytes.
#line 1 "ENTRY_10c348e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c348e0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c34910; body size 91 bytes.
#line 1 "ENTRY_10c34910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c34910(int *param_2)
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


// Reference entry 10c34990; body size 91 bytes.
#line 1 "ENTRY_10c34990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c34990(int *param_2)
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


// Reference entry 10c34a10; body size 26 bytes.
#line 1 "ENTRY_10c34a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c34a10(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10c34a30; body size 57 bytes.
#line 1 "ENTRY_10c34a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_10c34a30(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10c34a80; body size 18 bytes.
#line 1 "ENTRY_10c34a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10c34a80(int *param_1,int *param_2)

{
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10c34aa0; body size 55 bytes.
#line 1 "ENTRY_10c34aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c34aa0(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10c34af0; body size 3 bytes.
#line 1 "ENTRY_10c34af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c34af0(void)

{
  return;
}


// Reference entry 10c34b00; body size 13 bytes.
#line 1 "ENTRY_10c34b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c34b00(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c34b10; body size 13 bytes.
#line 1 "ENTRY_10c34b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c34b10(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c34b20; body size 13 bytes.
#line 1 "ENTRY_10c34b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c34b20(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c34b30; body size 3 bytes.
#line 1 "ENTRY_10c34b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c34b30(void)

{
  return;
}


// Reference entry 10c34b40; body size 3 bytes.
#line 1 "ENTRY_10c34b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c34b40(void)

{
  return;
}


// Reference entry 10c34b50; body size 18 bytes.
#line 1 "ENTRY_10c34b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c34b50(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10c34cb0; body size 15 bytes.
#line 1 "ENTRY_10c34cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c34cb0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10c34d50; body size 7 bytes.
#line 1 "ENTRY_10c34d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c34d50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c34d60; body size 5 bytes.
#line 1 "ENTRY_10c34d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c34d60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c35000; body size 5 bytes.
#line 1 "ENTRY_10c35000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c35000(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c35010; body size 5 bytes.
#line 1 "ENTRY_10c35010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c35010(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c35020; body size 5 bytes.
#line 1 "ENTRY_10c35020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c35020(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c35030; body size 5 bytes.
#line 1 "ENTRY_10c35030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c35030(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c35040; body size 5 bytes.
#line 1 "ENTRY_10c35040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c35040(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c35050; body size 130 bytes.
#line 1 "ENTRY_10c35050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10c35050(int *param_2,undefined4 param_3)
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


// Reference entry 10c35100; body size 29 bytes.
#line 1 "ENTRY_10c35100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c35100(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10c351a0; body size 15 bytes.
#line 1 "ENTRY_10c351a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c351a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10c35240; body size 5 bytes.
#line 1 "ENTRY_10c35240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c35240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c35250; body size 5 bytes.
#line 1 "ENTRY_10c35250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c35250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c35260; body size 5 bytes.
#line 1 "ENTRY_10c35260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c35260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c35270; body size 5 bytes.
#line 1 "ENTRY_10c35270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c35270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c35280; body size 5 bytes.
#line 1 "ENTRY_10c35280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c35280(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c35290; body size 5 bytes.
#line 1 "ENTRY_10c35290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c35290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c352a0; body size 30 bytes.
#line 1 "ENTRY_10c352a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c352a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10c353c0; body size 70 bytes.
#line 1 "ENTRY_10c353c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c353c0(undefined4 *param_1)

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


// Reference entry 10c35460; body size 32 bytes.
#line 1 "ENTRY_10c35460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c35460(undefined4 *param_2)
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


// Reference entry 10c35490; body size 16 bytes.
#line 1 "ENTRY_10c35490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c35490(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c354b0; body size 18 bytes.
#line 1 "ENTRY_10c354b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c354b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c354d0; body size 10 bytes.
#line 1 "ENTRY_10c354d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c354d0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10c355c0; body size 11 bytes.
#line 1 "ENTRY_10c355c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c355c0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c355d0; body size 11 bytes.
#line 1 "ENTRY_10c355d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c355d0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c355e0; body size 16 bytes.
#line 1 "ENTRY_10c355e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c355e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c35600; body size 17 bytes.
#line 1 "ENTRY_10c35600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10c35600(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  param_1[4] = (undefined1)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (undefined1 *)(param_1);
}


// Reference entry 10c35620; body size 23 bytes.
#line 1 "ENTRY_10c35620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 * __thiscall Recovered_Bulk::m_FUN_10c35620(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
  *param_1 = (undefined8)(*param_2);
  *(undefined4*)(param_1 + 1) = (undefined4)(*(undefined4 *)(param_2 + 1));
  return (undefined8 *)(param_1);
}


// Reference entry 10c35640; body size 14 bytes.
#line 1 "ENTRY_10c35640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c35640(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c35660; body size 23 bytes.
#line 1 "ENTRY_10c35660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c35660(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c35680; body size 3 bytes.
#line 1 "ENTRY_10c35680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c35680(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c35690; body size 12 bytes.
#line 1 "ENTRY_10c35690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c35690(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10c35bd0; body size 42 bytes.
#line 1 "ENTRY_10c35bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c35bd0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorAlarmSink);
  return (undefined4 *)(param_1);
}


// Reference entry 10c35c10; body size 11 bytes.
#line 1 "ENTRY_10c35c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c35c10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c35c20; body size 5 bytes.
#line 1 "ENTRY_10c35c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c35c20(void)

{
  FUN_10c35e50();
  return;
}


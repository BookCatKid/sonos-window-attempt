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
namespace std { template<class... A> int _Xbad_alloc(A...); template<class... A> int _Xbad_function_call(A...); template<class... A> int _Xlength_error(A...); }
struct SCIndexRange { char _pad; SCIndexRange(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int op_assign(...) { return 0; } static int op_lt(...) { return 0; } };
struct SCOpRefBase { char _pad; SCOpRefBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int int_start(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); static int op_ctor(...) { return 0; } static int op_eq(...) { return 0; } static int op_lt(...) { return 0; } };
template<class...> struct _Tree { char _pad; _Tree(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int op_dtor(...) { return 0; } };
namespace std { template<class...> struct basic_streambuf { char _pad; basic_streambuf(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int op_ctor(...); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct char_traits { char _pad; char_traits(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
struct AVTransportURI { char _pad; AVTransportURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CurrentTrackURI { char _pad; CurrentTrackURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DirectControlClientID { char _pad; DirectControlClientID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct EnqueuedTransportURI { char _pad; EnqueuedTransportURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct No { char _pad; No(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RINCON_AssociatedZPUDN { char _pad; RINCON_AssociatedZPUDN(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBooleanSettingsProperty { char _pad; SCIBooleanSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIInfoViewHeaderDataSource { char _pad; SCIInfoViewHeaderDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIInfoViewHeaderItem { char _pad; SCIInfoViewHeaderItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISelectionManager { char _pad; SCISelectionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIUrlSessionCallback { char _pad; SCIUrlSessionCallback(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIVoiceService { char _pad; SCIVoiceService(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSelectionManager { char _pad; SCSelectionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSettingsMenuVoiceService { char _pad; SCSettingsMenuVoiceService(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSettingsMenuVoiceServiceSettings { char _pad; SCSettingsMenuVoiceServiceSettings(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SelectionManager { char _pad; SelectionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *E9;
typedef void *WARNING;
using namespace std;
struct Recovered_Bulk { char _pad; uint __thiscall m_FUN_10486cb0(uint param_2); template<class... A> int m_FUN_10486cb0(A...); void __thiscall m_FUN_104882a0(int param_2); template<class... A> int m_FUN_104882a0(A...); void __thiscall m_FUN_104882c0(int param_2); template<class... A> int m_FUN_104882c0(A...); void __thiscall m_FUN_104882e0(int param_2); template<class... A> int m_FUN_104882e0(A...); void __thiscall m_FUN_10488300(int param_2); template<class... A> int m_FUN_10488300(A...); void __thiscall m_FUN_10488320(int param_2); template<class... A> int m_FUN_10488320(A...); void __thiscall m_FUN_10488340(undefined4 param_2); template<class... A> int m_FUN_10488340(A...); void __thiscall m_FUN_10488350(undefined4 param_2); template<class... A> int m_FUN_10488350(A...); void __thiscall m_FUN_10488360(undefined4 param_2); template<class... A> int m_FUN_10488360(A...); void __thiscall m_FUN_10488370(undefined4 param_2); template<class... A> int m_FUN_10488370(A...); void __thiscall m_FUN_10488380(undefined4 param_2); template<class... A> int m_FUN_10488380(A...); void __thiscall m_FUN_104966b0(undefined4 *param_2); template<class... A> int m_FUN_104966b0(A...); void __thiscall m_FUN_10496a00(SCStr *param_2); template<class... A> int m_FUN_10496a00(A...); void __thiscall m_FUN_10496a30(SCStr *param_2); template<class... A> int m_FUN_10496a30(A...); int * __thiscall m_FUN_104975a0(int *param_2); template<class... A> int m_FUN_104975a0(A...); int * __thiscall m_FUN_1049d340(int *param_2); template<class... A> int m_FUN_1049d340(A...); undefined4 * __thiscall m_FUN_1049d740(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_1049d740(A...); void __thiscall m_FUN_104a0a60(int param_2); template<class... A> int m_FUN_104a0a60(A...); void __thiscall m_FUN_104a0a80(undefined4 param_2); template<class... A> int m_FUN_104a0a80(A...); int * __thiscall m_FUN_104a7f90(int *param_2); template<class... A> int m_FUN_104a7f90(A...); int * __thiscall m_FUN_104a8010(int *param_2); template<class... A> int m_FUN_104a8010(A...); int * __thiscall m_FUN_104ab2b0(int *param_2); template<class... A> int m_FUN_104ab2b0(A...); undefined4 * __thiscall m_FUN_104ab2d0(int *param_2); template<class... A> int m_FUN_104ab2d0(A...); void __thiscall m_FUN_104ac230(int *param_2); template<class... A> int m_FUN_104ac230(A...); int __thiscall m_FUN_104ac3b0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_104ac3b0(A...); undefined4 * __thiscall m_FUN_104acb10(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_104acb10(A...); void __thiscall m_FUN_104ae050(int param_2); template<class... A> int m_FUN_104ae050(A...); void __thiscall m_FUN_104ae070(int param_2); template<class... A> int m_FUN_104ae070(A...); void __thiscall m_FUN_104ae090(int param_2); template<class... A> int m_FUN_104ae090(A...); void __thiscall m_FUN_104ae0b0(int *param_2); template<class... A> int m_FUN_104ae0b0(A...); void __thiscall m_FUN_104ae110(int *param_2); template<class... A> int m_FUN_104ae110(A...); void __thiscall m_FUN_104ae170(undefined4 param_2); template<class... A> int m_FUN_104ae170(A...); void __thiscall m_FUN_104ae180(undefined4 param_2); template<class... A> int m_FUN_104ae180(A...); void __thiscall m_FUN_104ae190(undefined4 param_2); template<class... A> int m_FUN_104ae190(A...); int * __thiscall m_FUN_104b4d80(int *param_2); template<class... A> int m_FUN_104b4d80(A...); int * __thiscall m_FUN_104b4da0(int *param_2); template<class... A> int m_FUN_104b4da0(A...); undefined4 * __thiscall m_FUN_104b5700(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_104b5700(A...); void __thiscall m_FUN_104b9240(int param_2); template<class... A> int m_FUN_104b9240(A...); void __thiscall m_FUN_104b9260(undefined4 param_2); template<class... A> int m_FUN_104b9260(A...); void __thiscall m_FUN_104b9270(undefined4 param_2); template<class... A> int m_FUN_104b9270(A...); undefined4 * __thiscall m_FUN_104c0f30(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_104c0f30(A...); undefined4 * __thiscall m_FUN_104c0f50(undefined4 param_2); template<class... A> int m_FUN_104c0f50(A...); SCStr * __thiscall m_FUN_104c0f60(SCStr *param_2); template<class... A> int m_FUN_104c0f60(A...); undefined4 * __thiscall m_FUN_104c10c0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104c10c0(A...); SCStr * __thiscall m_FUN_104c10d0(undefined4 param_2,SCStr *param_3); template<class... A> int m_FUN_104c10d0(A...); undefined4 * __thiscall m_FUN_104c10f0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_104c10f0(A...); undefined4 * __thiscall m_FUN_104c1190(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); template<class... A> int m_FUN_104c1190(A...); undefined4 * __thiscall m_FUN_104c1260(SCStr *param_2); template<class... A> int m_FUN_104c1260(A...); undefined4 * __thiscall m_FUN_104c12a0(SCStr *param_2); template<class... A> int m_FUN_104c12a0(A...); undefined4 * __thiscall m_FUN_104c1300(SCStr *param_2); template<class... A> int m_FUN_104c1300(A...); void __thiscall m_FUN_104c1bd0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_104c1bd0(A...); undefined4 * __thiscall m_FUN_104c24a0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_104c24a0(A...); SCStr * __thiscall m_FUN_104c25a0(SCStr *param_2); template<class... A> int m_FUN_104c25a0(A...); SCStr * __thiscall m_FUN_104c25c0(SCStr *param_2); template<class... A> int m_FUN_104c25c0(A...); undefined4 * __thiscall m_FUN_104c25e0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104c25e0(A...); undefined4 * __thiscall m_FUN_104c2600(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104c2600(A...); undefined4 * __thiscall m_FUN_104c2680(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104c2680(A...); SCStr * __thiscall m_FUN_104c26a0(SCStr *param_2); template<class... A> int m_FUN_104c26a0(A...); SCStr * __thiscall m_FUN_104c26c0(SCStr *param_2); template<class... A> int m_FUN_104c26c0(A...); undefined4 * __thiscall m_FUN_104c2a10(undefined4 param_2,undefined4 param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104c2a10(A...); SCStr * __thiscall m_FUN_104c35b0(SCStr *param_2); template<class... A> int m_FUN_104c35b0(A...); SCStr * __thiscall m_FUN_104c35e0(SCStr *param_2); template<class... A> int m_FUN_104c35e0(A...); int __thiscall m_FUN_104c3f60(int param_2); template<class... A> int m_FUN_104c3f60(A...); void __thiscall m_FUN_104c45b0(uint param_2); template<class... A> int m_FUN_104c45b0(A...); void __thiscall m_FUN_104c4660(int param_2); template<class... A> int m_FUN_104c4660(A...); void __thiscall m_FUN_104c4690(uint param_2); template<class... A> int m_FUN_104c4690(A...); uint __thiscall m_FUN_104c4740(uint param_2); template<class... A> int m_FUN_104c4740(A...); void __thiscall m_FUN_104c4bc0(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104c4bc0(A...); void __thiscall m_FUN_104c4be0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_104c4be0(A...); void __thiscall m_FUN_104c8e60(SCStr *param_2); template<class... A> int m_FUN_104c8e60(A...); int * __thiscall m_FUN_104cb300(int *param_2); template<class... A> int m_FUN_104cb300(A...); int * __thiscall m_FUN_104cb380(int *param_2); template<class... A> int m_FUN_104cb380(A...); int * __thiscall m_FUN_104cb3a0(int *param_2); template<class... A> int m_FUN_104cb3a0(A...); int * __thiscall m_FUN_104cb500(int *param_2); template<class... A> int m_FUN_104cb500(A...); undefined4 * __thiscall m_FUN_104cb910(undefined4 *param_2); template<class... A> int m_FUN_104cb910(A...); undefined4 * __thiscall m_FUN_104cb980(undefined4 *param_2); template<class... A> int m_FUN_104cb980(A...); undefined4 * __thiscall m_FUN_104cc170(undefined4 param_2); template<class... A> int m_FUN_104cc170(A...); int * __thiscall m_FUN_104cce90(int *param_2); template<class... A> int m_FUN_104cce90(A...); int __thiscall m_FUN_104ccef0(int param_2); template<class... A> int m_FUN_104ccef0(A...); int __thiscall m_FUN_104d2fb0(int param_2); template<class... A> int m_FUN_104d2fb0(A...); int * __thiscall m_FUN_104d30f0(int *param_2); template<class... A> int m_FUN_104d30f0(A...); void __thiscall m_FUN_104d4800(undefined4 param_2); template<class... A> int m_FUN_104d4800(A...); void __thiscall m_FUN_104d4910(undefined4 param_2); template<class... A> int m_FUN_104d4910(A...); void __thiscall m_FUN_104d4f50(undefined4 param_2); template<class... A> int m_FUN_104d4f50(A...); undefined4 * __thiscall m_FUN_104d5000(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104d5000(A...); int __thiscall m_FUN_104d54c0(int param_2); template<class... A> int m_FUN_104d54c0(A...); uint __thiscall m_FUN_104d55a0(uint param_2); template<class... A> int m_FUN_104d55a0(A...); uint __thiscall m_FUN_104d6360(uint param_2); template<class... A> int m_FUN_104d6360(A...); void __thiscall m_FUN_104d6400(undefined4 param_2); template<class... A> int m_FUN_104d6400(A...); void __thiscall m_FUN_104d6820(undefined4 *param_2); template<class... A> int m_FUN_104d6820(A...); void __thiscall m_FUN_104d6850(undefined4 *param_2); template<class... A> int m_FUN_104d6850(A...); void __thiscall m_FUN_104d6880(undefined4 *param_2); template<class... A> int m_FUN_104d6880(A...); undefined4 * __thiscall m_FUN_104d6f60(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104d6f60(A...); undefined4 * __thiscall m_FUN_104d6f80(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104d6f80(A...); undefined4 * __thiscall m_FUN_104d6f90(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104d6f90(A...); undefined4 * __thiscall m_FUN_104d7500(undefined4 param_2); template<class... A> int m_FUN_104d7500(A...); int * __thiscall m_FUN_104d7aa0(int *param_2); template<class... A> int m_FUN_104d7aa0(A...); bool __thiscall m_FUN_104d7b00(int *param_2); template<class... A> int m_FUN_104d7b00(A...); bool __thiscall m_FUN_104d7b20(int *param_2); template<class... A> int m_FUN_104d7b20(A...); uint __thiscall m_FUN_104d7d20(uint param_2); template<class... A> int m_FUN_104d7d20(A...); void __thiscall m_FUN_104d8250(undefined4 *param_2); template<class... A> int m_FUN_104d8250(A...); void __thiscall m_FUN_104d8320(undefined4 *param_2); template<class... A> int m_FUN_104d8320(A...); int * __thiscall m_FUN_104da330(int *param_2); template<class... A> int m_FUN_104da330(A...); int * __thiscall m_FUN_104da350(int *param_2); template<class... A> int m_FUN_104da350(A...); int * __thiscall m_FUN_104da3d0(int *param_2); template<class... A> int m_FUN_104da3d0(A...); int * __thiscall m_FUN_104da7f0(int *param_2); template<class... A> int m_FUN_104da7f0(A...); undefined4 * __thiscall m_FUN_104db640(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_104db640(A...); int * __thiscall m_FUN_104db660(int *param_2); template<class... A> int m_FUN_104db660(A...); void __thiscall m_FUN_104db690(undefined4 *param_2); template<class... A> int m_FUN_104db690(A...); void __thiscall m_FUN_104db6b0(undefined4 *param_2); template<class... A> int m_FUN_104db6b0(A...); void __thiscall m_FUN_104db6d0(undefined4 *param_2); template<class... A> int m_FUN_104db6d0(A...); undefined4 * __thiscall m_FUN_104dbaa0(undefined4 *param_2,SCIndexRange *param_3,undefined4 *param_4); template<class... A> int m_FUN_104dbaa0(A...); void __thiscall m_FUN_104dbb70(undefined4 *param_2); template<class... A> int m_FUN_104dbb70(A...); undefined4 * __thiscall m_FUN_104dbca0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104dbca0(A...); undefined4 * __thiscall m_FUN_104dbcc0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104dbcc0(A...); undefined4 * __thiscall m_FUN_104dbcd0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104dbcd0(A...); undefined4 * __thiscall m_FUN_104dbe60(undefined4 param_2); template<class... A> int m_FUN_104dbe60(A...); int __thiscall m_FUN_104dc410(int param_2); template<class... A> int m_FUN_104dc410(A...); int __thiscall m_FUN_104dc420(int param_2); template<class... A> int m_FUN_104dc420(A...); void __thiscall m_FUN_104dc450(int *param_2,int param_3); template<class... A> int m_FUN_104dc450(A...); int * __thiscall m_FUN_104dc470(int param_2); template<class... A> int m_FUN_104dc470(A...); int * __thiscall m_FUN_104dc490(int param_2); template<class... A> int m_FUN_104dc490(A...); uint __thiscall m_FUN_104dc740(uint param_2); template<class... A> int m_FUN_104dc740(A...); void __thiscall m_FUN_104dc9c0(SCIndexRange *param_2); template<class... A> int m_FUN_104dc9c0(A...); void __thiscall m_FUN_104dcc00(undefined4 *param_2); template<class... A> int m_FUN_104dcc00(A...); void __thiscall m_FUN_104dcc40(undefined4 *param_2); template<class... A> int m_FUN_104dcc40(A...); void __thiscall m_FUN_104dcf50(undefined4 *param_2,SCIndexRange *param_3); template<class... A> int m_FUN_104dcf50(A...); int __thiscall m_FUN_104dcfb0(int param_2); template<class... A> int m_FUN_104dcfb0(A...); undefined4 __thiscall m_FUN_104dd060(SCIndexRange *param_2,char param_3); template<class... A> int m_FUN_104dd060(A...); undefined4 * __thiscall m_FUN_104dd280(undefined4 *param_2,SCIndexRange *param_3,undefined4 *param_4); template<class... A> int m_FUN_104dd280(A...); void __thiscall m_FUN_104dd620(undefined4 *param_2); template<class... A> int m_FUN_104dd620(A...); void __thiscall m_FUN_104ddbe0(int *param_2); template<class... A> int m_FUN_104ddbe0(A...); void __thiscall m_FUN_104ddc00(int *param_2); template<class... A> int m_FUN_104ddc00(A...); undefined4 __thiscall m_FUN_104ddd90(int param_2); template<class... A> int m_FUN_104ddd90(A...); undefined4 __thiscall m_FUN_104ddf50(int param_2); template<class... A> int m_FUN_104ddf50(A...); int * __thiscall m_FUN_104ded00(undefined4 param_2,int *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104ded00(A...); int * __thiscall m_FUN_104ded50(undefined4 param_2,int *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104ded50(A...); undefined4 * __thiscall m_FUN_104dede0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_104dede0(A...); undefined4 * __thiscall m_FUN_104dee00(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_104dee00(A...); undefined4 * __thiscall m_FUN_104dee20(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_104dee20(A...); int * __thiscall m_FUN_104df190(undefined4 param_2,int *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104df190(A...); undefined4 * __thiscall m_FUN_104df1f0(undefined4 param_2); template<class... A> int m_FUN_104df1f0(A...); undefined4 * __thiscall m_FUN_104df200(undefined4 param_2); template<class... A> int m_FUN_104df200(A...); undefined4 * __thiscall m_FUN_104df210(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_104df210(A...); undefined4 * __thiscall m_FUN_104df230(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_104df230(A...); undefined4 * __thiscall m_FUN_104df250(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_104df250(A...); undefined4 * __thiscall m_FUN_104df2d0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104df2d0(A...); int * __thiscall m_FUN_104df2e0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_104df2e0(A...); int * __thiscall m_FUN_104df330(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_104df330(A...); int * __thiscall m_FUN_104df380(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_104df380(A...); int * __thiscall m_FUN_104df3e0(int *param_2); template<class... A> int m_FUN_104df3e0(A...); int __thiscall m_FUN_104df400(int param_2); template<class... A> int m_FUN_104df400(A...); int __thiscall m_FUN_104dfae0(int param_2,int param_3); template<class... A> int m_FUN_104dfae0(A...); void __thiscall m_FUN_104dfdf0(undefined4 *param_2); template<class... A> int m_FUN_104dfdf0(A...); void __thiscall m_FUN_104dfe20(undefined4 *param_2); template<class... A> int m_FUN_104dfe20(A...); void __thiscall m_FUN_104dfe50(undefined4 *param_2); template<class... A> int m_FUN_104dfe50(A...); void __thiscall m_FUN_104dfe70(undefined4 *param_2); template<class... A> int m_FUN_104dfe70(A...); void __thiscall m_FUN_104dfe90(undefined4 *param_2); template<class... A> int m_FUN_104dfe90(A...); void __thiscall m_FUN_104dfeb0(undefined4 *param_2); template<class... A> int m_FUN_104dfeb0(A...); void __thiscall m_FUN_104dfee0(undefined4 *param_2); template<class... A> int m_FUN_104dfee0(A...); void __thiscall m_FUN_104dff10(undefined4 *param_2); template<class... A> int m_FUN_104dff10(A...); void __thiscall m_FUN_104dff40(undefined4 *param_2); template<class... A> int m_FUN_104dff40(A...); void __thiscall m_FUN_104e1400(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_104e1400(A...); void __thiscall m_FUN_104e1de0(int *param_2,int *param_3); template<class... A> int m_FUN_104e1de0(A...); undefined4 * __thiscall m_FUN_104e2690(undefined4 *param_2); template<class... A> int m_FUN_104e2690(A...); undefined4 * __thiscall m_FUN_104e2720(undefined4 *param_2); template<class... A> int m_FUN_104e2720(A...); undefined4 * __thiscall m_FUN_104e27d0(undefined4 param_2); template<class... A> int m_FUN_104e27d0(A...); undefined4 * __thiscall m_FUN_104e27f0(undefined4 param_2); template<class... A> int m_FUN_104e27f0(A...); undefined4 * __thiscall m_FUN_104e2810(undefined4 param_2); template<class... A> int m_FUN_104e2810(A...); undefined4 * __thiscall m_FUN_104e2aa0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104e2aa0(A...); undefined4 * __thiscall m_FUN_104e2ab0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104e2ab0(A...); undefined4 * __thiscall m_FUN_104e2ac0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104e2ac0(A...); undefined4 * __thiscall m_FUN_104e2ad0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104e2ad0(A...); undefined4 * __thiscall m_FUN_104e2ae0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104e2ae0(A...); undefined4 * __thiscall m_FUN_104e2af0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104e2af0(A...); undefined4 * __thiscall m_FUN_104e2b00(undefined4 param_2); template<class... A> int m_FUN_104e2b00(A...); undefined4 * __thiscall m_FUN_104e2b20(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104e2b20(A...); undefined4 * __thiscall m_FUN_104e2b30(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104e2b30(A...); undefined4 * __thiscall m_FUN_104e2b40(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104e2b40(A...); undefined4 * __thiscall m_FUN_104e2b50(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104e2b50(A...); undefined4 * __thiscall m_FUN_104e2b60(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104e2b60(A...); undefined4 * __thiscall m_FUN_104e2b70(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104e2b70(A...); undefined4 * __thiscall m_FUN_104e2be0(undefined4 *param_2); template<class... A> int m_FUN_104e2be0(A...); undefined4 * __thiscall m_FUN_104e2bf0(undefined4 *param_2); template<class... A> int m_FUN_104e2bf0(A...); undefined4 * __thiscall m_FUN_104e2c00(undefined4 *param_2); template<class... A> int m_FUN_104e2c00(A...); undefined4 * __thiscall m_FUN_104e2c10(undefined4 param_2); template<class... A> int m_FUN_104e2c10(A...); undefined4 * __thiscall m_FUN_104e2c30(undefined4 param_2); template<class... A> int m_FUN_104e2c30(A...); undefined4 * __thiscall m_FUN_104e2c50(undefined4 param_2); template<class... A> int m_FUN_104e2c50(A...); undefined4 * __thiscall m_FUN_104e2c70(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104e2c70(A...); undefined4 * __thiscall m_FUN_104e2c90(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104e2c90(A...); undefined4 * __thiscall m_FUN_104e2cb0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104e2cb0(A...); undefined4 * __thiscall m_FUN_104e2cc0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104e2cc0(A...); undefined4 * __thiscall m_FUN_104e2f00(undefined4 *param_2); template<class... A> int m_FUN_104e2f00(A...); undefined4 * __thiscall m_FUN_104e3650(undefined4 param_2); template<class... A> int m_FUN_104e3650(A...); undefined4 * __thiscall m_FUN_104e3660(undefined4 param_2); template<class... A> int m_FUN_104e3660(A...); undefined4 * __thiscall m_FUN_104e3670(undefined4 param_2); template<class... A> int m_FUN_104e3670(A...); undefined4 * __thiscall m_FUN_104e3680(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104e3680(A...); int * __thiscall m_FUN_104e44d0(int *param_2); template<class... A> int m_FUN_104e44d0(A...); int * __thiscall m_FUN_104e4530(int *param_2); template<class... A> int m_FUN_104e4530(A...); undefined4 * __thiscall m_FUN_104e4720(undefined4 *param_2); template<class... A> int m_FUN_104e4720(A...); bool __thiscall m_FUN_104e47a0(int *param_2); template<class... A> int m_FUN_104e47a0(A...); bool __thiscall m_FUN_104e47c0(int *param_2); template<class... A> int m_FUN_104e47c0(A...); bool __thiscall m_FUN_104e47e0(int *param_2); template<class... A> int m_FUN_104e47e0(A...); bool __thiscall m_FUN_104e4800(int *param_2); template<class... A> int m_FUN_104e4800(A...); bool __thiscall m_FUN_104e4820(int *param_2); template<class... A> int m_FUN_104e4820(A...); bool __thiscall m_FUN_104e4840(int *param_2); template<class... A> int m_FUN_104e4840(A...); bool __thiscall m_FUN_104e4860(int *param_2); template<class... A> int m_FUN_104e4860(A...); bool __thiscall m_FUN_104e4880(int *param_2); template<class... A> int m_FUN_104e4880(A...); bool __thiscall m_FUN_104e48a0(int *param_2); template<class... A> int m_FUN_104e48a0(A...); bool __thiscall m_FUN_104e48c0(int *param_2); template<class... A> int m_FUN_104e48c0(A...); bool __thiscall m_FUN_104e48e0(int *param_2); template<class... A> int m_FUN_104e48e0(A...); bool __thiscall m_FUN_104e4900(int *param_2); template<class... A> int m_FUN_104e4900(A...); void __thiscall m_FUN_104e4920(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_104e4920(A...); undefined4 __thiscall m_FUN_104e4940(uint param_2); template<class... A> int m_FUN_104e4940(A...); int __thiscall m_FUN_104e4a00(int param_2); template<class... A> int m_FUN_104e4a00(A...); int __thiscall m_FUN_104e4a10(int param_2); template<class... A> int m_FUN_104e4a10(A...); void __thiscall m_FUN_104e4c00(int *param_2,int param_3); template<class... A> int m_FUN_104e4c00(A...); int * __thiscall m_FUN_104e4c20(int param_2); template<class... A> int m_FUN_104e4c20(A...); int * __thiscall m_FUN_104e4c40(int param_2); template<class... A> int m_FUN_104e4c40(A...); void __thiscall m_FUN_104e54c0(int param_2); template<class... A> int m_FUN_104e54c0(A...); uint __thiscall m_FUN_104e54f0(uint param_2); template<class... A> int m_FUN_104e54f0(A...); uint __thiscall m_FUN_104e5530(uint param_2); template<class... A> int m_FUN_104e5530(A...); void __thiscall m_FUN_104e5810(uint param_2); template<class... A> int m_FUN_104e5810(A...); void __thiscall m_FUN_104e5c00(int *param_2,int param_3); template<class... A> int m_FUN_104e5c00(A...); int * __thiscall m_FUN_104e6630(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_104e6630(A...); int * __thiscall m_FUN_104e66b0(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_104e66b0(A...); int * __thiscall m_FUN_104e6730(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_104e6730(A...); int __thiscall m_FUN_104e6c20(uint param_2,char param_3); template<class... A> int m_FUN_104e6c20(A...); undefined4 __thiscall m_FUN_104e6c70(uint param_2); template<class... A> int m_FUN_104e6c70(A...); void __thiscall m_FUN_104e70d0(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104e70d0(A...); void __thiscall m_FUN_104e7190(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_104e7190(A...); void __thiscall m_FUN_104e7250(undefined4 *param_2); template<class... A> int m_FUN_104e7250(A...); void __thiscall m_FUN_104e7270(undefined4 *param_2); template<class... A> int m_FUN_104e7270(A...); void __thiscall m_FUN_104e7290(undefined4 *param_2); template<class... A> int m_FUN_104e7290(A...); void __thiscall m_FUN_104e72b0(undefined4 *param_2); template<class... A> int m_FUN_104e72b0(A...); void __thiscall m_FUN_104e72c0(undefined4 *param_2); template<class... A> int m_FUN_104e72c0(A...); void __thiscall m_FUN_104e72d0(undefined4 *param_2); template<class... A> int m_FUN_104e72d0(A...); void __thiscall m_FUN_104e72e0(undefined4 *param_2); template<class... A> int m_FUN_104e72e0(A...); void __thiscall m_FUN_104e72f0(undefined4 *param_2); template<class... A> int m_FUN_104e72f0(A...); void __thiscall m_FUN_104e7300(undefined4 *param_2); template<class... A> int m_FUN_104e7300(A...); void __thiscall m_FUN_104e7310(undefined4 *param_2); template<class... A> int m_FUN_104e7310(A...); void __thiscall m_FUN_104e7320(undefined4 *param_2); template<class... A> int m_FUN_104e7320(A...); void __thiscall m_FUN_104e7330(undefined4 *param_2); template<class... A> int m_FUN_104e7330(A...); void __thiscall m_FUN_104e7340(undefined4 *param_2); template<class... A> int m_FUN_104e7340(A...); void __thiscall m_FUN_104e7350(undefined4 *param_2); template<class... A> int m_FUN_104e7350(A...); int __thiscall m_FUN_104e7360(int *param_2); template<class... A> int m_FUN_104e7360(A...); int * __thiscall m_FUN_104e73f0(int *param_2,int *param_3); template<class... A> int m_FUN_104e73f0(A...); int __thiscall m_FUN_104e7450(int *param_2); template<class... A> int m_FUN_104e7450(A...); void __thiscall m_FUN_104e7bc0(undefined4 *param_2); template<class... A> int m_FUN_104e7bc0(A...); void __thiscall m_FUN_104e7be0(undefined4 *param_2); template<class... A> int m_FUN_104e7be0(A...); void __thiscall m_FUN_104e7bf0(undefined4 *param_2); template<class... A> int m_FUN_104e7bf0(A...); uint __thiscall m_FUN_104e9650(undefined4 *param_2); template<class... A> int m_FUN_104e9650(A...); uint __thiscall m_FUN_104e9680(undefined4 *param_2); template<class... A> int m_FUN_104e9680(A...); uint __thiscall m_FUN_104e96b0(undefined4 *param_2); template<class... A> int m_FUN_104e96b0(A...); void __thiscall m_FUN_104ea130(undefined4 *param_2); template<class... A> int m_FUN_104ea130(A...); void __thiscall m_FUN_104ea140(undefined4 *param_2); template<class... A> int m_FUN_104ea140(A...); void __thiscall m_FUN_104ea150(undefined4 *param_2); template<class... A> int m_FUN_104ea150(A...); void __thiscall m_FUN_104ea160(undefined4 *param_2); template<class... A> int m_FUN_104ea160(A...); void __thiscall m_FUN_104ea170(undefined4 *param_2); template<class... A> int m_FUN_104ea170(A...); void __thiscall m_FUN_104ea180(undefined4 *param_2); template<class... A> int m_FUN_104ea180(A...); uint __thiscall m_FUN_104ea1a0(int param_2); template<class... A> int m_FUN_104ea1a0(A...); void __thiscall m_FUN_104eafc0(int param_2); template<class... A> int m_FUN_104eafc0(A...); int * __thiscall m_FUN_104ed5c0(int *param_2); template<class... A> int m_FUN_104ed5c0(A...); int * __thiscall m_FUN_104ed5d0(int *param_2); template<class... A> int m_FUN_104ed5d0(A...); int * __thiscall m_FUN_104ed680(int *param_2); template<class... A> int m_FUN_104ed680(A...); int * __thiscall m_FUN_104eec60(int *param_2); template<class... A> int m_FUN_104eec60(A...); int * __thiscall m_FUN_104eeca0(int *param_2); template<class... A> int m_FUN_104eeca0(A...); undefined4 * __thiscall m_FUN_104eece0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104eece0(A...); undefined4 * __thiscall m_FUN_104eecf0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104eecf0(A...); basic_streambuf<char,std::char_traits<char>> * __thiscall m_FUN_104eee10(uint param_2); template<class... A> int m_FUN_104eee10(A...); undefined4 * __thiscall m_FUN_104eee80(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104eee80(A...); undefined4 * __thiscall m_FUN_104eeec0(int *param_2); template<class... A> int m_FUN_104eeec0(A...); int * __thiscall m_FUN_104ef1a0(int *param_2); template<class... A> int m_FUN_104ef1a0(A...); bool __thiscall m_FUN_104ef1e0(int *param_2); template<class... A> int m_FUN_104ef1e0(A...); bool __thiscall m_FUN_104ef200(int *param_2); template<class... A> int m_FUN_104ef200(A...); void __thiscall m_FUN_104efe20(undefined4 *param_2); template<class... A> int m_FUN_104efe20(A...); void __thiscall m_FUN_104efff0(int *param_2); template<class... A> int m_FUN_104efff0(A...); int * __thiscall m_FUN_104f7050(int *param_2); template<class... A> int m_FUN_104f7050(A...); int * __thiscall m_FUN_104f7060(int *param_2); template<class... A> int m_FUN_104f7060(A...); int * __thiscall m_FUN_104f7070(int *param_2); template<class... A> int m_FUN_104f7070(A...); int * __thiscall m_FUN_104f7080(int *param_2); template<class... A> int m_FUN_104f7080(A...); undefined4 * __thiscall m_FUN_104f8080(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_104f8080(A...); undefined4 * __thiscall m_FUN_104f80a0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_104f80a0(A...); SCStr * __thiscall m_FUN_104f82a0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104f82a0(A...); SCStr * __thiscall m_FUN_104f82d0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104f82d0(A...); undefined4 * __thiscall m_FUN_104f8300(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_104f8300(A...); undefined4 * __thiscall m_FUN_104f8320(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_104f8320(A...); SCStr * __thiscall m_FUN_104f8360(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_104f8360(A...); SCStr * __thiscall m_FUN_104f83a0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_104f83a0(A...); int * __thiscall m_FUN_104f8450(int *param_2); template<class... A> int m_FUN_104f8450(A...); int * __thiscall m_FUN_104f8470(int *param_2); template<class... A> int m_FUN_104f8470(A...); int * __thiscall m_FUN_104f84f0(int *param_2); template<class... A> int m_FUN_104f84f0(A...); void __thiscall m_FUN_104f86d0(undefined4 *param_2); template<class... A> int m_FUN_104f86d0(A...); void __thiscall m_FUN_104f8700(undefined4 *param_2); template<class... A> int m_FUN_104f8700(A...); void __thiscall m_FUN_104f8720(undefined4 *param_2); template<class... A> int m_FUN_104f8720(A...); void __thiscall m_FUN_104f8750(undefined4 *param_2); template<class... A> int m_FUN_104f8750(A...); undefined4 * __thiscall m_FUN_104f9b00(undefined4 *param_2); template<class... A> int m_FUN_104f9b00(A...); undefined4 * __thiscall m_FUN_104f9b70(undefined4 *param_2); template<class... A> int m_FUN_104f9b70(A...); undefined4 * __thiscall m_FUN_104f9bc0(undefined4 *param_2); template<class... A> int m_FUN_104f9bc0(A...); undefined4 * __thiscall m_FUN_104f9c70(undefined4 *param_2); template<class... A> int m_FUN_104f9c70(A...); undefined4 * __thiscall m_FUN_104f9ce0(undefined4 *param_2); template<class... A> int m_FUN_104f9ce0(A...); undefined4 * __thiscall m_FUN_104f9d20(undefined4 param_2); template<class... A> int m_FUN_104f9d20(A...); undefined4 * __thiscall m_FUN_104f9d40(undefined4 param_2); template<class... A> int m_FUN_104f9d40(A...); undefined4 * __thiscall m_FUN_104f9e30(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104f9e30(A...); undefined4 * __thiscall m_FUN_104f9e40(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104f9e40(A...); undefined4 * __thiscall m_FUN_104f9eb0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104f9eb0(A...); undefined4 * __thiscall m_FUN_104f9ec0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104f9ec0(A...); undefined4 * __thiscall m_FUN_104f9f50(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104f9f50(A...); undefined4 * __thiscall m_FUN_104f9f60(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104f9f60(A...); undefined4 * __thiscall m_FUN_104f9f90(undefined4 *param_2); template<class... A> int m_FUN_104f9f90(A...); undefined4 * __thiscall m_FUN_104f9fa0(undefined4 param_2); template<class... A> int m_FUN_104f9fa0(A...); undefined4 * __thiscall m_FUN_104f9fc0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104f9fc0(A...); undefined4 * __thiscall m_FUN_104f9fe0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104f9fe0(A...); undefined4 * __thiscall m_FUN_104f9ff0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104f9ff0(A...); undefined4 * __thiscall m_FUN_104fa540(undefined4 param_2); template<class... A> int m_FUN_104fa540(A...); undefined4 * __thiscall m_FUN_104fa810(undefined4 param_2); template<class... A> int m_FUN_104fa810(A...); int * __thiscall m_FUN_104fb550(int *param_2); template<class... A> int m_FUN_104fb550(A...); int * __thiscall m_FUN_104fb5b0(int *param_2); template<class... A> int m_FUN_104fb5b0(A...); bool __thiscall m_FUN_104fb680(int *param_2); template<class... A> int m_FUN_104fb680(A...); bool __thiscall m_FUN_104fb6a0(int *param_2); template<class... A> int m_FUN_104fb6a0(A...); bool __thiscall m_FUN_104fb6c0(int *param_2); template<class... A> int m_FUN_104fb6c0(A...); bool __thiscall m_FUN_104fb6e0(int *param_2); template<class... A> int m_FUN_104fb6e0(A...); bool __thiscall m_FUN_104fb700(int *param_2); template<class... A> int m_FUN_104fb700(A...); bool __thiscall m_FUN_104fb720(int *param_2); template<class... A> int m_FUN_104fb720(A...); uint __thiscall m_FUN_104fc170(uint param_2); template<class... A> int m_FUN_104fc170(A...); int * __thiscall m_FUN_104fcb60(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_104fcb60(A...); void __thiscall m_FUN_104fd4c0(undefined4 *param_2); template<class... A> int m_FUN_104fd4c0(A...); void __thiscall m_FUN_104fd4e0(undefined4 *param_2); template<class... A> int m_FUN_104fd4e0(A...); void __thiscall m_FUN_104fd4f0(undefined4 *param_2); template<class... A> int m_FUN_104fd4f0(A...); void __thiscall m_FUN_104fd500(undefined4 *param_2); template<class... A> int m_FUN_104fd500(A...); void __thiscall m_FUN_104fd550(undefined4 *param_2); template<class... A> int m_FUN_104fd550(A...); void __thiscall m_FUN_104fd870(undefined4 *param_2); template<class... A> int m_FUN_104fd870(A...); void __thiscall m_FUN_104fd880(undefined4 *param_2); template<class... A> int m_FUN_104fd880(A...); void __thiscall m_FUN_104fdf30(undefined4 *param_2); template<class... A> int m_FUN_104fdf30(A...); void __thiscall m_FUN_104fdf40(undefined4 *param_2); template<class... A> int m_FUN_104fdf40(A...); int * __thiscall m_FUN_104fff70(int *param_2); template<class... A> int m_FUN_104fff70(A...); int * __thiscall m_FUN_104fff90(int *param_2); template<class... A> int m_FUN_104fff90(A...); undefined4 * __thiscall m_FUN_10500550(undefined4 param_2); template<class... A> int m_FUN_10500550(A...); undefined4 * __thiscall m_FUN_10500590(undefined4 param_2); template<class... A> int m_FUN_10500590(A...); undefined4 * __thiscall m_FUN_105005d0(undefined4 *param_2); template<class... A> int m_FUN_105005d0(A...); undefined4 * __thiscall m_FUN_10500600(undefined4 *param_2); template<class... A> int m_FUN_10500600(A...); undefined4 * __thiscall m_FUN_10500650(undefined4 *param_2); template<class... A> int m_FUN_10500650(A...); undefined4 * __thiscall m_FUN_10500930(undefined4 *param_2); template<class... A> int m_FUN_10500930(A...); undefined4 * __thiscall m_FUN_10500950(undefined4 *param_2); template<class... A> int m_FUN_10500950(A...); undefined4 * __thiscall m_FUN_10500980(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10500980(A...); int * __thiscall m_FUN_1050b7b0(int *param_2); template<class... A> int m_FUN_1050b7b0(A...); int * __thiscall m_FUN_1050b7c0(int *param_2); template<class... A> int m_FUN_1050b7c0(A...); int * __thiscall m_FUN_1050e6f0(int *param_2); template<class... A> int m_FUN_1050e6f0(A...); undefined4 * __thiscall m_FUN_1050e7f0(undefined4 *param_2); template<class... A> int m_FUN_1050e7f0(A...); int * __thiscall m_FUN_1050e810(int *param_2); template<class... A> int m_FUN_1050e810(A...); int * __thiscall m_FUN_1050e850(int *param_2); template<class... A> int m_FUN_1050e850(A...); int * __thiscall m_FUN_1050e870(int *param_2); template<class... A> int m_FUN_1050e870(A...); int * __thiscall m_FUN_1050e980(int *param_2); template<class... A> int m_FUN_1050e980(A...); int * __thiscall m_FUN_1050e9f0(int *param_2); template<class... A> int m_FUN_1050e9f0(A...); undefined4 * __thiscall m_FUN_1050eae0(undefined4 param_2); template<class... A> int m_FUN_1050eae0(A...); undefined4 * __thiscall m_FUN_1050eb20(undefined4 param_2); template<class... A> int m_FUN_1050eb20(A...); undefined4 * __thiscall m_FUN_1050ec60(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1050ec60(A...); undefined4 __thiscall m_FUN_10510840(int param_2); template<class... A> int m_FUN_10510840(A...); int __thiscall m_FUN_10513d30(int param_2); template<class... A> int m_FUN_10513d30(A...); int * __thiscall m_FUN_10513d40(int *param_2); template<class... A> int m_FUN_10513d40(A...); int * __thiscall m_FUN_10514210(int *param_2); template<class... A> int m_FUN_10514210(A...); int * __thiscall m_FUN_10514250(int *param_2); template<class... A> int m_FUN_10514250(A...); int * __thiscall m_FUN_105169f0(int *param_2); template<class... A> int m_FUN_105169f0(A...); int * __thiscall m_FUN_10516c50(int *param_2); template<class... A> int m_FUN_10516c50(A...); };

extern int FUN_100517a8(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int addRange(...);
extern int failed(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern __declspec(dllimport) int strncmp(...);
extern int thunk_FUN_10120220(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101ba530(...);
extern int thunk_FUN_101c42f0(...);
extern int thunk_FUN_101c82e0(...);
extern int thunk_FUN_101eb1b0(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_103d65f0(...);
extern int thunk_FUN_1047fdf0(...);
extern int thunk_FUN_104c1380(...);
extern int thunk_FUN_104c1a00(...);
extern int thunk_FUN_104c1d20(...);
extern int thunk_FUN_104c49a0(...);
extern int thunk_FUN_104c4c30(...);
extern int thunk_FUN_104c4c80(...);
extern int thunk_FUN_104d4930(...);
extern int thunk_FUN_104d5150(...);
extern int thunk_FUN_104d53b0(...);
extern int thunk_FUN_104db6f0(...);
extern int thunk_FUN_104dd350(...);
extern int thunk_FUN_104df920(...);
extern int thunk_FUN_104dfcb0(...);
extern int thunk_FUN_104e0760(...);
extern int thunk_FUN_104e0880(...);
extern int thunk_FUN_104e0aa0(...);
extern int thunk_FUN_104e1440(...);
extern int thunk_FUN_104e1f30(...);
extern int thunk_FUN_104e2030(...);
extern int thunk_FUN_104e37a0(...);
extern int thunk_FUN_104e3820(...);
extern int thunk_FUN_104e3890(...);
extern int thunk_FUN_104e3d00(...);
extern int thunk_FUN_104e3e20(...);
extern int thunk_FUN_104e7560(...);
extern int thunk_FUN_104e7990(...);
extern int thunk_FUN_104f8cb0(...);
extern int thunk_FUN_104f9920(...);
extern int thunk_FUN_104fa330(...);
extern int thunk_FUN_104fb0d0(...);
extern int thunk_FUN_1059c050(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_105a05f0(...);
extern int thunk_FUN_105a5110(...);
extern int thunk_FUN_105a51f0(...);
extern int thunk_FUN_105a52b0(...);
extern int thunk_FUN_105a7950(...);
extern int thunk_FUN_105ad900(...);
extern int thunk_FUN_10916c20(...);
extern int thunk_FUN_10973080(...);
extern int thunk_FUN_109b6e80(...);
extern int thunk_FUN_10a4dc00(...);
extern int thunk_FUN_1106b1c0(...);
extern int thunk_FUN_1106df60(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_110a5ba0(...);
extern int thunk_FUN_1113eda0(...);
extern int thunk_FUN_111a0720(...);
extern int thunk_FUN_111a0e70(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_1186d2ee;
extern int DAT_1187b440;
extern int DAT_11880fb0;
extern int DAT_118823e4;
extern int DAT_11882ff0;
extern int DAT_118ab760;
extern int DAT_12126b84;
extern int DAT_122f55e4;
extern int g_lSCObjCount;
extern int ghidra_vftable_RAsyncDataSource;
extern int ghidra_vftable_RAsyncDataSourceListener;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RDataSource;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_SCActionContext;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCBrowseDataSourceEventSinkInternal;
extern int ghidra_vftable_SCBrowseDataSourceSettingsSink;
extern int ghidra_vftable_SCConnectedPartnerDelegate;
extern int ghidra_vftable_SCContentSession;
extern int ghidra_vftable_SCContentSessionBrowse;
extern int ghidra_vftable_SCDeleteVoiceAccountDelegate;
extern int ghidra_vftable_SCIActionContext;
extern int ghidra_vftable_SCIActionDelegateCB;
extern int ghidra_vftable_SCIBrowseDataSource;
extern int ghidra_vftable_SCIInfoViewHeaderDataSource;
extern int ghidra_vftable_SCIInfoViewHeaderItem;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIOwnedObjImpl;
extern int ghidra_vftable_SCISelectionManager;
extern int ghidra_vftable_SCITearOffObjImpl;
extern int ghidra_vftable_SCInfoViewDynamicCPMenu;
extern int ghidra_vftable_SCInteractionActionContext;
extern int ghidra_vftable_SCLineInNameStandaloneInput;
extern int ghidra_vftable_SCLoggingHelper;
extern int ghidra_vftable_SCNewWizController;
extern int ghidra_vftable_SCNewWizControllerFor;
extern int ghidra_vftable_SCNumPlayersUnavailableMessageDescriptor;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCRemoveMeSettingsMenu;
extern int ghidra_vftable_SCSettingBalanceValueFormatter;
extern int ghidra_vftable_SCSettingFractionToPercentValueFormatter;
extern int ghidra_vftable_SCSettingHzValueFormatter;
extern int ghidra_vftable_SCSettingIntToPlusMinusValueFormatter;
extern int ghidra_vftable_SCSettingVolumeLimitFormatter;
extern int ghidra_vftable_SCSettingsMenu;
extern int ghidra_vftable_SCSwfObjHTListener;
extern int ghidra_vftable_SCTimerUser;
extern int ghidra_vftable_SCUnregisteredDeviceMessageDescriptor;
extern int ghidra_vftable_SCUpdatePopoverActionFactory;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int ghidra_vftable_std_basic_stringbuf;
extern int in_EAX;
extern int uStack_4;
extern int uStack_8;
extern int uStack_c;
extern undefined1 LAB_114fe7e0[];
extern undefined1 LAB_11584640[];
extern undefined1 LAB_115868c0[];
extern undefined1 LAB_11587ed0[];
extern undefined1 LAB_1158a1a0[];
extern undefined1 LAB_115a83b0[];
extern undefined1 LAB_117c174c[];
extern undefined1 LAB_117c17f0[];
extern int *PTR_s_object_item_audioItem_audioBook__118ab75c;
extern void *ExceptionList;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10483060(undefined4 *param_1);
template<class... A> int FUN_10483060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10483f60(undefined4 *param_1);
template<class... A> int FUN_10483f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10484830(undefined4 *param_1);
template<class... A> int FUN_10484830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10484880(undefined4 *param_1);
template<class... A> int FUN_10484880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104848d0(undefined4 *param_1);
template<class... A> int FUN_104848d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10484920(undefined4 *param_1);
template<class... A> int FUN_10484920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10484970(undefined4 *param_1);
template<class... A> int FUN_10484970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10485430(undefined4 *param_1);
template<class... A> int FUN_10485430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10485c60(undefined4 *param_1);
template<class... A> int FUN_10485c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10485c70(undefined4 *param_1);
template<class... A> int FUN_10485c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10485c80(undefined4 *param_1);
template<class... A> int FUN_10485c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10485c90(undefined4 *param_1);
template<class... A> int FUN_10485c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10485ca0(undefined4 *param_1);
template<class... A> int FUN_10485ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10485cb0(undefined4 *param_1);
template<class... A> int FUN_10485cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10485cc0(int *param_1);
template<class... A> int FUN_10485cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10485cd0(int *param_1);
template<class... A> int FUN_10485cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10485ce0(undefined4 *param_1);
template<class... A> int FUN_10485ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10485cf0(undefined4 *param_1);
template<class... A> int FUN_10485cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10485d00(undefined4 *param_1);
template<class... A> int FUN_10485d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10485d10(undefined4 *param_1);
template<class... A> int FUN_10485d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10485d20(undefined4 *param_1);
template<class... A> int FUN_10485d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10485d30(undefined4 *param_1);
template<class... A> int FUN_10485d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10485d40(undefined4 *param_1);
template<class... A> int FUN_10485d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10485d80(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10485d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10485da0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10485da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10485dc0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10485dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10485de0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10485de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10485e00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10485e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10487fc0(int param_1);
template<class... A> int FUN_10487fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10487fd0(int param_1);
template<class... A> int FUN_10487fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10487fe0(int param_1);
template<class... A> int FUN_10487fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10487ff0(int param_1);
template<class... A> int FUN_10487ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10488000(int param_1);
template<class... A> int FUN_10488000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104880e0(undefined4 param_1);
template<class... A> int FUN_104880e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104880f0(undefined4 param_1);
template<class... A> int FUN_104880f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10488100(int param_1);
template<class... A> int FUN_10488100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10488110(int param_1);
template<class... A> int FUN_10488110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10488120(int param_1);
template<class... A> int FUN_10488120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10488130(int param_1);
template<class... A> int FUN_10488130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10488140(int param_1);
template<class... A> int FUN_10488140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10488150(int param_1);
template<class... A> int FUN_10488150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10488160(int param_1);
template<class... A> int FUN_10488160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10488170(int param_1);
template<class... A> int FUN_10488170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10488180(int param_1);
template<class... A> int FUN_10488180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10488190(int param_1);
template<class... A> int FUN_10488190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10488290(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10488290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10488550(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10488550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10488580(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10488580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104885b0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_104885b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104888e0(int *param_1);
template<class... A> int FUN_104888e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104936f0(undefined4 *param_1);
template<class... A> int FUN_104936f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10494c70(int param_1);
template<class... A> int FUN_10494c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10494c80(int param_1);
template<class... A> int FUN_10494c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10494c90(int param_1);
template<class... A> int FUN_10494c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10494ca0(int param_1);
template<class... A> int FUN_10494ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10494cb0(int param_1);
template<class... A> int FUN_10494cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10495540(int param_1);
template<class... A> int FUN_10495540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10495560(int *param_1);
template<class... A> int FUN_10495560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104955b0(void);
template<class... A> int FUN_104955b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104955c0(void);
template<class... A> int FUN_104955c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10496600(undefined4 *param_1);
template<class... A> int FUN_10496600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10496610(undefined4 *param_1);
template<class... A> int FUN_10496610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10496620(undefined4 *param_1);
template<class... A> int FUN_10496620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10496630(undefined4 *param_1);
template<class... A> int FUN_10496630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10496640(undefined4 *param_1);
template<class... A> int FUN_10496640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10496650(undefined4 *param_1);
template<class... A> int FUN_10496650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10496770(undefined4 *param_1);
template<class... A> int FUN_10496770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104967a0(undefined4 *param_1);
template<class... A> int FUN_104967a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104967d0(undefined4 *param_1);
template<class... A> int FUN_104967d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10496800(undefined4 *param_1);
template<class... A> int FUN_10496800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10496830(undefined4 *param_1);
template<class... A> int FUN_10496830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10496860(undefined4 *param_1);
template<class... A> int FUN_10496860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10496890(int *param_1);
template<class... A> int FUN_10496890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10496d70(void);
template<class... A> int FUN_10496d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10497690(undefined4 *param_1);
template<class... A> int FUN_10497690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10498800(int *param_1);
template<class... A> int FUN_10498800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1049b760(undefined4 *param_1);
template<class... A> int FUN_1049b760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1049d590(undefined4 param_1);
template<class... A> int FUN_1049d590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1049d800(undefined4 param_1);
template<class... A> int FUN_1049d800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1049d810(int param_1);
template<class... A> int FUN_1049d810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1049d8a0(undefined4 *param_1);
template<class... A> int FUN_1049d8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1049d8d0(undefined4 *param_1);
template<class... A> int FUN_1049d8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1049d900(undefined4 *param_1);
template<class... A> int FUN_1049d900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1049d930(undefined4 *param_1);
template<class... A> int FUN_1049d930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1049f170(undefined4 *param_1);
template<class... A> int FUN_1049f170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1049f300(undefined4 *param_1);
template<class... A> int FUN_1049f300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1049f320(undefined4 *param_1);
template<class... A> int FUN_1049f320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1049f340(undefined4 *param_1);
template<class... A> int FUN_1049f340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1049f360(undefined4 *param_1);
template<class... A> int FUN_1049f360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1049fbe0(undefined4 *param_1);
template<class... A> int FUN_1049fbe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1049fbf0(undefined4 *param_1);
template<class... A> int FUN_1049fbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1049fc00(undefined4 *param_1);
template<class... A> int FUN_1049fc00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1049fc10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1049fc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104a0a10(int param_1);
template<class... A> int FUN_104a0a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104a0a30(int param_1);
template<class... A> int FUN_104a0a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104a0a40(int param_1);
template<class... A> int FUN_104a0a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104a1c80(int param_1);
template<class... A> int FUN_104a1c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104a1f10(int *param_1);
template<class... A> int FUN_104a1f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104a7150(undefined4 *param_1);
template<class... A> int FUN_104a7150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104a74b0(undefined4 *param_1);
template<class... A> int FUN_104a74b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104a8180(undefined4 *param_1);
template<class... A> int FUN_104a8180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104a81a0(undefined4 *param_1);
template<class... A> int FUN_104a81a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104a8970(undefined4 *param_1);
template<class... A> int FUN_104a8970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104a8980(undefined4 *param_1);
template<class... A> int FUN_104a8980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104a8f90(undefined4 *param_1);
template<class... A> int FUN_104a8f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104a90a0(int *param_1);
template<class... A> int FUN_104a90a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104a90f0(undefined4 *param_1);
template<class... A> int FUN_104a90f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104a9190(undefined4 *param_1);
template<class... A> int FUN_104a9190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104aa120(void);
template<class... A> int FUN_104aa120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104ac030(int param_1,undefined4 *param_2,ushort *param_3);
template<class... A> int FUN_104ac030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_104ac330(int param_1);
template<class... A> int FUN_104ac330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ac3a0(undefined4 param_1);
template<class... A> int FUN_104ac3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ac6a0(undefined4 param_1);
template<class... A> int FUN_104ac6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ac710(undefined4 param_1);
template<class... A> int FUN_104ac710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ac720(undefined4 param_1);
template<class... A> int FUN_104ac720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ac730(undefined4 param_1);
template<class... A> int FUN_104ac730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ac7a0(undefined4 param_1);
template<class... A> int FUN_104ac7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ac7b0(undefined4 param_1);
template<class... A> int FUN_104ac7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104ac870(int param_1,undefined4 *param_2,ushort *param_3);
template<class... A> int FUN_104ac870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ac920(undefined4 param_1);
template<class... A> int FUN_104ac920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ac930(undefined4 param_1);
template<class... A> int FUN_104ac930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104acb90(undefined4 *param_1);
template<class... A> int FUN_104acb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104acc30(undefined4 param_1);
template<class... A> int FUN_104acc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104acc40(undefined4 param_1);
template<class... A> int FUN_104acc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104acc50(undefined4 param_1);
template<class... A> int FUN_104acc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104acc60(int param_1);
template<class... A> int FUN_104acc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104acc70(int param_1);
template<class... A> int FUN_104acc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104acc80(int param_1);
template<class... A> int FUN_104acc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104ace00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104ace00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104ad240(undefined4 *param_1);
template<class... A> int FUN_104ad240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104ad480(int param_1);
template<class... A> int FUN_104ad480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104ad650(int *param_1);
template<class... A> int FUN_104ad650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ad6a0(undefined4 *param_1);
template<class... A> int FUN_104ad6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104ad6b0(int param_1);
template<class... A> int FUN_104ad6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104ad6c0(int param_1);
template<class... A> int FUN_104ad6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ad6d0(undefined4 *param_1);
template<class... A> int FUN_104ad6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104ad770(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_104ad770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104ad7a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104ad7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104adeb0(int param_1);
template<class... A> int FUN_104adeb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104adec0(int param_1);
template<class... A> int FUN_104adec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104aded0(int param_1);
template<class... A> int FUN_104aded0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104adf50(int param_1);
template<class... A> int FUN_104adf50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104adf60(int param_1);
template<class... A> int FUN_104adf60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104adf70(int param_1);
template<class... A> int FUN_104adf70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104adf80(int param_1);
template<class... A> int FUN_104adf80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104adf90(int param_1);
template<class... A> int FUN_104adf90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104adfa0(int param_1);
template<class... A> int FUN_104adfa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ae870(int param_1);
template<class... A> int FUN_104ae870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ae890(int param_1);
template<class... A> int FUN_104ae890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104b01c0(undefined4 *param_1);
template<class... A> int FUN_104b01c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104b0250(undefined4 *param_1);
template<class... A> int FUN_104b0250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104b0840(undefined4 *param_1);
template<class... A> int FUN_104b0840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104b0990(undefined4 *param_1);
template<class... A> int FUN_104b0990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104b09c0(undefined4 *param_1);
template<class... A> int FUN_104b09c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104b3b40(void);
template<class... A> int FUN_104b3b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104b52b0(undefined4 param_1);
template<class... A> int FUN_104b52b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104b52c0(undefined4 param_1);
template<class... A> int FUN_104b52c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104b57c0(undefined4 param_1);
template<class... A> int FUN_104b57c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104b57d0(undefined4 param_1);
template<class... A> int FUN_104b57d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104b57e0(int param_1);
template<class... A> int FUN_104b57e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104b57f0(int param_1);
template<class... A> int FUN_104b57f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104b5880(undefined4 *param_1);
template<class... A> int FUN_104b5880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104b8500(undefined4 *param_1);
template<class... A> int FUN_104b8500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104b86f0(undefined4 *param_1);
template<class... A> int FUN_104b86f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104b8890(undefined4 *param_1);
template<class... A> int FUN_104b8890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104b88a0(int *param_1);
template<class... A> int FUN_104b88a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104b88b0(undefined4 *param_1);
template<class... A> int FUN_104b88b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104b89b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104b89b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104b90f0(int param_1);
template<class... A> int FUN_104b90f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104b9100(int param_1);
template<class... A> int FUN_104b9100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104b9170(int param_1);
template<class... A> int FUN_104b9170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104b9180(int param_1);
template<class... A> int FUN_104b9180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104b9190(int param_1);
template<class... A> int FUN_104b9190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104b91a0(int param_1);
template<class... A> int FUN_104b91a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104b9e50(int param_1);
template<class... A> int FUN_104b9e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104b9fd0(int *param_1);
template<class... A> int FUN_104b9fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ba480(undefined4 *param_1);
template<class... A> int FUN_104ba480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104ba510(undefined4 *param_1);
template<class... A> int FUN_104ba510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_104c0e50(int param_1);
template<class... A> int FUN_104c0e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_104c0e90(int param_1);
template<class... A> int FUN_104c0e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_104c0ed0(int param_1);
template<class... A> int FUN_104c0ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104c0f10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104c0f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104c1010(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_104c1010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104c1240(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_104c1240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104c1460(int param_1,int param_2);
template<class... A> int FUN_104c1460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104c19e0(undefined4 *param_1);
template<class... A> int FUN_104c19e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104c19f0(undefined4 *param_1);
template<class... A> int FUN_104c19f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104c1d00(undefined4 param_1);
template<class... A> int FUN_104c1d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104c1d10(undefined4 param_1);
template<class... A> int FUN_104c1d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104c2320(undefined4 param_1,int *param_2);
template<class... A> int FUN_104c2320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_104c2330(int param_1,int param_2);
template<class... A> int FUN_104c2330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104c2420(undefined4 param_1);
template<class... A> int FUN_104c2420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104c2430(undefined4 param_1);
template<class... A> int FUN_104c2430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104c2440(undefined4 param_1);
template<class... A> int FUN_104c2440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104c2450(undefined4 param_1);
template<class... A> int FUN_104c2450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104c2460(undefined4 param_1);
template<class... A> int FUN_104c2460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104c2470(undefined4 param_1);
template<class... A> int FUN_104c2470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104c2480(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_104c2480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104c2620(undefined4 *param_1);
template<class... A> int FUN_104c2620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104c2640(undefined4 *param_1);
template<class... A> int FUN_104c2640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104c2660(undefined4 param_1);
template<class... A> int FUN_104c2660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104c2670(undefined4 param_1);
template<class... A> int FUN_104c2670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104c29f0(undefined4 *param_1);
template<class... A> int FUN_104c29f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104c2b00(undefined4 *param_1);
template<class... A> int FUN_104c2b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104c37e0(undefined4 *param_1);
template<class... A> int FUN_104c37e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104c3b60(void);
template<class... A> int FUN_104c3b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104c3f80(undefined4 *param_1);
template<class... A> int FUN_104c3f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104c3f90(undefined4 *param_1);
template<class... A> int FUN_104c3f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104c4860(int param_1,int param_2);
template<class... A> int FUN_104c4860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104c4890(undefined4 param_1);
template<class... A> int FUN_104c4890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104c48a0(undefined4 param_1);
template<class... A> int FUN_104c48a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104c48b0(undefined4 param_1);
template<class... A> int FUN_104c48b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104c48c0(undefined4 param_1);
template<class... A> int FUN_104c48c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104c48d0(undefined4 param_1);
template<class... A> int FUN_104c48d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104c48e0(undefined4 param_1);
template<class... A> int FUN_104c48e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104c48f0(undefined4 param_1);
template<class... A> int FUN_104c48f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104c4900(undefined4 param_1);
template<class... A> int FUN_104c4900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104c4910(undefined4 param_1);
template<class... A> int FUN_104c4910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104c4920(undefined4 param_1);
template<class... A> int FUN_104c4920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104c4930(undefined4 param_1);
template<class... A> int FUN_104c4930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104c4940(undefined4 param_1);
template<class... A> int FUN_104c4940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104c4950(undefined4 param_1);
template<class... A> int FUN_104c4950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104c4960(undefined4 param_1);
template<class... A> int FUN_104c4960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104c4970(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104c4970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104c4980(undefined4 *param_1);
template<class... A> int FUN_104c4980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104c4990(undefined4 *param_1);
template<class... A> int FUN_104c4990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104c4c00(undefined4 *param_1);
template<class... A> int FUN_104c4c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104c4c10(int param_1);
template<class... A> int FUN_104c4c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104c4d00(uint param_1);
template<class... A> int FUN_104c4d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104c4d80(undefined4 *param_1);
template<class... A> int FUN_104c4d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104c4d90(int *param_1);
template<class... A> int FUN_104c4d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104c6150(int param_1,int param_2);
template<class... A> int FUN_104c6150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104c67d0(int param_1);
template<class... A> int FUN_104c67d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104c7370(int param_1);
template<class... A> int FUN_104c7370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104c7480(int *param_1);
template<class... A> int FUN_104c7480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104c7490(void);
template<class... A> int FUN_104c7490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104c74a0(void);
template<class... A> int FUN_104c74a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104c74b0(void);
template<class... A> int FUN_104c74b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104c74c0(void);
template<class... A> int FUN_104c74c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104c8b60(undefined4 *param_1);
template<class... A> int FUN_104c8b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104c8c90(undefined4 *param_1);
template<class... A> int FUN_104c8c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104c8cc0(undefined4 *param_1);
template<class... A> int FUN_104c8cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104c8e50(undefined4 param_1);
template<class... A> int FUN_104c8e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_104c9640(int param_1);
template<class... A> int FUN_104c9640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_104c9680(int param_1);
template<class... A> int FUN_104c9680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104c96d0(int *param_1);
template<class... A> int FUN_104c96d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104cb2e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104cb2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104cb770(undefined4 param_1);
template<class... A> int FUN_104cb770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104cb7b0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_104cb7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_104cb870(void);
template<class... A> int FUN_104cb870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104cb880(undefined4 *param_1);
template<class... A> int FUN_104cb880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104cb8d0(undefined4 *param_1);
template<class... A> int FUN_104cb8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104cb8f0(undefined4 *param_1);
template<class... A> int FUN_104cb8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104cb940(undefined4 *param_1);
template<class... A> int FUN_104cb940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104cb960(undefined4 *param_1);
template<class... A> int FUN_104cb960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104cb9c0(undefined4 *param_1);
template<class... A> int FUN_104cb9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104cb9e0(undefined4 param_1);
template<class... A> int FUN_104cb9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104cb9f0(undefined4 *param_1);
template<class... A> int FUN_104cb9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ccf10(undefined4 *param_1);
template<class... A> int FUN_104ccf10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104ccf20(int *param_1);
template<class... A> int FUN_104ccf20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ccf30(undefined4 *param_1);
template<class... A> int FUN_104ccf30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104ccf40(int *param_1);
template<class... A> int FUN_104ccf40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104ccf50(int *param_1);
template<class... A> int FUN_104ccf50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ccf60(undefined4 *param_1);
template<class... A> int FUN_104ccf60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ccf70(undefined4 *param_1);
template<class... A> int FUN_104ccf70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ccf80(undefined4 *param_1);
template<class... A> int FUN_104ccf80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ccf90(undefined4 *param_1);
template<class... A> int FUN_104ccf90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ccfa0(undefined4 *param_1);
template<class... A> int FUN_104ccfa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ccfb0(undefined4 *param_1);
template<class... A> int FUN_104ccfb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104cd7f0(undefined4 param_1);
template<class... A> int FUN_104cd7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104cd800(undefined4 param_1);
template<class... A> int FUN_104cd800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d13f0(undefined4 *param_1);
template<class... A> int FUN_104d13f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d1410(undefined4 *param_1);
template<class... A> int FUN_104d1410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d1420(undefined4 *param_1);
template<class... A> int FUN_104d1420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __stdcall FUN_104d3360(SCStr *param_1);
template<class... A> int FUN_104d3360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_104d4030(void);
template<class... A> int FUN_104d4030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104d4040(int *param_1);
template<class... A> int FUN_104d4040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104d4050(int *param_1);
template<class... A> int FUN_104d4050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d4420(undefined4 *param_1);
template<class... A> int FUN_104d4420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d4430(undefined4 *param_1);
template<class... A> int FUN_104d4430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d4440(undefined4 *param_1);
template<class... A> int FUN_104d4440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d4450(undefined4 *param_1);
template<class... A> int FUN_104d4450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d4460(undefined4 *param_1);
template<class... A> int FUN_104d4460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104d45f0(undefined4 *param_1);
template<class... A> int FUN_104d45f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104d4620(undefined4 *param_1);
template<class... A> int FUN_104d4620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104d4650(undefined4 *param_1);
template<class... A> int FUN_104d4650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104d4680(undefined4 *param_1);
template<class... A> int FUN_104d4680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104d46b0(undefined4 *param_1);
template<class... A> int FUN_104d46b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104d46e0(int *param_1);
template<class... A> int FUN_104d46e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104d4700(int param_1);
template<class... A> int FUN_104d4700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104d4720(int *param_1);
template<class... A> int FUN_104d4720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104d47b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104d47b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104d47d0(int param_1,int param_2);
template<class... A> int FUN_104d47d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104d4c40(undefined4 *param_1);
template<class... A> int FUN_104d4c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104d4c50(undefined4 param_1);
template<class... A> int FUN_104d4c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104d4e20(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_104d4e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104d4e40(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_104d4e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104d4f40(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_104d4f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104d4f90(undefined4 param_1);
template<class... A> int FUN_104d4f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104d4fa0(undefined4 param_1);
template<class... A> int FUN_104d4fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104d4fb0(undefined4 param_1);
template<class... A> int FUN_104d4fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104d4fc0(undefined4 param_1);
template<class... A> int FUN_104d4fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104d4fd0(undefined4 *param_1);
template<class... A> int FUN_104d4fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104d5020(undefined4 *param_1);
template<class... A> int FUN_104d5020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d5040(undefined4 param_1);
template<class... A> int FUN_104d5040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104d5050(undefined4 *param_1);
template<class... A> int FUN_104d5050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104d5230(undefined4 *param_1);
template<class... A> int FUN_104d5230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104d52c0(undefined4 *param_1);
template<class... A> int FUN_104d52c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d56e0(undefined4 param_1);
template<class... A> int FUN_104d56e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d56f0(undefined4 param_1);
template<class... A> int FUN_104d56f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d5700(undefined4 param_1);
template<class... A> int FUN_104d5700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d5710(undefined4 param_1);
template<class... A> int FUN_104d5710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104d5720(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104d5720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104d5730(undefined4 *param_1);
template<class... A> int FUN_104d5730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104d5c00(uint param_1);
template<class... A> int FUN_104d5c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104d5c80(int *param_1);
template<class... A> int FUN_104d5c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d5d70(int *param_1);
template<class... A> int FUN_104d5d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d6350(int param_1);
template<class... A> int FUN_104d6350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104d63e0(void);
template<class... A> int FUN_104d63e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104d63f0(void);
template<class... A> int FUN_104d63f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104d6640(int *param_1);
template<class... A> int FUN_104d6640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104d6660(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104d6660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104d6b70(undefined4 *param_1);
template<class... A> int FUN_104d6b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104d6bb0(undefined4 param_1);
template<class... A> int FUN_104d6bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104d6d10(undefined4 param_1);
template<class... A> int FUN_104d6d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104d6d20(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_104d6d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104d6d50(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_104d6d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104d6d80(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_104d6d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104d6e70(undefined4 param_1);
template<class... A> int FUN_104d6e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104d6e90(undefined4 param_1);
template<class... A> int FUN_104d6e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104d6eb0(undefined4 param_1);
template<class... A> int FUN_104d6eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104d6ef0(undefined4 param_1);
template<class... A> int FUN_104d6ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104d6f10(undefined4 *param_1);
template<class... A> int FUN_104d6f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104d6fa0(undefined4 *param_1);
template<class... A> int FUN_104d6fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d6fc0(undefined4 param_1);
template<class... A> int FUN_104d6fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104d6fd0(undefined4 *param_1);
template<class... A> int FUN_104d6fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104d7610(undefined4 *param_1);
template<class... A> int FUN_104d7610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104d79e0(undefined4 *param_1);
template<class... A> int FUN_104d79e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104d7a10(undefined4 *param_1);
template<class... A> int FUN_104d7a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104d7a20(void);
template<class... A> int FUN_104d7a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d7b40(undefined4 *param_1);
template<class... A> int FUN_104d7b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d7b50(undefined4 *param_1);
template<class... A> int FUN_104d7b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_104d7b60(int *param_1);
template<class... A> int FUN_104d7b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_104d7b70(int *param_1);
template<class... A> int FUN_104d7b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104d7df0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104d7df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d7e90(undefined4 param_1);
template<class... A> int FUN_104d7e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d7ea0(undefined4 param_1);
template<class... A> int FUN_104d7ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d7eb0(undefined4 param_1);
template<class... A> int FUN_104d7eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d7ec0(undefined4 param_1);
template<class... A> int FUN_104d7ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104d7ef0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104d7ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104d7f00(undefined4 *param_1);
template<class... A> int FUN_104d7f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104d81e0(uint param_1);
template<class... A> int FUN_104d81e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104d8260(int *param_1);
template<class... A> int FUN_104d8260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104d9860(void);
template<class... A> int FUN_104d9860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104d9870(void);
template<class... A> int FUN_104d9870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104da3f0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_104da3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104da430(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_104da430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104da470(undefined4 *param_1);
template<class... A> int FUN_104da470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104da850(undefined4 *param_1);
template<class... A> int FUN_104da850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104da950(undefined4 *param_1);
template<class... A> int FUN_104da950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104da970(undefined4 *param_1);
template<class... A> int FUN_104da970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104db430(undefined4 *param_1);
template<class... A> int FUN_104db430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104db440(undefined4 *param_1);
template<class... A> int FUN_104db440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104db470(undefined4 *param_1);
template<class... A> int FUN_104db470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104db4a0(undefined4 *param_1);
template<class... A> int FUN_104db4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104db620(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104db620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104db680(void);
template<class... A> int FUN_104db680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104db8f0(undefined4 *param_1);
template<class... A> int FUN_104db8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCIndexRange * FUN_104db900(SCIndexRange *param_1,SCIndexRange *param_2,SCIndexRange *param_3);
template<class... A> int FUN_104db900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCIndexRange * FUN_104db940(SCIndexRange *param_1,SCIndexRange *param_2,SCIndexRange *param_3);
template<class... A> int FUN_104db940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104db980(undefined4 param_1);
template<class... A> int FUN_104db980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104db990(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_104db990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104db9d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_104db9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104dba10(undefined4 param_1);
template<class... A> int FUN_104dba10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104dba20(undefined4 param_1);
template<class... A> int FUN_104dba20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dba30(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_104dba30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dba50(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_104dba50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dba70(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_104dba70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dba90(void);
template<class... A> int FUN_104dba90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104dbbb0(undefined4 param_1);
template<class... A> int FUN_104dbbb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104dbbc0(undefined4 param_1);
template<class... A> int FUN_104dbbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104dbbd0(undefined4 param_1);
template<class... A> int FUN_104dbbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_104dbbe0(void);
template<class... A> int FUN_104dbbe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104dbbf0(undefined4 param_1);
template<class... A> int FUN_104dbbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104dbc00(undefined4 *param_1);
template<class... A> int FUN_104dbc00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104dbc50(undefined4 *param_1);
template<class... A> int FUN_104dbc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104dbc80(undefined4 *param_1);
template<class... A> int FUN_104dbc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104dbce0(undefined4 *param_1);
template<class... A> int FUN_104dbce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104dbd00(undefined4 param_1);
template<class... A> int FUN_104dbd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104dbd10(undefined4 *param_1);
template<class... A> int FUN_104dbd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104dbea0(undefined4 *param_1);
template<class... A> int FUN_104dbea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dc180(void);
template<class... A> int FUN_104dc180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dc190(void);
template<class... A> int FUN_104dc190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104dc290(undefined4 *param_1);
template<class... A> int FUN_104dc290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104dc2b0(undefined4 *param_1);
template<class... A> int FUN_104dc2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104dc430(undefined4 *param_1);
template<class... A> int FUN_104dc430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104dc440(undefined4 *param_1);
template<class... A> int FUN_104dc440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_104dc730(void);
template<class... A> int FUN_104dc730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104dc7f0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104dc7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104dc800(undefined4 param_1);
template<class... A> int FUN_104dc800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104dc810(undefined4 param_1);
template<class... A> int FUN_104dc810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104dc820(undefined4 param_1);
template<class... A> int FUN_104dc820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104dc830(undefined4 param_1);
template<class... A> int FUN_104dc830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104dc840(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_104dc840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104dc850(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104dc850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104dc860(undefined4 *param_1);
template<class... A> int FUN_104dc860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104dc8e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_104dc8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104dc920(undefined4 *param_1, undefined4 *param_2, int param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104dc920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104dc960(undefined4 *param_1,undefined4 *param_2,int param_3);
template<class... A> int FUN_104dc960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104dc9a0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104dc9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104dcb90(uint param_1);
template<class... A> int FUN_104dcb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104dcc50(int *param_1);
template<class... A> int FUN_104dcc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104dcc60(int param_1);
template<class... A> int FUN_104dcc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104dcc70(undefined4 *param_1);
template<class... A> int FUN_104dcc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104dcc80(int param_1,int param_2);
template<class... A> int FUN_104dcc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __stdcall FUN_104dcf30(SCStr *param_1);
template<class... A> int FUN_104dcf30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_104dd430(void);
template<class... A> int FUN_104dd430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104dd580(void);
template<class... A> int FUN_104dd580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104dd590(void);
template<class... A> int FUN_104dd590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104dd600(undefined4 *param_1);
template<class... A> int FUN_104dd600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104dd610(undefined4 *param_1);
template<class... A> int FUN_104dd610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104dd880(undefined4 *param_1);
template<class... A> int FUN_104dd880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104ddbc0(int param_1);
template<class... A> int FUN_104ddbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104ddbd0(int *param_1);
template<class... A> int FUN_104ddbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ddc20(void);
template<class... A> int FUN_104ddc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ddfc0(void);
template<class... A> int FUN_104ddfc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de310(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_104de310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de320(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_104de320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de330(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_104de330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de340(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_104de340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de530(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_104de530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de540(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_104de540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de6a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_104de6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de6b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_104de6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de6c0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_104de6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de6d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_104de6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de6e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_104de6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de6f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_104de6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de700(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_104de700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de710(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_104de710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de720(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_104de720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104deb10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_104deb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104deb20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_104deb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104deb30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_104deb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104deda0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104deda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104dedc0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104dedc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104df070(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_104df070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104df090(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_104df090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104df0b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104df0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104df0d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_104df0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104df0f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_104df0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104df110(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104df110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104df130(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_104df130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104df150(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_104df150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104df170(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104df170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104df270(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104df270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104df280(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104df280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104df290(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104df290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104df2a0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104df2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104df2b0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104df2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104df2c0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104df2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104df460(void);
template<class... A> int FUN_104df460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104df470(void);
template<class... A> int FUN_104df470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104df480(void);
template<class... A> int FUN_104df480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104df490(void);
template<class... A> int FUN_104df490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dfb30(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104dfb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dfb40(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104dfb40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dfb50(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104dfb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dfb60(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104dfb60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dfb70(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104dfb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dfb80(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104dfb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dfb90(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104dfb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dfba0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104dfba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dfbb0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104dfbb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dfbc0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104dfbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dfc50(void);
template<class... A> int FUN_104dfc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dfc60(void);
template<class... A> int FUN_104dfc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dfc70(void);
template<class... A> int FUN_104dfc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dfc80(void);
template<class... A> int FUN_104dfc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dfc90(void);
template<class... A> int FUN_104dfc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dfca0(void);
template<class... A> int FUN_104dfca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e0840(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_104e0840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e0970(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_104e0970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e0990(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_104e0990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e09b0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_104e09b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e0a80(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_104e0a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e0b60(undefined4 *param_1);
template<class... A> int FUN_104e0b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e0b70(undefined4 *param_1);
template<class... A> int FUN_104e0b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e0b80(undefined4 *param_1);
template<class... A> int FUN_104e0b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e0b90(undefined4 *param_1);
template<class... A> int FUN_104e0b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e0ba0(undefined4 *param_1);
template<class... A> int FUN_104e0ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e0bb0(undefined4 *param_1);
template<class... A> int FUN_104e0bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e0bc0(undefined4 param_1);
template<class... A> int FUN_104e0bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e0bd0(undefined4 param_1);
template<class... A> int FUN_104e0bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e0be0(undefined4 param_1);
template<class... A> int FUN_104e0be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_104e0bf0(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_104e0bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e0c70(void);
template<class... A> int FUN_104e0c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e0c80(void);
template<class... A> int FUN_104e0c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e0c90(void);
template<class... A> int FUN_104e0c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e13f0(undefined4 *param_1);
template<class... A> int FUN_104e13f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e1420(undefined4 param_1);
template<class... A> int FUN_104e1420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e1430(undefined4 param_1);
template<class... A> int FUN_104e1430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e16c0(undefined4 param_1);
template<class... A> int FUN_104e16c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e16d0(undefined4 param_1);
template<class... A> int FUN_104e16d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e16e0(undefined4 param_1);
template<class... A> int FUN_104e16e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e16f0(undefined4 param_1);
template<class... A> int FUN_104e16f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e1700(undefined4 param_1);
template<class... A> int FUN_104e1700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e1710(undefined4 param_1);
template<class... A> int FUN_104e1710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e1720(undefined4 param_1);
template<class... A> int FUN_104e1720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e1730(undefined4 param_1);
template<class... A> int FUN_104e1730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e1740(undefined4 param_1);
template<class... A> int FUN_104e1740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e1750(undefined4 param_1);
template<class... A> int FUN_104e1750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e1760(undefined4 param_1);
template<class... A> int FUN_104e1760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e1770(undefined4 param_1);
template<class... A> int FUN_104e1770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e1780(undefined4 param_1);
template<class... A> int FUN_104e1780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e1790(undefined4 param_1);
template<class... A> int FUN_104e1790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e17a0(undefined4 param_1);
template<class... A> int FUN_104e17a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e17b0(undefined4 param_1);
template<class... A> int FUN_104e17b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e17c0(undefined4 param_1);
template<class... A> int FUN_104e17c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e17d0(undefined4 param_1);
template<class... A> int FUN_104e17d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e17e0(undefined4 param_1);
template<class... A> int FUN_104e17e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e17f0(undefined4 param_1);
template<class... A> int FUN_104e17f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e1800(undefined4 param_1);
template<class... A> int FUN_104e1800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e1810(undefined4 param_1);
template<class... A> int FUN_104e1810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e1820(undefined4 param_1);
template<class... A> int FUN_104e1820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e1830(undefined4 param_1);
template<class... A> int FUN_104e1830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e1840(int *param_1,int param_2);
template<class... A> int FUN_104e1840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104e1860(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_104e1860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e1880(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_104e1880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e1960(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_104e1960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e19b0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_104e19b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e1a00(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_104e1a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e1a30(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_104e1a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e1a60(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_104e1a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e1a90(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_104e1a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e1ac0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_104e1ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e1b90(undefined4 param_1,int *param_2);
template<class... A> int FUN_104e1b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_104e1d30(int param_1,int param_2);
template<class... A> int FUN_104e1d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e1e90(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104e1e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e1eb0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104e1eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e1ed0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104e1ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e1ef0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104e1ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e1f10(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104e1f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e21d0(undefined4 param_1);
template<class... A> int FUN_104e21d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e21e0(undefined4 param_1);
template<class... A> int FUN_104e21e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e21f0(undefined4 param_1);
template<class... A> int FUN_104e21f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e2200(undefined4 param_1);
template<class... A> int FUN_104e2200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e2210(undefined4 param_1);
template<class... A> int FUN_104e2210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e2220(undefined4 param_1);
template<class... A> int FUN_104e2220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e2230(undefined4 param_1);
template<class... A> int FUN_104e2230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e2240(undefined4 param_1);
template<class... A> int FUN_104e2240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e2250(undefined4 param_1);
template<class... A> int FUN_104e2250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e2260(undefined4 param_1);
template<class... A> int FUN_104e2260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e2270(undefined4 param_1);
template<class... A> int FUN_104e2270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e2280(undefined4 param_1);
template<class... A> int FUN_104e2280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e2290(undefined4 param_1);
template<class... A> int FUN_104e2290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e22a0(undefined4 param_1);
template<class... A> int FUN_104e22a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e22b0(undefined4 param_1);
template<class... A> int FUN_104e22b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e22c0(undefined4 param_1);
template<class... A> int FUN_104e22c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e22d0(undefined4 param_1);
template<class... A> int FUN_104e22d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e22e0(undefined4 param_1);
template<class... A> int FUN_104e22e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e22f0(undefined4 param_1);
template<class... A> int FUN_104e22f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e2300(undefined4 param_1);
template<class... A> int FUN_104e2300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e2310(undefined4 param_1);
template<class... A> int FUN_104e2310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e2320(undefined4 param_1);
template<class... A> int FUN_104e2320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e2330(undefined4 param_1);
template<class... A> int FUN_104e2330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e2340(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_104e2340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e2350(undefined4 param_1);
template<class... A> int FUN_104e2350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e2360(undefined4 param_1);
template<class... A> int FUN_104e2360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e2370(undefined4 param_1);
template<class... A> int FUN_104e2370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_104e2380(int param_1,int param_2);
template<class... A> int FUN_104e2380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e2390(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_104e2390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e23c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_104e23c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e23f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_104e23f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104e2700(undefined4 *param_1);
template<class... A> int FUN_104e2700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104e2790(undefined4 *param_1);
template<class... A> int FUN_104e2790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104e2b80(undefined4 *param_1);
template<class... A> int FUN_104e2b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104e2ba0(undefined4 *param_1);
template<class... A> int FUN_104e2ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104e2bc0(undefined4 *param_1);
template<class... A> int FUN_104e2bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104e2cd0(undefined4 *param_1);
template<class... A> int FUN_104e2cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104e2cf0(undefined4 *param_1);
template<class... A> int FUN_104e2cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104e2d10(undefined4 *param_1);
template<class... A> int FUN_104e2d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104e2d30(undefined4 *param_1);
template<class... A> int FUN_104e2d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104e2d50(undefined4 *param_1);
template<class... A> int FUN_104e2d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e2d70(undefined4 param_1);
template<class... A> int FUN_104e2d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e2d80(undefined4 param_1);
template<class... A> int FUN_104e2d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e2d90(undefined4 param_1);
template<class... A> int FUN_104e2d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e2da0(undefined4 param_1);
template<class... A> int FUN_104e2da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e2db0(undefined4 param_1);
template<class... A> int FUN_104e2db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104e2dc0(undefined4 *param_1);
template<class... A> int FUN_104e2dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104e3180(undefined4 *param_1);
template<class... A> int FUN_104e3180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104e31a0(undefined4 *param_1);
template<class... A> int FUN_104e31a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e3c70(void);
template<class... A> int FUN_104e3c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e3c80(void);
template<class... A> int FUN_104e3c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e3c90(void);
template<class... A> int FUN_104e3c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e3fa0(int param_1);
template<class... A> int FUN_104e3fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e3fb0(int param_1);
template<class... A> int FUN_104e3fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e3fc0(int param_1);
template<class... A> int FUN_104e3fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e4430(void);
template<class... A> int FUN_104e4430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e4a20(undefined4 *param_1);
template<class... A> int FUN_104e4a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e4a30(undefined4 *param_1);
template<class... A> int FUN_104e4a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104e4a40(int *param_1);
template<class... A> int FUN_104e4a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e4a50(undefined4 *param_1);
template<class... A> int FUN_104e4a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104e4a60(int *param_1);
template<class... A> int FUN_104e4a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104e4a70(int *param_1);
template<class... A> int FUN_104e4a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104e4a80(int *param_1);
template<class... A> int FUN_104e4a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104e4a90(int *param_1);
template<class... A> int FUN_104e4a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104e4aa0(int *param_1);
template<class... A> int FUN_104e4aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104e4ab0(int *param_1);
template<class... A> int FUN_104e4ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104e4ac0(int *param_1);
template<class... A> int FUN_104e4ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104e4ad0(int *param_1);
template<class... A> int FUN_104e4ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104e4ae0(int *param_1);
template<class... A> int FUN_104e4ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104e4af0(int *param_1);
template<class... A> int FUN_104e4af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104e4b00(int *param_1);
template<class... A> int FUN_104e4b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104e4b10(int *param_1);
template<class... A> int FUN_104e4b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104e4b20(int *param_1);
template<class... A> int FUN_104e4b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104e4b30(int *param_1);
template<class... A> int FUN_104e4b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104e4b40(int *param_1);
template<class... A> int FUN_104e4b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104e4b50(undefined4 *param_1);
template<class... A> int FUN_104e4b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104e4b60(undefined4 *param_1);
template<class... A> int FUN_104e4b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104e4b70(undefined4 *param_1);
template<class... A> int FUN_104e4b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104e4b80(undefined4 *param_1);
template<class... A> int FUN_104e4b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104e4b90(undefined4 *param_1);
template<class... A> int FUN_104e4b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104e4ba0(undefined4 *param_1);
template<class... A> int FUN_104e4ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104e4bb0(undefined4 *param_1);
template<class... A> int FUN_104e4bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104e4bc0(undefined4 *param_1);
template<class... A> int FUN_104e4bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_104e4bd0(int *param_1);
template<class... A> int FUN_104e4bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_104e4be0(int *param_1);
template<class... A> int FUN_104e4be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_104e4bf0(int *param_1);
template<class... A> int FUN_104e4bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104e4ff0(int param_1);
template<class... A> int FUN_104e4ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e5000(undefined4 param_1);
template<class... A> int FUN_104e5000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e5020(undefined4 param_1);
template<class... A> int FUN_104e5020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e5040(undefined4 param_1);
template<class... A> int FUN_104e5040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e5060(undefined4 param_1);
template<class... A> int FUN_104e5060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e5080(undefined4 param_1);
template<class... A> int FUN_104e5080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e50a0(undefined4 *param_1);
template<class... A> int FUN_104e50a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e50c0(undefined4 *param_1);
template<class... A> int FUN_104e50c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e50e0(undefined4 *param_1);
template<class... A> int FUN_104e50e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e5690(int param_1);
template<class... A> int FUN_104e5690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e56b0(int param_1);
template<class... A> int FUN_104e56b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e56d0(int param_1);
template<class... A> int FUN_104e56d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104e56f0(float *param_1);
template<class... A> int FUN_104e56f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104e5750(float *param_1);
template<class... A> int FUN_104e5750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104e57b0(float *param_1);
template<class... A> int FUN_104e57b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104e5990(undefined4 *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104e5990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e6490(undefined4 param_1);
template<class... A> int FUN_104e6490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e64a0(undefined4 param_1);
template<class... A> int FUN_104e64a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e64b0(undefined4 param_1);
template<class... A> int FUN_104e64b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e64c0(undefined4 param_1);
template<class... A> int FUN_104e64c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e64d0(undefined4 param_1);
template<class... A> int FUN_104e64d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e64e0(undefined4 param_1);
template<class... A> int FUN_104e64e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e64f0(undefined4 param_1);
template<class... A> int FUN_104e64f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e6500(undefined4 param_1);
template<class... A> int FUN_104e6500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e6510(undefined4 param_1);
template<class... A> int FUN_104e6510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e6520(undefined4 param_1);
template<class... A> int FUN_104e6520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e6530(undefined4 param_1);
template<class... A> int FUN_104e6530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e6540(undefined4 param_1);
template<class... A> int FUN_104e6540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e6550(undefined4 param_1);
template<class... A> int FUN_104e6550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e6560(undefined4 param_1);
template<class... A> int FUN_104e6560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e6570(undefined4 param_1);
template<class... A> int FUN_104e6570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e6580(undefined4 param_1);
template<class... A> int FUN_104e6580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e6590(undefined4 param_1);
template<class... A> int FUN_104e6590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e65a0(undefined4 param_1);
template<class... A> int FUN_104e65a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e65b0(undefined4 param_1);
template<class... A> int FUN_104e65b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e65c0(undefined4 param_1);
template<class... A> int FUN_104e65c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e65d0(undefined4 param_1);
template<class... A> int FUN_104e65d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e65e0(undefined4 param_1);
template<class... A> int FUN_104e65e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e65f0(undefined4 param_1);
template<class... A> int FUN_104e65f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e6600(undefined4 param_1);
template<class... A> int FUN_104e6600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e6610(undefined4 param_1);
template<class... A> int FUN_104e6610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e6620(undefined4 param_1);
template<class... A> int FUN_104e6620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104e67b0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_104e67b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104e67c0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_104e67c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104e67d0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_104e67d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e67e0(undefined4 param_1);
template<class... A> int FUN_104e67e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e67f0(undefined4 param_1);
template<class... A> int FUN_104e67f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e6800(undefined4 param_1);
template<class... A> int FUN_104e6800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e6810(undefined4 param_1);
template<class... A> int FUN_104e6810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e6820(undefined4 param_1);
template<class... A> int FUN_104e6820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e6830(undefined4 param_1);
template<class... A> int FUN_104e6830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e6990(void);
template<class... A> int FUN_104e6990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e69a0(void);
template<class... A> int FUN_104e69a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e69b0(void);
template<class... A> int FUN_104e69b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104e69c0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104e69c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104e69d0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104e69d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104e69e0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104e69e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104e69f0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104e69f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e6ba0(int param_1);
template<class... A> int FUN_104e6ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e6bb0(int param_1);
template<class... A> int FUN_104e6bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e6bc0(int param_1);
template<class... A> int FUN_104e6bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e6bd0(undefined4 *param_1);
template<class... A> int FUN_104e6bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e6be0(undefined4 *param_1);
template<class... A> int FUN_104e6be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e6bf0(undefined4 *param_1);
template<class... A> int FUN_104e6bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e6c00(undefined4 *param_1);
template<class... A> int FUN_104e6c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e6c10(undefined4 *param_1);
template<class... A> int FUN_104e6c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e7480(int param_1,int param_2,int param_3);
template<class... A> int FUN_104e7480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e74c0(int param_1,int param_2,int param_3);
template<class... A> int FUN_104e74c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e7500(int param_1,int param_2,int param_3);
template<class... A> int FUN_104e7500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e7540(void);
template<class... A> int FUN_104e7540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104e7550(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104e7550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104e7820(uint param_1);
template<class... A> int FUN_104e7820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104e7890(uint param_1);
template<class... A> int FUN_104e7890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104e7910(uint param_1);
template<class... A> int FUN_104e7910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104e7a00(uint param_1);
template<class... A> int FUN_104e7a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104e7a70(uint param_1);
template<class... A> int FUN_104e7a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104e7ae0(uint param_1);
template<class... A> int FUN_104e7ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104e7b50(uint param_1);
template<class... A> int FUN_104e7b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e96e0(int param_1);
template<class... A> int FUN_104e96e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e96f0(int param_1);
template<class... A> int FUN_104e96f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104e9700(int param_1);
template<class... A> int FUN_104e9700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104e9710(int *param_1);
template<class... A> int FUN_104e9710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104e9720(int *param_1);
template<class... A> int FUN_104e9720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104e9730(int param_1);
template<class... A> int FUN_104e9730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e9a10(int param_1);
template<class... A> int FUN_104e9a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e9b00(int param_1);
template<class... A> int FUN_104e9b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e9d30(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_104e9d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e9d80(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_104e9d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e9dd0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_104e9dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104e9e20(int param_1,int param_2);
template<class... A> int FUN_104e9e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104e9e70(int param_1,int param_2);
template<class... A> int FUN_104e9e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104e9ec0(int param_1,int param_2);
template<class... A> int FUN_104e9ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104e9fb0(int param_1,int param_2);
template<class... A> int FUN_104e9fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104ea000(int param_1,int param_2);
template<class... A> int FUN_104ea000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104ea050(int param_1,int param_2);
template<class... A> int FUN_104ea050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104ea100(int param_1);
template<class... A> int FUN_104ea100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104ea110(int param_1);
template<class... A> int FUN_104ea110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ea120(int *param_1);
template<class... A> int FUN_104ea120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104ea350(int param_1);
template<class... A> int FUN_104ea350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104ea560(int param_1);
template<class... A> int FUN_104ea560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104eadd0(int param_1);
template<class... A> int FUN_104eadd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ec060(int param_1);
template<class... A> int FUN_104ec060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104ec0d0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_104ec0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_104ec0f0(float *param_1);
template<class... A> int FUN_104ec0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_104ec100(float *param_1);
template<class... A> int FUN_104ec100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_104ec110(float *param_1);
template<class... A> int FUN_104ec110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ec120(void);
template<class... A> int FUN_104ec120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ec130(void);
template<class... A> int FUN_104ec130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ec140(void);
template<class... A> int FUN_104ec140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ec150(void);
template<class... A> int FUN_104ec150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ec160(void);
template<class... A> int FUN_104ec160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ec170(void);
template<class... A> int FUN_104ec170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ec180(void);
template<class... A> int FUN_104ec180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ec190(void);
template<class... A> int FUN_104ec190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ec1a0(void);
template<class... A> int FUN_104ec1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ec1b0(void);
template<class... A> int FUN_104ec1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ec1c0(void);
template<class... A> int FUN_104ec1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ec1d0(void);
template<class... A> int FUN_104ec1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ec1e0(void);
template<class... A> int FUN_104ec1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ec1f0(void);
template<class... A> int FUN_104ec1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ec200(void);
template<class... A> int FUN_104ec200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ec210(void);
template<class... A> int FUN_104ec210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104eca10(undefined4 param_1);
template<class... A> int FUN_104eca10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104eca20(undefined4 param_1);
template<class... A> int FUN_104eca20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104eca30(undefined4 param_1);
template<class... A> int FUN_104eca30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104eca40(undefined4 *param_1);
template<class... A> int FUN_104eca40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104eca50(undefined4 *param_1);
template<class... A> int FUN_104eca50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104eca60(undefined4 *param_1);
template<class... A> int FUN_104eca60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104eced0(undefined4 *param_1);
template<class... A> int FUN_104eced0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104ed2b0(undefined4 *param_1);
template<class... A> int FUN_104ed2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ed5e0(int param_1);
template<class... A> int FUN_104ed5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104ed5f0(int *param_1);
template<class... A> int FUN_104ed5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104ed600(int *param_1);
template<class... A> int FUN_104ed600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104ed610(int *param_1);
template<class... A> int FUN_104ed610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ed620(int param_1);
template<class... A> int FUN_104ed620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104ed630(int *param_1);
template<class... A> int FUN_104ed630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104ed640(int *param_1);
template<class... A> int FUN_104ed640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104ed6f0(undefined4 *param_1);
template<class... A> int FUN_104ed6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104ed720(undefined4 *param_1);
template<class... A> int FUN_104ed720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104ed7c0(undefined4 *param_1);
template<class... A> int FUN_104ed7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104ed7d0(undefined4 *param_1);
template<class... A> int FUN_104ed7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104ed850(undefined4 *param_1);
template<class... A> int FUN_104ed850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104ed980(undefined4 *param_1);
template<class... A> int FUN_104ed980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104ed990(undefined4 *param_1);
template<class... A> int FUN_104ed990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104eda10(undefined4 *param_1);
template<class... A> int FUN_104eda10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104ee050(int *param_1);
template<class... A> int FUN_104ee050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104ee060(int *param_1);
template<class... A> int FUN_104ee060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104ee070(int *param_1);
template<class... A> int FUN_104ee070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104ee080(int *param_1);
template<class... A> int FUN_104ee080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104ee090(int *param_1);
template<class... A> int FUN_104ee090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_104ee650(int *param_1,undefined4 *param_2);
template<class... A> int FUN_104ee650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104eeaa0(char *param_1);
template<class... A> int FUN_104eeaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104eec00(undefined4 param_1);
template<class... A> int FUN_104eec00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104eec10(undefined4 param_1);
template<class... A> int FUN_104eec10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104eec20(undefined4 param_1);
template<class... A> int FUN_104eec20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * FUN_104eec40(uint *param_1,uint *param_2);
template<class... A> int FUN_104eec40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_104eedf0(undefined1 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104eedf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 __fastcall FUN_104ef220(uint *param_1);
template<class... A> int FUN_104ef220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_104ef230(int param_1);
template<class... A> int FUN_104ef230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ef240(undefined4 *param_1);
template<class... A> int FUN_104ef240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ef250(undefined4 *param_1);
template<class... A> int FUN_104ef250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_104ef260(int *param_1);
template<class... A> int FUN_104ef260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ef360(char *param_1,char *param_2);
template<class... A> int FUN_104ef360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104ef3c0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104ef3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_104ef3d0(uint param_1);
template<class... A> int FUN_104ef3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_104effe0(uint *param_1);
template<class... A> int FUN_104effe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f0010(void);
template<class... A> int FUN_104f0010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_104f0020(char *param_1,char *param_2);
template<class... A> int FUN_104f0020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_104f0040(int *param_1,int *param_2);
template<class... A> int FUN_104f0040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104f6590(undefined4 *param_1);
template<class... A> int FUN_104f6590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f6750(int param_1);
template<class... A> int FUN_104f6750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f68f0(int param_1);
template<class... A> int FUN_104f68f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_104f6a30(int *param_1);
template<class... A> int FUN_104f6a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f6d30(undefined4 param_1);
template<class... A> int FUN_104f6d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104f77e0(undefined4 param_1);
template<class... A> int FUN_104f77e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_104f7990(undefined1 *param_1);
template<class... A> int FUN_104f7990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_104f79a0(undefined1 *param_1);
template<class... A> int FUN_104f79a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_104f7a20(SCStr *param_1,int param_2);
template<class... A> int FUN_104f7a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f8000(void *param_1,void *param_2,int param_3);
template<class... A> int FUN_104f8000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104f8020(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104f8020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104f8040(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104f8040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104f8060(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104f8060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104f80c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_104f80c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104f8240(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_104f8240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104f8260(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_104f8260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104f8280(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104f8280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104f8340(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104f8340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104f8350(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104f8350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f8570(void);
template<class... A> int FUN_104f8570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f8580(void);
template<class... A> int FUN_104f8580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f85a0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104f85a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f85b0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104f85b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f85c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104f85c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f85d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104f85d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f85e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104f85e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f85f0(void);
template<class... A> int FUN_104f85f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f8600(void);
template<class... A> int FUN_104f8600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f8610(void);
template<class... A> int FUN_104f8610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f8620(void);
template<class... A> int FUN_104f8620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f8d60(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_104f8d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f8d80(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_104f8d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f8ec0(undefined4 *param_1);
template<class... A> int FUN_104f8ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f8ed0(undefined4 *param_1);
template<class... A> int FUN_104f8ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f8ee0(undefined4 param_1);
template<class... A> int FUN_104f8ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f8ef0(undefined4 param_1);
template<class... A> int FUN_104f8ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f8f00(int param_1,SCStr *param_2);
template<class... A> int FUN_104f8f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_104f8f30(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_104f8f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f9340(undefined4 param_1);
template<class... A> int FUN_104f9340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f9490(undefined4 param_1);
template<class... A> int FUN_104f9490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f94a0(undefined4 param_1);
template<class... A> int FUN_104f94a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f94b0(undefined4 param_1);
template<class... A> int FUN_104f94b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f94c0(undefined4 param_1);
template<class... A> int FUN_104f94c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f94d0(undefined4 param_1);
template<class... A> int FUN_104f94d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f94e0(undefined4 param_1);
template<class... A> int FUN_104f94e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f94f0(undefined4 param_1);
template<class... A> int FUN_104f94f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f9500(undefined4 param_1);
template<class... A> int FUN_104f9500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f9510(undefined4 param_1);
template<class... A> int FUN_104f9510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f9520(undefined4 param_1);
template<class... A> int FUN_104f9520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f9530(undefined4 param_1);
template<class... A> int FUN_104f9530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f9540(undefined4 param_1);
template<class... A> int FUN_104f9540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f9550(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_104f9550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f9580(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_104f9580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f95a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_104f95a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f95d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_104f95d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f9600(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_104f9600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f98c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104f98c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f98e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104f98e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f9900(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104f9900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f99a0(undefined4 param_1);
template<class... A> int FUN_104f99a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f99b0(undefined4 param_1);
template<class... A> int FUN_104f99b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f99c0(undefined4 param_1);
template<class... A> int FUN_104f99c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f99d0(undefined4 param_1);
template<class... A> int FUN_104f99d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f99e0(undefined4 param_1);
template<class... A> int FUN_104f99e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f99f0(undefined4 param_1);
template<class... A> int FUN_104f99f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f9a00(undefined4 param_1);
template<class... A> int FUN_104f9a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f9a10(undefined4 param_1);
template<class... A> int FUN_104f9a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f9a20(undefined4 param_1);
template<class... A> int FUN_104f9a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f9a30(undefined4 param_1);
template<class... A> int FUN_104f9a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f9a40(undefined4 param_1);
template<class... A> int FUN_104f9a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_104f9a50(void);
template<class... A> int FUN_104f9a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f9a60(undefined4 param_1);
template<class... A> int FUN_104f9a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f9a70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_104f9a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104f9aa0(undefined4 *param_1);
template<class... A> int FUN_104f9aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104f9ad0(undefined4 *param_1);
template<class... A> int FUN_104f9ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104f9ba0(undefined4 *param_1);
template<class... A> int FUN_104f9ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104f9d10(undefined4 *param_1);
template<class... A> int FUN_104f9d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104f9e50(undefined4 *param_1);
template<class... A> int FUN_104f9e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104f9f70(undefined4 *param_1);
template<class... A> int FUN_104f9f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104fa000(undefined4 *param_1);
template<class... A> int FUN_104fa000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104fa020(undefined4 *param_1);
template<class... A> int FUN_104fa020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104fa040(undefined4 *param_1);
template<class... A> int FUN_104fa040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fa060(undefined4 param_1);
template<class... A> int FUN_104fa060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fa070(undefined4 param_1);
template<class... A> int FUN_104fa070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fa080(undefined4 param_1);
template<class... A> int FUN_104fa080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fa090(undefined4 param_1);
template<class... A> int FUN_104fa090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104fa0d0(undefined4 *param_1);
template<class... A> int FUN_104fa0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104fa1f0(undefined4 *param_1);
template<class... A> int FUN_104fa1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104fa210(undefined4 *param_1);
template<class... A> int FUN_104fa210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104faee0(void);
template<class... A> int FUN_104faee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104fb330(undefined4 *param_1);
template<class... A> int FUN_104fb330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fb880(int param_1);
template<class... A> int FUN_104fb880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fb890(undefined4 *param_1);
template<class... A> int FUN_104fb890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fb8a0(undefined4 *param_1);
template<class... A> int FUN_104fb8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104fb8b0(int *param_1);
template<class... A> int FUN_104fb8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fb8c0(undefined4 *param_1);
template<class... A> int FUN_104fb8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104fb8d0(int *param_1);
template<class... A> int FUN_104fb8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fb8e0(undefined4 *param_1);
template<class... A> int FUN_104fb8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104fb8f0(int *param_1);
template<class... A> int FUN_104fb8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fb900(undefined4 *param_1);
template<class... A> int FUN_104fb900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fb910(undefined4 *param_1);
template<class... A> int FUN_104fb910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fb920(undefined4 *param_1);
template<class... A> int FUN_104fb920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fb930(undefined4 *param_1);
template<class... A> int FUN_104fb930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fb940(undefined4 *param_1);
template<class... A> int FUN_104fb940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fb950(undefined4 *param_1);
template<class... A> int FUN_104fb950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104fb960(int *param_1);
template<class... A> int FUN_104fb960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104fb970(int *param_1);
template<class... A> int FUN_104fb970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104fb980(int *param_1);
template<class... A> int FUN_104fb980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104fb990(int *param_1);
template<class... A> int FUN_104fb990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104fb9a0(int *param_1);
template<class... A> int FUN_104fb9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104fb9b0(int *param_1);
template<class... A> int FUN_104fb9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fb9c0(undefined4 *param_1);
template<class... A> int FUN_104fb9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fb9d0(undefined4 *param_1);
template<class... A> int FUN_104fb9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104fb9e0(undefined4 *param_1);
template<class... A> int FUN_104fb9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104fb9f0(undefined4 *param_1);
template<class... A> int FUN_104fb9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_104fba90(int *param_1);
template<class... A> int FUN_104fba90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_104fbaa0(int *param_1);
template<class... A> int FUN_104fbaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_104fbab0(int *param_1);
template<class... A> int FUN_104fbab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104fbfc0(undefined4 *param_1);
template<class... A> int FUN_104fbfc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104fbff0(undefined4 *param_1);
template<class... A> int FUN_104fbff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104fc240(int param_1);
template<class... A> int FUN_104fc240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104fc260(int param_1);
template<class... A> int FUN_104fc260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104fc280(float *param_1);
template<class... A> int FUN_104fc280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104fc2e0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104fc2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104fc3a0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104fc3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fca20(undefined4 param_1);
template<class... A> int FUN_104fca20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fca30(undefined4 param_1);
template<class... A> int FUN_104fca30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fca40(undefined4 param_1);
template<class... A> int FUN_104fca40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fca50(undefined4 param_1);
template<class... A> int FUN_104fca50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fca60(undefined4 param_1);
template<class... A> int FUN_104fca60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fca70(undefined4 param_1);
template<class... A> int FUN_104fca70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fca80(undefined4 param_1);
template<class... A> int FUN_104fca80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fca90(undefined4 param_1);
template<class... A> int FUN_104fca90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fcaa0(undefined4 param_1);
template<class... A> int FUN_104fcaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fcab0(undefined4 param_1);
template<class... A> int FUN_104fcab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fcac0(undefined4 param_1);
template<class... A> int FUN_104fcac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fcad0(undefined4 param_1);
template<class... A> int FUN_104fcad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fcae0(undefined4 param_1);
template<class... A> int FUN_104fcae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fcaf0(undefined4 param_1);
template<class... A> int FUN_104fcaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fcb00(undefined4 param_1);
template<class... A> int FUN_104fcb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fcb10(undefined4 param_1);
template<class... A> int FUN_104fcb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fcb20(undefined4 param_1);
template<class... A> int FUN_104fcb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fcb30(undefined4 param_1);
template<class... A> int FUN_104fcb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fcb40(undefined4 param_1);
template<class... A> int FUN_104fcb40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fcb50(undefined4 param_1);
template<class... A> int FUN_104fcb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_104fcee0(int param_1);
template<class... A> int FUN_104fcee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fcf10(undefined4 param_1);
template<class... A> int FUN_104fcf10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fcf20(undefined4 param_1);
template<class... A> int FUN_104fcf20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104fcfd0(void);
template<class... A> int FUN_104fcfd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104fcfe0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104fcfe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104fcff0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104fcff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fd0b0(int param_1);
template<class... A> int FUN_104fd0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fd0c0(int param_1);
template<class... A> int FUN_104fd0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104fd0d0(undefined4 *param_1);
template<class... A> int FUN_104fd0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104fd0e0(undefined4 *param_1);
template<class... A> int FUN_104fd0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104fd510(int param_1,int param_2,int param_3);
template<class... A> int FUN_104fd510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104fd6a0(uint param_1);
template<class... A> int FUN_104fd6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104fd710(uint param_1);
template<class... A> int FUN_104fd710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104fd790(uint param_1);
template<class... A> int FUN_104fd790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104fd800(uint param_1);
template<class... A> int FUN_104fd800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fd8b0(int param_1);
template<class... A> int FUN_104fd8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104fd8d0(int *param_1);
template<class... A> int FUN_104fd8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104fd8e0(int param_1);
template<class... A> int FUN_104fd8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104fd9a0(int param_1);
template<class... A> int FUN_104fd9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104fdcc0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_104fdcc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104fdd10(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_104fdd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104fdd60(int param_1,int param_2);
template<class... A> int FUN_104fdd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104fddb0(int param_1,int param_2);
template<class... A> int FUN_104fddb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104fde00(int param_1,int param_2);
template<class... A> int FUN_104fde00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104fdeb0(int param_1,int param_2);
template<class... A> int FUN_104fdeb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fdf00(undefined4 *param_1);
template<class... A> int FUN_104fdf00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fdf10(undefined4 *param_1);
template<class... A> int FUN_104fdf10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104fdf20(undefined4 *param_1);
template<class... A> int FUN_104fdf20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104fdf50(int param_1);
template<class... A> int FUN_104fdf50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_104feda0(void);
template<class... A> int FUN_104feda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104fedb0(int *param_1);
template<class... A> int FUN_104fedb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_104fedc0(float *param_1);
template<class... A> int FUN_104fedc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104fedd0(void);
template<class... A> int FUN_104fedd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104fede0(void);
template<class... A> int FUN_104fede0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104fedf0(void);
template<class... A> int FUN_104fedf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104fee00(void);
template<class... A> int FUN_104fee00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104fee10(void);
template<class... A> int FUN_104fee10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104fee20(void);
template<class... A> int FUN_104fee20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104fee30(void);
template<class... A> int FUN_104fee30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104fee40(void);
template<class... A> int FUN_104fee40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ff2f0(undefined4 param_1);
template<class... A> int FUN_104ff2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ff300(undefined4 param_1);
template<class... A> int FUN_104ff300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ff6e0(undefined4 *param_1);
template<class... A> int FUN_104ff6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ff6f0(undefined4 *param_1);
template<class... A> int FUN_104ff6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ff700(undefined4 *param_1);
template<class... A> int FUN_104ff700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ff710(undefined4 *param_1);
template<class... A> int FUN_104ff710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104ff930(undefined4 *param_1);
template<class... A> int FUN_104ff930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104ff960(undefined4 *param_1);
template<class... A> int FUN_104ff960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104ff990(undefined4 *param_1);
template<class... A> int FUN_104ff990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104ff9c0(undefined4 *param_1);
template<class... A> int FUN_104ff9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104ff9f0(undefined4 *param_1);
template<class... A> int FUN_104ff9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104ffa20(undefined4 *param_1);
template<class... A> int FUN_104ffa20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104ffa50(undefined4 *param_1);
template<class... A> int FUN_104ffa50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ffc80(int param_1);
template<class... A> int FUN_104ffc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104ffee0(int *param_1);
template<class... A> int FUN_104ffee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104ffef0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104ffef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104fff10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104fff10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104fff30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_104fff30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104fff50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_104fff50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10500000(void);
template<class... A> int FUN_10500000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10500020(void);
template<class... A> int FUN_10500020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10500040(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10500040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10500050(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10500050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10500060(void);
template<class... A> int FUN_10500060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10500070(void);
template<class... A> int FUN_10500070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10500220(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10500220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10500240(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10500240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10500260(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10500260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10500300(undefined4 param_1);
template<class... A> int FUN_10500300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10500310(undefined4 param_1);
template<class... A> int FUN_10500310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10500320(undefined4 param_1);
template<class... A> int FUN_10500320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10500330(undefined4 param_1);
template<class... A> int FUN_10500330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10500340(undefined4 param_1);
template<class... A> int FUN_10500340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10500350(undefined4 param_1);
template<class... A> int FUN_10500350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10500360(undefined4 param_1);
template<class... A> int FUN_10500360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10500370(undefined4 param_1);
template<class... A> int FUN_10500370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10500380(void);
template<class... A> int FUN_10500380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10500400(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10500400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10500420(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10500420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10500440(undefined4 param_1);
template<class... A> int FUN_10500440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10500450(undefined4 param_1);
template<class... A> int FUN_10500450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10500460(undefined4 param_1);
template<class... A> int FUN_10500460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10500470(void);
template<class... A> int FUN_10500470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10500480(void);
template<class... A> int FUN_10500480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10500490(undefined4 *param_1);
template<class... A> int FUN_10500490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105004c0(undefined4 *param_1);
template<class... A> int FUN_105004c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105004f0(undefined4 *param_1);
template<class... A> int FUN_105004f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10500520(undefined4 *param_1);
template<class... A> int FUN_10500520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10500630(undefined4 *param_1);
template<class... A> int FUN_10500630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10500680(undefined4 *param_1);
template<class... A> int FUN_10500680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105006a0(undefined4 *param_1);
template<class... A> int FUN_105006a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10500700(undefined4 *param_1);
template<class... A> int FUN_10500700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105007e0(undefined4 *param_1);
template<class... A> int FUN_105007e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10500800(undefined4 *param_1);
template<class... A> int FUN_10500800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10500820(undefined4 param_1);
template<class... A> int FUN_10500820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10500830(undefined4 param_1);
template<class... A> int FUN_10500830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10500840(undefined4 *param_1);
template<class... A> int FUN_10500840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10500890(undefined4 *param_1);
template<class... A> int FUN_10500890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105008e0(undefined4 *param_1);
template<class... A> int FUN_105008e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10500910(undefined4 *param_1);
template<class... A> int FUN_10500910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10500970(undefined4 *param_1);
template<class... A> int FUN_10500970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105015c0(undefined4 *param_1);
template<class... A> int FUN_105015c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105015d0(undefined4 *param_1);
template<class... A> int FUN_105015d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105017a0(undefined4 *param_1);
template<class... A> int FUN_105017a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10503070(undefined4 *param_1);
template<class... A> int FUN_10503070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105030b0(undefined4 *param_1);
template<class... A> int FUN_105030b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105033f0(undefined4 *param_1);
template<class... A> int FUN_105033f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105038f0(undefined4 *param_1);
template<class... A> int FUN_105038f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10503900(undefined4 *param_1);
template<class... A> int FUN_10503900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10504560(undefined4 param_1);
template<class... A> int FUN_10504560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10504580(undefined4 *param_1);
template<class... A> int FUN_10504580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10504590(undefined4 *param_1);
template<class... A> int FUN_10504590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105045a0(int param_1);
template<class... A> int FUN_105045a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105056c0(undefined4 param_1);
template<class... A> int FUN_105056c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505710(undefined4 param_1);
template<class... A> int FUN_10505710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505730(undefined4 param_1);
template<class... A> int FUN_10505730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505750(undefined4 param_1);
template<class... A> int FUN_10505750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10505770(undefined4 *param_1);
template<class... A> int FUN_10505770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10505780(int param_1);
template<class... A> int FUN_10505780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505790(undefined4 param_1);
template<class... A> int FUN_10505790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105057e0(undefined4 param_1);
template<class... A> int FUN_105057e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505830(undefined4 param_1);
template<class... A> int FUN_10505830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505850(undefined4 param_1);
template<class... A> int FUN_10505850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505870(undefined4 param_1);
template<class... A> int FUN_10505870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505890(undefined4 param_1);
template<class... A> int FUN_10505890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105058b0(undefined4 *param_1);
template<class... A> int FUN_105058b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105058c0(undefined4 param_1);
template<class... A> int FUN_105058c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105058e0(undefined4 param_1);
template<class... A> int FUN_105058e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505900(undefined4 param_1);
template<class... A> int FUN_10505900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505920(undefined4 param_1);
template<class... A> int FUN_10505920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505940(undefined4 param_1);
template<class... A> int FUN_10505940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505960(undefined4 param_1);
template<class... A> int FUN_10505960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505980(undefined4 param_1);
template<class... A> int FUN_10505980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105059a0(undefined4 *param_1);
template<class... A> int FUN_105059a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105059d0(undefined4 *param_1);
template<class... A> int FUN_105059d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10505a00(undefined4 param_1);
template<class... A> int FUN_10505a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10505a10(undefined4 param_1);
template<class... A> int FUN_10505a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10505a20(undefined4 param_1);
template<class... A> int FUN_10505a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10505a30(undefined4 param_1);
template<class... A> int FUN_10505a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10505a40(undefined4 param_1);
template<class... A> int FUN_10505a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10505a50(undefined4 param_1);
template<class... A> int FUN_10505a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10505be0(int param_1);
template<class... A> int FUN_10505be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10505c00(int param_1);
template<class... A> int FUN_10505c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10505c10(uint param_1);
template<class... A> int FUN_10505c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10505c90(uint param_1);
template<class... A> int FUN_10505c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10506f90(uint param_1);
template<class... A> int FUN_10506f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105070d0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_105070d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10507120(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10507120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10507170(undefined4 *param_1);
template<class... A> int FUN_10507170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10507180(int param_1);
template<class... A> int FUN_10507180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_10507ef0(int param_1);
template<class... A> int FUN_10507ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1050a530(int param_1);
template<class... A> int FUN_1050a530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1050a7d0(void);
template<class... A> int FUN_1050a7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1050a7e0(void);
template<class... A> int FUN_1050a7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1050a950(int param_1);
template<class... A> int FUN_1050a950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1050a970(int *param_1);
template<class... A> int FUN_1050a970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1050aa30(int param_1);
template<class... A> int FUN_1050aa30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1050aa80(int param_1);
template<class... A> int FUN_1050aa80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1050aaa0(int param_1);
template<class... A> int FUN_1050aaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1050ab20(int param_1);
template<class... A> int FUN_1050ab20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1050ab50(int param_1);
template<class... A> int FUN_1050ab50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1050ab90(int param_1);
template<class... A> int FUN_1050ab90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1050abc0(void);
template<class... A> int FUN_1050abc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1050ae80(undefined4 *param_1);
template<class... A> int FUN_1050ae80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1050ae90(undefined4 *param_1);
template<class... A> int FUN_1050ae90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1050b6a0(undefined4 *param_1);
template<class... A> int FUN_1050b6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1050b6d0(undefined4 *param_1);
template<class... A> int FUN_1050b6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1050b700(undefined4 *param_1);
template<class... A> int FUN_1050b700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1050e550(int param_1);
template<class... A> int FUN_1050e550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte __fastcall FUN_1050e560(int param_1);
template<class... A> int FUN_1050e560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1050e570(int param_1);
template<class... A> int FUN_1050e570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1050e580(int param_1);
template<class... A> int FUN_1050e580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1050ea90(undefined4 *param_1);
template<class... A> int FUN_1050ea90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1050ec20(undefined4 *param_1);
template<class... A> int FUN_1050ec20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1050fd40(undefined4 *param_1);
template<class... A> int FUN_1050fd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10510870(undefined4 *param_1);
template<class... A> int FUN_10510870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10510880(undefined4 *param_1);
template<class... A> int FUN_10510880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10510890(int *param_1);
template<class... A> int FUN_10510890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105108a0(int *param_1);
template<class... A> int FUN_105108a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105108b0(undefined4 *param_1);
template<class... A> int FUN_105108b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105108c0(undefined4 *param_1);
template<class... A> int FUN_105108c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105108d0(undefined4 *param_1);
template<class... A> int FUN_105108d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105108e0(int *param_1);
template<class... A> int FUN_105108e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105108f0(undefined4 *param_1);
template<class... A> int FUN_105108f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10510900(undefined4 *param_1);
template<class... A> int FUN_10510900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10510910(undefined4 *param_1);
template<class... A> int FUN_10510910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10510c90(undefined4 param_1);
template<class... A> int FUN_10510c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10511150(int param_1);
template<class... A> int FUN_10511150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105135c0(undefined4 *param_1);
template<class... A> int FUN_105135c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105135d0(undefined4 *param_1);
template<class... A> int FUN_105135d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10513700(int *param_1);
template<class... A> int FUN_10513700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10516cf0(int param_1);
template<class... A> int FUN_10516cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10516e60(int param_1);
template<class... A> int FUN_10516e60(A...);
// Reference entry 10483060; body size 33 bytes.
#line 1 "ENTRY_10483060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10483060(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingVolumeLimitFormatter);
  return (undefined4 *)(param_1);
}


// Reference entry 10483f60; body size 9 bytes.
#line 1 "ENTRY_10483f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10483f60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjHTListener);
  return (undefined4 *)(param_1);
}


// Reference entry 10484830; body size 53 bytes.
#line 1 "ENTRY_10484830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10484830(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);


  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(param_1 + 0x14);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  thunk_FUN_1106b1c0(puVar1,uVar3);
  if ((int *)param_1[0x15] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[0x15] + 0x2c))(1);
  }
  ((_Tree<> *)(0))->m_op_dtor();
  piVar2 = (int *)((int *)param_1[0x33]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x32] = (undefined4)(0);
    param_1[0x33] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_105a52b0(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x1c);
  thunk_FUN_105a5110(param_1 + 0x2e,*(undefined4 *)(param_1[0x2e] + 4));
  thunk_FUN_1148a50e(param_1[0x2e],0x20);
  thunk_FUN_105a51f0(param_1 + 0x2a,*(undefined4 *)(param_1[0x2a] + 4));
  thunk_FUN_1148a50e(param_1[0x2a],0x38);
  FUN_100517a8();

  ((SCStr *)((SCStr *)(param_1 + 0x1b)))->int_release();
  param_1[0x1b] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x1a)))->int_release();
  param_1[0x1a] = (undefined4)(0);
  piVar2 = (int *)((int *)param_1[0x17]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x16] = (undefined4)(0);
    param_1[0x17] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  piVar2 = (int *)((int *)param_1[0x13]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x12] = (undefined4)(0);
    param_1[0x13] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  piVar2 = (int *)((int *)param_1[0x10]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0xf] = (undefined4)(0);
    param_1[0x10] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }

  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  thunk_FUN_105a05f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10484880; body size 53 bytes.
#line 1 "ENTRY_10484880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10484880(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);


  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(param_1 + 0x14);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  thunk_FUN_1106b1c0(puVar1,uVar3);
  if ((int *)param_1[0x15] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[0x15] + 0x2c))(1);
  }
  ((_Tree<> *)(0))->m_op_dtor();
  piVar2 = (int *)((int *)param_1[0x33]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x32] = (undefined4)(0);
    param_1[0x33] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_105a52b0(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x1c);
  thunk_FUN_105a5110(param_1 + 0x2e,*(undefined4 *)(param_1[0x2e] + 4));
  thunk_FUN_1148a50e(param_1[0x2e],0x20);
  thunk_FUN_105a51f0(param_1 + 0x2a,*(undefined4 *)(param_1[0x2a] + 4));
  thunk_FUN_1148a50e(param_1[0x2a],0x38);
  FUN_100517a8();

  ((SCStr *)((SCStr *)(param_1 + 0x1b)))->int_release();
  param_1[0x1b] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x1a)))->int_release();
  param_1[0x1a] = (undefined4)(0);
  piVar2 = (int *)((int *)param_1[0x17]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x16] = (undefined4)(0);
    param_1[0x17] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  piVar2 = (int *)((int *)param_1[0x13]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x12] = (undefined4)(0);
    param_1[0x13] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  piVar2 = (int *)((int *)param_1[0x10]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0xf] = (undefined4)(0);
    param_1[0x10] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }

  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  thunk_FUN_105a05f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 104848d0; body size 53 bytes.
#line 1 "ENTRY_104848d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104848d0(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);


  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(param_1 + 0x14);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  thunk_FUN_1106b1c0(puVar1,uVar3);
  if ((int *)param_1[0x15] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[0x15] + 0x2c))(1);
  }
  ((_Tree<> *)(0))->m_op_dtor();
  piVar2 = (int *)((int *)param_1[0x33]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x32] = (undefined4)(0);
    param_1[0x33] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_105a52b0(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x1c);
  thunk_FUN_105a5110(param_1 + 0x2e,*(undefined4 *)(param_1[0x2e] + 4));
  thunk_FUN_1148a50e(param_1[0x2e],0x20);
  thunk_FUN_105a51f0(param_1 + 0x2a,*(undefined4 *)(param_1[0x2a] + 4));
  thunk_FUN_1148a50e(param_1[0x2a],0x38);
  FUN_100517a8();

  ((SCStr *)((SCStr *)(param_1 + 0x1b)))->int_release();
  param_1[0x1b] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x1a)))->int_release();
  param_1[0x1a] = (undefined4)(0);
  piVar2 = (int *)((int *)param_1[0x17]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x16] = (undefined4)(0);
    param_1[0x17] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  piVar2 = (int *)((int *)param_1[0x13]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x12] = (undefined4)(0);
    param_1[0x13] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  piVar2 = (int *)((int *)param_1[0x10]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0xf] = (undefined4)(0);
    param_1[0x10] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }

  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  thunk_FUN_105a05f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10484920; body size 53 bytes.
#line 1 "ENTRY_10484920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10484920(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);


  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(param_1 + 0x14);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  thunk_FUN_1106b1c0(puVar1,uVar3);
  if ((int *)param_1[0x15] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[0x15] + 0x2c))(1);
  }
  ((_Tree<> *)(0))->m_op_dtor();
  piVar2 = (int *)((int *)param_1[0x33]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x32] = (undefined4)(0);
    param_1[0x33] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_105a52b0(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x1c);
  thunk_FUN_105a5110(param_1 + 0x2e,*(undefined4 *)(param_1[0x2e] + 4));
  thunk_FUN_1148a50e(param_1[0x2e],0x20);
  thunk_FUN_105a51f0(param_1 + 0x2a,*(undefined4 *)(param_1[0x2a] + 4));
  thunk_FUN_1148a50e(param_1[0x2a],0x38);
  FUN_100517a8();

  ((SCStr *)((SCStr *)(param_1 + 0x1b)))->int_release();
  param_1[0x1b] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x1a)))->int_release();
  param_1[0x1a] = (undefined4)(0);
  piVar2 = (int *)((int *)param_1[0x17]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x16] = (undefined4)(0);
    param_1[0x17] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  piVar2 = (int *)((int *)param_1[0x13]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x12] = (undefined4)(0);
    param_1[0x13] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  piVar2 = (int *)((int *)param_1[0x10]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0xf] = (undefined4)(0);
    param_1[0x10] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }

  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  thunk_FUN_105a05f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10484970; body size 53 bytes.
#line 1 "ENTRY_10484970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10484970(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);


  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(param_1 + 0x14);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  thunk_FUN_1106b1c0(puVar1,uVar3);
  if ((int *)param_1[0x15] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[0x15] + 0x2c))(1);
  }
  ((_Tree<> *)(0))->m_op_dtor();
  piVar2 = (int *)((int *)param_1[0x33]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x32] = (undefined4)(0);
    param_1[0x33] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_105a52b0(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x1c);
  thunk_FUN_105a5110(param_1 + 0x2e,*(undefined4 *)(param_1[0x2e] + 4));
  thunk_FUN_1148a50e(param_1[0x2e],0x20);
  thunk_FUN_105a51f0(param_1 + 0x2a,*(undefined4 *)(param_1[0x2a] + 4));
  thunk_FUN_1148a50e(param_1[0x2a],0x38);
  FUN_100517a8();

  ((SCStr *)((SCStr *)(param_1 + 0x1b)))->int_release();
  param_1[0x1b] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x1a)))->int_release();
  param_1[0x1a] = (undefined4)(0);
  piVar2 = (int *)((int *)param_1[0x17]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x16] = (undefined4)(0);
    param_1[0x17] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  piVar2 = (int *)((int *)param_1[0x13]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x12] = (undefined4)(0);
    param_1[0x13] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  piVar2 = (int *)((int *)param_1[0x10]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0xf] = (undefined4)(0);
    param_1[0x10] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }

  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  thunk_FUN_105a05f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10485430; body size 19 bytes.
#line 1 "ENTRY_10485430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10485430(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10485c60; body size 3 bytes.
#line 1 "ENTRY_10485c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10485c60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10485c70; body size 3 bytes.
#line 1 "ENTRY_10485c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10485c70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10485c80; body size 3 bytes.
#line 1 "ENTRY_10485c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10485c80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10485c90; body size 3 bytes.
#line 1 "ENTRY_10485c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10485c90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10485ca0; body size 3 bytes.
#line 1 "ENTRY_10485ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10485ca0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10485cb0; body size 3 bytes.
#line 1 "ENTRY_10485cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10485cb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10485cc0; body size 7 bytes.
#line 1 "ENTRY_10485cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10485cc0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10485cd0; body size 7 bytes.
#line 1 "ENTRY_10485cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10485cd0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10485ce0; body size 3 bytes.
#line 1 "ENTRY_10485ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10485ce0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10485cf0; body size 3 bytes.
#line 1 "ENTRY_10485cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10485cf0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10485d00; body size 3 bytes.
#line 1 "ENTRY_10485d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10485d00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10485d10; body size 3 bytes.
#line 1 "ENTRY_10485d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10485d10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10485d20; body size 3 bytes.
#line 1 "ENTRY_10485d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10485d20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10485d30; body size 3 bytes.
#line 1 "ENTRY_10485d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10485d30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10485d40; body size 3 bytes.
#line 1 "ENTRY_10485d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10485d40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10485d80; body size 25 bytes.
#line 1 "ENTRY_10485d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10485d80(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{ int stack0x00000004;
 try {
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 10485da0; body size 25 bytes.
#line 1 "ENTRY_10485da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10485da0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{ int stack0x00000004;
 try {
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 10485dc0; body size 25 bytes.
#line 1 "ENTRY_10485dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10485dc0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{ int stack0x00000004;
 try {
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 10485de0; body size 25 bytes.
#line 1 "ENTRY_10485de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10485de0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{ int stack0x00000004;
 try {
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 10485e00; body size 25 bytes.
#line 1 "ENTRY_10485e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10485e00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{ int stack0x00000004;
 try {
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 10486cb0; body size 49 bytes.
#line 1 "ENTRY_10486cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10486cb0(uint param_2)
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


// Reference entry 10487fc0; body size 8 bytes.
#line 1 "ENTRY_10487fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10487fc0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10487fd0; body size 8 bytes.
#line 1 "ENTRY_10487fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10487fd0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10487fe0; body size 8 bytes.
#line 1 "ENTRY_10487fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10487fe0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10487ff0; body size 8 bytes.
#line 1 "ENTRY_10487ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10487ff0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10488000; body size 8 bytes.
#line 1 "ENTRY_10488000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10488000(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 104880e0; body size 3 bytes.
#line 1 "ENTRY_104880e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104880e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104880f0; body size 3 bytes.
#line 1 "ENTRY_104880f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104880f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10488100; body size 4 bytes.
#line 1 "ENTRY_10488100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10488100(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10488110; body size 4 bytes.
#line 1 "ENTRY_10488110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10488110(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10488120; body size 4 bytes.
#line 1 "ENTRY_10488120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10488120(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10488130; body size 4 bytes.
#line 1 "ENTRY_10488130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10488130(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10488140; body size 4 bytes.
#line 1 "ENTRY_10488140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10488140(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10488150; body size 7 bytes.
#line 1 "ENTRY_10488150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10488150(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10488160; body size 7 bytes.
#line 1 "ENTRY_10488160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10488160(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10488170; body size 7 bytes.
#line 1 "ENTRY_10488170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10488170(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10488180; body size 7 bytes.
#line 1 "ENTRY_10488180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10488180(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10488190; body size 7 bytes.
#line 1 "ENTRY_10488190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10488190(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10488290; body size 3 bytes.
#line 1 "ENTRY_10488290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10488290(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 104882a0; body size 26 bytes.
#line 1 "ENTRY_104882a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104882a0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 104882c0; body size 26 bytes.
#line 1 "ENTRY_104882c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104882c0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 104882e0; body size 26 bytes.
#line 1 "ENTRY_104882e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104882e0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10488300; body size 26 bytes.
#line 1 "ENTRY_10488300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10488300(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10488320; body size 26 bytes.
#line 1 "ENTRY_10488320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10488320(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10488340; body size 10 bytes.
#line 1 "ENTRY_10488340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10488340(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10488350; body size 10 bytes.
#line 1 "ENTRY_10488350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10488350(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10488360; body size 10 bytes.
#line 1 "ENTRY_10488360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10488360(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10488370; body size 10 bytes.
#line 1 "ENTRY_10488370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10488370(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10488380; body size 10 bytes.
#line 1 "ENTRY_10488380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10488380(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10488550; body size 38 bytes.
#line 1 "ENTRY_10488550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10488550(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10488580; body size 27 bytes.
#line 1 "ENTRY_10488580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10488580(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 104885b0; body size 27 bytes.
#line 1 "ENTRY_104885b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104885b0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 104888e0; body size 9 bytes.
#line 1 "ENTRY_104888e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104888e0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 104936f0; body size 9 bytes.
#line 1 "ENTRY_104936f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104936f0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10494c70; body size 5 bytes.
#line 1 "ENTRY_10494c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10494c70(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 10494c80; body size 5 bytes.
#line 1 "ENTRY_10494c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10494c80(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 10494c90; body size 5 bytes.
#line 1 "ENTRY_10494c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10494c90(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 10494ca0; body size 5 bytes.
#line 1 "ENTRY_10494ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10494ca0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 10494cb0; body size 5 bytes.
#line 1 "ENTRY_10494cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10494cb0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 10495540; body size 20 bytes.
#line 1 "ENTRY_10495540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10495540(int param_1)

{
  if ((param_1 != 1) && (param_1 - 3U != 0)) {
    return (uint)(param_1 - 3U & 0xffffff00);
  }
  return (uint)(1);
}


// Reference entry 10495560; body size 7 bytes.
#line 1 "ENTRY_10495560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10495560(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104955b0; body size 6 bytes.
#line 1 "ENTRY_104955b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104955b0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 104955c0; body size 6 bytes.
#line 1 "ENTRY_104955c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104955c0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10496600; body size 3 bytes.
#line 1 "ENTRY_10496600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10496600(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10496610; body size 3 bytes.
#line 1 "ENTRY_10496610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10496610(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10496620; body size 3 bytes.
#line 1 "ENTRY_10496620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10496620(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10496630; body size 3 bytes.
#line 1 "ENTRY_10496630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10496630(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10496640; body size 3 bytes.
#line 1 "ENTRY_10496640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10496640(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10496650; body size 3 bytes.
#line 1 "ENTRY_10496650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10496650(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104966b0; body size 36 bytes.
#line 1 "ENTRY_104966b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104966b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_1047fdf0(puVar1,param_2);
  return;
}


// Reference entry 10496770; body size 28 bytes.
#line 1 "ENTRY_10496770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10496770(undefined4 *param_1)

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


// Reference entry 104967a0; body size 28 bytes.
#line 1 "ENTRY_104967a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104967a0(undefined4 *param_1)

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


// Reference entry 104967d0; body size 28 bytes.
#line 1 "ENTRY_104967d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104967d0(undefined4 *param_1)

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


// Reference entry 10496800; body size 28 bytes.
#line 1 "ENTRY_10496800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10496800(undefined4 *param_1)

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


// Reference entry 10496830; body size 28 bytes.
#line 1 "ENTRY_10496830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10496830(undefined4 *param_1)

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


// Reference entry 10496860; body size 28 bytes.
#line 1 "ENTRY_10496860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10496860(undefined4 *param_1)

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


// Reference entry 10496890; body size 20 bytes.
#line 1 "ENTRY_10496890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10496890(int *param_1)

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


// Reference entry 10496a00; body size 39 bytes.
#line 1 "ENTRY_10496a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10496a00(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x100));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10496a30; body size 39 bytes.
#line 1 "ENTRY_10496a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10496a30(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0xf4));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10496d70; body size 3 bytes.
#line 1 "ENTRY_10496d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10496d70(void)

{
  return (undefined1)(0);
}


// Reference entry 104975a0; body size 78 bytes.
#line 1 "ENTRY_104975a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104975a0(int *param_2)
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


// Reference entry 10497690; body size 9 bytes.
#line 1 "ENTRY_10497690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10497690(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConnectedPartnerDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 10498800; body size 7 bytes.
#line 1 "ENTRY_10498800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10498800(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1049b760; body size 9 bytes.
#line 1 "ENTRY_1049b760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1049b760(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1049d340; body size 26 bytes.
#line 1 "ENTRY_1049d340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1049d340(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 1049d590; body size 5 bytes.
#line 1 "ENTRY_1049d590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1049d590(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1049d740; body size 95 bytes.
#line 1 "ENTRY_1049d740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1049d740(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_10973080(), 0);
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0xc))(param_2,param_3,param_4), 0);
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  return (undefined4 *)(param_1);
}


// Reference entry 1049d800; body size 3 bytes.
#line 1 "ENTRY_1049d800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1049d800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1049d810; body size 10 bytes.
#line 1 "ENTRY_1049d810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1049d810(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 1049d8a0; body size 33 bytes.
#line 1 "ENTRY_1049d8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1049d8a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingBalanceValueFormatter);
  return (undefined4 *)(param_1);
}


// Reference entry 1049d8d0; body size 33 bytes.
#line 1 "ENTRY_1049d8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1049d8d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingFractionToPercentValueFormatter);
  return (undefined4 *)(param_1);
}


// Reference entry 1049d900; body size 33 bytes.
#line 1 "ENTRY_1049d900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1049d900(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingHzValueFormatter);
  return (undefined4 *)(param_1);
}


// Reference entry 1049d930; body size 33 bytes.
#line 1 "ENTRY_1049d930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1049d930(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingIntToPlusMinusValueFormatter);
  return (undefined4 *)(param_1);
}


// Reference entry 1049f170; body size 53 bytes.
#line 1 "ENTRY_1049f170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1049f170(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);


  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(param_1 + 0x14);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  thunk_FUN_1106b1c0(puVar1,uVar3);
  if ((int *)param_1[0x15] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[0x15] + 0x2c))(1);
  }
  ((_Tree<> *)(0))->m_op_dtor();
  piVar2 = (int *)((int *)param_1[0x33]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x32] = (undefined4)(0);
    param_1[0x33] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_105a52b0(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x1c);
  thunk_FUN_105a5110(param_1 + 0x2e,*(undefined4 *)(param_1[0x2e] + 4));
  thunk_FUN_1148a50e(param_1[0x2e],0x20);
  thunk_FUN_105a51f0(param_1 + 0x2a,*(undefined4 *)(param_1[0x2a] + 4));
  thunk_FUN_1148a50e(param_1[0x2a],0x38);
  FUN_100517a8();

  ((SCStr *)((SCStr *)(param_1 + 0x1b)))->int_release();
  param_1[0x1b] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x1a)))->int_release();
  param_1[0x1a] = (undefined4)(0);
  piVar2 = (int *)((int *)param_1[0x17]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x16] = (undefined4)(0);
    param_1[0x17] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  piVar2 = (int *)((int *)param_1[0x13]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x12] = (undefined4)(0);
    param_1[0x13] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  piVar2 = (int *)((int *)param_1[0x10]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0xf] = (undefined4)(0);
    param_1[0x10] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }

  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  thunk_FUN_105a05f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 1049f300; body size 19 bytes.
#line 1 "ENTRY_1049f300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1049f300(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1049f320; body size 19 bytes.
#line 1 "ENTRY_1049f320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1049f320(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1049f340; body size 19 bytes.
#line 1 "ENTRY_1049f340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1049f340(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1049f360; body size 19 bytes.
#line 1 "ENTRY_1049f360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1049f360(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1049fbe0; body size 3 bytes.
#line 1 "ENTRY_1049fbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1049fbe0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1049fbf0; body size 3 bytes.
#line 1 "ENTRY_1049fbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1049fbf0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1049fc00; body size 3 bytes.
#line 1 "ENTRY_1049fc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1049fc00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1049fc10; body size 25 bytes.
#line 1 "ENTRY_1049fc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1049fc10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{ int stack0x00000004;
 try {
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 104a0a10; body size 8 bytes.
#line 1 "ENTRY_104a0a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104a0a10(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 104a0a30; body size 4 bytes.
#line 1 "ENTRY_104a0a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104a0a30(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 104a0a40; body size 7 bytes.
#line 1 "ENTRY_104a0a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104a0a40(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 104a0a60; body size 26 bytes.
#line 1 "ENTRY_104a0a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104a0a60(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 104a0a80; body size 10 bytes.
#line 1 "ENTRY_104a0a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104a0a80(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 104a1c80; body size 5 bytes.
#line 1 "ENTRY_104a1c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104a1c80(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 104a1f10; body size 7 bytes.
#line 1 "ENTRY_104a1f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104a1f10(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104a7150; body size 3 bytes.
#line 1 "ENTRY_104a7150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104a7150(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104a74b0; body size 28 bytes.
#line 1 "ENTRY_104a74b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104a74b0(undefined4 *param_1)

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


// Reference entry 104a7f90; body size 91 bytes.
#line 1 "ENTRY_104a7f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104a7f90(int *param_2)
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


// Reference entry 104a8010; body size 26 bytes.
#line 1 "ENTRY_104a8010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104a8010(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 104a8180; body size 16 bytes.
#line 1 "ENTRY_104a8180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104a8180(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104a81a0; body size 40 bytes.
#line 1 "ENTRY_104a81a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104a81a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLineInNameStandaloneInput);
  return (undefined4 *)(param_1);
}


// Reference entry 104a8970; body size 3 bytes.
#line 1 "ENTRY_104a8970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104a8970(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104a8980; body size 3 bytes.
#line 1 "ENTRY_104a8980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104a8980(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104a8f90; body size 9 bytes.
#line 1 "ENTRY_104a8f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104a8f90(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 104a90a0; body size 7 bytes.
#line 1 "ENTRY_104a90a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104a90a0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104a90f0; body size 3 bytes.
#line 1 "ENTRY_104a90f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104a90f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104a9190; body size 28 bytes.
#line 1 "ENTRY_104a9190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104a9190(undefined4 *param_1)

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


// Reference entry 104aa120; body size 6 bytes.
#line 1 "ENTRY_104aa120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104aa120(void)

{
  return (undefined4)(4);
}


// Reference entry 104ab2b0; body size 26 bytes.
#line 1 "ENTRY_104ab2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104ab2b0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 104ab2d0; body size 106 bytes.
#line 1 "ENTRY_104ab2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104ab2d0(int *param_2)
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


// Reference entry 104ac030; body size 52 bytes.
#line 1 "ENTRY_104ac030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104ac030(int param_1,undefined4 *param_2,ushort *param_3)

{
  param_3 = (ushort *)((ushort *)(uint)*param_3);
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,&param_3);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 104ac230; body size 122 bytes.
#line 1 "ENTRY_104ac230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104ac230(int *param_2)
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


// Reference entry 104ac330; body size 12 bytes.
#line 1 "ENTRY_104ac330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_104ac330(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 104ac3a0; body size 5 bytes.
#line 1 "ENTRY_104ac3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ac3a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104ac3b0; body size 130 bytes.
#line 1 "ENTRY_104ac3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_104ac3b0(int *param_2,undefined4 param_3)
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


// Reference entry 104ac6a0; body size 5 bytes.
#line 1 "ENTRY_104ac6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ac6a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104ac710; body size 5 bytes.
#line 1 "ENTRY_104ac710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ac710(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104ac720; body size 5 bytes.
#line 1 "ENTRY_104ac720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ac720(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104ac730; body size 5 bytes.
#line 1 "ENTRY_104ac730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ac730(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104ac7a0; body size 5 bytes.
#line 1 "ENTRY_104ac7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ac7a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104ac7b0; body size 5 bytes.
#line 1 "ENTRY_104ac7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ac7b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104ac870; body size 52 bytes.
#line 1 "ENTRY_104ac870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104ac870(int param_1,undefined4 *param_2,ushort *param_3)

{
  param_3 = (ushort *)((ushort *)(uint)*param_3);
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,&param_3);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 104ac920; body size 5 bytes.
#line 1 "ENTRY_104ac920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ac920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104ac930; body size 5 bytes.
#line 1 "ENTRY_104ac930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ac930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104acb10; body size 95 bytes.
#line 1 "ENTRY_104acb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104acb10(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_10916c20(), 0);
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0xc))(param_2,param_3,param_4), 0);
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  return (undefined4 *)(param_1);
}


// Reference entry 104acb90; body size 70 bytes.
#line 1 "ENTRY_104acb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104acb90(undefined4 *param_1)

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


// Reference entry 104acc30; body size 3 bytes.
#line 1 "ENTRY_104acc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104acc30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104acc40; body size 3 bytes.
#line 1 "ENTRY_104acc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104acc40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104acc50; body size 3 bytes.
#line 1 "ENTRY_104acc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104acc50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104acc60; body size 10 bytes.
#line 1 "ENTRY_104acc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104acc60(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 104acc70; body size 10 bytes.
#line 1 "ENTRY_104acc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104acc70(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 104acc80; body size 10 bytes.
#line 1 "ENTRY_104acc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104acc80(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 104ace00; body size 12 bytes.
#line 1 "ENTRY_104ace00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104ace00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 104ad240; body size 53 bytes.
#line 1 "ENTRY_104ad240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104ad240(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);


  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(param_1 + 0x14);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  thunk_FUN_1106b1c0(puVar1,uVar3);
  if ((int *)param_1[0x15] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[0x15] + 0x2c))(1);
  }
  ((_Tree<> *)(0))->m_op_dtor();
  piVar2 = (int *)((int *)param_1[0x33]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x32] = (undefined4)(0);
    param_1[0x33] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_105a52b0(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x1c);
  thunk_FUN_105a5110(param_1 + 0x2e,*(undefined4 *)(param_1[0x2e] + 4));
  thunk_FUN_1148a50e(param_1[0x2e],0x20);
  thunk_FUN_105a51f0(param_1 + 0x2a,*(undefined4 *)(param_1[0x2a] + 4));
  thunk_FUN_1148a50e(param_1[0x2a],0x38);
  FUN_100517a8();

  ((SCStr *)((SCStr *)(param_1 + 0x1b)))->int_release();
  param_1[0x1b] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x1a)))->int_release();
  param_1[0x1a] = (undefined4)(0);
  piVar2 = (int *)((int *)param_1[0x17]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x16] = (undefined4)(0);
    param_1[0x17] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  piVar2 = (int *)((int *)param_1[0x13]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x12] = (undefined4)(0);
    param_1[0x13] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  piVar2 = (int *)((int *)param_1[0x10]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0xf] = (undefined4)(0);
    param_1[0x10] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }

  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  thunk_FUN_105a05f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 104ad480; body size 34 bytes.
#line 1 "ENTRY_104ad480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104ad480(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  }
  return;
}


// Reference entry 104ad650; body size 18 bytes.
#line 1 "ENTRY_104ad650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104ad650(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 104ad6a0; body size 3 bytes.
#line 1 "ENTRY_104ad6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104ad6a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104ad6b0; body size 8 bytes.
#line 1 "ENTRY_104ad6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104ad6b0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 104ad6c0; body size 8 bytes.
#line 1 "ENTRY_104ad6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104ad6c0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 104ad6d0; body size 3 bytes.
#line 1 "ENTRY_104ad6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104ad6d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104ad770; body size 30 bytes.
#line 1 "ENTRY_104ad770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104ad770(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{ int stack0x00000004; int stack0x00000008;
 try {
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004,&stack0x00000008);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 104ad7a0; body size 25 bytes.
#line 1 "ENTRY_104ad7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104ad7a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{ int stack0x00000004;
 try {
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 104adeb0; body size 8 bytes.
#line 1 "ENTRY_104adeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104adeb0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 104adec0; body size 8 bytes.
#line 1 "ENTRY_104adec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104adec0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 104aded0; body size 8 bytes.
#line 1 "ENTRY_104aded0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104aded0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 104adf50; body size 4 bytes.
#line 1 "ENTRY_104adf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104adf50(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 104adf60; body size 4 bytes.
#line 1 "ENTRY_104adf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104adf60(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 104adf70; body size 4 bytes.
#line 1 "ENTRY_104adf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104adf70(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 104adf80; body size 7 bytes.
#line 1 "ENTRY_104adf80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104adf80(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 104adf90; body size 7 bytes.
#line 1 "ENTRY_104adf90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104adf90(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 104adfa0; body size 7 bytes.
#line 1 "ENTRY_104adfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104adfa0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 104ae050; body size 26 bytes.
#line 1 "ENTRY_104ae050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104ae050(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 104ae070; body size 26 bytes.
#line 1 "ENTRY_104ae070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104ae070(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 104ae090; body size 26 bytes.
#line 1 "ENTRY_104ae090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104ae090(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 104ae0b0; body size 76 bytes.
#line 1 "ENTRY_104ae0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104ae0b0(int *param_2)
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


// Reference entry 104ae110; body size 76 bytes.
#line 1 "ENTRY_104ae110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104ae110(int *param_2)
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


// Reference entry 104ae170; body size 10 bytes.
#line 1 "ENTRY_104ae170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104ae170(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 104ae180; body size 10 bytes.
#line 1 "ENTRY_104ae180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104ae180(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 104ae190; body size 10 bytes.
#line 1 "ENTRY_104ae190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104ae190(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 104ae870; body size 4 bytes.
#line 1 "ENTRY_104ae870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104ae870(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 104ae890; body size 5 bytes.
#line 1 "ENTRY_104ae890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104ae890(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 104b01c0; body size 3 bytes.
#line 1 "ENTRY_104b01c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104b01c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104b0250; body size 28 bytes.
#line 1 "ENTRY_104b0250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104b0250(undefined4 *param_1)

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


// Reference entry 104b0840; body size 33 bytes.
#line 1 "ENTRY_104b0840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104b0840(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUnregisteredDeviceMessageDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 104b0990; body size 35 bytes.
#line 1 "ENTRY_104b0990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104b0990(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  param_1[0x24] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenu);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCSettingsMenu);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCSettingsMenu);
  piVar1 = (int *)((int *)param_1[0x20]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x1f] = (undefined4)(0);
    param_1[0x20] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 0x1c)))->int_release();
  param_1[0x1c] = (undefined4)(0);
  thunk_FUN_10120220();
  piVar1 = (int *)((int *)param_1[0x12]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x11] = (undefined4)(0);
    param_1[0x12] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101eb1b0();
  thunk_FUN_101eb1b0();
  thunk_FUN_103d60a0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 104b09c0; body size 19 bytes.
#line 1 "ENTRY_104b09c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104b09c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 104b3b40; body size 6 bytes.
#line 1 "ENTRY_104b3b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104b3b40(void)

{
  return (undefined4)(4);
}


// Reference entry 104b4d80; body size 26 bytes.
#line 1 "ENTRY_104b4d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104b4d80(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 104b4da0; body size 91 bytes.
#line 1 "ENTRY_104b4da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104b4da0(int *param_2)
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


// Reference entry 104b52b0; body size 5 bytes.
#line 1 "ENTRY_104b52b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104b52b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104b52c0; body size 5 bytes.
#line 1 "ENTRY_104b52c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104b52c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104b5700; body size 95 bytes.
#line 1 "ENTRY_104b5700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104b5700(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_10a4dc00(), 0);
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0xc))(param_2,param_3,param_4), 0);
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  return (undefined4 *)(param_1);
}


// Reference entry 104b57c0; body size 3 bytes.
#line 1 "ENTRY_104b57c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104b57c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104b57d0; body size 3 bytes.
#line 1 "ENTRY_104b57d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104b57d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104b57e0; body size 10 bytes.
#line 1 "ENTRY_104b57e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104b57e0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 104b57f0; body size 10 bytes.
#line 1 "ENTRY_104b57f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104b57f0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 104b5880; body size 33 bytes.
#line 1 "ENTRY_104b5880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104b5880(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNumPlayersUnavailableMessageDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 104b8500; body size 53 bytes.
#line 1 "ENTRY_104b8500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104b8500(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);


  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(param_1 + 0x14);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  thunk_FUN_1106b1c0(puVar1,uVar3);
  if ((int *)param_1[0x15] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[0x15] + 0x2c))(1);
  }
  ((_Tree<> *)(0))->m_op_dtor();
  piVar2 = (int *)((int *)param_1[0x33]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x32] = (undefined4)(0);
    param_1[0x33] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_105a52b0(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x1c);
  thunk_FUN_105a5110(param_1 + 0x2e,*(undefined4 *)(param_1[0x2e] + 4));
  thunk_FUN_1148a50e(param_1[0x2e],0x20);
  thunk_FUN_105a51f0(param_1 + 0x2a,*(undefined4 *)(param_1[0x2a] + 4));
  thunk_FUN_1148a50e(param_1[0x2a],0x38);
  FUN_100517a8();

  ((SCStr *)((SCStr *)(param_1 + 0x1b)))->int_release();
  param_1[0x1b] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x1a)))->int_release();
  param_1[0x1a] = (undefined4)(0);
  piVar2 = (int *)((int *)param_1[0x17]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x16] = (undefined4)(0);
    param_1[0x17] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  piVar2 = (int *)((int *)param_1[0x13]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x12] = (undefined4)(0);
    param_1[0x13] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  piVar2 = (int *)((int *)param_1[0x10]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0xf] = (undefined4)(0);
    param_1[0x10] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }

  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  thunk_FUN_105a05f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 104b86f0; body size 19 bytes.
#line 1 "ENTRY_104b86f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104b86f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 104b8890; body size 3 bytes.
#line 1 "ENTRY_104b8890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104b8890(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104b88a0; body size 7 bytes.
#line 1 "ENTRY_104b88a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104b88a0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104b88b0; body size 3 bytes.
#line 1 "ENTRY_104b88b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104b88b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104b89b0; body size 25 bytes.
#line 1 "ENTRY_104b89b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104b89b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{ int stack0x00000004;
 try {
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 104b90f0; body size 8 bytes.
#line 1 "ENTRY_104b90f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104b90f0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 104b9100; body size 8 bytes.
#line 1 "ENTRY_104b9100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104b9100(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 104b9170; body size 4 bytes.
#line 1 "ENTRY_104b9170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104b9170(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 104b9180; body size 4 bytes.
#line 1 "ENTRY_104b9180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104b9180(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 104b9190; body size 7 bytes.
#line 1 "ENTRY_104b9190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104b9190(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 104b91a0; body size 7 bytes.
#line 1 "ENTRY_104b91a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104b91a0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 104b9240; body size 26 bytes.
#line 1 "ENTRY_104b9240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104b9240(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 104b9260; body size 10 bytes.
#line 1 "ENTRY_104b9260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104b9260(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 104b9270; body size 10 bytes.
#line 1 "ENTRY_104b9270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104b9270(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 104b9e50; body size 5 bytes.
#line 1 "ENTRY_104b9e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104b9e50(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 104b9fd0; body size 7 bytes.
#line 1 "ENTRY_104b9fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104b9fd0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 104ba480; body size 3 bytes.
#line 1 "ENTRY_104ba480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104ba480(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104ba510; body size 28 bytes.
#line 1 "ENTRY_104ba510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104ba510(undefined4 *param_1)

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


// Reference entry 104c0e50; body size 50 bytes.
#line 1 "ENTRY_104c0e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_104c0e50(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x94));
  if (iVar1 != 1) {
    uVar2 = (uint)(0);
    if ((iVar1 != 2) && (uVar2 = (uint)(0), iVar1 != 3)) {
      uVar2 = (uint)(thunk_FUN_112af4e0("SCSettingsMenuVoiceService",1, "No account settings available mapping for SCIVoiceService %i", iVar1), 0);
    }
    return (uint)(uVar2 & 0xffffff00);
  }
  return (uint)(1);
}


// Reference entry 104c0e90; body size 50 bytes.
#line 1 "ENTRY_104c0e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_104c0e90(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x94));
  if ((iVar1 != 1) && (iVar1 != 2)) {
    uVar2 = (uint)(0);
    if (iVar1 != 3) {
      uVar2 = (uint)(thunk_FUN_112af4e0("SCSettingsMenuVoiceService",2, "No music services settings available for SCIVoiceService %i",iVar1
                                ), 0);
    }
    return (uint)(uVar2 & 0xffffff00);
  }
  return (uint)(1);
}


// Reference entry 104c0ed0; body size 50 bytes.
#line 1 "ENTRY_104c0ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_104c0ed0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x94));
  uVar2 = (uint)(0);
  if ((iVar1 != 1) && (uVar2 = (uint)(0), iVar1 != 2)) {
    if (iVar1 == 3) {
      return (uint)(1);
    }
    uVar2 = (uint)(thunk_FUN_112af4e0("SCSettingsMenuVoiceService",1, "No preferred settings available mapping for SCIVoiceService %i", iVar1), 0);
  }
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 104c0f10; body size 25 bytes.
#line 1 "ENTRY_104c0f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104c0f10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104c0f30; body size 25 bytes.
#line 1 "ENTRY_104c0f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104c0f30(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_4);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104c0f50; body size 11 bytes.
#line 1 "ENTRY_104c0f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104c0f50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104c0f60; body size 24 bytes.
#line 1 "ENTRY_104c0f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_104c0f60(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_2);
  return (SCStr *)(param_1);
}


// Reference entry 104c1010; body size 25 bytes.
#line 1 "ENTRY_104c1010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104c1010(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104c10c0; body size 11 bytes.
#line 1 "ENTRY_104c10c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104c10c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104c10d0; body size 24 bytes.
#line 1 "ENTRY_104c10d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_104c10d0(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_3);
  return (SCStr *)(param_1);
}


// Reference entry 104c10f0; body size 18 bytes.
#line 1 "ENTRY_104c10f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104c10f0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_4);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104c1190; body size 25 bytes.
#line 1 "ENTRY_104c1190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104c1190(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_5);
  param_1[1] = (undefined4)(param_4);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104c1240; body size 25 bytes.
#line 1 "ENTRY_104c1240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104c1240(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104c1260; body size 41 bytes.
#line 1 "ENTRY_104c1260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104c1260(SCStr *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)*param_1);
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104c12a0; body size 72 bytes.
#line 1 "ENTRY_104c12a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104c12a0(SCStr *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)((SCStr *)param_1[1]);
  if (param_2 + 4 != (SCStr *)(pSVar1)) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)(param_2 + 4)));
    ((SCStr *)(pSVar1))->int_addref();
  }
  pSVar1 = (SCStr *)((SCStr *)*param_1);
  if ((SCStr *)((param_2)) != (SCStr *)(pSVar1)) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(pSVar1))->int_addref();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104c1300; body size 101 bytes.
#line 1 "ENTRY_104c1300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104c1300(SCStr *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)((SCStr *)param_1[2]);
  if (param_2 + 8 != (SCStr *)(pSVar1)) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)(param_2 + 8)));
    ((SCStr *)(pSVar1))->int_addref();
  }
  pSVar1 = (SCStr *)((SCStr *)param_1[1]);
  if (param_2 + 4 != (SCStr *)(pSVar1)) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)(param_2 + 4)));
    ((SCStr *)(pSVar1))->int_addref();
  }
  pSVar1 = (SCStr *)((SCStr *)*param_1);
  if ((SCStr *)((param_2)) != (SCStr *)(pSVar1)) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(pSVar1))->int_addref();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104c1460; body size 33 bytes.
#line 1 "ENTRY_104c1460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104c1460(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    thunk_FUN_104c49a0();
  }
  return;
}


// Reference entry 104c19e0; body size 7 bytes.
#line 1 "ENTRY_104c19e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104c19e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104c19f0; body size 7 bytes.
#line 1 "ENTRY_104c19f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104c19f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104c1bd0; body size 24 bytes.
#line 1 "ENTRY_104c1bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104c1bd0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104c1d20(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 104c1d00; body size 5 bytes.
#line 1 "ENTRY_104c1d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104c1d00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c1d10; body size 5 bytes.
#line 1 "ENTRY_104c1d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104c1d10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c2320; body size 9 bytes.
#line 1 "ENTRY_104c2320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104c2320(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_2 != (int)((0))) {
    thunk_FUN_104c1380(*param_2,param_2[1],param_2);
    iVar1 = (int)(*param_2);
    uVar2 = (uint)(((param_2[2] - iVar1) / 0xc) * 0xc);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar2) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar2);
    *param_2 = (int)(0);
    param_2[1] = (int)(0);
    param_2[2] = (int)(0);
  }
  return;
}


// Reference entry 104c2330; body size 25 bytes.
#line 1 "ENTRY_104c2330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_104c2330(int param_1,int param_2)

{
  return (int)((param_2 - param_1) / 0xc);
}


// Reference entry 104c2420; body size 5 bytes.
#line 1 "ENTRY_104c2420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104c2420(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c2430; body size 5 bytes.
#line 1 "ENTRY_104c2430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104c2430(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c2440; body size 5 bytes.
#line 1 "ENTRY_104c2440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104c2440(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c2450; body size 5 bytes.
#line 1 "ENTRY_104c2450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104c2450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c2460; body size 5 bytes.
#line 1 "ENTRY_104c2460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104c2460(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c2470; body size 5 bytes.
#line 1 "ENTRY_104c2470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104c2470(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c2480; body size 25 bytes.
#line 1 "ENTRY_104c2480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104c2480(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = (undefined4)(param_4);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_2);
  return;
}


// Reference entry 104c24a0; body size 95 bytes.
#line 1 "ENTRY_104c24a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104c24a0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_109b6e80(), 0);
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0xc))(param_2,param_3,param_4), 0);
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  return (undefined4 *)(param_1);
}


// Reference entry 104c25a0; body size 24 bytes.
#line 1 "ENTRY_104c25a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_104c25a0(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_2);
  return (SCStr *)(param_1);
}


// Reference entry 104c25c0; body size 24 bytes.
#line 1 "ENTRY_104c25c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_104c25c0(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_2);
  return (SCStr *)(param_1);
}


// Reference entry 104c25e0; body size 21 bytes.
#line 1 "ENTRY_104c25e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104c25e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104c2600; body size 21 bytes.
#line 1 "ENTRY_104c2600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104c2600(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104c2620; body size 23 bytes.
#line 1 "ENTRY_104c2620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104c2620(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104c2640; body size 23 bytes.
#line 1 "ENTRY_104c2640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104c2640(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104c2660; body size 3 bytes.
#line 1 "ENTRY_104c2660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104c2660(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c2670; body size 3 bytes.
#line 1 "ENTRY_104c2670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104c2670(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c2680; body size 18 bytes.
#line 1 "ENTRY_104c2680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104c2680(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104c26a0; body size 24 bytes.
#line 1 "ENTRY_104c26a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_104c26a0(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_2);
  return (SCStr *)(param_1);
}


// Reference entry 104c26c0; body size 24 bytes.
#line 1 "ENTRY_104c26c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_104c26c0(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_2);
  return (SCStr *)(param_1);
}


// Reference entry 104c29f0; body size 23 bytes.
#line 1 "ENTRY_104c29f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104c29f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104c2a10; body size 46 bytes.
#line 1 "ENTRY_104c2a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104c2a10(undefined4 param_2,undefined4 param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  thunk_FUN_104c1a00(param_2,param_3,param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104c2b00; body size 9 bytes.
#line 1 "ENTRY_104c2b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104c2b00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDeleteVoiceAccountDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 104c35b0; body size 33 bytes.
#line 1 "ENTRY_104c35b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_104c35b0(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (SCStr *)(param_1);
}


// Reference entry 104c35e0; body size 33 bytes.
#line 1 "ENTRY_104c35e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_104c35e0(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (SCStr *)(param_1);
}


// Reference entry 104c37e0; body size 53 bytes.
#line 1 "ENTRY_104c37e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104c37e0(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);


  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(param_1 + 0x14);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  thunk_FUN_1106b1c0(puVar1,uVar3);
  if ((int *)param_1[0x15] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[0x15] + 0x2c))(1);
  }
  ((_Tree<> *)(0))->m_op_dtor();
  piVar2 = (int *)((int *)param_1[0x33]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x32] = (undefined4)(0);
    param_1[0x33] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_105a52b0(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x1c);
  thunk_FUN_105a5110(param_1 + 0x2e,*(undefined4 *)(param_1[0x2e] + 4));
  thunk_FUN_1148a50e(param_1[0x2e],0x20);
  thunk_FUN_105a51f0(param_1 + 0x2a,*(undefined4 *)(param_1[0x2a] + 4));
  thunk_FUN_1148a50e(param_1[0x2a],0x38);
  FUN_100517a8();

  ((SCStr *)((SCStr *)(param_1 + 0x1b)))->int_release();
  param_1[0x1b] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x1a)))->int_release();
  param_1[0x1a] = (undefined4)(0);
  piVar2 = (int *)((int *)param_1[0x17]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x16] = (undefined4)(0);
    param_1[0x17] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  piVar2 = (int *)((int *)param_1[0x13]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x12] = (undefined4)(0);
    param_1[0x13] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  piVar2 = (int *)((int *)param_1[0x10]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0xf] = (undefined4)(0);
    param_1[0x10] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }

  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  thunk_FUN_105a05f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 104c3b60; body size 5 bytes.
#line 1 "ENTRY_104c3b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104c3b60(void)

{
  thunk_FUN_104c49a0();
  return;
}


// Reference entry 104c3f60; body size 15 bytes.
#line 1 "ENTRY_104c3f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_104c3f60(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0xc);
}


// Reference entry 104c3f80; body size 3 bytes.
#line 1 "ENTRY_104c3f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104c3f80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104c3f90; body size 3 bytes.
#line 1 "ENTRY_104c3f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104c3f90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104c45b0; body size 136 bytes.
#line 1 "ENTRY_104c45b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104c45b0(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  
  if (param_2 < 0x15555556) {
    param_2 = (uint)(param_2 * 0xc);
    if (param_2 < 0x1000) {
      if (param_2 != 0) {
        pvVar1 = (void *)(operator_new(param_2), 0);
        *param_1 = (uint)((uint)pvVar1);
        param_1[1] = (uint)((uint)pvVar1);
        param_1[2] = (uint)((uint)((int)pvVar1 + param_2));
        return;
      }
      *param_1 = (uint)(0);
      param_1[1] = (uint)(0);
      param_1[2] = (uint)(0);
      return;
    }
    if (param_2 < param_2 + 0x23) {
      pvVar1 = (char *)(operator_new(param_2 + 0x23), 0);
      if ((void *)(pvVar1) != (void *)(0x0)) {
        uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
        *(void**)(uVar2 - 4) = (void *)(pvVar1);
        *param_1 = (uint)(uVar2);
        param_1[1] = (uint)(uVar2);
        param_1[2] = (uint)(uVar2 + param_2);
        return;
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else {
    thunk_FUN_104c4c30();
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 104c4660; body size 33 bytes.
#line 1 "ENTRY_104c4660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104c4660(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_104c4c80(param_2), 0);
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 0xc);
  return;
}


// Reference entry 104c4690; body size 131 bytes.
#line 1 "ENTRY_104c4690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104c4690(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  
  if (param_2 < 0x15555556) {
    param_2 = (uint)(param_2 * 0xc);
    if (param_2 < 0x1000) {
      if (param_2 != 0) {
        pvVar1 = (void *)(operator_new(param_2), 0);
        *param_1 = (uint)((uint)pvVar1);
        param_1[1] = (uint)((uint)pvVar1);
        param_1[2] = (uint)((uint)((int)pvVar1 + param_2));
        return;
      }
      *param_1 = (uint)(0);
      param_1[1] = (uint)(0);
      param_1[2] = (uint)(0);
      return;
    }
    if (param_2 < param_2 + 0x23) {
      pvVar1 = (char *)(operator_new(param_2 + 0x23), 0);
      if ((void *)(pvVar1) != (void *)(0x0)) {
        uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
        *(void**)(uVar2 - 4) = (void *)(pvVar1);
        *param_1 = (uint)(uVar2);
        param_1[1] = (uint)(uVar2);
        param_1[2] = (uint)(uVar2 + param_2);
        return;
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 104c4740; body size 62 bytes.
#line 1 "ENTRY_104c4740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_104c4740(uint param_2)
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


// Reference entry 104c4860; body size 35 bytes.
#line 1 "ENTRY_104c4860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104c4860(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    thunk_FUN_104c49a0();
  }
  return;
}


// Reference entry 104c4890; body size 3 bytes.
#line 1 "ENTRY_104c4890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104c4890(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c48a0; body size 3 bytes.
#line 1 "ENTRY_104c48a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104c48a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c48b0; body size 3 bytes.
#line 1 "ENTRY_104c48b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104c48b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c48c0; body size 3 bytes.
#line 1 "ENTRY_104c48c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104c48c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c48d0; body size 3 bytes.
#line 1 "ENTRY_104c48d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104c48d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c48e0; body size 3 bytes.
#line 1 "ENTRY_104c48e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104c48e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c48f0; body size 3 bytes.
#line 1 "ENTRY_104c48f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104c48f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c4900; body size 3 bytes.
#line 1 "ENTRY_104c4900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104c4900(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c4910; body size 3 bytes.
#line 1 "ENTRY_104c4910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104c4910(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c4920; body size 3 bytes.
#line 1 "ENTRY_104c4920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104c4920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c4930; body size 3 bytes.
#line 1 "ENTRY_104c4930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104c4930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c4940; body size 3 bytes.
#line 1 "ENTRY_104c4940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104c4940(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c4950; body size 3 bytes.
#line 1 "ENTRY_104c4950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104c4950(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c4960; body size 3 bytes.
#line 1 "ENTRY_104c4960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104c4960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c4970; body size 3 bytes.
#line 1 "ENTRY_104c4970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104c4970(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 104c4980; body size 6 bytes.
#line 1 "ENTRY_104c4980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104c4980(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 104c4990; body size 6 bytes.
#line 1 "ENTRY_104c4990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104c4990(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 104c4bc0; body size 24 bytes.
#line 1 "ENTRY_104c4bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104c4bc0(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104c1d20(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 104c4be0; body size 24 bytes.
#line 1 "ENTRY_104c4be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104c4be0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104c1d20(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 104c4c00; body size 3 bytes.
#line 1 "ENTRY_104c4c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104c4c00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104c4c10; body size 4 bytes.
#line 1 "ENTRY_104c4c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104c4c10(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 104c4d00; body size 90 bytes.
#line 1 "ENTRY_104c4d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104c4d00(uint param_1)

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


// Reference entry 104c4d80; body size 3 bytes.
#line 1 "ENTRY_104c4d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104c4d80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104c4d90; body size 22 bytes.
#line 1 "ENTRY_104c4d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104c4d90(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0xc);
}


// Reference entry 104c6150; body size 60 bytes.
#line 1 "ENTRY_104c6150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104c6150(int param_1,int param_2)

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


// Reference entry 104c67d0; body size 4 bytes.
#line 1 "ENTRY_104c67d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104c67d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 104c7370; body size 5 bytes.
#line 1 "ENTRY_104c7370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104c7370(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 104c7480; body size 7 bytes.
#line 1 "ENTRY_104c7480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104c7480(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 104c7490; body size 6 bytes.
#line 1 "ENTRY_104c7490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104c7490(void)

{
  return (undefined4)(0x15555555);
}


// Reference entry 104c74a0; body size 6 bytes.
#line 1 "ENTRY_104c74a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104c74a0(void)

{
  return (undefined4)(0x15555555);
}


// Reference entry 104c74b0; body size 6 bytes.
#line 1 "ENTRY_104c74b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104c74b0(void)

{
  return (undefined4)(0x15555555);
}


// Reference entry 104c74c0; body size 6 bytes.
#line 1 "ENTRY_104c74c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104c74c0(void)

{
  return (undefined4)(0x15555555);
}


// Reference entry 104c8b60; body size 3 bytes.
#line 1 "ENTRY_104c8b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104c8b60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104c8c90; body size 28 bytes.
#line 1 "ENTRY_104c8c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104c8c90(undefined4 *param_1)

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


// Reference entry 104c8cc0; body size 28 bytes.
#line 1 "ENTRY_104c8cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104c8cc0(undefined4 *param_1)

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


// Reference entry 104c8e50; body size 5 bytes.
#line 1 "ENTRY_104c8e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104c8e50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104c8e60; body size 39 bytes.
#line 1 "ENTRY_104c8e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104c8e60(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x100));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 104c9640; body size 50 bytes.
#line 1 "ENTRY_104c9640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_104c9640(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x98));
  uVar2 = (uint)(0);
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      return (uint)(1);
    }
    uVar2 = (uint)(0);
    if (iVar1 != 3) {
      uVar2 = (uint)(thunk_FUN_112af4e0("SCSettingsMenuVoiceServiceSettings",1, "No account settings mapping for SCIVoiceService %i",iVar1), 0);
    }
  }
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 104c9680; body size 54 bytes.
#line 1 "ENTRY_104c9680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_104c9680(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x98));
  if (iVar1 == 0) {
    thunk_FUN_112af4e0("SCSettingsMenuVoiceServiceSettings",1, "No wake word chime mapping for SCIVoiceService %i",0);
  }
  else if ((iVar1 == 1) || (iVar1 == 2)) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 104c96d0; body size 22 bytes.
#line 1 "ENTRY_104c96d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104c96d0(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0xc);
}


// Reference entry 104cb2e0; body size 25 bytes.
#line 1 "ENTRY_104cb2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104cb2e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104cb300; body size 91 bytes.
#line 1 "ENTRY_104cb300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104cb300(int *param_2)
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


// Reference entry 104cb380; body size 26 bytes.
#line 1 "ENTRY_104cb380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104cb380(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 104cb3a0; body size 91 bytes.
#line 1 "ENTRY_104cb3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104cb3a0(int *param_2)
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


// Reference entry 104cb500; body size 78 bytes.
#line 1 "ENTRY_104cb500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104cb500(int *param_2)
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


// Reference entry 104cb770; body size 5 bytes.
#line 1 "ENTRY_104cb770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104cb770(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104cb7b0; body size 40 bytes.
#line 1 "ENTRY_104cb7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104cb7b0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 104cb870; body size 6 bytes.
#line 1 "ENTRY_104cb870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_104cb870(void)

{
  return (char *)("SCIBooleanSettingsProperty");
}


// Reference entry 104cb880; body size 54 bytes.
#line 1 "ENTRY_104cb880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104cb880(undefined4 *param_1)

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


// Reference entry 104cb8d0; body size 16 bytes.
#line 1 "ENTRY_104cb8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104cb8d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104cb8f0; body size 16 bytes.
#line 1 "ENTRY_104cb8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104cb8f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104cb910; body size 32 bytes.
#line 1 "ENTRY_104cb910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104cb910(undefined4 *param_2)
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


// Reference entry 104cb940; body size 16 bytes.
#line 1 "ENTRY_104cb940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104cb940(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104cb960; body size 16 bytes.
#line 1 "ENTRY_104cb960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104cb960(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104cb980; body size 25 bytes.
#line 1 "ENTRY_104cb980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104cb980(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 104cb9c0; body size 23 bytes.
#line 1 "ENTRY_104cb9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104cb9c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104cb9e0; body size 3 bytes.
#line 1 "ENTRY_104cb9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104cb9e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104cb9f0; body size 23 bytes.
#line 1 "ENTRY_104cb9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104cb9f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104cc170; body size 70 bytes.
#line 1 "ENTRY_104cc170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104cc170(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[8] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUpdatePopoverActionFactory);
  param_1[4] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104cce90; body size 65 bytes.
#line 1 "ENTRY_104cce90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104cce90(int *param_2)
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


// Reference entry 104ccef0; body size 15 bytes.
#line 1 "ENTRY_104ccef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_104ccef0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0x14);
}


// Reference entry 104ccf10; body size 3 bytes.
#line 1 "ENTRY_104ccf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104ccf10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104ccf20; body size 7 bytes.
#line 1 "ENTRY_104ccf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104ccf20(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104ccf30; body size 3 bytes.
#line 1 "ENTRY_104ccf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104ccf30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104ccf40; body size 7 bytes.
#line 1 "ENTRY_104ccf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104ccf40(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104ccf50; body size 7 bytes.
#line 1 "ENTRY_104ccf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104ccf50(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104ccf60; body size 3 bytes.
#line 1 "ENTRY_104ccf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104ccf60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104ccf70; body size 3 bytes.
#line 1 "ENTRY_104ccf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104ccf70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104ccf80; body size 3 bytes.
#line 1 "ENTRY_104ccf80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104ccf80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104ccf90; body size 3 bytes.
#line 1 "ENTRY_104ccf90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104ccf90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104ccfa0; body size 3 bytes.
#line 1 "ENTRY_104ccfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104ccfa0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104ccfb0; body size 3 bytes.
#line 1 "ENTRY_104ccfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104ccfb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104cd7f0; body size 3 bytes.
#line 1 "ENTRY_104cd7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104cd7f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104cd800; body size 3 bytes.
#line 1 "ENTRY_104cd800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104cd800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104d13f0; body size 16 bytes.
#line 1 "ENTRY_104d13f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104d13f0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 104d1410; body size 9 bytes.
#line 1 "ENTRY_104d1410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104d1410(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 104d1420; body size 9 bytes.
#line 1 "ENTRY_104d1420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104d1420(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 104d2fb0; body size 16 bytes.
#line 1 "ENTRY_104d2fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_104d2fb0(int param_2)
{
  int param_1 = (int )this;
  return (int)(*(int *)(param_1 + 8) + param_2 * 0x14);
}


// Reference entry 104d30f0; body size 25 bytes.
#line 1 "ENTRY_104d30f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104d30f0(int *param_2)
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


// Reference entry 104d3360; body size 35 bytes.
#line 1 "ENTRY_104d3360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __stdcall FUN_104d3360(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2489,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 104d4030; body size 6 bytes.
#line 1 "ENTRY_104d4030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_104d4030(void)

{
  return (char *)("SCIBooleanSettingsProperty");
}


// Reference entry 104d4040; body size 7 bytes.
#line 1 "ENTRY_104d4040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104d4040(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 104d4050; body size 7 bytes.
#line 1 "ENTRY_104d4050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104d4050(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104d4420; body size 3 bytes.
#line 1 "ENTRY_104d4420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104d4420(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104d4430; body size 3 bytes.
#line 1 "ENTRY_104d4430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104d4430(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104d4440; body size 3 bytes.
#line 1 "ENTRY_104d4440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104d4440(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104d4450; body size 3 bytes.
#line 1 "ENTRY_104d4450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104d4450(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104d4460; body size 3 bytes.
#line 1 "ENTRY_104d4460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104d4460(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104d45f0; body size 28 bytes.
#line 1 "ENTRY_104d45f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104d45f0(undefined4 *param_1)

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


// Reference entry 104d4620; body size 28 bytes.
#line 1 "ENTRY_104d4620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104d4620(undefined4 *param_1)

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


// Reference entry 104d4650; body size 28 bytes.
#line 1 "ENTRY_104d4650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104d4650(undefined4 *param_1)

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


// Reference entry 104d4680; body size 28 bytes.
#line 1 "ENTRY_104d4680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104d4680(undefined4 *param_1)

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


// Reference entry 104d46b0; body size 28 bytes.
#line 1 "ENTRY_104d46b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104d46b0(undefined4 *param_1)

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


// Reference entry 104d46e0; body size 20 bytes.
#line 1 "ENTRY_104d46e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104d46e0(int *param_1)

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


// Reference entry 104d4700; body size 24 bytes.
#line 1 "ENTRY_104d4700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104d4700(int param_1)

{
  return (int)((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x14);
}


// Reference entry 104d4720; body size 23 bytes.
#line 1 "ENTRY_104d4720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104d4720(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0x14);
}


// Reference entry 104d47b0; body size 25 bytes.
#line 1 "ENTRY_104d47b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104d47b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104d47d0; body size 33 bytes.
#line 1 "ENTRY_104d47d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104d47d0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x28) {
    thunk_FUN_104d53b0();
  }
  return;
}


// Reference entry 104d4800; body size 23 bytes.
#line 1 "ENTRY_104d4800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104d4800(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_104d5150(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x28);
  return;
}


// Reference entry 104d4910; body size 23 bytes.
#line 1 "ENTRY_104d4910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104d4910(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_104d5150(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x28);
  return;
}


// Reference entry 104d4c40; body size 7 bytes.
#line 1 "ENTRY_104d4c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104d4c40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104d4c50; body size 5 bytes.
#line 1 "ENTRY_104d4c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104d4c50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104d4e20; body size 14 bytes.
#line 1 "ENTRY_104d4e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104d4e20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_104d5150(param_3);
  return;
}


// Reference entry 104d4e40; body size 14 bytes.
#line 1 "ENTRY_104d4e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104d4e40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_104d5150(param_3);
  return;
}


// Reference entry 104d4f40; body size 9 bytes.
#line 1 "ENTRY_104d4f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104d4f40(undefined4 param_1,SCStr *param_2)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  ((SCStr *)(param_2 + 0x24))->int_release();
  *(undefined4*)(param_2 + 0x24) = (undefined4)(0);

  ((SCStr *)(param_2 + 0x18))->int_release();
  *(undefined4*)(param_2 + 0x18) = (undefined4)(0);

  ((SCStr *)(param_2 + 0x14))->int_release();
  *(undefined4*)(param_2 + 0x14) = (undefined4)(0);

  ((SCStr *)(param_2 + 4))->int_release();
  *(undefined4*)(param_2 + 4) = (undefined4)(0);

  ((SCStr *)(param_2))->int_release();
  *(undefined4*)param_2 = (undefined4)((SCStr *)(0));

  return;

 } catch (...) { }
}


// Reference entry 104d4f50; body size 40 bytes.
#line 1 "ENTRY_104d4f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104d4f50(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_104d5150(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x28);
    return;
  }
  thunk_FUN_104d4930(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 104d4f90; body size 5 bytes.
#line 1 "ENTRY_104d4f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104d4f90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104d4fa0; body size 5 bytes.
#line 1 "ENTRY_104d4fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104d4fa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104d4fb0; body size 5 bytes.
#line 1 "ENTRY_104d4fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104d4fb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104d4fc0; body size 5 bytes.
#line 1 "ENTRY_104d4fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104d4fc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104d4fd0; body size 27 bytes.
#line 1 "ENTRY_104d4fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104d4fd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 104d5000; body size 21 bytes.
#line 1 "ENTRY_104d5000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104d5000(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104d5020; body size 23 bytes.
#line 1 "ENTRY_104d5020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104d5020(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104d5040; body size 3 bytes.
#line 1 "ENTRY_104d5040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104d5040(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104d5050; body size 23 bytes.
#line 1 "ENTRY_104d5050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104d5050(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104d5230; body size 42 bytes.
#line 1 "ENTRY_104d5230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104d5230(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104d52c0; body size 19 bytes.
#line 1 "ENTRY_104d52c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104d52c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 104d54c0; body size 15 bytes.
#line 1 "ENTRY_104d54c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_104d54c0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0x28);
}


// Reference entry 104d55a0; body size 63 bytes.
#line 1 "ENTRY_104d55a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_104d55a0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0x28);
  if (0x6666666 - (uVar1 >> 1) < uVar1) {
    return (uint)(0x6666666);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 104d56e0; body size 3 bytes.
#line 1 "ENTRY_104d56e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104d56e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104d56f0; body size 3 bytes.
#line 1 "ENTRY_104d56f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104d56f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104d5700; body size 3 bytes.
#line 1 "ENTRY_104d5700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104d5700(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104d5710; body size 3 bytes.
#line 1 "ENTRY_104d5710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104d5710(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104d5720; body size 3 bytes.
#line 1 "ENTRY_104d5720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104d5720(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 104d5730; body size 6 bytes.
#line 1 "ENTRY_104d5730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104d5730(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 104d5c00; body size 90 bytes.
#line 1 "ENTRY_104d5c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104d5c00(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x6666667) {
    param_1 = (uint)(param_1 * 0x28);
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


// Reference entry 104d5c80; body size 23 bytes.
#line 1 "ENTRY_104d5c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104d5c80(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0x28);
}


// Reference entry 104d5d70; body size 9 bytes.
#line 1 "ENTRY_104d5d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104d5d70(int *param_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*param_1 == (int)((param_1))[1])));
}


// Reference entry 104d6350; body size 10 bytes.
#line 1 "ENTRY_104d6350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104d6350(int param_1)

{
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 8) >> 8)) << 8 | (uint)(*(int *)((param_1 + 8)) == *(int *)((param_1 + 0xc)))));
}


// Reference entry 104d6360; body size 100 bytes.
#line 1 "ENTRY_104d6360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_104d6360(uint param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = (int)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8));
  iVar1 = (int)(iVar3 >> 0x1f);
  iVar5 = (int)(iVar3 / 0x28 + iVar1);
  if (iVar5 == iVar1) {
    return (uint)(((uint)((int3)((ulonglong)((longlong)iVar3 * 0x66666667) >> 8)) << 8 | (uint)(param_2 == iVar5 - iVar1)));
  }
  uVar2 = (uint)(0);
  uVar6 = (uint)(0);
  if (iVar5 != iVar1) {
    puVar4 = (uint *)((uint *)(*(int *)(param_1 + 8) + 0x20));
    do {
      if (((uVar2 != 0) && (*puVar4 < (uint)((uVar2)))) ||
         ((uVar2 = (uint)(*puVar4), param_2 <= uVar2 && ((uVar2 != 0 || (param_2 != 0)))))) {
        return (uint)(uVar2 & 0xffffff00);
      }
      uVar6 = (uint)(uVar6 + 1);
      puVar4 = (uint *)(puVar4 + 10);
    } while (uVar6 < (uint)(iVar5 - iVar1));
  }
  return (uint)(((uint)((int3)(uVar2 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 104d63e0; body size 6 bytes.
#line 1 "ENTRY_104d63e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104d63e0(void)

{
  return (undefined4)(0x6666666);
}


// Reference entry 104d63f0; body size 6 bytes.
#line 1 "ENTRY_104d63f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104d63f0(void)

{
  return (undefined4)(0x6666666);
}


// Reference entry 104d6400; body size 40 bytes.
#line 1 "ENTRY_104d6400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104d6400(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_104d5150(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x28);
    return;
  }
  thunk_FUN_104d4930(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 104d6640; body size 23 bytes.
#line 1 "ENTRY_104d6640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104d6640(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0x28);
}


// Reference entry 104d6660; body size 25 bytes.
#line 1 "ENTRY_104d6660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104d6660(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104d6820; body size 39 bytes.
#line 1 "ENTRY_104d6820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104d6820(undefined4 *param_2)
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


// Reference entry 104d6850; body size 39 bytes.
#line 1 "ENTRY_104d6850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104d6850(undefined4 *param_2)
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


// Reference entry 104d6880; body size 39 bytes.
#line 1 "ENTRY_104d6880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104d6880(undefined4 *param_2)
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


// Reference entry 104d6b70; body size 7 bytes.
#line 1 "ENTRY_104d6b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104d6b70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104d6bb0; body size 5 bytes.
#line 1 "ENTRY_104d6bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104d6bb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104d6d10; body size 5 bytes.
#line 1 "ENTRY_104d6d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104d6d10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104d6d20; body size 28 bytes.
#line 1 "ENTRY_104d6d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104d6d20(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 104d6d50; body size 28 bytes.
#line 1 "ENTRY_104d6d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104d6d50(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 104d6d80; body size 28 bytes.
#line 1 "ENTRY_104d6d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104d6d80(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 104d6e70; body size 5 bytes.
#line 1 "ENTRY_104d6e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104d6e70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104d6e90; body size 5 bytes.
#line 1 "ENTRY_104d6e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104d6e90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104d6eb0; body size 5 bytes.
#line 1 "ENTRY_104d6eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104d6eb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104d6ef0; body size 5 bytes.
#line 1 "ENTRY_104d6ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104d6ef0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104d6f10; body size 27 bytes.
#line 1 "ENTRY_104d6f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104d6f10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 104d6f60; body size 21 bytes.
#line 1 "ENTRY_104d6f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104d6f60(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104d6f80; body size 11 bytes.
#line 1 "ENTRY_104d6f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104d6f80(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104d6f90; body size 11 bytes.
#line 1 "ENTRY_104d6f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104d6f90(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104d6fa0; body size 23 bytes.
#line 1 "ENTRY_104d6fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104d6fa0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104d6fc0; body size 3 bytes.
#line 1 "ENTRY_104d6fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104d6fc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104d6fd0; body size 23 bytes.
#line 1 "ENTRY_104d6fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104d6fd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104d7500; body size 42 bytes.
#line 1 "ENTRY_104d7500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104d7500(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseDataSourceSettingsSink);
  return (undefined4 *)(param_1);
}


// Reference entry 104d7610; body size 9 bytes.
#line 1 "ENTRY_104d7610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104d7610(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIBrowseDataSource);
  return (undefined4 *)(param_1);
}


// Reference entry 104d79e0; body size 19 bytes.
#line 1 "ENTRY_104d79e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104d79e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 104d7a10; body size 7 bytes.
#line 1 "ENTRY_104d7a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104d7a10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 104d7a20; body size 3 bytes.
#line 1 "ENTRY_104d7a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104d7a20(void)

{
  return;
}


// Reference entry 104d7aa0; body size 65 bytes.
#line 1 "ENTRY_104d7aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104d7aa0(int *param_2)
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


// Reference entry 104d7b00; body size 14 bytes.
#line 1 "ENTRY_104d7b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_104d7b00(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 104d7b20; body size 14 bytes.
#line 1 "ENTRY_104d7b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_104d7b20(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 104d7b40; body size 3 bytes.
#line 1 "ENTRY_104d7b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104d7b40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104d7b50; body size 3 bytes.
#line 1 "ENTRY_104d7b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104d7b50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104d7b60; body size 6 bytes.
#line 1 "ENTRY_104d7b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_104d7b60(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 104d7b70; body size 6 bytes.
#line 1 "ENTRY_104d7b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_104d7b70(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 104d7d20; body size 49 bytes.
#line 1 "ENTRY_104d7d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_104d7d20(uint param_2)
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


// Reference entry 104d7df0; body size 3 bytes.
#line 1 "ENTRY_104d7df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104d7df0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 104d7e90; body size 3 bytes.
#line 1 "ENTRY_104d7e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104d7e90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104d7ea0; body size 3 bytes.
#line 1 "ENTRY_104d7ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104d7ea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104d7eb0; body size 3 bytes.
#line 1 "ENTRY_104d7eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104d7eb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104d7ec0; body size 3 bytes.
#line 1 "ENTRY_104d7ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104d7ec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104d7ef0; body size 3 bytes.
#line 1 "ENTRY_104d7ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104d7ef0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 104d7f00; body size 6 bytes.
#line 1 "ENTRY_104d7f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104d7f00(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 104d81e0; body size 87 bytes.
#line 1 "ENTRY_104d81e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104d81e0(uint param_1)

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


// Reference entry 104d8250; body size 11 bytes.
#line 1 "ENTRY_104d8250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104d8250(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 104d8260; body size 9 bytes.
#line 1 "ENTRY_104d8260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104d8260(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 104d8320; body size 12 bytes.
#line 1 "ENTRY_104d8320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104d8320(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104d9860; body size 6 bytes.
#line 1 "ENTRY_104d9860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104d9860(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 104d9870; body size 6 bytes.
#line 1 "ENTRY_104d9870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104d9870(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 104da330; body size 26 bytes.
#line 1 "ENTRY_104da330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104da330(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 104da350; body size 91 bytes.
#line 1 "ENTRY_104da350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104da350(int *param_2)
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


// Reference entry 104da3d0; body size 26 bytes.
#line 1 "ENTRY_104da3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104da3d0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 104da3f0; body size 40 bytes.
#line 1 "ENTRY_104da3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104da3f0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 104da430; body size 40 bytes.
#line 1 "ENTRY_104da430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104da430(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 104da470; body size 27 bytes.
#line 1 "ENTRY_104da470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104da470(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 104da7f0; body size 65 bytes.
#line 1 "ENTRY_104da7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104da7f0(int *param_2)
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


// Reference entry 104da850; body size 3 bytes.
#line 1 "ENTRY_104da850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104da850(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104da950; body size 16 bytes.
#line 1 "ENTRY_104da950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104da950(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 104da970; body size 16 bytes.
#line 1 "ENTRY_104da970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104da970(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 104db430; body size 3 bytes.
#line 1 "ENTRY_104db430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104db430(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104db440; body size 28 bytes.
#line 1 "ENTRY_104db440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104db440(undefined4 *param_1)

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


// Reference entry 104db470; body size 28 bytes.
#line 1 "ENTRY_104db470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104db470(undefined4 *param_1)

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


// Reference entry 104db4a0; body size 28 bytes.
#line 1 "ENTRY_104db4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104db4a0(undefined4 *param_1)

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


// Reference entry 104db620; body size 25 bytes.
#line 1 "ENTRY_104db620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104db620(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104db640; body size 26 bytes.
#line 1 "ENTRY_104db640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104db640(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(*param_3);
  param_1[2] = (undefined4)(param_3[1]);
  return (undefined4 *)(param_1);
}


// Reference entry 104db660; body size 26 bytes.
#line 1 "ENTRY_104db660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104db660(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 104db680; body size 3 bytes.
#line 1 "ENTRY_104db680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104db680(void)

{
  return;
}


// Reference entry 104db690; body size 26 bytes.
#line 1 "ENTRY_104db690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104db690(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  puVar1[1] = (undefined4)(param_2[1]);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 104db6b0; body size 26 bytes.
#line 1 "ENTRY_104db6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104db6b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  puVar1[1] = (undefined4)(param_2[1]);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 104db6d0; body size 26 bytes.
#line 1 "ENTRY_104db6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104db6d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  puVar1[1] = (undefined4)(param_2[1]);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 104db8f0; body size 7 bytes.
#line 1 "ENTRY_104db8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104db8f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104db900; body size 50 bytes.
#line 1 "ENTRY_104db900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCIndexRange * FUN_104db900(SCIndexRange *param_1,SCIndexRange *param_2,SCIndexRange *param_3)

{
  if ((SCIndexRange *)((param_2)) == (SCIndexRange *)(param_1)) {
    return (SCIndexRange *)(param_3);
  }
  do {
    param_2 = (SCIndexRange *)(param_2 + -8);
    param_3 = (SCIndexRange *)(param_3 + -8);
    ((SCIndexRange *)(param_3))->op_assign(param_2);
  } while ((SCIndexRange *)((param_2)) != (SCIndexRange *)(param_1));
  return (SCIndexRange *)(param_3);
}


// Reference entry 104db940; body size 50 bytes.
#line 1 "ENTRY_104db940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCIndexRange * FUN_104db940(SCIndexRange *param_1,SCIndexRange *param_2,SCIndexRange *param_3)

{
  if ((SCIndexRange *)(param_1) == (SCIndexRange *)(param_2)) {
    return (SCIndexRange *)(param_3);
  }
  do {
    ((SCIndexRange *)(param_3))->op_assign(param_1);
    param_1 = (SCIndexRange *)(param_1 + 8);
    param_3 = (SCIndexRange *)(param_3 + 8);
  } while ((SCIndexRange *)(param_1) != (SCIndexRange *)(param_2));
  return (SCIndexRange *)(param_3);
}


// Reference entry 104db980; body size 5 bytes.
#line 1 "ENTRY_104db980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104db980(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104db990; body size 46 bytes.
#line 1 "ENTRY_104db990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104db990(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    puVar2 = (undefined4 *)(param_3);
    puVar3 = (undefined4 *)(param_1);
    do {
      uVar1 = (undefined4)(*puVar3);
      puVar3 = (undefined4 *)(puVar3 + 2);
      *puVar2 = (undefined4)(uVar1);
      puVar2[1] = (undefined4)(*(undefined4 *)((int)param_1 + (4 - (int)param_3) + (int)puVar2));
      puVar2 = (undefined4 *)(puVar2 + 2);
    } while ((undefined4 *)(puVar3) != (undefined4 *)(param_2));
  }
  return;
}


// Reference entry 104db9d0; body size 46 bytes.
#line 1 "ENTRY_104db9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104db9d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    puVar2 = (undefined4 *)(param_3);
    puVar3 = (undefined4 *)(param_1);
    do {
      uVar1 = (undefined4)(*puVar3);
      puVar3 = (undefined4 *)(puVar3 + 2);
      *puVar2 = (undefined4)(uVar1);
      puVar2[1] = (undefined4)(*(undefined4 *)((int)param_1 + (4 - (int)param_3) + (int)puVar2));
      puVar2 = (undefined4 *)(puVar2 + 2);
    } while ((undefined4 *)(puVar3) != (undefined4 *)(param_2));
  }
  return;
}


// Reference entry 104dba10; body size 5 bytes.
#line 1 "ENTRY_104dba10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104dba10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104dba20; body size 5 bytes.
#line 1 "ENTRY_104dba20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104dba20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104dba30; body size 19 bytes.
#line 1 "ENTRY_104dba30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104dba30(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  param_2[1] = (undefined4)(param_3[1]);
  return;
}


// Reference entry 104dba50; body size 19 bytes.
#line 1 "ENTRY_104dba50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104dba50(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  param_2[1] = (undefined4)(param_3[1]);
  return;
}


// Reference entry 104dba70; body size 19 bytes.
#line 1 "ENTRY_104dba70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104dba70(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  param_2[1] = (undefined4)(param_3[1]);
  return;
}


// Reference entry 104dba90; body size 3 bytes.
#line 1 "ENTRY_104dba90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104dba90(void)

{
  return;
}


// Reference entry 104dbaa0; body size 159 bytes.
#line 1 "ENTRY_104dbaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104dbaa0(undefined4 *param_2,SCIndexRange *param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
  SCIndexRange *pSVar1;
  undefined4 uVar2;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  pSVar1 = (SCIndexRange *)(*(SCIndexRange **)(param_1 + 4), 0);
  if ((SCIndexRange *)(pSVar1) == *(SCIndexRange **)(param_1 + 8)) {
    uVar2 = (undefined4)(thunk_FUN_104db6f0(param_3,param_4), 0);
    *param_2 = (undefined4)(uVar2);
    return (undefined4 *)(param_2);
  }
  uStack_8 = (undefined4)(*param_4);
  if ((SCIndexRange *)((param_3)) != (SCIndexRange *)(pSVar1)) {
    uStack_4 = (undefined4)(param_4[1]);
    *(undefined4*)pSVar1 = (undefined4)((SCIndexRange *)(*(undefined4 *)(pSVar1 + -8)));
    *(undefined4*)(pSVar1 + 4) = (undefined4)(*(undefined4 *)(pSVar1 + -4));
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    pSVar1 = (SCIndexRange *)(pSVar1 + -8);
    while ((SCIndexRange *)(pSVar1) != (SCIndexRange *)(param_3)) {
      ((SCIndexRange *)(pSVar1))->op_assign(pSVar1 + -8);
      pSVar1 = (SCIndexRange *)(pSVar1 + -8);
    }
    ((SCIndexRange *)(param_3))->op_assign((SCIndexRange *)&uStack_8);
    *param_2 = (undefined4)(param_3);
    return (undefined4 *)(param_2);
  }
  *(undefined4*)pSVar1 = (undefined4)((SCIndexRange *)(uStack_8));
  *(undefined4*)(pSVar1 + 4) = (undefined4)(param_4[1]);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  *param_2 = (undefined4)(param_3);
  return (undefined4 *)(param_2);
}


// Reference entry 104dbb70; body size 45 bytes.
#line 1 "ENTRY_104dbb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104dbb70(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    puVar1[1] = (undefined4)(param_2[1]);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_104db6f0(puVar1,param_2);
  return;
}


// Reference entry 104dbbb0; body size 5 bytes.
#line 1 "ENTRY_104dbbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104dbbb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104dbbc0; body size 5 bytes.
#line 1 "ENTRY_104dbbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104dbbc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104dbbd0; body size 5 bytes.
#line 1 "ENTRY_104dbbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104dbbd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104dbbe0; body size 6 bytes.
#line 1 "ENTRY_104dbbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_104dbbe0(void)

{
  return (char *)("SCISelectionManager");
}


// Reference entry 104dbbf0; body size 5 bytes.
#line 1 "ENTRY_104dbbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104dbbf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104dbc00; body size 54 bytes.
#line 1 "ENTRY_104dbc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104dbc00(undefined4 *param_1)

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


// Reference entry 104dbc50; body size 27 bytes.
#line 1 "ENTRY_104dbc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104dbc50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 104dbc80; body size 16 bytes.
#line 1 "ENTRY_104dbc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104dbc80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104dbca0; body size 21 bytes.
#line 1 "ENTRY_104dbca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104dbca0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104dbcc0; body size 11 bytes.
#line 1 "ENTRY_104dbcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104dbcc0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104dbcd0; body size 11 bytes.
#line 1 "ENTRY_104dbcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104dbcd0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104dbce0; body size 23 bytes.
#line 1 "ENTRY_104dbce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104dbce0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104dbd00; body size 3 bytes.
#line 1 "ENTRY_104dbd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104dbd00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104dbd10; body size 23 bytes.
#line 1 "ENTRY_104dbd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104dbd10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104dbe60; body size 42 bytes.
#line 1 "ENTRY_104dbe60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104dbe60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseDataSourceEventSinkInternal);
  return (undefined4 *)(param_1);
}


// Reference entry 104dbea0; body size 9 bytes.
#line 1 "ENTRY_104dbea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104dbea0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISelectionManager);
  return (undefined4 *)(param_1);
}


// Reference entry 104dc180; body size 3 bytes.
#line 1 "ENTRY_104dc180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104dc180(void)

{
  return;
}


// Reference entry 104dc190; body size 3 bytes.
#line 1 "ENTRY_104dc190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104dc190(void)

{
  return;
}


// Reference entry 104dc290; body size 19 bytes.
#line 1 "ENTRY_104dc290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104dc290(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 104dc2b0; body size 7 bytes.
#line 1 "ENTRY_104dc2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104dc2b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 104dc410; body size 13 bytes.
#line 1 "ENTRY_104dc410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_104dc410(int param_2)
{
  int param_1 = (int )this;
  return (int)(*(int *)(param_1 + 8) + param_2 * 8);
}


// Reference entry 104dc420; body size 12 bytes.
#line 1 "ENTRY_104dc420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_104dc420(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 104dc430; body size 3 bytes.
#line 1 "ENTRY_104dc430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104dc430(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104dc440; body size 3 bytes.
#line 1 "ENTRY_104dc440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104dc440(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104dc450; body size 18 bytes.
#line 1 "ENTRY_104dc450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104dc450(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 8);
  return;
}


// Reference entry 104dc470; body size 14 bytes.
#line 1 "ENTRY_104dc470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104dc470(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (int *)(param_1);
}


// Reference entry 104dc490; body size 14 bytes.
#line 1 "ENTRY_104dc490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104dc490(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (int *)(param_1);
}


// Reference entry 104dc730; body size 6 bytes.
#line 1 "ENTRY_104dc730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_104dc730(void)

{
  return (char *)("SCSelectionManager");
}


// Reference entry 104dc740; body size 49 bytes.
#line 1 "ENTRY_104dc740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_104dc740(uint param_2)
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


// Reference entry 104dc7f0; body size 3 bytes.
#line 1 "ENTRY_104dc7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104dc7f0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 104dc800; body size 3 bytes.
#line 1 "ENTRY_104dc800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104dc800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104dc810; body size 3 bytes.
#line 1 "ENTRY_104dc810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104dc810(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104dc820; body size 3 bytes.
#line 1 "ENTRY_104dc820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104dc820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104dc830; body size 3 bytes.
#line 1 "ENTRY_104dc830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104dc830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104dc840; body size 13 bytes.
#line 1 "ENTRY_104dc840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104dc840(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 104dc850; body size 3 bytes.
#line 1 "ENTRY_104dc850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104dc850(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 104dc860; body size 6 bytes.
#line 1 "ENTRY_104dc860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104dc860(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 104dc8e0; body size 48 bytes.
#line 1 "ENTRY_104dc8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104dc8e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    puVar2 = (undefined4 *)(param_3);
    puVar3 = (undefined4 *)(param_1);
    do {
      uVar1 = (undefined4)(*puVar3);
      puVar3 = (undefined4 *)(puVar3 + 2);
      *puVar2 = (undefined4)(uVar1);
      puVar2[1] = (undefined4)(*(undefined4 *)((int)param_1 + (4 - (int)param_3) + (int)puVar2));
      puVar2 = (undefined4 *)(puVar2 + 2);
    } while ((undefined4 *)(puVar3) != (undefined4 *)(param_2));
  }
  return;
}


// Reference entry 104dc920; body size 42 bytes.
#line 1 "ENTRY_104dc920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104dc920(undefined4 *param_1, undefined4 *param_2, int param_3, unsigned int recovered_unused_stack_0)

{
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    param_3 = (int)(param_3 - (int)param_1);
    do {
      *(undefined4*)(param_3 + (int)param_1) = (undefined4)(*param_1);
      *(undefined4*)(param_3 + 4 + (int)param_1) = (undefined4)(param_1[1]);
      param_1 = (undefined4 *)(param_1 + 2);
    } while ((undefined4 *)(param_1) != (undefined4 *)(param_2));
  }
  return;
}


// Reference entry 104dc960; body size 42 bytes.
#line 1 "ENTRY_104dc960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104dc960(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    param_3 = (int)(param_3 - (int)param_1);
    do {
      *(undefined4*)(param_3 + (int)param_1) = (undefined4)(*param_1);
      *(undefined4*)(param_3 + 4 + (int)param_1) = (undefined4)(param_1[1]);
      param_1 = (undefined4 *)(param_1 + 2);
    } while ((undefined4 *)(param_1) != (undefined4 *)(param_2));
  }
  return;
}


// Reference entry 104dc9a0; body size 3 bytes.
#line 1 "ENTRY_104dc9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104dc9a0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 104dc9c0; body size 157 bytes.
#line 1 "ENTRY_104dc9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104dc9c0(SCIndexRange *param_2)
{
  int param_1 = (int )this;
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    thunk_FUN_112af4e0("SelectionManager",1,"addRange(): failed (locked)");
    return;
  }
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 0x24), 0);
  iVar3 = (int)(*(int *)(param_1 + 0x20));
  uVar4 = (uint)(0);
  if ((int)puVar2 - iVar3 >> 3 != 0) {
    do {
      bVar1 = (bool)(((SCIndexRange *)(param_2))->op_lt((SCIndexRange *)(iVar3 + uVar4 * 8)), 0);
      if (bVar1) {
        thunk_FUN_104dd350(uVar4,param_2);
        return;
      }
      puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 0x24), 0);
      uVar4 = (uint)(uVar4 + 1);
      iVar3 = (int)(*(int *)(param_1 + 0x20));
    } while (uVar4 < (uint)((int)puVar2 - iVar3 >> 3));
  }
  if ((undefined4 *)(puVar2) == *(undefined4 **)(param_1 + 0x28)) {
    thunk_FUN_104db6f0(puVar2,param_2);
    return;
  }
  *puVar2 = (undefined4)(*(undefined4 *)param_2);
  puVar2[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  *(int*)(param_1 + 0x24) = (int)(*(int *)(param_1 + 0x24) + 8);
  return;
}


// Reference entry 104dcb90; body size 87 bytes.
#line 1 "ENTRY_104dcb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104dcb90(uint param_1)

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


// Reference entry 104dcc00; body size 50 bytes.
#line 1 "ENTRY_104dcc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104dcc00(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 0x10)) {
    *puVar1 = (undefined4)(*param_2);
    puVar1[1] = (undefined4)(param_2[1]);
    *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + 8);
    return;
  }
  thunk_FUN_104db6f0(puVar1,param_2);
  return;
}


// Reference entry 104dcc40; body size 11 bytes.
#line 1 "ENTRY_104dcc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104dcc40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 104dcc50; body size 9 bytes.
#line 1 "ENTRY_104dcc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104dcc50(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 104dcc60; body size 7 bytes.
#line 1 "ENTRY_104dcc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104dcc60(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*(undefined4 *)(param_1 + 8));
  return;
}


// Reference entry 104dcc70; body size 6 bytes.
#line 1 "ENTRY_104dcc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104dcc70(undefined4 *param_1)

{
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 104dcc80; body size 61 bytes.
#line 1 "ENTRY_104dcc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104dcc80(int param_1,int param_2)

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


// Reference entry 104dcf30; body size 21 bytes.
#line 1 "ENTRY_104dcf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __stdcall FUN_104dcf30(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCSelectionManager");
  return (SCStr *)(param_1);
}


// Reference entry 104dcf50; body size 77 bytes.
#line 1 "ENTRY_104dcf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104dcf50(undefined4 *param_2,SCIndexRange *param_3)
{
  int param_1 = (int )this;
  SCIndexRange *pSVar1;
  SCIndexRange *pSVar2;
  SCIndexRange *this_;
  
  pSVar2 = (SCIndexRange *)(param_3 + 8);
  pSVar1 = (SCIndexRange *)(*(SCIndexRange **)(param_1 + 4), 0);
  this_ = (SCIndexRange *)(param_3);
  if ((SCIndexRange *)((pSVar2)) != (SCIndexRange *)(pSVar1)) {
    do {
      ((SCIndexRange *)(this_))->op_assign(pSVar2);
      pSVar2 = (SCIndexRange *)(pSVar2 + 8);
      this_ = (SCIndexRange *)(this_ + 8);
    } while ((SCIndexRange *)((pSVar2)) != (SCIndexRange *)(pSVar1));
    pSVar1 = (SCIndexRange *)(*(SCIndexRange **)(param_1 + 4), 0);
  }
  *(SCIndexRange**)(param_1 + 4) = (SCIndexRange *)(pSVar1 + -8);
  *param_2 = (undefined4)(param_3);
  return;
}


// Reference entry 104dcfb0; body size 13 bytes.
#line 1 "ENTRY_104dcfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_104dcfb0(int param_2)
{
  int param_1 = (int )this;
  return (int)(*(int *)(param_1 + 8) + param_2 * 8);
}


// Reference entry 104dd060; body size 92 bytes.
#line 1 "ENTRY_104dd060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_104dd060(SCIndexRange *param_2,char param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = (int *)((int *)(param_1 + 0x2c));
  *piVar1 = (int)(*piVar1 + 1);
  uVar2 = (uint)(*(uint *)(param_1 + 0x2c));
  if (*piVar1 < (int)((0))) {
    return (undefined4)(0);
  }
  iVar3 = (int)(*(int *)(param_1 + 0x20));
  uVar4 = (uint)(*(int *)(param_1 + 0x24) - iVar3 >> 3);
  if (uVar2 < uVar4) {
    if (param_3 != '\0') {
      ((SCIndexRange *)(param_2))->op_assign((SCIndexRange *)(iVar3 + ((uVar4 - uVar2) + -1) * 8));
      return (undefined4)(1);
    }
    ((SCIndexRange *)(param_2))->op_assign((SCIndexRange *)(iVar3 + uVar2 * 8));
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 104dd280; body size 159 bytes.
#line 1 "ENTRY_104dd280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104dd280(undefined4 *param_2,SCIndexRange *param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
  SCIndexRange *pSVar1;
  undefined4 uVar2;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  pSVar1 = (SCIndexRange *)(*(SCIndexRange **)(param_1 + 4), 0);
  if ((SCIndexRange *)(pSVar1) == *(SCIndexRange **)(param_1 + 8)) {
    uVar2 = (undefined4)(thunk_FUN_104db6f0(param_3,param_4), 0);
    *param_2 = (undefined4)(uVar2);
    return (undefined4 *)(param_2);
  }
  uStack_8 = (undefined4)(*param_4);
  if ((SCIndexRange *)((param_3)) != (SCIndexRange *)(pSVar1)) {
    uStack_4 = (undefined4)(param_4[1]);
    *(undefined4*)pSVar1 = (undefined4)((SCIndexRange *)(*(undefined4 *)(pSVar1 + -8)));
    *(undefined4*)(pSVar1 + 4) = (undefined4)(*(undefined4 *)(pSVar1 + -4));
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    pSVar1 = (SCIndexRange *)(pSVar1 + -8);
    while ((SCIndexRange *)(pSVar1) != (SCIndexRange *)(param_3)) {
      ((SCIndexRange *)(pSVar1))->op_assign(pSVar1 + -8);
      pSVar1 = (SCIndexRange *)(pSVar1 + -8);
    }
    ((SCIndexRange *)(param_3))->op_assign((SCIndexRange *)&uStack_8);
    *param_2 = (undefined4)(param_3);
    return (undefined4 *)(param_2);
  }
  *(undefined4*)pSVar1 = (undefined4)((SCIndexRange *)(uStack_8));
  *(undefined4*)(pSVar1 + 4) = (undefined4)(param_4[1]);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  *param_2 = (undefined4)(param_3);
  return (undefined4 *)(param_2);
}


// Reference entry 104dd430; body size 6 bytes.
#line 1 "ENTRY_104dd430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_104dd430(void)

{
  return (char *)("SCISelectionManager");
}


// Reference entry 104dd580; body size 6 bytes.
#line 1 "ENTRY_104dd580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104dd580(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 104dd590; body size 6 bytes.
#line 1 "ENTRY_104dd590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104dd590(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 104dd600; body size 3 bytes.
#line 1 "ENTRY_104dd600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104dd600(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104dd610; body size 3 bytes.
#line 1 "ENTRY_104dd610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104dd610(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104dd620; body size 45 bytes.
#line 1 "ENTRY_104dd620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104dd620(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    puVar1[1] = (undefined4)(param_2[1]);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_104db6f0(puVar1,param_2);
  return;
}


// Reference entry 104dd880; body size 28 bytes.
#line 1 "ENTRY_104dd880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104dd880(undefined4 *param_1)

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


// Reference entry 104ddbc0; body size 10 bytes.
#line 1 "ENTRY_104ddbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104ddbc0(int param_1)

{
  return (int)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3);
}


// Reference entry 104ddbd0; body size 9 bytes.
#line 1 "ENTRY_104ddbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104ddbd0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 104ddbe0; body size 21 bytes.
#line 1 "ENTRY_104ddbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104ddbe0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 0x14))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 104ddc00; body size 21 bytes.
#line 1 "ENTRY_104ddc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104ddc00(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 0x18))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 104ddc20; body size 6 bytes.
#line 1 "ENTRY_104ddc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ddc20(void)

{
  return (undefined4)(2);
}


// Reference entry 104ddd90; body size 8 bytes.
#line 1 "ENTRY_104ddd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_104ddd90(int param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar3 = (uint)(DAT_12126b84);
  puVar4 = (undefined4 *)(*(undefined4 **)(param_1 + 0x18), 0);
  puVar2 = (undefined4 *)((undefined4 *)0x0);
  while( true ) {
    puVar1 = (undefined4 *)(puVar4);
    if ((undefined4 *)(puVar1) == (undefined4 *)(0x0)) {

      puVar4 = (undefined4 *)(operator_new(8), 0);
      if ((undefined4 *)(puVar4) == (undefined4 *)(0x0)) {
        puVar4 = (undefined4 *)((undefined4 *)0x0);
      }
      else {
        *puVar4 = (undefined4)(0);

        puVar4[1] = (undefined4)(param_2);
        if (param_2 != 0) {
          thunk_FUN_1123fce0(param_2 + 4,uVar3);
        }
      }
      if ((undefined4 *)(puVar2) == (undefined4 *)(0x0)) {
        *(undefined4**)(param_1 + 0x18) = (undefined4 *)(puVar4);
      }
      else {
        *puVar2 = (undefined4)(puVar4);
      }

      return (undefined4)(1);
    }
    if (puVar1[1] == param_2) break;
    puVar4 = (undefined4 *)((undefined4 *)*puVar1);
    puVar2 = (undefined4 *)(puVar1);
  }
  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 104ddf50; body size 8 bytes.
#line 1 "ENTRY_104ddf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_104ddf50(int param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar4 = (uint)(DAT_12126b84);
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x18), 0);
  puVar3 = (undefined4 *)((undefined4 *)0x0);
  do {
    puVar2 = (undefined4 *)(puVar3);
    puVar3 = (undefined4 *)(puVar1);
    if ((undefined4 *)(puVar3) == (undefined4 *)(0x0)) {
      return (undefined4)(0);
    }
    puVar1 = (undefined4 *)((undefined4 *)*puVar3);
  } while (puVar3[1] != param_2);

  if ((undefined4 *)(puVar2) == (undefined4 *)(0x0)) {
    *(undefined4**)(param_1 + 0x18) = (undefined4 *)(puVar1);
  }
  else {
    *puVar2 = (undefined4)(puVar1);
  }
  if ((undefined4 *)(puVar3) == *(undefined4 **)(param_1 + 0x1c)) {
    *(undefined4*)(param_1 + 0x1c) = (undefined4)(**(undefined4 **)(param_1 + 0x1c), 0);
  }
  puVar1 = (undefined4 *)((undefined4 *)puVar3[1]);

  if (((undefined4 *)(puVar1) != (undefined4 *)(0x0)) && (iVar5 = (int)(thunk_FUN_1123fcd0(puVar1 + 1,uVar4), 0), iVar5 == 0)) {
    (**(code **)*puVar1)(1);
  }
  thunk_FUN_1148a50e(puVar3,8);

  return (undefined4)(1);

 } catch (...) { }
}


// Reference entry 104ddfc0; body size 6 bytes.
#line 1 "ENTRY_104ddfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ddfc0(void)

{
  return (undefined4)(0x17);
}


// Reference entry 104de310; body size 13 bytes.
#line 1 "ENTRY_104de310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de310(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x40))();
  return (undefined4)(0);
}


// Reference entry 104de320; body size 13 bytes.
#line 1 "ENTRY_104de320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de320(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x38))();
  return (undefined4)(0);
}


// Reference entry 104de330; body size 13 bytes.
#line 1 "ENTRY_104de330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de330(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
  return (undefined4)(0);
}


// Reference entry 104de340; body size 13 bytes.
#line 1 "ENTRY_104de340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de340(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x44))();
  return (undefined4)(0);
}


// Reference entry 104de530; body size 13 bytes.
#line 1 "ENTRY_104de530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de530(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x14))();
  return (undefined4)(0);
}


// Reference entry 104de540; body size 13 bytes.
#line 1 "ENTRY_104de540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de540(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x3c))();
  return (undefined4)(0);
}


// Reference entry 104de6a0; body size 13 bytes.
#line 1 "ENTRY_104de6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de6a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x24))();
  return (undefined4)(0);
}


// Reference entry 104de6b0; body size 13 bytes.
#line 1 "ENTRY_104de6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de6b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x54))();
  return (undefined4)(0);
}


// Reference entry 104de6c0; body size 13 bytes.
#line 1 "ENTRY_104de6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de6c0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x20))();
  return (undefined4)(0);
}


// Reference entry 104de6d0; body size 13 bytes.
#line 1 "ENTRY_104de6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de6d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x1c))();
  return (undefined4)(0);
}


// Reference entry 104de6e0; body size 13 bytes.
#line 1 "ENTRY_104de6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de6e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x18))();
  return (undefined4)(0);
}


// Reference entry 104de6f0; body size 13 bytes.
#line 1 "ENTRY_104de6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de6f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x58))();
  return (undefined4)(0);
}


// Reference entry 104de700; body size 13 bytes.
#line 1 "ENTRY_104de700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de700(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x28))();
  return (undefined4)(0);
}


// Reference entry 104de710; body size 13 bytes.
#line 1 "ENTRY_104de710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de710(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 8))();
  return (undefined4)(0);
}


// Reference entry 104de720; body size 13 bytes.
#line 1 "ENTRY_104de720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de720(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x48))();
  return (undefined4)(0);
}


// Reference entry 104deb10; body size 13 bytes.
#line 1 "ENTRY_104deb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104deb10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x4c))();
  return (undefined4)(0);
}


// Reference entry 104deb20; body size 13 bytes.
#line 1 "ENTRY_104deb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104deb20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 4))();
  return (undefined4)(0);
}


// Reference entry 104deb30; body size 13 bytes.
#line 1 "ENTRY_104deb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104deb30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x50))();
  return (undefined4)(0);
}


// Reference entry 104ded00; body size 54 bytes.
#line 1 "ENTRY_104ded00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104ded00(undefined4 param_2,int *param_3, unsigned int recovered_unused_stack_0)
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


// Reference entry 104ded50; body size 61 bytes.
#line 1 "ENTRY_104ded50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104ded50(undefined4 param_2,int *param_3, unsigned int recovered_unused_stack_0)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_3);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 104deda0; body size 25 bytes.
#line 1 "ENTRY_104deda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104deda0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104dedc0; body size 25 bytes.
#line 1 "ENTRY_104dedc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104dedc0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104dede0; body size 22 bytes.
#line 1 "ENTRY_104dede0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104dede0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104dee00; body size 22 bytes.
#line 1 "ENTRY_104dee00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104dee00(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104dee20; body size 22 bytes.
#line 1 "ENTRY_104dee20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104dee20(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104df070; body size 18 bytes.
#line 1 "ENTRY_104df070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104df070(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104df090; body size 25 bytes.
#line 1 "ENTRY_104df090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104df090(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104df0b0; body size 25 bytes.
#line 1 "ENTRY_104df0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104df0b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104df0d0; body size 18 bytes.
#line 1 "ENTRY_104df0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104df0d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104df0f0; body size 25 bytes.
#line 1 "ENTRY_104df0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104df0f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104df110; body size 25 bytes.
#line 1 "ENTRY_104df110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104df110(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104df130; body size 18 bytes.
#line 1 "ENTRY_104df130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104df130(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104df150; body size 25 bytes.
#line 1 "ENTRY_104df150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104df150(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104df170; body size 25 bytes.
#line 1 "ENTRY_104df170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104df170(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104df190; body size 68 bytes.
#line 1 "ENTRY_104df190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104df190(undefined4 param_2,int *param_3, unsigned int recovered_unused_stack_0)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_3);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  param_1[3] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 104df1f0; body size 11 bytes.
#line 1 "ENTRY_104df1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104df1f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104df200; body size 11 bytes.
#line 1 "ENTRY_104df200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104df200(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104df210; body size 22 bytes.
#line 1 "ENTRY_104df210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104df210(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104df230; body size 22 bytes.
#line 1 "ENTRY_104df230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104df230(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104df250; body size 22 bytes.
#line 1 "ENTRY_104df250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104df250(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104df270; body size 5 bytes.
#line 1 "ENTRY_104df270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104df270(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104df280; body size 5 bytes.
#line 1 "ENTRY_104df280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104df280(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104df290; body size 5 bytes.
#line 1 "ENTRY_104df290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104df290(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104df2a0; body size 5 bytes.
#line 1 "ENTRY_104df2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104df2a0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104df2b0; body size 5 bytes.
#line 1 "ENTRY_104df2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104df2b0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104df2c0; body size 5 bytes.
#line 1 "ENTRY_104df2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104df2c0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104df2d0; body size 11 bytes.
#line 1 "ENTRY_104df2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104df2d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104df2e0; body size 56 bytes.
#line 1 "ENTRY_104df2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104df2e0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
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


// Reference entry 104df330; body size 63 bytes.
#line 1 "ENTRY_104df330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104df330(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*(int *)*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 104df380; body size 70 bytes.
#line 1 "ENTRY_104df380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104df380(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*(int *)*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  param_1[3] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 104df3e0; body size 26 bytes.
#line 1 "ENTRY_104df3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104df3e0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 104df400; body size 76 bytes.
#line 1 "ENTRY_104df400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_104df400(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  
  thunk_FUN_101ba530(param_2);
  iVar2 = (int)(*(int *)(param_2 + 4));
  if ((int)(iVar2) != *(int *)(param_1 + 4)) {
    piVar1 = (int *)(*(int **)(param_1 + 8), 0);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *(undefined4*)(param_1 + 4) = (undefined4)(0);
      *(undefined4*)(param_1 + 8) = (undefined4)(0);
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*(int *)(param_2 + 4));
    }
    *(int*)(param_1 + 4) = (int)(iVar2);
    piVar1 = (int *)(*(int **)(param_2 + 8), 0);
    *(int**)(param_1 + 8) = (int *)(piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (int)(param_1);
}


// Reference entry 104df460; body size 3 bytes.
#line 1 "ENTRY_104df460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104df460(void)

{
  return;
}


// Reference entry 104df470; body size 3 bytes.
#line 1 "ENTRY_104df470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104df470(void)

{
  return;
}


// Reference entry 104df480; body size 3 bytes.
#line 1 "ENTRY_104df480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104df480(void)

{
  return;
}


// Reference entry 104df490; body size 3 bytes.
#line 1 "ENTRY_104df490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104df490(void)

{
  return;
}


// Reference entry 104dfae0; body size 64 bytes.
#line 1 "ENTRY_104dfae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_104dfae0(int param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = (int)(*(int *)(param_1 + 4));
  if (iVar1 == 0) {
    return (int)(param_3);
  }
  iVar2 = (int)(*(int *)(param_1 + 0xc));
  piVar3 = (int *)(*(int **)(param_1 + 8), 0);
  piVar4 = (int *)(*(int **)(param_3 + 4), 0);
  *(int**)(iVar2 + 4) = (int *)(piVar4);
  *piVar4 = (int)(iVar2);
  *piVar3 = (int)(param_3);
  *(int**)(param_3 + 4) = (int *)(piVar3);
  *(int*)(param_2 + 4) = (int)(*(int *)(param_2 + 4) + iVar1);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (int)(iVar2);
}


// Reference entry 104dfb30; body size 13 bytes.
#line 1 "ENTRY_104dfb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104dfb30(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 104dfb40; body size 13 bytes.
#line 1 "ENTRY_104dfb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104dfb40(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 104dfb50; body size 13 bytes.
#line 1 "ENTRY_104dfb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104dfb50(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 104dfb60; body size 13 bytes.
#line 1 "ENTRY_104dfb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104dfb60(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 104dfb70; body size 13 bytes.
#line 1 "ENTRY_104dfb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104dfb70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 104dfb80; body size 13 bytes.
#line 1 "ENTRY_104dfb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104dfb80(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 104dfb90; body size 13 bytes.
#line 1 "ENTRY_104dfb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104dfb90(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 104dfba0; body size 13 bytes.
#line 1 "ENTRY_104dfba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104dfba0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 104dfbb0; body size 13 bytes.
#line 1 "ENTRY_104dfbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104dfbb0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 104dfbc0; body size 13 bytes.
#line 1 "ENTRY_104dfbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104dfbc0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 104dfc50; body size 3 bytes.
#line 1 "ENTRY_104dfc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104dfc50(void)

{
  return;
}


// Reference entry 104dfc60; body size 3 bytes.
#line 1 "ENTRY_104dfc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104dfc60(void)

{
  return;
}


// Reference entry 104dfc70; body size 3 bytes.
#line 1 "ENTRY_104dfc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104dfc70(void)

{
  return;
}


// Reference entry 104dfc80; body size 3 bytes.
#line 1 "ENTRY_104dfc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104dfc80(void)

{
  return;
}


// Reference entry 104dfc90; body size 3 bytes.
#line 1 "ENTRY_104dfc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104dfc90(void)

{
  return;
}


// Reference entry 104dfca0; body size 3 bytes.
#line 1 "ENTRY_104dfca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104dfca0(void)

{
  return;
}


// Reference entry 104dfdf0; body size 39 bytes.
#line 1 "ENTRY_104dfdf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104dfdf0(undefined4 *param_2)
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


// Reference entry 104dfe20; body size 39 bytes.
#line 1 "ENTRY_104dfe20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104dfe20(undefined4 *param_2)
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


// Reference entry 104dfe50; body size 18 bytes.
#line 1 "ENTRY_104dfe50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104dfe50(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 104dfe70; body size 18 bytes.
#line 1 "ENTRY_104dfe70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104dfe70(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 104dfe90; body size 18 bytes.
#line 1 "ENTRY_104dfe90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104dfe90(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 104dfeb0; body size 39 bytes.
#line 1 "ENTRY_104dfeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104dfeb0(undefined4 *param_2)
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


// Reference entry 104dfee0; body size 39 bytes.
#line 1 "ENTRY_104dfee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104dfee0(undefined4 *param_2)
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


// Reference entry 104dff10; body size 39 bytes.
#line 1 "ENTRY_104dff10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104dff10(undefined4 *param_2)
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


// Reference entry 104dff40; body size 39 bytes.
#line 1 "ENTRY_104dff40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104dff40(undefined4 *param_2)
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


// Reference entry 104e0840; body size 51 bytes.
#line 1 "ENTRY_104e0840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e0840(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4*)param_2[1] = (undefined4)((undefined4)(0));
  puVar2 = (undefined4 *)((undefined4 *)*param_2);
  while ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar2);
    thunk_FUN_104e3e20();
    thunk_FUN_1148a50e(puVar2,0x14);
    puVar2 = (undefined4 *)(puVar1);
  }
  return;
}


// Reference entry 104e0970; body size 15 bytes.
#line 1 "ENTRY_104e0970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e0970(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x10);
  return;
}


// Reference entry 104e0990; body size 15 bytes.
#line 1 "ENTRY_104e0990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e0990(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 104e09b0; body size 15 bytes.
#line 1 "ENTRY_104e09b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e09b0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 104e0a80; body size 26 bytes.
#line 1 "ENTRY_104e0a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e0a80(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_104e3e20();
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 104e0b60; body size 7 bytes.
#line 1 "ENTRY_104e0b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e0b60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104e0b70; body size 7 bytes.
#line 1 "ENTRY_104e0b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e0b70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104e0b80; body size 7 bytes.
#line 1 "ENTRY_104e0b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e0b80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104e0b90; body size 7 bytes.
#line 1 "ENTRY_104e0b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e0b90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104e0ba0; body size 7 bytes.
#line 1 "ENTRY_104e0ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e0ba0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104e0bb0; body size 7 bytes.
#line 1 "ENTRY_104e0bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e0bb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104e0bc0; body size 5 bytes.
#line 1 "ENTRY_104e0bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e0bc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e0bd0; body size 5 bytes.
#line 1 "ENTRY_104e0bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e0bd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e0be0; body size 5 bytes.
#line 1 "ENTRY_104e0be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e0be0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e0bf0; body size 92 bytes.
#line 1 "ENTRY_104e0bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_104e0bf0(int *param_1,int *param_2,int *param_3)

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
        (**(code **)(*piVar1 + 8))();
        iVar2 = (int)(*param_1);
      }
      *param_3 = (int)(iVar2);
      piVar1 = (int *)((int *)param_1[1]);
      param_3[1] = (int)((int)piVar1);
      if ((int *)(piVar1) != (int *)(0x0)) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_1 = (int *)(param_1 + 2);
    param_3 = (int *)(param_3 + 2);
  } while ((int *)(param_1) != (int *)(param_2));
  return (int *)(param_3);
}


// Reference entry 104e0c70; body size 3 bytes.
#line 1 "ENTRY_104e0c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e0c70(void)

{
  return;
}


// Reference entry 104e0c80; body size 3 bytes.
#line 1 "ENTRY_104e0c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e0c80(void)

{
  return;
}


// Reference entry 104e0c90; body size 3 bytes.
#line 1 "ENTRY_104e0c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e0c90(void)

{
  return;
}


// Reference entry 104e13f0; body size 7 bytes.
#line 1 "ENTRY_104e13f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e13f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104e1400; body size 24 bytes.
#line 1 "ENTRY_104e1400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e1400(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104e1440(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 104e1420; body size 5 bytes.
#line 1 "ENTRY_104e1420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e1420(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e1430; body size 5 bytes.
#line 1 "ENTRY_104e1430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e1430(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e16c0; body size 5 bytes.
#line 1 "ENTRY_104e16c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e16c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e16d0; body size 5 bytes.
#line 1 "ENTRY_104e16d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e16d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e16e0; body size 5 bytes.
#line 1 "ENTRY_104e16e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e16e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e16f0; body size 5 bytes.
#line 1 "ENTRY_104e16f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e16f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e1700; body size 5 bytes.
#line 1 "ENTRY_104e1700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e1700(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e1710; body size 5 bytes.
#line 1 "ENTRY_104e1710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e1710(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e1720; body size 5 bytes.
#line 1 "ENTRY_104e1720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e1720(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e1730; body size 5 bytes.
#line 1 "ENTRY_104e1730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e1730(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e1740; body size 5 bytes.
#line 1 "ENTRY_104e1740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e1740(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e1750; body size 5 bytes.
#line 1 "ENTRY_104e1750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e1750(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e1760; body size 5 bytes.
#line 1 "ENTRY_104e1760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e1760(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e1770; body size 5 bytes.
#line 1 "ENTRY_104e1770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e1770(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e1780; body size 5 bytes.
#line 1 "ENTRY_104e1780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e1780(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e1790; body size 5 bytes.
#line 1 "ENTRY_104e1790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e1790(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e17a0; body size 5 bytes.
#line 1 "ENTRY_104e17a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e17a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e17b0; body size 5 bytes.
#line 1 "ENTRY_104e17b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e17b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e17c0; body size 5 bytes.
#line 1 "ENTRY_104e17c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e17c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e17d0; body size 5 bytes.
#line 1 "ENTRY_104e17d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e17d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e17e0; body size 5 bytes.
#line 1 "ENTRY_104e17e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e17e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e17f0; body size 5 bytes.
#line 1 "ENTRY_104e17f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e17f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e1800; body size 5 bytes.
#line 1 "ENTRY_104e1800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e1800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e1810; body size 5 bytes.
#line 1 "ENTRY_104e1810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e1810(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e1820; body size 5 bytes.
#line 1 "ENTRY_104e1820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e1820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e1830; body size 5 bytes.
#line 1 "ENTRY_104e1830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e1830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e1840; body size 18 bytes.
#line 1 "ENTRY_104e1840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e1840(int *param_1,int param_2)

{
  *param_1 = (int)(*param_1 + param_2 * 8);
  return;
}


// Reference entry 104e1860; body size 20 bytes.
#line 1 "ENTRY_104e1860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104e1860(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_104df920(param_1,param_2,param_2);
  return;
}


// Reference entry 104e1880; body size 48 bytes.
#line 1 "ENTRY_104e1880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e1880(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

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


// Reference entry 104e1960; body size 55 bytes.
#line 1 "ENTRY_104e1960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e1960(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

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


// Reference entry 104e19b0; body size 62 bytes.
#line 1 "ENTRY_104e19b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e19b0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)*param_4);
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_2[1] = (int)(0);
  param_2[2] = (int)(0);
  param_2[3] = (int)(0);
  return;
}


// Reference entry 104e1a00; body size 28 bytes.
#line 1 "ENTRY_104e1a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e1a00(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 104e1a30; body size 28 bytes.
#line 1 "ENTRY_104e1a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e1a30(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 104e1a60; body size 28 bytes.
#line 1 "ENTRY_104e1a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e1a60(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 104e1a90; body size 28 bytes.
#line 1 "ENTRY_104e1a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e1a90(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 104e1ac0; body size 28 bytes.
#line 1 "ENTRY_104e1ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e1ac0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 104e1b90; body size 9 bytes.
#line 1 "ENTRY_104e1b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e1b90(undefined4 param_1,int *param_2)

{
 try {
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar3 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_2[2]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_2[1] = (int)(0);
    param_2[2] = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar3);
  }
  iVar2 = (int)(*param_2);

  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    iVar4 = (int)(thunk_FUN_1123fcd0((char *)(iVar2 + -0x10)), 0);
    if (iVar4 == 0) {
      *(undefined4*)(iVar2 + -8) = (undefined4)(0);
      *(undefined4*)(iVar2 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
      free((char *)(iVar2 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 104e1d30; body size 12 bytes.
#line 1 "ENTRY_104e1d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_104e1d30(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 3);
}


// Reference entry 104e1de0; body size 132 bytes.
#line 1 "ENTRY_104e1de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e1de0(int *param_2,int *param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)param_3[2] != (undefined1 *)(((0x0)))) {
    puVar5 = (undefined1 *)((undefined1 *)param_3[2]);
  }
  uVar4 = (uint)(thunk_FUN_101c82e0(puVar5), 0);
  uVar4 = (uint)(*(uint *)(param_1 + 0x18) & uVar4);
  piVar2 = (int *)(*(int **)(*(int *)(param_1 + 0xc) + uVar4 * 8), 0);
  piVar1 = (int *)((int *)(*(int *)(param_1 + 0xc) + uVar4 * 8));
  if ((int *)piVar1[1] == (int *)((param_3))) {
    if ((int *)(piVar2) == (int *)(param_3)) {
      iVar3 = (int)(*(int *)(param_1 + 4));
      *piVar1 = (int)(iVar3);
      piVar1[1] = (int)(iVar3);
    }
    else {
      piVar1[1] = (int)(param_3[1]);
    }
  }
  else if ((int *)(piVar2) == (int *)(param_3)) {
    *piVar1 = (int)(*param_3);
  }
  iVar3 = (int)(*param_3);
  *(int*)(param_1 + 8) = (int)(*(int *)(param_1 + 8) + -1);
  *(int*)param_3[1] = (int)((int)(iVar3));
  *(int*)(iVar3 + 4) = (int)(param_3[1]);
  thunk_FUN_104e0aa0(param_1 + 4,param_3);
  *param_2 = (int)(iVar3);
  return;
}


// Reference entry 104e1e90; body size 15 bytes.
#line 1 "ENTRY_104e1e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e1e90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 104e1eb0; body size 15 bytes.
#line 1 "ENTRY_104e1eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e1eb0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 104e1ed0; body size 15 bytes.
#line 1 "ENTRY_104e1ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e1ed0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 104e1ef0; body size 15 bytes.
#line 1 "ENTRY_104e1ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e1ef0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 104e1f10; body size 15 bytes.
#line 1 "ENTRY_104e1f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e1f10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 104e21d0; body size 5 bytes.
#line 1 "ENTRY_104e21d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e21d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e21e0; body size 5 bytes.
#line 1 "ENTRY_104e21e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e21e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e21f0; body size 5 bytes.
#line 1 "ENTRY_104e21f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e21f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e2200; body size 5 bytes.
#line 1 "ENTRY_104e2200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e2200(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e2210; body size 5 bytes.
#line 1 "ENTRY_104e2210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e2210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e2220; body size 5 bytes.
#line 1 "ENTRY_104e2220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e2220(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e2230; body size 5 bytes.
#line 1 "ENTRY_104e2230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e2230(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e2240; body size 5 bytes.
#line 1 "ENTRY_104e2240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e2240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e2250; body size 5 bytes.
#line 1 "ENTRY_104e2250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e2250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e2260; body size 5 bytes.
#line 1 "ENTRY_104e2260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e2260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e2270; body size 5 bytes.
#line 1 "ENTRY_104e2270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e2270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e2280; body size 5 bytes.
#line 1 "ENTRY_104e2280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e2280(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e2290; body size 5 bytes.
#line 1 "ENTRY_104e2290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e2290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e22a0; body size 5 bytes.
#line 1 "ENTRY_104e22a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e22a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e22b0; body size 5 bytes.
#line 1 "ENTRY_104e22b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e22b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e22c0; body size 5 bytes.
#line 1 "ENTRY_104e22c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e22c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e22d0; body size 5 bytes.
#line 1 "ENTRY_104e22d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e22d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e22e0; body size 5 bytes.
#line 1 "ENTRY_104e22e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e22e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e22f0; body size 5 bytes.
#line 1 "ENTRY_104e22f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e22f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e2300; body size 5 bytes.
#line 1 "ENTRY_104e2300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e2300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e2310; body size 5 bytes.
#line 1 "ENTRY_104e2310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e2310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e2320; body size 5 bytes.
#line 1 "ENTRY_104e2320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e2320(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e2330; body size 5 bytes.
#line 1 "ENTRY_104e2330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e2330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e2340; body size 11 bytes.
#line 1 "ENTRY_104e2340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e2340(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 104e2350; body size 5 bytes.
#line 1 "ENTRY_104e2350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e2350(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e2360; body size 5 bytes.
#line 1 "ENTRY_104e2360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e2360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e2370; body size 5 bytes.
#line 1 "ENTRY_104e2370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e2370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e2380; body size 12 bytes.
#line 1 "ENTRY_104e2380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_104e2380(int param_1,int param_2)

{
  return (int)(param_1 + param_2 * 8);
}


// Reference entry 104e2390; body size 30 bytes.
#line 1 "ENTRY_104e2390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e2390(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 104e23c0; body size 30 bytes.
#line 1 "ENTRY_104e23c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e23c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 104e23f0; body size 30 bytes.
#line 1 "ENTRY_104e23f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e23f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 104e2690; body size 32 bytes.
#line 1 "ENTRY_104e2690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2690(undefined4 *param_2)
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


// Reference entry 104e2700; body size 16 bytes.
#line 1 "ENTRY_104e2700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104e2700(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2720; body size 32 bytes.
#line 1 "ENTRY_104e2720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2720(undefined4 *param_2)
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


// Reference entry 104e2790; body size 16 bytes.
#line 1 "ENTRY_104e2790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104e2790(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104e27d0; body size 18 bytes.
#line 1 "ENTRY_104e27d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e27d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104e27f0; body size 18 bytes.
#line 1 "ENTRY_104e27f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e27f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2810; body size 18 bytes.
#line 1 "ENTRY_104e2810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2810(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2aa0; body size 11 bytes.
#line 1 "ENTRY_104e2aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2aa0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2ab0; body size 11 bytes.
#line 1 "ENTRY_104e2ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2ab0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2ac0; body size 11 bytes.
#line 1 "ENTRY_104e2ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2ac0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2ad0; body size 11 bytes.
#line 1 "ENTRY_104e2ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2ad0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2ae0; body size 11 bytes.
#line 1 "ENTRY_104e2ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2ae0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2af0; body size 11 bytes.
#line 1 "ENTRY_104e2af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2af0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2b00; body size 18 bytes.
#line 1 "ENTRY_104e2b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2b00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2b20; body size 11 bytes.
#line 1 "ENTRY_104e2b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2b20(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2b30; body size 11 bytes.
#line 1 "ENTRY_104e2b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2b30(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2b40; body size 11 bytes.
#line 1 "ENTRY_104e2b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2b40(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2b50; body size 11 bytes.
#line 1 "ENTRY_104e2b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2b50(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2b60; body size 11 bytes.
#line 1 "ENTRY_104e2b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2b60(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2b70; body size 11 bytes.
#line 1 "ENTRY_104e2b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2b70(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2b80; body size 16 bytes.
#line 1 "ENTRY_104e2b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104e2b80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2ba0; body size 16 bytes.
#line 1 "ENTRY_104e2ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104e2ba0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2bc0; body size 16 bytes.
#line 1 "ENTRY_104e2bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104e2bc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2be0; body size 13 bytes.
#line 1 "ENTRY_104e2be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2be0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2bf0; body size 13 bytes.
#line 1 "ENTRY_104e2bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2bf0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2c00; body size 13 bytes.
#line 1 "ENTRY_104e2c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2c00(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2c10; body size 14 bytes.
#line 1 "ENTRY_104e2c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2c10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2c30; body size 14 bytes.
#line 1 "ENTRY_104e2c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2c30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2c50; body size 14 bytes.
#line 1 "ENTRY_104e2c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2c50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2c70; body size 21 bytes.
#line 1 "ENTRY_104e2c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2c70(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2c90; body size 21 bytes.
#line 1 "ENTRY_104e2c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2c90(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2cb0; body size 11 bytes.
#line 1 "ENTRY_104e2cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2cb0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2cc0; body size 11 bytes.
#line 1 "ENTRY_104e2cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2cc0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2cd0; body size 23 bytes.
#line 1 "ENTRY_104e2cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104e2cd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2cf0; body size 23 bytes.
#line 1 "ENTRY_104e2cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104e2cf0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2d10; body size 23 bytes.
#line 1 "ENTRY_104e2d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104e2d10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2d30; body size 23 bytes.
#line 1 "ENTRY_104e2d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104e2d30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2d50; body size 23 bytes.
#line 1 "ENTRY_104e2d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104e2d50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2d70; body size 3 bytes.
#line 1 "ENTRY_104e2d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e2d70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e2d80; body size 3 bytes.
#line 1 "ENTRY_104e2d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e2d80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e2d90; body size 3 bytes.
#line 1 "ENTRY_104e2d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e2d90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e2da0; body size 3 bytes.
#line 1 "ENTRY_104e2da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e2da0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e2db0; body size 3 bytes.
#line 1 "ENTRY_104e2db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e2db0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e2dc0; body size 9 bytes.
#line 1 "ENTRY_104e2dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104e2dc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2f00; body size 13 bytes.
#line 1 "ENTRY_104e2f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e2f00(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104e3180; body size 23 bytes.
#line 1 "ENTRY_104e3180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104e3180(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104e31a0; body size 23 bytes.
#line 1 "ENTRY_104e31a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104e31a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104e3650; body size 11 bytes.
#line 1 "ENTRY_104e3650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e3650(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104e3660; body size 11 bytes.
#line 1 "ENTRY_104e3660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e3660(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104e3670; body size 11 bytes.
#line 1 "ENTRY_104e3670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e3670(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104e3680; body size 18 bytes.
#line 1 "ENTRY_104e3680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e3680(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104e3c70; body size 3 bytes.
#line 1 "ENTRY_104e3c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e3c70(void)

{
  return;
}


// Reference entry 104e3c80; body size 3 bytes.
#line 1 "ENTRY_104e3c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e3c80(void)

{
  return;
}


// Reference entry 104e3c90; body size 3 bytes.
#line 1 "ENTRY_104e3c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e3c90(void)

{
  return;
}


// Reference entry 104e3fa0; body size 5 bytes.
#line 1 "ENTRY_104e3fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104e3fa0(int param_1)

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
  thunk_FUN_104e0760(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x10);
  return;
}


// Reference entry 104e3fb0; body size 5 bytes.
#line 1 "ENTRY_104e3fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104e3fb0(int param_1)

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
  thunk_FUN_104e3d00();
  return;
}


// Reference entry 104e3fc0; body size 5 bytes.
#line 1 "ENTRY_104e3fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104e3fc0(int param_1)

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
  thunk_FUN_104e0880(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x18);
  return;
}


// Reference entry 104e4430; body size 3 bytes.
#line 1 "ENTRY_104e4430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e4430(void)

{
  return;
}


// Reference entry 104e44d0; body size 65 bytes.
#line 1 "ENTRY_104e44d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104e44d0(int *param_2)
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


// Reference entry 104e4530; body size 65 bytes.
#line 1 "ENTRY_104e4530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104e4530(int *param_2)
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


// Reference entry 104e4720; body size 31 bytes.
#line 1 "ENTRY_104e4720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104e4720(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_104df920(*param_2,param_2[1],param_2);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104e47a0; body size 14 bytes.
#line 1 "ENTRY_104e47a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_104e47a0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 104e47c0; body size 14 bytes.
#line 1 "ENTRY_104e47c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_104e47c0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 104e47e0; body size 14 bytes.
#line 1 "ENTRY_104e47e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_104e47e0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 104e4800; body size 14 bytes.
#line 1 "ENTRY_104e4800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_104e4800(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 104e4820; body size 14 bytes.
#line 1 "ENTRY_104e4820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_104e4820(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 104e4840; body size 14 bytes.
#line 1 "ENTRY_104e4840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_104e4840(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 104e4860; body size 14 bytes.
#line 1 "ENTRY_104e4860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_104e4860(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 104e4880; body size 14 bytes.
#line 1 "ENTRY_104e4880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_104e4880(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 104e48a0; body size 14 bytes.
#line 1 "ENTRY_104e48a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_104e48a0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 104e48c0; body size 14 bytes.
#line 1 "ENTRY_104e48c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_104e48c0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 104e48e0; body size 14 bytes.
#line 1 "ENTRY_104e48e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_104e48e0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 104e4900; body size 14 bytes.
#line 1 "ENTRY_104e4900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_104e4900(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 104e4920; body size 16 bytes.
#line 1 "ENTRY_104e4920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e4920(undefined4 *param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  *param_2 = (undefined4)(param_1);
  param_2[1] = (undefined4)(param_3);
  return;
}


// Reference entry 104e4940; body size 32 bytes.
#line 1 "ENTRY_104e4940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_104e4940(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(1 << ((byte)param_2 & 0x1f));
  return (undefined4)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)((*(uint *)(param_1 + (param_2 >> 5) * 4) & uVar1) != 0)));
}


// Reference entry 104e4a00; body size 12 bytes.
#line 1 "ENTRY_104e4a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_104e4a00(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 104e4a10; body size 12 bytes.
#line 1 "ENTRY_104e4a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_104e4a10(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 104e4a20; body size 3 bytes.
#line 1 "ENTRY_104e4a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e4a20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104e4a30; body size 3 bytes.
#line 1 "ENTRY_104e4a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e4a30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104e4a40; body size 7 bytes.
#line 1 "ENTRY_104e4a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104e4a40(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104e4a50; body size 3 bytes.
#line 1 "ENTRY_104e4a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e4a50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104e4a60; body size 6 bytes.
#line 1 "ENTRY_104e4a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104e4a60(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 104e4a70; body size 6 bytes.
#line 1 "ENTRY_104e4a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104e4a70(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 104e4a80; body size 6 bytes.
#line 1 "ENTRY_104e4a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104e4a80(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 104e4a90; body size 6 bytes.
#line 1 "ENTRY_104e4a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104e4a90(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 104e4aa0; body size 6 bytes.
#line 1 "ENTRY_104e4aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104e4aa0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 104e4ab0; body size 6 bytes.
#line 1 "ENTRY_104e4ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104e4ab0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 104e4ac0; body size 6 bytes.
#line 1 "ENTRY_104e4ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104e4ac0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 104e4ad0; body size 6 bytes.
#line 1 "ENTRY_104e4ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104e4ad0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 104e4ae0; body size 6 bytes.
#line 1 "ENTRY_104e4ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104e4ae0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 104e4af0; body size 6 bytes.
#line 1 "ENTRY_104e4af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104e4af0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 104e4b00; body size 6 bytes.
#line 1 "ENTRY_104e4b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104e4b00(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 104e4b10; body size 6 bytes.
#line 1 "ENTRY_104e4b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104e4b10(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 104e4b20; body size 6 bytes.
#line 1 "ENTRY_104e4b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104e4b20(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 104e4b30; body size 6 bytes.
#line 1 "ENTRY_104e4b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104e4b30(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 104e4b40; body size 6 bytes.
#line 1 "ENTRY_104e4b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104e4b40(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 104e4b50; body size 9 bytes.
#line 1 "ENTRY_104e4b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104e4b50(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 104e4b60; body size 9 bytes.
#line 1 "ENTRY_104e4b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104e4b60(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 104e4b70; body size 9 bytes.
#line 1 "ENTRY_104e4b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104e4b70(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 104e4b80; body size 9 bytes.
#line 1 "ENTRY_104e4b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104e4b80(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 104e4b90; body size 9 bytes.
#line 1 "ENTRY_104e4b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104e4b90(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 104e4ba0; body size 9 bytes.
#line 1 "ENTRY_104e4ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104e4ba0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 104e4bb0; body size 9 bytes.
#line 1 "ENTRY_104e4bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104e4bb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 104e4bc0; body size 9 bytes.
#line 1 "ENTRY_104e4bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104e4bc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 104e4bd0; body size 10 bytes.
#line 1 "ENTRY_104e4bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_104e4bd0(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 104e4be0; body size 10 bytes.
#line 1 "ENTRY_104e4be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_104e4be0(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 104e4bf0; body size 10 bytes.
#line 1 "ENTRY_104e4bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_104e4bf0(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 104e4c00; body size 18 bytes.
#line 1 "ENTRY_104e4c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e4c00(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 8);
  return;
}


// Reference entry 104e4c20; body size 14 bytes.
#line 1 "ENTRY_104e4c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104e4c20(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (int *)(param_1);
}


// Reference entry 104e4c40; body size 14 bytes.
#line 1 "ENTRY_104e4c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104e4c40(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (int *)(param_1);
}


// Reference entry 104e4ff0; body size 4 bytes.
#line 1 "ENTRY_104e4ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104e4ff0(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 104e5000; body size 18 bytes.
#line 1 "ENTRY_104e5000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e5000(undefined4 param_1)

{
  thunk_FUN_110a5ba0(param_1,"object.item.audioItem");
  return;
}


// Reference entry 104e5020; body size 18 bytes.
#line 1 "ENTRY_104e5020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e5020(undefined4 param_1)

{
  thunk_FUN_110a5ba0(param_1,"object.item.audioItem.audioBook");
  return;
}


// Reference entry 104e5040; body size 18 bytes.
#line 1 "ENTRY_104e5040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e5040(undefined4 param_1)

{
  thunk_FUN_110a5ba0(param_1,"object.item.audioItem.musicTrack.recentShow");
  return;
}


// Reference entry 104e5060; body size 18 bytes.
#line 1 "ENTRY_104e5060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e5060(undefined4 param_1)

{
  thunk_FUN_110a5ba0(param_1,"object.item.audioItem.show");
  return;
}


// Reference entry 104e5080; body size 18 bytes.
#line 1 "ENTRY_104e5080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e5080(undefined4 param_1)

{
  thunk_FUN_110a5ba0(param_1,"object.container.radioShow");
  return;
}


// Reference entry 104e50a0; body size 22 bytes.
#line 1 "ENTRY_104e50a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104e50a0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 104e50c0; body size 22 bytes.
#line 1 "ENTRY_104e50c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104e50c0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 104e50e0; body size 22 bytes.
#line 1 "ENTRY_104e50e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104e50e0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 104e54c0; body size 30 bytes.
#line 1 "ENTRY_104e54c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e54c0(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_104e7990(param_2), 0);
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 8);
  return;
}


// Reference entry 104e54f0; body size 49 bytes.
#line 1 "ENTRY_104e54f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_104e54f0(uint param_2)
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


// Reference entry 104e5530; body size 49 bytes.
#line 1 "ENTRY_104e5530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_104e5530(uint param_2)
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


// Reference entry 104e5690; body size 20 bytes.
#line 1 "ENTRY_104e5690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104e5690(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xfffffff) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 104e56b0; body size 20 bytes.
#line 1 "ENTRY_104e56b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104e56b0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xccccccc) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 104e56d0; body size 20 bytes.
#line 1 "ENTRY_104e56d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104e56d0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 104e56f0; body size 66 bytes.
#line 1 "ENTRY_104e56f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104e56f0(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) + (double)(uint)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(uint)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= (float)((fVar1)) && (float)(fVar1) != *param_1);
}


// Reference entry 104e5750; body size 66 bytes.
#line 1 "ENTRY_104e5750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104e5750(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) + (double)(uint)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(uint)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= (float)((fVar1)) && (float)(fVar1) != *param_1);
}


// Reference entry 104e57b0; body size 66 bytes.
#line 1 "ENTRY_104e57b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104e57b0(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) + (double)(uint)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(uint)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= (float)((fVar1)) && (float)(fVar1) != *param_1);
}


// Reference entry 104e5810; body size 182 bytes.
#line 1 "ENTRY_104e5810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e5810(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x1fffffff < param_2) {
                    
    thunk_FUN_104e7560();
  }
  iVar2 = (int)(*param_1);
  uVar3 = (uint)(param_1[2] - iVar2 >> 3);
  if (0x1fffffff - (uVar3 >> 1) < uVar3) {
    uVar3 = (uint)(0x1fffffff);
  }
  else {
    uVar3 = (uint)((uVar3 >> 1) + uVar3);
    if (uVar3 < param_2) {
      uVar3 = (uint)(param_2);
    }
  }
  if (iVar2 != 0) {
    thunk_FUN_104dfcb0(iVar2,param_1[1],param_1);
    iVar2 = (int)(*param_1);
    uVar4 = (uint)(param_1[2] - iVar2 & 0xfffffff8);
    iVar1 = (int)(iVar2);
    if (0xfff < uVar4) {
      iVar1 = (int)(*(int *)(iVar2 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar2 - iVar1) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar1,uVar4);
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  iVar2 = (int)(thunk_FUN_104e7990(uVar3), 0);
  *param_1 = (int)(iVar2);
  param_1[1] = (int)(iVar2);
  param_1[2] = (int)(iVar2 + uVar3 * 8);
  return;
}


// Reference entry 104e5990; body size 21 bytes.
#line 1 "ENTRY_104e5990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104e5990(undefined4 *param_1, unsigned int recovered_unused_stack_0)

{
  thunk_FUN_104df920(*param_1,param_1[1],param_1);
  return;
}


// Reference entry 104e5c00; body size 54 bytes.
#line 1 "ENTRY_104e5c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e5c00(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int *)(*(int *)(param_1 + 0xc) + param_3 * 8));
  if ((int *)piVar1[1] != (int *)((param_2))) {
    if ((int *)*piVar1 == (int *)(((param_2)))) {
      *piVar1 = (int)(*param_2);
    }
    return;
  }
  if ((int *)*piVar1 == (int *)(((param_2)))) {
    iVar2 = (int)(*(int *)(param_1 + 4));
    *piVar1 = (int)(iVar2);
    piVar1[1] = (int)(iVar2);
    return;
  }
  piVar1[1] = (int)(param_2[1]);
  return;
}


// Reference entry 104e6490; body size 3 bytes.
#line 1 "ENTRY_104e6490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e6490(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e64a0; body size 3 bytes.
#line 1 "ENTRY_104e64a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e64a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e64b0; body size 3 bytes.
#line 1 "ENTRY_104e64b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e64b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e64c0; body size 3 bytes.
#line 1 "ENTRY_104e64c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e64c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e64d0; body size 3 bytes.
#line 1 "ENTRY_104e64d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e64d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e64e0; body size 3 bytes.
#line 1 "ENTRY_104e64e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e64e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e64f0; body size 3 bytes.
#line 1 "ENTRY_104e64f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e64f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e6500; body size 3 bytes.
#line 1 "ENTRY_104e6500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e6500(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e6510; body size 3 bytes.
#line 1 "ENTRY_104e6510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e6510(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e6520; body size 3 bytes.
#line 1 "ENTRY_104e6520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e6520(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e6530; body size 3 bytes.
#line 1 "ENTRY_104e6530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e6530(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e6540; body size 3 bytes.
#line 1 "ENTRY_104e6540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e6540(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e6550; body size 3 bytes.
#line 1 "ENTRY_104e6550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e6550(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e6560; body size 3 bytes.
#line 1 "ENTRY_104e6560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e6560(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e6570; body size 3 bytes.
#line 1 "ENTRY_104e6570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e6570(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e6580; body size 3 bytes.
#line 1 "ENTRY_104e6580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e6580(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e6590; body size 3 bytes.
#line 1 "ENTRY_104e6590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e6590(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e65a0; body size 3 bytes.
#line 1 "ENTRY_104e65a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e65a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e65b0; body size 3 bytes.
#line 1 "ENTRY_104e65b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e65b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e65c0; body size 3 bytes.
#line 1 "ENTRY_104e65c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e65c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e65d0; body size 3 bytes.
#line 1 "ENTRY_104e65d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e65d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e65e0; body size 3 bytes.
#line 1 "ENTRY_104e65e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e65e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e65f0; body size 3 bytes.
#line 1 "ENTRY_104e65f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e65f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e6600; body size 3 bytes.
#line 1 "ENTRY_104e6600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e6600(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e6610; body size 3 bytes.
#line 1 "ENTRY_104e6610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e6610(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e6620; body size 3 bytes.
#line 1 "ENTRY_104e6620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e6620(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e6630; body size 92 bytes.
#line 1 "ENTRY_104e6630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104e6630(uint param_2,int param_3,int *param_4)
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


// Reference entry 104e66b0; body size 92 bytes.
#line 1 "ENTRY_104e66b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104e66b0(uint param_2,int param_3,int *param_4)
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


// Reference entry 104e6730; body size 92 bytes.
#line 1 "ENTRY_104e6730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104e6730(uint param_2,int param_3,int *param_4)
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


// Reference entry 104e67b0; body size 13 bytes.
#line 1 "ENTRY_104e67b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104e67b0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 104e67c0; body size 13 bytes.
#line 1 "ENTRY_104e67c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104e67c0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 104e67d0; body size 13 bytes.
#line 1 "ENTRY_104e67d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104e67d0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 104e67e0; body size 3 bytes.
#line 1 "ENTRY_104e67e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e67e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e67f0; body size 3 bytes.
#line 1 "ENTRY_104e67f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e67f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e6800; body size 3 bytes.
#line 1 "ENTRY_104e6800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e6800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e6810; body size 3 bytes.
#line 1 "ENTRY_104e6810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e6810(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e6820; body size 3 bytes.
#line 1 "ENTRY_104e6820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e6820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e6830; body size 3 bytes.
#line 1 "ENTRY_104e6830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e6830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104e6990; body size 3 bytes.
#line 1 "ENTRY_104e6990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e6990(void)

{
  return;
}


// Reference entry 104e69a0; body size 3 bytes.
#line 1 "ENTRY_104e69a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e69a0(void)

{
  return;
}


// Reference entry 104e69b0; body size 3 bytes.
#line 1 "ENTRY_104e69b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e69b0(void)

{
  return;
}


// Reference entry 104e69c0; body size 3 bytes.
#line 1 "ENTRY_104e69c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104e69c0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 104e69d0; body size 3 bytes.
#line 1 "ENTRY_104e69d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104e69d0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 104e69e0; body size 3 bytes.
#line 1 "ENTRY_104e69e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104e69e0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 104e69f0; body size 3 bytes.
#line 1 "ENTRY_104e69f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104e69f0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 104e6ba0; body size 11 bytes.
#line 1 "ENTRY_104e6ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e6ba0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 104e6bb0; body size 11 bytes.
#line 1 "ENTRY_104e6bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e6bb0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 104e6bc0; body size 11 bytes.
#line 1 "ENTRY_104e6bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e6bc0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 104e6bd0; body size 6 bytes.
#line 1 "ENTRY_104e6bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104e6bd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 104e6be0; body size 6 bytes.
#line 1 "ENTRY_104e6be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104e6be0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 104e6bf0; body size 6 bytes.
#line 1 "ENTRY_104e6bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104e6bf0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 104e6c00; body size 6 bytes.
#line 1 "ENTRY_104e6c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104e6c00(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 104e6c10; body size 6 bytes.
#line 1 "ENTRY_104e6c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104e6c10(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 104e6c20; body size 56 bytes.
#line 1 "ENTRY_104e6c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_104e6c20(uint param_2,char param_3)
{
  int param_1 = (int )this;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)((uint *)(param_1 + (param_2 >> 5) * 4));
  uVar2 = (uint)(1 << ((byte)param_2 & 0x1f));
  if (param_3 != '\0') {
    *puVar1 = (uint)(*puVar1 | uVar2);
    return (int)(param_1);
  }
  *puVar1 = (uint)(~uVar2 & *puVar1);
  return (int)(param_1);
}


// Reference entry 104e6c70; body size 32 bytes.
#line 1 "ENTRY_104e6c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_104e6c70(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(1 << ((byte)param_2 & 0x1f));
  return (undefined4)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)((*(uint *)(param_1 + (param_2 >> 5) * 4) & uVar1) != 0)));
}


// Reference entry 104e70d0; body size 24 bytes.
#line 1 "ENTRY_104e70d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e70d0(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104e1440(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 104e7190; body size 24 bytes.
#line 1 "ENTRY_104e7190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e7190(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_104e1440(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 104e7250; body size 14 bytes.
#line 1 "ENTRY_104e7250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e7250(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4), 0);
  return;
}


// Reference entry 104e7270; body size 14 bytes.
#line 1 "ENTRY_104e7270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e7270(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4), 0);
  return;
}


// Reference entry 104e7290; body size 14 bytes.
#line 1 "ENTRY_104e7290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e7290(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4), 0);
  return;
}


// Reference entry 104e72b0; body size 13 bytes.
#line 1 "ENTRY_104e72b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e72b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 104e72c0; body size 13 bytes.
#line 1 "ENTRY_104e72c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e72c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 104e72d0; body size 13 bytes.
#line 1 "ENTRY_104e72d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e72d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 104e72e0; body size 13 bytes.
#line 1 "ENTRY_104e72e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e72e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 104e72f0; body size 12 bytes.
#line 1 "ENTRY_104e72f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e72f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104e7300; body size 12 bytes.
#line 1 "ENTRY_104e7300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e7300(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104e7310; body size 12 bytes.
#line 1 "ENTRY_104e7310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e7310(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104e7320; body size 11 bytes.
#line 1 "ENTRY_104e7320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e7320(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 104e7330; body size 11 bytes.
#line 1 "ENTRY_104e7330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e7330(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 104e7340; body size 11 bytes.
#line 1 "ENTRY_104e7340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e7340(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 104e7350; body size 11 bytes.
#line 1 "ENTRY_104e7350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e7350(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 104e7360; body size 114 bytes.
#line 1 "ENTRY_104e7360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_104e7360(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)param_2[2] != (undefined1 *)(((0x0)))) {
    puVar4 = (undefined1 *)((undefined1 *)param_2[2]);
  }
  uVar3 = (uint)(thunk_FUN_101c82e0(puVar4), 0);
  piVar1 = (int *)((int *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 0x18) & uVar3) * 8));
  if ((int *)piVar1[1] == (int *)((param_2))) {
    if ((int *)*piVar1 == (int *)(((param_2)))) {
      iVar2 = (int)(*(int *)(param_1 + 4));
      *piVar1 = (int)(iVar2);
      piVar1[1] = (int)(iVar2);
    }
    else {
      piVar1[1] = (int)(param_2[1]);
    }
  }
  else if ((int *)*piVar1 == (int *)(((param_2)))) {
    *piVar1 = (int)(*param_2);
  }
  iVar2 = (int)(*param_2);
  *(int*)(param_1 + 8) = (int)(*(int *)(param_1 + 8) + -1);
  *(int*)param_2[1] = (int)((int)(iVar2));
  *(int*)(iVar2 + 4) = (int)(param_2[1]);
  thunk_FUN_104e0aa0(param_1 + 4,param_2);
  return (int)(iVar2);
}


// Reference entry 104e73f0; body size 77 bytes.
#line 1 "ENTRY_104e73f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104e73f0(int *param_2,int *param_3)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if ((int *)(param_2) != (int *)(param_3)) {
    puVar1 = (undefined4 *)((undefined4 *)param_2[1]);
    iVar3 = (int)(0);
    *puVar1 = (undefined4)(param_3);
    param_3[1] = (int)((int)puVar1);
    do {
      piVar2 = (int *)((int *)*param_2);
      thunk_FUN_104e3e20();
      thunk_FUN_1148a50e(param_2,0x14);
      iVar3 = (int)(iVar3 + 1);
      param_2 = (int *)(piVar2);
    } while ((int *)(piVar2) != (int *)(param_3));
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) - iVar3);
  }
  return (int *)(param_3);
}


// Reference entry 104e7450; body size 39 bytes.
#line 1 "ENTRY_104e7450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_104e7450(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -1);
  *(int*)param_2[1] = (int)((int)(iVar1));
  *(int*)(iVar1 + 4) = (int)(param_2[1]);
  thunk_FUN_104e0aa0(param_1,param_2);
  return (int)(iVar1);
}


// Reference entry 104e7480; body size 43 bytes.
#line 1 "ENTRY_104e7480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e7480(int param_1,int param_2,int param_3)

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


// Reference entry 104e74c0; body size 43 bytes.
#line 1 "ENTRY_104e74c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e74c0(int param_1,int param_2,int param_3)

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


// Reference entry 104e7500; body size 43 bytes.
#line 1 "ENTRY_104e7500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e7500(int param_1,int param_2,int param_3)

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


// Reference entry 104e7540; body size 3 bytes.
#line 1 "ENTRY_104e7540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e7540(void)

{
  return;
}


// Reference entry 104e7550; body size 3 bytes.
#line 1 "ENTRY_104e7550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104e7550(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 104e7820; body size 87 bytes.
#line 1 "ENTRY_104e7820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104e7820(uint param_1)

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


// Reference entry 104e7890; body size 90 bytes.
#line 1 "ENTRY_104e7890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104e7890(uint param_1)

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


// Reference entry 104e7910; body size 90 bytes.
#line 1 "ENTRY_104e7910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104e7910(uint param_1)

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


// Reference entry 104e7a00; body size 87 bytes.
#line 1 "ENTRY_104e7a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104e7a00(uint param_1)

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


// Reference entry 104e7a70; body size 87 bytes.
#line 1 "ENTRY_104e7a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104e7a70(uint param_1)

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


// Reference entry 104e7ae0; body size 87 bytes.
#line 1 "ENTRY_104e7ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104e7ae0(uint param_1)

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


// Reference entry 104e7b50; body size 87 bytes.
#line 1 "ENTRY_104e7b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104e7b50(uint param_1)

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


// Reference entry 104e7bc0; body size 14 bytes.
#line 1 "ENTRY_104e7bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e7bc0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4), 0);
  return;
}


// Reference entry 104e7be0; body size 13 bytes.
#line 1 "ENTRY_104e7be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e7be0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 104e7bf0; body size 11 bytes.
#line 1 "ENTRY_104e7bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104e7bf0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 104e9650; body size 35 bytes.
#line 1 "ENTRY_104e9650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_104e9650(undefined4 *param_2)
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


// Reference entry 104e9680; body size 35 bytes.
#line 1 "ENTRY_104e9680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_104e9680(undefined4 *param_2)
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


// Reference entry 104e96b0; body size 35 bytes.
#line 1 "ENTRY_104e96b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_104e96b0(undefined4 *param_2)
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


// Reference entry 104e96e0; body size 4 bytes.
#line 1 "ENTRY_104e96e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e96e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 104e96f0; body size 4 bytes.
#line 1 "ENTRY_104e96f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e96f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 104e9700; body size 4 bytes.
#line 1 "ENTRY_104e9700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104e9700(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 104e9710; body size 9 bytes.
#line 1 "ENTRY_104e9710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104e9710(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 104e9720; body size 9 bytes.
#line 1 "ENTRY_104e9720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104e9720(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 104e9730; body size 358 bytes.
#line 1 "ENTRY_104e9730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104e9730(int param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  
  iVar1 = (int)(param_1 + 8);
  if ((*(char **)(param_1 + 0x1c) == (char *)((0x0))) || (**(char **)(param_1 + 0x1c) == '\0')) {
    bVar2 = (bool)(false);
  }
  else {
    bVar2 = (bool)(true);
  }
  cVar3 = (char)(thunk_FUN_110a5ba0(iVar1,"object.container.album.musicAlbum"), 0);
  if (cVar3 != '\0') {
    return (undefined4)(0);
  }
  cVar3 = (char)(thunk_FUN_110a5ba0(iVar1,"object.container.playlistContainer"), 0);
  if (cVar3 != '\0') {
    return (undefined4)(2);
  }
  cVar3 = (char)(thunk_FUN_110a5ba0(iVar1,"object.item.audioItem.audioBroadcast"), 0);
  if (cVar3 != '\0') {
    return (undefined4)(5);
  }
  cVar3 = (char)(thunk_FUN_110a5ba0(iVar1,"object.container.radioShow"), 0);
  if (cVar3 == '\0') {
    cVar3 = (char)(thunk_FUN_110a5ba0(iVar1,"object.item.audioItem.show"), 0);
    if (cVar3 == '\0') {
      cVar3 = (char)(thunk_FUN_110a5ba0(iVar1,"object.item.audioItem.audioBook"), 0);
      if (cVar3 != '\0') {
        return (undefined4)(6);
      }
      cVar3 = (char)(thunk_FUN_110a5ba0(iVar1,"object.item.audioItem.linein"), 0);
      if (cVar3 != '\0') {
        return (undefined4)(7);
      }
      cVar3 = (char)(thunk_FUN_110a5ba0(iVar1,"object.container.podcast"), 0);
      if (cVar3 != '\0') {
        return (undefined4)(10);
      }
      cVar3 = (char)(thunk_FUN_110a5ba0(iVar1,"object.item.audioItem.podcast"), 0);
      if (cVar3 == '\0') {
        cVar3 = (char)(thunk_FUN_110a5ba0(iVar1,"object.item.audioItem.musicTrack.recentShow"), 0);
        if (cVar3 == '\0') {
          cVar3 = (char)(thunk_FUN_110a5ba0(iVar1,"object.item.audioItem.musicTrack"), 0);
          if (cVar3 == '\0') {
            cVar3 = (char)(thunk_FUN_110a5ba0(iVar1,"object.item.audioItem"), 0);
            if (cVar3 == '\0') {
              cVar3 = (char)(thunk_FUN_110a5ba0(iVar1,"object.container"), 0);
              if ((cVar3 != '\0') && (!bVar2)) {
                return (undefined4)(3);
              }
              return (undefined4)(8);
            }
          }
          return (undefined4)(1);
        }
      }
      return (undefined4)(9);
    }
  }
  return (undefined4)(4);
}


// Reference entry 104e9a10; body size 68 bytes.
#line 1 "ENTRY_104e9a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104e9a10(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = (int *)((int *)(param_1 + 4));
    iStack_4 = (int)(param_1);
    thunk_FUN_104e0760(piVar1,*(undefined4 *)(param_1 + 4));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_104e1f30(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 104e9b00; body size 68 bytes.
#line 1 "ENTRY_104e9b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104e9b00(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = (int *)((int *)(param_1 + 4));
    iStack_4 = (int)(param_1);
    thunk_FUN_104e0880(piVar1,*(undefined4 *)(param_1 + 4));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_104e2030(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 104e9d30; body size 54 bytes.
#line 1 "ENTRY_104e9d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e9d30(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 104e9d80; body size 57 bytes.
#line 1 "ENTRY_104e9d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e9d80(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 104e9dd0; body size 57 bytes.
#line 1 "ENTRY_104e9dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e9dd0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 104e9e20; body size 57 bytes.
#line 1 "ENTRY_104e9e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104e9e20(int param_1,int param_2)

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


// Reference entry 104e9e70; body size 60 bytes.
#line 1 "ENTRY_104e9e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104e9e70(int param_1,int param_2)

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


// Reference entry 104e9ec0; body size 60 bytes.
#line 1 "ENTRY_104e9ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104e9ec0(int param_1,int param_2)

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


// Reference entry 104e9fb0; body size 61 bytes.
#line 1 "ENTRY_104e9fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104e9fb0(int param_1,int param_2)

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


// Reference entry 104ea000; body size 61 bytes.
#line 1 "ENTRY_104ea000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104ea000(int param_1,int param_2)

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


// Reference entry 104ea050; body size 61 bytes.
#line 1 "ENTRY_104ea050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104ea050(int param_1,int param_2)

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


// Reference entry 104ea100; body size 8 bytes.
#line 1 "ENTRY_104ea100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104ea100(int param_1)

{
  return (bool)(*(int *)(param_1 + 8) == 0);
}


// Reference entry 104ea110; body size 8 bytes.
#line 1 "ENTRY_104ea110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104ea110(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 104ea120; body size 9 bytes.
#line 1 "ENTRY_104ea120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104ea120(int *param_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*param_1 == (int)((param_1))[1])));
}


// Reference entry 104ea130; body size 12 bytes.
#line 1 "ENTRY_104ea130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104ea130(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104ea140; body size 12 bytes.
#line 1 "ENTRY_104ea140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104ea140(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104ea150; body size 12 bytes.
#line 1 "ENTRY_104ea150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104ea150(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104ea160; body size 11 bytes.
#line 1 "ENTRY_104ea160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104ea160(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 104ea170; body size 11 bytes.
#line 1 "ENTRY_104ea170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104ea170(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 104ea180; body size 11 bytes.
#line 1 "ENTRY_104ea180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104ea180(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 104ea1a0; body size 126 bytes.
#line 1 "ENTRY_104ea1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_104ea1a0(int param_2)
{
  int param_1 = (int )this;
  bool bVar1;
  uint in_EAX;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  
  if (param_2 != 0) {
    bVar1 = (bool)(((SCStr *)((SCStr *)(param_1 + 8)))->op_eq((SCStr *)(param_2 + 8)), 0);
    in_EAX = (uint)(((uint)(extraout_var) << 8 | (uint)(bVar1)));
    if (bVar1) {
      bVar1 = (bool)(((SCStr *)((SCStr *)(param_1 + 0xc)))->op_eq((SCStr *)(param_2 + 0xc)), 0);
      in_EAX = (uint)(((uint)(extraout_var_00) << 8 | (uint)(bVar1)));
      if (bVar1) {
        bVar1 = (bool)(((SCStr *)((SCStr *)(param_1 + 0x10)))->op_eq((SCStr *)(param_2 + 0x10)), 0);
        in_EAX = (uint)(((uint)(extraout_var_01) << 8 | (uint)(bVar1)));
        if (bVar1) {
          in_EAX = (uint)(thunk_FUN_1106df60(param_2 + 0x14), 0);
          if ((char)in_EAX != '\0') {
            in_EAX = (uint)(thunk_FUN_1106df60(param_2 + 0xb0), 0);
            if (((char)in_EAX != '\0') &&
               (in_EAX = (uint)(*(uint *)(param_1 + 0x14c)),(uint)( in_EAX) == *(uint *)(param_2 + 0x14c))) {
              return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
            }
          }
        }
      }
    }
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 104ea350; body size 4 bytes.
#line 1 "ENTRY_104ea350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104ea350(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 104ea560; body size 4 bytes.
#line 1 "ENTRY_104ea560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104ea560(int param_1)

{
  return (int)(param_1 + 4);
}


// Reference entry 104eadd0; body size 24 bytes.
#line 1 "ENTRY_104eadd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104eadd0(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x260)) {
  case 0:
    return (undefined4)(2000);
  case 1:
    return (undefined4)(5000);
  case 2:
    return (undefined4)(10000);
  case 3:
    return (undefined4)(15000);
  case 4:
    return (undefined4)(30000);
  default:
    return (undefined4)(60000);
  }
}


// Reference entry 104eafc0; body size 94 bytes.
#line 1 "ENTRY_104eafc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104eafc0(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  uVar2 = (uint)(0);
  piVar4 = (int *)((int *)(param_1 + 0x1c8));
  uVar3 = (uint)(1);
  do {
    if ((*(uint *)(param_2 + (uVar2 >> 5) * 4) & uVar3) != 0) {
      uVar5 = (uint)(0);
      iVar1 = (int)(*piVar4);
      if (piVar4[1] - iVar1 >> 3 != 0) {
        do {
          (**(code **)(**(int **)(iVar1 + uVar5 * 8) + 0x18))(uVar2);
          uVar5 = (uint)(uVar5 + 1);
          iVar1 = (int)(*piVar4);
        } while (uVar5 < (uint)(piVar4[1] - iVar1 >> 3));
      }
    }
    uVar2 = (uint)(uVar2 + 1);
    uVar3 = (uint)(uVar3 << 1 | (uint)((int)uVar3 < 0));
    piVar4 = (int *)(piVar4 + 3);
  } while (uVar2 < 0xc);
  return;
}


// Reference entry 104ec060; body size 83 bytes.
#line 1 "ENTRY_104ec060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ec060(int param_1)

{
  char cVar1;
  
  if ((((param_1 != 0) && (cVar1 = (char)(thunk_FUN_111a0720("RINCON_AssociatedZPUDN"), 0), cVar1 != '\0')) &&
      (cVar1 = (char)(thunk_FUN_110a5ba0(param_1 + 0xb8,"object.container.playlistContainer"), 0), cVar1 != '\0')) && (cVar1 = (char)(thunk_FUN_111a0e70(&DAT_118823e4), 0), cVar1 != '\0')) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 104ec0d0; body size 26 bytes.
#line 1 "ENTRY_104ec0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104ec0d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*(int *)(uint)(DAT_122f55e4) + 4))(param_1,param_2,param_3);
  return;
}


// Reference entry 104ec0f0; body size 3 bytes.
#line 1 "ENTRY_104ec0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_104ec0f0(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 104ec100; body size 3 bytes.
#line 1 "ENTRY_104ec100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_104ec100(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 104ec110; body size 3 bytes.
#line 1 "ENTRY_104ec110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_104ec110(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 104ec120; body size 6 bytes.
#line 1 "ENTRY_104ec120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ec120(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 104ec130; body size 6 bytes.
#line 1 "ENTRY_104ec130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ec130(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 104ec140; body size 6 bytes.
#line 1 "ENTRY_104ec140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ec140(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 104ec150; body size 6 bytes.
#line 1 "ENTRY_104ec150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ec150(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 104ec160; body size 6 bytes.
#line 1 "ENTRY_104ec160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ec160(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 104ec170; body size 6 bytes.
#line 1 "ENTRY_104ec170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ec170(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 104ec180; body size 6 bytes.
#line 1 "ENTRY_104ec180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ec180(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 104ec190; body size 6 bytes.
#line 1 "ENTRY_104ec190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ec190(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 104ec1a0; body size 6 bytes.
#line 1 "ENTRY_104ec1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ec1a0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 104ec1b0; body size 6 bytes.
#line 1 "ENTRY_104ec1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ec1b0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 104ec1c0; body size 6 bytes.
#line 1 "ENTRY_104ec1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ec1c0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 104ec1d0; body size 6 bytes.
#line 1 "ENTRY_104ec1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ec1d0(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 104ec1e0; body size 6 bytes.
#line 1 "ENTRY_104ec1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ec1e0(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 104ec1f0; body size 6 bytes.
#line 1 "ENTRY_104ec1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ec1f0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 104ec200; body size 6 bytes.
#line 1 "ENTRY_104ec200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ec200(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 104ec210; body size 6 bytes.
#line 1 "ENTRY_104ec210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ec210(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 104eca10; body size 5 bytes.
#line 1 "ENTRY_104eca10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104eca10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104eca20; body size 5 bytes.
#line 1 "ENTRY_104eca20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104eca20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104eca30; body size 5 bytes.
#line 1 "ENTRY_104eca30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104eca30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104eca40; body size 3 bytes.
#line 1 "ENTRY_104eca40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104eca40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104eca50; body size 3 bytes.
#line 1 "ENTRY_104eca50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104eca50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104eca60; body size 3 bytes.
#line 1 "ENTRY_104eca60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104eca60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104eced0; body size 28 bytes.
#line 1 "ENTRY_104eced0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104eced0(undefined4 *param_1)

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


// Reference entry 104ed2b0; body size 9 bytes.
#line 1 "ENTRY_104ed2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104ed2b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104ed5c0; body size 8 bytes.
#line 1 "ENTRY_104ed5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104ed5c0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)(param_1 + 0x3c));
  if ((int *)((param_2)) != (int *)(piVar3)) {
    iVar1 = (int)(*piVar3);
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0), iVar2 == 0)) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
    iVar1 = (int)(*param_2);
    *piVar3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
    }
  }
  return (int *)(piVar3);
}


// Reference entry 104ed5d0; body size 8 bytes.
#line 1 "ENTRY_104ed5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104ed5d0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)(param_1 + 8));
  if ((int *)((param_2)) != (int *)(piVar3)) {
    iVar1 = (int)(*piVar3);
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0), iVar2 == 0)) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
    iVar1 = (int)(*param_2);
    *piVar3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
    }
  }
  return (int *)(piVar3);
}


// Reference entry 104ed5e0; body size 4 bytes.
#line 1 "ENTRY_104ed5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104ed5e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 104ed5f0; body size 9 bytes.
#line 1 "ENTRY_104ed5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104ed5f0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 104ed600; body size 9 bytes.
#line 1 "ENTRY_104ed600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104ed600(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 104ed610; body size 9 bytes.
#line 1 "ENTRY_104ed610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104ed610(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 104ed620; body size 4 bytes.
#line 1 "ENTRY_104ed620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104ed620(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 104ed630; body size 9 bytes.
#line 1 "ENTRY_104ed630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104ed630(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 104ed640; body size 9 bytes.
#line 1 "ENTRY_104ed640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104ed640(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 104ed680; body size 78 bytes.
#line 1 "ENTRY_104ed680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104ed680(int *param_2)
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


// Reference entry 104ed6f0; body size 27 bytes.
#line 1 "ENTRY_104ed6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104ed6f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 104ed720; body size 16 bytes.
#line 1 "ENTRY_104ed720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104ed720(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104ed7c0; body size 9 bytes.
#line 1 "ENTRY_104ed7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104ed7c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIActionContext);
  return (undefined4 *)(param_1);
}


// Reference entry 104ed7d0; body size 93 bytes.
#line 1 "ENTRY_104ed7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104ed7d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  *(undefined1*)(param_1 + 10) = (undefined1)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInteractionActionContext);
  return (undefined4 *)(param_1);
}


// Reference entry 104ed850; body size 19 bytes.
#line 1 "ENTRY_104ed850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104ed850(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 104ed980; body size 7 bytes.
#line 1 "ENTRY_104ed980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104ed980(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 104ed990; body size 11 bytes.
#line 1 "ENTRY_104ed990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104ed990(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInteractionActionContext);

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


// Reference entry 104eda10; body size 3 bytes.
#line 1 "ENTRY_104eda10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104eda10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104ee050; body size 7 bytes.
#line 1 "ENTRY_104ee050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104ee050(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 104ee060; body size 7 bytes.
#line 1 "ENTRY_104ee060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104ee060(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 104ee070; body size 7 bytes.
#line 1 "ENTRY_104ee070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104ee070(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104ee080; body size 7 bytes.
#line 1 "ENTRY_104ee080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104ee080(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104ee090; body size 7 bytes.
#line 1 "ENTRY_104ee090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104ee090(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104ee650; body size 34 bytes.
#line 1 "ENTRY_104ee650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_104ee650(int *param_1,undefined4 *param_2)

{
  (*(code *)*param_2)(*(int *)(*param_1 + 4) + (int)param_1,param_2[2],param_2[3]);
  return (int *)(param_1);
}


// Reference entry 104eeaa0; body size 67 bytes.
#line 1 "ENTRY_104eeaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104eeaa0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  void *_Dst;
  
  pcVar2 = (char *)(param_1);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  pcVar2 = (char *)(pcVar2 + (1 - (int)(param_1 + 1)));
  _Dst = (void *)(calloc((size_t)pcVar2,1), 0);
  if ((void *)(_Dst) != (void *)(0x0)) {
    if ((char *)(pcVar2) != (char *)(0x0)) {
      memcpy(_Dst,param_1,(size_t)pcVar2);
    }
    return (void *)(_Dst);
  }
                    
  std::_Xbad_alloc();
}


// Reference entry 104eec00; body size 5 bytes.
#line 1 "ENTRY_104eec00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104eec00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104eec10; body size 5 bytes.
#line 1 "ENTRY_104eec10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104eec10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104eec20; body size 5 bytes.
#line 1 "ENTRY_104eec20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104eec20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104eec40; body size 16 bytes.
#line 1 "ENTRY_104eec40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint * FUN_104eec40(uint *param_1,uint *param_2)

{
  if (*param_1 < (uint)(*(param_2))) {
    param_1 = (uint *)(param_2);
  }
  return (uint *)(param_1);
}


// Reference entry 104eec60; body size 48 bytes.
#line 1 "ENTRY_104eec60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104eec60(int *param_2)
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
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 104eeca0; body size 48 bytes.
#line 1 "ENTRY_104eeca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104eeca0(int *param_2)
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
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 104eece0; body size 11 bytes.
#line 1 "ENTRY_104eece0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104eece0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104eecf0; body size 11 bytes.
#line 1 "ENTRY_104eecf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104eecf0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104eedf0; body size 22 bytes.
#line 1 "ENTRY_104eedf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_104eedf0(undefined1 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0xf);
  *param_1 = (undefined1)(0);
  return (undefined1 *)(param_1);
}


// Reference entry 104eee10; body size 88 bytes.
#line 1 "ENTRY_104eee10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ basic_streambuf<char,std::char_traits<char>> * __thiscall Recovered_Bulk::m_FUN_104eee10(uint param_2)
{
  basic_streambuf<char,std::char_traits<char>> *param_1 = (basic_streambuf<char,std::char_traits<char>> *)this;
  uint uVar1;
  uint uVar2;
  
  ((std::basic_streambuf<> *)(param_1))->m_op_ctor();
  *(undefined***)param_1 = (undefined **)((basic_streambuf<char,std::char_traits<char>> *)((uint)&ghidra_vftable_std_basic_stringbuf));
  *(undefined4*)(param_1 + 0x38) = (undefined4)(0);
  uVar2 = (uint)((~param_2 & 1) << 2);
  uVar1 = (uint)(uVar2 | 2);
  if ((param_2 & 2) != 0) {
    uVar1 = (uint)(uVar2);
  }
  uVar2 = (uint)(uVar1 | 8);
  if ((param_2 & 8) == 0) {
    uVar2 = (uint)(uVar1);
  }
  uVar1 = (uint)(uVar2 | 0x10);
  if ((param_2 & 4) == 0) {
    uVar1 = (uint)(uVar2);
  }
  *(uint*)(param_1 + 0x3c) = (uint)(uVar1);
  return (basic_streambuf<char,std::char_traits<char>> *)(param_1);
}


// Reference entry 104eee80; body size 40 bytes.
#line 1 "ENTRY_104eee80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104eee80(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  *(undefined8*)(param_1 + 4) = (undefined8)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104eeec0; body size 33 bytes.
#line 1 "ENTRY_104eeec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104eeec0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  piVar1 = (int *)(*(int **)(*(int *)(*param_2 + 4) + 0x38 + (int)param_2), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104ef1a0; body size 42 bytes.
#line 1 "ENTRY_104ef1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104ef1a0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)*param_1);
  if ((int *)(piVar2) != (int *)(0x0)) {
    *param_1 = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 104ef1e0; body size 14 bytes.
#line 1 "ENTRY_104ef1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_104ef1e0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 104ef200; body size 14 bytes.
#line 1 "ENTRY_104ef200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_104ef200(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 104ef220; body size 12 bytes.
#line 1 "ENTRY_104ef220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined8 __fastcall FUN_104ef220(uint *param_1)

{
  return (undefined8)(((unsigned long long)(param_1[3] + param_1[1] + (uint)((uint)(param_1[2]) + (uint)(*param_1) < (uint)(param_1[2]))) << 32 | (unsigned long long)(param_1[2] + *param_1)));
}


// Reference entry 104ef230; body size 4 bytes.
#line 1 "ENTRY_104ef230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_104ef230(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 4));
}


// Reference entry 104ef240; body size 3 bytes.
#line 1 "ENTRY_104ef240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104ef240(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104ef250; body size 3 bytes.
#line 1 "ENTRY_104ef250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104ef250(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104ef260; body size 5 bytes.
#line 1 "ENTRY_104ef260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_104ef260(int *param_1)

{
  *param_1 = (int)(*param_1 + 1);
  return (int *)(param_1);
}


// Reference entry 104ef360; body size 66 bytes.
#line 1 "ENTRY_104ef360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ef360(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  iVar2 = (int)(strncmp(param_1,param_2,(int)pcVar3 - (int)(param_2 + 1)), 0);
  if (iVar2 == 0) {
    if ((param_1[(int)pcVar3 - (int)(param_2 + 1)] == '.') ||
       (param_1[(int)pcVar3 - (int)(param_2 + 1)] == '\0')) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 104ef3c0; body size 3 bytes.
#line 1 "ENTRY_104ef3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104ef3c0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 104ef3d0; body size 52 bytes.
#line 1 "ENTRY_104ef3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_104ef3d0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)((~param_1 & 1) << 2);
  uVar1 = (uint)(uVar2 | 2);
  if ((param_1 & 2) != 0) {
    uVar1 = (uint)(uVar2);
  }
  uVar2 = (uint)(uVar1 | 8);
  if ((param_1 & 8) == 0) {
    uVar2 = (uint)(uVar1);
  }
  uVar1 = (uint)(uVar2 | 0x10);
  if ((param_1 & 4) == 0) {
    uVar1 = (uint)(uVar2);
  }
  return (uint)(uVar1);
}


// Reference entry 104efe20; body size 17 bytes.
#line 1 "ENTRY_104efe20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104efe20(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)((undefined4 *)*param_1);
  }
  *param_2 = (undefined4)(param_1);
  return;
}


// Reference entry 104effe0; body size 8 bytes.
#line 1 "ENTRY_104effe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_104effe0(uint *param_1)

{
  return (uint)(*param_1 >> 3 & 0xffffff01);
}


// Reference entry 104efff0; body size 24 bytes.
#line 1 "ENTRY_104efff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104efff0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)((undefined4 *)*param_1);
  }
  *param_2 = (int)(param_1[4] + (int)puVar1);
  return;
}


// Reference entry 104f0010; body size 4 bytes.
#line 1 "ENTRY_104f0010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f0010(void)

{
  return (undefined4)(0xffffffff);
}


// Reference entry 104f0020; body size 16 bytes.
#line 1 "ENTRY_104f0020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_104f0020(char *param_1,char *param_2)

{
  return (bool)(*param_1 == (char)(*(param_2)));
}


// Reference entry 104f0040; body size 16 bytes.
#line 1 "ENTRY_104f0040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_104f0040(int *param_1,int *param_2)

{
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 104f6590; body size 3 bytes.
#line 1 "ENTRY_104f6590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104f6590(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104f6750; body size 23 bytes.
#line 1 "ENTRY_104f6750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f6750(int param_1)

{
  *(uint*)(param_1 + 0x14) = (uint)(*(uint *)(param_1 + 0x14) & 0xfffff9ff | 0x800);
  return;
}


// Reference entry 104f68f0; body size 20 bytes.
#line 1 "ENTRY_104f68f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f68f0(int param_1)

{
  if ((param_1 != 0xc) && (param_1 != 9)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 104f6a30; body size 15 bytes.
#line 1 "ENTRY_104f6a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_104f6a30(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  if (iVar1 == -1) {
    iVar1 = (int)(0);
  }
  return (int)(iVar1);
}


// Reference entry 104f6d30; body size 5 bytes.
#line 1 "ENTRY_104f6d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f6d30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f7050; body size 8 bytes.
#line 1 "ENTRY_104f7050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104f7050(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)(param_1 + 4));
  if ((int *)((param_2)) != (int *)(piVar3)) {
    iVar1 = (int)(*piVar3);
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0), iVar2 == 0)) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
    iVar1 = (int)(*param_2);
    *piVar3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
    }
  }
  return (int *)(piVar3);
}


// Reference entry 104f7060; body size 8 bytes.
#line 1 "ENTRY_104f7060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104f7060(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)(param_1 + 0x50));
  if ((int *)((param_2)) != (int *)(piVar3)) {
    iVar1 = (int)(*piVar3);
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0), iVar2 == 0)) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
    iVar1 = (int)(*param_2);
    *piVar3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
    }
  }
  return (int *)(piVar3);
}


// Reference entry 104f7070; body size 8 bytes.
#line 1 "ENTRY_104f7070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104f7070(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)(param_1 + 0x38));
  if ((int *)((param_2)) != (int *)(piVar3)) {
    iVar1 = (int)(*piVar3);
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0), iVar2 == 0)) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
    iVar1 = (int)(*param_2);
    *piVar3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
    }
  }
  return (int *)(piVar3);
}


// Reference entry 104f7080; body size 8 bytes.
#line 1 "ENTRY_104f7080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104f7080(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)(param_1 + 0x44));
  if ((int *)((param_2)) != (int *)(piVar3)) {
    iVar1 = (int)(*piVar3);
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0), iVar2 == 0)) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
    iVar1 = (int)(*param_2);
    *piVar3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
    }
  }
  return (int *)(piVar3);
}


// Reference entry 104f77e0; body size 3 bytes.
#line 1 "ENTRY_104f77e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104f77e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f7990; body size 7 bytes.
#line 1 "ENTRY_104f7990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_104f7990(undefined1 *param_1)

{
  return (undefined1)(*param_1);
}


// Reference entry 104f79a0; body size 8 bytes.
#line 1 "ENTRY_104f79a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_104f79a0(undefined1 *param_1)

{
  return (undefined1)(*param_1);
}


// Reference entry 104f7a20; body size 80 bytes.
#line 1 "ENTRY_104f7a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * FUN_104f7a20(SCStr *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)(0);
  uVar1 = (uint)(0);
  do {
    if ((int)(param_2) == *(int *)((int)&DAT_118ab760 + uVar1)) {
      ((SCStr *)(param_1))->int_allocRep((&PTR_s_object_item_audioItem_audioBook__118ab75c)[iVar2 * 5]);
      return (SCStr *)(param_1);
    }
    uVar1 = (uint)(uVar1 + 0x14);
    iVar2 = (int)(iVar2 + 1);
  } while (uVar1 < 0x1b8);
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 104f8000; body size 15 bytes.
#line 1 "ENTRY_104f8000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f8000(void *param_1,void *param_2,int param_3)

{
                    
                    
  memcpy(param_1,param_2,param_3 * 2);
  return;
}


// Reference entry 104f8020; body size 25 bytes.
#line 1 "ENTRY_104f8020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104f8020(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104f8040; body size 18 bytes.
#line 1 "ENTRY_104f8040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104f8040(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104f8060; body size 25 bytes.
#line 1 "ENTRY_104f8060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104f8060(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104f8080; body size 22 bytes.
#line 1 "ENTRY_104f8080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104f8080(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104f80a0; body size 22 bytes.
#line 1 "ENTRY_104f80a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104f80a0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104f80c0; body size 18 bytes.
#line 1 "ENTRY_104f80c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104f80c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104f8240; body size 18 bytes.
#line 1 "ENTRY_104f8240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104f8240(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104f8260; body size 25 bytes.
#line 1 "ENTRY_104f8260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104f8260(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104f8280; body size 25 bytes.
#line 1 "ENTRY_104f8280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104f8280(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104f82a0; body size 38 bytes.
#line 1 "ENTRY_104f82a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_104f82a0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 104f82d0; body size 28 bytes.
#line 1 "ENTRY_104f82d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_104f82d0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_3);
  param_1[4] = (SCStr)((SCStr)0x0);
  return (SCStr *)(param_1);
}


// Reference entry 104f8300; body size 22 bytes.
#line 1 "ENTRY_104f8300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104f8300(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104f8320; body size 22 bytes.
#line 1 "ENTRY_104f8320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104f8320(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104f8340; body size 5 bytes.
#line 1 "ENTRY_104f8340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104f8340(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f8350; body size 5 bytes.
#line 1 "ENTRY_104f8350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104f8350(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f8360; body size 40 bytes.
#line 1 "ENTRY_104f8360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_104f8360(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 104f83a0; body size 30 bytes.
#line 1 "ENTRY_104f83a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_104f83a0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)*param_2);
  param_1[4] = (SCStr)((SCStr)0x0);
  return (SCStr *)(param_1);
}


// Reference entry 104f8450; body size 26 bytes.
#line 1 "ENTRY_104f8450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104f8450(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 104f8470; body size 91 bytes.
#line 1 "ENTRY_104f8470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104f8470(int *param_2)
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


// Reference entry 104f84f0; body size 91 bytes.
#line 1 "ENTRY_104f84f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104f84f0(int *param_2)
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


// Reference entry 104f8570; body size 3 bytes.
#line 1 "ENTRY_104f8570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f8570(void)

{
  return;
}


// Reference entry 104f8580; body size 25 bytes.
#line 1 "ENTRY_104f8580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f8580(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 104f85a0; body size 13 bytes.
#line 1 "ENTRY_104f85a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f85a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 104f85b0; body size 13 bytes.
#line 1 "ENTRY_104f85b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f85b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 104f85c0; body size 13 bytes.
#line 1 "ENTRY_104f85c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f85c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 104f85d0; body size 13 bytes.
#line 1 "ENTRY_104f85d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f85d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 104f85e0; body size 13 bytes.
#line 1 "ENTRY_104f85e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f85e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 104f85f0; body size 3 bytes.
#line 1 "ENTRY_104f85f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f85f0(void)

{
  return;
}


// Reference entry 104f8600; body size 3 bytes.
#line 1 "ENTRY_104f8600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f8600(void)

{
  return;
}


// Reference entry 104f8610; body size 3 bytes.
#line 1 "ENTRY_104f8610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f8610(void)

{
  return;
}


// Reference entry 104f8620; body size 3 bytes.
#line 1 "ENTRY_104f8620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f8620(void)

{
  return;
}


// Reference entry 104f86d0; body size 39 bytes.
#line 1 "ENTRY_104f86d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104f86d0(undefined4 *param_2)
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


// Reference entry 104f8700; body size 18 bytes.
#line 1 "ENTRY_104f8700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104f8700(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 104f8720; body size 39 bytes.
#line 1 "ENTRY_104f8720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104f8720(undefined4 *param_2)
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


// Reference entry 104f8750; body size 39 bytes.
#line 1 "ENTRY_104f8750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104f8750(undefined4 *param_2)
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


// Reference entry 104f8d60; body size 15 bytes.
#line 1 "ENTRY_104f8d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f8d60(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x10);
  return;
}


// Reference entry 104f8d80; body size 15 bytes.
#line 1 "ENTRY_104f8d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f8d80(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 104f8ec0; body size 7 bytes.
#line 1 "ENTRY_104f8ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f8ec0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104f8ed0; body size 7 bytes.
#line 1 "ENTRY_104f8ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f8ed0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104f8ee0; body size 5 bytes.
#line 1 "ENTRY_104f8ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f8ee0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f8ef0; body size 5 bytes.
#line 1 "ENTRY_104f8ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f8ef0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f8f00; body size 37 bytes.
#line 1 "ENTRY_104f8f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f8f00(int param_1,SCStr *param_2)

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


// Reference entry 104f8f30; body size 92 bytes.
#line 1 "ENTRY_104f8f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_104f8f30(int *param_1,int *param_2,int *param_3)

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
        (**(code **)(*piVar1 + 8))();
        iVar2 = (int)(*param_1);
      }
      *param_3 = (int)(iVar2);
      piVar1 = (int *)((int *)param_1[1]);
      param_3[1] = (int)((int)piVar1);
      if ((int *)(piVar1) != (int *)(0x0)) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_1 = (int *)(param_1 + 2);
    param_3 = (int *)(param_3 + 2);
  } while ((int *)(param_1) != (int *)(param_2));
  return (int *)(param_3);
}


// Reference entry 104f9340; body size 5 bytes.
#line 1 "ENTRY_104f9340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f9340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f9490; body size 5 bytes.
#line 1 "ENTRY_104f9490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f9490(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f94a0; body size 5 bytes.
#line 1 "ENTRY_104f94a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f94a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f94b0; body size 5 bytes.
#line 1 "ENTRY_104f94b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f94b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f94c0; body size 5 bytes.
#line 1 "ENTRY_104f94c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f94c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f94d0; body size 5 bytes.
#line 1 "ENTRY_104f94d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f94d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f94e0; body size 5 bytes.
#line 1 "ENTRY_104f94e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f94e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f94f0; body size 5 bytes.
#line 1 "ENTRY_104f94f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f94f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f9500; body size 5 bytes.
#line 1 "ENTRY_104f9500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f9500(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f9510; body size 5 bytes.
#line 1 "ENTRY_104f9510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f9510(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f9520; body size 5 bytes.
#line 1 "ENTRY_104f9520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f9520(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f9530; body size 5 bytes.
#line 1 "ENTRY_104f9530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f9530(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f9540; body size 5 bytes.
#line 1 "ENTRY_104f9540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f9540(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f9550; body size 34 bytes.
#line 1 "ENTRY_104f9550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f9550(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  return;
}


// Reference entry 104f9580; body size 24 bytes.
#line 1 "ENTRY_104f9580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f9580(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  param_2[4] = (SCStr)((SCStr)0x0);
  return;
}


// Reference entry 104f95a0; body size 28 bytes.
#line 1 "ENTRY_104f95a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f95a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 104f95d0; body size 28 bytes.
#line 1 "ENTRY_104f95d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f95d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 104f9600; body size 28 bytes.
#line 1 "ENTRY_104f9600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f9600(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 104f98c0; body size 15 bytes.
#line 1 "ENTRY_104f98c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f98c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 104f98e0; body size 15 bytes.
#line 1 "ENTRY_104f98e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f98e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 104f9900; body size 15 bytes.
#line 1 "ENTRY_104f9900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f9900(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 104f99a0; body size 5 bytes.
#line 1 "ENTRY_104f99a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f99a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f99b0; body size 5 bytes.
#line 1 "ENTRY_104f99b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f99b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f99c0; body size 5 bytes.
#line 1 "ENTRY_104f99c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f99c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f99d0; body size 5 bytes.
#line 1 "ENTRY_104f99d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f99d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f99e0; body size 5 bytes.
#line 1 "ENTRY_104f99e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f99e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f99f0; body size 5 bytes.
#line 1 "ENTRY_104f99f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f99f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f9a00; body size 5 bytes.
#line 1 "ENTRY_104f9a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f9a00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f9a10; body size 5 bytes.
#line 1 "ENTRY_104f9a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f9a10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f9a20; body size 5 bytes.
#line 1 "ENTRY_104f9a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f9a20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f9a30; body size 5 bytes.
#line 1 "ENTRY_104f9a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f9a30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f9a40; body size 5 bytes.
#line 1 "ENTRY_104f9a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f9a40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f9a50; body size 6 bytes.
#line 1 "ENTRY_104f9a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_104f9a50(void)

{
  return (char *)("SCIUrlSessionCallback");
}


// Reference entry 104f9a60; body size 5 bytes.
#line 1 "ENTRY_104f9a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f9a60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104f9a70; body size 30 bytes.
#line 1 "ENTRY_104f9a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f9a70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 104f9aa0; body size 28 bytes.
#line 1 "ENTRY_104f9aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104f9aa0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 104f9ad0; body size 27 bytes.
#line 1 "ENTRY_104f9ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104f9ad0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 104f9b00; body size 32 bytes.
#line 1 "ENTRY_104f9b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104f9b00(undefined4 *param_2)
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


// Reference entry 104f9b70; body size 32 bytes.
#line 1 "ENTRY_104f9b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104f9b70(undefined4 *param_2)
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


// Reference entry 104f9ba0; body size 16 bytes.
#line 1 "ENTRY_104f9ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104f9ba0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104f9bc0; body size 32 bytes.
#line 1 "ENTRY_104f9bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104f9bc0(undefined4 *param_2)
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


// Reference entry 104f9c70; body size 32 bytes.
#line 1 "ENTRY_104f9c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104f9c70(undefined4 *param_2)
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


// Reference entry 104f9ce0; body size 32 bytes.
#line 1 "ENTRY_104f9ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104f9ce0(undefined4 *param_2)
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


// Reference entry 104f9d10; body size 9 bytes.
#line 1 "ENTRY_104f9d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104f9d10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104f9d20; body size 18 bytes.
#line 1 "ENTRY_104f9d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104f9d20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104f9d40; body size 18 bytes.
#line 1 "ENTRY_104f9d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104f9d40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104f9e30; body size 11 bytes.
#line 1 "ENTRY_104f9e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104f9e30(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104f9e40; body size 11 bytes.
#line 1 "ENTRY_104f9e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104f9e40(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104f9e50; body size 16 bytes.
#line 1 "ENTRY_104f9e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104f9e50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104f9eb0; body size 11 bytes.
#line 1 "ENTRY_104f9eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104f9eb0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104f9ec0; body size 11 bytes.
#line 1 "ENTRY_104f9ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104f9ec0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104f9f50; body size 11 bytes.
#line 1 "ENTRY_104f9f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104f9f50(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104f9f60; body size 11 bytes.
#line 1 "ENTRY_104f9f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104f9f60(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104f9f70; body size 16 bytes.
#line 1 "ENTRY_104f9f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104f9f70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104f9f90; body size 13 bytes.
#line 1 "ENTRY_104f9f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104f9f90(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104f9fa0; body size 14 bytes.
#line 1 "ENTRY_104f9fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104f9fa0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104f9fc0; body size 21 bytes.
#line 1 "ENTRY_104f9fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104f9fc0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104f9fe0; body size 11 bytes.
#line 1 "ENTRY_104f9fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104f9fe0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104f9ff0; body size 11 bytes.
#line 1 "ENTRY_104f9ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104f9ff0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104fa000; body size 23 bytes.
#line 1 "ENTRY_104fa000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104fa000(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104fa020; body size 23 bytes.
#line 1 "ENTRY_104fa020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104fa020(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104fa040; body size 23 bytes.
#line 1 "ENTRY_104fa040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104fa040(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104fa060; body size 3 bytes.
#line 1 "ENTRY_104fa060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fa060(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fa070; body size 3 bytes.
#line 1 "ENTRY_104fa070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fa070(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fa080; body size 3 bytes.
#line 1 "ENTRY_104fa080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fa080(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fa090; body size 3 bytes.
#line 1 "ENTRY_104fa090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fa090(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fa0d0; body size 52 bytes.
#line 1 "ENTRY_104fa0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104fa0d0(undefined4 *param_1)

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


// Reference entry 104fa1f0; body size 23 bytes.
#line 1 "ENTRY_104fa1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104fa1f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104fa210; body size 23 bytes.
#line 1 "ENTRY_104fa210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104fa210(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104fa540; body size 44 bytes.
#line 1 "ENTRY_104fa540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104fa540(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_104fa330(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentSessionBrowse);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCContentSessionBrowse);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCContentSessionBrowse);
  return (undefined4 *)(param_1);
}


// Reference entry 104fa810; body size 11 bytes.
#line 1 "ENTRY_104fa810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104fa810(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104faee0; body size 3 bytes.
#line 1 "ENTRY_104faee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104faee0(void)

{
  return;
}


// Reference entry 104fb330; body size 25 bytes.
#line 1 "ENTRY_104fb330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104fb330(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentSessionBrowse);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCContentSessionBrowse);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCContentSessionBrowse);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentSession);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCContentSession);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCContentSession);
  if ((int *)param_1[8] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[8] + 0x1c))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[8]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[8] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_104fb0d0();

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = (undefined4)(0);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 104fb550; body size 65 bytes.
#line 1 "ENTRY_104fb550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104fb550(int *param_2)
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


// Reference entry 104fb5b0; body size 65 bytes.
#line 1 "ENTRY_104fb5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104fb5b0(int *param_2)
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


// Reference entry 104fb680; body size 14 bytes.
#line 1 "ENTRY_104fb680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_104fb680(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 104fb6a0; body size 14 bytes.
#line 1 "ENTRY_104fb6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_104fb6a0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 104fb6c0; body size 14 bytes.
#line 1 "ENTRY_104fb6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_104fb6c0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 104fb6e0; body size 14 bytes.
#line 1 "ENTRY_104fb6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_104fb6e0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 104fb700; body size 14 bytes.
#line 1 "ENTRY_104fb700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_104fb700(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 104fb720; body size 14 bytes.
#line 1 "ENTRY_104fb720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_104fb720(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 104fb880; body size 4 bytes.
#line 1 "ENTRY_104fb880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fb880(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 104fb890; body size 3 bytes.
#line 1 "ENTRY_104fb890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fb890(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104fb8a0; body size 3 bytes.
#line 1 "ENTRY_104fb8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fb8a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104fb8b0; body size 7 bytes.
#line 1 "ENTRY_104fb8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104fb8b0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104fb8c0; body size 3 bytes.
#line 1 "ENTRY_104fb8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fb8c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104fb8d0; body size 7 bytes.
#line 1 "ENTRY_104fb8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104fb8d0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104fb8e0; body size 3 bytes.
#line 1 "ENTRY_104fb8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fb8e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104fb8f0; body size 7 bytes.
#line 1 "ENTRY_104fb8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104fb8f0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104fb900; body size 3 bytes.
#line 1 "ENTRY_104fb900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fb900(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104fb910; body size 3 bytes.
#line 1 "ENTRY_104fb910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fb910(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104fb920; body size 3 bytes.
#line 1 "ENTRY_104fb920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fb920(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104fb930; body size 3 bytes.
#line 1 "ENTRY_104fb930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fb930(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104fb940; body size 3 bytes.
#line 1 "ENTRY_104fb940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fb940(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104fb950; body size 3 bytes.
#line 1 "ENTRY_104fb950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fb950(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104fb960; body size 6 bytes.
#line 1 "ENTRY_104fb960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104fb960(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 104fb970; body size 6 bytes.
#line 1 "ENTRY_104fb970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104fb970(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 104fb980; body size 6 bytes.
#line 1 "ENTRY_104fb980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104fb980(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 104fb990; body size 6 bytes.
#line 1 "ENTRY_104fb990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104fb990(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 104fb9a0; body size 6 bytes.
#line 1 "ENTRY_104fb9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104fb9a0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 104fb9b0; body size 6 bytes.
#line 1 "ENTRY_104fb9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104fb9b0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 104fb9c0; body size 3 bytes.
#line 1 "ENTRY_104fb9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fb9c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104fb9d0; body size 3 bytes.
#line 1 "ENTRY_104fb9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fb9d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104fb9e0; body size 9 bytes.
#line 1 "ENTRY_104fb9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104fb9e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 104fb9f0; body size 9 bytes.
#line 1 "ENTRY_104fb9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104fb9f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 104fba90; body size 6 bytes.
#line 1 "ENTRY_104fba90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_104fba90(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 104fbaa0; body size 6 bytes.
#line 1 "ENTRY_104fbaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_104fbaa0(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 104fbab0; body size 10 bytes.
#line 1 "ENTRY_104fbab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_104fbab0(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 104fbfc0; body size 31 bytes.
#line 1 "ENTRY_104fbfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104fbfc0(undefined4 *param_1)

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


// Reference entry 104fbff0; body size 22 bytes.
#line 1 "ENTRY_104fbff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104fbff0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 104fc170; body size 49 bytes.
#line 1 "ENTRY_104fc170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_104fc170(uint param_2)
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


// Reference entry 104fc240; body size 14 bytes.
#line 1 "ENTRY_104fc240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104fc240(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 104fc260; body size 20 bytes.
#line 1 "ENTRY_104fc260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104fc260(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xfffffff) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 104fc280; body size 66 bytes.
#line 1 "ENTRY_104fc280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104fc280(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) + (double)(uint)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(uint)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= (float)((fVar1)) && (float)(fVar1) != *param_1);
}


// Reference entry 104fc2e0; body size 3 bytes.
#line 1 "ENTRY_104fc2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104fc2e0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 104fc3a0; body size 3 bytes.
#line 1 "ENTRY_104fc3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104fc3a0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 104fca20; body size 3 bytes.
#line 1 "ENTRY_104fca20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fca20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fca30; body size 3 bytes.
#line 1 "ENTRY_104fca30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fca30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fca40; body size 3 bytes.
#line 1 "ENTRY_104fca40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fca40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fca50; body size 3 bytes.
#line 1 "ENTRY_104fca50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fca50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fca60; body size 3 bytes.
#line 1 "ENTRY_104fca60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fca60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fca70; body size 3 bytes.
#line 1 "ENTRY_104fca70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fca70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fca80; body size 3 bytes.
#line 1 "ENTRY_104fca80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fca80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fca90; body size 3 bytes.
#line 1 "ENTRY_104fca90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fca90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fcaa0; body size 3 bytes.
#line 1 "ENTRY_104fcaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fcaa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fcab0; body size 3 bytes.
#line 1 "ENTRY_104fcab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fcab0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fcac0; body size 3 bytes.
#line 1 "ENTRY_104fcac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fcac0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fcad0; body size 3 bytes.
#line 1 "ENTRY_104fcad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fcad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fcae0; body size 3 bytes.
#line 1 "ENTRY_104fcae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fcae0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fcaf0; body size 3 bytes.
#line 1 "ENTRY_104fcaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fcaf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fcb00; body size 3 bytes.
#line 1 "ENTRY_104fcb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fcb00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fcb10; body size 3 bytes.
#line 1 "ENTRY_104fcb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fcb10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fcb20; body size 3 bytes.
#line 1 "ENTRY_104fcb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fcb20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fcb30; body size 3 bytes.
#line 1 "ENTRY_104fcb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fcb30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fcb40; body size 3 bytes.
#line 1 "ENTRY_104fcb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fcb40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fcb50; body size 3 bytes.
#line 1 "ENTRY_104fcb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fcb50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fcb60; body size 92 bytes.
#line 1 "ENTRY_104fcb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104fcb60(uint param_2,int param_3,int *param_4)
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


// Reference entry 104fcee0; body size 30 bytes.
#line 1 "ENTRY_104fcee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_104fcee0(int param_1)

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


// Reference entry 104fcf10; body size 3 bytes.
#line 1 "ENTRY_104fcf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fcf10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fcf20; body size 3 bytes.
#line 1 "ENTRY_104fcf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fcf20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104fcfd0; body size 3 bytes.
#line 1 "ENTRY_104fcfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104fcfd0(void)

{
  return;
}


// Reference entry 104fcfe0; body size 3 bytes.
#line 1 "ENTRY_104fcfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104fcfe0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 104fcff0; body size 3 bytes.
#line 1 "ENTRY_104fcff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104fcff0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 104fd0b0; body size 11 bytes.
#line 1 "ENTRY_104fd0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fd0b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 104fd0c0; body size 11 bytes.
#line 1 "ENTRY_104fd0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fd0c0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 104fd0d0; body size 6 bytes.
#line 1 "ENTRY_104fd0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104fd0d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 104fd0e0; body size 6 bytes.
#line 1 "ENTRY_104fd0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104fd0e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 104fd4c0; body size 14 bytes.
#line 1 "ENTRY_104fd4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104fd4c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4), 0);
  return;
}


// Reference entry 104fd4e0; body size 13 bytes.
#line 1 "ENTRY_104fd4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104fd4e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 104fd4f0; body size 12 bytes.
#line 1 "ENTRY_104fd4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104fd4f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104fd500; body size 11 bytes.
#line 1 "ENTRY_104fd500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104fd500(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 104fd510; body size 43 bytes.
#line 1 "ENTRY_104fd510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104fd510(int param_1,int param_2,int param_3)

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


// Reference entry 104fd550; body size 11 bytes.
#line 1 "ENTRY_104fd550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104fd550(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 104fd6a0; body size 87 bytes.
#line 1 "ENTRY_104fd6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104fd6a0(uint param_1)

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


// Reference entry 104fd710; body size 97 bytes.
#line 1 "ENTRY_104fd710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104fd710(uint param_1)

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


// Reference entry 104fd790; body size 87 bytes.
#line 1 "ENTRY_104fd790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104fd790(uint param_1)

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


// Reference entry 104fd800; body size 87 bytes.
#line 1 "ENTRY_104fd800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104fd800(uint param_1)

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


// Reference entry 104fd870; body size 13 bytes.
#line 1 "ENTRY_104fd870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104fd870(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 104fd880; body size 11 bytes.
#line 1 "ENTRY_104fd880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104fd880(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 104fd8b0; body size 4 bytes.
#line 1 "ENTRY_104fd8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fd8b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 104fd8d0; body size 9 bytes.
#line 1 "ENTRY_104fd8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104fd8d0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 104fd8e0; body size 68 bytes.
#line 1 "ENTRY_104fd8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104fd8e0(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = (int *)((int *)(param_1 + 4));
    iStack_4 = (int)(param_1);
    thunk_FUN_104f8cb0(piVar1,*(undefined4 *)(param_1 + 4));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_104f9920(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 104fd9a0; body size 13 bytes.
#line 1 "ENTRY_104fd9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104fd9a0(int param_1)

{
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
    return;
  }
  return;
}


// Reference entry 104fdcc0; body size 54 bytes.
#line 1 "ENTRY_104fdcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104fdcc0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 104fdd10; body size 63 bytes.
#line 1 "ENTRY_104fdd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104fdd10(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 104fdd60; body size 61 bytes.
#line 1 "ENTRY_104fdd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104fdd60(int param_1,int param_2)

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


// Reference entry 104fddb0; body size 57 bytes.
#line 1 "ENTRY_104fddb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104fddb0(int param_1,int param_2)

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


// Reference entry 104fde00; body size 66 bytes.
#line 1 "ENTRY_104fde00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104fde00(int param_1,int param_2)

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


// Reference entry 104fdeb0; body size 61 bytes.
#line 1 "ENTRY_104fdeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104fdeb0(int param_1,int param_2)

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


// Reference entry 104fdf00; body size 9 bytes.
#line 1 "ENTRY_104fdf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fdf00(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 104fdf10; body size 9 bytes.
#line 1 "ENTRY_104fdf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fdf10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 104fdf20; body size 9 bytes.
#line 1 "ENTRY_104fdf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104fdf20(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 104fdf30; body size 11 bytes.
#line 1 "ENTRY_104fdf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104fdf30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 104fdf40; body size 12 bytes.
#line 1 "ENTRY_104fdf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104fdf40(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104fdf50; body size 13 bytes.
#line 1 "ENTRY_104fdf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104fdf50(int param_1)

{
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x20) + 0x1c))();
    return;
  }
  return;
}


// Reference entry 104feda0; body size 6 bytes.
#line 1 "ENTRY_104feda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_104feda0(void)

{
  return (char *)("SCIUrlSessionCallback");
}


// Reference entry 104fedb0; body size 7 bytes.
#line 1 "ENTRY_104fedb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104fedb0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 104fedc0; body size 3 bytes.
#line 1 "ENTRY_104fedc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_104fedc0(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 104fedd0; body size 6 bytes.
#line 1 "ENTRY_104fedd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104fedd0(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 104fede0; body size 6 bytes.
#line 1 "ENTRY_104fede0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104fede0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 104fedf0; body size 6 bytes.
#line 1 "ENTRY_104fedf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104fedf0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 104fee00; body size 6 bytes.
#line 1 "ENTRY_104fee00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104fee00(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 104fee10; body size 6 bytes.
#line 1 "ENTRY_104fee10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104fee10(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 104fee20; body size 6 bytes.
#line 1 "ENTRY_104fee20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104fee20(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 104fee30; body size 6 bytes.
#line 1 "ENTRY_104fee30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104fee30(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 104fee40; body size 6 bytes.
#line 1 "ENTRY_104fee40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104fee40(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 104ff2f0; body size 5 bytes.
#line 1 "ENTRY_104ff2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ff2f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104ff300; body size 5 bytes.
#line 1 "ENTRY_104ff300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ff300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104ff6e0; body size 3 bytes.
#line 1 "ENTRY_104ff6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104ff6e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104ff6f0; body size 3 bytes.
#line 1 "ENTRY_104ff6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104ff6f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104ff700; body size 3 bytes.
#line 1 "ENTRY_104ff700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104ff700(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104ff710; body size 3 bytes.
#line 1 "ENTRY_104ff710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104ff710(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104ff930; body size 28 bytes.
#line 1 "ENTRY_104ff930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104ff930(undefined4 *param_1)

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


// Reference entry 104ff960; body size 28 bytes.
#line 1 "ENTRY_104ff960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104ff960(undefined4 *param_1)

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


// Reference entry 104ff990; body size 28 bytes.
#line 1 "ENTRY_104ff990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104ff990(undefined4 *param_1)

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


// Reference entry 104ff9c0; body size 28 bytes.
#line 1 "ENTRY_104ff9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104ff9c0(undefined4 *param_1)

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


// Reference entry 104ff9f0; body size 28 bytes.
#line 1 "ENTRY_104ff9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104ff9f0(undefined4 *param_1)

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


// Reference entry 104ffa20; body size 28 bytes.
#line 1 "ENTRY_104ffa20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104ffa20(undefined4 *param_1)

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


// Reference entry 104ffa50; body size 28 bytes.
#line 1 "ENTRY_104ffa50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104ffa50(undefined4 *param_1)

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


// Reference entry 104ffc80; body size 4 bytes.
#line 1 "ENTRY_104ffc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104ffc80(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x14));
}


// Reference entry 104ffee0; body size 9 bytes.
#line 1 "ENTRY_104ffee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104ffee0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 104ffef0; body size 18 bytes.
#line 1 "ENTRY_104ffef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104ffef0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104fff10; body size 18 bytes.
#line 1 "ENTRY_104fff10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104fff10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104fff30; body size 18 bytes.
#line 1 "ENTRY_104fff30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104fff30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104fff50; body size 18 bytes.
#line 1 "ENTRY_104fff50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104fff50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104fff70; body size 26 bytes.
#line 1 "ENTRY_104fff70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104fff70(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 104fff90; body size 78 bytes.
#line 1 "ENTRY_104fff90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104fff90(int *param_2)
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


// Reference entry 10500000; body size 25 bytes.
#line 1 "ENTRY_10500000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10500000(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10500020; body size 25 bytes.
#line 1 "ENTRY_10500020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10500020(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10500040; body size 13 bytes.
#line 1 "ENTRY_10500040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10500040(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10500050; body size 13 bytes.
#line 1 "ENTRY_10500050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10500050(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10500060; body size 3 bytes.
#line 1 "ENTRY_10500060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10500060(void)

{
  return;
}


// Reference entry 10500070; body size 3 bytes.
#line 1 "ENTRY_10500070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10500070(void)

{
  return;
}


// Reference entry 10500220; body size 15 bytes.
#line 1 "ENTRY_10500220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10500220(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10500240; body size 15 bytes.
#line 1 "ENTRY_10500240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10500240(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10500260; body size 15 bytes.
#line 1 "ENTRY_10500260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10500260(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10500300; body size 5 bytes.
#line 1 "ENTRY_10500300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10500300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10500310; body size 5 bytes.
#line 1 "ENTRY_10500310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10500310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10500320; body size 5 bytes.
#line 1 "ENTRY_10500320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10500320(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10500330; body size 5 bytes.
#line 1 "ENTRY_10500330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10500330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10500340; body size 5 bytes.
#line 1 "ENTRY_10500340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10500340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10500350; body size 5 bytes.
#line 1 "ENTRY_10500350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10500350(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10500360; body size 5 bytes.
#line 1 "ENTRY_10500360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10500360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10500370; body size 5 bytes.
#line 1 "ENTRY_10500370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10500370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10500380; body size 3 bytes.
#line 1 "ENTRY_10500380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10500380(void)

{
  return;
}


// Reference entry 10500400; body size 15 bytes.
#line 1 "ENTRY_10500400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10500400(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10500420; body size 15 bytes.
#line 1 "ENTRY_10500420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10500420(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10500440; body size 5 bytes.
#line 1 "ENTRY_10500440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10500440(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10500450; body size 5 bytes.
#line 1 "ENTRY_10500450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10500450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10500460; body size 5 bytes.
#line 1 "ENTRY_10500460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10500460(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10500470; body size 6 bytes.
#line 1 "ENTRY_10500470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10500470(void)

{
  return (char *)("SCIInfoViewHeaderDataSource");
}


// Reference entry 10500480; body size 6 bytes.
#line 1 "ENTRY_10500480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10500480(void)

{
  return (char *)("SCIInfoViewHeaderItem");
}


// Reference entry 10500490; body size 28 bytes.
#line 1 "ENTRY_10500490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10500490(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 105004c0; body size 28 bytes.
#line 1 "ENTRY_105004c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105004c0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 105004f0; body size 27 bytes.
#line 1 "ENTRY_105004f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105004f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10500520; body size 27 bytes.
#line 1 "ENTRY_10500520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10500520(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10500550; body size 42 bytes.
#line 1 "ENTRY_10500550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10500550(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOwnedObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 10500590; body size 42 bytes.
#line 1 "ENTRY_10500590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10500590(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITearOffObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 105005d0; body size 32 bytes.
#line 1 "ENTRY_105005d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105005d0(undefined4 *param_2)
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


// Reference entry 10500600; body size 32 bytes.
#line 1 "ENTRY_10500600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10500600(undefined4 *param_2)
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


// Reference entry 10500630; body size 16 bytes.
#line 1 "ENTRY_10500630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10500630(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10500650; body size 32 bytes.
#line 1 "ENTRY_10500650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10500650(undefined4 *param_2)
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


// Reference entry 10500680; body size 16 bytes.
#line 1 "ENTRY_10500680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10500680(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105006a0; body size 16 bytes.
#line 1 "ENTRY_105006a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105006a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10500700; body size 16 bytes.
#line 1 "ENTRY_10500700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10500700(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105007e0; body size 16 bytes.
#line 1 "ENTRY_105007e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105007e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10500800; body size 16 bytes.
#line 1 "ENTRY_10500800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10500800(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10500820; body size 3 bytes.
#line 1 "ENTRY_10500820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10500820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10500830; body size 3 bytes.
#line 1 "ENTRY_10500830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10500830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10500840; body size 52 bytes.
#line 1 "ENTRY_10500840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10500840(undefined4 *param_1)

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


// Reference entry 10500890; body size 52 bytes.
#line 1 "ENTRY_10500890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10500890(undefined4 *param_1)

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


// Reference entry 105008e0; body size 27 bytes.
#line 1 "ENTRY_105008e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105008e0(undefined4 *param_1)

{
  *(undefined2*)(param_1 + 2) = (undefined2)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAsyncDataSource);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10500910; body size 16 bytes.
#line 1 "ENTRY_10500910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10500910(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAsyncDataSourceListener);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10500930; body size 19 bytes.
#line 1 "ENTRY_10500930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10500930(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_2[1]);
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10500950; body size 19 bytes.
#line 1 "ENTRY_10500950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10500950(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_2[1]);
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10500970; body size 9 bytes.
#line 1 "ENTRY_10500970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10500970(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  return (undefined4 *)(param_1);
}


// Reference entry 10500980; body size 18 bytes.
#line 1 "ENTRY_10500980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10500980(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 105015c0; body size 9 bytes.
#line 1 "ENTRY_105015c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105015c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIInfoViewHeaderDataSource);
  return (undefined4 *)(param_1);
}


// Reference entry 105015d0; body size 9 bytes.
#line 1 "ENTRY_105015d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105015d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIInfoViewHeaderItem);
  return (undefined4 *)(param_1);
}


// Reference entry 105017a0; body size 16 bytes.
#line 1 "ENTRY_105017a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105017a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoViewDynamicCPMenu);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10503070; body size 19 bytes.
#line 1 "ENTRY_10503070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10503070(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 105030b0; body size 26 bytes.
#line 1 "ENTRY_105030b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105030b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 105033f0; body size 7 bytes.
#line 1 "ENTRY_105033f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105033f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  return;
}


// Reference entry 105038f0; body size 7 bytes.
#line 1 "ENTRY_105038f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105038f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10503900; body size 7 bytes.
#line 1 "ENTRY_10503900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10503900(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10504560; body size 17 bytes.
#line 1 "ENTRY_10504560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10504560(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_111a0720(param_1), 0);
  return (bool)(cVar1 == '\0');
}


// Reference entry 10504580; body size 3 bytes.
#line 1 "ENTRY_10504580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10504580(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10504590; body size 3 bytes.
#line 1 "ENTRY_10504590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10504590(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 105045a0; body size 4 bytes.
#line 1 "ENTRY_105045a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105045a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 105056c0; body size 21 bytes.
#line 1 "ENTRY_105056c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105056c0(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"AVTransportURI");
  return (undefined4)(param_1);
}


// Reference entry 10505710; body size 21 bytes.
#line 1 "ENTRY_10505710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505710(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"upnp:album");
  return (undefined4)(param_1);
}


// Reference entry 10505730; body size 21 bytes.
#line 1 "ENTRY_10505730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505730(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"upnp:albumArtURI");
  return (undefined4)(param_1);
}


// Reference entry 10505750; body size 21 bytes.
#line 1 "ENTRY_10505750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505750(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"r:albumArtist");
  return (undefined4)(param_1);
}


// Reference entry 10505770; body size 3 bytes.
#line 1 "ENTRY_10505770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10505770(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10505780; body size 11 bytes.
#line 1 "ENTRY_10505780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10505780(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)0x0);
  if (**(int **)(param_1 + 4) == 0) {
    piVar1 = (int *)(*(int **)(param_1 + 4), 0);
  }
  return (int *)(piVar1);
}


// Reference entry 10505790; body size 21 bytes.
#line 1 "ENTRY_10505790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505790(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"dc:creator");
  return (undefined4)(param_1);
}


// Reference entry 105057e0; body size 21 bytes.
#line 1 "ENTRY_105057e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105057e0(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"CurrentTrackURI");
  return (undefined4)(param_1);
}


// Reference entry 10505830; body size 21 bytes.
#line 1 "ENTRY_10505830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505830(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"r:EnqueuedTransportURI");
  return (undefined4)(param_1);
}


// Reference entry 10505850; body size 21 bytes.
#line 1 "ENTRY_10505850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505850(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,&DAT_1187b440);
  return (undefined4)(param_1);
}


// Reference entry 10505870; body size 21 bytes.
#line 1 "ENTRY_10505870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505870(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"parentId");
  return (undefined4)(param_1);
}


// Reference entry 10505890; body size 21 bytes.
#line 1 "ENTRY_10505890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505890(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"r:podcast");
  return (undefined4)(param_1);
}


// Reference entry 105058b0; body size 3 bytes.
#line 1 "ENTRY_105058b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105058b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 105058c0; body size 21 bytes.
#line 1 "ENTRY_105058c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105058c0(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"r:tags");
  return (undefined4)(param_1);
}


// Reference entry 105058e0; body size 21 bytes.
#line 1 "ENTRY_105058e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105058e0(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"r:tags");
  return (undefined4)(param_1);
}


// Reference entry 10505900; body size 21 bytes.
#line 1 "ENTRY_10505900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505900(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"dc:title");
  return (undefined4)(param_1);
}


// Reference entry 10505920; body size 21 bytes.
#line 1 "ENTRY_10505920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505920(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"dc:title");
  return (undefined4)(param_1);
}


// Reference entry 10505940; body size 21 bytes.
#line 1 "ENTRY_10505940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505940(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"upnp:class");
  return (undefined4)(param_1);
}


// Reference entry 10505960; body size 21 bytes.
#line 1 "ENTRY_10505960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505960(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"upnp:class");
  return (undefined4)(param_1);
}


// Reference entry 10505980; body size 21 bytes.
#line 1 "ENTRY_10505980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505980(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"r:radioShowMd");
  return (undefined4)(param_1);
}


// Reference entry 105059a0; body size 31 bytes.
#line 1 "ENTRY_105059a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105059a0(undefined4 *param_1)

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


// Reference entry 105059d0; body size 31 bytes.
#line 1 "ENTRY_105059d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105059d0(undefined4 *param_1)

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


// Reference entry 10505a00; body size 3 bytes.
#line 1 "ENTRY_10505a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10505a00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10505a10; body size 3 bytes.
#line 1 "ENTRY_10505a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10505a10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10505a20; body size 3 bytes.
#line 1 "ENTRY_10505a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10505a20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10505a30; body size 3 bytes.
#line 1 "ENTRY_10505a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10505a30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10505a40; body size 3 bytes.
#line 1 "ENTRY_10505a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10505a40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10505a50; body size 3 bytes.
#line 1 "ENTRY_10505a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10505a50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10505be0; body size 21 bytes.
#line 1 "ENTRY_10505be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10505be0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 4), 0);
  if (*piVar1 != (int)((0))) {
    piVar1 = (int *)((int *)0x0);
  }
  if ((int *)(piVar1) != (int *)(0x0)) {
    return (int)(piVar1[0x16]);
  }
  return (int)(0);
}


// Reference entry 10505c00; body size 7 bytes.
#line 1 "ENTRY_10505c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10505c00(int param_1)

{
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
}


// Reference entry 10505c10; body size 90 bytes.
#line 1 "ENTRY_10505c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10505c10(uint param_1)

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


// Reference entry 10505c90; body size 90 bytes.
#line 1 "ENTRY_10505c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10505c90(uint param_1)

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


// Reference entry 10506f90; body size 87 bytes.
#line 1 "ENTRY_10506f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10506f90(uint param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((param_1 >> 1 & 0x55555555) + (param_1 & 0x55555555));
  uVar1 = (uint)((uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333));
  uVar1 = (uint)((uVar1 >> 4 & 0xf0f0f0f) + (uVar1 & 0xf0f0f0f));
  uVar1 = (uint)((uVar1 >> 8 & 0xff00ff) + (uVar1 & 0xff00ff));
  return (int)((uVar1 >> 0x10) + (uVar1 & 0xffff));
}


// Reference entry 105070d0; body size 57 bytes.
#line 1 "ENTRY_105070d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105070d0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10507120; body size 57 bytes.
#line 1 "ENTRY_10507120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10507120(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10507170; body size 9 bytes.
#line 1 "ENTRY_10507170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10507170(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10507180; body size 7 bytes.
#line 1 "ENTRY_10507180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10507180(int param_1)

{
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x28));
}


// Reference entry 10507ef0; body size 5 bytes.
#line 1 "ENTRY_10507ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_10507ef0(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 8));
}


// Reference entry 1050a530; body size 8 bytes.
#line 1 "ENTRY_1050a530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1050a530(int param_1)

{
  return (bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 1050a7d0; body size 6 bytes.
#line 1 "ENTRY_1050a7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1050a7d0(void)

{
  return (char *)("SCIInfoViewHeaderDataSource");
}


// Reference entry 1050a7e0; body size 6 bytes.
#line 1 "ENTRY_1050a7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1050a7e0(void)

{
  return (char *)("SCIInfoViewHeaderItem");
}


// Reference entry 1050a950; body size 18 bytes.
#line 1 "ENTRY_1050a950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1050a950(int param_1)

{
  thunk_FUN_110a5ba0(param_1 + 8,"object.container.album.musicAlbum");
  return;
}


// Reference entry 1050a970; body size 7 bytes.
#line 1 "ENTRY_1050a970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1050a970(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 1050aa30; body size 10 bytes.
#line 1 "ENTRY_1050aa30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1050aa30(int param_1)

{
  return (undefined4)(((uint)((int3)((uint)*(int **)(param_1 + 4) >> 8)) << 8 | (uint)(**(int **)(param_1 + 4) == 0)));
}


// Reference entry 1050aa80; body size 18 bytes.
#line 1 "ENTRY_1050aa80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1050aa80(int param_1)

{
  thunk_FUN_110a5ba0(param_1 + 8,"object.container.podcast");
  return;
}


// Reference entry 1050aaa0; body size 18 bytes.
#line 1 "ENTRY_1050aaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1050aaa0(int param_1)

{
  thunk_FUN_110a5ba0(param_1 + 8,"object.item.audioItem.musicTrack");
  return;
}


// Reference entry 1050ab20; body size 36 bytes.
#line 1 "ENTRY_1050ab20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_1050ab20(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x13c), 0);
  if (((((char *)(pcVar1) != (char *)(0x0)) && (*pcVar1 != (char)(('\0')))) &&
      (pcVar1 = (char *)(*(char **)(param_1 + 0x138), 0),(char *)( pcVar1) != (char *)(0x0))) && (*pcVar1 != (char)(('\0')))) {
    return (uint)(((uint)((int3)((uint)pcVar1 >> 8)) << 8 | (uint)(1)));
  }
  return (uint)((uint)pcVar1 & 0xffffff00);
}


// Reference entry 1050ab50; body size 51 bytes.
#line 1 "ENTRY_1050ab50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_1050ab50(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x140), 0);
  if (((((char *)(pcVar1) != (char *)(0x0)) && (*pcVar1 != (char)(('\0')))) &&
      (pcVar1 = (char *)(*(char **)(param_1 + 0x13c), 0),(char *)( pcVar1) != (char *)(0x0))) &&
     (((*pcVar1 != (char)(('\0')) && (pcVar1 = (char *)(*(char **)(param_1 + 0x138), 0),(char *)( pcVar1) != (char *)(0x0))) &&
      (*pcVar1 != (char)(('\0')))))) {
    return (uint)(((uint)((int3)((uint)pcVar1 >> 8)) << 8 | (uint)(1)));
  }
  return (uint)((uint)pcVar1 & 0xffffff00);
}


// Reference entry 1050ab90; body size 39 bytes.
#line 1 "ENTRY_1050ab90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1050ab90(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  iStack_10 = (int)(*(int *)(param_1 + 0x88));
  if (iStack_10 != 0) {
    uStack_c = (undefined4)(0);
    iStack_14 = (int)(param_1);
    ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIInfoViewHeaderDataSource:onChanged");
    thunk_FUN_103d65f0();
  }
  return;
}


// Reference entry 1050abc0; body size 31 bytes.
#line 1 "ENTRY_1050abc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1050abc0(void)

{
  SCStr aSStack_14 [8];
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  ((SCStr *)((uint)&aSStack_14))->int_allocRep("SCIInfoViewHeaderDataSource:onChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 1050ae80; body size 3 bytes.
#line 1 "ENTRY_1050ae80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1050ae80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1050ae90; body size 3 bytes.
#line 1 "ENTRY_1050ae90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1050ae90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1050b6a0; body size 28 bytes.
#line 1 "ENTRY_1050b6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1050b6a0(undefined4 *param_1)

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


// Reference entry 1050b6d0; body size 28 bytes.
#line 1 "ENTRY_1050b6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1050b6d0(undefined4 *param_1)

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


// Reference entry 1050b700; body size 28 bytes.
#line 1 "ENTRY_1050b700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1050b700(undefined4 *param_1)

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


// Reference entry 1050b7b0; body size 8 bytes.
#line 1 "ENTRY_1050b7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1050b7b0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)(param_1 + 0xc));
  if ((int *)((param_2)) != (int *)(piVar3)) {
    iVar1 = (int)(*piVar3);
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0), iVar2 == 0)) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
    iVar1 = (int)(*param_2);
    *piVar3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
    }
  }
  return (int *)(piVar3);
}


// Reference entry 1050b7c0; body size 8 bytes.
#line 1 "ENTRY_1050b7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1050b7c0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)(param_1 + 0x20));
  if ((int *)((param_2)) != (int *)(piVar3)) {
    iVar1 = (int)(*piVar3);
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0), iVar2 == 0)) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
    iVar1 = (int)(*param_2);
    *piVar3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
    }
  }
  return (int *)(piVar3);
}


// Reference entry 1050e550; body size 12 bytes.
#line 1 "ENTRY_1050e550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_1050e550(int param_1)

{
  return (uint)(*(uint *)(param_1 + 0x130) >> 9 & 0xffffff01);
}


// Reference entry 1050e560; body size 9 bytes.
#line 1 "ENTRY_1050e560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

byte __fastcall FUN_1050e560(int param_1)

{
  return (byte)(*(byte *)(param_1 + 0x133) & 1);
}


// Reference entry 1050e570; body size 12 bytes.
#line 1 "ENTRY_1050e570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_1050e570(int param_1)

{
  return (uint)(*(uint *)(param_1 + 0x130) >> 0x17 & 0xffffff01);
}


// Reference entry 1050e580; body size 7 bytes.
#line 1 "ENTRY_1050e580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1050e580(int param_1)

{
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10));
}


// Reference entry 1050e6f0; body size 26 bytes.
#line 1 "ENTRY_1050e6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1050e6f0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 1050e7f0; body size 25 bytes.
#line 1 "ENTRY_1050e7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1050e7f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1050e810; body size 43 bytes.
#line 1 "ENTRY_1050e810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1050e810(int *param_2)
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


// Reference entry 1050e850; body size 26 bytes.
#line 1 "ENTRY_1050e850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1050e850(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 1050e870; body size 26 bytes.
#line 1 "ENTRY_1050e870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1050e870(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 1050e980; body size 78 bytes.
#line 1 "ENTRY_1050e980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1050e980(int *param_2)
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


// Reference entry 1050e9f0; body size 78 bytes.
#line 1 "ENTRY_1050e9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1050e9f0(int *param_2)
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


// Reference entry 1050ea90; body size 54 bytes.
#line 1 "ENTRY_1050ea90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1050ea90(undefined4 *param_1)

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


// Reference entry 1050eae0; body size 42 bytes.
#line 1 "ENTRY_1050eae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1050eae0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOwnedObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 1050eb20; body size 42 bytes.
#line 1 "ENTRY_1050eb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1050eb20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITearOffObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 1050ec20; body size 16 bytes.
#line 1 "ENTRY_1050ec20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1050ec20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1050ec60; body size 18 bytes.
#line 1 "ENTRY_1050ec60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1050ec60(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1050fd40; body size 26 bytes.
#line 1 "ENTRY_1050fd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1050fd40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10510840; body size 33 bytes.
#line 1 "ENTRY_10510840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10510840(int param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101ba530(param_2);
  thunk_FUN_101ba530(param_2 + 4);
  return (undefined4)(param_1);
}


// Reference entry 10510870; body size 3 bytes.
#line 1 "ENTRY_10510870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10510870(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10510880; body size 3 bytes.
#line 1 "ENTRY_10510880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10510880(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10510890; body size 7 bytes.
#line 1 "ENTRY_10510890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10510890(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 105108a0; body size 7 bytes.
#line 1 "ENTRY_105108a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105108a0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 105108b0; body size 3 bytes.
#line 1 "ENTRY_105108b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105108b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 105108c0; body size 3 bytes.
#line 1 "ENTRY_105108c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105108c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 105108d0; body size 3 bytes.
#line 1 "ENTRY_105108d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105108d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 105108e0; body size 7 bytes.
#line 1 "ENTRY_105108e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105108e0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 105108f0; body size 3 bytes.
#line 1 "ENTRY_105108f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105108f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10510900; body size 3 bytes.
#line 1 "ENTRY_10510900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10510900(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10510910; body size 3 bytes.
#line 1 "ENTRY_10510910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10510910(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10510c90; body size 21 bytes.
#line 1 "ENTRY_10510c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10510c90(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"r:DirectControlClientID");
  return (undefined4)(param_1);
}


// Reference entry 10511150; body size 25 bytes.
#line 1 "ENTRY_10511150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10511150(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 8));
  thunk_FUN_101c42f0(*puVar1,*(undefined4 *)(param_1 + 0xc),puVar1);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*puVar1);
  return;
}


// Reference entry 105135c0; body size 9 bytes.
#line 1 "ENTRY_105135c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105135c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 105135d0; body size 9 bytes.
#line 1 "ENTRY_105135d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105135d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10513700; body size 9 bytes.
#line 1 "ENTRY_10513700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10513700(int *param_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*param_1 == (int)((param_1))[1])));
}


// Reference entry 10513d30; body size 13 bytes.
#line 1 "ENTRY_10513d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10513d30(int param_2)
{
  int param_1 = (int )this;
  return (int)(*(int *)(param_1 + 8) + param_2 * 8);
}


// Reference entry 10513d40; body size 40 bytes.
#line 1 "ENTRY_10513d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10513d40(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x24));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 10514210; body size 40 bytes.
#line 1 "ENTRY_10514210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10514210(int *param_2)
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


// Reference entry 10514250; body size 40 bytes.
#line 1 "ENTRY_10514250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10514250(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 105169f0; body size 40 bytes.
#line 1 "ENTRY_105169f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_105169f0(int *param_2)
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


// Reference entry 10516c50; body size 40 bytes.
#line 1 "ENTRY_10516c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10516c50(int *param_2)
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


// Reference entry 10516cf0; body size 8 bytes.
#line 1 "ENTRY_10516cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10516cf0(int param_1)

{
  return (bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 10516e60; body size 10 bytes.
#line 1 "ENTRY_10516e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10516e60(int param_1)

{
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 8) >> 8)) << 8 | (uint)(*(int *)((param_1 + 8)) == *(int *)((param_1 + 0xc)))));
}


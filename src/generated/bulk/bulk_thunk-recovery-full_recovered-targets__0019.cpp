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
namespace std { template<class... A> int _Xbad_alloc(A...); template<class... A> int _Xlength_error(A...); }
struct SCOpRefBase { char _pad; SCOpRefBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int int_start(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); static int op_ctor(...) { return 0; } template<class... A> int stringWithFormat(A...); };
template<class...> struct pair { char _pad; pair(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int op_dtor(...) { return 0; } };
namespace std { template<class...> struct ctype { char _pad; ctype(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int tolower(A...); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
struct AudioIn { char _pad; AudioIn(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Cache { char _pad; Cache(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Control { char _pad; Control(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DeviceProperties { char _pad; DeviceProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ETag { char _pad; ETag(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetAudioInputAttributes { char _pad; GetAudioInputAttributes(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetAutoplayLinkedZones { char _pad; GetAutoplayLinkedZones(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetAutoplayRoomUUID { char _pad; GetAutoplayRoomUUID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetAutoplayVolume { char _pad; GetAutoplayVolume(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetLineInLevel { char _pad; GetLineInLevel(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetSupportsOutputFixed { char _pad; GetSupportsOutputFixed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetUseAutoplayVolume { char _pad; GetUseAutoplayVolume(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RenderingControl { char _pad; RenderingControl(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIMdnsDelegate { char _pad; SCIMdnsDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIMdnsListener { char _pad; SCIMdnsListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpAudioInGetAudioInputAttributes { char _pad; SCIOpAudioInGetAudioInputAttributes(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpAudioInGetLineInLevel { char _pad; SCIOpAudioInGetLineInLevel(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpAudioInSetAudioInputAttributes { char _pad; SCIOpAudioInSetAudioInputAttributes(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpAudioInSetLineInLevel { char _pad; SCIOpAudioInSetLineInLevel(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpDevicePropertiesGetAutoplayLinkedZones { char _pad; SCIOpDevicePropertiesGetAutoplayLinkedZones(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpDevicePropertiesGetAutoplayRoomUUID { char _pad; SCIOpDevicePropertiesGetAutoplayRoomUUID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpDevicePropertiesGetAutoplayVolume { char _pad; SCIOpDevicePropertiesGetAutoplayVolume(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpDevicePropertiesGetUseAutoplayVolume { char _pad; SCIOpDevicePropertiesGetUseAutoplayVolume(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpDevicePropertiesSetUseAutoplayVolume { char _pad; SCIOpDevicePropertiesSetUseAutoplayVolume(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpRenderingControlGetSupportsOutputFixed { char _pad; SCIOpRenderingControlGetSupportsOutputFixed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIWifiListener { char _pad; SCIWifiListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SetAutoplayLinkedZones { char _pad; SetAutoplayLinkedZones(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UNK_11918fb0 { char _pad; UNK_11918fb0(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *E9;
typedef void *WARNING;
typedef void *_Collvec;
typedef void *_End1;
typedef void *_String1;
using namespace std;
struct Recovered_Bulk { char _pad; int * __thiscall m_FUN_10c363d0(int *param_2); template<class... A> int m_FUN_10c363d0(A...); int * __thiscall m_FUN_10c36430(int *param_2); template<class... A> int m_FUN_10c36430(A...); bool __thiscall m_FUN_10c36530(int *param_2); template<class... A> int m_FUN_10c36530(A...); bool __thiscall m_FUN_10c36550(int *param_2); template<class... A> int m_FUN_10c36550(A...); int * __thiscall m_FUN_10c36eb0(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10c36eb0(A...); void __thiscall m_FUN_10c370b0(int param_2); template<class... A> int m_FUN_10c370b0(A...); void __thiscall m_FUN_10c370d0(undefined4 param_2); template<class... A> int m_FUN_10c370d0(A...); void __thiscall m_FUN_10c371a0(undefined4 *param_2); template<class... A> int m_FUN_10c371a0(A...); void __thiscall m_FUN_10c371c0(undefined4 *param_2); template<class... A> int m_FUN_10c371c0(A...); void __thiscall m_FUN_10c371d0(undefined4 *param_2); template<class... A> int m_FUN_10c371d0(A...); void __thiscall m_FUN_10c371e0(undefined4 *param_2); template<class... A> int m_FUN_10c371e0(A...); uint __thiscall m_FUN_10c37640(byte *param_2); template<class... A> int m_FUN_10c37640(A...); int * __thiscall m_FUN_10c39920(int *param_2); template<class... A> int m_FUN_10c39920(A...); int * __thiscall m_FUN_10c399c0(int *param_2); template<class... A> int m_FUN_10c399c0(A...); int * __thiscall m_FUN_10c399e0(int *param_2); template<class... A> int m_FUN_10c399e0(A...); int * __thiscall m_FUN_10c39a00(int *param_2); template<class... A> int m_FUN_10c39a00(A...); int * __thiscall m_FUN_10c39a70(int *param_2); template<class... A> int m_FUN_10c39a70(A...); undefined4 * __thiscall m_FUN_10c39b40(undefined4 param_2); template<class... A> int m_FUN_10c39b40(A...); undefined4 * __thiscall m_FUN_10c3bf90(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_10c3bf90(A...); undefined4 * __thiscall m_FUN_10c3c020(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10c3c020(A...); undefined4 * __thiscall m_FUN_10c3c4b0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c3c4b0(A...); undefined4 * __thiscall m_FUN_10c3c510(undefined4 param_2); template<class... A> int m_FUN_10c3c510(A...); undefined4 * __thiscall m_FUN_10c3c520(undefined4 param_2); template<class... A> int m_FUN_10c3c520(A...); undefined4 * __thiscall m_FUN_10c3c5e0(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_10c3c5e0(A...); undefined4 * __thiscall m_FUN_10c3c5f0(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_10c3c5f0(A...); undefined4 * __thiscall m_FUN_10c3c600(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10c3c600(A...); undefined4 * __thiscall m_FUN_10c3c6c0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c3c6c0(A...); undefined4 * __thiscall m_FUN_10c3c6d0(undefined4 param_2,undefined4 param_3,undefined4 *param_4); template<class... A> int m_FUN_10c3c6d0(A...); undefined4 * __thiscall m_FUN_10c3c6e0(undefined4 param_2,undefined4 param_3,undefined4 *param_4); template<class... A> int m_FUN_10c3c6e0(A...); undefined4 * __thiscall m_FUN_10c3c6f0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10c3c6f0(A...); undefined4 * __thiscall m_FUN_10c3c710(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10c3c710(A...); undefined4 * __thiscall m_FUN_10c3c730(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10c3c730(A...); undefined4 * __thiscall m_FUN_10c3c8b0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10c3c8b0(A...); undefined4 * __thiscall m_FUN_10c3c910(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_10c3c910(A...); undefined4 * __thiscall m_FUN_10c3c930(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_10c3c930(A...); undefined4 * __thiscall m_FUN_10c3c950(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_10c3c950(A...); undefined4 * __thiscall m_FUN_10c3c970(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_10c3c970(A...); undefined4 * __thiscall m_FUN_10c3c990(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_10c3c990(A...); undefined4 * __thiscall m_FUN_10c3c9b0(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_10c3c9b0(A...); undefined4 * __thiscall m_FUN_10c3c9d0(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_10c3c9d0(A...); undefined4 * __thiscall m_FUN_10c3c9f0(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_10c3c9f0(A...); undefined4 * __thiscall m_FUN_10c3ca10(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_10c3ca10(A...); undefined4 * __thiscall m_FUN_10c3ca30(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_10c3ca30(A...); undefined4 * __thiscall m_FUN_10c3ca50(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_10c3ca50(A...); undefined4 * __thiscall m_FUN_10c3ca70(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_10c3ca70(A...); void __thiscall m_FUN_10c3cdc0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10c3cdc0(A...); void __thiscall m_FUN_10c3d200(undefined4 *param_2); template<class... A> int m_FUN_10c3d200(A...); void __thiscall m_FUN_10c3d220(undefined4 *param_2); template<class... A> int m_FUN_10c3d220(A...); void __thiscall m_FUN_10c3d240(undefined4 *param_2); template<class... A> int m_FUN_10c3d240(A...); void __thiscall m_FUN_10c3d260(undefined4 *param_2); template<class... A> int m_FUN_10c3d260(A...); void __thiscall m_FUN_10c3dcb0(void *param_2,int param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c3dcb0(A...); undefined4 * __thiscall m_FUN_10c3fd30(undefined4 param_2); template<class... A> int m_FUN_10c3fd30(A...); undefined4 * __thiscall m_FUN_10c3fd50(undefined4 param_2); template<class... A> int m_FUN_10c3fd50(A...); undefined4 * __thiscall m_FUN_10c3fd70(undefined4 param_2); template<class... A> int m_FUN_10c3fd70(A...); undefined4 * __thiscall m_FUN_10c3fd90(undefined4 param_2); template<class... A> int m_FUN_10c3fd90(A...); undefined4 * __thiscall m_FUN_10c400f0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c400f0(A...); undefined4 * __thiscall m_FUN_10c40100(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c40100(A...); undefined4 * __thiscall m_FUN_10c40110(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c40110(A...); undefined4 * __thiscall m_FUN_10c40120(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c40120(A...); undefined4 * __thiscall m_FUN_10c40130(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c40130(A...); undefined4 * __thiscall m_FUN_10c40140(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c40140(A...); undefined4 * __thiscall m_FUN_10c40150(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c40150(A...); undefined4 * __thiscall m_FUN_10c40160(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c40160(A...); undefined4 * __thiscall m_FUN_10c40170(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c40170(A...); undefined4 * __thiscall m_FUN_10c40180(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c40180(A...); undefined4 * __thiscall m_FUN_10c40190(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c40190(A...); undefined4 * __thiscall m_FUN_10c401a0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c401a0(A...); undefined4 * __thiscall m_FUN_10c401b0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c401b0(A...); undefined4 * __thiscall m_FUN_10c401c0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c401c0(A...); undefined4 * __thiscall m_FUN_10c401d0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c401d0(A...); undefined4 * __thiscall m_FUN_10c40260(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c40260(A...); undefined4 * __thiscall m_FUN_10c402c0(undefined4 *param_2); template<class... A> int m_FUN_10c402c0(A...); undefined4 * __thiscall m_FUN_10c402d0(undefined4 *param_2); template<class... A> int m_FUN_10c402d0(A...); undefined4 * __thiscall m_FUN_10c402e0(undefined4 *param_2); template<class... A> int m_FUN_10c402e0(A...); undefined4 * __thiscall m_FUN_10c402f0(undefined4 *param_2); template<class... A> int m_FUN_10c402f0(A...); undefined4 * __thiscall m_FUN_10c40300(undefined4 param_2); template<class... A> int m_FUN_10c40300(A...); undefined4 * __thiscall m_FUN_10c40320(undefined4 param_2); template<class... A> int m_FUN_10c40320(A...); undefined4 * __thiscall m_FUN_10c40340(undefined4 param_2); template<class... A> int m_FUN_10c40340(A...); undefined4 * __thiscall m_FUN_10c40360(undefined4 param_2); template<class... A> int m_FUN_10c40360(A...); undefined4 * __thiscall m_FUN_10c40470(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c40470(A...); undefined4 * __thiscall m_FUN_10c40490(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c40490(A...); undefined4 * __thiscall m_FUN_10c404b0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c404b0(A...); undefined4 * __thiscall m_FUN_10c404d0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c404d0(A...); undefined4 * __thiscall m_FUN_10c405b0(undefined4 *param_2); template<class... A> int m_FUN_10c405b0(A...); undefined4 * __thiscall m_FUN_10c40640(undefined4 param_2); template<class... A> int m_FUN_10c40640(A...); undefined4 * __thiscall m_FUN_10c408c0(undefined4 *param_2); template<class... A> int m_FUN_10c408c0(A...); undefined4 * __thiscall m_FUN_10c40c70(undefined4 *param_2); template<class... A> int m_FUN_10c40c70(A...); undefined4 * __thiscall m_FUN_10c40ce0(void *param_2,int param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c40ce0(A...); undefined4 * __thiscall m_FUN_10c40f90(undefined4 param_2); template<class... A> int m_FUN_10c40f90(A...); undefined4 * __thiscall m_FUN_10c40fa0(undefined4 param_2); template<class... A> int m_FUN_10c40fa0(A...); undefined4 * __thiscall m_FUN_10c40fb0(undefined4 param_2); template<class... A> int m_FUN_10c40fb0(A...); undefined4 * __thiscall m_FUN_10c40fc0(undefined4 param_2); template<class... A> int m_FUN_10c40fc0(A...); undefined4 * __thiscall m_FUN_10c40fd0(undefined4 param_2,int param_3); template<class... A> int m_FUN_10c40fd0(A...); undefined4 * __thiscall m_FUN_10c40ff0(undefined4 param_2,int param_3); template<class... A> int m_FUN_10c40ff0(A...); undefined4 * __thiscall m_FUN_10c41010(undefined4 param_2,int param_3); template<class... A> int m_FUN_10c41010(A...); undefined4 * __thiscall m_FUN_10c41030(undefined4 param_2,int param_3); template<class... A> int m_FUN_10c41030(A...); bool __thiscall m_FUN_10c41c00(int *param_2); template<class... A> int m_FUN_10c41c00(A...); bool __thiscall m_FUN_10c41c20(int *param_2); template<class... A> int m_FUN_10c41c20(A...); bool __thiscall m_FUN_10c41c40(int *param_2); template<class... A> int m_FUN_10c41c40(A...); bool __thiscall m_FUN_10c41c60(int *param_2); template<class... A> int m_FUN_10c41c60(A...); bool __thiscall m_FUN_10c41c80(int *param_2); template<class... A> int m_FUN_10c41c80(A...); bool __thiscall m_FUN_10c41ca0(int *param_2); template<class... A> int m_FUN_10c41ca0(A...); bool __thiscall m_FUN_10c41cc0(int *param_2); template<class... A> int m_FUN_10c41cc0(A...); bool __thiscall m_FUN_10c41ce0(int *param_2); template<class... A> int m_FUN_10c41ce0(A...); bool __thiscall m_FUN_10c41d00(int *param_2); template<class... A> int m_FUN_10c41d00(A...); bool __thiscall m_FUN_10c41d20(int *param_2); template<class... A> int m_FUN_10c41d20(A...); void __thiscall m_FUN_10c42930(uint param_2); template<class... A> int m_FUN_10c42930(A...); int * __thiscall m_FUN_10c438e0(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10c438e0(A...); int * __thiscall m_FUN_10c43960(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10c43960(A...); int * __thiscall m_FUN_10c439e0(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10c439e0(A...); int * __thiscall m_FUN_10c43a60(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10c43a60(A...); void __thiscall m_FUN_10c444c0(undefined4 *param_2); template<class... A> int m_FUN_10c444c0(A...); void __thiscall m_FUN_10c444e0(undefined4 *param_2); template<class... A> int m_FUN_10c444e0(A...); void __thiscall m_FUN_10c44500(undefined4 *param_2); template<class... A> int m_FUN_10c44500(A...); void __thiscall m_FUN_10c44520(undefined4 *param_2); template<class... A> int m_FUN_10c44520(A...); void __thiscall m_FUN_10c44540(undefined4 *param_2); template<class... A> int m_FUN_10c44540(A...); void __thiscall m_FUN_10c44550(undefined4 *param_2); template<class... A> int m_FUN_10c44550(A...); void __thiscall m_FUN_10c44560(undefined4 *param_2); template<class... A> int m_FUN_10c44560(A...); void __thiscall m_FUN_10c44570(undefined4 *param_2); template<class... A> int m_FUN_10c44570(A...); void __thiscall m_FUN_10c445a0(undefined4 *param_2); template<class... A> int m_FUN_10c445a0(A...); void __thiscall m_FUN_10c445b0(undefined4 *param_2); template<class... A> int m_FUN_10c445b0(A...); void __thiscall m_FUN_10c445c0(undefined4 *param_2); template<class... A> int m_FUN_10c445c0(A...); void __thiscall m_FUN_10c445d0(undefined4 *param_2); template<class... A> int m_FUN_10c445d0(A...); void __thiscall m_FUN_10c445e0(undefined4 *param_2); template<class... A> int m_FUN_10c445e0(A...); void __thiscall m_FUN_10c445f0(undefined4 *param_2); template<class... A> int m_FUN_10c445f0(A...); void __thiscall m_FUN_10c44600(undefined4 *param_2); template<class... A> int m_FUN_10c44600(A...); void __thiscall m_FUN_10c44610(undefined4 *param_2); template<class... A> int m_FUN_10c44610(A...); int * __thiscall m_FUN_10c44640(int *param_2,int *param_3); template<class... A> int m_FUN_10c44640(A...); int * __thiscall m_FUN_10c44a80(int *param_2,int *param_3); template<class... A> int m_FUN_10c44a80(A...); void __thiscall m_FUN_10c44c90(int *param_2,int *param_3); template<class... A> int m_FUN_10c44c90(A...); uint __thiscall m_FUN_10c45540(byte *param_2); template<class... A> int m_FUN_10c45540(A...); uint __thiscall m_FUN_10c455a0(byte *param_2); template<class... A> int m_FUN_10c455a0(A...); uint __thiscall m_FUN_10c45600(byte *param_2); template<class... A> int m_FUN_10c45600(A...); uint __thiscall m_FUN_10c45660(byte *param_2); template<class... A> int m_FUN_10c45660(A...); void __thiscall m_FUN_10c45f50(undefined4 *param_2); template<class... A> int m_FUN_10c45f50(A...); void __thiscall m_FUN_10c45f60(undefined4 *param_2); template<class... A> int m_FUN_10c45f60(A...); void __thiscall m_FUN_10c45fb0(undefined4 *param_2); template<class... A> int m_FUN_10c45fb0(A...); void __thiscall m_FUN_10c47240(undefined4 *param_2); template<class... A> int m_FUN_10c47240(A...); int __thiscall m_FUN_10c4a230(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10c4a230(A...); undefined4 * __thiscall m_FUN_10c4a690(int param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10c4a690(A...); void __thiscall m_FUN_10c4bf60(int param_2); template<class... A> int m_FUN_10c4bf60(A...); void __thiscall m_FUN_10c4bf80(undefined4 param_2); template<class... A> int m_FUN_10c4bf80(A...); void __thiscall m_FUN_10c4c980(byte *param_2,uint param_3); template<class... A> int m_FUN_10c4c980(A...); void __thiscall m_FUN_10c4d160(undefined4 param_2); template<class... A> int m_FUN_10c4d160(A...); undefined4 * __thiscall m_FUN_10c4de00(undefined4 param_2); template<class... A> int m_FUN_10c4de00(A...); undefined4 * __thiscall m_FUN_10c4de40(undefined4 param_2); template<class... A> int m_FUN_10c4de40(A...); undefined4 * __thiscall m_FUN_10c4e720(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10c4e720(A...); undefined4 * __thiscall m_FUN_10c4e7d0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10c4e7d0(A...); undefined4 * __thiscall m_FUN_10c4e880(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10c4e880(A...); undefined4 * __thiscall m_FUN_10c4e930(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10c4e930(A...); undefined4 * __thiscall m_FUN_10c4e9e0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10c4e9e0(A...); undefined4 * __thiscall m_FUN_10c545b0(undefined4 param_2); template<class... A> int m_FUN_10c545b0(A...); undefined4 * __thiscall m_FUN_10c545f0(undefined4 param_2); template<class... A> int m_FUN_10c545f0(A...); undefined4 * __thiscall m_FUN_10c54cf0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10c54cf0(A...); undefined4 * __thiscall m_FUN_10c54da0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10c54da0(A...); undefined4 * __thiscall m_FUN_10c59190(undefined4 param_2); template<class... A> int m_FUN_10c59190(A...); undefined4 * __thiscall m_FUN_10c591d0(undefined4 param_2); template<class... A> int m_FUN_10c591d0(A...); undefined4 * __thiscall m_FUN_10c593f0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10c593f0(A...); undefined4 * __thiscall m_FUN_10c5b020(undefined4 param_2); template<class... A> int m_FUN_10c5b020(A...); undefined4 * __thiscall m_FUN_10c5b060(undefined4 param_2); template<class... A> int m_FUN_10c5b060(A...); undefined4 * __thiscall m_FUN_10c5b0a0(undefined4 *param_2); template<class... A> int m_FUN_10c5b0a0(A...); undefined4 * __thiscall m_FUN_10c5b3c0(undefined4 param_2); template<class... A> int m_FUN_10c5b3c0(A...); int * __thiscall m_FUN_10c5b620(int *param_2); template<class... A> int m_FUN_10c5b620(A...); void __thiscall m_FUN_10c5c9b0(ushort param_2,ushort param_3); template<class... A> int m_FUN_10c5c9b0(A...); void __thiscall m_FUN_10c5ca30(undefined4 param_2); template<class... A> int m_FUN_10c5ca30(A...); void __thiscall m_FUN_10c5ca40(undefined4 param_2); template<class... A> int m_FUN_10c5ca40(A...); void __thiscall m_FUN_10c5ca50(undefined4 param_2); template<class... A> int m_FUN_10c5ca50(A...); void __thiscall m_FUN_10c5ca60(undefined1 param_2); template<class... A> int m_FUN_10c5ca60(A...); void __thiscall m_FUN_10c5ca70(undefined4 param_2); template<class... A> int m_FUN_10c5ca70(A...); void __thiscall m_FUN_10c5ca80(undefined1 param_2); template<class... A> int m_FUN_10c5ca80(A...); void __thiscall m_FUN_10c5ca90(undefined4 param_2); template<class... A> int m_FUN_10c5ca90(A...); void __thiscall m_FUN_10c5caa0(undefined1 param_2); template<class... A> int m_FUN_10c5caa0(A...); void __thiscall m_FUN_10c5cab0(undefined4 param_2); template<class... A> int m_FUN_10c5cab0(A...); void __thiscall m_FUN_10c5cac0(undefined1 param_2); template<class... A> int m_FUN_10c5cac0(A...); void __thiscall m_FUN_10c5cad0(undefined4 param_2); template<class... A> int m_FUN_10c5cad0(A...); void __thiscall m_FUN_10c5cae0(undefined1 param_2); template<class... A> int m_FUN_10c5cae0(A...); void __thiscall m_FUN_10c5caf0(undefined4 param_2); template<class... A> int m_FUN_10c5caf0(A...); void __thiscall m_FUN_10c5cb00(undefined4 param_2); template<class... A> int m_FUN_10c5cb00(A...); void __thiscall m_FUN_10c5cb10(undefined4 param_2); template<class... A> int m_FUN_10c5cb10(A...); void __thiscall m_FUN_10c5cb20(undefined1 param_2); template<class... A> int m_FUN_10c5cb20(A...); void __thiscall m_FUN_10c5cb30(undefined4 param_2); template<class... A> int m_FUN_10c5cb30(A...); void __thiscall m_FUN_10c5cb40(undefined1 param_2); template<class... A> int m_FUN_10c5cb40(A...); undefined4 * __thiscall m_FUN_10c5dc80(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10c5dc80(A...); SCStr * __thiscall m_FUN_10c5de50(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c5de50(A...); undefined4 * __thiscall m_FUN_10c5de80(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10c5de80(A...); undefined4 * __thiscall m_FUN_10c5deb0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10c5deb0(A...); undefined4 * __thiscall m_FUN_10c5dee0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10c5dee0(A...); undefined4 * __thiscall m_FUN_10c5df10(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10c5df10(A...); undefined4 * __thiscall m_FUN_10c5df40(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10c5df40(A...); undefined4 * __thiscall m_FUN_10c5df70(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10c5df70(A...); undefined4 * __thiscall m_FUN_10c5dfa0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10c5dfa0(A...); undefined4 * __thiscall m_FUN_10c5dfd0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10c5dfd0(A...); undefined4 * __thiscall m_FUN_10c5e000(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_10c5e000(A...); SCStr * __thiscall m_FUN_10c5e030(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10c5e030(A...); undefined4 * __thiscall m_FUN_10c5eac0(undefined4 param_2); template<class... A> int m_FUN_10c5eac0(A...); undefined4 * __thiscall m_FUN_10c5eb20(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c5eb20(A...); undefined4 * __thiscall m_FUN_10c5eb30(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c5eb30(A...); undefined4 * __thiscall m_FUN_10c5ebc0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c5ebc0(A...); undefined4 * __thiscall m_FUN_10c5ebd0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c5ebd0(A...); SCStr * __thiscall m_FUN_10c5ed20(SCStr *param_2); template<class... A> int m_FUN_10c5ed20(A...); SCStr * __thiscall m_FUN_10c5ed40(SCStr *param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10c5ed40(A...); SCStr * __thiscall m_FUN_10c5f810(SCStr *param_2,undefined4 param_3); template<class... A> int m_FUN_10c5f810(A...); bool __thiscall m_FUN_10c5fac0(int *param_2); template<class... A> int m_FUN_10c5fac0(A...); bool __thiscall m_FUN_10c5fae0(int *param_2); template<class... A> int m_FUN_10c5fae0(A...); bool __thiscall m_FUN_10c5fb00(int *param_2); template<class... A> int m_FUN_10c5fb00(A...); bool __thiscall m_FUN_10c5fb20(int *param_2); template<class... A> int m_FUN_10c5fb20(A...); void __thiscall m_FUN_10c601b0(int param_2); template<class... A> int m_FUN_10c601b0(A...); void __thiscall m_FUN_10c602a0(int *param_2); template<class... A> int m_FUN_10c602a0(A...); void __thiscall m_FUN_10c60310(undefined4 *param_2); template<class... A> int m_FUN_10c60310(A...); void __thiscall m_FUN_10c603b0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c603b0(A...); void __thiscall m_FUN_10c603d0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c603d0(A...); void __thiscall m_FUN_10c61310(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); template<class... A> int m_FUN_10c61310(A...); void __thiscall m_FUN_10c61670(undefined4 *param_2); template<class... A> int m_FUN_10c61670(A...); void __thiscall m_FUN_10c61680(undefined4 *param_2); template<class... A> int m_FUN_10c61680(A...); undefined4 __thiscall m_FUN_10c64ef0(int param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1); template<class... A> int m_FUN_10c64ef0(A...); undefined4 __thiscall m_FUN_10c676e0(undefined4 param_2); template<class... A> int m_FUN_10c676e0(A...); void __thiscall m_FUN_10c6a150(char param_2); template<class... A> int m_FUN_10c6a150(A...); void __thiscall m_FUN_10c6a170(char param_2); template<class... A> int m_FUN_10c6a170(A...); void __thiscall m_FUN_10c6f730(undefined2 *param_2); template<class... A> int m_FUN_10c6f730(A...); void __thiscall m_FUN_10c6f750(undefined4 *param_2); template<class... A> int m_FUN_10c6f750(A...); void __thiscall m_FUN_10c6f770(undefined4 *param_2); template<class... A> int m_FUN_10c6f770(A...); undefined4 * __thiscall m_FUN_10c704c0(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_10c704c0(A...); undefined4 * __thiscall m_FUN_10c704f0(void *param_2,int param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c704f0(A...); undefined4 * __thiscall m_FUN_10c70550(void *param_2,int param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c70550(A...); undefined4 * __thiscall m_FUN_10c705b0(undefined4 *param_2); template<class... A> int m_FUN_10c705b0(A...); undefined4 * __thiscall m_FUN_10c705d0(undefined4 param_2); template<class... A> int m_FUN_10c705d0(A...); undefined4 * __thiscall m_FUN_10c705e0(undefined4 param_2,undefined4 param_3,undefined4 *param_4); template<class... A> int m_FUN_10c705e0(A...); undefined1 * __thiscall m_FUN_10c705f0(int param_2,int param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c705f0(A...); undefined4 * __thiscall m_FUN_10c70650(void *param_2,int param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c70650(A...); int * __thiscall m_FUN_10c70700(int *param_2); template<class... A> int m_FUN_10c70700(A...); void __thiscall m_FUN_10c709b0(void *param_2,int param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c709b0(A...); void __thiscall m_FUN_10c70ab0(void *param_2,int param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c70ab0(A...); void __thiscall m_FUN_10c713f0(undefined4 *param_2); template<class... A> int m_FUN_10c713f0(A...); void __thiscall m_FUN_10c71410(undefined4 *param_2); template<class... A> int m_FUN_10c71410(A...); void __thiscall m_FUN_10c71430(undefined8 *param_2); template<class... A> int m_FUN_10c71430(A...); undefined4 __thiscall m_FUN_10c71460(byte param_2); template<class... A> int m_FUN_10c71460(A...); void __thiscall m_FUN_10c71640(undefined1 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10c71640(A...); void __thiscall m_FUN_10c71f00(byte param_2); template<class... A> int m_FUN_10c71f00(A...); void __thiscall m_FUN_10c71f20(uint param_2); template<class... A> int m_FUN_10c71f20(A...); void __thiscall m_FUN_10c72120(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10c72120(A...); void __thiscall m_FUN_10c72190(void *param_2,int param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c72190(A...); void __thiscall m_FUN_10c721d0(void *param_2,int param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c721d0(A...); undefined4 * __thiscall m_FUN_10c72210(uint param_2,undefined4 param_3,size_t param_4,char param_5); template<class... A> int m_FUN_10c72210(A...); void __thiscall m_FUN_10c72980(uint param_2,undefined4 param_3); template<class... A> int m_FUN_10c72980(A...); void __thiscall m_FUN_10c733c0(void *param_2,int param_3); template<class... A> int m_FUN_10c733c0(A...); void __thiscall m_FUN_10c734c0(void *param_2,int param_3); template<class... A> int m_FUN_10c734c0(A...); undefined4 * __thiscall m_FUN_10c746b0(undefined4 param_2,uint param_3); template<class... A> int m_FUN_10c746b0(A...); undefined4 * __thiscall m_FUN_10c74760(undefined4 param_2); template<class... A> int m_FUN_10c74760(A...); undefined4 * __thiscall m_FUN_10c74770(undefined4 param_2); template<class... A> int m_FUN_10c74770(A...); undefined4 * __thiscall m_FUN_10c74780(undefined4 param_2); template<class... A> int m_FUN_10c74780(A...); undefined4 * __thiscall m_FUN_10c74960(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c74960(A...); undefined4 * __thiscall m_FUN_10c749d0(undefined4 param_2); template<class... A> int m_FUN_10c749d0(A...); undefined4 * __thiscall m_FUN_10c74cf0(undefined4 param_2); template<class... A> int m_FUN_10c74cf0(A...); undefined4 * __thiscall m_FUN_10c74e80(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c74e80(A...); undefined4 * __thiscall m_FUN_10c74ea0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c74ea0(A...); undefined4 * __thiscall m_FUN_10c74ec0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c74ec0(A...); int * __thiscall m_FUN_10c74ee0(undefined4 *param_2); template<class... A> int m_FUN_10c74ee0(A...); undefined4 * __thiscall m_FUN_10c753d0(undefined4 *param_2); template<class... A> int m_FUN_10c753d0(A...); undefined4 * __thiscall m_FUN_10c75450(int *param_2); template<class... A> int m_FUN_10c75450(A...); int * __thiscall m_FUN_10c75530(undefined4 *param_2); template<class... A> int m_FUN_10c75530(A...); undefined4 * __thiscall m_FUN_10c759d0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c759d0(A...); undefined4 * __thiscall m_FUN_10c75a10(undefined4 param_2); template<class... A> int m_FUN_10c75a10(A...); undefined4 * __thiscall m_FUN_10c75a50(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c75a50(A...); undefined4 * __thiscall m_FUN_10c75a80(undefined4 param_2); template<class... A> int m_FUN_10c75a80(A...); undefined4 * __thiscall m_FUN_10c75ac0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10c75ac0(A...); undefined4 * __thiscall m_FUN_10c75b80(undefined4 param_2); template<class... A> int m_FUN_10c75b80(A...); undefined4 * __thiscall m_FUN_10c75bd0(byte param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6); template<class... A> int m_FUN_10c75bd0(A...); undefined4 * __thiscall m_FUN_10c766e0(undefined4 *param_2); template<class... A> int m_FUN_10c766e0(A...); int * __thiscall m_FUN_10c76860(undefined4 *param_2); template<class... A> int m_FUN_10c76860(A...); int * __thiscall m_FUN_10c76880(int *param_2); template<class... A> int m_FUN_10c76880(A...); int * __thiscall m_FUN_10c769a0(int *param_2); template<class... A> int m_FUN_10c769a0(A...); undefined4 __thiscall m_FUN_10c76c00(int param_2); template<class... A> int m_FUN_10c76c00(A...); int __thiscall m_FUN_10c76cd0(int param_2); template<class... A> int m_FUN_10c76cd0(A...); int __thiscall m_FUN_10c76ce0(int param_2); template<class... A> int m_FUN_10c76ce0(A...); int __thiscall m_FUN_10c76cf0(int param_2); template<class... A> int m_FUN_10c76cf0(A...); int __thiscall m_FUN_10c76d10(int param_2); template<class... A> int m_FUN_10c76d10(A...); void __thiscall m_FUN_10c76dc0(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c76dc0(A...); int __thiscall m_FUN_10c76df0(int *param_2); template<class... A> int m_FUN_10c76df0(A...); bool __thiscall m_FUN_10c76ed0(char param_2,char param_3); template<class... A> int m_FUN_10c76ed0(A...); bool __thiscall m_FUN_10c76f10(char param_2,char param_3); template<class... A> int m_FUN_10c76f10(A...); void __thiscall m_FUN_10c77690(undefined4 param_2); template<class... A> int m_FUN_10c77690(A...); void __thiscall m_FUN_10c77b00(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10c77b00(A...); undefined1 __thiscall m_FUN_10c78a00(int param_2); template<class... A> int m_FUN_10c78a00(A...); int __thiscall m_FUN_10c78a10(int param_2); template<class... A> int m_FUN_10c78a10(A...); undefined4 * __thiscall m_FUN_10c78e10(int param_2); template<class... A> int m_FUN_10c78e10(A...); void __thiscall m_FUN_10c79070(uint param_2); template<class... A> int m_FUN_10c79070(A...); void __thiscall m_FUN_10c79110(int param_2); template<class... A> int m_FUN_10c79110(A...); uint __thiscall m_FUN_10c79170(uint param_2); template<class... A> int m_FUN_10c79170(A...); uint __thiscall m_FUN_10c791b0(uint param_2); template<class... A> int m_FUN_10c791b0(A...); uint __thiscall m_FUN_10c791f0(uint param_2); template<class... A> int m_FUN_10c791f0(A...); void __thiscall m_FUN_10c79e40(uint param_2); template<class... A> int m_FUN_10c79e40(A...); void __thiscall m_FUN_10c79f10(uint param_2); template<class... A> int m_FUN_10c79f10(A...); void __thiscall m_FUN_10c79fe0(uint param_2); template<class... A> int m_FUN_10c79fe0(A...); void __thiscall m_FUN_10c7a0b0(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c7a0b0(A...); void __thiscall m_FUN_10c7a1c0(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c7a1c0(A...); int __thiscall m_FUN_10c7a8c0(int param_2); template<class... A> int m_FUN_10c7a8c0(A...); void __thiscall m_FUN_10c7bb40(undefined4 *param_2); template<class... A> int m_FUN_10c7bb40(A...); void __thiscall m_FUN_10c7bb70(int param_2,int param_3); template<class... A> int m_FUN_10c7bb70(A...); void __thiscall m_FUN_10c7bc50(undefined4 param_2); template<class... A> int m_FUN_10c7bc50(A...); void __thiscall m_FUN_10c7bd60(size_t param_2); template<class... A> int m_FUN_10c7bd60(A...); void __thiscall m_FUN_10c7bda0(int param_2,undefined4 param_3); template<class... A> int m_FUN_10c7bda0(A...); int __thiscall m_FUN_10c7c500(int param_2); template<class... A> int m_FUN_10c7c500(A...); void __thiscall m_FUN_10c7cfb0(int param_2); template<class... A> int m_FUN_10c7cfb0(A...); void __thiscall m_FUN_10c7d090(uint param_2); template<class... A> int m_FUN_10c7d090(A...); void __thiscall m_FUN_10c7dfc0(undefined4 *param_2); template<class... A> int m_FUN_10c7dfc0(A...); void __thiscall m_FUN_10c7e310(int *param_2); template<class... A> int m_FUN_10c7e310(A...); bool __thiscall m_FUN_10c7e9b0(byte param_2,ushort param_3); template<class... A> int m_FUN_10c7e9b0(A...); void __thiscall m_FUN_10c7fd80(uint param_2); template<class... A> int m_FUN_10c7fd80(A...); undefined4 __thiscall m_FUN_10c80130(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10c80130(A...); void __thiscall m_FUN_10c80200(char param_2); template<class... A> int m_FUN_10c80200(A...); SCStr * __thiscall m_FUN_10c81e30(SCStr *param_2); template<class... A> int m_FUN_10c81e30(A...); SCStr * __thiscall m_FUN_10c81ed0(SCStr *param_2); template<class... A> int m_FUN_10c81ed0(A...); undefined4 __thiscall m_FUN_10c83e40(int param_2); template<class... A> int m_FUN_10c83e40(A...); undefined4 __thiscall m_FUN_10c83f80(int param_2); template<class... A> int m_FUN_10c83f80(A...); undefined4 * __thiscall m_FUN_10c84630(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c84630(A...); undefined4 * __thiscall m_FUN_10c84680(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c84680(A...); undefined4 * __thiscall m_FUN_10c846d0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10c846d0(A...); undefined4 * __thiscall m_FUN_10c846f0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10c846f0(A...); undefined4 * __thiscall m_FUN_10c84710(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_10c84710(A...); undefined4 * __thiscall m_FUN_10c84730(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_10c84730(A...); undefined4 * __thiscall m_FUN_10c84980(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10c84980(A...); undefined4 * __thiscall m_FUN_10c849a0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10c849a0(A...); undefined4 * __thiscall m_FUN_10c84a00(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10c84a00(A...); undefined4 * __thiscall m_FUN_10c84a50(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10c84a50(A...); void __thiscall m_FUN_10c84d40(undefined4 *param_2); template<class... A> int m_FUN_10c84d40(A...); void __thiscall m_FUN_10c84d60(undefined4 *param_2); template<class... A> int m_FUN_10c84d60(A...); void __thiscall m_FUN_10c84d80(undefined4 *param_2); template<class... A> int m_FUN_10c84d80(A...); undefined4 * __thiscall m_FUN_10c88650(undefined4 param_2); template<class... A> int m_FUN_10c88650(A...); undefined4 * __thiscall m_FUN_10c88690(undefined4 param_2); template<class... A> int m_FUN_10c88690(A...); undefined4 * __thiscall m_FUN_10c886b0(undefined4 param_2); template<class... A> int m_FUN_10c886b0(A...); undefined4 * __thiscall m_FUN_10c88890(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c88890(A...); undefined4 * __thiscall m_FUN_10c888a0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c888a0(A...); undefined4 * __thiscall m_FUN_10c888b0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c888b0(A...); undefined4 * __thiscall m_FUN_10c888c0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c888c0(A...); undefined4 * __thiscall m_FUN_10c888d0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c888d0(A...); undefined4 * __thiscall m_FUN_10c888e0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c888e0(A...); undefined4 * __thiscall m_FUN_10c888f0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c888f0(A...); undefined4 * __thiscall m_FUN_10c88900(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c88900(A...); undefined8 * __thiscall m_FUN_10c88950(undefined8 *param_2); template<class... A> int m_FUN_10c88950(A...); undefined8 * __thiscall m_FUN_10c88970(undefined8 *param_2); template<class... A> int m_FUN_10c88970(A...); undefined4 * __thiscall m_FUN_10c88990(undefined4 param_2); template<class... A> int m_FUN_10c88990(A...); undefined4 * __thiscall m_FUN_10c889b0(undefined4 param_2); template<class... A> int m_FUN_10c889b0(A...); undefined4 * __thiscall m_FUN_10c89180(undefined4 param_2); template<class... A> int m_FUN_10c89180(A...); undefined4 * __thiscall m_FUN_10c89190(undefined4 param_2); template<class... A> int m_FUN_10c89190(A...); int * __thiscall m_FUN_10c89c70(int *param_2); template<class... A> int m_FUN_10c89c70(A...); bool __thiscall m_FUN_10c89e80(int *param_2); template<class... A> int m_FUN_10c89e80(A...); bool __thiscall m_FUN_10c89ea0(int *param_2); template<class... A> int m_FUN_10c89ea0(A...); bool __thiscall m_FUN_10c89ec0(int *param_2); template<class... A> int m_FUN_10c89ec0(A...); bool __thiscall m_FUN_10c89ee0(int *param_2); template<class... A> int m_FUN_10c89ee0(A...); bool __thiscall m_FUN_10c89f00(int *param_2); template<class... A> int m_FUN_10c89f00(A...); bool __thiscall m_FUN_10c89f20(int *param_2); template<class... A> int m_FUN_10c89f20(A...); bool __thiscall m_FUN_10c89f40(int *param_2); template<class... A> int m_FUN_10c89f40(A...); bool __thiscall m_FUN_10c89f60(int *param_2); template<class... A> int m_FUN_10c89f60(A...); bool __thiscall m_FUN_10c89f80(int *param_2); template<class... A> int m_FUN_10c89f80(A...); bool __thiscall m_FUN_10c89fa0(int *param_2); template<class... A> int m_FUN_10c89fa0(A...); };

extern int FUN_10c35e50(...);
extern int FUN_10c4afb0(...);
extern int FUN_10c4afc0(...);
extern int FUN_10c4f250(...);
extern int FUN_10c4f260(...);
extern int FUN_10c4f270(...);
extern int FUN_10c4f280(...);
extern int FUN_10c55500(...);
extern int FUN_10c55510(...);
extern int FUN_10c59670(...);
extern int FUN_10c80f70(...);
extern int FUN_10c80f80(...);
extern int LOCK(...);
extern int UNLOCK(...);
extern __declspec(dllimport) int _Strcoll(...);
extern __declspec(dllimport) int _Strxfrm(...);
extern int __allmul(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int func_0x1001c6cf(...);
extern int func_0x10029fe1(...);
extern int func_0x1008a53f(...);
extern int func_0x10095197(...);
extern __declspec(dllimport) int memchr(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern int swi(...);
extern int thunk_FUN_10120220(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012a4c0(...);
template<class... A> int __stdcall thunk_FUN_1012cab0(A...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a9be0(...);
extern int thunk_FUN_101a9c80(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_102207b0(...);
template<class... A> int __stdcall thunk_FUN_10246170(A...);
extern int thunk_FUN_10246290(...);
extern int thunk_FUN_103d0730(...);
template<class... A> int __stdcall thunk_FUN_103d3340(A...);
extern int thunk_FUN_103d4520(...);
extern int thunk_FUN_106845c0(...);
extern int thunk_FUN_10b034d0(...);
extern int thunk_FUN_10c34bf0(...);
extern int thunk_FUN_10c351c0(...);
extern int thunk_FUN_10c35e50(...);
extern int thunk_FUN_10c3ceb0(...);
extern int thunk_FUN_10c3d960(...);
extern int thunk_FUN_10c3ecb0(...);
extern int thunk_FUN_10c3ed30(...);
extern int thunk_FUN_10c3edb0(...);
extern int thunk_FUN_10c3ee30(...);
extern int thunk_FUN_10c3f3e0(...);
extern int thunk_FUN_10c3f690(...);
extern int thunk_FUN_10c3f940(...);
extern int thunk_FUN_10c410d0(...);
extern int thunk_FUN_10c41200(...);
extern int thunk_FUN_10c412b0(...);
extern int thunk_FUN_10c416b0(...);
extern int thunk_FUN_10c41fa0(...);
extern int thunk_FUN_10c42950(...);
template<class... A> int __stdcall thunk_FUN_10c44850(A...);
extern int thunk_FUN_10c46bd0(...);
extern int thunk_FUN_10c667b0(...);
extern int thunk_FUN_10c716e0(...);
extern int thunk_FUN_10c71eb0(...);
extern int thunk_FUN_10c71f40(...);
extern int thunk_FUN_10c72390(...);
template<class... A> int __stdcall thunk_FUN_10c72bf0(A...);
template<class... A> int __stdcall thunk_FUN_10c76ac0(A...);
extern int thunk_FUN_10c78090(...);
extern int thunk_FUN_10c78fc0(...);
extern int thunk_FUN_10c794d0(...);
extern int thunk_FUN_10c7a2d0(...);
template<class... A> int __stdcall thunk_FUN_10c7a9d0(A...);
extern int thunk_FUN_10c7bc70(...);
extern int thunk_FUN_10c7bd50(...);
extern int thunk_FUN_10c7cce0(...);
extern int thunk_FUN_10c7cd70(...);
extern int thunk_FUN_10c7d430(...);
extern int thunk_FUN_10c7dc20(...);
extern int thunk_FUN_10c7dc90(...);
extern int thunk_FUN_10c80150(...);
extern int thunk_FUN_10c85310(...);
extern int thunk_FUN_10c853f0(...);
extern int thunk_FUN_10c85ca0(...);
extern int thunk_FUN_10c86a70(...);
extern int thunk_FUN_10c870a0(...);
extern int thunk_FUN_10c87ec0(...);
extern int thunk_FUN_10c87f40(...);
extern int thunk_FUN_10c892d0(...);
extern int thunk_FUN_10c89350(...);
extern int thunk_FUN_111a2bd0(...);
extern int thunk_FUN_111a2df0(...);
extern int thunk_FUN_111c05a0(...);
template<class... A> int __stdcall thunk_FUN_111c0760(A...);
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
extern int thunk_FUN_1125ac90(...);
extern int thunk_FUN_1125acd0(...);
template<class... A> int __stdcall thunk_FUN_1125b030(A...);
extern int thunk_FUN_1125b370(...);
extern int thunk_FUN_1125b3f0(...);
extern int thunk_FUN_1125bf90(...);
extern int thunk_FUN_112a7c30(...);
extern int thunk_FUN_112a7f20(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113b9e10(...);
extern int thunk_FUN_113b9f60(...);
extern int thunk_FUN_1145c460(...);
extern int thunk_FUN_1145e270(...);
extern int thunk_FUN_1145e290(...);
extern int thunk_FUN_1145eab0(...);
extern int thunk_FUN_1145f2e0(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int DAT_0000000c;
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_1191a7c0;
extern int DAT_12126b84;
extern int DAT_121a568c;
extern int UNK_11918fb0;
extern int g_lSCObjCount;
extern int ghidra_vftable_DownloadCertBundleOp;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_REqualizerListener;
extern int ghidra_vftable_RHTTPDataIO;
extern int ghidra_vftable_RHouseholdSettingGetRequest;
extern int ghidra_vftable_RHouseholdSettingPostRequest;
extern int ghidra_vftable_RHttpBaseNoRedirectAIOOp;
extern int ghidra_vftable_RHttpGetNoRedirectAIOOp;
extern int ghidra_vftable_RUpnpAIGetAudioInputAttributesAIOOp;
extern int ghidra_vftable_RUpnpAIGetLineInLevelAIOOp;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_RUpnpDPGetAutoplayLinkedZonesAIOOp;
extern int ghidra_vftable_RUpnpDPGetAutoplayRoomUUIDAIOOp;
extern int ghidra_vftable_RUpnpDPGetAutoplayVolumeAIOOp;
extern int ghidra_vftable_RUpnpDPGetUseAutoplayVolumeAIOOp;
extern int ghidra_vftable_RUpnpDPSetAutoplayLinkedZonesAIOOp;
extern int ghidra_vftable_RUpnpRCGetSupportsOutputFixedAIOOp;
extern int ghidra_vftable_RootCACertBundleDownloader;
extern int ghidra_vftable_SCCacheManager;
extern int ghidra_vftable_SCDeviceMusicEqualizationEventSinkInternal;
extern int ghidra_vftable_SCIDeviceAutoplay;
extern int ghidra_vftable_SCIDeviceLineIn;
extern int ghidra_vftable_SCIDeviceLineOut;
extern int ghidra_vftable_SCIDeviceMusicEqualization;
extern int ghidra_vftable_SCIMdnsListener;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpAudioInGetAudioInputAttributes;
extern int ghidra_vftable_SCIOpAudioInGetLineInLevel;
extern int ghidra_vftable_SCIOpAudioInSetAudioInputAttributes;
extern int ghidra_vftable_SCIOpAudioInSetLineInLevel;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIOpDevicePropertiesGetAutoplayLinkedZones;
extern int ghidra_vftable_SCIOpDevicePropertiesGetAutoplayRoomUUID;
extern int ghidra_vftable_SCIOpDevicePropertiesGetAutoplayVolume;
extern int ghidra_vftable_SCIOpDevicePropertiesGetUseAutoplayVolume;
extern int ghidra_vftable_SCIOpDevicePropertiesSetUseAutoplayVolume;
extern int ghidra_vftable_SCIOpRenderingControlGetSupportsOutputFixed;
extern int ghidra_vftable_SCIOwnedObjImpl;
extern int ghidra_vftable_SCITearOffObjImpl;
extern int ghidra_vftable_SCIWifiListener;
extern int ghidra_vftable_SCOpAudioInGetAudioInputAttributes;
extern int ghidra_vftable_SCOpAudioInGetLineInLevel;
extern int ghidra_vftable_SCOpAudioInSetAudioInputAttributes;
extern int ghidra_vftable_SCOpAudioInSetLineInLevel;
extern int ghidra_vftable_SCOpDevicePropertiesGetAutoplayLinkedZones;
extern int ghidra_vftable_SCOpDevicePropertiesGetAutoplayRoomUUID;
extern int ghidra_vftable_SCOpDevicePropertiesGetAutoplayVolume;
extern int ghidra_vftable_SCOpDevicePropertiesGetUseAutoplayVolume;
extern int ghidra_vftable_SCOpDevicePropertiesSetUseAutoplayVolume;
extern int ghidra_vftable_SCOpGetCertBundle;
extern int ghidra_vftable_SCOpGetHouseholdSetting;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCOpRenderingControlGetSupportsOutputFixed;
extern int ghidra_vftable_SCOpSetHouseholdSetting;
extern int ghidra_vftable_SCSettingsReplicatorDateTime_EventSink;
extern int ghidra_vftable_SCTestPoint;
extern int ghidra_vftable_SCUrlRequest;
extern int ghidra_vftable_SCWrapperObj;
extern int ghidra_vftable_std_Node_assert;
extern int ghidra_vftable_std_Node_back;
extern int ghidra_vftable_std_Node_base;
extern int ghidra_vftable_std_Node_capture;
extern int ghidra_vftable_std_Node_class;
extern int ghidra_vftable_std_Node_end_group;
extern int ghidra_vftable_std_Node_end_rep;
extern int ghidra_vftable_std_Node_endif;
extern int ghidra_vftable_std_Node_if;
extern int ghidra_vftable_std_Node_rep;
extern int ghidra_vftable_std_Node_str;
extern int ghidra_vftable_std_Root_node;
extern int in_EAX;
extern int uStack_4;
extern int uStack_410;
extern int uStack_41c;
extern int uStack_420;
extern int uStack_8;
extern undefined1 LAB_10c447a4[];
extern undefined1 LAB_10c44be4[];
extern undefined1 LAB_10c44e10[];
extern undefined1 LAB_10c70c14[];
extern undefined1 LAB_10c70c8c[];
extern undefined1 LAB_10c70d18[];
extern undefined1 LAB_10c70db7[];
extern undefined1 LAB_10c70e30[];
extern undefined1 LAB_10c70ebc[];
extern undefined1 LAB_10c7a97b[];
extern undefined1 LAB_10c7c129[];
extern undefined1 LAB_10c7c135[];
extern undefined1 LAB_10c7c31b[];
extern undefined1 LAB_10c7c330[];
extern undefined1 LAB_10c7ce6b[];
extern undefined1 LAB_10c7cf07[];
extern undefined1 LAB_10c7cf36[];
extern undefined1 LAB_10c80253[];
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_1154fc30[];
extern undefined1 LAB_115d2530[];
extern undefined1 LAB_116de310[];
extern undefined1 LAB_116de755[];
extern undefined1 LAB_116dedb0[];
extern undefined1 LAB_116dede0[];
extern undefined1 LAB_116dee10[];
extern undefined1 LAB_116dee40[];
extern undefined1 LAB_116dee70[];
extern undefined1 LAB_116dfd50[];
extern undefined1 LAB_116dfd80[];
extern undefined1 LAB_116dfdb0[];
extern undefined1 LAB_116dfde0[];
extern undefined1 LAB_116e0690[];
extern undefined1 LAB_116e60a0[];
extern undefined1 LAB_116e60d0[];
extern undefined1 LAB_117c174c[];
extern undefined1 LAB_117c17f0[];
extern void *ExceptionList;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c35fe0(void);
template<class... A> int FUN_10c35fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c360b0(void);
template<class... A> int FUN_10c360b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c36350(undefined4 *param_1);
template<class... A> int FUN_10c36350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c36370(int *param_1);
template<class... A> int FUN_10c36370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c365a0(int *param_1);
template<class... A> int FUN_10c365a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c365b0(undefined4 *param_1);
template<class... A> int FUN_10c365b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c365c0(int *param_1);
template<class... A> int FUN_10c365c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c365d0(undefined4 *param_1);
template<class... A> int FUN_10c365d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c365e0(int param_1);
template<class... A> int FUN_10c365e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c365f0(undefined4 *param_1);
template<class... A> int FUN_10c365f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c36600(int *param_1);
template<class... A> int FUN_10c36600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c36610(int *param_1);
template<class... A> int FUN_10c36610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c36620(undefined4 *param_1);
template<class... A> int FUN_10c36620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c36630(undefined4 *param_1);
template<class... A> int FUN_10c36630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10c36640(int *param_1);
template<class... A> int FUN_10c36640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10c36650(int *param_1,int *param_2);
template<class... A> int FUN_10c36650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_10c36670(byte *param_1);
template<class... A> int __stdcall FUN_10c36670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10c366c0(int *param_1,int *param_2);
template<class... A> int FUN_10c366c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c369a0(undefined4 *param_1);
template<class... A> int FUN_10c369a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c36b00(int param_1);
template<class... A> int FUN_10c36b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c36b20(int param_1);
template<class... A> int FUN_10c36b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c36c30(int param_1);
template<class... A> int FUN_10c36c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c36e00(undefined4 param_1);
template<class... A> int FUN_10c36e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c36e10(undefined4 param_1);
template<class... A> int FUN_10c36e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c36e20(undefined4 param_1);
template<class... A> int FUN_10c36e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c36e30(undefined4 param_1);
template<class... A> int FUN_10c36e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c36e40(undefined4 param_1);
template<class... A> int FUN_10c36e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c36e50(undefined4 param_1);
template<class... A> int FUN_10c36e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c36e60(int param_1);
template<class... A> int FUN_10c36e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c36e70(int param_1);
template<class... A> int FUN_10c36e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c36e80(undefined4 param_1);
template<class... A> int FUN_10c36e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c36e90(undefined4 param_1);
template<class... A> int FUN_10c36e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c36ea0(int param_1);
template<class... A> int FUN_10c36ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c36f30(int param_1);
template<class... A> int FUN_10c36f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c36f40(int param_1);
template<class... A> int FUN_10c36f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c36f50(int param_1);
template<class... A> int FUN_10c36f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c36fd0(void);
template<class... A> int FUN_10c36fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c37090(int param_1);
template<class... A> int FUN_10c37090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c370a0(undefined4 *param_1);
template<class... A> int FUN_10c370a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c371f0(int param_1,int param_2,int param_3);
template<class... A> int FUN_10c371f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c37550(uint param_1);
template<class... A> int FUN_10c37550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c375d0(uint param_1);
template<class... A> int FUN_10c375d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c376a0(int param_1);
template<class... A> int FUN_10c376a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c376c0(int param_1);
template<class... A> int FUN_10c376c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c37830(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10c37830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c37880(int param_1,int param_2);
template<class... A> int FUN_10c37880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c378d0(int param_1,int param_2);
template<class... A> int FUN_10c378d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c37920(undefined4 *param_1);
template<class... A> int FUN_10c37920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c37f20(int param_1);
template<class... A> int FUN_10c37f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10c381c0(int param_1);
template<class... A> int FUN_10c381c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c381d0(void);
template<class... A> int FUN_10c381d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c381e0(void);
template<class... A> int FUN_10c381e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c381f0(void);
template<class... A> int FUN_10c381f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c38200(void);
template<class... A> int FUN_10c38200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c38210(undefined4 *param_1);
template<class... A> int FUN_10c38210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c38220(undefined4 *param_1);
template<class... A> int FUN_10c38220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c38a10(undefined4 *param_1);
template<class... A> int FUN_10c38a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c38a40(undefined4 *param_1);
template<class... A> int FUN_10c38a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c38fd0(int *param_1);
template<class... A> int FUN_10c38fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c39ae0(undefined4 *param_1);
template<class... A> int FUN_10c39ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c3a2f0(undefined4 *param_1);
template<class... A> int FUN_10c3a2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c3a560(undefined4 *param_1);
template<class... A> int FUN_10c3a560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c3a570(int *param_1);
template<class... A> int FUN_10c3a570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c3a580(undefined4 *param_1);
template<class... A> int FUN_10c3a580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c3a590(int *param_1);
template<class... A> int FUN_10c3a590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c3a5a0(undefined4 *param_1);
template<class... A> int FUN_10c3a5a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c3b250(undefined4 *param_1);
template<class... A> int FUN_10c3b250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c3b260(undefined4 *param_1);
template<class... A> int FUN_10c3b260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c3b6b0(undefined4 *param_1);
template<class... A> int FUN_10c3b6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3b790(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10c3b790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c3c310(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10c3c310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c3c330(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10c3c330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c3c350(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c3c350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c3c370(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10c3c370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c3c390(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10c3c390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c3c3b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c3c3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c3c3d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10c3c3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c3c3f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10c3c3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c3c410(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c3c410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c3c430(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10c3c430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c3c450(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10c3c450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c3c470(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c3c470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c3c490(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10c3c490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c3c620(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_10c3c620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c3c640(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c3c640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c3c650(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c3c650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c3c660(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c3c660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c3c670(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c3c670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c3c680(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c3c680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c3c690(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c3c690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c3c6a0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c3c6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c3c6b0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c3c6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c3c750(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10c3c750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c3c890(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10c3c890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_10c3ca90(byte *param_1);
template<class... A> int __stdcall FUN_10c3ca90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10c3cae0(int *param_1,int *param_2);
template<class... A> int FUN_10c3cae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_10c3cb00(byte *param_1);
template<class... A> int __stdcall FUN_10c3cb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10c3cb50(int *param_1,int *param_2);
template<class... A> int FUN_10c3cb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3cb70(void);
template<class... A> int FUN_10c3cb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3cb80(void);
template<class... A> int FUN_10c3cb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3cb90(void);
template<class... A> int FUN_10c3cb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3cba0(void);
template<class... A> int FUN_10c3cba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3cbb0(void);
template<class... A> int FUN_10c3cbb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3cbc0(void);
template<class... A> int FUN_10c3cbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3cbd0(void);
template<class... A> int FUN_10c3cbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3cd00(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c3cd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3cd10(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c3cd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3cd20(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c3cd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3cd30(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c3cd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3cd40(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c3cd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3cd50(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c3cd50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3cd60(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c3cd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3cd70(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c3cd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3cd80(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c3cd80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3cd90(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c3cd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3cda0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c3cda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3cdb0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c3cdb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c3ce50(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10c3ce50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c3ce80(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10c3ce80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3d060(void);
template<class... A> int FUN_10c3d060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3d070(void);
template<class... A> int FUN_10c3d070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3d080(void);
template<class... A> int FUN_10c3d080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3d090(void);
template<class... A> int FUN_10c3d090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3d0a0(void);
template<class... A> int FUN_10c3d0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3d0b0(void);
template<class... A> int FUN_10c3d0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3d0c0(void);
template<class... A> int FUN_10c3d0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3d0d0(void);
template<class... A> int FUN_10c3d0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3d0e0(void);
template<class... A> int FUN_10c3d0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c3d880(uint param_1,byte *param_2);
template<class... A> int FUN_10c3d880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c3d8d0(uint param_1,byte *param_2);
template<class... A> int FUN_10c3d8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3d920(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_10c3d920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3d9b0(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_10c3d9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3d9f0(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_10c3d9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3da30(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10c3da30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3da50(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10c3da50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3da70(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10c3da70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3da90(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10c3da90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3dab0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10c3dab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3dad0(undefined4 param_1,int param_2);
template<class... A> int FUN_10c3dad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3db00(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10c3db00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3db20(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10c3db20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3db40(undefined4 *param_1);
template<class... A> int FUN_10c3db40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3db50(undefined4 *param_1);
template<class... A> int FUN_10c3db50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3db60(undefined4 *param_1);
template<class... A> int FUN_10c3db60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3db70(undefined4 *param_1);
template<class... A> int FUN_10c3db70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3db80(undefined4 *param_1);
template<class... A> int FUN_10c3db80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3db90(undefined4 *param_1);
template<class... A> int FUN_10c3db90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3dba0(undefined4 *param_1);
template<class... A> int FUN_10c3dba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3dbb0(undefined4 *param_1);
template<class... A> int FUN_10c3dbb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3dbc0(undefined4 *param_1);
template<class... A> int FUN_10c3dbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c3dbd0(byte *param_1);
template<class... A> int FUN_10c3dbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c3dc20(byte *param_1);
template<class... A> int FUN_10c3dc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3dc70(undefined4 param_1);
template<class... A> int FUN_10c3dc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3dc80(undefined4 param_1);
template<class... A> int FUN_10c3dc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3dc90(undefined4 param_1);
template<class... A> int FUN_10c3dc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3dca0(undefined4 param_1);
template<class... A> int FUN_10c3dca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3dfc0(undefined4 *param_1);
template<class... A> int FUN_10c3dfc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10c3dfd0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10c3dfd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10c3e000(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10c3e000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e030(undefined4 param_1);
template<class... A> int FUN_10c3e030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c3e040(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10c3e040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c3e070(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10c3e070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e0a0(undefined4 param_1);
template<class... A> int FUN_10c3e0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e0b0(undefined4 param_1);
template<class... A> int FUN_10c3e0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e0c0(undefined4 param_1);
template<class... A> int FUN_10c3e0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e0d0(undefined4 param_1);
template<class... A> int FUN_10c3e0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e0e0(undefined4 param_1);
template<class... A> int FUN_10c3e0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e0f0(undefined4 param_1);
template<class... A> int FUN_10c3e0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e100(undefined4 param_1);
template<class... A> int FUN_10c3e100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e110(undefined4 param_1);
template<class... A> int FUN_10c3e110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e120(undefined4 param_1);
template<class... A> int FUN_10c3e120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e130(undefined4 param_1);
template<class... A> int FUN_10c3e130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e140(undefined4 param_1);
template<class... A> int FUN_10c3e140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e150(undefined4 param_1);
template<class... A> int FUN_10c3e150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e160(undefined4 param_1);
template<class... A> int FUN_10c3e160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e170(undefined4 param_1);
template<class... A> int FUN_10c3e170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e180(undefined4 param_1);
template<class... A> int FUN_10c3e180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e190(undefined4 param_1);
template<class... A> int FUN_10c3e190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e1a0(undefined4 param_1);
template<class... A> int FUN_10c3e1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e1b0(undefined4 param_1);
template<class... A> int FUN_10c3e1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e1c0(undefined4 param_1);
template<class... A> int FUN_10c3e1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e1d0(undefined4 param_1);
template<class... A> int FUN_10c3e1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e1e0(undefined4 param_1);
template<class... A> int FUN_10c3e1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e1f0(undefined4 param_1);
template<class... A> int FUN_10c3e1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e200(undefined4 param_1);
template<class... A> int FUN_10c3e200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e210(undefined4 param_1);
template<class... A> int FUN_10c3e210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e220(undefined4 param_1);
template<class... A> int FUN_10c3e220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3e230(undefined4 param_1);
template<class... A> int FUN_10c3e230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3e240(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10c3e240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3e250(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10c3e250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3e260(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10c3e260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3e280(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10c3e280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3e2d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10c3e2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3e2f0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10c3e2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3e3f0(void);
template<class... A> int FUN_10c3e3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3e400(undefined4 param_1,int param_2);
template<class... A> int FUN_10c3e400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3e420(void);
template<class... A> int FUN_10c3e420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3e430(undefined4 param_1,int param_2);
template<class... A> int FUN_10c3e430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c3e440(int param_1,int param_2);
template<class... A> int FUN_10c3e440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3ec30(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c3ec30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3ec50(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c3ec50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3ec70(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c3ec70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3ec90(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c3ec90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3efb0(undefined4 param_1);
template<class... A> int FUN_10c3efb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3efc0(undefined4 param_1);
template<class... A> int FUN_10c3efc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3efd0(undefined4 param_1);
template<class... A> int FUN_10c3efd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3efe0(undefined4 param_1);
template<class... A> int FUN_10c3efe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3eff0(undefined4 param_1);
template<class... A> int FUN_10c3eff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f000(undefined4 param_1);
template<class... A> int FUN_10c3f000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f010(undefined4 param_1);
template<class... A> int FUN_10c3f010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f020(undefined4 param_1);
template<class... A> int FUN_10c3f020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f030(undefined4 param_1);
template<class... A> int FUN_10c3f030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f040(undefined4 param_1);
template<class... A> int FUN_10c3f040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f050(undefined4 param_1);
template<class... A> int FUN_10c3f050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f060(undefined4 param_1);
template<class... A> int FUN_10c3f060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f070(undefined4 param_1);
template<class... A> int FUN_10c3f070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f080(undefined4 param_1);
template<class... A> int FUN_10c3f080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f090(undefined4 param_1);
template<class... A> int FUN_10c3f090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f0a0(undefined4 param_1);
template<class... A> int FUN_10c3f0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f0b0(undefined4 param_1);
template<class... A> int FUN_10c3f0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f0c0(undefined4 param_1);
template<class... A> int FUN_10c3f0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f0d0(undefined4 param_1);
template<class... A> int FUN_10c3f0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f0e0(undefined4 param_1);
template<class... A> int FUN_10c3f0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f0f0(undefined4 param_1);
template<class... A> int FUN_10c3f0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f100(undefined4 param_1);
template<class... A> int FUN_10c3f100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f110(undefined4 param_1);
template<class... A> int FUN_10c3f110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f120(undefined4 param_1);
template<class... A> int FUN_10c3f120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f130(undefined4 param_1);
template<class... A> int FUN_10c3f130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f140(undefined4 param_1);
template<class... A> int FUN_10c3f140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f150(undefined4 param_1);
template<class... A> int FUN_10c3f150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f160(undefined4 param_1);
template<class... A> int FUN_10c3f160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f170(undefined4 param_1);
template<class... A> int FUN_10c3f170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f180(undefined4 param_1);
template<class... A> int FUN_10c3f180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f190(undefined4 param_1);
template<class... A> int FUN_10c3f190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3f1a0(undefined4 param_1);
template<class... A> int FUN_10c3f1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3f1b0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10c3f1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3fc50(undefined4 param_1);
template<class... A> int FUN_10c3fc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c3fc60(undefined4 param_1);
template<class... A> int FUN_10c3fc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3fc70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10c3fc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3fca0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10c3fca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3fcd0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10c3fcd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c3fd00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10c3fd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c401e0(undefined4 *param_1);
template<class... A> int FUN_10c401e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c40200(undefined4 *param_1);
template<class... A> int FUN_10c40200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c40220(undefined4 *param_1);
template<class... A> int FUN_10c40220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c40240(undefined4 *param_1);
template<class... A> int FUN_10c40240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c402a0(undefined4 *param_1);
template<class... A> int FUN_10c402a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c402b0(undefined4 *param_1);
template<class... A> int FUN_10c402b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c40380(undefined4 *param_1);
template<class... A> int FUN_10c40380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c403a0(undefined4 *param_1);
template<class... A> int FUN_10c403a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c403c0(undefined4 *param_1);
template<class... A> int FUN_10c403c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c403e0(undefined4 *param_1);
template<class... A> int FUN_10c403e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c40400(undefined4 *param_1);
template<class... A> int FUN_10c40400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c40420(undefined4 param_1);
template<class... A> int FUN_10c40420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c40430(undefined4 param_1);
template<class... A> int FUN_10c40430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c40440(undefined4 param_1);
template<class... A> int FUN_10c40440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c40450(undefined4 param_1);
template<class... A> int FUN_10c40450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c40460(undefined4 param_1);
template<class... A> int FUN_10c40460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c41580(undefined4 *param_1);
template<class... A> int FUN_10c41580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c415b0(void);
template<class... A> int FUN_10c415b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c415c0(void);
template<class... A> int FUN_10c415c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c415d0(void);
template<class... A> int FUN_10c415d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c415e0(void);
template<class... A> int FUN_10c415e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c41710(int param_1);
template<class... A> int FUN_10c41710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c41790(int param_1);
template<class... A> int FUN_10c41790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c417b0(int param_1);
template<class... A> int FUN_10c417b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c417c0(int param_1);
template<class... A> int FUN_10c417c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c41960(int *param_1);
template<class... A> int FUN_10c41960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c41a10(int *param_1);
template<class... A> int FUN_10c41a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c41a20(int *param_1);
template<class... A> int FUN_10c41a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c41ad0(int *param_1);
template<class... A> int FUN_10c41ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c41b80(int param_1);
template<class... A> int FUN_10c41b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c41ba0(int param_1);
template<class... A> int FUN_10c41ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c41bc0(int param_1);
template<class... A> int FUN_10c41bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c41be0(int param_1);
template<class... A> int FUN_10c41be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c41d70(int *param_1);
template<class... A> int FUN_10c41d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c41d80(int *param_1);
template<class... A> int FUN_10c41d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c41d90(int *param_1);
template<class... A> int FUN_10c41d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c41da0(int *param_1);
template<class... A> int FUN_10c41da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c41db0(int *param_1);
template<class... A> int FUN_10c41db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c41dc0(int *param_1);
template<class... A> int FUN_10c41dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c41dd0(int *param_1);
template<class... A> int FUN_10c41dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c41de0(int *param_1);
template<class... A> int FUN_10c41de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c41df0(int *param_1);
template<class... A> int FUN_10c41df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c41e00(int *param_1);
template<class... A> int FUN_10c41e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c41e10(int *param_1);
template<class... A> int FUN_10c41e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c41e20(int *param_1);
template<class... A> int FUN_10c41e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c41e30(int *param_1);
template<class... A> int FUN_10c41e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c41e40(int *param_1);
template<class... A> int FUN_10c41e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c41e60(undefined4 *param_1);
template<class... A> int FUN_10c41e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c41e70(undefined4 *param_1);
template<class... A> int FUN_10c41e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c41e80(undefined4 *param_1);
template<class... A> int FUN_10c41e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c41e90(undefined4 *param_1);
template<class... A> int FUN_10c41e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c41ea0(undefined4 *param_1);
template<class... A> int FUN_10c41ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c41eb0(undefined4 *param_1);
template<class... A> int FUN_10c41eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c41ec0(undefined4 *param_1);
template<class... A> int FUN_10c41ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c41ed0(undefined4 *param_1);
template<class... A> int FUN_10c41ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10c41f50(int *param_1);
template<class... A> int FUN_10c41f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10c41f60(int *param_1);
template<class... A> int FUN_10c41f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10c41f70(int *param_1);
template<class... A> int FUN_10c41f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10c41f80(int *param_1);
template<class... A> int FUN_10c41f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_10c42040(byte *param_1);
template<class... A> int __stdcall FUN_10c42040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_10c42090(byte *param_1);
template<class... A> int __stdcall FUN_10c42090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10c420e0(int *param_1,int *param_2);
template<class... A> int FUN_10c420e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10c42100(int *param_1,int *param_2);
template<class... A> int FUN_10c42100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c422e0(undefined4 *param_1);
template<class... A> int FUN_10c422e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c42300(undefined4 *param_1);
template<class... A> int FUN_10c42300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c42320(undefined4 *param_1);
template<class... A> int FUN_10c42320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c42340(undefined4 *param_1);
template<class... A> int FUN_10c42340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c42a00(int param_1);
template<class... A> int FUN_10c42a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c42a20(int param_1);
template<class... A> int FUN_10c42a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c42a40(int param_1);
template<class... A> int FUN_10c42a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c42a60(int param_1);
template<class... A> int FUN_10c42a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c42a80(float *param_1);
template<class... A> int FUN_10c42a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c42ae0(float *param_1);
template<class... A> int FUN_10c42ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c42b40(float *param_1);
template<class... A> int FUN_10c42b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c42ba0(float *param_1);
template<class... A> int FUN_10c42ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c42ec0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c42ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c42ed0(byte *param_1);
template<class... A> int FUN_10c42ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c42f20(byte *param_1);
template<class... A> int FUN_10c42f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c42f70(undefined4 param_1);
template<class... A> int FUN_10c42f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c42f80(undefined4 param_1);
template<class... A> int FUN_10c42f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c42f90(undefined4 param_1);
template<class... A> int FUN_10c42f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c436a0(undefined4 param_1);
template<class... A> int FUN_10c436a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c436b0(undefined4 param_1);
template<class... A> int FUN_10c436b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c436c0(undefined4 param_1);
template<class... A> int FUN_10c436c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c436d0(undefined4 param_1);
template<class... A> int FUN_10c436d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c436e0(undefined4 param_1);
template<class... A> int FUN_10c436e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c436f0(undefined4 param_1);
template<class... A> int FUN_10c436f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43700(undefined4 param_1);
template<class... A> int FUN_10c43700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43710(undefined4 param_1);
template<class... A> int FUN_10c43710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43720(undefined4 param_1);
template<class... A> int FUN_10c43720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43730(undefined4 param_1);
template<class... A> int FUN_10c43730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43740(undefined4 param_1);
template<class... A> int FUN_10c43740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43750(undefined4 param_1);
template<class... A> int FUN_10c43750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43760(undefined4 param_1);
template<class... A> int FUN_10c43760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43770(undefined4 param_1);
template<class... A> int FUN_10c43770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43780(undefined4 param_1);
template<class... A> int FUN_10c43780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43790(undefined4 param_1);
template<class... A> int FUN_10c43790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c437a0(undefined4 param_1);
template<class... A> int FUN_10c437a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c437b0(undefined4 param_1);
template<class... A> int FUN_10c437b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c437c0(undefined4 param_1);
template<class... A> int FUN_10c437c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c437d0(undefined4 param_1);
template<class... A> int FUN_10c437d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c437e0(undefined4 param_1);
template<class... A> int FUN_10c437e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c437f0(undefined4 param_1);
template<class... A> int FUN_10c437f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43800(undefined4 param_1);
template<class... A> int FUN_10c43800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43810(undefined4 param_1);
template<class... A> int FUN_10c43810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43820(undefined4 param_1);
template<class... A> int FUN_10c43820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43830(undefined4 param_1);
template<class... A> int FUN_10c43830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43840(undefined4 param_1);
template<class... A> int FUN_10c43840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43850(undefined4 param_1);
template<class... A> int FUN_10c43850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43860(undefined4 param_1);
template<class... A> int FUN_10c43860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43870(undefined4 param_1);
template<class... A> int FUN_10c43870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43880(undefined4 param_1);
template<class... A> int FUN_10c43880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43890(undefined4 param_1);
template<class... A> int FUN_10c43890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c438a0(undefined4 param_1);
template<class... A> int FUN_10c438a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c438b0(undefined4 param_1);
template<class... A> int FUN_10c438b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c438c0(undefined4 param_1);
template<class... A> int FUN_10c438c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c438d0(undefined4 param_1);
template<class... A> int FUN_10c438d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c43ae0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10c43ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c43af0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10c43af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c43b00(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10c43b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c43b10(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10c43b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c43b20(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10c43b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c43b30(int param_1);
template<class... A> int FUN_10c43b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43b60(undefined4 param_1);
template<class... A> int FUN_10c43b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43b70(undefined4 param_1);
template<class... A> int FUN_10c43b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43b80(undefined4 param_1);
template<class... A> int FUN_10c43b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43b90(undefined4 param_1);
template<class... A> int FUN_10c43b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43ba0(undefined4 param_1);
template<class... A> int FUN_10c43ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43bb0(undefined4 param_1);
template<class... A> int FUN_10c43bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43bc0(undefined4 param_1);
template<class... A> int FUN_10c43bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c43bd0(undefined4 param_1);
template<class... A> int FUN_10c43bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c43dd0(void);
template<class... A> int FUN_10c43dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c43de0(void);
template<class... A> int FUN_10c43de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c43df0(void);
template<class... A> int FUN_10c43df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c43e00(void);
template<class... A> int FUN_10c43e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c43e10(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10c43e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c440e0(int param_1);
template<class... A> int FUN_10c440e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c440f0(int param_1);
template<class... A> int FUN_10c440f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c44100(int param_1);
template<class... A> int FUN_10c44100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c44110(int param_1);
template<class... A> int FUN_10c44110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c44120(int param_1);
template<class... A> int FUN_10c44120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c44130(undefined4 *param_1);
template<class... A> int FUN_10c44130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c44140(undefined4 *param_1);
template<class... A> int FUN_10c44140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c44150(undefined4 *param_1);
template<class... A> int FUN_10c44150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c44160(undefined4 *param_1);
template<class... A> int FUN_10c44160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c44330(int *param_1);
template<class... A> int FUN_10c44330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c443a0(int *param_1);
template<class... A> int FUN_10c443a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c44580(undefined4 *param_1);
template<class... A> int FUN_10c44580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c44590(undefined4 *param_1);
template<class... A> int FUN_10c44590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c44620(int param_1);
template<class... A> int FUN_10c44620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c44630(int param_1);
template<class... A> int FUN_10c44630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c44ec0(int param_1,int param_2,int param_3);
template<class... A> int FUN_10c44ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c44f00(int param_1,int param_2,int param_3);
template<class... A> int FUN_10c44f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c44f40(int param_1,int param_2,int param_3);
template<class... A> int FUN_10c44f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c44f80(int param_1,int param_2,int param_3);
template<class... A> int FUN_10c44f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c44fc0(void);
template<class... A> int FUN_10c44fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c44fd0(uint param_1);
template<class... A> int FUN_10c44fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c45040(uint param_1);
template<class... A> int FUN_10c45040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c450c0(uint param_1);
template<class... A> int FUN_10c450c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c45130(uint param_1);
template<class... A> int FUN_10c45130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c451b0(uint param_1);
template<class... A> int FUN_10c451b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c45220(uint param_1);
template<class... A> int FUN_10c45220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c45290(uint param_1);
template<class... A> int FUN_10c45290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c45300(uint param_1);
template<class... A> int FUN_10c45300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c45370(uint param_1);
template<class... A> int FUN_10c45370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c45500(undefined4 *param_1);
template<class... A> int FUN_10c45500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c45510(undefined4 *param_1);
template<class... A> int FUN_10c45510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c45520(undefined4 *param_1);
template<class... A> int FUN_10c45520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c45530(undefined4 *param_1);
template<class... A> int FUN_10c45530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c456c0(int param_1);
template<class... A> int FUN_10c456c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c456d0(int param_1);
template<class... A> int FUN_10c456d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c456e0(int param_1);
template<class... A> int FUN_10c456e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c456f0(int param_1);
template<class... A> int FUN_10c456f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c45700(int param_1);
template<class... A> int FUN_10c45700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c45820(int param_1);
template<class... A> int FUN_10c45820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c458c0(int param_1);
template<class... A> int FUN_10c458c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c45970(int *param_1);
template<class... A> int FUN_10c45970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c459f0(int *param_1);
template<class... A> int FUN_10c459f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c45aa0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10c45aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c45af0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10c45af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c45b40(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10c45b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c45b90(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10c45b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c45be0(int param_1,int param_2);
template<class... A> int FUN_10c45be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c45c30(int param_1,int param_2);
template<class... A> int FUN_10c45c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c45c80(int param_1,int param_2);
template<class... A> int FUN_10c45c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c45cd0(int param_1,int param_2);
template<class... A> int FUN_10c45cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c45d20(int param_1,int param_2);
template<class... A> int FUN_10c45d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c45d70(int param_1,int param_2);
template<class... A> int FUN_10c45d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c45dc0(int param_1,int param_2);
template<class... A> int FUN_10c45dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c45e10(int param_1,int param_2);
template<class... A> int FUN_10c45e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c45e60(int param_1,int param_2);
template<class... A> int FUN_10c45e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c45f70(int param_1);
template<class... A> int FUN_10c45f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c45f80(int param_1);
template<class... A> int FUN_10c45f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c45f90(int param_1);
template<class... A> int FUN_10c45f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c45fa0(int param_1);
template<class... A> int FUN_10c45fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c462e0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10c462e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c46300(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10c46300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c46320(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10c46320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c46b70(undefined4 param_1,int param_2);
template<class... A> int FUN_10c46b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10c46f50(undefined4 param_1);
template<class... A> int __stdcall FUN_10c46f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10c46f80(float *param_1);
template<class... A> int FUN_10c46f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10c46f90(float *param_1);
template<class... A> int FUN_10c46f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10c46fa0(float *param_1);
template<class... A> int FUN_10c46fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10c46fb0(float *param_1);
template<class... A> int FUN_10c46fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c46fc0(void);
template<class... A> int FUN_10c46fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c46fd0(void);
template<class... A> int FUN_10c46fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c46fe0(void);
template<class... A> int FUN_10c46fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c46ff0(void);
template<class... A> int FUN_10c46ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c47000(void);
template<class... A> int FUN_10c47000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c47010(void);
template<class... A> int FUN_10c47010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c47020(void);
template<class... A> int FUN_10c47020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c47030(void);
template<class... A> int FUN_10c47030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c47040(void);
template<class... A> int FUN_10c47040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c47050(void);
template<class... A> int FUN_10c47050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c47060(void);
template<class... A> int FUN_10c47060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c47070(void);
template<class... A> int FUN_10c47070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c47080(void);
template<class... A> int FUN_10c47080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c47090(void);
template<class... A> int FUN_10c47090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c470a0(void);
template<class... A> int FUN_10c470a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c470b0(void);
template<class... A> int FUN_10c470b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c470c0(void);
template<class... A> int FUN_10c470c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c470d0(void);
template<class... A> int FUN_10c470d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c47220(undefined4 param_1);
template<class... A> int FUN_10c47220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c47230(undefined4 param_1);
template<class... A> int FUN_10c47230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c47250(undefined4 param_1);
template<class... A> int FUN_10c47250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c47260(undefined4 param_1);
template<class... A> int FUN_10c47260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c475a0(int *param_1);
template<class... A> int FUN_10c475a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c475b0(int *param_1);
template<class... A> int FUN_10c475b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c475c0(int *param_1);
template<class... A> int FUN_10c475c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c475d0(int *param_1);
template<class... A> int FUN_10c475d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c47620(undefined4 *param_1);
template<class... A> int FUN_10c47620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c47740(undefined4 *param_1);
template<class... A> int FUN_10c47740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c478d0(undefined4 *param_1);
template<class... A> int FUN_10c478d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __stdcall FUN_10c48f40(SCStr *param_1);
template<class... A> int __stdcall FUN_10c48f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __stdcall FUN_10c49450(SCStr *param_1);
template<class... A> int __stdcall FUN_10c49450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __stdcall FUN_10c49470(SCStr *param_1);
template<class... A> int __stdcall FUN_10c49470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __stdcall FUN_10c495e0(SCStr *param_1);
template<class... A> int __stdcall FUN_10c495e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __stdcall FUN_10c496e0(SCStr *param_1);
template<class... A> int __stdcall FUN_10c496e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c4a0a0(byte *param_1,int param_2,uint param_3,byte *param_4,int param_5);
template<class... A> int FUN_10c4a0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c4a2e0(undefined4 param_1);
template<class... A> int FUN_10c4a2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c4a2f0(undefined4 *param_1);
template<class... A> int FUN_10c4a2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c4a510(undefined4 *param_1);
template<class... A> int FUN_10c4a510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c4a5f0(int param_1);
template<class... A> int FUN_10c4a5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c4a600(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c4a600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c4aa40(undefined4 *param_1);
template<class... A> int FUN_10c4aa40(A...);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_10c4afb0(undefined4 *param_1);
/* WARNING: Removing unreachable block_10c4afc0 (ram,0x101ba14a) */ void __fastcall FUN_10c4afc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c4b350(undefined4 *param_1);
template<class... A> int FUN_10c4b350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c4b710(undefined4 *param_1);
template<class... A> int FUN_10c4b710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c4b8e0(undefined4 *param_1);
template<class... A> int FUN_10c4b8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c4b8f0(int *param_1);
template<class... A> int FUN_10c4b8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c4b900(int param_1);
template<class... A> int FUN_10c4b900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c4b910(int param_1);
template<class... A> int FUN_10c4b910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c4b920(int param_1);
template<class... A> int FUN_10c4b920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c4b930(int param_1);
template<class... A> int FUN_10c4b930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c4bf30(int param_1);
template<class... A> int FUN_10c4bf30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c4bf40(int param_1);
template<class... A> int FUN_10c4bf40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c4bf50(int param_1);
template<class... A> int FUN_10c4bf50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c4c4d0(undefined4 *param_1);
template<class... A> int FUN_10c4c4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c4c950(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_10c4c950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c4ca80(int param_1);
template<class... A> int FUN_10c4ca80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c4ca90(int param_1);
template<class... A> int FUN_10c4ca90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c4caa0(int param_1);
template<class... A> int FUN_10c4caa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c4cab0(int param_1);
template<class... A> int FUN_10c4cab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c4cac0(int param_1);
template<class... A> int FUN_10c4cac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c4cad0(int param_1);
template<class... A> int FUN_10c4cad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 __fastcall FUN_10c4cae0(int param_1);
template<class... A> int FUN_10c4cae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 __fastcall FUN_10c4caf0(int param_1);
template<class... A> int FUN_10c4caf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 __fastcall FUN_10c4cb00(int param_1);
template<class... A> int FUN_10c4cb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c4cb30(int param_1);
template<class... A> int FUN_10c4cb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c4cb60(void);
template<class... A> int FUN_10c4cb60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c4cb70(int param_1);
template<class... A> int FUN_10c4cb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c4cb80(int param_1);
template<class... A> int FUN_10c4cb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c4cb90(int param_1);
template<class... A> int FUN_10c4cb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c4cf80(undefined4 *param_1);
template<class... A> int FUN_10c4cf80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c4d090(undefined4 *param_1);
template<class... A> int FUN_10c4d090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c4d0c0(undefined4 *param_1);
template<class... A> int FUN_10c4d0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10c4d5e0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10c4d5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c4d9c0(void);
template<class... A> int FUN_10c4d9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c4d9d0(void);
template<class... A> int FUN_10c4d9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c4d9e0(void);
template<class... A> int FUN_10c4d9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c4d9f0(void);
template<class... A> int FUN_10c4d9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c4da00(void);
template<class... A> int FUN_10c4da00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c4dce0(undefined4 *param_1);
template<class... A> int FUN_10c4dce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c4dd10(undefined4 *param_1);
template<class... A> int FUN_10c4dd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c4dd40(undefined4 *param_1);
template<class... A> int FUN_10c4dd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c4dd70(undefined4 *param_1);
template<class... A> int FUN_10c4dd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c4dda0(undefined4 *param_1);
template<class... A> int FUN_10c4dda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c4ddd0(undefined4 *param_1);
template<class... A> int FUN_10c4ddd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c4eac0(undefined4 *param_1);
template<class... A> int FUN_10c4eac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c4ead0(undefined4 *param_1);
template<class... A> int FUN_10c4ead0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c4eae0(undefined4 *param_1);
template<class... A> int FUN_10c4eae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c4eaf0(undefined4 *param_1);
template<class... A> int FUN_10c4eaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c4eb00(undefined4 *param_1);
template<class... A> int FUN_10c4eb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c4eb10(undefined4 *param_1);
template<class... A> int FUN_10c4eb10(A...);
/* WARNING: Removing unreachable block_10c4f250 (ram,0x101ba14a) */ void __fastcall FUN_10c4f250(undefined4 *param_1);
/* WARNING: Removing unreachable block_10c4f260 (ram,0x101ba14a) */ void __fastcall FUN_10c4f260(undefined4 *param_1);
/* WARNING: Removing unreachable block_10c4f270 (ram,0x101ba14a) */ void __fastcall FUN_10c4f270(undefined4 *param_1);
/* WARNING: Removing unreachable block_10c4f280 (ram,0x101ba14a) */ void __fastcall FUN_10c4f280(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c4f290(undefined4 *param_1);
template<class... A> int FUN_10c4f290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c4f350(undefined4 *param_1);
template<class... A> int FUN_10c4f350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c4f370(undefined4 *param_1);
template<class... A> int FUN_10c4f370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c4fc50(undefined4 *param_1);
template<class... A> int FUN_10c4fc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c4fc80(undefined4 *param_1);
template<class... A> int FUN_10c4fc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c4fcb0(undefined4 *param_1);
template<class... A> int FUN_10c4fcb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c4fce0(undefined4 *param_1);
template<class... A> int FUN_10c4fce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c4fd10(undefined4 *param_1);
template<class... A> int FUN_10c4fd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c4fdd0(undefined4 *param_1);
template<class... A> int FUN_10c4fdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c4fde0(undefined4 *param_1);
template<class... A> int FUN_10c4fde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c4fdf0(undefined4 *param_1);
template<class... A> int FUN_10c4fdf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c4fe00(undefined4 *param_1);
template<class... A> int FUN_10c4fe00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c4fe10(undefined4 *param_1);
template<class... A> int FUN_10c4fe10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c4fe20(undefined4 *param_1);
template<class... A> int FUN_10c4fe20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c4fe30(undefined4 *param_1);
template<class... A> int FUN_10c4fe30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c4fe50(undefined4 *param_1);
template<class... A> int FUN_10c4fe50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c4fe70(undefined4 *param_1);
template<class... A> int FUN_10c4fe70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c4fe90(undefined4 *param_1);
template<class... A> int FUN_10c4fe90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c4feb0(undefined4 *param_1);
template<class... A> int FUN_10c4feb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c4fed0(int param_1);
template<class... A> int FUN_10c4fed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c4fee0(int param_1);
template<class... A> int FUN_10c4fee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c4fef0(int param_1);
template<class... A> int FUN_10c4fef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c4ff00(int param_1);
template<class... A> int FUN_10c4ff00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_10c52450(int param_1);
template<class... A> int FUN_10c52450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10c52470(int param_1);
template<class... A> int FUN_10c52470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c525a0(int param_1);
template<class... A> int FUN_10c525a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10c52620(int param_1);
template<class... A> int FUN_10c52620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c52640(int param_1);
template<class... A> int FUN_10c52640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c52650(void);
template<class... A> int FUN_10c52650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c52660(void);
template<class... A> int FUN_10c52660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c52670(void);
template<class... A> int FUN_10c52670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c52680(void);
template<class... A> int FUN_10c52680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c52690(void);
template<class... A> int FUN_10c52690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c53c60(undefined4 *param_1);
template<class... A> int FUN_10c53c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c53c90(undefined4 *param_1);
template<class... A> int FUN_10c53c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c53cc0(undefined4 *param_1);
template<class... A> int FUN_10c53cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c53cf0(undefined4 *param_1);
template<class... A> int FUN_10c53cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c53d20(undefined4 *param_1);
template<class... A> int FUN_10c53d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c54240(void);
template<class... A> int FUN_10c54240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c54250(void);
template<class... A> int FUN_10c54250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c54260(void);
template<class... A> int FUN_10c54260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c54270(void);
template<class... A> int FUN_10c54270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c544c0(undefined4 *param_1);
template<class... A> int FUN_10c544c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c544f0(undefined4 *param_1);
template<class... A> int FUN_10c544f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c54520(undefined4 *param_1);
template<class... A> int FUN_10c54520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c54550(undefined4 *param_1);
template<class... A> int FUN_10c54550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c54580(undefined4 *param_1);
template<class... A> int FUN_10c54580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c54ef0(undefined4 *param_1);
template<class... A> int FUN_10c54ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c54f00(undefined4 *param_1);
template<class... A> int FUN_10c54f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c54f10(undefined4 *param_1);
template<class... A> int FUN_10c54f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c54f20(undefined4 *param_1);
template<class... A> int FUN_10c54f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c54f30(undefined4 *param_1);
template<class... A> int FUN_10c54f30(A...);
/* WARNING: Removing unreachable block_10c55500 (ram,0x101ba14a) */ void __fastcall FUN_10c55500(undefined4 *param_1);
/* WARNING: Removing unreachable block_10c55510 (ram,0x101ba14a) */ void __fastcall FUN_10c55510(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c55520(undefined4 *param_1);
template<class... A> int FUN_10c55520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c555c0(undefined4 *param_1);
template<class... A> int FUN_10c555c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c55d00(undefined4 *param_1);
template<class... A> int FUN_10c55d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c55d30(undefined4 *param_1);
template<class... A> int FUN_10c55d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c55d60(undefined4 *param_1);
template<class... A> int FUN_10c55d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c55d80(undefined4 *param_1);
template<class... A> int FUN_10c55d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c55d90(undefined4 *param_1);
template<class... A> int FUN_10c55d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c55da0(undefined4 *param_1);
template<class... A> int FUN_10c55da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c55db0(undefined4 *param_1);
template<class... A> int FUN_10c55db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c55dc0(undefined4 *param_1);
template<class... A> int FUN_10c55dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c55dd0(undefined4 *param_1);
template<class... A> int FUN_10c55dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c55df0(undefined4 *param_1);
template<class... A> int FUN_10c55df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c55e10(undefined4 *param_1);
template<class... A> int FUN_10c55e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c55e30(undefined4 *param_1);
template<class... A> int FUN_10c55e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c55e50(int param_1);
template<class... A> int FUN_10c55e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c55e60(int param_1);
template<class... A> int FUN_10c55e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c57870(int param_1);
template<class... A> int FUN_10c57870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c57890(int param_1);
template<class... A> int FUN_10c57890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c578b0(int param_1);
template<class... A> int FUN_10c578b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c578d0(int param_1);
template<class... A> int FUN_10c578d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c57a90(int param_1);
template<class... A> int FUN_10c57a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c57aa0(void);
template<class... A> int FUN_10c57aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c57ab0(void);
template<class... A> int FUN_10c57ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c57ac0(void);
template<class... A> int FUN_10c57ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c57ad0(void);
template<class... A> int FUN_10c57ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c58d20(undefined4 *param_1);
template<class... A> int FUN_10c58d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c58d50(undefined4 *param_1);
template<class... A> int FUN_10c58d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c58d80(undefined4 *param_1);
template<class... A> int FUN_10c58d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c58db0(undefined4 *param_1);
template<class... A> int FUN_10c58db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c59090(void);
template<class... A> int FUN_10c59090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c59130(undefined4 *param_1);
template<class... A> int FUN_10c59130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c59160(undefined4 *param_1);
template<class... A> int FUN_10c59160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c594e0(undefined4 *param_1);
template<class... A> int FUN_10c594e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c594f0(undefined4 *param_1);
template<class... A> int FUN_10c594f0(A...);
/* WARNING: Removing unreachable block_10c59670 (ram,0x101ba14a) */ void __fastcall FUN_10c59670(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c59680(undefined4 *param_1);
template<class... A> int FUN_10c59680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c596c0(undefined4 *param_1);
template<class... A> int FUN_10c596c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c596e0(undefined4 *param_1);
template<class... A> int FUN_10c596e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c598c0(undefined4 *param_1);
template<class... A> int FUN_10c598c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c598f0(undefined4 *param_1);
template<class... A> int FUN_10c598f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c59910(undefined4 *param_1);
template<class... A> int FUN_10c59910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c59920(undefined4 *param_1);
template<class... A> int FUN_10c59920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c59930(undefined4 *param_1);
template<class... A> int FUN_10c59930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c59950(int param_1);
template<class... A> int FUN_10c59950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10c5a530(int param_1);
template<class... A> int FUN_10c5a530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c5a700(int param_1);
template<class... A> int FUN_10c5a700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c5a710(void);
template<class... A> int FUN_10c5a710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c5aee0(undefined4 *param_1);
template<class... A> int FUN_10c5aee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c5aff0(undefined4 *param_1);
template<class... A> int FUN_10c5aff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c5b0d0(undefined4 *param_1);
template<class... A> int FUN_10c5b0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c5b0f0(undefined4 *param_1);
template<class... A> int FUN_10c5b0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c5b400(undefined4 *param_1);
template<class... A> int FUN_10c5b400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c5b410(undefined4 *param_1);
template<class... A> int FUN_10c5b410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c5b430(undefined4 *param_1);
template<class... A> int FUN_10c5b430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c5b5f0(undefined4 *param_1);
template<class... A> int FUN_10c5b5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c5b610(undefined4 *param_1);
template<class... A> int FUN_10c5b610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c5b750(undefined4 *param_1);
template<class... A> int FUN_10c5b750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c5c910(int param_1);
template<class... A> int FUN_10c5c910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c5cd20(undefined4 *param_1);
template<class... A> int FUN_10c5cd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c5d1f0(undefined4 *param_1);
template<class... A> int FUN_10c5d1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c5dc60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c5dc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c5dca0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10c5dca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c5e070(void);
template<class... A> int FUN_10c5e070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c5e090(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c5e090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c5e0a0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c5e0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c5e0b0(void);
template<class... A> int FUN_10c5e0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c5e600(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10c5e600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c5e6a0(undefined4 param_1);
template<class... A> int FUN_10c5e6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10c5e6b0(int param_1,uint *param_2);
template<class... A> int FUN_10c5e6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c5e820(undefined4 param_1);
template<class... A> int FUN_10c5e820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c5e830(undefined4 param_1);
template<class... A> int FUN_10c5e830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c5e840(undefined4 param_1);
template<class... A> int FUN_10c5e840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c5e850(undefined4 param_1);
template<class... A> int FUN_10c5e850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c5e860(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10c5e860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c5e880(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10c5e880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c5e920(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c5e920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c5e940(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c5e940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c5e960(undefined4 param_1);
template<class... A> int FUN_10c5e960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c5e970(undefined4 param_1);
template<class... A> int FUN_10c5e970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c5ebe0(undefined4 *param_1);
template<class... A> int FUN_10c5ebe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c5ec00(undefined4 param_1);
template<class... A> int FUN_10c5ec00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c5ecb0(undefined4 *param_1);
template<class... A> int FUN_10c5ecb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c5fa60(void);
template<class... A> int FUN_10c5fa60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c5fb40(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c5fb40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c5fc60(undefined4 param_1);
template<class... A> int FUN_10c5fc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c5fc90(int *param_1);
template<class... A> int FUN_10c5fc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c5fca0(int *param_1);
template<class... A> int FUN_10c5fca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c5fcb0(int *param_1);
template<class... A> int FUN_10c5fcb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c5fcc0(int *param_1);
template<class... A> int FUN_10c5fcc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c5fcd0(int *param_1);
template<class... A> int FUN_10c5fcd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c5fce0(int *param_1);
template<class... A> int FUN_10c5fce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c5fcf0(int *param_1);
template<class... A> int FUN_10c5fcf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c5fd00(int *param_1);
template<class... A> int FUN_10c5fd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c5fe30(undefined4 *param_1);
template<class... A> int FUN_10c5fe30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c5fe80(int param_1);
template<class... A> int FUN_10c5fe80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c5fea0(undefined4 param_1);
template<class... A> int FUN_10c5fea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c5feb0(undefined4 param_1);
template<class... A> int FUN_10c5feb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c5fec0(undefined4 param_1);
template<class... A> int FUN_10c5fec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c5fed0(undefined4 param_1);
template<class... A> int FUN_10c5fed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c5fee0(undefined4 param_1);
template<class... A> int FUN_10c5fee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c5fef0(undefined4 param_1);
template<class... A> int FUN_10c5fef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c5ff00(undefined4 param_1);
template<class... A> int FUN_10c5ff00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c5ff10(undefined4 param_1);
template<class... A> int FUN_10c5ff10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c60220(int param_1);
template<class... A> int FUN_10c60220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10c60250(int *param_1);
template<class... A> int FUN_10c60250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c60280(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10c60280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c60290(int param_1);
template<class... A> int FUN_10c60290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c60320(undefined1 *param_1);
template<class... A> int __stdcall FUN_10c60320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c60330(uint param_1);
template<class... A> int FUN_10c60330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c61270(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10c61270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c612c0(int param_1,int param_2);
template<class... A> int FUN_10c612c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c614d0(int param_1);
template<class... A> int FUN_10c614d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * FUN_10c619d0(undefined4 *param_1);
template<class... A> int FUN_10c619d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * FUN_10c619f0(undefined4 *param_1);
template<class... A> int FUN_10c619f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c620f0(int param_1);
template<class... A> int FUN_10c620f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c62320(int param_1);
template<class... A> int FUN_10c62320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c62840(char *param_1,undefined4 *param_2,undefined4 param_3);
template<class... A> int FUN_10c62840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c62f80(undefined4 *param_1);
template<class... A> int FUN_10c62f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c62fa0(int param_1);
template<class... A> int FUN_10c62fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c62fb0(int param_1);
template<class... A> int FUN_10c62fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c62fc0(void);
template<class... A> int FUN_10c62fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c62fd0(void);
template<class... A> int FUN_10c62fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c62fe0(undefined4 param_1);
template<class... A> int FUN_10c62fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c62ff0(undefined4 param_1);
template<class... A> int FUN_10c62ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c647d0(int param_1);
template<class... A> int FUN_10c647d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c647e0(void);
template<class... A> int FUN_10c647e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10c64f30(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10c64f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c656b0(undefined4 *param_1);
template<class... A> int FUN_10c656b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c67aa0(int *param_1);
template<class... A> int FUN_10c67aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c68c40(undefined4 *param_1);
template<class... A> int FUN_10c68c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c68c50(undefined4 *param_1);
template<class... A> int FUN_10c68c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c68c60(undefined4 *param_1);
template<class... A> int FUN_10c68c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c68c70(undefined4 *param_1);
template<class... A> int FUN_10c68c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c68f50(undefined4 *param_1);
template<class... A> int FUN_10c68f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c68f60(undefined4 *param_1);
template<class... A> int FUN_10c68f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c68f70(undefined4 *param_1);
template<class... A> int FUN_10c68f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c68f80(undefined4 *param_1);
template<class... A> int FUN_10c68f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __stdcall FUN_10c69f10(int *param_1);
template<class... A> int __stdcall FUN_10c69f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c6d1f0(void);
template<class... A> int FUN_10c6d1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c6d200(undefined4 *param_1);
template<class... A> int FUN_10c6d200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c6d230(undefined4 *param_1);
template<class... A> int FUN_10c6d230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c6d240(undefined4 *param_1);
template<class... A> int FUN_10c6d240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c6d4c0(undefined4 *param_1);
template<class... A> int FUN_10c6d4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c6db30(void);
template<class... A> int FUN_10c6db30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c6dd80(int *param_1);
template<class... A> int FUN_10c6dd80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c6dd90(int *param_1);
template<class... A> int FUN_10c6dd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c6f930(int param_1);
template<class... A> int FUN_10c6f930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c70460(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c70460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c70480(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c70480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c704a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c704a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c704d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10c704d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c70630(undefined4 *param_1);
template<class... A> int FUN_10c70630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c706c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10c706c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c706e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10c706e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c70990(void);
template<class... A> int FUN_10c70990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c709a0(void);
template<class... A> int FUN_10c709a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c70bb0(undefined4 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                 undefined1 *param_5);
template<class... A> int FUN_10c70bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c70c50(undefined4 *param_1,char *param_2,char *param_3,char *param_4,char *param_5);
template<class... A> int FUN_10c70c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c70cb0(undefined4 *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                 int param_6);
template<class... A> int FUN_10c70cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c70d50(undefined4 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                 undefined1 *param_5);
template<class... A> int FUN_10c70d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c70df0(undefined4 *param_1,char *param_2,char *param_3,char *param_4,char *param_5);
template<class... A> int FUN_10c70df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c70e50(undefined4 *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                 int param_6);
template<class... A> int FUN_10c70e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c71290(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10c71290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c712c0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10c712c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c712f0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10c712f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c71320(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10c71320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c71350(void);
template<class... A> int FUN_10c71350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c71360(void);
template<class... A> int FUN_10c71360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c71370(void);
template<class... A> int FUN_10c71370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c71380(void);
template<class... A> int FUN_10c71380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c71390(int param_1);
template<class... A> int FUN_10c71390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c713b0(int param_1);
template<class... A> int FUN_10c713b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c713d0(int param_1);
template<class... A> int FUN_10c713d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c71490(void *param_1,void *param_2,byte *param_3);
template<class... A> int FUN_10c71490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c714e0(char *param_1,char *param_2,int *param_3);
template<class... A> int FUN_10c714e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c71510(void *param_1,void *param_2,byte *param_3);
template<class... A> int FUN_10c71510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c71560(char *param_1,char *param_2,int *param_3);
template<class... A> int FUN_10c71560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c71590(undefined4 *param_1);
template<class... A> int FUN_10c71590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c715a0(undefined4 *param_1);
template<class... A> int FUN_10c715a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c715b0(undefined4 *param_1);
template<class... A> int FUN_10c715b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c715c0(undefined4 *param_1);
template<class... A> int FUN_10c715c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c715d0(undefined4 *param_1);
template<class... A> int FUN_10c715d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c715e0(undefined4 *param_1);
template<class... A> int FUN_10c715e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c715f0(undefined4 *param_1);
template<class... A> int FUN_10c715f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c71600(undefined4 *param_1);
template<class... A> int FUN_10c71600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c71610(undefined4 *param_1);
template<class... A> int FUN_10c71610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c71620(undefined4 *param_1);
template<class... A> int FUN_10c71620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c71630(int *param_1,int *param_2);
template<class... A> int FUN_10c71630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */int __cdecl FUN_10c716c0(char *param_1,char *param_2,char *param_3,char *param_4,_Collvec *param_5);
template<class... A> int FUN_10c716c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */size_t __cdecl FUN_10c716d0(char *_String1,char *_End1,char *param_3,char *param_4,_Collvec *param_5);
template<class... A> int FUN_10c716d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c72140(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10c72140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c72150(void);
template<class... A> int FUN_10c72150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c72160(void);
template<class... A> int FUN_10c72160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10c72170(int *param_1,int param_2);
template<class... A> int FUN_10c72170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c72370(undefined4 param_1);
template<class... A> int FUN_10c72370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c72380(undefined4 param_1);
template<class... A> int FUN_10c72380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c72f60(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c72f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c72f70(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c72f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c72f80(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c72f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_10c72fa0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10c72fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10c72fd0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10c72fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c73000(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10c73000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_10c73040(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10c73040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c73070(undefined4 param_1);
template<class... A> int FUN_10c73070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c73080(undefined4 param_1);
template<class... A> int FUN_10c73080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c73090(undefined4 param_1);
template<class... A> int FUN_10c73090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c730a0(undefined4 param_1);
template<class... A> int FUN_10c730a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c730b0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10c730b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c730e0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10c730e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c73110(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10c73110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c73150(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10c73150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c73180(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10c73180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c731c0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10c731c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c731f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
template<class... A> int FUN_10c731f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_10c73230(undefined4 *param_1,int param_2);
template<class... A> int FUN_10c73230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c73260(void *param_1,int param_2);
template<class... A> int FUN_10c73260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c732a0(undefined4 *param_1,int param_2);
template<class... A> int FUN_10c732a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10c732e0(byte *param_1);
template<class... A> int FUN_10c732e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10c732f0(undefined4 param_1,byte *param_2);
template<class... A> int FUN_10c732f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c73300(undefined4 param_1);
template<class... A> int FUN_10c73300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c73310(undefined4 param_1);
template<class... A> int FUN_10c73310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c73320(undefined4 param_1);
template<class... A> int FUN_10c73320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c73330(undefined4 param_1);
template<class... A> int FUN_10c73330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c73340(undefined4 param_1);
template<class... A> int FUN_10c73340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c73350(undefined4 param_1);
template<class... A> int FUN_10c73350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c73360(undefined4 param_1);
template<class... A> int FUN_10c73360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c73370(undefined4 param_1);
template<class... A> int FUN_10c73370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c73380(undefined4 param_1);
template<class... A> int FUN_10c73380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c735c0(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_10c735c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c735e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10c735e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c73600(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10c73600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c73620(undefined4 param_1,undefined8 *param_2);
template<class... A> int FUN_10c73620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c73630(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_10c73630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c73650(undefined4 param_1,undefined8 *param_2,undefined8 *param_3);
template<class... A> int FUN_10c73650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c73670(int param_1,int param_2);
template<class... A> int FUN_10c73670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c73680(int param_1,int param_2);
template<class... A> int FUN_10c73680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c73690(int param_1,int param_2);
template<class... A> int FUN_10c73690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c736a0(int param_1,int param_2);
template<class... A> int FUN_10c736a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c736b0(int param_1,int param_2);
template<class... A> int FUN_10c736b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c736c0(char *param_1,char *param_2,int param_3,int param_4,int param_5);
template<class... A> int FUN_10c736c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c737f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c737f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c73810(void *param_1,void *param_2,byte *param_3);
template<class... A> int FUN_10c73810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c738a0(undefined4 param_1);
template<class... A> int FUN_10c738a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c738b0(undefined4 param_1);
template<class... A> int FUN_10c738b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c738c0(undefined4 param_1);
template<class... A> int FUN_10c738c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c738d0(undefined4 param_1);
template<class... A> int FUN_10c738d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c738e0(undefined4 param_1);
template<class... A> int FUN_10c738e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c738f0(undefined4 param_1);
template<class... A> int FUN_10c738f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c73900(undefined4 param_1);
template<class... A> int FUN_10c73900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c73910(undefined4 param_1);
template<class... A> int FUN_10c73910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c73920(undefined4 param_1);
template<class... A> int FUN_10c73920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c73930(void);
template<class... A> int FUN_10c73930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c73940(void);
template<class... A> int FUN_10c73940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c73a60(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c73a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c73ad0(undefined4 param_1);
template<class... A> int FUN_10c73ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c73ae0(undefined4 param_1);
template<class... A> int FUN_10c73ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c73af0(undefined4 param_1);
template<class... A> int FUN_10c73af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c73b00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_10c73b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c73b50(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c73b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c74540(undefined4 *param_1);
template<class... A> int FUN_10c74540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c74570(undefined4 *param_1);
template<class... A> int FUN_10c74570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c74590(undefined4 *param_1);
template<class... A> int FUN_10c74590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c74660(undefined4 *param_1);
template<class... A> int FUN_10c74660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c74690(undefined4 *param_1);
template<class... A> int FUN_10c74690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c74d20(undefined4 *param_1);
template<class... A> int FUN_10c74d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c74e30(undefined4 *param_1);
template<class... A> int FUN_10c74e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c74f80(undefined4 *param_1);
template<class... A> int FUN_10c74f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c74fa0(undefined4 *param_1);
template<class... A> int FUN_10c74fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c74fc0(undefined4 *param_1);
template<class... A> int FUN_10c74fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c74fe0(undefined4 *param_1);
template<class... A> int FUN_10c74fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c75000(undefined4 param_1);
template<class... A> int FUN_10c75000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c75010(undefined4 param_1);
template<class... A> int FUN_10c75010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c75020(undefined4 param_1);
template<class... A> int FUN_10c75020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c752a0(undefined4 *param_1);
template<class... A> int FUN_10c752a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c753b0(undefined4 *param_1);
template<class... A> int FUN_10c753b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c754d0(undefined4 *param_1);
template<class... A> int FUN_10c754d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c754f0(undefined4 *param_1);
template<class... A> int FUN_10c754f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c75510(undefined4 *param_1);
template<class... A> int FUN_10c75510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c756a0(undefined4 *param_1);
template<class... A> int FUN_10c756a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c759a0(undefined4 *param_1);
template<class... A> int FUN_10c759a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c759b0(undefined4 *param_1);
template<class... A> int FUN_10c759b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c75b00(undefined4 *param_1);
template<class... A> int FUN_10c75b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c75b40(undefined4 *param_1);
template<class... A> int FUN_10c75b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c75c40(undefined4 *param_1);
template<class... A> int FUN_10c75c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c75e50(int param_1);
template<class... A> int FUN_10c75e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c75ee0(undefined4 *param_1);
template<class... A> int FUN_10c75ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c76040(int param_1);
template<class... A> int FUN_10c76040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c76060(int param_1);
template<class... A> int FUN_10c76060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c76120(undefined4 *param_1);
template<class... A> int FUN_10c76120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c76130(undefined4 *param_1);
template<class... A> int FUN_10c76130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c76140(void);
template<class... A> int FUN_10c76140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c76150(void);
template<class... A> int FUN_10c76150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c76160(void);
template<class... A> int FUN_10c76160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c763e0(undefined4 *param_1);
template<class... A> int FUN_10c763e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c76580(undefined4 *param_1);
template<class... A> int FUN_10c76580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c76590(undefined4 *param_1);
template<class... A> int FUN_10c76590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c765a0(undefined4 *param_1);
template<class... A> int FUN_10c765a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c765b0(undefined4 *param_1);
template<class... A> int FUN_10c765b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c765c0(undefined4 *param_1);
template<class... A> int FUN_10c765c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c765d0(undefined4 *param_1);
template<class... A> int FUN_10c765d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c765e0(undefined4 *param_1);
template<class... A> int FUN_10c765e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c76650(undefined4 *param_1);
template<class... A> int FUN_10c76650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c76660(undefined4 *param_1);
template<class... A> int FUN_10c76660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c76d30(int *param_1);
template<class... A> int FUN_10c76d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c76db0(undefined4 *param_1);
template<class... A> int FUN_10c76db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10c76de0(int *param_1);
template<class... A> int FUN_10c76de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10c76e00(uint param_1,uint param_2);
template<class... A> int FUN_10c76e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10c76e10(uint param_1,uint param_2);
template<class... A> int FUN_10c76e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10c76e20(uint param_1,uint param_2);
template<class... A> int FUN_10c76e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c76e30(void *param_1,void *param_2,size_t param_3,size_t param_4,char param_5);
template<class... A> int FUN_10c76e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10c76e80(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10c76e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10c76eb0(char param_1,char param_2);
template<class... A> int FUN_10c76eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c76f50(undefined4 *param_1);
template<class... A> int __stdcall FUN_10c76f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10c76f70(uint param_1);
template<class... A> int FUN_10c76f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10c76f80(uint param_1,uint param_2);
template<class... A> int FUN_10c76f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10c76f90(uint param_1,uint param_2);
template<class... A> int FUN_10c76f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10c76fa0(uint param_1,uint param_2);
template<class... A> int FUN_10c76fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_10c76fb0(uint *param_1,uint param_2);
template<class... A> int FUN_10c76fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_10c76fc0(uint *param_1,uint param_2);
template<class... A> int FUN_10c76fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_10c76fd0(uint *param_1,uint param_2);
template<class... A> int FUN_10c76fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_10c76fe0(uint *param_1,uint param_2);
template<class... A> int FUN_10c76fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c77720(void);
template<class... A> int FUN_10c77720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c77b30(void);
template<class... A> int FUN_10c77b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c77c20(void);
template<class... A> int FUN_10c77c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c78470(int param_1);
template<class... A> int FUN_10c78470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c78510(void);
template<class... A> int FUN_10c78510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_10c78bc0(int param_1);
template<class... A> int __stdcall FUN_10c78bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c78e00(void);
template<class... A> int FUN_10c78e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7a2f0(int param_1);
template<class... A> int FUN_10c7a2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c7a300(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c7a300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c7a310(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c7a310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c7a320(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c7a320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c7a330(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c7a330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c7a340(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c7a340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c7bc40(int *param_1);
template<class... A> int FUN_10c7bc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7bd30(undefined4 *param_1);
template<class... A> int FUN_10c7bd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7bdd0(undefined4 *param_1);
template<class... A> int FUN_10c7bdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7bde0(int param_1);
template<class... A> int FUN_10c7bde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7bdf0(undefined4 param_1);
template<class... A> int FUN_10c7bdf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7be00(undefined4 param_1);
template<class... A> int FUN_10c7be00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7be10(undefined4 param_1);
template<class... A> int FUN_10c7be10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7be20(undefined4 param_1);
template<class... A> int FUN_10c7be20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7be30(undefined4 param_1);
template<class... A> int FUN_10c7be30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7be40(undefined4 param_1);
template<class... A> int FUN_10c7be40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7be50(undefined4 param_1);
template<class... A> int FUN_10c7be50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7be60(undefined4 param_1);
template<class... A> int FUN_10c7be60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7be70(undefined4 param_1);
template<class... A> int FUN_10c7be70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7be80(int param_1);
template<class... A> int FUN_10c7be80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7be90(int param_1);
template<class... A> int FUN_10c7be90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c7bea0(int param_1);
template<class... A> int FUN_10c7bea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7beb0(undefined4 param_1);
template<class... A> int FUN_10c7beb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7bec0(undefined4 param_1);
template<class... A> int FUN_10c7bec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7bed0(undefined4 param_1);
template<class... A> int FUN_10c7bed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7bee0(undefined4 param_1);
template<class... A> int FUN_10c7bee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7bef0(undefined4 param_1);
template<class... A> int FUN_10c7bef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7bf00(undefined4 param_1);
template<class... A> int FUN_10c7bf00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7bf10(undefined4 param_1);
template<class... A> int FUN_10c7bf10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7bf20(undefined4 param_1);
template<class... A> int FUN_10c7bf20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7c080(undefined4 *param_1);
template<class... A> int FUN_10c7c080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7c090(int param_1);
template<class... A> int FUN_10c7c090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7c0a0(int param_1);
template<class... A> int FUN_10c7c0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c7c0b0(undefined4 param_1);
template<class... A> int FUN_10c7c0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7c0e0(int param_1);
template<class... A> int FUN_10c7c0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c7c2b0(int param_1,int param_2);
template<class... A> int FUN_10c7c2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte __fastcall FUN_10c7c2e0(int param_1);
template<class... A> int FUN_10c7c2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c7c460(undefined4 *param_1);
template<class... A> int FUN_10c7c460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10c7c4e0(byte param_1);
template<class... A> int FUN_10c7c4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10c7c4f0(byte param_1);
template<class... A> int FUN_10c7c4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c7c540(int param_1);
template<class... A> int FUN_10c7c540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c7c550(int param_1);
template<class... A> int FUN_10c7c550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c7ccd0(int param_1);
template<class... A> int FUN_10c7ccd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c7cde0(int param_1);
template<class... A> int FUN_10c7cde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10c7cdf0(void);
template<class... A> int FUN_10c7cdf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c7ce10(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c7ce10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c7ce20(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c7ce20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c7ce30(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c7ce30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c7ce40(int param_1);
template<class... A> int FUN_10c7ce40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c7ce50(int param_1);
template<class... A> int FUN_10c7ce50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c7cf80(undefined4 *param_1);
template<class... A> int FUN_10c7cf80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c7cf90(undefined4 *param_1);
template<class... A> int FUN_10c7cf90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c7cfa0(undefined4 *param_1);
template<class... A> int FUN_10c7cfa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c7d0a0(int *param_1);
template<class... A> int FUN_10c7d0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c7d0b0(int param_1);
template<class... A> int FUN_10c7d0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7d0c0(int param_1);
template<class... A> int FUN_10c7d0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7d3a0(int param_1);
template<class... A> int FUN_10c7d3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c7d3f0(int param_1);
template<class... A> int __stdcall FUN_10c7d3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10c7d8b0(void *param_1, int param_2, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10c7d8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c7d930(undefined4 *param_1, undefined4 *param_2, int param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10c7d930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c7d970(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10c7d970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c7d9a0(undefined8 *param_1, undefined8 *param_2, int param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10c7d9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c7d9e0(undefined4 *param_1,undefined4 *param_2,int param_3);
template<class... A> int FUN_10c7d9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c7da20(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10c7da20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c7da50(undefined8 *param_1,undefined8 *param_2,int param_3);
template<class... A> int FUN_10c7da50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7da90(undefined4 *param_1);
template<class... A> int FUN_10c7da90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c7dd00(uint param_1);
template<class... A> int FUN_10c7dd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c7dd70(uint param_1);
template<class... A> int FUN_10c7dd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void  FUN_10c7dfa0(void *param_1,size_t param_2,char param_3);
template<class... A> int FUN_10c7dfa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c7dfe0(int *param_1);
template<class... A> int FUN_10c7dfe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c7dff0(int *param_1);
template<class... A> int FUN_10c7dff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c7e000(int *param_1);
template<class... A> int FUN_10c7e000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7e020(undefined4 *param_1);
template<class... A> int FUN_10c7e020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c7e030(int param_1,int param_2);
template<class... A> int FUN_10c7e030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c7e080(int param_1,int param_2);
template<class... A> int FUN_10c7e080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c7e0d0(int param_1,int param_2);
template<class... A> int FUN_10c7e0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7e530(int *param_1);
template<class... A> int FUN_10c7e530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7e550(undefined4 param_1);
template<class... A> int FUN_10c7e550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c7e940(void);
template<class... A> int FUN_10c7e940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10c7e950(void);
template<class... A> int FUN_10c7e950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c7e9a0(int *param_1);
template<class... A> int FUN_10c7e9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c7ea20(char *param_1);
template<class... A> int FUN_10c7ea20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c7ea40(int *param_1);
template<class... A> int FUN_10c7ea40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10c7ea60(void);
template<class... A> int FUN_10c7ea60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10c7ea70(void);
template<class... A> int FUN_10c7ea70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c7ea80(void);
template<class... A> int FUN_10c7ea80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c7ea90(void);
template<class... A> int FUN_10c7ea90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c7eaa0(void);
template<class... A> int FUN_10c7eaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c7eab0(void);
template<class... A> int FUN_10c7eab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c7eac0(void);
template<class... A> int FUN_10c7eac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c7ead0(void);
template<class... A> int FUN_10c7ead0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c7eae0(void);
template<class... A> int FUN_10c7eae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c7eaf0(byte *param_1);
template<class... A> int FUN_10c7eaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7fb10(undefined4 *param_1);
template<class... A> int FUN_10c7fb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c7fc70(undefined4 *param_1);
template<class... A> int FUN_10c7fc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c7fca0(int *param_1);
template<class... A> int FUN_10c7fca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c7fcc0(undefined4 *param_1);
template<class... A> int FUN_10c7fcc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c7ffa0(undefined4 param_1);
template<class... A> int FUN_10c7ffa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c7ffb0(undefined4 param_1);
template<class... A> int FUN_10c7ffb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c7ffc0(int param_1);
template<class... A> int FUN_10c7ffc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c7ffe0(int *param_1);
template<class... A> int FUN_10c7ffe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c7fff0(int *param_1);
template<class... A> int FUN_10c7fff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_10c80210(char param_1,int param_2);
template<class... A> int FUN_10c80210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c807c0(undefined4 *param_1);
template<class... A> int FUN_10c807c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c80850(undefined4 *param_1);
template<class... A> int FUN_10c80850(A...);
/* WARNING: Removing unreachable block_10c80f70 (ram,0x101ba14a) */ void __fastcall FUN_10c80f70(undefined4 *param_1);
/* WARNING: Removing unreachable block_10c80f80 (ram,0x101ba14a) */ void __fastcall FUN_10c80f80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c815d0(undefined4 *param_1);
template<class... A> int FUN_10c815d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c815f0(undefined4 *param_1);
template<class... A> int FUN_10c815f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c81610(int param_1);
template<class... A> int FUN_10c81610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10c81dd0(int param_1);
template<class... A> int FUN_10c81dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10c81df0(int param_1);
template<class... A> int FUN_10c81df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10c81e90(int param_1);
template<class... A> int FUN_10c81e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10c81eb0(int param_1);
template<class... A> int FUN_10c81eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c83c20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10c83c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c83cd0(void);
template<class... A> int FUN_10c83cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c83ec0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10c83ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c83ed0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10c83ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c83f40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10c83f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c848c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10c848c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c848e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10c848e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c84900(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c84900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c84920(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10c84920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c84940(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10c84940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c84960(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c84960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c849c0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c849c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c849d0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c849d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c849e0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c849e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c849f0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c849f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c84c70(void);
template<class... A> int FUN_10c84c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c84c80(void);
template<class... A> int FUN_10c84c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c84c90(void);
template<class... A> int FUN_10c84c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c84ca0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c84ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c84cb0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c84cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c84cc0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c84cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c84cd0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c84cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c84ce0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c84ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c84cf0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c84cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c84d00(void);
template<class... A> int FUN_10c84d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c84d10(void);
template<class... A> int FUN_10c84d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c84d20(void);
template<class... A> int FUN_10c84d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c84d30(void);
template<class... A> int FUN_10c84d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c854d0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10c854d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c854f0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10c854f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c85660(undefined4 param_1);
template<class... A> int FUN_10c85660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c85670(undefined4 *param_1);
template<class... A> int FUN_10c85670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c85680(undefined4 *param_1);
template<class... A> int FUN_10c85680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c85690(undefined4 *param_1);
template<class... A> int FUN_10c85690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c856a0(int param_1,int param_2,int param_3,undefined4 param_4);
template<class... A> int FUN_10c856a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c85a40(undefined4 param_1);
template<class... A> int FUN_10c85a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c85a50(undefined4 param_1);
template<class... A> int FUN_10c85a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c85e30(int param_1);
template<class... A> int FUN_10c85e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c86a60(undefined4 param_1);
template<class... A> int FUN_10c86a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c86c30(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5);
template<class... A> int FUN_10c86c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c86dc0(int param_1);
template<class... A> int FUN_10c86dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c87820(undefined4 param_1);
template<class... A> int FUN_10c87820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c87830(undefined4 param_1);
template<class... A> int FUN_10c87830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c87840(undefined4 param_1);
template<class... A> int FUN_10c87840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c87850(undefined4 param_1);
template<class... A> int FUN_10c87850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c87860(undefined4 param_1);
template<class... A> int FUN_10c87860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c87870(undefined4 param_1);
template<class... A> int FUN_10c87870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c87880(undefined4 param_1);
template<class... A> int FUN_10c87880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c87890(undefined4 param_1);
template<class... A> int FUN_10c87890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c878a0(undefined4 param_1);
template<class... A> int FUN_10c878a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c878b0(undefined4 param_1);
template<class... A> int FUN_10c878b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c878c0(undefined4 param_1);
template<class... A> int FUN_10c878c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c878d0(undefined4 param_1);
template<class... A> int FUN_10c878d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c878e0(undefined4 param_1);
template<class... A> int FUN_10c878e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c878f0(undefined4 param_1);
template<class... A> int FUN_10c878f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c87900(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10c87900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c87940(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10c87940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c87990(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10c87990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c87b00(int *param_1,int *param_2);
template<class... A> int FUN_10c87b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c87e80(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c87e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c87ea0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10c87ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c880c0(undefined4 param_1);
template<class... A> int FUN_10c880c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c880d0(undefined4 param_1);
template<class... A> int FUN_10c880d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c880e0(undefined4 param_1);
template<class... A> int FUN_10c880e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c880f0(undefined4 param_1);
template<class... A> int FUN_10c880f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c88100(undefined4 param_1);
template<class... A> int FUN_10c88100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c88110(undefined4 param_1);
template<class... A> int FUN_10c88110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c88120(undefined4 param_1);
template<class... A> int FUN_10c88120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c88130(undefined4 param_1);
template<class... A> int FUN_10c88130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c88140(undefined4 param_1);
template<class... A> int FUN_10c88140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c88150(undefined4 param_1);
template<class... A> int FUN_10c88150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c88160(undefined4 param_1);
template<class... A> int FUN_10c88160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c88170(undefined4 param_1);
template<class... A> int FUN_10c88170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_10c88290(int param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_10c88290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c883d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10c883d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c88400(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10c88400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c88610(undefined4 *param_1);
template<class... A> int FUN_10c88610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c88630(undefined4 *param_1);
template<class... A> int FUN_10c88630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c88910(undefined4 *param_1);
template<class... A> int FUN_10c88910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c88930(undefined4 *param_1);
template<class... A> int FUN_10c88930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c889d0(undefined4 *param_1);
template<class... A> int FUN_10c889d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c889f0(undefined4 *param_1);
template<class... A> int FUN_10c889f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c88a10(undefined4 param_1);
template<class... A> int FUN_10c88a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c88a20(undefined4 param_1);
template<class... A> int FUN_10c88a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c89140(undefined4 *param_1);
template<class... A> int FUN_10c89140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c891a0(undefined4 *param_1);
template<class... A> int FUN_10c891a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c89630(void);
template<class... A> int FUN_10c89630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c89640(void);
template<class... A> int FUN_10c89640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c897c0(int param_1);
template<class... A> int FUN_10c897c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c897d0(int param_1);
template<class... A> int FUN_10c897d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c89b10(int *param_1);
template<class... A> int FUN_10c89b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c89b70(int *param_1);
template<class... A> int FUN_10c89b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c8a020(int *param_1);
template<class... A> int FUN_10c8a020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c8a030(int *param_1);
template<class... A> int FUN_10c8a030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8a040(undefined4 *param_1);
template<class... A> int FUN_10c8a040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8a050(undefined4 *param_1);
template<class... A> int FUN_10c8a050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c8a060(int *param_1);
template<class... A> int FUN_10c8a060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c8a070(int *param_1);
template<class... A> int FUN_10c8a070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c8a080(int *param_1);
template<class... A> int FUN_10c8a080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c8a090(int *param_1);
template<class... A> int FUN_10c8a090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c8a0a0(int *param_1);
template<class... A> int FUN_10c8a0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c8a0b0(int *param_1);
template<class... A> int FUN_10c8a0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c8a0c0(int *param_1);
template<class... A> int FUN_10c8a0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c8a0d0(int *param_1);
template<class... A> int FUN_10c8a0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c8a0e0(int *param_1);
template<class... A> int FUN_10c8a0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c8a0f0(int *param_1);
template<class... A> int FUN_10c8a0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c8a100(undefined4 *param_1);
template<class... A> int FUN_10c8a100(A...);
extern void __fastcall FUN_101ba0d0(void *param_1);

extern void __fastcall thunk_FUN_101ba0d0(void *param_1);

extern int ghidra_vftable_RControlAIOOpRef_DownloadCertBundleOp_;
extern int ghidra_vftable_RControlAIOOpRef_GetCertBundleAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RGetHouseholdSettingAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RSetHouseholdSettingAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpAIGetAudioInputAttributesAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpAIGetLineInLevelAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpDPGetAutoplayLinkedZonesAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpDPGetAutoplayRoomUUIDAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpDPGetAutoplayVolumeAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpDPGetUseAutoplayVolumeAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpRCGetSupportsOutputFixedAIOOp_;

// Reference entry 10c35fe0; body size 3 bytes.
extern int __stdcall thunk_FUN_102207b0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10246170(int a1,int a2);
extern int __stdcall thunk_FUN_10246290(int a1,int a2);
extern int __stdcall thunk_FUN_10b034d0(int a1);
extern int __stdcall thunk_FUN_10c3ceb0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10c44850(int a1,int a2);
extern int __stdcall thunk_FUN_10c71f40(int a1,int a2);
extern int __stdcall thunk_FUN_10c78090(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10c7a9d0(int a1,int a2);
extern int __stdcall thunk_FUN_10c7bc70(int a1);
extern int __stdcall thunk_FUN_10c7cce0(int a1);
extern int __stdcall thunk_FUN_10c80150(int a1);
extern int __stdcall thunk_FUN_111c05a0(int a1,int a2,int a3,int a4,int a5,int a6,int a7);
extern int __stdcall thunk_FUN_111c0760(int a1,int a2,int a3,int a4,int a5,int a6,int a7,int a8);
extern int __stdcall thunk_FUN_1124a160(int a1);
extern int __stdcall thunk_FUN_1124a200(int a1,int a2);
extern int __stdcall thunk_FUN_1125ac90(int a1,int a2);
extern int __stdcall thunk_FUN_1125b030(int a1,int a2);
extern int __stdcall thunk_FUN_1125b370(int a1);
extern int __stdcall thunk_FUN_1125b3f0(int a1);
struct SCFp_72_0 { char _p[72]; int (__thiscall *v)(void); };
struct SCFp_76_0 { char _p[76]; int (__thiscall *v)(void); };
struct SCVtbl_0_0 { virtual int v(void); };
struct SCVtbl_0_1 { virtual int v(int a1); };
struct SCVtbl_1_1 { virtual void _p0(); virtual int v(int a1); };
struct SCVtbl_2_1 { virtual void _p0(); virtual void _p1(); virtual int v(int a1); };
struct SCVtbl_2_2 { virtual void _p0(); virtual void _p1(); virtual int v(int a1,int a2); };
struct SCVtbl_4_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(int a1,int a2); };
struct SCVtbl_5_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(int a1); };
struct SCVtbl_20_4 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual int v(int a1,int a2,int a3,int a4); };
struct SCVtbl_1_0 { virtual void _p0(); virtual int v(void); };
struct SCVtbl_2_0 { virtual void _p0(); virtual void _p1(); virtual int v(void); };
struct SCVtbl_3_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(void); };
struct SCVtbl_4_3 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(int a1,int a2,int a3); };
struct SCVtbl_8_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual int v(void); };
struct SCVtbl_9_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual int v(void); };
struct SCVtbl_10_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual int v(void); };
struct SCVtbl_11_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual int v(void); };
int FUN_1005b807();
int FUN_1003217d();
int FUN_10001b59();
int FUN_10076ea4();
int FUN_100679f9();
int FUN_100200ae();
int FUN_1000e11a();
int FUN_1148a279();
int FUN_1148a27f();
#line 1 "ENTRY_10c35fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c35fe0(void)

{
  return;
}


// Reference entry 10c360b0; body size 5 bytes.
#line 1 "ENTRY_10c360b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c360b0(void)

{
  FUN_10c35e50();
  return;
}


// Reference entry 10c36350; body size 19 bytes.
#line 1 "ENTRY_10c36350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c36350(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c36370; body size 72 bytes.
#line 1 "ENTRY_10c36370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c36370(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piStack_4;
  
  iVar2 = (int)(*param_1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x10) != 0)) {
    piVar1 = (int *)((int *)(iVar2 + 0xc));
    piStack_4 = (int *)(param_1);
    thunk_FUN_10c34bf0(piVar1,*(undefined4 *)(iVar2 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(iVar2 + 0x10) = (undefined4)(0);
    piStack_4 = (int *)((int *)*piVar1);
    thunk_FUN_10c351c0(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),&piStack_4);
  }
  return;
}


// Reference entry 10c363d0; body size 65 bytes.
#line 1 "ENTRY_10c363d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c363d0(int *param_2)
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


// Reference entry 10c36430; body size 65 bytes.
#line 1 "ENTRY_10c36430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c36430(int *param_2)
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


// Reference entry 10c36530; body size 14 bytes.
#line 1 "ENTRY_10c36530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c36530(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10c36550; body size 14 bytes.
#line 1 "ENTRY_10c36550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c36550(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10c365a0; body size 7 bytes.
#line 1 "ENTRY_10c365a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c365a0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10c365b0; body size 3 bytes.
#line 1 "ENTRY_10c365b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c365b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c365c0; body size 7 bytes.
#line 1 "ENTRY_10c365c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c365c0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10c365d0; body size 3 bytes.
#line 1 "ENTRY_10c365d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c365d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c365e0; body size 8 bytes.
#line 1 "ENTRY_10c365e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c365e0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10c365f0; body size 3 bytes.
#line 1 "ENTRY_10c365f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c365f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c36600; body size 6 bytes.
#line 1 "ENTRY_10c36600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c36600(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c36610; body size 6 bytes.
#line 1 "ENTRY_10c36610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c36610(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c36620; body size 9 bytes.
#line 1 "ENTRY_10c36620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c36620(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c36630; body size 9 bytes.
#line 1 "ENTRY_10c36630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c36630(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c36640; body size 10 bytes.
#line 1 "ENTRY_10c36640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10c36640(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10c36650; body size 18 bytes.
#line 1 "ENTRY_10c36650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10c36650(int *param_1,int *param_2)

{
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10c36670; body size 57 bytes.
#line 1 "ENTRY_10c36670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_10c36670(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10c366c0; body size 18 bytes.
#line 1 "ENTRY_10c366c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10c366c0(int *param_1,int *param_2)

{
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10c369a0; body size 22 bytes.
#line 1 "ENTRY_10c369a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c369a0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10c36b00; body size 20 bytes.
#line 1 "ENTRY_10c36b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c36b00(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0xccccccc) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10c36b20; body size 67 bytes.
#line 1 "ENTRY_10c36b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c36b20(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10) + 1);
  fVar2 = (float)((float)((double)iVar1 + (double)(uint)(&DAT_11880fb0)[-(iVar1 >> 0x1f)]) /
          (float)((double)*(int *)(param_1 + 0x24) + (double)(uint)(&DAT_11880fb0)[-(*(int *)(param_1 + 0x24) >> 0x1f)]));
  return (bool)(*(float *)(param_1 + 8) <= (float)(fVar2) &&(float)( fVar2) != *(float *)(param_1 + 8));
}


// Reference entry 10c36c30; body size 8 bytes.
#line 1 "ENTRY_10c36c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c36c30(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10c36e00; body size 3 bytes.
#line 1 "ENTRY_10c36e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c36e00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c36e10; body size 3 bytes.
#line 1 "ENTRY_10c36e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c36e10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c36e20; body size 3 bytes.
#line 1 "ENTRY_10c36e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c36e20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c36e30; body size 3 bytes.
#line 1 "ENTRY_10c36e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c36e30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c36e40; body size 3 bytes.
#line 1 "ENTRY_10c36e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c36e40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c36e50; body size 3 bytes.
#line 1 "ENTRY_10c36e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c36e50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c36e60; body size 4 bytes.
#line 1 "ENTRY_10c36e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c36e60(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10c36e70; body size 4 bytes.
#line 1 "ENTRY_10c36e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c36e70(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10c36e80; body size 3 bytes.
#line 1 "ENTRY_10c36e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c36e80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c36e90; body size 3 bytes.
#line 1 "ENTRY_10c36e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c36e90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c36ea0; body size 4 bytes.
#line 1 "ENTRY_10c36ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c36ea0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10c36eb0; body size 92 bytes.
#line 1 "ENTRY_10c36eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c36eb0(uint param_2,int param_3,int *param_4)
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


// Reference entry 10c36f30; body size 7 bytes.
#line 1 "ENTRY_10c36f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c36f30(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10c36f40; body size 4 bytes.
#line 1 "ENTRY_10c36f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c36f40(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10c36f50; body size 4 bytes.
#line 1 "ENTRY_10c36f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c36f50(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10c36fd0; body size 3 bytes.
#line 1 "ENTRY_10c36fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c36fd0(void)

{
  return;
}


// Reference entry 10c37090; body size 11 bytes.
#line 1 "ENTRY_10c37090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c37090(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10c370a0; body size 6 bytes.
#line 1 "ENTRY_10c370a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c370a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10c370b0; body size 26 bytes.
#line 1 "ENTRY_10c370b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c370b0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)(((SCVtbl_0_1*)(*(undefined4 **)(param_2 + 0x24)))->v((int)(param_1)), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10c370d0; body size 10 bytes.
#line 1 "ENTRY_10c370d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c370d0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10c371a0; body size 14 bytes.
#line 1 "ENTRY_10c371a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c371a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0xc), 0);
  return;
}


// Reference entry 10c371c0; body size 13 bytes.
#line 1 "ENTRY_10c371c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c371c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10c371d0; body size 12 bytes.
#line 1 "ENTRY_10c371d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c371d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 10c371e0; body size 11 bytes.
#line 1 "ENTRY_10c371e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c371e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10c371f0; body size 43 bytes.
#line 1 "ENTRY_10c371f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c371f0(int param_1,int param_2,int param_3)

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


// Reference entry 10c37550; body size 90 bytes.
#line 1 "ENTRY_10c37550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c37550(uint param_1)

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


// Reference entry 10c375d0; body size 87 bytes.
#line 1 "ENTRY_10c375d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c375d0(uint param_1)

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


// Reference entry 10c37640; body size 68 bytes.
#line 1 "ENTRY_10c37640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10c37640(byte *param_2)
{
  int param_1 = (int )this;
  return (uint)(*(uint *)(param_1 + 0x20) &
         ((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2]) * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 10c376a0; body size 4 bytes.
#line 1 "ENTRY_10c376a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c376a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10c376c0; body size 68 bytes.
#line 1 "ENTRY_10c376c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c376c0(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar1 = (int *)((int *)(param_1 + 0xc));
    iStack_4 = (int)(param_1);
    thunk_FUN_10c34bf0(piVar1,*(undefined4 *)(param_1 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_10c351c0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),&iStack_4);
  }
  return;
}


// Reference entry 10c37830; body size 57 bytes.
#line 1 "ENTRY_10c37830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c37830(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10c37880; body size 60 bytes.
#line 1 "ENTRY_10c37880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c37880(int param_1,int param_2)

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


// Reference entry 10c378d0; body size 61 bytes.
#line 1 "ENTRY_10c378d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c378d0(int param_1,int param_2)

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


// Reference entry 10c37920; body size 16 bytes.
#line 1 "ENTRY_10c37920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c37920(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10c37f20; body size 4 bytes.
#line 1 "ENTRY_10c37f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c37f20(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c381c0; body size 4 bytes.
#line 1 "ENTRY_10c381c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10c381c0(int param_1)

{
  return (float10)((float10)*(float *)(param_1 + 8));
}


// Reference entry 10c381d0; body size 6 bytes.
#line 1 "ENTRY_10c381d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c381d0(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10c381e0; body size 6 bytes.
#line 1 "ENTRY_10c381e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c381e0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10c381f0; body size 6 bytes.
#line 1 "ENTRY_10c381f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c381f0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10c38200; body size 6 bytes.
#line 1 "ENTRY_10c38200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c38200(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10c38210; body size 3 bytes.
#line 1 "ENTRY_10c38210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c38210(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c38220; body size 3 bytes.
#line 1 "ENTRY_10c38220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c38220(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c38a10; body size 28 bytes.
#line 1 "ENTRY_10c38a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c38a10(undefined4 *param_1)

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


// Reference entry 10c38a40; body size 28 bytes.
#line 1 "ENTRY_10c38a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c38a40(undefined4 *param_1)

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


// Reference entry 10c38fd0; body size 9 bytes.
#line 1 "ENTRY_10c38fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c38fd0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10c39920; body size 26 bytes.
#line 1 "ENTRY_10c39920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c39920(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10c399c0; body size 26 bytes.
#line 1 "ENTRY_10c399c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c399c0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10c399e0; body size 26 bytes.
#line 1 "ENTRY_10c399e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c399e0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10c39a00; body size 78 bytes.
#line 1 "ENTRY_10c39a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c39a00(int *param_2)
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


// Reference entry 10c39a70; body size 78 bytes.
#line 1 "ENTRY_10c39a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c39a70(int *param_2)
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


// Reference entry 10c39ae0; body size 16 bytes.
#line 1 "ENTRY_10c39ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c39ae0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c39b40; body size 42 bytes.
#line 1 "ENTRY_10c39b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c39b40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorDateTime_EventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3a2f0; body size 19 bytes.
#line 1 "ENTRY_10c3a2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c3a2f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c3a560; body size 3 bytes.
#line 1 "ENTRY_10c3a560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c3a560(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c3a570; body size 7 bytes.
#line 1 "ENTRY_10c3a570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c3a570(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10c3a580; body size 3 bytes.
#line 1 "ENTRY_10c3a580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c3a580(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c3a590; body size 7 bytes.
#line 1 "ENTRY_10c3a590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c3a590(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10c3a5a0; body size 3 bytes.
#line 1 "ENTRY_10c3a5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c3a5a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c3b250; body size 3 bytes.
#line 1 "ENTRY_10c3b250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c3b250(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c3b260; body size 3 bytes.
#line 1 "ENTRY_10c3b260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c3b260(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c3b6b0; body size 28 bytes.
#line 1 "ENTRY_10c3b6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c3b6b0(undefined4 *param_1)

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


// Reference entry 10c3b790; body size 21 bytes.
#line 1 "ENTRY_10c3b790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3b790(undefined4 param_1,undefined4 param_2)

{
  __allmul(param_1,param_2,1000,0);
  return;
}


// Reference entry 10c3bf90; body size 113 bytes.
#line 1 "ENTRY_10c3bf90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3bf90(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *_Src;
  void *_Dst;
  size_t _Size;
  int iVar1;
  
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  _Src = (void *)((void *)*param_3);
  if ((void *)(_Src) != (void *)param_3[1]) {
    _Size = (size_t)((int)param_3[1] - (int)_Src);
    iVar1 = (int)((int)_Size >> 2);
    thunk_FUN_10c42950(iVar1);
    _Dst = (void *)((void *)param_1[1]);
    memmove(_Dst,_Src,_Size);
    param_1[2] = (undefined4)((char *)((int)_Dst + iVar1 * 4));
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c020; body size 22 bytes.
#line 1 "ENTRY_10c3c020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3c020(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c310; body size 18 bytes.
#line 1 "ENTRY_10c3c310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c3c310(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c330; body size 25 bytes.
#line 1 "ENTRY_10c3c330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c3c330(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c350; body size 25 bytes.
#line 1 "ENTRY_10c3c350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c3c350(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c370; body size 18 bytes.
#line 1 "ENTRY_10c3c370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c3c370(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c390; body size 25 bytes.
#line 1 "ENTRY_10c3c390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c3c390(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c3b0; body size 25 bytes.
#line 1 "ENTRY_10c3c3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c3c3b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c3d0; body size 18 bytes.
#line 1 "ENTRY_10c3c3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c3c3d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c3f0; body size 25 bytes.
#line 1 "ENTRY_10c3c3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c3c3f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c410; body size 25 bytes.
#line 1 "ENTRY_10c3c410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c3c410(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c430; body size 18 bytes.
#line 1 "ENTRY_10c3c430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c3c430(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c450; body size 25 bytes.
#line 1 "ENTRY_10c3c450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c3c450(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c470; body size 25 bytes.
#line 1 "ENTRY_10c3c470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c3c470(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c490; body size 25 bytes.
#line 1 "ENTRY_10c3c490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c3c490(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c4b0; body size 71 bytes.
#line 1 "ENTRY_10c3c4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3c4b0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  param_1[1] = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c510; body size 11 bytes.
#line 1 "ENTRY_10c3c510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3c510(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c520; body size 11 bytes.
#line 1 "ENTRY_10c3c520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3c520(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c5e0; body size 13 bytes.
#line 1 "ENTRY_10c3c5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3c5e0(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c5f0; body size 13 bytes.
#line 1 "ENTRY_10c3c5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3c5f0(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c600; body size 22 bytes.
#line 1 "ENTRY_10c3c600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3c600(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c620; body size 18 bytes.
#line 1 "ENTRY_10c3c620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c3c620(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c640; body size 5 bytes.
#line 1 "ENTRY_10c3c640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c3c640(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3c650; body size 5 bytes.
#line 1 "ENTRY_10c3c650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c3c650(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3c660; body size 5 bytes.
#line 1 "ENTRY_10c3c660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c3c660(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3c670; body size 5 bytes.
#line 1 "ENTRY_10c3c670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c3c670(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3c680; body size 5 bytes.
#line 1 "ENTRY_10c3c680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c3c680(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3c690; body size 5 bytes.
#line 1 "ENTRY_10c3c690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c3c690(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3c6a0; body size 5 bytes.
#line 1 "ENTRY_10c3c6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c3c6a0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3c6b0; body size 5 bytes.
#line 1 "ENTRY_10c3c6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c3c6b0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3c6c0; body size 11 bytes.
#line 1 "ENTRY_10c3c6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3c6c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c6d0; body size 13 bytes.
#line 1 "ENTRY_10c3c6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3c6d0(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c6e0; body size 13 bytes.
#line 1 "ENTRY_10c3c6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3c6e0(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c6f0; body size 22 bytes.
#line 1 "ENTRY_10c3c6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3c6f0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c710; body size 22 bytes.
#line 1 "ENTRY_10c3c710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3c710(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c730; body size 22 bytes.
#line 1 "ENTRY_10c3c730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3c730(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c750; body size 18 bytes.
#line 1 "ENTRY_10c3c750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c3c750(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c890; body size 25 bytes.
#line 1 "ENTRY_10c3c890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c3c890(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c8b0; body size 73 bytes.
#line 1 "ENTRY_10c3c8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3c8b0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  param_1[1] = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c910; body size 20 bytes.
#line 1 "ENTRY_10c3c910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3c910(undefined4 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c930; body size 20 bytes.
#line 1 "ENTRY_10c3c930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3c930(undefined4 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c950; body size 20 bytes.
#line 1 "ENTRY_10c3c950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3c950(undefined4 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c970; body size 20 bytes.
#line 1 "ENTRY_10c3c970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3c970(undefined4 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c990; body size 20 bytes.
#line 1 "ENTRY_10c3c990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3c990(undefined4 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c9b0; body size 20 bytes.
#line 1 "ENTRY_10c3c9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3c9b0(undefined4 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c9d0; body size 20 bytes.
#line 1 "ENTRY_10c3c9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3c9d0(undefined4 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3c9f0; body size 20 bytes.
#line 1 "ENTRY_10c3c9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3c9f0(undefined4 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3ca10; body size 20 bytes.
#line 1 "ENTRY_10c3ca10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3ca10(undefined4 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3ca30; body size 20 bytes.
#line 1 "ENTRY_10c3ca30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3ca30(undefined4 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3ca50; body size 20 bytes.
#line 1 "ENTRY_10c3ca50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3ca50(undefined4 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3ca70; body size 20 bytes.
#line 1 "ENTRY_10c3ca70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3ca70(undefined4 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3ca90; body size 57 bytes.
#line 1 "ENTRY_10c3ca90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_10c3ca90(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10c3cae0; body size 18 bytes.
#line 1 "ENTRY_10c3cae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10c3cae0(int *param_1,int *param_2)

{
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10c3cb00; body size 57 bytes.
#line 1 "ENTRY_10c3cb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_10c3cb00(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10c3cb50; body size 18 bytes.
#line 1 "ENTRY_10c3cb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10c3cb50(int *param_1,int *param_2)

{
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10c3cb70; body size 3 bytes.
#line 1 "ENTRY_10c3cb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3cb70(void)

{
  return;
}


// Reference entry 10c3cb80; body size 3 bytes.
#line 1 "ENTRY_10c3cb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3cb80(void)

{
  return;
}


// Reference entry 10c3cb90; body size 3 bytes.
#line 1 "ENTRY_10c3cb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3cb90(void)

{
  return;
}


// Reference entry 10c3cba0; body size 3 bytes.
#line 1 "ENTRY_10c3cba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3cba0(void)

{
  return;
}


// Reference entry 10c3cbb0; body size 3 bytes.
#line 1 "ENTRY_10c3cbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3cbb0(void)

{
  return;
}


// Reference entry 10c3cbc0; body size 3 bytes.
#line 1 "ENTRY_10c3cbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3cbc0(void)

{
  return;
}


// Reference entry 10c3cbd0; body size 3 bytes.
#line 1 "ENTRY_10c3cbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3cbd0(void)

{
  return;
}


// Reference entry 10c3cd00; body size 13 bytes.
#line 1 "ENTRY_10c3cd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3cd00(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c3cd10; body size 13 bytes.
#line 1 "ENTRY_10c3cd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3cd10(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c3cd20; body size 13 bytes.
#line 1 "ENTRY_10c3cd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3cd20(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c3cd30; body size 13 bytes.
#line 1 "ENTRY_10c3cd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3cd30(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c3cd40; body size 13 bytes.
#line 1 "ENTRY_10c3cd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3cd40(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c3cd50; body size 13 bytes.
#line 1 "ENTRY_10c3cd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3cd50(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c3cd60; body size 13 bytes.
#line 1 "ENTRY_10c3cd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3cd60(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c3cd70; body size 13 bytes.
#line 1 "ENTRY_10c3cd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3cd70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c3cd80; body size 13 bytes.
#line 1 "ENTRY_10c3cd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3cd80(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c3cd90; body size 13 bytes.
#line 1 "ENTRY_10c3cd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3cd90(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c3cda0; body size 13 bytes.
#line 1 "ENTRY_10c3cda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3cda0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c3cdb0; body size 13 bytes.
#line 1 "ENTRY_10c3cdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3cdb0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c3cdc0; body size 113 bytes.
#line 1 "ENTRY_10c3cdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c3cdc0(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_10c3ceb0((int)(*(undefined4 *)(*param_2 + 4)),(int)(*param_1),(int)(param_3)), 0);
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


// Reference entry 10c3ce50; body size 33 bytes.
#line 1 "ENTRY_10c3ce50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c3ce50(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10c3ce80; body size 33 bytes.
#line 1 "ENTRY_10c3ce80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c3ce80(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10c3d060; body size 3 bytes.
#line 1 "ENTRY_10c3d060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3d060(void)

{
  return;
}


// Reference entry 10c3d070; body size 3 bytes.
#line 1 "ENTRY_10c3d070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3d070(void)

{
  return;
}


// Reference entry 10c3d080; body size 3 bytes.
#line 1 "ENTRY_10c3d080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3d080(void)

{
  return;
}


// Reference entry 10c3d090; body size 3 bytes.
#line 1 "ENTRY_10c3d090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3d090(void)

{
  return;
}


// Reference entry 10c3d0a0; body size 3 bytes.
#line 1 "ENTRY_10c3d0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3d0a0(void)

{
  return;
}


// Reference entry 10c3d0b0; body size 3 bytes.
#line 1 "ENTRY_10c3d0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3d0b0(void)

{
  return;
}


// Reference entry 10c3d0c0; body size 3 bytes.
#line 1 "ENTRY_10c3d0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3d0c0(void)

{
  return;
}


// Reference entry 10c3d0d0; body size 3 bytes.
#line 1 "ENTRY_10c3d0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3d0d0(void)

{
  return;
}


// Reference entry 10c3d0e0; body size 3 bytes.
#line 1 "ENTRY_10c3d0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3d0e0(void)

{
  return;
}


// Reference entry 10c3d200; body size 18 bytes.
#line 1 "ENTRY_10c3d200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c3d200(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10c3d220; body size 18 bytes.
#line 1 "ENTRY_10c3d220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c3d220(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10c3d240; body size 18 bytes.
#line 1 "ENTRY_10c3d240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c3d240(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10c3d260; body size 18 bytes.
#line 1 "ENTRY_10c3d260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c3d260(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10c3d880; body size 54 bytes.
#line 1 "ENTRY_10c3d880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c3d880(uint param_1,byte *param_2)

{
  return (int)(((((*param_2 ^ param_1) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2]) *
          0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 10c3d8d0; body size 54 bytes.
#line 1 "ENTRY_10c3d8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c3d8d0(uint param_1,byte *param_2)

{
  return (int)(((((*param_2 ^ param_1) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2]) *
          0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 10c3d920; body size 41 bytes.
#line 1 "ENTRY_10c3d920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3d920(undefined4 param_1,undefined4 *param_2)

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


// Reference entry 10c3d9b0; body size 41 bytes.
#line 1 "ENTRY_10c3d9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3d9b0(undefined4 param_1,undefined4 *param_2)

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


// Reference entry 10c3d9f0; body size 51 bytes.
#line 1 "ENTRY_10c3d9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3d9f0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4*)param_2[1] = (undefined4)((undefined4)(0));
  puVar2 = (undefined4 *)((undefined4 *)*param_2);
  while ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar2);
    ((pair<> *)(0))->m_op_dtor();
    thunk_FUN_1148a50e(puVar2,0x18);
    puVar2 = (undefined4 *)(puVar1);
  }
  return;
}


// Reference entry 10c3da30; body size 15 bytes.
#line 1 "ENTRY_10c3da30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3da30(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x10);
  return;
}


// Reference entry 10c3da50; body size 15 bytes.
#line 1 "ENTRY_10c3da50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3da50(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10c3da70; body size 15 bytes.
#line 1 "ENTRY_10c3da70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3da70(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x10);
  return;
}


// Reference entry 10c3da90; body size 15 bytes.
#line 1 "ENTRY_10c3da90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3da90(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10c3dab0; body size 15 bytes.
#line 1 "ENTRY_10c3dab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3dab0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x10);
  return;
}


// Reference entry 10c3dad0; body size 27 bytes.
#line 1 "ENTRY_10c3dad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3dad0(undefined4 param_1,int param_2)

{
  thunk_FUN_10b034d0((int)(param_2 + 0xc));
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10c3db00; body size 15 bytes.
#line 1 "ENTRY_10c3db00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3db00(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x10);
  return;
}


// Reference entry 10c3db20; body size 26 bytes.
#line 1 "ENTRY_10c3db20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3db20(undefined4 param_1,undefined4 param_2)

{
  ((pair<> *)(0))->m_op_dtor();
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10c3db40; body size 7 bytes.
#line 1 "ENTRY_10c3db40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3db40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c3db50; body size 7 bytes.
#line 1 "ENTRY_10c3db50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3db50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c3db60; body size 7 bytes.
#line 1 "ENTRY_10c3db60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3db60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c3db70; body size 7 bytes.
#line 1 "ENTRY_10c3db70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3db70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c3db80; body size 7 bytes.
#line 1 "ENTRY_10c3db80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3db80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c3db90; body size 7 bytes.
#line 1 "ENTRY_10c3db90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3db90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c3dba0; body size 7 bytes.
#line 1 "ENTRY_10c3dba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3dba0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c3dbb0; body size 7 bytes.
#line 1 "ENTRY_10c3dbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3dbb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c3dbc0; body size 7 bytes.
#line 1 "ENTRY_10c3dbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3dbc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c3dbd0; body size 55 bytes.
#line 1 "ENTRY_10c3dbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c3dbd0(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10c3dc20; body size 55 bytes.
#line 1 "ENTRY_10c3dc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c3dc20(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10c3dc70; body size 5 bytes.
#line 1 "ENTRY_10c3dc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3dc70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3dc80; body size 5 bytes.
#line 1 "ENTRY_10c3dc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3dc80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3dc90; body size 5 bytes.
#line 1 "ENTRY_10c3dc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3dc90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3dca0; body size 5 bytes.
#line 1 "ENTRY_10c3dca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3dca0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3dcb0; body size 73 bytes.
#line 1 "ENTRY_10c3dcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c3dcb0(void *param_2,int param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *_Dst;
  code *pcVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 - (int)param_2 >> 2);
  if (uVar2 != 0) {
    if (0x3fffffff < uVar2) {
      func_0x1001c6cf();
      pcVar1 = (code *)((code *)swi(3), 0);
      (*pcVar1)();
      return;
    }
    thunk_FUN_10c42950(uVar2);
    _Dst = (void *)((void *)*param_1);
    memmove(_Dst,param_2,param_3 - (int)param_2);
    param_1[1] = (undefined4)((char *)((int)_Dst + uVar2 * 4));
  }
  return;
}


// Reference entry 10c3dfc0; body size 7 bytes.
#line 1 "ENTRY_10c3dfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3dfc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c3dfd0; body size 38 bytes.
#line 1 "ENTRY_10c3dfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10c3dfd0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10c3e000; body size 38 bytes.
#line 1 "ENTRY_10c3e000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10c3e000(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10c3e030; body size 5 bytes.
#line 1 "ENTRY_10c3e030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e030(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e040; body size 36 bytes.
#line 1 "ENTRY_10c3e040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c3e040(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10c3e070; body size 36 bytes.
#line 1 "ENTRY_10c3e070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c3e070(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10c3e0a0; body size 5 bytes.
#line 1 "ENTRY_10c3e0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e0a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e0b0; body size 5 bytes.
#line 1 "ENTRY_10c3e0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e0b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e0c0; body size 5 bytes.
#line 1 "ENTRY_10c3e0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e0c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e0d0; body size 5 bytes.
#line 1 "ENTRY_10c3e0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e0d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e0e0; body size 5 bytes.
#line 1 "ENTRY_10c3e0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e0e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e0f0; body size 5 bytes.
#line 1 "ENTRY_10c3e0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e0f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e100; body size 5 bytes.
#line 1 "ENTRY_10c3e100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e110; body size 5 bytes.
#line 1 "ENTRY_10c3e110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e120; body size 5 bytes.
#line 1 "ENTRY_10c3e120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e130; body size 5 bytes.
#line 1 "ENTRY_10c3e130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e130(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e140; body size 5 bytes.
#line 1 "ENTRY_10c3e140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e140(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e150; body size 5 bytes.
#line 1 "ENTRY_10c3e150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e150(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e160; body size 5 bytes.
#line 1 "ENTRY_10c3e160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e160(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e170; body size 5 bytes.
#line 1 "ENTRY_10c3e170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e170(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e180; body size 5 bytes.
#line 1 "ENTRY_10c3e180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e190; body size 5 bytes.
#line 1 "ENTRY_10c3e190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e1a0; body size 5 bytes.
#line 1 "ENTRY_10c3e1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e1a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e1b0; body size 5 bytes.
#line 1 "ENTRY_10c3e1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e1b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e1c0; body size 5 bytes.
#line 1 "ENTRY_10c3e1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e1c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e1d0; body size 5 bytes.
#line 1 "ENTRY_10c3e1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e1d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e1e0; body size 5 bytes.
#line 1 "ENTRY_10c3e1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e1e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e1f0; body size 5 bytes.
#line 1 "ENTRY_10c3e1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e1f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e200; body size 5 bytes.
#line 1 "ENTRY_10c3e200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e200(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e210; body size 5 bytes.
#line 1 "ENTRY_10c3e210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e220; body size 5 bytes.
#line 1 "ENTRY_10c3e220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e220(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e230; body size 5 bytes.
#line 1 "ENTRY_10c3e230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3e230(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3e240; body size 13 bytes.
#line 1 "ENTRY_10c3e240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3e240(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10c3e250; body size 13 bytes.
#line 1 "ENTRY_10c3e250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3e250(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10c3e260; body size 19 bytes.
#line 1 "ENTRY_10c3e260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3e260(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_3[1]);
  *param_2 = (undefined4)(*param_3);
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 10c3e280; body size 63 bytes.
#line 1 "ENTRY_10c3e280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3e280(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  void *pvVar1;
  
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  param_2[1] = (undefined4)(pvVar1);
  return;
}


// Reference entry 10c3e2d0; body size 19 bytes.
#line 1 "ENTRY_10c3e2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3e2d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_3[1]);
  *param_2 = (undefined4)(*param_3);
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 10c3e2f0; body size 95 bytes.
#line 1 "ENTRY_10c3e2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3e2f0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *_Src;
  void *_Dst;
  size_t _Size;
  int iVar1;
  
  *param_2 = (undefined4)(*param_3);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  _Src = (void *)((void *)param_3[1]);
  if ((void *)(_Src) != (void *)param_3[2]) {
    _Size = (size_t)((int)param_3[2] - (int)_Src);
    iVar1 = (int)((int)_Size >> 2);
    thunk_FUN_10c42950(iVar1);
    _Dst = (void *)((void *)param_2[1]);
    memmove(_Dst,_Src,_Size);
    param_2[2] = (undefined4)((char *)((int)_Dst + iVar1 * 4));
  }
  return;
}


// Reference entry 10c3e3f0; body size 3 bytes.
#line 1 "ENTRY_10c3e3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3e3f0(void)

{
  return;
}


// Reference entry 10c3e400; body size 14 bytes.
#line 1 "ENTRY_10c3e400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3e400(undefined4 param_1,int param_2)

{
  thunk_FUN_10b034d0((int)(param_2 + 4));
  return;
}


// Reference entry 10c3e420; body size 3 bytes.
#line 1 "ENTRY_10c3e420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3e420(void)

{
  return;
}


// Reference entry 10c3e430; body size 9 bytes.
#line 1 "ENTRY_10c3e430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3e430(undefined4 param_1,int param_2)

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


// Reference entry 10c3e440; body size 12 bytes.
#line 1 "ENTRY_10c3e440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c3e440(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 2);
}


// Reference entry 10c3ec30; body size 15 bytes.
#line 1 "ENTRY_10c3ec30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3ec30(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10c3ec50; body size 15 bytes.
#line 1 "ENTRY_10c3ec50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3ec50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10c3ec70; body size 15 bytes.
#line 1 "ENTRY_10c3ec70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3ec70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10c3ec90; body size 15 bytes.
#line 1 "ENTRY_10c3ec90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3ec90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10c3efb0; body size 5 bytes.
#line 1 "ENTRY_10c3efb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3efb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3efc0; body size 5 bytes.
#line 1 "ENTRY_10c3efc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3efc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3efd0; body size 5 bytes.
#line 1 "ENTRY_10c3efd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3efd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3efe0; body size 5 bytes.
#line 1 "ENTRY_10c3efe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3efe0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3eff0; body size 5 bytes.
#line 1 "ENTRY_10c3eff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3eff0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f000; body size 5 bytes.
#line 1 "ENTRY_10c3f000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f000(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f010; body size 5 bytes.
#line 1 "ENTRY_10c3f010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f010(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f020; body size 5 bytes.
#line 1 "ENTRY_10c3f020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f020(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f030; body size 5 bytes.
#line 1 "ENTRY_10c3f030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f030(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f040; body size 5 bytes.
#line 1 "ENTRY_10c3f040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f040(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f050; body size 5 bytes.
#line 1 "ENTRY_10c3f050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f050(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f060; body size 5 bytes.
#line 1 "ENTRY_10c3f060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f060(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f070; body size 5 bytes.
#line 1 "ENTRY_10c3f070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f070(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f080; body size 5 bytes.
#line 1 "ENTRY_10c3f080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f080(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f090; body size 5 bytes.
#line 1 "ENTRY_10c3f090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f090(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f0a0; body size 5 bytes.
#line 1 "ENTRY_10c3f0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f0a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f0b0; body size 5 bytes.
#line 1 "ENTRY_10c3f0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f0b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f0c0; body size 5 bytes.
#line 1 "ENTRY_10c3f0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f0c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f0d0; body size 5 bytes.
#line 1 "ENTRY_10c3f0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f0d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f0e0; body size 5 bytes.
#line 1 "ENTRY_10c3f0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f0e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f0f0; body size 5 bytes.
#line 1 "ENTRY_10c3f0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f0f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f100; body size 5 bytes.
#line 1 "ENTRY_10c3f100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f110; body size 5 bytes.
#line 1 "ENTRY_10c3f110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f120; body size 5 bytes.
#line 1 "ENTRY_10c3f120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f130; body size 5 bytes.
#line 1 "ENTRY_10c3f130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f130(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f140; body size 5 bytes.
#line 1 "ENTRY_10c3f140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f140(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f150; body size 5 bytes.
#line 1 "ENTRY_10c3f150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f150(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f160; body size 5 bytes.
#line 1 "ENTRY_10c3f160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f160(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f170; body size 5 bytes.
#line 1 "ENTRY_10c3f170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f170(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f180; body size 5 bytes.
#line 1 "ENTRY_10c3f180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f190; body size 5 bytes.
#line 1 "ENTRY_10c3f190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f1a0; body size 5 bytes.
#line 1 "ENTRY_10c3f1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3f1a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3f1b0; body size 11 bytes.
#line 1 "ENTRY_10c3f1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3f1b0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10c3fc50; body size 5 bytes.
#line 1 "ENTRY_10c3fc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3fc50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3fc60; body size 5 bytes.
#line 1 "ENTRY_10c3fc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c3fc60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c3fc70; body size 30 bytes.
#line 1 "ENTRY_10c3fc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3fc70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10c3fca0; body size 30 bytes.
#line 1 "ENTRY_10c3fca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3fca0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10c3fcd0; body size 30 bytes.
#line 1 "ENTRY_10c3fcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3fcd0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10c3fd00; body size 30 bytes.
#line 1 "ENTRY_10c3fd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c3fd00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10c3fd30; body size 18 bytes.
#line 1 "ENTRY_10c3fd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3fd30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3fd50; body size 18 bytes.
#line 1 "ENTRY_10c3fd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3fd50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3fd70; body size 18 bytes.
#line 1 "ENTRY_10c3fd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3fd70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c3fd90; body size 18 bytes.
#line 1 "ENTRY_10c3fd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3fd90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c400f0; body size 11 bytes.
#line 1 "ENTRY_10c400f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c400f0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40100; body size 11 bytes.
#line 1 "ENTRY_10c40100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40100(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40110; body size 11 bytes.
#line 1 "ENTRY_10c40110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40110(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40120; body size 11 bytes.
#line 1 "ENTRY_10c40120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40120(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40130; body size 11 bytes.
#line 1 "ENTRY_10c40130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40130(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40140; body size 11 bytes.
#line 1 "ENTRY_10c40140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40140(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40150; body size 11 bytes.
#line 1 "ENTRY_10c40150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40150(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40160; body size 11 bytes.
#line 1 "ENTRY_10c40160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40160(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40170; body size 11 bytes.
#line 1 "ENTRY_10c40170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40170(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40180; body size 11 bytes.
#line 1 "ENTRY_10c40180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40180(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40190; body size 11 bytes.
#line 1 "ENTRY_10c40190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40190(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c401a0; body size 11 bytes.
#line 1 "ENTRY_10c401a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c401a0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c401b0; body size 11 bytes.
#line 1 "ENTRY_10c401b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c401b0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c401c0; body size 11 bytes.
#line 1 "ENTRY_10c401c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c401c0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c401d0; body size 11 bytes.
#line 1 "ENTRY_10c401d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c401d0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c401e0; body size 16 bytes.
#line 1 "ENTRY_10c401e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c401e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40200; body size 16 bytes.
#line 1 "ENTRY_10c40200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c40200(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40220; body size 16 bytes.
#line 1 "ENTRY_10c40220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c40220(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40240; body size 16 bytes.
#line 1 "ENTRY_10c40240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c40240(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40260; body size 51 bytes.
#line 1 "ENTRY_10c40260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40260(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *(void**)param_1[1] = (void *)((undefined4)(pvVar1));
  return (undefined4 *)(param_1);
}


// Reference entry 10c402a0; body size 9 bytes.
#line 1 "ENTRY_10c402a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c402a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c402b0; body size 9 bytes.
#line 1 "ENTRY_10c402b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c402b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c402c0; body size 13 bytes.
#line 1 "ENTRY_10c402c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c402c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c402d0; body size 13 bytes.
#line 1 "ENTRY_10c402d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c402d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c402e0; body size 13 bytes.
#line 1 "ENTRY_10c402e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c402e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c402f0; body size 13 bytes.
#line 1 "ENTRY_10c402f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c402f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40300; body size 14 bytes.
#line 1 "ENTRY_10c40300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40300(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40320; body size 14 bytes.
#line 1 "ENTRY_10c40320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40320(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40340; body size 14 bytes.
#line 1 "ENTRY_10c40340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40340(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40360; body size 14 bytes.
#line 1 "ENTRY_10c40360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40360(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40380; body size 23 bytes.
#line 1 "ENTRY_10c40380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c40380(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c403a0; body size 23 bytes.
#line 1 "ENTRY_10c403a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c403a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c403c0; body size 23 bytes.
#line 1 "ENTRY_10c403c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c403c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c403e0; body size 23 bytes.
#line 1 "ENTRY_10c403e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c403e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40400; body size 23 bytes.
#line 1 "ENTRY_10c40400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c40400(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40420; body size 3 bytes.
#line 1 "ENTRY_10c40420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c40420(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c40430; body size 3 bytes.
#line 1 "ENTRY_10c40430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c40430(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c40440; body size 3 bytes.
#line 1 "ENTRY_10c40440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c40440(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c40450; body size 3 bytes.
#line 1 "ENTRY_10c40450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c40450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c40460; body size 3 bytes.
#line 1 "ENTRY_10c40460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c40460(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c40470; body size 18 bytes.
#line 1 "ENTRY_10c40470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40470(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40490; body size 18 bytes.
#line 1 "ENTRY_10c40490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40490(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c404b0; body size 18 bytes.
#line 1 "ENTRY_10c404b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c404b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c404d0; body size 18 bytes.
#line 1 "ENTRY_10c404d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c404d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c405b0; body size 110 bytes.
#line 1 "ENTRY_10c405b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c405b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *_Src;
  void *_Dst;
  size_t _Size;
  int iVar1;
  
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  _Src = (void *)((void *)param_2[1]);
  if ((void *)(_Src) != (void *)param_2[2]) {
    _Size = (size_t)((int)param_2[2] - (int)_Src);
    iVar1 = (int)((int)_Size >> 2);
    thunk_FUN_10c42950(iVar1);
    _Dst = (void *)((void *)param_1[1]);
    memmove(_Dst,_Src,_Size);
    param_1[2] = (undefined4)((char *)((int)_Dst + iVar1 * 4));
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c40640; body size 11 bytes.
#line 1 "ENTRY_10c40640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40640(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c408c0; body size 13 bytes.
#line 1 "ENTRY_10c408c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c408c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40c70; body size 89 bytes.
#line 1 "ENTRY_10c40c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40c70(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *_Src;
  void *_Dst;
  size_t _Size;
  int iVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  _Src = (void *)((void *)*param_2);
  if ((void *)(_Src) != (void *)param_2[1]) {
    _Size = (size_t)((int)param_2[1] - (int)_Src);
    iVar1 = (int)((int)_Size >> 2);
    thunk_FUN_10c42950(iVar1);
    _Dst = (void *)((void *)*param_1);
    memmove(_Dst,_Src,_Size);
    param_1[1] = (undefined4)((char *)((int)_Dst + iVar1 * 4));
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c40ce0; body size 105 bytes.
#line 1 "ENTRY_10c40ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40ce0(void *param_2,int param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *_Dst;
  code *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_3 - (int)param_2 >> 2);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  if (uVar3 != 0) {
    if (0x3fffffff < uVar3) {
      func_0x1001c6cf();
      pcVar1 = (code *)((code *)swi(3), 0);
      puVar2 = (undefined4 *)((undefined4 *)(*pcVar1)(), 0);
      return (undefined4 *)(puVar2);
    }
    thunk_FUN_10c42950(uVar3);
    _Dst = (void *)((void *)*param_1);
    memmove(_Dst,param_2,param_3 - (int)param_2);
    param_1[1] = (undefined4)((char *)((int)_Dst + uVar3 * 4));
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c40f90; body size 11 bytes.
#line 1 "ENTRY_10c40f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40f90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40fa0; body size 11 bytes.
#line 1 "ENTRY_10c40fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40fa0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40fb0; body size 11 bytes.
#line 1 "ENTRY_10c40fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40fb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40fc0; body size 11 bytes.
#line 1 "ENTRY_10c40fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40fc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40fd0; body size 24 bytes.
#line 1 "ENTRY_10c40fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40fd0(undefined4 param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(*(undefined4 *)(param_3 + 4));
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40ff0; body size 24 bytes.
#line 1 "ENTRY_10c40ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c40ff0(undefined4 param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(*(undefined4 *)(param_3 + 4));
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c41010; body size 24 bytes.
#line 1 "ENTRY_10c41010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c41010(undefined4 param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(*(undefined4 *)(param_3 + 4));
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c41030; body size 24 bytes.
#line 1 "ENTRY_10c41030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c41030(undefined4 param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(*(undefined4 *)(param_3 + 4));
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c41580; body size 16 bytes.
#line 1 "ENTRY_10c41580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c41580(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) == (int *)(0x0)) {
    return;
  }
  iVar2 = (int)(*piVar1);
  if (iVar2 != 0) {
    uVar4 = (uint)(piVar1[2] - iVar2 & 0xfffffffc);
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
    piVar1[1] = (int)(0);
    piVar1[2] = (int)(0);
  }
  return;
}


// Reference entry 10c415b0; body size 3 bytes.
#line 1 "ENTRY_10c415b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c415b0(void)

{
  return;
}


// Reference entry 10c415c0; body size 3 bytes.
#line 1 "ENTRY_10c415c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c415c0(void)

{
  return;
}


// Reference entry 10c415d0; body size 3 bytes.
#line 1 "ENTRY_10c415d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c415d0(void)

{
  return;
}


// Reference entry 10c415e0; body size 3 bytes.
#line 1 "ENTRY_10c415e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c415e0(void)

{
  return;
}


// Reference entry 10c41710; body size 10 bytes.
#line 1 "ENTRY_10c41710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c41710(int param_1)

{
  thunk_FUN_10b034d0((int)(param_1 + 4));
  return;
}


// Reference entry 10c41790; body size 5 bytes.
#line 1 "ENTRY_10c41790"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c41790(int param_1)

{ __asm jmp FUN_1005b807 }


// Reference entry 10c417b0; body size 5 bytes.
#line 1 "ENTRY_10c417b0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c417b0(int param_1)

{ __asm jmp FUN_1003217d }


// Reference entry 10c417c0; body size 5 bytes.
#line 1 "ENTRY_10c417c0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c417c0(int param_1)

{ __asm jmp FUN_10001b59 }


// Reference entry 10c41960; body size 131 bytes.
#line 1 "ENTRY_10c41960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c41960(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piStack_4;
  
  iVar1 = (int)(*param_1);
  if ((iVar1 != 0) && (*(uint *)(iVar1 + 8) != 0)) {
    piStack_4 = (int *)(param_1);
    if (*(uint *)((iVar1 + 8)) < *(uint *)((iVar1 + 0x1c) >> 3)) {
      func_0x10095197(**(undefined4 **)(iVar1 + 4),*(undefined4 **)(iVar1 + 4));
      return;
    }
    puVar2 = (undefined4 *)(*(undefined4 **)(iVar1 + 4), 0);
    *(undefined4*)puVar2[1] = (undefined4)((undefined4)(0));
    puVar2 = (undefined4 *)((undefined4 *)*puVar2);
    while ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
      puVar3 = (undefined4 *)((undefined4 *)*puVar2);
      thunk_FUN_1148a50e(puVar2,0x10);
      puVar2 = (undefined4 *)(puVar3);
    }
    *(undefined4 *)*(undefined4*)(iVar1 + 4) = (undefined4)(*(undefined4 *)(iVar1 + 4));
    *(int*)(*(int *)(iVar1 + 4) + 4) = (int)(*(int *)(iVar1 + 4));
    *(undefined4*)(iVar1 + 8) = (undefined4)(0);
    piStack_4 = (int *)(*(int **)(iVar1 + 4), 0);
    thunk_FUN_10c3ecb0(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),&piStack_4);
  }
  return;
}


// Reference entry 10c41a10; body size 11 bytes.
#line 1 "ENTRY_10c41a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c41a10(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iStack_4;
  
  iVar2 = (int)(*param_1);
  if (iVar2 == 0) {
    return;
  }
  if (*(uint *)(iVar2 + 8) != 0) {
    piVar1 = (int *)((int *)(iVar2 + 4));
    iStack_4 = (int)(iVar2);
    if (*(uint *)((iVar2 + 8)) < *(uint *)((iVar2 + 0x1c) >> 3)) {
      thunk_FUN_10c44850((int)(*(undefined4 *)*piVar1),(int)((undefined4 *)*piVar1));
      return;
    }
    thunk_FUN_10c3d960(piVar1,*piVar1);
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(iVar2 + 8) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_10c3ed30(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 10c41a20; body size 131 bytes.
#line 1 "ENTRY_10c41a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c41a20(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piStack_4;
  
  iVar1 = (int)(*param_1);
  if ((iVar1 != 0) && (*(uint *)(iVar1 + 8) != 0)) {
    piStack_4 = (int *)(param_1);
    if (*(uint *)((iVar1 + 8)) < *(uint *)((iVar1 + 0x1c) >> 3)) {
      func_0x10029fe1(**(undefined4 **)(iVar1 + 4),*(undefined4 **)(iVar1 + 4));
      return;
    }
    puVar2 = (undefined4 *)(*(undefined4 **)(iVar1 + 4), 0);
    *(undefined4*)puVar2[1] = (undefined4)((undefined4)(0));
    puVar2 = (undefined4 *)((undefined4 *)*puVar2);
    while ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
      puVar3 = (undefined4 *)((undefined4 *)*puVar2);
      thunk_FUN_1148a50e(puVar2,0x10);
      puVar2 = (undefined4 *)(puVar3);
    }
    *(undefined4 *)*(undefined4*)(iVar1 + 4) = (undefined4)(*(undefined4 *)(iVar1 + 4));
    *(int*)(*(int *)(iVar1 + 4) + 4) = (int)(*(int *)(iVar1 + 4));
    *(undefined4*)(iVar1 + 8) = (undefined4)(0);
    piStack_4 = (int *)(*(int **)(iVar1 + 4), 0);
    thunk_FUN_10c3edb0(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),&piStack_4);
  }
  return;
}


// Reference entry 10c41ad0; body size 141 bytes.
#line 1 "ENTRY_10c41ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c41ad0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piStack_4;
  
  iVar1 = (int)(*param_1);
  if ((iVar1 != 0) && (*(uint *)(iVar1 + 8) != 0)) {
    piStack_4 = (int *)(param_1);
    if (*(uint *)((iVar1 + 8)) < *(uint *)((iVar1 + 0x1c) >> 3)) {
      func_0x1008a53f(**(undefined4 **)(iVar1 + 4),*(undefined4 **)(iVar1 + 4));
      return;
    }
    puVar2 = (undefined4 *)(*(undefined4 **)(iVar1 + 4), 0);
    *(undefined4*)puVar2[1] = (undefined4)((undefined4)(0));
    puVar2 = (undefined4 *)((undefined4 *)*puVar2);
    while ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
      puVar3 = (undefined4 *)((undefined4 *)*puVar2);
      ((pair<> *)(0))->m_op_dtor();
      thunk_FUN_1148a50e(puVar2,0x18);
      puVar2 = (undefined4 *)(puVar3);
    }
    *(undefined4 *)*(undefined4*)(iVar1 + 4) = (undefined4)(*(undefined4 *)(iVar1 + 4));
    *(int*)(*(int *)(iVar1 + 4) + 4) = (int)(*(int *)(iVar1 + 4));
    *(undefined4*)(iVar1 + 8) = (undefined4)(0);
    piStack_4 = (int *)(*(int **)(iVar1 + 4), 0);
    thunk_FUN_10c3ee30(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),&piStack_4);
  }
  return;
}


// Reference entry 10c41b80; body size 18 bytes.
#line 1 "ENTRY_10c41b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c41b80(int param_1)

{
  **(undefined4**)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_1 + 8));
  *(undefined4*)(*(int *)(param_1 + 8) + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10c41ba0; body size 18 bytes.
#line 1 "ENTRY_10c41ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c41ba0(int param_1)

{
  **(undefined4**)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_1 + 8));
  *(undefined4*)(*(int *)(param_1 + 8) + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10c41bc0; body size 18 bytes.
#line 1 "ENTRY_10c41bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c41bc0(int param_1)

{
  **(undefined4**)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_1 + 8));
  *(undefined4*)(*(int *)(param_1 + 8) + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10c41be0; body size 18 bytes.
#line 1 "ENTRY_10c41be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c41be0(int param_1)

{
  **(undefined4**)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_1 + 8));
  *(undefined4*)(*(int *)(param_1 + 8) + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10c41c00; body size 14 bytes.
#line 1 "ENTRY_10c41c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c41c00(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10c41c20; body size 14 bytes.
#line 1 "ENTRY_10c41c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c41c20(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10c41c40; body size 14 bytes.
#line 1 "ENTRY_10c41c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c41c40(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10c41c60; body size 14 bytes.
#line 1 "ENTRY_10c41c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c41c60(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10c41c80; body size 14 bytes.
#line 1 "ENTRY_10c41c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c41c80(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10c41ca0; body size 14 bytes.
#line 1 "ENTRY_10c41ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c41ca0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10c41cc0; body size 14 bytes.
#line 1 "ENTRY_10c41cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c41cc0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10c41ce0; body size 14 bytes.
#line 1 "ENTRY_10c41ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c41ce0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10c41d00; body size 14 bytes.
#line 1 "ENTRY_10c41d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c41d00(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10c41d20; body size 14 bytes.
#line 1 "ENTRY_10c41d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c41d20(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10c41d70; body size 6 bytes.
#line 1 "ENTRY_10c41d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c41d70(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c41d80; body size 6 bytes.
#line 1 "ENTRY_10c41d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c41d80(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c41d90; body size 6 bytes.
#line 1 "ENTRY_10c41d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c41d90(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c41da0; body size 6 bytes.
#line 1 "ENTRY_10c41da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c41da0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c41db0; body size 6 bytes.
#line 1 "ENTRY_10c41db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c41db0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c41dc0; body size 6 bytes.
#line 1 "ENTRY_10c41dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c41dc0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c41dd0; body size 6 bytes.
#line 1 "ENTRY_10c41dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c41dd0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c41de0; body size 6 bytes.
#line 1 "ENTRY_10c41de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c41de0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c41df0; body size 6 bytes.
#line 1 "ENTRY_10c41df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c41df0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c41e00; body size 6 bytes.
#line 1 "ENTRY_10c41e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c41e00(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c41e10; body size 6 bytes.
#line 1 "ENTRY_10c41e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c41e10(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c41e20; body size 6 bytes.
#line 1 "ENTRY_10c41e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c41e20(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c41e30; body size 6 bytes.
#line 1 "ENTRY_10c41e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c41e30(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10c41e40; body size 22 bytes.
#line 1 "ENTRY_10c41e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c41e40(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10c41fa0();
  return (int)(iVar1 + 0x10);
}


// Reference entry 10c41e60; body size 9 bytes.
#line 1 "ENTRY_10c41e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c41e60(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c41e70; body size 9 bytes.
#line 1 "ENTRY_10c41e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c41e70(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c41e80; body size 9 bytes.
#line 1 "ENTRY_10c41e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c41e80(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c41e90; body size 9 bytes.
#line 1 "ENTRY_10c41e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c41e90(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c41ea0; body size 9 bytes.
#line 1 "ENTRY_10c41ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c41ea0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c41eb0; body size 9 bytes.
#line 1 "ENTRY_10c41eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c41eb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c41ec0; body size 9 bytes.
#line 1 "ENTRY_10c41ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c41ec0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c41ed0; body size 9 bytes.
#line 1 "ENTRY_10c41ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c41ed0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c41f50; body size 10 bytes.
#line 1 "ENTRY_10c41f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10c41f50(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10c41f60; body size 10 bytes.
#line 1 "ENTRY_10c41f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10c41f60(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10c41f70; body size 10 bytes.
#line 1 "ENTRY_10c41f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10c41f70(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10c41f80; body size 10 bytes.
#line 1 "ENTRY_10c41f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10c41f80(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10c42040; body size 57 bytes.
#line 1 "ENTRY_10c42040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_10c42040(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10c42090; body size 57 bytes.
#line 1 "ENTRY_10c42090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_10c42090(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10c420e0; body size 18 bytes.
#line 1 "ENTRY_10c420e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10c420e0(int *param_1,int *param_2)

{
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10c42100; body size 18 bytes.
#line 1 "ENTRY_10c42100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10c42100(int *param_1,int *param_2)

{
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10c422e0; body size 22 bytes.
#line 1 "ENTRY_10c422e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c422e0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10c42300; body size 22 bytes.
#line 1 "ENTRY_10c42300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c42300(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10c42320; body size 22 bytes.
#line 1 "ENTRY_10c42320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c42320(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10c42340; body size 22 bytes.
#line 1 "ENTRY_10c42340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c42340(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10c42930; body size 26 bytes.
#line 1 "ENTRY_10c42930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c42930(uint param_2)
{
  uint *param_1 = (uint *)this;
  code *pcVar1;
  void *pvVar2;
  uint uVar3;
  
  if (0x3fffffff < param_2) {
    func_0x1001c6cf();
    pcVar1 = (code *)((code *)swi(3), 0);
    (*pcVar1)();
    return;
  }
  if (param_2 < 0x40000000) {
    param_2 = (uint)(param_2 * 4);
    if (param_2 < 0x1000) {
      if (param_2 != 0) {
        pvVar2 = (void *)(operator_new(param_2), 0);
        *param_1 = (uint)((uint)pvVar2);
        param_1[1] = (uint)((uint)pvVar2);
        param_1[2] = (uint)((uint)((int)pvVar2 + param_2));
        return;
      }
      *param_1 = (uint)(0);
      param_1[1] = (uint)(0);
      param_1[2] = (uint)(0);
      return;
    }
    if (param_2 < param_2 + 0x23) {
      pvVar2 = (char *)(operator_new(param_2 + 0x23), 0);
      if ((void *)(pvVar2) != (void *)(0x0)) {
        uVar3 = (uint)((int)pvVar2 + 0x23U & 0xffffffe0);
        *(void**)(uVar3 - 4) = (void *)(pvVar2);
        *param_1 = (uint)(uVar3);
        param_1[1] = (uint)(uVar3);
        param_1[2] = (uint)(uVar3 + param_2);
        return;
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10c42a00; body size 20 bytes.
#line 1 "ENTRY_10c42a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c42a00(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xfffffff) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10c42a20; body size 20 bytes.
#line 1 "ENTRY_10c42a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c42a20(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xccccccc) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10c42a40; body size 20 bytes.
#line 1 "ENTRY_10c42a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c42a40(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xfffffff) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10c42a60; body size 20 bytes.
#line 1 "ENTRY_10c42a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c42a60(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10c42a80; body size 66 bytes.
#line 1 "ENTRY_10c42a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c42a80(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) + (double)(uint)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(uint)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= (float)((fVar1)) && (float)(fVar1) != *param_1);
}


// Reference entry 10c42ae0; body size 66 bytes.
#line 1 "ENTRY_10c42ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c42ae0(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) + (double)(uint)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(uint)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= (float)((fVar1)) && (float)(fVar1) != *param_1);
}


// Reference entry 10c42b40; body size 66 bytes.
#line 1 "ENTRY_10c42b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c42b40(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) + (double)(uint)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(uint)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= (float)((fVar1)) && (float)(fVar1) != *param_1);
}


// Reference entry 10c42ba0; body size 66 bytes.
#line 1 "ENTRY_10c42ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c42ba0(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) + (double)(uint)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(uint)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= (float)((fVar1)) && (float)(fVar1) != *param_1);
}


// Reference entry 10c42ec0; body size 3 bytes.
#line 1 "ENTRY_10c42ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c42ec0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10c42ed0; body size 55 bytes.
#line 1 "ENTRY_10c42ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c42ed0(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10c42f20; body size 55 bytes.
#line 1 "ENTRY_10c42f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c42f20(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10c42f70; body size 5 bytes.
#line 1 "ENTRY_10c42f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c42f70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c42f80; body size 5 bytes.
#line 1 "ENTRY_10c42f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c42f80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c42f90; body size 5 bytes.
#line 1 "ENTRY_10c42f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c42f90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c436a0; body size 3 bytes.
#line 1 "ENTRY_10c436a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c436a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c436b0; body size 3 bytes.
#line 1 "ENTRY_10c436b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c436b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c436c0; body size 3 bytes.
#line 1 "ENTRY_10c436c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c436c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c436d0; body size 3 bytes.
#line 1 "ENTRY_10c436d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c436d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c436e0; body size 3 bytes.
#line 1 "ENTRY_10c436e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c436e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c436f0; body size 3 bytes.
#line 1 "ENTRY_10c436f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c436f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43700; body size 3 bytes.
#line 1 "ENTRY_10c43700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43700(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43710; body size 3 bytes.
#line 1 "ENTRY_10c43710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43710(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43720; body size 3 bytes.
#line 1 "ENTRY_10c43720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43720(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43730; body size 3 bytes.
#line 1 "ENTRY_10c43730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43730(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43740; body size 3 bytes.
#line 1 "ENTRY_10c43740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43740(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43750; body size 3 bytes.
#line 1 "ENTRY_10c43750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43750(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43760; body size 3 bytes.
#line 1 "ENTRY_10c43760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43760(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43770; body size 3 bytes.
#line 1 "ENTRY_10c43770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43770(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43780; body size 3 bytes.
#line 1 "ENTRY_10c43780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43780(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43790; body size 3 bytes.
#line 1 "ENTRY_10c43790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43790(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c437a0; body size 3 bytes.
#line 1 "ENTRY_10c437a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c437a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c437b0; body size 3 bytes.
#line 1 "ENTRY_10c437b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c437b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c437c0; body size 3 bytes.
#line 1 "ENTRY_10c437c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c437c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c437d0; body size 3 bytes.
#line 1 "ENTRY_10c437d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c437d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c437e0; body size 3 bytes.
#line 1 "ENTRY_10c437e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c437e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c437f0; body size 3 bytes.
#line 1 "ENTRY_10c437f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c437f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43800; body size 3 bytes.
#line 1 "ENTRY_10c43800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43810; body size 3 bytes.
#line 1 "ENTRY_10c43810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43810(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43820; body size 3 bytes.
#line 1 "ENTRY_10c43820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43830; body size 3 bytes.
#line 1 "ENTRY_10c43830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43840; body size 3 bytes.
#line 1 "ENTRY_10c43840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43850; body size 3 bytes.
#line 1 "ENTRY_10c43850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43860; body size 3 bytes.
#line 1 "ENTRY_10c43860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43860(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43870; body size 3 bytes.
#line 1 "ENTRY_10c43870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43870(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43880; body size 3 bytes.
#line 1 "ENTRY_10c43880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43880(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43890; body size 3 bytes.
#line 1 "ENTRY_10c43890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43890(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c438a0; body size 3 bytes.
#line 1 "ENTRY_10c438a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c438a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c438b0; body size 3 bytes.
#line 1 "ENTRY_10c438b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c438b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c438c0; body size 3 bytes.
#line 1 "ENTRY_10c438c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c438c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c438d0; body size 3 bytes.
#line 1 "ENTRY_10c438d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c438d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c438e0; body size 92 bytes.
#line 1 "ENTRY_10c438e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c438e0(uint param_2,int param_3,int *param_4)
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


// Reference entry 10c43960; body size 92 bytes.
#line 1 "ENTRY_10c43960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c43960(uint param_2,int param_3,int *param_4)
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


// Reference entry 10c439e0; body size 92 bytes.
#line 1 "ENTRY_10c439e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c439e0(uint param_2,int param_3,int *param_4)
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


// Reference entry 10c43a60; body size 92 bytes.
#line 1 "ENTRY_10c43a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c43a60(uint param_2,int param_3,int *param_4)
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


// Reference entry 10c43ae0; body size 13 bytes.
#line 1 "ENTRY_10c43ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c43ae0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10c43af0; body size 13 bytes.
#line 1 "ENTRY_10c43af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c43af0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10c43b00; body size 13 bytes.
#line 1 "ENTRY_10c43b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c43b00(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10c43b10; body size 13 bytes.
#line 1 "ENTRY_10c43b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c43b10(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10c43b20; body size 13 bytes.
#line 1 "ENTRY_10c43b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c43b20(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10c43b30; body size 30 bytes.
#line 1 "ENTRY_10c43b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c43b30(int param_1)

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


// Reference entry 10c43b60; body size 3 bytes.
#line 1 "ENTRY_10c43b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43b60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43b70; body size 3 bytes.
#line 1 "ENTRY_10c43b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43b70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43b80; body size 3 bytes.
#line 1 "ENTRY_10c43b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43b80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43b90; body size 3 bytes.
#line 1 "ENTRY_10c43b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43b90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43ba0; body size 3 bytes.
#line 1 "ENTRY_10c43ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43ba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43bb0; body size 3 bytes.
#line 1 "ENTRY_10c43bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43bb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43bc0; body size 3 bytes.
#line 1 "ENTRY_10c43bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43bc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43bd0; body size 3 bytes.
#line 1 "ENTRY_10c43bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c43bd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c43dd0; body size 3 bytes.
#line 1 "ENTRY_10c43dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c43dd0(void)

{
  return;
}


// Reference entry 10c43de0; body size 3 bytes.
#line 1 "ENTRY_10c43de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c43de0(void)

{
  return;
}


// Reference entry 10c43df0; body size 3 bytes.
#line 1 "ENTRY_10c43df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c43df0(void)

{
  return;
}


// Reference entry 10c43e00; body size 3 bytes.
#line 1 "ENTRY_10c43e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c43e00(void)

{
  return;
}


// Reference entry 10c43e10; body size 3 bytes.
#line 1 "ENTRY_10c43e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c43e10(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10c440e0; body size 11 bytes.
#line 1 "ENTRY_10c440e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c440e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10c440f0; body size 11 bytes.
#line 1 "ENTRY_10c440f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c440f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10c44100; body size 11 bytes.
#line 1 "ENTRY_10c44100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c44100(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10c44110; body size 11 bytes.
#line 1 "ENTRY_10c44110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c44110(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10c44120; body size 8 bytes.
#line 1 "ENTRY_10c44120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c44120(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10c44130; body size 6 bytes.
#line 1 "ENTRY_10c44130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c44130(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10c44140; body size 6 bytes.
#line 1 "ENTRY_10c44140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c44140(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10c44150; body size 6 bytes.
#line 1 "ENTRY_10c44150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c44150(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10c44160; body size 6 bytes.
#line 1 "ENTRY_10c44160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c44160(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10c44330; body size 55 bytes.
#line 1 "ENTRY_10c44330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c44330(int *param_1)

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


// Reference entry 10c443a0; body size 55 bytes.
#line 1 "ENTRY_10c443a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c443a0(int *param_1)

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


// Reference entry 10c444c0; body size 14 bytes.
#line 1 "ENTRY_10c444c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c444c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4), 0);
  return;
}


// Reference entry 10c444e0; body size 14 bytes.
#line 1 "ENTRY_10c444e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c444e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4), 0);
  return;
}


// Reference entry 10c44500; body size 14 bytes.
#line 1 "ENTRY_10c44500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c44500(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4), 0);
  return;
}


// Reference entry 10c44520; body size 14 bytes.
#line 1 "ENTRY_10c44520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c44520(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4), 0);
  return;
}


// Reference entry 10c44540; body size 13 bytes.
#line 1 "ENTRY_10c44540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c44540(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10c44550; body size 13 bytes.
#line 1 "ENTRY_10c44550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c44550(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10c44560; body size 13 bytes.
#line 1 "ENTRY_10c44560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c44560(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10c44570; body size 13 bytes.
#line 1 "ENTRY_10c44570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c44570(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10c44580; body size 3 bytes.
#line 1 "ENTRY_10c44580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c44580(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c44590; body size 3 bytes.
#line 1 "ENTRY_10c44590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c44590(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c445a0; body size 12 bytes.
#line 1 "ENTRY_10c445a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c445a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10c445b0; body size 12 bytes.
#line 1 "ENTRY_10c445b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c445b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10c445c0; body size 12 bytes.
#line 1 "ENTRY_10c445c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c445c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10c445d0; body size 12 bytes.
#line 1 "ENTRY_10c445d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c445d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10c445e0; body size 11 bytes.
#line 1 "ENTRY_10c445e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c445e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10c445f0; body size 11 bytes.
#line 1 "ENTRY_10c445f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c445f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10c44600; body size 11 bytes.
#line 1 "ENTRY_10c44600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c44600(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10c44610; body size 11 bytes.
#line 1 "ENTRY_10c44610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c44610(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10c44620; body size 4 bytes.
#line 1 "ENTRY_10c44620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c44620(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c44630; body size 4 bytes.
#line 1 "ENTRY_10c44630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c44630(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c44640; body size 419 bytes.
#line 1 "ENTRY_10c44640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c44640(int *param_2,int *param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  
  if ((int *)(param_2) != (int *)(param_3)) {
    piVar2 = (int *)(*(int **)(param_1 + 4), 0);
    piVar3 = (int *)((int *)param_2[1]);
    iVar4 = (int)(*(int *)(param_1 + 0xc));
    uVar6 = (uint)(*(uint *)(param_1 + 0x18) &
            ((((*(byte *)(param_2 + 2) ^ 0x811c9dc5) * 0x1000193 ^ (uint)*(byte *)((int)param_2 + 9) ) * 0x1000193 ^ (uint)*(byte *)((int)param_2 + 10)) * 0x1000193 ^
            (uint)*(byte *)((int)param_2 + 0xb)) * 0x1000193);
    piVar5 = (int *)(*(int **)(iVar4 + uVar6 * 8), 0);
    piVar1 = (int *)((int *)(iVar4 + uVar6 * 8));
    piVar7 = (int *)((int *)piVar1[1]);
    piVar8 = (int *)(param_2);
    do {
      piVar9 = (int *)((int *)*piVar8);
      thunk_FUN_1148a50e(piVar8,0x10);
      *(int*)(param_1 + 8) = (int)(*(int *)(param_1 + 8) + -1);
      if ((int *)((piVar8)) == (int *)(piVar7)) {
        piVar7 = (int *)(piVar3);
        if ((int *)(piVar5) == (int *)(param_2)) {
          *piVar1 = (int)((int)piVar2);
          piVar7 = (int *)(piVar2);
        }
        piVar1[1] = (int)((int)piVar7);
        if ((int *)(piVar9) != (int *)(param_3)) {
          do {
            piVar1 = (int *)((int *)(iVar4 + (*(uint *)(param_1 + 0x18) &
                                     ((((*(byte *)(piVar9 + 2) ^ 0x811c9dc5) * 0x1000193 ^
                                       (uint)*(byte *)((int)piVar9 + 9)) * 0x1000193 ^
                                      (uint)*(byte *)((int)piVar9 + 10)) * 0x1000193 ^
                                     (uint)*(byte *)((int)piVar9 + 0xb)) * 0x1000193) * 8));
            piVar5 = (int *)((int *)piVar1[1]);
            piVar7 = (int *)(piVar9);
            while( true ) {
              piVar9 = (int *)((int *)*piVar7);
              thunk_FUN_1148a50e(piVar7,0x10);
              *(int*)(param_1 + 8) = (int)(*(int *)(param_1 + 8) + -1);
              if ((int *)((piVar7)) == (int *)(piVar5)) break;
              piVar7 = (int *)(piVar9);
              if ((int *)(piVar9) == (int *)(param_3)) {
                *piVar1 = (int)((int)piVar9);
                goto LAB_10c447a4;
              }
            }
            *piVar1 = (int)((int)piVar2);
            piVar1[1] = (int)((int)piVar2);
            if ((int *)(piVar9) == (int *)(param_3)) {
              *piVar3 = (int)((int)piVar9);
              piVar9[1] = (int)((int)piVar3);
              return (int *)(param_3);
            }
          } while( true );
        }
        goto LAB_10c447a4;
      }
      piVar8 = (int *)(piVar9);
    } while ((int *)(piVar9) != (int *)(param_3));
    if ((int *)(piVar5) == (int *)(param_2)) {
      *piVar1 = (int)((int)piVar9);
      *piVar3 = (int)((int)piVar9);
      piVar9[1] = (int)((int)piVar3);
      return (int *)(param_3);
    }
LAB_10c447a4:
    *piVar3 = (int)((int)piVar9);
    piVar9[1] = (int)((int)piVar3);
  }
  return (int *)(param_3);
}


// Reference entry 10c44a80; body size 419 bytes.
#line 1 "ENTRY_10c44a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c44a80(int *param_2,int *param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  
  if ((int *)(param_2) != (int *)(param_3)) {
    piVar2 = (int *)(*(int **)(param_1 + 4), 0);
    piVar3 = (int *)((int *)param_2[1]);
    iVar4 = (int)(*(int *)(param_1 + 0xc));
    uVar6 = (uint)(*(uint *)(param_1 + 0x18) &
            ((((*(byte *)(param_2 + 2) ^ 0x811c9dc5) * 0x1000193 ^ (uint)*(byte *)((int)param_2 + 9) ) * 0x1000193 ^ (uint)*(byte *)((int)param_2 + 10)) * 0x1000193 ^
            (uint)*(byte *)((int)param_2 + 0xb)) * 0x1000193);
    piVar5 = (int *)(*(int **)(iVar4 + uVar6 * 8), 0);
    piVar1 = (int *)((int *)(iVar4 + uVar6 * 8));
    piVar7 = (int *)((int *)piVar1[1]);
    piVar8 = (int *)(param_2);
    do {
      piVar9 = (int *)((int *)*piVar8);
      thunk_FUN_1148a50e(piVar8,0x10);
      *(int*)(param_1 + 8) = (int)(*(int *)(param_1 + 8) + -1);
      if ((int *)((piVar8)) == (int *)(piVar7)) {
        piVar7 = (int *)(piVar3);
        if ((int *)(piVar5) == (int *)(param_2)) {
          *piVar1 = (int)((int)piVar2);
          piVar7 = (int *)(piVar2);
        }
        piVar1[1] = (int)((int)piVar7);
        if ((int *)(piVar9) != (int *)(param_3)) {
          do {
            piVar1 = (int *)((int *)(iVar4 + (*(uint *)(param_1 + 0x18) &
                                     ((((*(byte *)(piVar9 + 2) ^ 0x811c9dc5) * 0x1000193 ^
                                       (uint)*(byte *)((int)piVar9 + 9)) * 0x1000193 ^
                                      (uint)*(byte *)((int)piVar9 + 10)) * 0x1000193 ^
                                     (uint)*(byte *)((int)piVar9 + 0xb)) * 0x1000193) * 8));
            piVar5 = (int *)((int *)piVar1[1]);
            piVar7 = (int *)(piVar9);
            while( true ) {
              piVar9 = (int *)((int *)*piVar7);
              thunk_FUN_1148a50e(piVar7,0x10);
              *(int*)(param_1 + 8) = (int)(*(int *)(param_1 + 8) + -1);
              if ((int *)((piVar7)) == (int *)(piVar5)) break;
              piVar7 = (int *)(piVar9);
              if ((int *)(piVar9) == (int *)(param_3)) {
                *piVar1 = (int)((int)piVar9);
                goto LAB_10c44be4;
              }
            }
            *piVar1 = (int)((int)piVar2);
            piVar1[1] = (int)((int)piVar2);
            if ((int *)(piVar9) == (int *)(param_3)) {
              *piVar3 = (int)((int)piVar9);
              piVar9[1] = (int)((int)piVar3);
              return (int *)(param_3);
            }
          } while( true );
        }
        goto LAB_10c44be4;
      }
      piVar8 = (int *)(piVar9);
    } while ((int *)(piVar9) != (int *)(param_3));
    if ((int *)(piVar5) == (int *)(param_2)) {
      *piVar1 = (int)((int)piVar9);
      *piVar3 = (int)((int)piVar9);
      piVar9[1] = (int)((int)piVar3);
      return (int *)(param_3);
    }
LAB_10c44be4:
    *piVar3 = (int)((int)piVar9);
    piVar9[1] = (int)((int)piVar3);
  }
  return (int *)(param_3);
}


// Reference entry 10c44c90; body size 443 bytes.
#line 1 "ENTRY_10c44c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c44c90(int *param_2,int *param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  
  if ((int *)(param_2) != (int *)(param_3)) {
    piVar2 = (int *)(*(int **)(param_1 + 4), 0);
    piVar3 = (int *)((int *)param_2[1]);
    iVar4 = (int)(*(int *)(param_1 + 0xc));
    uVar6 = (uint)(*(uint *)(param_1 + 0x18) &
            ((((*(byte *)(param_2 + 2) ^ 0x811c9dc5) * 0x1000193 ^ (uint)*(byte *)((int)param_2 + 9) ) * 0x1000193 ^ (uint)*(byte *)((int)param_2 + 10)) * 0x1000193 ^
            (uint)*(byte *)((int)param_2 + 0xb)) * 0x1000193);
    piVar5 = (int *)(*(int **)(iVar4 + uVar6 * 8), 0);
    piVar1 = (int *)((int *)(iVar4 + uVar6 * 8));
    piVar7 = (int *)((int *)piVar1[1]);
    piVar8 = (int *)(param_2);
    do {
      piVar9 = (int *)((int *)*piVar8);
      ((pair<> *)(0))->m_op_dtor();
      thunk_FUN_1148a50e(piVar8,0x18);
      *(int*)(param_1 + 8) = (int)(*(int *)(param_1 + 8) + -1);
      if ((int *)((piVar8)) == (int *)(piVar7)) {
        piVar7 = (int *)(piVar3);
        if ((int *)(piVar5) == (int *)(param_2)) {
          *piVar1 = (int)((int)piVar2);
          piVar7 = (int *)(piVar2);
        }
        piVar1[1] = (int)((int)piVar7);
        if ((int *)(piVar9) != (int *)(param_3)) {
          do {
            piVar1 = (int *)((int *)(iVar4 + (*(uint *)(param_1 + 0x18) &
                                     ((((*(byte *)(piVar9 + 2) ^ 0x811c9dc5) * 0x1000193 ^
                                       (uint)*(byte *)((int)piVar9 + 9)) * 0x1000193 ^
                                      (uint)*(byte *)((int)piVar9 + 10)) * 0x1000193 ^
                                     (uint)*(byte *)((int)piVar9 + 0xb)) * 0x1000193) * 8));
            piVar5 = (int *)((int *)piVar1[1]);
            piVar7 = (int *)(piVar9);
            while( true ) {
              piVar9 = (int *)((int *)*piVar7);
              ((pair<> *)(0))->m_op_dtor();
              thunk_FUN_1148a50e(piVar7,0x18);
              *(int*)(param_1 + 8) = (int)(*(int *)(param_1 + 8) + -1);
              if ((int *)((piVar7)) == (int *)(piVar5)) break;
              piVar7 = (int *)(piVar9);
              if ((int *)(piVar9) == (int *)(param_3)) {
                *piVar1 = (int)((int)piVar9);
                goto LAB_10c44e10;
              }
            }
            *piVar1 = (int)((int)piVar2);
            piVar1[1] = (int)((int)piVar2);
            if ((int *)(piVar9) == (int *)(param_3)) {
              *piVar3 = (int)((int)piVar9);
              piVar9[1] = (int)((int)piVar3);
              return;
            }
          } while( true );
        }
        goto LAB_10c44e10;
      }
      piVar8 = (int *)(piVar9);
    } while ((int *)(piVar9) != (int *)(param_3));
    if ((int *)(piVar5) == (int *)(param_2)) {
      *piVar1 = (int)((int)piVar9);
      *piVar3 = (int)((int)piVar9);
      piVar9[1] = (int)((int)piVar3);
      return;
    }
LAB_10c44e10:
    *piVar3 = (int)((int)piVar9);
    piVar9[1] = (int)((int)piVar3);
  }
  return;
}


// Reference entry 10c44ec0; body size 43 bytes.
#line 1 "ENTRY_10c44ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c44ec0(int param_1,int param_2,int param_3)

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


// Reference entry 10c44f00; body size 43 bytes.
#line 1 "ENTRY_10c44f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c44f00(int param_1,int param_2,int param_3)

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


// Reference entry 10c44f40; body size 43 bytes.
#line 1 "ENTRY_10c44f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c44f40(int param_1,int param_2,int param_3)

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


// Reference entry 10c44f80; body size 43 bytes.
#line 1 "ENTRY_10c44f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c44f80(int param_1,int param_2,int param_3)

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


// Reference entry 10c44fc0; body size 10 bytes.
#line 1 "ENTRY_10c44fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c44fc0(void)

{
                    
  std::_Xlength_error("vector too long");
}


// Reference entry 10c44fd0; body size 87 bytes.
#line 1 "ENTRY_10c44fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c44fd0(uint param_1)

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


// Reference entry 10c45040; body size 90 bytes.
#line 1 "ENTRY_10c45040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c45040(uint param_1)

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


// Reference entry 10c450c0; body size 87 bytes.
#line 1 "ENTRY_10c450c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c450c0(uint param_1)

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


// Reference entry 10c45130; body size 90 bytes.
#line 1 "ENTRY_10c45130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c45130(uint param_1)

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


// Reference entry 10c451b0; body size 87 bytes.
#line 1 "ENTRY_10c451b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c451b0(uint param_1)

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


// Reference entry 10c45220; body size 87 bytes.
#line 1 "ENTRY_10c45220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c45220(uint param_1)

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


// Reference entry 10c45290; body size 87 bytes.
#line 1 "ENTRY_10c45290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c45290(uint param_1)

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


// Reference entry 10c45300; body size 87 bytes.
#line 1 "ENTRY_10c45300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c45300(uint param_1)

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


// Reference entry 10c45370; body size 87 bytes.
#line 1 "ENTRY_10c45370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c45370(uint param_1)

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


// Reference entry 10c45500; body size 3 bytes.
#line 1 "ENTRY_10c45500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c45500(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c45510; body size 3 bytes.
#line 1 "ENTRY_10c45510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c45510(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c45520; body size 3 bytes.
#line 1 "ENTRY_10c45520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c45520(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c45530; body size 3 bytes.
#line 1 "ENTRY_10c45530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c45530(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c45540; body size 68 bytes.
#line 1 "ENTRY_10c45540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10c45540(byte *param_2)
{
  int param_1 = (int )this;
  return (uint)(*(uint *)(param_1 + 0x18) &
         ((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2]) * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 10c455a0; body size 68 bytes.
#line 1 "ENTRY_10c455a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10c455a0(byte *param_2)
{
  int param_1 = (int )this;
  return (uint)(*(uint *)(param_1 + 0x18) &
         ((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2]) * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 10c45600; body size 68 bytes.
#line 1 "ENTRY_10c45600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10c45600(byte *param_2)
{
  int param_1 = (int )this;
  return (uint)(*(uint *)(param_1 + 0x18) &
         ((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2]) * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 10c45660; body size 68 bytes.
#line 1 "ENTRY_10c45660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10c45660(byte *param_2)
{
  int param_1 = (int )this;
  return (uint)(*(uint *)(param_1 + 0x18) &
         ((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2]) * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 10c456c0; body size 4 bytes.
#line 1 "ENTRY_10c456c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c456c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10c456d0; body size 4 bytes.
#line 1 "ENTRY_10c456d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c456d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10c456e0; body size 4 bytes.
#line 1 "ENTRY_10c456e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c456e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10c456f0; body size 4 bytes.
#line 1 "ENTRY_10c456f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c456f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10c45700; body size 123 bytes.
#line 1 "ENTRY_10c45700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c45700(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iStack_4;
  
  if (*(uint *)(param_1 + 8) != 0) {
    iStack_4 = (int)(param_1);
    if (*(uint *)((param_1 + 8)) < *(uint *)((param_1 + 0x1c) >> 3)) {
      func_0x10095197(**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
      return;
    }
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
    *(undefined4*)puVar1[1] = (undefined4)((undefined4)(0));
    puVar1 = (undefined4 *)((undefined4 *)*puVar1);
    while ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
      puVar2 = (undefined4 *)((undefined4 *)*puVar1);
      thunk_FUN_1148a50e(puVar1,0x10);
      puVar1 = (undefined4 *)(puVar2);
    }
    *(undefined4 *)*(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
    *(int*)(*(int *)(param_1 + 4) + 4) = (int)(*(int *)(param_1 + 4));
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*(int *)(param_1 + 4));
    thunk_FUN_10c3ecb0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 10c45820; body size 123 bytes.
#line 1 "ENTRY_10c45820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c45820(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iStack_4;
  
  if (*(uint *)(param_1 + 8) != 0) {
    iStack_4 = (int)(param_1);
    if (*(uint *)((param_1 + 8)) < *(uint *)((param_1 + 0x1c) >> 3)) {
      func_0x10029fe1(**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
      return;
    }
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
    *(undefined4*)puVar1[1] = (undefined4)((undefined4)(0));
    puVar1 = (undefined4 *)((undefined4 *)*puVar1);
    while ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
      puVar2 = (undefined4 *)((undefined4 *)*puVar1);
      thunk_FUN_1148a50e(puVar1,0x10);
      puVar1 = (undefined4 *)(puVar2);
    }
    *(undefined4 *)*(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
    *(int*)(*(int *)(param_1 + 4) + 4) = (int)(*(int *)(param_1 + 4));
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*(int *)(param_1 + 4));
    thunk_FUN_10c3edb0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 10c458c0; body size 140 bytes.
#line 1 "ENTRY_10c458c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c458c0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iStack_4;
  
  if (*(uint *)(param_1 + 8) != 0) {
    iStack_4 = (int)(param_1);
    if (*(uint *)((param_1 + 8)) < *(uint *)((param_1 + 0x1c) >> 3)) {
      func_0x1008a53f(**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
      return;
    }
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
    *(undefined4*)puVar1[1] = (undefined4)((undefined4)(0));
    puVar1 = (undefined4 *)((undefined4 *)*puVar1);
    while ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
      puVar2 = (undefined4 *)((undefined4 *)*puVar1);
      ((pair<> *)(0))->m_op_dtor();
      thunk_FUN_1148a50e(puVar1,0x18);
      puVar1 = (undefined4 *)(puVar2);
    }
    *(undefined4 *)*(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
    *(int*)(*(int *)(param_1 + 4) + 4) = (int)(*(int *)(param_1 + 4));
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*(int *)(param_1 + 4));
    thunk_FUN_10c3ee30(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 10c45970; body size 59 bytes.
#line 1 "ENTRY_10c45970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c45970(int *param_1)

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


// Reference entry 10c459f0; body size 59 bytes.
#line 1 "ENTRY_10c459f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c459f0(int *param_1)

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


// Reference entry 10c45aa0; body size 54 bytes.
#line 1 "ENTRY_10c45aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c45aa0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10c45af0; body size 57 bytes.
#line 1 "ENTRY_10c45af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c45af0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10c45b40; body size 54 bytes.
#line 1 "ENTRY_10c45b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c45b40(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10c45b90; body size 57 bytes.
#line 1 "ENTRY_10c45b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c45b90(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10c45be0; body size 57 bytes.
#line 1 "ENTRY_10c45be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c45be0(int param_1,int param_2)

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


// Reference entry 10c45c30; body size 60 bytes.
#line 1 "ENTRY_10c45c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c45c30(int param_1,int param_2)

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


// Reference entry 10c45c80; body size 57 bytes.
#line 1 "ENTRY_10c45c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c45c80(int param_1,int param_2)

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


// Reference entry 10c45cd0; body size 60 bytes.
#line 1 "ENTRY_10c45cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c45cd0(int param_1,int param_2)

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


// Reference entry 10c45d20; body size 61 bytes.
#line 1 "ENTRY_10c45d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c45d20(int param_1,int param_2)

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


// Reference entry 10c45d70; body size 61 bytes.
#line 1 "ENTRY_10c45d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c45d70(int param_1,int param_2)

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


// Reference entry 10c45dc0; body size 61 bytes.
#line 1 "ENTRY_10c45dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c45dc0(int param_1,int param_2)

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


// Reference entry 10c45e10; body size 61 bytes.
#line 1 "ENTRY_10c45e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c45e10(int param_1,int param_2)

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


// Reference entry 10c45e60; body size 61 bytes.
#line 1 "ENTRY_10c45e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c45e60(int param_1,int param_2)

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


// Reference entry 10c45f50; body size 12 bytes.
#line 1 "ENTRY_10c45f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c45f50(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10c45f60; body size 11 bytes.
#line 1 "ENTRY_10c45f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c45f60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10c45f70; body size 4 bytes.
#line 1 "ENTRY_10c45f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c45f70(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c45f80; body size 4 bytes.
#line 1 "ENTRY_10c45f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c45f80(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c45f90; body size 4 bytes.
#line 1 "ENTRY_10c45f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c45f90(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c45fa0; body size 4 bytes.
#line 1 "ENTRY_10c45fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c45fa0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c45fb0; body size 11 bytes.
#line 1 "ENTRY_10c45fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c45fb0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10c462e0; body size 16 bytes.
#line 1 "ENTRY_10c462e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c462e0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10c3f3e0(param_1,param_2);
  return;
}


// Reference entry 10c46300; body size 16 bytes.
#line 1 "ENTRY_10c46300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c46300(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10c3f690(param_1,param_2);
  return;
}


// Reference entry 10c46320; body size 16 bytes.
#line 1 "ENTRY_10c46320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c46320(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10c3f940(param_1,param_2);
  return;
}


// Reference entry 10c46b70; body size 21 bytes.
#line 1 "ENTRY_10c46b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c46b70(undefined4 param_1,int param_2)

{
  char cVar1;
  
  switch(param_1) {
  case 2:
  case 5:
    if ((param_2 == 4) && (cVar1 = (char)(thunk_FUN_10c46bd0(), 0), cVar1 == '\0')) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10c46f50; body size 7 bytes.
#line 1 "ENTRY_10c46f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10c46f50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c46f80; body size 3 bytes.
#line 1 "ENTRY_10c46f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10c46f80(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 10c46f90; body size 3 bytes.
#line 1 "ENTRY_10c46f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10c46f90(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 10c46fa0; body size 3 bytes.
#line 1 "ENTRY_10c46fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10c46fa0(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 10c46fb0; body size 3 bytes.
#line 1 "ENTRY_10c46fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10c46fb0(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 10c46fc0; body size 6 bytes.
#line 1 "ENTRY_10c46fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c46fc0(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 10c46fd0; body size 6 bytes.
#line 1 "ENTRY_10c46fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c46fd0(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10c46fe0; body size 6 bytes.
#line 1 "ENTRY_10c46fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c46fe0(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 10c46ff0; body size 6 bytes.
#line 1 "ENTRY_10c46ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c46ff0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10c47000; body size 6 bytes.
#line 1 "ENTRY_10c47000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c47000(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10c47010; body size 6 bytes.
#line 1 "ENTRY_10c47010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c47010(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10c47020; body size 6 bytes.
#line 1 "ENTRY_10c47020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c47020(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10c47030; body size 6 bytes.
#line 1 "ENTRY_10c47030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c47030(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10c47040; body size 6 bytes.
#line 1 "ENTRY_10c47040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c47040(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10c47050; body size 6 bytes.
#line 1 "ENTRY_10c47050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c47050(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10c47060; body size 6 bytes.
#line 1 "ENTRY_10c47060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c47060(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10c47070; body size 6 bytes.
#line 1 "ENTRY_10c47070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c47070(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10c47080; body size 6 bytes.
#line 1 "ENTRY_10c47080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c47080(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10c47090; body size 6 bytes.
#line 1 "ENTRY_10c47090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c47090(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 10c470a0; body size 6 bytes.
#line 1 "ENTRY_10c470a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c470a0(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10c470b0; body size 6 bytes.
#line 1 "ENTRY_10c470b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c470b0(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 10c470c0; body size 6 bytes.
#line 1 "ENTRY_10c470c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c470c0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10c470d0; body size 6 bytes.
#line 1 "ENTRY_10c470d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c470d0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10c47220; body size 5 bytes.
#line 1 "ENTRY_10c47220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c47220(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c47230; body size 5 bytes.
#line 1 "ENTRY_10c47230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c47230(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c47240; body size 11 bytes.
#line 1 "ENTRY_10c47240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c47240(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10c47250; body size 5 bytes.
#line 1 "ENTRY_10c47250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c47250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c47260; body size 5 bytes.
#line 1 "ENTRY_10c47260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c47260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c475a0; body size 9 bytes.
#line 1 "ENTRY_10c475a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c475a0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10c475b0; body size 9 bytes.
#line 1 "ENTRY_10c475b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c475b0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10c475c0; body size 9 bytes.
#line 1 "ENTRY_10c475c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c475c0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10c475d0; body size 9 bytes.
#line 1 "ENTRY_10c475d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c475d0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10c47620; body size 47 bytes.
#line 1 "ENTRY_10c47620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c47620(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCacheManager);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c47740; body size 3 bytes.
#line 1 "ENTRY_10c47740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c47740(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c478d0; body size 3 bytes.
#line 1 "ENTRY_10c478d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c478d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c48f40; body size 21 bytes.
#line 1 "ENTRY_10c48f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __stdcall FUN_10c48f40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("unavailable");
  return (SCStr *)(param_1);
}


// Reference entry 10c49450; body size 21 bytes.
#line 1 "ENTRY_10c49450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __stdcall FUN_10c49450(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("unavailable");
  return (SCStr *)(param_1);
}


// Reference entry 10c49470; body size 21 bytes.
#line 1 "ENTRY_10c49470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __stdcall FUN_10c49470(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("unavailable");
  return (SCStr *)(param_1);
}


// Reference entry 10c495e0; body size 21 bytes.
#line 1 "ENTRY_10c495e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __stdcall FUN_10c495e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("unavailable");
  return (SCStr *)(param_1);
}


// Reference entry 10c496e0; body size 21 bytes.
#line 1 "ENTRY_10c496e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __stdcall FUN_10c496e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("unavailable");
  return (SCStr *)(param_1);
}


// Reference entry 10c4a0a0; body size 199 bytes.
#line 1 "ENTRY_10c4a0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c4a0a0(byte *param_1,int param_2,uint param_3,byte *param_4,int param_5)

{
  byte *pbVar1;
  char cVar2;
  byte *pbVar3;
  char acStack_104 [256];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)(uint)&acStack_104);
  if ((param_5 != 0) && (param_2 != 0)) {
    memset((char *)&acStack_104,0,0x100);
    pbVar3 = (byte *)(param_4 + param_5);
    for (;(byte *)((param_4)) != (byte *)(pbVar3); param_4 = param_4 + 1) {
      acStack_104[*param_4] = (char)('\x01');
    }
    if (param_2 - 1U < param_3) {
      param_3 = (uint)(param_2 - 1U);
    }
    pbVar3 = (byte *)(param_1 + param_3);
    cVar2 = (char)(acStack_104[*pbVar3]);
    while( true ) {
      if (cVar2 != '\0') {
        thunk_FUN_1148ac28();
        return;
      }
      if ((byte *)(pbVar3) == (byte *)(param_1)) break;
      pbVar1 = (byte *)(pbVar3 + -1);
      pbVar3 = (byte *)(pbVar3 + -1);
      cVar2 = (char)(acStack_104[*pbVar1]);
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10c4a230; body size 130 bytes.
#line 1 "ENTRY_10c4a230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10c4a230(int *param_2,undefined4 param_3)
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


// Reference entry 10c4a2e0; body size 5 bytes.
#line 1 "ENTRY_10c4a2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c4a2e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c4a2f0; body size 28 bytes.
#line 1 "ENTRY_10c4a2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c4a2f0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 10c4a510; body size 70 bytes.
#line 1 "ENTRY_10c4a510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c4a510(undefined4 *param_1)

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


// Reference entry 10c4a5f0; body size 10 bytes.
#line 1 "ENTRY_10c4a5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c4a5f0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10c4a600; body size 12 bytes.
#line 1 "ENTRY_10c4a600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c4a600(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10c4a690; body size 99 bytes.
#line 1 "ENTRY_10c4a690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4a690(int param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_2 + 0x6110) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_2 + 0x6110), 0);
  }
  thunk_FUN_111c05a0((int)(-(uint)(param_2 != 0) & param_2 + 0x610cU),(int)(param_2),(int)(puVar1),(int)(param_3),(int)(param_4),(int)(0),(int)(0));
  param_1[0x1125] = (undefined4)(param_2);
  *(undefined1*)(param_1 + 0x1124) = (undefined1)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_DownloadCertBundleOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_DownloadCertBundleOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10c4aa40; body size 34 bytes.
#line 1 "ENTRY_10c4aa40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c4aa40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RootCACertBundleDownloader);
  param_1[3] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0xf);
  *(undefined1*)(param_1 + 4) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c4afb0; body size 11 bytes.
#line 1 "ENTRY_10c4afb0"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4afb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_DownloadCertBundleOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10c4afc0; body size 11 bytes.
#line 1 "ENTRY_10c4afc0"

/* WARNING: Removing unreachable block_10c4afc0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4afc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_GetCertBundleAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10c4b350; body size 18 bytes.
#line 1 "ENTRY_10c4b350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4b350(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
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


// Reference entry 10c4b710; body size 18 bytes.
#line 1 "ENTRY_10c4b710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4b710(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGetCertBundle);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpGetCertBundle);


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


// Reference entry 10c4b8e0; body size 3 bytes.
#line 1 "ENTRY_10c4b8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c4b8e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c4b8f0; body size 7 bytes.
#line 1 "ENTRY_10c4b8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c4b8f0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10c4b900; body size 8 bytes.
#line 1 "ENTRY_10c4b900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c4b900(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10c4b910; body size 4 bytes.
#line 1 "ENTRY_10c4b910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c4b910(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c4b920; body size 4 bytes.
#line 1 "ENTRY_10c4b920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c4b920(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c4b930; body size 4 bytes.
#line 1 "ENTRY_10c4b930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c4b930(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c4bf30; body size 8 bytes.
#line 1 "ENTRY_10c4bf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c4bf30(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10c4bf40; body size 4 bytes.
#line 1 "ENTRY_10c4bf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c4bf40(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10c4bf50; body size 7 bytes.
#line 1 "ENTRY_10c4bf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c4bf50(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10c4bf60; body size 26 bytes.
#line 1 "ENTRY_10c4bf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c4bf60(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)(((SCVtbl_0_1*)(*(undefined4 **)(param_2 + 0x24)))->v((int)(param_1)), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10c4bf80; body size 10 bytes.
#line 1 "ENTRY_10c4bf80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c4bf80(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10c4c4d0; body size 16 bytes.
#line 1 "ENTRY_10c4c4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c4c4d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10c4c950; body size 32 bytes.
#line 1 "ENTRY_10c4c950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c4c950(undefined4 param_1,undefined4 *param_2)

{
  thunk_FUN_1125bf90();
  *param_2 = (undefined4)(0x7fffffff);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 10c4c980; body size 196 bytes.
#line 1 "ENTRY_10c4c980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c4c980(byte *param_2,uint param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  char acStack_104 [256];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)(uint)&acStack_104);
  pbVar7 = (byte *)(param_2);
  do {
    bVar2 = (byte)(*pbVar7);
    pbVar7 = (byte *)(pbVar7 + 1);
  } while (bVar2 != 0);
  puVar6 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar6 = (undefined4 *)((undefined4 *)*param_1);
  }
  iVar4 = (int)(param_1[4]);
  if (((int)pbVar7 - (int)(param_2 + 1) != 0) && (iVar4 != 0)) {
    memset((char *)&acStack_104,0,0x100);
    pbVar7 = (byte *)(param_2 + ((int)pbVar7 - (int)(param_2 + 1)));
    for (;(byte *)((param_2)) != (byte *)(pbVar7); param_2 = param_2 + 1) {
      acStack_104[*param_2] = (char)('\x01');
    }
    uVar1 = (uint)(iVar4 - 1);
    if (uVar1 < param_3) {
      param_3 = (uint)(uVar1);
    }
    cVar3 = (char)(acStack_104[*(byte *)(param_3 + (int)puVar6)]);
    for (puVar5 = (undefined4 *)((undefined4 *)(param_3 + (int)puVar6)); (cVar3 == '\0' && ((undefined4 *)(puVar5) != (undefined4 *)(puVar6)));
        puVar5 = (undefined4 *)((int)puVar5 + -1)) {
      cVar3 = (char)(acStack_104[*(byte *)((int)puVar5 + -1)]);
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10c4ca80; body size 7 bytes.
#line 1 "ENTRY_10c4ca80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c4ca80(int param_1)

{
  return (int)(param_1 + 0x6180);
}


// Reference entry 10c4ca90; body size 7 bytes.
#line 1 "ENTRY_10c4ca90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c4ca90(int param_1)

{
  return (int)(param_1 + 0x6120);
}


// Reference entry 10c4caa0; body size 9 bytes.
#line 1 "ENTRY_10c4caa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c4caa0(int param_1)

{
  return (int)(*(int *)(param_1 + 0x18) + 0x6180);
}


// Reference entry 10c4cab0; body size 7 bytes.
#line 1 "ENTRY_10c4cab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c4cab0(int param_1)

{
  return (int)(param_1 + 0x6184);
}


// Reference entry 10c4cac0; body size 7 bytes.
#line 1 "ENTRY_10c4cac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c4cac0(int param_1)

{
  return (int)(param_1 + 0x6118);
}


// Reference entry 10c4cad0; body size 9 bytes.
#line 1 "ENTRY_10c4cad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c4cad0(int param_1)

{
  return (int)(*(int *)(param_1 + 0x18) + 0x6184);
}


// Reference entry 10c4cae0; body size 13 bytes.
#line 1 "ENTRY_10c4cae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined8 __fastcall FUN_10c4cae0(int param_1)

{
  return (undefined8)(*(undefined8 *)(param_1 + 0x6178));
}


// Reference entry 10c4caf0; body size 13 bytes.
#line 1 "ENTRY_10c4caf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined8 __fastcall FUN_10c4caf0(int param_1)

{
  return (undefined8)(*(undefined8 *)(param_1 + 0x6128));
}


// Reference entry 10c4cb00; body size 16 bytes.
#line 1 "ENTRY_10c4cb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined8 __fastcall FUN_10c4cb00(int param_1)

{
  return (undefined8)(*(undefined8 *)(*(int *)(param_1 + 0x18) + 0x6178));
}


// Reference entry 10c4cb30; body size 4 bytes.
#line 1 "ENTRY_10c4cb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c4cb30(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c4cb60; body size 6 bytes.
#line 1 "ENTRY_10c4cb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c4cb60(void)

{
  return (undefined4)(DAT_121a568c);
}


// Reference entry 10c4cb70; body size 7 bytes.
#line 1 "ENTRY_10c4cb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c4cb70(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x6188));
}


// Reference entry 10c4cb80; body size 10 bytes.
#line 1 "ENTRY_10c4cb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c4cb80(int param_1)

{
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x6188));
}


// Reference entry 10c4cb90; body size 7 bytes.
#line 1 "ENTRY_10c4cb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c4cb90(int param_1)

{
  return (int)(param_1 + 0x6110);
}


// Reference entry 10c4cf80; body size 3 bytes.
#line 1 "ENTRY_10c4cf80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c4cf80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c4d090; body size 28 bytes.
#line 1 "ENTRY_10c4d090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4d090(undefined4 *param_1)

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


// Reference entry 10c4d0c0; body size 28 bytes.
#line 1 "ENTRY_10c4d0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4d0c0(undefined4 *param_1)

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


// Reference entry 10c4d160; body size 346 bytes.
#line 1 "ENTRY_10c4d160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c4d160(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  SCStr *this_;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  void *pvStack_418;
  undefined1 *puStack_414;
  undefined4 uStack_410;
  undefined1 auStack_40c [1028];
  uint uStack_8;


  uVar2 = (uint)(DAT_12126b84 ^ (uint)(uint)&auStack_40c);

  uStack_8 = (uint)(uVar2);
  thunk_FUN_1125ac90((int)((uint)&auStack_40c),(int)(0x401));

  thunk_FUN_1125b030((int)(param_2),(int)(0));
  iVar3 = (int)(thunk_FUN_1125b370((int)(0)), 0);
  if (iVar3 != 0) {
    iVar4 = (int)(thunk_FUN_113b9f60(param_2,"ETag:",5,uVar2), 0);
    if (iVar4 == 0) {
      pcVar5 = (char *)((char *)thunk_FUN_1125b3f0((int)(iVar3)), 0);
      ((SCStr *)((SCStr *)&uStack_41c))->int_allocRep(pcVar5);
      this_ = (SCStr *)((SCStr *)(param_1 + 0x6120));
      *(unsigned char*)((char *)&uStack_410 + 0) = (unsigned char)(1);
      if ((SCStr *)(&uStack_41c) != (SCStr *)((this_))) {
        ((SCStr *)(this_))->int_release();
        *(undefined4*)this_ = (undefined4)((SCStr *)(uStack_41c));
        ((SCStr *)(this_))->int_addref();
      }
      uStack_410 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_410 + 1)) << 8 | (uint)(2)));
      ((SCStr *)((SCStr *)&uStack_41c))->int_release();
    }
    else {
      iVar4 = (int)(thunk_FUN_113b9f60(param_2,"Cache-Control:",0xe,uVar2), 0);
      if (iVar4 == 0) {
        uVar6 = (undefined4)(thunk_FUN_1125b3f0((int)(iVar3)), 0);
        iVar3 = (int)(thunk_FUN_113b9e10(uVar6,"max-age="), 0);

        if (iVar3 != 0) {
          cVar1 = (char)(thunk_FUN_1145c460(iVar3 + 8,&uStack_420), 0);
          if (cVar1 != '\0') {
            *(undefined4*)(param_1 + 0x6128) = (undefined4)(uStack_420);
            *(undefined4*)(param_1 + 0x612c) = (undefined4)(0);
          }
        }
      }
    }
  }
  thunk_FUN_1125acd0();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10c4d5e0; body size 24 bytes.
#line 1 "ENTRY_10c4d5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10c4d5e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0((int)(param_1),(int)(param_2),(int)(param_3));
  return (undefined4)(param_1);
}


// Reference entry 10c4d9c0; body size 6 bytes.
#line 1 "ENTRY_10c4d9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c4d9c0(void)

{
  return (char *)("SCIOpDevicePropertiesGetAutoplayLinkedZones");
}


// Reference entry 10c4d9d0; body size 6 bytes.
#line 1 "ENTRY_10c4d9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c4d9d0(void)

{
  return (char *)("SCIOpDevicePropertiesGetAutoplayRoomUUID");
}


// Reference entry 10c4d9e0; body size 6 bytes.
#line 1 "ENTRY_10c4d9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c4d9e0(void)

{
  return (char *)("SCIOpDevicePropertiesGetAutoplayVolume");
}


// Reference entry 10c4d9f0; body size 6 bytes.
#line 1 "ENTRY_10c4d9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c4d9f0(void)

{
  return (char *)("SCIOpDevicePropertiesGetUseAutoplayVolume");
}


// Reference entry 10c4da00; body size 6 bytes.
#line 1 "ENTRY_10c4da00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c4da00(void)

{
  return (char *)("SCIOpDevicePropertiesSetUseAutoplayVolume");
}


// Reference entry 10c4dce0; body size 27 bytes.
#line 1 "ENTRY_10c4dce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c4dce0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c4dd10; body size 27 bytes.
#line 1 "ENTRY_10c4dd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c4dd10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c4dd40; body size 27 bytes.
#line 1 "ENTRY_10c4dd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c4dd40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c4dd70; body size 27 bytes.
#line 1 "ENTRY_10c4dd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c4dd70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c4dda0; body size 27 bytes.
#line 1 "ENTRY_10c4dda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c4dda0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c4ddd0; body size 27 bytes.
#line 1 "ENTRY_10c4ddd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c4ddd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c4de00; body size 42 bytes.
#line 1 "ENTRY_10c4de00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4de00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOwnedObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 10c4de40; body size 42 bytes.
#line 1 "ENTRY_10c4de40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4de40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITearOffObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 10c4e720; body size 134 bytes.
#line 1 "ENTRY_10c4e720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4e720(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760((int)(uVar2),(int)("urn:schemas-upnp-org:service:DeviceProperties:1"),(int)("GetAutoplayLinkedZones"),(int)(uVar3),(int)(param_3),(int)(param_4),(int)(param_5),(int)(param_6));
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayLinkedZonesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayLinkedZonesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayLinkedZonesAIOOp);
  *(undefined1*)(param_1 + 0x35f4) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c4e7d0; body size 134 bytes.
#line 1 "ENTRY_10c4e7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4e7d0(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760((int)(uVar2),(int)("urn:schemas-upnp-org:service:DeviceProperties:1"),(int)("GetAutoplayRoomUUID"),(int)(uVar3),(int)(param_3),(int)(param_4),(int)(param_5),(int)(param_6));
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayRoomUUIDAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayRoomUUIDAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayRoomUUIDAIOOp);
  *(undefined1*)(param_1 + 0x35f4) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c4e880; body size 136 bytes.
#line 1 "ENTRY_10c4e880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4e880(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760((int)(uVar2),(int)("urn:schemas-upnp-org:service:DeviceProperties:1"),(int)("GetAutoplayVolume"),(int)(uVar3),(int)(param_3),(int)(param_4),(int)(param_5),(int)(param_6));
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayVolumeAIOOp);
  *(undefined2*)(param_1 + 0x35f4) = (undefined2)(0);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayVolumeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayVolumeAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10c4e930; body size 134 bytes.
#line 1 "ENTRY_10c4e930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4e930(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760((int)(uVar2),(int)("urn:schemas-upnp-org:service:DeviceProperties:1"),(int)("GetUseAutoplayVolume"),(int)(uVar3),(int)(param_3),(int)(param_4),(int)(param_5),(int)(param_6));
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetUseAutoplayVolumeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetUseAutoplayVolumeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetUseAutoplayVolumeAIOOp);
  *(undefined1*)(param_1 + 0x35f4) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c4e9e0; body size 127 bytes.
#line 1 "ENTRY_10c4e9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4e9e0(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760((int)(uVar2),(int)("urn:schemas-upnp-org:service:DeviceProperties:1"),(int)("SetAutoplayLinkedZones"),(int)(uVar3),(int)(param_3),(int)(param_4),(int)(param_5),(int)(param_6));
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayLinkedZonesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayLinkedZonesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayLinkedZonesAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10c4eac0; body size 9 bytes.
#line 1 "ENTRY_10c4eac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c4eac0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIDeviceAutoplay);
  return (undefined4 *)(param_1);
}


// Reference entry 10c4ead0; body size 9 bytes.
#line 1 "ENTRY_10c4ead0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c4ead0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpDevicePropertiesGetAutoplayLinkedZones);
  return (undefined4 *)(param_1);
}


// Reference entry 10c4eae0; body size 9 bytes.
#line 1 "ENTRY_10c4eae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c4eae0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpDevicePropertiesGetAutoplayRoomUUID);
  return (undefined4 *)(param_1);
}


// Reference entry 10c4eaf0; body size 9 bytes.
#line 1 "ENTRY_10c4eaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c4eaf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpDevicePropertiesGetAutoplayVolume);
  return (undefined4 *)(param_1);
}


// Reference entry 10c4eb00; body size 9 bytes.
#line 1 "ENTRY_10c4eb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c4eb00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpDevicePropertiesGetUseAutoplayVolume);
  return (undefined4 *)(param_1);
}


// Reference entry 10c4eb10; body size 9 bytes.
#line 1 "ENTRY_10c4eb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c4eb10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpDevicePropertiesSetUseAutoplayVolume);
  return (undefined4 *)(param_1);
}


// Reference entry 10c4f250; body size 11 bytes.
#line 1 "ENTRY_10c4f250"

/* WARNING: Removing unreachable block_10c4f250 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4f250(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpDPGetAutoplayLinkedZonesAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10c4f260; body size 11 bytes.
#line 1 "ENTRY_10c4f260"

/* WARNING: Removing unreachable block_10c4f260 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4f260(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpDPGetAutoplayRoomUUIDAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10c4f270; body size 11 bytes.
#line 1 "ENTRY_10c4f270"

/* WARNING: Removing unreachable block_10c4f270 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4f270(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpDPGetAutoplayVolumeAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10c4f280; body size 11 bytes.
#line 1 "ENTRY_10c4f280"

/* WARNING: Removing unreachable block_10c4f280 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4f280(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpDPGetUseAutoplayVolumeAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10c4f290; body size 19 bytes.
#line 1 "ENTRY_10c4f290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4f290(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c4f350; body size 26 bytes.
#line 1 "ENTRY_10c4f350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4f350(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c4f370; body size 26 bytes.
#line 1 "ENTRY_10c4f370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4f370(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c4fc50; body size 28 bytes.
#line 1 "ENTRY_10c4fc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4fc50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayLinkedZonesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayLinkedZonesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayLinkedZonesAIOOp);
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


// Reference entry 10c4fc80; body size 28 bytes.
#line 1 "ENTRY_10c4fc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4fc80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayRoomUUIDAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayRoomUUIDAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayRoomUUIDAIOOp);
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


// Reference entry 10c4fcb0; body size 28 bytes.
#line 1 "ENTRY_10c4fcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4fcb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayVolumeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayVolumeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayVolumeAIOOp);
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


// Reference entry 10c4fce0; body size 28 bytes.
#line 1 "ENTRY_10c4fce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4fce0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetUseAutoplayVolumeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetUseAutoplayVolumeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetUseAutoplayVolumeAIOOp);
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


// Reference entry 10c4fd10; body size 28 bytes.
#line 1 "ENTRY_10c4fd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4fd10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayLinkedZonesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayLinkedZonesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayLinkedZonesAIOOp);
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


// Reference entry 10c4fdd0; body size 7 bytes.
#line 1 "ENTRY_10c4fdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4fdd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c4fde0; body size 7 bytes.
#line 1 "ENTRY_10c4fde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4fde0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c4fdf0; body size 7 bytes.
#line 1 "ENTRY_10c4fdf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4fdf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c4fe00; body size 7 bytes.
#line 1 "ENTRY_10c4fe00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4fe00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c4fe10; body size 7 bytes.
#line 1 "ENTRY_10c4fe10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4fe10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c4fe20; body size 7 bytes.
#line 1 "ENTRY_10c4fe20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4fe20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c4fe30; body size 18 bytes.
#line 1 "ENTRY_10c4fe30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4fe30(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesGetAutoplayLinkedZones);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesGetAutoplayLinkedZones);


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


// Reference entry 10c4fe50; body size 18 bytes.
#line 1 "ENTRY_10c4fe50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4fe50(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesGetAutoplayRoomUUID);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesGetAutoplayRoomUUID);


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


// Reference entry 10c4fe70; body size 18 bytes.
#line 1 "ENTRY_10c4fe70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4fe70(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesGetAutoplayVolume);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesGetAutoplayVolume);


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


// Reference entry 10c4fe90; body size 18 bytes.
#line 1 "ENTRY_10c4fe90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4fe90(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesGetUseAutoplayVolume);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesGetUseAutoplayVolume);


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


// Reference entry 10c4feb0; body size 18 bytes.
#line 1 "ENTRY_10c4feb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c4feb0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesSetUseAutoplayVolume);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesSetUseAutoplayVolume);


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


// Reference entry 10c4fed0; body size 4 bytes.
#line 1 "ENTRY_10c4fed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c4fed0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c4fee0; body size 4 bytes.
#line 1 "ENTRY_10c4fee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c4fee0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c4fef0; body size 4 bytes.
#line 1 "ENTRY_10c4fef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c4fef0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c4ff00; body size 4 bytes.
#line 1 "ENTRY_10c4ff00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c4ff00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c52450; body size 8 bytes.
#line 1 "ENTRY_10c52450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_10c52450(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0xd7d0));
}


// Reference entry 10c52470; body size 7 bytes.
#line 1 "ENTRY_10c52470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10c52470(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xd7d0));
}


// Reference entry 10c525a0; body size 7 bytes.
#line 1 "ENTRY_10c525a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c525a0(int param_1)

{
  return (int)(param_1 + 0xd7d0);
}


// Reference entry 10c52620; body size 7 bytes.
#line 1 "ENTRY_10c52620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10c52620(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xd7d0));
}


// Reference entry 10c52640; body size 8 bytes.
#line 1 "ENTRY_10c52640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c52640(int param_1)

{
  return (bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 10c52650; body size 6 bytes.
#line 1 "ENTRY_10c52650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c52650(void)

{
  return (char *)("SCIOpDevicePropertiesGetAutoplayLinkedZones");
}


// Reference entry 10c52660; body size 6 bytes.
#line 1 "ENTRY_10c52660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c52660(void)

{
  return (char *)("SCIOpDevicePropertiesGetAutoplayRoomUUID");
}


// Reference entry 10c52670; body size 6 bytes.
#line 1 "ENTRY_10c52670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c52670(void)

{
  return (char *)("SCIOpDevicePropertiesGetAutoplayVolume");
}


// Reference entry 10c52680; body size 6 bytes.
#line 1 "ENTRY_10c52680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c52680(void)

{
  return (char *)("SCIOpDevicePropertiesGetUseAutoplayVolume");
}


// Reference entry 10c52690; body size 6 bytes.
#line 1 "ENTRY_10c52690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c52690(void)

{
  return (char *)("SCIOpDevicePropertiesSetUseAutoplayVolume");
}


// Reference entry 10c53c60; body size 28 bytes.
#line 1 "ENTRY_10c53c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c53c60(undefined4 *param_1)

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


// Reference entry 10c53c90; body size 28 bytes.
#line 1 "ENTRY_10c53c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c53c90(undefined4 *param_1)

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


// Reference entry 10c53cc0; body size 28 bytes.
#line 1 "ENTRY_10c53cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c53cc0(undefined4 *param_1)

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


// Reference entry 10c53cf0; body size 28 bytes.
#line 1 "ENTRY_10c53cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c53cf0(undefined4 *param_1)

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


// Reference entry 10c53d20; body size 28 bytes.
#line 1 "ENTRY_10c53d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c53d20(undefined4 *param_1)

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


// Reference entry 10c54240; body size 6 bytes.
#line 1 "ENTRY_10c54240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c54240(void)

{
  return (char *)("SCIOpAudioInGetAudioInputAttributes");
}


// Reference entry 10c54250; body size 6 bytes.
#line 1 "ENTRY_10c54250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c54250(void)

{
  return (char *)("SCIOpAudioInGetLineInLevel");
}


// Reference entry 10c54260; body size 6 bytes.
#line 1 "ENTRY_10c54260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c54260(void)

{
  return (char *)("SCIOpAudioInSetAudioInputAttributes");
}


// Reference entry 10c54270; body size 6 bytes.
#line 1 "ENTRY_10c54270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c54270(void)

{
  return (char *)("SCIOpAudioInSetLineInLevel");
}


// Reference entry 10c544c0; body size 27 bytes.
#line 1 "ENTRY_10c544c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c544c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c544f0; body size 27 bytes.
#line 1 "ENTRY_10c544f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c544f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c54520; body size 27 bytes.
#line 1 "ENTRY_10c54520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c54520(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c54550; body size 27 bytes.
#line 1 "ENTRY_10c54550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c54550(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c54580; body size 27 bytes.
#line 1 "ENTRY_10c54580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c54580(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c545b0; body size 42 bytes.
#line 1 "ENTRY_10c545b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c545b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOwnedObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 10c545f0; body size 42 bytes.
#line 1 "ENTRY_10c545f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c545f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITearOffObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 10c54cf0; body size 141 bytes.
#line 1 "ENTRY_10c54cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c54cf0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)));
  if (param_7 == '\0') {
    uVar2 = (undefined4)(((SCFp_72_0*)(iVar1))->v(), 0);
  }
  else {
    uVar2 = (undefined4)(((SCFp_76_0*)(iVar1))->v(), 0);
  }
  uVar3 = (undefined4)(((SCVtbl_20_4*)((int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4))))->v((int)(param_3),(int)(param_4),(int)(param_5),(int)(param_6)), 0);
  thunk_FUN_111c0760((int)(uVar2),(int)("urn:schemas-upnp-org:service:AudioIn:1"),(int)("GetAudioInputAttributes"),(int)(uVar3),(int)(param_3),(int)(param_4),(int)(param_5),(int)(param_6));
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAIGetAudioInputAttributesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAIGetAudioInputAttributesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAIGetAudioInputAttributesAIOOp);
  *(undefined1*)(param_1 + 0x35f4) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x3614) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c54da0; body size 147 bytes.
#line 1 "ENTRY_10c54da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c54da0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)));
  if (param_7 == '\0') {
    uVar2 = (undefined4)(((SCFp_72_0*)(iVar1))->v(), 0);
  }
  else {
    uVar2 = (undefined4)(((SCFp_76_0*)(iVar1))->v(), 0);
  }
  uVar3 = (undefined4)(((SCVtbl_20_4*)((int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4))))->v((int)(param_3),(int)(param_4),(int)(param_5),(int)(param_6)), 0);
  thunk_FUN_111c0760((int)(uVar2),(int)("urn:schemas-upnp-org:service:AudioIn:1"),(int)("GetLineInLevel"),(int)(uVar3),(int)(param_3),(int)(param_4),(int)(param_5),(int)(param_6));
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAIGetLineInLevelAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAIGetLineInLevelAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAIGetLineInLevelAIOOp);
  param_1[0x35f4] = (undefined4)(0);
  param_1[0x35f5] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c54ef0; body size 9 bytes.
#line 1 "ENTRY_10c54ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c54ef0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIDeviceLineIn);
  return (undefined4 *)(param_1);
}


// Reference entry 10c54f00; body size 9 bytes.
#line 1 "ENTRY_10c54f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c54f00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpAudioInGetAudioInputAttributes);
  return (undefined4 *)(param_1);
}


// Reference entry 10c54f10; body size 9 bytes.
#line 1 "ENTRY_10c54f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c54f10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpAudioInGetLineInLevel);
  return (undefined4 *)(param_1);
}


// Reference entry 10c54f20; body size 9 bytes.
#line 1 "ENTRY_10c54f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c54f20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpAudioInSetAudioInputAttributes);
  return (undefined4 *)(param_1);
}


// Reference entry 10c54f30; body size 9 bytes.
#line 1 "ENTRY_10c54f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c54f30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpAudioInSetLineInLevel);
  return (undefined4 *)(param_1);
}


// Reference entry 10c55500; body size 11 bytes.
#line 1 "ENTRY_10c55500"

/* WARNING: Removing unreachable block_10c55500 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c55500(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpAIGetAudioInputAttributesAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10c55510; body size 11 bytes.
#line 1 "ENTRY_10c55510"

/* WARNING: Removing unreachable block_10c55510 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c55510(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpAIGetLineInLevelAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10c55520; body size 19 bytes.
#line 1 "ENTRY_10c55520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c55520(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c555c0; body size 26 bytes.
#line 1 "ENTRY_10c555c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c555c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c55d00; body size 28 bytes.
#line 1 "ENTRY_10c55d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c55d00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAIGetAudioInputAttributesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAIGetAudioInputAttributesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAIGetAudioInputAttributesAIOOp);
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


// Reference entry 10c55d30; body size 28 bytes.
#line 1 "ENTRY_10c55d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c55d30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAIGetLineInLevelAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAIGetLineInLevelAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAIGetLineInLevelAIOOp);
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


// Reference entry 10c55d60; body size 26 bytes.
#line 1 "ENTRY_10c55d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c55d60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c55d80; body size 7 bytes.
#line 1 "ENTRY_10c55d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c55d80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c55d90; body size 7 bytes.
#line 1 "ENTRY_10c55d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c55d90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c55da0; body size 7 bytes.
#line 1 "ENTRY_10c55da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c55da0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c55db0; body size 7 bytes.
#line 1 "ENTRY_10c55db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c55db0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c55dc0; body size 7 bytes.
#line 1 "ENTRY_10c55dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c55dc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c55dd0; body size 18 bytes.
#line 1 "ENTRY_10c55dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c55dd0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAudioInGetAudioInputAttributes);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAudioInGetAudioInputAttributes);


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


// Reference entry 10c55df0; body size 18 bytes.
#line 1 "ENTRY_10c55df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c55df0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAudioInGetLineInLevel);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAudioInGetLineInLevel);


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


// Reference entry 10c55e10; body size 18 bytes.
#line 1 "ENTRY_10c55e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c55e10(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAudioInSetAudioInputAttributes);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAudioInSetAudioInputAttributes);


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


// Reference entry 10c55e30; body size 18 bytes.
#line 1 "ENTRY_10c55e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c55e30(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAudioInSetLineInLevel);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAudioInSetLineInLevel);


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


// Reference entry 10c55e50; body size 4 bytes.
#line 1 "ENTRY_10c55e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c55e50(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c55e60; body size 4 bytes.
#line 1 "ENTRY_10c55e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c55e60(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c57870; body size 7 bytes.
#line 1 "ENTRY_10c57870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c57870(int param_1)

{
  return (int)(param_1 + 0xd850);
}


// Reference entry 10c57890; body size 7 bytes.
#line 1 "ENTRY_10c57890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c57890(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xd7d0));
}


// Reference entry 10c578b0; body size 7 bytes.
#line 1 "ENTRY_10c578b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c578b0(int param_1)

{
  return (int)(param_1 + 0xd7d0);
}


// Reference entry 10c578d0; body size 7 bytes.
#line 1 "ENTRY_10c578d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c578d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xd7d4));
}


// Reference entry 10c57a90; body size 8 bytes.
#line 1 "ENTRY_10c57a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c57a90(int param_1)

{
  return (bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 10c57aa0; body size 6 bytes.
#line 1 "ENTRY_10c57aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c57aa0(void)

{
  return (char *)("SCIOpAudioInGetAudioInputAttributes");
}


// Reference entry 10c57ab0; body size 6 bytes.
#line 1 "ENTRY_10c57ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c57ab0(void)

{
  return (char *)("SCIOpAudioInGetLineInLevel");
}


// Reference entry 10c57ac0; body size 6 bytes.
#line 1 "ENTRY_10c57ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c57ac0(void)

{
  return (char *)("SCIOpAudioInSetAudioInputAttributes");
}


// Reference entry 10c57ad0; body size 6 bytes.
#line 1 "ENTRY_10c57ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c57ad0(void)

{
  return (char *)("SCIOpAudioInSetLineInLevel");
}


// Reference entry 10c58d20; body size 28 bytes.
#line 1 "ENTRY_10c58d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c58d20(undefined4 *param_1)

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


// Reference entry 10c58d50; body size 28 bytes.
#line 1 "ENTRY_10c58d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c58d50(undefined4 *param_1)

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


// Reference entry 10c58d80; body size 28 bytes.
#line 1 "ENTRY_10c58d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c58d80(undefined4 *param_1)

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


// Reference entry 10c58db0; body size 28 bytes.
#line 1 "ENTRY_10c58db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c58db0(undefined4 *param_1)

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


// Reference entry 10c59090; body size 6 bytes.
#line 1 "ENTRY_10c59090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c59090(void)

{
  return (char *)("SCIOpRenderingControlGetSupportsOutputFixed");
}


// Reference entry 10c59130; body size 27 bytes.
#line 1 "ENTRY_10c59130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c59130(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c59160; body size 27 bytes.
#line 1 "ENTRY_10c59160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c59160(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c59190; body size 42 bytes.
#line 1 "ENTRY_10c59190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c59190(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOwnedObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 10c591d0; body size 42 bytes.
#line 1 "ENTRY_10c591d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c591d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITearOffObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 10c593f0; body size 134 bytes.
#line 1 "ENTRY_10c593f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c593f0(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760((int)(uVar2),(int)("urn:schemas-upnp-org:service:RenderingControl:1"),(int)("GetSupportsOutputFixed"),(int)(uVar3),(int)(param_3),(int)(param_4),(int)(param_5),(int)(param_6));
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpRCGetSupportsOutputFixedAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpRCGetSupportsOutputFixedAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpRCGetSupportsOutputFixedAIOOp);
  *(undefined1*)(param_1 + 0x35f4) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c594e0; body size 9 bytes.
#line 1 "ENTRY_10c594e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c594e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIDeviceLineOut);
  return (undefined4 *)(param_1);
}


// Reference entry 10c594f0; body size 9 bytes.
#line 1 "ENTRY_10c594f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c594f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpRenderingControlGetSupportsOutputFixed);
  return (undefined4 *)(param_1);
}


// Reference entry 10c59670; body size 11 bytes.
#line 1 "ENTRY_10c59670"

/* WARNING: Removing unreachable block_10c59670 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c59670(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpRCGetSupportsOutputFixedAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10c59680; body size 19 bytes.
#line 1 "ENTRY_10c59680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c59680(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c596c0; body size 26 bytes.
#line 1 "ENTRY_10c596c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c596c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c596e0; body size 26 bytes.
#line 1 "ENTRY_10c596e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c596e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c598c0; body size 28 bytes.
#line 1 "ENTRY_10c598c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c598c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpRCGetSupportsOutputFixedAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpRCGetSupportsOutputFixedAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpRCGetSupportsOutputFixedAIOOp);
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


// Reference entry 10c598f0; body size 26 bytes.
#line 1 "ENTRY_10c598f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c598f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c59910; body size 7 bytes.
#line 1 "ENTRY_10c59910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c59910(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c59920; body size 7 bytes.
#line 1 "ENTRY_10c59920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c59920(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c59930; body size 18 bytes.
#line 1 "ENTRY_10c59930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c59930(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRenderingControlGetSupportsOutputFixed);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpRenderingControlGetSupportsOutputFixed);


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


// Reference entry 10c59950; body size 4 bytes.
#line 1 "ENTRY_10c59950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c59950(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c5a530; body size 7 bytes.
#line 1 "ENTRY_10c5a530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10c5a530(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xd7d0));
}


// Reference entry 10c5a700; body size 8 bytes.
#line 1 "ENTRY_10c5a700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c5a700(int param_1)

{
  return (bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 10c5a710; body size 6 bytes.
#line 1 "ENTRY_10c5a710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c5a710(void)

{
  return (char *)("SCIOpRenderingControlGetSupportsOutputFixed");
}


// Reference entry 10c5aee0; body size 28 bytes.
#line 1 "ENTRY_10c5aee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c5aee0(undefined4 *param_1)

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


// Reference entry 10c5aff0; body size 27 bytes.
#line 1 "ENTRY_10c5aff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c5aff0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5b020; body size 42 bytes.
#line 1 "ENTRY_10c5b020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5b020(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOwnedObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5b060; body size 42 bytes.
#line 1 "ENTRY_10c5b060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5b060(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITearOffObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5b0a0; body size 32 bytes.
#line 1 "ENTRY_10c5b0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5b0a0(undefined4 *param_2)
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


// Reference entry 10c5b0d0; body size 16 bytes.
#line 1 "ENTRY_10c5b0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c5b0d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5b0f0; body size 9 bytes.
#line 1 "ENTRY_10c5b0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c5b0f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_REqualizerListener);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5b3c0; body size 42 bytes.
#line 1 "ENTRY_10c5b3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5b3c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDeviceMusicEqualizationEventSinkInternal);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5b400; body size 9 bytes.
#line 1 "ENTRY_10c5b400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c5b400(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIDeviceMusicEqualization);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5b410; body size 19 bytes.
#line 1 "ENTRY_10c5b410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c5b410(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c5b430; body size 26 bytes.
#line 1 "ENTRY_10c5b430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c5b430(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c5b5f0; body size 19 bytes.
#line 1 "ENTRY_10c5b5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c5b5f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c5b610; body size 7 bytes.
#line 1 "ENTRY_10c5b610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c5b610(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c5b620; body size 65 bytes.
#line 1 "ENTRY_10c5b620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c5b620(int *param_2)
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


// Reference entry 10c5b750; body size 3 bytes.
#line 1 "ENTRY_10c5b750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c5b750(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c5c910; body size 8 bytes.
#line 1 "ENTRY_10c5c910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c5c910(int param_1)

{
  return (bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 10c5c9b0; body size 95 bytes.
#line 1 "ENTRY_10c5c9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c5c9b0(ushort param_2,ushort param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (param_3 < param_2) {
    iVar1 = (int)(((uint)param_3 * 100) / (uint)param_2 - 100);
  }
  else {
    if (param_3 <= param_2) {
      *(undefined4*)(param_1 + 0x3c) = (undefined4)(0);
      return;
    }
    iVar1 = (int)(100 - ((uint)param_2 * 100) / (uint)param_3);
  }
  *(int*)(param_1 + 0x3c) = (int)(iVar1 / 5);
  return;
}


// Reference entry 10c5ca30; body size 10 bytes.
#line 1 "ENTRY_10c5ca30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c5ca30(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x34) = (undefined4)(param_2);
  return;
}


// Reference entry 10c5ca40; body size 10 bytes.
#line 1 "ENTRY_10c5ca40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c5ca40(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x70) = (undefined4)(param_2);
  return;
}


// Reference entry 10c5ca50; body size 10 bytes.
#line 1 "ENTRY_10c5ca50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c5ca50(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 100) = (undefined4)(param_2);
  return;
}


// Reference entry 10c5ca60; body size 10 bytes.
#line 1 "ENTRY_10c5ca60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c5ca60(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x30) = (undefined1)(param_2);
  return;
}


// Reference entry 10c5ca70; body size 10 bytes.
#line 1 "ENTRY_10c5ca70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c5ca70(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x58) = (undefined4)(param_2);
  return;
}


// Reference entry 10c5ca80; body size 10 bytes.
#line 1 "ENTRY_10c5ca80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c5ca80(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x60) = (undefined1)(param_2);
  return;
}


// Reference entry 10c5ca90; body size 10 bytes.
#line 1 "ENTRY_10c5ca90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c5ca90(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x68) = (undefined4)(param_2);
  return;
}


// Reference entry 10c5caa0; body size 10 bytes.
#line 1 "ENTRY_10c5caa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c5caa0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x40) = (undefined1)(param_2);
  return;
}


// Reference entry 10c5cab0; body size 10 bytes.
#line 1 "ENTRY_10c5cab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c5cab0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x44) = (undefined4)(param_2);
  return;
}


// Reference entry 10c5cac0; body size 10 bytes.
#line 1 "ENTRY_10c5cac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c5cac0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x41) = (undefined1)(param_2);
  return;
}


// Reference entry 10c5cad0; body size 10 bytes.
#line 1 "ENTRY_10c5cad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c5cad0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x48) = (undefined4)(param_2);
  return;
}


// Reference entry 10c5cae0; body size 10 bytes.
#line 1 "ENTRY_10c5cae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c5cae0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x42) = (undefined1)(param_2);
  return;
}


// Reference entry 10c5caf0; body size 10 bytes.
#line 1 "ENTRY_10c5caf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c5caf0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x54) = (undefined4)(param_2);
  return;
}


// Reference entry 10c5cb00; body size 10 bytes.
#line 1 "ENTRY_10c5cb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c5cb00(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x5c) = (undefined4)(param_2);
  return;
}


// Reference entry 10c5cb10; body size 10 bytes.
#line 1 "ENTRY_10c5cb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c5cb10(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x50) = (undefined4)(param_2);
  return;
}


// Reference entry 10c5cb20; body size 10 bytes.
#line 1 "ENTRY_10c5cb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c5cb20(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x4c) = (undefined1)(param_2);
  return;
}


// Reference entry 10c5cb30; body size 10 bytes.
#line 1 "ENTRY_10c5cb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c5cb30(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x38) = (undefined4)(param_2);
  return;
}


// Reference entry 10c5cb40; body size 10 bytes.
#line 1 "ENTRY_10c5cb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c5cb40(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x6c) = (undefined1)(param_2);
  return;
}


// Reference entry 10c5cd20; body size 3 bytes.
#line 1 "ENTRY_10c5cd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c5cd20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c5d1f0; body size 28 bytes.
#line 1 "ENTRY_10c5d1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c5d1f0(undefined4 *param_1)

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


// Reference entry 10c5dc60; body size 18 bytes.
#line 1 "ENTRY_10c5dc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c5dc60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5dc80; body size 22 bytes.
#line 1 "ENTRY_10c5dc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5dc80(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5dca0; body size 18 bytes.
#line 1 "ENTRY_10c5dca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c5dca0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5de50; body size 38 bytes.
#line 1 "ENTRY_10c5de50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10c5de50(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 10c5de80; body size 35 bytes.
#line 1 "ENTRY_10c5de80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5de80(undefined4 *param_2,char *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_allocRep(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5deb0; body size 35 bytes.
#line 1 "ENTRY_10c5deb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5deb0(undefined4 *param_2,char *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_allocRep(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5dee0; body size 35 bytes.
#line 1 "ENTRY_10c5dee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5dee0(undefined4 *param_2,char *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_allocRep(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5df10; body size 35 bytes.
#line 1 "ENTRY_10c5df10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5df10(undefined4 *param_2,char *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_allocRep(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5df40; body size 35 bytes.
#line 1 "ENTRY_10c5df40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5df40(undefined4 *param_2,char *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_allocRep(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5df70; body size 35 bytes.
#line 1 "ENTRY_10c5df70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5df70(undefined4 *param_2,char *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_allocRep(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5dfa0; body size 35 bytes.
#line 1 "ENTRY_10c5dfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5dfa0(undefined4 *param_2,char *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_allocRep(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5dfd0; body size 35 bytes.
#line 1 "ENTRY_10c5dfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5dfd0(undefined4 *param_2,char *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_allocRep(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5e000; body size 37 bytes.
#line 1 "ENTRY_10c5e000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5e000(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_allocRep((char *)*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5e030; body size 40 bytes.
#line 1 "ENTRY_10c5e030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10c5e030(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 10c5e070; body size 25 bytes.
#line 1 "ENTRY_10c5e070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c5e070(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10c5e090; body size 13 bytes.
#line 1 "ENTRY_10c5e090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c5e090(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c5e0a0; body size 13 bytes.
#line 1 "ENTRY_10c5e0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c5e0a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c5e0b0; body size 3 bytes.
#line 1 "ENTRY_10c5e0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c5e0b0(void)

{
  return;
}


// Reference entry 10c5e600; body size 15 bytes.
#line 1 "ENTRY_10c5e600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c5e600(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10c5e6a0; body size 5 bytes.
#line 1 "ENTRY_10c5e6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c5e6a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c5e6b0; body size 31 bytes.
#line 1 "ENTRY_10c5e6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __stdcall FUN_10c5e6b0(int param_1,uint *param_2){
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = (uint)(*param_2), *(int *)(param_1 + 0x10) <= (int)(in_EAX))) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10c5e820; body size 5 bytes.
#line 1 "ENTRY_10c5e820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c5e820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c5e830; body size 5 bytes.
#line 1 "ENTRY_10c5e830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c5e830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c5e840; body size 5 bytes.
#line 1 "ENTRY_10c5e840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c5e840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c5e850; body size 5 bytes.
#line 1 "ENTRY_10c5e850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c5e850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c5e860; body size 25 bytes.
#line 1 "ENTRY_10c5e860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c5e860(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  ((SCStr *)((SCStr *)(param_2 + 1)))->m_op_ctor((SCStr *)(param_3 + 1));
  return;
}


// Reference entry 10c5e880; body size 34 bytes.
#line 1 "ENTRY_10c5e880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c5e880(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  return;
}


// Reference entry 10c5e920; body size 15 bytes.
#line 1 "ENTRY_10c5e920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c5e920(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10c5e940; body size 15 bytes.
#line 1 "ENTRY_10c5e940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c5e940(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10c5e960; body size 5 bytes.
#line 1 "ENTRY_10c5e960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c5e960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c5e970; body size 5 bytes.
#line 1 "ENTRY_10c5e970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c5e970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c5eac0; body size 18 bytes.
#line 1 "ENTRY_10c5eac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5eac0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5eb20; body size 11 bytes.
#line 1 "ENTRY_10c5eb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5eb20(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5eb30; body size 11 bytes.
#line 1 "ENTRY_10c5eb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5eb30(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5ebc0; body size 11 bytes.
#line 1 "ENTRY_10c5ebc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5ebc0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5ebd0; body size 11 bytes.
#line 1 "ENTRY_10c5ebd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5ebd0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5ebe0; body size 16 bytes.
#line 1 "ENTRY_10c5ebe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c5ebe0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5ec00; body size 3 bytes.
#line 1 "ENTRY_10c5ec00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c5ec00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c5ecb0; body size 52 bytes.
#line 1 "ENTRY_10c5ecb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c5ecb0(undefined4 *param_1)

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


// Reference entry 10c5ed20; body size 24 bytes.
#line 1 "ENTRY_10c5ed20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10c5ed20(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_2);
  return (SCStr *)(param_1);
}


// Reference entry 10c5ed40; body size 38 bytes.
#line 1 "ENTRY_10c5ed40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10c5ed40(SCStr *param_2,undefined4 param_3,undefined4 param_4)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 8) = (undefined4)(param_4);
  return (SCStr *)(param_1);
}


// Reference entry 10c5f810; body size 31 bytes.
#line 1 "ENTRY_10c5f810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10c5f810(SCStr *param_2,undefined4 param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(param_3);
  return (SCStr *)(param_1);
}


// Reference entry 10c5fa60; body size 3 bytes.
#line 1 "ENTRY_10c5fa60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c5fa60(void)

{
  return;
}


// Reference entry 10c5fac0; body size 14 bytes.
#line 1 "ENTRY_10c5fac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c5fac0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10c5fae0; body size 14 bytes.
#line 1 "ENTRY_10c5fae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c5fae0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10c5fb00; body size 14 bytes.
#line 1 "ENTRY_10c5fb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c5fb00(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10c5fb20; body size 14 bytes.
#line 1 "ENTRY_10c5fb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c5fb20(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10c5fb40; body size 12 bytes.
#line 1 "ENTRY_10c5fb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c5fb40(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*(char *)(*param_1 + 0xd) == '\0')));
}


// Reference entry 10c5fc60; body size 3 bytes.
#line 1 "ENTRY_10c5fc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c5fc60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c5fc90; body size 6 bytes.
#line 1 "ENTRY_10c5fc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c5fc90(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10c5fca0; body size 6 bytes.
#line 1 "ENTRY_10c5fca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c5fca0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10c5fcb0; body size 6 bytes.
#line 1 "ENTRY_10c5fcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c5fcb0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10c5fcc0; body size 6 bytes.
#line 1 "ENTRY_10c5fcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c5fcc0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10c5fcd0; body size 6 bytes.
#line 1 "ENTRY_10c5fcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c5fcd0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10c5fce0; body size 6 bytes.
#line 1 "ENTRY_10c5fce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c5fce0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10c5fcf0; body size 6 bytes.
#line 1 "ENTRY_10c5fcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c5fcf0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10c5fd00; body size 6 bytes.
#line 1 "ENTRY_10c5fd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c5fd00(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10c5fe30; body size 31 bytes.
#line 1 "ENTRY_10c5fe30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c5fe30(undefined4 *param_1)

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


// Reference entry 10c5fe80; body size 14 bytes.
#line 1 "ENTRY_10c5fe80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c5fe80(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10c5fea0; body size 3 bytes.
#line 1 "ENTRY_10c5fea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c5fea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c5feb0; body size 3 bytes.
#line 1 "ENTRY_10c5feb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c5feb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c5fec0; body size 3 bytes.
#line 1 "ENTRY_10c5fec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c5fec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c5fed0; body size 3 bytes.
#line 1 "ENTRY_10c5fed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c5fed0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c5fee0; body size 3 bytes.
#line 1 "ENTRY_10c5fee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c5fee0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c5fef0; body size 3 bytes.
#line 1 "ENTRY_10c5fef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c5fef0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c5ff00; body size 3 bytes.
#line 1 "ENTRY_10c5ff00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c5ff00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c5ff10; body size 3 bytes.
#line 1 "ENTRY_10c5ff10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c5ff10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c601b0; body size 79 bytes.
#line 1 "ENTRY_10c601b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c601b0(int param_2)
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


// Reference entry 10c60220; body size 30 bytes.
#line 1 "ENTRY_10c60220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c60220(int param_1)

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


// Reference entry 10c60250; body size 31 bytes.
#line 1 "ENTRY_10c60250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10c60250(int *param_1)

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


// Reference entry 10c60280; body size 3 bytes.
#line 1 "ENTRY_10c60280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c60280(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10c60290; body size 11 bytes.
#line 1 "ENTRY_10c60290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c60290(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10c602a0; body size 83 bytes.
#line 1 "ENTRY_10c602a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c602a0(int *param_2)
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


// Reference entry 10c60310; body size 13 bytes.
#line 1 "ENTRY_10c60310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c60310(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10c60320; body size 10 bytes.
#line 1 "ENTRY_10c60320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c60320(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return;
}


// Reference entry 10c60330; body size 90 bytes.
#line 1 "ENTRY_10c60330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c60330(uint param_1)

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


// Reference entry 10c603b0; body size 20 bytes.
#line 1 "ENTRY_10c603b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c603b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1145eab0(param_1,param_2,param_3);
  return;
}


// Reference entry 10c603d0; body size 20 bytes.
#line 1 "ENTRY_10c603d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c603d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1145f2e0(param_1,param_2,param_3);
  return;
}


// Reference entry 10c61270; body size 57 bytes.
#line 1 "ENTRY_10c61270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c61270(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10c612c0; body size 60 bytes.
#line 1 "ENTRY_10c612c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c612c0(int param_1,int param_2)

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


// Reference entry 10c61310; body size 28 bytes.
#line 1 "ENTRY_10c61310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c61310(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1145e290(param_1,param_2,param_3,param_4,param_5);
  return;
}


// Reference entry 10c614d0; body size 8 bytes.
#line 1 "ENTRY_10c614d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c614d0(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 10c61670; body size 11 bytes.
#line 1 "ENTRY_10c61670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c61670(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10c61680; body size 11 bytes.
#line 1 "ENTRY_10c61680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c61680(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10c619d0; body size 17 bytes.
#line 1 "ENTRY_10c619d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * FUN_10c619d0(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_1 != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)((undefined1 *)*param_1);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10c619f0; body size 17 bytes.
#line 1 "ENTRY_10c619f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * FUN_10c619f0(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_1 != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)((undefined1 *)*param_1);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10c620f0; body size 4 bytes.
#line 1 "ENTRY_10c620f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c620f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c62320; body size 4 bytes.
#line 1 "ENTRY_10c62320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c62320(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10c62840; body size 43 bytes.
#line 1 "ENTRY_10c62840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c62840(char *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)((undefined1 *)*param_2);
  }
  ((SCStr *)(param_1))->stringWithFormat(&UNK_11918fb0,puVar1,param_3);
  return (char *)(param_1);
}


// Reference entry 10c62f80; body size 17 bytes.
#line 1 "ENTRY_10c62f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c62f80(undefined4 *param_1)

{
  char *pcVar1;
  uint3 uVar2;
  
  pcVar1 = (char *)((char *)*param_1);
  uVar2 = (uint3)((uint3)((uint)pcVar1 >> 8));
  if (((char *)(pcVar1) != (char *)(0x0)) && (*pcVar1 != (char)(('\0')))) {
    return (int)((uint)uVar2 << 8);
  }
  return (int)(((uint)(uVar2) << 8 | (uint)(1)));
}


// Reference entry 10c62fa0; body size 8 bytes.
#line 1 "ENTRY_10c62fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c62fa0(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) != 0);
}


// Reference entry 10c62fb0; body size 8 bytes.
#line 1 "ENTRY_10c62fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c62fb0(int param_1)

{
  return (bool)(*(int *)(param_1 + 8) != 6);
}


// Reference entry 10c62fc0; body size 6 bytes.
#line 1 "ENTRY_10c62fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c62fc0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10c62fd0; body size 6 bytes.
#line 1 "ENTRY_10c62fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c62fd0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10c62fe0; body size 5 bytes.
#line 1 "ENTRY_10c62fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c62fe0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c62ff0; body size 8 bytes.
#line 1 "ENTRY_10c62ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c62ff0(undefined4 param_1)

{
  thunk_FUN_1145e270(param_1);
  return;
}


// Reference entry 10c647d0; body size 4 bytes.
#line 1 "ENTRY_10c647d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c647d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c647e0; body size 6 bytes.
#line 1 "ENTRY_10c647e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c647e0(void)

{
  return (undefined4)(3);
}


// Reference entry 10c64ef0; body size 48 bytes.
#line 1 "ENTRY_10c64ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10c64ef0(int param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)
{
  int param_1 = (int )this;
  int iVar1;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    iVar1 = (int)(thunk_FUN_111a2bd0(), 0);
    ((SCVtbl_1_1*)(*(int **)(param_1 + 0x1c)))->v((int)(iVar1 != 0));
  }
  return (undefined4)(0);
}


// Reference entry 10c64f30; body size 5 bytes.
#line 1 "ENTRY_10c64f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10c64f30(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  return (undefined4)(0);
}


// Reference entry 10c656b0; body size 5 bytes.
#line 1 "ENTRY_10c656b0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c656b0(undefined4 *param_1)

{ __asm jmp FUN_10076ea4 }


// Reference entry 10c676e0; body size 22 bytes.
#line 1 "ENTRY_10c676e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10c676e0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10c667b0(param_2,*(undefined4 *)(param_1 + 0x2c));
  return (undefined4)(param_2);
}


// Reference entry 10c67aa0; body size 7 bytes.
#line 1 "ENTRY_10c67aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c67aa0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10c68c40; body size 5 bytes.
#line 1 "ENTRY_10c68c40"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c68c40(undefined4 *param_1)

{ __asm jmp FUN_100679f9 }


// Reference entry 10c68c50; body size 5 bytes.
#line 1 "ENTRY_10c68c50"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c68c50(undefined4 *param_1)

{ __asm jmp FUN_100679f9 }


// Reference entry 10c68c60; body size 5 bytes.
#line 1 "ENTRY_10c68c60"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c68c60(undefined4 *param_1)

{ __asm jmp FUN_100679f9 }


// Reference entry 10c68c70; body size 5 bytes.
#line 1 "ENTRY_10c68c70"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c68c70(undefined4 *param_1)

{ __asm jmp FUN_100679f9 }


// Reference entry 10c68f50; body size 5 bytes.
#line 1 "ENTRY_10c68f50"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c68f50(undefined4 *param_1)

{ __asm jmp FUN_100679f9 }


// Reference entry 10c68f60; body size 5 bytes.
#line 1 "ENTRY_10c68f60"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c68f60(undefined4 *param_1)

{ __asm jmp FUN_100679f9 }


// Reference entry 10c68f70; body size 5 bytes.
#line 1 "ENTRY_10c68f70"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c68f70(undefined4 *param_1)

{ __asm jmp FUN_100679f9 }


// Reference entry 10c68f80; body size 3 bytes.
#line 1 "ENTRY_10c68f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c68f80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c69f10; body size 46 bytes.
#line 1 "ENTRY_10c69f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __stdcall FUN_10c69f10(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(thunk_FUN_103d4520(), 0);
  if (iVar2 == 0) {
    *param_1 = (int)(0);
  }
  else {
    piVar1 = (int *)((int *)(iVar2 + -8));
    *param_1 = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      ((SCVtbl_1_0*)(piVar1))->v();
      return (int *)(param_1);
    }
  }
  return (int *)(param_1);
}


// Reference entry 10c6a150; body size 21 bytes.
#line 1 "ENTRY_10c6a150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c6a150(char param_2)
{
  int *param_1 = (int *)this;
  if (param_2 != '\0') {
    ((SCVtbl_10_0*)(param_1))->v();
    return;
  }
  ((SCVtbl_11_0*)(param_1))->v();
  return;
}


// Reference entry 10c6a170; body size 21 bytes.
#line 1 "ENTRY_10c6a170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c6a170(char param_2)
{
  int *param_1 = (int *)this;
  if (param_2 != '\0') {
    ((SCVtbl_8_0*)(param_1))->v();
    return;
  }
  ((SCVtbl_9_0*)(param_1))->v();
  return;
}


// Reference entry 10c6d1f0; body size 6 bytes.
#line 1 "ENTRY_10c6d1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c6d1f0(void)

{
  return (char *)("SCIWifiListener");
}


// Reference entry 10c6d200; body size 27 bytes.
#line 1 "ENTRY_10c6d200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c6d200(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c6d230; body size 9 bytes.
#line 1 "ENTRY_10c6d230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c6d230(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c6d240; body size 9 bytes.
#line 1 "ENTRY_10c6d240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c6d240(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIWifiListener);
  return (undefined4 *)(param_1);
}


// Reference entry 10c6d4c0; body size 7 bytes.
#line 1 "ENTRY_10c6d4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c6d4c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c6db30; body size 6 bytes.
#line 1 "ENTRY_10c6db30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c6db30(void)

{
  return (char *)("SCIWifiListener");
}


// Reference entry 10c6dd80; body size 7 bytes.
#line 1 "ENTRY_10c6dd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c6dd80(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10c6dd90; body size 7 bytes.
#line 1 "ENTRY_10c6dd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c6dd90(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10c6f730; body size 17 bytes.
#line 1 "ENTRY_10c6f730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c6f730(undefined2 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(1);
  *(undefined2*)(param_1 + 2) = (undefined2)(*param_2);
  return;
}


// Reference entry 10c6f750; body size 15 bytes.
#line 1 "ENTRY_10c6f750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c6f750(undefined4 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(1);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_2);
  return;
}


// Reference entry 10c6f770; body size 15 bytes.
#line 1 "ENTRY_10c6f770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c6f770(undefined4 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(1);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_2);
  return;
}


// Reference entry 10c6f930; body size 7 bytes.
#line 1 "ENTRY_10c6f930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c6f930(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x420));
}


// Reference entry 10c70460; body size 25 bytes.
#line 1 "ENTRY_10c70460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c70460(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c70480; body size 25 bytes.
#line 1 "ENTRY_10c70480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c70480(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c704a0; body size 25 bytes.
#line 1 "ENTRY_10c704a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c704a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c704c0; body size 13 bytes.
#line 1 "ENTRY_10c704c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c704c0(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c704d0; body size 25 bytes.
#line 1 "ENTRY_10c704d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c704d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c704f0; body size 75 bytes.
#line 1 "ENTRY_10c704f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c704f0(void *param_2,int param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *_Dst;
  size_t _Size;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  _Size = (size_t)(param_3 - (int)param_2);
  if (_Size != 0) {
    thunk_FUN_10c78fc0(_Size);
    _Dst = (void *)((void *)*param_1);
    memmove(_Dst,param_2,_Size);
    param_1[1] = (undefined4)((int)_Dst + (param_3 - (int)param_2));
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c70550; body size 75 bytes.
#line 1 "ENTRY_10c70550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c70550(void *param_2,int param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *_Dst;
  size_t _Size;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  _Size = (size_t)(param_3 - (int)param_2);
  if (_Size != 0) {
    thunk_FUN_10c78fc0(_Size);
    _Dst = (void *)((void *)*param_1);
    memmove(_Dst,param_2,_Size);
    param_1[1] = (undefined4)((int)_Dst + (param_3 - (int)param_2));
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c705b0; body size 19 bytes.
#line 1 "ENTRY_10c705b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c705b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c705d0; body size 11 bytes.
#line 1 "ENTRY_10c705d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c705d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c705e0; body size 13 bytes.
#line 1 "ENTRY_10c705e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c705e0(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 10c705f0; body size 47 bytes.
#line 1 "ENTRY_10c705f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::m_FUN_10c705f0(int param_2,int param_3, unsigned int recovered_unused_stack_0)
{
  undefined1 *param_1 = (undefined1 *)this;
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0xf);
  *param_1 = (undefined1)(0);
  if (param_2 != param_3) {
    thunk_FUN_1012d130(param_2,param_3 - param_2);
  }
  return (undefined1 *)(param_1);
}


// Reference entry 10c70630; body size 16 bytes.
#line 1 "ENTRY_10c70630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c70630(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c70650; body size 83 bytes.
#line 1 "ENTRY_10c70650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c70650(void *param_2,int param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *_Dst;
  size_t _Size;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  _Size = (size_t)(param_3 - (int)param_2);
  if (_Size != 0) {
    thunk_FUN_10c78fc0(_Size);
    _Dst = (void *)((void *)*param_1);
    memmove(_Dst,param_2,_Size);
    param_1[1] = (undefined4)((int)_Dst + (param_3 - (int)param_2));
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c706c0; body size 25 bytes.
#line 1 "ENTRY_10c706c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c706c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c706e0; body size 25 bytes.
#line 1 "ENTRY_10c706e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c706e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c70700; body size 83 bytes.
#line 1 "ENTRY_10c70700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c70700(int *param_2)
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


// Reference entry 10c70990; body size 3 bytes.
#line 1 "ENTRY_10c70990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c70990(void)

{
  return;
}


// Reference entry 10c709a0; body size 3 bytes.
#line 1 "ENTRY_10c709a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c709a0(void)

{
  return;
}


// Reference entry 10c709b0; body size 203 bytes.
#line 1 "ENTRY_10c709b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c709b0(void *param_2,int param_3, unsigned int recovered_unused_stack_0)
{
  int *param_1 = (int *)this;
  void *_Dst;
  uint uVar1;
  uint uVar2;
  size_t _Size;
  uint uVar3;
  void *pvVar4;
  
  _Size = (size_t)(param_3 - (int)param_2);
  uVar2 = (uint)((int)_Size >> 2);
  _Dst = (void *)((void *)*param_1);
  uVar1 = (uint)(param_1[2] - (int)_Dst >> 2);
  if (uVar1 < uVar2) {
    if (0x3fffffff < uVar2) {
                    
      thunk_FUN_101a9be0();
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
    _Dst = (void *)((void *)thunk_FUN_101a9c80(uVar3), 0);
    *param_1 = (int)((int)_Dst);
    param_1[1] = (int)((int)_Dst);
    param_1[2] = (int)((int)((int)_Dst + uVar3 * 4));
  }
  memmove(_Dst,param_2,_Size);
  param_1[1] = (int)(_Size + (int)_Dst);
  return;
}


// Reference entry 10c70ab0; body size 203 bytes.
#line 1 "ENTRY_10c70ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c70ab0(void *param_2,int param_3, unsigned int recovered_unused_stack_0)
{
  int *param_1 = (int *)this;
  void *_Dst;
  uint uVar1;
  uint uVar2;
  size_t _Size;
  uint uVar3;
  void *pvVar4;
  
  _Size = (size_t)(param_3 - (int)param_2);
  uVar2 = (uint)((int)_Size >> 3);
  _Dst = (void *)((void *)*param_1);
  uVar1 = (uint)(param_1[2] - (int)_Dst >> 3);
  if (uVar1 < uVar2) {
    if (0x1fffffff < uVar2) {
                    
      thunk_FUN_10c7dc20();
    }
    if (0x1fffffff - (uVar1 >> 1) < uVar1) {
      uVar3 = (uint)(0x1fffffff);
    }
    else {
      uVar3 = (uint)((uVar1 >> 1) + uVar1);
      if (uVar3 < uVar2) {
        uVar3 = (uint)(uVar2);
      }
    }
    if ((void *)(_Dst) != (void *)(0x0)) {
      uVar1 = (uint)(uVar1 * 8);
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
    _Dst = (void *)((void *)thunk_FUN_10c7dc90(uVar3), 0);
    *param_1 = (int)((int)_Dst);
    param_1[1] = (int)((int)_Dst);
    param_1[2] = (int)((int)((int)_Dst + uVar3 * 8));
  }
  memmove(_Dst,param_2,_Size);
  param_1[1] = (int)(_Size + (int)_Dst);
  return;
}


// Reference entry 10c70bb0; body size 117 bytes.
#line 1 "ENTRY_10c70bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c70bb0(undefined4 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                 undefined1 *param_5)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  
  puVar2 = (undefined1 *)(param_2);
  do {
    if ((undefined1 *)(puVar2) == (undefined1 *)(param_3)) {
      bVar5 = (bool)((undefined1 *)(param_4) == (undefined1 *)(param_5));
LAB_10c70c14:
      if (bVar5) {
        param_2 = (undefined1 *)(puVar2);
      }
      break;
    }
    bVar5 = (bool)(true);
    if ((undefined1 *)(param_4) == (undefined1 *)(param_5)) goto LAB_10c70c14;
    uVar1 = (undefined1)(*puVar2);
    cVar3 = (char)(thunk_FUN_10c80150((int)(*param_4)), 0);
    cVar4 = (char)(thunk_FUN_10c80150((int)(uVar1)), 0);
    param_4 = (undefined1 *)(param_4 + 1);
    puVar2 = (undefined1 *)(puVar2 + 1);
  } while (cVar4 == cVar3);
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10c70c50; body size 74 bytes.
#line 1 "ENTRY_10c70c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c70c50(undefined4 *param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = (char *)(param_2);
  do {
    if ((char *)(pcVar3) == (char *)(param_3)) {
      bVar4 = (bool)((char *)(param_4) == (char *)(param_5));
LAB_10c70c8c:
      if (bVar4) {
        param_2 = (char *)(pcVar3);
      }
      break;
    }
    bVar4 = (bool)(true);
    if ((char *)(param_4) == (char *)(param_5)) goto LAB_10c70c8c;
    cVar1 = (char)(*param_4);
    param_4 = (char *)(param_4 + 1);
    cVar2 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar2 == cVar1);
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10c70cb0; body size 121 bytes.
#line 1 "ENTRY_10c70cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c70cb0(undefined4 *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                 int param_6)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  
  pcVar1 = (char *)(param_2);
  do {
    if ((char *)(pcVar1) == (char *)(param_3)) {
      bVar4 = (bool)((char *)(param_4) == (char *)(param_5));
LAB_10c70d18:
      if (bVar4) {
        param_2 = (char *)(pcVar1);
      }
      break;
    }
    bVar4 = (bool)(true);
    if ((char *)(param_4) == (char *)(param_5)) goto LAB_10c70d18;
    cVar3 = (char)(*param_4);
    cVar2 = (char)(((std::ctype<> *)(*(ctype<char> **)(param_6 + 4)))->tolower(*pcVar1), 0);
    cVar3 = (char)(((std::ctype<> *)(*(ctype<char> **)(param_6 + 4)))->tolower(cVar3), 0);
    param_4 = (char *)(param_4 + 1);
    pcVar1 = (char *)(pcVar1 + 1);
  } while (cVar2 == cVar3);
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10c70d50; body size 118 bytes.
#line 1 "ENTRY_10c70d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c70d50(undefined4 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                 undefined1 *param_5)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  
  puVar2 = (undefined1 *)(param_2);
  do {
    if ((undefined1 *)(puVar2) == (undefined1 *)(param_3)) {
      bVar5 = (bool)((undefined1 *)(param_4) == (undefined1 *)(param_5));
LAB_10c70db7:
      if (bVar5) {
        param_2 = (undefined1 *)(puVar2);
      }
      break;
    }
    bVar5 = (bool)(true);
    if ((undefined1 *)(param_4) == (undefined1 *)(param_5)) goto LAB_10c70db7;
    uVar1 = (undefined1)(*param_4);
    cVar3 = (char)(thunk_FUN_10c80150((int)(*puVar2)), 0);
    cVar4 = (char)(thunk_FUN_10c80150((int)(uVar1)), 0);
    puVar2 = (undefined1 *)(puVar2 + 1);
    param_4 = (undefined1 *)(param_4 + 1);
  } while (cVar3 == cVar4);
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10c70df0; body size 76 bytes.
#line 1 "ENTRY_10c70df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c70df0(undefined4 *param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = (char *)(param_2);
  do {
    if ((char *)(pcVar3) == (char *)(param_3)) {
      bVar4 = (bool)((char *)(param_4) == (char *)(param_5));
LAB_10c70e30:
      if (bVar4) {
        param_2 = (char *)(pcVar3);
      }
      break;
    }
    bVar4 = (bool)(true);
    if ((char *)(param_4) == (char *)(param_5)) goto LAB_10c70e30;
    cVar1 = (char)(*pcVar3);
    cVar2 = (char)(*param_4);
    pcVar3 = (char *)(pcVar3 + 1);
    param_4 = (char *)(param_4 + 1);
  } while (cVar1 == cVar2);
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10c70e50; body size 124 bytes.
#line 1 "ENTRY_10c70e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c70e50(undefined4 *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                 int param_6)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  
  pcVar1 = (char *)(param_2);
  do {
    if ((char *)(pcVar1) == (char *)(param_3)) {
      bVar4 = (bool)((char *)(param_4) == (char *)(param_5));
LAB_10c70ebc:
      if (bVar4) {
        param_2 = (char *)(pcVar1);
      }
      break;
    }
    bVar4 = (bool)(true);
    if ((char *)(param_4) == (char *)(param_5)) goto LAB_10c70ebc;
    cVar3 = (char)(*param_4);
    cVar2 = (char)(((std::ctype<> *)(*(ctype<char> **)(param_6 + 4)))->tolower(*pcVar1), 0);
    cVar3 = (char)(((std::ctype<> *)(*(ctype<char> **)(param_6 + 4)))->tolower(cVar3), 0);
    pcVar1 = (char *)(pcVar1 + 1);
    param_4 = (char *)(param_4 + 1);
  } while (cVar2 == cVar3);
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10c71290; body size 33 bytes.
#line 1 "ENTRY_10c71290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c71290(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10c712c0; body size 33 bytes.
#line 1 "ENTRY_10c712c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c712c0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10c712f0; body size 33 bytes.
#line 1 "ENTRY_10c712f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c712f0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10c71320; body size 33 bytes.
#line 1 "ENTRY_10c71320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c71320(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10c71350; body size 3 bytes.
#line 1 "ENTRY_10c71350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c71350(void)

{
  return;
}


// Reference entry 10c71360; body size 3 bytes.
#line 1 "ENTRY_10c71360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c71360(void)

{
  return;
}


// Reference entry 10c71370; body size 3 bytes.
#line 1 "ENTRY_10c71370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c71370(void)

{
  return;
}


// Reference entry 10c71380; body size 3 bytes.
#line 1 "ENTRY_10c71380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c71380(void)

{
  return;
}


// Reference entry 10c71390; body size 21 bytes.
#line 1 "ENTRY_10c71390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c71390(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(0);
  puVar1[1] = (undefined4)(0);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10c713b0; body size 15 bytes.
#line 1 "ENTRY_10c713b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c713b0(int param_1)

{
  **(undefined8**)(param_1 + 4) = (undefined8)(0);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10c713d0; body size 25 bytes.
#line 1 "ENTRY_10c713d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c713d0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(0);
  puVar1[1] = (undefined4)(0);
  *(undefined1*)(puVar1 + 2) = (undefined1)(0);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0xc);
  return;
}


// Reference entry 10c713f0; body size 26 bytes.
#line 1 "ENTRY_10c713f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c713f0(undefined4 *param_2)
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


// Reference entry 10c71410; body size 26 bytes.
#line 1 "ENTRY_10c71410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c71410(undefined4 *param_2)
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


// Reference entry 10c71430; body size 28 bytes.
#line 1 "ENTRY_10c71430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c71430(undefined8 *param_2)
{
  int param_1 = (int )this;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(undefined8 **)(param_1 + 4), 0);
  *puVar1 = (undefined8)(*param_2);
  *(undefined4*)(puVar1 + 1) = (undefined4)(*(undefined4 *)(param_2 + 1));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0xc);
  return;
}


// Reference entry 10c71460; body size 33 bytes.
#line 1 "ENTRY_10c71460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10c71460(byte param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(1 << (param_2 & 7));
  return (undefined4)(((uint)((int3)((uint)iVar1 >> 8)) << 8 | (uint)((*(byte *)((uint)(param_2 >> 3) + param_1) & (byte)iVar1) != 0)));
}


// Reference entry 10c71490; body size 52 bytes.
#line 1 "ENTRY_10c71490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c71490(void *param_1,void *param_2,byte *param_3)

{
  void *pvVar1;
  
  if ((byte)(0x7f) < *param_3) {
    return (void *)(param_2);
  }
  pvVar1 = (void *)(memchr(param_1,(uint)*param_3,(int)param_2 - (int)param_1), 0);
  if ((void *)(pvVar1) != (void *)(0x0)) {
    param_2 = (void *)(pvVar1);
  }
  return (void *)(param_2);
}


// Reference entry 10c714e0; body size 33 bytes.
#line 1 "ENTRY_10c714e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c714e0(char *param_1,char *param_2,int *param_3)

{
  if ((char *)(param_1) != (char *)(param_2)) {
    do {
      if ((int)*param_1 == (char)(*(param_3))) {
        return;
      }
      param_1 = (char *)(param_1 + 1);
    } while ((char *)(param_1) != (char *)(param_2));
  }
  return;
}


// Reference entry 10c71510; body size 52 bytes.
#line 1 "ENTRY_10c71510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c71510(void *param_1,void *param_2,byte *param_3)

{
  void *pvVar1;
  
  if ((byte)(0x7f) < *param_3) {
    return (void *)(param_2);
  }
  pvVar1 = (void *)(memchr(param_1,(uint)*param_3,(int)param_2 - (int)param_1), 0);
  if ((void *)(pvVar1) != (void *)(0x0)) {
    param_2 = (void *)(pvVar1);
  }
  return (void *)(param_2);
}


// Reference entry 10c71560; body size 33 bytes.
#line 1 "ENTRY_10c71560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c71560(char *param_1,char *param_2,int *param_3)

{
  if ((char *)(param_1) != (char *)(param_2)) {
    do {
      if ((int)*param_1 == (char)(*(param_3))) {
        return;
      }
      param_1 = (char *)(param_1 + 1);
    } while ((char *)(param_1) != (char *)(param_2));
  }
  return;
}


// Reference entry 10c71590; body size 3 bytes.
#line 1 "ENTRY_10c71590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c71590(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c715a0; body size 7 bytes.
#line 1 "ENTRY_10c715a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c715a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c715b0; body size 7 bytes.
#line 1 "ENTRY_10c715b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c715b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c715c0; body size 7 bytes.
#line 1 "ENTRY_10c715c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c715c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c715d0; body size 7 bytes.
#line 1 "ENTRY_10c715d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c715d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c715e0; body size 7 bytes.
#line 1 "ENTRY_10c715e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c715e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c715f0; body size 7 bytes.
#line 1 "ENTRY_10c715f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c715f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c71600; body size 7 bytes.
#line 1 "ENTRY_10c71600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c71600(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c71610; body size 7 bytes.
#line 1 "ENTRY_10c71610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c71610(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c71620; body size 7 bytes.
#line 1 "ENTRY_10c71620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c71620(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c71630; body size 13 bytes.
#line 1 "ENTRY_10c71630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c71630(int *param_1,int *param_2)

{
  return (int)(*param_2 - *param_1);
}


// Reference entry 10c71640; body size 92 bytes.
#line 1 "ENTRY_10c71640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c71640(undefined1 *param_2,undefined1 *param_3)
{
  size_t *param_1 = (size_t *)this;
  undefined1 uVar1;
  size_t sVar2;
  void *pvVar3;
  
  if ((undefined1 *)(param_2) != (undefined1 *)(param_3)) {
    sVar2 = (size_t)(param_1[1]);
    do {
      uVar1 = (undefined1)(*param_2);
      if (*param_1 <= (size_t)((sVar2))) {
        pvVar3 = (void *)(realloc((void *)param_1[2],sVar2 + 0x10), 0);
        if ((void *)(pvVar3) == (void *)(0x0)) {
                    
          std::_Xbad_alloc();
        }
        param_1[2] = (size_t)((size_t)pvVar3);
        *param_1 = (size_t)(sVar2 + 0x10);
      }
      param_2 = (undefined1 *)(param_2 + 1);
      *(undefined1*)(param_1[2] + param_1[1]) = (undefined1)(uVar1);
      param_1[1] = (size_t)(param_1[1] + 1);
      sVar2 = (size_t)(param_1[1]);
    } while ((undefined1 *)(param_2) != (undefined1 *)(param_3));
  }
  return;
}


// Reference entry 10c716c0; body size 5 bytes.
#line 1 "ENTRY_10c716c0"

__declspec(naked) int FUN_10c716c0(...){ __asm jmp FUN_1148a279 }


// Reference entry 10c716d0; body size 5 bytes.
#line 1 "ENTRY_10c716d0"

__declspec(naked) int FUN_10c716d0(...){ __asm jmp FUN_1148a27f }


// Reference entry 10c71f00; body size 26 bytes.
#line 1 "ENTRY_10c71f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c71f00(byte param_2)
{
  int param_1 = (int )this;
  byte *pbVar1;
  
  pbVar1 = (byte *)((byte *)(param_1 + (uint)(param_2 >> 3)));
  *pbVar1 = (byte)(*pbVar1 | (byte)(1 << (param_2 & 7)));
  return;
}


// Reference entry 10c71f20; body size 25 bytes.
#line 1 "ENTRY_10c71f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c71f20(uint param_2)
{
  int param_1 = (int )this;
  byte *pbVar1;
  
  pbVar1 = (byte *)((byte *)(param_1 + (param_2 >> 3)));
  *pbVar1 = (byte)(*pbVar1 | (byte)(1 << (param_2 & 7)));
  return;
}


// Reference entry 10c72120; body size 23 bytes.
#line 1 "ENTRY_10c72120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c72120(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x54) = (undefined4)(param_2);
  thunk_FUN_10c71f40((int)(param_3),(int)(param_4));
  return;
}


// Reference entry 10c72140; body size 11 bytes.
#line 1 "ENTRY_10c72140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c72140(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10c72150; body size 3 bytes.
#line 1 "ENTRY_10c72150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c72150(void)

{
  return;
}


// Reference entry 10c72160; body size 3 bytes.
#line 1 "ENTRY_10c72160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c72160(void)

{
  return;
}


// Reference entry 10c72170; body size 14 bytes.
#line 1 "ENTRY_10c72170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10c72170(int *param_1,int param_2)

{
  *param_1 = (int)(param_2 + -1);
  return (int *)(param_1);
}


// Reference entry 10c72190; body size 49 bytes.
#line 1 "ENTRY_10c72190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c72190(void *param_2,int param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *_Dst;
  size_t _Size;
  
  _Size = (size_t)(param_3 - (int)param_2);
  if (_Size != 0) {
    thunk_FUN_10c78fc0(_Size);
    _Dst = (void *)((void *)*param_1);
    memmove(_Dst,param_2,_Size);
    param_1[1] = (undefined4)(_Size + (int)_Dst);
  }
  return;
}


// Reference entry 10c721d0; body size 49 bytes.
#line 1 "ENTRY_10c721d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c721d0(void *param_2,int param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *_Dst;
  size_t _Size;
  
  _Size = (size_t)(param_3 - (int)param_2);
  if (_Size != 0) {
    thunk_FUN_10c78fc0(_Size);
    _Dst = (void *)((void *)*param_1);
    memmove(_Dst,param_2,_Size);
    param_1[1] = (undefined4)(_Size + (int)_Dst);
  }
  return;
}


// Reference entry 10c72210; body size 277 bytes.
#line 1 "ENTRY_10c72210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c72210(uint param_2,undefined4 param_3,size_t param_4,char param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  size_t _Size;
  uint uVar1;
  void *_Src;
  uint uVar2;
  void *_Dst;
  undefined1 *puVar3;
  uint uVar4;
  void *pvVar5;
  
  _Size = (size_t)(param_1[4]);
  if (0x7fffffff - _Size < param_2) {
                    
    thunk_FUN_1012a4c0();
  }
  uVar1 = (uint)(param_1[5]);
  uVar4 = (uint)(param_2 + _Size | 0xf);
  if (uVar4 < 0x80000000) {
    if (0x7fffffff - (uVar1 >> 1) < uVar1) {
      uVar4 = (uint)(0x7fffffff);
    }
    else {
      uVar2 = (uint)(uVar1 + (uVar1 >> 1));
      if (uVar4 < uVar2) {
        uVar4 = (uint)(uVar2);
      }
    }
  }
  else {
    uVar4 = (uint)(0x7fffffff);
  }
  _Dst = (char *)((char *)thunk_FUN_1012cab0<>(uVar4 + 1), 0);
  param_1[5] = (undefined4)(uVar4);
  param_1[4] = (undefined4)(param_2 + _Size);
  puVar3 = (undefined1 *)((undefined1 *)(param_4 + (int)(_Size + (int)_Dst)));
  if (uVar1 < 0x10) {
    memcpy(_Dst,param_1,_Size);
    memset((char *)(_Size + (int)_Dst),(int)param_5,param_4);
    *puVar3 = (undefined1)(0);
    *param_1 = (undefined4)(_Dst);
    return (undefined4 *)(param_1);
  }
  _Src = (void *)((void *)*param_1);
  memcpy(_Dst,_Src,_Size);
  memset((char *)(_Size + (int)_Dst),(int)param_5,param_4);
  uVar4 = (uint)(uVar1 + 1);
  *puVar3 = (undefined1)(0);
  pvVar5 = (void *)(_Src);
  if (0xfff < uVar4) {
    pvVar5 = (char *)(*(void **)((int)_Src + -4), 0);
    uVar4 = (uint)(uVar1 + 0x24);
    if (0x1f < (uint)((int)_Src + (-4 - (int)pvVar5))) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(pvVar5,uVar4);
  *param_1 = (undefined4)(_Dst);
  return (undefined4 *)(param_1);
}


// Reference entry 10c72370; body size 5 bytes.
#line 1 "ENTRY_10c72370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c72370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c72380; body size 5 bytes.
#line 1 "ENTRY_10c72380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c72380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c72980; body size 104 bytes.
#line 1 "ENTRY_10c72980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c72980(uint param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  void *_Dst;
  int iVar2;
  
  _Dst = (void *)((void *)param_1[1]);
  iVar2 = (int)(*param_1);
  uVar1 = (uint)((int)_Dst - iVar2 >> 3);
  if (param_2 < uVar1) {
    param_1[1] = (int)(iVar2 + param_2 * 8);
    return;
  }
  if (uVar1 < param_2) {
    if ((uint)(param_1[2] - iVar2 >> 3) < param_2) {
      thunk_FUN_10c72bf0<>(param_2,param_3);
      return;
    }
    iVar2 = (int)(param_2 - uVar1);
    if (iVar2 != 0) {
      memset(_Dst,0,iVar2 * 8);
      _Dst = (char *)((char *)((int)_Dst + iVar2 * 8));
    }
    param_1[1] = (int)((int)_Dst);
  }
  return;
}


// Reference entry 10c72f60; body size 13 bytes.
#line 1 "ENTRY_10c72f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c72f60(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c72f70; body size 13 bytes.
#line 1 "ENTRY_10c72f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c72f70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c72f80; body size 19 bytes.
#line 1 "ENTRY_10c72f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c72f80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10c72fa0; body size 35 bytes.
#line 1 "ENTRY_10c72fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_10c72fa0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10c72fd0; body size 38 bytes.
#line 1 "ENTRY_10c72fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10c72fd0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10c73000; body size 43 bytes.
#line 1 "ENTRY_10c73000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c73000(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 2) {
    uVar1 = (undefined4)(param_1[1]);
    *param_3 = (undefined4)(*param_1);
    param_3[1] = (undefined4)(uVar1);
    param_3 = (undefined4 *)(param_3 + 2);
  }
  return;
}


// Reference entry 10c73040; body size 35 bytes.
#line 1 "ENTRY_10c73040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_10c73040(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10c73070; body size 5 bytes.
#line 1 "ENTRY_10c73070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c73070(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c73080; body size 5 bytes.
#line 1 "ENTRY_10c73080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c73080(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c73090; body size 5 bytes.
#line 1 "ENTRY_10c73090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c73090(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c730a0; body size 5 bytes.
#line 1 "ENTRY_10c730a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c730a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c730b0; body size 33 bytes.
#line 1 "ENTRY_10c730b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c730b0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10c730e0; body size 36 bytes.
#line 1 "ENTRY_10c730e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c730e0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10c73110; body size 41 bytes.
#line 1 "ENTRY_10c73110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c73110(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 2) {
    uVar1 = (undefined4)(param_1[1]);
    *param_3 = (undefined4)(*param_1);
    param_3[1] = (undefined4)(uVar1);
    param_3 = (undefined4 *)(param_3 + 2);
  }
  return;
}


// Reference entry 10c73150; body size 33 bytes.
#line 1 "ENTRY_10c73150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c73150(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10c73180; body size 41 bytes.
#line 1 "ENTRY_10c73180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c73180(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 2) {
    uVar1 = (undefined4)(param_1[1]);
    *param_3 = (undefined4)(*param_1);
    param_3[1] = (undefined4)(uVar1);
    param_3 = (undefined4 *)(param_3 + 2);
  }
  return;
}


// Reference entry 10c731c0; body size 36 bytes.
#line 1 "ENTRY_10c731c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c731c0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 3) * 8));
}


// Reference entry 10c731f0; body size 43 bytes.
#line 1 "ENTRY_10c731f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c731f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (;(undefined8 *)( param_1) != (undefined8 *)(param_2); param_1 = (undefined8 *)((int)param_1 + 0xc)) {
    *param_3 = (undefined8)(*param_1);
    *(undefined4*)(param_3 + 1) = (undefined4)(*(undefined4 *)(param_1 + 1));
    param_3 = (undefined8 *)((undefined8 *)((int)param_3 + 0xc));
  }
  return;
}


// Reference entry 10c73230; body size 38 bytes.
#line 1 "ENTRY_10c73230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  FUN_10c73230(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    param_1 = (undefined4 *)(param_1 + 2);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c73260; body size 44 bytes.
#line 1 "ENTRY_10c73260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c73260(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,param_2 * 8);
    return (void *)((char *)((int)param_1 + param_2 * 8));
  }
  return (void *)(param_1);
}


// Reference entry 10c732a0; body size 42 bytes.
#line 1 "ENTRY_10c732a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c732a0(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    *(undefined1*)(param_1 + 2) = (undefined1)(0);
    param_1 = (undefined4 *)(param_1 + 3);
  }
  return;
}


// Reference entry 10c732e0; body size 11 bytes.
#line 1 "ENTRY_10c732e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10c732e0(byte *param_1)

{
  return (bool)(*param_1 < (byte)((0x80)));
}


// Reference entry 10c732f0; body size 11 bytes.
#line 1 "ENTRY_10c732f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10c732f0(undefined4 param_1,byte *param_2)

{
  return (bool)(*param_2 < (byte)((0x80)));
}


// Reference entry 10c73300; body size 5 bytes.
#line 1 "ENTRY_10c73300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c73300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c73310; body size 5 bytes.
#line 1 "ENTRY_10c73310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c73310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c73320; body size 5 bytes.
#line 1 "ENTRY_10c73320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c73320(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c73330; body size 5 bytes.
#line 1 "ENTRY_10c73330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c73330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c73340; body size 5 bytes.
#line 1 "ENTRY_10c73340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c73340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c73350; body size 5 bytes.
#line 1 "ENTRY_10c73350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c73350(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c73360; body size 5 bytes.
#line 1 "ENTRY_10c73360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c73360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c73370; body size 5 bytes.
#line 1 "ENTRY_10c73370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c73370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c73380; body size 5 bytes.
#line 1 "ENTRY_10c73380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c73380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c733c0; body size 203 bytes.
#line 1 "ENTRY_10c733c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c733c0(void *param_2,int param_3)
{
  int *param_1 = (int *)this;
  void *_Dst;
  uint uVar1;
  uint uVar2;
  size_t _Size;
  uint uVar3;
  void *pvVar4;
  
  _Size = (size_t)(param_3 - (int)param_2);
  uVar2 = (uint)((int)_Size >> 2);
  _Dst = (void *)((void *)*param_1);
  uVar1 = (uint)(param_1[2] - (int)_Dst >> 2);
  if (uVar1 < uVar2) {
    if (0x3fffffff < uVar2) {
                    
      thunk_FUN_101a9be0();
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
    _Dst = (void *)((void *)thunk_FUN_101a9c80(uVar3), 0);
    *param_1 = (int)((int)_Dst);
    param_1[1] = (int)((int)_Dst);
    param_1[2] = (int)((int)((int)_Dst + uVar3 * 4));
  }
  memmove(_Dst,param_2,_Size);
  param_1[1] = (int)(_Size + (int)_Dst);
  return;
}


// Reference entry 10c734c0; body size 203 bytes.
#line 1 "ENTRY_10c734c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c734c0(void *param_2,int param_3)
{
  int *param_1 = (int *)this;
  void *_Dst;
  uint uVar1;
  uint uVar2;
  size_t _Size;
  uint uVar3;
  void *pvVar4;
  
  _Size = (size_t)(param_3 - (int)param_2);
  uVar2 = (uint)((int)_Size >> 3);
  _Dst = (void *)((void *)*param_1);
  uVar1 = (uint)(param_1[2] - (int)_Dst >> 3);
  if (uVar1 < uVar2) {
    if (0x1fffffff < uVar2) {
                    
      thunk_FUN_10c7dc20();
    }
    if (0x1fffffff - (uVar1 >> 1) < uVar1) {
      uVar3 = (uint)(0x1fffffff);
    }
    else {
      uVar3 = (uint)((uVar1 >> 1) + uVar1);
      if (uVar3 < uVar2) {
        uVar3 = (uint)(uVar2);
      }
    }
    if ((void *)(_Dst) != (void *)(0x0)) {
      uVar1 = (uint)(uVar1 * 8);
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
    _Dst = (void *)((void *)thunk_FUN_10c7dc90(uVar3), 0);
    *param_1 = (int)((int)_Dst);
    param_1[1] = (int)((int)_Dst);
    param_1[2] = (int)((int)((int)_Dst + uVar3 * 8));
  }
  memmove(_Dst,param_2,_Size);
  param_1[1] = (int)(_Size + (int)_Dst);
  return;
}


// Reference entry 10c735c0; body size 18 bytes.
#line 1 "ENTRY_10c735c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c735c0(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 10c735e0; body size 19 bytes.
#line 1 "ENTRY_10c735e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c735e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_3[1]);
  *param_2 = (undefined4)(*param_3);
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 10c73600; body size 19 bytes.
#line 1 "ENTRY_10c73600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c73600(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_3[1]);
  *param_2 = (undefined4)(*param_3);
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 10c73620; body size 12 bytes.
#line 1 "ENTRY_10c73620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c73620(undefined4 param_1,undefined8 *param_2)

{
  *param_2 = (undefined8)(0);
  return;
}


// Reference entry 10c73630; body size 22 bytes.
#line 1 "ENTRY_10c73630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c73630(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  *(undefined1*)(param_2 + 2) = (undefined1)(0);
  return;
}


// Reference entry 10c73650; body size 23 bytes.
#line 1 "ENTRY_10c73650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c73650(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_2 = (undefined8)(*param_3);
  *(undefined4*)(param_2 + 1) = (undefined4)(*(undefined4 *)(param_3 + 1));
  return;
}


// Reference entry 10c73670; body size 9 bytes.
#line 1 "ENTRY_10c73670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c73670(int param_1,int param_2)

{
  return (int)(param_2 - param_1);
}


// Reference entry 10c73680; body size 12 bytes.
#line 1 "ENTRY_10c73680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c73680(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 2);
}


// Reference entry 10c73690; body size 12 bytes.
#line 1 "ENTRY_10c73690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c73690(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 3);
}


// Reference entry 10c736a0; body size 9 bytes.
#line 1 "ENTRY_10c736a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c736a0(int param_1,int param_2)

{
  return (int)(param_2 - param_1);
}


// Reference entry 10c736b0; body size 9 bytes.
#line 1 "ENTRY_10c736b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c736b0(int param_1,int param_2)

{
  return (int)(param_2 - param_1);
}


// Reference entry 10c736c0; body size 122 bytes.
#line 1 "ENTRY_10c736c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c736c0(char *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  char cVar2;
  
  if ((int)param_2 - (int)param_1 != param_4 - param_3) {
    return (undefined4)(0);
  }
  if ((char *)(param_1) != (char *)(param_2)) {
    param_3 = (int)(param_3 - (int)param_1);
    do {
      cVar2 = (char)(param_1[param_3]);
      cVar1 = (char)(((std::ctype<> *)(*(ctype<char> **)(param_5 + 4)))->tolower(*param_1), 0);
      cVar2 = (char)(((std::ctype<> *)(*(ctype<char> **)(param_5 + 4)))->tolower(cVar2), 0);
      if (cVar1 != cVar2) {
        return (undefined4)(0);
      }
      param_1 = (char *)(param_1 + 1);
    } while ((char *)(param_1) != (char *)(param_2));
  }
  return (undefined4)(1);
}


// Reference entry 10c737f0; body size 15 bytes.
#line 1 "ENTRY_10c737f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c737f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10c73810; body size 52 bytes.
#line 1 "ENTRY_10c73810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c73810(void *param_1,void *param_2,byte *param_3)

{
  void *pvVar1;
  
  if ((byte)(0x7f) < *param_3) {
    return (void *)(param_2);
  }
  pvVar1 = (void *)(memchr(param_1,(uint)*param_3,(int)param_2 - (int)param_1), 0);
  if ((void *)(pvVar1) != (void *)(0x0)) {
    param_2 = (void *)(pvVar1);
  }
  return (void *)(param_2);
}


// Reference entry 10c738a0; body size 5 bytes.
#line 1 "ENTRY_10c738a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c738a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c738b0; body size 5 bytes.
#line 1 "ENTRY_10c738b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c738b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c738c0; body size 5 bytes.
#line 1 "ENTRY_10c738c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c738c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c738d0; body size 5 bytes.
#line 1 "ENTRY_10c738d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c738d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c738e0; body size 5 bytes.
#line 1 "ENTRY_10c738e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c738e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c738f0; body size 5 bytes.
#line 1 "ENTRY_10c738f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c738f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c73900; body size 5 bytes.
#line 1 "ENTRY_10c73900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c73900(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c73910; body size 5 bytes.
#line 1 "ENTRY_10c73910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c73910(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c73920; body size 5 bytes.
#line 1 "ENTRY_10c73920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c73920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c73930; body size 6 bytes.
#line 1 "ENTRY_10c73930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c73930(void)

{
  return (char *)("SCIMdnsDelegate");
}


// Reference entry 10c73940; body size 6 bytes.
#line 1 "ENTRY_10c73940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c73940(void)

{
  return (char *)("SCIMdnsListener");
}


// Reference entry 10c73a60; body size 79 bytes.
#line 1 "ENTRY_10c73a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c73a60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x18), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(*param_2);
    puVar1[2] = (undefined4)(0);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_std_Node_assert);
    puVar1[5] = (undefined4)(0);
    *param_1 = (undefined4)(puVar1);
    return;
  }
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 10c73ad0; body size 5 bytes.
#line 1 "ENTRY_10c73ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c73ad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c73ae0; body size 5 bytes.
#line 1 "ENTRY_10c73ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c73ae0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c73af0; body size 5 bytes.
#line 1 "ENTRY_10c73af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c73af0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c73b00; body size 62 bytes.
#line 1 "ENTRY_10c73b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c73b00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1);
  puVar2 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar2 = (undefined4 *)((undefined4 *)*param_1);
    puVar3 = (undefined4 *)((undefined4 *)*param_1);
  }
  piVar1 = (int *)(param_1 + 4);
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)((undefined4 *)*param_1);
  }
  thunk_FUN_10c72390(param_1,*piVar1 + (int)puVar3,param_2,param_3,param_4,puVar2);
  return;
}


// Reference entry 10c73b50; body size 19 bytes.
#line 1 "ENTRY_10c73b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c73b50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10c74540; body size 27 bytes.
#line 1 "ENTRY_10c74540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c74540(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c74570; body size 16 bytes.
#line 1 "ENTRY_10c74570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c74570(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c74590; body size 9 bytes.
#line 1 "ENTRY_10c74590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c74590(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c74660; body size 37 bytes.
#line 1 "ENTRY_10c74660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c74660(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c74690; body size 23 bytes.
#line 1 "ENTRY_10c74690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c74690(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c746b0; body size 133 bytes.
#line 1 "ENTRY_10c746b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c746b0(undefined4 param_2,uint param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x24), 0);
  if ((undefined4 *)(puVar1) == (undefined4 *)(0x0)) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar1[1] = (undefined4)(0x14);
    puVar1[2] = (undefined4)(0);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_std_Root_node);
    puVar1[6] = (undefined4)(0);
    puVar1[7] = (undefined4)(0);
    puVar1[8] = (undefined4)(0);
  }
  *param_1 = (undefined4)(puVar1);
  param_1[1] = (undefined4)(puVar1);
  param_1[3] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  param_1[4] = (undefined4)(~(param_3 >> 3) & 0x100);
  param_1[5] = (undefined4)(~(param_3 >> 9) & 4);
  return (undefined4 *)(param_1);
}


// Reference entry 10c74760; body size 11 bytes.
#line 1 "ENTRY_10c74760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c74760(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c74770; body size 11 bytes.
#line 1 "ENTRY_10c74770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c74770(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c74780; body size 11 bytes.
#line 1 "ENTRY_10c74780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c74780(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c74960; body size 81 bytes.
#line 1 "ENTRY_10c74960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c74960(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  *(undefined2*)(param_1 + 9) = (undefined2)(0);
  param_1[10] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_class);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c749d0; body size 65 bytes.
#line 1 "ENTRY_10c749d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c749d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[2] = (undefined4)(param_2);
  param_1[1] = (undefined4)(6);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_str);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c74cf0; body size 37 bytes.
#line 1 "ENTRY_10c74cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c74cf0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c74d20; body size 9 bytes.
#line 1 "ENTRY_10c74d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c74d20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c74e30; body size 58 bytes.
#line 1 "ENTRY_10c74e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c74e30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c74e80; body size 21 bytes.
#line 1 "ENTRY_10c74e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c74e80(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c74ea0; body size 21 bytes.
#line 1 "ENTRY_10c74ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c74ea0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c74ec0; body size 21 bytes.
#line 1 "ENTRY_10c74ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c74ec0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c74ee0; body size 126 bytes.
#line 1 "ENTRY_10c74ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c74ee0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  void *_Src;
  void *_Dst;
  size_t _Size;
  int iVar1;
  int iVar2;
  
  *param_1 = (int)(0);
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  _Src = (void *)((void *)*param_2);
  if ((void *)(_Src) != (void *)param_2[1]) {
    _Size = (size_t)((int)param_2[1] - (int)_Src);
    iVar2 = (int)((int)_Size >> 2);
    iVar1 = (int)(thunk_FUN_101a9c80(iVar2), 0);
    *param_1 = (int)(iVar1);
    iVar2 = (int)(iVar2 * 4);
    param_1[1] = (int)(iVar1);
    param_1[2] = (int)(iVar1 + iVar2);
    _Dst = (void *)((void *)*param_1);
    memmove(_Dst,_Src,_Size);
    param_1[1] = (int)((int)(iVar2 + (int)_Dst));
  }
  param_1[3] = (int)(param_2[3]);
  return (int *)(param_1);
}


// Reference entry 10c74f80; body size 23 bytes.
#line 1 "ENTRY_10c74f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c74f80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c74fa0; body size 23 bytes.
#line 1 "ENTRY_10c74fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c74fa0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c74fc0; body size 23 bytes.
#line 1 "ENTRY_10c74fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c74fc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c74fe0; body size 23 bytes.
#line 1 "ENTRY_10c74fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c74fe0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c75000; body size 3 bytes.
#line 1 "ENTRY_10c75000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c75000(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c75010; body size 3 bytes.
#line 1 "ENTRY_10c75010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c75010(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c75020; body size 3 bytes.
#line 1 "ENTRY_10c75020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c75020(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c752a0; body size 93 bytes.
#line 1 "ENTRY_10c752a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c752a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  *(undefined1*)(param_1 + 1) = (undefined1)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  *(undefined1*)(param_1 + 7) = (undefined1)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  *(undefined1*)(param_1 + 10) = (undefined1)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)(0);
  *(undefined1*)(param_1 + 0xd) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c753b0; body size 20 bytes.
#line 1 "ENTRY_10c753b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c753b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  *(undefined1*)(param_1 + 2) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c753d0; body size 100 bytes.
#line 1 "ENTRY_10c753d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c753d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *_Src;
  void *_Dst;
  size_t _Size;
  int iVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  _Src = (void *)((void *)*param_2);
  if ((void *)(_Src) != (void *)param_2[1]) {
    _Size = (size_t)((int)param_2[1] - (int)_Src);
    iVar1 = (int)((int)_Size >> 2);
    _Dst = (void *)((void *)thunk_FUN_101a9c80(iVar1), 0);
    *param_1 = (undefined4)(_Dst);
    param_1[1] = (undefined4)(_Dst);
    param_1[2] = (undefined4)((char *)((int)_Dst + iVar1 * 4));
    memmove(_Dst,_Src,_Size);
    param_1[1] = (undefined4)((char *)((int)_Dst + iVar1 * 4));
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c75450; body size 97 bytes.
#line 1 "ENTRY_10c75450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c75450(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  puVar5 = (undefined4 *)((undefined4 *)*param_2);
  puVar1 = (undefined4 *)((undefined4 *)param_2[1]);
  if ((undefined4 *)((puVar5)) != (undefined4 *)(puVar1)) {
    iVar6 = (int)((int)puVar1 - (int)puVar5 >> 3);
    puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_10c7dc90(iVar6), 0);
    *param_1 = (undefined4)(puVar4);
    param_1[1] = (undefined4)(puVar4);
    param_1[2] = (undefined4)(puVar4 + iVar6 * 2);
    do {
      uVar2 = (undefined4)(*puVar5);
      uVar3 = (undefined4)(puVar5[1]);
      puVar5 = (undefined4 *)(puVar5 + 2);
      *puVar4 = (undefined4)(uVar2);
      puVar4[1] = (undefined4)(uVar3);
      puVar4 = (undefined4 *)(puVar4 + 2);
    } while ((undefined4 *)((puVar5)) != (undefined4 *)(puVar1));
    param_1[1] = (undefined4)(puVar4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c754d0; body size 23 bytes.
#line 1 "ENTRY_10c754d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c754d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c754f0; body size 23 bytes.
#line 1 "ENTRY_10c754f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c754f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c75510; body size 23 bytes.
#line 1 "ENTRY_10c75510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c75510(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c75530; body size 126 bytes.
#line 1 "ENTRY_10c75530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c75530(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  void *_Src;
  void *_Dst;
  size_t _Size;
  int iVar1;
  int iVar2;
  
  *param_1 = (int)(0);
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  _Src = (void *)((void *)*param_2);
  if ((void *)(_Src) != (void *)param_2[1]) {
    _Size = (size_t)((int)param_2[1] - (int)_Src);
    iVar2 = (int)((int)_Size >> 2);
    iVar1 = (int)(thunk_FUN_101a9c80(iVar2), 0);
    *param_1 = (int)(iVar1);
    iVar2 = (int)(iVar2 * 4);
    param_1[1] = (int)(iVar1);
    param_1[2] = (int)(iVar1 + iVar2);
    _Dst = (void *)((void *)*param_1);
    memmove(_Dst,_Src,_Size);
    param_1[1] = (int)((int)(iVar2 + (int)_Dst));
  }
  param_1[3] = (int)(param_2[3]);
  return (int *)(param_1);
}


// Reference entry 10c756a0; body size 9 bytes.
#line 1 "ENTRY_10c756a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c756a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIMdnsListener);
  return (undefined4 *)(param_1);
}


// Reference entry 10c759a0; body size 13 bytes.
#line 1 "ENTRY_10c759a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c759a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c759b0; body size 16 bytes.
#line 1 "ENTRY_10c759b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c759b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c759d0; body size 51 bytes.
#line 1 "ENTRY_10c759d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c759d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_assert);
  param_1[5] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c75a10; body size 51 bytes.
#line 1 "ENTRY_10c75a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c75a10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[5] = (undefined4)(param_2);
  param_1[1] = (undefined4)(0xf);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_back);
  return (undefined4 *)(param_1);
}


// Reference entry 10c75a50; body size 39 bytes.
#line 1 "ENTRY_10c75a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c75a50(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c75a80; body size 51 bytes.
#line 1 "ENTRY_10c75a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c75a80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[5] = (undefined4)(param_2);
  param_1[1] = (undefined4)(0xd);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_capture);
  return (undefined4 *)(param_1);
}


// Reference entry 10c75ac0; body size 51 bytes.
#line 1 "ENTRY_10c75ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c75ac0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  param_1[5] = (undefined4)(param_4);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_end_group);
  return (undefined4 *)(param_1);
}


// Reference entry 10c75b00; body size 49 bytes.
#line 1 "ENTRY_10c75b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c75b00(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0x13);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_end_rep);
  param_1[5] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c75b40; body size 42 bytes.
#line 1 "ENTRY_10c75b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c75b40(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0x11);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_endif);
  return (undefined4 *)(param_1);
}


// Reference entry 10c75b80; body size 58 bytes.
#line 1 "ENTRY_10c75b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c75b80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[5] = (undefined4)(param_2);
  param_1[1] = (undefined4)(0x10);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_if);
  param_1[6] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c75bd0; body size 82 bytes.
#line 1 "ENTRY_10c75bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c75bd0(byte param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[2] = (undefined4)((uint)param_2 * 2);
  param_1[5] = (undefined4)(param_3);
  param_1[6] = (undefined4)(param_4);
  param_1[7] = (undefined4)(param_5);
  param_1[8] = (undefined4)(param_6);
  param_1[1] = (undefined4)(0x12);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_rep);
  param_1[9] = (undefined4)(0xffffffff);
  return (undefined4 *)(param_1);
}


// Reference entry 10c75c40; body size 63 bytes.
#line 1 "ENTRY_10c75c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c75c40(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0x14);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Root_node);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c75e50; body size 11 bytes.
#line 1 "ENTRY_10c75e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c75e50(int param_1)

{
  free(*(void **)(param_1 + 8));
  return;
}


// Reference entry 10c75ee0; body size 164 bytes.
#line 1 "ENTRY_10c75ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c75ee0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_class);
  iVar2 = (int)(param_1[5]);
  while (iVar2 != 0) {
    iVar1 = (int)(*(int *)(iVar2 + 0x10));
    free(*(void **)(iVar2 + 0xc));
    thunk_FUN_1148a50e(iVar2,0x14);
    iVar2 = (int)(iVar1);
  }
  thunk_FUN_1148a50e(param_1[6],0x20);
  iVar2 = (int)(param_1[7]);
  if (iVar2 != 0) {
    free(*(void **)(iVar2 + 8));
    thunk_FUN_1148a50e(iVar2,0xc);
  }
  iVar2 = (int)(param_1[8]);
  if (iVar2 != 0) {
    free(*(void **)(iVar2 + 8));
    thunk_FUN_1148a50e(iVar2,0xc);
  }
  iVar2 = (int)(param_1[10]);
  while (iVar2 != 0) {
    iVar1 = (int)(*(int *)(iVar2 + 0x10));
    free(*(void **)(iVar2 + 0xc));
    thunk_FUN_1148a50e(iVar2,0x14);
    iVar2 = (int)(iVar1);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  return;
}


// Reference entry 10c76040; body size 25 bytes.
#line 1 "ENTRY_10c76040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c76040(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    puVar1 = (undefined4 *)((undefined4 *)((SCVtbl_2_0*)(*(int **)(param_1 + 0xc)))->v(), 0);
    if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
      ((SCVtbl_0_1*)(puVar1))->v((int)(1));
    }
  }
  return;
}


// Reference entry 10c76060; body size 11 bytes.
#line 1 "ENTRY_10c76060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c76060(int param_1)

{
  free(*(void **)(param_1 + 0xc));
  return;
}


// Reference entry 10c76120; body size 16 bytes.
#line 1 "ENTRY_10c76120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c76120(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) == (int *)(0x0)) {
    return;
  }
  iVar2 = (int)(*piVar1);
  if (iVar2 != 0) {
    uVar4 = (uint)(piVar1[2] - iVar2);
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
    piVar1[1] = (int)(0);
    piVar1[2] = (int)(0);
  }
  return;
}


// Reference entry 10c76130; body size 16 bytes.
#line 1 "ENTRY_10c76130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c76130(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) == (int *)(0x0)) {
    return;
  }
  iVar2 = (int)(*piVar1);
  if (iVar2 != 0) {
    uVar4 = (uint)(piVar1[2] - iVar2 & 0xfffffff8);
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
    piVar1[1] = (int)(0);
    piVar1[2] = (int)(0);
  }
  return;
}


// Reference entry 10c76140; body size 3 bytes.
#line 1 "ENTRY_10c76140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c76140(void)

{
  return;
}


// Reference entry 10c76150; body size 3 bytes.
#line 1 "ENTRY_10c76150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c76150(void)

{
  return;
}


// Reference entry 10c76160; body size 3 bytes.
#line 1 "ENTRY_10c76160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c76160(void)

{
  return;
}


// Reference entry 10c763e0; body size 7 bytes.
#line 1 "ENTRY_10c763e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c763e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c76580; body size 7 bytes.
#line 1 "ENTRY_10c76580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c76580(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  return;
}


// Reference entry 10c76590; body size 7 bytes.
#line 1 "ENTRY_10c76590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c76590(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  return;
}


// Reference entry 10c765a0; body size 7 bytes.
#line 1 "ENTRY_10c765a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c765a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  return;
}


// Reference entry 10c765b0; body size 7 bytes.
#line 1 "ENTRY_10c765b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c765b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  return;
}


// Reference entry 10c765c0; body size 7 bytes.
#line 1 "ENTRY_10c765c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c765c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  return;
}


// Reference entry 10c765d0; body size 7 bytes.
#line 1 "ENTRY_10c765d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c765d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  return;
}


// Reference entry 10c765e0; body size 83 bytes.
#line 1 "ENTRY_10c765e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c765e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_if);
  puVar3 = (undefined4 *)((undefined4 *)param_1[6]);
  while ((undefined4 *)(puVar3) != (undefined4 *)(0x0)) {
    puVar1 = (undefined4 *)((undefined4 *)puVar3[6]);
    puVar3[6] = (undefined4)(0);
    puVar2 = (undefined4 *)((undefined4 *)param_1[5]);
    puVar4 = (undefined4 *)(puVar3);
    while ((puVar3 = (undefined4 *)(puVar1),(undefined4 *)((puVar4)) != (undefined4 *)(puVar2) && ((undefined4 *)(puVar4) != (undefined4 *)(0x0)))) {
      puVar3 = (undefined4 *)((undefined4 *)puVar4[3]);
      puVar4[3] = (undefined4)(0);
      ((SCVtbl_0_1*)(puVar4))->v((int)(1));
      puVar4 = (undefined4 *)(puVar3);
    }
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  return;
}


// Reference entry 10c76650; body size 7 bytes.
#line 1 "ENTRY_10c76650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c76650(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  return;
}


// Reference entry 10c76660; body size 7 bytes.
#line 1 "ENTRY_10c76660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c76660(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  return;
}


// Reference entry 10c766e0; body size 29 bytes.
#line 1 "ENTRY_10c766e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c766e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  thunk_FUN_10c76ac0<>(param_2 + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c76860; body size 23 bytes.
#line 1 "ENTRY_10c76860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c76860(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *_Src;
  undefined4 *puVar1;
  void *_Dst;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  size_t _Size;
  void *pvVar5;
  
  puVar1 = (undefined4 *)(param_2);
  *param_1 = (undefined4)(*param_2);
  piVar2 = (int *)(param_1 + 1);
  if ((int *)(piVar2) != (int *)(param_2) + 1) {
    _Src = (void *)((void *)param_2[1]);
    _Size = (size_t)(param_2[2] - (int)_Src);
    _Dst = (void *)((void *)*piVar2);
    uVar4 = (uint)((int)_Size >> 2);
    uVar3 = (uint)(param_1[3] - (int)_Dst >> 2);
    if (uVar3 < uVar4) {
      if (0x3fffffff < uVar4) {
                    
        thunk_FUN_101a9be0();
      }
      if (0x3fffffff - (uVar3 >> 1) < uVar3) {
        param_2 = (undefined4 *)((undefined4 *)0x3fffffff);
      }
      else {
        param_2 = (undefined4 *)((undefined4 *)((uVar3 >> 1) + uVar3));
        if ((undefined4 *)(param_2) < (undefined4 *)(uVar4)) {
          param_2 = (undefined4 *)((undefined4 *)uVar4);
        }
      }
      if ((void *)(_Dst) != (void *)(0x0)) {
        uVar3 = (uint)(uVar3 * 4);
        pvVar5 = (void *)(_Dst);
        if (0xfff < uVar3) {
          pvVar5 = (char *)(*(void **)((int)_Dst + -4), 0);
          uVar3 = (uint)(uVar3 + 0x23);
          if (0x1f < (uint)((int)_Dst + (-4 - (int)pvVar5))) {
                    
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1148a50e(pvVar5,uVar3);
        *piVar2 = (int)(0);
        param_1[2] = (undefined4)(0);
        param_1[3] = (undefined4)(0);
      }
      _Dst = (void *)((void *)thunk_FUN_101a9c80(param_2), 0);
      *piVar2 = (int)((int)_Dst);
      param_1[2] = (undefined4)(_Dst);
      param_1[3] = (undefined4)((char *)((int)_Dst + (int)param_2 * 4));
    }
    memmove(_Dst,_Src,_Size);
    param_1[2] = (undefined4)((int)_Dst + _Size);
    param_1[4] = (undefined4)(puVar1[4]);
  }
  return (int *)(piVar2);
}


// Reference entry 10c76880; body size 218 bytes.
#line 1 "ENTRY_10c76880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c76880(int *param_2)
{
  int *param_1 = (int *)this;
  void *_Src;
  void *_Dst;
  uint uVar1;
  uint uVar2;
  size_t _Size;
  uint uVar3;
  void *pvVar4;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    _Src = (void *)((void *)*param_2);
    _Size = (size_t)(param_2[1] - (int)_Src);
    _Dst = (void *)((void *)*param_1);
    uVar2 = (uint)((int)_Size >> 2);
    uVar1 = (uint)(param_1[2] - (int)_Dst >> 2);
    if (uVar1 < uVar2) {
      if (0x3fffffff < uVar2) {
                    
        thunk_FUN_101a9be0();
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
      _Dst = (void *)((void *)thunk_FUN_101a9c80(uVar3), 0);
      *param_1 = (int)((int)_Dst);
      param_1[1] = (int)((int)_Dst);
      param_1[2] = (int)((int)((int)_Dst + uVar3 * 4));
    }
    memmove(_Dst,_Src,_Size);
    param_1[1] = (int)(_Size + (int)_Dst);
  }
  return (int *)(param_1);
}


// Reference entry 10c769a0; body size 218 bytes.
#line 1 "ENTRY_10c769a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c769a0(int *param_2)
{
  int *param_1 = (int *)this;
  void *_Src;
  void *_Dst;
  uint uVar1;
  uint uVar2;
  size_t _Size;
  uint uVar3;
  void *pvVar4;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    _Src = (void *)((void *)*param_2);
    _Size = (size_t)(param_2[1] - (int)_Src);
    _Dst = (void *)((void *)*param_1);
    uVar2 = (uint)((int)_Size >> 3);
    uVar1 = (uint)(param_1[2] - (int)_Dst >> 3);
    if (uVar1 < uVar2) {
      if (0x1fffffff < uVar2) {
                    
        thunk_FUN_10c7dc20();
      }
      if (0x1fffffff - (uVar1 >> 1) < uVar1) {
        uVar3 = (uint)(0x1fffffff);
      }
      else {
        uVar3 = (uint)((uVar1 >> 1) + uVar1);
        if (uVar3 < uVar2) {
          uVar3 = (uint)(uVar2);
        }
      }
      if ((void *)(_Dst) != (void *)(0x0)) {
        uVar1 = (uint)(uVar1 * 8);
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
      _Dst = (void *)((void *)thunk_FUN_10c7dc90(uVar3), 0);
      *param_1 = (int)((int)_Dst);
      param_1[1] = (int)((int)_Dst);
      param_1[2] = (int)((int)((int)_Dst + uVar3 * 8));
    }
    memmove(_Dst,_Src,_Size);
    param_1[1] = (int)(_Size + (int)_Dst);
  }
  return (int *)(param_1);
}


// Reference entry 10c76c00; body size 74 bytes.
#line 1 "ENTRY_10c76c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10c76c00(int param_2)
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
      if (*(uint *)((param_2 + 4)) < *(uint *)((param_1 + 4))) {
        return (undefined4)(1);
      }
      if (*(uint *)((param_1 + 4)) == *(uint *)((param_2 + 4))) {
        return (undefined4)(0);
      }
    }
  }
  return (undefined4)(0xffffff01);
}


// Reference entry 10c76cd0; body size 12 bytes.
#line 1 "ENTRY_10c76cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10c76cd0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 10c76ce0; body size 12 bytes.
#line 1 "ENTRY_10c76ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10c76ce0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 10c76cf0; body size 15 bytes.
#line 1 "ENTRY_10c76cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10c76cf0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0xc);
}


// Reference entry 10c76d10; body size 15 bytes.
#line 1 "ENTRY_10c76d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10c76d10(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0xc);
}


// Reference entry 10c76d30; body size 7 bytes.
#line 1 "ENTRY_10c76d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c76d30(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10c76db0; body size 3 bytes.
#line 1 "ENTRY_10c76db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c76db0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c76dc0; body size 14 bytes.
#line 1 "ENTRY_10c76dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c76dc0(int *param_2, unsigned int recovered_unused_stack_0)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 1);
  return;
}


// Reference entry 10c76de0; body size 5 bytes.
#line 1 "ENTRY_10c76de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10c76de0(int *param_1)

{
  *param_1 = (int)(*param_1 + -1);
  return (int *)(param_1);
}


// Reference entry 10c76df0; body size 11 bytes.
#line 1 "ENTRY_10c76df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10c76df0(int *param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 - *param_2);
}


// Reference entry 10c76e00; body size 9 bytes.
#line 1 "ENTRY_10c76e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10c76e00(uint param_1,uint param_2)

{
  return (uint)(param_1 & param_2);
}


// Reference entry 10c76e10; body size 9 bytes.
#line 1 "ENTRY_10c76e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10c76e10(uint param_1,uint param_2)

{
  return (uint)(param_1 & param_2);
}


// Reference entry 10c76e20; body size 9 bytes.
#line 1 "ENTRY_10c76e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10c76e20(uint param_1,uint param_2)

{
  return (uint)(param_1 & param_2);
}


// Reference entry 10c76e30; body size 52 bytes.
#line 1 "ENTRY_10c76e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c76e30(void *param_1,void *param_2,size_t param_3,size_t param_4,char param_5)

{
  memcpy(param_1,param_2,param_3);
  memset((char *)(param_3 + (int)param_1),(int)param_5,param_4);
  *(undefined1*)((int)(param_3 + (int)param_1) + param_4) = (undefined1)(0);
  return;
}


// Reference entry 10c76e80; body size 38 bytes.
#line 1 "ENTRY_10c76e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10c76e80(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = (char)(thunk_FUN_10c80150((int)(param_1)), 0);
  cVar2 = (char)(thunk_FUN_10c80150((int)(param_2)), 0);
  return (bool)(cVar1 == cVar2);
}


// Reference entry 10c76eb0; body size 14 bytes.
#line 1 "ENTRY_10c76eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10c76eb0(char param_1,char param_2)

{
  return (bool)(param_1 == param_2);
}


// Reference entry 10c76ed0; body size 46 bytes.
#line 1 "ENTRY_10c76ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c76ed0(char param_2,char param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  char cVar2;
  
  cVar1 = (char)(((std::ctype<> *)(*(ctype<char> **)(*param_1 + 4)))->tolower(param_2), 0);
  cVar2 = (char)(((std::ctype<> *)(*(ctype<char> **)(*param_1 + 4)))->tolower(param_3), 0);
  return (bool)(cVar1 == cVar2);
}


// Reference entry 10c76f10; body size 46 bytes.
#line 1 "ENTRY_10c76f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c76f10(char param_2,char param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  char cVar2;
  
  cVar1 = (char)(((std::ctype<> *)(*(ctype<char> **)(*param_1 + 4)))->tolower(param_2), 0);
  cVar2 = (char)(((std::ctype<> *)(*(ctype<char> **)(*param_1 + 4)))->tolower(param_3), 0);
  return (bool)(cVar1 == cVar2);
}


// Reference entry 10c76f50; body size 23 bytes.
#line 1 "ENTRY_10c76f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c76f50(undefined4 *param_1)

{
  if ((undefined4 *)(param_1) != (undefined4 *)(0x0)) {
                    
                    
    ((SCVtbl_0_0*)(param_1))->v();
    return;
  }
  return;
}


// Reference entry 10c76f70; body size 7 bytes.
#line 1 "ENTRY_10c76f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10c76f70(uint param_1)

{
  return (uint)(~param_1);
}


// Reference entry 10c76f80; body size 9 bytes.
#line 1 "ENTRY_10c76f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10c76f80(uint param_1,uint param_2)

{
  return (uint)(param_1 ^ param_2);
}


// Reference entry 10c76f90; body size 9 bytes.
#line 1 "ENTRY_10c76f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10c76f90(uint param_1,uint param_2)

{
  return (uint)(param_1 | param_2);
}


// Reference entry 10c76fa0; body size 9 bytes.
#line 1 "ENTRY_10c76fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10c76fa0(uint param_1,uint param_2)

{
  return (uint)(param_1 | param_2);
}


// Reference entry 10c76fb0; body size 11 bytes.
#line 1 "ENTRY_10c76fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  FUN_10c76fb0(uint *param_1,uint param_2)

{
  *param_1 = (uint)(*param_1 & param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c76fc0; body size 11 bytes.
#line 1 "ENTRY_10c76fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  FUN_10c76fc0(uint *param_1,uint param_2)

{
  *param_1 = (uint)(*param_1 | param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c76fd0; body size 11 bytes.
#line 1 "ENTRY_10c76fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  FUN_10c76fd0(uint *param_1,uint param_2)

{
  *param_1 = (uint)(*param_1 | param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c76fe0; body size 11 bytes.
#line 1 "ENTRY_10c76fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  FUN_10c76fe0(uint *param_1,uint param_2)

{
  *param_1 = (uint)(*param_1 ^ param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c77690; body size 111 bytes.
#line 1 "ENTRY_10c77690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c77690(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(operator_new(0x18), 0);
  if ((undefined4 *)(puVar1) == (undefined4 *)(0x0)) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar1[1] = (undefined4)(0xf);
    puVar1[2] = (undefined4)(0);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_std_Node_back);
    puVar1[5] = (undefined4)(param_2);
  }
  puVar1[4] = (undefined4)(*(undefined4 *)(param_1 + 4));
  iVar2 = (int)(*(int *)(param_1 + 4));
  if (*(int *)(iVar2 + 0xc) != 0) {
    puVar1[3] = (undefined4)(*(int *)(iVar2 + 0xc));
    *(undefined4**)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 0x10) = (undefined4 *)(puVar1);
    iVar2 = (int)(*(int *)(param_1 + 4));
  }
  *(undefined4**)(iVar2 + 0xc) = (undefined4 *)(puVar1);
  *(undefined4**)(param_1 + 4) = (undefined4 *)(puVar1);
  return;
}


// Reference entry 10c77720; body size 8 bytes.
#line 1 "ENTRY_10c77720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c77720(void)

{
  thunk_FUN_10c7cce0((int)(2));
  return;
}


// Reference entry 10c77b00; body size 27 bytes.
#line 1 "ENTRY_10c77b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c77b00(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  thunk_FUN_10c794d0(param_2,param_3,param_4,*(int *)(param_1 + 4) + 0x14);
  return;
}


// Reference entry 10c77b30; body size 8 bytes.
#line 1 "ENTRY_10c77b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c77b30(void)

{
  thunk_FUN_10c7cce0((int)(5));
  return;
}


// Reference entry 10c77c20; body size 8 bytes.
#line 1 "ENTRY_10c77c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c77c20(void)

{
  thunk_FUN_10c7cce0((int)(3));
  return;
}


// Reference entry 10c78470; body size 123 bytes.
#line 1 "ENTRY_10c78470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c78470(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(operator_new(0x20), 0);
  if ((undefined4 *)(puVar1) == (undefined4 *)(0x0)) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar1[1] = (undefined4)(6);
    puVar1[2] = (undefined4)(0);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_std_Node_str);
    puVar1[5] = (undefined4)(0);
    puVar1[6] = (undefined4)(0);
    puVar1[7] = (undefined4)(0);
  }
  puVar1[4] = (undefined4)(*(undefined4 *)(param_1 + 4));
  iVar2 = (int)(*(int *)(param_1 + 4));
  if (*(int *)(iVar2 + 0xc) != 0) {
    puVar1[3] = (undefined4)(*(int *)(iVar2 + 0xc));
    *(undefined4**)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 0x10) = (undefined4 *)(puVar1);
    iVar2 = (int)(*(int *)(param_1 + 4));
  }
  *(undefined4**)(iVar2 + 0xc) = (undefined4 *)(puVar1);
  *(undefined4**)(param_1 + 4) = (undefined4 *)(puVar1);
  return;
}


// Reference entry 10c78510; body size 8 bytes.
#line 1 "ENTRY_10c78510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c78510(void)

{
  thunk_FUN_10c7cce0((int)(4));
  return;
}


// Reference entry 10c78a00; body size 13 bytes.
#line 1 "ENTRY_10c78a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __thiscall Recovered_Bulk::m_FUN_10c78a00(int param_2)
{
  int param_1 = (int )this;
  return (undefined1)(*(undefined1 *)(param_2 + *(int *)(param_1 + 8)));
}


// Reference entry 10c78a10; body size 16 bytes.
#line 1 "ENTRY_10c78a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10c78a10(int param_2)
{
  int param_1 = (int )this;
  return (int)(*(int *)(param_1 + 8) + param_2 * 0xc);
}


// Reference entry 10c78bc0; body size 32 bytes.
#line 1 "ENTRY_10c78bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_10c78bc0(int param_1){
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 4));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if (((iVar1 != 0x14) && (iVar1 != 8)) && (iVar1 != 0xd)) {
    return (int)((uint)uVar2 << 8);
  }
  return (int)(((uint)(uVar2) << 8 | (uint)(1)));
}


// Reference entry 10c78e00; body size 8 bytes.
#line 1 "ENTRY_10c78e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c78e00(void)

{
  thunk_FUN_10c7cce0((int)(8));
  return;
}


// Reference entry 10c78e10; body size 199 bytes.
#line 1 "ENTRY_10c78e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c78e10(int param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(operator_new(0x14), 0);
  if ((undefined4 *)(puVar1) == (undefined4 *)(0x0)) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar1[1] = (undefined4)(0x11);
    puVar1[2] = (undefined4)(0);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_std_Node_endif);
  }
  puVar1[4] = (undefined4)(*(undefined4 *)(param_1 + 4));
  iVar2 = (int)(*(int *)(param_1 + 4));
  if (*(int *)(iVar2 + 0xc) != 0) {
    puVar1[3] = (undefined4)(*(int *)(iVar2 + 0xc));
    *(undefined4**)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 0x10) = (undefined4 *)(puVar1);
    iVar2 = (int)(*(int *)(param_1 + 4));
  }
  *(undefined4**)(iVar2 + 0xc) = (undefined4 *)(puVar1);
  *(undefined4**)(param_1 + 4) = (undefined4 *)(puVar1);
  puVar3 = (undefined4 *)(operator_new(0x1c), 0);
  if ((undefined4 *)(puVar3) == (undefined4 *)(0x0)) {
    puVar3 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar3[1] = (undefined4)(0x10);
    puVar3[2] = (undefined4)(0);
    puVar3[3] = (undefined4)(0);
    puVar3[4] = (undefined4)(0);
    *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Node_if);
    puVar3[5] = (undefined4)(puVar1);
    puVar3[6] = (undefined4)(0);
  }
  iVar2 = (int)(*(int *)(param_2 + 0xc));
  *(undefined4**)(*(int *)(iVar2 + 0x10) + 0xc) = (undefined4 *)(puVar3);
  puVar3[4] = (undefined4)(*(undefined4 *)(iVar2 + 0x10));
  *(undefined4**)(iVar2 + 0x10) = (undefined4 *)(puVar3);
  puVar3[3] = (undefined4)(iVar2);
  return (undefined4 *)(puVar1);
}


// Reference entry 10c79070; body size 118 bytes.
#line 1 "ENTRY_10c79070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c79070(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  
  if (param_2 < 0x1000) {
    if (param_2 != 0) {
      pvVar1 = (void *)(operator_new(param_2), 0);
      *param_1 = (uint)((uint)pvVar1);
      param_1[1] = (uint)((uint)pvVar1);
      param_1[2] = (uint)((int)pvVar1 + param_2);
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
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10c79110; body size 30 bytes.
#line 1 "ENTRY_10c79110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c79110(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10c7dc90(param_2), 0);
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 8);
  return;
}


// Reference entry 10c79170; body size 49 bytes.
#line 1 "ENTRY_10c79170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10c79170(uint param_2)
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


// Reference entry 10c791b0; body size 49 bytes.
#line 1 "ENTRY_10c791b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10c791b0(uint param_2)
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


// Reference entry 10c791f0; body size 62 bytes.
#line 1 "ENTRY_10c791f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10c791f0(uint param_2)
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


// Reference entry 10c79e40; body size 159 bytes.
#line 1 "ENTRY_10c79e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c79e40(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x3fffffff < param_2) {
                    
    thunk_FUN_101a9be0();
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
  iVar1 = (int)(thunk_FUN_101a9c80(uVar4), 0);
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + uVar4 * 4);
  return;
}


// Reference entry 10c79f10; body size 159 bytes.
#line 1 "ENTRY_10c79f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c79f10(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x1fffffff < param_2) {
                    
    thunk_FUN_10c7dc20();
  }
  iVar1 = (int)(*param_1);
  uVar3 = (uint)(param_1[2] - iVar1 >> 3);
  if (0x1fffffff - (uVar3 >> 1) < uVar3) {
    uVar4 = (uint)(0x1fffffff);
  }
  else {
    uVar4 = (uint)((uVar3 >> 1) + uVar3);
    if (uVar4 < param_2) {
      uVar4 = (uint)(param_2);
    }
  }
  if (iVar1 != 0) {
    uVar3 = (uint)(uVar3 * 8);
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
  iVar1 = (int)(thunk_FUN_10c7dc90(uVar4), 0);
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + uVar4 * 8);
  return;
}


// Reference entry 10c79fe0; body size 12 bytes.
#line 1 "ENTRY_10c79fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c79fe0(uint param_2)
{
  int param_1 = (int )this;
  *(uint*)(param_1 + 0x60) = (uint)(*(uint *)(param_1 + 0x60) & ~param_2);
  return;
}


// Reference entry 10c7a0b0; body size 208 bytes.
#line 1 "ENTRY_10c7a0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c7a0b0(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  int *param_1 = (int *)this;
  void *_Src;
  void *_Dst;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  size_t _Size;
  void *pvVar4;
  
  _Src = (void *)((void *)*param_2);
  _Size = (size_t)(param_2[1] - (int)_Src);
  uVar2 = (uint)((int)_Size >> 2);
  _Dst = (void *)((void *)*param_1);
  uVar1 = (uint)(param_1[2] - (int)_Dst >> 2);
  if (uVar1 < uVar2) {
    if (0x3fffffff < uVar2) {
                    
      thunk_FUN_101a9be0();
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
    _Dst = (void *)((void *)thunk_FUN_101a9c80(uVar3), 0);
    *param_1 = (int)((int)_Dst);
    param_1[1] = (int)((int)_Dst);
    param_1[2] = (int)((int)((int)_Dst + uVar3 * 4));
  }
  memmove(_Dst,_Src,_Size);
  param_1[1] = (int)((int)_Dst + _Size);
  return;
}


// Reference entry 10c7a1c0; body size 208 bytes.
#line 1 "ENTRY_10c7a1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c7a1c0(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  int *param_1 = (int *)this;
  void *_Src;
  void *_Dst;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  size_t _Size;
  void *pvVar4;
  
  _Src = (void *)((void *)*param_2);
  _Size = (size_t)(param_2[1] - (int)_Src);
  uVar2 = (uint)((int)_Size >> 3);
  _Dst = (void *)((void *)*param_1);
  uVar1 = (uint)(param_1[2] - (int)_Dst >> 3);
  if (uVar1 < uVar2) {
    if (0x1fffffff < uVar2) {
                    
      thunk_FUN_10c7dc20();
    }
    if (0x1fffffff - (uVar1 >> 1) < uVar1) {
      uVar3 = (uint)(0x1fffffff);
    }
    else {
      uVar3 = (uint)((uVar1 >> 1) + uVar1);
      if (uVar3 < uVar2) {
        uVar3 = (uint)(uVar2);
      }
    }
    if ((void *)(_Dst) != (void *)(0x0)) {
      uVar1 = (uint)(uVar1 * 8);
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
    _Dst = (void *)((void *)thunk_FUN_10c7dc90(uVar3), 0);
    *param_1 = (int)((int)_Dst);
    param_1[1] = (int)((int)_Dst);
    param_1[2] = (int)((int)((int)_Dst + uVar3 * 8));
  }
  memmove(_Dst,_Src,_Size);
  param_1[1] = (int)((int)_Dst + _Size);
  return;
}


// Reference entry 10c7a2f0; body size 13 bytes.
#line 1 "ENTRY_10c7a2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7a2f0(int param_1)

{
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -1);
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 8) >> 8)) << 8 | (uint)(*(undefined1 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8)))));
}


// Reference entry 10c7a300; body size 3 bytes.
#line 1 "ENTRY_10c7a300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c7a300(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10c7a310; body size 3 bytes.
#line 1 "ENTRY_10c7a310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c7a310(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10c7a320; body size 3 bytes.
#line 1 "ENTRY_10c7a320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c7a320(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10c7a330; body size 3 bytes.
#line 1 "ENTRY_10c7a330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c7a330(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10c7a340; body size 46 bytes.
#line 1 "ENTRY_10c7a340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c7a340(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  while (((undefined4 *)(param_1) != (undefined4 *)(param_2) && ((undefined4 *)(param_1) != (undefined4 *)(0x0)))) {
    puVar1 = (undefined4 *)((undefined4 *)param_1[3]);
    param_1[3] = (undefined4)(0);
    ((SCVtbl_0_1*)(param_1))->v((int)(1));
    param_1 = (undefined4 *)(puVar1);
  }
  return;
}


// Reference entry 10c7a8c0; body size 218 bytes.
#line 1 "ENTRY_10c7a8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10c7a8c0(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint3 uVar9;
  char cVar10;
  
  pbVar4 = (byte *)((byte *)*param_1);
  bVar2 = (byte)(*pbVar4);
  if ((param_1[0x17] & 0x100U) != 0) {
    bVar2 = (byte)(((std::ctype<> *)(*(ctype<char> **)(param_1[0x1c] + 4)))->tolower(bVar2), 0);
    pbVar4 = (byte *)((byte *)*param_1);
  }
  iVar1 = (int)(param_2);
  pbVar4 = (byte *)(pbVar4 + 1);
  if (*(int *)(param_2 + 0x14) != 0) {
    puVar5 = (undefined4 *)((undefined4 *) thunk_FUN_10c716e0(&param_2,*param_1,param_1[0x14],*(int *)(param_2 + 0x14)), 0);
    pbVar7 = (byte *)((byte *)*puVar5);
    if ((byte *)(pbVar7) != (byte *)((byte *)*param_1)) {
      cVar10 = (char)('\x01');
      pbVar4 = (byte *)(pbVar7);
      goto LAB_10c7a97b;
    }
  }
  iVar6 = (int)(*(int *)(iVar1 + 0x20));
  pbVar7 = (byte *)((byte *)0x0);
  if (iVar6 != 0) {
    bVar3 = (byte)(bVar2);
    if ((param_1[0x17] & 0x800U) != 0) {
      bVar3 = (byte)(thunk_FUN_10c80150((int)(bVar2)), 0);
      iVar6 = (int)(*(int *)(iVar1 + 0x20));
    }
    pbVar7 = (byte *)((byte *)thunk_FUN_10c71eb0(bVar3,iVar6), 0);
    if ((char)pbVar7 != '\0') {
      cVar10 = (char)('\x01');
      goto LAB_10c7a97b;
    }
  }
  if ((*(int *)(iVar1 + 0x18) == 0) ||
     (pbVar7 = (byte *)((byte *)(1 << (bVar2 & 7))), (*(byte *)((uint)(bVar2 >> 3) + *(int *)(iVar1 + 0x18)) & (byte)pbVar7) == 0)) {
    cVar10 = (char)('\0');
  }
  else {
    cVar10 = (char)('\x01');
  }
LAB_10c7a97b:
  uVar8 = (uint)(((uint)((int3)((uint)pbVar7 >> 8)) << 8 | (uint)(*(undefined1 *)(iVar1 + 8))) & 0xffffff01);
  uVar9 = (uint3)((uint3)(uVar8 >> 8));
  if (cVar10 != (char)uVar8) {
    *param_1 = (int)((int)pbVar4);
    return (int)(((uint)(uVar9) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar9 << 8);
}


// Reference entry 10c7bb40; body size 39 bytes.
#line 1 "ENTRY_10c7bb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c7bb40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 2) != '\0') {
    uVar1 = (undefined4)(param_1[1]);
    *param_2 = (undefined4)(*param_1);
    param_2[1] = (undefined4)(uVar1);
    return;
  }
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 10c7bb70; body size 157 bytes.
#line 1 "ENTRY_10c7bb70"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c7bb70(int param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = (int)(*(int *)(param_2 + 0xc));
  iVar2 = (int)(*(int *)(param_3 + 0xc));
  *(undefined4*)(param_3 + 0xc) = (undefined4)(0);
  iVar3 = (int)(*(int *)(param_1 + 4));
  *(int*)(param_1 + 4) = (int)(param_3);
  *(undefined4*)(param_3 + 0xc) = (undefined4)(0);
  *(int*)(iVar3 + 0xc) = (int)(param_3);
  for (iVar3 = (int)(*(int *)(iVar1 + 0x18)); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x18)) {
    iVar1 = (int)(iVar3);
  }
  puVar4 = (undefined4 *)(operator_new(0x1c), 0);
  if ((undefined4 *)(puVar4) == (undefined4 *)(0x0)) {
    *(undefined4*)(iVar1 + 0x18) = (undefined4)(0);
    DAT_0000000c = (int)(iVar2);
    *(undefined4*)(iVar2 + 0x10) = (undefined4)(*(undefined4 *)(iVar1 + 0x18));
    return;
  }
  puVar4[5] = (undefined4)(param_3);
  puVar4[1] = (undefined4)(0x10);
  puVar4[2] = (undefined4)(0);
  puVar4[3] = (undefined4)(0);
  puVar4[4] = (undefined4)(0);
  *puVar4 = (undefined4)((uint)&ghidra_vftable_std_Node_if);
  puVar4[6] = (undefined4)(0);
  *(undefined4**)(iVar1 + 0x18) = (undefined4 *)(puVar4);
  puVar4[3] = (undefined4)(iVar2);
  *(undefined4*)(iVar2 + 0x10) = (undefined4)(*(undefined4 *)(iVar1 + 0x18));
  return;
}


// Reference entry 10c7bc40; body size 7 bytes.
#line 1 "ENTRY_10c7bc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c7bc40(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10c7bc50; body size 22 bytes.
#line 1 "ENTRY_10c7bc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c7bc50(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10c7bc70((int)(param_2));
  *(undefined4*)(param_1 + 4) = (undefined4)(param_2);
  return;
}


// Reference entry 10c7bd30; body size 14 bytes.
#line 1 "ENTRY_10c7bd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7bd30(undefined4 *param_1)

{
  thunk_FUN_10c7cce0((int)(0x15));
  return (undefined4)(*param_1);
}


// Reference entry 10c7bd60; body size 40 bytes.
#line 1 "ENTRY_10c7bd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c7bd60(size_t param_2)
{
  size_t *param_1 = (size_t *)this;
  void *pvVar1;
  
  pvVar1 = (void *)(realloc((void *)param_1[2], (void *)(param_2) ), 0);
  if ((void *)(pvVar1) != (void *)(0x0)) {
    *param_1 = (size_t)(param_2);
    param_1[2] = (size_t)((size_t)pvVar1);
    return;
  }
                    
  std::_Xbad_alloc();
}


// Reference entry 10c7bda0; body size 26 bytes.
#line 1 "ENTRY_10c7bda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c7bda0(int param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 0x4c) == (int)(param_2)) {
    thunk_FUN_10c7cd70();
    return;
  }
                    
  thunk_FUN_10c7bd50(param_3);
}


// Reference entry 10c7bdd0; body size 3 bytes.
#line 1 "ENTRY_10c7bdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7bdd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c7bde0; body size 4 bytes.
#line 1 "ENTRY_10c7bde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7bde0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 10c7bdf0; body size 3 bytes.
#line 1 "ENTRY_10c7bdf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7bdf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c7be00; body size 3 bytes.
#line 1 "ENTRY_10c7be00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7be00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c7be10; body size 3 bytes.
#line 1 "ENTRY_10c7be10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7be10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c7be20; body size 3 bytes.
#line 1 "ENTRY_10c7be20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7be20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c7be30; body size 3 bytes.
#line 1 "ENTRY_10c7be30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7be30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c7be40; body size 3 bytes.
#line 1 "ENTRY_10c7be40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7be40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c7be50; body size 3 bytes.
#line 1 "ENTRY_10c7be50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7be50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c7be60; body size 3 bytes.
#line 1 "ENTRY_10c7be60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7be60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c7be70; body size 3 bytes.
#line 1 "ENTRY_10c7be70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7be70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c7be80; body size 4 bytes.
#line 1 "ENTRY_10c7be80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7be80(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x68));
}


// Reference entry 10c7be90; body size 4 bytes.
#line 1 "ENTRY_10c7be90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7be90(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x14));
}


// Reference entry 10c7bea0; body size 4 bytes.
#line 1 "ENTRY_10c7bea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c7bea0(int param_1)

{
  return (int)(param_1 + 4);
}


// Reference entry 10c7beb0; body size 3 bytes.
#line 1 "ENTRY_10c7beb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7beb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c7bec0; body size 3 bytes.
#line 1 "ENTRY_10c7bec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7bec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c7bed0; body size 3 bytes.
#line 1 "ENTRY_10c7bed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7bed0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c7bee0; body size 3 bytes.
#line 1 "ENTRY_10c7bee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7bee0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c7bef0; body size 3 bytes.
#line 1 "ENTRY_10c7bef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7bef0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c7bf00; body size 3 bytes.
#line 1 "ENTRY_10c7bf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7bf00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c7bf10; body size 3 bytes.
#line 1 "ENTRY_10c7bf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7bf10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c7bf20; body size 3 bytes.
#line 1 "ENTRY_10c7bf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7bf20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c7c080; body size 3 bytes.
#line 1 "ENTRY_10c7c080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7c080(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c7c090; body size 4 bytes.
#line 1 "ENTRY_10c7c090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7c090(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c7c0a0; body size 4 bytes.
#line 1 "ENTRY_10c7c0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7c0a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c7c0b0; body size 31 bytes.
#line 1 "ENTRY_10c7c0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c7c0b0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10c7a9d0((int)(0x10),(int)(param_1)), 0);
  if (iVar1 == 0) {
    return;
  }
                    
  thunk_FUN_10c7bd50(2);
}


// Reference entry 10c7c0e0; body size 76 bytes.
#line 1 "ENTRY_10c7c0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7c0e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)((int)*(char *)(param_1 + 0x48));
  if ((*(uint *)(param_1 + 0x50) & 0x400000) != 0) {
    switch(iVar2) {
    case 0x44:
    case 0x53:
    case 0x57:
    case 99:
    case 100:
    case 0x73:
    case 0x77:
      goto LAB_10c7c135;
    default:
LAB_10c7c129:
      *(int*)(param_1 + 0x44) = (int)(iVar2);
      thunk_FUN_10c7cd70();
      return (undefined4)(1);
    }
  }
  switch(iVar2) {
  case 0x22:
  case 0x2f:
    iVar1 = (int)(0x18);
    break;
  default:
    goto LAB_10c7c135;
  case 0x24:
  case 0x2a:
  case 0x2e:
  case 0x5b:
  case 0x5c:
  case 0x5e:
  case 0x7c:
    goto LAB_10c7c129;
  case 0x28:
  case 0x29:
  case 0x2b:
  case 0x3f:
  case 0x7b:
  case 0x7d:
    iVar1 = (int)(0x17);
  }
  if ((*(uint *)(param_1 + 0x50) >> iVar1 & 1) != 0) goto LAB_10c7c129;
LAB_10c7c135:
  return (undefined4)(0);
}


// Reference entry 10c7c2b0; body size 27 bytes.
#line 1 "ENTRY_10c7c2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c7c2b0(int param_1,int param_2)

{
  *(int*)(*(int *)(param_1 + 0x10) + 0xc) = (int)(param_2);
  *(undefined4*)(param_2 + 0x10) = (undefined4)(*(undefined4 *)(param_1 + 0x10));
  *(int*)(param_1 + 0x10) = (int)(param_2);
  *(int*)(param_2 + 0xc) = (int)(param_1);
  return;
}


// Reference entry 10c7c2e0; body size 65 bytes.
#line 1 "ENTRY_10c7c2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

byte __fastcall FUN_10c7c2e0(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x50));
  if ((uVar1 & 0x400000) != 0) {
    switch(*(undefined1 *)(param_1 + 0x48)) {
    case 0x44:
    case 0x53:
    case 0x57:
    case 99:
    case 100:
    case 0x73:
    case 0x77:
      goto LAB_10c7c330;
    default:
LAB_10c7c31b:
      return (byte)(1);
    }
  }
  switch(*(undefined1 *)(param_1 + 0x48)) {
  case 0x22:
  case 0x2f:
    return (byte)((byte)(uVar1 >> 0x18) & 1);
  default:
LAB_10c7c330:
    return (byte)(0);
  case 0x24:
  case 0x2a:
  case 0x2e:
  case 0x5b:
  case 0x5c:
  case 0x5e:
  case 0x7c:
    goto LAB_10c7c31b;
  case 0x28:
  case 0x29:
  case 0x2b:
  case 0x3f:
  case 0x7b:
  case 0x7d:
    return (byte)((byte)(uVar1 >> 0x17) & 1);
  }
}


// Reference entry 10c7c460; body size 100 bytes.
#line 1 "ENTRY_10c7c460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c7c460(undefined4 *param_1)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_1[0x18]);
  if (((uVar2 & 0x100) == 0) && (pbVar1 = (byte *)((byte *)*param_1),(byte *)( pbVar1) == (byte *)param_1[0x13])) {
    if ((byte *)(pbVar1) == (byte *)param_1[0x14]) {
      return (uint)(((uint)((int3)(uVar2 >> 8)) << 8 | (uint)((uVar2 & 0xc) == 0)));
    }
    if (((uVar2 & 4) == 0) && (uVar2 = (uint)((uint)*pbVar1), (&DAT_1191a7c0)[uVar2] != '\0')) {
      return (uint)(1);
    }
  }
  else {
    pbVar1 = (byte *)((byte *)*param_1);
    if ((byte *)(pbVar1) != (byte *)param_1[0x14]) {
      return (uint)((uint)((&DAT_1191a7c0)[pbVar1[-1]] != (&DAT_1191a7c0)[*pbVar1]));
    }
    if (((uVar2 & 8) == 0) && (uVar2 = (uint)((uint)pbVar1[-1]), (&DAT_1191a7c0)[uVar2] != '\0')) {
      return (uint)(1);
    }
  }
  return (bool)0;
}


// Reference entry 10c7c4e0; body size 12 bytes.
#line 1 "ENTRY_10c7c4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10c7c4e0(byte param_1)

{
  return (undefined1)((&DAT_1191a7c0)[param_1]);
}


// Reference entry 10c7c4f0; body size 12 bytes.
#line 1 "ENTRY_10c7c4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10c7c4f0(byte param_1)

{
  return (undefined1)((&DAT_1191a7c0)[param_1]);
}


// Reference entry 10c7c500; body size 50 bytes.
#line 1 "ENTRY_10c7c500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10c7c500(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  *(undefined4*)(param_2 + 0x10) = (undefined4)(*(undefined4 *)(param_1 + 4));
  iVar1 = (int)(*(int *)(param_1 + 4));
  if (*(int *)(iVar1 + 0xc) != 0) {
    *(int*)(param_2 + 0xc) = (int)(*(int *)(iVar1 + 0xc));
    *(int*)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 0x10) = (int)(param_2);
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  *(int*)(iVar1 + 0xc) = (int)(param_2);
  *(int*)(param_1 + 4) = (int)(param_2);
  return (int)(param_2);
}


// Reference entry 10c7c540; body size 5 bytes.
#line 1 "ENTRY_10c7c540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c7c540(int param_1)

{
  return (int)(*(int *)(param_1 + 0xc) + 1);
}


// Reference entry 10c7c550; body size 8 bytes.
#line 1 "ENTRY_10c7c550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c7c550(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)((uint *)(*(int *)(param_1 + 4) + 8));
  *puVar1 = (uint)(*puVar1 | 4);
  return;
}


// Reference entry 10c7ccd0; body size 8 bytes.
#line 1 "ENTRY_10c7ccd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c7ccd0(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)((uint *)(*(int *)(param_1 + 4) + 8));
  *puVar1 = (uint)(*puVar1 ^ 1);
  return;
}


// Reference entry 10c7cde0; body size 4 bytes.
#line 1 "ENTRY_10c7cde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c7cde0(int param_1)

{
  return (int)(param_1 + 0x2c);
}


// Reference entry 10c7cdf0; body size 16 bytes.
#line 1 "ENTRY_10c7cdf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10c7cdf0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10c7a9d0((int)(8),(int)(3)), 0);
  return (bool)(iVar1 != 3);
}


// Reference entry 10c7ce10; body size 3 bytes.
#line 1 "ENTRY_10c7ce10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c7ce10(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10c7ce20; body size 3 bytes.
#line 1 "ENTRY_10c7ce20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c7ce20(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10c7ce30; body size 3 bytes.
#line 1 "ENTRY_10c7ce30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c7ce30(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10c7ce40; body size 4 bytes.
#line 1 "ENTRY_10c7ce40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c7ce40(int param_1)

{
  return (int)(param_1 + 0x14);
}


// Reference entry 10c7ce50; body size 239 bytes.
#line 1 "ENTRY_10c7ce50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c7ce50(int param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_4;
  
  iVar4 = (int)(0);
  iVar5 = (int)(-1);
  iVar3 = (int)(*(int *)(param_1 + 0x4c));
  if (iVar3 == 0x2a) goto LAB_10c7ce6b;
  if (iVar3 == 0x2b) {
    iVar4 = (int)(1);
    goto LAB_10c7ce6b;
  }
  if (iVar3 == 0x3f) {
    iVar5 = (int)(1);
    goto LAB_10c7ce6b;
  }
  if (iVar3 != 0x7b) {
    return;
  }
  thunk_FUN_10c7cd70();
  iVar4 = (int)(thunk_FUN_10c7a9d0((int)(10),(int)(0x7fffffff)), 0);
  if (iVar4 == 0x7fffffff) goto LAB_10c7cf36;
  iVar3 = (int)(*(int *)(param_1 + 0x4c));
  iVar4 = (int)(*(int *)(param_1 + 0x44));
  iVar6 = (int)(iVar4);
  if (iVar3 == 0x2c) {
    thunk_FUN_10c7cd70();
    if (*(int *)(param_1 + 0x4c) != 0x7d) {
      cVar2 = (char)(thunk_FUN_10c7a2d0(), 0);
      if (cVar2 == '\0') goto LAB_10c7cf36;
      iVar3 = (int)(*(int *)(param_1 + 0x4c));
      iVar6 = (int)(*(int *)(param_1 + 0x44));
      goto LAB_10c7cf07;
    }
  }
  else {
LAB_10c7cf07:
    iVar5 = (int)(iVar6);
    if (iVar3 != 0x7d) goto LAB_10c7cf36;
  }
  if ((iVar5 == -1) || (iVar4 <= iVar5)) {
LAB_10c7ce6b:
    puVar1 = (uint *)((uint *)(*(int *)(param_1 + 0x28) + 8));
    *puVar1 = (uint)(*puVar1 | 4);
    thunk_FUN_10c7cd70();
    *(unsigned short*)((char *)&iStack_4 + 1) = (unsigned short)((uint3)((uint)param_1 >> 8));
    if (((*(uint *)(param_1 + 0x50) & 0x400) != 0) && (*(int *)(param_1 + 0x4c) == 0x3f)) {
      iStack_4 = (int)((uint)*(unsigned short *)((char *)&iStack_4 + 1) << 8);
      thunk_FUN_10c7cd70();
      thunk_FUN_10c78090((int)(iVar4),(int)(iVar5),(int)(iStack_4));
      return;
    }
    iStack_4 = (int)(((uint)(*(unsigned short *)((char *)&iStack_4 + 1)) << 8 | (uint)(1)));
    thunk_FUN_10c78090((int)(iVar4),(int)(iVar5),(int)(iStack_4));
    return;
  }
LAB_10c7cf36:
                    
  thunk_FUN_10c7bd50(7);
}


// Reference entry 10c7cf80; body size 6 bytes.
#line 1 "ENTRY_10c7cf80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c7cf80(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10c7cf90; body size 6 bytes.
#line 1 "ENTRY_10c7cf90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c7cf90(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10c7cfa0; body size 6 bytes.
#line 1 "ENTRY_10c7cfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c7cfa0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10c7cfb0; body size 28 bytes.
#line 1 "ENTRY_10c7cfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c7cfb0(int param_2)
{
  int *param_1 = (int *)this;
  if (param_2 != 0) {
    LOCK();
    *(int*)(param_2 + 0x20) = (int)(*(int *)(param_2 + 0x20) + 1);
    UNLOCK();
  }
  thunk_FUN_10c7d430();
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10c7d090; body size 10 bytes.
#line 1 "ENTRY_10c7d090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c7d090(uint param_2)
{
  int param_1 = (int )this;
  *(uint*)(param_1 + 0x60) = (uint)(*(uint *)(param_1 + 0x60) | param_2);
  return;
}


// Reference entry 10c7d0a0; body size 7 bytes.
#line 1 "ENTRY_10c7d0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c7d0a0(int *param_1)

{
  *(uint*)(*param_1 + 8) = (uint)(*(uint *)(*param_1 + 8) | 8);
  return;
}


// Reference entry 10c7d0b0; body size 4 bytes.
#line 1 "ENTRY_10c7d0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c7d0b0(int param_1)

{
  return (int)(param_1 + 0x20);
}


// Reference entry 10c7d0c0; body size 4 bytes.
#line 1 "ENTRY_10c7d0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7d0c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c7d3a0; body size 4 bytes.
#line 1 "ENTRY_10c7d3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7d3a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10c7d3f0; body size 48 bytes.
#line 1 "ENTRY_10c7d3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c7d3f0(int param_1)

{
  int iVar1;
  
  while (param_1 != 0) {
    iVar1 = (int)(*(int *)(param_1 + 0x10));
    free(*(void **)(param_1 + 0xc));
    thunk_FUN_1148a50e(param_1,0x14);
    param_1 = (int)(iVar1);
  }
  return;
}


// Reference entry 10c7d8b0; body size 48 bytes.
#line 1 "ENTRY_10c7d8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10c7d8b0(void *param_1,int param_2,unsigned int recovered_unused_stack_0)

{
  if (param_2 != 0) {
    memset(param_1,0,param_2 * 8);
    return (void *)((char *)((int)param_1 + param_2 * 8));
  }
  return (void *)(param_1);
}


// Reference entry 10c7d930; body size 44 bytes.
#line 1 "ENTRY_10c7d930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c7d930(undefined4 *param_1,undefined4 *param_2,int param_3,unsigned int recovered_unused_stack_0)

{
  undefined4 uVar1;
  
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    param_3 = (int)(param_3 - (int)param_1);
    do {
      uVar1 = (undefined4)(param_1[1]);
      *(undefined4*)(param_3 + (int)param_1) = (undefined4)(*param_1);
      *(undefined4*)(param_3 + 4 + (int)param_1) = (undefined4)(uVar1);
      param_1 = (undefined4 *)(param_1 + 2);
    } while ((undefined4 *)(param_1) != (undefined4 *)(param_2));
  }
  return;
}


// Reference entry 10c7d970; body size 27 bytes.
#line 1 "ENTRY_10c7d970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c7d970(void *param_1,int param_2,void *param_3,unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10c7d9a0; body size 46 bytes.
#line 1 "ENTRY_10c7d9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c7d9a0(undefined8 *param_1,undefined8 *param_2,int param_3,unsigned int recovered_unused_stack_0)

{
  if ((undefined8 *)(param_1) != (undefined8 *)(param_2)) {
    param_3 = (int)(param_3 - (int)param_1);
    do {
      *(undefined8*)(param_3 + (int)param_1) = (undefined8)(*param_1);
      *(undefined4*)(param_3 + 8 + (int)param_1) = (undefined4)(*(undefined4 *)(param_1 + 1));
      param_1 = (undefined8 *)((undefined8 *)((int)param_1 + 0xc));
    } while ((undefined8 *)(param_1) != (undefined8 *)(param_2));
  }
  return;
}


// Reference entry 10c7d9e0; body size 44 bytes.
#line 1 "ENTRY_10c7d9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c7d9e0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    param_3 = (int)(param_3 - (int)param_1);
    do {
      uVar1 = (undefined4)(param_1[1]);
      *(undefined4*)(param_3 + (int)param_1) = (undefined4)(*param_1);
      *(undefined4*)(param_3 + 4 + (int)param_1) = (undefined4)(uVar1);
      param_1 = (undefined4 *)(param_1 + 2);
    } while ((undefined4 *)(param_1) != (undefined4 *)(param_2));
  }
  return;
}


// Reference entry 10c7da20; body size 27 bytes.
#line 1 "ENTRY_10c7da20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c7da20(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10c7da50; body size 46 bytes.
#line 1 "ENTRY_10c7da50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c7da50(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  if ((undefined8 *)(param_1) != (undefined8 *)(param_2)) {
    param_3 = (int)(param_3 - (int)param_1);
    do {
      *(undefined8*)(param_3 + (int)param_1) = (undefined8)(*param_1);
      *(undefined4*)(param_3 + 8 + (int)param_1) = (undefined4)(*(undefined4 *)(param_1 + 1));
      param_1 = (undefined8 *)((undefined8 *)((int)param_1 + 0xc));
    } while ((undefined8 *)(param_1) != (undefined8 *)(param_2));
  }
  return;
}


// Reference entry 10c7da90; body size 3 bytes.
#line 1 "ENTRY_10c7da90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7da90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c7dd00; body size 87 bytes.
#line 1 "ENTRY_10c7dd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c7dd00(uint param_1)

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


// Reference entry 10c7dd70; body size 90 bytes.
#line 1 "ENTRY_10c7dd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c7dd70(uint param_1)

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


// Reference entry 10c7dfa0; body size 23 bytes.
#line 1 "ENTRY_10c7dfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void  FUN_10c7dfa0(void *param_1,size_t param_2,char param_3)

{
  memset(param_1,(int)param_3,param_2);
}


// Reference entry 10c7dfc0; body size 17 bytes.
#line 1 "ENTRY_10c7dfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c7dfc0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)((undefined4 *)*param_1);
  }
  *param_2 = (undefined4)(param_1);
  return;
}


// Reference entry 10c7dfe0; body size 9 bytes.
#line 1 "ENTRY_10c7dfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c7dfe0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10c7dff0; body size 9 bytes.
#line 1 "ENTRY_10c7dff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c7dff0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10c7e000; body size 22 bytes.
#line 1 "ENTRY_10c7e000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c7e000(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0xc);
}


// Reference entry 10c7e020; body size 3 bytes.
#line 1 "ENTRY_10c7e020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7e020(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c7e030; body size 61 bytes.
#line 1 "ENTRY_10c7e030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c7e030(int param_1,int param_2)

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


// Reference entry 10c7e080; body size 61 bytes.
#line 1 "ENTRY_10c7e080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c7e080(int param_1,int param_2)

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


// Reference entry 10c7e0d0; body size 60 bytes.
#line 1 "ENTRY_10c7e0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c7e0d0(int param_1,int param_2)

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


// Reference entry 10c7e310; body size 24 bytes.
#line 1 "ENTRY_10c7e310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c7e310(int *param_2)
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


// Reference entry 10c7e530; body size 13 bytes.
#line 1 "ENTRY_10c7e530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7e530(int *param_1)

{
  if (*param_1 != (int)((0))) {
    return (undefined4)(*(undefined4 *)(*param_1 + 0x14));
  }
  return (undefined4)(0);
}


// Reference entry 10c7e550; body size 3 bytes.
#line 1 "ENTRY_10c7e550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7e550(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c7e940; body size 6 bytes.
#line 1 "ENTRY_10c7e940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c7e940(void)

{
  return (char *)("SCIMdnsDelegate");
}


// Reference entry 10c7e950; body size 6 bytes.
#line 1 "ENTRY_10c7e950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10c7e950(void)

{
  return (char *)("SCIMdnsListener");
}


// Reference entry 10c7e9a0; body size 7 bytes.
#line 1 "ENTRY_10c7e9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c7e9a0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10c7e9b0; body size 80 bytes.
#line 1 "ENTRY_10c7e9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c7e9b0(byte param_2,ushort param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 in_EAX;
  uint uVar2;
  
  if (param_3 != 0xffff) {
    iVar1 = (int)(*(int *)(*(int *)(param_1 + 4) + 0xc));
    return (uint)(((uint)((int3)((uint)iVar1 >> 8)) << 8 | (uint)((*(ushort *)(iVar1 + (uint)param_2 * 2) & param_3) != 0)));
  }
  uVar2 = (uint)(((uint)((int3)((uint)in_EAX >> 8)) << 8 | (uint)(param_2)));
  if ((param_2 != 0x5f) &&
     (uVar2 = (uint)(*(uint *)(*(int *)(param_1 + 4) + 0xc)), (*(ushort *)(uVar2 + (uint)param_2 * 2) & 0x107) == 0)) {
    return (bool)0;
  }
  return (uint)(((uint)((int3)(uVar2 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 10c7ea20; body size 17 bytes.
#line 1 "ENTRY_10c7ea20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c7ea20(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = (char *)(param_1 + 1);
  do {
    cVar2 = (char)(*param_1);
    param_1 = (char *)(param_1 + 1);
  } while (cVar2 != '\0');
  return (int)((int)param_1 - (int)pcVar1);
}


// Reference entry 10c7ea40; body size 14 bytes.
#line 1 "ENTRY_10c7ea40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c7ea40(int *param_1)

{
  if (*param_1 != (int)((0))) {
    return (int)(*(int *)(*param_1 + 0x1c) + -1);
  }
  return (int)(0);
}


// Reference entry 10c7ea60; body size 3 bytes.
#line 1 "ENTRY_10c7ea60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10c7ea60(void)

{
  return (undefined1)(0x7f);
}


// Reference entry 10c7ea70; body size 3 bytes.
#line 1 "ENTRY_10c7ea70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10c7ea70(void)

{
  return (undefined1)(0xff);
}


// Reference entry 10c7ea80; body size 6 bytes.
#line 1 "ENTRY_10c7ea80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c7ea80(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10c7ea90; body size 6 bytes.
#line 1 "ENTRY_10c7ea90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c7ea90(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10c7eaa0; body size 6 bytes.
#line 1 "ENTRY_10c7eaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c7eaa0(void)

{
  return (undefined4)(0x15555555);
}


// Reference entry 10c7eab0; body size 6 bytes.
#line 1 "ENTRY_10c7eab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c7eab0(void)

{
  return (undefined4)(0x7fffffff);
}


// Reference entry 10c7eac0; body size 6 bytes.
#line 1 "ENTRY_10c7eac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c7eac0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10c7ead0; body size 6 bytes.
#line 1 "ENTRY_10c7ead0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c7ead0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10c7eae0; body size 6 bytes.
#line 1 "ENTRY_10c7eae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c7eae0(void)

{
  return (undefined4)(0x15555555);
}


// Reference entry 10c7eaf0; body size 21 bytes.
#line 1 "ENTRY_10c7eaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c7eaf0(byte *param_1)

{
  *param_1 = (byte)(*param_1 & 0xf8);
  param_1[1] = (byte)(0);
  param_1[2] = (byte)(0);
  param_1[4] = (byte)(0);
  param_1[5] = (byte)(0);
  param_1[6] = (byte)(0);
  param_1[7] = (byte)(0);
  return;
}


// Reference entry 10c7fb10; body size 3 bytes.
#line 1 "ENTRY_10c7fb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7fb10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c7fc70; body size 28 bytes.
#line 1 "ENTRY_10c7fc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c7fc70(undefined4 *param_1)

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


// Reference entry 10c7fca0; body size 20 bytes.
#line 1 "ENTRY_10c7fca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c7fca0(int *param_1)

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


// Reference entry 10c7fcc0; body size 9 bytes.
#line 1 "ENTRY_10c7fcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c7fcc0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10c7fd80; body size 105 bytes.
#line 1 "ENTRY_10c7fd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c7fd80(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  void *_Dst;
  int iVar2;
  
  _Dst = (void *)((void *)param_1[1]);
  iVar2 = (int)(*param_1);
  uVar1 = (uint)((int)_Dst - iVar2 >> 3);
  if (param_2 < uVar1) {
    param_1[1] = (int)(iVar2 + param_2 * 8);
    return;
  }
  if (uVar1 < param_2) {
    if ((uint)(param_1[2] - iVar2 >> 3) < param_2) {
      thunk_FUN_10c72bf0<>(param_2,&param_2);
      return;
    }
    iVar2 = (int)(param_2 - uVar1);
    if (iVar2 != 0) {
      memset(_Dst,0,iVar2 * 8);
      _Dst = (char *)((char *)((int)_Dst + iVar2 * 8));
    }
    param_1[1] = (int)((int)_Dst);
  }
  return;
}


// Reference entry 10c7ffa0; body size 5 bytes.
#line 1 "ENTRY_10c7ffa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c7ffa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c7ffb0; body size 5 bytes.
#line 1 "ENTRY_10c7ffb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c7ffb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c7ffc0; body size 23 bytes.
#line 1 "ENTRY_10c7ffc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c7ffc0(int param_1)

{
  return (int)((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0xc);
}


// Reference entry 10c7ffe0; body size 6 bytes.
#line 1 "ENTRY_10c7ffe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c7ffe0(int *param_1)

{
  return (int)(param_1[1] - *param_1);
}


// Reference entry 10c7fff0; body size 22 bytes.
#line 1 "ENTRY_10c7fff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c7fff0(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0xc);
}


// Reference entry 10c80130; body size 24 bytes.
#line 1 "ENTRY_10c80130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10c80130(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int *param_1 = (int *)this;
  ((SCVtbl_4_3*)(param_1))->v((int)(param_2),(int)(param_3),(int)(param_4));
  return (undefined4)(param_3);
}


// Reference entry 10c80200; body size 9 bytes.
#line 1 "ENTRY_10c80200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c80200(char param_2)
{
  int param_1 = (int )this;
                    
                    
  ((std::ctype<> *)(*(ctype<char> **)(param_1 + 4)))->tolower(param_2);
  return;
}


// Reference entry 10c80210; body size 82 bytes.
#line 1 "ENTRY_10c80210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_10c80210(char param_1,int param_2){
  if (param_2 == 8) {
    if ((byte)(param_1 - 0x30U) < 8) goto LAB_10c80253;
  }
  else {
    if (('/' < param_1) && (param_1 < ':')) {
LAB_10c80253:
      return (int)(param_1 + -0x30);
    }
    if (param_2 == 0x10) {
      if ((byte)(param_1 + 0x9fU) < 6) {
        return (int)(param_1 + -0x57);
      }
      if ((byte)(param_1 + 0xbfU) < 6) {
        return (int)(param_1 + -0x37);
      }
    }
  }
  return (int)(-1);
}


// Reference entry 10c807c0; body size 106 bytes.
#line 1 "ENTRY_10c807c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c807c0(undefined4 *param_1)

{
  thunk_FUN_1124a160((int)(0));
  param_1[0x1843] = (undefined4)((uint)&ghidra_vftable_RHTTPDataIO);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHouseholdSettingGetRequest);
  param_1[0x1843] = (undefined4)((uint)&ghidra_vftable_RHouseholdSettingGetRequest);
  param_1[0x1844] = (undefined4)(0);
  param_1[0x1845] = (undefined4)(0);
  param_1[0x1846] = (undefined4)(0);
  param_1[0x1847] = (undefined4)(0);
  param_1[0x1848] = (undefined4)(0);
  param_1[0x1849] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c80850; body size 111 bytes.
#line 1 "ENTRY_10c80850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c80850(undefined4 *param_1)

{
  thunk_FUN_1124a200((int)("text/plain"),(int)(0));
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RHTTPDataIO);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHouseholdSettingPostRequest);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RHouseholdSettingPostRequest);
  param_1[0x1884] = (undefined4)(0);
  param_1[0x1885] = (undefined4)(0);
  param_1[0x1886] = (undefined4)(0);
  param_1[0x1887] = (undefined4)(0);
  param_1[0x1888] = (undefined4)(0);
  param_1[0x1889] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c80f70; body size 11 bytes.
#line 1 "ENTRY_10c80f70"

/* WARNING: Removing unreachable block_10c80f70 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c80f70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RGetHouseholdSettingAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10c80f80; body size 11 bytes.
#line 1 "ENTRY_10c80f80"

/* WARNING: Removing unreachable block_10c80f80 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c80f80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RSetHouseholdSettingAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10c815d0; body size 18 bytes.
#line 1 "ENTRY_10c815d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c815d0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGetHouseholdSetting);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpGetHouseholdSetting);


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


// Reference entry 10c815f0; body size 18 bytes.
#line 1 "ENTRY_10c815f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c815f0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSetHouseholdSetting);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSetHouseholdSetting);


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


// Reference entry 10c81610; body size 4 bytes.
#line 1 "ENTRY_10c81610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c81610(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10c81dd0; body size 17 bytes.
#line 1 "ENTRY_10c81dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10c81dd0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6114) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6114), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10c81df0; body size 17 bytes.
#line 1 "ENTRY_10c81df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10c81df0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x621c) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x621c), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10c81e30; body size 23 bytes.
#line 1 "ENTRY_10c81e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10c81e30(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6120));
  return (SCStr *)(param_2);
}


// Reference entry 10c81e90; body size 17 bytes.
#line 1 "ENTRY_10c81e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10c81e90(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6110) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6110), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10c81eb0; body size 17 bytes.
#line 1 "ENTRY_10c81eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10c81eb0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6210) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6210), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10c81ed0; body size 23 bytes.
#line 1 "ENTRY_10c81ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10c81ed0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x615c));
  return (SCStr *)(param_2);
}


// Reference entry 10c83c20; body size 13 bytes.
#line 1 "ENTRY_10c83c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c83c20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  ((SCVtbl_1_0*)(*(int **)(param_1 + 0x18)))->v();
  return (undefined4)(0);
}


// Reference entry 10c83cd0; body size 6 bytes.
#line 1 "ENTRY_10c83cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c83cd0(void)

{
  return (undefined4)(5);
}


// Reference entry 10c83e40; body size 8 bytes.
#line 1 "ENTRY_10c83e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10c83e40(int param_2)
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
  puVar4 = (undefined4 *)(*(undefined4 **)(param_1 + 0x2c), 0);
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
        *(undefined4**)(param_1 + 0x2c) = (undefined4 *)(puVar4);
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


// Reference entry 10c83ec0; body size 13 bytes.
#line 1 "ENTRY_10c83ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c83ec0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  ((SCVtbl_1_0*)(*(int **)(param_1 + 0x18)))->v();
  return (undefined4)(0);
}


// Reference entry 10c83ed0; body size 44 bytes.
#line 1 "ENTRY_10c83ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c83ed0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(thunk_FUN_111a2df0(), 0);
  uVar2 = (undefined4)(thunk_FUN_111a2df0(), 0);
  ((SCVtbl_4_2*)(*(int **)(param_1 + 0x18)))->v((int)(uVar2),(int)(uVar1));
  return (undefined4)(0);
}


// Reference entry 10c83f40; body size 44 bytes.
#line 1 "ENTRY_10c83f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c83f40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(thunk_FUN_111a2df0(), 0);
  uVar2 = (undefined4)(thunk_FUN_111a2df0(), 0);
  ((SCVtbl_2_2*)(*(int **)(param_1 + 0x18)))->v((int)(uVar1),(int)(uVar2));
  return (undefined4)(0);
}


// Reference entry 10c83f80; body size 8 bytes.
#line 1 "ENTRY_10c83f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10c83f80(int param_2)
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
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x2c), 0);
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
    *(undefined4**)(param_1 + 0x2c) = (undefined4 *)(puVar1);
  }
  else {
    *puVar2 = (undefined4)(puVar1);
  }
  if ((undefined4 *)(puVar3) == *(undefined4 **)(param_1 + 0x30)) {
    *(undefined4*)(param_1 + 0x30) = (undefined4)(**(undefined4 **)(param_1 + 0x30), 0);
  }
  puVar1 = (undefined4 *)((undefined4 *)puVar3[1]);

  if (((undefined4 *)(puVar1) != (undefined4 *)(0x0)) && (iVar5 = (int)(thunk_FUN_1123fcd0(puVar1 + 1,uVar4), 0), iVar5 == 0)) {
    ((SCVtbl_0_1*)(puVar1))->v((int)(1));
  }
  thunk_FUN_1148a50e(puVar3,8);

  return (undefined4)(1);

 } catch (...) { }
}


// Reference entry 10c84630; body size 53 bytes.
#line 1 "ENTRY_10c84630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c84630(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0x80000000);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c84680; body size 60 bytes.
#line 1 "ENTRY_10c84680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c84680(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0x80000000);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c846d0; body size 22 bytes.
#line 1 "ENTRY_10c846d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c846d0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c846f0; body size 22 bytes.
#line 1 "ENTRY_10c846f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c846f0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c84710; body size 22 bytes.
#line 1 "ENTRY_10c84710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c84710(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c84730; body size 22 bytes.
#line 1 "ENTRY_10c84730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c84730(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c848c0; body size 18 bytes.
#line 1 "ENTRY_10c848c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c848c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c848e0; body size 25 bytes.
#line 1 "ENTRY_10c848e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c848e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c84900; body size 25 bytes.
#line 1 "ENTRY_10c84900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c84900(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c84920; body size 18 bytes.
#line 1 "ENTRY_10c84920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c84920(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c84940; body size 25 bytes.
#line 1 "ENTRY_10c84940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c84940(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c84960; body size 25 bytes.
#line 1 "ENTRY_10c84960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c84960(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c84980; body size 22 bytes.
#line 1 "ENTRY_10c84980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c84980(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c849a0; body size 22 bytes.
#line 1 "ENTRY_10c849a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c849a0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c849c0; body size 5 bytes.
#line 1 "ENTRY_10c849c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c849c0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c849d0; body size 5 bytes.
#line 1 "ENTRY_10c849d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c849d0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c849e0; body size 5 bytes.
#line 1 "ENTRY_10c849e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c849e0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c849f0; body size 5 bytes.
#line 1 "ENTRY_10c849f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c849f0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c84a00; body size 55 bytes.
#line 1 "ENTRY_10c84a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c84a00(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0x80000000);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c84a50; body size 62 bytes.
#line 1 "ENTRY_10c84a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c84a50(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0x80000000);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c84c70; body size 3 bytes.
#line 1 "ENTRY_10c84c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c84c70(void)

{
  return;
}


// Reference entry 10c84c80; body size 3 bytes.
#line 1 "ENTRY_10c84c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c84c80(void)

{
  return;
}


// Reference entry 10c84c90; body size 3 bytes.
#line 1 "ENTRY_10c84c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c84c90(void)

{
  return;
}


// Reference entry 10c84ca0; body size 13 bytes.
#line 1 "ENTRY_10c84ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c84ca0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c84cb0; body size 13 bytes.
#line 1 "ENTRY_10c84cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c84cb0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c84cc0; body size 13 bytes.
#line 1 "ENTRY_10c84cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c84cc0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c84cd0; body size 13 bytes.
#line 1 "ENTRY_10c84cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c84cd0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c84ce0; body size 13 bytes.
#line 1 "ENTRY_10c84ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c84ce0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c84cf0; body size 13 bytes.
#line 1 "ENTRY_10c84cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c84cf0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10c84d00; body size 3 bytes.
#line 1 "ENTRY_10c84d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c84d00(void)

{
  return;
}


// Reference entry 10c84d10; body size 3 bytes.
#line 1 "ENTRY_10c84d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c84d10(void)

{
  return;
}


// Reference entry 10c84d20; body size 3 bytes.
#line 1 "ENTRY_10c84d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c84d20(void)

{
  return;
}


// Reference entry 10c84d30; body size 3 bytes.
#line 1 "ENTRY_10c84d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c84d30(void)

{
  return;
}


// Reference entry 10c84d40; body size 18 bytes.
#line 1 "ENTRY_10c84d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c84d40(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10c84d60; body size 18 bytes.
#line 1 "ENTRY_10c84d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c84d60(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10c84d80; body size 39 bytes.
#line 1 "ENTRY_10c84d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c84d80(undefined4 *param_2)
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


// Reference entry 10c854d0; body size 15 bytes.
#line 1 "ENTRY_10c854d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c854d0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x28);
  return;
}


// Reference entry 10c854f0; body size 15 bytes.
#line 1 "ENTRY_10c854f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c854f0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x28);
  return;
}


// Reference entry 10c85660; body size 5 bytes.
#line 1 "ENTRY_10c85660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c85660(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c85670; body size 7 bytes.
#line 1 "ENTRY_10c85670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c85670(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c85680; body size 7 bytes.
#line 1 "ENTRY_10c85680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c85680(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c85690; body size 7 bytes.
#line 1 "ENTRY_10c85690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c85690(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c856a0; body size 152 bytes.
#line 1 "ENTRY_10c856a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c856a0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)(param_3 - param_1 >> 3);
  if (0x28 < iVar1) {
    iVar2 = (int)(iVar1 + 1 >> 3);
    iVar1 = (int)(iVar2 * 8 + param_1);
    thunk_FUN_10c85ca0(param_1,iVar1,iVar2 * 0x10 + param_1,param_4);
    thunk_FUN_10c85ca0(param_2 + iVar2 * -8,param_2,iVar2 * 8 + param_2,param_4);
    iVar3 = (int)(param_3 + iVar2 * -8);
    thunk_FUN_10c85ca0(param_3 + iVar2 * -0x10,iVar3,param_3,param_4);
    thunk_FUN_10c85ca0(iVar1,param_2,iVar3,param_4);
    return;
  }
  thunk_FUN_10c85ca0(param_1,param_2,param_3,param_4);
  return;
}


// Reference entry 10c85a40; body size 5 bytes.
#line 1 "ENTRY_10c85a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c85a40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c85a50; body size 5 bytes.
#line 1 "ENTRY_10c85a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c85a50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c85e30; body size 8 bytes.
#line 1 "ENTRY_10c85e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c85e30(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10c86a60; body size 5 bytes.
#line 1 "ENTRY_10c86a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c86a60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c86c30; body size 92 bytes.
#line 1 "ENTRY_10c86c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c86c30(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

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
  thunk_FUN_10c86a70(param_1,0,param_2 - (int)param_1 >> 3,param_4,param_5);
  return;
}


// Reference entry 10c86dc0; body size 8 bytes.
#line 1 "ENTRY_10c86dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c86dc0(int param_1)

{
  return (int)(param_1 + -8);
}


// Reference entry 10c87820; body size 5 bytes.
#line 1 "ENTRY_10c87820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c87820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c87830; body size 5 bytes.
#line 1 "ENTRY_10c87830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c87830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c87840; body size 5 bytes.
#line 1 "ENTRY_10c87840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c87840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c87850; body size 5 bytes.
#line 1 "ENTRY_10c87850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c87850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c87860; body size 5 bytes.
#line 1 "ENTRY_10c87860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c87860(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c87870; body size 5 bytes.
#line 1 "ENTRY_10c87870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c87870(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c87880; body size 5 bytes.
#line 1 "ENTRY_10c87880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c87880(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c87890; body size 5 bytes.
#line 1 "ENTRY_10c87890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c87890(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c878a0; body size 5 bytes.
#line 1 "ENTRY_10c878a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c878a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c878b0; body size 5 bytes.
#line 1 "ENTRY_10c878b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c878b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c878c0; body size 5 bytes.
#line 1 "ENTRY_10c878c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c878c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c878d0; body size 5 bytes.
#line 1 "ENTRY_10c878d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c878d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c878e0; body size 5 bytes.
#line 1 "ENTRY_10c878e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c878e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c878f0; body size 5 bytes.
#line 1 "ENTRY_10c878f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c878f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c87900; body size 50 bytes.
#line 1 "ENTRY_10c87900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c87900(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0x80000000);
  param_2[4] = (undefined4)(0);
  param_2[5] = (undefined4)(0);
  param_2[6] = (undefined4)(0);
  return;
}


// Reference entry 10c87940; body size 57 bytes.
#line 1 "ENTRY_10c87940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c87940(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0x80000000);
  param_2[4] = (undefined4)(0);
  param_2[5] = (undefined4)(0);
  param_2[6] = (undefined4)(0);
  param_2[7] = (undefined4)(0);
  return;
}


// Reference entry 10c87990; body size 28 bytes.
#line 1 "ENTRY_10c87990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c87990(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10c87b00; body size 86 bytes.
#line 1 "ENTRY_10c87b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c87b00(int *param_1,int *param_2)

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


// Reference entry 10c87e80; body size 15 bytes.
#line 1 "ENTRY_10c87e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c87e80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10c87ea0; body size 15 bytes.
#line 1 "ENTRY_10c87ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c87ea0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10c880c0; body size 5 bytes.
#line 1 "ENTRY_10c880c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c880c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c880d0; body size 5 bytes.
#line 1 "ENTRY_10c880d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c880d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c880e0; body size 5 bytes.
#line 1 "ENTRY_10c880e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c880e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c880f0; body size 5 bytes.
#line 1 "ENTRY_10c880f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c880f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c88100; body size 5 bytes.
#line 1 "ENTRY_10c88100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c88100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c88110; body size 5 bytes.
#line 1 "ENTRY_10c88110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c88110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c88120; body size 5 bytes.
#line 1 "ENTRY_10c88120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c88120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c88130; body size 5 bytes.
#line 1 "ENTRY_10c88130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c88130(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c88140; body size 5 bytes.
#line 1 "ENTRY_10c88140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c88140(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c88150; body size 5 bytes.
#line 1 "ENTRY_10c88150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c88150(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c88160; body size 5 bytes.
#line 1 "ENTRY_10c88160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c88160(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c88170; body size 5 bytes.
#line 1 "ENTRY_10c88170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c88170(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c88290; body size 31 bytes.
#line 1 "ENTRY_10c88290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  FUN_10c88290(int param_1,int param_2,undefined4 param_3)

{
  thunk_FUN_10c870a0(param_1,param_2,param_2 - param_1 >> 3,param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c883d0; body size 30 bytes.
#line 1 "ENTRY_10c883d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c883d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10c88400; body size 30 bytes.
#line 1 "ENTRY_10c88400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c88400(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10c88610; body size 14 bytes.
#line 1 "ENTRY_10c88610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c88610(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c88630; body size 16 bytes.
#line 1 "ENTRY_10c88630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c88630(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c88650; body size 42 bytes.
#line 1 "ENTRY_10c88650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c88650(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWrapperObj);
  return (undefined4 *)(param_1);
}


// Reference entry 10c88690; body size 18 bytes.
#line 1 "ENTRY_10c88690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c88690(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c886b0; body size 18 bytes.
#line 1 "ENTRY_10c886b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c886b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c88890; body size 11 bytes.
#line 1 "ENTRY_10c88890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c88890(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c888a0; body size 11 bytes.
#line 1 "ENTRY_10c888a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c888a0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c888b0; body size 11 bytes.
#line 1 "ENTRY_10c888b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c888b0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c888c0; body size 11 bytes.
#line 1 "ENTRY_10c888c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c888c0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c888d0; body size 11 bytes.
#line 1 "ENTRY_10c888d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c888d0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c888e0; body size 11 bytes.
#line 1 "ENTRY_10c888e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c888e0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c888f0; body size 11 bytes.
#line 1 "ENTRY_10c888f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c888f0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c88900; body size 11 bytes.
#line 1 "ENTRY_10c88900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c88900(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c88910; body size 16 bytes.
#line 1 "ENTRY_10c88910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c88910(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c88930; body size 16 bytes.
#line 1 "ENTRY_10c88930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c88930(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c88950; body size 23 bytes.
#line 1 "ENTRY_10c88950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 * __thiscall Recovered_Bulk::m_FUN_10c88950(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
  *param_1 = (undefined8)(*param_2);
  *(undefined4*)(param_1 + 1) = (undefined4)(*(undefined4 *)(param_2 + 1));
  return (undefined8 *)(param_1);
}


// Reference entry 10c88970; body size 23 bytes.
#line 1 "ENTRY_10c88970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 * __thiscall Recovered_Bulk::m_FUN_10c88970(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
  *param_1 = (undefined8)(*param_2);
  *(undefined4*)(param_1 + 1) = (undefined4)(*(undefined4 *)(param_2 + 1));
  return (undefined8 *)(param_1);
}


// Reference entry 10c88990; body size 14 bytes.
#line 1 "ENTRY_10c88990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c88990(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c889b0; body size 14 bytes.
#line 1 "ENTRY_10c889b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c889b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c889d0; body size 23 bytes.
#line 1 "ENTRY_10c889d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c889d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c889f0; body size 23 bytes.
#line 1 "ENTRY_10c889f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c889f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c88a10; body size 3 bytes.
#line 1 "ENTRY_10c88a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c88a10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c88a20; body size 3 bytes.
#line 1 "ENTRY_10c88a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c88a20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c89140; body size 42 bytes.
#line 1 "ENTRY_10c89140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c89140(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0x80000000);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c89180; body size 11 bytes.
#line 1 "ENTRY_10c89180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c89180(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c89190; body size 11 bytes.
#line 1 "ENTRY_10c89190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c89190(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c891a0; body size 49 bytes.
#line 1 "ENTRY_10c891a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c891a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0x80000000);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c89630; body size 3 bytes.
#line 1 "ENTRY_10c89630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c89630(void)

{
  return;
}


// Reference entry 10c89640; body size 3 bytes.
#line 1 "ENTRY_10c89640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c89640(void)

{
  return;
}


// Reference entry 10c897c0; body size 5 bytes.
#line 1 "ENTRY_10c897c0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c897c0(int param_1)

{ __asm jmp FUN_100200ae }


// Reference entry 10c897d0; body size 5 bytes.
#line 1 "ENTRY_10c897d0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c897d0(int param_1)

{ __asm jmp FUN_1000e11a }


// Reference entry 10c89b10; body size 72 bytes.
#line 1 "ENTRY_10c89b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c89b10(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piStack_4;
  
  iVar2 = (int)(*param_1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x10) != 0)) {
    piVar1 = (int *)((int *)(iVar2 + 0xc));
    piStack_4 = (int *)(param_1);
    thunk_FUN_10c85310(piVar1,*(undefined4 *)(iVar2 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(iVar2 + 0x10) = (undefined4)(0);
    piStack_4 = (int *)((int *)*piVar1);
    thunk_FUN_10c87ec0(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),&piStack_4);
  }
  return;
}


// Reference entry 10c89b70; body size 72 bytes.
#line 1 "ENTRY_10c89b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c89b70(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piStack_4;
  
  iVar2 = (int)(*param_1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x10) != 0)) {
    piVar1 = (int *)((int *)(iVar2 + 0xc));
    piStack_4 = (int *)(param_1);
    thunk_FUN_10c853f0(piVar1,*(undefined4 *)(iVar2 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(iVar2 + 0x10) = (undefined4)(0);
    piStack_4 = (int *)((int *)*piVar1);
    thunk_FUN_10c87f40(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),&piStack_4);
  }
  return;
}


// Reference entry 10c89c70; body size 65 bytes.
#line 1 "ENTRY_10c89c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c89c70(int *param_2)
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


// Reference entry 10c89e80; body size 14 bytes.
#line 1 "ENTRY_10c89e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c89e80(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10c89ea0; body size 14 bytes.
#line 1 "ENTRY_10c89ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c89ea0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10c89ec0; body size 14 bytes.
#line 1 "ENTRY_10c89ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c89ec0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10c89ee0; body size 14 bytes.
#line 1 "ENTRY_10c89ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c89ee0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10c89f00; body size 14 bytes.
#line 1 "ENTRY_10c89f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c89f00(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10c89f20; body size 14 bytes.
#line 1 "ENTRY_10c89f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c89f20(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10c89f40; body size 14 bytes.
#line 1 "ENTRY_10c89f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c89f40(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10c89f60; body size 14 bytes.
#line 1 "ENTRY_10c89f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c89f60(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10c89f80; body size 14 bytes.
#line 1 "ENTRY_10c89f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c89f80(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10c89fa0; body size 14 bytes.
#line 1 "ENTRY_10c89fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10c89fa0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10c8a020; body size 7 bytes.
#line 1 "ENTRY_10c8a020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c8a020(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10c8a030; body size 7 bytes.
#line 1 "ENTRY_10c8a030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c8a030(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10c8a040; body size 3 bytes.
#line 1 "ENTRY_10c8a040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8a040(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c8a050; body size 3 bytes.
#line 1 "ENTRY_10c8a050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8a050(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c8a060; body size 6 bytes.
#line 1 "ENTRY_10c8a060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c8a060(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c8a070; body size 6 bytes.
#line 1 "ENTRY_10c8a070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c8a070(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c8a080; body size 6 bytes.
#line 1 "ENTRY_10c8a080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c8a080(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c8a090; body size 6 bytes.
#line 1 "ENTRY_10c8a090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c8a090(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c8a0a0; body size 6 bytes.
#line 1 "ENTRY_10c8a0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c8a0a0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c8a0b0; body size 6 bytes.
#line 1 "ENTRY_10c8a0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c8a0b0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c8a0c0; body size 6 bytes.
#line 1 "ENTRY_10c8a0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c8a0c0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c8a0d0; body size 6 bytes.
#line 1 "ENTRY_10c8a0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c8a0d0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c8a0e0; body size 6 bytes.
#line 1 "ENTRY_10c8a0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c8a0e0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c8a0f0; body size 6 bytes.
#line 1 "ENTRY_10c8a0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c8a0f0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10c8a100; body size 9 bytes.
#line 1 "ENTRY_10c8a100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c8a100(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


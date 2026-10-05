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
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int append(A...); template<class... A> int format(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); static int op_ctor(...) { return 0; } static int op_eq(...) { return 0; } static int op_lt(...) { return 0; } template<class... A> int utf8_length(A...); };
struct AlarmFrequency { char _pad; AlarmFrequency(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct AlbumArtistDisplayOption { char _pad; AlbumArtistDisplayOption(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Artists { char _pad; Artists(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Contributing { char _pad; Contributing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CurrentCrossfadeMode { char _pad; CurrentCrossfadeMode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CurrentIRRepeaterState { char _pad; CurrentIRRepeaterState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DeleteItem { char _pad; DeleteItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DeleteSelectedItems { char _pad; DeleteSelectedItems(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DisplayCustomControl { char _pad; DisplayCustomControl(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Done { char _pad; Done(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Error { char _pad; Error(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Event { char _pad; Event(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Fire { char _pad; Fire(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct HideSwimlane { char _pad; HideSwimlane(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct HouseholdID { char _pad; HouseholdID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Index { char _pad; Index(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct LifecycleNetworkTestWizard { char _pad; LifecycleNetworkTestWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct MLMSettings { char _pad; MLMSettings(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct MoveItem { char _pad; MoveItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct MoveSelectedItems { char _pad; MoveSelectedItems(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct MuseHouseholdID { char _pad; MuseHouseholdID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct NewSortOrder { char _pad; NewSortOrder(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct NextTrackMetaData { char _pad; NextTrackMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct OnPostHouseholdEvent { char _pad; OnPostHouseholdEvent(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct OnSecureSettingsChanged { char _pad; OnSecureSettingsChanged(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct OnSettingsChanged { char _pad; OnSettingsChanged(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct OnStopSearchForZonePlayers { char _pad; OnStopSearchForZonePlayers(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct OnTestEnvChanged { char _pad; OnTestEnvChanged(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct OnThirdPartyMSsChanged { char _pad; OnThirdPartyMSsChanged(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct OnZoneGroupsChanged { char _pad; OnZoneGroupsChanged(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct PlayQueue { char _pad; PlayQueue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ProductRegID { char _pad; ProductRegID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Property { char _pad; Property(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct QueuePlayPauseToggle { char _pad; QueuePlayPauseToggle(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct QueueRemoveItem { char _pad; QueueRemoveItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Remove { char _pad; Remove(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAggregateHelper { char _pad; SCAggregateHelper(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAlarm { char _pad; SCAlarm(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAlarmSettingsDurationItem { char _pad; SCAlarmSettingsDurationItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAlarmSettingsDurationNoLimitItem { char _pad; SCAlarmSettingsDurationNoLimitItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAlarmSettingsEnabledItem { char _pad; SCAlarmSettingsEnabledItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAlarmSettingsFrequencyItem { char _pad; SCAlarmSettingsFrequencyItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAlarmSettingsIncludeGroupedZonesItem { char _pad; SCAlarmSettingsIncludeGroupedZonesItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAlarmSettingsShuffleMusicItem { char _pad; SCAlarmSettingsShuffleMusicItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAlarmSettingsSnoozeDurationItem { char _pad; SCAlarmSettingsSnoozeDurationItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAlarmSettingsSnoozeItem { char _pad; SCAlarmSettingsSnoozeItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAlarmSettingsTimeItem { char _pad; SCAlarmSettingsTimeItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAlarmSettingsVolumeItem { char _pad; SCAlarmSettingsVolumeItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAlarmSettingsZoneItem { char _pad; SCAlarmSettingsZoneItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCBridgeRemovalWizard { char _pad; SCBridgeRemovalWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCCompilationAlbumsSettingItem { char _pad; SCCompilationAlbumsSettingItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCHomePageBrowseItem { char _pad; SCHomePageBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCHomePageDataSource { char _pad; SCHomePageDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCHomePagePinnedItem { char _pad; SCHomePagePinnedItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategoryDefault { char _pad; SCIActionCategoryDefault(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategoryDragAndDrop { char _pad; SCIActionCategoryDragAndDrop(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategoryEdit { char _pad; SCIActionCategoryEdit(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategorySettings { char _pad; SCIActionCategorySettings(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategorySwimlane { char _pad; SCIActionCategorySwimlane(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionWithIntDescriptor { char _pad; SCIActionWithIntDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIAlarm { char _pad; SCIAlarm(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBrowseItem { char _pad; SCIBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIDeviceMusicEqualization { char _pad; SCIDeviceMusicEqualization(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIHousehold { char _pad; SCIHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIMOAPIRateTrack { char _pad; SCIMOAPIRateTrack(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCINowPlaying { char _pad; SCINowPlaying(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCITimeSettingsProperty { char _pad; SCITimeSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIWizard { char _pad; SCIWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCLifecycleLauncherWizard { char _pad; SCLifecycleLauncherWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCLifecycleNetworkTestWizard { char _pad; SCLifecycleNetworkTestWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCLifecyclePlayerRemovalWizard { char _pad; SCLifecyclePlayerRemovalWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCNowPlayingTransportOther { char _pad; SCNowPlayingTransportOther(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCOpJoinHousehold { char _pad; SCOpJoinHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCOpLegacyApConnectJoinNetwork { char _pad; SCOpLegacyApConnectJoinNetwork(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCPlayQueueDataSource { char _pad; SCPlayQueueDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCPlayQueueItem { char _pad; SCPlayQueueItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCPlayQueueItemState { char _pad; SCPlayQueueItemState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCPlayQueueMgr { char _pad; SCPlayQueueMgr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCRateTrackAction { char _pad; SCRateTrackAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSpinnerSettingsProperty { char _pad; SCSpinnerSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSwfObjACInternalListener { char _pad; SCSwfObjACInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSwfObjDDInternalListener { char _pad; SCSwfObjDDInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSwfObjJHHInternalListener { char _pad; SCSwfObjJHHInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSwfObjSPInternalListener { char _pad; SCSwfObjSPInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSwfObjSPListener { char _pad; SCSwfObjSPListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCThreadSafeInc { char _pad; SCThreadSafeInc(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Schedule { char _pad; Schedule(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SelectRoomsWizard { char _pad; SelectRoomsWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SelfTrueplayEnabled { char _pad; SelfTrueplayEnabled(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SelfTrueplayIntro { char _pad; SelfTrueplayIntro(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SelfTrueplaySkipped { char _pad; SelfTrueplaySkipped(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SetDateTime { char _pad; SetDateTime(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Sink { char _pad; Sink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Sonar { char _pad; Sonar(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SonarWizard { char _pad; SonarWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Start { char _pad; Start(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SubmitDiagsWizard { char _pad; SubmitDiagsWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subscribe { char _pad; Subscribe(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SwfObjSP { char _pad; SwfObjSP(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SwfStr { char _pad; SwfStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct System { char _pad; System(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Title { char _pad; Title(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct TransportErrorHttpCode { char _pad; TransportErrorHttpCode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct TrueplayEnd { char _pad; TrueplayEnd(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct TrueplayInit { char _pad; TrueplayInit(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct TrueplayIntro { char _pad; TrueplayIntro(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Unsubscribe { char _pad; Unsubscribe(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Update { char _pad; Update(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UpdateID { char _pad; UpdateID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UsageDataWizard { char _pad; UsageDataWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct View { char _pad; View(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *F;
typedef void *K;
typedef void *SHUFFLE;
typedef void *SID;
typedef void *STATE_SUBMITDIAGS_COMPLETE;
typedef void *STATE_SUBMITDIAGS_DONE;
typedef void *STATE_SUBMITDIAGS_ERROR;
typedef void *STATE_SUBMITDIAGS_INIT;
typedef void *STATE_SUBMITDIAGS_INTRO;
typedef void *STATE_SUBMITDIAGS_SUBMITTING;
typedef void *STATE_USAGE_DATA_COMPLETE;
typedef void *STATE_USAGE_DATA_INIT;
typedef void *STATE_USAGE_DATA_OPT_IN;
typedef void *STATE_USAGE_DATA_POST_COMPLETE;
typedef void *STATE_USAGE_DATA_START;
typedef void *T;
typedef void *UID;
typedef void *WARNING;
using namespace std;
extern "C" void LAB_1000155a(void);
extern "C" void LAB_100015be(void);
extern "C" void LAB_10001f05(void);
extern "C" void LAB_10002793(void);
extern "C" void LAB_1000296e(void);
extern "C" void LAB_10003ebd(void);
extern "C" void LAB_1000417e(void);
extern "C" void LAB_1000468d(void);
extern "C" void LAB_1000579f(void);
extern "C" void LAB_10006005(void);
extern "C" void LAB_10007158(void);
extern "C" void LAB_100074c3(void);
extern "C" void LAB_10008d0f(void);
extern "C" void LAB_10008ea9(void);
extern "C" void LAB_1000b442(void);
extern "C" void LAB_1000b802(void);
extern "C" void LAB_1000d0df(void);
extern "C" void LAB_1000d701(void);
extern "C" void LAB_1000d8d7(void);
extern "C" void LAB_1000daa3(void);
extern "C" void LAB_1000e23c(void);
extern "C" void LAB_1000eb83(void);
extern "C" void LAB_1000f3fd(void);
extern "C" void LAB_1000f993(void);
extern "C" void LAB_10012049(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013543(void);
extern "C" void LAB_10014227(void);
extern "C" void LAB_100144fc(void);
extern "C" void LAB_100149c0(void);
extern "C" void LAB_100153ca(void);
extern "C" void LAB_10015a91(void);
extern "C" void LAB_1001718e(void);
extern "C" void LAB_100179d1(void);
extern "C" void LAB_10019407(void);
extern "C" void LAB_1001989e(void);
extern "C" void LAB_10019f33(void);
extern "C" void LAB_10019f38(void);
extern "C" void LAB_1001aae1(void);
extern "C" void LAB_1001b757(void);
extern "C" void LAB_1001b87e(void);
extern "C" void LAB_1001b91e(void);
extern "C" void LAB_1001b9c3(void);
extern "C" void LAB_1001bdc4(void);
extern "C" void LAB_1001c0ee(void);
extern "C" void LAB_1001c611(void);
extern "C" void LAB_1001c887(void);
extern "C" void LAB_1001cb7a(void);
extern "C" void LAB_1001e0b5(void);
extern "C" void LAB_1001e164(void);
extern "C" void LAB_1001e948(void);
extern "C" void LAB_1001ec63(void);
extern "C" void LAB_1001fcfd(void);
extern "C" void LAB_1001fd9d(void);
extern "C" void LAB_10021350(void);
extern "C" void LAB_10022976(void);
extern "C" void LAB_100238df(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_100251da(void);
extern "C" void LAB_10025360(void);
extern "C" void LAB_10025db5(void);
extern "C" void LAB_10026b7f(void);
extern "C" void LAB_10028d21(void);
extern "C" void LAB_1002938e(void);
extern "C" void LAB_10029f23(void);
extern "C" void LAB_1002b4ae(void);
extern "C" void LAB_1002cd45(void);
extern "C" void LAB_1002d78b(void);
extern "C" void LAB_1002df56(void);
extern "C" void LAB_1002e3a7(void);
extern "C" void LAB_1002faea(void);
extern "C" void LAB_10030bed(void);
extern "C" void LAB_100319fd(void);
extern "C" void LAB_100354f4(void);
extern "C" void LAB_10036af2(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_100371b9(void);
extern "C" void LAB_100373d5(void);
extern "C" void LAB_1003774f(void);
extern "C" void LAB_10037bc8(void);
extern "C" void LAB_1003801e(void);
extern "C" void LAB_100382f3(void);
extern "C" void LAB_10038357(void);
extern "C" void LAB_10038fb9(void);
extern "C" void LAB_100393e2(void);
extern "C" void LAB_1003a1de(void);
extern "C" void LAB_1003a904(void);
extern "C" void LAB_1003adff(void);
extern "C" void LAB_1003ba02(void);
extern "C" void LAB_1003be80(void);
extern "C" void LAB_1003c74a(void);
extern "C" void LAB_1003ceb6(void);
extern "C" void LAB_1003d28a(void);
extern "C" void LAB_1003d97e(void);
extern "C" void LAB_10040dc2(void);
extern "C" void LAB_10041079(void);
extern "C" void LAB_100414cf(void);
extern "C" void LAB_10042fa0(void);
extern "C" void LAB_100438ab(void);
extern "C" void LAB_1004400d(void);
extern "C" void LAB_1004449a(void);
extern "C" void LAB_10049a03(void);
extern "C" void LAB_1004a188(void);
extern "C" void LAB_1004c8f7(void);
extern "C" void LAB_1004c901(void);
extern "C" void LAB_1004ddba(void);
extern "C" void LAB_1004e936(void);
extern "C" void LAB_1004e9b8(void);
extern "C" void LAB_1004ec47(void);
extern "C" void LAB_10051271(void);
extern "C" void LAB_100515e6(void);
extern "C" void LAB_1005175d(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_1005458e(void);
extern "C" void LAB_10055dee(void);
extern "C" void LAB_10056050(void);
extern "C" void LAB_10056389(void);
extern "C" void LAB_10056497(void);
extern "C" void LAB_100575fe(void);
extern "C" void LAB_10057cd9(void);
extern "C" void LAB_10057f4a(void);
extern "C" void LAB_10058a9e(void);
extern "C" void LAB_10059bb0(void);
extern "C" void LAB_1005c973(void);
extern "C" void LAB_1005ceb9(void);
extern "C" void LAB_1005d800(void);
extern "C" void LAB_1005e133(void);
extern "C" void LAB_1005e7af(void);
extern "C" void LAB_1005eb56(void);
extern "C" void LAB_10060316(void);
extern "C" void LAB_1006156d(void);
extern "C" void LAB_10064687(void);
extern "C" void LAB_10064dcb(void);
extern "C" void LAB_10065348(void);
extern "C" void LAB_100656e5(void);
extern "C" void LAB_1006589d(void);
extern "C" void LAB_1006688d(void);
extern "C" void LAB_10066e0f(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_10067ef4(void);
extern "C" void LAB_10068539(void);
extern "C" void LAB_100688db(void);
extern "C" void LAB_10068bd3(void);
extern "C" void LAB_10069321(void);
extern "C" void LAB_10069cd6(void);
extern "C" void LAB_1006aac8(void);
extern "C" void LAB_1006b031(void);
extern "C" void LAB_1006b676(void);
extern "C" void LAB_1006bac2(void);
extern "C" void LAB_1006cecc(void);
extern "C" void LAB_1006cf7b(void);
extern "C" void LAB_1006d728(void);
extern "C" void LAB_1006f000(void);
extern "C" void LAB_10070892(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_10071b61(void);
extern "C" void LAB_10071b8e(void);
extern "C" void LAB_10072269(void);
extern "C" void LAB_10072d77(void);
extern "C" void LAB_1007302e(void);
extern "C" void LAB_100738bc(void);
extern "C" void LAB_100742e9(void);
extern "C" void LAB_100748ed(void);
extern "C" void LAB_10074af0(void);
extern "C" void LAB_10075f45(void);
extern "C" void LAB_100762ec(void);
extern "C" void LAB_10076495(void);
extern "C" void LAB_1007649f(void);
extern "C" void LAB_10076dbe(void);
extern "C" void LAB_10077a61(void);
extern "C" void LAB_100792e4(void);
extern "C" void LAB_1007968b(void);
extern "C" void LAB_1007bf3f(void);
extern "C" void LAB_1007c778(void);
extern "C" void LAB_1007cd81(void);
extern "C" void LAB_1007eb3b(void);
extern "C" void LAB_1007eb95(void);
extern "C" void LAB_10080639(void);
extern "C" void LAB_10080ca6(void);
extern "C" void LAB_10081688(void);
extern "C" void LAB_10081697(void);
extern "C" void LAB_100820b5(void);
extern "C" void LAB_100828b2(void);
extern "C" void LAB_10082a60(void);
extern "C" void LAB_1008339d(void);
extern "C" void LAB_10083505(void);
extern "C" void LAB_10083721(void);
extern "C" void LAB_10083c1c(void);
extern "C" void LAB_10083c26(void);
extern "C" void LAB_10084775(void);
extern "C" void LAB_100854c7(void);
extern "C" void LAB_10086f7f(void);
extern "C" void LAB_1008701f(void);
extern "C" void LAB_10088622(void);
extern "C" void LAB_10089f31(void);
extern "C" void LAB_1008a3b4(void);
extern "C" void LAB_1008a472(void);
extern "C" void LAB_1008b6ce(void);
extern "C" void LAB_1008b7cd(void);
extern "C" void LAB_1008bf07(void);
extern "C" void LAB_1008bf7f(void);
extern "C" void LAB_1008ca83(void);
extern "C" void LAB_1008ca9c(void);
extern "C" void LAB_1008d12c(void);
extern "C" void LAB_1008d474(void);
extern "C" void LAB_1008e28e(void);
extern "C" void LAB_1008f67a(void);
extern "C" void LAB_100913f8(void);
extern "C" void LAB_1009177c(void);
extern "C" void LAB_10091f06(void);
extern "C" void LAB_10092172(void);
extern "C" void LAB_10093dce(void);
extern "C" void LAB_100957aa(void);
extern "C" void LAB_100965dd(void);
extern "C" void LAB_1009719f(void);
extern "C" void LAB_10097460(void);
extern "C" void LAB_1009777b(void);
extern "C" void LAB_10097d07(void);
extern "C" void LAB_1009939b(void);
extern "C" void LAB_1009a3b8(void);
extern "C" void LAB_1009a813(void);
extern "C" void LAB_110050d4(void);
extern "C" void LAB_110050dc(void);
extern "C" void LAB_1104453c(void);
extern "C" void LAB_11044550(void);
extern "C" void LAB_1104eaac(void);
extern "C" void LAB_1104eab4(void);
extern "C" void LAB_11060850(void);
extern "C" void LAB_1109af0c(void);
extern "C" void LAB_1148a05a(void);
extern "C" void LAB_1148a060(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_1186d2f4(void);
extern "C" void LAB_11878394(void);
extern "C" void LAB_11879790(void);
extern "C" void LAB_11879888(void);
extern "C" void LAB_1187ae7c(void);
extern "C" void LAB_1187b07c(void);
extern "C" void LAB_1187b15c(void);
extern "C" void LAB_1187b53c(void);
extern "C" void LAB_1187c25c(void);
extern "C" void LAB_1187c30c(void);
extern "C" void LAB_1187c800(void);
extern "C" void LAB_1187c820(void);
extern "C" void LAB_1187c84c(void);
extern "C" void LAB_1187de80(void);
extern "C" void LAB_11880488(void);
extern "C" void LAB_1188086c(void);
extern "C" void LAB_11881068(void);
extern "C" void LAB_11881498(void);
extern "C" void LAB_1188206c(void);
extern "C" void LAB_11882ff0(void);
extern "C" void LAB_11890690(void);
extern "C" void LAB_11890d64(void);
extern "C" void LAB_11899e08(void);
extern "C" void LAB_118aa708(void);
extern "C" void LAB_118ab048(void);
extern "C" void LAB_118ab0d4(void);
extern "C" void LAB_118ab118(void);
extern "C" void LAB_118ab13c(void);
extern "C" void LAB_118ab154(void);
extern "C" void LAB_118ab200(void);
extern "C" void LAB_11920d5c(void);
extern "C" void LAB_119306fc(void);
extern "C" void LAB_11951390(void);
extern "C" void LAB_11951e50(void);
extern "C" void LAB_11952e04(void);
extern "C" void LAB_11952f10(void);
extern "C" void LAB_11952f40(void);
extern "C" void LAB_11952f50(void);
extern "C" void LAB_11953184(void);
extern "C" void LAB_11953884(void);
extern "C" void LAB_11953890(void);
extern "C" void LAB_1195389c(void);
extern "C" void LAB_119538ac(void);
extern "C" void LAB_119538e0(void);
extern "C" void LAB_1195390c(void);
extern "C" void LAB_11953968(void);
extern "C" void LAB_11953994(void);
extern "C" void LAB_119539b4(void);
extern "C" void LAB_119539d8(void);
extern "C" void LAB_119539f0(void);
extern "C" void LAB_11954054(void);
extern "C" void LAB_11954068(void);
extern "C" void LAB_119550b4(void);
extern "C" void LAB_11955188(void);
extern "C" void LAB_1195525c(void);
extern "C" void LAB_1195568c(void);
extern "C" void LAB_119558c0(void);
extern "C" void LAB_119558d0(void);
extern "C" void LAB_119558dc(void);
extern "C" void LAB_119558ec(void);
extern "C" void LAB_11955a28(void);
extern "C" void LAB_11955d60(void);
extern "C" void LAB_11955fd8(void);
extern "C" void LAB_119567b8(void);
extern "C" void LAB_1195688c(void);
extern "C" void LAB_11956c08(void);
extern "C" void LAB_11957278(void);
extern "C" void LAB_11957348(void);
extern "C" void LAB_11957ccc(void);
extern "C" void LAB_11958424(void);
extern "C" void LAB_11958d00(void);
extern "C" void LAB_11959410(void);
extern "C" void LAB_1195a728(void);
extern "C" void LAB_1195a804(void);
extern "C" void LAB_1195b27c(void);
extern "C" void LAB_1195b5c8(void);
extern "C" void LAB_1195b8d8(void);
extern "C" void LAB_1195d7bc(void);
extern "C" void LAB_1195e878(void);
extern "C" void LAB_1195ea78(void);
extern "C" void LAB_1195ed78(void);
extern "C" void LAB_1195eddc(void);
extern "C" void LAB_1195ff3c(void);
extern "C" void LAB_1196000c(void);
extern "C" void LAB_11960fe8(void);
extern "C" void LAB_11961014(void);
extern "C" void LAB_11961088(void);
extern "C" void LAB_11962640(void);
extern "C" void LAB_119637ac(void);
extern "C" void LAB_11963e28(void);
extern "C" void LAB_11963f3c(void);
extern "C" void LAB_11964a50(void);
extern "C" void LAB_11964aac(void);
extern "C" void LAB_11964f50(void);
extern "C" void LAB_11964f64(void);
extern "C" void LAB_11964fd8(void);
extern "C" void LAB_11965468(void);
extern "C" void LAB_119657d8(void);
extern "C" void LAB_11965988(void);
extern "C" void LAB_119659d4(void);
extern "C" void LAB_11965b88(void);
extern "C" void LAB_11966058(void);
extern "C" void LAB_11966484(void);
extern "C" void LAB_119664d0(void);
extern "C" void LAB_11966714(void);
extern "C" void LAB_119bebf0(void);
extern "C" void LAB_119bed18(void);
extern "C" void LAB_119bee80(void);
extern "C" void LAB_119bee8c(void);
extern "C" void LAB_119bf428(void);
extern "C" void LAB_119c1510(void);
extern "C" void LAB_119c1560(void);
extern "C" void LAB_119c1570(void);
extern "C" void LAB_119c1b14(void);
extern "C" void LAB_1211a564(void);
extern "C" void LAB_1211a56c(void);
extern "C" void LAB_1211a570(void);
extern "C" void LAB_1211a5d0(void);
extern "C" void LAB_1211d600(void);
extern "C" void LAB_1211d604(void);
extern "C" void LAB_1211d608(void);
extern "C" void LAB_1211d60c(void);
extern "C" void LAB_1211d610(void);
extern "C" void LAB_1211d614(void);
extern "C" void LAB_1211d618(void);
extern "C" void LAB_12126b84(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_121a7b5d(void);
extern "C" void LAB_121a7b60(void);
extern "C" void LAB_121a7b64(void);
extern "C" void LAB_121a7ba0(void);
extern "C" void LAB_121a7ba4(void);
extern "C" void LAB_121b54e0(void);
extern "C" void LAB_121b60d8(void);
extern "C" void LAB_122af408(void);
extern "C" void LAB_122e8730(void);
extern "C" void LAB_122e8d34(void);
extern "C" void LAB_122fc7ac(void);
extern "C" void LAB_122fc7bc(void);
extern "C" void LAB_122fc888(void);
extern "C" void LAB_122fca10(void);
extern "C" void LAB_122fca5c(void);


struct Recovered_Bulk { char _pad; undefined4 * __thiscall m_FUN_10f33000(byte param_2); template<class... A> int m_FUN_10f33000(A...); undefined4 * __thiscall m_FUN_10f33040(byte param_2); template<class... A> int m_FUN_10f33040(A...); SCStr * __thiscall m_FUN_10f340f0(SCStr *param_2); template<class... A> int m_FUN_10f340f0(A...); SCStr * __thiscall m_FUN_10f34110(SCStr *param_2); template<class... A> int m_FUN_10f34110(A...); int * __thiscall m_FUN_10f341d0(int *param_2); template<class... A> int m_FUN_10f341d0(A...); int * __thiscall m_FUN_10f34200(int *param_2); template<class... A> int m_FUN_10f34200(A...); int * __thiscall m_FUN_10f34230(int *param_2); template<class... A> int m_FUN_10f34230(A...); undefined4 __thiscall m_FUN_10f372e0(char *param_2,uint param_3); template<class... A> int m_FUN_10f372e0(A...); void __thiscall m_FUN_10f376a0(undefined4 param_2); template<class... A> int m_FUN_10f376a0(A...); undefined4 * __thiscall m_FUN_10f3d140(byte param_2); template<class... A> int m_FUN_10f3d140(A...); undefined4 * __thiscall m_FUN_10f3d180(byte param_2); template<class... A> int m_FUN_10f3d180(A...); undefined4 * __thiscall m_FUN_10f3d470(byte param_2); template<class... A> int m_FUN_10f3d470(A...); void __thiscall m_FUN_10f3d660(int param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f3d660(A...); void __thiscall m_FUN_10f3d690(int param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f3d690(A...); undefined4 * __thiscall m_FUN_10f3f390(byte param_2); template<class... A> int m_FUN_10f3f390(A...); void __thiscall m_FUN_10f3fb40(undefined4 param_2); template<class... A> int m_FUN_10f3fb40(A...); undefined4 * __thiscall m_FUN_10f40f50(int *param_2); template<class... A> int m_FUN_10f40f50(A...); undefined4 * __thiscall m_FUN_10f40f70(int *param_2); template<class... A> int m_FUN_10f40f70(A...); undefined4 * __thiscall m_FUN_10f40f90(int *param_2); template<class... A> int m_FUN_10f40f90(A...); undefined4 * __thiscall m_FUN_10f40fb0(int *param_2); template<class... A> int m_FUN_10f40fb0(A...); undefined4 * __thiscall m_FUN_10f41a30(byte param_2); template<class... A> int m_FUN_10f41a30(A...); undefined4 * __thiscall m_FUN_10f41a70(byte param_2); template<class... A> int m_FUN_10f41a70(A...); undefined4 * __thiscall m_FUN_10f41ac0(byte param_2); template<class... A> int m_FUN_10f41ac0(A...); undefined4 * __thiscall m_FUN_10f41b10(byte param_2); template<class... A> int m_FUN_10f41b10(A...); undefined4 __thiscall m_FUN_10f41b40(byte param_2); template<class... A> int m_FUN_10f41b40(A...); void __thiscall m_FUN_10f41be0(int *param_2); template<class... A> int m_FUN_10f41be0(A...); void __thiscall m_FUN_10f41c30(int *param_2); template<class... A> int m_FUN_10f41c30(A...); void __thiscall m_FUN_10f41c80(int *param_2); template<class... A> int m_FUN_10f41c80(A...); void __thiscall m_FUN_10f41cd0(int *param_2); template<class... A> int m_FUN_10f41cd0(A...); void __thiscall m_FUN_10f41d20(int param_2); template<class... A> int m_FUN_10f41d20(A...); void __thiscall m_FUN_10f43c00(int param_2); template<class... A> int m_FUN_10f43c00(A...); undefined4 * __thiscall m_FUN_10f43d80(int *param_2); template<class... A> int m_FUN_10f43d80(A...); undefined4 * __thiscall m_FUN_10f43de0(int *param_2); template<class... A> int m_FUN_10f43de0(A...); undefined4 * __thiscall m_FUN_10f43e20(int *param_2); template<class... A> int m_FUN_10f43e20(A...); undefined4 * __thiscall m_FUN_10f43e60(int *param_2); template<class... A> int m_FUN_10f43e60(A...); undefined4 * __thiscall m_FUN_10f44f70(byte param_2); template<class... A> int m_FUN_10f44f70(A...); undefined4 * __thiscall m_FUN_10f44fb0(byte param_2); template<class... A> int m_FUN_10f44fb0(A...); undefined4 * __thiscall m_FUN_10f45000(byte param_2); template<class... A> int m_FUN_10f45000(A...); undefined4 * __thiscall m_FUN_10f45050(byte param_2); template<class... A> int m_FUN_10f45050(A...); undefined4 __thiscall m_FUN_10f45080(byte param_2); template<class... A> int m_FUN_10f45080(A...); undefined4 __thiscall m_FUN_10f450b0(byte param_2); template<class... A> int m_FUN_10f450b0(A...); void __thiscall m_FUN_10f45130(int *param_2); template<class... A> int m_FUN_10f45130(A...); void __thiscall m_FUN_10f45180(int *param_2); template<class... A> int m_FUN_10f45180(A...); void __thiscall m_FUN_10f451d0(int param_2); template<class... A> int m_FUN_10f451d0(A...); SCStr * __thiscall m_FUN_10f45f80(SCStr *param_2); template<class... A> int m_FUN_10f45f80(A...); void __thiscall m_FUN_10f47fa0(undefined4 param_2); template<class... A> int m_FUN_10f47fa0(A...); undefined4 * __thiscall m_FUN_10f484c0(byte param_2); template<class... A> int m_FUN_10f484c0(A...); undefined4 * __thiscall m_FUN_10f485d0(byte param_2); template<class... A> int m_FUN_10f485d0(A...); int * __thiscall m_FUN_10f48b90(int *param_2); template<class... A> int m_FUN_10f48b90(A...); void __thiscall m_FUN_10f499d0(undefined4 *param_2); template<class... A> int m_FUN_10f499d0(A...); undefined4 * __thiscall m_FUN_10f49b80(int *param_2); template<class... A> int m_FUN_10f49b80(A...); undefined4 * __thiscall m_FUN_10f49bc0(int *param_2); template<class... A> int m_FUN_10f49bc0(A...); undefined4 * __thiscall m_FUN_10f4aba0(byte param_2); template<class... A> int m_FUN_10f4aba0(A...); undefined4 * __thiscall m_FUN_10f4abe0(byte param_2); template<class... A> int m_FUN_10f4abe0(A...); undefined4 * __thiscall m_FUN_10f4ac20(byte param_2); template<class... A> int m_FUN_10f4ac20(A...); undefined4 * __thiscall m_FUN_10f4ac70(byte param_2); template<class... A> int m_FUN_10f4ac70(A...); undefined4 * __thiscall m_FUN_10f4af80(byte param_2); template<class... A> int m_FUN_10f4af80(A...); undefined4 * __thiscall m_FUN_10f4afb0(byte param_2); template<class... A> int m_FUN_10f4afb0(A...); undefined4 * __thiscall m_FUN_10f4b080(byte param_2); template<class... A> int m_FUN_10f4b080(A...); void __thiscall m_FUN_10f4b180(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10f4b180(A...); SCStr * __thiscall m_FUN_10f4ba30(SCStr *param_2); template<class... A> int m_FUN_10f4ba30(A...); SCStr * __thiscall m_FUN_10f4be20(SCStr *param_2); template<class... A> int m_FUN_10f4be20(A...); int * __thiscall m_FUN_10f4beb0(int *param_2); template<class... A> int m_FUN_10f4beb0(A...); void __thiscall m_FUN_10f4c970(undefined4 *param_2); template<class... A> int m_FUN_10f4c970(A...); void __thiscall m_FUN_10f4d160(SCStr *param_2); template<class... A> int m_FUN_10f4d160(A...); undefined4 * __thiscall m_FUN_10f4df80(int *param_2); template<class... A> int m_FUN_10f4df80(A...); undefined4 __thiscall m_FUN_10f4ed70(byte param_2); template<class... A> int m_FUN_10f4ed70(A...); undefined4 __thiscall m_FUN_10f4eda0(byte param_2); template<class... A> int m_FUN_10f4eda0(A...); undefined4 * __thiscall m_FUN_10f4edd0(byte param_2); template<class... A> int m_FUN_10f4edd0(A...); undefined4 __thiscall m_FUN_10f50750(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10f50750(A...); void __thiscall m_FUN_10f518c0(undefined4 param_2,undefined8 param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f518c0(A...); undefined4 * __thiscall m_FUN_10f51f10(int *param_2); template<class... A> int m_FUN_10f51f10(A...); undefined4 __thiscall m_FUN_10f52660(byte param_2); template<class... A> int m_FUN_10f52660(A...); int * __thiscall m_FUN_10f531c0(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f531c0(A...); undefined4 * __thiscall m_FUN_10f561e0(int *param_2); template<class... A> int m_FUN_10f561e0(A...); undefined4 * __thiscall m_FUN_10f56220(int *param_2); template<class... A> int m_FUN_10f56220(A...); undefined4 * __thiscall m_FUN_10f56260(int *param_2); template<class... A> int m_FUN_10f56260(A...); undefined4 * __thiscall m_FUN_10f562a0(int *param_2); template<class... A> int m_FUN_10f562a0(A...); undefined4 * __thiscall m_FUN_10f58300(byte param_2); template<class... A> int m_FUN_10f58300(A...); undefined4 * __thiscall m_FUN_10f58330(byte param_2); template<class... A> int m_FUN_10f58330(A...); undefined4 * __thiscall m_FUN_10f58360(byte param_2); template<class... A> int m_FUN_10f58360(A...); undefined4 * __thiscall m_FUN_10f58390(byte param_2); template<class... A> int m_FUN_10f58390(A...); undefined4 * __thiscall m_FUN_10f583c0(byte param_2); template<class... A> int m_FUN_10f583c0(A...); undefined4 * __thiscall m_FUN_10f58400(byte param_2); template<class... A> int m_FUN_10f58400(A...); undefined4 * __thiscall m_FUN_10f58440(byte param_2); template<class... A> int m_FUN_10f58440(A...); undefined4 * __thiscall m_FUN_10f58480(byte param_2); template<class... A> int m_FUN_10f58480(A...); undefined4 __thiscall m_FUN_10f584c0(byte param_2); template<class... A> int m_FUN_10f584c0(A...); undefined4 __thiscall m_FUN_10f584f0(byte param_2); template<class... A> int m_FUN_10f584f0(A...); undefined4 __thiscall m_FUN_10f58520(byte param_2); template<class... A> int m_FUN_10f58520(A...); undefined4 __thiscall m_FUN_10f58550(byte param_2); template<class... A> int m_FUN_10f58550(A...); undefined4 * __thiscall m_FUN_10f58580(byte param_2); template<class... A> int m_FUN_10f58580(A...); undefined4 * __thiscall m_FUN_10f585d0(byte param_2); template<class... A> int m_FUN_10f585d0(A...); undefined4 * __thiscall m_FUN_10f58620(byte param_2); template<class... A> int m_FUN_10f58620(A...); undefined4 * __thiscall m_FUN_10f58650(byte param_2); template<class... A> int m_FUN_10f58650(A...); undefined4 * __thiscall m_FUN_10f58680(byte param_2); template<class... A> int m_FUN_10f58680(A...); undefined4 * __thiscall m_FUN_10f586b0(byte param_2); template<class... A> int m_FUN_10f586b0(A...); undefined4 * __thiscall m_FUN_10f586e0(byte param_2); template<class... A> int m_FUN_10f586e0(A...); undefined4 * __thiscall m_FUN_10f58720(byte param_2); template<class... A> int m_FUN_10f58720(A...); undefined4 * __thiscall m_FUN_10f58760(byte param_2); template<class... A> int m_FUN_10f58760(A...); undefined4 * __thiscall m_FUN_10f587a0(byte param_2); template<class... A> int m_FUN_10f587a0(A...); int * __thiscall m_FUN_10f5e820(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f5e820(A...); int * __thiscall m_FUN_10f61670(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f61670(A...); void __thiscall m_FUN_10f63e00(SCStr *param_2,undefined1 param_3); template<class... A> int m_FUN_10f63e00(A...); undefined4 * __thiscall m_FUN_10f64fc0(int *param_2); template<class... A> int m_FUN_10f64fc0(A...); undefined4 * __thiscall m_FUN_10f65000(int *param_2); template<class... A> int m_FUN_10f65000(A...); undefined4 * __thiscall m_FUN_10f65040(int *param_2); template<class... A> int m_FUN_10f65040(A...); undefined4 * __thiscall m_FUN_10f65080(int *param_2); template<class... A> int m_FUN_10f65080(A...); undefined4 * __thiscall m_FUN_10f650c0(int *param_2); template<class... A> int m_FUN_10f650c0(A...); undefined4 * __thiscall m_FUN_10f66320(byte param_2); template<class... A> int m_FUN_10f66320(A...); undefined4 * __thiscall m_FUN_10f66350(byte param_2); template<class... A> int m_FUN_10f66350(A...); undefined4 __thiscall m_FUN_10f66390(byte param_2); template<class... A> int m_FUN_10f66390(A...); undefined4 __thiscall m_FUN_10f663c0(byte param_2); template<class... A> int m_FUN_10f663c0(A...); undefined4 * __thiscall m_FUN_10f663f0(byte param_2); template<class... A> int m_FUN_10f663f0(A...); undefined4 * __thiscall m_FUN_10f66430(byte param_2); template<class... A> int m_FUN_10f66430(A...); undefined4 * __thiscall m_FUN_10f66480(byte param_2); template<class... A> int m_FUN_10f66480(A...); undefined4 * __thiscall m_FUN_10f664b0(byte param_2); template<class... A> int m_FUN_10f664b0(A...); undefined4 __thiscall m_FUN_10f67600(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10f67600(A...); void __thiscall m_FUN_10f68ab0(undefined4 param_2,undefined8 param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f68ab0(A...); undefined4 * __thiscall m_FUN_10f69260(int *param_2); template<class... A> int m_FUN_10f69260(A...); undefined4 * __thiscall m_FUN_10f692a0(int *param_2); template<class... A> int m_FUN_10f692a0(A...); void __thiscall m_FUN_10f6b350(undefined4 param_2); template<class... A> int m_FUN_10f6b350(A...); int __thiscall m_FUN_10f6b450(uint *param_2); template<class... A> int m_FUN_10f6b450(A...); undefined4 __thiscall m_FUN_10f6c340(byte param_2); template<class... A> int m_FUN_10f6c340(A...); undefined4 * __thiscall m_FUN_10f6fcf0(int *param_2); template<class... A> int m_FUN_10f6fcf0(A...); undefined4 * __thiscall m_FUN_10f6fd60(int *param_2); template<class... A> int m_FUN_10f6fd60(A...); undefined4 * __thiscall m_FUN_10f71290(byte param_2); template<class... A> int m_FUN_10f71290(A...); undefined4 __thiscall m_FUN_10f712c0(byte param_2); template<class... A> int m_FUN_10f712c0(A...); undefined4 __thiscall m_FUN_10f712f0(byte param_2); template<class... A> int m_FUN_10f712f0(A...); int __thiscall m_FUN_10f713b0(byte param_2); template<class... A> int m_FUN_10f713b0(A...); undefined4 __thiscall m_FUN_10f714b0(byte param_2); template<class... A> int m_FUN_10f714b0(A...); undefined4 * __thiscall m_FUN_10f714e0(byte param_2); template<class... A> int m_FUN_10f714e0(A...); undefined4 __thiscall m_FUN_10f71520(byte param_2); template<class... A> int m_FUN_10f71520(A...); void __thiscall m_FUN_10f717d0(char param_2); template<class... A> int m_FUN_10f717d0(A...); void __thiscall m_FUN_10f71980(undefined4 *param_2,ushort *param_3); template<class... A> int m_FUN_10f71980(A...); SCStr * __thiscall m_FUN_10f72660(SCStr *param_2); template<class... A> int m_FUN_10f72660(A...); void __thiscall m_FUN_10f734d0(int param_2); template<class... A> int m_FUN_10f734d0(A...); undefined4 __thiscall m_FUN_10f74070(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10f74070(A...); void __thiscall m_FUN_10f74150(undefined4 param_2,undefined8 param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f74150(A...); undefined4 * __thiscall m_FUN_10f744a0(undefined4 param_2); template<class... A> int m_FUN_10f744a0(A...); undefined4 * __thiscall m_FUN_10f74f50(byte param_2); template<class... A> int m_FUN_10f74f50(A...); undefined4 * __thiscall m_FUN_10f75050(byte param_2); template<class... A> int m_FUN_10f75050(A...); undefined4 * __thiscall m_FUN_10f75430(byte param_2); template<class... A> int m_FUN_10f75430(A...); undefined4 * __thiscall m_FUN_10f76d30(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10f76d30(A...); undefined4 * __thiscall m_FUN_10f775c0(int *param_2); template<class... A> int m_FUN_10f775c0(A...); undefined4 * __thiscall m_FUN_10f77600(int *param_2); template<class... A> int m_FUN_10f77600(A...); undefined4 * __thiscall m_FUN_10f77e00(byte param_2); template<class... A> int m_FUN_10f77e00(A...); undefined4 * __thiscall m_FUN_10f77e40(byte param_2); template<class... A> int m_FUN_10f77e40(A...); undefined4 __thiscall m_FUN_10f77e80(byte param_2); template<class... A> int m_FUN_10f77e80(A...); undefined4 * __thiscall m_FUN_10f77eb0(byte param_2); template<class... A> int m_FUN_10f77eb0(A...); undefined4 * __thiscall m_FUN_10f77f00(byte param_2); template<class... A> int m_FUN_10f77f00(A...); undefined4 * __thiscall m_FUN_10f77f30(byte param_2); template<class... A> int m_FUN_10f77f30(A...); undefined4 * __thiscall m_FUN_10f77f80(byte param_2); template<class... A> int m_FUN_10f77f80(A...); undefined4 * __thiscall m_FUN_10f78090(byte param_2); template<class... A> int m_FUN_10f78090(A...); undefined4 * __thiscall m_FUN_10f780c0(byte param_2); template<class... A> int m_FUN_10f780c0(A...); undefined4 * __thiscall m_FUN_10f780f0(byte param_2); template<class... A> int m_FUN_10f780f0(A...); SCStr * __thiscall m_FUN_10f79110(SCStr *param_2); template<class... A> int m_FUN_10f79110(A...); SCStr * __thiscall m_FUN_10f79860(SCStr *param_2); template<class... A> int m_FUN_10f79860(A...); undefined4 __thiscall m_FUN_10f79a70(undefined4 param_2); template<class... A> int m_FUN_10f79a70(A...); void __thiscall m_FUN_10f7ada0(uint param_2); template<class... A> int m_FUN_10f7ada0(A...); undefined4 * __thiscall m_FUN_10f7b130(undefined4 param_2); template<class... A> int m_FUN_10f7b130(A...); undefined4 * __thiscall m_FUN_10f7b600(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10f7b600(A...); void __thiscall m_FUN_10f7bd90(undefined4 param_2); template<class... A> int m_FUN_10f7bd90(A...); undefined4 * __thiscall m_FUN_10f7e600(byte param_2); template<class... A> int m_FUN_10f7e600(A...); undefined4 * __thiscall m_FUN_10f7e630(byte param_2); template<class... A> int m_FUN_10f7e630(A...); undefined4 __thiscall m_FUN_10f7e660(byte param_2); template<class... A> int m_FUN_10f7e660(A...); undefined4 __thiscall m_FUN_10f7e690(byte param_2); template<class... A> int m_FUN_10f7e690(A...); undefined4 __thiscall m_FUN_10f7ea70(byte param_2); template<class... A> int m_FUN_10f7ea70(A...); undefined4 __thiscall m_FUN_10f7eaa0(byte param_2); template<class... A> int m_FUN_10f7eaa0(A...); undefined4 * __thiscall m_FUN_10f7ead0(byte param_2); template<class... A> int m_FUN_10f7ead0(A...); undefined4 * __thiscall m_FUN_10f834f0(byte param_2); template<class... A> int m_FUN_10f834f0(A...); undefined4 __thiscall m_FUN_10f83520(byte param_2); template<class... A> int m_FUN_10f83520(A...); undefined4 __thiscall m_FUN_10f83550(byte param_2); template<class... A> int m_FUN_10f83550(A...); undefined4 * __thiscall m_FUN_10f83630(byte param_2); template<class... A> int m_FUN_10f83630(A...); undefined4 * __thiscall m_FUN_10f83660(byte param_2); template<class... A> int m_FUN_10f83660(A...); undefined4 __thiscall m_FUN_10f83690(byte param_2); template<class... A> int m_FUN_10f83690(A...); int __thiscall m_FUN_10f86b30(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10f86b30(A...); undefined4 * __thiscall m_FUN_10f8bdf0(byte param_2); template<class... A> int m_FUN_10f8bdf0(A...); undefined4 * __thiscall m_FUN_10f8be20(byte param_2); template<class... A> int m_FUN_10f8be20(A...); undefined4 * __thiscall m_FUN_10f8be50(byte param_2); template<class... A> int m_FUN_10f8be50(A...); undefined4 __thiscall m_FUN_10f8be80(byte param_2); template<class... A> int m_FUN_10f8be80(A...); undefined4 __thiscall m_FUN_10f8beb0(byte param_2); template<class... A> int m_FUN_10f8beb0(A...); undefined4 __thiscall m_FUN_10f8bee0(byte param_2); template<class... A> int m_FUN_10f8bee0(A...); undefined4 __thiscall m_FUN_10f8bf10(byte param_2); template<class... A> int m_FUN_10f8bf10(A...); undefined4 __thiscall m_FUN_10f8bff0(byte param_2); template<class... A> int m_FUN_10f8bff0(A...); undefined4 * __thiscall m_FUN_10f8c170(byte param_2); template<class... A> int m_FUN_10f8c170(A...); undefined4 * __thiscall m_FUN_10f8c1b0(byte param_2); template<class... A> int m_FUN_10f8c1b0(A...); undefined4 * __thiscall m_FUN_10f8c1f0(byte param_2); template<class... A> int m_FUN_10f8c1f0(A...); SCStr * __thiscall m_FUN_10f8d000(SCStr *param_2); template<class... A> int m_FUN_10f8d000(A...); SCStr * __thiscall m_FUN_10f8d020(SCStr *param_2); template<class... A> int m_FUN_10f8d020(A...); int * __thiscall m_FUN_10f8d080(int *param_2); template<class... A> int m_FUN_10f8d080(A...); void __thiscall m_FUN_10f8ea60(undefined4 param_2); template<class... A> int m_FUN_10f8ea60(A...); void __thiscall m_FUN_10f8ed40(undefined4 param_2); template<class... A> int m_FUN_10f8ed40(A...); undefined4 __thiscall m_FUN_10f8ed80(char *param_2,uint param_3); template<class... A> int m_FUN_10f8ed80(A...); undefined4 * __thiscall m_FUN_10f8f3e0(byte param_2); template<class... A> int m_FUN_10f8f3e0(A...); undefined4 * __thiscall m_FUN_10f8f470(byte param_2); template<class... A> int m_FUN_10f8f470(A...); undefined4 * __thiscall m_FUN_10f8f4a0(byte param_2); template<class... A> int m_FUN_10f8f4a0(A...); undefined4 * __thiscall m_FUN_10f8f4d0(byte param_2); template<class... A> int m_FUN_10f8f4d0(A...); void __thiscall m_FUN_10f8f7d0(int param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f8f7d0(A...); undefined1 __thiscall m_FUN_10f90020(int param_2); template<class... A> int m_FUN_10f90020(A...); void __thiscall m_FUN_10f912e0(int param_2,int param_3); template<class... A> int m_FUN_10f912e0(A...); undefined4 * __thiscall m_FUN_10f91d50(byte param_2); template<class... A> int m_FUN_10f91d50(A...); undefined4 * __thiscall m_FUN_10f91d80(byte param_2); template<class... A> int m_FUN_10f91d80(A...); undefined4 * __thiscall m_FUN_10f91e80(byte param_2); template<class... A> int m_FUN_10f91e80(A...); undefined4 * __thiscall m_FUN_10f91eb0(byte param_2); template<class... A> int m_FUN_10f91eb0(A...); undefined4 * __thiscall m_FUN_10f91ee0(byte param_2); template<class... A> int m_FUN_10f91ee0(A...); undefined4 * __thiscall m_FUN_10f91fb0(byte param_2); template<class... A> int m_FUN_10f91fb0(A...); void __thiscall m_FUN_10f924f0(int param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f924f0(A...); undefined4 * __thiscall m_FUN_10f971a0(byte param_2); template<class... A> int m_FUN_10f971a0(A...); undefined4 * __thiscall m_FUN_10f971d0(byte param_2); template<class... A> int m_FUN_10f971d0(A...); undefined4 * __thiscall m_FUN_10f97200(byte param_2); template<class... A> int m_FUN_10f97200(A...); undefined4 * __thiscall m_FUN_10f97230(byte param_2); template<class... A> int m_FUN_10f97230(A...); undefined4 * __thiscall m_FUN_10f97260(byte param_2); template<class... A> int m_FUN_10f97260(A...); undefined4 * __thiscall m_FUN_10f97290(byte param_2); template<class... A> int m_FUN_10f97290(A...); void __thiscall m_FUN_10f99940(undefined4 param_2); template<class... A> int m_FUN_10f99940(A...); void __thiscall m_FUN_10f99970(undefined4 param_2); template<class... A> int m_FUN_10f99970(A...); int __thiscall m_FUN_10f99b60(uint *param_2); template<class... A> int m_FUN_10f99b60(A...); undefined4 * __thiscall m_FUN_10f9be10(byte param_2); template<class... A> int m_FUN_10f9be10(A...); undefined4 * __thiscall m_FUN_10f9c060(byte param_2); template<class... A> int m_FUN_10f9c060(A...); undefined4 * __thiscall m_FUN_10f9c090(byte param_2); template<class... A> int m_FUN_10f9c090(A...); undefined4 * __thiscall m_FUN_10f9c1c0(byte param_2); template<class... A> int m_FUN_10f9c1c0(A...); undefined4 * __thiscall m_FUN_10f9c1f0(byte param_2); template<class... A> int m_FUN_10f9c1f0(A...); undefined4 * __thiscall m_FUN_10f9c220(byte param_2); template<class... A> int m_FUN_10f9c220(A...); undefined4 * __thiscall m_FUN_10f9c250(byte param_2); template<class... A> int m_FUN_10f9c250(A...); undefined4 * __thiscall m_FUN_10f9c280(byte param_2); template<class... A> int m_FUN_10f9c280(A...); undefined4 * __thiscall m_FUN_10f9c2b0(byte param_2); template<class... A> int m_FUN_10f9c2b0(A...); undefined4 * __thiscall m_FUN_10f9c2e0(byte param_2); template<class... A> int m_FUN_10f9c2e0(A...); undefined4 * __thiscall m_FUN_10f9c310(byte param_2); template<class... A> int m_FUN_10f9c310(A...); undefined4 __thiscall m_FUN_10fa0450(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10fa0450(A...); undefined4 __thiscall m_FUN_10fa04b0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10fa04b0(A...); undefined4 * __thiscall m_FUN_10fa5670(byte param_2); template<class... A> int m_FUN_10fa5670(A...); undefined4 * __thiscall m_FUN_10fa5700(byte param_2); template<class... A> int m_FUN_10fa5700(A...); undefined4 * __thiscall m_FUN_10fa5730(byte param_2); template<class... A> int m_FUN_10fa5730(A...); undefined4 * __thiscall m_FUN_10fa5760(byte param_2); template<class... A> int m_FUN_10fa5760(A...); undefined4 * __thiscall m_FUN_10fa5790(byte param_2); template<class... A> int m_FUN_10fa5790(A...); undefined4 * __thiscall m_FUN_10fa5960(byte param_2); template<class... A> int m_FUN_10fa5960(A...); undefined4 * __thiscall m_FUN_10fa5b00(byte param_2); template<class... A> int m_FUN_10fa5b00(A...); undefined4 __thiscall m_FUN_10fa7880(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10fa7880(A...); undefined4 __thiscall m_FUN_10fa7ba0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10fa7ba0(A...); int __thiscall m_FUN_10fab430(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10fab430(A...); int __thiscall m_FUN_10fab470(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10fab470(A...); int __thiscall m_FUN_10fab4b0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10fab4b0(A...); int __thiscall m_FUN_10fab4f0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10fab4f0(A...); undefined4 * __thiscall m_FUN_10fadd30(int *param_2); template<class... A> int m_FUN_10fadd30(A...); undefined4 * __thiscall m_FUN_10faddc0(int *param_2); template<class... A> int m_FUN_10faddc0(A...); undefined4 * __thiscall m_FUN_10fade50(int *param_2); template<class... A> int m_FUN_10fade50(A...); undefined4 * __thiscall m_FUN_10fb1580(byte param_2); template<class... A> int m_FUN_10fb1580(A...); undefined4 __thiscall m_FUN_10fb1730(byte param_2); template<class... A> int m_FUN_10fb1730(A...); undefined4 * __thiscall m_FUN_10fb1920(byte param_2); template<class... A> int m_FUN_10fb1920(A...); undefined4 * __thiscall m_FUN_10fb1950(byte param_2); template<class... A> int m_FUN_10fb1950(A...); undefined4 * __thiscall m_FUN_10fb1980(byte param_2); template<class... A> int m_FUN_10fb1980(A...); undefined4 * __thiscall m_FUN_10fb19b0(byte param_2); template<class... A> int m_FUN_10fb19b0(A...); undefined4 * __thiscall m_FUN_10fb1f90(byte param_2); template<class... A> int m_FUN_10fb1f90(A...); undefined4 __thiscall m_FUN_10fb9220(int param_2); template<class... A> int m_FUN_10fb9220(A...); int * __thiscall m_FUN_10fb9470(int *param_2); template<class... A> int m_FUN_10fb9470(A...); int * __thiscall m_FUN_10fb94a0(int *param_2,int param_3); template<class... A> int m_FUN_10fb94a0(A...); int * __thiscall m_FUN_10fb94e0(int *param_2,int param_3); template<class... A> int m_FUN_10fb94e0(A...); void __thiscall m_FUN_10fc0aa0(undefined4 param_2); template<class... A> int m_FUN_10fc0aa0(A...); int __thiscall m_FUN_10fc0bc0(uint *param_2); template<class... A> int m_FUN_10fc0bc0(A...); undefined4 * __thiscall m_FUN_10fc27e0(byte param_2); template<class... A> int m_FUN_10fc27e0(A...); undefined4 * __thiscall m_FUN_10fc2a70(byte param_2); template<class... A> int m_FUN_10fc2a70(A...); undefined4 * __thiscall m_FUN_10fc2aa0(byte param_2); template<class... A> int m_FUN_10fc2aa0(A...); undefined4 * __thiscall m_FUN_10fc2bd0(byte param_2); template<class... A> int m_FUN_10fc2bd0(A...); undefined4 * __thiscall m_FUN_10fc2c00(byte param_2); template<class... A> int m_FUN_10fc2c00(A...); undefined4 * __thiscall m_FUN_10fc2c30(byte param_2); template<class... A> int m_FUN_10fc2c30(A...); undefined4 * __thiscall m_FUN_10fc2c60(byte param_2); template<class... A> int m_FUN_10fc2c60(A...); undefined4 * __thiscall m_FUN_10fc2c90(byte param_2); template<class... A> int m_FUN_10fc2c90(A...); undefined4 * __thiscall m_FUN_10fc2cc0(byte param_2); template<class... A> int m_FUN_10fc2cc0(A...); undefined4 * __thiscall m_FUN_10fc2da0(byte param_2); template<class... A> int m_FUN_10fc2da0(A...); undefined4 * __thiscall m_FUN_10fc2dd0(byte param_2); template<class... A> int m_FUN_10fc2dd0(A...); undefined4 __thiscall m_FUN_10fc5e00(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10fc5e00(A...); undefined4 __thiscall m_FUN_10fc5e60(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10fc5e60(A...); undefined4 __thiscall m_FUN_10fcc0a0(byte param_2); template<class... A> int m_FUN_10fcc0a0(A...); int * __thiscall m_FUN_10fcc880(int *param_2); template<class... A> int m_FUN_10fcc880(A...); int * __thiscall m_FUN_10fcc8a0(int *param_2); template<class... A> int m_FUN_10fcc8a0(A...); undefined4 * __thiscall m_FUN_10fccee0(undefined4 param_2); template<class... A> int m_FUN_10fccee0(A...); undefined4 * __thiscall m_FUN_10fccf20(byte param_2); template<class... A> int m_FUN_10fccf20(A...); int * __thiscall m_FUN_10fcd4b0(int *param_2,uint param_3); template<class... A> int m_FUN_10fcd4b0(A...); void __thiscall m_FUN_10fcdd50(undefined4 *param_2); template<class... A> int m_FUN_10fcdd50(A...); undefined4 * __thiscall m_FUN_10fcdf20(int *param_2); template<class... A> int m_FUN_10fcdf20(A...); undefined4 * __thiscall m_FUN_10fce700(byte param_2); template<class... A> int m_FUN_10fce700(A...); void __thiscall m_FUN_10fce8c0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10fce8c0(A...); int * __thiscall m_FUN_10fcef20(int *param_2,int param_3); template<class... A> int m_FUN_10fcef20(A...); SCStr * __thiscall m_FUN_10fcf1a0(SCStr *param_2); template<class... A> int m_FUN_10fcf1a0(A...); void __thiscall m_FUN_10fcf420(undefined4 *param_2); template<class... A> int m_FUN_10fcf420(A...); undefined4 * __thiscall m_FUN_10fcf7c0(int *param_2); template<class... A> int m_FUN_10fcf7c0(A...); undefined4 * __thiscall m_FUN_10fcf800(int *param_2); template<class... A> int m_FUN_10fcf800(A...); undefined4 * __thiscall m_FUN_10fcf860(int *param_2); template<class... A> int m_FUN_10fcf860(A...); undefined4 * __thiscall m_FUN_10fd0ea0(byte param_2); template<class... A> int m_FUN_10fd0ea0(A...); undefined4 * __thiscall m_FUN_10fd1020(byte param_2); template<class... A> int m_FUN_10fd1020(A...); SCStr * __thiscall m_FUN_10fd1ce0(SCStr *param_2); template<class... A> int m_FUN_10fd1ce0(A...); int * __thiscall m_FUN_10fd24f0(int *param_2); template<class... A> int m_FUN_10fd24f0(A...); undefined4 * __thiscall m_FUN_10fd9f60(byte param_2); template<class... A> int m_FUN_10fd9f60(A...); undefined4 __thiscall m_FUN_10fdac90(byte param_2); template<class... A> int m_FUN_10fdac90(A...); undefined4 * __thiscall m_FUN_10fdd050(undefined4 *param_2); template<class... A> int m_FUN_10fdd050(A...); undefined4 * __thiscall m_FUN_10fdd090(undefined4 *param_2); template<class... A> int m_FUN_10fdd090(A...); undefined4 * __thiscall m_FUN_10fdd0d0(undefined4 *param_2); template<class... A> int m_FUN_10fdd0d0(A...); undefined4 * __thiscall m_FUN_10fdd110(undefined4 *param_2); template<class... A> int m_FUN_10fdd110(A...); undefined4 * __thiscall m_FUN_10fdd150(undefined4 *param_2); template<class... A> int m_FUN_10fdd150(A...); undefined4 * __thiscall m_FUN_10fdd190(undefined4 *param_2); template<class... A> int m_FUN_10fdd190(A...); SCStr * __thiscall m_FUN_10fdd1d0(SCStr *param_2); template<class... A> int m_FUN_10fdd1d0(A...); SCStr * __thiscall m_FUN_10fdd210(SCStr *param_2); template<class... A> int m_FUN_10fdd210(A...); SCStr * __thiscall m_FUN_10fdd260(SCStr *param_2); template<class... A> int m_FUN_10fdd260(A...); SCStr * __thiscall m_FUN_10fdd2b0(SCStr *param_2); template<class... A> int m_FUN_10fdd2b0(A...); SCStr * __thiscall m_FUN_10fdd2d0(SCStr *param_2); template<class... A> int m_FUN_10fdd2d0(A...); SCStr * __thiscall m_FUN_10fdd320(SCStr *param_2); template<class... A> int m_FUN_10fdd320(A...); SCStr * __thiscall m_FUN_10fdd370(SCStr *param_2); template<class... A> int m_FUN_10fdd370(A...); SCStr * __thiscall m_FUN_10fdd390(SCStr *param_2); template<class... A> int m_FUN_10fdd390(A...); SCStr * __thiscall m_FUN_10fdd490(SCStr *param_2); template<class... A> int m_FUN_10fdd490(A...); void __thiscall m_FUN_10fde830(undefined4 param_2); template<class... A> int m_FUN_10fde830(A...); void __thiscall m_FUN_10fe0020(undefined4 *param_2); template<class... A> int m_FUN_10fe0020(A...); undefined4 * __thiscall m_FUN_10fe0190(int *param_2); template<class... A> int m_FUN_10fe0190(A...); undefined4 * __thiscall m_FUN_10fe0dc0(byte param_2); template<class... A> int m_FUN_10fe0dc0(A...); undefined4 * __thiscall m_FUN_10fe0e10(byte param_2); template<class... A> int m_FUN_10fe0e10(A...); void __thiscall m_FUN_10fe11b0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10fe11b0(A...); SCStr * __thiscall m_FUN_10fe2480(SCStr *param_2); template<class... A> int m_FUN_10fe2480(A...); SCStr * __thiscall m_FUN_10fe2680(SCStr *param_2); template<class... A> int m_FUN_10fe2680(A...); void __thiscall m_FUN_10fe3520(undefined4 *param_2); template<class... A> int m_FUN_10fe3520(A...); void __thiscall m_FUN_10fe3720(uint param_2); template<class... A> int m_FUN_10fe3720(A...); void __thiscall m_FUN_10fe4550(SCStr *param_2); template<class... A> int m_FUN_10fe4550(A...); undefined1 __thiscall m_FUN_10fe6260(undefined4 param_2); template<class... A> int m_FUN_10fe6260(A...); void __thiscall m_FUN_10fe6460(SCStr *param_2); template<class... A> int m_FUN_10fe6460(A...); undefined4 * __thiscall m_FUN_10fe64e0(int *param_2); template<class... A> int m_FUN_10fe64e0(A...); undefined4 * __thiscall m_FUN_10fe6880(byte param_2); template<class... A> int m_FUN_10fe6880(A...); undefined4 * __thiscall m_FUN_10fe68c0(byte param_2); template<class... A> int m_FUN_10fe68c0(A...); void __thiscall m_FUN_10feb910(int param_2); template<class... A> int m_FUN_10feb910(A...); void __thiscall m_FUN_10febc00(undefined4 *param_2); template<class... A> int m_FUN_10febc00(A...); void __thiscall m_FUN_10febc50(undefined4 *param_2); template<class... A> int m_FUN_10febc50(A...); undefined4 * __thiscall m_FUN_10fec160(int *param_2); template<class... A> int m_FUN_10fec160(A...); undefined4 * __thiscall m_FUN_10fec1d0(int *param_2); template<class... A> int m_FUN_10fec1d0(A...); undefined4 * __thiscall m_FUN_10fec250(int *param_2); template<class... A> int m_FUN_10fec250(A...); undefined4 * __thiscall m_FUN_10feed00(byte param_2); template<class... A> int m_FUN_10feed00(A...); undefined4 * __thiscall m_FUN_10feed40(byte param_2); template<class... A> int m_FUN_10feed40(A...); undefined4 __thiscall m_FUN_10feeea0(byte param_2); template<class... A> int m_FUN_10feeea0(A...); undefined4 __thiscall m_FUN_10feeed0(byte param_2); template<class... A> int m_FUN_10feeed0(A...); undefined4 *  __thiscall m_FUN_10fef110(undefined4 *param_2); template<class... A> int m_FUN_10fef110(A...); undefined4 *  __thiscall m_FUN_10fef130(undefined4 *param_2); template<class... A> int m_FUN_10fef130(A...); undefined4 *  __thiscall m_FUN_10fef150(undefined4 *param_2); template<class... A> int m_FUN_10fef150(A...); undefined4 *  __thiscall m_FUN_10fef170(undefined4 *param_2); template<class... A> int m_FUN_10fef170(A...); void __thiscall m_FUN_10fef190(char param_2); template<class... A> int m_FUN_10fef190(A...); void __thiscall m_FUN_10fef1b0(char param_2); template<class... A> int m_FUN_10fef1b0(A...); void __thiscall m_FUN_10fef1d0(char param_2); template<class... A> int m_FUN_10fef1d0(A...); void __thiscall m_FUN_10fef1f0(char param_2); template<class... A> int m_FUN_10fef1f0(A...); void __thiscall m_FUN_10fef210(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10fef210(A...); void __thiscall m_FUN_10fef230(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10fef230(A...); undefined4 *  __thiscall m_FUN_10fef730(undefined4 *param_2); template<class... A> int m_FUN_10fef730(A...); undefined4 *  __thiscall m_FUN_10fef750(undefined4 *param_2); template<class... A> int m_FUN_10fef750(A...); undefined4 *  __thiscall m_FUN_10fef770(undefined4 *param_2); template<class... A> int m_FUN_10fef770(A...); undefined4 *  __thiscall m_FUN_10fef790(undefined4 *param_2); template<class... A> int m_FUN_10fef790(A...); void __thiscall m_FUN_10fefef0(int param_2); template<class... A> int m_FUN_10fefef0(A...); void __thiscall m_FUN_10ff0dc0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ff0dc0(A...); int * __thiscall m_FUN_10ff15c0(int *param_2); template<class... A> int m_FUN_10ff15c0(A...); SCStr * __thiscall m_FUN_10ff15e0(SCStr *param_2,int param_3,undefined4 param_4); template<class... A> int m_FUN_10ff15e0(A...); int * __thiscall m_FUN_10ff1650(int *param_2); template<class... A> int m_FUN_10ff1650(A...); int * __thiscall m_FUN_10ff1670(int *param_2); template<class... A> int m_FUN_10ff1670(A...); SCStr * __thiscall m_FUN_10ff20b0(SCStr *param_2); template<class... A> int m_FUN_10ff20b0(A...); SCStr * __thiscall m_FUN_10ff2b20(SCStr *param_2); template<class... A> int m_FUN_10ff2b20(A...); SCStr * __thiscall m_FUN_10ff2b80(SCStr *param_2); template<class... A> int m_FUN_10ff2b80(A...); SCStr * __thiscall m_FUN_10ff2ba0(SCStr *param_2); template<class... A> int m_FUN_10ff2ba0(A...); void __thiscall m_FUN_10ff8430(undefined4 *param_2); template<class... A> int m_FUN_10ff8430(A...); void __thiscall m_FUN_10ff8480(undefined4 *param_2); template<class... A> int m_FUN_10ff8480(A...); void __thiscall m_FUN_10ff8cb0(undefined4 param_2); template<class... A> int m_FUN_10ff8cb0(A...); void __thiscall m_FUN_10ff8cf0(undefined4 param_2); template<class... A> int m_FUN_10ff8cf0(A...); undefined4 * __thiscall m_FUN_10ffb2b0(byte param_2); template<class... A> int m_FUN_10ffb2b0(A...); void __thiscall m_FUN_10ffb670(undefined4 *param_2); template<class... A> int m_FUN_10ffb670(A...); void __thiscall m_FUN_10ffc070(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ffc070(A...); undefined4 * __thiscall m_FUN_10ffc290(int *param_2); template<class... A> int m_FUN_10ffc290(A...); int * __thiscall m_FUN_10ffca10(int *param_2); template<class... A> int m_FUN_10ffca10(A...); SCStr * __thiscall m_FUN_10ffca60(SCStr *param_2); template<class... A> int m_FUN_10ffca60(A...); int * __thiscall m_FUN_10ffcb10(int *param_2); template<class... A> int m_FUN_10ffcb10(A...); SCStr * __thiscall m_FUN_10ffcdc0(SCStr *param_2); template<class... A> int m_FUN_10ffcdc0(A...); SCStr * __thiscall m_FUN_10ffce10(SCStr *param_2); template<class... A> int m_FUN_10ffce10(A...); SCStr * __thiscall m_FUN_10ffce50(SCStr *param_2); template<class... A> int m_FUN_10ffce50(A...); void __thiscall m_FUN_10ffd210(int param_2); template<class... A> int m_FUN_10ffd210(A...); void __thiscall m_FUN_10ffd290(int param_2); template<class... A> int m_FUN_10ffd290(A...); void __thiscall m_FUN_10ffd500(int param_2); template<class... A> int m_FUN_10ffd500(A...); undefined4 * __thiscall m_FUN_10ffd540(int *param_2); template<class... A> int m_FUN_10ffd540(A...); void __thiscall m_FUN_10ffd650(int param_2); template<class... A> int m_FUN_10ffd650(A...); undefined4 * __thiscall m_FUN_10fff2e0(int *param_2); template<class... A> int m_FUN_10fff2e0(A...); undefined4 * __thiscall m_FUN_10fff8e0(byte param_2); template<class... A> int m_FUN_10fff8e0(A...); undefined4 * __thiscall m_FUN_10fffa70(byte param_2); template<class... A> int m_FUN_10fffa70(A...); undefined4 * __thiscall m_FUN_10fffbb0(byte param_2); template<class... A> int m_FUN_10fffbb0(A...); SCStr * __thiscall m_FUN_11002570(SCStr *param_2); template<class... A> int m_FUN_11002570(A...); SCStr * __thiscall m_FUN_11002ae0(SCStr *param_2); template<class... A> int m_FUN_11002ae0(A...); undefined4 * __thiscall m_FUN_11004630(byte param_2); template<class... A> int m_FUN_11004630(A...); undefined4 * __thiscall m_FUN_11004660(byte param_2); template<class... A> int m_FUN_11004660(A...); undefined4 * __thiscall m_FUN_11004690(byte param_2); template<class... A> int m_FUN_11004690(A...); undefined4 * __thiscall m_FUN_110046c0(byte param_2); template<class... A> int m_FUN_110046c0(A...); undefined4 __thiscall m_FUN_110046f0(byte param_2); template<class... A> int m_FUN_110046f0(A...); undefined4 * __thiscall m_FUN_11004720(byte param_2); template<class... A> int m_FUN_11004720(A...); undefined4 * __thiscall m_FUN_11004860(byte param_2); template<class... A> int m_FUN_11004860(A...); undefined4 * __thiscall m_FUN_110048a0(byte param_2); template<class... A> int m_FUN_110048a0(A...); undefined4 __thiscall m_FUN_11004980(byte param_2); template<class... A> int m_FUN_11004980(A...); undefined1 __thiscall m_FUN_11005070(undefined4 param_2); template<class... A> int m_FUN_11005070(A...); undefined1 __thiscall m_FUN_110050a0(undefined4 param_2); template<class... A> int m_FUN_110050a0(A...); undefined1 __thiscall m_FUN_110051f0(undefined4 param_2); template<class... A> int m_FUN_110051f0(A...); void __thiscall m_FUN_11007000(SCStr *param_2); template<class... A> int m_FUN_11007000(A...); void __thiscall m_FUN_11007030(SCStr *param_2); template<class... A> int m_FUN_11007030(A...); void __thiscall m_FUN_11007650(SCStr *param_2); template<class... A> int m_FUN_11007650(A...); void __thiscall m_FUN_110076a0(SCStr *param_2); template<class... A> int m_FUN_110076a0(A...); void __thiscall m_FUN_110076e0(SCStr *param_2); template<class... A> int m_FUN_110076e0(A...); void __thiscall m_FUN_11007710(SCStr *param_2); template<class... A> int m_FUN_11007710(A...); undefined4 * __thiscall m_FUN_110079c0(int *param_2); template<class... A> int m_FUN_110079c0(A...); undefined4 __thiscall m_FUN_11008130(byte param_2); template<class... A> int m_FUN_11008130(A...); undefined4 * __thiscall m_FUN_11010890(byte param_2); template<class... A> int m_FUN_11010890(A...); undefined4 * __thiscall m_FUN_110108c0(byte param_2); template<class... A> int m_FUN_110108c0(A...); undefined4 * __thiscall m_FUN_110109c0(byte param_2); template<class... A> int m_FUN_110109c0(A...); undefined4 * __thiscall m_FUN_11010e20(byte param_2); template<class... A> int m_FUN_11010e20(A...); void __thiscall m_FUN_11010f90(int *param_2); template<class... A> int m_FUN_11010f90(A...); undefined4 * __thiscall m_FUN_11017ac0(int *param_2); template<class... A> int m_FUN_11017ac0(A...); undefined4 * __thiscall m_FUN_11017eb0(byte param_2); template<class... A> int m_FUN_11017eb0(A...); undefined4 * __thiscall m_FUN_11017ee0(byte param_2); template<class... A> int m_FUN_11017ee0(A...); undefined4 __thiscall m_FUN_11017f20(byte param_2); template<class... A> int m_FUN_11017f20(A...); undefined4 * __thiscall m_FUN_11017f80(byte param_2); template<class... A> int m_FUN_11017f80(A...); SCStr * __thiscall m_FUN_11018160(SCStr *param_2); template<class... A> int m_FUN_11018160(A...); undefined4 * __thiscall m_FUN_11018bf0(byte param_2); template<class... A> int m_FUN_11018bf0(A...); undefined4 * __thiscall m_FUN_11018c30(byte param_2); template<class... A> int m_FUN_11018c30(A...); undefined4 * __thiscall m_FUN_11018d20(byte param_2); template<class... A> int m_FUN_11018d20(A...); undefined4 * __thiscall m_FUN_11018d60(byte param_2); template<class... A> int m_FUN_11018d60(A...); undefined4 __thiscall m_FUN_11019440(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_11019440(A...); undefined4 * __thiscall m_FUN_1101ac40(undefined4 param_2); template<class... A> int m_FUN_1101ac40(A...); undefined4 * __thiscall m_FUN_1101afb0(int *param_2); template<class... A> int m_FUN_1101afb0(A...); undefined4 * __thiscall m_FUN_1101b700(byte param_2); template<class... A> int m_FUN_1101b700(A...); undefined4 * __thiscall m_FUN_1101b740(byte param_2); template<class... A> int m_FUN_1101b740(A...); undefined4 * __thiscall m_FUN_1101b790(byte param_2); template<class... A> int m_FUN_1101b790(A...); undefined4 * __thiscall m_FUN_1101b7e0(byte param_2); template<class... A> int m_FUN_1101b7e0(A...); undefined4 * __thiscall m_FUN_1101b810(byte param_2); template<class... A> int m_FUN_1101b810(A...); undefined4 __thiscall m_FUN_1101b840(byte param_2); template<class... A> int m_FUN_1101b840(A...); undefined4 * __thiscall m_FUN_1101b870(byte param_2); template<class... A> int m_FUN_1101b870(A...); undefined4 __thiscall m_FUN_1101b940(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1101b940(A...); undefined4 __thiscall m_FUN_1101b9a0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1101b9a0(A...); undefined4 __thiscall m_FUN_1101b9e0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1101b9e0(A...); undefined4 __thiscall m_FUN_1101ba20(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1101ba20(A...); undefined4 * __thiscall m_FUN_1101d160(byte param_2); template<class... A> int m_FUN_1101d160(A...); undefined4 * __thiscall m_FUN_1101d1a0(byte param_2); template<class... A> int m_FUN_1101d1a0(A...); undefined4 * __thiscall m_FUN_1101d1f0(byte param_2); template<class... A> int m_FUN_1101d1f0(A...); undefined4 * __thiscall m_FUN_1101d240(byte param_2); template<class... A> int m_FUN_1101d240(A...); undefined4 * __thiscall m_FUN_1101d360(byte param_2); template<class... A> int m_FUN_1101d360(A...); undefined4 * __thiscall m_FUN_1101d3b0(byte param_2); template<class... A> int m_FUN_1101d3b0(A...); undefined4 * __thiscall m_FUN_1101d400(byte param_2); template<class... A> int m_FUN_1101d400(A...); undefined4 * __thiscall m_FUN_1101d450(byte param_2); template<class... A> int m_FUN_1101d450(A...); undefined4 * __thiscall m_FUN_1101d5e0(byte param_2); template<class... A> int m_FUN_1101d5e0(A...); undefined4 * __thiscall m_FUN_1101d630(byte param_2); template<class... A> int m_FUN_1101d630(A...); undefined4 __thiscall m_FUN_1101d760(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1101d760(A...); undefined4 __thiscall m_FUN_1101d780(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1101d780(A...); undefined4 __thiscall m_FUN_1101d8d0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1101d8d0(A...); undefined4 __thiscall m_FUN_1101d8f0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1101d8f0(A...); undefined4 __thiscall m_FUN_1101d9a0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1101d9a0(A...); undefined4 __thiscall m_FUN_1101da00(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1101da00(A...); undefined4 __thiscall m_FUN_1101dbb0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1101dbb0(A...); undefined4 __thiscall m_FUN_1101dc20(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1101dc20(A...); undefined4 __thiscall m_FUN_1101de90(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1101de90(A...); void __thiscall m_FUN_1101e240(int param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1101e240(A...); undefined4 * __thiscall m_FUN_1101ff80(byte param_2); template<class... A> int m_FUN_1101ff80(A...); undefined4 * __thiscall m_FUN_1101ffc0(byte param_2); template<class... A> int m_FUN_1101ffc0(A...); undefined4 * __thiscall m_FUN_11020010(byte param_2); template<class... A> int m_FUN_11020010(A...); undefined4 * __thiscall m_FUN_11020060(byte param_2); template<class... A> int m_FUN_11020060(A...); undefined4 * __thiscall m_FUN_11020090(byte param_2); template<class... A> int m_FUN_11020090(A...); undefined4 * __thiscall m_FUN_110200e0(byte param_2); template<class... A> int m_FUN_110200e0(A...); undefined4 * __thiscall m_FUN_11020130(byte param_2); template<class... A> int m_FUN_11020130(A...); undefined4 * __thiscall m_FUN_11020180(byte param_2); template<class... A> int m_FUN_11020180(A...); undefined4 * __thiscall m_FUN_110201d0(byte param_2); template<class... A> int m_FUN_110201d0(A...); undefined4 * __thiscall m_FUN_11020220(byte param_2); template<class... A> int m_FUN_11020220(A...); undefined4 * __thiscall m_FUN_11020370(byte param_2); template<class... A> int m_FUN_11020370(A...); undefined4 * __thiscall m_FUN_110203c0(byte param_2); template<class... A> int m_FUN_110203c0(A...); undefined4 __thiscall m_FUN_11020510(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11020510(A...); undefined4 __thiscall m_FUN_11020590(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11020590(A...); undefined4 __thiscall m_FUN_110205d0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_110205d0(A...); undefined4 __thiscall m_FUN_110205f0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_110205f0(A...); undefined4 __thiscall m_FUN_11020620(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11020620(A...); undefined4 __thiscall m_FUN_11020640(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11020640(A...); undefined4 __thiscall m_FUN_11020660(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11020660(A...); undefined4 __thiscall m_FUN_11020680(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11020680(A...); undefined4 __thiscall m_FUN_110206a0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_110206a0(A...); undefined4 __thiscall m_FUN_110206d0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_110206d0(A...); undefined4 __thiscall m_FUN_11020730(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11020730(A...); undefined4 * __thiscall m_FUN_11022010(byte param_2); template<class... A> int m_FUN_11022010(A...); undefined4 * __thiscall m_FUN_11022050(byte param_2); template<class... A> int m_FUN_11022050(A...); undefined4 * __thiscall m_FUN_110220a0(byte param_2); template<class... A> int m_FUN_110220a0(A...); undefined4 * __thiscall m_FUN_110220f0(byte param_2); template<class... A> int m_FUN_110220f0(A...); undefined4 __thiscall m_FUN_11022230(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11022230(A...); undefined4 __thiscall m_FUN_11022270(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); template<class... A> int m_FUN_11022270(A...); undefined4 __thiscall m_FUN_11022350(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11022350(A...); undefined4 __thiscall m_FUN_110223c0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_110223c0(A...); int __thiscall m_FUN_11023790(int *param_2); template<class... A> int m_FUN_11023790(A...); void __thiscall m_FUN_11025940(undefined4 *param_2); template<class... A> int m_FUN_11025940(A...); undefined4 * __thiscall m_FUN_11026060(int *param_2); template<class... A> int m_FUN_11026060(A...); undefined4 * __thiscall m_FUN_110260c0(int *param_2); template<class... A> int m_FUN_110260c0(A...); undefined4 * __thiscall m_FUN_11026120(int *param_2); template<class... A> int m_FUN_11026120(A...); undefined4 * __thiscall m_FUN_11026160(int *param_2); template<class... A> int m_FUN_11026160(A...); undefined4 * __thiscall m_FUN_110261d0(int *param_2); template<class... A> int m_FUN_110261d0(A...); undefined4 * __thiscall m_FUN_11026210(int *param_2); template<class... A> int m_FUN_11026210(A...); undefined4 * __thiscall m_FUN_11026230(int *param_2); template<class... A> int m_FUN_11026230(A...); undefined4 * __thiscall m_FUN_11026250(int *param_2); template<class... A> int m_FUN_11026250(A...); undefined4 * __thiscall m_FUN_11027ac0(byte param_2); template<class... A> int m_FUN_11027ac0(A...); undefined4 * __thiscall m_FUN_11027af0(byte param_2); template<class... A> int m_FUN_11027af0(A...); undefined4 * __thiscall m_FUN_11027b90(byte param_2); template<class... A> int m_FUN_11027b90(A...); undefined4 * __thiscall m_FUN_11027bd0(byte param_2); template<class... A> int m_FUN_11027bd0(A...); undefined4 * __thiscall m_FUN_11027c10(byte param_2); template<class... A> int m_FUN_11027c10(A...); undefined4 * __thiscall m_FUN_11027c50(byte param_2); template<class... A> int m_FUN_11027c50(A...); undefined4 * __thiscall m_FUN_11027ca0(byte param_2); template<class... A> int m_FUN_11027ca0(A...); undefined4 __thiscall m_FUN_11027cf0(byte param_2); template<class... A> int m_FUN_11027cf0(A...); undefined4 * __thiscall m_FUN_11027fa0(byte param_2); template<class... A> int m_FUN_11027fa0(A...); undefined4 * __thiscall m_FUN_11027fd0(byte param_2); template<class... A> int m_FUN_11027fd0(A...); undefined4 * __thiscall m_FUN_11028000(byte param_2); template<class... A> int m_FUN_11028000(A...); undefined4 * __thiscall m_FUN_11028030(byte param_2); template<class... A> int m_FUN_11028030(A...); void __thiscall m_FUN_110283d0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_110283d0(A...); SCStr * __thiscall m_FUN_1102af80(SCStr *param_2); template<class... A> int m_FUN_1102af80(A...); SCStr * __thiscall m_FUN_1102b260(SCStr *param_2); template<class... A> int m_FUN_1102b260(A...); int * __thiscall m_FUN_1102b4d0(int *param_2); template<class... A> int m_FUN_1102b4d0(A...); SCStr * __thiscall m_FUN_1102b4f0(SCStr *param_2); template<class... A> int m_FUN_1102b4f0(A...); void __thiscall m_FUN_1102db30(undefined4 *param_2); template<class... A> int m_FUN_1102db30(A...); undefined4 * __thiscall m_FUN_1102eca0(int *param_2); template<class... A> int m_FUN_1102eca0(A...); undefined4 * __thiscall m_FUN_1102ece0(int *param_2); template<class... A> int m_FUN_1102ece0(A...); undefined4 * __thiscall m_FUN_1102ed20(int *param_2); template<class... A> int m_FUN_1102ed20(A...); undefined4 * __thiscall m_FUN_1102ed60(int *param_2); template<class... A> int m_FUN_1102ed60(A...); undefined4 * __thiscall m_FUN_1102eda0(int *param_2); template<class... A> int m_FUN_1102eda0(A...); undefined4 * __thiscall m_FUN_1102f9d0(byte param_2); template<class... A> int m_FUN_1102f9d0(A...); undefined4 * __thiscall m_FUN_1102fa10(byte param_2); template<class... A> int m_FUN_1102fa10(A...); undefined4 * __thiscall m_FUN_1102fa60(byte param_2); template<class... A> int m_FUN_1102fa60(A...); undefined4 * __thiscall m_FUN_1102fb70(byte param_2); template<class... A> int m_FUN_1102fb70(A...); undefined4 * __thiscall m_FUN_1102fba0(byte param_2); template<class... A> int m_FUN_1102fba0(A...); undefined4 * __thiscall m_FUN_1102fdc0(byte param_2); template<class... A> int m_FUN_1102fdc0(A...); undefined4 * __thiscall m_FUN_1102fe10(byte param_2); template<class... A> int m_FUN_1102fe10(A...); void __thiscall m_FUN_1102ffa0(int *param_2); template<class... A> int m_FUN_1102ffa0(A...); SCStr * __thiscall m_FUN_11030e00(SCStr *param_2); template<class... A> int m_FUN_11030e00(A...); undefined4 * __thiscall m_FUN_110389b0(undefined4 param_2); template<class... A> int m_FUN_110389b0(A...); undefined4 __thiscall m_FUN_1103aa70(byte param_2); template<class... A> int m_FUN_1103aa70(A...); undefined4 * __thiscall m_FUN_1103aaa0(byte param_2); template<class... A> int m_FUN_1103aaa0(A...); undefined4 * __thiscall m_FUN_1103aaf0(byte param_2); template<class... A> int m_FUN_1103aaf0(A...); SCStr * __thiscall m_FUN_1103b2f0(SCStr *param_2); template<class... A> int m_FUN_1103b2f0(A...); undefined4 * __thiscall m_FUN_1103c270(undefined4 param_2); template<class... A> int m_FUN_1103c270(A...); undefined4 * __thiscall m_FUN_1103c310(byte param_2); template<class... A> int m_FUN_1103c310(A...); undefined4 * __thiscall m_FUN_1103c340(byte param_2); template<class... A> int m_FUN_1103c340(A...); undefined4 * __thiscall m_FUN_1103ca00(int *param_2); template<class... A> int m_FUN_1103ca00(A...); undefined4 * __thiscall m_FUN_1103ca40(int *param_2); template<class... A> int m_FUN_1103ca40(A...); undefined4 __thiscall m_FUN_1103dc90(byte param_2); template<class... A> int m_FUN_1103dc90(A...); undefined4 __thiscall m_FUN_1103dcc0(byte param_2); template<class... A> int m_FUN_1103dcc0(A...); undefined4 __thiscall m_FUN_1103de70(byte param_2); template<class... A> int m_FUN_1103de70(A...); void __thiscall m_FUN_1103ea20(int param_2); template<class... A> int m_FUN_1103ea20(A...); void __thiscall m_FUN_1103ea70(int param_2); template<class... A> int m_FUN_1103ea70(A...); bool __thiscall m_FUN_11041510(undefined4 param_2); template<class... A> int m_FUN_11041510(A...); void __thiscall m_FUN_11042050(int param_2); template<class... A> int m_FUN_11042050(A...); undefined4 * __thiscall m_FUN_11042250(int *param_2); template<class... A> int m_FUN_11042250(A...); undefined4 * __thiscall m_FUN_11042ac0(byte param_2); template<class... A> int m_FUN_11042ac0(A...); undefined4 * __thiscall m_FUN_11042af0(byte param_2); template<class... A> int m_FUN_11042af0(A...); undefined4 * __thiscall m_FUN_11042b20(byte param_2); template<class... A> int m_FUN_11042b20(A...); void __thiscall m_FUN_110432f0(int *param_2); template<class... A> int m_FUN_110432f0(A...); void __thiscall m_FUN_11043340(int param_2); template<class... A> int m_FUN_11043340(A...); void __thiscall m_FUN_11052040(int *param_2); template<class... A> int m_FUN_11052040(A...); undefined4 * __thiscall m_FUN_11056d00(byte param_2); template<class... A> int m_FUN_11056d00(A...); undefined4 * __thiscall m_FUN_11056d50(byte param_2); template<class... A> int m_FUN_11056d50(A...); undefined4 __thiscall m_FUN_11056da0(byte param_2); template<class... A> int m_FUN_11056da0(A...); undefined4 __thiscall m_FUN_11057300(undefined4 param_2); template<class... A> int m_FUN_11057300(A...); void __thiscall m_FUN_11057340(int param_2); template<class... A> int m_FUN_11057340(A...); undefined4 __thiscall m_FUN_11057690(undefined4 param_2); template<class... A> int m_FUN_11057690(A...); undefined4 __thiscall m_FUN_110576b0(undefined4 param_2); template<class... A> int m_FUN_110576b0(A...); void __thiscall m_FUN_1105dd20(undefined4 param_2); template<class... A> int m_FUN_1105dd20(A...); undefined4 __thiscall m_FUN_1105e3c0(uint param_2); template<class... A> int m_FUN_1105e3c0(A...); undefined4 __thiscall m_FUN_1105eb10(int param_2); template<class... A> int m_FUN_1105eb10(A...); undefined4 * __thiscall m_FUN_1105f3b0(int *param_2); template<class... A> int m_FUN_1105f3b0(A...); undefined4 * __thiscall m_FUN_1105f3f0(int *param_2); template<class... A> int m_FUN_1105f3f0(A...); undefined4 * __thiscall m_FUN_1105f420(undefined4 param_2); template<class... A> int m_FUN_1105f420(A...); undefined4 * __thiscall m_FUN_1105f830(byte param_2); template<class... A> int m_FUN_1105f830(A...); undefined4 * __thiscall m_FUN_1105f860(byte param_2); template<class... A> int m_FUN_1105f860(A...); undefined4 __thiscall m_FUN_1105f8a0(byte param_2); template<class... A> int m_FUN_1105f8a0(A...); undefined4 * __thiscall m_FUN_1105f8d0(byte param_2); template<class... A> int m_FUN_1105f8d0(A...); undefined4 * __thiscall m_FUN_1105f900(byte param_2); template<class... A> int m_FUN_1105f900(A...); undefined4 * __thiscall m_FUN_1105f950(byte param_2); template<class... A> int m_FUN_1105f950(A...); undefined4 * __thiscall m_FUN_11061740(int *param_2); template<class... A> int m_FUN_11061740(A...); undefined4 * __thiscall m_FUN_11061b20(byte param_2); template<class... A> int m_FUN_11061b20(A...); undefined4 __thiscall m_FUN_11061b60(byte param_2); template<class... A> int m_FUN_11061b60(A...); undefined4 * __thiscall m_FUN_11061b90(byte param_2); template<class... A> int m_FUN_11061b90(A...); undefined4 * __thiscall m_FUN_11061bc0(byte param_2); template<class... A> int m_FUN_11061bc0(A...); undefined4 * __thiscall m_FUN_11062320(int *param_2); template<class... A> int m_FUN_11062320(A...); undefined4 * __thiscall m_FUN_11062370(undefined4 param_2); template<class... A> int m_FUN_11062370(A...); undefined4 * __thiscall m_FUN_110623b0(undefined4 param_2); template<class... A> int m_FUN_110623b0(A...); undefined4 * __thiscall m_FUN_110623f0(undefined4 param_2); template<class... A> int m_FUN_110623f0(A...); undefined4 * __thiscall m_FUN_11062430(undefined4 param_2); template<class... A> int m_FUN_11062430(A...); undefined4 * __thiscall m_FUN_11062470(undefined4 param_2); template<class... A> int m_FUN_11062470(A...); undefined4 * __thiscall m_FUN_110624b0(undefined4 param_2); template<class... A> int m_FUN_110624b0(A...); undefined4 * __thiscall m_FUN_110624f0(undefined4 param_2); template<class... A> int m_FUN_110624f0(A...); undefined4 * __thiscall m_FUN_11062750(byte param_2); template<class... A> int m_FUN_11062750(A...); undefined4 __thiscall m_FUN_11062790(byte param_2); template<class... A> int m_FUN_11062790(A...); undefined4 * __thiscall m_FUN_110627c0(byte param_2); template<class... A> int m_FUN_110627c0(A...); undefined4 * __thiscall m_FUN_110627f0(byte param_2); template<class... A> int m_FUN_110627f0(A...); undefined4 * __thiscall m_FUN_11064fb0(byte param_2); template<class... A> int m_FUN_11064fb0(A...); undefined4 __thiscall m_FUN_11064fe0(byte param_2); template<class... A> int m_FUN_11064fe0(A...); undefined4 __thiscall m_FUN_110650c0(byte param_2); template<class... A> int m_FUN_110650c0(A...); undefined4 * __thiscall m_FUN_110650f0(byte param_2); template<class... A> int m_FUN_110650f0(A...); SCStr * __thiscall m_FUN_110652f0(SCStr *param_2); template<class... A> int m_FUN_110652f0(A...); undefined4 __thiscall m_FUN_11065fc0(char *param_2,uint param_3); template<class... A> int m_FUN_11065fc0(A...); undefined4 * __thiscall m_FUN_11065fe0(undefined4 param_2); template<class... A> int m_FUN_11065fe0(A...); undefined4 * __thiscall m_FUN_11066070(byte param_2); template<class... A> int m_FUN_11066070(A...); undefined4 * __thiscall m_FUN_110660b0(byte param_2); template<class... A> int m_FUN_110660b0(A...); undefined4 * __thiscall m_FUN_110660e0(byte param_2); template<class... A> int m_FUN_110660e0(A...); undefined4 * __thiscall m_FUN_11066e50(byte param_2); template<class... A> int m_FUN_11066e50(A...); undefined4 * __thiscall m_FUN_11066f70(byte param_2); template<class... A> int m_FUN_11066f70(A...); SCStr * __thiscall m_FUN_11066fc0(SCStr *param_2); template<class... A> int m_FUN_11066fc0(A...); SCStr * __thiscall m_FUN_11066fe0(SCStr *param_2); template<class... A> int m_FUN_11066fe0(A...); SCStr * __thiscall m_FUN_11067030(SCStr *param_2); template<class... A> int m_FUN_11067030(A...); undefined4 * __thiscall m_FUN_11067680(int *param_2); template<class... A> int m_FUN_11067680(A...); undefined4 * __thiscall m_FUN_11067a80(byte param_2); template<class... A> int m_FUN_11067a80(A...); undefined4 * __thiscall m_FUN_11067ab0(byte param_2); template<class... A> int m_FUN_11067ab0(A...); undefined4 __thiscall m_FUN_11067af0(byte param_2); template<class... A> int m_FUN_11067af0(A...); undefined4 * __thiscall m_FUN_11067b20(byte param_2); template<class... A> int m_FUN_11067b20(A...); undefined4 * __thiscall m_FUN_11067b50(byte param_2); template<class... A> int m_FUN_11067b50(A...); SCStr * __thiscall m_FUN_11067e10(SCStr *param_2); template<class... A> int m_FUN_11067e10(A...); void __thiscall m_FUN_11071fc0(undefined4 param_2); template<class... A> int m_FUN_11071fc0(A...); void __thiscall m_FUN_11071ff0(undefined4 param_2); template<class... A> int m_FUN_11071ff0(A...); int __thiscall m_FUN_110722a0(uint *param_2); template<class... A> int m_FUN_110722a0(A...); int __thiscall m_FUN_110722e0(uint *param_2); template<class... A> int m_FUN_110722e0(A...); int __thiscall m_FUN_11072320(undefined4 param_2); template<class... A> int m_FUN_11072320(A...); int __thiscall m_FUN_11072370(undefined4 param_2); template<class... A> int m_FUN_11072370(A...); undefined4 * __thiscall m_FUN_1107acb0(byte param_2); template<class... A> int m_FUN_1107acb0(A...); undefined4 * __thiscall m_FUN_1107ace0(byte param_2); template<class... A> int m_FUN_1107ace0(A...); undefined4 * __thiscall m_FUN_1107b260(byte param_2); template<class... A> int m_FUN_1107b260(A...); undefined4 * __thiscall m_FUN_1107b290(byte param_2); template<class... A> int m_FUN_1107b290(A...); undefined4 * __thiscall m_FUN_1107b2c0(byte param_2); template<class... A> int m_FUN_1107b2c0(A...); undefined4 * __thiscall m_FUN_1107b2f0(byte param_2); template<class... A> int m_FUN_1107b2f0(A...); undefined4 * __thiscall m_FUN_1107b320(byte param_2); template<class... A> int m_FUN_1107b320(A...); undefined4 * __thiscall m_FUN_1107b350(byte param_2); template<class... A> int m_FUN_1107b350(A...); undefined4 * __thiscall m_FUN_1107b440(byte param_2); template<class... A> int m_FUN_1107b440(A...); undefined4 * __thiscall m_FUN_1107b550(byte param_2); template<class... A> int m_FUN_1107b550(A...); undefined4 __thiscall m_FUN_1107b5a0(byte param_2); template<class... A> int m_FUN_1107b5a0(A...); undefined4 * __thiscall m_FUN_1107b5d0(byte param_2); template<class... A> int m_FUN_1107b5d0(A...); undefined4 __thiscall m_FUN_1107b620(byte param_2); template<class... A> int m_FUN_1107b620(A...); undefined4 * __thiscall m_FUN_1107b650(byte param_2); template<class... A> int m_FUN_1107b650(A...); undefined4 __thiscall m_FUN_1107b690(byte param_2); template<class... A> int m_FUN_1107b690(A...); void __thiscall m_FUN_1107be90(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1107be90(A...); void __thiscall m_FUN_1107beb0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1107beb0(A...); void __thiscall m_FUN_1107ee00(int param_2); template<class... A> int m_FUN_1107ee00(A...); void __thiscall m_FUN_1107ee50(int param_2); template<class... A> int m_FUN_1107ee50(A...); void __thiscall m_FUN_1107eea0(int param_2); template<class... A> int m_FUN_1107eea0(A...); void __thiscall m_FUN_1107eef0(int param_2); template<class... A> int m_FUN_1107eef0(A...); void __thiscall m_FUN_1107ef40(int param_2); template<class... A> int m_FUN_1107ef40(A...); void __thiscall m_FUN_1107ef90(int param_2); template<class... A> int m_FUN_1107ef90(A...); void __thiscall m_FUN_1107efe0(int param_2); template<class... A> int m_FUN_1107efe0(A...); void __thiscall m_FUN_1107f030(int param_2); template<class... A> int m_FUN_1107f030(A...); void __thiscall m_FUN_1107f080(int param_2); template<class... A> int m_FUN_1107f080(A...); void __thiscall m_FUN_1107f0c0(int param_2); template<class... A> int m_FUN_1107f0c0(A...); void __thiscall m_FUN_1107f100(int param_2); template<class... A> int m_FUN_1107f100(A...); void __thiscall m_FUN_1107f140(int param_2); template<class... A> int m_FUN_1107f140(A...); undefined4 __thiscall m_FUN_11081680(uint param_2); template<class... A> int m_FUN_11081680(A...); undefined4 __thiscall m_FUN_11081b80(uint param_2); template<class... A> int m_FUN_11081b80(A...); undefined4 __thiscall m_FUN_11081bb0(uint param_2); template<class... A> int m_FUN_11081bb0(A...); undefined4 __thiscall m_FUN_11082dc0(uint param_2); template<class... A> int m_FUN_11082dc0(A...); int * __thiscall m_FUN_11082e10(uint param_2); template<class... A> int m_FUN_11082e10(A...); undefined4 __thiscall m_FUN_110937d0(undefined4 param_2); template<class... A> int m_FUN_110937d0(A...); undefined4 __thiscall m_FUN_11093800(undefined4 param_2); template<class... A> int m_FUN_11093800(A...); undefined4 __thiscall m_FUN_11093d10(undefined4 param_2); template<class... A> int m_FUN_11093d10(A...); undefined4 __thiscall m_FUN_11093d50(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_11093d50(A...); void __thiscall m_FUN_11096b70(undefined4 param_2); template<class... A> int m_FUN_11096b70(A...); void __thiscall m_FUN_11096c90(undefined4 param_2); template<class... A> int m_FUN_11096c90(A...); void __thiscall m_FUN_11097130(undefined4 param_2); template<class... A> int m_FUN_11097130(A...); undefined4 __thiscall m_FUN_110974e0(undefined4 param_2); template<class... A> int m_FUN_110974e0(A...); void __thiscall m_FUN_11097520(int param_2); template<class... A> int m_FUN_11097520(A...); void __thiscall m_FUN_110977e0(undefined4 param_2); template<class... A> int m_FUN_110977e0(A...); void __thiscall m_FUN_11097830(undefined4 param_2); template<class... A> int m_FUN_11097830(A...); void __thiscall m_FUN_11097870(undefined4 param_2); template<class... A> int m_FUN_11097870(A...); void __thiscall m_FUN_11098740(undefined4 param_2); template<class... A> int m_FUN_11098740(A...); int __thiscall m_FUN_11098860(undefined4 param_2); template<class... A> int m_FUN_11098860(A...); undefined4 __thiscall m_FUN_110996a0(byte param_2); template<class... A> int m_FUN_110996a0(A...); undefined4 * __thiscall m_FUN_110996d0(byte param_2); template<class... A> int m_FUN_110996d0(A...); undefined4 * __thiscall m_FUN_1109dae0(byte param_2); template<class... A> int m_FUN_1109dae0(A...); undefined4 * __thiscall m_FUN_1109db10(byte param_2); template<class... A> int m_FUN_1109db10(A...); undefined4 * __thiscall m_FUN_1109db40(byte param_2); template<class... A> int m_FUN_1109db40(A...); undefined4 * __thiscall m_FUN_1109dba0(byte param_2); template<class... A> int m_FUN_1109dba0(A...); undefined4 __thiscall m_FUN_1109dbf0(byte param_2); template<class... A> int m_FUN_1109dbf0(A...); void __thiscall m_FUN_1109dee0(int param_2); template<class... A> int m_FUN_1109dee0(A...); void __thiscall m_FUN_1109ef90(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1109ef90(A...); void __thiscall m_FUN_1109f0a0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_1109f0a0(A...); void __thiscall m_FUN_1109f100(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1109f100(A...); void __thiscall m_FUN_1109f280(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1109f280(A...); void __thiscall m_FUN_1109f320(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1109f320(A...); };

extern int FUN_1003d5d7(...);
extern int FUN_10065348(...);
extern int FUN_1006aac8(...);
extern int FUN_10070892(...);
extern int FUN_10f4b5e0(...);
extern int FUN_11069ce0(...);
template<class... A> int __stdcall FUN_1111b230(A...);
extern int FUN_1111c680(...);
extern int LOCK(...);
extern int SCThreadSafeInc(...);
extern int UNLOCK(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _time64(...);
extern int createPropertyBag(...);
extern int createSCStringArray(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern __declspec(dllimport) int strncmp(...);
extern int thunk_FUN_101a2bf0(...);
extern int thunk_FUN_101a2c70(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101f4060(...);
extern int thunk_FUN_101fda20(...);
extern int thunk_FUN_10202e00(...);
extern int thunk_FUN_1020b1d0(...);
extern int thunk_FUN_1020b530(...);
template<class... A> int __stdcall thunk_FUN_1020bd10(A...);
extern int thunk_FUN_10217cd0(...);
extern int thunk_FUN_1021b750(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_1029e960(...);
extern int thunk_FUN_102d65b0(...);
extern int thunk_FUN_103d61d0(...);
template<class... A> int __stdcall thunk_FUN_103d65f0(A...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_104d8ab0(...);
extern int thunk_FUN_104dad90(...);
template<class... A> int __stdcall thunk_FUN_1059d5a0(A...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_105b6490(...);
extern int thunk_FUN_10655080(...);
extern int thunk_FUN_10bcda40(...);
template<class... A> int __stdcall thunk_FUN_10d4d500(A...);
extern int thunk_FUN_10d4d580(...);
extern int thunk_FUN_10d50930(...);
extern int thunk_FUN_10d5e1e0(...);
extern int thunk_FUN_10d5e270(...);
extern int thunk_FUN_10dd1440(...);
extern int thunk_FUN_10dd4b80(...);
extern int thunk_FUN_10dd5d50(...);
extern int thunk_FUN_10e460f0(...);
extern int thunk_FUN_10f31aa0(...);
extern int thunk_FUN_10f31bf0(...);
extern int thunk_FUN_10f376d0(...);
extern int thunk_FUN_10f377b0(...);
extern int thunk_FUN_10f37810(...);
extern int thunk_FUN_10f3da70(...);
extern int thunk_FUN_10f3e260(...);
extern int thunk_FUN_10f41620(...);
extern int thunk_FUN_10f449a0(...);
extern int thunk_FUN_10f44b00(...);
extern int thunk_FUN_10f45640(...);
extern int thunk_FUN_10f456a0(...);
extern int thunk_FUN_10f45a10(...);
extern int thunk_FUN_10f463a0(...);
extern int thunk_FUN_10f46e10(...);
template<class... A> int __stdcall thunk_FUN_10f46e70(A...);
extern int thunk_FUN_10f49380(...);
template<class... A> int __stdcall thunk_FUN_10f494b0(A...);
template<class... A> int __stdcall thunk_FUN_10f4da00(A...);
extern int thunk_FUN_10f4e790(...);
extern int thunk_FUN_10f4e870(...);
extern int thunk_FUN_10f50770(...);
extern int thunk_FUN_10f52210(...);
extern int thunk_FUN_10f570c0(...);
extern int thunk_FUN_10f57210(...);
extern int thunk_FUN_10f57360(...);
extern int thunk_FUN_10f574b0(...);
extern int thunk_FUN_10f63480(...);
extern int thunk_FUN_10f65b40(...);
extern int thunk_FUN_10f65c90(...);
extern int thunk_FUN_10f67a90(...);
extern int thunk_FUN_10f67e60(...);
extern int thunk_FUN_10f68190(...);
extern int thunk_FUN_10f6b380(...);
extern int thunk_FUN_10f6b490(...);
extern int thunk_FUN_10f6be30(...);
extern int thunk_FUN_10f708b0(...);
extern int thunk_FUN_10f70a00(...);
extern int thunk_FUN_10f70dc0(...);
extern int thunk_FUN_10f70f70(...);
extern int thunk_FUN_10f73060(...);
template<class... A> int __stdcall thunk_FUN_10f744a0(A...);
extern int thunk_FUN_10f74a60(...);
extern int thunk_FUN_10f74bd0(...);
extern int thunk_FUN_10f75720(...);
extern int thunk_FUN_10f77a80(...);
template<class... A> int __stdcall thunk_FUN_10f7bb60(A...);
extern int thunk_FUN_10f7bdc0(...);
extern int thunk_FUN_10f7d8c0(...);
extern int thunk_FUN_10f7da10(...);
extern int thunk_FUN_10f7dfd0(...);
extern int thunk_FUN_10f7e0c0(...);
extern int thunk_FUN_10f7f220(...);
extern int thunk_FUN_10f82750(...);
extern int thunk_FUN_10f82840(...);
extern int thunk_FUN_10f86b70(...);
extern int thunk_FUN_10f86c10(...);
extern int thunk_FUN_10f86cd0(...);
extern int thunk_FUN_10f87140(...);
extern int thunk_FUN_10f8b460(...);
extern int thunk_FUN_10f8b5b0(...);
extern int thunk_FUN_10f8b700(...);
extern int thunk_FUN_10f8b8c0(...);
extern int thunk_FUN_10f8ba50(...);
extern int thunk_FUN_10f999a0(...);
extern int thunk_FUN_10f99a90(...);
extern int thunk_FUN_10f99ba0(...);
extern int thunk_FUN_10fa0090(...);
extern int thunk_FUN_10fa4480(...);
extern int thunk_FUN_10fa7300(...);
template<class... A> int __stdcall thunk_FUN_10fab530(A...);
template<class... A> int __stdcall thunk_FUN_10fab5b0(A...);
extern int thunk_FUN_10fab630(...);
extern int thunk_FUN_10fab6b0(...);
extern int thunk_FUN_10fab730(...);
extern int thunk_FUN_10fab810(...);
extern int thunk_FUN_10fab930(...);
template<class... A> int __stdcall thunk_FUN_10fabd40(A...);
template<class... A> int __stdcall thunk_FUN_10fabfe0(A...);
template<class... A> int __stdcall thunk_FUN_10fac280(A...);
template<class... A> int __stdcall thunk_FUN_10fac550(A...);
template<class... A> int __stdcall thunk_FUN_10fac7f0(A...);
extern int thunk_FUN_10fb01d0(...);
extern int thunk_FUN_10fc0ad0(...);
extern int thunk_FUN_10fc0c00(...);
extern int thunk_FUN_10fc5a10(...);
extern int thunk_FUN_10fca310(...);
extern int thunk_FUN_10fcbda0(...);
extern int thunk_FUN_10fcd700(...);
template<class... A> int __stdcall thunk_FUN_10fcd830(A...);
extern int thunk_FUN_10fce4b0(...);
extern int thunk_FUN_10fd9460(...);
extern int thunk_FUN_10fde940(...);
template<class... A> int __stdcall thunk_FUN_10fdea70(A...);
extern int thunk_FUN_10fe0880(...);
extern int thunk_FUN_10fe9060(...);
extern int thunk_FUN_10fe9100(...);
template<class... A> int __stdcall thunk_FUN_10fe96d0(A...);
template<class... A> int __stdcall thunk_FUN_10fe9990(A...);
extern int thunk_FUN_10fe9cb0(...);
extern int thunk_FUN_10feda70(...);
extern int thunk_FUN_10fedfd0(...);
extern int thunk_FUN_10ff3290(...);
extern int thunk_FUN_10ff3f10(...);
extern int thunk_FUN_10ff4670(...);
extern int thunk_FUN_10ff8d30(...);
template<class... A> int __stdcall thunk_FUN_10ff8fb0(A...);
extern int thunk_FUN_10ffa820(...);
extern int thunk_FUN_11003ef0(...);
extern int thunk_FUN_11004170(...);
extern int thunk_FUN_11007d70(...);
extern int thunk_FUN_11017ca0(...);
extern int thunk_FUN_1101b470(...);
extern int thunk_FUN_1101ced0(...);
extern int thunk_FUN_1101f010(...);
extern int thunk_FUN_110232f0(...);
template<class... A> int __stdcall thunk_FUN_11023420(A...);
extern int thunk_FUN_11023740(...);
extern int thunk_FUN_110237d0(...);
extern int thunk_FUN_11026d20(...);
extern int thunk_FUN_110271f0(...);
extern int thunk_FUN_1102bc60(...);
extern int thunk_FUN_1103a600(...);
extern int thunk_FUN_1103c2d0(...);
extern int thunk_FUN_1103d370(...);
extern int thunk_FUN_1103d530(...);
extern int thunk_FUN_1103d850(...);
extern int thunk_FUN_11042880(...);
extern int thunk_FUN_11043b80(...);
extern int thunk_FUN_1104af00(...);
extern int thunk_FUN_1104da60(...);
extern int thunk_FUN_11054650(...);
extern int thunk_FUN_11056710(...);
extern int thunk_FUN_1105ce90(...);
extern int thunk_FUN_1105cf60(...);
extern int thunk_FUN_1105cfc0(...);
extern int thunk_FUN_1105f600(...);
extern int thunk_FUN_11061920(...);
extern int thunk_FUN_110621c0(...);
extern int thunk_FUN_11062550(...);
extern int thunk_FUN_11063760(...);
extern int thunk_FUN_11064c80(...);
extern int thunk_FUN_11064e60(...);
extern int thunk_FUN_11066000(...);
extern int thunk_FUN_11067870(...);
extern int thunk_FUN_1106a8d0(...);
extern int thunk_FUN_1106b190(...);
extern int thunk_FUN_1106f2b0(...);
extern int thunk_FUN_1106f380(...);
extern int thunk_FUN_110709e0(...);
extern int thunk_FUN_11070a80(...);
template<class... A> int __stdcall thunk_FUN_11072020(A...);
template<class... A> int __stdcall thunk_FUN_11072070(A...);
template<class... A> int __stdcall thunk_FUN_110720c0(A...);
extern int thunk_FUN_110721b0(...);
extern int thunk_FUN_110723c0(...);
extern int thunk_FUN_11072420(...);
extern int thunk_FUN_11072480(...);
extern int thunk_FUN_110724f0(...);
extern int thunk_FUN_110799a0(...);
extern int thunk_FUN_1107f630(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_110844a0(...);
extern int thunk_FUN_11089c30(...);
extern int thunk_FUN_11089ce0(...);
extern int thunk_FUN_11091380(...);
template<class... A> int __stdcall thunk_FUN_11092d30(A...);
extern int thunk_FUN_110935f0(...);
extern int thunk_FUN_11098770(...);
extern int thunk_FUN_110988b0(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_1109ac80(...);
extern int thunk_FUN_1109af80(...);
extern int thunk_FUN_1109d610(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a0210(...);
extern int thunk_FUN_110a30d0(...);
extern int thunk_FUN_110a3240(...);
extern int thunk_FUN_110a3e60(...);
extern int thunk_FUN_110a5ba0(...);
extern int thunk_FUN_110b87c0(...);
extern int thunk_FUN_110b9480(...);
extern int thunk_FUN_110b9840(...);
extern int thunk_FUN_110ba560(...);
template<class... A> int __stdcall thunk_FUN_110ba960(A...);
extern int thunk_FUN_110bb5f0(...);
extern int thunk_FUN_110bc160(...);
extern int thunk_FUN_110bdb80(...);
extern int thunk_FUN_110bee40(...);
extern int thunk_FUN_110cb840(...);
extern int thunk_FUN_110f62c0(...);
extern int thunk_FUN_110f6450(...);
extern int thunk_FUN_111046c0(...);
extern int thunk_FUN_111123b0(...);
extern int thunk_FUN_111123c0(...);
extern int thunk_FUN_11113190(...);
extern int thunk_FUN_11113cb0(...);
extern int thunk_FUN_1111b630(...);
extern int thunk_FUN_1111bc60(...);
extern int thunk_FUN_1112b9e0(...);
extern int thunk_FUN_1112be50(...);
extern int thunk_FUN_1112c280(...);
extern int thunk_FUN_11136780(...);
extern int thunk_FUN_11136870(...);
extern int thunk_FUN_11138b60(...);
template<class... A> int __stdcall thunk_FUN_1113ea20(A...);
extern int thunk_FUN_1113eb00(...);
template<class... A> int __stdcall thunk_FUN_1113ecc0(A...);
extern int thunk_FUN_1114a810(...);
extern int thunk_FUN_1115f330(...);
extern int thunk_FUN_1115f360(...);
extern int thunk_FUN_1115f390(...);
extern int thunk_FUN_1115f570(...);
extern int thunk_FUN_11161d90(...);
extern int thunk_FUN_11162290(...);
extern int thunk_FUN_11162620(...);
extern int thunk_FUN_11164710(...);
extern int thunk_FUN_11164740(...);
extern int thunk_FUN_1116d520(...);
extern int thunk_FUN_111a0940(...);
extern int thunk_FUN_111a2bd0(...);
extern int thunk_FUN_111a2df0(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_111a4bc0(...);
extern int thunk_FUN_111a4f00(...);
extern int thunk_FUN_111a7100(...);
extern int thunk_FUN_111af700(...);
template<class... A> int __stdcall thunk_FUN_111c0af0(A...);
extern int thunk_FUN_111c1530(...);
extern int thunk_FUN_111f6cc0(...);
extern int thunk_FUN_111f6d60(...);
extern int thunk_FUN_111fc270(...);
extern int thunk_FUN_11203e10(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11246070(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_112503c0(...);
extern int thunk_FUN_112624a0(...);
extern int thunk_FUN_11264fd0(...);
extern int thunk_FUN_1127f190(...);
extern int thunk_FUN_1128f080(...);
extern int thunk_FUN_1128f0a0(...);
extern int thunk_FUN_1128f0f0(...);
extern int thunk_FUN_1128f110(...);
extern int thunk_FUN_1128f160(...);
extern int thunk_FUN_1128f1b0(...);
extern int thunk_FUN_1128f200(...);
extern int thunk_FUN_1128f250(...);
extern int thunk_FUN_112a7f20(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112a8d70(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_114577b0(...);
extern int thunk_FUN_11458fa0(...);
extern int thunk_FUN_114595b0(...);
extern int thunk_FUN_1145c720(...);
extern int thunk_FUN_11465e10(...);
extern int thunk_FUN_11467010(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int DAT_0000449c;
extern int DAT_1186d2ee;
extern int DAT_11882ff0;
extern int DAT_1195e878;
extern int DAT_119be5e8;
extern int DAT_119be748;
extern int DAT_119be7e8;
extern int DAT_119be958;
extern int DAT_119be9f8;
extern int DAT_119bea08;
extern int DAT_119bea48;
extern int DAT_119c0f4c;
extern int DAT_119c0f88;
extern int DAT_119c1a70;
extern int DAT_119c1a78;
extern int DAT_119c1a80;
extern int DAT_1211a564;
extern int DAT_1211a56c;
extern int DAT_1211a570;
extern int DAT_12126b84;
extern int DAT_121a07b0;
extern int DAT_121a07b4;
extern int DAT_121a7b5d;
extern int DAT_121a7b60;
extern int DAT_121a7b64;
extern int DAT_121a7ba0;
extern int DAT_121a7ba4;
extern int DAT_121b54e0;
extern int DAT_121b60d8;
extern int DAT_122af408;
extern int DAT_122e8730;
extern int DAT_122e8d30;
extern int g_lSCObjCount;
extern int ghidra_vftable_RAlarmProgramDataBrowseCB;
extern int ghidra_vftable_RCDDynamicPropertyCB;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlDiag;
extern int ghidra_vftable_RGetAvailableServicesCB;
extern int ghidra_vftable_RHTControl;
extern int ghidra_vftable_RMSQuickSkip;
extern int ghidra_vftable_RMultiAcctSettings;
extern int ghidra_vftable_RMusicServicesDirectory;
extern int ghidra_vftable_ROAuthCB;
extern int ghidra_vftable_RSMAPIContextCB;
extern int ghidra_vftable_RSOAPFaultHandler;
extern int ghidra_vftable_RServiceAuthHeaderBuilderFactory;
extern int ghidra_vftable_RStringFileParserCB;
extern int ghidra_vftable_RSvcAccountsCB;
extern int ghidra_vftable_RTrackRatingsEventHandler;
extern int ghidra_vftable_RUpnpACCreateAlarmAIOOp;
extern int ghidra_vftable_RUpnpACUpdateAlarmAIOOp;
extern int ghidra_vftable_RUpnpAVTReorderTracksInSavedQueueAIOOp;
extern int ghidra_vftable_RUpnpAVTSetCrossfadeModeAIOOp;
extern int ghidra_vftable_RUpnpAVTSnoozeAlarmAIOOp;
extern int ghidra_vftable_RUpnpCDGetAlbumArtistDisplayOptionAIOOp;
extern int ghidra_vftable_RUpnpHTCGetIRRepeaterStateAIOOp;
extern int ghidra_vftable_RUpnpRCGetRoomCalibrationStatusAIOOp;
extern int ghidra_vftable_RUpnpSPEnableRDMAIOOp;
extern int ghidra_vftable_RUpnpSPRefreshAccountCredentialsXAIOOp;
extern int ghidra_vftable_RZPSortOrderManager;
extern int ghidra_vftable_SCAggregateHelper;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCBTNowPlayingSource;
extern int ghidra_vftable_SCBTNowPlayingTransport;
extern int ghidra_vftable_SCBitmapLoader;
extern int ghidra_vftable_SCBridgeRemovalWizardCompleteState;
extern int ghidra_vftable_SCBridgeRemovalWizardInitState;
extern int ghidra_vftable_SCBridgeRemovalWizardIntroState;
extern int ghidra_vftable_SCDeleteAsyncIOOperation;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCInfoViewTextPaneMetadata;
extern int ghidra_vftable_SCJPGBitmapLoader;
extern int ghidra_vftable_SCLegacyBitmapLoadAsyncIOOperation;
extern int ghidra_vftable_SCLegacySubmitDiagsWizCompleteState;
extern int ghidra_vftable_SCLegacySubmitDiagsWizInitState;
extern int ghidra_vftable_SCLegacySubmitDiagsWizIntroState;
extern int ghidra_vftable_SCLifecycleLauncherWizardCompleteState;
extern int ghidra_vftable_SCLifecycleLauncherWizardInitState;
extern int ghidra_vftable_SCLifecycleNetworkTestInitState;
extern int ghidra_vftable_SCLifecyclePlayerRemovalWizardCompleteState;
extern int ghidra_vftable_SCLifecyclePlayerRemovalWizardInitState;
extern int ghidra_vftable_SCLifecyclePlayerRemovalWizardIntroState;
extern int ghidra_vftable_SCLoadingBrowseDatasource;
extern int ghidra_vftable_SCNowPlayingRatings;
extern int ghidra_vftable_SCNowPlayingRatingsUnsupported;
extern int ghidra_vftable_SCNowPlayingSleepTimer;
extern int ghidra_vftable_SCNowPlayingSourceHls;
extern int ghidra_vftable_SCNowPlayingSourceHlsStatic;
extern int ghidra_vftable_SCNowPlayingSourceInternetRadio;
extern int ghidra_vftable_SCNowPlayingSourceLineIn;
extern int ghidra_vftable_SCNowPlayingSourceSonosAlarm;
extern int ghidra_vftable_SCNowPlayingSourceVirtualLineIn;
extern int ghidra_vftable_SCNowPlayingTransportBuzzer;
extern int ghidra_vftable_SCNowPlayingTransportHTAudioStream;
extern int ghidra_vftable_SCNowPlayingTransportHls;
extern int ghidra_vftable_SCNowPlayingTransportInternetRadio;
extern int ghidra_vftable_SCNowPlayingTransportLineIn;
extern int ghidra_vftable_SCNowPlayingTransportOther;
extern int ghidra_vftable_SCNowPlayingTransportQueue;
extern int ghidra_vftable_SCNowPlayingTransportSonosProgRadio;
extern int ghidra_vftable_SCOpAVTransportGetRemainingSleepTimerDuration;
extern int ghidra_vftable_SCOpAddTracksToQueue;
extern int ghidra_vftable_SCOpAlarmSave;
extern int ghidra_vftable_SCOpCheckForControllerUpdates;
extern int ghidra_vftable_SCOpConnectedPartnerRemove;
extern int ghidra_vftable_SCOpContentDirectoryGetAlbumArtistDisplayOption;
extern int ghidra_vftable_SCOpDeviceVoiceSettingsSet;
extern int ghidra_vftable_SCOpGenericUpdateQueue;
extern int ghidra_vftable_SCOpGetTrackPositionInfo;
extern int ghidra_vftable_SCOpHTControlGetIRRepeaterState;
extern int ghidra_vftable_SCOpHTControlSetIRRepeaterState;
extern int ghidra_vftable_SCOpHTControlSetLEDFeedbackState;
extern int ghidra_vftable_SCOpMuseGetPlayerInfo;
extern int ghidra_vftable_SCOpMuseGetUserSettings;
extern int ghidra_vftable_SCOpMuseSetSettings;
extern int ghidra_vftable_SCOpQueueReplaceAllTracks;
extern int ghidra_vftable_SCOpRateItem;
extern int ghidra_vftable_SCOpRenderingControlGetRoomCalibrationStatus;
extern int ghidra_vftable_SCOpStartNetworkConnectivityTest;
extern int ghidra_vftable_SCOpTempDisableNetwork;
extern int ghidra_vftable_SCPMapStreamBadger;
extern int ghidra_vftable_SCPNGBitmapLoader;
extern int ghidra_vftable_SCPostAsyncIOOperation;
extern int ghidra_vftable_SCPutAsyncIOOperation;
extern int ghidra_vftable_SCSelectRoomsCompleteState;
extern int ghidra_vftable_SCSelectRoomsInitState;
extern int ghidra_vftable_SCSonarAudioSampleDelegate;
extern int ghidra_vftable_SCSonarCompleteState;
extern int ghidra_vftable_SCSonarInitState;
extern int ghidra_vftable_SCSonarIntroState;
extern int ghidra_vftable_SCSonarWizard;
extern int ghidra_vftable_SCStreamBadger;
extern int ghidra_vftable_SCSwfListenerGroupVolume;
extern int ghidra_vftable_SCSwfObjACInternalListener;
extern int ghidra_vftable_SCSwfObjDDInternalListener;
extern int ghidra_vftable_SCSwfObjIndexListener;
extern int ghidra_vftable_SCSwfObjJHHInternalListener;
extern int ghidra_vftable_SCSwfObjJHHListener;
extern int ghidra_vftable_SCSwfObjSPInternalListener;
extern int ghidra_vftable_SCUsageDataCompleteState;
extern int ghidra_vftable_SCUsageDataInitState;
extern int ghidra_vftable_SCUsageDataOptInState;
extern int ghidra_vftable_SCWizardState;
extern int ghidra_vftable_SwfObjSMAPIContext;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int ghidra_vftable_std_Ref_count_obj2;
extern int in_EAX;
extern int uStack00000004;
extern int uStack_14;
extern int uStack_8;
extern int uStack_c;
extern int unaff_ESI;
extern undefined1 LAB_10ff820f[];
extern undefined1 LAB_1101e262[];
extern undefined1 LAB_11067096[];
extern "C" void LAB_117702a0(void);
extern "C" void LAB_117702d0(void);
extern "C" void LAB_11770300(void);
extern "C" void LAB_11770330(void);
extern "C" void LAB_11770f30(void);
extern "C" void LAB_11772e80(void);
extern "C" void LAB_11791770(void);
extern "C" void LAB_11795460(void);
extern "C" void LAB_1179a320(void);
extern int *PTR_DAT_1211a5d0;
extern int *PTR_DAT_1211d600;
extern int *PTR_DAT_1211d604;
extern int *PTR_DAT_1211d608;
extern int *PTR_DAT_1211d60c;
extern int *PTR_DAT_1211d610;
extern int *PTR_DAT_1211d618;
extern int *PTR_s_other_1211d614;
extern void *ExceptionList;
extern int FUN_1125b8f0(...);
extern int FUN_112a9d40(...);
SCStr * __stdcall FUN_10f34070(SCStr *param_1);
template<class... A> int __stdcall FUN_10f34070(A...);
SCStr * __stdcall FUN_10f34090(SCStr *param_1);
template<class... A> int __stdcall FUN_10f34090(A...);
SCStr * __stdcall FUN_10f340b0(SCStr *param_1);
template<class... A> int __stdcall FUN_10f340b0(A...);
SCStr * __stdcall FUN_10f340d0(SCStr *param_1);
template<class... A> int __stdcall FUN_10f340d0(A...);
undefined4 * __fastcall FUN_10f37e60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f37e60(A...);
void __fastcall FUN_10f38170(int param_1);
template<class... A> int FUN_10f38170(A...);
void __fastcall FUN_10f38190(int param_1);
template<class... A> int FUN_10f38190(A...);
void __fastcall FUN_10f381b0(int *param_1);
template<class... A> int FUN_10f381b0(A...);
void __fastcall FUN_10f38340(int param_1);
template<class... A> int FUN_10f38340(A...);
void __fastcall FUN_10f38360(int *param_1);
template<class... A> int FUN_10f38360(A...);
void __fastcall FUN_10f389e0(int param_1);
template<class... A> int FUN_10f389e0(A...);
void __fastcall FUN_10f38a00(int param_1);
template<class... A> int FUN_10f38a00(A...);
int __stdcall FUN_10f392b0(int *param_1);
template<class... A> int FUN_10f392b0(A...);
undefined4 __stdcall FUN_10f39910(int *param_1);
template<class... A> int __stdcall FUN_10f39910(A...);
undefined4 __stdcall FUN_10f39960(SCStr *param_1);
template<class... A> int __stdcall FUN_10f39960(A...);
SCStr * __stdcall FUN_10f3bae0(SCStr *param_1);
template<class... A> int __stdcall FUN_10f3bae0(A...);
SCStr * __stdcall FUN_10f3bb00(SCStr *param_1);
template<class... A> int __stdcall FUN_10f3bb00(A...);
undefined4 __stdcall FUN_10f3bdb0(SCStr *param_1);
template<class... A> int __stdcall FUN_10f3bdb0(A...);
void __fastcall FUN_10f3ce20(undefined4 *param_1);
template<class... A> int FUN_10f3ce20(A...);
void __fastcall FUN_10f3d8d0(int param_1);
template<class... A> int FUN_10f3d8d0(A...);
void __fastcall FUN_10f3d910(int param_1);
template<class... A> int FUN_10f3d910(A...);
SCStr * __stdcall FUN_10f3d950(SCStr *param_1);
template<class... A> int __stdcall FUN_10f3d950(A...);
SCStr * __stdcall FUN_10f3d970(SCStr *param_1);
template<class... A> int __stdcall FUN_10f3d970(A...);
SCStr * __stdcall FUN_10f3d990(SCStr *param_1);
template<class... A> int __stdcall FUN_10f3d990(A...);
SCStr * __stdcall FUN_10f3d9b0(SCStr *param_1);
template<class... A> int __stdcall FUN_10f3d9b0(A...);
SCStr * __stdcall FUN_10f3da10(SCStr *param_1);
template<class... A> int __stdcall FUN_10f3da10(A...);
SCStr * __stdcall FUN_10f3da30(SCStr *param_1);
template<class... A> int __stdcall FUN_10f3da30(A...);
void __fastcall FUN_10f3f550(int param_1);
template<class... A> int FUN_10f3f550(A...);
void __fastcall FUN_10f412b0(undefined4 *param_1);
template<class... A> int FUN_10f412b0(A...);
void __fastcall FUN_10f41490(int *param_1);
template<class... A> int FUN_10f41490(A...);
void __fastcall FUN_10f414f0(int *param_1);
template<class... A> int FUN_10f414f0(A...);
void __fastcall FUN_10f41550(int *param_1);
template<class... A> int FUN_10f41550(A...);
void __fastcall FUN_10f415b0(int *param_1);
template<class... A> int FUN_10f415b0(A...);
int __fastcall FUN_10f41ba0(int *param_1);
template<class... A> int FUN_10f41ba0(A...);
void __fastcall FUN_10f420a0(int *param_1);
template<class... A> int FUN_10f420a0(A...);
void __fastcall FUN_10f420e0(undefined4 *param_1);
template<class... A> int FUN_10f420e0(A...);
void __fastcall FUN_10f42120(undefined4 *param_1);
template<class... A> int FUN_10f42120(A...);
void __fastcall FUN_10f42160(undefined4 *param_1);
template<class... A> int FUN_10f42160(A...);
void __fastcall FUN_10f421a0(undefined4 *param_1);
template<class... A> int FUN_10f421a0(A...);
undefined4 __fastcall FUN_10f42870(int *param_1);
template<class... A> int FUN_10f42870(A...);
undefined4 __fastcall FUN_10f42da0(int *param_1);
template<class... A> int FUN_10f42da0(A...);
void __fastcall FUN_10f42dd0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10f42dd0(A...);
void __fastcall FUN_10f437a0(int param_1);
template<class... A> int FUN_10f437a0(A...);
void __fastcall FUN_10f44680(undefined4 *param_1);
template<class... A> int FUN_10f44680(A...);
void __fastcall FUN_10f44930(int *param_1);
template<class... A> int FUN_10f44930(A...);
int __fastcall FUN_10f450f0(int *param_1);
template<class... A> int FUN_10f450f0(A...);
SCStr * __stdcall FUN_10f459b0(SCStr *param_1);
template<class... A> int __stdcall FUN_10f459b0(A...);
void __fastcall FUN_10f459d0(undefined4 *param_1);
template<class... A> int FUN_10f459d0(A...);
SCStr * __stdcall FUN_10f45fa0(SCStr *param_1);
template<class... A> int __stdcall FUN_10f45fa0(A...);
bool __fastcall FUN_10f46d90(int *param_1);
template<class... A> int FUN_10f46d90(A...);
void __stdcall FUN_10f46df0(SCStr *param_1);
template<class... A> int __stdcall FUN_10f46df0(A...);
void __fastcall FUN_10f47170(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f47170(A...);
void __fastcall FUN_10f47810(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f47810(A...);
void __fastcall FUN_10f47850(int param_1);
template<class... A> int FUN_10f47850(A...);
undefined4 __stdcall FUN_10f47f80(short param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10f47f80(A...);
void __fastcall FUN_10f483e0(undefined4 *param_1);
template<class... A> int FUN_10f483e0(A...);
void __fastcall FUN_10f4a690(undefined4 *param_1);
template<class... A> int FUN_10f4a690(A...);
void __fastcall FUN_10f4a6f0(undefined4 *param_1);
template<class... A> int FUN_10f4a6f0(A...);
void __fastcall FUN_10f4a780(undefined4 *param_1);
template<class... A> int FUN_10f4a780(A...);
int __fastcall FUN_10f4b4a0(int *param_1);
template<class... A> int FUN_10f4b4a0(A...);
int __fastcall FUN_10f4b4e0(int *param_1);
template<class... A> int FUN_10f4b4e0(A...);
void __fastcall FUN_10f4b5c0(int param_1);
template<class... A> int FUN_10f4b5c0(A...);
undefined4 __fastcall FUN_10f4b990(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10f4b990(A...);
void __stdcall FUN_10f4b9c0(int param_1,int param_2);
template<class... A> int FUN_10f4b9c0(A...);
int __fastcall FUN_10f4be50(int param_1);
template<class... A> int FUN_10f4be50(A...);
undefined4 __fastcall FUN_10f4c190(int param_1);
template<class... A> int FUN_10f4c190(A...);
void __fastcall FUN_10f4c1d0(int *param_1);
template<class... A> int FUN_10f4c1d0(A...);
bool __fastcall FUN_10f4c720(int param_1);
template<class... A> int FUN_10f4c720(A...);
bool __fastcall FUN_10f4c770(int param_1);
template<class... A> int FUN_10f4c770(A...);
undefined4 __fastcall FUN_10f4c7a0(int param_1);
template<class... A> int FUN_10f4c7a0(A...);
undefined4 * __fastcall FUN_10f4e130(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f4e130(A...);
void __fastcall FUN_10f4e590(int *param_1);
template<class... A> int FUN_10f4e590(A...);
void __fastcall FUN_10f4e5f0(int param_1);
template<class... A> int FUN_10f4e5f0(A...);
void __fastcall FUN_10f4e6f0(int param_1);
template<class... A> int FUN_10f4e6f0(A...);
int __stdcall FUN_10f4ec90(undefined4 param_1);
template<class... A> int __stdcall FUN_10f4ec90(A...);
void __fastcall FUN_10f4ee30(int param_1);
template<class... A> int FUN_10f4ee30(A...);
void __stdcall FUN_10f4fa50(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_10f4fa50(A...);
void __fastcall FUN_10f52370(int *param_1);
template<class... A> int FUN_10f52370(A...);
void __fastcall FUN_10f523a0(int *param_1);
template<class... A> int FUN_10f523a0(A...);
int * __fastcall FUN_10f52570(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f52570(A...);
void __fastcall FUN_10f52840(int *param_1);
template<class... A> int FUN_10f52840(A...);
void __fastcall FUN_10f57040(undefined4 *param_1);
template<class... A> int FUN_10f57040(A...);
void __fastcall FUN_10f57060(undefined4 *param_1);
template<class... A> int FUN_10f57060(A...);
void __fastcall FUN_10f57080(undefined4 *param_1);
template<class... A> int FUN_10f57080(A...);
void __fastcall FUN_10f570a0(undefined4 *param_1);
template<class... A> int FUN_10f570a0(A...);
SCStr * __stdcall FUN_10f614e0(SCStr *param_1);
template<class... A> int __stdcall FUN_10f614e0(A...);
SCStr * __stdcall FUN_10f61500(SCStr *param_1);
template<class... A> int __stdcall FUN_10f61500(A...);
SCStr * __stdcall FUN_10f61520(SCStr *param_1);
template<class... A> int __stdcall FUN_10f61520(A...);
SCStr * __stdcall FUN_10f61540(SCStr *param_1);
template<class... A> int __stdcall FUN_10f61540(A...);
int __fastcall FUN_10f637f0(int param_1);
template<class... A> int FUN_10f637f0(A...);
void __fastcall FUN_10f65b20(undefined4 *param_1);
template<class... A> int FUN_10f65b20(A...);
void __fastcall FUN_10f65ed0(int *param_1);
template<class... A> int FUN_10f65ed0(A...);
void __fastcall FUN_10f65f00(int *param_1);
template<class... A> int FUN_10f65f00(A...);
int * __fastcall FUN_10f661c0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f661c0(A...);
void __fastcall FUN_10f66710(int *param_1);
template<class... A> int FUN_10f66710(A...);
SCStr * __stdcall FUN_10f675c0(SCStr *param_1);
template<class... A> int __stdcall FUN_10f675c0(A...);
void __fastcall FUN_10f67790(int param_1);
template<class... A> int FUN_10f67790(A...);
void FUN_10f67a70(void);
template<class... A> int FUN_10f67a70(A...);
int __fastcall FUN_10f685d0(int param_1);
template<class... A> int FUN_10f685d0(A...);
undefined4 * __fastcall FUN_10f6b980(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f6b980(A...);
void __fastcall FUN_10f6bc80(int param_1);
template<class... A> int FUN_10f6bc80(A...);
void __fastcall FUN_10f6bca0(int *param_1);
template<class... A> int FUN_10f6bca0(A...);
void __fastcall FUN_10f6bd90(int *param_1);
template<class... A> int FUN_10f6bd90(A...);
void __fastcall FUN_10f6c3a0(int param_1);
template<class... A> int FUN_10f6c3a0(A...);
int * FUN_10f6cba0(int *param_1);
template<class... A> int FUN_10f6cba0(A...);
void __fastcall FUN_10f6d220(int *param_1);
template<class... A> int FUN_10f6d220(A...);
void __fastcall FUN_10f70bd0(int *param_1);
template<class... A> int FUN_10f70bd0(A...);
void __fastcall FUN_10f70c00(int *param_1);
template<class... A> int FUN_10f70c00(A...);
void __fastcall FUN_10f70cd0(int *param_1);
template<class... A> int FUN_10f70cd0(A...);
void __fastcall FUN_10f70d00(int *param_1);
template<class... A> int FUN_10f70d00(A...);
void __fastcall FUN_10f71090(int *param_1);
template<class... A> int FUN_10f71090(A...);
void __fastcall FUN_10f710b0(int *param_1);
template<class... A> int FUN_10f710b0(A...);
void __fastcall FUN_10f710d0(int *param_1);
template<class... A> int FUN_10f710d0(A...);
int * __fastcall FUN_10f71110(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f71110(A...);
void __fastcall FUN_10f71d20(int *param_1);
template<class... A> int FUN_10f71d20(A...);
void __fastcall FUN_10f71d50(int *param_1);
template<class... A> int FUN_10f71d50(A...);
undefined1 * __fastcall FUN_10f724a0(int param_1);
template<class... A> int FUN_10f724a0(A...);
SCStr * __stdcall FUN_10f72640(SCStr *param_1);
template<class... A> int __stdcall FUN_10f72640(A...);
void __fastcall FUN_10f74de0(undefined4 *param_1);
template<class... A> int FUN_10f74de0(A...);
void __fastcall FUN_10f756a0(int param_1);
template<class... A> int FUN_10f756a0(A...);
void __fastcall FUN_10f756e0(int param_1);
template<class... A> int FUN_10f756e0(A...);
undefined4 __fastcall FUN_10f76f60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10f76f60(A...);
void __fastcall FUN_10f77a60(undefined4 *param_1);
template<class... A> int FUN_10f77a60(A...);
void __fastcall FUN_10f77c40(undefined4 *param_1);
template<class... A> int FUN_10f77c40(A...);
int __fastcall FUN_10f782a0(int param_1);
template<class... A> int FUN_10f782a0(A...);
void __fastcall FUN_10f782e0(int param_1);
template<class... A> int FUN_10f782e0(A...);
undefined4 __fastcall FUN_10f790f0(int param_1);
template<class... A> int FUN_10f790f0(A...);
SCStr * __stdcall FUN_10f79a90(SCStr *param_1);
template<class... A> int __stdcall FUN_10f79a90(A...);
bool __fastcall FUN_10f79c00(int param_1);
template<class... A> int FUN_10f79c00(A...);
bool __fastcall FUN_10f79c20(int param_1);
template<class... A> int FUN_10f79c20(A...);
undefined2 __fastcall FUN_10f79d40(int param_1);
template<class... A> int FUN_10f79d40(A...);
void __fastcall FUN_10f7ad60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f7ad60(A...);
void __fastcall FUN_10f7adf0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f7adf0(A...);
void __fastcall FUN_10f7af60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f7af60(A...);
void __stdcall FUN_10f7b0c0(int param_1);
template<class... A> int __stdcall FUN_10f7b0c0(A...);
void __fastcall FUN_10f7b5a0(int param_1);
template<class... A> int FUN_10f7b5a0(A...);
void __fastcall FUN_10f7b5d0(int param_1);
template<class... A> int FUN_10f7b5d0(A...);
void __fastcall FUN_10f7b900(int param_1);
template<class... A> int FUN_10f7b900(A...);
void __fastcall FUN_10f7b950(int param_1);
template<class... A> int FUN_10f7b950(A...);
void __stdcall FUN_10f7c290(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10f7c290(A...);
undefined4 * __fastcall FUN_10f7c6c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f7c6c0(A...);
void __fastcall FUN_10f7db60(int param_1);
template<class... A> int FUN_10f7db60(A...);
void __fastcall FUN_10f7db80(int *param_1);
template<class... A> int FUN_10f7db80(A...);
void __fastcall FUN_10f7dc50(int param_1);
template<class... A> int FUN_10f7dc50(A...);
void __fastcall FUN_10f7dc70(int *param_1);
template<class... A> int FUN_10f7dc70(A...);
void __fastcall FUN_10f7ebf0(int param_1);
template<class... A> int FUN_10f7ebf0(A...);
void __fastcall FUN_10f7f5c0(int *param_1);
template<class... A> int FUN_10f7f5c0(A...);
SCStr * __stdcall FUN_10f7fa20(SCStr *param_1);
template<class... A> int __stdcall FUN_10f7fa20(A...);
SCStr * __stdcall FUN_10f7fa40(SCStr *param_1);
template<class... A> int __stdcall FUN_10f7fa40(A...);
undefined4 * __fastcall FUN_10f822f0(undefined4 *param_1);
template<class... A> int FUN_10f822f0(A...);
void __fastcall FUN_10f829e0(int param_1);
template<class... A> int FUN_10f829e0(A...);
void __fastcall FUN_10f82a00(int *param_1);
template<class... A> int FUN_10f82a00(A...);
void __fastcall FUN_10f82ad0(int *param_1);
template<class... A> int FUN_10f82ad0(A...);
void FUN_10f82c80(void);
template<class... A> int FUN_10f82c80(A...);
void FUN_10f82ca0(void);
template<class... A> int FUN_10f82ca0(A...);
void FUN_10f82cc0(void);
template<class... A> int FUN_10f82cc0(A...);
void FUN_10f82cf0(void);
template<class... A> int FUN_10f82cf0(A...);
void FUN_10f82d20(void);
template<class... A> int FUN_10f82d20(A...);
void FUN_10f82d40(void);
template<class... A> int FUN_10f82d40(A...);
void FUN_10f82d60(void);
template<class... A> int FUN_10f82d60(A...);
void __fastcall FUN_10f82e10(undefined4 *param_1);
template<class... A> int FUN_10f82e10(A...);
void __fastcall FUN_10f82e40(undefined4 *param_1);
template<class... A> int FUN_10f82e40(A...);
void FUN_10f82e90(void);
template<class... A> int FUN_10f82e90(A...);
void FUN_10f82eb0(void);
template<class... A> int FUN_10f82eb0(A...);
int * __fastcall FUN_10f83140(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f83140(A...);
void FUN_10f832d0(void);
template<class... A> int FUN_10f832d0(A...);
void FUN_10f832f0(void);
template<class... A> int FUN_10f832f0(A...);
void FUN_10f83310(void);
template<class... A> int FUN_10f83310(A...);
void FUN_10f83340(void);
template<class... A> int FUN_10f83340(A...);
void FUN_10f83360(void);
template<class... A> int FUN_10f83360(A...);
void FUN_10f83380(void);
template<class... A> int FUN_10f83380(A...);
void FUN_10f833a0(void);
template<class... A> int FUN_10f833a0(A...);
void __fastcall FUN_10f833c0(undefined4 *param_1);
template<class... A> int FUN_10f833c0(A...);
void __fastcall FUN_10f833e0(undefined4 *param_1);
template<class... A> int FUN_10f833e0(A...);
void FUN_10f83410(void);
template<class... A> int FUN_10f83410(A...);
void FUN_10f83430(void);
template<class... A> int FUN_10f83430(A...);
void __fastcall FUN_10f83900(int param_1);
template<class... A> int FUN_10f83900(A...);
void __fastcall FUN_10f839d0(int *param_1);
template<class... A> int FUN_10f839d0(A...);
void __fastcall FUN_10f84040(int param_1);
template<class... A> int FUN_10f84040(A...);
undefined4 * __fastcall FUN_10f87ac0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f87ac0(A...);
void __fastcall FUN_10f886e0(int param_1);
template<class... A> int FUN_10f886e0(A...);
void __fastcall FUN_10f887f0(undefined4 *param_1);
template<class... A> int FUN_10f887f0(A...);
void __fastcall FUN_10f88840(undefined4 *param_1);
template<class... A> int FUN_10f88840(A...);
void __fastcall FUN_10f88e10(int param_1);
template<class... A> int FUN_10f88e10(A...);
void __fastcall FUN_10f88f50(int *param_1);
template<class... A> int FUN_10f88f50(A...);
void __fastcall FUN_10f895a0(undefined4 *param_1);
template<class... A> int FUN_10f895a0(A...);
void __fastcall FUN_10f89a80(int *param_1);
template<class... A> int FUN_10f89a80(A...);
void __fastcall FUN_10f8c8e0(int param_1);
template<class... A> int FUN_10f8c8e0(A...);
undefined1 * __fastcall FUN_10f8cbb0(int param_1);
template<class... A> int FUN_10f8cbb0(A...);
undefined1 * __fastcall FUN_10f8cbd0(int param_1);
template<class... A> int FUN_10f8cbd0(A...);
SCStr * __stdcall FUN_10f8cfa0(SCStr *param_1);
template<class... A> int __stdcall FUN_10f8cfa0(A...);
SCStr * __stdcall FUN_10f8cfc0(SCStr *param_1);
template<class... A> int __stdcall FUN_10f8cfc0(A...);
SCStr * __stdcall FUN_10f8cfe0(SCStr *param_1);
template<class... A> int __stdcall FUN_10f8cfe0(A...);
void __fastcall FUN_10f8fa20(int param_1);
template<class... A> int FUN_10f8fa20(A...);
void __fastcall FUN_10f8fa50(int param_1);
template<class... A> int FUN_10f8fa50(A...);
void __fastcall FUN_10f8fa80(int param_1);
template<class... A> int FUN_10f8fa80(A...);
undefined4 * __fastcall FUN_10f8fab0(undefined4 param_1);
template<class... A> int FUN_10f8fab0(A...);
undefined4 * __fastcall FUN_10f8faf0(undefined4 param_1);
template<class... A> int FUN_10f8faf0(A...);
undefined4 * __fastcall FUN_10f8fcb0(int param_1);
template<class... A> int FUN_10f8fcb0(A...);
undefined4 * __fastcall FUN_10f8fec0(int param_1);
template<class... A> int FUN_10f8fec0(A...);
SCStr * __stdcall FUN_10f8ff60(SCStr *param_1);
template<class... A> int __stdcall FUN_10f8ff60(A...);
SCStr * __stdcall FUN_10f8ff80(SCStr *param_1);
template<class... A> int __stdcall FUN_10f8ff80(A...);
SCStr * __stdcall FUN_10f8ffa0(SCStr *param_1);
template<class... A> int __stdcall FUN_10f8ffa0(A...);
SCStr * __stdcall FUN_10f8ffc0(SCStr *param_1);
template<class... A> int __stdcall FUN_10f8ffc0(A...);
SCStr * __stdcall FUN_10f8ffe0(SCStr *param_1);
template<class... A> int __stdcall FUN_10f8ffe0(A...);
SCStr * __stdcall FUN_10f90000(SCStr *param_1);
template<class... A> int __stdcall FUN_10f90000(A...);
SCStr * __stdcall FUN_10f90060(SCStr *param_1);
template<class... A> int __stdcall FUN_10f90060(A...);
SCStr * __stdcall FUN_10f90800(SCStr *param_1);
template<class... A> int __stdcall FUN_10f90800(A...);
void __fastcall FUN_10f91cd0(undefined4 *param_1);
template<class... A> int FUN_10f91cd0(A...);
void __fastcall FUN_10f925a0(int param_1);
template<class... A> int FUN_10f925a0(A...);
undefined4 * __fastcall FUN_10f92ab0(undefined4 param_1);
template<class... A> int FUN_10f92ab0(A...);
undefined4 * __fastcall FUN_10f92af0(undefined4 param_1);
template<class... A> int FUN_10f92af0(A...);
undefined4 * __fastcall FUN_10f92b30(int param_1);
template<class... A> int FUN_10f92b30(A...);
undefined4 * __fastcall FUN_10f92cf0(int param_1);
template<class... A> int FUN_10f92cf0(A...);
undefined4 * __fastcall FUN_10f92d40(int param_1);
template<class... A> int FUN_10f92d40(A...);
undefined4 * __fastcall FUN_10f92d80(int param_1);
template<class... A> int FUN_10f92d80(A...);
SCStr * __stdcall FUN_10f93710(SCStr *param_1);
template<class... A> int __stdcall FUN_10f93710(A...);
SCStr * __stdcall FUN_10f93730(SCStr *param_1);
template<class... A> int __stdcall FUN_10f93730(A...);
SCStr * __stdcall FUN_10f93750(SCStr *param_1);
template<class... A> int __stdcall FUN_10f93750(A...);
SCStr * __stdcall FUN_10f93770(SCStr *param_1);
template<class... A> int __stdcall FUN_10f93770(A...);
SCStr * __stdcall FUN_10f93790(SCStr *param_1);
template<class... A> int __stdcall FUN_10f93790(A...);
SCStr * __stdcall FUN_10f937b0(SCStr *param_1);
template<class... A> int __stdcall FUN_10f937b0(A...);
SCStr * __stdcall FUN_10f937e0(SCStr *param_1);
template<class... A> int __stdcall FUN_10f937e0(A...);
SCStr * __stdcall FUN_10f95960(SCStr *param_1);
template<class... A> int __stdcall FUN_10f95960(A...);
void FUN_10f969e0(void);
template<class... A> int FUN_10f969e0(A...);
void FUN_10f96a10(void);
template<class... A> int FUN_10f96a10(A...);
void __fastcall FUN_10f977c0(int param_1);
template<class... A> int FUN_10f977c0(A...);
undefined4 * __fastcall FUN_10f97800(undefined4 param_1);
template<class... A> int FUN_10f97800(A...);
undefined4 * __fastcall FUN_10f97840(undefined4 param_1);
template<class... A> int FUN_10f97840(A...);
undefined4 * __fastcall FUN_10f97890(int param_1);
template<class... A> int FUN_10f97890(A...);
undefined4 * __fastcall FUN_10f978d0(int param_1);
template<class... A> int FUN_10f978d0(A...);
undefined4 * __fastcall FUN_10f97910(int param_1);
template<class... A> int FUN_10f97910(A...);
SCStr * __stdcall FUN_10f97bb0(SCStr *param_1);
template<class... A> int __stdcall FUN_10f97bb0(A...);
SCStr * __stdcall FUN_10f97bd0(SCStr *param_1);
template<class... A> int __stdcall FUN_10f97bd0(A...);
SCStr * __stdcall FUN_10f97bf0(SCStr *param_1);
template<class... A> int __stdcall FUN_10f97bf0(A...);
SCStr * __stdcall FUN_10f97c10(SCStr *param_1);
template<class... A> int __stdcall FUN_10f97c10(A...);
SCStr * __stdcall FUN_10f97c30(SCStr *param_1);
template<class... A> int __stdcall FUN_10f97c30(A...);
SCStr * __stdcall FUN_10f97c50(SCStr *param_1);
template<class... A> int __stdcall FUN_10f97c50(A...);
SCStr * __stdcall FUN_10f97c80(SCStr *param_1);
template<class... A> int __stdcall FUN_10f97c80(A...);
SCStr * __stdcall FUN_10f98e70(SCStr *param_1);
template<class... A> int __stdcall FUN_10f98e70(A...);
bool __fastcall FUN_10f98e90(int *param_1);
template<class... A> int FUN_10f98e90(A...);
void __stdcall FUN_10f99360(int param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10f99360(A...);
undefined4 * __fastcall FUN_10f9a6f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f9a6f0(A...);
undefined4 * __fastcall FUN_10f9a730(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f9a730(A...);
void __fastcall FUN_10f9b030(int param_1);
template<class... A> int FUN_10f9b030(A...);
void __fastcall FUN_10f9b050(int param_1);
template<class... A> int FUN_10f9b050(A...);
void __fastcall FUN_10f9b070(int *param_1);
template<class... A> int FUN_10f9b070(A...);
void __fastcall FUN_10f9b0a0(int *param_1);
template<class... A> int FUN_10f9b0a0(A...);
void __fastcall FUN_10f9b270(int *param_1);
template<class... A> int FUN_10f9b270(A...);
void __fastcall FUN_10f9b2a0(int *param_1);
template<class... A> int FUN_10f9b2a0(A...);
void __fastcall FUN_10f9c470(int param_1);
template<class... A> int FUN_10f9c470(A...);
void __fastcall FUN_10f9c490(int param_1);
template<class... A> int FUN_10f9c490(A...);
int * FUN_10f9d5a0(int *param_1);
template<class... A> int FUN_10f9d5a0(A...);
int * FUN_10f9d5d0(int *param_1);
template<class... A> int FUN_10f9d5d0(A...);
undefined1 __fastcall FUN_10f9dbf0(int param_1);
template<class... A> int FUN_10f9dbf0(A...);
undefined1 __fastcall FUN_10f9dc40(int param_1);
template<class... A> int FUN_10f9dc40(A...);
void __fastcall FUN_10f9de50(int *param_1);
template<class... A> int FUN_10f9de50(A...);
void __fastcall FUN_10f9de80(int *param_1);
template<class... A> int FUN_10f9de80(A...);
void __fastcall FUN_10f9deb0(undefined4 *param_1);
template<class... A> int FUN_10f9deb0(A...);
undefined4 * __fastcall FUN_10f9def0(undefined4 param_1);
template<class... A> int FUN_10f9def0(A...);
undefined4 * __fastcall FUN_10f9df30(undefined4 param_1);
template<class... A> int FUN_10f9df30(A...);
undefined4 * __fastcall FUN_10f9df70(int param_1);
template<class... A> int FUN_10f9df70(A...);
undefined4 * __fastcall FUN_10f9e070(int param_1);
template<class... A> int FUN_10f9e070(A...);
undefined4 * __fastcall FUN_10f9e360(int param_1);
template<class... A> int FUN_10f9e360(A...);
undefined4 __fastcall FUN_10fa01c0(int param_1);
template<class... A> int FUN_10fa01c0(A...);
SCStr * __stdcall FUN_10fa0290(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa0290(A...);
SCStr * __stdcall FUN_10fa02b0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa02b0(A...);
SCStr * __stdcall FUN_10fa02d0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa02d0(A...);
SCStr * __stdcall FUN_10fa02f0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa02f0(A...);
SCStr * __stdcall FUN_10fa0310(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa0310(A...);
SCStr * __stdcall FUN_10fa0330(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa0330(A...);
SCStr * __stdcall FUN_10fa0350(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa0350(A...);
SCStr * __stdcall FUN_10fa0370(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa0370(A...);
SCStr * __stdcall FUN_10fa0390(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa0390(A...);
SCStr * __stdcall FUN_10fa03b0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa03b0(A...);
SCStr * __stdcall FUN_10fa03d0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa03d0(A...);
undefined4 __fastcall FUN_10fa0410(int param_1);
template<class... A> int FUN_10fa0410(A...);
SCStr * __stdcall FUN_10fa0470(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa0470(A...);
SCStr * __stdcall FUN_10fa2e20(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa2e20(A...);
undefined4 __fastcall FUN_10fa3450(int param_1);
template<class... A> int FUN_10fa3450(A...);
undefined4 __fastcall FUN_10fa34a0(int *param_1);
template<class... A> int FUN_10fa34a0(A...);
undefined1 __stdcall FUN_10fa34d0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa34d0(A...);
void __fastcall FUN_10fa3670(int *param_1);
template<class... A> int FUN_10fa3670(A...);
void __fastcall FUN_10fa3e60(int param_1);
template<class... A> int FUN_10fa3e60(A...);
undefined1 __fastcall FUN_10fa5c20(int param_1);
template<class... A> int FUN_10fa5c20(A...);
undefined1 __fastcall FUN_10fa5c50(int param_1);
template<class... A> int FUN_10fa5c50(A...);
void __fastcall FUN_10fa5cc0(int param_1);
template<class... A> int FUN_10fa5cc0(A...);
undefined4 * __fastcall FUN_10fa5d10(undefined4 param_1);
template<class... A> int FUN_10fa5d10(A...);
undefined4 * __fastcall FUN_10fa5d50(undefined4 param_1);
template<class... A> int FUN_10fa5d50(A...);
undefined4 * __fastcall FUN_10fa6870(int param_1);
template<class... A> int FUN_10fa6870(A...);
undefined4 * __fastcall FUN_10fa68b0(int param_1);
template<class... A> int FUN_10fa68b0(A...);
undefined4 __fastcall FUN_10fa7690(int param_1);
template<class... A> int FUN_10fa7690(A...);
SCStr * __stdcall FUN_10fa7720(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa7720(A...);
SCStr * __stdcall FUN_10fa7740(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa7740(A...);
SCStr * __stdcall FUN_10fa7760(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa7760(A...);
SCStr * __stdcall FUN_10fa7780(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa7780(A...);
SCStr * __stdcall FUN_10fa77a0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa77a0(A...);
SCStr * __stdcall FUN_10fa77c0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa77c0(A...);
SCStr * __stdcall FUN_10fa77e0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa77e0(A...);
SCStr * __stdcall FUN_10fa7800(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa7800(A...);
undefined4 __fastcall FUN_10fa7840(int param_1);
template<class... A> int FUN_10fa7840(A...);
SCStr * __stdcall FUN_10fa78a0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa78a0(A...);
SCStr * __stdcall FUN_10fa9470(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa9470(A...);
undefined4 __fastcall FUN_10fa9a40(int param_1);
template<class... A> int FUN_10fa9a40(A...);
undefined4 __fastcall FUN_10fa9a90(int *param_1);
template<class... A> int FUN_10fa9a90(A...);
undefined1 __stdcall FUN_10fa9ac0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa9ac0(A...);
void __stdcall FUN_10fa9b10(SCStr *param_1);
template<class... A> int __stdcall FUN_10fa9b10(A...);
void __fastcall FUN_10fa9dc0(int *param_1);
template<class... A> int FUN_10fa9dc0(A...);
undefined4 * __fastcall FUN_10fae4c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10fae4c0(A...);
undefined4 * __fastcall FUN_10fae4f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10fae4f0(A...);
undefined4 * __fastcall FUN_10fae520(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10fae520(A...);
void __fastcall FUN_10faf7e0(int param_1);
template<class... A> int FUN_10faf7e0(A...);
void __fastcall FUN_10faf800(int param_1);
template<class... A> int FUN_10faf800(A...);
void __fastcall FUN_10faf820(int param_1);
template<class... A> int FUN_10faf820(A...);
void __fastcall FUN_10faf840(int param_1);
template<class... A> int FUN_10faf840(A...);
void __fastcall FUN_10fafca0(int param_1);
template<class... A> int FUN_10fafca0(A...);
void __fastcall FUN_10fafdd0(undefined4 *param_1);
template<class... A> int FUN_10fafdd0(A...);
void __fastcall FUN_10fafdf0(undefined4 *param_1);
template<class... A> int FUN_10fafdf0(A...);
int __stdcall FUN_10fb1100(undefined4 param_1);
template<class... A> int __stdcall FUN_10fb1100(A...);
int __stdcall FUN_10fb1130(undefined4 param_1);
template<class... A> int __stdcall FUN_10fb1130(A...);
int __stdcall FUN_10fb1160(undefined4 param_1);
template<class... A> int __stdcall FUN_10fb1160(A...);
int __stdcall FUN_10fb1190(undefined4 param_1);
template<class... A> int __stdcall FUN_10fb1190(A...);
int __stdcall FUN_10fb11c0(undefined4 param_1);
template<class... A> int __stdcall FUN_10fb11c0(A...);
void __fastcall FUN_10fb20f0(int param_1);
template<class... A> int FUN_10fb20f0(A...);
void __fastcall FUN_10fb2110(int param_1);
template<class... A> int FUN_10fb2110(A...);
void __fastcall FUN_10fb2130(int param_1);
template<class... A> int FUN_10fb2130(A...);
void __fastcall FUN_10fb2150(int param_1);
template<class... A> int FUN_10fb2150(A...);
void __fastcall FUN_10fb3df0(undefined4 *param_1);
template<class... A> int FUN_10fb3df0(A...);
void __fastcall FUN_10fb3e10(undefined4 *param_1);
template<class... A> int FUN_10fb3e10(A...);
void __fastcall FUN_10fb6aa0(int param_1);
template<class... A> int FUN_10fb6aa0(A...);
void __fastcall FUN_10fb6ef0(int param_1);
template<class... A> int FUN_10fb6ef0(A...);
void __fastcall FUN_10fb7160(int *param_1);
template<class... A> int FUN_10fb7160(A...);
void __fastcall FUN_10fb7190(int *param_1);
template<class... A> int FUN_10fb7190(A...);
void __fastcall FUN_10fb7220(int *param_1);
template<class... A> int FUN_10fb7220(A...);
undefined4 * __fastcall FUN_10fb74d0(undefined4 param_1);
template<class... A> int FUN_10fb74d0(A...);
SCStr * __stdcall FUN_10fb8590(SCStr *param_1);
template<class... A> int __stdcall FUN_10fb8590(A...);
SCStr * __stdcall FUN_10fb8f00(SCStr *param_1,int param_2);
template<class... A> int FUN_10fb8f00(A...);
SCStr * __stdcall FUN_10fb90e0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fb90e0(A...);
SCStr * __stdcall FUN_10fb9100(SCStr *param_1);
template<class... A> int __stdcall FUN_10fb9100(A...);
SCStr * __stdcall FUN_10fb9120(SCStr *param_1);
template<class... A> int __stdcall FUN_10fb9120(A...);
SCStr * __stdcall FUN_10fb9140(SCStr *param_1);
template<class... A> int __stdcall FUN_10fb9140(A...);
SCStr * __stdcall FUN_10fb9160(SCStr *param_1);
template<class... A> int __stdcall FUN_10fb9160(A...);
SCStr * __stdcall FUN_10fb9180(SCStr *param_1);
template<class... A> int __stdcall FUN_10fb9180(A...);
SCStr * __stdcall FUN_10fb91a0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fb91a0(A...);
SCStr * __stdcall FUN_10fb91c0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fb91c0(A...);
SCStr * __stdcall FUN_10fb91e0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fb91e0(A...);
SCStr * __stdcall FUN_10fb9200(SCStr *param_1);
template<class... A> int __stdcall FUN_10fb9200(A...);
SCStr * __stdcall FUN_10fb9250(SCStr *param_1);
template<class... A> int __stdcall FUN_10fb9250(A...);
SCStr * __stdcall FUN_10fbc490(SCStr *param_1);
template<class... A> int __stdcall FUN_10fbc490(A...);
void __stdcall FUN_10fbfe40(int param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10fbfe40(A...);
undefined4 * __fastcall FUN_10fc12c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10fc12c0(A...);
void __fastcall FUN_10fc1d60(int param_1);
template<class... A> int FUN_10fc1d60(A...);
void __fastcall FUN_10fc1d80(int *param_1);
template<class... A> int FUN_10fc1d80(A...);
void __fastcall FUN_10fc1e90(int *param_1);
template<class... A> int FUN_10fc1e90(A...);
void __fastcall FUN_10fc2e30(int param_1);
template<class... A> int FUN_10fc2e30(A...);
int * FUN_10fc3650(int *param_1);
template<class... A> int FUN_10fc3650(A...);
undefined1 __fastcall FUN_10fc3d60(int param_1);
template<class... A> int FUN_10fc3d60(A...);
undefined1 __fastcall FUN_10fc3db0(int param_1);
template<class... A> int FUN_10fc3db0(A...);
void __fastcall FUN_10fc3fd0(int *param_1);
template<class... A> int FUN_10fc3fd0(A...);
undefined4 * __fastcall FUN_10fc4020(undefined4 param_1);
template<class... A> int FUN_10fc4020(A...);
undefined4 * __fastcall FUN_10fc4060(undefined4 param_1);
template<class... A> int FUN_10fc4060(A...);
undefined4 * __fastcall FUN_10fc4340(int param_1);
template<class... A> int FUN_10fc4340(A...);
undefined4 * __fastcall FUN_10fc4660(int param_1);
template<class... A> int FUN_10fc4660(A...);
undefined4 __fastcall FUN_10fc5b40(int param_1);
template<class... A> int FUN_10fc5b40(A...);
SCStr * __stdcall FUN_10fc5c20(SCStr *param_1);
template<class... A> int __stdcall FUN_10fc5c20(A...);
SCStr * __stdcall FUN_10fc5c40(SCStr *param_1);
template<class... A> int __stdcall FUN_10fc5c40(A...);
SCStr * __stdcall FUN_10fc5c60(SCStr *param_1);
template<class... A> int __stdcall FUN_10fc5c60(A...);
SCStr * __stdcall FUN_10fc5c80(SCStr *param_1);
template<class... A> int __stdcall FUN_10fc5c80(A...);
SCStr * __stdcall FUN_10fc5ca0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fc5ca0(A...);
SCStr * __stdcall FUN_10fc5cc0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fc5cc0(A...);
SCStr * __stdcall FUN_10fc5ce0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fc5ce0(A...);
SCStr * __stdcall FUN_10fc5d00(SCStr *param_1);
template<class... A> int __stdcall FUN_10fc5d00(A...);
SCStr * __stdcall FUN_10fc5d20(SCStr *param_1);
template<class... A> int __stdcall FUN_10fc5d20(A...);
SCStr * __stdcall FUN_10fc5d40(SCStr *param_1);
template<class... A> int __stdcall FUN_10fc5d40(A...);
SCStr * __stdcall FUN_10fc5d60(SCStr *param_1);
template<class... A> int __stdcall FUN_10fc5d60(A...);
SCStr * __stdcall FUN_10fc5d80(SCStr *param_1);
template<class... A> int __stdcall FUN_10fc5d80(A...);
undefined4 __fastcall FUN_10fc5dc0(int param_1);
template<class... A> int FUN_10fc5dc0(A...);
SCStr * __stdcall FUN_10fc5e20(SCStr *param_1);
template<class... A> int __stdcall FUN_10fc5e20(A...);
SCStr * __stdcall FUN_10fc89e0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fc89e0(A...);
undefined4 __fastcall FUN_10fc9370(int param_1);
template<class... A> int FUN_10fc9370(A...);
undefined4 __fastcall FUN_10fc93c0(int *param_1);
template<class... A> int FUN_10fc93c0(A...);
undefined1 __stdcall FUN_10fc93f0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fc93f0(A...);
void __fastcall FUN_10fc9570(int *param_1);
template<class... A> int FUN_10fc9570(A...);
void __fastcall FUN_10fc9ce0(int param_1);
template<class... A> int FUN_10fc9ce0(A...);
SCStr * __stdcall FUN_10fcaf50(SCStr *param_1);
template<class... A> int __stdcall FUN_10fcaf50(A...);
void __fastcall FUN_10fcbac0(int *param_1);
template<class... A> int FUN_10fcbac0(A...);
SCStr * __stdcall FUN_10fcd510(SCStr *param_1);
template<class... A> int __stdcall FUN_10fcd510(A...);
int __fastcall FUN_10fcd530(int param_1);
template<class... A> int FUN_10fcd530(A...);
SCStr * __stdcall FUN_10fcd550(SCStr *param_1);
template<class... A> int __stdcall FUN_10fcd550(A...);
void __fastcall FUN_10fce490(undefined4 *param_1);
template<class... A> int FUN_10fce490(A...);
void __fastcall FUN_10fce530(undefined4 *param_1);
template<class... A> int FUN_10fce530(A...);
void __stdcall FUN_10fcec60(int param_1,int param_2);
template<class... A> int FUN_10fcec60(A...);
SCStr * __stdcall FUN_10fcecc0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fcecc0(A...);
SCStr * __stdcall FUN_10fced10(SCStr *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10fced10(A...);
SCStr * __stdcall FUN_10fced40(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10fced40(A...);
SCStr * __stdcall FUN_10fced70(SCStr *param_1);
template<class... A> int __stdcall FUN_10fced70(A...);
SCStr * __stdcall FUN_10fcedc0(SCStr *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10fcedc0(A...);
SCStr * __stdcall FUN_10fcede0(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10fcede0(A...);
SCStr * __stdcall FUN_10fcee00(SCStr *param_1);
template<class... A> int __stdcall FUN_10fcee00(A...);
SCStr * __stdcall FUN_10fcee20(SCStr *param_1);
template<class... A> int __stdcall FUN_10fcee20(A...);
undefined4 __stdcall FUN_10fcee40(undefined4 param_1);
template<class... A> int __stdcall FUN_10fcee40(A...);
undefined4 __stdcall FUN_10fcee60(undefined4 param_1);
template<class... A> int __stdcall FUN_10fcee60(A...);
SCStr * __stdcall FUN_10fcee80(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10fcee80(A...);
SCStr * __stdcall FUN_10fcefc0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fcefc0(A...);
SCStr * __stdcall FUN_10fcf010(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10fcf010(A...);
SCStr * __stdcall FUN_10fcf040(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10fcf040(A...);
SCStr * __stdcall FUN_10fcf090(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10fcf090(A...);
SCStr * __stdcall FUN_10fcf0b0(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10fcf0b0(A...);
undefined4 __stdcall FUN_10fcf0d0(undefined4 param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10fcf0d0(A...);
SCStr * __stdcall FUN_10fcf110(SCStr *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10fcf110(A...);
SCStr * __stdcall FUN_10fcf130(SCStr *param_1);
template<class... A> int __stdcall FUN_10fcf130(A...);
SCStr * __stdcall FUN_10fcf150(SCStr *param_1);
template<class... A> int __stdcall FUN_10fcf150(A...);
SCStr * __stdcall FUN_10fcf180(SCStr *param_1);
template<class... A> int __stdcall FUN_10fcf180(A...);
SCStr * __stdcall FUN_10fcf1c0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fcf1c0(A...);
SCStr * __stdcall FUN_10fcf1f0(SCStr *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10fcf1f0(A...);
SCStr * __stdcall FUN_10fcf220(SCStr *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10fcf220(A...);
undefined4 __stdcall FUN_10fcf250(undefined4 param_1);
template<class... A> int __stdcall FUN_10fcf250(A...);
SCStr * __stdcall FUN_10fcf640(SCStr *param_1);
template<class... A> int __stdcall FUN_10fcf640(A...);
void __fastcall FUN_10fd0660(undefined4 *param_1);
template<class... A> int FUN_10fd0660(A...);
SCStr * __stdcall FUN_10fd17f0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fd17f0(A...);
SCStr * __stdcall FUN_10fd1810(SCStr *param_1);
template<class... A> int __stdcall FUN_10fd1810(A...);
SCStr * __stdcall FUN_10fd1a70(SCStr *param_1);
template<class... A> int __stdcall FUN_10fd1a70(A...);
SCStr * __stdcall FUN_10fd1a90(SCStr *param_1);
template<class... A> int __stdcall FUN_10fd1a90(A...);
SCStr * __stdcall FUN_10fd1ca0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fd1ca0(A...);
SCStr * __stdcall FUN_10fd1cc0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fd1cc0(A...);
void __stdcall FUN_10fd2570(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10fd2570(A...);
void __stdcall FUN_10fd2590(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10fd2590(A...);
SCStr * __stdcall FUN_10fdaf30(SCStr *param_1);
template<class... A> int __stdcall FUN_10fdaf30(A...);
SCStr * __stdcall FUN_10fdaf50(SCStr *param_1);
template<class... A> int __stdcall FUN_10fdaf50(A...);
SCStr * __stdcall FUN_10fdaf70(SCStr *param_1);
template<class... A> int __stdcall FUN_10fdaf70(A...);
SCStr * __stdcall FUN_10fdaf90(SCStr *param_1);
template<class... A> int __stdcall FUN_10fdaf90(A...);
SCStr * __stdcall FUN_10fdafb0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fdafb0(A...);
SCStr * __stdcall FUN_10fdafd0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fdafd0(A...);
SCStr * __stdcall FUN_10fdaff0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fdaff0(A...);
SCStr * __stdcall FUN_10fdb010(SCStr *param_1);
template<class... A> int __stdcall FUN_10fdb010(A...);
SCStr * __stdcall FUN_10fdb030(SCStr *param_1);
template<class... A> int __stdcall FUN_10fdb030(A...);
SCStr * __stdcall FUN_10fdb050(SCStr *param_1);
template<class... A> int __stdcall FUN_10fdb050(A...);
SCStr * __stdcall FUN_10fdb070(SCStr *param_1);
template<class... A> int __stdcall FUN_10fdb070(A...);
SCStr * __stdcall FUN_10fdb090(SCStr *param_1);
template<class... A> int __stdcall FUN_10fdb090(A...);
SCStr * __stdcall FUN_10fdb320(SCStr *param_1);
template<class... A> int __stdcall FUN_10fdb320(A...);
SCStr * __stdcall FUN_10fdb340(SCStr *param_1);
template<class... A> int __stdcall FUN_10fdb340(A...);
SCStr * __stdcall FUN_10fdb370(SCStr *param_1);
template<class... A> int __stdcall FUN_10fdb370(A...);
void __fastcall FUN_10fdd8d0(int param_1);
template<class... A> int FUN_10fdd8d0(A...);
void __fastcall FUN_10fddaa0(int param_1);
template<class... A> int FUN_10fddaa0(A...);
void __fastcall FUN_10fddea0(int param_1);
template<class... A> int FUN_10fddea0(A...);
void __fastcall FUN_10fe0720(undefined4 *param_1);
template<class... A> int FUN_10fe0720(A...);
void __fastcall FUN_10fe0860(undefined4 *param_1);
template<class... A> int FUN_10fe0860(A...);
void __fastcall FUN_10fe15f0(undefined4 *param_1);
template<class... A> int FUN_10fe15f0(A...);
void __stdcall FUN_10fe1610(int param_1,int param_2);
template<class... A> int FUN_10fe1610(A...);
void __fastcall FUN_10fe3320(int param_1);
template<class... A> int FUN_10fe3320(A...);
void __fastcall FUN_10fe3350(int param_1);
template<class... A> int FUN_10fe3350(A...);
void __fastcall FUN_10fe34f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10fe34f0(A...);
void __fastcall FUN_10fe6690(undefined4 *param_1);
template<class... A> int FUN_10fe6690(A...);
SCStr * __stdcall FUN_10fe6c20(SCStr *param_1);
template<class... A> int __stdcall FUN_10fe6c20(A...);
SCStr * __stdcall FUN_10fe6c40(SCStr *param_1);
template<class... A> int __stdcall FUN_10fe6c40(A...);
SCStr * __stdcall FUN_10fe6c60(SCStr *param_1);
template<class... A> int __stdcall FUN_10fe6c60(A...);
SCStr * __stdcall FUN_10fe6c80(SCStr *param_1);
template<class... A> int __stdcall FUN_10fe6c80(A...);
SCStr * __stdcall FUN_10fe6cb0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fe6cb0(A...);
SCStr * __stdcall FUN_10fe6cd0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fe6cd0(A...);
undefined4 __fastcall FUN_10fe6d40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10fe6d40(A...);
SCStr * __stdcall FUN_10fe8190(SCStr *param_1);
template<class... A> int __stdcall FUN_10fe8190(A...);
SCStr * __stdcall FUN_10fe81b0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fe81b0(A...);
SCStr * __stdcall FUN_10fe81d0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fe81d0(A...);
SCStr * __stdcall FUN_10fe81f0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fe81f0(A...);
SCStr * __stdcall FUN_10fe8210(SCStr *param_1);
template<class... A> int __stdcall FUN_10fe8210(A...);
SCStr * __stdcall FUN_10fe8230(SCStr *param_1);
template<class... A> int __stdcall FUN_10fe8230(A...);
SCStr * __stdcall FUN_10fe8250(SCStr *param_1);
template<class... A> int __stdcall FUN_10fe8250(A...);
SCStr * __stdcall FUN_10fe8270(SCStr *param_1);
template<class... A> int __stdcall FUN_10fe8270(A...);
SCStr * __stdcall FUN_10fe82a0(SCStr *param_1);
template<class... A> int __stdcall FUN_10fe82a0(A...);
SCStr * __stdcall FUN_10fe8460(SCStr *param_1);
template<class... A> int __stdcall FUN_10fe8460(A...);
SCStr * __stdcall FUN_10fe8490(SCStr *param_1);
template<class... A> int __stdcall FUN_10fe8490(A...);
undefined4 __fastcall FUN_10fe84e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10fe84e0(A...);
undefined4 __fastcall FUN_10fe8510(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10fe8510(A...);
undefined4 __fastcall FUN_10fe8530(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10fe8530(A...);
void __stdcall FUN_10fe9cb0(undefined4 param_1,int *param_2);
template<class... A> int FUN_10fe9cb0(A...);
undefined4 * __fastcall FUN_10fec290(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10fec290(A...);
void __fastcall FUN_10fed720(int param_1);
template<class... A> int FUN_10fed720(A...);
void __fastcall FUN_10fed7d0(undefined4 *param_1);
template<class... A> int FUN_10fed7d0(A...);
void __fastcall FUN_10fed7f0(undefined4 *param_1);
template<class... A> int FUN_10fed7f0(A...);
void __fastcall FUN_10feef30(int param_1);
template<class... A> int FUN_10feef30(A...);
void __stdcall FUN_10fef250(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10fef250(A...);
void __stdcall FUN_10fef280(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10fef280(A...);
void __fastcall FUN_10ff0c10(undefined4 *param_1);
template<class... A> int FUN_10ff0c10(A...);
void __stdcall FUN_10ff0d00(int param_1,int param_2);
template<class... A> int FUN_10ff0d00(A...);
void __stdcall FUN_10ff0d50(int param_1,int param_2);
template<class... A> int FUN_10ff0d50(A...);
SCStr * __stdcall FUN_10ff10c0(SCStr *param_1);
template<class... A> int __stdcall FUN_10ff10c0(A...);
SCStr * __stdcall FUN_10ff10e0(SCStr *param_1);
template<class... A> int __stdcall FUN_10ff10e0(A...);
SCStr * __stdcall FUN_10ff1100(SCStr *param_1);
template<class... A> int __stdcall FUN_10ff1100(A...);
void __fastcall FUN_10ff1120(int *param_1);
template<class... A> int FUN_10ff1120(A...);
void __fastcall FUN_10ff1150(int *param_1);
template<class... A> int FUN_10ff1150(A...);
SCStr * __stdcall FUN_10ff1490(SCStr *param_1);
template<class... A> int __stdcall FUN_10ff1490(A...);
SCStr * __stdcall FUN_10ff1630(SCStr *param_1);
template<class... A> int __stdcall FUN_10ff1630(A...);
int __fastcall FUN_10ff1960(int param_1);
template<class... A> int FUN_10ff1960(A...);
undefined4 __stdcall FUN_10ff1ad0(int param_1);
template<class... A> int __stdcall FUN_10ff1ad0(A...);
undefined4 __stdcall FUN_10ff1ce0(int param_1);
template<class... A> int __stdcall FUN_10ff1ce0(A...);
undefined4 __stdcall FUN_10ff1d00(int param_1);
template<class... A> int __stdcall FUN_10ff1d00(A...);
undefined4 __fastcall FUN_10ff2d10(int param_1);
template<class... A> int FUN_10ff2d10(A...);
undefined4 __fastcall FUN_10ff2d30(int param_1);
template<class... A> int FUN_10ff2d30(A...);
undefined1 __stdcall FUN_10ff3020(int param_1);
template<class... A> int __stdcall FUN_10ff3020(A...);
undefined4 __fastcall FUN_10ff6e20(int param_1);
template<class... A> int FUN_10ff6e20(A...);
undefined4 __stdcall FUN_10ff6e80(int param_1);
template<class... A> int __stdcall FUN_10ff6e80(A...);
undefined4 __fastcall FUN_10ff6f60(int param_1);
template<class... A> int FUN_10ff6f60(A...);
void __stdcall FUN_10ff6f90(SCStr *param_1);
template<class... A> int __stdcall FUN_10ff6f90(A...);
void __fastcall FUN_10ff81f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10ff81f0(A...);
void __fastcall FUN_10ffaf90(undefined4 *param_1);
template<class... A> int FUN_10ffaf90(A...);
void __fastcall FUN_10ffb490(int *param_1);
template<class... A> int FUN_10ffb490(A...);
SCStr * __stdcall FUN_10ffb630(SCStr *param_1);
template<class... A> int __stdcall FUN_10ffb630(A...);
void __fastcall FUN_10ffbc50(int *param_1);
template<class... A> int FUN_10ffbc50(A...);
SCStr * __stdcall FUN_10ffc9f0(SCStr *param_1);
template<class... A> int __stdcall FUN_10ffc9f0(A...);
SCStr * __stdcall FUN_10ffca80(SCStr *param_1);
template<class... A> int __stdcall FUN_10ffca80(A...);
byte __fastcall FUN_10ffcab0(int param_1);
template<class... A> int FUN_10ffcab0(A...);
SCStr * __stdcall FUN_10ffcb40(SCStr *param_1);
template<class... A> int __stdcall FUN_10ffcb40(A...);
SCStr * __stdcall FUN_10ffcb70(SCStr *param_1);
template<class... A> int __stdcall FUN_10ffcb70(A...);
SCStr * __stdcall FUN_10ffcbb0(SCStr *param_1);
template<class... A> int __stdcall FUN_10ffcbb0(A...);
SCStr * __stdcall FUN_10ffcc00(SCStr *param_1);
template<class... A> int __stdcall FUN_10ffcc00(A...);
undefined4 __fastcall FUN_10ffce70(int param_1);
template<class... A> int FUN_10ffce70(A...);
undefined4 __fastcall FUN_10ffd060(int *param_1);
template<class... A> int FUN_10ffd060(A...);
void __fastcall FUN_10ffd260(int param_1);
template<class... A> int FUN_10ffd260(A...);
void __fastcall FUN_10ffd2e0(int param_1);
template<class... A> int FUN_10ffd2e0(A...);
void __fastcall FUN_10ffd5c0(int *param_1);
template<class... A> int FUN_10ffd5c0(A...);
void __fastcall FUN_10ffddc0(int *param_1);
template<class... A> int FUN_10ffddc0(A...);
undefined4 __fastcall FUN_10ffec20(int *param_1);
template<class... A> int FUN_10ffec20(A...);
void __fastcall FUN_10fff5c0(undefined4 *param_1);
template<class... A> int FUN_10fff5c0(A...);
void __fastcall FUN_10fff880(undefined4 *param_1);
template<class... A> int FUN_10fff880(A...);
undefined4 FUN_10fffc00(SCStr *param_1);
template<class... A> int FUN_10fffc00(A...);
void __fastcall FUN_10fffc90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10fffc90(A...);
void __fastcall FUN_11002b40(int param_1);
template<class... A> int FUN_11002b40(A...);
void __fastcall FUN_11002b60(int param_1);
template<class... A> int FUN_11002b60(A...);
void __fastcall FUN_11002ba0(int param_1);
template<class... A> int FUN_11002ba0(A...);
void __fastcall FUN_11002bc0(int param_1);
template<class... A> int FUN_11002bc0(A...);
void __fastcall FUN_11002be0(int param_1);
template<class... A> int FUN_11002be0(A...);
undefined4 __fastcall FUN_110031b0(int *param_1);
template<class... A> int FUN_110031b0(A...);
undefined1 * __fastcall FUN_11005230(int param_1);
template<class... A> int FUN_11005230(A...);
undefined1 * __fastcall FUN_11005370(int param_1);
template<class... A> int FUN_11005370(A...);
undefined1 * __fastcall FUN_11005390(int param_1);
template<class... A> int FUN_11005390(A...);
void __fastcall FUN_11007ed0(int *param_1);
template<class... A> int FUN_11007ed0(A...);
void __fastcall FUN_11007f00(int *param_1);
template<class... A> int FUN_11007f00(A...);
int * __fastcall FUN_11008010(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_11008010(A...);
void __fastcall FUN_110082c0(int *param_1);
template<class... A> int FUN_110082c0(A...);
void __stdcall FUN_1100bf00(int param_1);
template<class... A> int __stdcall FUN_1100bf00(A...);
void __stdcall FUN_1100bf20(int param_1);
template<class... A> int __stdcall FUN_1100bf20(A...);
void __fastcall FUN_11010200(int *param_1);
template<class... A> int FUN_11010200(A...);
void __fastcall FUN_11011870(int param_1);
template<class... A> int FUN_11011870(A...);
undefined4 * __fastcall FUN_11012070(undefined4 param_1);
template<class... A> int FUN_11012070(A...);
undefined4 * __fastcall FUN_110120b0(undefined4 param_1);
template<class... A> int FUN_110120b0(A...);
SCStr * __stdcall FUN_110133a0(SCStr *param_1);
template<class... A> int __stdcall FUN_110133a0(A...);
SCStr * __stdcall FUN_110133c0(SCStr *param_1);
template<class... A> int __stdcall FUN_110133c0(A...);
SCStr * __stdcall FUN_110133e0(SCStr *param_1);
template<class... A> int __stdcall FUN_110133e0(A...);
SCStr * __stdcall FUN_11013400(SCStr *param_1);
template<class... A> int __stdcall FUN_11013400(A...);
SCStr * __stdcall FUN_11013420(SCStr *param_1);
template<class... A> int __stdcall FUN_11013420(A...);
SCStr * __stdcall FUN_11013440(SCStr *param_1);
template<class... A> int __stdcall FUN_11013440(A...);
SCStr * __stdcall FUN_11013470(SCStr *param_1);
template<class... A> int __stdcall FUN_11013470(A...);
SCStr * __stdcall FUN_11015070(SCStr *param_1);
template<class... A> int __stdcall FUN_11015070(A...);
void __fastcall FUN_11017c80(undefined4 *param_1);
template<class... A> int FUN_11017c80(A...);
SCStr * __stdcall FUN_11018120(SCStr *param_1);
template<class... A> int __stdcall FUN_11018120(A...);
undefined4 __fastcall FUN_1101ae40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_1101ae40(A...);
void __fastcall FUN_1101ae90(int param_1);
template<class... A> int FUN_1101ae90(A...);
void __fastcall FUN_1101aec0(int param_1);
template<class... A> int FUN_1101aec0(A...);
void __fastcall FUN_1101b3c0(undefined4 *param_1);
template<class... A> int FUN_1101b3c0(A...);
int __fastcall FUN_1101b8c0(int *param_1);
template<class... A> int FUN_1101b8c0(A...);
void __fastcall FUN_1101b900(int *param_1);
template<class... A> int FUN_1101b900(A...);
SCStr * __stdcall FUN_1101b9c0(SCStr *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1101b9c0(A...);
SCStr * __stdcall FUN_1101ba40(SCStr *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1101ba40(A...);
undefined1 __stdcall FUN_1101bc00(SCStr *param_1);
template<class... A> int __stdcall FUN_1101bc00(A...);
void __fastcall FUN_1101cd50(undefined4 *param_1);
template<class... A> int FUN_1101cd50(A...);
int __fastcall FUN_1101d6b0(int *param_1);
template<class... A> int FUN_1101d6b0(A...);
int __fastcall FUN_1101d6f0(int *param_1);
template<class... A> int FUN_1101d6f0(A...);
undefined4 __stdcall FUN_1101d950(char *param_1);
template<class... A> int __stdcall FUN_1101d950(A...);
void __stdcall FUN_1101df90(SCStr *param_1);
template<class... A> int __stdcall FUN_1101df90(A...);
void __fastcall FUN_1101e080(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1101e080(A...);
void __fastcall FUN_1101fc50(undefined4 *param_1);
template<class... A> int FUN_1101fc50(A...);
int __fastcall FUN_11020420(int *param_1);
template<class... A> int FUN_11020420(A...);
int __fastcall FUN_11020460(int *param_1);
template<class... A> int FUN_11020460(A...);
SCStr * __stdcall FUN_11020710(SCStr *param_1);
template<class... A> int __stdcall FUN_11020710(A...);
void __fastcall FUN_110207a0(int *param_1);
template<class... A> int FUN_110207a0(A...);
void __fastcall FUN_110207d0(int *param_1);
template<class... A> int FUN_110207d0(A...);
void __fastcall FUN_11020930(int *param_1);
template<class... A> int FUN_11020930(A...);
void __fastcall FUN_11020970(int *param_1);
template<class... A> int FUN_11020970(A...);
void __fastcall FUN_110209d0(int *param_1);
template<class... A> int FUN_110209d0(A...);
void __fastcall FUN_11020a10(int *param_1);
template<class... A> int FUN_11020a10(A...);
undefined1 __stdcall FUN_11020e70(SCStr *param_1);
template<class... A> int __stdcall FUN_11020e70(A...);
void __fastcall FUN_11021ec0(undefined4 *param_1);
template<class... A> int FUN_11021ec0(A...);
int __fastcall FUN_110221f0(int *param_1);
template<class... A> int FUN_110221f0(A...);
void __stdcall FUN_11023740(undefined4 param_1,int *param_2);
template<class... A> int FUN_11023740(A...);
undefined4 * __fastcall FUN_11026290(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_11026290(A...);
void __fastcall FUN_11026c30(undefined4 *param_1);
template<class... A> int FUN_11026c30(A...);
void __fastcall FUN_11026c80(undefined4 *param_1);
template<class... A> int FUN_11026c80(A...);
void __fastcall FUN_11026cc0(undefined4 *param_1);
template<class... A> int FUN_11026cc0(A...);
void __fastcall FUN_11026d00(undefined4 *param_1);
template<class... A> int FUN_11026d00(A...);
void __fastcall FUN_11027110(int param_1);
template<class... A> int FUN_11027110(A...);
void __fastcall FUN_110271c0(undefined4 *param_1);
template<class... A> int FUN_110271c0(A...);
void __fastcall FUN_110282c0(int param_1);
template<class... A> int FUN_110282c0(A...);
int __fastcall FUN_11028c50(int *param_1);
template<class... A> int FUN_11028c50(A...);
void __fastcall FUN_11029380(undefined4 *param_1);
template<class... A> int FUN_11029380(A...);
undefined4
__stdcall FUN_11029700(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6);
template<class... A> int FUN_11029700(A...);
void __fastcall FUN_11029730(int param_1);
template<class... A> int FUN_11029730(A...);
undefined4
__stdcall FUN_11029780(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7);
template<class... A> int FUN_11029780(A...);
void __stdcall FUN_1102ad90(int param_1,int param_2);
template<class... A> int FUN_1102ad90(A...);
SCStr * __stdcall FUN_1102ae20(SCStr *param_1);
template<class... A> int __stdcall FUN_1102ae20(A...);
void __fastcall FUN_1102ae40(undefined4 *param_1);
template<class... A> int FUN_1102ae40(A...);
void __fastcall FUN_1102ae80(undefined4 *param_1);
template<class... A> int FUN_1102ae80(A...);
undefined4 __fastcall FUN_1102af50(int *param_1);
template<class... A> int FUN_1102af50(A...);
int __fastcall FUN_1102b0c0(int param_1);
template<class... A> int FUN_1102b0c0(A...);
int __fastcall FUN_1102b0f0(int param_1);
template<class... A> int FUN_1102b0f0(A...);
SCStr * __stdcall FUN_1102b2a0(SCStr *param_1);
template<class... A> int __stdcall FUN_1102b2a0(A...);
void __fastcall FUN_1102bc40(int param_1);
template<class... A> int FUN_1102bc40(A...);
undefined1 __fastcall FUN_1102d850(int *param_1);
template<class... A> int FUN_1102d850(A...);
void __fastcall FUN_1102f590(int *param_1);
template<class... A> int FUN_1102f590(A...);
int __fastcall FUN_1102ff20(int *param_1);
template<class... A> int FUN_1102ff20(A...);
bool __fastcall FUN_110301e0(int *param_1);
template<class... A> int FUN_110301e0(A...);
SCStr * __stdcall FUN_11030400(SCStr *param_1);
template<class... A> int __stdcall FUN_11030400(A...);
SCStr * __stdcall FUN_11030420(SCStr *param_1);
template<class... A> int __stdcall FUN_11030420(A...);
void __fastcall FUN_11030440(undefined4 *param_1);
template<class... A> int FUN_11030440(A...);
SCStr * __stdcall FUN_11030c90(SCStr *param_1);
template<class... A> int __stdcall FUN_11030c90(A...);
SCStr * __stdcall FUN_11030cb0(SCStr *param_1);
template<class... A> int __stdcall FUN_11030cb0(A...);
undefined4 __stdcall FUN_11030cd0(undefined4 param_1);
template<class... A> int __stdcall FUN_11030cd0(A...);
undefined4 FUN_11030d10(void);
template<class... A> int FUN_11030d10(A...);
SCStr * __stdcall FUN_11030e50(SCStr *param_1);
template<class... A> int __stdcall FUN_11030e50(A...);
SCStr * __stdcall FUN_11030e70(SCStr *param_1);
template<class... A> int __stdcall FUN_11030e70(A...);
SCStr * __stdcall FUN_110312c0(SCStr *param_1);
template<class... A> int __stdcall FUN_110312c0(A...);
void __fastcall FUN_11032a00(int param_1);
template<class... A> int FUN_11032a00(A...);
void __stdcall FUN_11032c90(SCStr *param_1);
template<class... A> int __stdcall FUN_11032c90(A...);
undefined4 __fastcall FUN_11034eb0(int param_1);
template<class... A> int FUN_11034eb0(A...);
SCStr * __stdcall FUN_110372b0(SCStr *param_1);
template<class... A> int __stdcall FUN_110372b0(A...);
SCStr * __stdcall FUN_110372d0(SCStr *param_1);
template<class... A> int __stdcall FUN_110372d0(A...);
SCStr * __stdcall FUN_110372f0(SCStr *param_1);
template<class... A> int __stdcall FUN_110372f0(A...);
SCStr * __stdcall FUN_11037310(SCStr *param_1);
template<class... A> int __stdcall FUN_11037310(A...);
SCStr * __stdcall FUN_11037330(SCStr *param_1);
template<class... A> int __stdcall FUN_11037330(A...);
SCStr * __stdcall FUN_11037470(SCStr *param_1);
template<class... A> int __stdcall FUN_11037470(A...);
SCStr * __stdcall FUN_11037490(SCStr *param_1);
template<class... A> int __stdcall FUN_11037490(A...);
SCStr * __stdcall FUN_110374b0(SCStr *param_1);
template<class... A> int __stdcall FUN_110374b0(A...);
SCStr * __stdcall FUN_110374d0(SCStr *param_1);
template<class... A> int __stdcall FUN_110374d0(A...);
SCStr * __stdcall FUN_110374f0(SCStr *param_1);
template<class... A> int __stdcall FUN_110374f0(A...);
SCStr * __stdcall FUN_11037520(SCStr *param_1);
template<class... A> int __stdcall FUN_11037520(A...);
SCStr * __stdcall FUN_11037550(SCStr *param_1);
template<class... A> int __stdcall FUN_11037550(A...);
SCStr * __stdcall FUN_11037570(SCStr *param_1);
template<class... A> int __stdcall FUN_11037570(A...);
SCStr * __stdcall FUN_11037690(SCStr *param_1);
template<class... A> int __stdcall FUN_11037690(A...);
SCStr * __stdcall FUN_110376c0(SCStr *param_1);
template<class... A> int __stdcall FUN_110376c0(A...);
SCStr * __stdcall FUN_110376f0(SCStr *param_1);
template<class... A> int __stdcall FUN_110376f0(A...);
undefined4 __fastcall FUN_11037760(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_11037760(A...);
undefined4 __fastcall FUN_11037790(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_11037790(A...);
undefined4 __fastcall FUN_110377b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_110377b0(A...);
undefined4 __fastcall FUN_110377f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_110377f0(A...);
bool __fastcall FUN_11038200(int param_1);
template<class... A> int FUN_11038200(A...);
void __fastcall FUN_110382c0(int param_1);
template<class... A> int FUN_110382c0(A...);
void __fastcall FUN_110382f0(int param_1);
template<class... A> int FUN_110382f0(A...);
undefined1 FUN_11038930(short *param_1,uint param_2);
template<class... A> int FUN_11038930(A...);
void __fastcall FUN_11038960(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_11038960(A...);
void __fastcall FUN_11038a00(undefined4 *param_1);
template<class... A> int FUN_11038a00(A...);
void __fastcall FUN_11038aa0(int param_1);
template<class... A> int FUN_11038aa0(A...);
undefined1 FUN_110390a0(undefined4 param_1,uint param_2);
template<class... A> int FUN_110390a0(A...);
void __fastcall FUN_11039140(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_11039140(A...);
void __fastcall FUN_11039240(undefined4 *param_1);
template<class... A> int FUN_11039240(A...);
undefined4 FUN_11039a00(char *param_1,uint param_2);
template<class... A> int FUN_11039a00(A...);
void FUN_11039d80(int param_1);
template<class... A> int FUN_11039d80(A...);
void __fastcall FUN_11039f60(int param_1);
template<class... A> int FUN_11039f60(A...);
void __fastcall FUN_11039fa0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_11039fa0(A...);
undefined4 FUN_1103a220(short *param_1,uint param_2);
template<class... A> int FUN_1103a220(A...);
void __fastcall FUN_1103a250(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1103a250(A...);
SCStr * __stdcall FUN_1103b2d0(SCStr *param_1);
template<class... A> int __stdcall FUN_1103b2d0(A...);
void __fastcall FUN_1103c2d0(undefined4 *param_1);
template<class... A> int FUN_1103c2d0(A...);
undefined4 __fastcall FUN_1103c520(int *param_1);
template<class... A> int FUN_1103c520(A...);
int * __fastcall FUN_1103c620(int *param_1);
template<class... A> int FUN_1103c620(A...);
void __fastcall FUN_1103d4d0(int *param_1);
template<class... A> int FUN_1103d4d0(A...);
void __fastcall FUN_1103d500(int *param_1);
template<class... A> int FUN_1103d500(A...);
int * __fastcall FUN_1103db30(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1103db30(A...);
void __fastcall FUN_1103df00(int *param_1);
template<class... A> int FUN_1103df00(A...);
SCStr * __stdcall FUN_1103ed00(SCStr *param_1);
template<class... A> int __stdcall FUN_1103ed00(A...);
SCStr * __stdcall FUN_1103ed20(SCStr *param_1);
template<class... A> int __stdcall FUN_1103ed20(A...);
void __fastcall FUN_1103ed40(int *param_1);
template<class... A> int FUN_1103ed40(A...);
void __fastcall FUN_1103ed80(int *param_1);
template<class... A> int FUN_1103ed80(A...);
undefined4 * __fastcall FUN_11041c30(undefined4 *param_1);
template<class... A> int FUN_11041c30(A...);
void __fastcall FUN_11042830(int param_1);
template<class... A> int FUN_11042830(A...);
undefined4 * __stdcall FUN_11042ef0(undefined4 *param_1);
template<class... A> int __stdcall FUN_11042ef0(A...);
undefined4 __fastcall FUN_110435c0(int *param_1);
template<class... A> int FUN_110435c0(A...);
undefined4 __fastcall FUN_11043610(int *param_1);
template<class... A> int FUN_11043610(A...);
undefined4 __stdcall FUN_11044450(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_11044450(A...);
undefined4 FUN_11044510(undefined4 param_1);
template<class... A> int FUN_11044510(A...);
int * __fastcall FUN_11045280(int *param_1);
template<class... A> int FUN_11045280(A...);
undefined4 __stdcall FUN_11045600(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_11045600(A...);
void __stdcall FUN_11045620(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_11045620(A...);
void __stdcall FUN_11046c90(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_11046c90(A...);
undefined4 FUN_11047dc0(void);
template<class... A> int FUN_11047dc0(A...);
undefined4 __fastcall FUN_110496d0(int *param_1);
template<class... A> int FUN_110496d0(A...);
undefined4 __fastcall FUN_1104e9e0(int *param_1);
template<class... A> int FUN_1104e9e0(A...);
undefined4 __fastcall FUN_1104ea90(int param_1);
template<class... A> int FUN_1104ea90(A...);
void __fastcall FUN_1104f550(int param_1);
template<class... A> int FUN_1104f550(A...);
void __fastcall FUN_1104f570(int param_1);
template<class... A> int FUN_1104f570(A...);
undefined1 __fastcall FUN_1104fdc0(int *param_1);
template<class... A> int FUN_1104fdc0(A...);
bool __fastcall FUN_110525b0(int param_1);
template<class... A> int FUN_110525b0(A...);
byte FUN_11052840(void);
template<class... A> int FUN_11052840(A...);
bool __fastcall FUN_110533e0(int param_1);
template<class... A> int FUN_110533e0(A...);
undefined1 __stdcall FUN_110547c0(undefined4 param_1);
template<class... A> int __stdcall FUN_110547c0(A...);
void __fastcall FUN_110564a0(undefined4 *param_1);
template<class... A> int FUN_110564a0(A...);
undefined4 __fastcall FUN_1105a9a0(int *param_1);
template<class... A> int FUN_1105a9a0(A...);
int * __fastcall FUN_1105be20(int *param_1);
template<class... A> int FUN_1105be20(A...);
undefined4 __fastcall FUN_1105c3b0(int *param_1);
template<class... A> int FUN_1105c3b0(A...);
undefined8 __fastcall FUN_1105c790(int *param_1);
template<class... A> int FUN_1105c790(A...);
undefined4 FUN_1105ce90(int param_1);
template<class... A> int FUN_1105ce90(A...);
void __fastcall FUN_1105f5e0(undefined4 *param_1);
template<class... A> int FUN_1105f5e0(A...);
SCStr * __stdcall FUN_11060730(SCStr *param_1);
template<class... A> int __stdcall FUN_11060730(A...);
undefined4 __stdcall FUN_11060810(undefined4 param_1);
template<class... A> int __stdcall FUN_11060810(A...);
SCStr * __stdcall FUN_11060960(SCStr *param_1);
template<class... A> int __stdcall FUN_11060960(A...);
void __fastcall FUN_11061900(undefined4 *param_1);
template<class... A> int FUN_11061900(A...);
SCStr * __stdcall FUN_11061da0(SCStr *param_1);
template<class... A> int __stdcall FUN_11061da0(A...);
void __fastcall FUN_11062530(undefined4 *param_1);
template<class... A> int FUN_11062530(A...);
undefined4 __fastcall FUN_11062cd0(int param_1);
template<class... A> int FUN_11062cd0(A...);
SCStr * __stdcall FUN_11062d20(SCStr *param_1);
template<class... A> int __stdcall FUN_11062d20(A...);
undefined4 FUN_11063110(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_11063110(A...);
undefined4 FUN_110645e0(int param_1);
template<class... A> int FUN_110645e0(A...);
undefined1 * __fastcall FUN_11065290(int param_1);
template<class... A> int FUN_11065290(A...);
SCStr * __stdcall FUN_11065310(SCStr *param_1);
template<class... A> int __stdcall FUN_11065310(A...);
void __fastcall FUN_11066d60(undefined4 *param_1);
template<class... A> int FUN_11066d60(A...);
bool __fastcall FUN_11067070(int param_1);
template<class... A> int FUN_11067070(A...);
void __fastcall FUN_11067850(undefined4 *param_1);
template<class... A> int FUN_11067850(A...);
SCStr * __stdcall FUN_11067d00(SCStr *param_1);
template<class... A> int __stdcall FUN_11067d00(A...);
undefined4 __fastcall FUN_11067d50(int param_1);
template<class... A> int FUN_11067d50(A...);
undefined4 __fastcall FUN_11067db0(int param_1);
template<class... A> int FUN_11067db0(A...);
int FUN_11069bc0(byte *param_1);
template<class... A> int FUN_11069bc0(A...);
void FUN_1106a250(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_1106a250(A...);
void FUN_1106b190(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_1106b190(A...);
void FUN_1106b1c0(undefined4 param_1);
template<class... A> int FUN_1106b1c0(A...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_1106b260(uint param_1);
template<class... A> int FUN_1106b260(A...);
void __fastcall FUN_1106d900(undefined4 *param_1);
template<class... A> int FUN_1106d900(A...);
int __fastcall FUN_1106f230(int param_1);
template<class... A> int FUN_1106f230(A...);
undefined4 __fastcall FUN_1106f270(int param_1);
template<class... A> int FUN_1106f270(A...);
undefined1 __fastcall FUN_1106f2b0(int param_1);
template<class... A> int FUN_1106f2b0(A...);
void __stdcall FUN_11072020(undefined4 param_1,int *param_2);
template<class... A> int FUN_11072020(A...);
void __stdcall FUN_11072070(undefined4 param_1,int *param_2);
template<class... A> int FUN_11072070(A...);
undefined4 * __fastcall FUN_11076be0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_11076be0(A...);
undefined4 * __fastcall FUN_11076c20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_11076c20(A...);
undefined4 * __fastcall FUN_11076c60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_11076c60(A...);
undefined4 * __fastcall FUN_11076ca0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_11076ca0(A...);
void __fastcall FUN_11078bc0(int param_1);
template<class... A> int FUN_11078bc0(A...);
void __fastcall FUN_11078be0(int param_1);
template<class... A> int FUN_11078be0(A...);
void __fastcall FUN_11078c00(int param_1);
template<class... A> int FUN_11078c00(A...);
void __fastcall FUN_11078c20(int param_1);
template<class... A> int FUN_11078c20(A...);
void __fastcall FUN_11078dc0(int *param_1);
template<class... A> int FUN_11078dc0(A...);
void __fastcall FUN_11078e90(int *param_1);
template<class... A> int FUN_11078e90(A...);
void __fastcall FUN_110790c0(int param_1);
template<class... A> int FUN_110790c0(A...);
void __fastcall FUN_110790e0(int param_1);
template<class... A> int FUN_110790e0(A...);
void __fastcall FUN_11079100(undefined4 *param_1);
template<class... A> int FUN_11079100(A...);
void __fastcall FUN_11079120(undefined4 *param_1);
template<class... A> int FUN_11079120(A...);
void __fastcall FUN_11079140(int *param_1);
template<class... A> int FUN_11079140(A...);
void __fastcall FUN_11079230(int *param_1);
template<class... A> int FUN_11079230(A...);
void __fastcall FUN_11079970(undefined4 *param_1);
template<class... A> int FUN_11079970(A...);
void __fastcall FUN_1107a0a0(undefined4 *param_1);
template<class... A> int FUN_1107a0a0(A...);
void __fastcall FUN_1107a0e0(undefined4 *param_1);
template<class... A> int FUN_1107a0e0(A...);
void __fastcall FUN_1107b9b0(int param_1);
template<class... A> int FUN_1107b9b0(A...);
void __fastcall FUN_1107b9d0(int param_1);
template<class... A> int FUN_1107b9d0(A...);
void __fastcall FUN_1107b9f0(int param_1);
template<class... A> int FUN_1107b9f0(A...);
void __fastcall FUN_1107ba10(int param_1);
template<class... A> int FUN_1107ba10(A...);
int * FUN_1107d2c0(int *param_1);
template<class... A> int FUN_1107d2c0(A...);
undefined4 __stdcall FUN_1107e300(undefined4 *param_1);
template<class... A> int __stdcall FUN_1107e300(A...);
void __fastcall FUN_1107f7f0(int *param_1);
template<class... A> int FUN_1107f7f0(A...);
void __fastcall FUN_1107f820(undefined4 *param_1);
template<class... A> int FUN_1107f820(A...);
void __fastcall FUN_1107f840(undefined4 *param_1);
template<class... A> int FUN_1107f840(A...);
void __fastcall FUN_1107fa10(int param_1);
template<class... A> int FUN_1107fa10(A...);
void __stdcall FUN_110802c0(int param_1,int param_2);
template<class... A> int FUN_110802c0(A...);
void __stdcall FUN_11080310(int param_1,int param_2);
template<class... A> int FUN_11080310(A...);
void __fastcall FUN_11080520(int *param_1);
template<class... A> int FUN_11080520(A...);
void __fastcall FUN_11080560(int *param_1);
template<class... A> int FUN_11080560(A...);
void __fastcall FUN_110805a0(int *param_1);
template<class... A> int FUN_110805a0(A...);
void __fastcall FUN_110805e0(int *param_1);
template<class... A> int FUN_110805e0(A...);
void FUN_11080e90(void);
template<class... A> int FUN_11080e90(A...);
void __stdcall FUN_11080f90(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_11080f90(A...);
void __stdcall FUN_11080fb0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_11080fb0(A...);
void __stdcall FUN_11080fd0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_11080fd0(A...);
void __stdcall FUN_11080ff0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_11080ff0(A...);
void __stdcall FUN_11081020(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_11081020(A...);
void __stdcall FUN_11081040(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_11081040(A...);
undefined4 FUN_11081060(void);
template<class... A> int FUN_11081060(A...);
undefined4 __fastcall FUN_11081080(int param_1);
template<class... A> int FUN_11081080(A...);
undefined4 __fastcall FUN_110810d0(int param_1);
template<class... A> int FUN_110810d0(A...);
void __fastcall FUN_11081120(int param_1);
template<class... A> int FUN_11081120(A...);
undefined4 __fastcall FUN_11081650(int param_1);
template<class... A> int FUN_11081650(A...);
int __fastcall FUN_11081a40(int param_1);
template<class... A> int FUN_11081a40(A...);
int __fastcall FUN_11081a60(int param_1);
template<class... A> int FUN_11081a60(A...);
int __fastcall FUN_11081a80(int param_1);
template<class... A> int FUN_11081a80(A...);
int __fastcall FUN_11081aa0(int param_1);
template<class... A> int FUN_11081aa0(A...);
void __stdcall FUN_11082ef0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_11082ef0(A...);
void __stdcall FUN_11082f10(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_11082f10(A...);
bool __fastcall FUN_110833f0(int param_1);
template<class... A> int FUN_110833f0(A...);
void FUN_11090e20(void);
template<class... A> int FUN_11090e20(A...);
void __stdcall FUN_110916b0(char param_1);
template<class... A> int __stdcall FUN_110916b0(A...);
int * __stdcall FUN_110939e0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_110939e0(A...);
void __fastcall FUN_110942f0(int param_1);
template<class... A> int FUN_110942f0(A...);
void __fastcall FUN_11094310(int param_1);
template<class... A> int FUN_11094310(A...);
void FUN_11094360(void);
template<class... A> int FUN_11094360(A...);
void FUN_11094380(void);
template<class... A> int FUN_11094380(A...);
void FUN_11094590(void);
template<class... A> int FUN_11094590(A...);
void FUN_110945b0(void);
template<class... A> int FUN_110945b0(A...);
void FUN_110945d0(void);
template<class... A> int FUN_110945d0(A...);
void FUN_110945f0(void);
template<class... A> int FUN_110945f0(A...);
undefined4 __stdcall FUN_110958a0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_110958a0(A...);
void __fastcall FUN_11096620(int param_1);
template<class... A> int FUN_11096620(A...);
undefined1 __stdcall FUN_11096c40(undefined4 param_1);
template<class... A> int __stdcall FUN_11096c40(A...);
void FUN_110978f0(void);
template<class... A> int FUN_110978f0(A...);
void __stdcall FUN_11097ab0(char param_1);
template<class... A> int __stdcall FUN_11097ab0(A...);
undefined4 __stdcall FUN_110984c0(uint param_1,undefined4 param_2,int param_3);
template<class... A> int FUN_110984c0(A...);
undefined4 * __fastcall FUN_11098ef0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_11098ef0(A...);
void __fastcall FUN_110991c0(int param_1);
template<class... A> int FUN_110991c0(A...);
void __fastcall FUN_110991e0(int *param_1);
template<class... A> int FUN_110991e0(A...);
void __fastcall FUN_110992d0(int param_1);
template<class... A> int FUN_110992d0(A...);
void __fastcall FUN_11099350(int *param_1);
template<class... A> int FUN_11099350(A...);
undefined * FUN_1109aed0(undefined4 param_1);
template<class... A> int FUN_1109aed0(A...);
void FUN_1109af40(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_1109af40(A...);
void __fastcall FUN_1109b4c0(int param_1);
template<class... A> int FUN_1109b4c0(A...);
void __fastcall FUN_1109bd10(int *param_1);
template<class... A> int FUN_1109bd10(A...);
void __fastcall FUN_1109c020(int param_1);
template<class... A> int FUN_1109c020(A...);
void FUN_1109dfa0(void);
template<class... A> int FUN_1109dfa0(A...);
void __fastcall FUN_1109e170(int param_1);
template<class... A> int FUN_1109e170(A...);
void __fastcall FUN_1109e380(int *param_1);
template<class... A> int FUN_1109e380(A...);
undefined2 FUN_1109ed30(void);
template<class... A> int FUN_1109ed30(A...);
undefined2 FUN_1109ed60(void);
template<class... A> int FUN_1109ed60(A...);
void __stdcall FUN_1109ed90(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1109ed90(A...);
void __stdcall FUN_1109efd0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1109efd0(A...);
void FUN_1109f1f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1109f1f0(A...);
void __stdcall FUN_1109f210(undefined4 param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1109f210(A...);
undefined1 * __fastcall FUN_1109f750(int param_1);
template<class... A> int FUN_1109f750(A...);
undefined1 * __fastcall FUN_1109f770(int param_1);
template<class... A> int FUN_1109f770(A...);
undefined1 * __fastcall FUN_1109f790(int param_1);
template<class... A> int FUN_1109f790(A...);
undefined1 * __fastcall FUN_1109f7b0(int param_1);
template<class... A> int FUN_1109f7b0(A...);
void FUN_1109f820(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1109f820(A...);
bool __fastcall FUN_110a0fd0(int param_1);
template<class... A> int FUN_110a0fd0(A...);
extern int ghidra_vftable_SCArray_SCPtr_SCDataRow___;
extern int ghidra_vftable_SCArray_SCPtr_SCIOp___;
extern int ghidra_vftable_SCArray_SCPtr_SCSonosPlaylist___;

// Reference entry 10f33000; body size 45 bytes.
extern int __stdcall FUN_10065348(int a1);
extern int __stdcall FUN_10070892(int a1);
extern int __stdcall thunk_FUN_1020b1d0(int a1);
extern int __stdcall thunk_FUN_1021b750(int a1);
extern int __stdcall thunk_FUN_102207b0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_103d61d0(int a1,int a2);
extern int __stdcall thunk_FUN_103d6930(int a1);
extern int __stdcall thunk_FUN_104d8ab0(int a1);
extern int __stdcall thunk_FUN_1059d940(int a1);
extern int __stdcall thunk_FUN_10d50930(int a1);
extern int __stdcall thunk_FUN_10f376d0(int a1,int a2);
extern int __stdcall thunk_FUN_10f377b0(int a1,int a2);
extern int __stdcall thunk_FUN_10f37810(int a1,int a2);
extern int __stdcall thunk_FUN_10f45640(int a1);
extern int __stdcall thunk_FUN_10f46e10(int a1,int a2);
extern int __stdcall thunk_FUN_10f6b380(int a1,int a2);
extern int __stdcall thunk_FUN_10f6b490(int a1,int a2);
extern int __stdcall thunk_FUN_10f7bdc0(int a1,int a2);
extern int __stdcall thunk_FUN_10f86b70(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10f999a0(int a1,int a2);
extern int __stdcall thunk_FUN_10f99a90(int a1,int a2);
extern int __stdcall thunk_FUN_10f99ba0(int a1,int a2);
extern int __stdcall thunk_FUN_10fab530(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10fab5b0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10fab630(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10fab6b0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10fc0ad0(int a1,int a2);
extern int __stdcall thunk_FUN_10fc0c00(int a1,int a2);
extern int __stdcall thunk_FUN_10fe9cb0(int a1,int a2);
extern int __stdcall thunk_FUN_1101f010(int a1);
extern int __stdcall thunk_FUN_11023740(int a1,int a2);
extern int __stdcall thunk_FUN_110237d0(int a1,int a2);
extern int __stdcall thunk_FUN_1102bc60(int a1,int a2,int a3,int a4,int a5,int a6,int a7);
extern int __stdcall thunk_FUN_11043b80(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_1104af00(int a1,int a2,int a3,int a4);
extern int __stdcall thunk_FUN_1104da60(int a1,int a2);
extern int __stdcall thunk_FUN_110621c0(int a1);
extern int __stdcall thunk_FUN_1106f380(int a1);
extern int __stdcall thunk_FUN_11072020(int a1,int a2);
extern int __stdcall thunk_FUN_11072070(int a1,int a2);
extern int __stdcall thunk_FUN_110721b0(int a1,int a2);
extern int __stdcall thunk_FUN_110723c0(int a1,int a2);
extern int __stdcall thunk_FUN_11072420(int a1,int a2);
extern int __stdcall thunk_FUN_11072480(int a1,int a2);
extern int __stdcall thunk_FUN_110724f0(int a1,int a2);
extern int __stdcall thunk_FUN_110844a0(int a1,int a2,int a3,int a4,int a5,int a6,int a7);
extern int __stdcall thunk_FUN_11089c30(int a1,int a2);
extern int __stdcall thunk_FUN_110935f0(int a1,int a2);
extern int __stdcall thunk_FUN_11098770(int a1,int a2);
extern int __stdcall thunk_FUN_110988b0(int a1,int a2);
extern int __stdcall thunk_FUN_110a30d0(int a1);
extern int __stdcall thunk_FUN_110a3240(int a1);
extern int __stdcall thunk_FUN_110a3e60(int a1);
extern int __stdcall thunk_FUN_110ba960(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_110bb5f0(int a1);
extern int __stdcall thunk_FUN_110bc160(int a1);
extern int __stdcall thunk_FUN_110bee40(int a1);
extern int __stdcall thunk_FUN_110f62c0(int a1);
extern int __stdcall thunk_FUN_110f6450(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_1111bc60(int a1);
extern int __stdcall thunk_FUN_1112b9e0(int a1);
extern int __stdcall thunk_FUN_1112c280(int a1);
extern int __stdcall thunk_FUN_11138b60(int a1);
extern int __stdcall thunk_FUN_1113eb00(int a1);
extern int __stdcall thunk_FUN_1113ecc0(int a1,int a2);
extern int __stdcall thunk_FUN_1115f330(int a1);
extern int __stdcall thunk_FUN_1115f360(int a1);
extern int __stdcall thunk_FUN_1115f390(int a1);
extern int __stdcall thunk_FUN_1115f570(int a1);
extern int __stdcall thunk_FUN_11162290(int a1);
extern int __stdcall thunk_FUN_11162620(int a1);
extern int __stdcall thunk_FUN_111a0940(int a1);
extern int __stdcall thunk_FUN_111a4bc0(int a1,int a2);
extern int __stdcall thunk_FUN_111a7100(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_111c1530(int a1);
extern int __stdcall thunk_FUN_111f6cc0(int a1,int a2,int a3,int a4);
extern int __stdcall thunk_FUN_111f6d60(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_1124ff50(int a1);
extern int __stdcall thunk_FUN_112503c0(int a1,int a2);
extern int __stdcall thunk_FUN_11458fa0(int a1);
extern int __stdcall thunk_FUN_114595b0(int a1,int a2,int a3);
struct SCVtbl_0_0 { virtual int v(void); };
struct SCVtbl_0_1 { virtual int v(int a1); };
struct SCVtbl_0_2 { virtual int v(int a1,int a2); };
struct SCVtbl_1_1 { virtual void _p0(); virtual int v(int a1); };
struct SCVtbl_1_2 { virtual void _p0(); virtual int v(int a1,int a2); };
struct SCVtbl_1_3 { virtual void _p0(); virtual int v(int a1,int a2,int a3); };
struct SCVtbl_2_1 { virtual void _p0(); virtual void _p1(); virtual int v(int a1); };
struct SCVtbl_2_2 { virtual void _p0(); virtual void _p1(); virtual int v(int a1,int a2); };
struct SCVtbl_3_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(int a1); };
struct SCVtbl_4_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(int a1,int a2); };
struct SCVtbl_5_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(int a1); };
struct SCVtbl_5_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(int a1,int a2); };
struct SCVtbl_6_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual int v(int a1); };
struct SCVtbl_7_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual int v(void); };
struct SCVtbl_7_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual int v(int a1); };
struct SCVtbl_8_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual int v(void); };
struct SCVtbl_9_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual int v(int a1); };
struct SCVtbl_9_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual int v(int a1,int a2); };
struct SCVtbl_10_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual int v(int a1); };
struct SCVtbl_10_3 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual int v(int a1,int a2,int a3); };
struct SCVtbl_11_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual int v(void); };
struct SCVtbl_11_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual int v(int a1); };
struct SCVtbl_12_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual int v(void); };
struct SCVtbl_13_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual int v(int a1,int a2); };
struct SCVtbl_14_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual int v(int a1); };
struct SCVtbl_14_4 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual int v(int a1,int a2,int a3,int a4); };
struct SCVtbl_16_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual int v(int a1); };
struct SCVtbl_17_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual int v(int a1); };
struct SCVtbl_18_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual int v(void); };
struct SCVtbl_21_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual int v(void); };
struct SCVtbl_21_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual int v(int a1); };
struct SCVtbl_22_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual int v(void); };
struct SCVtbl_22_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual int v(int a1); };
struct SCVtbl_23_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual int v(int a1); };
struct SCVtbl_24_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual int v(void); };
struct SCVtbl_24_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual int v(int a1); };
struct SCVtbl_25_3 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual int v(int a1,int a2,int a3); };
struct SCVtbl_27_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual int v(void); };
struct SCVtbl_27_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual int v(int a1); };
struct SCVtbl_28_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual int v(int a1); };
struct SCVtbl_30_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual int v(int a1); };
struct SCVtbl_31_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual int v(int a1); };
struct SCVtbl_32_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual int v(void); };
struct SCVtbl_32_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual int v(int a1); };
struct SCVtbl_33_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual int v(int a1); };
struct SCVtbl_34_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual int v(int a1); };
struct SCVtbl_35_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual int v(int a1); };
struct SCVtbl_36_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual int v(void); };
struct SCVtbl_38_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual int v(int a1); };
struct SCVtbl_39_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual int v(void); };
struct SCVtbl_40_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual int v(int a1); };
struct SCVtbl_43_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual int v(void); };
struct SCVtbl_43_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual int v(int a1); };
struct SCVtbl_44_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual int v(void); };
struct SCVtbl_51_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual int v(int a1); };
struct SCVtbl_53_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual int v(void); };
struct SCVtbl_55_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual int v(void); };
struct SCVtbl_55_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual int v(int a1); };
struct SCVtbl_59_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual int v(void); };
struct SCVtbl_65_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual int v(void); };
struct SCVtbl_90_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual void _p73(); virtual void _p74(); virtual void _p75(); virtual void _p76(); virtual void _p77(); virtual void _p78(); virtual void _p79(); virtual void _p80(); virtual void _p81(); virtual void _p82(); virtual void _p83(); virtual void _p84(); virtual void _p85(); virtual void _p86(); virtual void _p87(); virtual void _p88(); virtual void _p89(); virtual int v(int a1); };
struct SCVtbl_109_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual void _p73(); virtual void _p74(); virtual void _p75(); virtual void _p76(); virtual void _p77(); virtual void _p78(); virtual void _p79(); virtual void _p80(); virtual void _p81(); virtual void _p82(); virtual void _p83(); virtual void _p84(); virtual void _p85(); virtual void _p86(); virtual void _p87(); virtual void _p88(); virtual void _p89(); virtual void _p90(); virtual void _p91(); virtual void _p92(); virtual void _p93(); virtual void _p94(); virtual void _p95(); virtual void _p96(); virtual void _p97(); virtual void _p98(); virtual void _p99(); virtual void _p100(); virtual void _p101(); virtual void _p102(); virtual void _p103(); virtual void _p104(); virtual void _p105(); virtual void _p106(); virtual void _p107(); virtual void _p108(); virtual int v(void); };
struct SCVtbl_116_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual void _p73(); virtual void _p74(); virtual void _p75(); virtual void _p76(); virtual void _p77(); virtual void _p78(); virtual void _p79(); virtual void _p80(); virtual void _p81(); virtual void _p82(); virtual void _p83(); virtual void _p84(); virtual void _p85(); virtual void _p86(); virtual void _p87(); virtual void _p88(); virtual void _p89(); virtual void _p90(); virtual void _p91(); virtual void _p92(); virtual void _p93(); virtual void _p94(); virtual void _p95(); virtual void _p96(); virtual void _p97(); virtual void _p98(); virtual void _p99(); virtual void _p100(); virtual void _p101(); virtual void _p102(); virtual void _p103(); virtual void _p104(); virtual void _p105(); virtual void _p106(); virtual void _p107(); virtual void _p108(); virtual void _p109(); virtual void _p110(); virtual void _p111(); virtual void _p112(); virtual void _p113(); virtual void _p114(); virtual void _p115(); virtual int v(int a1); };
struct SCVtbl_117_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual void _p73(); virtual void _p74(); virtual void _p75(); virtual void _p76(); virtual void _p77(); virtual void _p78(); virtual void _p79(); virtual void _p80(); virtual void _p81(); virtual void _p82(); virtual void _p83(); virtual void _p84(); virtual void _p85(); virtual void _p86(); virtual void _p87(); virtual void _p88(); virtual void _p89(); virtual void _p90(); virtual void _p91(); virtual void _p92(); virtual void _p93(); virtual void _p94(); virtual void _p95(); virtual void _p96(); virtual void _p97(); virtual void _p98(); virtual void _p99(); virtual void _p100(); virtual void _p101(); virtual void _p102(); virtual void _p103(); virtual void _p104(); virtual void _p105(); virtual void _p106(); virtual void _p107(); virtual void _p108(); virtual void _p109(); virtual void _p110(); virtual void _p111(); virtual void _p112(); virtual void _p113(); virtual void _p114(); virtual void _p115(); virtual void _p116(); virtual int v(void); };
struct SCVtbl_1_0 { virtual void _p0(); virtual int v(void); };
struct SCVtbl_2_0 { virtual void _p0(); virtual void _p1(); virtual int v(void); };
struct SCVtbl_3_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(void); };
struct SCVtbl_4_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(int a1); };
struct SCVtbl_5_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(void); };
struct SCVtbl_6_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual int v(void); };
struct SCVtbl_9_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual int v(void); };
struct SCVtbl_10_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual int v(void); };
struct SCVtbl_12_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual int v(int a1,int a2); };
struct SCVtbl_13_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual int v(void); };
struct SCVtbl_14_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual int v(void); };
struct SCVtbl_15_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual int v(void); };
struct SCVtbl_15_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual int v(int a1); };
struct SCVtbl_16_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual int v(void); };
struct SCVtbl_19_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual int v(void); };
struct SCVtbl_23_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual int v(void); };
struct SCVtbl_26_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual int v(int a1); };
struct SCVtbl_35_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual int v(void); };
struct SCVtbl_37_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual int v(void); };
struct SCVtbl_51_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual int v(void); };
struct SCVtbl_54_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual int v(void); };
struct SCVtbl_56_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual int v(int a1); };
struct SCVtbl_57_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual int v(void); };
struct SCVtbl_58_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual int v(void); };
struct SCVtbl_60_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual int v(void); };
struct SCVtbl_61_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual int v(void); };
struct SCVtbl_64_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual int v(int a1); };
#line 1 "ENTRY_10f33000"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f33000(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpStartNetworkConnectivityTest);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpStartNetworkConnectivityTest);
  thunk_FUN_10f31aa0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f33040; body size 45 bytes.
#line 1 "ENTRY_10f33040"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f33040(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpTempDisableNetwork);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpTempDisableNetwork);
  thunk_FUN_10f31bf0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f34070; body size 21 bytes.
#line 1 "ENTRY_10f34070"

SCStr * __stdcall FUN_10f34070(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f34090; body size 21 bytes.
#line 1 "ENTRY_10f34090"

SCStr * __stdcall FUN_10f34090(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f340b0; body size 21 bytes.
#line 1 "ENTRY_10f340b0"

SCStr * __stdcall FUN_10f340b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f340d0; body size 21 bytes.
#line 1 "ENTRY_10f340d0"

SCStr * __stdcall FUN_10f340d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f340f0; body size 25 bytes.
#line 1 "ENTRY_10f340f0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10f340f0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x6144));
  return (SCStr *)(param_2);
}


// Reference entry 10f34110; body size 25 bytes.
#line 1 "ENTRY_10f34110"

SCStr * __thiscall Recovered_Bulk::m_FUN_10f34110(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x6144));
  return (SCStr *)(param_2);
}


// Reference entry 10f341d0; body size 31 bytes.
#line 1 "ENTRY_10f341d0"

__declspec(naked) void FUN_10f341d0(void)

{
  __asm mov eax, dword ptr [ecx + 0x18]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [eax + 0x6160]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10f341e9
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f34200; body size 31 bytes.
#line 1 "ENTRY_10f34200"

__declspec(naked) void FUN_10f34200(void)

{
  __asm mov eax, dword ptr [ecx + 0x18]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [eax + 0x6160]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10f34219
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f34230; body size 31 bytes.
#line 1 "ENTRY_10f34230"

__declspec(naked) void FUN_10f34230(void)

{
  __asm mov eax, dword ptr [ecx + 0x18]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [eax + 0x6274]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10f34249
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f372e0; body size 21 bytes.
#line 1 "ENTRY_10f372e0"

__declspec(naked) void FUN_10f372e0(void)

{
  __asm push dword ptr [esp + 8]
  __asm add ecx, 0x20
  __asm push dword ptr [esp + 8]
  __asm call LAB_1007302e
  __asm mov al, 1
  __asm ret 8
}



// Reference entry 10f376a0; body size 33 bytes.
#line 1 "ENTRY_10f376a0"

void __thiscall Recovered_Bulk::m_FUN_10f376a0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10f376d0((int)(param_2),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10f37e60; body size 48 bytes.
#line 1 "ENTRY_10f37e60"

__declspec(naked) void FUN_10f37e60(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x1c
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
  __asm ret 4
}



// Reference entry 10f38170; body size 19 bytes.
#line 1 "ENTRY_10f38170"

void __fastcall FUN_10f38170(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10f38190; body size 19 bytes.
#line 1 "ENTRY_10f38190"

void __fastcall FUN_10f38190(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10f381b0; body size 28 bytes.
#line 1 "ENTRY_10f381b0"

void __fastcall FUN_10f381b0(int *param_1)

{
  thunk_FUN_10f376d0((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10f38340; body size 19 bytes.
#line 1 "ENTRY_10f38340"

void __fastcall FUN_10f38340(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10f38360; body size 28 bytes.
#line 1 "ENTRY_10f38360"

void __fastcall FUN_10f38360(int *param_1)

{
  thunk_FUN_10f376d0((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10f389e0; body size 25 bytes.
#line 1 "ENTRY_10f389e0"

__declspec(naked) void FUN_10f389e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x1c
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10f38a00; body size 25 bytes.
#line 1 "ENTRY_10f38a00"

__declspec(naked) void FUN_10f38a00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x18
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10f392b0; body size 56 bytes.
#line 1 "ENTRY_10f392b0"

__declspec(naked) void FUN_10f392b0(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x14]
  __asm lea eax, [esp + 4]
  __asm push esi
  __asm push eax
  __asm call LAB_1008d474
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm jne 0x10f392de
  __asm mov eax, dword ptr [esi]
  __asm cmp eax, dword ptr [ecx + 0x10]
  __asm jl 0x10f392de
  __asm lea eax, [ecx + 0x14]
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
  __asm push offset LAB_11899e08
  __asm call LAB_1148a060
}



// Reference entry 10f39910; body size 55 bytes.
#line 1 "ENTRY_10f39910"

__declspec(naked) void FUN_10f39910(void)

{
  __asm sub esp, 0xc
  __asm lea eax, [esp]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x14]
  __asm push esi
  __asm push eax
  __asm call LAB_1008d474
  __asm mov ecx, dword ptr [eax + 8]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm jne 0x10f3993e
  __asm mov eax, dword ptr [esi]
  __asm cmp eax, dword ptr [ecx + 0x10]
  __asm jl 0x10f3993e
  __asm mov eax, 1
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
  __asm xor eax, eax
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}



// Reference entry 10f39960; body size 61 bytes.
#line 1 "ENTRY_10f39960"

__declspec(naked) void FUN_10f39960(void)

{
  __asm sub esp, 0xc
  __asm lea eax, [esp]
  __asm push dword ptr [esp + 0x10]
  __asm push eax
  __asm call LAB_10060316
  __asm mov eax, dword ptr [eax + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10f39995
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm add eax, 0x10
  __asm push eax
  __asm call LAB_10070fbd
  __asm test al, al
  __asm jne 0x10f39995
  __asm mov eax, 1
  __asm add esp, 0xc
  __asm ret 4
  __asm xor eax, eax
  __asm add esp, 0xc
  __asm ret 4
}



// Reference entry 10f3bae0; body size 21 bytes.
#line 1 "ENTRY_10f3bae0"

SCStr * __stdcall FUN_10f3bae0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("wizard/onboarding/v3");
  return (SCStr *)(param_1);
}


// Reference entry 10f3bb00; body size 21 bytes.
#line 1 "ENTRY_10f3bb00"

SCStr * __stdcall FUN_10f3bb00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("onboarding_assets");
  return (SCStr *)(param_1);
}


// Reference entry 10f3bdb0; body size 61 bytes.
#line 1 "ENTRY_10f3bdb0"

__declspec(naked) void FUN_10f3bdb0(void)

{
  __asm sub esp, 0xc
  __asm lea eax, [esp]
  __asm add ecx, 0x14
  __asm push dword ptr [esp + 0x10]
  __asm push eax
  __asm call LAB_10060316
  __asm mov eax, dword ptr [eax + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10f3bde5
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm add eax, 0x10
  __asm push eax
  __asm call LAB_10070fbd
  __asm test al, al
  __asm jne 0x10f3bde5
  __asm mov al, 1
  __asm add esp, 0xc
  __asm ret 4
  __asm xor al, al
  __asm add esp, 0xc
  __asm ret 4
}



// Reference entry 10f3ce20; body size 19 bytes.
#line 1 "ENTRY_10f3ce20"

void __fastcall FUN_10f3ce20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10f3d140; body size 45 bytes.
#line 1 "ENTRY_10f3d140"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f3d140(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f3d180; body size 33 bytes.
#line 1 "ENTRY_10f3d180"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f3d180(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f3d470; body size 33 bytes.
#line 1 "ENTRY_10f3d470"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f3d470(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjJHHListener);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f3d660; body size 37 bytes.
#line 1 "ENTRY_10f3d660"

__declspec(naked) void FUN_10f3d660(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x3c]
  __asm test ecx, ecx
  __asm je 0x10f3d671
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x20]
  __asm jmp 0x10f3d673
  __asm xor eax, eax
  __asm cmp dword ptr [esp + 8], eax
  __asm jne 0x10f3d681
  __asm lea ecx, [esi - 0x10]
  __asm call LAB_100575fe
  __asm pop esi
  __asm ret 8
}



// Reference entry 10f3d690; body size 37 bytes.
#line 1 "ENTRY_10f3d690"

__declspec(naked) void FUN_10f3d690(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x34]
  __asm test ecx, ecx
  __asm je 0x10f3d6a1
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x20]
  __asm jmp 0x10f3d6a3
  __asm xor eax, eax
  __asm cmp dword ptr [esp + 8], eax
  __asm jne 0x10f3d6b1
  __asm lea ecx, [esi - 0x10]
  __asm call LAB_1002df56
  __asm pop esi
  __asm ret 8
}



// Reference entry 10f3d8d0; body size 42 bytes.
#line 1 "ENTRY_10f3d8d0"

__declspec(naked) void FUN_10f3d8d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x3c]
  __asm test ecx, ecx
  __asm je 0x10f3d8f8
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm call eax
  __asm test al, al
  __asm je 0x10f3d8f8
  __asm mov eax, dword ptr [esi + 0x38]
  __asm lea ecx, [esi + 0x38]
  __asm call dword ptr [eax + 4]
  __asm mov eax, dword ptr [esi + 0x38]
  __asm lea ecx, [esi + 0x38]
  __asm pop esi
  __asm jmp dword ptr [eax + 4]
  __asm pop esi
  __asm ret
}



// Reference entry 10f3d910; body size 42 bytes.
#line 1 "ENTRY_10f3d910"

__declspec(naked) void FUN_10f3d910(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x34]
  __asm test ecx, ecx
  __asm je 0x10f3d938
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm call eax
  __asm test al, al
  __asm je 0x10f3d938
  __asm mov eax, dword ptr [esi + 0x30]
  __asm lea ecx, [esi + 0x30]
  __asm call dword ptr [eax + 4]
  __asm mov eax, dword ptr [esi + 0x30]
  __asm lea ecx, [esi + 0x30]
  __asm pop esi
  __asm jmp dword ptr [eax + 4]
  __asm pop esi
  __asm ret
}



// Reference entry 10f3d950; body size 21 bytes.
#line 1 "ENTRY_10f3d950"

SCStr * __stdcall FUN_10f3d950(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCOpJoinHousehold");
  return (SCStr *)(param_1);
}


// Reference entry 10f3d970; body size 21 bytes.
#line 1 "ENTRY_10f3d970"

SCStr * __stdcall FUN_10f3d970(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCOpLegacyApConnectJoinNetwork");
  return (SCStr *)(param_1);
}


// Reference entry 10f3d990; body size 21 bytes.
#line 1 "ENTRY_10f3d990"

SCStr * __stdcall FUN_10f3d990(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("setup_ops");
  return (SCStr *)(param_1);
}


// Reference entry 10f3d9b0; body size 21 bytes.
#line 1 "ENTRY_10f3d9b0"

SCStr * __stdcall FUN_10f3d9b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("setup_ops");
  return (SCStr *)(param_1);
}


// Reference entry 10f3da10; body size 21 bytes.
#line 1 "ENTRY_10f3da10"

SCStr * __stdcall FUN_10f3da10(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f3da30; body size 21 bytes.
#line 1 "ENTRY_10f3da30"

SCStr * __stdcall FUN_10f3da30(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f3f390; body size 38 bytes.
#line 1 "ENTRY_10f3f390"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f3f390(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f3f550; body size 46 bytes.
#line 1 "ENTRY_10f3f550"

void __fastcall FUN_10f3f550(int param_1)

{
  if (*(int **)(param_1 + 0x120) != (int *)((0x0))) {
    ((SCVtbl_5_0*)(*(int **)(param_1 + 0x120)))->v();
    if (*(undefined4 **)(param_1 + 0x120) != (undefined4 *)((0x0))) {
      ((SCVtbl_0_1*)(*(undefined4 **)(param_1 + 0x120)))->v((int)(1));
    }
    *(undefined4*)(param_1 + 0x120) = (undefined4)(0);
  }
  return;
}


// Reference entry 10f3fb40; body size 37 bytes.
#line 1 "ENTRY_10f3fb40"

void __thiscall Recovered_Bulk::m_FUN_10f3fb40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((int *)param_1[2] != (int *)(((0x0)))) {
    ((SCVtbl_2_1*)((int *)param_1[2]))->v((int)(param_2));
  }
  if (*(char *)(param_1 + 3) != '\0') {
    ((SCVtbl_0_1*)(param_1))->v((int)(1));
  }
  return;
}


// Reference entry 10f40f50; body size 24 bytes.
#line 1 "ENTRY_10f40f50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f40f50(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f40f70; body size 24 bytes.
#line 1 "ENTRY_10f40f70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f40f70(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f40f90; body size 24 bytes.
#line 1 "ENTRY_10f40f90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f40f90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f40fb0; body size 24 bytes.
#line 1 "ENTRY_10f40fb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f40fb0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f412b0; body size 26 bytes.
#line 1 "ENTRY_10f412b0"

void __fastcall FUN_10f412b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10f41490; body size 60 bytes.
#line 1 "ENTRY_10f41490"

__declspec(naked) void FUN_10f41490(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_117702a0
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x10f414bd
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 10f414f0; body size 60 bytes.
#line 1 "ENTRY_10f414f0"

__declspec(naked) void FUN_10f414f0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_117702d0
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x10f4151d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 10f41550; body size 60 bytes.
#line 1 "ENTRY_10f41550"

__declspec(naked) void FUN_10f41550(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_11770300
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x10f4157d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 10f415b0; body size 60 bytes.
#line 1 "ENTRY_10f415b0"

__declspec(naked) void FUN_10f415b0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_11770330
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x10f415dd
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 10f41a30; body size 45 bytes.
#line 1 "ENTRY_10f41a30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f41a30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f41a70; body size 52 bytes.
#line 1 "ENTRY_10f41a70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f41a70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f41ac0; body size 52 bytes.
#line 1 "ENTRY_10f41ac0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f41ac0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f41b10; body size 33 bytes.
#line 1 "ENTRY_10f41b10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f41b10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f41b40; body size 35 bytes.
#line 1 "ENTRY_10f41b40"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f41b40(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f41620();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x88);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f41ba0; body size 48 bytes.
#line 1 "ENTRY_10f41ba0"

__declspec(naked) void FUN_10f41ba0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_100354f4
  __asm mov esi, eax
  __asm add esp, 4
  __asm cmp esi, 1
  __asm jle 0x10f41bcd
  __asm cmp dword ptr [edi + 8], 0
  __asm je 0x10f41bcd
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 0x28]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10f41be0; body size 61 bytes.
#line 1 "ENTRY_10f41be0"

__declspec(naked) void FUN_10f41be0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10f41bfc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10f41c12
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f41c30; body size 61 bytes.
#line 1 "ENTRY_10f41c30"

__declspec(naked) void FUN_10f41c30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10f41c4c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10f41c62
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f41c80; body size 61 bytes.
#line 1 "ENTRY_10f41c80"

__declspec(naked) void FUN_10f41c80(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10f41c9c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10f41cb2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f41cd0; body size 61 bytes.
#line 1 "ENTRY_10f41cd0"

__declspec(naked) void FUN_10f41cd0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10f41cec
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10f41d02
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f41d20; body size 45 bytes.
#line 1 "ENTRY_10f41d20"

__declspec(naked) void FUN_10f41d20(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm test edi, edi
  __asm je 0x10f41d42
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x10f41d42
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm pop edi
  __asm mov dword ptr [esi], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f420a0; body size 43 bytes.
#line 1 "ENTRY_10f420a0"

__declspec(naked) void FUN_10f420a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm test edi, edi
  __asm je 0x10f420c2
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x10f420c2
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm push 1
  __asm call dword ptr [eax]
  __asm pop edi
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10f420e0; body size 43 bytes.
#line 1 "ENTRY_10f420e0"

void __fastcall FUN_10f420e0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piVar1))->v();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 10f42120; body size 43 bytes.
#line 1 "ENTRY_10f42120"

void __fastcall FUN_10f42120(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piVar1))->v();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 10f42160; body size 43 bytes.
#line 1 "ENTRY_10f42160"

void __fastcall FUN_10f42160(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piVar1))->v();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 10f421a0; body size 43 bytes.
#line 1 "ENTRY_10f421a0"

void __fastcall FUN_10f421a0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piVar1))->v();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 10f42870; body size 28 bytes.
#line 1 "ENTRY_10f42870"

__declspec(naked) void FUN_10f42870(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0x28]
  __asm test eax, eax
  __asm je 0x10f42888
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x28]
  __asm pop esi
  __asm mov eax, dword ptr [eax + 8]
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 10f42da0; body size 33 bytes.
#line 1 "ENTRY_10f42da0"

__declspec(naked) void FUN_10f42da0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0x28]
  __asm test eax, eax
  __asm je 0x10f42dbd
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x28]
  __asm cmp dword ptr [eax + 8], 0
  __asm je 0x10f42dbd
  __asm mov al, 1
  __asm pop esi
  __asm ret
  __asm xor al, al
  __asm pop esi
  __asm ret
}



// Reference entry 10f42dd0; body size 36 bytes.
#line 1 "ENTRY_10f42dd0"

__declspec(naked) void FUN_10f42dd0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm lea eax, [esi - 0xc]
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_1187c25c
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 4]
  __asm call LAB_10013543
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}



// Reference entry 10f437a0; body size 22 bytes.
#line 1 "ENTRY_10f437a0"

__declspec(naked) void FUN_10f437a0(void)

{
  __asm push esi
  __asm push 0
  __asm mov esi, ecx
  __asm call dword ptr [LAB_122fca5c]
  __asm add esp, 4
  __asm mov dword ptr [esi + 0x68], eax
  __asm mov dword ptr [esi + 0x6c], edx
  __asm pop esi
  __asm ret
}



// Reference entry 10f43c00; body size 30 bytes.
#line 1 "ENTRY_10f43c00"

void __thiscall Recovered_Bulk::m_FUN_10f43c00(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10f43d80; body size 41 bytes.
#line 1 "ENTRY_10f43d80"

__declspec(naked) void FUN_10f43d80(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10f43da3
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



// Reference entry 10f43de0; body size 41 bytes.
#line 1 "ENTRY_10f43de0"

__declspec(naked) void FUN_10f43de0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10f43e03
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



// Reference entry 10f43e20; body size 41 bytes.
#line 1 "ENTRY_10f43e20"

__declspec(naked) void FUN_10f43e20(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10f43e43
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



// Reference entry 10f43e60; body size 24 bytes.
#line 1 "ENTRY_10f43e60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f43e60(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f44680; body size 26 bytes.
#line 1 "ENTRY_10f44680"

void __fastcall FUN_10f44680(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10f44930; body size 60 bytes.
#line 1 "ENTRY_10f44930"

__declspec(naked) void FUN_10f44930(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_11770f30
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x10f4495d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 10f44f70; body size 45 bytes.
#line 1 "ENTRY_10f44f70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f44f70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f44fb0; body size 52 bytes.
#line 1 "ENTRY_10f44fb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f44fb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f45000; body size 52 bytes.
#line 1 "ENTRY_10f45000"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f45000(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f45050; body size 33 bytes.
#line 1 "ENTRY_10f45050"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f45050(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f45080; body size 32 bytes.
#line 1 "ENTRY_10f45080"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f45080(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f449a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x58);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f450b0; body size 35 bytes.
#line 1 "ENTRY_10f450b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f450b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f44b00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2f0);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f450f0; body size 48 bytes.
#line 1 "ENTRY_10f450f0"

__declspec(naked) void FUN_10f450f0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_100354f4
  __asm mov esi, eax
  __asm add esp, 4
  __asm cmp esi, 1
  __asm jle 0x10f4511d
  __asm cmp dword ptr [edi + 8], 0
  __asm je 0x10f4511d
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 0x38]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10f45130; body size 61 bytes.
#line 1 "ENTRY_10f45130"

__declspec(naked) void FUN_10f45130(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10f4514c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10f45162
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f45180; body size 61 bytes.
#line 1 "ENTRY_10f45180"

__declspec(naked) void FUN_10f45180(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10f4519c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10f451b2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f451d0; body size 30 bytes.
#line 1 "ENTRY_10f451d0"

void __thiscall Recovered_Bulk::m_FUN_10f451d0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10f459b0; body size 21 bytes.
#line 1 "ENTRY_10f459b0"

SCStr * __stdcall FUN_10f459b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCPlayQueueDataSource");
  return (SCStr *)(param_1);
}


// Reference entry 10f459d0; body size 43 bytes.
#line 1 "ENTRY_10f459d0"

void __fastcall FUN_10f459d0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piVar1))->v();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 10f45f80; body size 20 bytes.
#line 1 "ENTRY_10f45f80"

SCStr * __thiscall Recovered_Bulk::m_FUN_10f45f80(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x3c));
  return (SCStr *)(param_2);
}


// Reference entry 10f45fa0; body size 35 bytes.
#line 1 "ENTRY_10f45fa0"

__declspec(naked) void FUN_10f45fa0(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x229c
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10f46d90; body size 57 bytes.
#line 1 "ENTRY_10f46d90"

__declspec(naked) void FUN_10f46d90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0x38]
  __asm test eax, eax
  __asm je 0x10f46dc5
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x38]
  __asm cmp dword ptr [eax + 8], 0
  __asm je 0x10f46dc5
  __asm mov eax, dword ptr [esi + 0x4c]
  __asm test eax, eax
  __asm je 0x10f46dc5
  __asm cmp byte ptr [eax], 0
  __asm je 0x10f46dc5
  __asm cmp dword ptr [esi + 0x38], 0
  __asm je 0x10f46dc1
  __asm cmp dword ptr [esi + 0x40], 0
  __asm je 0x10f46dc5
  __asm mov al, 1
  __asm pop esi
  __asm ret
  __asm xor al, al
  __asm pop esi
  __asm ret
}



// Reference entry 10f46df0; body size 17 bytes.
#line 1 "ENTRY_10f46df0"

__declspec(naked) void FUN_10f46df0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm push offset LAB_1187c25c
  __asm call LAB_1008ca83
  __asm ret 4
}



// Reference entry 10f47170; body size 58 bytes.
#line 1 "ENTRY_10f47170"

__declspec(naked) void FUN_10f47170(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm mov ecx, dword ptr [esi + 0x2e4]
  __asm add ecx, 8
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x14]
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x100]
  __asm push dword ptr [esp + 8]
  __asm mov ecx, esi
  __asm call LAB_100414cf
  __asm mov eax, dword ptr [esi + 0x2cc]
  __asm mov dword ptr [esi + 0x2d0], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f47810; body size 35 bytes.
#line 1 "ENTRY_10f47810"

void __fastcall FUN_10f47810(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(short *)(param_1 + -0x1c0) == 0x3ea) {
    ((SCVtbl_37_0*)((int *)(param_1 + -0x28c)))->v();
  }
  return;
}


// Reference entry 10f47850; body size 31 bytes.
#line 1 "ENTRY_10f47850"

__declspec(naked) void FUN_10f47850(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2e4]
  __asm push dword ptr [esi + 0xc8]
  __asm add ecx, 8
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x14]
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_10019f38
}



// Reference entry 10f47f80; body size 16 bytes.
#line 1 "ENTRY_10f47f80"

__declspec(naked) void FUN_10f47f80(void)

{
  __asm mov eax, 0x3ec
  __asm cmp word ptr [esp + 4], ax
  __asm setne al
  __asm ret 8
}



// Reference entry 10f47fa0; body size 37 bytes.
#line 1 "ENTRY_10f47fa0"

__declspec(naked) void FUN_10f47fa0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm push 0
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, dword ptr [edi + 0x20]
  __asm lea ecx, [edi + 0x18]
  __asm call LAB_10037bc8
  __asm test esi, esi
  __asm jne 0x10f47fc0
  __asm mov ecx, edi
  __asm call LAB_1008f67a
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f483e0; body size 19 bytes.
#line 1 "ENTRY_10f483e0"

void __fastcall FUN_10f483e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10f484c0; body size 45 bytes.
#line 1 "ENTRY_10f484c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f484c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f485d0; body size 33 bytes.
#line 1 "ENTRY_10f485d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f485d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f48b90; body size 25 bytes.
#line 1 "ENTRY_10f48b90"

__declspec(naked) void FUN_10f48b90(void)

{
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10f48ba3
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f499d0; body size 59 bytes.
#line 1 "ENTRY_10f499d0"

__declspec(naked) void FUN_10f499d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x10f499fc
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10f499f3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_100153ca
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f49b80; body size 41 bytes.
#line 1 "ENTRY_10f49b80"

__declspec(naked) void FUN_10f49b80(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10f49ba3
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



// Reference entry 10f49bc0; body size 24 bytes.
#line 1 "ENTRY_10f49bc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f49bc0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f4a690; body size 19 bytes.
#line 1 "ENTRY_10f4a690"

void __fastcall FUN_10f4a690(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10f4a6f0; body size 26 bytes.
#line 1 "ENTRY_10f4a6f0"

void __fastcall FUN_10f4a6f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10f4a780; body size 17 bytes.
#line 1 "ENTRY_10f4a780"

void __fastcall FUN_10f4a780(undefined4 *param_1)

{
  thunk_FUN_10f49380(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 10f4aba0; body size 45 bytes.
#line 1 "ENTRY_10f4aba0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f4aba0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f4abe0; body size 45 bytes.
#line 1 "ENTRY_10f4abe0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f4abe0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f4ac20; body size 52 bytes.
#line 1 "ENTRY_10f4ac20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f4ac20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f4ac70; body size 52 bytes.
#line 1 "ENTRY_10f4ac70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f4ac70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f4af80; body size 33 bytes.
#line 1 "ENTRY_10f4af80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f4af80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f4afb0; body size 33 bytes.
#line 1 "ENTRY_10f4afb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f4afb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f4b080; body size 38 bytes.
#line 1 "ENTRY_10f4b080"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f4b080(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfListenerGroupVolume);
  thunk_FUN_111a4f00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f4b180; body size 20 bytes.
#line 1 "ENTRY_10f4b180"

void __thiscall Recovered_Bulk::m_FUN_10f4b180(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f49380(param_2,param_3,param_1);
  return;
}


// Reference entry 10f4b4a0; body size 48 bytes.
#line 1 "ENTRY_10f4b4a0"

__declspec(naked) void FUN_10f4b4a0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_100354f4
  __asm mov esi, eax
  __asm add esp, 4
  __asm cmp esi, 1
  __asm jle 0x10f4b4cd
  __asm cmp dword ptr [edi + 8], 0
  __asm je 0x10f4b4cd
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 0x4c]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10f4b4e0; body size 48 bytes.
#line 1 "ENTRY_10f4b4e0"

__declspec(naked) void FUN_10f4b4e0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_100354f4
  __asm mov esi, eax
  __asm add esp, 4
  __asm cmp esi, 1
  __asm jle 0x10f4b50d
  __asm cmp dword ptr [edi + 8], 0
  __asm je 0x10f4b50d
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 0x4c]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10f4b5c0; body size 19 bytes.
#line 1 "ENTRY_10f4b5c0"

__declspec(naked) void FUN_10f4b5c0(void)

{
  __asm cmp byte ptr [ecx + 0x10], 0
  __asm jne 0x10f4b5d2
  __asm mov byte ptr [ecx + 0x10], 1
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm jmp LAB_1009a813
  __asm ret
}



// Reference entry 10f4b990; body size 21 bytes.
#line 1 "ENTRY_10f4b990"

__declspec(naked) void FUN_10f4b990(void)

{
  __asm mov ecx, dword ptr [ecx + 0x14]
  __asm test ecx, ecx
  __asm jne LAB_1004ddba
  __asm xor eax, eax
  __asm ret 8
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}



// Reference entry 10f4b9c0; body size 60 bytes.
#line 1 "ENTRY_10f4b9c0"

__declspec(naked) void FUN_10f4b9c0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x10f4b9e9
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10f4b9f6
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
}



// Reference entry 10f4ba30; body size 20 bytes.
#line 1 "ENTRY_10f4ba30"

SCStr * __thiscall Recovered_Bulk::m_FUN_10f4ba30(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10f4be20; body size 20 bytes.
#line 1 "ENTRY_10f4be20"

SCStr * __thiscall Recovered_Bulk::m_FUN_10f4be20(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x30));
  return (SCStr *)(param_2);
}


// Reference entry 10f4be50; body size 34 bytes.
#line 1 "ENTRY_10f4be50"

__declspec(naked) void FUN_10f4be50(void)

{
  __asm mov ecx, dword ptr [ecx + 0x3c]
  __asm test ecx, ecx
  __asm je 0x10f4be6f
  __asm cmp byte ptr [ecx + 0x15], 0
  __asm jne 0x10f4be6f
  __asm push 0
  __asm call LAB_100965dd
  __asm movzx eax, al
  __asm neg eax
  __asm sbb eax, eax
  __asm add eax, 2
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 10f4beb0; body size 25 bytes.
#line 1 "ENTRY_10f4beb0"

__declspec(naked) void FUN_10f4beb0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x44]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10f4bec3
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f4c190; body size 32 bytes.
#line 1 "ENTRY_10f4c190"

__declspec(naked) void FUN_10f4c190(void)

{
  __asm cmp dword ptr [ecx + 0xc], 0
  __asm je 0x10f4c1ad
  __asm mov eax, dword ptr [ecx + 8]
  __asm mov edx, offset LAB_1186d2ee
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm test eax, eax
  __asm cmovne edx, eax
  __asm push edx
  __asm call LAB_1009719f
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 10f4c1d0; body size 52 bytes.
#line 1 "ENTRY_10f4c1d0"

__declspec(naked) void FUN_10f4c1d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0x4c]
  __asm test eax, eax
  __asm je 0x10f4c1fe
  __asm mov ecx, dword ptr [esi + 0x40]
  __asm test ecx, ecx
  __asm je 0x10f4c1fe
  __asm mov eax, dword ptr [esi + 0x30]
  __asm mov edx, offset LAB_1186d2ee
  __asm test eax, eax
  __asm cmovne edx, eax
  __asm mov eax, dword ptr [ecx + 0x1c]
  __asm add ecx, 0x1c
  __asm push edx
  __asm call dword ptr [eax + 0xc]
  __asm test eax, eax
  __asm jne 0x10f4c202
  __asm mov byte ptr [esi + 0x34], 1
  __asm pop esi
  __asm ret
}



// Reference entry 10f4c720; body size 32 bytes.
#line 1 "ENTRY_10f4c720"

__declspec(naked) void FUN_10f4c720(void)

{
  __asm cmp dword ptr [ecx + 0xc], 0
  __asm je 0x10f4c73d
  __asm mov eax, dword ptr [ecx + 8]
  __asm mov edx, offset LAB_1186d2ee
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm test eax, eax
  __asm cmovne edx, eax
  __asm push edx
  __asm call LAB_100965dd
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 10f4c770; body size 32 bytes.
#line 1 "ENTRY_10f4c770"

__declspec(naked) void FUN_10f4c770(void)

{
  __asm cmp dword ptr [ecx + 0xc], 0
  __asm je 0x10f4c78d
  __asm mov eax, dword ptr [ecx + 8]
  __asm mov edx, offset LAB_1186d2ee
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm test eax, eax
  __asm cmovne edx, eax
  __asm push edx
  __asm call LAB_1008bf07
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 10f4c7a0; body size 32 bytes.
#line 1 "ENTRY_10f4c7a0"

__declspec(naked) void FUN_10f4c7a0(void)

{
  __asm cmp dword ptr [ecx + 0xc], 0
  __asm je 0x10f4c7bd
  __asm mov eax, dword ptr [ecx + 8]
  __asm mov edx, offset LAB_1186d2ee
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm test eax, eax
  __asm cmovne edx, eax
  __asm push edx
  __asm call LAB_100438ab
  __asm ret
  __asm mov al, 1
  __asm ret
}



// Reference entry 10f4c970; body size 59 bytes.
#line 1 "ENTRY_10f4c970"

__declspec(naked) void FUN_10f4c970(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x10f4c99c
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10f4c993
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_100153ca
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f4d160; body size 36 bytes.
#line 1 "ENTRY_10f4d160"

void __thiscall Recovered_Bulk::m_FUN_10f4d160(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 8));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10f4df80; body size 24 bytes.
#line 1 "ENTRY_10f4df80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f4df80(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f4e130; body size 39 bytes.
#line 1 "ENTRY_10f4e130"

__declspec(naked) void FUN_10f4e130(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f4e590; body size 60 bytes.
#line 1 "ENTRY_10f4e590"

__declspec(naked) void FUN_10f4e590(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_11772e80
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x10f4e5bd
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 10f4e5f0; body size 19 bytes.
#line 1 "ENTRY_10f4e5f0"

void __fastcall FUN_10f4e5f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10f4e6f0; body size 38 bytes.
#line 1 "ENTRY_10f4e6f0"

__declspec(naked) void FUN_10f4e6f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 4]
  __asm test eax, eax
  __asm je 0x10f4e705
  __asm lea ecx, [eax + 8]
  __asm call LAB_1000f993
  __asm mov eax, dword ptr [esi + 4]
  __asm pop esi
  __asm test eax, eax
  __asm je 0x10f4e715
  __asm push 0x14
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
}



// Reference entry 10f4ec90; body size 27 bytes.
#line 1 "ENTRY_10f4ec90"

__declspec(naked) void FUN_10f4ec90(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push dword ptr [esp + 0xc]
  __asm push eax
  __asm call LAB_100179d1
  __asm mov eax, dword ptr [eax]
  __asm add eax, 0xc
  __asm add esp, 8
  __asm ret 4
}



// Reference entry 10f4ed70; body size 32 bytes.
#line 1 "ENTRY_10f4ed70"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f4ed70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f4e790();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f4eda0; body size 32 bytes.
#line 1 "ENTRY_10f4eda0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f4eda0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f4e870();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f4edd0; body size 45 bytes.
#line 1 "ENTRY_10f4edd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f4edd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f4ee30; body size 25 bytes.
#line 1 "ENTRY_10f4ee30"

__declspec(naked) void FUN_10f4ee30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10f4fa50; body size 33 bytes.
#line 1 "ENTRY_10f4fa50"

__declspec(naked) void FUN_10f4fa50(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm push offset LAB_1187ae7c
  __asm call LAB_1008ca83
  __asm test al, al
  __asm je 0x10f4fa6d
  __asm lea ecx, [esi - 0x10]
  __asm call LAB_1000b802
  __asm pop esi
  __asm ret 8
}



// Reference entry 10f50750; body size 26 bytes.
#line 1 "ENTRY_10f50750"

__declspec(naked) void FUN_10f50750(void)

{
  __asm mov ecx, dword ptr [ecx + 0x20]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x84]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 10f518c0; body size 29 bytes.
#line 1 "ENTRY_10f518c0"

__declspec(naked) void FUN_10f518c0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x20]
  __asm sub esp, 8
  __asm _emit 0xf2 __asm _emit 0x0f __asm _emit 0x10 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0xf2 __asm _emit 0x0f __asm _emit 0x11 __asm _emit 0x04 __asm _emit 0x24
  __asm push dword ptr [esp + 0xc]
  __asm call dword ptr [eax + 0x34]
  __asm ret 0xc
}



// Reference entry 10f51f10; body size 41 bytes.
#line 1 "ENTRY_10f51f10"

__declspec(naked) void FUN_10f51f10(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10f51f33
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



// Reference entry 10f52370; body size 33 bytes.
#line 1 "ENTRY_10f52370"

__declspec(naked) void FUN_10f52370(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10f5238f
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



// Reference entry 10f523a0; body size 33 bytes.
#line 1 "ENTRY_10f523a0"

__declspec(naked) void FUN_10f523a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10f523bf
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



// Reference entry 10f52570; body size 37 bytes.
#line 1 "ENTRY_10f52570"

__declspec(naked) void FUN_10f52570(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10f5258f
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f52660; body size 32 bytes.
#line 1 "ENTRY_10f52660"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f52660(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f52210();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f52840; body size 33 bytes.
#line 1 "ENTRY_10f52840"

__declspec(naked) void FUN_10f52840(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10f5285f
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



// Reference entry 10f531c0; body size 25 bytes.
#line 1 "ENTRY_10f531c0"

__declspec(naked) void FUN_10f531c0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10f531d3
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10f561e0; body size 41 bytes.
#line 1 "ENTRY_10f561e0"

__declspec(naked) void FUN_10f561e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10f56203
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



// Reference entry 10f56220; body size 41 bytes.
#line 1 "ENTRY_10f56220"

__declspec(naked) void FUN_10f56220(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10f56243
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



// Reference entry 10f56260; body size 41 bytes.
#line 1 "ENTRY_10f56260"

__declspec(naked) void FUN_10f56260(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10f56283
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



// Reference entry 10f562a0; body size 41 bytes.
#line 1 "ENTRY_10f562a0"

__declspec(naked) void FUN_10f562a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10f562c3
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



// Reference entry 10f57040; body size 19 bytes.
#line 1 "ENTRY_10f57040"

void __fastcall FUN_10f57040(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10f57060; body size 19 bytes.
#line 1 "ENTRY_10f57060"

void __fastcall FUN_10f57060(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10f57080; body size 19 bytes.
#line 1 "ENTRY_10f57080"

void __fastcall FUN_10f57080(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10f570a0; body size 19 bytes.
#line 1 "ENTRY_10f570a0"

void __fastcall FUN_10f570a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10f58300; body size 38 bytes.
#line 1 "ENTRY_10f58300"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f58300(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f58330; body size 38 bytes.
#line 1 "ENTRY_10f58330"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f58330(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f58360; body size 38 bytes.
#line 1 "ENTRY_10f58360"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f58360(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f58390; body size 38 bytes.
#line 1 "ENTRY_10f58390"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f58390(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f583c0; body size 45 bytes.
#line 1 "ENTRY_10f583c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f583c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f58400; body size 45 bytes.
#line 1 "ENTRY_10f58400"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f58400(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f58440; body size 45 bytes.
#line 1 "ENTRY_10f58440"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f58440(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f58480; body size 45 bytes.
#line 1 "ENTRY_10f58480"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f58480(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f584c0; body size 32 bytes.
#line 1 "ENTRY_10f584c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f584c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f570c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f584f0; body size 32 bytes.
#line 1 "ENTRY_10f584f0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f584f0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f57210();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f58520; body size 32 bytes.
#line 1 "ENTRY_10f58520"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f58520(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f57360();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f58550; body size 32 bytes.
#line 1 "ENTRY_10f58550"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f58550(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f574b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f58580; body size 58 bytes.
#line 1 "ENTRY_10f58580"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f58580(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpHTCGetIRRepeaterStateAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCGetIRRepeaterStateAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCGetIRRepeaterStateAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7e0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f585d0; body size 58 bytes.
#line 1 "ENTRY_10f585d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f585d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpRCGetRoomCalibrationStatusAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpRCGetRoomCalibrationStatusAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpRCGetRoomCalibrationStatusAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f58620; body size 33 bytes.
#line 1 "ENTRY_10f58620"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f58620(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f58650; body size 33 bytes.
#line 1 "ENTRY_10f58650"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f58650(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f58680; body size 33 bytes.
#line 1 "ENTRY_10f58680"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f58680(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f586b0; body size 33 bytes.
#line 1 "ENTRY_10f586b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f586b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f586e0; body size 45 bytes.
#line 1 "ENTRY_10f586e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f586e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpHTControlGetIRRepeaterState);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpHTControlGetIRRepeaterState);
  thunk_FUN_10f570c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f58720; body size 45 bytes.
#line 1 "ENTRY_10f58720"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f58720(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpHTControlSetIRRepeaterState);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpHTControlSetIRRepeaterState);
  thunk_FUN_10f57210();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f58760; body size 45 bytes.
#line 1 "ENTRY_10f58760"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f58760(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpHTControlSetLEDFeedbackState);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpHTControlSetLEDFeedbackState);
  thunk_FUN_10f57360();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f587a0; body size 45 bytes.
#line 1 "ENTRY_10f587a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f587a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRenderingControlGetRoomCalibrationStatus);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpRenderingControlGetRoomCalibrationStatus);
  thunk_FUN_10f574b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f5e820; body size 25 bytes.
#line 1 "ENTRY_10f5e820"

__declspec(naked) void FUN_10f5e820(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10f5e833
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10f614e0; body size 21 bytes.
#line 1 "ENTRY_10f614e0"

SCStr * __stdcall FUN_10f614e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f61500; body size 21 bytes.
#line 1 "ENTRY_10f61500"

SCStr * __stdcall FUN_10f61500(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f61520; body size 21 bytes.
#line 1 "ENTRY_10f61520"

SCStr * __stdcall FUN_10f61520(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f61540; body size 21 bytes.
#line 1 "ENTRY_10f61540"

SCStr * __stdcall FUN_10f61540(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f61670; body size 25 bytes.
#line 1 "ENTRY_10f61670"

__declspec(naked) void FUN_10f61670(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10f61683
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10f637f0; body size 39 bytes.
#line 1 "ENTRY_10f637f0"

__declspec(naked) void FUN_10f637f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 9
  __asm lea eax, [esi + 0xd7d0]
  __asm push eax
  __asm push offset LAB_11951e50
  __asm lea ecx, [esi + 0xc108]
  __asm call LAB_1002faea
  __asm mov ecx, eax
  __asm call LAB_1007eb95
  __asm mov eax, esi
  __asm pop esi
  __asm ret
}



// Reference entry 10f63e00; body size 39 bytes.
#line 1 "ENTRY_10f63e00"

__declspec(naked) void FUN_10f63e00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm push offset LAB_1187de80
  __asm call LAB_1008ca83
  __asm test al, al
  __asm je 0x10f63e23
  __asm mov al, byte ptr [esp + 0xc]
  __asm mov ecx, esi
  __asm mov byte ptr [esi + 0x1c], al
  __asm call LAB_1003d97e
  __asm pop esi
  __asm ret 8
}



// Reference entry 10f64fc0; body size 41 bytes.
#line 1 "ENTRY_10f64fc0"

__declspec(naked) void FUN_10f64fc0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10f64fe3
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



// Reference entry 10f65000; body size 41 bytes.
#line 1 "ENTRY_10f65000"

__declspec(naked) void FUN_10f65000(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10f65023
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



// Reference entry 10f65040; body size 41 bytes.
#line 1 "ENTRY_10f65040"

__declspec(naked) void FUN_10f65040(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10f65063
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



// Reference entry 10f65080; body size 41 bytes.
#line 1 "ENTRY_10f65080"

__declspec(naked) void FUN_10f65080(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10f650a3
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



// Reference entry 10f650c0; body size 24 bytes.
#line 1 "ENTRY_10f650c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f650c0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f65b20; body size 19 bytes.
#line 1 "ENTRY_10f65b20"

void __fastcall FUN_10f65b20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10f65ed0; body size 33 bytes.
#line 1 "ENTRY_10f65ed0"

__declspec(naked) void FUN_10f65ed0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10f65eef
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



// Reference entry 10f65f00; body size 33 bytes.
#line 1 "ENTRY_10f65f00"

__declspec(naked) void FUN_10f65f00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10f65f1f
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



// Reference entry 10f661c0; body size 37 bytes.
#line 1 "ENTRY_10f661c0"

__declspec(naked) void FUN_10f661c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10f661df
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f66320; body size 38 bytes.
#line 1 "ENTRY_10f66320"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f66320(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f66350; body size 45 bytes.
#line 1 "ENTRY_10f66350"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f66350(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f66390; body size 32 bytes.
#line 1 "ENTRY_10f66390"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f66390(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f65b40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f663c0; body size 32 bytes.
#line 1 "ENTRY_10f663c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f663c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f65c90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f663f0; body size 45 bytes.
#line 1 "ENTRY_10f663f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f663f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f66430; body size 58 bytes.
#line 1 "ENTRY_10f66430"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f66430(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDGetAlbumArtistDisplayOptionAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDGetAlbumArtistDisplayOptionAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDGetAlbumArtistDisplayOptionAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdbd0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f66480; body size 33 bytes.
#line 1 "ENTRY_10f66480"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f66480(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f664b0; body size 45 bytes.
#line 1 "ENTRY_10f664b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f664b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpContentDirectoryGetAlbumArtistDisplayOption);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpContentDirectoryGetAlbumArtistDisplayOption);
  thunk_FUN_10f65b40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f66710; body size 33 bytes.
#line 1 "ENTRY_10f66710"

__declspec(naked) void FUN_10f66710(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10f6672f
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



// Reference entry 10f675c0; body size 21 bytes.
#line 1 "ENTRY_10f675c0"

SCStr * __stdcall FUN_10f675c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f67600; body size 26 bytes.
#line 1 "ENTRY_10f67600"

__declspec(naked) void FUN_10f67600(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x84]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 10f67790; body size 18 bytes.
#line 1 "ENTRY_10f67790"

void __fastcall FUN_10f67790(int param_1)

{
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
    ((SCVtbl_5_1*)(*(int **)(param_1 + 0x20)))->v((int)(*(undefined4 *)(param_1 + 0x28)));
  }
  return;
}


// Reference entry 10f67a70; body size 23 bytes.
#line 1 "ENTRY_10f67a70"

__declspec(naked) void FUN_10f67a70(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1003adff
  __asm mov ecx, esi
  __asm call LAB_100688db
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_10068bd3
}



// Reference entry 10f685d0; body size 42 bytes.
#line 1 "ENTRY_10f685d0"

__declspec(naked) void FUN_10f685d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x400
  __asm lea eax, [esi + 0xd7d0]
  __asm push eax
  __asm push offset LAB_11920d5c
  __asm lea ecx, [esi + 0xc108]
  __asm call LAB_1002faea
  __asm mov ecx, eax
  __asm call LAB_1007eb95
  __asm mov eax, esi
  __asm pop esi
  __asm ret
}



// Reference entry 10f68ab0; body size 29 bytes.
#line 1 "ENTRY_10f68ab0"

__declspec(naked) void FUN_10f68ab0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm sub esp, 8
  __asm _emit 0xf2 __asm _emit 0x0f __asm _emit 0x10 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0xf2 __asm _emit 0x0f __asm _emit 0x11 __asm _emit 0x04 __asm _emit 0x24
  __asm push dword ptr [esp + 0xc]
  __asm call dword ptr [eax + 0x34]
  __asm ret 0xc
}



// Reference entry 10f69260; body size 41 bytes.
#line 1 "ENTRY_10f69260"

__declspec(naked) void FUN_10f69260(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10f69283
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



// Reference entry 10f692a0; body size 41 bytes.
#line 1 "ENTRY_10f692a0"

__declspec(naked) void FUN_10f692a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10f692c3
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



// Reference entry 10f6b350; body size 33 bytes.
#line 1 "ENTRY_10f6b350"

void __thiscall Recovered_Bulk::m_FUN_10f6b350(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10f6b380((int)(param_2),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10f6b450; body size 49 bytes.
#line 1 "ENTRY_10f6b450"

__declspec(naked) void FUN_10f6b450(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x18]
  __asm lea eax, [esp + 8]
  __asm push edi
  __asm push eax
  __asm mov esi, ecx
  __asm call LAB_10038fb9
  __asm mov eax, dword ptr [esp + 0x10]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10f6b477
  __asm mov ecx, dword ptr [edi]
  __asm cmp ecx, dword ptr [eax + 0x10]
  __asm jae 0x10f6b479
  __asm mov eax, dword ptr [esi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}



// Reference entry 10f6b980; body size 48 bytes.
#line 1 "ENTRY_10f6b980"

__declspec(naked) void FUN_10f6b980(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x1c
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
  __asm ret 4
}



// Reference entry 10f6bc80; body size 19 bytes.
#line 1 "ENTRY_10f6bc80"

void __fastcall FUN_10f6bc80(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10f6bca0; body size 28 bytes.
#line 1 "ENTRY_10f6bca0"

void __fastcall FUN_10f6bca0(int *param_1)

{
  thunk_FUN_10f6b380((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10f6bd90; body size 28 bytes.
#line 1 "ENTRY_10f6bd90"

void __fastcall FUN_10f6bd90(int *param_1)

{
  thunk_FUN_10f6b380((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10f6c340; body size 32 bytes.
#line 1 "ENTRY_10f6c340"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f6c340(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f6be30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x44);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f6c3a0; body size 25 bytes.
#line 1 "ENTRY_10f6c3a0"

__declspec(naked) void FUN_10f6c3a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x1c
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10f6cba0; body size 31 bytes.
#line 1 "ENTRY_10f6cba0"

int * FUN_10f6cba0(int *param_1)

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


// Reference entry 10f6d220; body size 33 bytes.
#line 1 "ENTRY_10f6d220"

void __fastcall FUN_10f6d220(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10f6b380((int)(param_1),(int)(*(undefined4 *)(iVar1 + 4)));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10f6fcf0; body size 41 bytes.
#line 1 "ENTRY_10f6fcf0"

__declspec(naked) void FUN_10f6fcf0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10f6fd13
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



// Reference entry 10f6fd60; body size 41 bytes.
#line 1 "ENTRY_10f6fd60"

__declspec(naked) void FUN_10f6fd60(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10f6fd83
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



// Reference entry 10f70bd0; body size 33 bytes.
#line 1 "ENTRY_10f70bd0"

__declspec(naked) void FUN_10f70bd0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10f70bef
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



// Reference entry 10f70c00; body size 33 bytes.
#line 1 "ENTRY_10f70c00"

__declspec(naked) void FUN_10f70c00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10f70c1f
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



// Reference entry 10f70cd0; body size 33 bytes.
#line 1 "ENTRY_10f70cd0"

__declspec(naked) void FUN_10f70cd0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10f70cef
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



// Reference entry 10f70d00; body size 33 bytes.
#line 1 "ENTRY_10f70d00"

__declspec(naked) void FUN_10f70d00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10f70d1f
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



// Reference entry 10f71090; body size 18 bytes.
#line 1 "ENTRY_10f71090"

void __fastcall FUN_10f71090(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10f710b0; body size 18 bytes.
#line 1 "ENTRY_10f710b0"

void __fastcall FUN_10f710b0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10f710d0; body size 18 bytes.
#line 1 "ENTRY_10f710d0"

void __fastcall FUN_10f710d0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 10f71110; body size 37 bytes.
#line 1 "ENTRY_10f71110"

__declspec(naked) void FUN_10f71110(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10f7112f
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f71290; body size 38 bytes.
#line 1 "ENTRY_10f71290"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f71290(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f712c0; body size 32 bytes.
#line 1 "ENTRY_10f712c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f712c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f708b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f712f0; body size 32 bytes.
#line 1 "ENTRY_10f712f0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f712f0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f70a00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f713b0; body size 60 bytes.
#line 1 "ENTRY_10f713b0"

__declspec(naked) void FUN_10f713b0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm je 0x10f713d3
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test byte ptr [esp + 0xc], 1
  __asm je 0x10f713e5
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f714b0; body size 35 bytes.
#line 1 "ENTRY_10f714b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f714b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f70dc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6140);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f714e0; body size 45 bytes.
#line 1 "ENTRY_10f714e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f714e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpMuseGetUserSettings);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpMuseGetUserSettings);
  thunk_FUN_10f708b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f71520; body size 35 bytes.
#line 1 "ENTRY_10f71520"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f71520(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f70f70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa8);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f717d0; body size 58 bytes.
#line 1 "ENTRY_10f717d0"

__declspec(naked) void FUN_10f717d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm push edi
  __asm lea edi, [esi + 8]
  __asm test ecx, ecx
  __asm je 0x10f717f3
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp byte ptr [esp + 0xc], 0
  __asm je 0x10f71805
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f71980; body size 51 bytes.
#line 1 "ENTRY_10f71980"

__declspec(naked) void FUN_10f71980(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [ecx + 0x2c]
  __asm movzx eax, word ptr [eax]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 4], eax
  __asm test ecx, ecx
  __asm je 0x10f719ae
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
  __asm call LAB_1148a05a
}



// Reference entry 10f71d20; body size 33 bytes.
#line 1 "ENTRY_10f71d20"

__declspec(naked) void FUN_10f71d20(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10f71d3f
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



// Reference entry 10f71d50; body size 33 bytes.
#line 1 "ENTRY_10f71d50"

__declspec(naked) void FUN_10f71d50(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10f71d6f
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



// Reference entry 10f724a0; body size 17 bytes.
#line 1 "ENTRY_10f724a0"

__declspec(naked) void FUN_10f724a0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6118]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}



// Reference entry 10f72640; body size 21 bytes.
#line 1 "ENTRY_10f72640"

SCStr * __stdcall FUN_10f72640(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f72660; body size 23 bytes.
#line 1 "ENTRY_10f72660"

SCStr * __thiscall Recovered_Bulk::m_FUN_10f72660(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x30));
  return (SCStr *)(param_2);
}


// Reference entry 10f734d0; body size 33 bytes.
#line 1 "ENTRY_10f734d0"

__declspec(naked) void FUN_10f734d0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, dword ptr [ecx + 0x90]
  __asm jne 0x10f734ee
  __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x90 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add ecx, -0x10
  __asm call LAB_10042fa0
  __asm ret 4
}



// Reference entry 10f74070; body size 26 bytes.
#line 1 "ENTRY_10f74070"

__declspec(naked) void FUN_10f74070(void)

{
  __asm mov ecx, dword ptr [ecx + 0x10]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x84]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 10f74150; body size 29 bytes.
#line 1 "ENTRY_10f74150"

__declspec(naked) void FUN_10f74150(void)

{
  __asm mov ecx, dword ptr [ecx + 0x10]
  __asm sub esp, 8
  __asm _emit 0xf2 __asm _emit 0x0f __asm _emit 0x10 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0xf2 __asm _emit 0x0f __asm _emit 0x11 __asm _emit 0x04 __asm _emit 0x24
  __asm push dword ptr [esp + 0xc]
  __asm call dword ptr [eax + 0x34]
  __asm ret 0xc
}



// Reference entry 10f744a0; body size 18 bytes.
#line 1 "ENTRY_10f744a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f744a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBitmapLoader);
  return (undefined4 *)(param_1);
}


// Reference entry 10f74de0; body size 52 bytes.
#line 1 "ENTRY_10f74de0"

__declspec(naked) void FUN_10f74de0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0xc084]
  __asm mov dword ptr [esi], LAB_11952f10
  __asm mov dword ptr [esi + 8], LAB_11952f40
  __asm mov dword ptr [esi + 0x1c], LAB_11952f50
  __asm mov dword ptr [esi + 0xc0bc], LAB_11952e04
  __asm call LAB_1007bf3f
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_1007cd81
}



// Reference entry 10f74f50; body size 33 bytes.
#line 1 "ENTRY_10f74f50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f74f50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RServiceAuthHeaderBuilderFactory);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f75050; body size 33 bytes.
#line 1 "ENTRY_10f75050"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f75050(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBitmapLoader);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f75430; body size 33 bytes.
#line 1 "ENTRY_10f75430"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f75430(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RServiceAuthHeaderBuilderFactory);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f756a0; body size 44 bytes.
#line 1 "ENTRY_10f756a0"

__declspec(naked) void FUN_10f756a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 8]
  __asm test ecx, ecx
  __asm je 0x10f756ca
  __asm call LAB_1001c611
  __asm mov ecx, dword ptr [esi + 8]
  __asm test ecx, ecx
  __asm je 0x10f756bc
  __asm mov eax, dword ptr [ecx]
  __asm push 1
  __asm call dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10f756e0; body size 44 bytes.
#line 1 "ENTRY_10f756e0"

__declspec(naked) void FUN_10f756e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x10]
  __asm test ecx, ecx
  __asm je 0x10f7570a
  __asm call LAB_1001c611
  __asm mov ecx, dword ptr [esi + 0x10]
  __asm test ecx, ecx
  __asm je 0x10f756fc
  __asm mov eax, dword ptr [ecx]
  __asm push 1
  __asm call dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10f76d30; body size 51 bytes.
#line 1 "ENTRY_10f76d30"

__declspec(naked) void FUN_10f76d30(void)

{
  __asm push ecx
  __asm push esi
  __asm push offset LAB_119306fc
  __asm mov esi, ecx
  __asm push 0
  __asm mov dword ptr [esp + 0xc], esi
  __asm call LAB_1003a904
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [esi + 0x18], eax
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov dword ptr [esi + 0x1c], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi], LAB_11953184
  __asm mov byte ptr [esi + 0x14], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}



// Reference entry 10f76f60; body size 37 bytes.
#line 1 "ENTRY_10f76f60"

__declspec(naked) void FUN_10f76f60(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm call LAB_10038357
  __asm mov ecx, dword ptr [esi + 0x18]
  __asm test eax, eax
  __asm setne byte ptr [esp + 0xc]
  __asm push dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm xor eax, eax
  __asm pop esi
  __asm ret 0xc
}



// Reference entry 10f775c0; body size 41 bytes.
#line 1 "ENTRY_10f775c0"

__declspec(naked) void FUN_10f775c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10f775e3
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



// Reference entry 10f77600; body size 24 bytes.
#line 1 "ENTRY_10f77600"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f77600(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f77a60; body size 19 bytes.
#line 1 "ENTRY_10f77a60"

void __fastcall FUN_10f77a60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10f77c40; body size 26 bytes.
#line 1 "ENTRY_10f77c40"

void __fastcall FUN_10f77c40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10f77e00; body size 45 bytes.
#line 1 "ENTRY_10f77e00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f77e00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f77e40; body size 45 bytes.
#line 1 "ENTRY_10f77e40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f77e40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f77e80; body size 32 bytes.
#line 1 "ENTRY_10f77e80"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f77e80(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f77a80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f77eb0; body size 52 bytes.
#line 1 "ENTRY_10f77eb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f77eb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f77f00; body size 33 bytes.
#line 1 "ENTRY_10f77f00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f77f00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAlarmProgramDataBrowseCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f77f30; body size 58 bytes.
#line 1 "ENTRY_10f77f30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f77f30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACCreateAlarmAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACCreateAlarmAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACCreateAlarmAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f77f80; body size 58 bytes.
#line 1 "ENTRY_10f77f80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f77f80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACUpdateAlarmAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACUpdateAlarmAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACUpdateAlarmAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f78090; body size 33 bytes.
#line 1 "ENTRY_10f78090"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f78090(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f780c0; body size 33 bytes.
#line 1 "ENTRY_10f780c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f780c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f780f0; body size 45 bytes.
#line 1 "ENTRY_10f780f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f780f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAlarmSave);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAlarmSave);
  thunk_FUN_10f77a80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f782a0; body size 43 bytes.
#line 1 "ENTRY_10f782a0"

__declspec(naked) void FUN_10f782a0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_100354f4
  __asm mov esi, eax
  __asm add esp, 4
  __asm cmp esi, 2
  __asm jne 0x10f782c8
  __asm mov ecx, dword ptr [edi + 8]
  __asm add ecx, 4
  __asm push ecx
  __asm call LAB_10066e8c
  __asm add esp, 4
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10f782e0; body size 58 bytes.
#line 1 "ENTRY_10f782e0"

__declspec(naked) void FUN_10f782e0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push offset LAB_119538ac
  __asm push 2
  __asm push offset LAB_11953884
  __asm mov byte ptr [esi + 4], 1
  __asm call LAB_100238df
  __asm add esp, 0xc
  __asm lea eax, [esi - 0xc]
  __asm push 0
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11878394
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 0xc]
  __asm call LAB_10013543
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10f790f0; body size 18 bytes.
#line 1 "ENTRY_10f790f0"

undefined4 __fastcall FUN_10f790f0(int param_1)

{
  if (*(int *)(param_1 + 0x48) != 0) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x48) + 0xd7d0));
  }
  return (undefined4)(*(undefined4 *)(param_1 + 0x4c));
}


// Reference entry 10f79110; body size 53 bytes.
#line 1 "ENTRY_10f79110"

__declspec(naked) void FUN_10f79110(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm push esi
  __asm test ecx, ecx
  __asm je 0x10f7912f
  __asm call LAB_10091f06
  __asm mov ecx, dword ptr [esp + 8]
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 8]
  __asm pop esi
  __asm ret 4
  __asm mov ecx, dword ptr [esp + 8]
  __asm push offset LAB_1186d2ee
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 8]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f79860; body size 50 bytes.
#line 1 "ENTRY_10f79860"

__declspec(naked) void FUN_10f79860(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm push esi
  __asm test ecx, ecx
  __asm je 0x10f7987f
  __asm call LAB_1001b87e
  __asm mov ecx, dword ptr [esp + 8]
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 8]
  __asm pop esi
  __asm ret 4
  __asm mov ecx, dword ptr [esp + 8]
  __asm push 0
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 8]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f79a70; body size 18 bytes.
#line 1 "ENTRY_10f79a70"

__declspec(naked) void FUN_10f79a70(void)

{
  __asm mov edx, dword ptr [ecx]
  __asm push 0
  __asm push dword ptr [esp + 8]
  __asm call dword ptr [edx + 0x68]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10f79a90; body size 21 bytes.
#line 1 "ENTRY_10f79a90"

SCStr * __stdcall FUN_10f79a90(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f79c00; body size 25 bytes.
#line 1 "ENTRY_10f79c00"

__declspec(naked) void FUN_10f79c00(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm jne 0x10f79c0a
  __asm xor al, al
  __asm ret
  __asm call LAB_1000d8d7
  __asm push eax
  __asm call LAB_10001f05
  __asm add esp, 4
  __asm ret
}



// Reference entry 10f79c20; body size 38 bytes.
#line 1 "ENTRY_10f79c20"

__declspec(naked) void FUN_10f79c20(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm je 0x10f79c43
  __asm push 7
  __asm push offset LAB_11953890
  __asm call LAB_1001b87e
  __asm push eax
  __asm call dword ptr [LAB_122fca10]
  __asm add esp, 0xc
  __asm test eax, eax
  __asm sete al
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 10f79d40; body size 19 bytes.
#line 1 "ENTRY_10f79d40"

__declspec(naked) void FUN_10f79d40(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm je 0x10f79d50
  __asm call LAB_1007649f
  __asm movzx eax, ax
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 10f7ad60; body size 19 bytes.
#line 1 "ENTRY_10f7ad60"

__declspec(naked) void FUN_10f7ad60(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm jne LAB_1008e28e
  __asm ret 4
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}



// Reference entry 10f7ada0; body size 53 bytes.
#line 1 "ENTRY_10f7ada0"

__declspec(naked) void FUN_10f7ada0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [ecx + 8]
  __asm test esi, esi
  __asm je 0x10f7add1
  __asm mov eax, dword ptr [esp + 8]
  __asm test eax, eax
  __asm je 0x10f7add1
  __asm lea ecx, [esp + 8]
  __asm mov word ptr [esp + 8], 0
  __asm push ecx
  __asm push eax
  __asm call LAB_1001fcfd
  __asm add esp, 8
  __asm lea eax, [esp + 8]
  __asm mov ecx, esi
  __asm push eax
  __asm call LAB_100393e2
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f7adf0; body size 37 bytes.
#line 1 "ENTRY_10f7adf0"

__declspec(naked) void FUN_10f7adf0(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm je 0x10f7ae12
  __asm cmp byte ptr [esp + 4], 0
  __asm mov eax, offset LAB_11953890
  __asm mov edx, offset LAB_1195389c
  __asm cmove eax, edx
  __asm mov dword ptr [esp + 4], eax
  __asm jmp LAB_1000d701
  __asm ret 4
}



// Reference entry 10f7af60; body size 19 bytes.
#line 1 "ENTRY_10f7af60"

__declspec(naked) void FUN_10f7af60(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm jne LAB_10056389
  __asm ret 4
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}



// Reference entry 10f7b0c0; body size 43 bytes.
#line 1 "ENTRY_10f7b0c0"

__declspec(naked) void FUN_10f7b0c0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm test esi, esi
  __asm je 0x10f7b0e7
  __asm push esi
  __asm add ecx, 0x18
  __asm call LAB_100373d5
  __asm push esi
  __asm push offset LAB_11890d64
  __asm push 3
  __asm push offset LAB_11953884
  __asm call LAB_100238df
  __asm add esp, 0x10
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f7b130; body size 44 bytes.
#line 1 "ENTRY_10f7b130"

__declspec(naked) void FUN_10f7b130(void)

{
  __asm push ecx
  __asm push esi
  __asm push offset LAB_1195390c
  __asm mov esi, ecx
  __asm push 0
  __asm mov dword ptr [esp + 0xc], esi
  __asm call LAB_1003a904
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [esi + 0x18], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi], LAB_119538e0
  __asm mov byte ptr [esi + 0x14], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10f7b5a0; body size 32 bytes.
#line 1 "ENTRY_10f7b5a0"

__declspec(naked) void FUN_10f7b5a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp byte ptr [esi + 0x14], 0
  __asm jne 0x10f7b5be
  __asm call LAB_1002d78b
  __asm test eax, eax
  __asm je 0x10f7b5ba
  __asm push esi
  __asm mov ecx, eax
  __asm call LAB_1005175d
  __asm mov byte ptr [esi + 0x14], 1
  __asm pop esi
  __asm ret
}



// Reference entry 10f7b5d0; body size 32 bytes.
#line 1 "ENTRY_10f7b5d0"

__declspec(naked) void FUN_10f7b5d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp byte ptr [esi + 0x14], 0
  __asm je 0x10f7b5ee
  __asm call LAB_1002d78b
  __asm test eax, eax
  __asm je 0x10f7b5ea
  __asm push esi
  __asm mov ecx, eax
  __asm call LAB_1008a3b4
  __asm mov byte ptr [esi + 0x14], 0
  __asm pop esi
  __asm ret
}



// Reference entry 10f7b600; body size 51 bytes.
#line 1 "ENTRY_10f7b600"

__declspec(naked) void FUN_10f7b600(void)

{
  __asm push ecx
  __asm push esi
  __asm push offset LAB_11953994
  __asm mov esi, ecx
  __asm push 0
  __asm mov dword ptr [esp + 0xc], esi
  __asm call LAB_1003a904
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [esi + 0x18], eax
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov dword ptr [esi + 0x1c], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi], LAB_11953968
  __asm mov byte ptr [esi + 0x14], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}



// Reference entry 10f7b900; body size 56 bytes.
#line 1 "ENTRY_10f7b900"

__declspec(naked) void FUN_10f7b900(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp byte ptr [esi + 0x14], 0
  __asm jne 0x10f7b936
  __asm cmp dword ptr [esi + 0x18], 0
  __asm je 0x10f7b936
  __asm cmp dword ptr [esi + 0x1c], 0
  __asm je 0x10f7b932
  __asm push offset LAB_119539b4
  __asm push 2
  __asm push offset LAB_119539d8
  __asm call LAB_100238df
  __asm mov ecx, dword ptr [esi + 0x1c]
  __asm add esp, 0xc
  __asm push esi
  __asm call LAB_10080639
  __asm mov byte ptr [esi + 0x14], 1
  __asm pop esi
  __asm ret
}



// Reference entry 10f7b950; body size 56 bytes.
#line 1 "ENTRY_10f7b950"

__declspec(naked) void FUN_10f7b950(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp byte ptr [esi + 0x14], 0
  __asm je 0x10f7b986
  __asm cmp dword ptr [esi + 0x18], 0
  __asm je 0x10f7b986
  __asm cmp dword ptr [esi + 0x1c], 0
  __asm je 0x10f7b982
  __asm push offset LAB_119539f0
  __asm push 2
  __asm push offset LAB_119539d8
  __asm call LAB_100238df
  __asm mov ecx, dword ptr [esi + 0x1c]
  __asm add esp, 0xc
  __asm push esi
  __asm call LAB_100957aa
  __asm mov byte ptr [esi + 0x14], 0
  __asm pop esi
  __asm ret
}



// Reference entry 10f7bd90; body size 33 bytes.
#line 1 "ENTRY_10f7bd90"

void __thiscall Recovered_Bulk::m_FUN_10f7bd90(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10f7bdc0((int)(param_2),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10f7c290; body size 39 bytes.
#line 1 "ENTRY_10f7c290"

__declspec(naked) void FUN_10f7c290(void)

{
  __asm sub esp, 8
  __asm push dword ptr [esp + 0x10]
  __asm lea eax, [esp + 4]
  __asm push eax
  __asm call LAB_1008bf7f
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov ecx, dword ptr [esp]
  __asm mov dword ptr [eax], ecx
  __asm mov cl, byte ptr [esp + 4]
  __asm mov byte ptr [eax + 4], cl
  __asm add esp, 8
  __asm ret 8
}



// Reference entry 10f7c6c0; body size 48 bytes.
#line 1 "ENTRY_10f7c6c0"

__declspec(naked) void FUN_10f7c6c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x18
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
  __asm ret 4
}



// Reference entry 10f7db60; body size 19 bytes.
#line 1 "ENTRY_10f7db60"

void __fastcall FUN_10f7db60(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10f7db80; body size 28 bytes.
#line 1 "ENTRY_10f7db80"

void __fastcall FUN_10f7db80(int *param_1)

{
  thunk_FUN_10f7bdc0((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10f7dc50; body size 19 bytes.
#line 1 "ENTRY_10f7dc50"

void __fastcall FUN_10f7dc50(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10f7dc70; body size 28 bytes.
#line 1 "ENTRY_10f7dc70"

void __fastcall FUN_10f7dc70(int *param_1)

{
  thunk_FUN_10f7bdc0((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10f7e600; body size 38 bytes.
#line 1 "ENTRY_10f7e600"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f7e600(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f7e630; body size 38 bytes.
#line 1 "ENTRY_10f7e630"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f7e630(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f7e660; body size 32 bytes.
#line 1 "ENTRY_10f7e660"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f7e660(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f7d8c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f7e690; body size 32 bytes.
#line 1 "ENTRY_10f7e690"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f7e690(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f7da10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f7ea70; body size 32 bytes.
#line 1 "ENTRY_10f7ea70"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f7ea70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f7dfd0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x44);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f7eaa0; body size 35 bytes.
#line 1 "ENTRY_10f7eaa0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f7eaa0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f7e0c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6134);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f7ead0; body size 45 bytes.
#line 1 "ENTRY_10f7ead0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f7ead0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpConnectedPartnerRemove);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpConnectedPartnerRemove);
  thunk_FUN_10f7d8c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f7ebf0; body size 25 bytes.
#line 1 "ENTRY_10f7ebf0"

__declspec(naked) void FUN_10f7ebf0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x18
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10f7f5c0; body size 16 bytes.
#line 1 "ENTRY_10f7f5c0"

void __fastcall FUN_10f7f5c0(int *param_1)

{
  thunk_FUN_10f7f220();
                    
                    
  ((SCVtbl_10_0*)(param_1))->v();
  return;
}


// Reference entry 10f7fa20; body size 21 bytes.
#line 1 "ENTRY_10f7fa20"

SCStr * __stdcall FUN_10f7fa20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f7fa40; body size 21 bytes.
#line 1 "ENTRY_10f7fa40"

SCStr * __stdcall FUN_10f7fa40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f822f0; body size 37 bytes.
#line 1 "ENTRY_10f822f0"

__declspec(naked) void FUN_10f822f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x10
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret
}



// Reference entry 10f829e0; body size 19 bytes.
#line 1 "ENTRY_10f829e0"

void __fastcall FUN_10f829e0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 10f82a00; body size 33 bytes.
#line 1 "ENTRY_10f82a00"

__declspec(naked) void FUN_10f82a00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10f82a1f
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



// Reference entry 10f82ad0; body size 33 bytes.
#line 1 "ENTRY_10f82ad0"

__declspec(naked) void FUN_10f82ad0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10f82aef
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



// Reference entry 10f82c80; body size 22 bytes.
#line 1 "ENTRY_10f82c80"

__declspec(naked) void FUN_10f82c80(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x688]
  __asm call LAB_100820b5
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_10012049
}



// Reference entry 10f82ca0; body size 22 bytes.
#line 1 "ENTRY_10f82ca0"

__declspec(naked) void FUN_10f82ca0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x688]
  __asm call LAB_100820b5
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_1004a188
}



// Reference entry 10f82cc0; body size 22 bytes.
#line 1 "ENTRY_10f82cc0"

__declspec(naked) void FUN_10f82cc0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x688]
  __asm call LAB_100820b5
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_1003801e
}



// Reference entry 10f82cf0; body size 22 bytes.
#line 1 "ENTRY_10f82cf0"

__declspec(naked) void FUN_10f82cf0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x688]
  __asm call LAB_100820b5
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_100656e5
}



// Reference entry 10f82d20; body size 22 bytes.
#line 1 "ENTRY_10f82d20"

__declspec(naked) void FUN_10f82d20(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x688]
  __asm call LAB_100820b5
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_1000579f
}



// Reference entry 10f82d40; body size 22 bytes.
#line 1 "ENTRY_10f82d40"

__declspec(naked) void FUN_10f82d40(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x688]
  __asm call LAB_100820b5
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_10080ca6
}



// Reference entry 10f82d60; body size 22 bytes.
#line 1 "ENTRY_10f82d60"

__declspec(naked) void FUN_10f82d60(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x688]
  __asm call LAB_100820b5
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_100854c7
}



// Reference entry 10f82e10; body size 22 bytes.
#line 1 "ENTRY_10f82e10"

__declspec(naked) void FUN_10f82e10(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x688]
  __asm call LAB_100820b5
  __asm mov dword ptr [esi], LAB_11954068
  __asm pop esi
  __asm ret
}



// Reference entry 10f82e40; body size 22 bytes.
#line 1 "ENTRY_10f82e40"

__declspec(naked) void FUN_10f82e40(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x688]
  __asm call LAB_100820b5
  __asm mov dword ptr [esi], LAB_11954054
  __asm pop esi
  __asm ret
}



// Reference entry 10f82e90; body size 22 bytes.
#line 1 "ENTRY_10f82e90"

__declspec(naked) void FUN_10f82e90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x688]
  __asm call LAB_100820b5
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_10084775
}



// Reference entry 10f82eb0; body size 22 bytes.
#line 1 "ENTRY_10f82eb0"

__declspec(naked) void FUN_10f82eb0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x688]
  __asm call LAB_100820b5
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_10049a03
}



// Reference entry 10f83140; body size 37 bytes.
#line 1 "ENTRY_10f83140"

__declspec(naked) void FUN_10f83140(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10f8315f
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f832d0; body size 22 bytes.
#line 1 "ENTRY_10f832d0"

__declspec(naked) void FUN_10f832d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x688]
  __asm call LAB_100820b5
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_10012049
}



// Reference entry 10f832f0; body size 22 bytes.
#line 1 "ENTRY_10f832f0"

__declspec(naked) void FUN_10f832f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x688]
  __asm call LAB_100820b5
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_1004a188
}



// Reference entry 10f83310; body size 22 bytes.
#line 1 "ENTRY_10f83310"

__declspec(naked) void FUN_10f83310(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x688]
  __asm call LAB_100820b5
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_1003801e
}



// Reference entry 10f83340; body size 22 bytes.
#line 1 "ENTRY_10f83340"

__declspec(naked) void FUN_10f83340(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x688]
  __asm call LAB_100820b5
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_100656e5
}



// Reference entry 10f83360; body size 22 bytes.
#line 1 "ENTRY_10f83360"

__declspec(naked) void FUN_10f83360(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x688]
  __asm call LAB_100820b5
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_1000579f
}



// Reference entry 10f83380; body size 22 bytes.
#line 1 "ENTRY_10f83380"

__declspec(naked) void FUN_10f83380(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x688]
  __asm call LAB_100820b5
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_10080ca6
}



// Reference entry 10f833a0; body size 22 bytes.
#line 1 "ENTRY_10f833a0"

__declspec(naked) void FUN_10f833a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x688]
  __asm call LAB_100820b5
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_100854c7
}



// Reference entry 10f833c0; body size 22 bytes.
#line 1 "ENTRY_10f833c0"

__declspec(naked) void FUN_10f833c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x688]
  __asm call LAB_100820b5
  __asm mov dword ptr [esi], LAB_11954068
  __asm pop esi
  __asm ret
}



// Reference entry 10f833e0; body size 22 bytes.
#line 1 "ENTRY_10f833e0"

__declspec(naked) void FUN_10f833e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x688]
  __asm call LAB_100820b5
  __asm mov dword ptr [esi], LAB_11954054
  __asm pop esi
  __asm ret
}



// Reference entry 10f83410; body size 22 bytes.
#line 1 "ENTRY_10f83410"

__declspec(naked) void FUN_10f83410(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x688]
  __asm call LAB_100820b5
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_10084775
}



// Reference entry 10f83430; body size 22 bytes.
#line 1 "ENTRY_10f83430"

__declspec(naked) void FUN_10f83430(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x688]
  __asm call LAB_100820b5
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_10049a03
}



// Reference entry 10f834f0; body size 38 bytes.
#line 1 "ENTRY_10f834f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f834f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f83520; body size 32 bytes.
#line 1 "ENTRY_10f83520"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f83520(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f82750();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f83550; body size 35 bytes.
#line 1 "ENTRY_10f83550"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f83550(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f82840();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x7098);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f83630; body size 33 bytes.
#line 1 "ENTRY_10f83630"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f83630(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTControl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f83660; body size 33 bytes.
#line 1 "ENTRY_10f83660"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f83660(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMusicServicesDirectory);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f83690; body size 35 bytes.
#line 1 "ENTRY_10f83690"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f83690(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f82840();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x7098);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f83900; body size 25 bytes.
#line 1 "ENTRY_10f83900"

__declspec(naked) void FUN_10f83900(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x10
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10f839d0; body size 33 bytes.
#line 1 "ENTRY_10f839d0"

__declspec(naked) void FUN_10f839d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10f839ef
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



// Reference entry 10f84040; body size 41 bytes.
#line 1 "ENTRY_10f84040"

__declspec(naked) void FUN_10f84040(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x18]
  __asm test ecx, ecx
  __asm je 0x10f84067
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm call eax
  __asm test al, al
  __asm je 0x10f84067
  __asm mov ecx, dword ptr [esi + 0x18]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x18]
  __asm mov eax, dword ptr [esi + 0x14]
  __asm lea ecx, [esi + 0x14]
  __asm pop esi
  __asm jmp dword ptr [eax + 4]
  __asm pop esi
  __asm ret
}



// Reference entry 10f86b30; body size 40 bytes.
#line 1 "ENTRY_10f86b30"

__declspec(naked) void FUN_10f86b30(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push esi
  __asm push dword ptr [esp + 0x14]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x14]
  __asm push eax
  __asm call LAB_10008d0f
  __asm mov eax, dword ptr [eax + 4]
  __asm test eax, eax
  __asm jne 0x10f86b51
  __asm mov eax, dword ptr [esi + 4]
  __asm pop esi
  __asm add esp, 8
  __asm ret 8
}



// Reference entry 10f87ac0; body size 39 bytes.
#line 1 "ENTRY_10f87ac0"

__declspec(naked) void FUN_10f87ac0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x24
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f886e0; body size 19 bytes.
#line 1 "ENTRY_10f886e0"

void __fastcall FUN_10f886e0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x24);
  }
  return;
}


// Reference entry 10f887f0; body size 44 bytes.
#line 1 "ENTRY_10f887f0"

__declspec(naked) void FUN_10f887f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 4]
  __asm test eax, eax
  __asm je 0x10f8880b
  __asm add eax, 8
  __asm push eax
  __asm push dword ptr [esi]
  __asm call LAB_10019f33
  __asm mov eax, dword ptr [esi + 4]
  __asm add esp, 8
  __asm pop esi
  __asm test eax, eax
  __asm je 0x10f8881b
  __asm push 0x24
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
}



// Reference entry 10f88840; body size 25 bytes.
#line 1 "ENTRY_10f88840"

void __fastcall FUN_10f88840(undefined4 *param_1)

{
  thunk_FUN_10f86c10(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x24);
  return;
}


// Reference entry 10f88e10; body size 25 bytes.
#line 1 "ENTRY_10f88e10"

__declspec(naked) void FUN_10f88e10(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x24
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10f88f50; body size 29 bytes.
#line 1 "ENTRY_10f88f50"

void __fastcall FUN_10f88f50(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[2]);
  param_1[2] = (int)(*piVar1);
  thunk_FUN_10f86cd0(*param_1,piVar1);
  *(int*)(*param_1 + 4) = (int)(*(int *)(*param_1 + 4) + -1);
  return;
}


// Reference entry 10f895a0; body size 25 bytes.
#line 1 "ENTRY_10f895a0"

void __fastcall FUN_10f895a0(undefined4 *param_1)

{
  thunk_FUN_10f86c10(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x24);
  return;
}


// Reference entry 10f89a80; body size 32 bytes.
#line 1 "ENTRY_10f89a80"

void __fastcall FUN_10f89a80(int *param_1)

{
  thunk_FUN_10f86c10(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10f8bdf0; body size 38 bytes.
#line 1 "ENTRY_10f8bdf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f8bdf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f8be20; body size 38 bytes.
#line 1 "ENTRY_10f8be20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f8be20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f8be50; body size 38 bytes.
#line 1 "ENTRY_10f8be50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f8be50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f8be80; body size 32 bytes.
#line 1 "ENTRY_10f8be80"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f8be80(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f8b460();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f8beb0; body size 32 bytes.
#line 1 "ENTRY_10f8beb0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f8beb0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f8b5b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f8bee0; body size 32 bytes.
#line 1 "ENTRY_10f8bee0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f8bee0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f8b700();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f8bf10; body size 35 bytes.
#line 1 "ENTRY_10f8bf10"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f8bf10(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f8b8c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x622c);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f8bff0; body size 35 bytes.
#line 1 "ENTRY_10f8bff0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10f8bff0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f8ba50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6138);
  }
  return (undefined4)(param_1);
}


// Reference entry 10f8c170; body size 45 bytes.
#line 1 "ENTRY_10f8c170"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f8c170(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDeviceVoiceSettingsSet);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpDeviceVoiceSettingsSet);
  thunk_FUN_10f8b700();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f8c1b0; body size 45 bytes.
#line 1 "ENTRY_10f8c1b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f8c1b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpMuseGetPlayerInfo);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpMuseGetPlayerInfo);
  thunk_FUN_10f8b460();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x4c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f8c1f0; body size 45 bytes.
#line 1 "ENTRY_10f8c1f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f8c1f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpMuseSetSettings);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpMuseSetSettings);
  thunk_FUN_10f8b5b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f8c8e0; body size 47 bytes.
#line 1 "ENTRY_10f8c8e0"

__declspec(naked) void FUN_10f8c8e0(void)

{
  __asm push ebx
  __asm mov ebx, ecx
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [ebx + 0x1c]
  __asm mov esi, dword ptr [ebx + 0x20]
  __asm cmp edi, esi
  __asm je 0x10f8c908
  __asm nop
  __asm mov ecx, dword ptr [edi]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x18]
  __asm add edi, 4
  __asm cmp edi, esi
  __asm jne 0x10f8c8f0
  __asm mov eax, dword ptr [ebx + 0x1c]
  __asm pop edi
  __asm pop esi
  __asm mov dword ptr [ebx + 0x20], eax
  __asm pop ebx
  __asm ret
  __asm mov dword ptr [ebx + 0x20], edi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret
}



// Reference entry 10f8cbb0; body size 17 bytes.
#line 1 "ENTRY_10f8cbb0"

__declspec(naked) void FUN_10f8cbb0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6218]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}



// Reference entry 10f8cbd0; body size 17 bytes.
#line 1 "ENTRY_10f8cbd0"

__declspec(naked) void FUN_10f8cbd0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6110]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}



// Reference entry 10f8cfa0; body size 21 bytes.
#line 1 "ENTRY_10f8cfa0"

SCStr * __stdcall FUN_10f8cfa0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f8cfc0; body size 21 bytes.
#line 1 "ENTRY_10f8cfc0"

SCStr * __stdcall FUN_10f8cfc0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f8cfe0; body size 21 bytes.
#line 1 "ENTRY_10f8cfe0"

SCStr * __stdcall FUN_10f8cfe0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10f8d000; body size 23 bytes.
#line 1 "ENTRY_10f8d000"

SCStr * __thiscall Recovered_Bulk::m_FUN_10f8d000(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x30));
  return (SCStr *)(param_2);
}


// Reference entry 10f8d020; body size 25 bytes.
#line 1 "ENTRY_10f8d020"

SCStr * __thiscall Recovered_Bulk::m_FUN_10f8d020(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x623c));
  return (SCStr *)(param_2);
}


// Reference entry 10f8d080; body size 31 bytes.
#line 1 "ENTRY_10f8d080"

__declspec(naked) void FUN_10f8d080(void)

{
  __asm mov eax, dword ptr [ecx + 0x18]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [eax + 0x614c]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10f8d099
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f8ea60; body size 16 bytes.
#line 1 "ENTRY_10f8ea60"

void __thiscall Recovered_Bulk::m_FUN_10f8ea60(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(*(int *)(param_1 + 0x18) + 0x6160) = (undefined4)(param_2);
  return;
}


// Reference entry 10f8ed40; body size 44 bytes.
#line 1 "ENTRY_10f8ed40"

__declspec(naked) void FUN_10f8ed40(void)

{
  __asm push esi
  __asm mov esi, dword ptr [ecx + 0x1c]
  __asm push edi
  __asm mov edi, dword ptr [ecx + 0x20]
  __asm cmp esi, edi
  __asm je 0x10f8ed67
  __asm push ebx
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x14]
  __asm lea ebx, [ecx + 8]
  __asm mov ecx, dword ptr [esi]
  __asm push ebp
  __asm push ebx
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add esi, 4
  __asm cmp esi, edi
  __asm jne 0x10f8ed55
  __asm pop ebp
  __asm pop ebx
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10f8ed80; body size 21 bytes.
#line 1 "ENTRY_10f8ed80"

__declspec(naked) void FUN_10f8ed80(void)

{
  __asm push dword ptr [esp + 8]
  __asm add ecx, 0x14
  __asm push dword ptr [esp + 8]
  __asm call LAB_1007302e
  __asm mov al, 1
  __asm ret 8
}



// Reference entry 10f8f3e0; body size 33 bytes.
#line 1 "ENTRY_10f8f3e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f8f3e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f8f470; body size 33 bytes.
#line 1 "ENTRY_10f8f470"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f8f470(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f8f4a0; body size 33 bytes.
#line 1 "ENTRY_10f8f4a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f8f4a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f8f4d0; body size 33 bytes.
#line 1 "ENTRY_10f8f4d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f8f4d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f8f7d0; body size 37 bytes.
#line 1 "ENTRY_10f8f7d0"

__declspec(naked) void FUN_10f8f7d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x10]
  __asm test ecx, ecx
  __asm je 0x10f8f7e1
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x20]
  __asm jmp 0x10f8f7e3
  __asm xor eax, eax
  __asm cmp dword ptr [esp + 8], eax
  __asm jne 0x10f8f7f1
  __asm mov ecx, dword ptr [esi - 4]
  __asm call LAB_1006aac8
  __asm pop esi
  __asm ret 8
}



// Reference entry 10f8fa20; body size 33 bytes.
#line 1 "ENTRY_10f8fa20"

__declspec(naked) void FUN_10f8fa20(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x10]
  __asm test ecx, ecx
  __asm je 0x10f8fa3f
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm call eax
  __asm test al, al
  __asm je 0x10f8fa3f
  __asm mov eax, dword ptr [esi + 0xc]
  __asm lea ecx, [esi + 0xc]
  __asm pop esi
  __asm jmp dword ptr [eax + 4]
  __asm pop esi
  __asm ret
}



// Reference entry 10f8fa50; body size 37 bytes.
#line 1 "ENTRY_10f8fa50"

__declspec(naked) void FUN_10f8fa50(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov byte ptr [esi + 0x74], 1
  __asm mov ecx, dword ptr [esi + 0x10]
  __asm test ecx, ecx
  __asm je 0x10f8fa73
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm call eax
  __asm test al, al
  __asm je 0x10f8fa73
  __asm mov eax, dword ptr [esi + 0xc]
  __asm lea ecx, [esi + 0xc]
  __asm pop esi
  __asm jmp dword ptr [eax + 4]
  __asm pop esi
  __asm ret
}



// Reference entry 10f8fa80; body size 33 bytes.
#line 1 "ENTRY_10f8fa80"

__declspec(naked) void FUN_10f8fa80(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x10]
  __asm test ecx, ecx
  __asm je 0x10f8fa9f
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm call eax
  __asm test al, al
  __asm je 0x10f8fa9f
  __asm mov eax, dword ptr [esi + 0xc]
  __asm lea ecx, [esi + 0xc]
  __asm pop esi
  __asm jmp dword ptr [eax + 4]
  __asm pop esi
  __asm ret
}



// Reference entry 10f8fab0; body size 42 bytes.
#line 1 "ENTRY_10f8fab0"

__declspec(naked) void FUN_10f8fab0(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10f8fad5
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [eax + 8], esi
  __asm mov dword ptr [eax], LAB_1195525c
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10f8faf0; body size 42 bytes.
#line 1 "ENTRY_10f8faf0"

__declspec(naked) void FUN_10f8faf0(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10f8fb15
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [eax + 8], esi
  __asm mov dword ptr [eax], LAB_119550b4
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10f8fcb0; body size 45 bytes.
#line 1 "ENTRY_10f8fcb0"

__declspec(naked) void FUN_10f8fcb0(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10f8fcd8
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_1195525c
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10f8fec0; body size 45 bytes.
#line 1 "ENTRY_10f8fec0"

__declspec(naked) void FUN_10f8fec0(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10f8fee8
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_11955188
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10f8ff60; body size 21 bytes.
#line 1 "ENTRY_10f8ff60"

SCStr * __stdcall FUN_10f8ff60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_USAGE_DATA_COMPLETE");
  return (SCStr *)(param_1);
}


// Reference entry 10f8ff80; body size 21 bytes.
#line 1 "ENTRY_10f8ff80"

SCStr * __stdcall FUN_10f8ff80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_USAGE_DATA_INIT");
  return (SCStr *)(param_1);
}


// Reference entry 10f8ffa0; body size 21 bytes.
#line 1 "ENTRY_10f8ffa0"

SCStr * __stdcall FUN_10f8ffa0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_USAGE_DATA_OPT_IN");
  return (SCStr *)(param_1);
}


// Reference entry 10f8ffc0; body size 21 bytes.
#line 1 "ENTRY_10f8ffc0"

SCStr * __stdcall FUN_10f8ffc0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_USAGE_DATA_POST_COMPLETE");
  return (SCStr *)(param_1);
}


// Reference entry 10f8ffe0; body size 21 bytes.
#line 1 "ENTRY_10f8ffe0"

SCStr * __stdcall FUN_10f8ffe0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_USAGE_DATA_POST_COMPLETE");
  return (SCStr *)(param_1);
}


// Reference entry 10f90000; body size 21 bytes.
#line 1 "ENTRY_10f90000"

SCStr * __stdcall FUN_10f90000(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_USAGE_DATA_START");
  return (SCStr *)(param_1);
}


// Reference entry 10f90020; body size 31 bytes.
#line 1 "ENTRY_10f90020"

__declspec(naked) void FUN_10f90020(void)

{
  __asm cmp dword ptr [esp + 4], 0
  __asm jne 0x10f9003a
  __asm mov ecx, dword ptr [ecx + 8]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x1d4]
  __asm call eax
  __asm movzx eax, al
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 10f90060; body size 35 bytes.
#line 1 "ENTRY_10f90060"

__declspec(naked) void FUN_10f90060(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x20eb
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10f90800; body size 21 bytes.
#line 1 "ENTRY_10f90800"

SCStr * __stdcall FUN_10f90800(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("UsageDataWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10f912e0; body size 33 bytes.
#line 1 "ENTRY_10f912e0"

__declspec(naked) void FUN_10f912e0(void)

{
  __asm cmp dword ptr [esp + 4], 0
  __asm jne 0x10f912fe
  __asm mov ecx, dword ptr [ecx + 8]
  __asm cmp dword ptr [esp + 8], 0
  __asm setne al
  __asm mov edx, dword ptr [ecx]
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x1d0]
  __asm ret 8
}



// Reference entry 10f91cd0; body size 56 bytes.
#line 1 "ENTRY_10f91cd0"

__declspec(naked) void FUN_10f91cd0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0xd8]
  __asm mov dword ptr [esi], LAB_1195568c
  __asm mov dword ptr [esi + 8], LAB_119558c0
  __asm mov dword ptr [esi + 0x28], LAB_119558d0
  __asm mov dword ptr [esi + 0x48], LAB_119558dc
  __asm mov dword ptr [esi + 0x4c], LAB_119558ec
  __asm call LAB_10015a91
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_10088622
}



// Reference entry 10f91d50; body size 33 bytes.
#line 1 "ENTRY_10f91d50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f91d50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f91d80; body size 33 bytes.
#line 1 "ENTRY_10f91d80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f91d80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f91e80; body size 33 bytes.
#line 1 "ENTRY_10f91e80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f91e80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f91eb0; body size 33 bytes.
#line 1 "ENTRY_10f91eb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f91eb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f91ee0; body size 33 bytes.
#line 1 "ENTRY_10f91ee0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f91ee0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f91fb0; body size 33 bytes.
#line 1 "ENTRY_10f91fb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f91fb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f924f0; body size 37 bytes.
#line 1 "ENTRY_10f924f0"

__declspec(naked) void FUN_10f924f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x1c]
  __asm test ecx, ecx
  __asm je 0x10f92501
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x20]
  __asm jmp 0x10f92503
  __asm xor eax, eax
  __asm cmp dword ptr [esp + 8], eax
  __asm jne 0x10f92511
  __asm mov ecx, dword ptr [esi - 8]
  __asm call LAB_1006aac8
  __asm pop esi
  __asm ret 8
}



// Reference entry 10f925a0; body size 33 bytes.
#line 1 "ENTRY_10f925a0"

__declspec(naked) void FUN_10f925a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x10]
  __asm test ecx, ecx
  __asm je 0x10f925bf
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm call eax
  __asm test al, al
  __asm je 0x10f925bf
  __asm mov eax, dword ptr [esi + 0xc]
  __asm lea ecx, [esi + 0xc]
  __asm pop esi
  __asm jmp dword ptr [eax + 4]
  __asm pop esi
  __asm ret
}



// Reference entry 10f92ab0; body size 42 bytes.
#line 1 "ENTRY_10f92ab0"

__declspec(naked) void FUN_10f92ab0(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10f92ad5
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [eax + 8], esi
  __asm mov dword ptr [eax], LAB_11955fd8
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10f92af0; body size 42 bytes.
#line 1 "ENTRY_10f92af0"

__declspec(naked) void FUN_10f92af0(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10f92b15
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [eax + 8], esi
  __asm mov dword ptr [eax], LAB_11955a28
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10f92b30; body size 45 bytes.
#line 1 "ENTRY_10f92b30"

__declspec(naked) void FUN_10f92b30(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10f92b58
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_11955fd8
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10f92cf0; body size 45 bytes.
#line 1 "ENTRY_10f92cf0"

__declspec(naked) void FUN_10f92cf0(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10f92d18
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_11955fd8
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10f92d40; body size 45 bytes.
#line 1 "ENTRY_10f92d40"

__declspec(naked) void FUN_10f92d40(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10f92d68
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_11955fd8
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10f92d80; body size 59 bytes.
#line 1 "ENTRY_10f92d80"

__declspec(naked) void FUN_10f92d80(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0x14
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10f92db6
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_11955d60
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10f93710; body size 21 bytes.
#line 1 "ENTRY_10f93710"

SCStr * __stdcall FUN_10f93710(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SelfTrueplayEnabled");
  return (SCStr *)(param_1);
}


// Reference entry 10f93730; body size 21 bytes.
#line 1 "ENTRY_10f93730"

SCStr * __stdcall FUN_10f93730(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SelfTrueplayIntro");
  return (SCStr *)(param_1);
}


// Reference entry 10f93750; body size 21 bytes.
#line 1 "ENTRY_10f93750"

SCStr * __stdcall FUN_10f93750(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SelfTrueplaySkipped");
  return (SCStr *)(param_1);
}


// Reference entry 10f93770; body size 21 bytes.
#line 1 "ENTRY_10f93770"

SCStr * __stdcall FUN_10f93770(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("TrueplayEnd");
  return (SCStr *)(param_1);
}


// Reference entry 10f93790; body size 21 bytes.
#line 1 "ENTRY_10f93790"

SCStr * __stdcall FUN_10f93790(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("TrueplayInit");
  return (SCStr *)(param_1);
}


// Reference entry 10f937b0; body size 21 bytes.
#line 1 "ENTRY_10f937b0"

SCStr * __stdcall FUN_10f937b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("TrueplayIntro");
  return (SCStr *)(param_1);
}


// Reference entry 10f937e0; body size 21 bytes.
#line 1 "ENTRY_10f937e0"

SCStr * __stdcall FUN_10f937e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("Sonar Title");
  return (SCStr *)(param_1);
}


// Reference entry 10f95960; body size 21 bytes.
#line 1 "ENTRY_10f95960"

SCStr * __stdcall FUN_10f95960(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SonarWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10f969e0; body size 21 bytes.
#line 1 "ENTRY_10f969e0"

void FUN_10f969e0(void)

{
  thunk_FUN_112af4e0("SonarWizard",1,"Sonar Done");
  return;
}


// Reference entry 10f96a10; body size 21 bytes.
#line 1 "ENTRY_10f96a10"

void FUN_10f96a10(void)

{
  thunk_FUN_112af4e0("SonarWizard",1,"Sonar Start");
  return;
}


// Reference entry 10f971a0; body size 33 bytes.
#line 1 "ENTRY_10f971a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f971a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f971d0; body size 33 bytes.
#line 1 "ENTRY_10f971d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f971d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f97200; body size 33 bytes.
#line 1 "ENTRY_10f97200"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f97200(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f97230; body size 33 bytes.
#line 1 "ENTRY_10f97230"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f97230(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f97260; body size 33 bytes.
#line 1 "ENTRY_10f97260"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f97260(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f97290; body size 33 bytes.
#line 1 "ENTRY_10f97290"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f97290(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f977c0; body size 41 bytes.
#line 1 "ENTRY_10f977c0"

__declspec(naked) void FUN_10f977c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x20]
  __asm test ecx, ecx
  __asm je 0x10f977e7
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm call eax
  __asm test al, al
  __asm je 0x10f977e7
  __asm mov ecx, dword ptr [esi + 0x20]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x18]
  __asm mov eax, dword ptr [esi + 0x1c]
  __asm lea ecx, [esi + 0x1c]
  __asm pop esi
  __asm jmp dword ptr [eax + 4]
  __asm pop esi
  __asm ret
}



// Reference entry 10f97800; body size 42 bytes.
#line 1 "ENTRY_10f97800"

__declspec(naked) void FUN_10f97800(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10f97825
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [eax + 8], esi
  __asm mov dword ptr [eax], LAB_11956c08
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10f97840; body size 42 bytes.
#line 1 "ENTRY_10f97840"

__declspec(naked) void FUN_10f97840(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10f97865
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [eax + 8], esi
  __asm mov dword ptr [eax], LAB_119567b8
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10f97890; body size 45 bytes.
#line 1 "ENTRY_10f97890"

__declspec(naked) void FUN_10f97890(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10f978b8
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_11956c08
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10f978d0; body size 45 bytes.
#line 1 "ENTRY_10f978d0"

__declspec(naked) void FUN_10f978d0(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10f978f8
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_11956c08
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10f97910; body size 45 bytes.
#line 1 "ENTRY_10f97910"

__declspec(naked) void FUN_10f97910(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10f97938
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_1195688c
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10f97bb0; body size 21 bytes.
#line 1 "ENTRY_10f97bb0"

SCStr * __stdcall FUN_10f97bb0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SUBMITDIAGS_COMPLETE");
  return (SCStr *)(param_1);
}


// Reference entry 10f97bd0; body size 21 bytes.
#line 1 "ENTRY_10f97bd0"

SCStr * __stdcall FUN_10f97bd0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SUBMITDIAGS_DONE");
  return (SCStr *)(param_1);
}


// Reference entry 10f97bf0; body size 21 bytes.
#line 1 "ENTRY_10f97bf0"

SCStr * __stdcall FUN_10f97bf0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SUBMITDIAGS_ERROR");
  return (SCStr *)(param_1);
}


// Reference entry 10f97c10; body size 21 bytes.
#line 1 "ENTRY_10f97c10"

SCStr * __stdcall FUN_10f97c10(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SUBMITDIAGS_INIT");
  return (SCStr *)(param_1);
}


// Reference entry 10f97c30; body size 21 bytes.
#line 1 "ENTRY_10f97c30"

SCStr * __stdcall FUN_10f97c30(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SUBMITDIAGS_INTRO");
  return (SCStr *)(param_1);
}


// Reference entry 10f97c50; body size 21 bytes.
#line 1 "ENTRY_10f97c50"

SCStr * __stdcall FUN_10f97c50(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_SUBMITDIAGS_SUBMITTING");
  return (SCStr *)(param_1);
}


// Reference entry 10f97c80; body size 35 bytes.
#line 1 "ENTRY_10f97c80"

__declspec(naked) void FUN_10f97c80(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x20ef
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10f98e70; body size 21 bytes.
#line 1 "ENTRY_10f98e70"

SCStr * __stdcall FUN_10f98e70(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SubmitDiagsWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10f98e90; body size 16 bytes.
#line 1 "ENTRY_10f98e90"

__declspec(naked) void FUN_10f98e90(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x14]
  __asm sub eax, 2
  __asm je 0x10f98e9d
  __asm xor al, al
  __asm ret
  __asm mov al, 1
  __asm ret
}



// Reference entry 10f99360; body size 28 bytes.
#line 1 "ENTRY_10f99360"

__declspec(naked) void FUN_10f99360(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm je 0x10f99371
  __asm mov dword ptr [esp + 4], eax
  __asm jmp LAB_100515e6
  __asm mov ecx, dword ptr [ecx + 8]
  __asm call LAB_1006688d
  __asm ret 8
}



// Reference entry 10f99940; body size 33 bytes.
#line 1 "ENTRY_10f99940"

void __thiscall Recovered_Bulk::m_FUN_10f99940(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10f999a0((int)(param_2),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x24);
  return;
}


// Reference entry 10f99970; body size 33 bytes.
#line 1 "ENTRY_10f99970"

void __thiscall Recovered_Bulk::m_FUN_10f99970(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10f99a90((int)(param_2),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10f99b60; body size 49 bytes.
#line 1 "ENTRY_10f99b60"

__declspec(naked) void FUN_10f99b60(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x18]
  __asm lea eax, [esp + 8]
  __asm push edi
  __asm push eax
  __asm mov esi, ecx
  __asm call LAB_100149c0
  __asm mov eax, dword ptr [esp + 0x10]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10f99b87
  __asm mov ecx, dword ptr [edi]
  __asm cmp ecx, dword ptr [eax + 0x10]
  __asm jae 0x10f99b89
  __asm mov eax, dword ptr [esi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}



// Reference entry 10f9a6f0; body size 48 bytes.
#line 1 "ENTRY_10f9a6f0"

__declspec(naked) void FUN_10f9a6f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x24
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
  __asm ret 4
}



// Reference entry 10f9a730; body size 48 bytes.
#line 1 "ENTRY_10f9a730"

__declspec(naked) void FUN_10f9a730(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x1c
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
  __asm ret 4
}



// Reference entry 10f9b030; body size 19 bytes.
#line 1 "ENTRY_10f9b030"

void __fastcall FUN_10f9b030(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x24);
  }
  return;
}


// Reference entry 10f9b050; body size 19 bytes.
#line 1 "ENTRY_10f9b050"

void __fastcall FUN_10f9b050(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10f9b070; body size 28 bytes.
#line 1 "ENTRY_10f9b070"

void __fastcall FUN_10f9b070(int *param_1)

{
  thunk_FUN_10f999a0((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x24);
  return;
}


// Reference entry 10f9b0a0; body size 28 bytes.
#line 1 "ENTRY_10f9b0a0"

void __fastcall FUN_10f9b0a0(int *param_1)

{
  thunk_FUN_10f99a90((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10f9b270; body size 28 bytes.
#line 1 "ENTRY_10f9b270"

void __fastcall FUN_10f9b270(int *param_1)

{
  thunk_FUN_10f999a0((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x24);
  return;
}


// Reference entry 10f9b2a0; body size 28 bytes.
#line 1 "ENTRY_10f9b2a0"

void __fastcall FUN_10f9b2a0(int *param_1)

{
  thunk_FUN_10f99a90((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10f9be10; body size 33 bytes.
#line 1 "ENTRY_10f9be10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9be10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f9c060; body size 33 bytes.
#line 1 "ENTRY_10f9c060"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9c060(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f9c090; body size 33 bytes.
#line 1 "ENTRY_10f9c090"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9c090(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f9c1c0; body size 33 bytes.
#line 1 "ENTRY_10f9c1c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9c1c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f9c1f0; body size 33 bytes.
#line 1 "ENTRY_10f9c1f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9c1f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f9c220; body size 33 bytes.
#line 1 "ENTRY_10f9c220"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9c220(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f9c250; body size 33 bytes.
#line 1 "ENTRY_10f9c250"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9c250(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f9c280; body size 33 bytes.
#line 1 "ENTRY_10f9c280"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9c280(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f9c2b0; body size 33 bytes.
#line 1 "ENTRY_10f9c2b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9c2b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f9c2e0; body size 33 bytes.
#line 1 "ENTRY_10f9c2e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9c2e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f9c310; body size 33 bytes.
#line 1 "ENTRY_10f9c310"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9c310(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f9c470; body size 25 bytes.
#line 1 "ENTRY_10f9c470"

__declspec(naked) void FUN_10f9c470(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x24
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10f9c490; body size 25 bytes.
#line 1 "ENTRY_10f9c490"

__declspec(naked) void FUN_10f9c490(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x1c
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10f9d5a0; body size 31 bytes.
#line 1 "ENTRY_10f9d5a0"

int * FUN_10f9d5a0(int *param_1)

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


// Reference entry 10f9d5d0; body size 31 bytes.
#line 1 "ENTRY_10f9d5d0"

int * FUN_10f9d5d0(int *param_1)

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


// Reference entry 10f9dbf0; body size 37 bytes.
#line 1 "ENTRY_10f9dbf0"

__declspec(naked) void FUN_10f9dbf0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x2c]
  __asm call eax
  __asm test al, al
  __asm jne 0x10f9dc11
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x58]
  __asm call eax
  __asm test al, al
  __asm jne 0x10f9dc11
  __asm pop esi
  __asm ret
  __asm mov al, 1
  __asm pop esi
  __asm ret
}



// Reference entry 10f9dc40; body size 37 bytes.
#line 1 "ENTRY_10f9dc40"

__declspec(naked) void FUN_10f9dc40(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x2c]
  __asm call eax
  __asm test al, al
  __asm jne 0x10f9dc61
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x60]
  __asm call eax
  __asm test al, al
  __asm jne 0x10f9dc61
  __asm pop esi
  __asm ret
  __asm mov al, 1
  __asm pop esi
  __asm ret
}



// Reference entry 10f9de50; body size 33 bytes.
#line 1 "ENTRY_10f9de50"

void __fastcall FUN_10f9de50(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10f999a0((int)(param_1),(int)(*(undefined4 *)(iVar1 + 4)));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10f9de80; body size 33 bytes.
#line 1 "ENTRY_10f9de80"

void __fastcall FUN_10f9de80(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10f99a90((int)(param_1),(int)(*(undefined4 *)(iVar1 + 4)));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10f9deb0; body size 24 bytes.
#line 1 "ENTRY_10f9deb0"

void __fastcall FUN_10f9deb0(undefined4 *param_1)

{
  thunk_FUN_101f4060(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10f9def0; body size 42 bytes.
#line 1 "ENTRY_10f9def0"

__declspec(naked) void FUN_10f9def0(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10f9df15
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [eax + 8], esi
  __asm mov dword ptr [eax], LAB_11957ccc
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10f9df30; body size 42 bytes.
#line 1 "ENTRY_10f9df30"

__declspec(naked) void FUN_10f9df30(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10f9df55
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [eax + 8], esi
  __asm mov dword ptr [eax], LAB_11957278
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10f9df70; body size 45 bytes.
#line 1 "ENTRY_10f9df70"

__declspec(naked) void FUN_10f9df70(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10f9df98
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_11957ccc
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10f9e070; body size 49 bytes.
#line 1 "ENTRY_10f9e070"

__declspec(naked) void FUN_10f9e070(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0x10
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10f9e09c
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_11957348
  __asm mov byte ptr [eax + 0xc], 0
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10f9e360; body size 45 bytes.
#line 1 "ENTRY_10f9e360"

__declspec(naked) void FUN_10f9e360(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10f9e388
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_11957ccc
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10fa01c0; body size 34 bytes.
#line 1 "ENTRY_10fa01c0"

__declspec(naked) void FUN_10fa01c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm test ecx, ecx
  __asm je 0x10fa01de
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x2c]
  __asm call eax
  __asm test al, al
  __asm jne 0x10fa01de
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm pop esi
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x14]
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 10fa0290; body size 21 bytes.
#line 1 "ENTRY_10fa0290"

SCStr * __stdcall FUN_10fa0290(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("bridge_removal.complete");
  return (SCStr *)(param_1);
}


// Reference entry 10fa02b0; body size 21 bytes.
#line 1 "ENTRY_10fa02b0"

SCStr * __stdcall FUN_10fa02b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("bridge_removal.do_not_remove");
  return (SCStr *)(param_1);
}


// Reference entry 10fa02d0; body size 21 bytes.
#line 1 "ENTRY_10fa02d0"

SCStr * __stdcall FUN_10fa02d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("bridge_removal.factory_reset");
  return (SCStr *)(param_1);
}


// Reference entry 10fa02f0; body size 21 bytes.
#line 1 "ENTRY_10fa02f0"

SCStr * __stdcall FUN_10fa02f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("bridge_removal.init");
  return (SCStr *)(param_1);
}


// Reference entry 10fa0310; body size 21 bytes.
#line 1 "ENTRY_10fa0310"

SCStr * __stdcall FUN_10fa0310(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("bridge_removal.intro");
  return (SCStr *)(param_1);
}


// Reference entry 10fa0330; body size 21 bytes.
#line 1 "ENTRY_10fa0330"

SCStr * __stdcall FUN_10fa0330(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("bridge_removal.network_test_intro");
  return (SCStr *)(param_1);
}


// Reference entry 10fa0350; body size 21 bytes.
#line 1 "ENTRY_10fa0350"

SCStr * __stdcall FUN_10fa0350(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("bridge_removal.reset_complete");
  return (SCStr *)(param_1);
}


// Reference entry 10fa0370; body size 21 bytes.
#line 1 "ENTRY_10fa0370"

SCStr * __stdcall FUN_10fa0370(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("bridge_removal.reset_failed");
  return (SCStr *)(param_1);
}


// Reference entry 10fa0390; body size 21 bytes.
#line 1 "ENTRY_10fa0390"

SCStr * __stdcall FUN_10fa0390(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("bridge_removal.network_test_fail");
  return (SCStr *)(param_1);
}


// Reference entry 10fa03b0; body size 21 bytes.
#line 1 "ENTRY_10fa03b0"

SCStr * __stdcall FUN_10fa03b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("bridge_removal.network_test_pass");
  return (SCStr *)(param_1);
}


// Reference entry 10fa03d0; body size 21 bytes.
#line 1 "ENTRY_10fa03d0"

SCStr * __stdcall FUN_10fa03d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("bridge_removal.display_network_test");
  return (SCStr *)(param_1);
}


// Reference entry 10fa0410; body size 30 bytes.
#line 1 "ENTRY_10fa0410"

__declspec(naked) void FUN_10fa0410(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm test ecx, ecx
  __asm je 0x10fa042a
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x2c]
  __asm call eax
  __asm test al, al
  __asm jne 0x10fa042a
  __asm mov eax, dword ptr [esi + 0xc]
  __asm pop esi
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 10fa0450; body size 26 bytes.
#line 1 "ENTRY_10fa0450"

__declspec(naked) void FUN_10fa0450(void)

{
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xa0]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 10fa0470; body size 35 bytes.
#line 1 "ENTRY_10fa0470"

__declspec(naked) void FUN_10fa0470(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x26c3
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10fa04b0; body size 23 bytes.
#line 1 "ENTRY_10fa04b0"

__declspec(naked) void FUN_10fa04b0(void)

{
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x7c]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 10fa2e20; body size 21 bytes.
#line 1 "ENTRY_10fa2e20"

SCStr * __stdcall FUN_10fa2e20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCBridgeRemovalWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10fa3450; body size 24 bytes.
#line 1 "ENTRY_10fa3450"

__declspec(naked) void FUN_10fa3450(void)

{
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm test ecx, ecx
  __asm je 0x10fa3465
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x40]
  __asm call eax
  __asm test al, al
  __asm je 0x10fa3465
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 10fa34a0; body size 39 bytes.
#line 1 "ENTRY_10fa34a0"

__declspec(naked) void FUN_10fa34a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm mov eax, dword ptr [eax + 0x9c]
  __asm call eax
  __asm test al, al
  __asm je 0x10fa34c3
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x6c]
  __asm call eax
  __asm test al, al
  __asm je 0x10fa34c3
  __asm mov al, 1
  __asm pop esi
  __asm ret
  __asm xor al, al
  __asm pop esi
  __asm ret
}



// Reference entry 10fa34d0; body size 63 bytes.
#line 1 "ENTRY_10fa34d0"

__declspec(naked) void FUN_10fa34d0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, esi
  __asm push offset LAB_1187c800
  __asm call LAB_1008ca83
  __asm test al, al
  __asm jne 0x10fa3509
  __asm push offset LAB_1187c820
  __asm mov ecx, esi
  __asm call LAB_1008ca83
  __asm test al, al
  __asm jne 0x10fa3509
  __asm push offset LAB_1187c84c
  __asm mov ecx, esi
  __asm call LAB_1008ca83
  __asm test al, al
  __asm jne 0x10fa3509
  __asm pop esi
  __asm ret 4
  __asm mov al, 1
  __asm pop esi
  __asm ret 4
}



// Reference entry 10fa3670; body size 61 bytes.
#line 1 "ENTRY_10fa3670"

__declspec(naked) void FUN_10fa3670(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm test ecx, ecx
  __asm je 0x10fa36ab
  __asm mov eax, dword ptr [ecx]
  __asm push dword ptr [esi + 0x14]
  __asm call dword ptr [eax + 0xcc]
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x30]
  __asm call eax
  __asm test al, al
  __asm jne 0x10fa36ab
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov eax, dword ptr [eax + 0x94]
  __asm call eax
  __asm test al, al
  __asm jne 0x10fa36ab
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_10066e0f
  __asm pop esi
  __asm ret
}



// Reference entry 10fa3e60; body size 27 bytes.
#line 1 "ENTRY_10fa3e60"

__declspec(naked) void FUN_10fa3e60(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0xea60
  __asm lea ecx, [esi + 0x1c]
  __asm call LAB_100913f8
  __asm mov dword ptr [esi + 0x34], eax
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_10030bed
}



// Reference entry 10fa5670; body size 33 bytes.
#line 1 "ENTRY_10fa5670"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fa5670(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fa5700; body size 33 bytes.
#line 1 "ENTRY_10fa5700"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fa5700(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fa5730; body size 33 bytes.
#line 1 "ENTRY_10fa5730"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fa5730(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fa5760; body size 33 bytes.
#line 1 "ENTRY_10fa5760"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fa5760(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fa5790; body size 33 bytes.
#line 1 "ENTRY_10fa5790"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fa5790(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fa5960; body size 33 bytes.
#line 1 "ENTRY_10fa5960"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fa5960(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fa5b00; body size 33 bytes.
#line 1 "ENTRY_10fa5b00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fa5b00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fa5c20; body size 37 bytes.
#line 1 "ENTRY_10fa5c20"

__declspec(naked) void FUN_10fa5c20(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x2c]
  __asm call eax
  __asm test al, al
  __asm jne 0x10fa5c41
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x58]
  __asm call eax
  __asm test al, al
  __asm jne 0x10fa5c41
  __asm pop esi
  __asm ret
  __asm mov al, 1
  __asm pop esi
  __asm ret
}



// Reference entry 10fa5c50; body size 37 bytes.
#line 1 "ENTRY_10fa5c50"

__declspec(naked) void FUN_10fa5c50(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x2c]
  __asm call eax
  __asm test al, al
  __asm jne 0x10fa5c71
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x60]
  __asm call eax
  __asm test al, al
  __asm jne 0x10fa5c71
  __asm pop esi
  __asm ret
  __asm mov al, 1
  __asm pop esi
  __asm ret
}



// Reference entry 10fa5cc0; body size 33 bytes.
#line 1 "ENTRY_10fa5cc0"

__declspec(naked) void FUN_10fa5cc0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x20]
  __asm test ecx, ecx
  __asm je 0x10fa5cdf
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm call eax
  __asm test al, al
  __asm je 0x10fa5cdf
  __asm mov eax, dword ptr [esi + 0x1c]
  __asm lea ecx, [esi + 0x1c]
  __asm pop esi
  __asm jmp dword ptr [eax + 4]
  __asm pop esi
  __asm ret
}



// Reference entry 10fa5d10; body size 42 bytes.
#line 1 "ENTRY_10fa5d10"

__declspec(naked) void FUN_10fa5d10(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10fa5d35
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [eax + 8], esi
  __asm mov dword ptr [eax], LAB_11958d00
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10fa5d50; body size 42 bytes.
#line 1 "ENTRY_10fa5d50"

__declspec(naked) void FUN_10fa5d50(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10fa5d75
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [eax + 8], esi
  __asm mov dword ptr [eax], LAB_11958424
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10fa6870; body size 45 bytes.
#line 1 "ENTRY_10fa6870"

__declspec(naked) void FUN_10fa6870(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10fa6898
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_11958d00
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10fa68b0; body size 45 bytes.
#line 1 "ENTRY_10fa68b0"

__declspec(naked) void FUN_10fa68b0(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10fa68d8
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_11958d00
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10fa7690; body size 34 bytes.
#line 1 "ENTRY_10fa7690"

__declspec(naked) void FUN_10fa7690(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm test ecx, ecx
  __asm je 0x10fa76ae
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x2c]
  __asm call eax
  __asm test al, al
  __asm jne 0x10fa76ae
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm pop esi
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x14]
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 10fa7720; body size 21 bytes.
#line 1 "ENTRY_10fa7720"

SCStr * __stdcall FUN_10fa7720(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_launcher.complete");
  return (SCStr *)(param_1);
}


// Reference entry 10fa7740; body size 21 bytes.
#line 1 "ENTRY_10fa7740"

SCStr * __stdcall FUN_10fa7740(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_launcher.info");
  return (SCStr *)(param_1);
}


// Reference entry 10fa7760; body size 21 bytes.
#line 1 "ENTRY_10fa7760"

SCStr * __stdcall FUN_10fa7760(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_launcher.init");
  return (SCStr *)(param_1);
}


// Reference entry 10fa7780; body size 21 bytes.
#line 1 "ENTRY_10fa7780"

SCStr * __stdcall FUN_10fa7780(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_launcher.missing_products");
  return (SCStr *)(param_1);
}


// Reference entry 10fa77a0; body size 21 bytes.
#line 1 "ENTRY_10fa77a0"

SCStr * __stdcall FUN_10fa77a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_launcher.mixed_hh");
  return (SCStr *)(param_1);
}


// Reference entry 10fa77c0; body size 21 bytes.
#line 1 "ENTRY_10fa77c0"

SCStr * __stdcall FUN_10fa77c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_launcher.modern_hh");
  return (SCStr *)(param_1);
}


// Reference entry 10fa77e0; body size 21 bytes.
#line 1 "ENTRY_10fa77e0"

SCStr * __stdcall FUN_10fa77e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_launcher.remind_me");
  return (SCStr *)(param_1);
}


// Reference entry 10fa7800; body size 21 bytes.
#line 1 "ENTRY_10fa7800"

SCStr * __stdcall FUN_10fa7800(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_launcher.retrieving_products");
  return (SCStr *)(param_1);
}


// Reference entry 10fa7840; body size 30 bytes.
#line 1 "ENTRY_10fa7840"

__declspec(naked) void FUN_10fa7840(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm test ecx, ecx
  __asm je 0x10fa785a
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x2c]
  __asm call eax
  __asm test al, al
  __asm jne 0x10fa785a
  __asm mov eax, dword ptr [esi + 0xc]
  __asm pop esi
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 10fa7880; body size 26 bytes.
#line 1 "ENTRY_10fa7880"

__declspec(naked) void FUN_10fa7880(void)

{
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xa0]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 10fa78a0; body size 35 bytes.
#line 1 "ENTRY_10fa78a0"

__declspec(naked) void FUN_10fa78a0(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2686
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10fa7ba0; body size 23 bytes.
#line 1 "ENTRY_10fa7ba0"

__declspec(naked) void FUN_10fa7ba0(void)

{
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x7c]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 10fa9470; body size 21 bytes.
#line 1 "ENTRY_10fa9470"

SCStr * __stdcall FUN_10fa9470(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCLifecycleLauncherWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10fa9a40; body size 24 bytes.
#line 1 "ENTRY_10fa9a40"

__declspec(naked) void FUN_10fa9a40(void)

{
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm test ecx, ecx
  __asm je 0x10fa9a55
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x40]
  __asm call eax
  __asm test al, al
  __asm je 0x10fa9a55
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 10fa9a90; body size 39 bytes.
#line 1 "ENTRY_10fa9a90"

__declspec(naked) void FUN_10fa9a90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm mov eax, dword ptr [eax + 0x9c]
  __asm call eax
  __asm test al, al
  __asm je 0x10fa9ab3
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x6c]
  __asm call eax
  __asm test al, al
  __asm je 0x10fa9ab3
  __asm mov al, 1
  __asm pop esi
  __asm ret
  __asm xor al, al
  __asm pop esi
  __asm ret
}



// Reference entry 10fa9ac0; body size 63 bytes.
#line 1 "ENTRY_10fa9ac0"

__declspec(naked) void FUN_10fa9ac0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, esi
  __asm push offset LAB_1187c800
  __asm call LAB_1008ca83
  __asm test al, al
  __asm jne 0x10fa9af9
  __asm push offset LAB_1187c820
  __asm mov ecx, esi
  __asm call LAB_1008ca83
  __asm test al, al
  __asm jne 0x10fa9af9
  __asm push offset LAB_1187c84c
  __asm mov ecx, esi
  __asm call LAB_1008ca83
  __asm test al, al
  __asm jne 0x10fa9af9
  __asm pop esi
  __asm ret 4
  __asm mov al, 1
  __asm pop esi
  __asm ret 4
}



// Reference entry 10fa9b10; body size 17 bytes.
#line 1 "ENTRY_10fa9b10"

__declspec(naked) void FUN_10fa9b10(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm push offset LAB_1187b15c
  __asm call LAB_1008ca83
  __asm ret 4
}



// Reference entry 10fa9dc0; body size 61 bytes.
#line 1 "ENTRY_10fa9dc0"

__declspec(naked) void FUN_10fa9dc0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm test ecx, ecx
  __asm je 0x10fa9dfb
  __asm mov eax, dword ptr [ecx]
  __asm push dword ptr [esi + 0x14]
  __asm call dword ptr [eax + 0xcc]
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x30]
  __asm call eax
  __asm test al, al
  __asm jne 0x10fa9dfb
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov eax, dword ptr [eax + 0x94]
  __asm call eax
  __asm test al, al
  __asm jne 0x10fa9dfb
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_10051271
  __asm pop esi
  __asm ret
}



// Reference entry 10fab430; body size 40 bytes.
#line 1 "ENTRY_10fab430"

__declspec(naked) void FUN_10fab430(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push esi
  __asm push dword ptr [esp + 0x14]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x14]
  __asm push eax
  __asm call LAB_10082a60
  __asm mov eax, dword ptr [eax + 4]
  __asm test eax, eax
  __asm jne 0x10fab451
  __asm mov eax, dword ptr [esi + 0xc]
  __asm pop esi
  __asm add esp, 8
  __asm ret 8
}



// Reference entry 10fab470; body size 40 bytes.
#line 1 "ENTRY_10fab470"

__declspec(naked) void FUN_10fab470(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push esi
  __asm push dword ptr [esp + 0x14]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x14]
  __asm push eax
  __asm call LAB_1004c901
  __asm mov eax, dword ptr [eax + 4]
  __asm test eax, eax
  __asm jne 0x10fab491
  __asm mov eax, dword ptr [esi + 0xc]
  __asm pop esi
  __asm add esp, 8
  __asm ret 8
}



// Reference entry 10fab4b0; body size 40 bytes.
#line 1 "ENTRY_10fab4b0"

__declspec(naked) void FUN_10fab4b0(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push esi
  __asm push dword ptr [esp + 0x14]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x14]
  __asm push eax
  __asm call LAB_10064dcb
  __asm mov eax, dword ptr [eax + 4]
  __asm test eax, eax
  __asm jne 0x10fab4d1
  __asm mov eax, dword ptr [esi + 0xc]
  __asm pop esi
  __asm add esp, 8
  __asm ret 8
}



// Reference entry 10fab4f0; body size 40 bytes.
#line 1 "ENTRY_10fab4f0"

__declspec(naked) void FUN_10fab4f0(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push esi
  __asm push dword ptr [esp + 0x14]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x14]
  __asm push eax
  __asm call LAB_10083c26
  __asm mov eax, dword ptr [eax + 4]
  __asm test eax, eax
  __asm jne 0x10fab511
  __asm mov eax, dword ptr [esi + 0xc]
  __asm pop esi
  __asm add esp, 8
  __asm ret 8
}



// Reference entry 10fadd30; body size 41 bytes.
#line 1 "ENTRY_10fadd30"

__declspec(naked) void FUN_10fadd30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10fadd53
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



// Reference entry 10faddc0; body size 41 bytes.
#line 1 "ENTRY_10faddc0"

__declspec(naked) void FUN_10faddc0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10fadde3
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



// Reference entry 10fade50; body size 41 bytes.
#line 1 "ENTRY_10fade50"

__declspec(naked) void FUN_10fade50(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10fade73
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



// Reference entry 10fae4c0; body size 39 bytes.
#line 1 "ENTRY_10fae4c0"

__declspec(naked) void FUN_10fae4c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x1c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10fae4f0; body size 39 bytes.
#line 1 "ENTRY_10fae4f0"

__declspec(naked) void FUN_10fae4f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x1c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10fae520; body size 39 bytes.
#line 1 "ENTRY_10fae520"

__declspec(naked) void FUN_10fae520(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x20
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10faf7e0; body size 19 bytes.
#line 1 "ENTRY_10faf7e0"

void __fastcall FUN_10faf7e0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10faf800; body size 19 bytes.
#line 1 "ENTRY_10faf800"

void __fastcall FUN_10faf800(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10faf820; body size 19 bytes.
#line 1 "ENTRY_10faf820"

void __fastcall FUN_10faf820(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x20);
  }
  return;
}


// Reference entry 10faf840; body size 19 bytes.
#line 1 "ENTRY_10faf840"

void __fastcall FUN_10faf840(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10fafca0; body size 38 bytes.
#line 1 "ENTRY_10fafca0"

__declspec(naked) void FUN_10fafca0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 4]
  __asm test eax, eax
  __asm je 0x10fafcb5
  __asm lea ecx, [eax + 0xc]
  __asm call LAB_100074c3
  __asm mov eax, dword ptr [esi + 4]
  __asm pop esi
  __asm test eax, eax
  __asm je 0x10fafcc5
  __asm push 0x20
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
}



// Reference entry 10fafdd0; body size 25 bytes.
#line 1 "ENTRY_10fafdd0"

void __fastcall FUN_10fafdd0(undefined4 *param_1)

{
  thunk_FUN_10fab730(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10fafdf0; body size 25 bytes.
#line 1 "ENTRY_10fafdf0"

void __fastcall FUN_10fafdf0(undefined4 *param_1)

{
  thunk_FUN_10fab810(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10fb1100; body size 27 bytes.
#line 1 "ENTRY_10fb1100"

__declspec(naked) void FUN_10fb1100(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push dword ptr [esp + 0xc]
  __asm push eax
  __asm call LAB_10083505
  __asm mov eax, dword ptr [eax]
  __asm add eax, 0xc
  __asm add esp, 8
  __asm ret 4
}



// Reference entry 10fb1130; body size 27 bytes.
#line 1 "ENTRY_10fb1130"

__declspec(naked) void FUN_10fb1130(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push dword ptr [esp + 0xc]
  __asm push eax
  __asm call LAB_10067ef4
  __asm mov eax, dword ptr [eax]
  __asm add eax, 0xc
  __asm add esp, 8
  __asm ret 4
}



// Reference entry 10fb1160; body size 27 bytes.
#line 1 "ENTRY_10fb1160"

__declspec(naked) void FUN_10fb1160(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push dword ptr [esp + 0xc]
  __asm push eax
  __asm call LAB_10058a9e
  __asm mov eax, dword ptr [eax]
  __asm add eax, 0xc
  __asm add esp, 8
  __asm ret 4
}



// Reference entry 10fb1190; body size 27 bytes.
#line 1 "ENTRY_10fb1190"

__declspec(naked) void FUN_10fb1190(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push dword ptr [esp + 0xc]
  __asm push eax
  __asm call LAB_10069cd6
  __asm mov eax, dword ptr [eax]
  __asm add eax, 0xc
  __asm add esp, 8
  __asm ret 4
}



// Reference entry 10fb11c0; body size 27 bytes.
#line 1 "ENTRY_10fb11c0"

__declspec(naked) void FUN_10fb11c0(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push dword ptr [esp + 0xc]
  __asm push eax
  __asm call LAB_10006005
  __asm mov eax, dword ptr [eax]
  __asm add eax, 0xc
  __asm add esp, 8
  __asm ret 4
}



// Reference entry 10fb1580; body size 33 bytes.
#line 1 "ENTRY_10fb1580"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fb1580(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fb1730; body size 35 bytes.
#line 1 "ENTRY_10fb1730"

__declspec(naked) void FUN_10fb1730(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 4]
  __asm call LAB_100074c3
  __asm test byte ptr [esp + 8], 1
  __asm je 0x10fb174d
  __asm push 0x18
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10fb1920; body size 33 bytes.
#line 1 "ENTRY_10fb1920"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fb1920(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fb1950; body size 33 bytes.
#line 1 "ENTRY_10fb1950"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fb1950(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fb1980; body size 33 bytes.
#line 1 "ENTRY_10fb1980"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fb1980(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fb19b0; body size 33 bytes.
#line 1 "ENTRY_10fb19b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fb19b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fb1f90; body size 33 bytes.
#line 1 "ENTRY_10fb1f90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fb1f90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fb20f0; body size 25 bytes.
#line 1 "ENTRY_10fb20f0"

__declspec(naked) void FUN_10fb20f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x1c
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10fb2110; body size 25 bytes.
#line 1 "ENTRY_10fb2110"

__declspec(naked) void FUN_10fb2110(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x1c
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10fb2130; body size 25 bytes.
#line 1 "ENTRY_10fb2130"

__declspec(naked) void FUN_10fb2130(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x20
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10fb2150; body size 25 bytes.
#line 1 "ENTRY_10fb2150"

__declspec(naked) void FUN_10fb2150(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x1c
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10fb3df0; body size 25 bytes.
#line 1 "ENTRY_10fb3df0"

void __fastcall FUN_10fb3df0(undefined4 *param_1)

{
  thunk_FUN_10fab730(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10fb3e10; body size 25 bytes.
#line 1 "ENTRY_10fb3e10"

void __fastcall FUN_10fb3e10(undefined4 *param_1)

{
  thunk_FUN_10fab810(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10fb6aa0; body size 21 bytes.
#line 1 "ENTRY_10fb6aa0"

__declspec(naked) void FUN_10fb6aa0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x1c]
  __asm call LAB_10036af2
  __asm mov eax, dword ptr [esi + 0xc]
  __asm lea ecx, [esi + 0xc]
  __asm pop esi
  __asm jmp dword ptr [eax + 8]
}



// Reference entry 10fb6ef0; body size 32 bytes.
#line 1 "ENTRY_10fb6ef0"

__declspec(naked) void FUN_10fb6ef0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm test ecx, ecx
  __asm je 0x10fb6f0e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm call eax
  __asm test al, al
  __asm je 0x10fb6f0e
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm pop esi
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x18]
  __asm pop esi
  __asm ret
}



// Reference entry 10fb7160; body size 32 bytes.
#line 1 "ENTRY_10fb7160"

void __fastcall FUN_10fb7160(int *param_1)

{
  thunk_FUN_10fab730(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10fb7190; body size 32 bytes.
#line 1 "ENTRY_10fb7190"

void __fastcall FUN_10fb7190(int *param_1)

{
  thunk_FUN_10fab810(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10fb7220; body size 32 bytes.
#line 1 "ENTRY_10fb7220"

void __fastcall FUN_10fb7220(int *param_1)

{
  thunk_FUN_10fab930(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10fb74d0; body size 49 bytes.
#line 1 "ENTRY_10fb74d0"

__declspec(naked) void FUN_10fb74d0(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0x10
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10fb74fc
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [eax + 8], esi
  __asm mov dword ptr [eax], LAB_11959410
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10fb8590; body size 21 bytes.
#line 1 "ENTRY_10fb8590"

SCStr * __stdcall FUN_10fb8590(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCLifecycleNetworkTestWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10fb8f00; body size 48 bytes.
#line 1 "ENTRY_10fb8f00"

SCStr * __stdcall FUN_10fb8f00(SCStr *param_1,int param_2)

{
  if (param_2 != 0) {
    ((SCStr *)(param_1))->int_allocRep("invalid");
    return (SCStr *)(param_1);
  }
  ((SCStr *)(param_1))->int_allocRep("default");
  return (SCStr *)(param_1);
}


// Reference entry 10fb90e0; body size 21 bytes.
#line 1 "ENTRY_10fb90e0"

SCStr * __stdcall FUN_10fb90e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecyclenetworktest.aggregate_results");
  return (SCStr *)(param_1);
}


// Reference entry 10fb9100; body size 21 bytes.
#line 1 "ENTRY_10fb9100"

SCStr * __stdcall FUN_10fb9100(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecyclenetworktest.all_errored");
  return (SCStr *)(param_1);
}


// Reference entry 10fb9120; body size 21 bytes.
#line 1 "ENTRY_10fb9120"

SCStr * __stdcall FUN_10fb9120(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecyclenetworktest.complete");
  return (SCStr *)(param_1);
}


// Reference entry 10fb9140; body size 21 bytes.
#line 1 "ENTRY_10fb9140"

SCStr * __stdcall FUN_10fb9140(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecyclenetworktest.error");
  return (SCStr *)(param_1);
}


// Reference entry 10fb9160; body size 21 bytes.
#line 1 "ENTRY_10fb9160"

SCStr * __stdcall FUN_10fb9160(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecyclenetworktest.init");
  return (SCStr *)(param_1);
}


// Reference entry 10fb9180; body size 21 bytes.
#line 1 "ENTRY_10fb9180"

SCStr * __stdcall FUN_10fb9180(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecyclenetworktest.connectivity_test");
  return (SCStr *)(param_1);
}


// Reference entry 10fb91a0; body size 21 bytes.
#line 1 "ENTRY_10fb91a0"

SCStr * __stdcall FUN_10fb91a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecyclenetworktest.start_wifi");
  return (SCStr *)(param_1);
}


// Reference entry 10fb91c0; body size 21 bytes.
#line 1 "ENTRY_10fb91c0"

SCStr * __stdcall FUN_10fb91c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecyclenetworktest.wifi_credential");
  return (SCStr *)(param_1);
}


// Reference entry 10fb91e0; body size 21 bytes.
#line 1 "ENTRY_10fb91e0"

SCStr * __stdcall FUN_10fb91e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecyclenetworktest.wifi_names");
  return (SCStr *)(param_1);
}


// Reference entry 10fb9200; body size 21 bytes.
#line 1 "ENTRY_10fb9200"

SCStr * __stdcall FUN_10fb9200(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecyclenetworktest.wifi_submitting");
  return (SCStr *)(param_1);
}


// Reference entry 10fb9220; body size 18 bytes.
#line 1 "ENTRY_10fb9220"

undefined4 __thiscall Recovered_Bulk::m_FUN_10fb9220(int param_2)
{
  int param_1 = (int )this;
  if (param_2 == 0) {
    return (undefined4)(*(undefined4 *)(param_1 + 0x24));
  }
  return (undefined4)(0);
}


// Reference entry 10fb9250; body size 35 bytes.
#line 1 "ENTRY_10fb9250"

__declspec(naked) void FUN_10fb9250(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x20ea
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10fb9470; body size 28 bytes.
#line 1 "ENTRY_10fb9470"

__declspec(naked) void FUN_10fb9470(void)

{
  __asm mov ecx, dword ptr [ecx + 0xd0]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10fb9486
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10fb94a0; body size 45 bytes.
#line 1 "ENTRY_10fb94a0"

__declspec(naked) void FUN_10fb94a0(void)

{
  __asm sub dword ptr [esp + 8], 1
  __asm je 0x10fb94b4
  __asm mov eax, dword ptr [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret 8
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10fb94c7
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10fb94e0; body size 45 bytes.
#line 1 "ENTRY_10fb94e0"

__declspec(naked) void FUN_10fb94e0(void)

{
  __asm cmp dword ptr [esp + 8], 0
  __asm je 0x10fb94f4
  __asm mov eax, dword ptr [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret 8
  __asm mov ecx, dword ptr [ecx + 0x14]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10fb9507
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10fbc490; body size 21 bytes.
#line 1 "ENTRY_10fbc490"

SCStr * __stdcall FUN_10fbc490(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("LifecycleNetworkTestWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10fbfe40; body size 18 bytes.
#line 1 "ENTRY_10fbfe40"

__declspec(naked) void FUN_10fbfe40(void)

{
  __asm sub dword ptr [esp + 4], 2
  __asm jne 0x10fbfe4f
  __asm mov ecx, dword ptr [ecx + 8]
  __asm call LAB_1006aac8
  __asm ret 8
}



// Reference entry 10fc0aa0; body size 33 bytes.
#line 1 "ENTRY_10fc0aa0"

void __thiscall Recovered_Bulk::m_FUN_10fc0aa0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10fc0ad0((int)(param_2),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x24);
  return;
}


// Reference entry 10fc0bc0; body size 49 bytes.
#line 1 "ENTRY_10fc0bc0"

__declspec(naked) void FUN_10fc0bc0(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x18]
  __asm lea eax, [esp + 8]
  __asm push edi
  __asm push eax
  __asm mov esi, ecx
  __asm call LAB_1008a472
  __asm mov eax, dword ptr [esp + 0x10]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10fc0be7
  __asm mov ecx, dword ptr [edi]
  __asm cmp ecx, dword ptr [eax + 0x10]
  __asm jae 0x10fc0be9
  __asm mov eax, dword ptr [esi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}



// Reference entry 10fc12c0; body size 48 bytes.
#line 1 "ENTRY_10fc12c0"

__declspec(naked) void FUN_10fc12c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x24
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
  __asm ret 4
}



// Reference entry 10fc1d60; body size 19 bytes.
#line 1 "ENTRY_10fc1d60"

void __fastcall FUN_10fc1d60(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x24);
  }
  return;
}


// Reference entry 10fc1d80; body size 28 bytes.
#line 1 "ENTRY_10fc1d80"

void __fastcall FUN_10fc1d80(int *param_1)

{
  thunk_FUN_10fc0ad0((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x24);
  return;
}


// Reference entry 10fc1e90; body size 28 bytes.
#line 1 "ENTRY_10fc1e90"

void __fastcall FUN_10fc1e90(int *param_1)

{
  thunk_FUN_10fc0ad0((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x24);
  return;
}


// Reference entry 10fc27e0; body size 33 bytes.
#line 1 "ENTRY_10fc27e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc27e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fc2a70; body size 33 bytes.
#line 1 "ENTRY_10fc2a70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc2a70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fc2aa0; body size 33 bytes.
#line 1 "ENTRY_10fc2aa0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc2aa0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fc2bd0; body size 33 bytes.
#line 1 "ENTRY_10fc2bd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc2bd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fc2c00; body size 33 bytes.
#line 1 "ENTRY_10fc2c00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc2c00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fc2c30; body size 33 bytes.
#line 1 "ENTRY_10fc2c30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc2c30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fc2c60; body size 33 bytes.
#line 1 "ENTRY_10fc2c60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc2c60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fc2c90; body size 33 bytes.
#line 1 "ENTRY_10fc2c90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc2c90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fc2cc0; body size 33 bytes.
#line 1 "ENTRY_10fc2cc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc2cc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fc2da0; body size 33 bytes.
#line 1 "ENTRY_10fc2da0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc2da0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fc2dd0; body size 33 bytes.
#line 1 "ENTRY_10fc2dd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc2dd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fc2e30; body size 25 bytes.
#line 1 "ENTRY_10fc2e30"

__declspec(naked) void FUN_10fc2e30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x24
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10fc3650; body size 31 bytes.
#line 1 "ENTRY_10fc3650"

int * FUN_10fc3650(int *param_1)

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


// Reference entry 10fc3d60; body size 37 bytes.
#line 1 "ENTRY_10fc3d60"

__declspec(naked) void FUN_10fc3d60(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x2c]
  __asm call eax
  __asm test al, al
  __asm jne 0x10fc3d81
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x58]
  __asm call eax
  __asm test al, al
  __asm jne 0x10fc3d81
  __asm pop esi
  __asm ret
  __asm mov al, 1
  __asm pop esi
  __asm ret
}



// Reference entry 10fc3db0; body size 37 bytes.
#line 1 "ENTRY_10fc3db0"

__declspec(naked) void FUN_10fc3db0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x2c]
  __asm call eax
  __asm test al, al
  __asm jne 0x10fc3dd1
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x60]
  __asm call eax
  __asm test al, al
  __asm jne 0x10fc3dd1
  __asm pop esi
  __asm ret
  __asm mov al, 1
  __asm pop esi
  __asm ret
}



// Reference entry 10fc3fd0; body size 33 bytes.
#line 1 "ENTRY_10fc3fd0"

void __fastcall FUN_10fc3fd0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10fc0ad0((int)(param_1),(int)(*(undefined4 *)(iVar1 + 4)));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10fc4020; body size 42 bytes.
#line 1 "ENTRY_10fc4020"

__declspec(naked) void FUN_10fc4020(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10fc4045
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [eax + 8], esi
  __asm mov dword ptr [eax], LAB_1195b27c
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10fc4060; body size 42 bytes.
#line 1 "ENTRY_10fc4060"

__declspec(naked) void FUN_10fc4060(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10fc4085
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [eax + 8], esi
  __asm mov dword ptr [eax], LAB_1195a728
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10fc4340; body size 49 bytes.
#line 1 "ENTRY_10fc4340"

__declspec(naked) void FUN_10fc4340(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0x10
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10fc436c
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_1195a804
  __asm mov byte ptr [eax + 0xc], 0
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10fc4660; body size 45 bytes.
#line 1 "ENTRY_10fc4660"

__declspec(naked) void FUN_10fc4660(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10fc4688
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_1195b27c
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10fc5b40; body size 34 bytes.
#line 1 "ENTRY_10fc5b40"

__declspec(naked) void FUN_10fc5b40(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm test ecx, ecx
  __asm je 0x10fc5b5e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x2c]
  __asm call eax
  __asm test al, al
  __asm jne 0x10fc5b5e
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm pop esi
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x14]
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 10fc5c20; body size 21 bytes.
#line 1 "ENTRY_10fc5c20"

SCStr * __stdcall FUN_10fc5c20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_player_removal.display_network_test");
  return (SCStr *)(param_1);
}


// Reference entry 10fc5c40; body size 21 bytes.
#line 1 "ENTRY_10fc5c40"

SCStr * __stdcall FUN_10fc5c40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_player_removal.complete");
  return (SCStr *)(param_1);
}


// Reference entry 10fc5c60; body size 21 bytes.
#line 1 "ENTRY_10fc5c60"

SCStr * __stdcall FUN_10fc5c60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_player_removal.confirm_removal");
  return (SCStr *)(param_1);
}


// Reference entry 10fc5c80; body size 21 bytes.
#line 1 "ENTRY_10fc5c80"

SCStr * __stdcall FUN_10fc5c80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_player_removal.factory_reset");
  return (SCStr *)(param_1);
}


// Reference entry 10fc5ca0; body size 21 bytes.
#line 1 "ENTRY_10fc5ca0"

SCStr * __stdcall FUN_10fc5ca0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_player_removal.init");
  return (SCStr *)(param_1);
}


// Reference entry 10fc5cc0; body size 21 bytes.
#line 1 "ENTRY_10fc5cc0"

SCStr * __stdcall FUN_10fc5cc0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_player_removal.intro");
  return (SCStr *)(param_1);
}


// Reference entry 10fc5ce0; body size 21 bytes.
#line 1 "ENTRY_10fc5ce0"

SCStr * __stdcall FUN_10fc5ce0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_player_removal.network_test_intro");
  return (SCStr *)(param_1);
}


// Reference entry 10fc5d00; body size 21 bytes.
#line 1 "ENTRY_10fc5d00"

SCStr * __stdcall FUN_10fc5d00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_player_removal.ready_for_download");
  return (SCStr *)(param_1);
}


// Reference entry 10fc5d20; body size 21 bytes.
#line 1 "ENTRY_10fc5d20"

SCStr * __stdcall FUN_10fc5d20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_player_removal.reset_failed");
  return (SCStr *)(param_1);
}


// Reference entry 10fc5d40; body size 21 bytes.
#line 1 "ENTRY_10fc5d40"

SCStr * __stdcall FUN_10fc5d40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_player_removal.terms_of_use");
  return (SCStr *)(param_1);
}


// Reference entry 10fc5d60; body size 21 bytes.
#line 1 "ENTRY_10fc5d60"

SCStr * __stdcall FUN_10fc5d60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_player_removal.network_test_fail");
  return (SCStr *)(param_1);
}


// Reference entry 10fc5d80; body size 21 bytes.
#line 1 "ENTRY_10fc5d80"

SCStr * __stdcall FUN_10fc5d80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_player_removal.network_test_pass");
  return (SCStr *)(param_1);
}


// Reference entry 10fc5dc0; body size 30 bytes.
#line 1 "ENTRY_10fc5dc0"

__declspec(naked) void FUN_10fc5dc0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm test ecx, ecx
  __asm je 0x10fc5dda
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x2c]
  __asm call eax
  __asm test al, al
  __asm jne 0x10fc5dda
  __asm mov eax, dword ptr [esi + 0xc]
  __asm pop esi
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 10fc5e00; body size 26 bytes.
#line 1 "ENTRY_10fc5e00"

__declspec(naked) void FUN_10fc5e00(void)

{
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xa0]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 10fc5e20; body size 35 bytes.
#line 1 "ENTRY_10fc5e20"

__declspec(naked) void FUN_10fc5e20(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2665
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10fc5e60; body size 23 bytes.
#line 1 "ENTRY_10fc5e60"

__declspec(naked) void FUN_10fc5e60(void)

{
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x7c]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 10fc89e0; body size 21 bytes.
#line 1 "ENTRY_10fc89e0"

SCStr * __stdcall FUN_10fc89e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCLifecyclePlayerRemovalWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10fc9370; body size 24 bytes.
#line 1 "ENTRY_10fc9370"

__declspec(naked) void FUN_10fc9370(void)

{
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm test ecx, ecx
  __asm je 0x10fc9385
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x40]
  __asm call eax
  __asm test al, al
  __asm je 0x10fc9385
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 10fc93c0; body size 39 bytes.
#line 1 "ENTRY_10fc93c0"

__declspec(naked) void FUN_10fc93c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm mov eax, dword ptr [eax + 0x9c]
  __asm call eax
  __asm test al, al
  __asm je 0x10fc93e3
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x6c]
  __asm call eax
  __asm test al, al
  __asm je 0x10fc93e3
  __asm mov al, 1
  __asm pop esi
  __asm ret
  __asm xor al, al
  __asm pop esi
  __asm ret
}



// Reference entry 10fc93f0; body size 63 bytes.
#line 1 "ENTRY_10fc93f0"

__declspec(naked) void FUN_10fc93f0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, esi
  __asm push offset LAB_1187c800
  __asm call LAB_1008ca83
  __asm test al, al
  __asm jne 0x10fc9429
  __asm push offset LAB_1187c820
  __asm mov ecx, esi
  __asm call LAB_1008ca83
  __asm test al, al
  __asm jne 0x10fc9429
  __asm push offset LAB_1187c84c
  __asm mov ecx, esi
  __asm call LAB_1008ca83
  __asm test al, al
  __asm jne 0x10fc9429
  __asm pop esi
  __asm ret 4
  __asm mov al, 1
  __asm pop esi
  __asm ret 4
}



// Reference entry 10fc9570; body size 61 bytes.
#line 1 "ENTRY_10fc9570"

__declspec(naked) void FUN_10fc9570(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm test ecx, ecx
  __asm je 0x10fc95ab
  __asm mov eax, dword ptr [ecx]
  __asm push dword ptr [esi + 0x14]
  __asm call dword ptr [eax + 0xcc]
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x30]
  __asm call eax
  __asm test al, al
  __asm jne 0x10fc95ab
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov eax, dword ptr [eax + 0x94]
  __asm call eax
  __asm test al, al
  __asm jne 0x10fc95ab
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_1001b9c3
  __asm pop esi
  __asm ret
}



// Reference entry 10fc9ce0; body size 27 bytes.
#line 1 "ENTRY_10fc9ce0"

__declspec(naked) void FUN_10fc9ce0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0xea60
  __asm lea ecx, [esi + 0x1c]
  __asm call LAB_100913f8
  __asm mov dword ptr [esi + 0x34], eax
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_10097460
}



// Reference entry 10fcaf50; body size 21 bytes.
#line 1 "ENTRY_10fcaf50"

SCStr * __stdcall FUN_10fcaf50(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10fcbac0; body size 18 bytes.
#line 1 "ENTRY_10fcbac0"

__declspec(naked) void FUN_10fcbac0(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xcc]
  __asm push eax
  __asm call LAB_1000296e
  __asm add esp, 4
  __asm ret
}



// Reference entry 10fcc0a0; body size 32 bytes.
#line 1 "ENTRY_10fcc0a0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10fcc0a0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10fcbda0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x60);
  }
  return (undefined4)(param_1);
}


// Reference entry 10fcc880; body size 25 bytes.
#line 1 "ENTRY_10fcc880"

__declspec(naked) void FUN_10fcc880(void)

{
  __asm mov ecx, dword ptr [ecx + 0x48]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10fcc893
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10fcc8a0; body size 25 bytes.
#line 1 "ENTRY_10fcc8a0"

__declspec(naked) void FUN_10fcc8a0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x48]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10fcc8b3
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10fccee0; body size 33 bytes.
#line 1 "ENTRY_10fccee0"

__declspec(naked) void FUN_10fccee0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm call LAB_1001b91e
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [esi + 0x14], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi], LAB_1195b5c8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10fccf20; body size 38 bytes.
#line 1 "ENTRY_10fccf20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fccf20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjIndexListener);
  thunk_FUN_11164740();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fcd4b0; body size 63 bytes.
#line 1 "ENTRY_10fcd4b0"

__declspec(naked) void FUN_10fcd4b0(void)

{
  __asm mov eax, dword ptr [ecx + 0x84]
  __asm mov edx, dword ptr [ecx + 0x80]
  __asm sub eax, edx
  __asm mov ecx, dword ptr [esp + 8]
  __asm sar eax, 3
  __asm cmp ecx, eax
  __asm jb 0x10fcd4d6
  __asm mov eax, dword ptr [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret 8
  __asm mov ecx, dword ptr [edx + ecx*8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10fcd4e9
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10fcd510; body size 21 bytes.
#line 1 "ENTRY_10fcd510"

SCStr * __stdcall FUN_10fcd510(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10fcd530; body size 16 bytes.
#line 1 "ENTRY_10fcd530"

int __fastcall FUN_10fcd530(int param_1)

{
  return (int)(*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80) >> 3);
}


// Reference entry 10fcd550; body size 35 bytes.
#line 1 "ENTRY_10fcd550"

__declspec(naked) void FUN_10fcd550(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x1af
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10fcdd50; body size 59 bytes.
#line 1 "ENTRY_10fcdd50"

__declspec(naked) void FUN_10fcdd50(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x10fcdd7c
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10fcdd73
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_1009a3b8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10fcdf20; body size 24 bytes.
#line 1 "ENTRY_10fcdf20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fcdf20(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fce490; body size 17 bytes.
#line 1 "ENTRY_10fce490"

void __fastcall FUN_10fce490(undefined4 *param_1)

{
  thunk_FUN_10fcd700(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 10fce530; body size 37 bytes.
#line 1 "ENTRY_10fce530"

__declspec(naked) void FUN_10fce530(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 8]
  __asm mov dword ptr [esi], LAB_1195b8d8
  __asm call LAB_1006cecc
  __asm mov dword ptr [esi], LAB_118aa708
  __asm dec dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esi], LAB_1186d2f4
  __asm pop esi
  __asm ret
}



// Reference entry 10fce700; body size 59 bytes.
#line 1 "ENTRY_10fce700"

__declspec(naked) void FUN_10fce700(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 8]
  __asm mov dword ptr [esi], LAB_1195b8d8
  __asm call LAB_1006cecc
  __asm mov dword ptr [esi], LAB_118aa708
  __asm dec dword ptr [LAB_121a0e68]
  __asm test byte ptr [esp + 8], 1
  __asm mov dword ptr [esi], LAB_1186d2f4
  __asm je 0x10fce735
  __asm push 0x18
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10fce8c0; body size 20 bytes.
#line 1 "ENTRY_10fce8c0"

void __thiscall Recovered_Bulk::m_FUN_10fce8c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10fcd700(param_2,param_3,param_1);
  return;
}


// Reference entry 10fcec60; body size 60 bytes.
#line 1 "ENTRY_10fcec60"

__declspec(naked) void FUN_10fcec60(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x10fcec89
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10fcec96
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
}



// Reference entry 10fcecc0; body size 21 bytes.
#line 1 "ENTRY_10fcecc0"

SCStr * __stdcall FUN_10fcecc0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10fced10; body size 32 bytes.
#line 1 "ENTRY_10fced10"

SCStr * __stdcall FUN_10fced10(SCStr *param_1, unsigned int recovered_unused_stack_0)

{
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 10fced40; body size 32 bytes.
#line 1 "ENTRY_10fced40"

SCStr * __stdcall FUN_10fced40(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 10fced70; body size 32 bytes.
#line 1 "ENTRY_10fced70"

SCStr * __stdcall FUN_10fced70(SCStr *param_1)

{
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 10fcedc0; body size 21 bytes.
#line 1 "ENTRY_10fcedc0"

SCStr * __stdcall FUN_10fcedc0(SCStr *param_1, unsigned int recovered_unused_stack_0)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10fcede0; body size 21 bytes.
#line 1 "ENTRY_10fcede0"

SCStr * __stdcall FUN_10fcede0(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10fcee00; body size 21 bytes.
#line 1 "ENTRY_10fcee00"

SCStr * __stdcall FUN_10fcee00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10fcee20; body size 21 bytes.
#line 1 "ENTRY_10fcee20"

SCStr * __stdcall FUN_10fcee20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10fcee40; body size 19 bytes.
#line 1 "ENTRY_10fcee40"

__declspec(naked) void FUN_10fcee40(void)

{
  __asm push dword ptr [esp + 4]
  __asm call LAB_1008339d
  __asm mov eax, dword ptr [esp + 8]
  __asm add esp, 4
  __asm ret 4
}



// Reference entry 10fcee60; body size 19 bytes.
#line 1 "ENTRY_10fcee60"

__declspec(naked) void FUN_10fcee60(void)

{
  __asm push dword ptr [esp + 4]
  __asm call LAB_1008339d
  __asm mov eax, dword ptr [esp + 8]
  __asm add esp, 4
  __asm ret 4
}



// Reference entry 10fcee80; body size 21 bytes.
#line 1 "ENTRY_10fcee80"

SCStr * __stdcall FUN_10fcee80(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10fcef20; body size 32 bytes.
#line 1 "ENTRY_10fcef20"

__declspec(naked) void FUN_10fcef20(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [ecx + eax*8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10fcef3a
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10fcefc0; body size 18 bytes.
#line 1 "ENTRY_10fcefc0"

SCStr * __stdcall FUN_10fcefc0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep((char *)0x0);
  return (SCStr *)(param_1);
}


// Reference entry 10fcf010; body size 32 bytes.
#line 1 "ENTRY_10fcf010"

SCStr * __stdcall FUN_10fcf010(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 10fcf040; body size 32 bytes.
#line 1 "ENTRY_10fcf040"

SCStr * __stdcall FUN_10fcf040(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 10fcf090; body size 21 bytes.
#line 1 "ENTRY_10fcf090"

SCStr * __stdcall FUN_10fcf090(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10fcf0b0; body size 21 bytes.
#line 1 "ENTRY_10fcf0b0"

SCStr * __stdcall FUN_10fcf0b0(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10fcf0d0; body size 19 bytes.
#line 1 "ENTRY_10fcf0d0"

__declspec(naked) void FUN_10fcf0d0(void)

{
  __asm push dword ptr [esp + 4]
  __asm call LAB_1008339d
  __asm mov eax, dword ptr [esp + 8]
  __asm add esp, 4
  __asm ret 8
}



// Reference entry 10fcf110; body size 21 bytes.
#line 1 "ENTRY_10fcf110"

SCStr * __stdcall FUN_10fcf110(SCStr *param_1, unsigned int recovered_unused_stack_0)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10fcf130; body size 21 bytes.
#line 1 "ENTRY_10fcf130"

SCStr * __stdcall FUN_10fcf130(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10fcf150; body size 21 bytes.
#line 1 "ENTRY_10fcf150"

SCStr * __stdcall FUN_10fcf150(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10fcf180; body size 21 bytes.
#line 1 "ENTRY_10fcf180"

SCStr * __stdcall FUN_10fcf180(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10fcf1a0; body size 20 bytes.
#line 1 "ENTRY_10fcf1a0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10fcf1a0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10fcf1c0; body size 21 bytes.
#line 1 "ENTRY_10fcf1c0"

SCStr * __stdcall FUN_10fcf1c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10fcf1f0; body size 32 bytes.
#line 1 "ENTRY_10fcf1f0"

SCStr * __stdcall FUN_10fcf1f0(SCStr *param_1, unsigned int recovered_unused_stack_0)

{
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 10fcf220; body size 32 bytes.
#line 1 "ENTRY_10fcf220"

SCStr * __stdcall FUN_10fcf220(SCStr *param_1, unsigned int recovered_unused_stack_0)

{
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 10fcf250; body size 19 bytes.
#line 1 "ENTRY_10fcf250"

__declspec(naked) void FUN_10fcf250(void)

{
  __asm push dword ptr [esp + 4]
  __asm call LAB_1005eb56
  __asm mov eax, dword ptr [esp + 8]
  __asm add esp, 4
  __asm ret 4
}



// Reference entry 10fcf420; body size 59 bytes.
#line 1 "ENTRY_10fcf420"

__declspec(naked) void FUN_10fcf420(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x10fcf44c
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10fcf443
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_1009a3b8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10fcf640; body size 21 bytes.
#line 1 "ENTRY_10fcf640"

SCStr * __stdcall FUN_10fcf640(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10fcf7c0; body size 41 bytes.
#line 1 "ENTRY_10fcf7c0"

__declspec(naked) void FUN_10fcf7c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10fcf7e3
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



// Reference entry 10fcf800; body size 41 bytes.
#line 1 "ENTRY_10fcf800"

__declspec(naked) void FUN_10fcf800(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10fcf823
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



// Reference entry 10fcf860; body size 41 bytes.
#line 1 "ENTRY_10fcf860"

__declspec(naked) void FUN_10fcf860(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10fcf883
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



// Reference entry 10fd0660; body size 19 bytes.
#line 1 "ENTRY_10fd0660"

void __fastcall FUN_10fd0660(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10fd0ea0; body size 45 bytes.
#line 1 "ENTRY_10fd0ea0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fd0ea0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fd1020; body size 33 bytes.
#line 1 "ENTRY_10fd1020"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fd1020(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fd17f0; body size 21 bytes.
#line 1 "ENTRY_10fd17f0"

SCStr * __stdcall FUN_10fd17f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCCompilationAlbumsSettingItem");
  return (SCStr *)(param_1);
}


// Reference entry 10fd1810; body size 21 bytes.
#line 1 "ENTRY_10fd1810"

SCStr * __stdcall FUN_10fd1810(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCSpinnerSettingsProperty");
  return (SCStr *)(param_1);
}


// Reference entry 10fd1a70; body size 21 bytes.
#line 1 "ENTRY_10fd1a70"

SCStr * __stdcall FUN_10fd1a70(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SetDateTime");
  return (SCStr *)(param_1);
}


// Reference entry 10fd1a90; body size 21 bytes.
#line 1 "ENTRY_10fd1a90"

SCStr * __stdcall FUN_10fd1a90(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategorySettings");
  return (SCStr *)(param_1);
}


// Reference entry 10fd1ca0; body size 21 bytes.
#line 1 "ENTRY_10fd1ca0"

SCStr * __stdcall FUN_10fd1ca0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCITimeSettingsProperty");
  return (SCStr *)(param_1);
}


// Reference entry 10fd1cc0; body size 21 bytes.
#line 1 "ENTRY_10fd1cc0"

SCStr * __stdcall FUN_10fd1cc0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10fd1ce0; body size 20 bytes.
#line 1 "ENTRY_10fd1ce0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10fd1ce0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 10fd24f0; body size 25 bytes.
#line 1 "ENTRY_10fd24f0"

__declspec(naked) void FUN_10fd24f0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x10]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10fd2503
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10fd2570; body size 23 bytes.
#line 1 "ENTRY_10fd2570"

void __stdcall FUN_10fd2570(unsigned int recovered_unused_stack_0)

{
  thunk_FUN_112af4e0("MLMSettings",1,"Error getting Schedule Index Update setting ");
  return;
}


// Reference entry 10fd2590; body size 23 bytes.
#line 1 "ENTRY_10fd2590"

void __stdcall FUN_10fd2590(unsigned int recovered_unused_stack_0)

{
  thunk_FUN_112af4e0("MLMSettings",1,"Error getting View Contributing Artists System Property");
  return;
}


// Reference entry 10fd9f60; body size 45 bytes.
#line 1 "ENTRY_10fd9f60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fd9f60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fdac90; body size 35 bytes.
#line 1 "ENTRY_10fdac90"

undefined4 __thiscall Recovered_Bulk::m_FUN_10fdac90(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10fd9460();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe8);
  }
  return (undefined4)(param_1);
}


// Reference entry 10fdaf30; body size 21 bytes.
#line 1 "ENTRY_10fdaf30"

SCStr * __stdcall FUN_10fdaf30(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAlarmSettingsDurationItem");
  return (SCStr *)(param_1);
}


// Reference entry 10fdaf50; body size 21 bytes.
#line 1 "ENTRY_10fdaf50"

SCStr * __stdcall FUN_10fdaf50(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAlarmSettingsDurationNoLimitItem");
  return (SCStr *)(param_1);
}


// Reference entry 10fdaf70; body size 21 bytes.
#line 1 "ENTRY_10fdaf70"

SCStr * __stdcall FUN_10fdaf70(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAlarmSettingsEnabledItem");
  return (SCStr *)(param_1);
}


// Reference entry 10fdaf90; body size 21 bytes.
#line 1 "ENTRY_10fdaf90"

SCStr * __stdcall FUN_10fdaf90(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAlarmSettingsFrequencyItem");
  return (SCStr *)(param_1);
}


// Reference entry 10fdafb0; body size 21 bytes.
#line 1 "ENTRY_10fdafb0"

SCStr * __stdcall FUN_10fdafb0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAlarmSettingsIncludeGroupedZonesItem");
  return (SCStr *)(param_1);
}


// Reference entry 10fdafd0; body size 21 bytes.
#line 1 "ENTRY_10fdafd0"

SCStr * __stdcall FUN_10fdafd0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAlarmSettingsShuffleMusicItem");
  return (SCStr *)(param_1);
}


// Reference entry 10fdaff0; body size 21 bytes.
#line 1 "ENTRY_10fdaff0"

SCStr * __stdcall FUN_10fdaff0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAlarmSettingsSnoozeDurationItem");
  return (SCStr *)(param_1);
}


// Reference entry 10fdb010; body size 21 bytes.
#line 1 "ENTRY_10fdb010"

SCStr * __stdcall FUN_10fdb010(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAlarmSettingsSnoozeItem");
  return (SCStr *)(param_1);
}


// Reference entry 10fdb030; body size 21 bytes.
#line 1 "ENTRY_10fdb030"

SCStr * __stdcall FUN_10fdb030(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAlarmSettingsTimeItem");
  return (SCStr *)(param_1);
}


// Reference entry 10fdb050; body size 21 bytes.
#line 1 "ENTRY_10fdb050"

SCStr * __stdcall FUN_10fdb050(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAlarmSettingsVolumeItem");
  return (SCStr *)(param_1);
}


// Reference entry 10fdb070; body size 21 bytes.
#line 1 "ENTRY_10fdb070"

SCStr * __stdcall FUN_10fdb070(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAlarmSettingsZoneItem");
  return (SCStr *)(param_1);
}


// Reference entry 10fdb090; body size 21 bytes.
#line 1 "ENTRY_10fdb090"

SCStr * __stdcall FUN_10fdb090(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("DisplayCustomControl.AlarmFrequency");
  return (SCStr *)(param_1);
}


// Reference entry 10fdb320; body size 21 bytes.
#line 1 "ENTRY_10fdb320"

SCStr * __stdcall FUN_10fdb320(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategorySettings");
  return (SCStr *)(param_1);
}


// Reference entry 10fdb340; body size 35 bytes.
#line 1 "ENTRY_10fdb340"

__declspec(naked) void FUN_10fdb340(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x20d1
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10fdb370; body size 21 bytes.
#line 1 "ENTRY_10fdb370"

SCStr * __stdcall FUN_10fdb370(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10fdd050; body size 40 bytes.
#line 1 "ENTRY_10fdd050"

__declspec(naked) void FUN_10fdd050(void)

{
  __asm push esi
  __asm xor eax, eax
  __asm lea esi, [ecx + 0x10]
  __asm cmp ecx, 0x90
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm cmove esi, eax
  __asm mov dword ptr [edi], esi
  __asm test esi, esi
  __asm je 0x10fdd071
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [edx + 4]
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10fdd090; body size 40 bytes.
#line 1 "ENTRY_10fdd090"

__declspec(naked) void FUN_10fdd090(void)

{
  __asm push esi
  __asm xor eax, eax
  __asm lea esi, [ecx + 0x10]
  __asm cmp ecx, 0x90
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm cmove esi, eax
  __asm mov dword ptr [edi], esi
  __asm test esi, esi
  __asm je 0x10fdd0b1
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [edx + 4]
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10fdd0d0; body size 40 bytes.
#line 1 "ENTRY_10fdd0d0"

__declspec(naked) void FUN_10fdd0d0(void)

{
  __asm push esi
  __asm xor eax, eax
  __asm lea esi, [ecx + 0x10]
  __asm cmp ecx, 0x90
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm cmove esi, eax
  __asm mov dword ptr [edi], esi
  __asm test esi, esi
  __asm je 0x10fdd0f1
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [edx + 4]
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10fdd110; body size 40 bytes.
#line 1 "ENTRY_10fdd110"

__declspec(naked) void FUN_10fdd110(void)

{
  __asm push esi
  __asm xor eax, eax
  __asm lea esi, [ecx + 0x10]
  __asm cmp ecx, 0x90
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm cmove esi, eax
  __asm mov dword ptr [edi], esi
  __asm test esi, esi
  __asm je 0x10fdd131
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [edx + 4]
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10fdd150; body size 40 bytes.
#line 1 "ENTRY_10fdd150"

__declspec(naked) void FUN_10fdd150(void)

{
  __asm push esi
  __asm xor eax, eax
  __asm lea esi, [ecx + 0x10]
  __asm cmp ecx, 0x90
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm cmove esi, eax
  __asm mov dword ptr [edi], esi
  __asm test esi, esi
  __asm je 0x10fdd171
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [edx + 4]
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10fdd190; body size 40 bytes.
#line 1 "ENTRY_10fdd190"

__declspec(naked) void FUN_10fdd190(void)

{
  __asm push esi
  __asm xor eax, eax
  __asm lea esi, [ecx + 0x10]
  __asm cmp ecx, 0x90
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm cmove esi, eax
  __asm mov dword ptr [edi], esi
  __asm test esi, esi
  __asm je 0x10fdd1b1
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [edx + 4]
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10fdd1d0; body size 20 bytes.
#line 1 "ENTRY_10fdd1d0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10fdd1d0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10fdd210; body size 53 bytes.
#line 1 "ENTRY_10fdd210"

__declspec(naked) void FUN_10fdd210(void)

{
  __asm mov ecx, dword ptr [ecx + 0x50]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x20]
  __asm call eax
  __asm movzx eax, al
  __asm neg eax
  __asm push offset LAB_11882ff0
  __asm sbb eax, eax
  __asm add eax, 0x208b
  __asm push eax
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10fdd260; body size 53 bytes.
#line 1 "ENTRY_10fdd260"

__declspec(naked) void FUN_10fdd260(void)

{
  __asm mov ecx, dword ptr [ecx + 0x50]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x20]
  __asm call eax
  __asm movzx eax, al
  __asm neg eax
  __asm push offset LAB_11882ff0
  __asm sbb eax, eax
  __asm add eax, 0x208b
  __asm push eax
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10fdd2b0; body size 20 bytes.
#line 1 "ENTRY_10fdd2b0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10fdd2b0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 10fdd2d0; body size 53 bytes.
#line 1 "ENTRY_10fdd2d0"

__declspec(naked) void FUN_10fdd2d0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x50]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x20]
  __asm call eax
  __asm movzx eax, al
  __asm neg eax
  __asm push offset LAB_11882ff0
  __asm sbb eax, eax
  __asm add eax, 0x208b
  __asm push eax
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10fdd320; body size 53 bytes.
#line 1 "ENTRY_10fdd320"

__declspec(naked) void FUN_10fdd320(void)

{
  __asm mov ecx, dword ptr [ecx + 0x50]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x20]
  __asm call eax
  __asm movzx eax, al
  __asm neg eax
  __asm push offset LAB_11882ff0
  __asm sbb eax, eax
  __asm add eax, 0x208b
  __asm push eax
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10fdd370; body size 20 bytes.
#line 1 "ENTRY_10fdd370"

SCStr * __thiscall Recovered_Bulk::m_FUN_10fdd370(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x20));
  return (SCStr *)(param_2);
}


// Reference entry 10fdd390; body size 53 bytes.
#line 1 "ENTRY_10fdd390"

__declspec(naked) void FUN_10fdd390(void)

{
  __asm mov ecx, dword ptr [ecx + 0x50]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x20]
  __asm call eax
  __asm movzx eax, al
  __asm neg eax
  __asm push offset LAB_11882ff0
  __asm sbb eax, eax
  __asm add eax, 0x208b
  __asm push eax
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10fdd490; body size 53 bytes.
#line 1 "ENTRY_10fdd490"

__declspec(naked) void FUN_10fdd490(void)

{
  __asm mov ecx, dword ptr [ecx + 0x50]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x20]
  __asm call eax
  __asm movzx eax, al
  __asm neg eax
  __asm push offset LAB_11882ff0
  __asm sbb eax, eax
  __asm add eax, 0x208b
  __asm push eax
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10fdd8d0; body size 60 bytes.
#line 1 "ENTRY_10fdd8d0"

__declspec(naked) void FUN_10fdd8d0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi - 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x48]
  __asm call eax
  __asm mov edx, dword ptr [esi + 0xb8]
  __asm xor ecx, ecx
  __asm push 0
  __asm cmp esi, 0x18
  __asm mov byte ptr [edx + 0x10], al
  __asm mov eax, esi
  __asm cmove eax, ecx
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_1188086c
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 0x18]
  __asm call LAB_10013543
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10fddaa0; body size 63 bytes.
#line 1 "ENTRY_10fddaa0"

__declspec(naked) void FUN_10fddaa0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi - 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x90]
  __asm call eax
  __asm mov edx, dword ptr [esi + 0xb8]
  __asm xor ecx, ecx
  __asm push 0
  __asm cmp esi, 0x18
  __asm mov byte ptr [edx + 0x10], al
  __asm mov eax, esi
  __asm cmove eax, ecx
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_1188086c
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 0x18]
  __asm call LAB_10013543
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10fddea0; body size 41 bytes.
#line 1 "ENTRY_10fddea0"

__declspec(naked) void FUN_10fddea0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm xor ecx, ecx
  __asm push 0
  __asm cmp esi, 0x18
  __asm mov eax, esi
  __asm cmove eax, ecx
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_1188086c
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 0x18]
  __asm call LAB_10013543
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10fde830; body size 45 bytes.
#line 1 "ENTRY_10fde830"

void __thiscall Recovered_Bulk::m_FUN_10fde830(undefined4 param_2)
{
  int param_1 = (int )this;
  ((SCVtbl_33_1*)(*(int **)(param_1 + 0xc)))->v((int)(param_2));
  *(undefined4*)(*(int *)(param_1 + 0xa0) + 0x10) = (undefined4)(param_2);
  ((SCVtbl_57_0*)((int *)(param_1 + 0x18)))->v();
  return;
}


// Reference entry 10fe0020; body size 59 bytes.
#line 1 "ENTRY_10fe0020"

__declspec(naked) void FUN_10fe0020(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x10fe004c
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10fe0043
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_10097d07
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10fe0190; body size 41 bytes.
#line 1 "ENTRY_10fe0190"

__declspec(naked) void FUN_10fe0190(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10fe01b3
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



// Reference entry 10fe0720; body size 60 bytes.
#line 1 "ENTRY_10fe0720"

__declspec(naked) void FUN_10fe0720(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea esi, [edi + 8]
  __asm push esi
  __asm mov dword ptr [edi], LAB_1195d7bc
  __asm push dword ptr [esi + 4]
  __asm push dword ptr [esi]
  __asm call LAB_1009939b
  __asm mov eax, dword ptr [esi]
  __asm add esp, 0xc
  __asm mov ecx, esi
  __asm mov dword ptr [esi + 4], eax
  __asm call LAB_1000f3fd
  __asm mov dword ptr [edi], LAB_11881068
  __asm dec dword ptr [LAB_121a0e68]
  __asm mov dword ptr [edi], LAB_1186d2f4
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10fe0860; body size 17 bytes.
#line 1 "ENTRY_10fe0860"

void __fastcall FUN_10fe0860(undefined4 *param_1)

{
  thunk_FUN_10fde940(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 10fe0dc0; body size 58 bytes.
#line 1 "ENTRY_10fe0dc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fe0dc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTReorderTracksInSavedQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTReorderTracksInSavedQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTReorderTracksInSavedQueueAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7e0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fe0e10; body size 45 bytes.
#line 1 "ENTRY_10fe0e10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fe0e10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fe11b0; body size 20 bytes.
#line 1 "ENTRY_10fe11b0"

void __thiscall Recovered_Bulk::m_FUN_10fe11b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10fde940(param_2,param_3,param_1);
  return;
}


// Reference entry 10fe15f0; body size 24 bytes.
#line 1 "ENTRY_10fe15f0"

void __fastcall FUN_10fe15f0(undefined4 *param_1)

{
  thunk_FUN_10fde940(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10fe1610; body size 60 bytes.
#line 1 "ENTRY_10fe1610"

__declspec(naked) void FUN_10fe1610(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x10fe1639
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10fe1646
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
}



// Reference entry 10fe2480; body size 23 bytes.
#line 1 "ENTRY_10fe2480"

SCStr * __thiscall Recovered_Bulk::m_FUN_10fe2480(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x84));
  return (SCStr *)(param_2);
}


// Reference entry 10fe2680; body size 23 bytes.
#line 1 "ENTRY_10fe2680"

SCStr * __thiscall Recovered_Bulk::m_FUN_10fe2680(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x80));
  return (SCStr *)(param_2);
}


// Reference entry 10fe3320; body size 33 bytes.
#line 1 "ENTRY_10fe3320"

__declspec(naked) void FUN_10fe3320(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp byte ptr [esi + 0xac], 0
  __asm jne 0x10fe333f
  __asm push 0x493e0
  __asm lea ecx, [esi + 0x28]
  __asm call LAB_100913f8
  __asm mov dword ptr [esi + 0xa8], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10fe3350; body size 43 bytes.
#line 1 "ENTRY_10fe3350"

__declspec(naked) void FUN_10fe3350(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp byte ptr [esi + 0xac], 0
  __asm jne 0x10fe3379
  __asm mov eax, dword ptr [esi + 0xa8]
  __asm test eax, eax
  __asm je 0x10fe3379
  __asm push eax
  __asm lea ecx, [esi + 0x28]
  __asm call LAB_1001ec63
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xa8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10fe34f0; body size 39 bytes.
#line 1 "ENTRY_10fe34f0"

__declspec(naked) void FUN_10fe34f0(void)

{
  __asm cmp byte ptr [ecx + 0x88], 0
  __asm jne 0x10fe3514
  __asm mov eax, dword ptr [ecx - 0x24]
  __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add ecx, -0x24
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp dword ptr [eax + 0x2c]
  __asm ret 4
}



// Reference entry 10fe3520; body size 59 bytes.
#line 1 "ENTRY_10fe3520"

__declspec(naked) void FUN_10fe3520(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x10fe354c
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10fe3543
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_10097d07
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10fe3720; body size 52 bytes.
#line 1 "ENTRY_10fe3720"

__declspec(naked) void FUN_10fe3720(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov edx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [esi + 8]
  __asm sub edx, eax
  __asm sar edx, 2
  __asm cmp ecx, edx
  __asm jae 0x10fe3750
  __asm lea edx, [eax + ecx*4]
  __asm mov eax, dword ptr [esi + 0xc]
  __asm lea ecx, [edx + 4]
  __asm sub eax, ecx
  __asm push eax
  __asm push ecx
  __asm push edx
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm add dword ptr [esi + 0xc], -4
  __asm pop esi
  __asm ret 4
}



// Reference entry 10fe4550; body size 39 bytes.
#line 1 "ENTRY_10fe4550"

void __thiscall Recovered_Bulk::m_FUN_10fe4550(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x9c));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10fe6260; body size 27 bytes.
#line 1 "ENTRY_10fe6260"

undefined1 __thiscall Recovered_Bulk::m_FUN_10fe6260(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 uVar1;
  
  ((SCVtbl_5_1*)((int *)(param_1 + 8)))->v((int)(param_2));
  uVar1 = (undefined1)(*(undefined1 *)(param_1 + 0x4c));
  *(undefined1*)(param_1 + 0x4c) = (undefined1)(0);
  return (undefined1)(uVar1);
}


// Reference entry 10fe6460; body size 36 bytes.
#line 1 "ENTRY_10fe6460"

void __thiscall Recovered_Bulk::m_FUN_10fe6460(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x40));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10fe64e0; body size 41 bytes.
#line 1 "ENTRY_10fe64e0"

__declspec(naked) void FUN_10fe64e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10fe6503
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



// Reference entry 10fe6690; body size 19 bytes.
#line 1 "ENTRY_10fe6690"

void __fastcall FUN_10fe6690(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10fe6880; body size 45 bytes.
#line 1 "ENTRY_10fe6880"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fe6880(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fe68c0; body size 33 bytes.
#line 1 "ENTRY_10fe68c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fe68c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fe6c20; body size 21 bytes.
#line 1 "ENTRY_10fe6c20"

SCStr * __stdcall FUN_10fe6c20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("MoveItem");
  return (SCStr *)(param_1);
}


// Reference entry 10fe6c40; body size 21 bytes.
#line 1 "ENTRY_10fe6c40"

SCStr * __stdcall FUN_10fe6c40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDragAndDrop");
  return (SCStr *)(param_1);
}


// Reference entry 10fe6c60; body size 21 bytes.
#line 1 "ENTRY_10fe6c60"

SCStr * __stdcall FUN_10fe6c60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10fe6c80; body size 32 bytes.
#line 1 "ENTRY_10fe6c80"

SCStr * __stdcall FUN_10fe6c80(SCStr *param_1)

{
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 10fe6cb0; body size 21 bytes.
#line 1 "ENTRY_10fe6cb0"

SCStr * __stdcall FUN_10fe6cb0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionWithIntDescriptor");
  return (SCStr *)(param_1);
}


// Reference entry 10fe6cd0; body size 35 bytes.
#line 1 "ENTRY_10fe6cd0"

__declspec(naked) void FUN_10fe6cd0(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2093
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10fe6d40; body size 58 bytes.
#line 1 "ENTRY_10fe6d40"

__declspec(naked) void FUN_10fe6d40(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [ecx + 0x10]
  __asm test ebx, ebx
  __asm je 0x10fe6d74
  __asm push edi
  __asm mov edi, dword ptr [ecx + 0xc]
  __asm test edi, edi
  __asm js 0x10fe6d6d
  __asm mov edx, dword ptr [ecx + 8]
  __asm cmp edx, edi
  __asm push esi
  __asm mov esi, dword ptr [ebx]
  __asm mov ecx, ebx
  __asm lea eax, [edx + 1]
  __asm cmovle eax, edx
  __asm push eax
  __asm push edi
  __asm call dword ptr [esi + 0x14]
  __asm pop esi
  __asm pop edi
  __asm xor eax, eax
  __asm pop ebx
  __asm ret 4
  __asm pop edi
  __asm xor eax, eax
  __asm pop ebx
  __asm ret 4
  __asm xor eax, eax
  __asm pop ebx
  __asm ret 4
}



// Reference entry 10fe8190; body size 21 bytes.
#line 1 "ENTRY_10fe8190"

SCStr * __stdcall FUN_10fe8190(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("DeleteItem");
  return (SCStr *)(param_1);
}


// Reference entry 10fe81b0; body size 21 bytes.
#line 1 "ENTRY_10fe81b0"

SCStr * __stdcall FUN_10fe81b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("DeleteSelectedItems");
  return (SCStr *)(param_1);
}


// Reference entry 10fe81d0; body size 21 bytes.
#line 1 "ENTRY_10fe81d0"

SCStr * __stdcall FUN_10fe81d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("MoveSelectedItems");
  return (SCStr *)(param_1);
}


// Reference entry 10fe81f0; body size 21 bytes.
#line 1 "ENTRY_10fe81f0"

SCStr * __stdcall FUN_10fe81f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryEdit");
  return (SCStr *)(param_1);
}


// Reference entry 10fe8210; body size 21 bytes.
#line 1 "ENTRY_10fe8210"

SCStr * __stdcall FUN_10fe8210(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryEdit");
  return (SCStr *)(param_1);
}


// Reference entry 10fe8230; body size 21 bytes.
#line 1 "ENTRY_10fe8230"

SCStr * __stdcall FUN_10fe8230(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDragAndDrop");
  return (SCStr *)(param_1);
}


// Reference entry 10fe8250; body size 21 bytes.
#line 1 "ENTRY_10fe8250"

SCStr * __stdcall FUN_10fe8250(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10fe8270; body size 32 bytes.
#line 1 "ENTRY_10fe8270"

SCStr * __stdcall FUN_10fe8270(SCStr *param_1)

{
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 10fe82a0; body size 21 bytes.
#line 1 "ENTRY_10fe82a0"

SCStr * __stdcall FUN_10fe82a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionWithIntDescriptor");
  return (SCStr *)(param_1);
}


// Reference entry 10fe8460; body size 35 bytes.
#line 1 "ENTRY_10fe8460"

__declspec(naked) void FUN_10fe8460(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x22a0
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10fe8490; body size 35 bytes.
#line 1 "ENTRY_10fe8490"

__declspec(naked) void FUN_10fe8490(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2093
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10fe84e0; body size 27 bytes.
#line 1 "ENTRY_10fe84e0"

__declspec(naked) void FUN_10fe84e0(void)

{
  __asm mov edx, dword ptr [ecx + 0x10]
  __asm test edx, edx
  __asm je 0x10fe84f6
  __asm mov eax, dword ptr [ecx + 0x1c]
  __asm test eax, eax
  __asm je 0x10fe84f6
  __asm push eax
  __asm mov ecx, edx
  __asm call LAB_1006d728
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 10fe8510; body size 17 bytes.
#line 1 "ENTRY_10fe8510"

__declspec(naked) void FUN_10fe8510(void)

{
  __asm mov ecx, dword ptr [ecx + 0x10]
  __asm test ecx, ecx
  __asm je 0x10fe851c
  __asm call LAB_10025db5
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 10fe8530; body size 22 bytes.
#line 1 "ENTRY_10fe8530"

__declspec(naked) void FUN_10fe8530(void)

{
  __asm mov eax, dword ptr [ecx + 0x14]
  __asm test eax, eax
  __asm je 0x10fe8541
  __asm push dword ptr [ecx + 8]
  __asm mov ecx, eax
  __asm call LAB_1007eb3b
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 10fe9cb0; body size 57 bytes.
#line 1 "ENTRY_10fe9cb0"

__declspec(naked) void FUN_10fe9cb0(void)

{
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov ebx, ecx
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x10fe9ce4
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm push dword ptr [esi + 8]
  __asm mov ecx, ebx
  __asm push edi
  __asm call LAB_100251da
  __asm mov eax, esi
  __asm mov esi, dword ptr [esi]
  __asm push 0x14
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm cmp byte ptr [esi + 0xd], 0
  __asm je 0x10fe9cc3
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 8
}



// Reference entry 10feb910; body size 30 bytes.
#line 1 "ENTRY_10feb910"

void __thiscall Recovered_Bulk::m_FUN_10feb910(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10febc00; body size 59 bytes.
#line 1 "ENTRY_10febc00"

__declspec(naked) void FUN_10febc00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x10febc2c
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10febc23
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_1003c74a
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10febc50; body size 59 bytes.
#line 1 "ENTRY_10febc50"

__declspec(naked) void FUN_10febc50(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x10febc7c
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10febc73
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_10021350
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10fec160; body size 41 bytes.
#line 1 "ENTRY_10fec160"

__declspec(naked) void FUN_10fec160(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10fec183
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



// Reference entry 10fec1d0; body size 41 bytes.
#line 1 "ENTRY_10fec1d0"

__declspec(naked) void FUN_10fec1d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10fec1f3
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



// Reference entry 10fec250; body size 24 bytes.
#line 1 "ENTRY_10fec250"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fec250(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fec290; body size 48 bytes.
#line 1 "ENTRY_10fec290"

__declspec(naked) void FUN_10fec290(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
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
  __asm ret 4
}



// Reference entry 10fed720; body size 19 bytes.
#line 1 "ENTRY_10fed720"

void __fastcall FUN_10fed720(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10fed7d0; body size 17 bytes.
#line 1 "ENTRY_10fed7d0"

void __fastcall FUN_10fed7d0(undefined4 *param_1)

{
  thunk_FUN_10fe9060(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 10fed7f0; body size 17 bytes.
#line 1 "ENTRY_10fed7f0"

void __fastcall FUN_10fed7f0(undefined4 *param_1)

{
  thunk_FUN_10fe9100(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 10feed00; body size 45 bytes.
#line 1 "ENTRY_10feed00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10feed00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10feed40; body size 45 bytes.
#line 1 "ENTRY_10feed40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10feed40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10feeea0; body size 35 bytes.
#line 1 "ENTRY_10feeea0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10feeea0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10feda70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x160);
  }
  return (undefined4)(param_1);
}


// Reference entry 10feeed0; body size 32 bytes.
#line 1 "ENTRY_10feeed0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10feeed0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10fedfd0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x60);
  }
  return (undefined4)(param_1);
}


// Reference entry 10feef30; body size 25 bytes.
#line 1 "ENTRY_10feef30"

__declspec(naked) void FUN_10feef30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10fef110; body size 19 bytes.
#line 1 "ENTRY_10fef110"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10fef110(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10fef130; body size 19 bytes.
#line 1 "ENTRY_10fef130"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10fef130(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10fef150; body size 19 bytes.
#line 1 "ENTRY_10fef150"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10fef150(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10fef170; body size 19 bytes.
#line 1 "ENTRY_10fef170"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10fef170(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10fef190; body size 21 bytes.
#line 1 "ENTRY_10fef190"

void __thiscall Recovered_Bulk::m_FUN_10fef190(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10fef1b0; body size 21 bytes.
#line 1 "ENTRY_10fef1b0"

void __thiscall Recovered_Bulk::m_FUN_10fef1b0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10fef1d0; body size 21 bytes.
#line 1 "ENTRY_10fef1d0"

void __thiscall Recovered_Bulk::m_FUN_10fef1d0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10fef1f0; body size 21 bytes.
#line 1 "ENTRY_10fef1f0"

void __thiscall Recovered_Bulk::m_FUN_10fef1f0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10fef210; body size 20 bytes.
#line 1 "ENTRY_10fef210"

void __thiscall Recovered_Bulk::m_FUN_10fef210(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10fe9060(param_2,param_3,param_1);
  return;
}


// Reference entry 10fef230; body size 20 bytes.
#line 1 "ENTRY_10fef230"

void __thiscall Recovered_Bulk::m_FUN_10fef230(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10fe9100(param_2,param_3,param_1);
  return;
}


// Reference entry 10fef250; body size 31 bytes.
#line 1 "ENTRY_10fef250"

__declspec(naked) void FUN_10fef250(void)

{
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm call LAB_1001fd9d
  __asm add esp, 4
  __asm test al, al
  __asm je 0x10fef26b
  __asm mov ecx, dword ptr [esi + 4]
  __asm call LAB_1006589d
  __asm pop esi
  __asm ret 8
}



// Reference entry 10fef280; body size 31 bytes.
#line 1 "ENTRY_10fef280"

__declspec(naked) void FUN_10fef280(void)

{
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm call LAB_1001fd9d
  __asm add esp, 4
  __asm test al, al
  __asm je 0x10fef29b
  __asm mov ecx, dword ptr [esi + 4]
  __asm call LAB_1002938e
  __asm pop esi
  __asm ret 8
}



// Reference entry 10fef730; body size 19 bytes.
#line 1 "ENTRY_10fef730"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10fef730(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10fef750; body size 19 bytes.
#line 1 "ENTRY_10fef750"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10fef750(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10fef770; body size 19 bytes.
#line 1 "ENTRY_10fef770"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10fef770(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10fef790; body size 19 bytes.
#line 1 "ENTRY_10fef790"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10fef790(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10fefef0; body size 30 bytes.
#line 1 "ENTRY_10fefef0"

void __thiscall Recovered_Bulk::m_FUN_10fefef0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10ff0c10; body size 24 bytes.
#line 1 "ENTRY_10ff0c10"

void __fastcall FUN_10ff0c10(undefined4 *param_1)

{
  thunk_FUN_10fe9060(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10ff0d00; body size 60 bytes.
#line 1 "ENTRY_10ff0d00"

__declspec(naked) void FUN_10ff0d00(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x10ff0d29
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10ff0d36
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
}



// Reference entry 10ff0d50; body size 60 bytes.
#line 1 "ENTRY_10ff0d50"

__declspec(naked) void FUN_10ff0d50(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x10ff0d79
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10ff0d86
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
}



// Reference entry 10ff0dc0; body size 22 bytes.
#line 1 "ENTRY_10ff0dc0"

void __thiscall Recovered_Bulk::m_FUN_10ff0dc0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)((0x0))) {
    ((SCVtbl_0_2*)(*(undefined4 **)(param_1 + 8)))->v((int)(param_3),(int)(param_2));
  }
  return;
}


// Reference entry 10ff10c0; body size 21 bytes.
#line 1 "ENTRY_10ff10c0"

SCStr * __stdcall FUN_10ff10c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCHomePageBrowseItem");
  return (SCStr *)(param_1);
}


// Reference entry 10ff10e0; body size 21 bytes.
#line 1 "ENTRY_10ff10e0"

SCStr * __stdcall FUN_10ff10e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCHomePageDataSource");
  return (SCStr *)(param_1);
}


// Reference entry 10ff1100; body size 21 bytes.
#line 1 "ENTRY_10ff1100"

SCStr * __stdcall FUN_10ff1100(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCHomePagePinnedItem");
  return (SCStr *)(param_1);
}


// Reference entry 10ff1120; body size 28 bytes.
#line 1 "ENTRY_10ff1120"

void __fastcall FUN_10ff1120(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_1 = (int)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piVar1))->v();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 10ff1150; body size 28 bytes.
#line 1 "ENTRY_10ff1150"

void __fastcall FUN_10ff1150(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_1 = (int)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piVar1))->v();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 10ff1490; body size 21 bytes.
#line 1 "ENTRY_10ff1490"

SCStr * __stdcall FUN_10ff1490(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("HideSwimlane");
  return (SCStr *)(param_1);
}


// Reference entry 10ff15c0; body size 25 bytes.
#line 1 "ENTRY_10ff15c0"

__declspec(naked) void FUN_10ff15c0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x38]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10ff15d3
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ff15e0; body size 52 bytes.
#line 1 "ENTRY_10ff15e0"

__declspec(naked) void FUN_10ff15e0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm cmp eax, 9
  __asm jne 0x10ff15ff
  __asm lea eax, [ecx + 0x50]
  __asm mov ecx, dword ptr [esp + 8]
  __asm push eax
  __asm call LAB_10036c23
  __asm mov eax, dword ptr [esp + 8]
  __asm pop esi
  __asm ret 0xc
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push eax
  __asm push esi
  __asm call LAB_10072269
  __asm mov eax, esi
  __asm pop esi
  __asm ret 0xc
}



// Reference entry 10ff1630; body size 21 bytes.
#line 1 "ENTRY_10ff1630"

SCStr * __stdcall FUN_10ff1630(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategorySwimlane");
  return (SCStr *)(param_1);
}


// Reference entry 10ff1650; body size 25 bytes.
#line 1 "ENTRY_10ff1650"

__declspec(naked) void FUN_10ff1650(void)

{
  __asm mov ecx, dword ptr [ecx + 0x20]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10ff1663
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ff1670; body size 25 bytes.
#line 1 "ENTRY_10ff1670"

__declspec(naked) void FUN_10ff1670(void)

{
  __asm mov ecx, dword ptr [ecx + 0x30]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10ff1683
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ff1960; body size 35 bytes.
#line 1 "ENTRY_10ff1960"

__declspec(naked) void FUN_10ff1960(void)

{
  __asm add ecx, 0x128
  __asm xor eax, eax
  __asm push esi
  __asm lea esi, [ecx + 0x10]
  __asm cmp ecx, esi
  __asm je 0x10ff1981
  __asm movzx edx, byte ptr [ecx]
  __asm inc ecx
  __asm movsx edx, byte ptr [edx + LAB_1195e878]
  __asm add eax, edx
  __asm cmp ecx, esi
  __asm jne 0x10ff1970
  __asm pop esi
  __asm ret
}



// Reference entry 10ff1ad0; body size 44 bytes.
#line 1 "ENTRY_10ff1ad0"

__declspec(naked) void FUN_10ff1ad0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_10076495
  __asm mov edx, dword ptr [esp + 8]
  __asm test al, al
  __asm jne 0x10ff1af0
  __asm mov eax, edx
  __asm sub eax, 2
  __asm jne 0x10ff1af0
  __asm mov eax, 4
  __asm pop esi
  __asm ret 4
  __asm push edx
  __asm mov ecx, esi
  __asm call LAB_10083721
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ff1ce0; body size 18 bytes.
#line 1 "ENTRY_10ff1ce0"

__declspec(naked) void FUN_10ff1ce0(void)

{
  __asm xor eax, eax
  __asm mov ecx, 0x58
  __asm cmp dword ptr [esp + 4], 2
  __asm cmove eax, ecx
  __asm ret 4
}



// Reference entry 10ff1d00; body size 18 bytes.
#line 1 "ENTRY_10ff1d00"

__declspec(naked) void FUN_10ff1d00(void)

{
  __asm xor eax, eax
  __asm mov ecx, 0xc0
  __asm cmp dword ptr [esp + 4], 2
  __asm cmove eax, ecx
  __asm ret 4
}



// Reference entry 10ff20b0; body size 48 bytes.
#line 1 "ENTRY_10ff20b0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10ff20b0(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
    ((SCVtbl_9_2*)(*(int **)(param_1 + 0x20)))->v((int)(param_2),(int)(0));
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10ff2b20; body size 46 bytes.
#line 1 "ENTRY_10ff2b20"

SCStr * __thiscall Recovered_Bulk::m_FUN_10ff2b20(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
    ((SCVtbl_7_1*)(*(int **)(param_1 + 0x20)))->v((int)(param_2));
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10ff2b80; body size 20 bytes.
#line 1 "ENTRY_10ff2b80"

SCStr * __thiscall Recovered_Bulk::m_FUN_10ff2b80(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x30));
  return (SCStr *)(param_2);
}


// Reference entry 10ff2ba0; body size 20 bytes.
#line 1 "ENTRY_10ff2ba0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10ff2ba0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x48));
  return (SCStr *)(param_2);
}


// Reference entry 10ff2d10; body size 23 bytes.
#line 1 "ENTRY_10ff2d10"

__declspec(naked) void FUN_10ff2d10(void)

{
  __asm mov edx, ecx
  __asm mov ecx, dword ptr [edx + 0x1c]
  __asm test ecx, ecx
  __asm je 0x10ff2d23
  __asm mov eax, dword ptr [ecx]
  __asm push edx
  __asm call dword ptr [eax + 0x168]
  __asm ret
  __asm or eax, 0xffffffff
  __asm ret
}



// Reference entry 10ff2d30; body size 23 bytes.
#line 1 "ENTRY_10ff2d30"

__declspec(naked) void FUN_10ff2d30(void)

{
  __asm mov edx, ecx
  __asm mov ecx, dword ptr [edx + 0x24]
  __asm test ecx, ecx
  __asm je 0x10ff2d43
  __asm mov eax, dword ptr [ecx]
  __asm push edx
  __asm call dword ptr [eax + 0x168]
  __asm ret
  __asm or eax, 0xffffffff
  __asm ret
}



// Reference entry 10ff3020; body size 26 bytes.
#line 1 "ENTRY_10ff3020"

__declspec(naked) void FUN_10ff3020(void)

{
  __asm call LAB_10076495
  __asm test al, al
  __asm jne 0x10ff3035
  __asm cmp dword ptr [esp + 4], 2
  __asm jne 0x10ff3035
  __asm mov al, 1
  __asm ret 4
  __asm xor al, al
  __asm ret 4
}



// Reference entry 10ff6e20; body size 27 bytes.
#line 1 "ENTRY_10ff6e20"

__declspec(naked) void FUN_10ff6e20(void)

{
  __asm mov ecx, dword ptr [ecx + 0x20]
  __asm test ecx, ecx
  __asm je 0x10ff6e38
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x80]
  __asm call eax
  __asm test al, al
  __asm je 0x10ff6e38
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 10ff6e80; body size 29 bytes.
#line 1 "ENTRY_10ff6e80"

__declspec(naked) void FUN_10ff6e80(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm sub eax, 0
  __asm je 0x10ff6e98
  __asm sub eax, 5
  __asm je 0x10ff6e98
  __asm sub eax, 1
  __asm je 0x10ff6e98
  __asm xor al, al
  __asm ret 4
  __asm mov al, 1
  __asm ret 4
}



// Reference entry 10ff6f60; body size 32 bytes.
#line 1 "ENTRY_10ff6f60"

__declspec(naked) void FUN_10ff6f60(void)

{
  __asm cmp dword ptr [ecx + 0xb4], 0
  __asm je 0x10ff6f7d
  __asm mov ecx, dword ptr [ecx + 0xcc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x3c]
  __asm call eax
  __asm test al, al
  __asm je 0x10ff6f7d
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 10ff6f90; body size 17 bytes.
#line 1 "ENTRY_10ff6f90"

__declspec(naked) void FUN_10ff6f90(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm push offset LAB_1187b07c
  __asm call LAB_1008ca83
  __asm ret 4
}



// Reference entry 10ff81f0; body size 60 bytes.
#line 1 "ENTRY_10ff81f0"

__declspec(naked) void FUN_10ff81f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1000e23c
  __asm mov ecx, eax
  __asm test ecx, ecx
  __asm je 0x10ff820d
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x3c]
  __asm call eax
  __asm test al, al
  __asm je 0x10ff820d
  __asm mov al, 1
  __asm jmp 0x10ff820f
  __asm xor al, al
  __asm cmp byte ptr [esi + 0x88], al
  __asm je 0x10ff8228
  __asm lea ecx, [esi - 0x94]
  __asm mov byte ptr [esi + 0x88], al
  __asm call LAB_10068539
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ff8430; body size 59 bytes.
#line 1 "ENTRY_10ff8430"

__declspec(naked) void FUN_10ff8430(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x10ff845c
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10ff8453
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_1003c74a
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ff8480; body size 59 bytes.
#line 1 "ENTRY_10ff8480"

__declspec(naked) void FUN_10ff8480(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x10ff84ac
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10ff84a3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_10021350
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ff8cb0; body size 48 bytes.
#line 1 "ENTRY_10ff8cb0"

__declspec(naked) void FUN_10ff8cb0(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x28]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x18]
  __asm mov ecx, dword ptr [esi + 0x20]
  __asm test ecx, ecx
  __asm je 0x10ff8cdc
  __asm mov eax, dword ptr [esi + 0x28]
  __asm cmp dword ptr [eax + 0x10], 0
  __asm jne 0x10ff8cdc
  __asm mov edx, dword ptr [ecx]
  __asm lea eax, [esi + 0x18]
  __asm pop esi
  __asm mov dword ptr [esp + 4], eax
  __asm jmp dword ptr [edx + 0x18]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ff8cf0; body size 48 bytes.
#line 1 "ENTRY_10ff8cf0"

__declspec(naked) void FUN_10ff8cf0(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x38]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x18]
  __asm mov eax, dword ptr [esi + 0x38]
  __asm cmp dword ptr [eax + 0x10], 0
  __asm jne 0x10ff8d1c
  __asm mov ecx, dword ptr [esi + 0x30]
  __asm test ecx, ecx
  __asm je 0x10ff8d1c
  __asm mov edx, dword ptr [ecx]
  __asm lea eax, [esi + 0x18]
  __asm pop esi
  __asm mov dword ptr [esp + 4], eax
  __asm jmp dword ptr [edx + 0x18]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ffaf90; body size 37 bytes.
#line 1 "ENTRY_10ffaf90"

__declspec(naked) void FUN_10ffaf90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 8]
  __asm mov dword ptr [esi], LAB_1195ea78
  __asm call LAB_1001bdc4
  __asm mov dword ptr [esi], LAB_11881498
  __asm dec dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esi], LAB_1186d2f4
  __asm pop esi
  __asm ret
}



// Reference entry 10ffb2b0; body size 59 bytes.
#line 1 "ENTRY_10ffb2b0"

__declspec(naked) void FUN_10ffb2b0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 8]
  __asm mov dword ptr [esi], LAB_1195ea78
  __asm call LAB_1001bdc4
  __asm mov dword ptr [esi], LAB_11881498
  __asm dec dword ptr [LAB_121a0e68]
  __asm test byte ptr [esp + 8], 1
  __asm mov dword ptr [esi], LAB_1186d2f4
  __asm je 0x10ffb2e5
  __asm push 0x1c
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ffb490; body size 46 bytes.
#line 1 "ENTRY_10ffb490"

__declspec(naked) void FUN_10ffb490(void)

{
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov ebx, dword ptr [edi + 4]
  __asm mov esi, dword ptr [edi]
  __asm cmp esi, ebx
  __asm je 0x10ffb4b7
  __asm nop
  __asm mov ecx, esi
  __asm call LAB_1002cd45
  __asm add esi, 0x20
  __asm cmp esi, ebx
  __asm jne 0x10ffb4a0
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [edi + 4], eax
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret
  __asm mov dword ptr [edi + 4], esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret
}



// Reference entry 10ffb630; body size 21 bytes.
#line 1 "ENTRY_10ffb630"

SCStr * __stdcall FUN_10ffb630(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAggregateHelper");
  return (SCStr *)(param_1);
}


// Reference entry 10ffb670; body size 30 bytes.
#line 1 "ENTRY_10ffb670"

__declspec(naked) void FUN_10ffb670(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm add ecx, 8
  __asm cmp eax, ecx
  __asm je 0x10ffb68b
  __asm push dword ptr [esp + 4]
  __asm push dword ptr [ecx + 4]
  __asm push dword ptr [ecx]
  __asm mov ecx, eax
  __asm call LAB_100371b9
  __asm ret 4
}



// Reference entry 10ffbc50; body size 59 bytes.
#line 1 "ENTRY_10ffbc50"

__declspec(naked) void FUN_10ffbc50(void)

{
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov eax, dword ptr [edi]
  __asm call dword ptr [eax + 0x24]
  __asm mov ebx, dword ptr [edi + 0xc]
  __asm mov esi, dword ptr [edi + 8]
  __asm cmp esi, ebx
  __asm je 0x10ffbc80
  __asm mov ecx, esi
  __asm call LAB_1002cd45
  __asm add esi, 0x20
  __asm cmp esi, ebx
  __asm jne 0x10ffbc64
  __asm mov eax, dword ptr [edi + 8]
  __asm mov dword ptr [edi + 0xc], eax
  __asm mov byte ptr [edi + 0x18], 0
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret
  __asm mov dword ptr [edi + 0xc], esi
  __asm mov byte ptr [edi + 0x18], 0
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret
}



// Reference entry 10ffc070; body size 54 bytes.
#line 1 "ENTRY_10ffc070"

__declspec(naked) void FUN_10ffc070(void)

{
  __asm sub esp, 8
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov edx, dword ptr [esp + 0x10]
  __asm mov dword ptr [esp], eax
  __asm lea eax, [esp]
  __asm push esi
  __asm mov esi, dword ptr [ecx + 0xc]
  __asm mov ecx, dword ptr [ecx + 8]
  __asm push eax
  __asm mov eax, esi
  __asm mov dword ptr [esp + 0xc], edx
  __asm sub eax, ecx
  __asm sar eax, 5
  __asm push eax
  __asm push esi
  __asm push ecx
  __asm call LAB_1005ceb9
  __asm add esp, 0x10
  __asm pop esi
  __asm add esp, 8
  __asm ret 8
}



// Reference entry 10ffc290; body size 24 bytes.
#line 1 "ENTRY_10ffc290"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ffc290(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ffc9f0; body size 21 bytes.
#line 1 "ENTRY_10ffc9f0"

SCStr * __stdcall FUN_10ffc9f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10ffca10; body size 25 bytes.
#line 1 "ENTRY_10ffca10"

__declspec(naked) void FUN_10ffca10(void)

{
  __asm mov ecx, dword ptr [ecx + 0x34]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10ffca23
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ffca60; body size 20 bytes.
#line 1 "ENTRY_10ffca60"

SCStr * __thiscall Recovered_Bulk::m_FUN_10ffca60(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x2c));
  return (SCStr *)(param_2);
}


// Reference entry 10ffca80; body size 32 bytes.
#line 1 "ENTRY_10ffca80"

SCStr * __stdcall FUN_10ffca80(SCStr *param_1)

{
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 10ffcab0; body size 29 bytes.
#line 1 "ENTRY_10ffcab0"

__declspec(naked) void FUN_10ffcab0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x34]
  __asm test ecx, ecx
  __asm jne 0x10ffcaba
  __asm xor eax, eax
  __asm ret
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x8c]
  __asm sub eax, 7
  __asm neg eax
  __asm sbb eax, eax
  __asm and eax, 3
  __asm ret
}



// Reference entry 10ffcb10; body size 25 bytes.
#line 1 "ENTRY_10ffcb10"

__declspec(naked) void FUN_10ffcb10(void)

{
  __asm mov ecx, dword ptr [ecx + 0x40]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10ffcb23
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ffcb40; body size 21 bytes.
#line 1 "ENTRY_10ffcb40"

SCStr * __stdcall FUN_10ffcb40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10ffcb70; body size 32 bytes.
#line 1 "ENTRY_10ffcb70"

SCStr * __stdcall FUN_10ffcb70(SCStr *param_1)

{
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 10ffcbb0; body size 32 bytes.
#line 1 "ENTRY_10ffcbb0"

SCStr * __stdcall FUN_10ffcbb0(SCStr *param_1)

{
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 10ffcc00; body size 18 bytes.
#line 1 "ENTRY_10ffcc00"

SCStr * __stdcall FUN_10ffcc00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep((char *)0x0);
  return (SCStr *)(param_1);
}


// Reference entry 10ffcdc0; body size 46 bytes.
#line 1 "ENTRY_10ffcdc0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10ffcdc0(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x34) != (int *)((0x0))) {
    ((SCVtbl_17_1*)(*(int **)(param_1 + 0x34)))->v((int)(param_2));
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10ffce10; body size 46 bytes.
#line 1 "ENTRY_10ffce10"

SCStr * __thiscall Recovered_Bulk::m_FUN_10ffce10(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x34) != (int *)((0x0))) {
    ((SCVtbl_14_1*)(*(int **)(param_1 + 0x34)))->v((int)(param_2));
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10ffce50; body size 20 bytes.
#line 1 "ENTRY_10ffce50"

SCStr * __thiscall Recovered_Bulk::m_FUN_10ffce50(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x30));
  return (SCStr *)(param_2);
}


// Reference entry 10ffce70; body size 24 bytes.
#line 1 "ENTRY_10ffce70"

__declspec(naked) void FUN_10ffce70(void)

{
  __asm mov ecx, dword ptr [ecx + 0x34]
  __asm test ecx, ecx
  __asm je 0x10ffce85
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x20]
  __asm call eax
  __asm test al, al
  __asm je 0x10ffce85
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 10ffd060; body size 42 bytes.
#line 1 "ENTRY_10ffd060"

__declspec(naked) void FUN_10ffd060(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp dword ptr [esi + 0x34], 0
  __asm je 0x10ffd086
  __asm mov eax, dword ptr [esi]
  __asm mov eax, dword ptr [eax + 0x4c]
  __asm call eax
  __asm test al, al
  __asm jne 0x10ffd082
  __asm mov ecx, dword ptr [esi + 0x34]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x24]
  __asm call eax
  __asm test al, al
  __asm je 0x10ffd086
  __asm mov al, 1
  __asm pop esi
  __asm ret
  __asm xor al, al
  __asm pop esi
  __asm ret
}



// Reference entry 10ffd210; body size 62 bytes.
#line 1 "ENTRY_10ffd210"

__declspec(naked) void FUN_10ffd210(void)

{
  __asm cmp dword ptr [esp + 4], 0
  __asm push esi
  __asm mov esi, ecx
  __asm je 0x10ffd24a
  __asm cmp dword ptr [esi + 0x10], 0
  __asm jne 0x10ffd23c
  __asm cmp byte ptr [esi + 0x3c], 0
  __asm jne 0x10ffd23c
  __asm mov ecx, dword ptr [esi + 0x34]
  __asm test ecx, ecx
  __asm je 0x10ffd23c
  __asm mov edx, dword ptr [ecx]
  __asm lea eax, [esi + 0x28]
  __asm push 0
  __asm push eax
  __asm call dword ptr [edx + 0x14]
  __asm mov byte ptr [esi + 0x3c], 1
  __asm push 0
  __asm push dword ptr [esp + 0xc]
  __asm lea ecx, [esi + 8]
  __asm call LAB_10037bc8
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ffd260; body size 33 bytes.
#line 1 "ENTRY_10ffd260"

void __fastcall FUN_10ffd260(int param_1)

{
  if ((*(char *)(param_1 + 0x3c) == '\0') && (*(int **)(param_1 + 0x34) != (int *)((0x0)))) {
    ((SCVtbl_5_2*)(*(int **)(param_1 + 0x34)))->v((int)(param_1 + 0x28),(int)(0));
    *(undefined1*)(param_1 + 0x3c) = (undefined1)(1);
  }
  return;
}


// Reference entry 10ffd290; body size 56 bytes.
#line 1 "ENTRY_10ffd290"

__declspec(naked) void FUN_10ffd290(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm test eax, eax
  __asm je 0x10ffd2c4
  __asm push eax
  __asm lea ecx, [esi + 8]
  __asm call LAB_100373d5
  __asm cmp dword ptr [esi + 0x10], 0
  __asm jne 0x10ffd2c4
  __asm cmp byte ptr [esi + 0x3c], 0
  __asm je 0x10ffd2c4
  __asm mov ecx, dword ptr [esi + 0x34]
  __asm test ecx, ecx
  __asm je 0x10ffd2c4
  __asm mov edx, dword ptr [ecx]
  __asm lea eax, [esi + 0x28]
  __asm push eax
  __asm call dword ptr [edx + 0x18]
  __asm mov byte ptr [esi + 0x3c], 0
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ffd2e0; body size 31 bytes.
#line 1 "ENTRY_10ffd2e0"

void __fastcall FUN_10ffd2e0(int param_1)

{
  if ((*(char *)(param_1 + 0x3c) != '\0') && (*(int **)(param_1 + 0x34) != (int *)((0x0)))) {
    ((SCVtbl_6_1*)(*(int **)(param_1 + 0x34)))->v((int)(param_1 + 0x28));
    *(undefined1*)(param_1 + 0x3c) = (undefined1)(0);
  }
  return;
}


// Reference entry 10ffd500; body size 30 bytes.
#line 1 "ENTRY_10ffd500"

void __thiscall Recovered_Bulk::m_FUN_10ffd500(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10ffd540; body size 24 bytes.
#line 1 "ENTRY_10ffd540"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ffd540(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ffd5c0; body size 60 bytes.
#line 1 "ENTRY_10ffd5c0"

__declspec(naked) void FUN_10ffd5c0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_11791770
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x10ffd5ed
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 10ffd650; body size 30 bytes.
#line 1 "ENTRY_10ffd650"

void __thiscall Recovered_Bulk::m_FUN_10ffd650(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10ffddc0; body size 28 bytes.
#line 1 "ENTRY_10ffddc0"

void __fastcall FUN_10ffddc0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_1 = (int)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piVar1))->v();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 10ffec20; body size 28 bytes.
#line 1 "ENTRY_10ffec20"

__declspec(naked) void FUN_10ffec20(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm call eax
  __asm test al, al
  __asm je 0x10ffec38
  __asm cmp byte ptr [esi + 0x1c], 0
  __asm je 0x10ffec38
  __asm mov al, 1
  __asm pop esi
  __asm ret
  __asm xor al, al
  __asm pop esi
  __asm ret
}



// Reference entry 10fff2e0; body size 41 bytes.
#line 1 "ENTRY_10fff2e0"

__declspec(naked) void FUN_10fff2e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10fff303
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



// Reference entry 10fff5c0; body size 19 bytes.
#line 1 "ENTRY_10fff5c0"

void __fastcall FUN_10fff5c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10fff880; body size 37 bytes.
#line 1 "ENTRY_10fff880"

__declspec(naked) void FUN_10fff880(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 8]
  __asm mov dword ptr [esi], LAB_1195eddc
  __asm call LAB_10003ebd
  __asm mov dword ptr [esi], LAB_1195ed78
  __asm dec dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esi], LAB_1186d2f4
  __asm pop esi
  __asm ret
}



// Reference entry 10fff8e0; body size 45 bytes.
#line 1 "ENTRY_10fff8e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fff8e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fffa70; body size 33 bytes.
#line 1 "ENTRY_10fffa70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10fffa70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fffbb0; body size 62 bytes.
#line 1 "ENTRY_10fffbb0"

__declspec(naked) void FUN_10fffbb0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 8]
  __asm mov dword ptr [esi], LAB_1195eddc
  __asm call LAB_10003ebd
  __asm mov dword ptr [esi], LAB_1195ed78
  __asm dec dword ptr [LAB_121a0e68]
  __asm test byte ptr [esp + 8], 1
  __asm mov dword ptr [esi], LAB_1186d2f4
  __asm je 0x10fffbe8
  __asm push 0xa4
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10fffc00; body size 31 bytes.
#line 1 "ENTRY_10fffc00"

__declspec(naked) void FUN_10fffc00(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm call LAB_1005458e
  __asm cmp eax, dword ptr [LAB_1211a564]
  __asm mov ecx, dword ptr [LAB_1211a56c]
  __asm cmovae ecx, dword ptr [LAB_1211a570]
  __asm mov eax, ecx
  __asm ret
}



// Reference entry 10fffc90; body size 23 bytes.
#line 1 "ENTRY_10fffc90"

__declspec(naked) void FUN_10fffc90(void)

{
  __asm mov edx, ecx
  __asm cmp byte ptr [edx + 0x24], 0
  __asm je 0x10fffca4
  __asm mov ecx, dword ptr [edx + 0xc]
  __asm mov dword ptr [esp + 4], edx
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x18]
  __asm ret 4
}



// Reference entry 11002570; body size 20 bytes.
#line 1 "ENTRY_11002570"

SCStr * __thiscall Recovered_Bulk::m_FUN_11002570(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SwfStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 11002ae0; body size 54 bytes.
#line 1 "ENTRY_11002ae0"

__declspec(naked) void FUN_11002ae0(void)

{
  __asm mov eax, dword ptr [ecx + 0x34]
  __asm test eax, eax
  __asm je 0x11002af0
  __asm cmp byte ptr [eax], 0
  __asm je 0x11002af0
  __asm mov dl, 1
  __asm jmp 0x11002af2
  __asm xor dl, dl
  __asm push esi
  __asm test dl, dl
  __asm mov eax, 0x34
  __asm mov esi, 8
  __asm cmove eax, esi
  __asm add eax, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm push eax
  __asm call LAB_1001e0b5
  __asm mov eax, dword ptr [esp + 8]
  __asm pop esi
  __asm ret 4
}



// Reference entry 11002b40; body size 18 bytes.
#line 1 "ENTRY_11002b40"

void __fastcall FUN_11002b40(int param_1)

{
  thunk_FUN_110a5ba0(param_1 + 0x10,"object.container.album.musicAlbum");
  return;
}


// Reference entry 11002b60; body size 18 bytes.
#line 1 "ENTRY_11002b60"

void __fastcall FUN_11002b60(int param_1)

{
  thunk_FUN_110a5ba0(param_1 + 0x10,"object.container.person.musicArtist");
  return;
}


// Reference entry 11002ba0; body size 18 bytes.
#line 1 "ENTRY_11002ba0"

void __fastcall FUN_11002ba0(int param_1)

{
  thunk_FUN_110a5ba0(param_1 + 0x10,"object.container.podcast");
  return;
}


// Reference entry 11002bc0; body size 18 bytes.
#line 1 "ENTRY_11002bc0"

void __fastcall FUN_11002bc0(int param_1)

{
  thunk_FUN_110a5ba0(param_1 + 0x10,"object.item.audioItem.podcast");
  return;
}


// Reference entry 11002be0; body size 18 bytes.
#line 1 "ENTRY_11002be0"

void __fastcall FUN_11002be0(int param_1)

{
  thunk_FUN_110a5ba0(param_1 + 0x10,"object.item.audioItem.musicTrack");
  return;
}


// Reference entry 110031b0; body size 46 bytes.
#line 1 "ENTRY_110031b0"

__declspec(naked) void FUN_110031b0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm mov eax, dword ptr [eax + 0x34]
  __asm call eax
  __asm test al, al
  __asm je 0x110031da
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov eax, dword ptr [eax + 0x38]
  __asm call eax
  __asm test al, al
  __asm jne 0x110031d6
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x3c]
  __asm test eax, eax
  __asm jle 0x110031da
  __asm mov al, 1
  __asm pop esi
  __asm ret
  __asm xor al, al
  __asm pop esi
  __asm ret
}



// Reference entry 11004630; body size 38 bytes.
#line 1 "ENTRY_11004630"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11004630(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11004660; body size 38 bytes.
#line 1 "ENTRY_11004660"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11004660(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11004690; body size 38 bytes.
#line 1 "ENTRY_11004690"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11004690(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110046c0; body size 38 bytes.
#line 1 "ENTRY_110046c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110046c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110046f0; body size 35 bytes.
#line 1 "ENTRY_110046f0"

undefined4 __thiscall Recovered_Bulk::m_FUN_110046f0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11003ef0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,&DAT_0000449c);
  }
  return (undefined4)(param_1);
}


// Reference entry 11004720; body size 48 bytes.
#line 1 "ENTRY_11004720"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11004720(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDeleteAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_SCDeleteAsyncIOOperation);
  thunk_FUN_11003ef0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,&DAT_0000449c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11004860; body size 48 bytes.
#line 1 "ENTRY_11004860"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11004860(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPostAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_SCPostAsyncIOOperation);
  thunk_FUN_11003ef0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,&DAT_0000449c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110048a0; body size 48 bytes.
#line 1 "ENTRY_110048a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110048a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPutAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_SCPutAsyncIOOperation);
  thunk_FUN_11003ef0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,&DAT_0000449c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11004980; body size 35 bytes.
#line 1 "ENTRY_11004980"

undefined4 __thiscall Recovered_Bulk::m_FUN_11004980(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11004170();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x94);
  }
  return (undefined4)(param_1);
}


// Reference entry 11005070; body size 37 bytes.
#line 1 "ENTRY_11005070"

__declspec(naked) void FUN_11005070(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm call LAB_1005d800
  __asm mov ecx, dword ptr [esi + 0x442c]
  __asm pop esi
  __asm sub ecx, 0xca
  __asm je 0x11005090
  __asm sub ecx, 2
  __asm jne 0x11005092
  __asm mov al, 1
  __asm ret 4
}



// Reference entry 110050a0; body size 52 bytes.
#line 1 "ENTRY_110050a0"

__declspec(naked) void FUN_110050a0(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm call LAB_1005d800
  __asm mov ecx, dword ptr [esi + 0x442c]
  __asm add ecx, 0xffffff37
  __asm pop esi
  __asm cmp ecx, 0xd0
  __asm ja 0x110050d1
  __asm movzx ecx, byte ptr [ecx + LAB_110050dc]
  __asm jmp dword ptr [ecx*4 + LAB_110050d4]
  __asm mov al, 1
  __asm ret 4
}



// Reference entry 110051f0; body size 42 bytes.
#line 1 "ENTRY_110051f0"

__declspec(naked) void FUN_110051f0(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm call LAB_1005d800
  __asm mov ecx, dword ptr [esi + 0x442c]
  __asm pop esi
  __asm sub ecx, 0xc9
  __asm je 0x11005215
  __asm sub ecx, 1
  __asm je 0x11005215
  __asm sub ecx, 2
  __asm jne 0x11005217
  __asm mov al, 1
  __asm ret 4
}



// Reference entry 11005230; body size 17 bytes.
#line 1 "ENTRY_11005230"

__declspec(naked) void FUN_11005230(void)

{
  __asm mov ecx, dword ptr [ecx + 0x620c]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}



// Reference entry 11005370; body size 17 bytes.
#line 1 "ENTRY_11005370"

__declspec(naked) void FUN_11005370(void)

{
  __asm mov ecx, dword ptr [ecx + 0x620c]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}



// Reference entry 11005390; body size 17 bytes.
#line 1 "ENTRY_11005390"

__declspec(naked) void FUN_11005390(void)

{
  __asm mov ecx, dword ptr [ecx + 0x620c]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}



// Reference entry 11007000; body size 36 bytes.
#line 1 "ENTRY_11007000"

void __thiscall Recovered_Bulk::m_FUN_11007000(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x3c));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 11007030; body size 36 bytes.
#line 1 "ENTRY_11007030"

void __thiscall Recovered_Bulk::m_FUN_11007030(SCStr *param_2)
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


// Reference entry 11007650; body size 47 bytes.
#line 1 "ENTRY_11007650"

void __thiscall Recovered_Bulk::m_FUN_11007650(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  if (((*(char **)param_2 != (char *)((0x0))) && (**(char **)param_2 != '\0')) &&
     (this_ = (SCStr *)((SCStr *)(param_1 + 0x20)),(SCStr *)((param_2)) != (SCStr *)(this_))) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 110076a0; body size 36 bytes.
#line 1 "ENTRY_110076a0"

void __thiscall Recovered_Bulk::m_FUN_110076a0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x40));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 110076e0; body size 36 bytes.
#line 1 "ENTRY_110076e0"

void __thiscall Recovered_Bulk::m_FUN_110076e0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x38));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 11007710; body size 36 bytes.
#line 1 "ENTRY_11007710"

void __thiscall Recovered_Bulk::m_FUN_11007710(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x24));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 110079c0; body size 41 bytes.
#line 1 "ENTRY_110079c0"

__declspec(naked) void FUN_110079c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x110079e3
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



// Reference entry 11007ed0; body size 33 bytes.
#line 1 "ENTRY_11007ed0"

__declspec(naked) void FUN_11007ed0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x11007eef
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



// Reference entry 11007f00; body size 33 bytes.
#line 1 "ENTRY_11007f00"

__declspec(naked) void FUN_11007f00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x11007f1f
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



// Reference entry 11008010; body size 37 bytes.
#line 1 "ENTRY_11008010"

__declspec(naked) void FUN_11008010(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1100802f
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 11008130; body size 32 bytes.
#line 1 "ENTRY_11008130"

undefined4 __thiscall Recovered_Bulk::m_FUN_11008130(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11007d70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 110082c0; body size 33 bytes.
#line 1 "ENTRY_110082c0"

__declspec(naked) void FUN_110082c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x110082df
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



// Reference entry 1100bf00; body size 22 bytes.
#line 1 "ENTRY_1100bf00"

__declspec(naked) void FUN_1100bf00(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm je 0x1100bf13
  __asm push 0
  __asm push eax
  __asm add ecx, 0x28
  __asm call LAB_10037bc8
  __asm ret 4
}



// Reference entry 1100bf20; body size 23 bytes.
#line 1 "ENTRY_1100bf20"

__declspec(naked) void FUN_1100bf20(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm je 0x1100bf34
  __asm mov dword ptr [esp + 4], eax
  __asm add ecx, 0x28
  __asm jmp LAB_100373d5
  __asm ret 4
}



// Reference entry 11010200; body size 60 bytes.
#line 1 "ENTRY_11010200"

__declspec(naked) void FUN_11010200(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_11795460
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x1101022d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 11010890; body size 33 bytes.
#line 1 "ENTRY_11010890"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11010890(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110108c0; body size 33 bytes.
#line 1 "ENTRY_110108c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110108c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110109c0; body size 33 bytes.
#line 1 "ENTRY_110109c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110109c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11010e20; body size 33 bytes.
#line 1 "ENTRY_11010e20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11010e20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11010f90; body size 61 bytes.
#line 1 "ENTRY_11010f90"

__declspec(naked) void FUN_11010f90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x11010fac
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x11010fc2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 11011870; body size 57 bytes.
#line 1 "ENTRY_11011870"

__declspec(naked) void FUN_11011870(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x28]
  __asm test ecx, ecx
  __asm je 0x1101188e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm call eax
  __asm test al, al
  __asm je 0x1101188e
  __asm mov eax, dword ptr [esi + 0x24]
  __asm lea ecx, [esi + 0x24]
  __asm call dword ptr [eax + 4]
  __asm add esi, 0x8c
  __asm push esi
  __asm push dword ptr [esi + 4]
  __asm push dword ptr [esi]
  __asm call LAB_100742e9
  __asm mov eax, dword ptr [esi]
  __asm add esp, 0xc
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 11012070; body size 42 bytes.
#line 1 "ENTRY_11012070"

__declspec(naked) void FUN_11012070(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x11012095
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [eax + 8], esi
  __asm mov dword ptr [eax], LAB_1196000c
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 110120b0; body size 42 bytes.
#line 1 "ENTRY_110120b0"

__declspec(naked) void FUN_110120b0(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x110120d5
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [eax + 8], esi
  __asm mov dword ptr [eax], LAB_1195ff3c
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 110133a0; body size 21 bytes.
#line 1 "ENTRY_110133a0"

SCStr * __stdcall FUN_110133a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("select_rooms.complete");
  return (SCStr *)(param_1);
}


// Reference entry 110133c0; body size 21 bytes.
#line 1 "ENTRY_110133c0"

SCStr * __stdcall FUN_110133c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("select_rooms.generic_error");
  return (SCStr *)(param_1);
}


// Reference entry 110133e0; body size 21 bytes.
#line 1 "ENTRY_110133e0"

SCStr * __stdcall FUN_110133e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("select_rooms.init");
  return (SCStr *)(param_1);
}


// Reference entry 11013400; body size 21 bytes.
#line 1 "ENTRY_11013400"

SCStr * __stdcall FUN_11013400(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("select_rooms.list");
  return (SCStr *)(param_1);
}


// Reference entry 11013420; body size 21 bytes.
#line 1 "ENTRY_11013420"

SCStr * __stdcall FUN_11013420(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("select_rooms.remove_voice_service");
  return (SCStr *)(param_1);
}


// Reference entry 11013440; body size 21 bytes.
#line 1 "ENTRY_11013440"

SCStr * __stdcall FUN_11013440(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("select_rooms.switch_voice");
  return (SCStr *)(param_1);
}


// Reference entry 11013470; body size 35 bytes.
#line 1 "ENTRY_11013470"

__declspec(naked) void FUN_11013470(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2510
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 11015070; body size 21 bytes.
#line 1 "ENTRY_11015070"

SCStr * __stdcall FUN_11015070(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SelectRoomsWizard");
  return (SCStr *)(param_1);
}


// Reference entry 11017ac0; body size 41 bytes.
#line 1 "ENTRY_11017ac0"

__declspec(naked) void FUN_11017ac0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x11017ae3
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



// Reference entry 11017c80; body size 19 bytes.
#line 1 "ENTRY_11017c80"

void __fastcall FUN_11017c80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 11017eb0; body size 38 bytes.
#line 1 "ENTRY_11017eb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11017eb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11017ee0; body size 45 bytes.
#line 1 "ENTRY_11017ee0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11017ee0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11017f20; body size 32 bytes.
#line 1 "ENTRY_11017f20"

undefined4 __thiscall Recovered_Bulk::m_FUN_11017f20(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11017ca0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 11017f80; body size 45 bytes.
#line 1 "ENTRY_11017f80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11017f80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpCheckForControllerUpdates);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpCheckForControllerUpdates);
  thunk_FUN_11017ca0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11018120; body size 21 bytes.
#line 1 "ENTRY_11018120"

SCStr * __stdcall FUN_11018120(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 11018160; body size 23 bytes.
#line 1 "ENTRY_11018160"

SCStr * __thiscall Recovered_Bulk::m_FUN_11018160(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->int_allocRep((char *)(*(int *)(param_1 + 0x18) + 0x5d));
  return (SCStr *)(param_2);
}


// Reference entry 11018bf0; body size 45 bytes.
#line 1 "ENTRY_11018bf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11018bf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11018c30; body size 33 bytes.
#line 1 "ENTRY_11018c30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11018c30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11018d20; body size 45 bytes.
#line 1 "ENTRY_11018d20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11018d20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11018d60; body size 33 bytes.
#line 1 "ENTRY_11018d60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11018d60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonarAudioSampleDelegate);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11019440; body size 32 bytes.
#line 1 "ENTRY_11019440"

__declspec(naked) void FUN_11019440(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm je 0x1101945b
  __asm push dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm push dword ptr [esp + 0xc]
  __asm push dword ptr [esp + 0xc]
  __asm call dword ptr [eax + 4]
  __asm ret 0xc
  __asm xor eax, eax
  __asm ret 0xc
}



// Reference entry 1101ac40; body size 44 bytes.
#line 1 "ENTRY_1101ac40"

__declspec(naked) void FUN_1101ac40(void)

{
  __asm push ecx
  __asm push esi
  __asm push offset LAB_11961014
  __asm mov esi, ecx
  __asm push 0
  __asm mov dword ptr [esp + 0xc], esi
  __asm call LAB_1003a904
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [esi + 0x18], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi], LAB_11960fe8
  __asm mov byte ptr [esi + 0x14], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 1101ae40; body size 27 bytes.
#line 1 "ENTRY_1101ae40"

__declspec(naked) void FUN_1101ae40(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm call LAB_10028d21
  __asm mov ecx, dword ptr [esi + 0x18]
  __asm push eax
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm xor eax, eax
  __asm pop esi
  __asm ret 0xc
}



// Reference entry 1101ae90; body size 33 bytes.
#line 1 "ENTRY_1101ae90"

__declspec(naked) void FUN_1101ae90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp byte ptr [esi + 0x14], 0
  __asm jne 0x1101aeaf
  __asm call LAB_1003be80
  __asm test eax, eax
  __asm je 0x1101aeab
  __asm push esi
  __asm lea ecx, [eax + 0x18]
  __asm call LAB_10070892
  __asm mov byte ptr [esi + 0x14], 1
  __asm pop esi
  __asm ret
}



// Reference entry 1101aec0; body size 40 bytes.
#line 1 "ENTRY_1101aec0"

__declspec(naked) void FUN_1101aec0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp byte ptr [esi + 0x14], 0
  __asm je 0x1101aee6
  __asm call LAB_1003be80
  __asm test eax, eax
  __asm je 0x1101aee2
  __asm push esi
  __asm lea ecx, [eax + 0x18]
  __asm mov byte ptr [eax + 0x6b8], 0
  __asm call LAB_10065348
  __asm mov byte ptr [esi + 0x14], 0
  __asm pop esi
  __asm ret
}



// Reference entry 1101afb0; body size 41 bytes.
#line 1 "ENTRY_1101afb0"

__declspec(naked) void FUN_1101afb0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x1101afd3
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



// Reference entry 1101b3c0; body size 26 bytes.
#line 1 "ENTRY_1101b3c0"

void __fastcall FUN_1101b3c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 1101b700; body size 45 bytes.
#line 1 "ENTRY_1101b700"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1101b700(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1101b740; body size 52 bytes.
#line 1 "ENTRY_1101b740"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1101b740(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1101b790; body size 52 bytes.
#line 1 "ENTRY_1101b790"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1101b790(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1101b7e0; body size 33 bytes.
#line 1 "ENTRY_1101b7e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1101b7e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCDDynamicPropertyCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1101b810; body size 33 bytes.
#line 1 "ENTRY_1101b810"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1101b810(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1101b840; body size 32 bytes.
#line 1 "ENTRY_1101b840"

undefined4 __thiscall Recovered_Bulk::m_FUN_1101b840(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1101b470();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }
  return (undefined4)(param_1);
}


// Reference entry 1101b870; body size 45 bytes.
#line 1 "ENTRY_1101b870"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1101b870(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNowPlayingRatingsUnsupported);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingRatingsUnsupported);
  thunk_FUN_1103c2d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1101b8c0; body size 48 bytes.
#line 1 "ENTRY_1101b8c0"

__declspec(naked) void FUN_1101b8c0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_100354f4
  __asm mov esi, eax
  __asm add esp, 4
  __asm cmp esi, 1
  __asm jle 0x1101b8ed
  __asm cmp dword ptr [edi + 8], 0
  __asm je 0x1101b8ed
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 0x40]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 1101b900; body size 43 bytes.
#line 1 "ENTRY_1101b900"

__declspec(naked) void FUN_1101b900(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm test edi, edi
  __asm je 0x1101b922
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x1101b922
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm push 1
  __asm call dword ptr [eax]
  __asm pop edi
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 1101b940; body size 23 bytes.
#line 1 "ENTRY_1101b940"

__declspec(naked) void FUN_1101b940(void)

{
  __asm mov ecx, dword ptr [ecx + 0x2c]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x2c]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 1101b9a0; body size 23 bytes.
#line 1 "ENTRY_1101b9a0"

__declspec(naked) void FUN_1101b9a0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x2c]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x28]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 1101b9c0; body size 21 bytes.
#line 1 "ENTRY_1101b9c0"

SCStr * __stdcall FUN_1101b9c0(SCStr *param_1, unsigned int recovered_unused_stack_0)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 1101b9e0; body size 23 bytes.
#line 1 "ENTRY_1101b9e0"

__declspec(naked) void FUN_1101b9e0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x2c]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x1c]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 1101ba20; body size 23 bytes.
#line 1 "ENTRY_1101ba20"

__declspec(naked) void FUN_1101ba20(void)

{
  __asm mov ecx, dword ptr [ecx + 0x2c]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x24]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 1101ba40; body size 21 bytes.
#line 1 "ENTRY_1101ba40"

SCStr * __stdcall FUN_1101ba40(SCStr *param_1, unsigned int recovered_unused_stack_0)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 1101bc00; body size 44 bytes.
#line 1 "ENTRY_1101bc00"

__declspec(naked) void FUN_1101bc00(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm push offset LAB_1187c25c
  __asm call LAB_1008ca83
  __asm test al, al
  __asm jne 0x1101bc27
  __asm mov ecx, dword ptr [esp + 4]
  __asm push offset LAB_1187c30c
  __asm call LAB_1008ca83
  __asm test al, al
  __asm jne 0x1101bc27
  __asm ret 4
  __asm mov al, 1
  __asm ret 4
}



// Reference entry 1101cd50; body size 26 bytes.
#line 1 "ENTRY_1101cd50"

void __fastcall FUN_1101cd50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 1101d160; body size 45 bytes.
#line 1 "ENTRY_1101d160"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1101d160(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1101d1a0; body size 52 bytes.
#line 1 "ENTRY_1101d1a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1101d1a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1101d1f0; body size 52 bytes.
#line 1 "ENTRY_1101d1f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1101d1f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1101d240; body size 33 bytes.
#line 1 "ENTRY_1101d240"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1101d240(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1101d360; body size 52 bytes.
#line 1 "ENTRY_1101d360"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1101d360(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNowPlayingSourceHlsStatic);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingSourceHlsStatic);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingSourceHlsStatic);
  thunk_FUN_11042880();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1101d3b0; body size 52 bytes.
#line 1 "ENTRY_1101d3b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1101d3b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNowPlayingSourceHlsStatic);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingSourceHlsStatic);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingSourceHlsStatic);
  thunk_FUN_11042880();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1101d400; body size 52 bytes.
#line 1 "ENTRY_1101d400"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1101d400(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNowPlayingSourceInternetRadio);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingSourceInternetRadio);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingSourceInternetRadio);
  thunk_FUN_11042880();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1101d450; body size 52 bytes.
#line 1 "ENTRY_1101d450"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1101d450(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNowPlayingSourceLineIn);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingSourceLineIn);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingSourceLineIn);
  thunk_FUN_11042880();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1101d5e0; body size 52 bytes.
#line 1 "ENTRY_1101d5e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1101d5e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNowPlayingSourceSonosAlarm);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingSourceSonosAlarm);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingSourceSonosAlarm);
  thunk_FUN_11042880();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1101d630; body size 52 bytes.
#line 1 "ENTRY_1101d630"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1101d630(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNowPlayingSourceVirtualLineIn);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingSourceVirtualLineIn);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingSourceVirtualLineIn);
  thunk_FUN_11042880();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1101d6b0; body size 51 bytes.
#line 1 "ENTRY_1101d6b0"

__declspec(naked) void FUN_1101d6b0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_100354f4
  __asm mov esi, eax
  __asm add esp, 4
  __asm cmp esi, 1
  __asm jle 0x1101d6e0
  __asm cmp dword ptr [edi + 8], 0
  __asm je 0x1101d6e0
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 0xe8]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 1101d6f0; body size 51 bytes.
#line 1 "ENTRY_1101d6f0"

__declspec(naked) void FUN_1101d6f0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_100354f4
  __asm mov esi, eax
  __asm add esp, 4
  __asm cmp esi, 1
  __asm jle 0x1101d720
  __asm cmp dword ptr [edi + 8], 0
  __asm je 0x1101d720
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 0xe8]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 1101d760; body size 23 bytes.
#line 1 "ENTRY_1101d760"

__declspec(naked) void FUN_1101d760(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x6c]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 1101d780; body size 23 bytes.
#line 1 "ENTRY_1101d780"

__declspec(naked) void FUN_1101d780(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x78]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 1101d8d0; body size 23 bytes.
#line 1 "ENTRY_1101d8d0"

__declspec(naked) void FUN_1101d8d0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x70]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 1101d8f0; body size 26 bytes.
#line 1 "ENTRY_1101d8f0"

__declspec(naked) void FUN_1101d8f0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x80]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 1101d950; body size 60 bytes.
#line 1 "ENTRY_1101d950"

__declspec(naked) void FUN_1101d950(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x1c5
  __asm call LAB_10077a61
  __asm add esp, 8
  __asm push eax
  __asm push offset LAB_11882ff0
  __asm push 0x1c6
  __asm call LAB_10077a61
  __asm add esp, 8
  __asm push eax
  __asm push offset LAB_11962640
  __asm push dword ptr [esp + 0x10]
  __asm call LAB_1003a1de
  __asm add esp, 0x10
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 1101d9a0; body size 23 bytes.
#line 1 "ENTRY_1101d9a0"

__declspec(naked) void FUN_1101d9a0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x5c]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 1101da00; body size 26 bytes.
#line 1 "ENTRY_1101da00"

__declspec(naked) void FUN_1101da00(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xdc]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 1101dbb0; body size 23 bytes.
#line 1 "ENTRY_1101dbb0"

__declspec(naked) void FUN_1101dbb0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x54]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 1101dc20; body size 23 bytes.
#line 1 "ENTRY_1101dc20"

__declspec(naked) void FUN_1101dc20(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x40]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 1101de90; body size 26 bytes.
#line 1 "ENTRY_1101de90"

__declspec(naked) void FUN_1101de90(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x88]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 1101df90; body size 17 bytes.
#line 1 "ENTRY_1101df90"

__declspec(naked) void FUN_1101df90(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm push offset LAB_1187c25c
  __asm call LAB_1008ca83
  __asm ret 4
}



// Reference entry 1101e080; body size 28 bytes.
#line 1 "ENTRY_1101e080"

__declspec(naked) void FUN_1101e080(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm lea ecx, [esi - 0xc]
  __asm call LAB_10057cd9
  __asm mov ecx, dword ptr [esi + 0x18]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x104]
  __asm pop esi
  __asm ret 4
}



// Reference entry 1101e240; body size 63 bytes.
#line 1 "ENTRY_1101e240"

__declspec(naked) void FUN_1101e240(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x14]
  __asm test ecx, ecx
  __asm je 0x1101e25f
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0xc]
  __asm call eax
  __asm test al, al
  __asm je 0x1101e25f
  __asm mov ecx, dword ptr [esi + 0x14]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm jmp 0x1101e262
  __asm mov eax, dword ptr [esi + 0x18]
  __asm cmp dword ptr [esp + 8], eax
  __asm jne 0x1101e27b
  __asm mov eax, dword ptr [esi - 0x18]
  __asm lea ecx, [esi - 0x18]
  __asm call dword ptr [eax + 0xec]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 8
}



// Reference entry 1101fc50; body size 26 bytes.
#line 1 "ENTRY_1101fc50"

void __fastcall FUN_1101fc50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 1101ff80; body size 45 bytes.
#line 1 "ENTRY_1101ff80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1101ff80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1101ffc0; body size 52 bytes.
#line 1 "ENTRY_1101ffc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1101ffc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11020010; body size 52 bytes.
#line 1 "ENTRY_11020010"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11020010(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11020060; body size 33 bytes.
#line 1 "ENTRY_11020060"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11020060(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11020090; body size 55 bytes.
#line 1 "ENTRY_11020090"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11020090(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportBuzzer);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportBuzzer);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportBuzzer);
  thunk_FUN_11056710();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110200e0; body size 55 bytes.
#line 1 "ENTRY_110200e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110200e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportHTAudioStream);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportHTAudioStream);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportHTAudioStream);
  thunk_FUN_11056710();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11020130; body size 55 bytes.
#line 1 "ENTRY_11020130"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11020130(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportHls);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportHls);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportHls);
  thunk_FUN_11056710();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11020180; body size 55 bytes.
#line 1 "ENTRY_11020180"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11020180(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportInternetRadio);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportInternetRadio);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportInternetRadio);
  thunk_FUN_11056710();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110201d0; body size 55 bytes.
#line 1 "ENTRY_110201d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110201d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportLineIn);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportLineIn);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportLineIn);
  thunk_FUN_11056710();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11020220; body size 55 bytes.
#line 1 "ENTRY_11020220"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11020220(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportOther);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportOther);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportOther);
  thunk_FUN_11056710();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11020370; body size 55 bytes.
#line 1 "ENTRY_11020370"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11020370(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportQueue);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportQueue);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportQueue);
  thunk_FUN_11056710();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110203c0; body size 55 bytes.
#line 1 "ENTRY_110203c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110203c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportSonosProgRadio);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportSonosProgRadio);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingTransportSonosProgRadio);
  thunk_FUN_11056710();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11020420; body size 51 bytes.
#line 1 "ENTRY_11020420"

__declspec(naked) void FUN_11020420(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_100354f4
  __asm mov esi, eax
  __asm add esp, 4
  __asm cmp esi, 1
  __asm jle 0x11020450
  __asm cmp dword ptr [edi + 8], 0
  __asm je 0x11020450
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 0xd8]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 11020460; body size 51 bytes.
#line 1 "ENTRY_11020460"

__declspec(naked) void FUN_11020460(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_100354f4
  __asm mov esi, eax
  __asm add esp, 4
  __asm cmp esi, 1
  __asm jle 0x11020490
  __asm cmp dword ptr [edi + 8], 0
  __asm je 0x11020490
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 0xd8]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 11020510; body size 23 bytes.
#line 1 "ENTRY_11020510"

__declspec(naked) void FUN_11020510(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x3c]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 11020590; body size 23 bytes.
#line 1 "ENTRY_11020590"

__declspec(naked) void FUN_11020590(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x5c]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 110205d0; body size 23 bytes.
#line 1 "ENTRY_110205d0"

__declspec(naked) void FUN_110205d0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x58]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 110205f0; body size 27 bytes.
#line 1 "ENTRY_110205f0"

__declspec(naked) void FUN_110205f0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm push dword ptr [esp + 0xc]
  __asm push dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm push dword ptr [esp + 0xc]
  __asm call dword ptr [eax + 0x28]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 0xc
}



// Reference entry 11020620; body size 23 bytes.
#line 1 "ENTRY_11020620"

__declspec(naked) void FUN_11020620(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x2c]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 11020640; body size 26 bytes.
#line 1 "ENTRY_11020640"

__declspec(naked) void FUN_11020640(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xac]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 11020660; body size 26 bytes.
#line 1 "ENTRY_11020660"

__declspec(naked) void FUN_11020660(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x98]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 11020680; body size 26 bytes.
#line 1 "ENTRY_11020680"

__declspec(naked) void FUN_11020680(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x8c]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 110206a0; body size 27 bytes.
#line 1 "ENTRY_110206a0"

__declspec(naked) void FUN_110206a0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm push dword ptr [esp + 0xc]
  __asm push dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm push dword ptr [esp + 0xc]
  __asm call dword ptr [eax + 0x64]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 0xc
}



// Reference entry 110206d0; body size 23 bytes.
#line 1 "ENTRY_110206d0"

__declspec(naked) void FUN_110206d0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x60]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 11020710; body size 21 bytes.
#line 1 "ENTRY_11020710"

SCStr * __stdcall FUN_11020710(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCNowPlayingTransportOther");
  return (SCStr *)(param_1);
}


// Reference entry 11020730; body size 23 bytes.
#line 1 "ENTRY_11020730"

__declspec(naked) void FUN_11020730(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x70]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 110207a0; body size 33 bytes.
#line 1 "ENTRY_110207a0"

__declspec(naked) void FUN_110207a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0xe4]
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0xe0]
  __asm push eax
  __asm call LAB_100828b2
  __asm add esp, 8
  __asm pop esi
  __asm ret
}



// Reference entry 110207d0; body size 33 bytes.
#line 1 "ENTRY_110207d0"

__declspec(naked) void FUN_110207d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0xe4]
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0xe0]
  __asm push eax
  __asm call LAB_100828b2
  __asm add esp, 8
  __asm pop esi
  __asm ret
}



// Reference entry 11020930; body size 33 bytes.
#line 1 "ENTRY_11020930"

__declspec(naked) void FUN_11020930(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0xe4]
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0xe0]
  __asm push eax
  __asm call LAB_10074af0
  __asm add esp, 8
  __asm pop esi
  __asm ret
}



// Reference entry 11020970; body size 33 bytes.
#line 1 "ENTRY_11020970"

__declspec(naked) void FUN_11020970(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0xe4]
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0xe0]
  __asm push eax
  __asm call LAB_10074af0
  __asm add esp, 8
  __asm pop esi
  __asm ret
}



// Reference entry 110209d0; body size 33 bytes.
#line 1 "ENTRY_110209d0"

__declspec(naked) void FUN_110209d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0xe4]
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0xe0]
  __asm push eax
  __asm call LAB_10064687
  __asm add esp, 8
  __asm pop esi
  __asm ret
}



// Reference entry 11020a10; body size 33 bytes.
#line 1 "ENTRY_11020a10"

__declspec(naked) void FUN_11020a10(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0xe4]
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0xe0]
  __asm push eax
  __asm call LAB_10064687
  __asm add esp, 8
  __asm pop esi
  __asm ret
}



// Reference entry 11020e70; body size 44 bytes.
#line 1 "ENTRY_11020e70"

__declspec(naked) void FUN_11020e70(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm push offset LAB_1187c25c
  __asm call LAB_1008ca83
  __asm test al, al
  __asm jne 0x11020e97
  __asm mov ecx, dword ptr [esp + 4]
  __asm push offset LAB_1187c30c
  __asm call LAB_1008ca83
  __asm test al, al
  __asm jne 0x11020e97
  __asm ret 4
  __asm mov al, 1
  __asm ret 4
}



// Reference entry 11021ec0; body size 26 bytes.
#line 1 "ENTRY_11021ec0"

void __fastcall FUN_11021ec0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 11022010; body size 45 bytes.
#line 1 "ENTRY_11022010"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11022010(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11022050; body size 52 bytes.
#line 1 "ENTRY_11022050"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11022050(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110220a0; body size 52 bytes.
#line 1 "ENTRY_110220a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110220a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110220f0; body size 33 bytes.
#line 1 "ENTRY_110220f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110220f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110221f0; body size 48 bytes.
#line 1 "ENTRY_110221f0"

__declspec(naked) void FUN_110221f0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_100354f4
  __asm mov esi, eax
  __asm add esp, 4
  __asm cmp esi, 1
  __asm jle 0x1102221d
  __asm cmp dword ptr [edi + 8], 0
  __asm je 0x1102221d
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 0x40]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 11022230; body size 23 bytes.
#line 1 "ENTRY_11022230"

__declspec(naked) void FUN_11022230(void)

{
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x18]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 11022270; body size 31 bytes.
#line 1 "ENTRY_11022270"

__declspec(naked) void FUN_11022270(void)

{
  __asm push dword ptr [esp + 0x10]
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm push dword ptr [esp + 0x10]
  __asm push dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [ecx]
  __asm push dword ptr [esp + 0x10]
  __asm call dword ptr [eax + 0x38]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 0x10
}



// Reference entry 11022350; body size 23 bytes.
#line 1 "ENTRY_11022350"

__declspec(naked) void FUN_11022350(void)

{
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x2c]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 110223c0; body size 23 bytes.
#line 1 "ENTRY_110223c0"

__declspec(naked) void FUN_110223c0(void)

{
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x1c]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 11023740; body size 57 bytes.
#line 1 "ENTRY_11023740"

__declspec(naked) void FUN_11023740(void)

{
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov ebx, ecx
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x11023774
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm push dword ptr [esi + 8]
  __asm mov ecx, ebx
  __asm push edi
  __asm call LAB_1001e948
  __asm mov eax, esi
  __asm mov esi, dword ptr [esi]
  __asm push 0x18
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm cmp byte ptr [esi + 0xd], 0
  __asm je 0x11023753
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 8
}



// Reference entry 11023790; body size 49 bytes.
#line 1 "ENTRY_11023790"

__declspec(naked) void FUN_11023790(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x18]
  __asm lea eax, [esp + 8]
  __asm push edi
  __asm push eax
  __asm mov esi, ecx
  __asm call LAB_100738bc
  __asm mov eax, dword ptr [esp + 0x10]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x110237b7
  __asm mov ecx, dword ptr [edi]
  __asm cmp ecx, dword ptr [eax + 0x10]
  __asm jge 0x110237b9
  __asm mov eax, dword ptr [esi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}



// Reference entry 11025940; body size 59 bytes.
#line 1 "ENTRY_11025940"

__declspec(naked) void FUN_11025940(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x1102596c
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x11025963
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_1000468d
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 11026060; body size 41 bytes.
#line 1 "ENTRY_11026060"

__declspec(naked) void FUN_11026060(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x11026083
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



// Reference entry 110260c0; body size 41 bytes.
#line 1 "ENTRY_110260c0"

__declspec(naked) void FUN_110260c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x110260e3
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



// Reference entry 11026120; body size 41 bytes.
#line 1 "ENTRY_11026120"

__declspec(naked) void FUN_11026120(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x11026143
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



// Reference entry 11026160; body size 41 bytes.
#line 1 "ENTRY_11026160"

__declspec(naked) void FUN_11026160(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x11026183
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



// Reference entry 110261d0; body size 41 bytes.
#line 1 "ENTRY_110261d0"

__declspec(naked) void FUN_110261d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x110261f3
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



// Reference entry 11026210; body size 24 bytes.
#line 1 "ENTRY_11026210"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11026210(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11026230; body size 24 bytes.
#line 1 "ENTRY_11026230"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11026230(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11026250; body size 24 bytes.
#line 1 "ENTRY_11026250"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11026250(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11026290; body size 48 bytes.
#line 1 "ENTRY_11026290"

__declspec(naked) void FUN_11026290(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x18
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
  __asm ret 4
}



// Reference entry 11026c30; body size 60 bytes.
#line 1 "ENTRY_11026c30"

__declspec(naked) void FUN_11026c30(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea esi, [edi + 8]
  __asm push esi
  __asm mov dword ptr [edi], LAB_11963f3c
  __asm push dword ptr [esi + 4]
  __asm push dword ptr [esi]
  __asm call LAB_1008b6ce
  __asm mov eax, dword ptr [esi]
  __asm add esp, 0xc
  __asm mov ecx, esi
  __asm mov dword ptr [esi + 4], eax
  __asm call LAB_1004449a
  __asm mov dword ptr [edi], LAB_11881068
  __asm dec dword ptr [LAB_121a0e68]
  __asm mov dword ptr [edi], LAB_1186d2f4
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 11026c80; body size 19 bytes.
#line 1 "ENTRY_11026c80"

void __fastcall FUN_11026c80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 11026cc0; body size 19 bytes.
#line 1 "ENTRY_11026cc0"

void __fastcall FUN_11026cc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 11026d00; body size 26 bytes.
#line 1 "ENTRY_11026d00"

void __fastcall FUN_11026d00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 11027110; body size 19 bytes.
#line 1 "ENTRY_11027110"

void __fastcall FUN_11027110(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 110271c0; body size 17 bytes.
#line 1 "ENTRY_110271c0"

void __fastcall FUN_110271c0(undefined4 *param_1)

{
  thunk_FUN_110232f0(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 11027ac0; body size 38 bytes.
#line 1 "ENTRY_11027ac0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11027ac0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11027af0; body size 38 bytes.
#line 1 "ENTRY_11027af0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11027af0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11027b90; body size 45 bytes.
#line 1 "ENTRY_11027b90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11027b90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11027bd0; body size 45 bytes.
#line 1 "ENTRY_11027bd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11027bd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11027c10; body size 45 bytes.
#line 1 "ENTRY_11027c10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11027c10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11027c50; body size 52 bytes.
#line 1 "ENTRY_11027c50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11027c50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11027ca0; body size 52 bytes.
#line 1 "ENTRY_11027ca0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11027ca0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11027cf0; body size 32 bytes.
#line 1 "ENTRY_11027cf0"

undefined4 __thiscall Recovered_Bulk::m_FUN_11027cf0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11026d20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 11027fa0; body size 33 bytes.
#line 1 "ENTRY_11027fa0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11027fa0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11027fd0; body size 33 bytes.
#line 1 "ENTRY_11027fd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11027fd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11028000; body size 33 bytes.
#line 1 "ENTRY_11028000"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11028000(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11028030; body size 45 bytes.
#line 1 "ENTRY_11028030"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11028030(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpQueueReplaceAllTracks);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpQueueReplaceAllTracks);
  thunk_FUN_11026d20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110282c0; body size 25 bytes.
#line 1 "ENTRY_110282c0"

__declspec(naked) void FUN_110282c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x18
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 110283d0; body size 20 bytes.
#line 1 "ENTRY_110283d0"

void __thiscall Recovered_Bulk::m_FUN_110283d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_110232f0(param_2,param_3,param_1);
  return;
}


// Reference entry 11028c50; body size 48 bytes.
#line 1 "ENTRY_11028c50"

__declspec(naked) void FUN_11028c50(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_100354f4
  __asm mov esi, eax
  __asm add esp, 4
  __asm cmp esi, 1
  __asm jle 0x11028c7d
  __asm cmp dword ptr [edi + 8], 0
  __asm je 0x11028c7d
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 0x5c]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 11029380; body size 24 bytes.
#line 1 "ENTRY_11029380"

void __fastcall FUN_11029380(undefined4 *param_1)

{
  thunk_FUN_110232f0(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 11029700; body size 38 bytes.
#line 1 "ENTRY_11029700"

undefined4
__stdcall FUN_11029700(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

{
  thunk_FUN_1102bc60((int)(param_1),(int)(param_2),(int)(param_3),(int)(0),(int)(param_4),(int)(param_5),(int)(param_6));
  return (undefined4)(param_1);
}


// Reference entry 11029730; body size 57 bytes.
#line 1 "ENTRY_11029730"

__declspec(naked) void FUN_11029730(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push dword ptr [esi + 0x54]
  __asm mov edx, dword ptr [esi + 0x64]
  __asm mov eax, dword ptr [esi + 0x68]
  __asm add eax, edx
  __asm push eax
  __asm push edx
  __asm push offset LAB_11963e28
  __asm push 0xa
  __asm push offset LAB_11951390
  __asm call LAB_100238df
  __asm mov eax, dword ptr [esi + 0x64]
  __asm add esp, 0x18
  __asm mov ecx, dword ptr [esi + 0x3c]
  __asm inc eax
  __asm push dword ptr [esi + 0x68]
  __asm push eax
  __asm push dword ptr [esi + 0x54]
  __asm call LAB_100762ec
  __asm pop esi
  __asm ret
}



// Reference entry 11029780; body size 42 bytes.
#line 1 "ENTRY_11029780"

undefined4
__stdcall FUN_11029780(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  thunk_FUN_1102bc60((int)(param_1),(int)(param_2),(int)(param_3),(int)(param_4 + 1),(int)(param_5),(int)(param_6),(int)(param_7));
  return (undefined4)(param_1);
}


// Reference entry 1102ad90; body size 60 bytes.
#line 1 "ENTRY_1102ad90"

__declspec(naked) void FUN_1102ad90(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x1102adb9
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x1102adc6
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
}



// Reference entry 1102ae20; body size 21 bytes.
#line 1 "ENTRY_1102ae20"

SCStr * __stdcall FUN_1102ae20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCPlayQueueMgr");
  return (SCStr *)(param_1);
}


// Reference entry 1102ae40; body size 43 bytes.
#line 1 "ENTRY_1102ae40"

void __fastcall FUN_1102ae40(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piVar1))->v();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 1102ae80; body size 43 bytes.
#line 1 "ENTRY_1102ae80"

void __fastcall FUN_1102ae80(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piVar1))->v();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 1102af50; body size 32 bytes.
#line 1 "ENTRY_1102af50"

__declspec(naked) void FUN_1102af50(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0x5c]
  __asm test eax, eax
  __asm je 0x1102af6b
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x5c]
  __asm pop esi
  __asm mov eax, dword ptr [eax + 0x2d0]
  __asm ret
  __asm or eax, 0xffffffff
  __asm pop esi
  __asm ret
}



// Reference entry 1102af80; body size 20 bytes.
#line 1 "ENTRY_1102af80"

SCStr * __thiscall Recovered_Bulk::m_FUN_1102af80(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x10));
  return (SCStr *)(param_2);
}


// Reference entry 1102b0c0; body size 30 bytes.
#line 1 "ENTRY_1102b0c0"

int __fastcall FUN_1102b0c0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 0x20) + 0x24) - *(int *)(*(int *)(param_1 + 0x20) + 0x20) >> 3);
  if (iVar1 == 0) {
    return (int)(0);
  }
  return (int)((*(int *)(param_1 + 0x40) * 100) / iVar1);
}


// Reference entry 1102b0f0; body size 18 bytes.
#line 1 "ENTRY_1102b0f0"

int __fastcall FUN_1102b0f0(int param_1)

{
  if (0 < *(int *)(param_1 + 0x3c)) {
    return (int)((*(int *)(param_1 + 0x40) * 100) / *(int *)(param_1 + 0x3c));
  }
  return (int)(0);
}


// Reference entry 1102b260; body size 50 bytes.
#line 1 "ENTRY_1102b260"

__declspec(naked) void FUN_1102b260(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x4c]
  __asm call eax
  __asm movzx eax, al
  __asm neg eax
  __asm push offset LAB_11882ff0
  __asm sbb eax, eax
  __asm add eax, 0x220c
  __asm push eax
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 1102b2a0; body size 21 bytes.
#line 1 "ENTRY_1102b2a0"

SCStr * __stdcall FUN_1102b2a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 1102b4d0; body size 25 bytes.
#line 1 "ENTRY_1102b4d0"

__declspec(naked) void FUN_1102b4d0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x50]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x1102b4e3
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 1102b4f0; body size 20 bytes.
#line 1 "ENTRY_1102b4f0"

SCStr * __thiscall Recovered_Bulk::m_FUN_1102b4f0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 1102bc40; body size 20 bytes.
#line 1 "ENTRY_1102bc40"

void __fastcall FUN_1102bc40(int param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(undefined1*)(*(int *)(param_1 + 0x3c) + 0x30) = (undefined1)(0);
                    
                    
    ((SCVtbl_6_0*)(*(int **)(param_1 + 0x3c)))->v();
    return;
  }
  return;
}


// Reference entry 1102d850; body size 31 bytes.
#line 1 "ENTRY_1102d850"

__declspec(naked) void FUN_1102d850(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0x5c]
  __asm test eax, eax
  __asm je 0x1102d86b
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x5c]
  __asm pop esi
  __asm mov al, byte ptr [eax + 0x2c8]
  __asm ret
  __asm xor al, al
  __asm pop esi
  __asm ret
}



// Reference entry 1102db30; body size 59 bytes.
#line 1 "ENTRY_1102db30"

__declspec(naked) void FUN_1102db30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x1102db5c
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x1102db53
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_1000468d
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 1102eca0; body size 41 bytes.
#line 1 "ENTRY_1102eca0"

__declspec(naked) void FUN_1102eca0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x1102ecc3
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



// Reference entry 1102ece0; body size 41 bytes.
#line 1 "ENTRY_1102ece0"

__declspec(naked) void FUN_1102ece0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x1102ed03
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



// Reference entry 1102ed20; body size 41 bytes.
#line 1 "ENTRY_1102ed20"

__declspec(naked) void FUN_1102ed20(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x1102ed43
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



// Reference entry 1102ed60; body size 41 bytes.
#line 1 "ENTRY_1102ed60"

__declspec(naked) void FUN_1102ed60(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x1102ed83
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



// Reference entry 1102eda0; body size 24 bytes.
#line 1 "ENTRY_1102eda0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1102eda0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1102f590; body size 60 bytes.
#line 1 "ENTRY_1102f590"

__declspec(naked) void FUN_1102f590(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_1179a320
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x1102f5bd
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 1102f9d0; body size 45 bytes.
#line 1 "ENTRY_1102f9d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1102f9d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1102fa10; body size 52 bytes.
#line 1 "ENTRY_1102fa10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1102fa10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1102fa60; body size 52 bytes.
#line 1 "ENTRY_1102fa60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1102fa60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1102fb70; body size 33 bytes.
#line 1 "ENTRY_1102fb70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1102fb70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1102fba0; body size 45 bytes.
#line 1 "ENTRY_1102fba0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1102fba0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1102fdc0; body size 52 bytes.
#line 1 "ENTRY_1102fdc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1102fdc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1102fe10; body size 45 bytes.
#line 1 "ENTRY_1102fe10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1102fe10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1102ff20; body size 48 bytes.
#line 1 "ENTRY_1102ff20"

__declspec(naked) void FUN_1102ff20(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_100354f4
  __asm mov esi, eax
  __asm add esp, 4
  __asm cmp esi, 1
  __asm jle 0x1102ff4d
  __asm cmp dword ptr [edi + 8], 0
  __asm je 0x1102ff4d
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 0x20]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 1102ffa0; body size 61 bytes.
#line 1 "ENTRY_1102ffa0"

__declspec(naked) void FUN_1102ffa0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x1102ffbc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x1102ffd2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 110301e0; body size 16 bytes.
#line 1 "ENTRY_110301e0"

__declspec(naked) void FUN_110301e0(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0xdc]
  __asm call eax
  __asm test al, al
  __asm sete al
  __asm ret
}



// Reference entry 11030400; body size 21 bytes.
#line 1 "ENTRY_11030400"

SCStr * __stdcall FUN_11030400(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCPlayQueueItem");
  return (SCStr *)(param_1);
}


// Reference entry 11030420; body size 21 bytes.
#line 1 "ENTRY_11030420"

SCStr * __stdcall FUN_11030420(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCPlayQueueItemState");
  return (SCStr *)(param_1);
}


// Reference entry 11030440; body size 43 bytes.
#line 1 "ENTRY_11030440"

void __fastcall FUN_11030440(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piVar1))->v();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 11030c90; body size 21 bytes.
#line 1 "ENTRY_11030c90"

SCStr * __stdcall FUN_11030c90(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("QueuePlayPauseToggle");
  return (SCStr *)(param_1);
}


// Reference entry 11030cb0; body size 21 bytes.
#line 1 "ENTRY_11030cb0"

SCStr * __stdcall FUN_11030cb0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("QueueRemoveItem");
  return (SCStr *)(param_1);
}


// Reference entry 11030cd0; body size 42 bytes.
#line 1 "ENTRY_11030cd0"

__declspec(naked) void FUN_11030cd0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x14c]
  __asm call LAB_1001c887
  __asm test al, al
  __asm je 0x11030ceb
  __asm mov eax, 6
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 8]
  __asm mov ecx, esi
  __asm call LAB_10041079
  __asm pop esi
  __asm ret 4
}



// Reference entry 11030d10; body size 33 bytes.
#line 1 "ENTRY_11030d10"

__declspec(naked) undefined4 FUN_11030d10(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x14c]
  __asm call LAB_1001c887
  __asm test al, al
  __asm je 0x11030d29
  __asm mov eax, 6
  __asm pop esi
  __asm ret
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_10008ea9
}



// Reference entry 11030e00; body size 59 bytes.
#line 1 "ENTRY_11030e00"

__declspec(naked) void FUN_11030e00(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov eax, dword ptr [edi]
  __asm call dword ptr [eax + 0x8c]
  __asm cmp eax, 6
  __asm jne 0x11030e28
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm push offset LAB_11880488
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0xc]
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm mov esi, dword ptr [esp + 0xc]
  __asm mov ecx, edi
  __asm push esi
  __asm call LAB_10014227
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 11030e50; body size 21 bytes.
#line 1 "ENTRY_11030e50"

SCStr * __stdcall FUN_11030e50(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 11030e70; body size 21 bytes.
#line 1 "ENTRY_11030e70"

SCStr * __stdcall FUN_11030e70(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 110312c0; body size 35 bytes.
#line 1 "ENTRY_110312c0"

__declspec(naked) void FUN_110312c0(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2211
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 11032a00; body size 26 bytes.
#line 1 "ENTRY_11032a00"

void __fastcall FUN_11032a00(int param_1)

{
  thunk_FUN_10217cd0();
  if (*(char *)(param_1 + 0x145) != '\0') {
    *(undefined1*)(param_1 + 0x145) = (undefined1)(0);
  }
  return;
}


// Reference entry 11032c90; body size 17 bytes.
#line 1 "ENTRY_11032c90"

__declspec(naked) void FUN_11032c90(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm push offset LAB_1187c25c
  __asm call LAB_1008ca83
  __asm ret 4
}



// Reference entry 11034eb0; body size 45 bytes.
#line 1 "ENTRY_11034eb0"

__declspec(naked) void FUN_11034eb0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x3c]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x1b4]
  __asm test eax, eax
  __asm je 0x11034eda
  __asm mov ecx, dword ptr [eax + 8]
  __asm test ecx, ecx
  __asm je 0x11034eda
  __asm lea eax, [ecx + 0x44]
  __asm push eax
  __asm call LAB_10040dc2
  __asm test eax, eax
  __asm je 0x11034eda
  __asm mov ecx, eax
  __asm jmp LAB_10081688
  __asm xor eax, eax
  __asm ret
}



// Reference entry 110372b0; body size 21 bytes.
#line 1 "ENTRY_110372b0"

SCStr * __stdcall FUN_110372b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("DeleteItem");
  return (SCStr *)(param_1);
}


// Reference entry 110372d0; body size 21 bytes.
#line 1 "ENTRY_110372d0"

SCStr * __stdcall FUN_110372d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("DeleteSelectedItems");
  return (SCStr *)(param_1);
}


// Reference entry 110372f0; body size 21 bytes.
#line 1 "ENTRY_110372f0"

SCStr * __stdcall FUN_110372f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("MoveItem");
  return (SCStr *)(param_1);
}


// Reference entry 11037310; body size 21 bytes.
#line 1 "ENTRY_11037310"

SCStr * __stdcall FUN_11037310(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("MoveSelectedItems");
  return (SCStr *)(param_1);
}


// Reference entry 11037330; body size 21 bytes.
#line 1 "ENTRY_11037330"

SCStr * __stdcall FUN_11037330(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryEdit");
  return (SCStr *)(param_1);
}


// Reference entry 11037470; body size 21 bytes.
#line 1 "ENTRY_11037470"

SCStr * __stdcall FUN_11037470(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDragAndDrop");
  return (SCStr *)(param_1);
}


// Reference entry 11037490; body size 21 bytes.
#line 1 "ENTRY_11037490"

SCStr * __stdcall FUN_11037490(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDragAndDrop");
  return (SCStr *)(param_1);
}


// Reference entry 110374b0; body size 21 bytes.
#line 1 "ENTRY_110374b0"

SCStr * __stdcall FUN_110374b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 110374d0; body size 21 bytes.
#line 1 "ENTRY_110374d0"

SCStr * __stdcall FUN_110374d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 110374f0; body size 32 bytes.
#line 1 "ENTRY_110374f0"

SCStr * __stdcall FUN_110374f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 11037520; body size 32 bytes.
#line 1 "ENTRY_11037520"

SCStr * __stdcall FUN_11037520(SCStr *param_1)

{
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 11037550; body size 21 bytes.
#line 1 "ENTRY_11037550"

SCStr * __stdcall FUN_11037550(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionWithIntDescriptor");
  return (SCStr *)(param_1);
}


// Reference entry 11037570; body size 21 bytes.
#line 1 "ENTRY_11037570"

SCStr * __stdcall FUN_11037570(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionWithIntDescriptor");
  return (SCStr *)(param_1);
}


// Reference entry 11037690; body size 35 bytes.
#line 1 "ENTRY_11037690"

__declspec(naked) void FUN_11037690(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x221c
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 110376c0; body size 35 bytes.
#line 1 "ENTRY_110376c0"

__declspec(naked) void FUN_110376c0(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2093
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 110376f0; body size 35 bytes.
#line 1 "ENTRY_110376f0"

__declspec(naked) void FUN_110376f0(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2093
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 11037760; body size 27 bytes.
#line 1 "ENTRY_11037760"

__declspec(naked) void FUN_11037760(void)

{
  __asm mov edx, dword ptr [ecx + 0x10]
  __asm test edx, edx
  __asm je 0x11037776
  __asm mov eax, dword ptr [ecx + 0x1c]
  __asm test eax, eax
  __asm je 0x11037776
  __asm push eax
  __asm mov ecx, edx
  __asm call LAB_1003774f
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 11037790; body size 17 bytes.
#line 1 "ENTRY_11037790"

__declspec(naked) void FUN_11037790(void)

{
  __asm mov ecx, dword ptr [ecx + 0x10]
  __asm test ecx, ecx
  __asm je 0x1103779c
  __asm call LAB_100792e4
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 110377b0; body size 50 bytes.
#line 1 "ENTRY_110377b0"

__declspec(naked) void FUN_110377b0(void)

{
  __asm cmp dword ptr [ecx + 0x14], 0
  __asm je 0x110377dd
  __asm push esi
  __asm mov esi, dword ptr [ecx + 0x20]
  __asm test esi, esi
  __asm je 0x110377d7
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp eax, dword ptr [esi + 0x148]
  __asm mov ecx, dword ptr [ecx + 0x14]
  __asm lea edx, [eax + 1]
  __asm cmovbe edx, eax
  __asm push edx
  __asm push esi
  __asm call LAB_1008d12c
  __asm xor eax, eax
  __asm pop esi
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 110377f0; body size 22 bytes.
#line 1 "ENTRY_110377f0"

__declspec(naked) void FUN_110377f0(void)

{
  __asm mov eax, dword ptr [ecx + 0x14]
  __asm test eax, eax
  __asm je 0x11037801
  __asm push dword ptr [ecx + 8]
  __asm mov ecx, eax
  __asm call LAB_1009777b
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 11038200; body size 29 bytes.
#line 1 "ENTRY_11038200"

__declspec(naked) void FUN_11038200(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 0x46]
  __asm shl eax, 2
  __asm push eax
  __asm call dword ptr [LAB_122fc7bc]
  __asm add esp, 4
  __asm mov dword ptr [esi + 0x10], eax
  __asm test eax, eax
  __asm setne al
  __asm pop esi
  __asm ret
}



// Reference entry 110382c0; body size 29 bytes.
#line 1 "ENTRY_110382c0"

__declspec(naked) void FUN_110382c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 0x10]
  __asm test eax, eax
  __asm je 0x110382db
  __asm push eax
  __asm call dword ptr [LAB_122fc7ac]
  __asm add esp, 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 110382f0; body size 29 bytes.
#line 1 "ENTRY_110382f0"

__declspec(naked) void FUN_110382f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 0xc]
  __asm test eax, eax
  __asm je 0x1103830b
  __asm push eax
  __asm call dword ptr [LAB_122fc7ac]
  __asm add esp, 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 11038930; body size 31 bytes.
#line 1 "ENTRY_11038930"

__declspec(naked) void FUN_11038930(void)

{
  __asm cmp dword ptr [esp + 8], 2
  __asm jae 0x1103893d
  __asm mov eax, 2
  __asm ret
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov edx, 0x4d42
  __asm xor eax, eax
  __asm cmp word ptr [ecx], dx
  __asm setne al
  __asm ret
}



// Reference entry 11038960; body size 62 bytes.
#line 1 "ENTRY_11038960"

__declspec(naked) void FUN_11038960(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 0xc]
  __asm test eax, eax
  __asm je 0x1103897b
  __asm push eax
  __asm call dword ptr [LAB_122fc7ac]
  __asm add esp, 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi + 0x10]
  __asm test eax, eax
  __asm je 0x11038993
  __asm push eax
  __asm call dword ptr [LAB_122fc7ac]
  __asm add esp, 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 110389b0; body size 55 bytes.
#line 1 "ENTRY_110389b0"

__declspec(naked) void FUN_110389b0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10057f4a
  __asm mov dword ptr [esi], LAB_11964a50
  __asm mov eax, esi
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [esi + 0x10], 0
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 11038a00; body size 48 bytes.
#line 1 "ENTRY_11038a00"

__declspec(naked) void FUN_11038a00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp dword ptr [esi + 8], 0
  __asm lea ecx, [esi + 8]
  __asm mov dword ptr [esi], LAB_11964a50
  __asm je 0x11038a21
  __asm push 0
  __asm lea eax, [esi + 0xc]
  __asm push eax
  __asm push ecx
  __asm call LAB_100319fd
  __asm add esp, 0xc
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x14 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_1000b442
}



// Reference entry 11038aa0; body size 36 bytes.
#line 1 "ENTRY_11038aa0"

void __fastcall FUN_11038aa0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_11467010(param_1 + 8,param_1 + 0xc,0);
  }
  *(undefined4*)(param_1 + 0x14) = (undefined4)(2);
  return;
}


// Reference entry 110390a0; body size 37 bytes.
#line 1 "ENTRY_110390a0"

__declspec(naked) void FUN_110390a0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm cmp eax, 8
  __asm jae 0x110390af
  __asm mov eax, 2
  __asm ret
  __asm push eax
  __asm push 0
  __asm push dword ptr [esp + 0xc]
  __asm call LAB_10086f7f
  __asm add esp, 0xc
  __asm neg eax
  __asm sbb eax, eax
  __asm neg eax
  __asm ret
}



// Reference entry 11039140; body size 38 bytes.
#line 1 "ENTRY_11039140"

void __fastcall FUN_11039140(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_11467010(param_1 + 8,param_1 + 0xc,0);
  }
  *(undefined4*)(param_1 + 0x14) = (undefined4)(2);
  return;
}


// Reference entry 11039240; body size 52 bytes.
#line 1 "ENTRY_11039240"

__declspec(naked) void FUN_11039240(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push dword ptr [esi + 0x18]
  __asm mov dword ptr [esi], LAB_11964aac
  __asm call LAB_1005e133
  __asm push dword ptr [esi + 0xc]
  __asm call LAB_1005e133
  __asm lea eax, [esi + 0x28]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm call LAB_1006b676
  __asm add esp, 0xc
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_1000b442
}



// Reference entry 11039a00; body size 43 bytes.
#line 1 "ENTRY_11039a00"

undefined4 FUN_11039a00(char *param_1,uint param_2)

{
  if (param_2 < 10) {
    return (undefined4)(2);
  }
  if (((*param_1 == -1) && (param_1[1] == -0x28)) && (param_1[2] == -1)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 11039d80; body size 56 bytes.
#line 1 "ENTRY_11039d80"

__declspec(naked) void FUN_11039d80(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov eax, dword ptr [esi + 8]
  __asm mov ecx, dword ptr [eax + 0x98]
  __asm test ecx, ecx
  __asm je 0x11039dac
  __asm push ecx
  __asm call dword ptr [LAB_122fc7ac]
  __asm mov eax, dword ptr [esi + 8]
  __asm add esp, 4
  __asm _emit 0xc7 __asm _emit 0x80 __asm _emit 0x98 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi + 8]
  __asm _emit 0xc7 __asm _emit 0x80 __asm _emit 0x88 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 11039f60; body size 35 bytes.
#line 1 "ENTRY_11039f60"

void __fastcall FUN_11039f60(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_11063760(*(int *)(param_1 + 8));
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
  }
  *(undefined4*)(param_1 + 0x10) = (undefined4)(2);
  return;
}


// Reference entry 11039fa0; body size 56 bytes.
#line 1 "ENTRY_11039fa0"

__declspec(naked) void FUN_11039fa0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 8]
  __asm mov ecx, dword ptr [eax + 0x98]
  __asm test ecx, ecx
  __asm je 0x11039fca
  __asm push ecx
  __asm call dword ptr [LAB_122fc7ac]
  __asm mov eax, dword ptr [esi + 8]
  __asm add esp, 4
  __asm _emit 0xc7 __asm _emit 0x80 __asm _emit 0x98 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi + 8]
  __asm _emit 0xc7 __asm _emit 0x80 __asm _emit 0x88 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 8
}



// Reference entry 1103a220; body size 39 bytes.
#line 1 "ENTRY_1103a220"

__declspec(naked) void FUN_1103a220(void)

{
  __asm cmp dword ptr [esp + 8], 3
  __asm jae 0x1103a22d
  __asm mov eax, 2
  __asm ret
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp word ptr [ecx], 0x4947
  __asm jne 0x1103a241
  __asm cmp byte ptr [ecx + 2], 0x46
  __asm jne 0x1103a241
  __asm xor eax, eax
  __asm ret
  __asm mov eax, 1
  __asm ret
}



// Reference entry 1103a250; body size 37 bytes.
#line 1 "ENTRY_1103a250"

void __fastcall FUN_1103a250(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_11063760(*(int *)(param_1 + 8));
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
  }
  *(undefined4*)(param_1 + 0x10) = (undefined4)(2);
  return;
}


// Reference entry 1103aa70; body size 35 bytes.
#line 1 "ENTRY_1103aa70"

undefined4 __thiscall Recovered_Bulk::m_FUN_1103aa70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1103a600();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,200);
  }
  return (undefined4)(param_1);
}


// Reference entry 1103aaa0; body size 52 bytes.
#line 1 "ENTRY_1103aaa0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1103aaa0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBTNowPlayingSource);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCBTNowPlayingSource);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCBTNowPlayingSource);
  thunk_FUN_1101ced0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x34);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1103aaf0; body size 55 bytes.
#line 1 "ENTRY_1103aaf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1103aaf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBTNowPlayingTransport);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCBTNowPlayingTransport);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCBTNowPlayingTransport);
  thunk_FUN_11056710();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1103b2d0; body size 21 bytes.
#line 1 "ENTRY_1103b2d0"

SCStr * __stdcall FUN_1103b2d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("com.sonos.bluetooth");
  return (SCStr *)(param_1);
}


// Reference entry 1103b2f0; body size 23 bytes.
#line 1 "ENTRY_1103b2f0"

SCStr * __thiscall Recovered_Bulk::m_FUN_1103b2f0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xa8));
  return (SCStr *)(param_2);
}


// Reference entry 1103c270; body size 56 bytes.
#line 1 "ENTRY_1103c270"

__declspec(naked) void FUN_1103c270(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_11961088
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [ecx + 0xc], LAB_11964f50
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11964f64
  __asm mov dword ptr [ecx + 0xc], LAB_11964fd8
  __asm pop ecx
  __asm ret 4
}



// Reference entry 1103c2d0; body size 33 bytes.
#line 1 "ENTRY_1103c2d0"

void __fastcall FUN_1103c2d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RTrackRatingsEventHandler);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 1103c310; body size 33 bytes.
#line 1 "ENTRY_1103c310"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1103c310(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RTrackRatingsEventHandler);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1103c340; body size 59 bytes.
#line 1 "ENTRY_1103c340"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1103c340(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RTrackRatingsEventHandler);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1103c520; body size 52 bytes.
#line 1 "ENTRY_1103c520"

__declspec(naked) void FUN_1103c520(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0x40]
  __asm test eax, eax
  __asm je 0x1103c550
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x40]
  __asm mov esi, eax
  __asm cmp dword ptr [esi + 0x54], 0
  __asm je 0x1103c550
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov edx, dword ptr [edx + 0x18]
  __asm call edx
  __asm test al, al
  __asm je 0x1103c550
  __asm mov eax, dword ptr [esi + 0x54]
  __asm pop esi
  __asm mov eax, dword ptr [eax + 0x34]
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 1103c620; body size 40 bytes.
#line 1 "ENTRY_1103c620"

__declspec(naked) void FUN_1103c620(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax + 0x40]
  __asm mov esi, eax
  __asm cmp dword ptr [esi + 0x54], 0
  __asm je 0x1103c643
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov edx, dword ptr [edx + 0x18]
  __asm call edx
  __asm test al, al
  __asm je 0x1103c643
  __asm mov eax, dword ptr [esi + 0x54]
  __asm add eax, 0x2c
  __asm pop esi
  __asm ret
  __asm lea eax, [esi + 0x58]
  __asm pop esi
  __asm ret
}



// Reference entry 1103ca00; body size 41 bytes.
#line 1 "ENTRY_1103ca00"

__declspec(naked) void FUN_1103ca00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x1103ca23
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



// Reference entry 1103ca40; body size 41 bytes.
#line 1 "ENTRY_1103ca40"

__declspec(naked) void FUN_1103ca40(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x1103ca63
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



// Reference entry 1103d4d0; body size 33 bytes.
#line 1 "ENTRY_1103d4d0"

__declspec(naked) void FUN_1103d4d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1103d4ef
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



// Reference entry 1103d500; body size 33 bytes.
#line 1 "ENTRY_1103d500"

__declspec(naked) void FUN_1103d500(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1103d51f
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



// Reference entry 1103db30; body size 37 bytes.
#line 1 "ENTRY_1103db30"

__declspec(naked) void FUN_1103db30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1103db4f
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 1103dc90; body size 32 bytes.
#line 1 "ENTRY_1103dc90"

undefined4 __thiscall Recovered_Bulk::m_FUN_1103dc90(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1103d370();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 1103dcc0; body size 32 bytes.
#line 1 "ENTRY_1103dcc0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1103dcc0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1103d530();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x3c);
  }
  return (undefined4)(param_1);
}


// Reference entry 1103de70; body size 35 bytes.
#line 1 "ENTRY_1103de70"

undefined4 __thiscall Recovered_Bulk::m_FUN_1103de70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1103d850();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4)(param_1);
}


// Reference entry 1103df00; body size 33 bytes.
#line 1 "ENTRY_1103df00"

__declspec(naked) void FUN_1103df00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1103df1f
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



// Reference entry 1103ea20; body size 59 bytes.
#line 1 "ENTRY_1103ea20"

__declspec(naked) void FUN_1103ea20(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov esi, dword ptr [edi]
  __asm test esi, esi
  __asm je 0x1103ea42
  __asm lea eax, [esi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x1103ea42
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [edi], eax
  __asm pop edi
  __asm pop esi
  __asm test eax, eax
  __asm je 0x1103ea58
  __asm add eax, 4
  __asm push eax
  __asm call LAB_10066e8c
  __asm pop ecx
  __asm ret 4
}



// Reference entry 1103ea70; body size 59 bytes.
#line 1 "ENTRY_1103ea70"

__declspec(naked) void FUN_1103ea70(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov esi, dword ptr [edi]
  __asm test esi, esi
  __asm je 0x1103ea92
  __asm lea eax, [esi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x1103ea92
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [edi], eax
  __asm pop edi
  __asm pop esi
  __asm test eax, eax
  __asm je 0x1103eaa8
  __asm add eax, 4
  __asm push eax
  __asm call LAB_10066e8c
  __asm pop ecx
  __asm ret 4
}



// Reference entry 1103ed00; body size 21 bytes.
#line 1 "ENTRY_1103ed00"

SCStr * __stdcall FUN_1103ed00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIMOAPIRateTrack");
  return (SCStr *)(param_1);
}


// Reference entry 1103ed20; body size 21 bytes.
#line 1 "ENTRY_1103ed20"

SCStr * __stdcall FUN_1103ed20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCRateTrackAction");
  return (SCStr *)(param_1);
}


// Reference entry 1103ed40; body size 43 bytes.
#line 1 "ENTRY_1103ed40"

__declspec(naked) void FUN_1103ed40(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm test edi, edi
  __asm je 0x1103ed62
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x1103ed62
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm push 1
  __asm call dword ptr [eax]
  __asm pop edi
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 1103ed80; body size 43 bytes.
#line 1 "ENTRY_1103ed80"

__declspec(naked) void FUN_1103ed80(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm test edi, edi
  __asm je 0x1103eda2
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x1103eda2
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm push 1
  __asm call dword ptr [eax]
  __asm pop edi
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 11041510; body size 35 bytes.
#line 1 "ENTRY_11041510"

__declspec(naked) void FUN_11041510(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm test ecx, ecx
  __asm je 0x1104152e
  __asm mov eax, dword ptr [ecx]
  __asm push dword ptr [esp + 4]
  __asm call dword ptr [eax + 0x10]
  __asm test eax, eax
  __asm je 0x1104152e
  __asm cmp dword ptr [eax + 0x18], 1
  __asm sete al
  __asm ret 4
  __asm xor al, al
  __asm ret 4
}



// Reference entry 11041c30; body size 35 bytes.
#line 1 "ENTRY_11041c30"

__declspec(naked) void FUN_11041c30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0xc]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi], LAB_119657d8
  __asm call LAB_1005c973
  __asm mov eax, esi
  __asm pop esi
  __asm ret
}



// Reference entry 11042050; body size 30 bytes.
#line 1 "ENTRY_11042050"

void __thiscall Recovered_Bulk::m_FUN_11042050(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 11042250; body size 24 bytes.
#line 1 "ENTRY_11042250"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11042250(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11042830; body size 47 bytes.
#line 1 "ENTRY_11042830"

__declspec(naked) void FUN_11042830(void)

{
  __asm push esi
  __asm mov esi, dword ptr [ecx + 4]
  __asm test esi, esi
  __asm je 0x1104285d
  __asm push edi
  __asm or edi, 0xffffffff
  __asm mov eax, edi
  __asm _emit 0xf0 __asm _emit 0x0f __asm _emit 0xc1 __asm _emit 0x46 __asm _emit 0x04
  __asm jne 0x1104285c
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm _emit 0xf0 __asm _emit 0x0f __asm _emit 0xc1 __asm _emit 0x7e __asm _emit 0x08
  __asm dec edi
  __asm jne 0x1104285c
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm pop edi
  __asm pop esi
  __asm jmp dword ptr [eax + 4]
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 11042ac0; body size 33 bytes.
#line 1 "ENTRY_11042ac0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11042ac0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Ref_count_obj2);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11042af0; body size 33 bytes.
#line 1 "ENTRY_11042af0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11042af0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Ref_count_obj2);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11042b20; body size 33 bytes.
#line 1 "ENTRY_11042b20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11042b20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMSQuickSkip);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11042ef0; body size 39 bytes.
#line 1 "ENTRY_11042ef0"

__declspec(naked) void FUN_11042ef0(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push offset LAB_11965468
  __asm push eax
  __asm call LAB_1003d28a
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov ecx, dword ptr [eax]
  __asm mov dword ptr [edx], ecx
  __asm mov ecx, dword ptr [eax + 4]
  __asm mov eax, edx
  __asm mov dword ptr [edx + 4], ecx
  __asm add esp, 8
  __asm ret 4
}



// Reference entry 110432f0; body size 61 bytes.
#line 1 "ENTRY_110432f0"

__declspec(naked) void FUN_110432f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x1104330c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x11043322
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 11043340; body size 30 bytes.
#line 1 "ENTRY_11043340"

void __thiscall Recovered_Bulk::m_FUN_11043340(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110435c0; body size 58 bytes.
#line 1 "ENTRY_110435c0"

__declspec(naked) void FUN_110435c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0xe8]
  __asm test eax, eax
  __asm je 0x110435f6
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0xe8]
  __asm mov esi, eax
  __asm cmp dword ptr [esi + 0x54], 0
  __asm je 0x110435f6
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov edx, dword ptr [edx + 0x18]
  __asm call edx
  __asm test al, al
  __asm je 0x110435f6
  __asm mov eax, dword ptr [esi + 0x54]
  __asm pop esi
  __asm mov eax, dword ptr [eax + 0x34]
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 11043610; body size 44 bytes.
#line 1 "ENTRY_11043610"

__declspec(naked) void FUN_11043610(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0xf0]
  __asm mov edi, eax
  __asm test edi, edi
  __asm je 0x11043637
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [edx + 0xf4]
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_10007158
  __asm pop edi
  __asm pop esi
  __asm ret
  __asm pop edi
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 11044450; body size 22 bytes.
#line 1 "ENTRY_11044450"

undefined4 __stdcall FUN_11044450(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_11043b80((int)(param_1),(int)(param_2),(int)(0));
  return (undefined4)(param_1);
}


// Reference entry 11044510; body size 44 bytes.
#line 1 "ENTRY_11044510"

__declspec(naked) void FUN_11044510(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x13
  __asm ja 0x11044539
  __asm movzx eax, byte ptr [eax + LAB_11044550]
  __asm jmp dword ptr [eax*4 + LAB_1104453c]
  __asm mov eax, 3
  __asm ret
  __asm mov eax, 1
  __asm ret
  __asm mov eax, 2
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 11045280; body size 43 bytes.
#line 1 "ENTRY_11045280"

__declspec(naked) void FUN_11045280(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax + 0xe8]
  __asm mov esi, eax
  __asm cmp dword ptr [esi + 0x54], 0
  __asm je 0x110452a6
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov edx, dword ptr [edx + 0x18]
  __asm call edx
  __asm test al, al
  __asm je 0x110452a6
  __asm mov eax, dword ptr [esi + 0x54]
  __asm add eax, 0x2c
  __asm pop esi
  __asm ret
  __asm lea eax, [esi + 0x58]
  __asm pop esi
  __asm ret
}



// Reference entry 11045600; body size 22 bytes.
#line 1 "ENTRY_11045600"

undefined4 __stdcall FUN_11045600(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_11043b80((int)(param_1),(int)(param_2),(int)(1));
  return (undefined4)(param_1);
}


// Reference entry 11045620; body size 20 bytes.
#line 1 "ENTRY_11045620"

void __stdcall FUN_11045620(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1104af00((int)(param_1),(int)(param_2),(int)(0),(int)(1));
  return;
}


// Reference entry 11046c90; body size 20 bytes.
#line 1 "ENTRY_11046c90"

void __stdcall FUN_11046c90(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1104af00((int)(param_1),(int)(param_2),(int)(0),(int)(0));
  return;
}


// Reference entry 11047dc0; body size 24 bytes.
#line 1 "ENTRY_11047dc0"

undefined4 FUN_11047dc0(void)

{
  undefined4 local_4;
  
  local_4 = (undefined4)(7);
  thunk_FUN_1104da60((int)(0),(int)(&local_4));
  return (undefined4)(local_4);
}


// Reference entry 110496d0; body size 44 bytes.
#line 1 "ENTRY_110496d0"

__declspec(naked) void FUN_110496d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0xf0]
  __asm mov edi, eax
  __asm test edi, edi
  __asm jne 0x110496e7
  __asm pop edi
  __asm xor al, al
  __asm pop esi
  __asm ret
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0xf4]
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_1004e9b8
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 1104e9e0; body size 50 bytes.
#line 1 "ENTRY_1104e9e0"

__declspec(naked) void FUN_1104e9e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0xf0]
  __asm mov edi, eax
  __asm test edi, edi
  __asm je 0x1104ea0d
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [edx + 0xf4]
  __asm push eax
  __asm mov ecx, edi
  __asm call LAB_10019407
  __asm test al, al
  __asm je 0x1104ea0d
  __asm pop edi
  __asm mov al, 1
  __asm pop esi
  __asm ret
  __asm pop edi
  __asm xor al, al
  __asm pop esi
  __asm ret
}



// Reference entry 1104ea90; body size 28 bytes.
#line 1 "ENTRY_1104ea90"

__declspec(naked) void FUN_1104ea90(void)

{
  __asm mov eax, dword ptr [ecx + 0x14]
  __asm cmp eax, 0x13
  __asm ja 0x1104eaa9
  __asm movzx eax, byte ptr [eax + LAB_1104eab4]
  __asm jmp dword ptr [eax*4 + LAB_1104eaac]
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 1104f550; body size 19 bytes.
#line 1 "ENTRY_1104f550"

void __fastcall FUN_1104f550(int param_1)

{
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
    ((SCVtbl_5_1*)(*(int **)(param_1 + 0x18)))->v((int)(param_1 + 0xc));
  }
  return;
}


// Reference entry 1104f570; body size 19 bytes.
#line 1 "ENTRY_1104f570"

void __fastcall FUN_1104f570(int param_1)

{
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
    ((SCVtbl_6_1*)(*(int **)(param_1 + 0x18)))->v((int)(param_1 + 0xc));
  }
  return;
}


// Reference entry 1104fdc0; body size 39 bytes.
#line 1 "ENTRY_1104fdc0"

__declspec(naked) void FUN_1104fdc0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm mov eax, dword ptr [eax + 0xac]
  __asm call eax
  __asm test al, al
  __asm jne 0x1104fde3
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov eax, dword ptr [eax + 0xb0]
  __asm call eax
  __asm test al, al
  __asm jne 0x1104fde3
  __asm pop esi
  __asm ret
  __asm mov al, 1
  __asm pop esi
  __asm ret
}



// Reference entry 11052040; body size 61 bytes.
#line 1 "ENTRY_11052040"

__declspec(naked) void FUN_11052040(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x1105205c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x11052072
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 110525b0; body size 20 bytes.
#line 1 "ENTRY_110525b0"

__declspec(naked) void FUN_110525b0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x54]
  __asm test ecx, ecx
  __asm je 0x110525c1
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0xd4]
  __asm jmp eax
  __asm xor al, al
  __asm ret
}



// Reference entry 11052840; body size 16 bytes.
#line 1 "ENTRY_11052840"

__declspec(naked) byte FUN_11052840(void)

{
  __asm call LAB_1004c8f7
  __asm movzx eax, al
  __asm neg eax
  __asm sbb eax, eax
  __asm and eax, 9
  __asm ret
}



// Reference entry 110533e0; body size 20 bytes.
#line 1 "ENTRY_110533e0"

__declspec(naked) void FUN_110533e0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x54]
  __asm test ecx, ecx
  __asm je 0x110533f1
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x94]
  __asm jmp eax
  __asm xor al, al
  __asm ret
}



// Reference entry 110547c0; body size 50 bytes.
#line 1 "ENTRY_110547c0"

__declspec(naked) void FUN_110547c0(void)

{
  __asm push dword ptr [esp + 4]
  __asm push offset LAB_11879790
  __asm call LAB_10093dce
  __asm add esp, 8
  __asm test al, al
  __asm jne 0x110547ed
  __asm push dword ptr [esp + 4]
  __asm push offset LAB_11879888
  __asm call LAB_10093dce
  __asm add esp, 8
  __asm test al, al
  __asm jne 0x110547ed
  __asm ret 4
  __asm mov al, 1
  __asm ret 4
}



// Reference entry 110564a0; body size 60 bytes.
#line 1 "ENTRY_110564a0"

__declspec(naked) void FUN_110564a0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea esi, [edi + 8]
  __asm push esi
  __asm mov dword ptr [edi], LAB_11965b88
  __asm push dword ptr [esi + 4]
  __asm push dword ptr [esi]
  __asm call LAB_1001989e
  __asm mov eax, dword ptr [esi]
  __asm add esp, 0xc
  __asm mov ecx, esi
  __asm mov dword ptr [esi + 4], eax
  __asm call LAB_1000417e
  __asm mov dword ptr [edi], LAB_11881068
  __asm dec dword ptr [LAB_121a0e68]
  __asm mov dword ptr [edi], LAB_1186d2f4
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 11056d00; body size 58 bytes.
#line 1 "ENTRY_11056d00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11056d00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetCrossfadeModeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetCrossfadeModeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetCrossfadeModeAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11056d50; body size 58 bytes.
#line 1 "ENTRY_11056d50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11056d50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSnoozeAlarmAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSnoozeAlarmAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSnoozeAlarmAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11056da0; body size 35 bytes.
#line 1 "ENTRY_11056da0"

undefined4 __thiscall Recovered_Bulk::m_FUN_11056da0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11056710();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf8);
  }
  return (undefined4)(param_1);
}


// Reference entry 11057300; body size 45 bytes.
#line 1 "ENTRY_11057300"

__declspec(naked) void FUN_11057300(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm push 0
  __asm push dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [edi]
  __asm call dword ptr [eax + 0x30]
  __asm cmp byte ptr [edi + 0x54], 0
  __asm mov esi, eax
  __asm je 0x11057328
  __asm mov ecx, dword ptr [edi + 0x4c]
  __asm test ecx, ecx
  __asm je 0x11057328
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 0xdc]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 11057340; body size 24 bytes.
#line 1 "ENTRY_11057340"

void __thiscall Recovered_Bulk::m_FUN_11057340(int param_2)
{
  int *param_1 = (int *)this;
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 11057690; body size 18 bytes.
#line 1 "ENTRY_11057690"

__declspec(naked) void FUN_11057690(void)

{
  __asm mov edx, dword ptr [ecx]
  __asm push 0
  __asm push dword ptr [esp + 8]
  __asm call dword ptr [edx + 0x3c]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 110576b0; body size 18 bytes.
#line 1 "ENTRY_110576b0"

__declspec(naked) void FUN_110576b0(void)

{
  __asm mov edx, dword ptr [ecx]
  __asm push 1
  __asm push dword ptr [esp + 8]
  __asm call dword ptr [edx + 0x3c]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 1105a9a0; body size 58 bytes.
#line 1 "ENTRY_1105a9a0"

__declspec(naked) void FUN_1105a9a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0xd8]
  __asm test eax, eax
  __asm je 0x1105a9d6
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0xd8]
  __asm mov esi, eax
  __asm cmp dword ptr [esi + 0x54], 0
  __asm je 0x1105a9d6
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov edx, dword ptr [edx + 0x18]
  __asm call edx
  __asm test al, al
  __asm je 0x1105a9d6
  __asm mov eax, dword ptr [esi + 0x54]
  __asm pop esi
  __asm mov eax, dword ptr [eax + 0x34]
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 1105be20; body size 43 bytes.
#line 1 "ENTRY_1105be20"

__declspec(naked) void FUN_1105be20(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax + 0xd8]
  __asm mov esi, eax
  __asm cmp dword ptr [esi + 0x54], 0
  __asm je 0x1105be46
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov edx, dword ptr [edx + 0x18]
  __asm call edx
  __asm test al, al
  __asm je 0x1105be46
  __asm mov eax, dword ptr [esi + 0x54]
  __asm add eax, 0x2c
  __asm pop esi
  __asm ret
  __asm lea eax, [esi + 0x58]
  __asm pop esi
  __asm ret
}



// Reference entry 1105c3b0; body size 54 bytes.
#line 1 "ENTRY_1105c3b0"

__declspec(naked) void FUN_1105c3b0(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm sub esp, 8
  __asm call dword ptr [eax + 0xe8]
  __asm mov eax, dword ptr [eax + 4]
  __asm test eax, eax
  __asm je 0x1105c3e0
  __asm push offset LAB_119659d4
  __asm lea ecx, [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp + 8], eax
  __asm call LAB_10059bb0
  __asm add esp, 8
  __asm ret
  __asm xor eax, eax
  __asm add esp, 8
  __asm ret
}



// Reference entry 1105c790; body size 41 bytes.
#line 1 "ENTRY_1105c790"

__declspec(naked) void FUN_1105c790(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0xd8]
  __asm test eax, eax
  __asm je 0x1105c7b3
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0xd8]
  __asm mov edx, eax
  __asm pop esi
  __asm mov eax, dword ptr [edx + 0x68]
  __asm mov edx, dword ptr [edx + 0x6c]
  __asm ret
  __asm xor eax, eax
  __asm xor edx, edx
  __asm pop esi
  __asm ret
}



// Reference entry 1105ce90; body size 45 bytes.
#line 1 "ENTRY_1105ce90"

__declspec(naked) void FUN_1105ce90(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm sub esp, 8
  __asm test eax, eax
  __asm je 0x1105ceb7
  __asm mov dword ptr [esp], eax
  __asm lea ecx, [esp]
  __asm mov eax, dword ptr [esp + 0x10]
  __asm push offset LAB_11965988
  __asm mov dword ptr [esp + 8], eax
  __asm call LAB_1007968b
  __asm add esp, 8
  __asm ret
  __asm xor al, al
  __asm add esp, 8
  __asm ret
}



// Reference entry 1105dd20; body size 38 bytes.
#line 1 "ENTRY_1105dd20"

__declspec(naked) void FUN_1105dd20(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm mov ecx, dword ptr [edi + 0x2c]
  __asm mov dword ptr [edi + 0x1c], esi
  __asm call LAB_10056050
  __asm push esi
  __asm lea edx, [edi + 8]
  __asm push edx
  __asm push eax
  __asm lea ecx, [edi + 0x20]
  __asm call LAB_10076dbe
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 1105e3c0; body size 28 bytes.
#line 1 "ENTRY_1105e3c0"

__declspec(naked) void FUN_1105e3c0(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x30]
  __asm call eax
  __asm test al, al
  __asm je 0x1105e3d7
  __asm cmp dword ptr [esp + 4], 1
  __asm jbe 0x1105e3d7
  __asm mov al, 1
  __asm ret 4
  __asm xor al, al
  __asm ret 4
}



// Reference entry 1105eb10; body size 28 bytes.
#line 1 "ENTRY_1105eb10"

__declspec(naked) void FUN_1105eb10(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x30]
  __asm call eax
  __asm test al, al
  __asm je 0x1105eb27
  __asm cmp dword ptr [esp + 4], 0
  __asm jbe 0x1105eb27
  __asm mov al, 1
  __asm ret 4
  __asm xor al, al
  __asm ret 4
}



// Reference entry 1105f3b0; body size 41 bytes.
#line 1 "ENTRY_1105f3b0"

__declspec(naked) void FUN_1105f3b0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x1105f3d3
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



// Reference entry 1105f3f0; body size 24 bytes.
#line 1 "ENTRY_1105f3f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1105f3f0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1105f420; body size 42 bytes.
#line 1 "ENTRY_1105f420"

__declspec(naked) void FUN_1105f420(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_119637ac
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11966058
  __asm pop ecx
  __asm ret 4
}



// Reference entry 1105f5e0; body size 19 bytes.
#line 1 "ENTRY_1105f5e0"

void __fastcall FUN_1105f5e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 1105f830; body size 38 bytes.
#line 1 "ENTRY_1105f830"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1105f830(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1105f860; body size 45 bytes.
#line 1 "ENTRY_1105f860"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1105f860(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1105f8a0; body size 32 bytes.
#line 1 "ENTRY_1105f8a0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1105f8a0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1105f600();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 1105f8d0; body size 33 bytes.
#line 1 "ENTRY_1105f8d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1105f8d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1105f900; body size 52 bytes.
#line 1 "ENTRY_1105f900"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1105f900(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1105f950; body size 45 bytes.
#line 1 "ENTRY_1105f950"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1105f950(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAVTransportGetRemainingSleepTimerDuration);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAVTransportGetRemainingSleepTimerDuration);
  thunk_FUN_1105f600();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11060730; body size 21 bytes.
#line 1 "ENTRY_11060730"

SCStr * __stdcall FUN_11060730(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 11060810; body size 61 bytes.
#line 1 "ENTRY_11060810"

__declspec(naked) void FUN_11060810(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 5
  __asm ja 0x11060848
  __asm jmp dword ptr [eax*4 + LAB_11060850]
  __asm mov eax, 0x384
  __asm ret 4
  __asm mov eax, 0x708
  __asm ret 4
  __asm mov eax, 0xa8c
  __asm ret 4
  __asm mov eax, 0xe10
  __asm ret 4
  __asm mov eax, 0x1c20
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 11060960; body size 35 bytes.
#line 1 "ENTRY_11060960"

__declspec(naked) void FUN_11060960(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x20c8
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 11061740; body size 41 bytes.
#line 1 "ENTRY_11061740"

__declspec(naked) void FUN_11061740(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x11061763
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



// Reference entry 11061900; body size 19 bytes.
#line 1 "ENTRY_11061900"

void __fastcall FUN_11061900(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 11061b20; body size 45 bytes.
#line 1 "ENTRY_11061b20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11061b20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11061b60; body size 32 bytes.
#line 1 "ENTRY_11061b60"

undefined4 __thiscall Recovered_Bulk::m_FUN_11061b60(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11061920();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 11061b90; body size 33 bytes.
#line 1 "ENTRY_11061b90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11061b90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11061bc0; body size 45 bytes.
#line 1 "ENTRY_11061bc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11061bc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAddTracksToQueue);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAddTracksToQueue);
  thunk_FUN_11061920();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11061da0; body size 21 bytes.
#line 1 "ENTRY_11061da0"

SCStr * __stdcall FUN_11061da0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 11062320; body size 41 bytes.
#line 1 "ENTRY_11062320"

__declspec(naked) void FUN_11062320(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x11062343
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



// Reference entry 11062370; body size 44 bytes.
#line 1 "ENTRY_11062370"

__declspec(naked) void FUN_11062370(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1001e164
  __asm mov dword ptr [esi], LAB_11966484
  __asm mov eax, esi
  __asm mov dword ptr [esi + 8], LAB_119664d0
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x48 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 110623b0; body size 44 bytes.
#line 1 "ENTRY_110623b0"

__declspec(naked) void FUN_110623b0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1001e164
  __asm mov dword ptr [esi], LAB_11966484
  __asm mov eax, esi
  __asm mov dword ptr [esi + 8], LAB_119664d0
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x48 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 110623f0; body size 44 bytes.
#line 1 "ENTRY_110623f0"

__declspec(naked) void FUN_110623f0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1001e164
  __asm mov dword ptr [esi], LAB_11966484
  __asm mov eax, esi
  __asm mov dword ptr [esi + 8], LAB_119664d0
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x48 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 11062430; body size 44 bytes.
#line 1 "ENTRY_11062430"

__declspec(naked) void FUN_11062430(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1001e164
  __asm mov dword ptr [esi], LAB_11966484
  __asm mov eax, esi
  __asm mov dword ptr [esi + 8], LAB_119664d0
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x48 __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 11062470; body size 44 bytes.
#line 1 "ENTRY_11062470"

__declspec(naked) void FUN_11062470(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1001e164
  __asm mov dword ptr [esi], LAB_11966484
  __asm mov eax, esi
  __asm mov dword ptr [esi + 8], LAB_119664d0
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 110624b0; body size 44 bytes.
#line 1 "ENTRY_110624b0"

__declspec(naked) void FUN_110624b0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1001e164
  __asm mov dword ptr [esi], LAB_11966484
  __asm mov eax, esi
  __asm mov dword ptr [esi + 8], LAB_119664d0
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x48 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 110624f0; body size 44 bytes.
#line 1 "ENTRY_110624f0"

__declspec(naked) void FUN_110624f0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1001e164
  __asm mov dword ptr [esi], LAB_11966484
  __asm mov eax, esi
  __asm mov dword ptr [esi + 8], LAB_119664d0
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x48 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 11062530; body size 19 bytes.
#line 1 "ENTRY_11062530"

void __fastcall FUN_11062530(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 11062750; body size 45 bytes.
#line 1 "ENTRY_11062750"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11062750(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11062790; body size 32 bytes.
#line 1 "ENTRY_11062790"

undefined4 __thiscall Recovered_Bulk::m_FUN_11062790(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11062550();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 110627c0; body size 33 bytes.
#line 1 "ENTRY_110627c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110627c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110627f0; body size 45 bytes.
#line 1 "ENTRY_110627f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110627f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGenericUpdateQueue);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpGenericUpdateQueue);
  thunk_FUN_11062550();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x4c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11062cd0; body size 35 bytes.
#line 1 "ENTRY_11062cd0"

__declspec(naked) void FUN_11062cd0(void)

{
  __asm mov edx, dword ptr [ecx + 0x18]
  __asm test edx, edx
  __asm jne 0x11062cda
  __asm xor eax, eax
  __asm ret
  __asm mov eax, dword ptr [ecx + 0x48]
  __asm sub eax, 0
  __asm je 0x11062cec
  __asm sub eax, 1
  __asm je 0x11062cec
  __asm sub eax, 1
  __asm jne 0x11062cd7
  __asm mov eax, dword ptr [edx + 0xd7d0]
  __asm ret
}



// Reference entry 11062d20; body size 21 bytes.
#line 1 "ENTRY_11062d20"

SCStr * __stdcall FUN_11062d20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 11063110; body size 44 bytes.
#line 1 "ENTRY_11063110"

undefined4 FUN_11063110(undefined4 *param_1,undefined4 param_2)

{
  if ((undefined4 *)(param_1) == (undefined4 *)(0x0)) {
    return (undefined4)(0);
  }
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(1);
  param_1[6] = (undefined4)(0x13);
  param_1[5] = (undefined4)(0);
  return (undefined4)(1);
}


// Reference entry 110645e0; body size 26 bytes.
#line 1 "ENTRY_110645e0"

undefined4 FUN_110645e0(int param_1)

{
  if ((*(int *)(param_1 + 4) != 0x13) && (*(int *)(param_1 + 4) != 0x12)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 11064fb0; body size 38 bytes.
#line 1 "ENTRY_11064fb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11064fb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11064fe0; body size 32 bytes.
#line 1 "ENTRY_11064fe0"

undefined4 __thiscall Recovered_Bulk::m_FUN_11064fe0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11064c80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 110650c0; body size 35 bytes.
#line 1 "ENTRY_110650c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_110650c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11064e60();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6228);
  }
  return (undefined4)(param_1);
}


// Reference entry 110650f0; body size 45 bytes.
#line 1 "ENTRY_110650f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110650f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRateItem);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpRateItem);
  thunk_FUN_11064c80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11065290; body size 17 bytes.
#line 1 "ENTRY_11065290"

__declspec(naked) void FUN_11065290(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6214]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}



// Reference entry 110652f0; body size 23 bytes.
#line 1 "ENTRY_110652f0"

SCStr * __thiscall Recovered_Bulk::m_FUN_110652f0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x621c));
  return (SCStr *)(param_2);
}


// Reference entry 11065310; body size 21 bytes.
#line 1 "ENTRY_11065310"

SCStr * __stdcall FUN_11065310(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 11065fc0; body size 21 bytes.
#line 1 "ENTRY_11065fc0"

__declspec(naked) void FUN_11065fc0(void)

{
  __asm push dword ptr [esp + 8]
  __asm add ecx, 0x10
  __asm push dword ptr [esp + 8]
  __asm call LAB_1007302e
  __asm mov al, 1
  __asm ret 8
}



// Reference entry 11065fe0; body size 23 bytes.
#line 1 "ENTRY_11065fe0"

__declspec(naked) void FUN_11065fe0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11966714
  __asm pop ecx
  __asm ret 4
}



// Reference entry 11066070; body size 40 bytes.
#line 1 "ENTRY_11066070"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11066070(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStreamBadger);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110660b0; body size 33 bytes.
#line 1 "ENTRY_110660b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110660b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStreamBadger);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110660e0; body size 33 bytes.
#line 1 "ENTRY_110660e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110660e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStreamBadger);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11066d60; body size 19 bytes.
#line 1 "ENTRY_11066d60"

void __fastcall FUN_11066d60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 11066e50; body size 45 bytes.
#line 1 "ENTRY_11066e50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11066e50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11066f70; body size 33 bytes.
#line 1 "ENTRY_11066f70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11066f70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11066fc0; body size 20 bytes.
#line 1 "ENTRY_11066fc0"

SCStr * __thiscall Recovered_Bulk::m_FUN_11066fc0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 11066fe0; body size 30 bytes.
#line 1 "ENTRY_11066fe0"

__declspec(naked) void FUN_11066fe0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm lea edi, [ecx + 0x10]
  __asm mov ecx, esi
  __asm push edi
  __asm call LAB_10036c23
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm mov dword ptr [esi + 4], ecx
  __asm pop esi
  __asm ret 4
}



// Reference entry 11067030; body size 20 bytes.
#line 1 "ENTRY_11067030"

SCStr * __thiscall Recovered_Bulk::m_FUN_11067030(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 11067070; body size 41 bytes.
#line 1 "ENTRY_11067070"

__declspec(naked) void FUN_11067070(void)

{
  __asm mov eax, dword ptr [ecx + 0x18]
  __asm test eax, eax
  __asm je 0x11067082
  __asm cmp eax, 2
  __asm jne 0x11067085
  __asm cmp dword ptr [ecx + 0x14], 0
  __asm jne 0x11067096
  __asm xor al, al
  __asm ret
  __asm cmp eax, 1
  __asm jne 0x11067096
  __asm mov eax, dword ptr [ecx + 8]
  __asm test eax, eax
  __asm je 0x11067082
  __asm cmp byte ptr [eax], 0
  __asm je 0x11067082
  __asm mov al, 1
  __asm ret
}



// Reference entry 11067680; body size 41 bytes.
#line 1 "ENTRY_11067680"

__declspec(naked) void FUN_11067680(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x110676a3
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



// Reference entry 11067850; body size 19 bytes.
#line 1 "ENTRY_11067850"

void __fastcall FUN_11067850(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 11067a80; body size 38 bytes.
#line 1 "ENTRY_11067a80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11067a80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11067ab0; body size 45 bytes.
#line 1 "ENTRY_11067ab0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11067ab0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11067af0; body size 32 bytes.
#line 1 "ENTRY_11067af0"

undefined4 __thiscall Recovered_Bulk::m_FUN_11067af0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11067870();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 11067b20; body size 33 bytes.
#line 1 "ENTRY_11067b20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11067b20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11067b50; body size 45 bytes.
#line 1 "ENTRY_11067b50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_11067b50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGetTrackPositionInfo);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpGetTrackPositionInfo);
  thunk_FUN_11067870();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11067d00; body size 21 bytes.
#line 1 "ENTRY_11067d00"

SCStr * __stdcall FUN_11067d00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 11067d50; body size 54 bytes.
#line 1 "ENTRY_11067d50"

__declspec(naked) void FUN_11067d50(void)

{
  __asm mov eax, dword ptr [ecx + 0x18]
  __asm sub esp, 8
  __asm test eax, eax
  __asm je 0x11067d80
  __asm lea ecx, [esp]
  __asm add eax, 0xd7d4
  __asm push ecx
  __asm push eax
  __asm call LAB_1006b031
  __asm add esp, 8
  __asm test al, al
  __asm je 0x11067d80
  __asm cmp dword ptr [esp + 4], 0
  __asm jl 0x11067d80
  __asm mov eax, dword ptr [esp]
  __asm jg 0x11067d82
  __asm test eax, eax
  __asm jae 0x11067d82
  __asm xor eax, eax
  __asm add esp, 8
  __asm ret
}



// Reference entry 11067db0; body size 54 bytes.
#line 1 "ENTRY_11067db0"

__declspec(naked) void FUN_11067db0(void)

{
  __asm mov eax, dword ptr [ecx + 0x18]
  __asm sub esp, 8
  __asm test eax, eax
  __asm je 0x11067de0
  __asm lea ecx, [esp]
  __asm add eax, 0xefd4
  __asm push ecx
  __asm push eax
  __asm call LAB_1006b031
  __asm add esp, 8
  __asm test al, al
  __asm je 0x11067de0
  __asm cmp dword ptr [esp + 4], 0
  __asm jl 0x11067de0
  __asm mov eax, dword ptr [esp]
  __asm jg 0x11067de2
  __asm test eax, eax
  __asm jae 0x11067de2
  __asm xor eax, eax
  __asm add esp, 8
  __asm ret
}



// Reference entry 11067e10; body size 25 bytes.
#line 1 "ENTRY_11067e10"

SCStr * __thiscall Recovered_Bulk::m_FUN_11067e10(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->int_allocRep((char *)(*(int *)(param_1 + 0x18) + 0xebd4));
  return (SCStr *)(param_2);
}


// Reference entry 11069bc0; body size 43 bytes.
#line 1 "ENTRY_11069bc0"

__declspec(naked) void FUN_11069bc0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm xor eax, eax
  __asm xor edx, edx
  __asm mov cl, byte ptr [esi]
  __asm test cl, cl
  __asm je 0x11069be9
  __asm push edi
  __asm mov edi, dword ptr [LAB_1211a5d0]
  __asm movzx ecx, cl
  __asm inc edx
  __asm inc eax
  __asm movsx ecx, byte ptr [ecx + edi]
  __asm add edx, ecx
  __asm mov cl, byte ptr [edx + esi]
  __asm test cl, cl
  __asm jne 0x11069bd6
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 1106a250; body size 25 bytes.
#line 1 "ENTRY_1106a250"

void FUN_1106a250(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_11069ce0(param_1,param_2,1,0,param_3);
  return;
}


// Reference entry 1106b190; body size 28 bytes.
#line 1 "ENTRY_1106b190"

__declspec(naked) void FUN_1106b190(void)

{
  __asm mov ecx, dword ptr [LAB_121a7b60]
  __asm test ecx, ecx
  __asm je 0x1106b1ab
  __asm push dword ptr [esp + 0xc]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 0x10]
  __asm call LAB_10022976
  __asm ret
}



// Reference entry 1106b1c0; body size 20 bytes.
#line 1 "ENTRY_1106b1c0"

__declspec(naked) void FUN_1106b1c0(void)

{
  __asm mov ecx, dword ptr [LAB_121a7b60]
  __asm test ecx, ecx
  __asm je 0x1106b1d3
  __asm push dword ptr [esp + 4]
  __asm call LAB_1002b4ae
  __asm ret
}



// Reference entry 1106b260; body size 18 bytes.
#line 1 "ENTRY_1106b260"

__declspec(naked) void FUN_1106b260(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm or dword ptr [LAB_121a7b64], eax
  __asm mov byte ptr [LAB_121a7b5d], 1
  __asm ret
}



// Reference entry 1106d900; body size 24 bytes.
#line 1 "ENTRY_1106d900"

void __fastcall FUN_1106d900(undefined4 *param_1)

{
  thunk_FUN_101fda20(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 1106f230; body size 49 bytes.
#line 1 "ENTRY_1106f230"

__declspec(naked) void FUN_1106f230(void)

{
  __asm mov eax, dword ptr [ecx + 0x6c]
  __asm mov edx, eax
  __asm and edx, 8
  __asm test eax, eax
  __asm mov eax, dword ptr [ecx + 0x1c]
  __asm push esi
  __asm mov esi, 1
  __asm cmovne esi, edx
  __asm test eax, eax
  __asm je 0x1106f25d
  __asm cmp byte ptr [eax], 0
  __asm je 0x1106f25d
  __asm cmp byte ptr [ecx + 0x74], 0
  __asm jne 0x1106f25d
  __asm test esi, esi
  __asm je 0x1106f25d
  __asm mov al, 1
  __asm pop esi
  __asm ret
  __asm xor al, al
  __asm pop esi
  __asm ret
}



// Reference entry 1106f270; body size 41 bytes.
#line 1 "ENTRY_1106f270"

__declspec(naked) void FUN_1106f270(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 0x1c]
  __asm test eax, eax
  __asm je 0x1106f295
  __asm cmp byte ptr [eax], 0
  __asm je 0x1106f295
  __asm push eax
  __asm call LAB_10025360
  __asm add esp, 4
  __asm test al, al
  __asm jne 0x1106f295
  __asm cmp byte ptr [esi + 0x74], al
  __asm jne 0x1106f295
  __asm mov al, 1
  __asm pop esi
  __asm ret
  __asm xor al, al
  __asm pop esi
  __asm ret
}



// Reference entry 1106f2b0; body size 18 bytes.
#line 1 "ENTRY_1106f2b0"

undefined1 __fastcall FUN_1106f2b0(int param_1)

{
  if ((*(char *)(param_1 + 0x74) == '\0') && ((*(byte *)(param_1 + 0x6c) & 0x10) == 0)) {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 11071fc0; body size 33 bytes.
#line 1 "ENTRY_11071fc0"

void __thiscall Recovered_Bulk::m_FUN_11071fc0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_110720c0<>(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 11071ff0; body size 33 bytes.
#line 1 "ENTRY_11071ff0"

void __thiscall Recovered_Bulk::m_FUN_11071ff0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_110721b0((int)(param_2),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 11072020; body size 57 bytes.
#line 1 "ENTRY_11072020"

__declspec(naked) void FUN_11072020(void)

{
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov ebx, ecx
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x11072054
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm push dword ptr [esi + 8]
  __asm mov ecx, ebx
  __asm push edi
  __asm call LAB_10055dee
  __asm mov eax, esi
  __asm mov esi, dword ptr [esi]
  __asm push 0x14
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm cmp byte ptr [esi + 0xd], 0
  __asm je 0x11072033
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 8
}



// Reference entry 11072070; body size 57 bytes.
#line 1 "ENTRY_11072070"

__declspec(naked) void FUN_11072070(void)

{
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov ebx, ecx
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x110720a4
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm push dword ptr [esi + 8]
  __asm mov ecx, ebx
  __asm push edi
  __asm call LAB_1004e936
  __asm mov eax, esi
  __asm mov esi, dword ptr [esi]
  __asm push 0x14
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm cmp byte ptr [esi + 0xd], 0
  __asm je 0x11072083
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 8
}



// Reference entry 110722a0; body size 49 bytes.
#line 1 "ENTRY_110722a0"

__declspec(naked) void FUN_110722a0(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x18]
  __asm lea eax, [esp + 8]
  __asm push edi
  __asm push eax
  __asm mov esi, ecx
  __asm call LAB_1006f000
  __asm mov eax, dword ptr [esp + 0x10]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x110722c7
  __asm mov ecx, dword ptr [edi]
  __asm cmp ecx, dword ptr [eax + 0x10]
  __asm jae 0x110722c9
  __asm mov eax, dword ptr [esi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}



// Reference entry 110722e0; body size 49 bytes.
#line 1 "ENTRY_110722e0"

__declspec(naked) void FUN_110722e0(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x18]
  __asm lea eax, [esp + 8]
  __asm push edi
  __asm push eax
  __asm mov esi, ecx
  __asm call LAB_1002e3a7
  __asm mov eax, dword ptr [esp + 0x10]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x11072307
  __asm mov ecx, dword ptr [edi]
  __asm cmp ecx, dword ptr [eax + 0x10]
  __asm jae 0x11072309
  __asm mov eax, dword ptr [esi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}



// Reference entry 11072320; body size 60 bytes.
#line 1 "ENTRY_11072320"

__declspec(naked) void FUN_11072320(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm push dword ptr [esp + 0x18]
  __asm lea eax, [esp + 0xc]
  __asm mov edi, ecx
  __asm push eax
  __asm call LAB_1000eb83
  __asm mov esi, dword ptr [esp + 0x10]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x11072352
  __asm mov ecx, dword ptr [esp + 0x18]
  __asm lea edx, [esi + 0x10]
  __asm push edx
  __asm call LAB_10071b61
  __asm test al, al
  __asm mov eax, esi
  __asm je 0x11072354
  __asm mov eax, dword ptr [edi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}



// Reference entry 11072370; body size 60 bytes.
#line 1 "ENTRY_11072370"

__declspec(naked) void FUN_11072370(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm push dword ptr [esp + 0x18]
  __asm lea eax, [esp + 0xc]
  __asm mov edi, ecx
  __asm push eax
  __asm call LAB_1001cb7a
  __asm mov esi, dword ptr [esp + 0x10]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x110723a2
  __asm mov ecx, dword ptr [esp + 0x18]
  __asm lea edx, [esi + 0x10]
  __asm push edx
  __asm call LAB_10071b61
  __asm test al, al
  __asm mov eax, esi
  __asm je 0x110723a4
  __asm mov eax, dword ptr [edi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}



// Reference entry 11076be0; body size 48 bytes.
#line 1 "ENTRY_11076be0"

__declspec(naked) void FUN_11076be0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x18
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
  __asm ret 4
}



// Reference entry 11076c20; body size 48 bytes.
#line 1 "ENTRY_11076c20"

__declspec(naked) void FUN_11076c20(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
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
  __asm ret 4
}



// Reference entry 11076c60; body size 48 bytes.
#line 1 "ENTRY_11076c60"

__declspec(naked) void FUN_11076c60(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
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
  __asm ret 4
}



// Reference entry 11076ca0; body size 48 bytes.
#line 1 "ENTRY_11076ca0"

__declspec(naked) void FUN_11076ca0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
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
  __asm ret 4
}



// Reference entry 11078bc0; body size 19 bytes.
#line 1 "ENTRY_11078bc0"

void __fastcall FUN_11078bc0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 11078be0; body size 19 bytes.
#line 1 "ENTRY_11078be0"

void __fastcall FUN_11078be0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 11078c00; body size 19 bytes.
#line 1 "ENTRY_11078c00"

void __fastcall FUN_11078c00(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 11078c20; body size 19 bytes.
#line 1 "ENTRY_11078c20"

void __fastcall FUN_11078c20(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 11078dc0; body size 28 bytes.
#line 1 "ENTRY_11078dc0"

void __fastcall FUN_11078dc0(int *param_1)

{
  thunk_FUN_110720c0<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 11078e90; body size 28 bytes.
#line 1 "ENTRY_11078e90"

void __fastcall FUN_11078e90(int *param_1)

{
  thunk_FUN_110721b0((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 110790c0; body size 19 bytes.
#line 1 "ENTRY_110790c0"

void __fastcall FUN_110790c0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 110790e0; body size 19 bytes.
#line 1 "ENTRY_110790e0"

void __fastcall FUN_110790e0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 11079100; body size 17 bytes.
#line 1 "ENTRY_11079100"

void __fastcall FUN_11079100(undefined4 *param_1)

{
  thunk_FUN_110709e0(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 11079120; body size 17 bytes.
#line 1 "ENTRY_11079120"

void __fastcall FUN_11079120(undefined4 *param_1)

{
  thunk_FUN_11070a80(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 11079140; body size 28 bytes.
#line 1 "ENTRY_11079140"

void __fastcall FUN_11079140(int *param_1)

{
  thunk_FUN_110720c0<>(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 11079230; body size 28 bytes.
#line 1 "ENTRY_11079230"

void __fastcall FUN_11079230(int *param_1)

{
  thunk_FUN_110721b0((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 11079970; body size 37 bytes.
#line 1 "ENTRY_11079970"

__declspec(naked) void FUN_11079970(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0xc]
  __asm mov dword ptr [esi], LAB_119bee8c
  __asm mov dword ptr [ecx], LAB_119bee80
  __asm call LAB_10072d77
  __asm mov dword ptr [esi], LAB_1188206c
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_100748ed
}



// Reference entry 1107a0a0; body size 32 bytes.
#line 1 "ENTRY_1107a0a0"

__declspec(naked) void FUN_1107a0a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [ecx], LAB_1188206c
  __asm mov dword ptr [esi + 8], LAB_119bebf0
  __asm call LAB_100748ed
  __asm mov dword ptr [esi], LAB_119bed18
  __asm pop esi
  __asm ret
}



// Reference entry 1107a0e0; body size 29 bytes.
#line 1 "ENTRY_1107a0e0"

void __fastcall FUN_1107a0e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjSMAPIContext);
  FUN_112a9d40(param_1 + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSMAPIContextCB);
  return;
}


// Reference entry 1107acb0; body size 38 bytes.
#line 1 "ENTRY_1107acb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1107acb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1107ace0; body size 38 bytes.
#line 1 "ENTRY_1107ace0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1107ace0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1107b260; body size 33 bytes.
#line 1 "ENTRY_1107b260"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1107b260(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RGetAvailableServicesCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1107b290; body size 33 bytes.
#line 1 "ENTRY_1107b290"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1107b290(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_ROAuthCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1107b2c0; body size 33 bytes.
#line 1 "ENTRY_1107b2c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1107b2c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSMAPIContextCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1107b2f0; body size 33 bytes.
#line 1 "ENTRY_1107b2f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1107b2f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPFaultHandler);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1107b320; body size 36 bytes.
#line 1 "ENTRY_1107b320"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1107b320(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPFaultHandler);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1090);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1107b350; body size 33 bytes.
#line 1 "ENTRY_1107b350"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1107b350(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSvcAccountsCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1107b440; body size 58 bytes.
#line 1 "ENTRY_1107b440"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1107b440(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPRefreshAccountCredentialsXAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpSPRefreshAccountCredentialsXAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpSPRefreshAccountCredentialsXAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1107b550; body size 60 bytes.
#line 1 "ENTRY_1107b550"

__declspec(naked) void FUN_1107b550(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0xc]
  __asm mov dword ptr [esi], LAB_119bee8c
  __asm mov dword ptr [ecx], LAB_119bee80
  __asm call LAB_10072d77
  __asm mov ecx, esi
  __asm mov dword ptr [esi], LAB_1188206c
  __asm call LAB_100748ed
  __asm test byte ptr [esp + 8], 1
  __asm je 0x1107b586
  __asm push 0x18
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 1107b5a0; body size 35 bytes.
#line 1 "ENTRY_1107b5a0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1107b5a0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_110799a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2dce4);
  }
  return (undefined4)(param_1);
}


// Reference entry 1107b5d0; body size 57 bytes.
#line 1 "ENTRY_1107b5d0"

__declspec(naked) void FUN_1107b5d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [ecx], LAB_1188206c
  __asm mov dword ptr [esi + 8], LAB_119bebf0
  __asm call LAB_100748ed
  __asm test byte ptr [esp + 8], 1
  __asm mov dword ptr [esi], LAB_119bed18
  __asm je 0x1107b603
  __asm push 0x1098
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 1107b620; body size 32 bytes.
#line 1 "ENTRY_1107b620"

undefined4 __thiscall Recovered_Bulk::m_FUN_1107b620(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_111a4f00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4)(param_1);
}


// Reference entry 1107b650; body size 51 bytes.
#line 1 "ENTRY_1107b650"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1107b650(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjSMAPIContext);
  FUN_112a9d40(param_1 + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSMAPIContextCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1107b690; body size 35 bytes.
#line 1 "ENTRY_1107b690"

undefined4 __thiscall Recovered_Bulk::m_FUN_1107b690(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10f82840();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x7098);
  }
  return (undefined4)(param_1);
}


// Reference entry 1107b9b0; body size 25 bytes.
#line 1 "ENTRY_1107b9b0"

__declspec(naked) void FUN_1107b9b0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 1107b9d0; body size 25 bytes.
#line 1 "ENTRY_1107b9d0"

__declspec(naked) void FUN_1107b9d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 1107b9f0; body size 25 bytes.
#line 1 "ENTRY_1107b9f0"

__declspec(naked) void FUN_1107b9f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x18
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 1107ba10; body size 25 bytes.
#line 1 "ENTRY_1107ba10"

__declspec(naked) void FUN_1107ba10(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 1107be90; body size 20 bytes.
#line 1 "ENTRY_1107be90"

void __thiscall Recovered_Bulk::m_FUN_1107be90(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_110709e0(param_2,param_3,param_1);
  return;
}


// Reference entry 1107beb0; body size 20 bytes.
#line 1 "ENTRY_1107beb0"

void __thiscall Recovered_Bulk::m_FUN_1107beb0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11070a80(param_2,param_3,param_1);
  return;
}


// Reference entry 1107d2c0; body size 31 bytes.
#line 1 "ENTRY_1107d2c0"

int * FUN_1107d2c0(int *param_1)

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


// Reference entry 1107e300; body size 55 bytes.
#line 1 "ENTRY_1107e300"

__declspec(naked) void FUN_1107e300(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm mov eax, dword ptr [esi]
  __asm test eax, eax
  __asm je 0x1107e330
  __asm cmp byte ptr [eax], 0
  __asm je 0x1107e330
  __asm push esi
  __asm call LAB_1006bac2
  __asm test al, al
  __asm jne 0x1107e330
  __asm push esi
  __asm lea ecx, [edi + 0xd4]
  __asm call LAB_1008701f
  __asm pop edi
  __asm mov al, 1
  __asm pop esi
  __asm ret 4
  __asm pop edi
  __asm xor al, al
  __asm pop esi
  __asm ret 4
}



// Reference entry 1107ee00; body size 59 bytes.
#line 1 "ENTRY_1107ee00"

__declspec(naked) void FUN_1107ee00(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov esi, dword ptr [edi]
  __asm test esi, esi
  __asm je 0x1107ee22
  __asm lea eax, [esi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x1107ee22
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [edi], eax
  __asm pop edi
  __asm pop esi
  __asm test eax, eax
  __asm je 0x1107ee38
  __asm add eax, 4
  __asm push eax
  __asm call LAB_10066e8c
  __asm pop ecx
  __asm ret 4
}



// Reference entry 1107ee50; body size 59 bytes.
#line 1 "ENTRY_1107ee50"

__declspec(naked) void FUN_1107ee50(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov esi, dword ptr [edi]
  __asm test esi, esi
  __asm je 0x1107ee72
  __asm lea eax, [esi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x1107ee72
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [edi], eax
  __asm pop edi
  __asm pop esi
  __asm test eax, eax
  __asm je 0x1107ee88
  __asm add eax, 4
  __asm push eax
  __asm call LAB_10066e8c
  __asm pop ecx
  __asm ret 4
}



// Reference entry 1107eea0; body size 59 bytes.
#line 1 "ENTRY_1107eea0"

__declspec(naked) void FUN_1107eea0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov esi, dword ptr [edi]
  __asm test esi, esi
  __asm je 0x1107eec2
  __asm lea eax, [esi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x1107eec2
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [edi], eax
  __asm pop edi
  __asm pop esi
  __asm test eax, eax
  __asm je 0x1107eed8
  __asm add eax, 4
  __asm push eax
  __asm call LAB_10066e8c
  __asm pop ecx
  __asm ret 4
}



// Reference entry 1107eef0; body size 59 bytes.
#line 1 "ENTRY_1107eef0"

__declspec(naked) void FUN_1107eef0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov esi, dword ptr [edi]
  __asm test esi, esi
  __asm je 0x1107ef12
  __asm lea eax, [esi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x1107ef12
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [edi], eax
  __asm pop edi
  __asm pop esi
  __asm test eax, eax
  __asm je 0x1107ef28
  __asm add eax, 4
  __asm push eax
  __asm call LAB_10066e8c
  __asm pop ecx
  __asm ret 4
}



// Reference entry 1107ef40; body size 59 bytes.
#line 1 "ENTRY_1107ef40"

__declspec(naked) void FUN_1107ef40(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov esi, dword ptr [edi]
  __asm test esi, esi
  __asm je 0x1107ef62
  __asm lea eax, [esi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x1107ef62
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [edi], eax
  __asm pop edi
  __asm pop esi
  __asm test eax, eax
  __asm je 0x1107ef78
  __asm add eax, 4
  __asm push eax
  __asm call LAB_10066e8c
  __asm pop ecx
  __asm ret 4
}



// Reference entry 1107ef90; body size 59 bytes.
#line 1 "ENTRY_1107ef90"

__declspec(naked) void FUN_1107ef90(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov esi, dword ptr [edi]
  __asm test esi, esi
  __asm je 0x1107efb2
  __asm lea eax, [esi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x1107efb2
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [edi], eax
  __asm pop edi
  __asm pop esi
  __asm test eax, eax
  __asm je 0x1107efc8
  __asm add eax, 4
  __asm push eax
  __asm call LAB_10066e8c
  __asm pop ecx
  __asm ret 4
}



// Reference entry 1107efe0; body size 59 bytes.
#line 1 "ENTRY_1107efe0"

__declspec(naked) void FUN_1107efe0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov esi, dword ptr [edi]
  __asm test esi, esi
  __asm je 0x1107f002
  __asm lea eax, [esi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x1107f002
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [edi], eax
  __asm pop edi
  __asm pop esi
  __asm test eax, eax
  __asm je 0x1107f018
  __asm add eax, 4
  __asm push eax
  __asm call LAB_10066e8c
  __asm pop ecx
  __asm ret 4
}



// Reference entry 1107f030; body size 59 bytes.
#line 1 "ENTRY_1107f030"

__declspec(naked) void FUN_1107f030(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov esi, dword ptr [edi]
  __asm test esi, esi
  __asm je 0x1107f052
  __asm lea eax, [esi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x1107f052
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [edi], eax
  __asm pop edi
  __asm pop esi
  __asm test eax, eax
  __asm je 0x1107f068
  __asm add eax, 4
  __asm push eax
  __asm call LAB_10066e8c
  __asm pop ecx
  __asm ret 4
}



// Reference entry 1107f080; body size 45 bytes.
#line 1 "ENTRY_1107f080"

__declspec(naked) void FUN_1107f080(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm test edi, edi
  __asm je 0x1107f0a2
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x1107f0a2
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm pop edi
  __asm mov dword ptr [esi], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 1107f0c0; body size 45 bytes.
#line 1 "ENTRY_1107f0c0"

__declspec(naked) void FUN_1107f0c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm test edi, edi
  __asm je 0x1107f0e2
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x1107f0e2
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm pop edi
  __asm mov dword ptr [esi], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 1107f100; body size 45 bytes.
#line 1 "ENTRY_1107f100"

__declspec(naked) void FUN_1107f100(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm test edi, edi
  __asm je 0x1107f122
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x1107f122
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm pop edi
  __asm mov dword ptr [esi], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 1107f140; body size 45 bytes.
#line 1 "ENTRY_1107f140"

__declspec(naked) void FUN_1107f140(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm test edi, edi
  __asm je 0x1107f162
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x1107f162
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm pop edi
  __asm mov dword ptr [esi], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 1107f7f0; body size 33 bytes.
#line 1 "ENTRY_1107f7f0"

void __fastcall FUN_1107f7f0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_110720c0<>(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 1107f820; body size 24 bytes.
#line 1 "ENTRY_1107f820"

void __fastcall FUN_1107f820(undefined4 *param_1)

{
  thunk_FUN_11070a80(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 1107f840; body size 24 bytes.
#line 1 "ENTRY_1107f840"

void __fastcall FUN_1107f840(undefined4 *param_1)

{
  thunk_FUN_10e460f0(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 1107fa10; body size 25 bytes.
#line 1 "ENTRY_1107fa10"

void __fastcall FUN_1107fa10(int param_1)

{
  *(undefined4*)(param_1 + 0x6c8) = (undefined4)(0x1000000);
  *(undefined1*)(param_1 + 0x6ce) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x13dc) = (undefined1)(0);
  return;
}


// Reference entry 110802c0; body size 60 bytes.
#line 1 "ENTRY_110802c0"

__declspec(naked) void FUN_110802c0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x110802e9
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x110802f6
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
}



// Reference entry 11080310; body size 60 bytes.
#line 1 "ENTRY_11080310"

__declspec(naked) void FUN_11080310(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x11080339
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x11080346
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
}



// Reference entry 11080520; body size 43 bytes.
#line 1 "ENTRY_11080520"

__declspec(naked) void FUN_11080520(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm test edi, edi
  __asm je 0x11080542
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x11080542
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm push 1
  __asm call dword ptr [eax]
  __asm pop edi
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 11080560; body size 43 bytes.
#line 1 "ENTRY_11080560"

__declspec(naked) void FUN_11080560(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm test edi, edi
  __asm je 0x11080582
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x11080582
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm push 1
  __asm call dword ptr [eax]
  __asm pop edi
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 110805a0; body size 43 bytes.
#line 1 "ENTRY_110805a0"

__declspec(naked) void FUN_110805a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm test edi, edi
  __asm je 0x110805c2
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x110805c2
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm push 1
  __asm call dword ptr [eax]
  __asm pop edi
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 110805e0; body size 43 bytes.
#line 1 "ENTRY_110805e0"

__declspec(naked) void FUN_110805e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm test edi, edi
  __asm je 0x11080602
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x11080602
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm push 1
  __asm call dword ptr [eax]
  __asm pop edi
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 11080e90; body size 48 bytes.
#line 1 "ENTRY_11080e90"

__declspec(naked) void FUN_11080e90(void)

{
  __asm push ecx
  __asm push esi
  __asm lea eax, [esp + 4]
  __asm mov esi, ecx
  __asm push eax
  __asm push 1
  __asm push 0
  __asm push 0
  __asm push 0
  __asm push 0
  __asm push 0
  __asm call LAB_1001b757
  __asm call LAB_10089f31
  __asm mov ecx, eax
  __asm call LAB_1008b7cd
  __asm mov ecx, esi
  __asm call LAB_10071b8e
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 11080f90; body size 23 bytes.
#line 1 "ENTRY_11080f90"

void __stdcall FUN_11080f90(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)(10);
  *param_1 = (undefined4)(&DAT_119bea48);
  return;
}


// Reference entry 11080fb0; body size 23 bytes.
#line 1 "ENTRY_11080fb0"

void __stdcall FUN_11080fb0(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)(0x17);
  *param_1 = (undefined4)(&DAT_119be7e8);
  return;
}


// Reference entry 11080fd0; body size 23 bytes.
#line 1 "ENTRY_11080fd0"

void __stdcall FUN_11080fd0(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)(10);
  *param_1 = (undefined4)(&DAT_119be958);
  return;
}


// Reference entry 11080ff0; body size 34 bytes.
#line 1 "ENTRY_11080ff0"

__declspec(naked) void FUN_11080ff0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push esi
  __asm call LAB_1007c778
  __asm cmp eax, 2
  __asm push 1
  __asm cmove esi, dword ptr [esp + 0x14]
  __asm push esi
  __asm call LAB_1009177c
  __asm add esp, 0xc
  __asm pop esi
  __asm ret 8
}



// Reference entry 11081020; body size 23 bytes.
#line 1 "ENTRY_11081020"

void __stdcall FUN_11081020(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)(0x16);
  *param_1 = (undefined4)(&DAT_119be5e8);
  return;
}


// Reference entry 11081040; body size 23 bytes.
#line 1 "ENTRY_11081040"

void __stdcall FUN_11081040(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)(10);
  *param_1 = (undefined4)(&DAT_119be748);
  return;
}


// Reference entry 11081060; body size 18 bytes.
#line 1 "ENTRY_11081060"

__declspec(naked) undefined4 FUN_11081060(void)

{
  __asm mov ecx, dword ptr [LAB_121a7ba4]
  __asm test ecx, ecx
  __asm je 0x1108106f
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0xc]
  __asm xor eax, eax
  __asm ret
}



// Reference entry 11081080; body size 37 bytes.
#line 1 "ENTRY_11081080"

__declspec(naked) void FUN_11081080(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm lea edi, [esi + 4]
  __asm push edi
  __asm call LAB_10081697
  __asm mov esi, dword ptr [esi + 0x14]
  __asm add esp, 4
  __asm test al, al
  __asm je 0x110810a0
  __asm push edi
  __asm call LAB_10056497
  __asm add esp, 4
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret
}



// Reference entry 110810d0; body size 37 bytes.
#line 1 "ENTRY_110810d0"

__declspec(naked) void FUN_110810d0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [ecx + 0x1c]
  __asm lea eax, [ecx + 0x639]
  __asm push eax
  __asm lea ecx, [ecx + 0x1c]
  __asm call dword ptr [esi + 0xc]
  __asm pop esi
  __asm test eax, eax
  __asm je 0x110810f2
  __asm lea ecx, [eax + 0x44]
  __asm push ecx
  __asm mov ecx, eax
  __asm call LAB_10040dc2
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 11081120; body size 19 bytes.
#line 1 "ENTRY_11081120"

void __fastcall FUN_11081120(int param_1)

{
  ((SCVtbl_3_1*)((int *)(param_1 + 0x1c)))->v((int)(param_1 + 0x639));
  return;
}


// Reference entry 11081650; body size 39 bytes.
#line 1 "ENTRY_11081650"

__declspec(naked) void FUN_11081650(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp byte ptr [esi + 0xca28], 0
  __asm jne 0x11081673
  __asm lea ecx, [esi + 0xc084]
  __asm call LAB_100144fc
  __asm test al, al
  __asm je 0x11081673
  __asm mov eax, dword ptr [esi + 0xc08c]
  __asm pop esi
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 11081680; body size 36 bytes.
#line 1 "ENTRY_11081680"

undefined4 __thiscall Recovered_Bulk::m_FUN_11081680(uint param_2)
{
  int param_1 = (int )this;
  if (param_2 < (uint)(*(int *)(param_1 + 0x114) - *(int *)(param_1 + 0x110) >> 2)) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x110) + param_2 * 4));
  }
  return (undefined4)(0);
}


// Reference entry 11081a40; body size 16 bytes.
#line 1 "ENTRY_11081a40"

int __fastcall FUN_11081a40(int param_1)

{
  return (int)(*(int *)(param_1 + 0x114) - *(int *)(param_1 + 0x110) >> 2);
}


// Reference entry 11081a60; body size 16 bytes.
#line 1 "ENTRY_11081a60"

int __fastcall FUN_11081a60(int param_1)

{
  return (int)(*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xbc) >> 2);
}


// Reference entry 11081a80; body size 16 bytes.
#line 1 "ENTRY_11081a80"

int __fastcall FUN_11081a80(int param_1)

{
  return (int)(*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0) >> 2);
}


// Reference entry 11081aa0; body size 16 bytes.
#line 1 "ENTRY_11081aa0"

int __fastcall FUN_11081aa0(int param_1)

{
  return (int)(*(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0) >> 2);
}


// Reference entry 11081b80; body size 36 bytes.
#line 1 "ENTRY_11081b80"

undefined4 __thiscall Recovered_Bulk::m_FUN_11081b80(uint param_2)
{
  int param_1 = (int )this;
  if (param_2 < (uint)(*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0) >> 2)) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0xb0) + param_2 * 4));
  }
  return (undefined4)(0);
}


// Reference entry 11081bb0; body size 36 bytes.
#line 1 "ENTRY_11081bb0"

undefined4 __thiscall Recovered_Bulk::m_FUN_11081bb0(uint param_2)
{
  int param_1 = (int )this;
  if (param_2 < (uint)(*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xbc) >> 2)) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0xbc) + param_2 * 4));
  }
  return (undefined4)(0);
}


// Reference entry 11082dc0; body size 36 bytes.
#line 1 "ENTRY_11082dc0"

undefined4 __thiscall Recovered_Bulk::m_FUN_11082dc0(uint param_2)
{
  int param_1 = (int )this;
  if (param_2 < (uint)(*(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0) >> 2)) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0xe0) + param_2 * 4));
  }
  return (undefined4)(0);
}


// Reference entry 11082e10; body size 57 bytes.
#line 1 "ENTRY_11082e10"

__declspec(naked) void FUN_11082e10(void)

{
  __asm mov eax, dword ptr [ecx + 0x114]
  __asm push esi
  __asm mov esi, dword ptr [ecx + 0x110]
  __asm sub eax, esi
  __asm mov ecx, dword ptr [esp + 8]
  __asm sar eax, 2
  __asm cmp ecx, eax
  __asm jae 0x11082e43
  __asm mov esi, dword ptr [esi + ecx*4]
  __asm test esi, esi
  __asm je 0x11082e43
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [edx + 0x54]
  __asm cmp eax, 1
  __asm jne 0x11082e43
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
  __asm xor eax, eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 11082ef0; body size 23 bytes.
#line 1 "ENTRY_11082ef0"

void __stdcall FUN_11082ef0(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)(1);
  *param_1 = (undefined4)(&DAT_119bea08);
  return;
}


// Reference entry 11082f10; body size 23 bytes.
#line 1 "ENTRY_11082f10"

void __stdcall FUN_11082f10(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)(1);
  *param_1 = (undefined4)(&DAT_119be9f8);
  return;
}


// Reference entry 110833f0; body size 38 bytes.
#line 1 "ENTRY_110833f0"

__declspec(naked) void FUN_110833f0(void)

{
  __asm mov eax, dword ptr [ecx + 0xa4]
  __asm mov edx, dword ptr [ecx + 0xa0]
  __asm sub eax, edx
  __asm sar eax, 2
  __asm test eax, eax
  __asm je 0x11083413
  __asm mov eax, dword ptr [edx]
  __asm cmp byte ptr [eax + 0x560], 0
  __asm je 0x11083413
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 11090e20; body size 28 bytes.
#line 1 "ENTRY_11090e20"

__declspec(naked) void FUN_11090e20(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1006156d
  __asm call LAB_1000daa3
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 8]
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_1006156d
}



// Reference entry 110916b0; body size 52 bytes.
#line 1 "ENTRY_110916b0"

__declspec(naked) void FUN_110916b0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1006156d
  __asm call LAB_1000daa3
  __asm cmp byte ptr [esp + 8], 0
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm je 0x110916d6
  __asm call dword ptr [edx + 0xc]
  __asm mov ecx, esi
  __asm call LAB_1006156d
  __asm pop esi
  __asm ret 4
  __asm call dword ptr [edx + 4]
  __asm mov ecx, esi
  __asm call LAB_1006156d
  __asm pop esi
  __asm ret 4
}



// Reference entry 110937d0; body size 37 bytes.
#line 1 "ENTRY_110937d0"

__declspec(naked) void FUN_110937d0(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm lea esi, [ecx + 0xbc]
  __asm push esi
  __asm call LAB_10083c1c
  __asm cmp eax, -1
  __asm je 0x110937ef
  __asm mov ecx, dword ptr [esi]
  __asm pop esi
  __asm mov eax, dword ptr [ecx + eax*4]
  __asm ret 4
  __asm xor eax, eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 11093800; body size 48 bytes.
#line 1 "ENTRY_11093800"

__declspec(naked) void FUN_11093800(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 1
  __asm push dword ptr [esp + 0xc]
  __asm lea ecx, [esi - 0x1c]
  __asm lea eax, [ecx + 0xb0]
  __asm push eax
  __asm call LAB_1005e7af
  __asm cmp eax, -1
  __asm je 0x1109382a
  __asm mov ecx, dword ptr [esi + 0x94]
  __asm pop esi
  __asm mov eax, dword ptr [ecx + eax*4]
  __asm ret 4
  __asm xor eax, eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 110939e0; body size 44 bytes.
#line 1 "ENTRY_110939e0"

__declspec(naked) void FUN_110939e0(void)

{
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm push dword ptr [esp + 0xc]
  __asm call LAB_1004400d
  __asm mov esi, eax
  __asm test esi, esi
  __asm je 0x11093a06
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [edx + 0x54]
  __asm cmp eax, 1
  __asm jne 0x11093a06
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
  __asm xor eax, eax
  __asm pop esi
  __asm ret 8
}



// Reference entry 11093d10; body size 46 bytes.
#line 1 "ENTRY_11093d10"

__declspec(naked) void FUN_11093d10(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm lea ecx, [esi - 0x1c]
  __asm lea eax, [ecx + 0x100]
  __asm push eax
  __asm call LAB_10083c1c
  __asm cmp eax, -1
  __asm je 0x11093d38
  __asm mov ecx, dword ptr [esi + 0xe4]
  __asm pop esi
  __asm mov eax, dword ptr [ecx + eax*4]
  __asm ret 4
  __asm xor eax, eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 11093d50; body size 50 bytes.
#line 1 "ENTRY_11093d50"

__declspec(naked) void FUN_11093d50(void)

{
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0xc]
  __asm lea ecx, [esi - 0x1c]
  __asm lea eax, [ecx + 0xa0]
  __asm push eax
  __asm call LAB_1005e7af
  __asm cmp eax, -1
  __asm je 0x11093d7c
  __asm mov ecx, dword ptr [esi + 0x84]
  __asm pop esi
  __asm mov eax, dword ptr [ecx + eax*4]
  __asm ret 8
  __asm xor eax, eax
  __asm pop esi
  __asm ret 8
}



// Reference entry 110942f0; body size 26 bytes.
#line 1 "ENTRY_110942f0"

void __fastcall FUN_110942f0(int param_1)

{
  thunk_FUN_1106b190(-(uint)(param_1 != 0) & param_1 + 0x2cU,"OnZoneGroupsChanged",0);
  return;
}


// Reference entry 11094310; body size 56 bytes.
#line 1 "ENTRY_11094310"

__declspec(naked) void FUN_11094310(void)

{
  __asm push esi
  __asm push edi
  __asm mov esi, ecx
  __asm push 0
  __asm push 0
  __asm push offset LAB_118ab048
  __asm inc dword ptr [esi + 0x2d41c]
  __asm lea ecx, [esi + 0x38]
  __asm call LAB_10092172
  __asm add dword ptr [esi + 0x2d41c], -1
  __asm jne 0x11094345
  __asm push 0
  __asm push 0
  __asm push offset LAB_118ab0d4
  __asm lea ecx, [esi + 0x38]
  __asm call LAB_10092172
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 11094360; body size 18 bytes.
#line 1 "ENTRY_11094360"

__declspec(naked) void FUN_11094360(void)

{
  __asm push 0
  __asm push 0
  __asm push offset LAB_118ab048
  __asm add ecx, 0x38
  __asm call LAB_10092172
  __asm ret
}



// Reference entry 11094380; body size 18 bytes.
#line 1 "ENTRY_11094380"

__declspec(naked) void FUN_11094380(void)

{
  __asm push 0
  __asm push 0
  __asm push offset LAB_118ab048
  __asm add ecx, 0x38
  __asm call LAB_10092172
  __asm ret
}



// Reference entry 11094590; body size 18 bytes.
#line 1 "ENTRY_11094590"

__declspec(naked) void FUN_11094590(void)

{
  __asm push 0
  __asm push 0
  __asm push offset LAB_118ab154
  __asm add ecx, 0x68
  __asm call LAB_10092172
  __asm ret
}



// Reference entry 110945b0; body size 18 bytes.
#line 1 "ENTRY_110945b0"

__declspec(naked) void FUN_110945b0(void)

{
  __asm push 0
  __asm push 0
  __asm push offset LAB_118ab048
  __asm add ecx, 0x38
  __asm call LAB_10092172
  __asm ret
}



// Reference entry 110945d0; body size 18 bytes.
#line 1 "ENTRY_110945d0"

__declspec(naked) void FUN_110945d0(void)

{
  __asm push 0
  __asm push 0
  __asm push offset LAB_118ab13c
  __asm add ecx, 0x60
  __asm call LAB_10092172
  __asm ret
}



// Reference entry 110945f0; body size 18 bytes.
#line 1 "ENTRY_110945f0"

__declspec(naked) void FUN_110945f0(void)

{
  __asm push 0
  __asm push 0
  __asm push offset LAB_118ab118
  __asm add ecx, 0x58
  __asm call LAB_10092172
  __asm ret
}



// Reference entry 110958a0; body size 62 bytes.
#line 1 "ENTRY_110958a0"

__declspec(naked) void FUN_110958a0(void)

{
  __asm push edi
  __asm push dword ptr [esp + 0xc]
  __asm mov edi, dword ptr [esp + 0xc]
  __asm push edi
  __asm push offset LAB_119bf428
  __asm push 3
  __asm push offset LAB_1187b53c
  __asm call LAB_100238df
  __asm add esp, 0x14
  __asm shr edi, 8
  __asm mov ecx, offset LAB_122e8d34
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x14]
  __asm push edi
  __asm call LAB_1001c0ee
  __asm xor eax, eax
  __asm pop edi
  __asm ret 0x10
}



// Reference entry 11096620; body size 61 bytes.
#line 1 "ENTRY_11096620"

__declspec(naked) void FUN_11096620(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xc4 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1006156d
  __asm call LAB_1000daa3
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 8]
  __asm mov ecx, esi
  __asm call LAB_1006156d
  __asm call LAB_1004ec47
  __asm mov ecx, eax
  __asm call LAB_10075f45
  __asm lea ecx, [esi + 0x660]
  __asm pop esi
  __asm jmp LAB_1003ceb6
}



// Reference entry 11096b70; body size 25 bytes.
#line 1 "ENTRY_11096b70"

void __thiscall Recovered_Bulk::m_FUN_11096b70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a36f0();
  *param_1 = (undefined4)(5);
  param_1[2] = (undefined4)(param_2);
  return;
}


// Reference entry 11096c40; body size 57 bytes.
#line 1 "ENTRY_11096c40"

__declspec(naked) void FUN_11096c40(void)

{
  __asm push esi
  __asm mov esi, dword ptr [LAB_121a7ba4]
  __asm test esi, esi
  __asm je 0x11096c73
  __asm push edi
  __asm lea edi, [esi + 4]
  __asm push edi
  __asm call LAB_10081697
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm add esp, 4
  __asm mov dword ptr [esi + 0x14], ecx
  __asm test al, al
  __asm je 0x11096c6c
  __asm push edi
  __asm call LAB_10056497
  __asm add esp, 4
  __asm pop edi
  __asm mov al, 1
  __asm pop esi
  __asm ret 4
  __asm xor al, al
  __asm pop esi
  __asm ret 4
}



// Reference entry 11096c90; body size 41 bytes.
#line 1 "ENTRY_11096c90"

__declspec(naked) void FUN_11096c90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm lea edi, [esi + 4]
  __asm push edi
  __asm call LAB_10081697
  __asm mov edx, dword ptr [esp + 0x10]
  __asm add esp, 4
  __asm mov dword ptr [esi + 0x14], edx
  __asm test al, al
  __asm je 0x11096cb4
  __asm push edi
  __asm call LAB_10056497
  __asm add esp, 4
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 11097130; body size 36 bytes.
#line 1 "ENTRY_11097130"

__declspec(naked) void FUN_11097130(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 8]
  __asm cmp byte ptr [ecx + 0x2d446], bl
  __asm je 0x11097150
  __asm mov byte ptr [ecx + 0x2d446], bl
  __asm call LAB_1004ec47
  __asm push ebx
  __asm mov ecx, eax
  __asm call LAB_1006cf7b
  __asm pop ebx
  __asm ret 4
}



// Reference entry 110974e0; body size 44 bytes.
#line 1 "ENTRY_110974e0"

__declspec(naked) void FUN_110974e0(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 8]
  __asm cmp byte ptr [ecx + 0x2d447], bl
  __asm je 0x11097506
  __asm mov byte ptr [ecx + 0x2d447], bl
  __asm call LAB_1004ec47
  __asm push ebx
  __asm mov ecx, eax
  __asm call LAB_1003ba02
  __asm mov al, 1
  __asm pop ebx
  __asm ret 4
  __asm xor al, al
  __asm pop ebx
  __asm ret 4
}



// Reference entry 11097520; body size 33 bytes.
#line 1 "ENTRY_11097520"

void __thiscall Recovered_Bulk::m_FUN_11097520(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a36f0();
  *param_1 = (undefined4)(4);
  *(double*)(param_1 + 2) = (double)((double)param_2);
  return;
}


// Reference entry 110977e0; body size 36 bytes.
#line 1 "ENTRY_110977e0"

__declspec(naked) void FUN_110977e0(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 8]
  __asm cmp byte ptr [ecx + 0x2d445], bl
  __asm je 0x11097800
  __asm mov byte ptr [ecx + 0x2d445], bl
  __asm call LAB_1004ec47
  __asm push ebx
  __asm mov ecx, eax
  __asm call LAB_1008ca9c
  __asm pop ebx
  __asm ret 4
}



// Reference entry 11097830; body size 18 bytes.
#line 1 "ENTRY_11097830"

void __thiscall Recovered_Bulk::m_FUN_11097830(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x128) = (undefined4)(param_2);
  DAT_122e8d30 = (int)(param_2);
  return;
}


// Reference entry 11097870; body size 25 bytes.
#line 1 "ENTRY_11097870"

void __thiscall Recovered_Bulk::m_FUN_11097870(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a36f0();
  *param_1 = (undefined4)(3);
  param_1[2] = (undefined4)(param_2);
  return;
}


// Reference entry 110978f0; body size 30 bytes.
#line 1 "ENTRY_110978f0"

__declspec(naked) void FUN_110978f0(void)

{
  __asm mov eax, dword ptr [LAB_121a7ba0]
  __asm test eax, eax
  __asm je 0x1109790d
  __asm push 0
  __asm push 0
  __asm push offset LAB_118ab200
  __asm lea ecx, [eax + 0x98]
  __asm call LAB_10092172
  __asm ret
}



// Reference entry 11097ab0; body size 52 bytes.
#line 1 "ENTRY_11097ab0"

__declspec(naked) void FUN_11097ab0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1006156d
  __asm call LAB_1000daa3
  __asm cmp byte ptr [esp + 8], 0
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm je 0x11097ad6
  __asm call dword ptr [edx + 0xc]
  __asm mov ecx, esi
  __asm call LAB_1006156d
  __asm pop esi
  __asm ret 4
  __asm call dword ptr [edx + 8]
  __asm mov ecx, esi
  __asm call LAB_1006156d
  __asm pop esi
  __asm ret 4
}



// Reference entry 110984c0; body size 34 bytes.
#line 1 "ENTRY_110984c0"

__declspec(naked) void FUN_110984c0(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov ecx, offset LAB_122e8d34
  __asm push dword ptr [eax + 0x5c]
  __asm mov eax, dword ptr [esp + 8]
  __asm push dword ptr [esp + 0xc]
  __asm shr eax, 8
  __asm push eax
  __asm call LAB_10069321
  __asm xor eax, eax
  __asm ret 0xc
}



// Reference entry 11098740; body size 33 bytes.
#line 1 "ENTRY_11098740"

void __thiscall Recovered_Bulk::m_FUN_11098740(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_11098770((int)(param_2),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 11098860; body size 60 bytes.
#line 1 "ENTRY_11098860"

__declspec(naked) void FUN_11098860(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm push dword ptr [esp + 0x18]
  __asm lea eax, [esp + 0xc]
  __asm mov edi, ecx
  __asm push eax
  __asm call LAB_10002793
  __asm mov esi, dword ptr [esp + 0x10]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x11098892
  __asm mov ecx, dword ptr [esp + 0x18]
  __asm lea edx, [esi + 0x10]
  __asm push edx
  __asm call LAB_10071b61
  __asm test al, al
  __asm mov eax, esi
  __asm je 0x11098894
  __asm mov eax, dword ptr [edi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}



// Reference entry 11098ef0; body size 48 bytes.
#line 1 "ENTRY_11098ef0"

__declspec(naked) void FUN_11098ef0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x18
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
  __asm ret 4
}



// Reference entry 110991c0; body size 19 bytes.
#line 1 "ENTRY_110991c0"

void __fastcall FUN_110991c0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 110991e0; body size 28 bytes.
#line 1 "ENTRY_110991e0"

void __fastcall FUN_110991e0(int *param_1)

{
  thunk_FUN_11098770((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 110992d0; body size 19 bytes.
#line 1 "ENTRY_110992d0"

void __fastcall FUN_110992d0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 11099350; body size 28 bytes.
#line 1 "ENTRY_11099350"

void __fastcall FUN_11099350(int *param_1)

{
  thunk_FUN_11098770((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 110996a0; body size 35 bytes.
#line 1 "ENTRY_110996a0"

undefined4 __thiscall Recovered_Bulk::m_FUN_110996a0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  FUN_1125b8f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x151c);
  }
  return (undefined4)(param_1);
}


// Reference entry 110996d0; body size 33 bytes.
#line 1 "ENTRY_110996d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110996d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RStringFileParserCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1109aed0; body size 57 bytes.
#line 1 "ENTRY_1109aed0"

__declspec(naked) void FUN_1109aed0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [LAB_1211d614]
  __asm cmp ecx, 6
  __asm ja 0x1109af08
  __asm jmp dword ptr [ecx*4 + LAB_1109af0c]
  __asm mov eax, dword ptr [LAB_1211d600]
  __asm ret
  __asm mov eax, dword ptr [LAB_1211d604]
  __asm ret
  __asm mov eax, dword ptr [LAB_1211d608]
  __asm ret
  __asm mov eax, dword ptr [LAB_1211d60c]
  __asm ret
  __asm mov eax, dword ptr [LAB_1211d610]
  __asm ret
  __asm mov eax, dword ptr [LAB_1211d618]
  __asm ret
}



// Reference entry 1109af40; body size 40 bytes.
#line 1 "ENTRY_1109af40"

__declspec(naked) void FUN_1109af40(void)

{
  __asm mov eax, dword ptr [LAB_121b60d8]
  __asm push dword ptr [esp + 0xc]
  __asm test eax, eax
  __asm je 0x1109af57
  __asm push dword ptr [esp + 8]
  __asm call eax
  __asm add esp, 8
  __asm ret
  __asm call LAB_10026b7f
  __asm add esp, 4
  __asm mov dword ptr [esp + 0xc], eax
  __asm jmp LAB_1001aae1
}



// Reference entry 1109b4c0; body size 25 bytes.
#line 1 "ENTRY_1109b4c0"

__declspec(naked) void FUN_1109b4c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x18
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 1109bd10; body size 33 bytes.
#line 1 "ENTRY_1109bd10"

void __fastcall FUN_1109bd10(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_11098770((int)(param_1),(int)(*(undefined4 *)(iVar1 + 4)));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 1109c020; body size 57 bytes.
#line 1 "ENTRY_1109c020"

__declspec(naked) void FUN_1109c020(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm sub eax, 1
  __asm je 0x1109c043
  __asm sub eax, 2
  __asm jne 0x1109c058
  __asm mov eax, dword ptr [ecx + 0x10]
  __asm cmp eax, 0xefa
  __asm jae 0x1109c058
  __asm mov dword ptr [eax*4 + LAB_122af408], 0
  __asm ret
  __asm mov eax, dword ptr [ecx + 0x10]
  __asm cmp eax, 0x2fc
  __asm jae 0x1109c058
  __asm mov dword ptr [eax*4 + LAB_121b54e0], 0
  __asm ret
}



// Reference entry 1109dae0; body size 38 bytes.
#line 1 "ENTRY_1109dae0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1109dae0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1109db10; body size 33 bytes.
#line 1 "ENTRY_1109db10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1109db10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlDiag);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1109db40; body size 33 bytes.
#line 1 "ENTRY_1109db40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1109db40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMultiAcctSettings);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1109dba0; body size 58 bytes.
#line 1 "ENTRY_1109dba0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1109dba0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPEnableRDMAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpSPEnableRDMAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpSPEnableRDMAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1109dbf0; body size 35 bytes.
#line 1 "ENTRY_1109dbf0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1109dbf0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1109d610();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x5b8);
  }
  return (undefined4)(param_1);
}


// Reference entry 1109dee0; body size 45 bytes.
#line 1 "ENTRY_1109dee0"

__declspec(naked) void FUN_1109dee0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm test edi, edi
  __asm je 0x1109df02
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x1109df02
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm pop edi
  __asm mov dword ptr [esi], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 1109dfa0; body size 55 bytes.
#line 1 "ENTRY_1109dfa0"

__declspec(naked) void FUN_1109dfa0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [LAB_122e8730]
  __asm test esi, esi
  __asm je 0x1109dfc7
  __asm lea eax, [esi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x1109dfc7
  __asm test esi, esi
  __asm je 0x1109dfc7
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov dword ptr [LAB_122e8730], 0
  __asm pop esi
  __asm jmp LAB_10029f23
}



// Reference entry 1109e170; body size 19 bytes.
#line 1 "ENTRY_1109e170"

void __fastcall FUN_1109e170(int param_1)

{
  ((SCVtbl_4_2*)(*(int **)(param_1 + 0x20)))->v((int)("NewSortOrder"),(int)(&DAT_1186d2ee));
  return;
}


// Reference entry 1109e380; body size 43 bytes.
#line 1 "ENTRY_1109e380"

__declspec(naked) void FUN_1109e380(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm test edi, edi
  __asm je 0x1109e3a2
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x1109e3a2
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm push 1
  __asm call dword ptr [eax]
  __asm pop edi
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 1109ed30; body size 30 bytes.
#line 1 "ENTRY_1109ed30"

__declspec(naked) undefined2 FUN_1109ed30(void)

{
  __asm push esi
  __asm xor esi, esi
  __asm call LAB_1000e23c
  __asm lea ecx, [eax + 0x1c]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax]
  __asm test eax, eax
  __asm je 0x1109ed49
  __asm movzx eax, word ptr [eax + 0x70]
  __asm pop esi
  __asm ret
  __asm mov ax, si
  __asm pop esi
  __asm ret
}



// Reference entry 1109ed60; body size 30 bytes.
#line 1 "ENTRY_1109ed60"

__declspec(naked) undefined2 FUN_1109ed60(void)

{
  __asm push esi
  __asm xor esi, esi
  __asm call LAB_1000e23c
  __asm lea ecx, [eax + 0x1c]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax]
  __asm test eax, eax
  __asm je 0x1109ed79
  __asm movzx eax, word ptr [eax + 0x72]
  __asm pop esi
  __asm ret
  __asm mov ax, si
  __asm pop esi
  __asm ret
}



// Reference entry 1109ed90; body size 34 bytes.
#line 1 "ENTRY_1109ed90"

void __stdcall FUN_1109ed90(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1145c720(param_1,param_2,&DAT_119c1a80,&DAT_119c1a78,&DAT_119c1a70);
  return;
}


// Reference entry 1109ef90; body size 43 bytes.
#line 1 "ENTRY_1109ef90"

__declspec(naked) void FUN_1109ef90(void)

{
  __asm sub esp, 0x18
  __asm push dword ptr [ecx + 0x20]
  __asm lea ecx, [esp + 4]
  __asm call LAB_1000d0df
  __asm push dword ptr [esp + 0x20]
  __asm lea ecx, [esp + 4]
  __asm push dword ptr [esp + 0x20]
  __asm push offset LAB_119c1b14
  __asm call LAB_100015be
  __asm add esp, 0x18
  __asm ret 8
}



// Reference entry 1109efd0; body size 24 bytes.
#line 1 "ENTRY_1109efd0"

void __stdcall FUN_1109efd0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1106a8d0(param_1,"17.2.3",param_2);
  return;
}


// Reference entry 1109f0a0; body size 42 bytes.
#line 1 "ENTRY_1109f0a0"

__declspec(naked) void FUN_1109f0a0(void)

{
  __asm sub esp, 0x18
  __asm push dword ptr [ecx + 0x20]
  __asm lea ecx, [esp + 4]
  __asm call LAB_1000d0df
  __asm push dword ptr [esp + 0x24]
  __asm lea ecx, [esp + 4]
  __asm push dword ptr [esp + 0x24]
  __asm push dword ptr [esp + 0x24]
  __asm call LAB_100015be
  __asm add esp, 0x18
  __asm ret 0xc
}



// Reference entry 1109f100; body size 43 bytes.
#line 1 "ENTRY_1109f100"

__declspec(naked) void FUN_1109f100(void)

{
  __asm sub esp, 0x18
  __asm push dword ptr [ecx + 0x20]
  __asm lea ecx, [esp + 4]
  __asm call LAB_1000d0df
  __asm push dword ptr [esp + 0x20]
  __asm lea ecx, [esp + 4]
  __asm push dword ptr [esp + 0x20]
  __asm push offset LAB_119c1560
  __asm call LAB_100015be
  __asm add esp, 0x18
  __asm ret 8
}



// Reference entry 1109f1f0; body size 21 bytes.
#line 1 "ENTRY_1109f1f0"

void FUN_1109f1f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(&DAT_119c0f88);
  *param_2 = (undefined4)(3);
  return;
}


// Reference entry 1109f210; body size 53 bytes.
#line 1 "ENTRY_1109f210"

__declspec(naked) void FUN_1109f210(void)

{
  __asm sub esp, 0x14
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x10], eax
  __asm mov eax, dword ptr [esp + 0x18]
  __asm push 0
  __asm push 0
  __asm push eax
  __asm lea eax, [esp + 0xc]
  __asm push eax
  __asm call LAB_1000155a
  __asm mov ecx, dword ptr [esp + 0x20]
  __asm add esp, 0x10
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x14
  __asm ret 8
}



// Reference entry 1109f280; body size 43 bytes.
#line 1 "ENTRY_1109f280"

__declspec(naked) void FUN_1109f280(void)

{
  __asm sub esp, 0x18
  __asm push dword ptr [ecx + 0x20]
  __asm lea ecx, [esp + 4]
  __asm call LAB_1000d0df
  __asm push dword ptr [esp + 0x20]
  __asm lea ecx, [esp + 4]
  __asm push dword ptr [esp + 0x20]
  __asm push offset LAB_119c1570
  __asm call LAB_100015be
  __asm add esp, 0x18
  __asm ret 8
}



// Reference entry 1109f320; body size 43 bytes.
#line 1 "ENTRY_1109f320"

__declspec(naked) void FUN_1109f320(void)

{
  __asm sub esp, 0x18
  __asm push dword ptr [ecx + 0x20]
  __asm lea ecx, [esp + 4]
  __asm call LAB_1000d0df
  __asm push dword ptr [esp + 0x20]
  __asm lea ecx, [esp + 4]
  __asm push dword ptr [esp + 0x20]
  __asm push offset LAB_119c1510
  __asm call LAB_100015be
  __asm add esp, 0x18
  __asm ret 8
}



// Reference entry 1109f750; body size 17 bytes.
#line 1 "ENTRY_1109f750"

__declspec(naked) void FUN_1109f750(void)

{
  __asm mov ecx, dword ptr [ecx + 0xe8]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}



// Reference entry 1109f770; body size 17 bytes.
#line 1 "ENTRY_1109f770"

__declspec(naked) void FUN_1109f770(void)

{
  __asm mov ecx, dword ptr [ecx + 0xf0]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}



// Reference entry 1109f790; body size 17 bytes.
#line 1 "ENTRY_1109f790"

__declspec(naked) void FUN_1109f790(void)

{
  __asm mov ecx, dword ptr [ecx + 0xec]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}



// Reference entry 1109f7b0; body size 17 bytes.
#line 1 "ENTRY_1109f7b0"

__declspec(naked) void FUN_1109f7b0(void)

{
  __asm mov ecx, dword ptr [ecx + 0xf4]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}



// Reference entry 1109f820; body size 21 bytes.
#line 1 "ENTRY_1109f820"

void FUN_1109f820(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(&DAT_119c0f4c);
  *param_2 = (undefined4)(3);
  return;
}


// Reference entry 110a0fd0; body size 45 bytes.
#line 1 "ENTRY_110a0fd0"

__declspec(naked) void FUN_110a0fd0(void)

{
  __asm sub esp, 0x1c
  __asm push dword ptr [ecx + 0x20]
  __asm lea ecx, [esp + 8]
  __asm call LAB_1000d0df
  __asm push 2
  __asm lea eax, [esp + 4]
  __asm push eax
  __asm push offset LAB_11890690
  __asm lea ecx, [esp + 0x10]
  __asm call LAB_100015be
  __asm test al, al
  __asm sete al
  __asm add esp, 0x1c
  __asm ret
}



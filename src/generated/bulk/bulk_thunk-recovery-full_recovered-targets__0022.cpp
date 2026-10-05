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
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); static int op_ctor(...) { return 0; } static int op_eq(...) { return 0; } static int op_lt(...) { return 0; } template<class... A> int utf8_length(A...); };
namespace std { template<class...> struct basic_ios { char _pad; basic_ios(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int widen(A...); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct basic_ostream { char _pad; basic_ostream(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int flush(A...); template<class... A> int put(A...); template<class... A> int write(A...); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct char_traits { char _pad; char_traits(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
struct Clearing { char _pad; Clearing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Destructor { char _pad; Destructor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Dtls { char _pad; Dtls(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Entering { char _pad; Entering(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Exit { char _pad; Exit(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ExtractArchiveOp { char _pad; ExtractArchiveOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct FlashDebugObjects { char _pad; FlashDebugObjects(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetLEDFeedbackState { char _pad; GetLEDFeedbackState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct HTControl { char _pad; HTControl(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Invalid { char _pad; Invalid(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct KeepAlive { char _pad; KeepAlive(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Netstart2 { char _pad; Netstart2(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBrowseItem { char _pad; SCIBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIIntegerSettingsProperty { char _pad; SCIIntegerSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpHTControlGetLEDFeedbackState { char _pad; SCIOpHTControlGetLEDFeedbackState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISonarCalibrationItem { char _pad; SCISonarCalibrationItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIVSResponseListener { char _pad; SCIVSResponseListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Send { char _pad; Send(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Unable { char _pad; Unable(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Wizard { char _pad; Wizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *COMMIT_SETTINGS;
typedef void *E9;
typedef void *ECHO;
typedef void *GET_PSK;
typedef void *GET_SCAN_LIST;
typedef void *KEEP_ALIVE;
typedef void *MSG_ECHO;
typedef void *PIN;
typedef void *SETUP_BEGIN;
typedef void *SETUP_CANCEL;
typedef void *SETUP_CLIENT_HELLO;
typedef void *SETUP_CONTINUE;
typedef void *SETUP_REAUTHORIZE;
typedef void *SET_NET_SETTINGS;
typedef void *START_ISLAND;
typedef void *START_OPEN_AP;
typedef void *UPGRADE;
typedef void *WARNING;
using namespace std;
extern "C" void LAB_100022d9(void);
extern "C" void LAB_100027f7(void);
extern "C" void LAB_10003ee5(void);
extern "C" void LAB_10004697(void);
extern "C" void LAB_100046e2(void);
extern "C" void LAB_10004f61(void);
extern "C" void LAB_10005f9c(void);
extern "C" void LAB_10006ce4(void);
extern "C" void LAB_100087f6(void);
extern "C" void LAB_1000ba05(void);
extern "C" void LAB_1000c6bc(void);
extern "C" void LAB_1000d4ae(void);
extern "C" void LAB_100105d2(void);
extern "C" void LAB_100110c7(void);
extern "C" void LAB_10012517(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013336(void);
extern "C" void LAB_10013543(void);
extern "C" void LAB_10014c4a(void);
extern "C" void LAB_1001793b(void);
extern "C" void LAB_100181a6(void);
extern "C" void LAB_100183db(void);
extern "C" void LAB_10018bab(void);
extern "C" void LAB_10018dd1(void);
extern "C" void LAB_1001c9c2(void);
extern "C" void LAB_10020e50(void);
extern "C" void LAB_10022c0a(void);
extern "C" void LAB_1002314b(void);
extern "C" void LAB_100238df(void);
extern "C" void LAB_1002484d(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_10026788(void);
extern "C" void LAB_10026e45(void);
extern "C" void LAB_10029a37(void);
extern "C" void LAB_1002a973(void);
extern "C" void LAB_1002bb07(void);
extern "C" void LAB_1002bb93(void);
extern "C" void LAB_1002e44c(void);
extern "C" void LAB_10032169(void);
extern "C" void LAB_10035c47(void);
extern "C" void LAB_10035e22(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_10036ed0(void);
extern "C" void LAB_10038294(void);
extern "C" void LAB_100382f3(void);
extern "C" void LAB_100399be(void);
extern "C" void LAB_1003a904(void);
extern "C" void LAB_1003f418(void);
extern "C" void LAB_10041704(void);
extern "C" void LAB_1004458a(void);
extern "C" void LAB_100454cb(void);
extern "C" void LAB_10045863(void);
extern "C" void LAB_1004679a(void);
extern "C" void LAB_10048fb3(void);
extern "C" void LAB_10049a94(void);
extern "C" void LAB_1004b7e0(void);
extern "C" void LAB_10050a97(void);
extern "C" void LAB_100510a0(void);
extern "C" void LAB_10051c49(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_10052da1(void);
extern "C" void LAB_10052ffe(void);
extern "C" void LAB_1005313e(void);
extern "C" void LAB_1005c315(void);
extern "C" void LAB_1005dcb0(void);
extern "C" void LAB_1005de40(void);
extern "C" void LAB_1005de7c(void);
extern "C" void LAB_1005f4c0(void);
extern "C" void LAB_10060ee7(void);
extern "C" void LAB_10061e0f(void);
extern "C" void LAB_100632cd(void);
extern "C" void LAB_10064ab0(void);
extern "C" void LAB_100667a7(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_10068b24(void);
extern "C" void LAB_1006ae2e(void);
extern "C" void LAB_1006b4c8(void);
extern "C" void LAB_1006c92c(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_10072bab(void);
extern "C" void LAB_10074276(void);
extern "C" void LAB_10077a61(void);
extern "C" void LAB_1007b238(void);
extern "C" void LAB_1007d2d1(void);
extern "C" void LAB_1007e307(void);
extern "C" void LAB_1007ee10(void);
extern "C" void LAB_1007ef19(void);
extern "C" void LAB_1007fcc0(void);
extern "C" void LAB_100804f4(void);
extern "C" void LAB_10081e4e(void);
extern "C" void LAB_10085071(void);
extern "C" void LAB_10087713(void);
extern "C" void LAB_100880af(void);
extern "C" void LAB_10088136(void);
extern "C" void LAB_10088622(void);
extern "C" void LAB_1008878a(void);
extern "C" void LAB_100891cb(void);
extern "C" void LAB_10089243(void);
extern "C" void LAB_1008979d(void);
extern "C" void LAB_1008be03(void);
extern "C" void LAB_1009009d(void);
extern "C" void LAB_1009390f(void);
extern "C" void LAB_100971ae(void);
extern "C" void LAB_100973c0(void);
extern "C" void LAB_1009930f(void);
extern "C" void LAB_10e48320(void);
extern "C" void LAB_10eb15b0(void);
extern "C" void LAB_10eb16ba(void);
extern "C" void LAB_10ebde70(void);
extern "C" void LAB_10ebdf15(void);
extern "C" void LAB_10ee3268(void);
extern "C" void LAB_10ee3269(void);
extern "C" void LAB_10ee604f(void);
extern "C" void LAB_10ee679c(void);
extern "C" void LAB_10ee8ea2(void);
extern "C" void LAB_10ee8eab(void);
extern "C" void LAB_1148a05a(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_1148ce0b(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_1188086c(void);
extern "C" void LAB_11881068(void);
extern "C" void LAB_11881130(void);
extern "C" void LAB_11881488(void);
extern "C" void LAB_11882ff0(void);
extern "C" void LAB_11883984(void);
extern "C" void LAB_11883b70(void);
extern "C" void LAB_11883b7c(void);
extern "C" void LAB_11883dbc(void);
extern "C" void LAB_11885328(void);
extern "C" void LAB_11885d88(void);
extern "C" void LAB_11889e7c(void);
extern "C" void LAB_1188fc48(void);
extern "C" void LAB_1188fc58(void);
extern "C" void LAB_118900d8(void);
extern "C" void LAB_118900e8(void);
extern "C" void LAB_1189cc1c(void);
extern "C" void LAB_118a0b44(void);
extern "C" void LAB_118a0b54(void);
extern "C" void LAB_118afb08(void);
extern "C" void LAB_118ba554(void);
extern "C" void LAB_1193d6f4(void);
extern "C" void LAB_1193d938(void);
extern "C" void LAB_1193d948(void);
extern "C" void LAB_1193d954(void);
extern "C" void LAB_1193d964(void);
extern "C" void LAB_1193d9f0(void);
extern "C" void LAB_1193daa8(void);
extern "C" void LAB_1193dbf8(void);
extern "C" void LAB_1193dcc8(void);
extern "C" void LAB_1193dd80(void);
extern "C" void LAB_1193dec4(void);
extern "C" void LAB_1193e17c(void);
extern "C" void LAB_1193e234(void);
extern "C" void LAB_1193e4b0(void);
extern "C" void LAB_1193e574(void);
extern "C" void LAB_1193e62c(void);
extern "C" void LAB_1193e6f8(void);
extern "C" void LAB_1193e7b0(void);
extern "C" void LAB_1193e874(void);
extern "C" void LAB_1193e968(void);
extern "C" void LAB_1193eb9c(void);
extern "C" void LAB_1193ebac(void);
extern "C" void LAB_1193ebb8(void);
extern "C" void LAB_1193ebc8(void);
extern "C" void LAB_1193ec58(void);
extern "C" void LAB_1193ed10(void);
extern "C" void LAB_1193ede8(void);
extern "C" void LAB_1193f418(void);
extern "C" void LAB_1193f4f8(void);
extern "C" void LAB_1193f5dc(void);
extern "C" void LAB_1193f6c0(void);
extern "C" void LAB_1193f7dc(void);
extern "C" void LAB_1193f894(void);
extern "C" void LAB_1193f908(void);
extern "C" void LAB_1193f948(void);
extern "C" void LAB_1193fa2c(void);
extern "C" void LAB_1193fae4(void);
extern "C" void LAB_1193fb58(void);
extern "C" void LAB_1193fda0(void);
extern "C" void LAB_1193fdb0(void);
extern "C" void LAB_119400dc(void);
extern "C" void LAB_11940194(void);
extern "C" void LAB_11940354(void);
extern "C" void LAB_11940384(void);
extern "C" void LAB_119403b0(void);
extern "C" void LAB_119403e0(void);
extern "C" void LAB_119403f0(void);
extern "C" void LAB_11940404(void);
extern "C" void LAB_11940414(void);
extern "C" void LAB_11940428(void);
extern "C" void LAB_11940438(void);
extern "C" void LAB_11941000(void);
extern "C" void LAB_1194111c(void);
extern "C" void LAB_1194112c(void);
extern "C" void LAB_11941140(void);
extern "C" void LAB_119411f8(void);
extern "C" void LAB_1194152c(void);
extern "C" void LAB_11941678(void);
extern "C" void LAB_11941750(void);
extern "C" void LAB_119419dc(void);
extern "C" void LAB_11941a94(void);
extern "C" void LAB_11941aa8(void);
extern "C" void LAB_11941b60(void);
extern "C" void LAB_11941bac(void);
extern "C" void LAB_11941c64(void);
extern "C" void LAB_11941cb8(void);
extern "C" void LAB_11941d70(void);
extern "C" void LAB_11941dc0(void);
extern "C" void LAB_11941e78(void);
extern "C" void LAB_11941eb4(void);
extern "C" void LAB_11941f9c(void);
extern "C" void LAB_11942074(void);
extern "C" void LAB_119429f0(void);
extern "C" void LAB_11942aa8(void);
extern "C" void LAB_11942d84(void);
extern "C" void LAB_1194308c(void);
extern "C" void LAB_119432c0(void);
extern "C" void LAB_119432d0(void);
extern "C" void LAB_119432dc(void);
extern "C" void LAB_119432ec(void);
extern "C" void LAB_1194337c(void);
extern "C" void LAB_11943434(void);
extern "C" void LAB_119434ec(void);
extern "C" void LAB_119435c0(void);
extern "C" void LAB_119436a8(void);
extern "C" void LAB_11943760(void);
extern "C" void LAB_11944060(void);
extern "C" void LAB_1194421c(void);
extern "C" void LAB_119442d4(void);
extern "C" void LAB_119443d8(void);
extern "C" void LAB_11944698(void);
extern "C" void LAB_11944750(void);
extern "C" void LAB_11944808(void);
extern "C" void LAB_11944864(void);
extern "C" void LAB_11944a98(void);
extern "C" void LAB_11944aa8(void);
extern "C" void LAB_11944ab4(void);
extern "C" void LAB_11944ac4(void);
extern "C" void LAB_11944b54(void);
extern "C" void LAB_11944c0c(void);
extern "C" void LAB_11944cc4(void);
extern "C" void LAB_11944d98(void);
extern "C" void LAB_11944e70(void);
extern "C" void LAB_11944f98(void);
extern "C" void LAB_11945050(void);
extern "C" void LAB_119452e0(void);
extern "C" void LAB_11945478(void);
extern "C" void LAB_119456ac(void);
extern "C" void LAB_119456bc(void);
extern "C" void LAB_119456c8(void);
extern "C" void LAB_119456d8(void);
extern "C" void LAB_11945770(void);
extern "C" void LAB_11945828(void);
extern "C" void LAB_119458e0(void);
extern "C" void LAB_119459b8(void);
extern "C" void LAB_11945a98(void);
extern "C" void LAB_11945c30(void);
extern "C" void LAB_11945d7c(void);
extern "C" void LAB_11945e80(void);
extern "C" void LAB_11945f68(void);
extern "C" void LAB_1194619c(void);
extern "C" void LAB_119461ac(void);
extern "C" void LAB_119461b8(void);
extern "C" void LAB_119461c8(void);
extern "C" void LAB_11946264(void);
extern "C" void LAB_1194631c(void);
extern "C" void LAB_119463d4(void);
extern "C" void LAB_119464b4(void);
extern "C" void LAB_11946594(void);
extern "C" void LAB_11946744(void);
extern "C" void LAB_1194678c(void);
extern "C" void LAB_119467c8(void);
extern "C" void LAB_119467d4(void);
extern "C" void LAB_1194685c(void);
extern "C" void LAB_11946908(void);
extern "C" void LAB_11946954(void);
extern "C" void LAB_11946a48(void);
extern "C" void LAB_11946ac0(void);
extern "C" void LAB_11946b6c(void);
extern "C" void LAB_11946be4(void);
extern "C" void LAB_11946bf4(void);
extern "C" void LAB_11946d84(void);
extern "C" void LAB_11946d94(void);
extern "C" void LAB_119470a0(void);
extern "C" void LAB_119470b0(void);
extern "C" void LAB_11947514(void);
extern "C" void LAB_11947524(void);
extern "C" void LAB_119476b4(void);
extern "C" void LAB_119476c4(void);
extern "C" void LAB_11947a1c(void);
extern "C" void LAB_11947a2c(void);
extern "C" void LAB_11948a70(void);
extern "C" void LAB_11948a8c(void);
extern "C" void LAB_11948f20(void);
extern "C" void LAB_11948f38(void);
extern "C" void LAB_11948f50(void);
extern "C" void LAB_11948f68(void);
extern "C" void LAB_11948f80(void);
extern "C" void LAB_119496b8(void);
extern "C" void LAB_119496c8(void);
extern "C" void LAB_11949f8c(void);
extern "C" void LAB_1194a0d0(void);
extern "C" void LAB_1194a224(void);
extern "C" void LAB_1194a248(void);
extern "C" void LAB_1194a268(void);
extern "C" void LAB_1194a288(void);
extern "C" void LAB_1194a2f0(void);
extern "C" void LAB_1194a308(void);
extern "C" void LAB_1194a320(void);
extern "C" void LAB_1194a338(void);
extern "C" void LAB_1194a378(void);
extern "C" void LAB_1194a3a0(void);
extern "C" void LAB_1194a3c8(void);
extern "C" void LAB_1194a3f0(void);
extern "C" void LAB_1194a410(void);
extern "C" void LAB_1194a42c(void);
extern "C" void LAB_1194a464(void);
extern "C" void LAB_1194a49c(void);
extern "C" void LAB_1194a4d4(void);
extern "C" void LAB_1194a500(void);
extern "C" void LAB_1194a52c(void);
extern "C" void LAB_1194a55c(void);
extern "C" void LAB_1194a57c(void);
extern "C" void LAB_1194a59c(void);
extern "C" void LAB_1194a5c0(void);
extern "C" void LAB_1194a5e4(void);
extern "C" void LAB_1194a608(void);
extern "C" void LAB_1194a62c(void);
extern "C" void LAB_1194a650(void);
extern "C" void LAB_1194a670(void);
extern "C" void LAB_1194a694(void);
extern "C" void LAB_1194a6bc(void);
extern "C" void LAB_1194a6e0(void);
extern "C" void LAB_1194a708(void);
extern "C" void LAB_1194a72c(void);
extern "C" void LAB_1194a750(void);
extern "C" void LAB_1194a778(void);
extern "C" void LAB_1194a7a0(void);
extern "C" void LAB_1194a7c8(void);
extern "C" void LAB_1194a7e4(void);
extern "C" void LAB_1194a800(void);
extern "C" void LAB_1194a81c(void);
extern "C" void LAB_1194a838(void);
extern "C" void LAB_1194a854(void);
extern "C" void LAB_1194a870(void);
extern "C" void LAB_1194a894(void);
extern "C" void LAB_1194a8b4(void);
extern "C" void LAB_1194a8d8(void);
extern "C" void LAB_1194a8f8(void);
extern "C" void LAB_1194a918(void);
extern "C" void LAB_1194abec(void);
extern "C" void LAB_1194ac2c(void);
extern "C" void LAB_1194b118(void);
extern "C" void LAB_1194b128(void);
extern "C" void LAB_1194b13c(void);
extern "C" void LAB_1194b14c(void);
extern "C" void LAB_1194b7cc(void);
extern "C" void LAB_1194b814(void);
extern "C" void LAB_1194b824(void);
extern "C" void LAB_1194b840(void);
extern "C" void LAB_1194ba3c(void);
extern "C" void LAB_1194ba7c(void);
extern "C" void LAB_1194baac(void);
extern "C" void LAB_1194bad0(void);
extern "C" void LAB_12126b84(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_121a6ab8(void);
extern "C" void LAB_121a6b1c(void);
extern "C" void LAB_122fc2dc(void);
extern "C" void LAB_122fc32c(void);
extern "C" void LAB_122fc394(void);
extern "C" void LAB_122fc3f0(void);
extern "C" void LAB_122fc888(void);
extern "C" void LAB_122fc908(void);


extern "C" void FUN_100183db(void);

struct Recovered_Bulk { char _pad; void __thiscall m_FUN_10e2aa20(int param_2); template<class... A> int m_FUN_10e2aa20(A...); void __thiscall m_FUN_10e2aa40(int param_2); template<class... A> int m_FUN_10e2aa40(A...); void __thiscall m_FUN_10e2aa60(int param_2); template<class... A> int m_FUN_10e2aa60(A...); void __thiscall m_FUN_10e2aa80(int param_2); template<class... A> int m_FUN_10e2aa80(A...); void __thiscall m_FUN_10e2aaa0(undefined4 param_2); template<class... A> int m_FUN_10e2aaa0(A...); void __thiscall m_FUN_10e2aab0(undefined4 param_2); template<class... A> int m_FUN_10e2aab0(A...); void __thiscall m_FUN_10e2aac0(undefined4 param_2); template<class... A> int m_FUN_10e2aac0(A...); void __thiscall m_FUN_10e2aad0(undefined4 param_2); template<class... A> int m_FUN_10e2aad0(A...); void __thiscall m_FUN_10e2f0e0(SCStr *param_2); template<class... A> int m_FUN_10e2f0e0(A...); void __thiscall m_FUN_10e46230(int *param_2); template<class... A> int m_FUN_10e46230(A...); void __thiscall m_FUN_10e46270(undefined4 *param_2); template<class... A> int m_FUN_10e46270(A...); void __thiscall m_FUN_10e462a0(undefined4 *param_2); template<class... A> int m_FUN_10e462a0(A...); void __thiscall m_FUN_10e462d0(undefined4 *param_2); template<class... A> int m_FUN_10e462d0(A...); void __thiscall m_FUN_10e46690(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10e46690(A...); int * __thiscall m_FUN_10e46bb0(int *param_2); template<class... A> int m_FUN_10e46bb0(A...); undefined4 * __thiscall m_FUN_10e46d40(undefined4 param_2); template<class... A> int m_FUN_10e46d40(A...); undefined4 * __thiscall m_FUN_10e46d60(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10e46d60(A...); undefined4 * __thiscall m_FUN_10e46d80(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10e46d80(A...); undefined4 * __thiscall m_FUN_10e46da0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10e46da0(A...); undefined4 * __thiscall m_FUN_10e46db0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10e46db0(A...); int * __thiscall m_FUN_10e46ed0(int *param_2); template<class... A> int m_FUN_10e46ed0(A...); undefined4 * __thiscall m_FUN_10e46f10(undefined4 param_2); template<class... A> int m_FUN_10e46f10(A...); undefined4 * __thiscall m_FUN_10e46f30(undefined4 param_2); template<class... A> int m_FUN_10e46f30(A...); undefined4 * __thiscall m_FUN_10e46f50(undefined4 param_2); template<class... A> int m_FUN_10e46f50(A...); undefined4 * __thiscall m_FUN_10e46f70(undefined4 param_2); template<class... A> int m_FUN_10e46f70(A...); undefined4 * __thiscall m_FUN_10e47030(undefined4 param_2); template<class... A> int m_FUN_10e47030(A...); undefined4 * __thiscall m_FUN_10e47050(undefined4 param_2); template<class... A> int m_FUN_10e47050(A...); undefined4 * __thiscall m_FUN_10e47070(undefined4 param_2); template<class... A> int m_FUN_10e47070(A...); undefined4 * __thiscall m_FUN_10e47110(undefined4 param_2); template<class... A> int m_FUN_10e47110(A...); undefined4 * __thiscall m_FUN_10e47130(undefined4 param_2); template<class... A> int m_FUN_10e47130(A...); undefined4 * __thiscall m_FUN_10e47150(undefined4 param_2); template<class... A> int m_FUN_10e47150(A...); undefined4 * __thiscall m_FUN_10e47170(undefined4 param_2); template<class... A> int m_FUN_10e47170(A...); undefined4 * __thiscall m_FUN_10e47190(undefined4 param_2); template<class... A> int m_FUN_10e47190(A...); int * __thiscall m_FUN_10e476a0(int *param_2); template<class... A> int m_FUN_10e476a0(A...); undefined4 * __thiscall m_FUN_10e47700(undefined4 *param_2); template<class... A> int m_FUN_10e47700(A...); bool __thiscall m_FUN_10e47800(int *param_2); template<class... A> int m_FUN_10e47800(A...); bool __thiscall m_FUN_10e47820(int *param_2); template<class... A> int m_FUN_10e47820(A...); void __thiscall m_FUN_10e47890(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10e47890(A...); void __thiscall m_FUN_10e48020(uint param_2); template<class... A> int m_FUN_10e48020(A...); void __thiscall m_FUN_10e480d0(int param_2); template<class... A> int m_FUN_10e480d0(A...); uint __thiscall m_FUN_10e48100(uint param_2); template<class... A> int m_FUN_10e48100(A...); uint __thiscall m_FUN_10e48140(uint param_2); template<class... A> int m_FUN_10e48140(A...); void __thiscall m_FUN_10e48210(uint param_2); template<class... A> int m_FUN_10e48210(A...); void __thiscall m_FUN_10e485b0(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10e485b0(A...); void __thiscall m_FUN_10e485d0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10e485d0(A...); void __thiscall m_FUN_10e48b70(undefined4 *param_2); template<class... A> int m_FUN_10e48b70(A...); void __thiscall m_FUN_10e4a8b0(undefined4 *param_2); template<class... A> int m_FUN_10e4a8b0(A...); undefined4 * __thiscall m_FUN_10e50bd0(undefined4 param_2); template<class... A> int m_FUN_10e50bd0(A...); undefined4 * __thiscall m_FUN_10e50d00(undefined4 param_2); template<class... A> int m_FUN_10e50d00(A...); undefined4 * __thiscall m_FUN_10e50da0(undefined4 param_2); template<class... A> int m_FUN_10e50da0(A...); undefined4 * __thiscall m_FUN_10e50dd0(undefined4 param_2); template<class... A> int m_FUN_10e50dd0(A...); undefined4 * __thiscall m_FUN_10e50ea0(undefined4 param_2); template<class... A> int m_FUN_10e50ea0(A...); undefined4 * __thiscall m_FUN_10e50ec0(undefined4 param_2); template<class... A> int m_FUN_10e50ec0(A...); undefined4 * __thiscall m_FUN_10e50ee0(undefined4 param_2); template<class... A> int m_FUN_10e50ee0(A...); undefined4 * __thiscall m_FUN_10e50f90(undefined4 param_2); template<class... A> int m_FUN_10e50f90(A...); undefined4 * __thiscall m_FUN_10e50fb0(undefined4 param_2); template<class... A> int m_FUN_10e50fb0(A...); undefined4 * __thiscall m_FUN_10e50fd0(undefined4 param_2); template<class... A> int m_FUN_10e50fd0(A...); undefined4 * __thiscall m_FUN_10e5a320(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10e5a320(A...); undefined4 * __thiscall m_FUN_10e5a350(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10e5a350(A...); undefined4 * __thiscall m_FUN_10e5a450(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10e5a450(A...); undefined4 * __thiscall m_FUN_10e5a470(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10e5a470(A...); int * __thiscall m_FUN_10e5a4a0(int *param_2); template<class... A> int m_FUN_10e5a4a0(A...); int * __thiscall m_FUN_10e5a520(int *param_2); template<class... A> int m_FUN_10e5a520(A...); int __thiscall m_FUN_10e5b160(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10e5b160(A...); int __thiscall m_FUN_10e5b210(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10e5b210(A...); int __thiscall m_FUN_10e5b2c0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10e5b2c0(A...); int __thiscall m_FUN_10e5b420(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10e5b420(A...); undefined4 * __thiscall m_FUN_10e5bd60(undefined4 *param_2); template<class... A> int m_FUN_10e5bd60(A...); undefined4 * __thiscall m_FUN_10e5bed0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10e5bed0(A...); undefined4 * __thiscall m_FUN_10e5bf70(undefined4 param_2); template<class... A> int m_FUN_10e5bf70(A...); undefined4 * __thiscall m_FUN_10e5bf90(undefined4 param_2); template<class... A> int m_FUN_10e5bf90(A...); undefined4 * __thiscall m_FUN_10e5c040(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10e5c040(A...); undefined4 * __thiscall m_FUN_10e5c050(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10e5c050(A...); undefined4 * __thiscall m_FUN_10e5c0e0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10e5c0e0(A...); undefined4 * __thiscall m_FUN_10e5c110(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10e5c110(A...); undefined4 * __thiscall m_FUN_10e5c4b0(undefined4 param_2); template<class... A> int m_FUN_10e5c4b0(A...); undefined4 * __thiscall m_FUN_10e5c720(undefined4 param_2); template<class... A> int m_FUN_10e5c720(A...); undefined4 * __thiscall m_FUN_10e5c820(undefined4 param_2); template<class... A> int m_FUN_10e5c820(A...); undefined4 * __thiscall m_FUN_10e5c850(undefined4 param_2); template<class... A> int m_FUN_10e5c850(A...); undefined4 * __thiscall m_FUN_10e5ca00(undefined4 param_2); template<class... A> int m_FUN_10e5ca00(A...); undefined4 * __thiscall m_FUN_10e5cf80(undefined4 param_2); template<class... A> int m_FUN_10e5cf80(A...); undefined4 * __thiscall m_FUN_10e5d020(undefined4 param_2); template<class... A> int m_FUN_10e5d020(A...); undefined4 * __thiscall m_FUN_10e5d040(undefined4 param_2); template<class... A> int m_FUN_10e5d040(A...); undefined4 * __thiscall m_FUN_10e5d060(undefined4 param_2); template<class... A> int m_FUN_10e5d060(A...); undefined4 * __thiscall m_FUN_10e5d340(undefined4 param_2); template<class... A> int m_FUN_10e5d340(A...); undefined4 * __thiscall m_FUN_10e5d3e0(undefined4 param_2); template<class... A> int m_FUN_10e5d3e0(A...); undefined4 * __thiscall m_FUN_10e5d400(undefined4 param_2); template<class... A> int m_FUN_10e5d400(A...); undefined4 * __thiscall m_FUN_10e5d750(undefined4 param_2); template<class... A> int m_FUN_10e5d750(A...); undefined4 * __thiscall m_FUN_10e5d770(undefined4 param_2); template<class... A> int m_FUN_10e5d770(A...); undefined4 * __thiscall m_FUN_10e5d810(undefined4 param_2); template<class... A> int m_FUN_10e5d810(A...); undefined4 * __thiscall m_FUN_10e5d880(undefined4 param_2); template<class... A> int m_FUN_10e5d880(A...); int * __thiscall m_FUN_10e5f570(int *param_2); template<class... A> int m_FUN_10e5f570(A...); bool __thiscall m_FUN_10e5f810(int *param_2); template<class... A> int m_FUN_10e5f810(A...); bool __thiscall m_FUN_10e5f830(int *param_2); template<class... A> int m_FUN_10e5f830(A...); int __thiscall m_FUN_10e5f940(int param_2); template<class... A> int m_FUN_10e5f940(A...); uint __thiscall m_FUN_10e610f0(uint param_2); template<class... A> int m_FUN_10e610f0(A...); void __thiscall m_FUN_10e61b90(int param_2); template<class... A> int m_FUN_10e61b90(A...); void __thiscall m_FUN_10e61bb0(int param_2); template<class... A> int m_FUN_10e61bb0(A...); void __thiscall m_FUN_10e61bd0(int param_2); template<class... A> int m_FUN_10e61bd0(A...); void __thiscall m_FUN_10e61bf0(int param_2); template<class... A> int m_FUN_10e61bf0(A...); void __thiscall m_FUN_10e61c10(int param_2); template<class... A> int m_FUN_10e61c10(A...); void __thiscall m_FUN_10e61ca0(undefined4 param_2); template<class... A> int m_FUN_10e61ca0(A...); void __thiscall m_FUN_10e61cb0(undefined4 param_2); template<class... A> int m_FUN_10e61cb0(A...); void __thiscall m_FUN_10e61cc0(undefined4 param_2); template<class... A> int m_FUN_10e61cc0(A...); void __thiscall m_FUN_10e61cd0(undefined4 param_2); template<class... A> int m_FUN_10e61cd0(A...); void __thiscall m_FUN_10e61ce0(undefined4 param_2); template<class... A> int m_FUN_10e61ce0(A...); void __thiscall m_FUN_10e620f0(undefined4 *param_2); template<class... A> int m_FUN_10e620f0(A...); void __thiscall m_FUN_10e65eb0(undefined4 *param_2); template<class... A> int m_FUN_10e65eb0(A...); void __thiscall m_FUN_10e69690(undefined4 *param_2); template<class... A> int m_FUN_10e69690(A...); void __thiscall m_FUN_10e75660(undefined4 param_2); template<class... A> int m_FUN_10e75660(A...); undefined4 * __thiscall m_FUN_10e75f70(undefined4 param_2); template<class... A> int m_FUN_10e75f70(A...); undefined4 * __thiscall m_FUN_10e760c0(int param_2,undefined4 param_3); template<class... A> int m_FUN_10e760c0(A...); undefined4 * __thiscall m_FUN_10e76390(undefined4 param_2); template<class... A> int m_FUN_10e76390(A...); undefined4 * __thiscall m_FUN_10e765b0(undefined4 param_2); template<class... A> int m_FUN_10e765b0(A...); undefined4 * __thiscall m_FUN_10e765d0(undefined4 param_2); template<class... A> int m_FUN_10e765d0(A...); undefined4 * __thiscall m_FUN_10e76680(undefined4 param_2); template<class... A> int m_FUN_10e76680(A...); undefined4 * __thiscall m_FUN_10e7f590(undefined4 param_2); template<class... A> int m_FUN_10e7f590(A...); undefined4 * __thiscall m_FUN_10e7f5b0(undefined4 param_2); template<class... A> int m_FUN_10e7f5b0(A...); undefined4 * __thiscall m_FUN_10e7f5d0(undefined4 param_2); template<class... A> int m_FUN_10e7f5d0(A...); undefined4 * __thiscall m_FUN_10e7f9a0(undefined4 param_2); template<class... A> int m_FUN_10e7f9a0(A...); undefined4 * __thiscall m_FUN_10e7f9e0(undefined4 param_2); template<class... A> int m_FUN_10e7f9e0(A...); int * __thiscall m_FUN_10e83090(int *param_2); template<class... A> int m_FUN_10e83090(A...); undefined4 * __thiscall m_FUN_10e83290(undefined4 param_2); template<class... A> int m_FUN_10e83290(A...); undefined4 * __thiscall m_FUN_10e83340(undefined4 param_2); template<class... A> int m_FUN_10e83340(A...); undefined4 * __thiscall m_FUN_10e83360(undefined4 param_2); template<class... A> int m_FUN_10e83360(A...); undefined4 * __thiscall m_FUN_10e83380(undefined4 param_2); template<class... A> int m_FUN_10e83380(A...); undefined4 * __thiscall m_FUN_10e833b0(undefined4 param_2); template<class... A> int m_FUN_10e833b0(A...); undefined4 * __thiscall m_FUN_10e83530(undefined4 param_2); template<class... A> int m_FUN_10e83530(A...); undefined4 * __thiscall m_FUN_10e83550(undefined4 param_2); template<class... A> int m_FUN_10e83550(A...); undefined4 * __thiscall m_FUN_10e86d60(undefined4 param_2); template<class... A> int m_FUN_10e86d60(A...); undefined4 * __thiscall m_FUN_10e86d80(undefined4 param_2); template<class... A> int m_FUN_10e86d80(A...); undefined4 * __thiscall m_FUN_10e86da0(undefined4 param_2); template<class... A> int m_FUN_10e86da0(A...); undefined4 * __thiscall m_FUN_10e86dc0(undefined4 param_2); template<class... A> int m_FUN_10e86dc0(A...); undefined4 * __thiscall m_FUN_10e86de0(undefined4 param_2); template<class... A> int m_FUN_10e86de0(A...); undefined4 * __thiscall m_FUN_10e86e10(undefined4 param_2); template<class... A> int m_FUN_10e86e10(A...); undefined4 * __thiscall m_FUN_10e86e90(undefined4 param_2); template<class... A> int m_FUN_10e86e90(A...); undefined4 * __thiscall m_FUN_10e86eb0(undefined4 param_2); template<class... A> int m_FUN_10e86eb0(A...); undefined4 * __thiscall m_FUN_10e89960(undefined4 param_2); template<class... A> int m_FUN_10e89960(A...); undefined4 * __thiscall m_FUN_10e89a50(undefined4 param_2); template<class... A> int m_FUN_10e89a50(A...); undefined4 * __thiscall m_FUN_10e89a70(undefined4 param_2); template<class... A> int m_FUN_10e89a70(A...); undefined4 * __thiscall m_FUN_10e89a90(undefined4 param_2); template<class... A> int m_FUN_10e89a90(A...); undefined4 * __thiscall m_FUN_10e89ab0(undefined4 param_2); template<class... A> int m_FUN_10e89ab0(A...); undefined4 * __thiscall m_FUN_10e89f30(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10e89f30(A...); undefined4 * __thiscall m_FUN_10e89f50(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10e89f50(A...); undefined4 * __thiscall m_FUN_10e8a030(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10e8a030(A...); undefined4 * __thiscall m_FUN_10e8a050(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10e8a050(A...); int * __thiscall m_FUN_10e8a080(int *param_2); template<class... A> int m_FUN_10e8a080(A...); int * __thiscall m_FUN_10e8a0c0(int *param_2); template<class... A> int m_FUN_10e8a0c0(A...); int * __thiscall m_FUN_10e8a0e0(int *param_2); template<class... A> int m_FUN_10e8a0e0(A...); int * __thiscall m_FUN_10e8a160(int *param_2); template<class... A> int m_FUN_10e8a160(A...); int * __thiscall m_FUN_10e8a1e0(int *param_2); template<class... A> int m_FUN_10e8a1e0(A...); int * __thiscall m_FUN_10e8a260(int *param_2); template<class... A> int m_FUN_10e8a260(A...); int * __thiscall m_FUN_10e8a360(int *param_2); template<class... A> int m_FUN_10e8a360(A...); int * __thiscall m_FUN_10e8a3e0(int *param_2); template<class... A> int m_FUN_10e8a3e0(A...); int * __thiscall m_FUN_10e8a460(int *param_2); template<class... A> int m_FUN_10e8a460(A...); int * __thiscall m_FUN_10e8a4e0(int *param_2); template<class... A> int m_FUN_10e8a4e0(A...); int * __thiscall m_FUN_10e8a560(int *param_2); template<class... A> int m_FUN_10e8a560(A...); int * __thiscall m_FUN_10e8a5a0(int *param_2); template<class... A> int m_FUN_10e8a5a0(A...); int __thiscall m_FUN_10e8a6f0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10e8a6f0(A...); int __thiscall m_FUN_10e8a7a0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10e8a7a0(A...); int __thiscall m_FUN_10e8a850(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10e8a850(A...); int __thiscall m_FUN_10e8a9b0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10e8a9b0(A...); int __thiscall m_FUN_10e8aa60(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10e8aa60(A...); int __thiscall m_FUN_10e8ab10(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10e8ab10(A...); int __thiscall m_FUN_10e8abc0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10e8abc0(A...); int __thiscall m_FUN_10e8ac70(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10e8ac70(A...); int __thiscall m_FUN_10e8ad20(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10e8ad20(A...); undefined4 * __thiscall m_FUN_10e8b6e0(int *param_2); template<class... A> int m_FUN_10e8b6e0(A...); undefined4 * __thiscall m_FUN_10e8b760(int *param_2); template<class... A> int m_FUN_10e8b760(A...); undefined4 * __thiscall m_FUN_10e8b7e0(int *param_2); template<class... A> int m_FUN_10e8b7e0(A...); undefined4 * __thiscall m_FUN_10e8b860(int *param_2); template<class... A> int m_FUN_10e8b860(A...); undefined4 * __thiscall m_FUN_10e8b8e0(int *param_2); template<class... A> int m_FUN_10e8b8e0(A...); undefined4 * __thiscall m_FUN_10e8c3a0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10e8c3a0(A...); undefined4 * __thiscall m_FUN_10e8f370(int *param_2); template<class... A> int m_FUN_10e8f370(A...); void __thiscall m_FUN_10e99a90(int param_2); template<class... A> int m_FUN_10e99a90(A...); void __thiscall m_FUN_10e99ab0(int param_2); template<class... A> int m_FUN_10e99ab0(A...); void __thiscall m_FUN_10e99ad0(int param_2); template<class... A> int m_FUN_10e99ad0(A...); void __thiscall m_FUN_10e99af0(int param_2); template<class... A> int m_FUN_10e99af0(A...); void __thiscall m_FUN_10e99b10(int param_2); template<class... A> int m_FUN_10e99b10(A...); void __thiscall m_FUN_10e99b30(int param_2); template<class... A> int m_FUN_10e99b30(A...); void __thiscall m_FUN_10e99b50(undefined4 param_2); template<class... A> int m_FUN_10e99b50(A...); void __thiscall m_FUN_10e99b60(undefined4 param_2); template<class... A> int m_FUN_10e99b60(A...); void __thiscall m_FUN_10e99b70(undefined4 param_2); template<class... A> int m_FUN_10e99b70(A...); void __thiscall m_FUN_10e99b80(undefined4 param_2); template<class... A> int m_FUN_10e99b80(A...); void __thiscall m_FUN_10e99b90(undefined4 param_2); template<class... A> int m_FUN_10e99b90(A...); void __thiscall m_FUN_10e99ba0(undefined4 param_2); template<class... A> int m_FUN_10e99ba0(A...); SCStr * __thiscall m_FUN_10ea1c80(SCStr *param_2); template<class... A> int m_FUN_10ea1c80(A...); SCStr * __thiscall m_FUN_10ea1cd0(SCStr *param_2); template<class... A> int m_FUN_10ea1cd0(A...); SCStr * __thiscall m_FUN_10ea1d80(SCStr *param_2); template<class... A> int m_FUN_10ea1d80(A...); SCStr * __thiscall m_FUN_10ea1e20(SCStr *param_2); template<class... A> int m_FUN_10ea1e20(A...); SCStr * __thiscall m_FUN_10ea1e70(SCStr *param_2); template<class... A> int m_FUN_10ea1e70(A...); SCStr * __thiscall m_FUN_10ea1f30(SCStr *param_2); template<class... A> int m_FUN_10ea1f30(A...); SCStr * __thiscall m_FUN_10ea2070(SCStr *param_2); template<class... A> int m_FUN_10ea2070(A...); SCStr * __thiscall m_FUN_10ea20c0(SCStr *param_2); template<class... A> int m_FUN_10ea20c0(A...); void __thiscall m_FUN_10ea2760(int param_2); template<class... A> int m_FUN_10ea2760(A...); void __thiscall m_FUN_10ea6c40(undefined1 param_2); template<class... A> int m_FUN_10ea6c40(A...); void __thiscall m_FUN_10ea6c50(undefined4 param_2); template<class... A> int m_FUN_10ea6c50(A...); void __thiscall m_FUN_10ea6cc0(SCStr *param_2,SCStr *param_3,SCStr *param_4); template<class... A> int m_FUN_10ea6cc0(A...); undefined4 * __thiscall m_FUN_10ea6f90(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_10ea6f90(A...); void __thiscall m_FUN_10ea7840(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10ea7840(A...); void __thiscall m_FUN_10ea78d0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10ea78d0(A...); void __thiscall m_FUN_10ea7d10(undefined4 param_2); template<class... A> int m_FUN_10ea7d10(A...); void __thiscall m_FUN_10ea7d30(undefined4 param_2); template<class... A> int m_FUN_10ea7d30(A...); void __thiscall m_FUN_10ea7d50(undefined4 param_2); template<class... A> int m_FUN_10ea7d50(A...); void __thiscall m_FUN_10eaa230(undefined4 param_2); template<class... A> int m_FUN_10eaa230(A...); undefined4 * __thiscall m_FUN_10eaa5a0(undefined4 param_2); template<class... A> int m_FUN_10eaa5a0(A...); undefined4 * __thiscall m_FUN_10eaa620(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10eaa620(A...); undefined4 * __thiscall m_FUN_10eaa660(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10eaa660(A...); undefined4 * __thiscall m_FUN_10eaa6c0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10eaa6c0(A...); undefined4 * __thiscall m_FUN_10eaa6e0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10eaa6e0(A...); undefined4 * __thiscall m_FUN_10eaa700(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10eaa700(A...); undefined4 * __thiscall m_FUN_10eaa870(undefined4 *param_2); template<class... A> int m_FUN_10eaa870(A...); int * __thiscall m_FUN_10eab5e0(int *param_2); template<class... A> int m_FUN_10eab5e0(A...); int * __thiscall m_FUN_10eab640(int *param_2); template<class... A> int m_FUN_10eab640(A...); int * __thiscall m_FUN_10eab6a0(int *param_2); template<class... A> int m_FUN_10eab6a0(A...); int * __thiscall m_FUN_10eab730(int *param_2); template<class... A> int m_FUN_10eab730(A...); bool __thiscall m_FUN_10eab9b0(int *param_2); template<class... A> int m_FUN_10eab9b0(A...); bool __thiscall m_FUN_10eab9d0(int *param_2); template<class... A> int m_FUN_10eab9d0(A...); int __thiscall m_FUN_10eab9f0(int param_2); template<class... A> int m_FUN_10eab9f0(A...); void __thiscall m_FUN_10eaba80(int *param_2,int param_3); template<class... A> int m_FUN_10eaba80(A...); int * __thiscall m_FUN_10eabb20(int param_2); template<class... A> int m_FUN_10eabb20(A...); int * __thiscall m_FUN_10eabb30(int param_2); template<class... A> int m_FUN_10eabb30(A...); uint __thiscall m_FUN_10eabca0(uint param_2); template<class... A> int m_FUN_10eabca0(A...); void __thiscall m_FUN_10eac030(undefined4 *param_2); template<class... A> int m_FUN_10eac030(A...); void __thiscall m_FUN_10eac4c0(undefined4 *param_2); template<class... A> int m_FUN_10eac4c0(A...); void __thiscall m_FUN_10eac7e0(undefined4 *param_2); template<class... A> int m_FUN_10eac7e0(A...); void __thiscall m_FUN_10eac7f0(int *param_2,int param_3); template<class... A> int m_FUN_10eac7f0(A...); void __thiscall m_FUN_10ead1c0(undefined4 param_2); template<class... A> int m_FUN_10ead1c0(A...); undefined4 * __thiscall m_FUN_10eae7c0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10eae7c0(A...); bool __thiscall m_FUN_10eb0020(int *param_2); template<class... A> int m_FUN_10eb0020(A...); int __thiscall m_FUN_10eb0040(int param_2); template<class... A> int m_FUN_10eb0040(A...); uint __thiscall m_FUN_10eb01d0(uint param_2); template<class... A> int m_FUN_10eb01d0(A...); void __thiscall m_FUN_10eb0340(int param_2); template<class... A> int m_FUN_10eb0340(A...); void __thiscall m_FUN_10eb0360(int *param_2); template<class... A> int m_FUN_10eb0360(A...); void __thiscall m_FUN_10eb03c0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10eb03c0(A...); void __thiscall m_FUN_10eb03e0(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10eb03e0(A...); void __thiscall m_FUN_10eb0400(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10eb0400(A...); void __thiscall m_FUN_10eb0810(undefined4 *param_2); template<class... A> int m_FUN_10eb0810(A...); void __thiscall m_FUN_10eb18f0(int *param_2,int param_3,undefined4 param_4,undefined4 param_5); template<class... A> int m_FUN_10eb18f0(A...); undefined4 * __thiscall m_FUN_10eb1940(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10eb1940(A...); undefined4 * __thiscall m_FUN_10eb1970(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10eb1970(A...); undefined4 * __thiscall m_FUN_10eb19a0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10eb19a0(A...); undefined4 * __thiscall m_FUN_10eb19d0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10eb19d0(A...); undefined4 * __thiscall m_FUN_10eb1a00(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10eb1a00(A...); undefined4 * __thiscall m_FUN_10eb1a30(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10eb1a30(A...); undefined4 * __thiscall m_FUN_10eb1a40(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10eb1a40(A...); undefined4 __thiscall m_FUN_10eb1a50(undefined4 param_2); template<class... A> int m_FUN_10eb1a50(A...); undefined4 * __thiscall m_FUN_10eb28f0(undefined4 *param_2); template<class... A> int m_FUN_10eb28f0(A...); int __thiscall m_FUN_10eb29a0(int param_2); template<class... A> int m_FUN_10eb29a0(A...); void __thiscall m_FUN_10eb29b0(int *param_2,int param_3); template<class... A> int m_FUN_10eb29b0(A...); void __thiscall m_FUN_10eb3740(undefined4 *param_2); template<class... A> int m_FUN_10eb3740(A...); void __thiscall m_FUN_10eb3750(undefined4 *param_2); template<class... A> int m_FUN_10eb3750(A...); undefined4 * __thiscall m_FUN_10eb4300(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10eb4300(A...); undefined4 * __thiscall m_FUN_10eb4320(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10eb4320(A...); undefined4 * __thiscall m_FUN_10eb4340(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10eb4340(A...); SCStr * __thiscall m_FUN_10eb4780(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10eb4780(A...); undefined4 * __thiscall m_FUN_10eb48e0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10eb48e0(A...); undefined4 * __thiscall m_FUN_10eb4900(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10eb4900(A...); undefined4 * __thiscall m_FUN_10eb4920(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10eb4920(A...); SCStr * __thiscall m_FUN_10eb49e0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10eb49e0(A...); undefined4 * __thiscall m_FUN_10eb5fe0(undefined4 param_2); template<class... A> int m_FUN_10eb5fe0(A...); undefined4 * __thiscall m_FUN_10eb6000(undefined4 param_2); template<class... A> int m_FUN_10eb6000(A...); undefined4 * __thiscall m_FUN_10eb6020(undefined4 param_2); template<class... A> int m_FUN_10eb6020(A...); undefined4 * __thiscall m_FUN_10eb6100(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10eb6100(A...); undefined4 * __thiscall m_FUN_10eb6110(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10eb6110(A...); undefined4 * __thiscall m_FUN_10eb6120(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10eb6120(A...); undefined4 * __thiscall m_FUN_10eb62b0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10eb62b0(A...); undefined4 * __thiscall m_FUN_10eb62c0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10eb62c0(A...); undefined4 * __thiscall m_FUN_10eb62d0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10eb62d0(A...); bool __thiscall m_FUN_10eb6e10(int *param_2); template<class... A> int m_FUN_10eb6e10(A...); bool __thiscall m_FUN_10eb6e30(int *param_2); template<class... A> int m_FUN_10eb6e30(A...); bool __thiscall m_FUN_10eb6e50(int *param_2); template<class... A> int m_FUN_10eb6e50(A...); bool __thiscall m_FUN_10eb6e70(int *param_2); template<class... A> int m_FUN_10eb6e70(A...); bool __thiscall m_FUN_10eb6e90(int *param_2); template<class... A> int m_FUN_10eb6e90(A...); bool __thiscall m_FUN_10eb6eb0(int *param_2); template<class... A> int m_FUN_10eb6eb0(A...); void __thiscall m_FUN_10eb81b0(int param_2); template<class... A> int m_FUN_10eb81b0(A...); void __thiscall m_FUN_10eb8220(int param_2); template<class... A> int m_FUN_10eb8220(A...); void __thiscall m_FUN_10eb8290(int param_2); template<class... A> int m_FUN_10eb8290(A...); void __thiscall m_FUN_10eb8330(int *param_2); template<class... A> int m_FUN_10eb8330(A...); void __thiscall m_FUN_10eb83a0(int *param_2); template<class... A> int m_FUN_10eb83a0(A...); void __thiscall m_FUN_10eb8410(int *param_2); template<class... A> int m_FUN_10eb8410(A...); void __thiscall m_FUN_10eb8ac0(undefined4 *param_2); template<class... A> int m_FUN_10eb8ac0(A...); void __thiscall m_FUN_10eb8ad0(undefined4 *param_2); template<class... A> int m_FUN_10eb8ad0(A...); void __thiscall m_FUN_10eb8ae0(undefined4 *param_2); template<class... A> int m_FUN_10eb8ae0(A...); void __thiscall m_FUN_10eb97a0(undefined4 param_2); template<class... A> int m_FUN_10eb97a0(A...); undefined4 * __thiscall m_FUN_10ebc4c0(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_10ebc4c0(A...); void __thiscall m_FUN_10ebc5a0(undefined4 *param_2); template<class... A> int m_FUN_10ebc5a0(A...); void __thiscall m_FUN_10ebc610(undefined4 *param_2); template<class... A> int m_FUN_10ebc610(A...); void __thiscall m_FUN_10ebc6c0(undefined4 *param_2); template<class... A> int m_FUN_10ebc6c0(A...); void __thiscall m_FUN_10ebfb10(undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5); template<class... A> int m_FUN_10ebfb10(A...); void __thiscall m_FUN_10ebfb70(int *param_2,int param_3,undefined4 param_4,undefined4 param_5); template<class... A> int m_FUN_10ebfb70(A...); void __thiscall m_FUN_10ebfbb0(int *param_2,int param_3,undefined4 param_4,undefined4 param_5); template<class... A> int m_FUN_10ebfbb0(A...); undefined4 * __thiscall m_FUN_10ec0640(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ec0640(A...); undefined4 * __thiscall m_FUN_10ec0650(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ec0650(A...); undefined4 * __thiscall m_FUN_10ec0660(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ec0660(A...); undefined4 * __thiscall m_FUN_10ec0670(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ec0670(A...); undefined4 * __thiscall m_FUN_10ec0680(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ec0680(A...); undefined4 * __thiscall m_FUN_10ec0690(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ec0690(A...); undefined4 * __thiscall m_FUN_10ec2240(undefined4 *param_2); template<class... A> int m_FUN_10ec2240(A...); int * __thiscall m_FUN_10ec2c70(int *param_2); template<class... A> int m_FUN_10ec2c70(A...); int __thiscall m_FUN_10ec2cd0(int param_2); template<class... A> int m_FUN_10ec2cd0(A...); int __thiscall m_FUN_10ec2ce0(int param_2); template<class... A> int m_FUN_10ec2ce0(A...); int __thiscall m_FUN_10ec2cf0(int param_2); template<class... A> int m_FUN_10ec2cf0(A...); int __thiscall m_FUN_10ec2d10(int param_2); template<class... A> int m_FUN_10ec2d10(A...); int __thiscall m_FUN_10ec2d30(int param_2); template<class... A> int m_FUN_10ec2d30(A...); uint __thiscall m_FUN_10ec2d40(uint param_2); template<class... A> int m_FUN_10ec2d40(A...); uint __thiscall m_FUN_10ec2d90(uint param_2); template<class... A> int m_FUN_10ec2d90(A...); void __thiscall m_FUN_10ec2f10(int *param_2,int param_3); template<class... A> int m_FUN_10ec2f10(A...); void __thiscall m_FUN_10ec2f30(int *param_2,int param_3); template<class... A> int m_FUN_10ec2f30(A...); void __thiscall m_FUN_10ec2f50(int *param_2,int param_3); template<class... A> int m_FUN_10ec2f50(A...); int __thiscall m_FUN_10ec3510(undefined4 *param_2); template<class... A> int m_FUN_10ec3510(A...); void __thiscall m_FUN_10ec6730(undefined4 *param_2); template<class... A> int m_FUN_10ec6730(A...); void __thiscall m_FUN_10ec6740(undefined4 *param_2); template<class... A> int m_FUN_10ec6740(A...); void __thiscall m_FUN_10ec6750(undefined4 *param_2); template<class... A> int m_FUN_10ec6750(A...); void __thiscall m_FUN_10ec6760(undefined4 *param_2); template<class... A> int m_FUN_10ec6760(A...); void __thiscall m_FUN_10ec6b40(undefined4 *param_2); template<class... A> int m_FUN_10ec6b40(A...); void __thiscall m_FUN_10ec6b50(undefined4 *param_2); template<class... A> int m_FUN_10ec6b50(A...); void __thiscall m_FUN_10ec6b60(undefined4 *param_2); template<class... A> int m_FUN_10ec6b60(A...); void __thiscall m_FUN_10ec6b70(undefined4 *param_2); template<class... A> int m_FUN_10ec6b70(A...); void __thiscall m_FUN_10ec6b80(undefined4 *param_2); template<class... A> int m_FUN_10ec6b80(A...); SCStr * __thiscall m_FUN_10ec71e0(SCStr *param_2); template<class... A> int m_FUN_10ec71e0(A...); int __thiscall m_FUN_10ecbed0(int param_2); template<class... A> int m_FUN_10ecbed0(A...); undefined4 * __thiscall m_FUN_10ecfad0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10ecfad0(A...); undefined4 * __thiscall m_FUN_10ecfde0(undefined4 param_2); template<class... A> int m_FUN_10ecfde0(A...); undefined4 * __thiscall m_FUN_10ecfdf0(undefined4 param_2); template<class... A> int m_FUN_10ecfdf0(A...); undefined4 * __thiscall m_FUN_10ecfe00(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10ecfe00(A...); undefined4 * __thiscall m_FUN_10ecfe20(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ecfe20(A...); undefined4 * __thiscall m_FUN_10ecfe30(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ecfe30(A...); undefined4 * __thiscall m_FUN_10ed0050(undefined4 param_2); template<class... A> int m_FUN_10ed0050(A...); undefined4 * __thiscall m_FUN_10ed0060(undefined4 param_2); template<class... A> int m_FUN_10ed0060(A...); undefined4 * __thiscall m_FUN_10ed09b0(undefined4 param_2); template<class... A> int m_FUN_10ed09b0(A...); undefined4 * __thiscall m_FUN_10ed0b10(undefined4 *param_2); template<class... A> int m_FUN_10ed0b10(A...); undefined4 * __thiscall m_FUN_10ed0b20(undefined4 *param_2); template<class... A> int m_FUN_10ed0b20(A...); void __thiscall m_FUN_10ed1690(int param_2); template<class... A> int m_FUN_10ed1690(A...); void __thiscall m_FUN_10ed1710(int *param_2); template<class... A> int m_FUN_10ed1710(A...); int __thiscall m_FUN_10edf340(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10edf340(A...); void __thiscall m_FUN_10edfdc0(int param_2); template<class... A> int m_FUN_10edfdc0(A...); void __thiscall m_FUN_10edfde0(undefined4 param_2); template<class... A> int m_FUN_10edfde0(A...); void __thiscall m_FUN_10ee18c0(undefined4 *param_2); template<class... A> int m_FUN_10ee18c0(A...); void __thiscall m_FUN_10ee1be0(undefined4 *param_2); template<class... A> int m_FUN_10ee1be0(A...); undefined4 * __thiscall m_FUN_10ee1cc0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ee1cc0(A...); undefined4 * __thiscall m_FUN_10ee1cd0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ee1cd0(A...); bool __thiscall m_FUN_10ee2610(int *param_2); template<class... A> int m_FUN_10ee2610(A...); bool __thiscall m_FUN_10ee2630(int *param_2); template<class... A> int m_FUN_10ee2630(A...); void __thiscall m_FUN_10ee2720(int param_2); template<class... A> int m_FUN_10ee2720(A...); uint __thiscall m_FUN_10ee2750(uint param_2); template<class... A> int m_FUN_10ee2750(A...); void __thiscall m_FUN_10ee2870(undefined4 param_2); template<class... A> int m_FUN_10ee2870(A...); void __thiscall m_FUN_10ee2d50(undefined4 *param_2); template<class... A> int m_FUN_10ee2d50(A...); void __thiscall m_FUN_10ee4140(undefined4 *param_2); template<class... A> int m_FUN_10ee4140(A...); void __thiscall m_FUN_10ee42b0(undefined4 *param_2,void *param_3); template<class... A> int m_FUN_10ee42b0(A...); void __thiscall m_FUN_10ee4e40(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ee4e40(A...); void __thiscall m_FUN_10ee5f20(undefined4 param_2,int param_3); template<class... A> int m_FUN_10ee5f20(A...); void __thiscall m_FUN_10ee61f0(undefined4 *param_2); template<class... A> int m_FUN_10ee61f0(A...); void __thiscall m_FUN_10ee66b0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11); template<class... A> int m_FUN_10ee66b0(A...); void __thiscall m_FUN_10ee6800(int param_2,char param_3,undefined4 param_4,undefined4 param_5); template<class... A> int m_FUN_10ee6800(A...); void __thiscall m_FUN_10ee6a40(undefined4 param_2); template<class... A> int m_FUN_10ee6a40(A...); void __thiscall m_FUN_10ee6b50(undefined4 param_2); template<class... A> int m_FUN_10ee6b50(A...); void __thiscall m_FUN_10ee6fb0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ee6fb0(A...); void __thiscall m_FUN_10ee8730(undefined4 *param_2); template<class... A> int m_FUN_10ee8730(A...); void __thiscall m_FUN_10eea570(int param_2,undefined4 param_3); template<class... A> int m_FUN_10eea570(A...); int __thiscall m_FUN_10eeb4d0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10eeb4d0(A...); int __thiscall m_FUN_10eeb580(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10eeb580(A...); undefined4 * __thiscall m_FUN_10eeb650(int *param_2); template<class... A> int m_FUN_10eeb650(A...); void __thiscall m_FUN_10eec290(int param_2); template<class... A> int m_FUN_10eec290(A...); void __thiscall m_FUN_10eec2b0(int param_2); template<class... A> int m_FUN_10eec2b0(A...); void __thiscall m_FUN_10eec2d0(undefined4 param_2); template<class... A> int m_FUN_10eec2d0(A...); void __thiscall m_FUN_10eec2e0(undefined4 param_2); template<class... A> int m_FUN_10eec2e0(A...); SCStr * __thiscall m_FUN_10eecfb0(SCStr *param_2); template<class... A> int m_FUN_10eecfb0(A...); undefined4 * __thiscall m_FUN_10eed6f0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10eed6f0(A...); SCStr * __thiscall m_FUN_10eed7e0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10eed7e0(A...); undefined4 * __thiscall m_FUN_10eed810(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10eed810(A...); SCStr * __thiscall m_FUN_10eed830(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10eed830(A...); undefined4 * __thiscall m_FUN_10eedae0(undefined4 param_2); template<class... A> int m_FUN_10eedae0(A...); undefined1 * __thiscall m_FUN_10eedb80(SCStr *param_2); template<class... A> int m_FUN_10eedb80(A...); void __thiscall m_FUN_10eee0b0(int param_2); template<class... A> int m_FUN_10eee0b0(A...); void __thiscall m_FUN_10eee130(int *param_2); template<class... A> int m_FUN_10eee130(A...); undefined4 * __thiscall m_FUN_10eeed00(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10eeed00(A...); SCStr * __thiscall m_FUN_10eeedf0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10eeedf0(A...); undefined4 * __thiscall m_FUN_10eeee20(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10eeee20(A...); SCStr * __thiscall m_FUN_10eeee40(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10eeee40(A...); undefined4 * __thiscall m_FUN_10eef0f0(undefined4 param_2); template<class... A> int m_FUN_10eef0f0(A...); void __thiscall m_FUN_10eef740(int param_2); template<class... A> int m_FUN_10eef740(A...); void __thiscall m_FUN_10eef7c0(int *param_2); template<class... A> int m_FUN_10eef7c0(A...); void __thiscall m_FUN_10ef0b80(undefined4 param_2); template<class... A> int m_FUN_10ef0b80(A...); SCStr * __thiscall m_FUN_10ef2210(SCStr *param_2); template<class... A> int m_FUN_10ef2210(A...); int * __thiscall m_FUN_10ef2230(int *param_2); template<class... A> int m_FUN_10ef2230(A...); int * __thiscall m_FUN_10ef2260(int *param_2); template<class... A> int m_FUN_10ef2260(A...); void __thiscall m_FUN_10ef3670(uint param_2); template<class... A> int m_FUN_10ef3670(A...); undefined4 * __thiscall m_FUN_10ef4270(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10ef4270(A...); undefined4 * __thiscall m_FUN_10ef4360(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10ef4360(A...); void __thiscall m_FUN_10ef4430(undefined4 *param_2); template<class... A> int m_FUN_10ef4430(A...); void __thiscall m_FUN_10ef4450(undefined4 *param_2); template<class... A> int m_FUN_10ef4450(A...); int * __thiscall m_FUN_10ef4770(int *param_2,SCStr *param_3); template<class... A> int m_FUN_10ef4770(A...); void __thiscall m_FUN_10ef4cf0(undefined4 *param_2); template<class... A> int m_FUN_10ef4cf0(A...); void __thiscall m_FUN_10ef4d20(undefined4 *param_2); template<class... A> int m_FUN_10ef4d20(A...); undefined4 * __thiscall m_FUN_10ef4e60(undefined4 param_2); template<class... A> int m_FUN_10ef4e60(A...); undefined4 * __thiscall m_FUN_10ef4f00(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ef4f00(A...); undefined4 * __thiscall m_FUN_10ef4f10(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ef4f10(A...); undefined4 * __thiscall m_FUN_10ef4f20(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ef4f20(A...); undefined4 * __thiscall m_FUN_10ef4f30(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ef4f30(A...); undefined4 * __thiscall m_FUN_10ef4f40(undefined4 *param_2); template<class... A> int m_FUN_10ef4f40(A...); undefined4 * __thiscall m_FUN_10ef50b0(undefined4 param_2); template<class... A> int m_FUN_10ef50b0(A...); bool __thiscall m_FUN_10ef5340(int *param_2); template<class... A> int m_FUN_10ef5340(A...); bool __thiscall m_FUN_10ef5360(int *param_2); template<class... A> int m_FUN_10ef5360(A...); bool __thiscall m_FUN_10ef5380(int *param_2); template<class... A> int m_FUN_10ef5380(A...); bool __thiscall m_FUN_10ef53a0(int *param_2); template<class... A> int m_FUN_10ef53a0(A...); void __thiscall m_FUN_10ef5580(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ef5580(A...); void __thiscall m_FUN_10ef55a0(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ef55a0(A...); };

extern int FUN_10e92eb0(...);
extern int FUN_10ef1900(...);
extern __declspec(dllimport) int __stdio_common_vsprintf(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int func_0x100027f7(...);
extern int func_0x10014c4a(...);
extern int func_0x100632cd(...);
extern int func_0x1006b4c8(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern int succeeded(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101a6c80(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_1029ae60(...);
extern int thunk_FUN_102a3ea0(...);
extern int thunk_FUN_102c45c0(...);
extern int thunk_FUN_102cc870(...);
extern int thunk_FUN_10302280(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103d60a0(...);
template<class... A> int __stdcall thunk_FUN_103d65f0(A...);
extern int thunk_FUN_1059c050(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_105a26b0(...);
extern int thunk_FUN_105a26c0(...);
template<class... A> int __stdcall thunk_FUN_105f6050(A...);
extern int thunk_FUN_10604790(...);
extern int thunk_FUN_10604820(...);
extern int thunk_FUN_1068beb0(...);
extern int thunk_FUN_1068c010(...);
extern int thunk_FUN_1068c030(...);
extern int thunk_FUN_1068c170(...);
extern int thunk_FUN_106d8310(...);
extern int thunk_FUN_106d8410(...);
extern int thunk_FUN_106d8da0(...);
extern int thunk_FUN_1086f2f0(...);
extern int thunk_FUN_108754f0(...);
extern int thunk_FUN_10dd1260(...);
extern int thunk_FUN_10dd3190(...);
extern int thunk_FUN_10dd31f0(...);
extern int thunk_FUN_10df2ea0(...);
template<class... A> int __stdcall thunk_FUN_10e0f500(A...);
extern int thunk_FUN_10e0f790(...);
extern int thunk_FUN_10e10dc0(...);
template<class... A> int __stdcall thunk_FUN_10e45e20(A...);
extern int thunk_FUN_10e460f0(...);
extern int thunk_FUN_10e467a0(...);
extern int thunk_FUN_10e485f0(...);
extern int thunk_FUN_10e48ae0(...);
template<class... A> int __stdcall thunk_FUN_10e5d160(A...);
template<class... A> int __stdcall thunk_FUN_10ea7960(A...);
template<class... A> int __stdcall thunk_FUN_10ea7a90(A...);
extern int thunk_FUN_10ea7d70(...);
extern int thunk_FUN_10ea8f20(...);
template<class... A> int __stdcall thunk_FUN_10eaab70(A...);
extern int thunk_FUN_10eaad30(...);
extern int thunk_FUN_10eae570(...);
template<class... A> int __stdcall thunk_FUN_10eb1010(A...);
extern int thunk_FUN_10eb2520(...);
extern int thunk_FUN_10eb27e0(...);
template<class... A> int __stdcall thunk_FUN_10ebcd20(A...);
template<class... A> int __stdcall thunk_FUN_10ebd6e0(A...);
extern int thunk_FUN_10ebeb90(...);
extern int thunk_FUN_10ebf160(...);
extern int thunk_FUN_10ebfc10(...);
extern int thunk_FUN_10ec1d20(...);
template<class... A> int __stdcall thunk_FUN_10ecae50(A...);
extern int thunk_FUN_10ee18e0(...);
extern int thunk_FUN_10ee1d10(...);
extern int thunk_FUN_10ee2ae0(...);
extern int thunk_FUN_10ee3510(...);
template<class... A> int __stdcall thunk_FUN_10ee3c70(A...);
extern int thunk_FUN_10ee4a00(...);
extern int thunk_FUN_10ee70c0(...);
extern int thunk_FUN_10ee7180(...);
template<class... A> int __stdcall thunk_FUN_10ef4470(A...);
extern int thunk_FUN_10ef4620(...);
extern int thunk_FUN_10ef6280(...);
extern int thunk_FUN_10ef64d0(...);
extern int thunk_FUN_110688f0(...);
extern int thunk_FUN_1106a250(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_111a0640(...);
extern int thunk_FUN_111a2140(...);
extern int thunk_FUN_111a4bc0(...);
extern int thunk_FUN_111a74d0(...);
extern int thunk_FUN_111bce20(...);
extern int thunk_FUN_111bce40(...);
extern int thunk_FUN_111bce60(...);
extern int thunk_FUN_111bcfc0(...);
extern int thunk_FUN_111bcfe0(...);
extern int thunk_FUN_111bd6b0(...);
extern int thunk_FUN_111beca0(...);
template<class... A> int __stdcall thunk_FUN_111c0760(A...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_1124a160(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f060(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113ba290(...);
extern int thunk_FUN_113bcbd0(...);
extern int thunk_FUN_113bcc60(...);
extern int thunk_FUN_113bcd70(...);
extern int thunk_FUN_113bcdf0(...);
extern int thunk_FUN_113bce30(...);
extern int thunk_FUN_113bd290(...);
extern int thunk_FUN_113bd4c0(...);
extern int thunk_FUN_113bd6c0(...);
extern int thunk_FUN_113bd750(...);
extern int thunk_FUN_113bd910(...);
extern int thunk_FUN_113be100(...);
extern int thunk_FUN_113be140(...);
extern int thunk_FUN_113be1c0(...);
extern int thunk_FUN_113cebb0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1145abd0(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int DAT_1186d2ee;
extern int DAT_11882ff0;
extern int DAT_12126b84;
extern int DAT_121a6ab8;
extern int DAT_121a6b1c;
extern int g_lSCObjCount;
extern int ghidra_vftable_ExtractArchiveOp;
extern int ghidra_vftable_Netstart2DtlsClient_MessageHandler;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RHTTPBufferedDataIO;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RSHdmiGetInfoRequest;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_RUpnpHTCGetLEDFeedbackStateAIOOp;
extern int ghidra_vftable_RefCountBase;
extern int ghidra_vftable_SCAlexaAuthChecklistDownloadAlexaState;
extern int ghidra_vftable_SCAlexaAuthCompleteState;
extern int ghidra_vftable_SCAlexaAuthEnableAckChimeState;
extern int ghidra_vftable_SCAlexaAuthGenericErrorState;
extern int ghidra_vftable_SCAlexaAuthIntroState;
extern int ghidra_vftable_SCAlexaAuthLowMemoryErrorState;
extern int ghidra_vftable_SCAlexaAuthMicSetupState;
extern int ghidra_vftable_SCAlexaAuthMissingPlayersErrorState;
extern int ghidra_vftable_SCAlexaAuthPushAuthCodeState;
extern int ghidra_vftable_SCAlexaAuthReminderState;
extern int ghidra_vftable_SCAlexaAuthRoomState;
extern int ghidra_vftable_SCAlexaAuthSuccessState;
extern int ghidra_vftable_SCAlexaAuthUseDifferentAccountErrorState;
extern int ghidra_vftable_SCAlexaAuthWizardState;
extern int ghidra_vftable_SCAlexaAuthWrongAccountErrorState;
extern int ghidra_vftable_SCAlexaSetUpMusicServicesState;
extern int ghidra_vftable_SCChangeEmailWizCompleteState;
extern int ghidra_vftable_SCChangeEmailWizInitState;
extern int ghidra_vftable_SCChangeEmailWizTransferState;
extern int ghidra_vftable_SCChangeEmailWizVerifyState;
extern int ghidra_vftable_SCHouseholdEventSink;
extern int ghidra_vftable_SCIActionDelegateCB;
extern int ghidra_vftable_SCIIntegerSettingsProperty;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIOpHTControlGetLEDFeedbackState;
extern int ghidra_vftable_SCISonarCalibrationItem;
extern int ghidra_vftable_SCIStringFromCustomSettingsProperty;
extern int ghidra_vftable_SCIStringFromListSettingsProperty;
extern int ghidra_vftable_SCIVSResponseListener;
extern int ghidra_vftable_SCLegacyMusicLibrarySetupWizard;
extern int ghidra_vftable_SCLegacyMusicLibrarySetupWizardCompleteState;
extern int ghidra_vftable_SCLegacyMusicLibrarySetupWizardInitState;
extern int ghidra_vftable_SCLegacyMusicLibrarySetupWizardState;
extern int ghidra_vftable_SCLegacyMusicLibrarySetupWizardSubwizardState;
extern int ghidra_vftable_SCLegacySonanceDetectionWizard;
extern int ghidra_vftable_SCLifecycleMixedLegacyCompleteState;
extern int ghidra_vftable_SCLifecycleMixedLegacyIncompatPlayersState;
extern int ghidra_vftable_SCLifecycleMixedLegacyOptionsState;
extern int ghidra_vftable_SCLifecycleMixedLegacyOutroState;
extern int ghidra_vftable_SCLifecycleMixedLegacyRemindMeLaterState;
extern int ghidra_vftable_SCLifecycleMixedLegacyWizard;
extern int ghidra_vftable_SCLifecycleMixedLegacyWizardState;
extern int ghidra_vftable_SCLifecycleModernCompleteState;
extern int ghidra_vftable_SCLifecycleModernReadyForDownloadState;
extern int ghidra_vftable_SCLifecycleModernRemindMeLaterState;
extern int ghidra_vftable_SCLifecycleModernTermsOfUseState;
extern int ghidra_vftable_SCLifecycleModernWizard;
extern int ghidra_vftable_SCLifecycleModernWizardState;
extern int ghidra_vftable_SCLifecycleWizardMixedLegacyInitState;
extern int ghidra_vftable_SCLifecycleWizardModernInitState;
extern int ghidra_vftable_SCNewWizLayoutTemplate;
extern int ghidra_vftable_SCNewWizResponseTemplate;
extern int ghidra_vftable_SCOpHTControlGetLEDFeedbackState;
extern int ghidra_vftable_SCOpHdmiGetInfo;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCOpRefBase;
extern int ghidra_vftable_SCProductSetupWizardData_Data;
extern int ghidra_vftable_SCSecurePlayerCalcConfirmState;
extern int ghidra_vftable_SCSecurePlayerCompleteState;
extern int ghidra_vftable_SCSecurePlayerConfirmState;
extern int ghidra_vftable_SCSecurePlayerDoRegisterState;
extern int ghidra_vftable_SCSecurePlayerFailureBadTokenState;
extern int ghidra_vftable_SCSecurePlayerFailureState;
extern int ghidra_vftable_SCSecurePlayerInitState;
extern int ghidra_vftable_SCSecurePlayerLinkPlayersIntroState;
extern int ghidra_vftable_SCSecurePlayerState;
extern int ghidra_vftable_SCSecurePlayerSuccessState;
extern int ghidra_vftable_SCSecurePlayerTransferFailureState;
extern int ghidra_vftable_SCSecurePlayerUnconfirmedState;
extern int ghidra_vftable_SCSecureTransferButtonsState;
extern int ghidra_vftable_SCSecureTransferNetworkErrorState;
extern int ghidra_vftable_SCSecureTransferPressButtonState;
extern int ghidra_vftable_SCSecureTransferSpeakerChoiceState;
extern int ghidra_vftable_SCSecureTransferSuccessState;
extern int ghidra_vftable_SCSecureTransferWaitingForTransferState;
extern int ghidra_vftable_SCSecureTransferWizCompleteState;
extern int ghidra_vftable_SCSecureTransferWizInitState;
extern int ghidra_vftable_SCSecureTransferWizIntroState;
extern int ghidra_vftable_SCSecureTransferWizard;
extern int ghidra_vftable_SCSonanceDetectionCompleteState;
extern int ghidra_vftable_SCSonanceDetectionDetectState;
extern int ghidra_vftable_SCSonanceDetectionInitState;
extern int ghidra_vftable_SCSonanceDetectionIntroState;
extern int ghidra_vftable_SCSonanceDetectionWizardState;
extern int ghidra_vftable_SCSwfObjHHListener;
extern int ghidra_vftable_SCTimerUser;
extern int ghidra_vftable_SCVoiceAuthErrorBaseState;
extern int ghidra_vftable_SCVoiceResponseHandler;
extern int ghidra_vftable_SCVoiceResponseHandler_VoiceResponseDelegate;
extern int ghidra_vftable_SCWifiConfigWizardData_Data;
extern int ghidra_vftable_SCWizard;
extern int ghidra_vftable_SCWizardState;
extern int ghidra_vftable_SCWizardStateFor;
extern int ghidra_vftable_SCXMLSecurePlayerWizard;
extern int ghidra_vftable_SwfObj;
extern int ghidra_vftable_SwfThreadOp;
extern int in_EAX;
extern int uStack_10;
extern int uStack_14;
extern int uStack_4;
extern int uStack_590;
extern int uStack_594;
extern int uStack_5b0;
extern int uStack_5b4;
extern int uStack_5d0;
extern int uStack_5d4;
extern int uStack_8;
extern int uStack_9b4;
extern int uStack_9b8;
extern int uStack_9bc;
extern int unaff_EDI;
extern undefined1 LAB_10260d10[];
extern undefined1 LAB_10e482e4[];
extern undefined1 LAB_10ee6855[];
extern undefined1 LAB_10ee68c5[];
extern undefined1 LAB_10ee69ac[];
extern undefined1 LAB_1106a3b7[];
extern undefined1 LAB_1106a3ce[];
extern undefined1 LAB_1106a3ea[];
extern undefined1 LAB_1106a455[];
extern undefined1 LAB_1106a46c[];
extern undefined1 LAB_1106a488[];
extern undefined1 LAB_1106a4d2[];
extern undefined1 LAB_1106a4e0[];
extern undefined1 LAB_1106a4e4[];
extern undefined1 LAB_1106a615[];
extern undefined1 LAB_1106a68d[];
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_11513ac0[];
extern undefined1 LAB_1162b7d0[];
extern undefined1 LAB_11728460[];
extern undefined1 LAB_11745740[];
extern undefined1 LAB_1174f270[];
extern undefined1 LAB_1175a22d[];
extern undefined1 LAB_1175f295[];
extern undefined1 LAB_11761430[];
extern undefined1 LAB_117c1080[];
extern int *PTR_DAT_11966d78;
extern int *PTR_DAT_11966d84;
extern int *PTR_DAT_11966d90;
extern int *PTR_DAT_11966d9c;
extern int *PTR_DAT_11966da8;
extern int *PTR_DAT_11993d18;
extern int *PTR_DAT_11993d24;
extern int *PTR_DAT_11993d30;
extern int *PTR_DAT_11993d3c;
extern int *PTR_DAT_1211a5d8;
extern void *ExceptionList;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e28de0(int param_1);
template<class... A> int FUN_10e28de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e28df0(undefined4 *param_1);
template<class... A> int FUN_10e28df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e2a960(int param_1);
template<class... A> int FUN_10e2a960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e2a970(int param_1);
template<class... A> int FUN_10e2a970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e2a980(int param_1);
template<class... A> int FUN_10e2a980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e2a990(int param_1);
template<class... A> int FUN_10e2a990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e2a9a0(int param_1);
template<class... A> int FUN_10e2a9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e2a9b0(int param_1);
template<class... A> int FUN_10e2a9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e2a9c0(int param_1);
template<class... A> int FUN_10e2a9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e2a9d0(int param_1);
template<class... A> int FUN_10e2a9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e2a9e0(int param_1);
template<class... A> int FUN_10e2a9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e2a9f0(int param_1);
template<class... A> int FUN_10e2a9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e2aa00(int param_1);
template<class... A> int FUN_10e2aa00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e2aa10(int param_1);
template<class... A> int FUN_10e2aa10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e2f170(undefined4 *param_1);
template<class... A> int FUN_10e2f170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e2f190(undefined4 *param_1);
template<class... A> int FUN_10e2f190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e2f1b0(undefined4 *param_1);
template<class... A> int FUN_10e2f1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e2f1d0(undefined4 *param_1);
template<class... A> int FUN_10e2f1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e30000(int param_1);
template<class... A> int FUN_10e30000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e30980(int param_1);
template<class... A> int FUN_10e30980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e30990(int param_1);
template<class... A> int FUN_10e30990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e309a0(int param_1);
template<class... A> int FUN_10e309a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e309b0(int param_1);
template<class... A> int FUN_10e309b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10e3cad0(void);
template<class... A> int FUN_10e3cad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e3e3d0(void);
template<class... A> int FUN_10e3e3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e3e480(int *param_1);
template<class... A> int FUN_10e3e480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e3e490(int *param_1);
template<class... A> int FUN_10e3e490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e3e4a0(int *param_1);
template<class... A> int FUN_10e3e4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e3f0d0(undefined4 *param_1);
template<class... A> int FUN_10e3f0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e3f0e0(undefined4 *param_1);
template<class... A> int FUN_10e3f0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e3f0f0(undefined4 *param_1);
template<class... A> int FUN_10e3f0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e3f200(undefined4 *param_1);
template<class... A> int FUN_10e3f200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e3f230(undefined4 *param_1);
template<class... A> int FUN_10e3f230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e3f260(undefined4 *param_1);
template<class... A> int FUN_10e3f260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e3f290(undefined4 *param_1);
template<class... A> int FUN_10e3f290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e3f2c0(undefined4 *param_1);
template<class... A> int FUN_10e3f2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e3f2f0(undefined4 *param_1);
template<class... A> int FUN_10e3f2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e45dd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10e45dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e45df0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10e45df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e45e10(void);
template<class... A> int FUN_10e45e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e46500(undefined4 *param_1);
template<class... A> int FUN_10e46500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e46510(undefined4 *param_1);
template<class... A> int FUN_10e46510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e46520(undefined4 *param_1);
template<class... A> int FUN_10e46520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10e46530(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_10e46530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e465b0(void);
template<class... A> int FUN_10e465b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e466b0(undefined4 param_1);
template<class... A> int FUN_10e466b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e466c0(undefined4 param_1);
template<class... A> int FUN_10e466c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e468e0(undefined4 param_1);
template<class... A> int FUN_10e468e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e468f0(undefined4 param_1);
template<class... A> int FUN_10e468f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e46900(int *param_1,int param_2);
template<class... A> int FUN_10e46900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e46920(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10e46920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e46940(undefined4 param_1,int *param_2,int *param_3);
template<class... A> int FUN_10e46940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e46970(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10e46970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e469a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10e469a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e469d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10e469d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10e46af0(int param_1,int param_2);
template<class... A> int FUN_10e46af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e46b50(undefined4 param_1);
template<class... A> int FUN_10e46b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e46b60(undefined4 param_1);
template<class... A> int FUN_10e46b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e46b70(undefined4 param_1);
template<class... A> int FUN_10e46b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e46b80(undefined4 param_1);
template<class... A> int FUN_10e46b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e46b90(undefined4 param_1);
template<class... A> int FUN_10e46b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10e46ba0(int param_1,int param_2);
template<class... A> int FUN_10e46ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e46dc0(undefined4 *param_1);
template<class... A> int FUN_10e46dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e46de0(undefined4 param_1);
template<class... A> int FUN_10e46de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e46eb0(undefined4 *param_1);
template<class... A> int FUN_10e46eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e47390(undefined4 *param_1);
template<class... A> int FUN_10e47390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e473a0(undefined4 *param_1);
template<class... A> int FUN_10e473a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e473b0(undefined4 *param_1);
template<class... A> int FUN_10e473b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e474e0(undefined4 *param_1);
template<class... A> int FUN_10e474e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e474f0(undefined4 *param_1);
template<class... A> int FUN_10e474f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e47500(undefined4 *param_1);
template<class... A> int FUN_10e47500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e475c0(undefined4 *param_1);
template<class... A> int FUN_10e475c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e475d0(undefined4 *param_1);
template<class... A> int FUN_10e475d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e475e0(undefined4 *param_1);
template<class... A> int FUN_10e475e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e475f0(undefined4 *param_1);
template<class... A> int FUN_10e475f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e47600(undefined4 *param_1);
template<class... A> int FUN_10e47600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e47610(int *param_1);
template<class... A> int FUN_10e47610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e47790(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10e47790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10e47840(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10e47840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e47860(undefined4 *param_1);
template<class... A> int FUN_10e47860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e47870(undefined4 *param_1);
template<class... A> int FUN_10e47870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10e47880(int *param_1);
template<class... A> int FUN_10e47880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10e478b0(int *param_1);
template<class... A> int FUN_10e478b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e48370(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10e48370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e48380(undefined4 *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10e48380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e483e0(undefined4 param_1);
template<class... A> int FUN_10e483e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e483f0(undefined4 param_1);
template<class... A> int FUN_10e483f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e48400(undefined4 param_1);
template<class... A> int FUN_10e48400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e48410(undefined4 param_1);
template<class... A> int FUN_10e48410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e48420(undefined4 param_1);
template<class... A> int FUN_10e48420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e48430(undefined4 param_1);
template<class... A> int FUN_10e48430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e48440(undefined4 param_1);
template<class... A> int FUN_10e48440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e48450(undefined4 param_1);
template<class... A> int FUN_10e48450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e48460(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e48460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e48470(undefined4 *param_1);
template<class... A> int FUN_10e48470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e48480(undefined4 *param_1);
template<class... A> int FUN_10e48480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e48d10(int *param_1);
template<class... A> int FUN_10e48d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e48d20(int *param_1);
template<class... A> int FUN_10e48d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10e4dda0(void);
template<class... A> int FUN_10e4dda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e4e460(void);
template<class... A> int FUN_10e4e460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e4e470(void);
template<class... A> int FUN_10e4e470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e4e480(void);
template<class... A> int FUN_10e4e480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e4e490(void);
template<class... A> int FUN_10e4e490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e4f810(undefined4 param_1);
template<class... A> int FUN_10e4f810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e4fb10(int *param_1);
template<class... A> int FUN_10e4fb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e513e0(undefined4 *param_1);
template<class... A> int FUN_10e513e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e514a0(undefined4 *param_1);
template<class... A> int FUN_10e514a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e51570(undefined4 *param_1);
template<class... A> int FUN_10e51570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e51580(undefined4 *param_1);
template<class... A> int FUN_10e51580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e51640(undefined4 *param_1);
template<class... A> int FUN_10e51640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e51650(undefined4 *param_1);
template<class... A> int FUN_10e51650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e51660(undefined4 *param_1);
template<class... A> int FUN_10e51660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e51720(int *param_1);
template<class... A> int FUN_10e51720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5a2e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10e5a2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5a300(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10e5a300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5a370(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10e5a370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e5a590(void);
template<class... A> int FUN_10e5a590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e5a5b0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10e5a5b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e5a5c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10e5a5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e5a5d0(void);
template<class... A> int FUN_10e5a5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e5ad50(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10e5ad50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5adf0(undefined4 *param_1);
template<class... A> int FUN_10e5adf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5ae00(undefined4 param_1);
template<class... A> int FUN_10e5ae00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10e5ae10(int param_1,uint *param_2);
template<class... A> int FUN_10e5ae10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5af60(undefined4 param_1);
template<class... A> int FUN_10e5af60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b110(undefined4 param_1);
template<class... A> int FUN_10e5b110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b120(undefined4 param_1);
template<class... A> int FUN_10e5b120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b130(undefined4 param_1);
template<class... A> int FUN_10e5b130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b140(undefined4 param_1);
template<class... A> int FUN_10e5b140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b150(undefined4 param_1);
template<class... A> int FUN_10e5b150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e5b580(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10e5b580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b8f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10e5b8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b910(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10e5b910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b930(undefined4 param_1);
template<class... A> int FUN_10e5b930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b940(undefined4 param_1);
template<class... A> int FUN_10e5b940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b950(undefined4 param_1);
template<class... A> int FUN_10e5b950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b960(undefined4 param_1);
template<class... A> int FUN_10e5b960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b970(undefined4 param_1);
template<class... A> int FUN_10e5b970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b980(undefined4 param_1);
template<class... A> int FUN_10e5b980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b990(undefined4 param_1);
template<class... A> int FUN_10e5b990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b9a0(undefined4 param_1);
template<class... A> int FUN_10e5b9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b9b0(undefined4 param_1);
template<class... A> int FUN_10e5b9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b9c0(undefined4 param_1);
template<class... A> int FUN_10e5b9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b9d0(undefined4 param_1);
template<class... A> int FUN_10e5b9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10e5b9e0(void);
template<class... A> int FUN_10e5b9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b9f0(undefined4 param_1);
template<class... A> int FUN_10e5b9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5bb50(undefined4 *param_1);
template<class... A> int FUN_10e5bb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5bb80(undefined4 *param_1);
template<class... A> int FUN_10e5bb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5bbe0(undefined4 *param_1);
template<class... A> int FUN_10e5bbe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5bc40(undefined4 *param_1);
template<class... A> int FUN_10e5bc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5bca0(undefined4 *param_1);
template<class... A> int FUN_10e5bca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5bd00(undefined4 *param_1);
template<class... A> int FUN_10e5bd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5bd90(undefined4 *param_1);
template<class... A> int FUN_10e5bd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5beb0(undefined4 *param_1);
template<class... A> int FUN_10e5beb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5bfb0(int param_1);
template<class... A> int FUN_10e5bfb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5bfc0(int param_1);
template<class... A> int FUN_10e5bfc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5bfd0(int param_1);
template<class... A> int FUN_10e5bfd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5bfe0(int param_1);
template<class... A> int FUN_10e5bfe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5bff0(int param_1);
template<class... A> int FUN_10e5bff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5c0f0(undefined4 *param_1);
template<class... A> int FUN_10e5c0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5c130(undefined4 *param_1);
template<class... A> int FUN_10e5c130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e5c150(undefined4 param_1);
template<class... A> int FUN_10e5c150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e5c160(undefined4 param_1);
template<class... A> int FUN_10e5c160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5c170(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10e5c170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5c200(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10e5c200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5c290(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10e5c290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5c320(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10e5c320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5c3b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10e5c3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5c440(undefined4 *param_1);
template<class... A> int FUN_10e5c440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5c490(undefined4 *param_1);
template<class... A> int FUN_10e5c490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5d840(undefined4 *param_1);
template<class... A> int FUN_10e5d840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5d850(undefined4 *param_1);
template<class... A> int FUN_10e5d850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5d8e0(undefined4 *param_1);
template<class... A> int FUN_10e5d8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5da10(undefined4 *param_1);
template<class... A> int FUN_10e5da10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5db50(undefined4 *param_1);
template<class... A> int FUN_10e5db50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5e4e0(int param_1);
template<class... A> int FUN_10e5e4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5e750(undefined4 *param_1);
template<class... A> int FUN_10e5e750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5e930(undefined4 *param_1);
template<class... A> int FUN_10e5e930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5ea00(undefined4 *param_1);
template<class... A> int FUN_10e5ea00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5eab0(undefined4 *param_1);
template<class... A> int FUN_10e5eab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5eac0(undefined4 *param_1);
template<class... A> int FUN_10e5eac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5ee60(undefined4 *param_1);
template<class... A> int FUN_10e5ee60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5ee70(undefined4 *param_1);
template<class... A> int FUN_10e5ee70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5f020(undefined4 *param_1);
template<class... A> int FUN_10e5f020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5f0e0(undefined4 *param_1);
template<class... A> int FUN_10e5f0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5f370(undefined4 *param_1);
template<class... A> int FUN_10e5f370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5f380(undefined4 *param_1);
template<class... A> int FUN_10e5f380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e5f960(undefined4 *param_1);
template<class... A> int FUN_10e5f960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e5f970(int *param_1);
template<class... A> int FUN_10e5f970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e5f980(int param_1);
template<class... A> int FUN_10e5f980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e5f990(int param_1);
template<class... A> int FUN_10e5f990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e5f9a0(int param_1);
template<class... A> int FUN_10e5f9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e5f9b0(int param_1);
template<class... A> int FUN_10e5f9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e5f9c0(int param_1);
template<class... A> int FUN_10e5f9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e5f9d0(int param_1);
template<class... A> int FUN_10e5f9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e5f9e0(int param_1);
template<class... A> int FUN_10e5f9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e5f9f0(int param_1);
template<class... A> int FUN_10e5f9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e5fa00(int param_1);
template<class... A> int FUN_10e5fa00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e5fa10(int param_1);
template<class... A> int FUN_10e5fa10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e5fa20(undefined4 *param_1);
template<class... A> int FUN_10e5fa20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e5fa30(undefined4 *param_1);
template<class... A> int FUN_10e5fa30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5fa40(int *param_1);
template<class... A> int FUN_10e5fa40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5fa50(int *param_1);
template<class... A> int FUN_10e5fa50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5fa60(int *param_1);
template<class... A> int FUN_10e5fa60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e610a0(undefined4 *param_1);
template<class... A> int FUN_10e610a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e611f0(int param_1);
template<class... A> int FUN_10e611f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e61230(int param_1);
template<class... A> int FUN_10e61230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e61240(int param_1);
template<class... A> int FUN_10e61240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e61250(int param_1);
template<class... A> int FUN_10e61250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e61260(int param_1);
template<class... A> int FUN_10e61260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e61270(int param_1);
template<class... A> int FUN_10e61270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e61690(undefined4 param_1);
template<class... A> int FUN_10e61690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e616a0(undefined4 param_1);
template<class... A> int FUN_10e616a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e616b0(undefined4 param_1);
template<class... A> int FUN_10e616b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e616c0(undefined4 param_1);
template<class... A> int FUN_10e616c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e616d0(undefined4 param_1);
template<class... A> int FUN_10e616d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e616e0(undefined4 param_1);
template<class... A> int FUN_10e616e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e616f0(undefined4 param_1);
template<class... A> int FUN_10e616f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e61700(undefined4 param_1);
template<class... A> int FUN_10e61700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e61710(undefined4 param_1);
template<class... A> int FUN_10e61710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e61720(undefined4 param_1);
template<class... A> int FUN_10e61720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e61730(undefined4 param_1);
template<class... A> int FUN_10e61730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e61740(undefined4 param_1);
template<class... A> int FUN_10e61740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e61750(int param_1);
template<class... A> int FUN_10e61750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e61760(int param_1);
template<class... A> int FUN_10e61760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e61770(int param_1);
template<class... A> int FUN_10e61770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e61780(int param_1);
template<class... A> int FUN_10e61780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e61790(int param_1);
template<class... A> int FUN_10e61790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e61a30(int param_1);
template<class... A> int FUN_10e61a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e61a40(int param_1);
template<class... A> int FUN_10e61a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e61a50(int param_1);
template<class... A> int FUN_10e61a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e61a60(int param_1);
template<class... A> int FUN_10e61a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e61a70(int param_1);
template<class... A> int FUN_10e61a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10e61af0(int param_1);
template<class... A> int FUN_10e61af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e61b50(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10e61b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e61b60(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e61b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e61b70(int param_1);
template<class... A> int FUN_10e61b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e61b80(undefined4 *param_1);
template<class... A> int FUN_10e61b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10e65d80(uint param_1);
template<class... A> int FUN_10e65d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10e65e00(uint param_1);
template<class... A> int FUN_10e65e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e66b30(int *param_1);
template<class... A> int FUN_10e66b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e692a0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10e692a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e692f0(int param_1,int param_2);
template<class... A> int FUN_10e692f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e693a0(undefined4 *param_1);
template<class... A> int FUN_10e693a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e693c0(undefined4 *param_1);
template<class... A> int FUN_10e693c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e693e0(undefined4 *param_1);
template<class... A> int FUN_10e693e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e69400(undefined4 *param_1);
template<class... A> int FUN_10e69400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e69420(undefined4 *param_1);
template<class... A> int FUN_10e69420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e69680(int param_1);
template<class... A> int FUN_10e69680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e69d00(int param_1);
template<class... A> int FUN_10e69d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e69d10(int param_1);
template<class... A> int FUN_10e69d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e69d20(int param_1);
template<class... A> int FUN_10e69d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e69d30(int param_1);
template<class... A> int FUN_10e69d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e69d40(int param_1);
template<class... A> int FUN_10e69d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e69e00(int param_1);
template<class... A> int FUN_10e69e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10e71450(void);
template<class... A> int FUN_10e71450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e71480(int *param_1);
template<class... A> int FUN_10e71480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e71490(int *param_1);
template<class... A> int FUN_10e71490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e716f0(int param_1);
template<class... A> int FUN_10e716f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e71700(void);
template<class... A> int FUN_10e71700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e71710(void);
template<class... A> int FUN_10e71710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e71720(void);
template<class... A> int FUN_10e71720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e71730(void);
template<class... A> int FUN_10e71730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e72170(undefined4 param_1);
template<class... A> int FUN_10e72170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e721a0(undefined4 *param_1);
template<class... A> int FUN_10e721a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e721b0(undefined4 *param_1);
template<class... A> int FUN_10e721b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e72e10(undefined4 *param_1);
template<class... A> int FUN_10e72e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e72e40(undefined4 *param_1);
template<class... A> int FUN_10e72e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e72e70(undefined4 *param_1);
template<class... A> int FUN_10e72e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e72ea0(undefined4 *param_1);
template<class... A> int FUN_10e72ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e72ed0(undefined4 *param_1);
template<class... A> int FUN_10e72ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e733b0(int param_1);
template<class... A> int FUN_10e733b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e75700(int param_1);
template<class... A> int FUN_10e75700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e75710(int param_1);
template<class... A> int FUN_10e75710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e75720(int *param_1);
template<class... A> int FUN_10e75720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e767c0(int *param_1);
template<class... A> int FUN_10e767c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e767f0(undefined4 *param_1);
template<class... A> int FUN_10e767f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e76b70(undefined4 *param_1);
template<class... A> int FUN_10e76b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e76b80(undefined4 *param_1);
template<class... A> int FUN_10e76b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e77f90(int param_1);
template<class... A> int FUN_10e77f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e79210(undefined4 *param_1);
template<class... A> int FUN_10e79210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e7faa0(undefined4 *param_1);
template<class... A> int FUN_10e7faa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e7fab0(undefined4 *param_1);
template<class... A> int FUN_10e7fab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e7fde0(undefined4 *param_1);
template<class... A> int FUN_10e7fde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e837e0(undefined4 *param_1);
template<class... A> int FUN_10e837e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e837f0(undefined4 *param_1);
template<class... A> int FUN_10e837f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e83800(undefined4 *param_1);
template<class... A> int FUN_10e83800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e838a0(int *param_1);
template<class... A> int FUN_10e838a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e838d0(undefined4 *param_1);
template<class... A> int FUN_10e838d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e838e0(undefined4 *param_1);
template<class... A> int FUN_10e838e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e838f0(undefined4 *param_1);
template<class... A> int FUN_10e838f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e868c0(undefined4 *param_1);
template<class... A> int FUN_10e868c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e86ed0(undefined4 *param_1);
template<class... A> int FUN_10e86ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e86ee0(undefined4 *param_1);
template<class... A> int FUN_10e86ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e86ef0(undefined4 *param_1);
template<class... A> int FUN_10e86ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e86f00(undefined4 *param_1);
template<class... A> int FUN_10e86f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e86f10(undefined4 *param_1);
template<class... A> int FUN_10e86f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e86f20(undefined4 *param_1);
template<class... A> int FUN_10e86f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e86f30(int *param_1);
template<class... A> int FUN_10e86f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e86f60(undefined4 *param_1);
template<class... A> int FUN_10e86f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e86f70(undefined4 *param_1);
template<class... A> int FUN_10e86f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e89ad0(undefined4 *param_1);
template<class... A> int FUN_10e89ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e89ae0(int *param_1);
template<class... A> int FUN_10e89ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e89b10(undefined4 *param_1);
template<class... A> int FUN_10e89b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e89b20(undefined4 *param_1);
template<class... A> int FUN_10e89b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e89b30(undefined4 *param_1);
template<class... A> int FUN_10e89b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e89b40(undefined4 *param_1);
template<class... A> int FUN_10e89b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8add0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10e8add0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8ae10(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10e8ae10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8ae50(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10e8ae50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8ae90(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10e8ae90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8aed0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10e8aed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8af10(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10e8af10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8af50(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10e8af50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8af90(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10e8af90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8afd0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10e8afd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8b010(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10e8b010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8b050(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10e8b050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8b090(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10e8b090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8b0d0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10e8b0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8b110(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10e8b110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8b150(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10e8b150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8b190(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10e8b190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8b1d0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10e8b1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8b210(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10e8b210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8b250(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10e8b250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8b290(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10e8b290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8b2d0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10e8b2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e8b310(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10e8b310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e8b330(undefined4 param_1);
template<class... A> int FUN_10e8b330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e8b340(undefined4 param_1);
template<class... A> int FUN_10e8b340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e8b350(undefined4 param_1);
template<class... A> int FUN_10e8b350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e8b360(undefined4 param_1);
template<class... A> int FUN_10e8b360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e8b370(undefined4 param_1);
template<class... A> int FUN_10e8b370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e8b380(undefined4 param_1);
template<class... A> int FUN_10e8b380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e8b390(undefined4 param_1);
template<class... A> int FUN_10e8b390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10e8b3a0(void);
template<class... A> int FUN_10e8b3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10e8b3b0(void);
template<class... A> int FUN_10e8b3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10e8b3c0(void);
template<class... A> int FUN_10e8b3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8b460(undefined4 *param_1);
template<class... A> int FUN_10e8b460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8b490(undefined4 *param_1);
template<class... A> int FUN_10e8b490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8b4c0(undefined4 *param_1);
template<class... A> int FUN_10e8b4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8b4f0(undefined4 *param_1);
template<class... A> int FUN_10e8b4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8b680(undefined4 *param_1);
template<class... A> int FUN_10e8b680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8b960(undefined4 *param_1);
template<class... A> int FUN_10e8b960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8bb40(undefined4 *param_1);
template<class... A> int FUN_10e8bb40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8be20(undefined4 *param_1);
template<class... A> int FUN_10e8be20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8bfc0(int param_1);
template<class... A> int FUN_10e8bfc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8bfd0(int param_1);
template<class... A> int FUN_10e8bfd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8bfe0(int param_1);
template<class... A> int FUN_10e8bfe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8bff0(int param_1);
template<class... A> int FUN_10e8bff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8c000(int param_1);
template<class... A> int FUN_10e8c000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8c010(int param_1);
template<class... A> int FUN_10e8c010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8c020(int param_1);
template<class... A> int FUN_10e8c020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8c030(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10e8c030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8c140(int param_1);
template<class... A> int FUN_10e8c140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8c1d0(int param_1);
template<class... A> int FUN_10e8c1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8c260(int param_1);
template<class... A> int FUN_10e8c260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8c2f0(int param_1);
template<class... A> int FUN_10e8c2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8c300(int param_1);
template<class... A> int FUN_10e8c300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8c310(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10e8c310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8dc30(undefined4 *param_1);
template<class... A> int FUN_10e8dc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8dc40(undefined4 *param_1);
template<class... A> int FUN_10e8dc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8dc50(undefined4 *param_1);
template<class... A> int FUN_10e8dc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8dc60(undefined4 *param_1);
template<class... A> int FUN_10e8dc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8dc70(undefined4 *param_1);
template<class... A> int FUN_10e8dc70(A...);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_10e92eb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e942f0(undefined4 *param_1);
template<class... A> int FUN_10e942f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e94960(undefined4 *param_1);
template<class... A> int FUN_10e94960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e94970(undefined4 *param_1);
template<class... A> int FUN_10e94970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e94990(undefined4 *param_1);
template<class... A> int FUN_10e94990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e949a0(undefined4 *param_1);
template<class... A> int FUN_10e949a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e95010(undefined4 *param_1);
template<class... A> int FUN_10e95010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e96930(int param_1);
template<class... A> int FUN_10e96930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e96940(int param_1);
template<class... A> int FUN_10e96940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e96950(int param_1);
template<class... A> int FUN_10e96950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e96960(int param_1);
template<class... A> int FUN_10e96960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e96970(int param_1);
template<class... A> int FUN_10e96970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e96980(int param_1);
template<class... A> int FUN_10e96980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e96990(int param_1);
template<class... A> int FUN_10e96990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e969a0(int param_1);
template<class... A> int FUN_10e969a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e969b0(int param_1);
template<class... A> int FUN_10e969b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e969c0(int param_1);
template<class... A> int FUN_10e969c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e969d0(int param_1);
template<class... A> int FUN_10e969d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e969e0(int param_1);
template<class... A> int FUN_10e969e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e969f0(int param_1);
template<class... A> int FUN_10e969f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e96a00(int param_1);
template<class... A> int FUN_10e96a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e96a10(int param_1);
template<class... A> int FUN_10e96a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e96a20(int param_1);
template<class... A> int FUN_10e96a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e96a30(int param_1);
template<class... A> int FUN_10e96a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e96a40(undefined4 *param_1);
template<class... A> int FUN_10e96a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e96a50(undefined4 *param_1);
template<class... A> int FUN_10e96a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e96a60(undefined4 *param_1);
template<class... A> int FUN_10e96a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e96a70(undefined4 *param_1);
template<class... A> int FUN_10e96a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e96a80(undefined4 *param_1);
template<class... A> int FUN_10e96a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e99970(int param_1);
template<class... A> int FUN_10e99970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e99980(int param_1);
template<class... A> int FUN_10e99980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e99990(int param_1);
template<class... A> int FUN_10e99990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e999a0(int param_1);
template<class... A> int FUN_10e999a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e999b0(int param_1);
template<class... A> int FUN_10e999b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e999c0(int param_1);
template<class... A> int FUN_10e999c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e999d0(int param_1);
template<class... A> int FUN_10e999d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e999e0(int param_1);
template<class... A> int FUN_10e999e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e999f0(int param_1);
template<class... A> int FUN_10e999f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e99a00(int param_1);
template<class... A> int FUN_10e99a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e99a10(int param_1);
template<class... A> int FUN_10e99a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e99a20(int param_1);
template<class... A> int FUN_10e99a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e99a30(int param_1);
template<class... A> int FUN_10e99a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e99a40(int param_1);
template<class... A> int FUN_10e99a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e99a50(int param_1);
template<class... A> int FUN_10e99a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e99a60(int param_1);
template<class... A> int FUN_10e99a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e99a70(int param_1);
template<class... A> int FUN_10e99a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e99a80(int param_1);
template<class... A> int FUN_10e99a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e9c270(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10e9c270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d060(undefined4 *param_1);
template<class... A> int FUN_10e9d060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d080(undefined4 *param_1);
template<class... A> int FUN_10e9d080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d0a0(undefined4 *param_1);
template<class... A> int FUN_10e9d0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d0c0(undefined4 *param_1);
template<class... A> int FUN_10e9d0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d0e0(undefined4 *param_1);
template<class... A> int FUN_10e9d0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d100(undefined4 *param_1);
template<class... A> int FUN_10e9d100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d120(undefined4 *param_1);
template<class... A> int FUN_10e9d120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d140(undefined4 *param_1);
template<class... A> int FUN_10e9d140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d160(undefined4 *param_1);
template<class... A> int FUN_10e9d160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d180(undefined4 *param_1);
template<class... A> int FUN_10e9d180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d1a0(undefined4 *param_1);
template<class... A> int FUN_10e9d1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d1c0(undefined4 *param_1);
template<class... A> int FUN_10e9d1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d1e0(undefined4 *param_1);
template<class... A> int FUN_10e9d1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d200(undefined4 *param_1);
template<class... A> int FUN_10e9d200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d220(undefined4 *param_1);
template<class... A> int FUN_10e9d220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d240(undefined4 *param_1);
template<class... A> int FUN_10e9d240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d260(undefined4 *param_1);
template<class... A> int FUN_10e9d260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d280(undefined4 *param_1);
template<class... A> int FUN_10e9d280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d2a0(undefined4 *param_1);
template<class... A> int FUN_10e9d2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d2c0(undefined4 *param_1);
template<class... A> int FUN_10e9d2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d2e0(undefined4 *param_1);
template<class... A> int FUN_10e9d2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d300(undefined4 *param_1);
template<class... A> int FUN_10e9d300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d320(undefined4 *param_1);
template<class... A> int FUN_10e9d320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d340(undefined4 *param_1);
template<class... A> int FUN_10e9d340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d360(undefined4 *param_1);
template<class... A> int FUN_10e9d360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d380(undefined4 *param_1);
template<class... A> int FUN_10e9d380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d3a0(undefined4 *param_1);
template<class... A> int FUN_10e9d3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d3c0(undefined4 *param_1);
template<class... A> int FUN_10e9d3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d3e0(undefined4 *param_1);
template<class... A> int FUN_10e9d3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d400(undefined4 *param_1);
template<class... A> int FUN_10e9d400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d420(undefined4 *param_1);
template<class... A> int FUN_10e9d420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d440(undefined4 *param_1);
template<class... A> int FUN_10e9d440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d450(undefined4 *param_1);
template<class... A> int FUN_10e9d450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e9db10(int param_1);
template<class... A> int FUN_10e9db10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9df30(int param_1);
template<class... A> int FUN_10e9df30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9df40(int param_1);
template<class... A> int FUN_10e9df40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9df50(int param_1);
template<class... A> int FUN_10e9df50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9df60(int param_1);
template<class... A> int FUN_10e9df60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9df70(int param_1);
template<class... A> int FUN_10e9df70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9df80(int param_1);
template<class... A> int FUN_10e9df80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea2550(int param_1);
template<class... A> int FUN_10ea2550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ea2560(int param_1);
template<class... A> int FUN_10ea2560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ea2580(void);
template<class... A> int FUN_10ea2580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ea2590(void);
template<class... A> int FUN_10ea2590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ea25a0(void);
template<class... A> int FUN_10ea25a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ea25b0(int *param_1);
template<class... A> int FUN_10ea25b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ea25c0(int *param_1);
template<class... A> int FUN_10ea25c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ea25d0(int *param_1);
template<class... A> int FUN_10ea25d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ea25e0(int *param_1);
template<class... A> int FUN_10ea25e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ea28e0(undefined4 *param_1);
template<class... A> int FUN_10ea28e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ea28f0(undefined4 *param_1);
template<class... A> int FUN_10ea28f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea5eb0(undefined4 *param_1);
template<class... A> int FUN_10ea5eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea5ee0(undefined4 *param_1);
template<class... A> int FUN_10ea5ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea5f10(undefined4 *param_1);
template<class... A> int FUN_10ea5f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea5f40(undefined4 *param_1);
template<class... A> int FUN_10ea5f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea5f70(undefined4 *param_1);
template<class... A> int FUN_10ea5f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea5fa0(undefined4 *param_1);
template<class... A> int FUN_10ea5fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea5fd0(undefined4 *param_1);
template<class... A> int FUN_10ea5fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea6000(undefined4 *param_1);
template<class... A> int FUN_10ea6000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea6030(undefined4 *param_1);
template<class... A> int FUN_10ea6030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea6060(undefined4 *param_1);
template<class... A> int FUN_10ea6060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea6090(undefined4 *param_1);
template<class... A> int FUN_10ea6090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea60c0(undefined4 *param_1);
template<class... A> int FUN_10ea60c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea60f0(undefined4 *param_1);
template<class... A> int FUN_10ea60f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea6120(undefined4 *param_1);
template<class... A> int FUN_10ea6120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea6150(undefined4 *param_1);
template<class... A> int FUN_10ea6150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea6180(undefined4 *param_1);
template<class... A> int FUN_10ea6180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea61b0(undefined4 *param_1);
template<class... A> int FUN_10ea61b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea61e0(undefined4 *param_1);
template<class... A> int FUN_10ea61e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea6210(undefined4 *param_1);
template<class... A> int FUN_10ea6210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea6240(undefined4 *param_1);
template<class... A> int FUN_10ea6240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea6270(undefined4 *param_1);
template<class... A> int FUN_10ea6270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea62a0(undefined4 *param_1);
template<class... A> int FUN_10ea62a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea62d0(undefined4 *param_1);
template<class... A> int FUN_10ea62d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea6300(undefined4 *param_1);
template<class... A> int FUN_10ea6300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ea6f70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10ea6f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ea6fd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_10ea6fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ea7150(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10ea7150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ea7560(void);
template<class... A> int FUN_10ea7560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ea7570(void);
template<class... A> int FUN_10ea7570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ea7810(undefined4 param_1);
template<class... A> int FUN_10ea7810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ea7820(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ea7820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ea7830(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ea7830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ea7ce0(int param_1,int param_2);
template<class... A> int FUN_10ea7ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ea8180(undefined4 *param_1);
template<class... A> int FUN_10ea8180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ea8190(undefined4 *param_1);
template<class... A> int FUN_10ea8190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ea9150(int param_1);
template<class... A> int FUN_10ea9150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ea98c0(void);
template<class... A> int FUN_10ea98c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ea9bf0(int param_1);
template<class... A> int FUN_10ea9bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ea9fe0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ea9fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa010(undefined4 param_1);
template<class... A> int FUN_10eaa010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa140(undefined4 param_1);
template<class... A> int FUN_10eaa140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa160(undefined4 param_1);
template<class... A> int FUN_10eaa160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa170(undefined4 param_1);
template<class... A> int FUN_10eaa170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa180(undefined4 param_1);
template<class... A> int FUN_10eaa180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eaa190(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10eaa190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eaa1b0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10eaa1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eaa1d0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10eaa1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eaa1f0(undefined4 param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_10eaa1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eaa210(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10eaa210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eaa220(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_10eaa220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa270(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10eaa270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa290(undefined4 param_1);
template<class... A> int FUN_10eaa290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa2a0(undefined4 param_1);
template<class... A> int FUN_10eaa2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa2b0(undefined4 param_1);
template<class... A> int FUN_10eaa2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa2c0(undefined4 param_1);
template<class... A> int FUN_10eaa2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa2d0(undefined4 param_1);
template<class... A> int FUN_10eaa2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa2e0(undefined4 param_1);
template<class... A> int FUN_10eaa2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa300(undefined4 param_1);
template<class... A> int FUN_10eaa300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa310(undefined4 param_1);
template<class... A> int FUN_10eaa310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa330(undefined4 param_1);
template<class... A> int FUN_10eaa330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa3e0(undefined4 param_1);
template<class... A> int FUN_10eaa3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa3f0(undefined4 param_1);
template<class... A> int FUN_10eaa3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa410(undefined4 param_1);
template<class... A> int FUN_10eaa410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa420(undefined4 param_1);
template<class... A> int FUN_10eaa420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eaa470(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10eaa470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eaa6a0(undefined4 *param_1);
template<class... A> int FUN_10eaa6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eaa6f0(undefined4 *param_1);
template<class... A> int FUN_10eaa6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eaa710(undefined4 *param_1);
template<class... A> int FUN_10eaa710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eaa720(undefined4 *param_1);
template<class... A> int FUN_10eaa720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eaa740(undefined4 param_1);
template<class... A> int FUN_10eaa740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eaa9f0(undefined4 *param_1);
template<class... A> int FUN_10eaa9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eaaa10(undefined4 *param_1);
template<class... A> int FUN_10eaaa10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eaab10(undefined4 *param_1);
template<class... A> int FUN_10eaab10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10eaba00(int *param_1);
template<class... A> int FUN_10eaba00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eaba10(undefined4 *param_1);
template<class... A> int FUN_10eaba10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eaba20(undefined4 *param_1);
template<class... A> int FUN_10eaba20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eaba30(undefined4 *param_1);
template<class... A> int FUN_10eaba30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eaba40(undefined4 *param_1);
template<class... A> int FUN_10eaba40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eaba50(undefined4 *param_1);
template<class... A> int FUN_10eaba50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10eaba60(int *param_1);
template<class... A> int FUN_10eaba60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10eaba70(int *param_1);
template<class... A> int FUN_10eaba70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eabc50(undefined4 *param_1);
template<class... A> int FUN_10eabc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10eabda0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10eabda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eabe50(undefined4 param_1);
template<class... A> int FUN_10eabe50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eabe60(undefined4 param_1);
template<class... A> int FUN_10eabe60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eabe70(undefined4 param_1);
template<class... A> int FUN_10eabe70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eabe80(undefined4 param_1);
template<class... A> int FUN_10eabe80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eabe90(undefined4 param_1);
template<class... A> int FUN_10eabe90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eabea0(undefined4 param_1);
template<class... A> int FUN_10eabea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eabeb0(undefined4 param_1);
template<class... A> int FUN_10eabeb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eabec0(undefined4 param_1);
template<class... A> int FUN_10eabec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10eabed0(int param_1);
template<class... A> int FUN_10eabed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10eabf00(int *param_1);
template<class... A> int FUN_10eabf00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10eabfd0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10eabfd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10eabfe0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10eabfe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eabff0(int param_1);
template<class... A> int FUN_10eabff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eac000(int param_1);
template<class... A> int FUN_10eac000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eac010(int param_1);
template<class... A> int FUN_10eac010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eac020(undefined4 *param_1);
template<class... A> int FUN_10eac020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eac2c0(undefined4 *param_1);
template<class... A> int FUN_10eac2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10eac2d0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10eac2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10eac3d0(uint param_1);
template<class... A> int FUN_10eac3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10eac450(uint param_1);
template<class... A> int FUN_10eac450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eac4d0(int *param_1);
template<class... A> int FUN_10eac4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10eac5d0(int param_1,int param_2);
template<class... A> int FUN_10eac5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10ead0f0(undefined4 param_1);
template<class... A> int __stdcall FUN_10ead0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ead1a0(void);
template<class... A> int FUN_10ead1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ead1b0(void);
template<class... A> int FUN_10ead1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ead500(undefined4 param_1);
template<class... A> int FUN_10ead500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ead510(undefined4 param_1);
template<class... A> int FUN_10ead510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eae190(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10eae190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eae560(undefined4 *param_1);
template<class... A> int FUN_10eae560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eae670(undefined4 param_1,int param_2,int *param_3);
template<class... A> int FUN_10eae670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eae790(undefined4 param_1);
template<class... A> int FUN_10eae790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eae7a0(undefined4 param_1);
template<class... A> int FUN_10eae7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eae7b0(undefined4 param_1);
template<class... A> int FUN_10eae7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eae7e0(undefined4 *param_1);
template<class... A> int FUN_10eae7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eae800(undefined4 param_1);
template<class... A> int FUN_10eae800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eae900(undefined4 *param_1);
template<class... A> int FUN_10eae900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eb0000(undefined4 *param_1);
template<class... A> int FUN_10eb0000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eb01b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10eb01b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb02d0(undefined4 param_1);
template<class... A> int FUN_10eb02d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb02e0(undefined4 param_1);
template<class... A> int FUN_10eb02e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10eb02f0(int *param_1);
template<class... A> int FUN_10eb02f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10eb0320(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10eb0320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eb0330(undefined4 *param_1);
template<class... A> int FUN_10eb0330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10eb0790(uint param_1);
template<class... A> int FUN_10eb0790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eb0820(int *param_1);
template<class... A> int FUN_10eb0820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb0960(void);
template<class... A> int FUN_10eb0960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb0970(void);
template<class... A> int FUN_10eb0970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eb0e90(int *param_1);
template<class... A> int FUN_10eb0e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb0ff0(void);
template<class... A> int FUN_10eb0ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb1000(undefined4 *param_1);
template<class... A> int FUN_10eb1000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * FUN_10eb1590(int *param_1,int *param_2,undefined1 *param_3);
template<class... A> int FUN_10eb1590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb18b0(undefined4 param_1);
template<class... A> int FUN_10eb18b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10eb18c0(int param_1,int param_2);
template<class... A> int FUN_10eb18c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb18e0(undefined4 param_1);
template<class... A> int FUN_10eb18e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb28c0(undefined4 param_1);
template<class... A> int FUN_10eb28c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb2ab0(undefined4 *param_1);
template<class... A> int FUN_10eb2ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb2ac0(int param_1);
template<class... A> int FUN_10eb2ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb2ad0(undefined4 *param_1);
template<class... A> int FUN_10eb2ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eb3b20(int *param_1);
template<class... A> int FUN_10eb3b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eb3b40(int *param_1);
template<class... A> int FUN_10eb3b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eb42a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10eb42a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eb42c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10eb42c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eb42e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10eb42e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eb4360(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10eb4360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eb4380(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10eb4380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eb43a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10eb43a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb4b40(void);
template<class... A> int FUN_10eb4b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb4b60(void);
template<class... A> int FUN_10eb4b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb4b80(void);
template<class... A> int FUN_10eb4b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb4ba0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10eb4ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb4bb0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10eb4bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb4bc0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10eb4bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb4bd0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10eb4bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb4be0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10eb4be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb4bf0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10eb4bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb4c00(void);
template<class... A> int FUN_10eb4c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb4c10(void);
template<class... A> int FUN_10eb4c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb4c20(void);
template<class... A> int FUN_10eb4c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb51a0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10eb51a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb51c0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10eb51c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb51e0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10eb51e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb53d0(undefined4 param_1);
template<class... A> int FUN_10eb53d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb53e0(undefined4 param_1);
template<class... A> int FUN_10eb53e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb53f0(undefined4 param_1);
template<class... A> int FUN_10eb53f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10eb5400(int param_1,SCStr *param_2);
template<class... A> int FUN_10eb5400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10eb5430(int param_1,SCStr *param_2);
template<class... A> int FUN_10eb5430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10eb5460(int param_1,SCStr *param_2);
template<class... A> int FUN_10eb5460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5a00(undefined4 param_1);
template<class... A> int FUN_10eb5a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5a10(undefined4 param_1);
template<class... A> int FUN_10eb5a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5a20(undefined4 param_1);
template<class... A> int FUN_10eb5a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5a30(undefined4 param_1);
template<class... A> int FUN_10eb5a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5a40(undefined4 param_1);
template<class... A> int FUN_10eb5a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5a50(undefined4 param_1);
template<class... A> int FUN_10eb5a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5a60(undefined4 param_1);
template<class... A> int FUN_10eb5a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5a70(undefined4 param_1);
template<class... A> int FUN_10eb5a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5a80(undefined4 param_1);
template<class... A> int FUN_10eb5a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5a90(undefined4 param_1);
template<class... A> int FUN_10eb5a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5aa0(undefined4 param_1);
template<class... A> int FUN_10eb5aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5ab0(undefined4 param_1);
template<class... A> int FUN_10eb5ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5ac0(undefined4 param_1);
template<class... A> int FUN_10eb5ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5ad0(undefined4 param_1);
template<class... A> int FUN_10eb5ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5ae0(undefined4 param_1);
template<class... A> int FUN_10eb5ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5af0(undefined4 param_1);
template<class... A> int FUN_10eb5af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5b00(undefined4 param_1);
template<class... A> int FUN_10eb5b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5b10(undefined4 param_1);
template<class... A> int FUN_10eb5b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb5b20(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10eb5b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5e90(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10eb5e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5eb0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10eb5eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5ed0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10eb5ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5ef0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10eb5ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5f10(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10eb5f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5f30(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10eb5f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5f50(undefined4 param_1);
template<class... A> int FUN_10eb5f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5f60(undefined4 param_1);
template<class... A> int FUN_10eb5f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5f70(undefined4 param_1);
template<class... A> int FUN_10eb5f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5f80(undefined4 param_1);
template<class... A> int FUN_10eb5f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5f90(undefined4 param_1);
template<class... A> int FUN_10eb5f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5fa0(undefined4 param_1);
template<class... A> int FUN_10eb5fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5fb0(undefined4 param_1);
template<class... A> int FUN_10eb5fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5fc0(undefined4 param_1);
template<class... A> int FUN_10eb5fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5fd0(undefined4 param_1);
template<class... A> int FUN_10eb5fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eb62e0(undefined4 *param_1);
template<class... A> int FUN_10eb62e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eb6300(undefined4 *param_1);
template<class... A> int FUN_10eb6300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eb6320(undefined4 *param_1);
template<class... A> int FUN_10eb6320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb6340(undefined4 param_1);
template<class... A> int FUN_10eb6340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb6350(undefined4 param_1);
template<class... A> int FUN_10eb6350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb6360(undefined4 param_1);
template<class... A> int FUN_10eb6360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eb6370(undefined4 *param_1);
template<class... A> int FUN_10eb6370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eb63c0(undefined4 *param_1);
template<class... A> int FUN_10eb63c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eb6410(undefined4 *param_1);
template<class... A> int FUN_10eb6410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10eb6460(undefined1 *param_1);
template<class... A> int FUN_10eb6460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __fastcall FUN_10eb66a0(SCStr *param_1);
template<class... A> int FUN_10eb66a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eb73c0(int *param_1);
template<class... A> int FUN_10eb73c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eb73d0(int *param_1);
template<class... A> int FUN_10eb73d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eb73e0(int *param_1);
template<class... A> int FUN_10eb73e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eb73f0(int *param_1);
template<class... A> int FUN_10eb73f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eb7400(int *param_1);
template<class... A> int FUN_10eb7400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eb7410(int *param_1);
template<class... A> int FUN_10eb7410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eb7730(undefined4 *param_1);
template<class... A> int FUN_10eb7730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eb7760(undefined4 *param_1);
template<class... A> int FUN_10eb7760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eb7790(undefined4 *param_1);
template<class... A> int FUN_10eb7790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eb7820(int param_1);
template<class... A> int FUN_10eb7820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eb7840(int param_1);
template<class... A> int FUN_10eb7840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eb7860(int param_1);
template<class... A> int FUN_10eb7860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb7880(undefined4 param_1);
template<class... A> int FUN_10eb7880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb7890(undefined4 param_1);
template<class... A> int FUN_10eb7890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb78a0(undefined4 param_1);
template<class... A> int FUN_10eb78a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb78b0(undefined4 param_1);
template<class... A> int FUN_10eb78b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb78c0(undefined4 param_1);
template<class... A> int FUN_10eb78c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb78d0(undefined4 param_1);
template<class... A> int FUN_10eb78d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb78e0(undefined4 param_1);
template<class... A> int FUN_10eb78e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb78f0(undefined4 param_1);
template<class... A> int FUN_10eb78f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb7900(undefined4 param_1);
template<class... A> int FUN_10eb7900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb7910(undefined4 param_1);
template<class... A> int FUN_10eb7910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb7920(undefined4 param_1);
template<class... A> int FUN_10eb7920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb7930(undefined4 param_1);
template<class... A> int FUN_10eb7930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb7940(undefined4 param_1);
template<class... A> int FUN_10eb7940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb7950(undefined4 param_1);
template<class... A> int FUN_10eb7950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb7960(undefined4 param_1);
template<class... A> int FUN_10eb7960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb7970(undefined4 param_1);
template<class... A> int FUN_10eb7970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb7980(undefined4 param_1);
template<class... A> int FUN_10eb7980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb7990(undefined4 param_1);
template<class... A> int FUN_10eb7990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb79a0(undefined4 param_1);
template<class... A> int FUN_10eb79a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb79b0(undefined4 param_1);
template<class... A> int FUN_10eb79b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb79c0(undefined4 param_1);
template<class... A> int FUN_10eb79c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb79d0(undefined4 param_1);
template<class... A> int FUN_10eb79d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb79e0(undefined4 param_1);
template<class... A> int FUN_10eb79e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb79f0(undefined4 param_1);
template<class... A> int FUN_10eb79f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb8300(int param_1);
template<class... A> int FUN_10eb8300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb8310(int param_1);
template<class... A> int FUN_10eb8310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb8320(int param_1);
template<class... A> int FUN_10eb8320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10eb8480(uint param_1);
template<class... A> int FUN_10eb8480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10eb8500(uint param_1);
template<class... A> int FUN_10eb8500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10eb8570(uint param_1);
template<class... A> int FUN_10eb8570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eb88c0(int *param_1);
template<class... A> int FUN_10eb88c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb88d0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10eb88d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb8920(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10eb8920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb8970(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10eb8970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10eb89c0(int param_1,int param_2);
template<class... A> int FUN_10eb89c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10eb8a10(int param_1,int param_2);
template<class... A> int FUN_10eb8a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10eb8a60(int param_1,int param_2);
template<class... A> int FUN_10eb8a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10eb97c0(void);
template<class... A> int FUN_10eb97c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __stdcall FUN_10eba210(SCStr *param_1);
template<class... A> int __stdcall FUN_10eba210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10eba280(void);
template<class... A> int FUN_10eba280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10eba2a0(void);
template<class... A> int FUN_10eba2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10eba4f0(int *param_1);
template<class... A> int FUN_10eba4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebb1e0(void);
template<class... A> int FUN_10ebb1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebb1f0(void);
template<class... A> int FUN_10ebb1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebb200(void);
template<class... A> int FUN_10ebb200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebb210(void);
template<class... A> int FUN_10ebb210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebb220(void);
template<class... A> int FUN_10ebb220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebb230(void);
template<class... A> int FUN_10ebb230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebb450(undefined4 param_1);
template<class... A> int FUN_10ebb450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebb460(undefined4 param_1);
template<class... A> int FUN_10ebb460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebb470(undefined4 param_1);
template<class... A> int FUN_10ebb470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ebc4a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10ebc4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ebc4e0(void);
template<class... A> int FUN_10ebc4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ebc4f0(void);
template<class... A> int FUN_10ebc4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ebc500(void);
template<class... A> int FUN_10ebc500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ebc510(void);
template<class... A> int FUN_10ebc510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebca80(undefined4 *param_1);
template<class... A> int FUN_10ebca80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebca90(undefined4 *param_1);
template<class... A> int FUN_10ebca90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebcaa0(undefined4 *param_1);
template<class... A> int FUN_10ebcaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebcab0(undefined4 *param_1);
template<class... A> int FUN_10ebcab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebcac0(undefined4 *param_1);
template<class... A> int FUN_10ebcac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebcad0(undefined4 *param_1);
template<class... A> int FUN_10ebcad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ebdde0(undefined4 param_1,undefined4 param_2,undefined4 param_3,code *param_4);
template<class... A> int FUN_10ebdde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_10ebde50(SCStr *param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_10ebde50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10ebdf50(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_10ebdf50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ebe2a0(int param_1);
template<class... A> int FUN_10ebe2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebeb80(undefined4 param_1);
template<class... A> int FUN_10ebeb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ebed80(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5);
template<class... A> int FUN_10ebed80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ebef10(int param_1);
template<class... A> int FUN_10ebef10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ebef20(int param_1,int param_2,int param_3,int *param_4,code *param_5);
template<class... A> int FUN_10ebef20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebf820(undefined4 param_1);
template<class... A> int FUN_10ebf820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebf830(undefined4 param_1);
template<class... A> int FUN_10ebf830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebf840(undefined4 param_1);
template<class... A> int FUN_10ebf840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebf850(undefined4 param_1);
template<class... A> int FUN_10ebf850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebf860(undefined4 param_1);
template<class... A> int FUN_10ebf860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ebf8e0(undefined4 param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_10ebf8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ebf910(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10ebf910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ebf940(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10ebf940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ebf970(int param_1,int param_2);
template<class... A> int FUN_10ebf970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ebf990(int param_1,int param_2);
template<class... A> int FUN_10ebf990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ebf9b0(int param_1,int param_2);
template<class... A> int FUN_10ebf9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebfac0(undefined4 param_1);
template<class... A> int FUN_10ebfac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebfad0(undefined4 param_1);
template<class... A> int FUN_10ebfad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebfae0(undefined4 param_1);
template<class... A> int FUN_10ebfae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebfaf0(undefined4 param_1);
template<class... A> int FUN_10ebfaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebfb00(undefined4 param_1);
template<class... A> int FUN_10ebfb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebfd30(undefined4 param_1);
template<class... A> int FUN_10ebfd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebfd40(undefined4 param_1);
template<class... A> int FUN_10ebfd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_10ebfd50(int param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_10ebfd50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ec0620(undefined4 *param_1);
template<class... A> int FUN_10ec0620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ec0630(undefined4 *param_1);
template<class... A> int FUN_10ec0630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ec06a0(undefined4 param_1);
template<class... A> int FUN_10ec06a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ec06b0(undefined4 *param_1);
template<class... A> int FUN_10ec06b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void  __stdcall FUN_10ec2f70(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10ec2f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ec2f80(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10ec2f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ec34b0(undefined4 *param_1);
template<class... A> int FUN_10ec34b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ec34c0(undefined4 *param_1);
template<class... A> int FUN_10ec34c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ec34d0(undefined4 *param_1);
template<class... A> int FUN_10ec34d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ec34e0(undefined4 *param_1);
template<class... A> int FUN_10ec34e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ec3660(void);
template<class... A> int FUN_10ec3660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ec6720(int param_1);
template<class... A> int FUN_10ec6720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ec6770(int *param_1);
template<class... A> int FUN_10ec6770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ec6790(int *param_1);
template<class... A> int FUN_10ec6790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ec6fa0(undefined4 *param_1);
template<class... A> int FUN_10ec6fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ec6fb0(undefined4 *param_1);
template<class... A> int FUN_10ec6fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ec7900(void);
template<class... A> int FUN_10ec7900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ec7910(void);
template<class... A> int FUN_10ec7910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ec7920(void);
template<class... A> int FUN_10ec7920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ec7930(void);
template<class... A> int FUN_10ec7930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eca4f0(int *param_1);
template<class... A> int FUN_10eca4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eca500(int *param_1);
template<class... A> int FUN_10eca500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eca510(int *param_1);
template<class... A> int FUN_10eca510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eca530(int *param_1);
template<class... A> int FUN_10eca530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eca550(int *param_1);
template<class... A> int FUN_10eca550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ecaab0(byte *param_1,byte *param_2,uint param_3);
template<class... A> int FUN_10ecaab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ecfab0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10ecfab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ecfaf0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10ecfaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ed0070(void);
template<class... A> int FUN_10ed0070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ed0090(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ed0090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ed00a0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ed00a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ed00b0(void);
template<class... A> int FUN_10ed00b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ed0250(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10ed0250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0320(undefined4 param_1);
template<class... A> int FUN_10ed0320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10ed0330(int param_1,uint *param_2);
template<class... A> int FUN_10ed0330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0640(undefined4 *param_1);
template<class... A> int FUN_10ed0640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0650(undefined4 *param_1);
template<class... A> int FUN_10ed0650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0660(undefined4 param_1);
template<class... A> int FUN_10ed0660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0670(undefined4 param_1);
template<class... A> int FUN_10ed0670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0680(undefined4 param_1);
template<class... A> int FUN_10ed0680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0690(undefined4 param_1);
template<class... A> int FUN_10ed0690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed06a0(undefined4 param_1);
template<class... A> int FUN_10ed06a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0890(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ed0890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed08b0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ed08b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed08d0(undefined4 param_1);
template<class... A> int FUN_10ed08d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed08e0(undefined4 param_1);
template<class... A> int FUN_10ed08e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed08f0(undefined4 param_1);
template<class... A> int FUN_10ed08f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0900(undefined4 param_1);
template<class... A> int FUN_10ed0900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0910(undefined4 param_1);
template<class... A> int FUN_10ed0910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0920(undefined4 param_1);
template<class... A> int FUN_10ed0920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0930(undefined4 param_1);
template<class... A> int FUN_10ed0930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0940(undefined4 param_1);
template<class... A> int FUN_10ed0940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ed0950(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10ed0950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ed0960(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10ed0960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0970(undefined4 param_1);
template<class... A> int FUN_10ed0970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0980(undefined4 param_1);
template<class... A> int FUN_10ed0980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0990(undefined4 param_1);
template<class... A> int FUN_10ed0990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ed09a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10ed09a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ed0a90(undefined4 *param_1);
template<class... A> int FUN_10ed0a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ed0ab0(undefined4 param_1);
template<class... A> int FUN_10ed0ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ed0ac0(undefined4 *param_1);
template<class... A> int FUN_10ed0ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10ed1230(int *param_1,int *param_2);
template<class... A> int FUN_10ed1230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ed1310(undefined4 *param_1);
template<class... A> int FUN_10ed1310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ed1360(int param_1);
template<class... A> int FUN_10ed1360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ed1380(undefined4 param_1);
template<class... A> int FUN_10ed1380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ed1390(undefined4 param_1);
template<class... A> int FUN_10ed1390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ed13a0(undefined4 param_1);
template<class... A> int FUN_10ed13a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ed13b0(undefined4 param_1);
template<class... A> int FUN_10ed13b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ed13c0(undefined4 param_1);
template<class... A> int FUN_10ed13c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ed13d0(undefined4 param_1);
template<class... A> int FUN_10ed13d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ed13e0(undefined4 param_1);
template<class... A> int FUN_10ed13e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ed13f0(undefined4 param_1);
template<class... A> int FUN_10ed13f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ed1700(int param_1);
template<class... A> int FUN_10ed1700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ed3840(uint param_1);
template<class... A> int FUN_10ed3840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed40d0(undefined4 param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_10ed40d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ed9820(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10ed9820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ed9870(int param_1,int param_2);
template<class... A> int FUN_10ed9870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ed98c0(int param_1);
template<class... A> int FUN_10ed98c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10edf310(void);
template<class... A> int FUN_10edf310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10edf320(void);
template<class... A> int FUN_10edf320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10edf330(int param_1);
template<class... A> int FUN_10edf330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10edf3f0(undefined4 param_1);
template<class... A> int FUN_10edf3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10edf400(undefined4 *param_1);
template<class... A> int FUN_10edf400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10edf4a0(int param_1);
template<class... A> int FUN_10edf4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10edf4b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10edf4b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10edfaf0(int param_1);
template<class... A> int FUN_10edfaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10edfb00(int param_1);
template<class... A> int FUN_10edfb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10edfd90(int param_1);
template<class... A> int FUN_10edfd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10edfda0(int param_1);
template<class... A> int FUN_10edfda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10edfdb0(int param_1);
template<class... A> int FUN_10edfdb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee0700(undefined4 *param_1);
template<class... A> int FUN_10ee0700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee0790(int param_1);
template<class... A> int FUN_10ee0790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee0c90(undefined4 *param_1);
template<class... A> int FUN_10ee0c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ee1830(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10ee1830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ee1850(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10ee1850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ee1870(void);
template<class... A> int FUN_10ee1870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ee1880(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10ee1880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ee18b0(void);
template<class... A> int FUN_10ee18b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ee1a30(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_10ee1a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ee1a60(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_10ee1a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee1a90(undefined4 *param_1);
template<class... A> int FUN_10ee1a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee1aa0(undefined4 *param_1);
template<class... A> int FUN_10ee1aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee1ab0(undefined4 *param_1);
template<class... A> int FUN_10ee1ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ee1ac0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10ee1ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee1af0(undefined4 param_1);
template<class... A> int FUN_10ee1af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ee1b00(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ee1b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10ee1b10(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10ee1b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee1b40(undefined4 param_1);
template<class... A> int FUN_10ee1b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ee1b50(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10ee1b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ee1b80(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10ee1b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee1bb0(undefined4 param_1);
template<class... A> int FUN_10ee1bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ee1bc0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10ee1bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ee1bd0(void);
template<class... A> int FUN_10ee1bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_10ee1c10(undefined4 *param_1,int *param_2,int *param_3,int *param_4);
template<class... A> int FUN_10ee1c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee1c40(undefined4 param_1);
template<class... A> int FUN_10ee1c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee1c50(undefined4 param_1);
template<class... A> int FUN_10ee1c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee1c60(undefined4 param_1);
template<class... A> int FUN_10ee1c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee1c70(undefined4 param_1);
template<class... A> int FUN_10ee1c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ee1ce0(undefined4 *param_1);
template<class... A> int FUN_10ee1ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee1d00(undefined4 param_1);
template<class... A> int FUN_10ee1d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ee1d90(undefined4 *param_1);
template<class... A> int FUN_10ee1d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ee1db0(undefined4 *param_1);
template<class... A> int FUN_10ee1db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee2170(undefined4 *param_1);
template<class... A> int FUN_10ee2170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ee21f0(void);
template<class... A> int FUN_10ee21f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ee2650(int *param_1);
template<class... A> int FUN_10ee2650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ee2660(int *param_1);
template<class... A> int FUN_10ee2660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee2670(undefined4 *param_1);
template<class... A> int FUN_10ee2670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee2680(undefined4 *param_1);
template<class... A> int FUN_10ee2680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ee2800(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10ee2800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ee2810(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10ee2810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee2820(undefined4 param_1);
template<class... A> int FUN_10ee2820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee2830(undefined4 param_1);
template<class... A> int FUN_10ee2830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee2840(undefined4 param_1);
template<class... A> int FUN_10ee2840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee2850(undefined4 param_1);
template<class... A> int FUN_10ee2850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ee2860(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10ee2860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10ee28f0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10ee28f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ee2920(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10ee2920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ee2950(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10ee2950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee2980(undefined4 *param_1);
template<class... A> int FUN_10ee2980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee2990(int param_1);
template<class... A> int FUN_10ee2990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee29a0(undefined4 *param_1);
template<class... A> int FUN_10ee29a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ee30f0(int *param_1);
template<class... A> int FUN_10ee30f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee3170(int param_1);
template<class... A> int FUN_10ee3170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ee3490(int param_1,int param_2);
template<class... A> int FUN_10ee3490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee49a0(int param_1);
template<class... A> int FUN_10ee49a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee60c0(int param_1);
template<class... A> int FUN_10ee60c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee6310(int param_1);
template<class... A> int FUN_10ee6310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee6440(int param_1);
template<class... A> int FUN_10ee6440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee6570(int param_1);
template<class... A> int FUN_10ee6570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee6c60(int param_1);
template<class... A> int FUN_10ee6c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee6d50(int param_1);
template<class... A> int FUN_10ee6d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee6e80(int param_1);
template<class... A> int FUN_10ee6e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee7fb0(void);
template<class... A> int FUN_10ee7fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee7fc0(void);
template<class... A> int FUN_10ee7fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee8940(undefined4 *param_1);
template<class... A> int FUN_10ee8940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee8970(int param_1);
template<class... A> int FUN_10ee8970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee8ab0(undefined4 param_1);
template<class... A> int FUN_10ee8ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee8df0(int param_1);
template<class... A> int FUN_10ee8df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee8fd0(int param_1);
template<class... A> int FUN_10ee8fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee90f0(int param_1);
template<class... A> int FUN_10ee90f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee9210(int param_1);
template<class... A> int FUN_10ee9210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee9310(int param_1);
template<class... A> int FUN_10ee9310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee9f30(int param_1);
template<class... A> int FUN_10ee9f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eea050(int param_1);
template<class... A> int FUN_10eea050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eea160(int param_1);
template<class... A> int FUN_10eea160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eea270(int param_1);
template<class... A> int FUN_10eea270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eea380(int param_1);
template<class... A> int FUN_10eea380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eea4a0(int param_1);
template<class... A> int FUN_10eea4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eeb310(void);
template<class... A> int FUN_10eeb310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eeb630(undefined4 param_1);
template<class... A> int FUN_10eeb630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eeb640(undefined4 param_1);
template<class... A> int FUN_10eeb640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eeb6d0(undefined4 *param_1);
template<class... A> int FUN_10eeb6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eeb770(int param_1);
template<class... A> int FUN_10eeb770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eeb780(int param_1);
template<class... A> int FUN_10eeb780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eeb810(int param_1);
template<class... A> int FUN_10eeb810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eeb820(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10eeb820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10eebf30(int param_1);
template<class... A> int FUN_10eebf30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10eebf40(int param_1);
template<class... A> int FUN_10eebf40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eebf50(int param_1);
template<class... A> int FUN_10eebf50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eebf60(int param_1);
template<class... A> int FUN_10eebf60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10eec230(int param_1);
template<class... A> int FUN_10eec230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10eec240(int param_1);
template<class... A> int FUN_10eec240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eec250(int param_1);
template<class... A> int FUN_10eec250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eec260(int param_1);
template<class... A> int FUN_10eec260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10eec270(int param_1);
template<class... A> int FUN_10eec270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10eec280(int param_1);
template<class... A> int FUN_10eec280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eece60(undefined4 *param_1);
template<class... A> int FUN_10eece60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eece80(undefined4 *param_1);
template<class... A> int FUN_10eece80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eecea0(int param_1);
template<class... A> int FUN_10eecea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eecef0(int param_1);
template<class... A> int FUN_10eecef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eecf00(int param_1);
template<class... A> int FUN_10eecf00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eecf10(int param_1);
template<class... A> int FUN_10eecf10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eecf40(int param_1);
template<class... A> int FUN_10eecf40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eecf50(int param_1);
template<class... A> int FUN_10eecf50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eecf60(int param_1);
template<class... A> int FUN_10eecf60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eecf70(int param_1);
template<class... A> int FUN_10eecf70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_10eecfa0(int param_1);
template<class... A> int FUN_10eecfa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eecfd0(int param_1);
template<class... A> int FUN_10eecfd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eed610(undefined4 *param_1);
template<class... A> int FUN_10eed610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eed6a0(undefined4 *param_1);
template<class... A> int FUN_10eed6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eed860(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10eed860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eed8e0(undefined4 param_1);
template<class... A> int FUN_10eed8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10eed8f0(int param_1,SCStr *param_2);
template<class... A> int FUN_10eed8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eeda60(undefined4 param_1);
template<class... A> int FUN_10eeda60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eeda70(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10eeda70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eedaa0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10eedaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eedac0(undefined4 param_1);
template<class... A> int FUN_10eedac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eedad0(undefined4 param_1);
template<class... A> int FUN_10eedad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eeddb0(int param_1);
template<class... A> int FUN_10eeddb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eeddd0(undefined4 param_1);
template<class... A> int FUN_10eeddd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eedde0(undefined4 param_1);
template<class... A> int FUN_10eedde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eeddf0(undefined4 param_1);
template<class... A> int FUN_10eeddf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eede00(undefined4 param_1);
template<class... A> int FUN_10eede00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eede10(undefined4 param_1);
template<class... A> int FUN_10eede10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eee120(int param_1);
template<class... A> int FUN_10eee120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10eee3e0(int param_1,int param_2);
template<class... A> int FUN_10eee3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10eeea40(undefined1 *param_1);
template<class... A> int FUN_10eeea40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eeec40(void);
template<class... A> int FUN_10eeec40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eeec50(void);
template<class... A> int FUN_10eeec50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eeec70(undefined1 *param_1);
template<class... A> int FUN_10eeec70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eeee70(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10eeee70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eeeef0(undefined4 param_1);
template<class... A> int FUN_10eeeef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10eeef00(int param_1,SCStr *param_2);
template<class... A> int FUN_10eeef00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eef070(undefined4 param_1);
template<class... A> int FUN_10eef070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eef080(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10eef080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eef0b0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10eef0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eef0d0(undefined4 param_1);
template<class... A> int FUN_10eef0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eef0e0(undefined4 param_1);
template<class... A> int FUN_10eef0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eef440(int param_1);
template<class... A> int FUN_10eef440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eef460(undefined4 param_1);
template<class... A> int FUN_10eef460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eef470(undefined4 param_1);
template<class... A> int FUN_10eef470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eef480(undefined4 param_1);
template<class... A> int FUN_10eef480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eef490(undefined4 param_1);
template<class... A> int FUN_10eef490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eef4a0(undefined4 param_1);
template<class... A> int FUN_10eef4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eef7b0(int param_1);
template<class... A> int FUN_10eef7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ef0040(int param_1,int param_2);
template<class... A> int FUN_10ef0040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10ef09e0(undefined1 *param_1);
template<class... A> int FUN_10ef09e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef10d0(void);
template<class... A> int FUN_10ef10d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef10e0(void);
template<class... A> int FUN_10ef10e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ef1170(undefined1 *param_1);
template<class... A> int FUN_10ef1170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ef1610(undefined4 *param_1);
template<class... A> int FUN_10ef1610(A...);
/* WARNING: Removing unreachable block_10ef1900 (ram,0x101ba14a) */ void __fastcall FUN_10ef1900(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ef1cd0(undefined4 *param_1);
template<class... A> int FUN_10ef1cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef1cf0(int param_1);
template<class... A> int FUN_10ef1cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10ef22d0(int param_1);
template<class... A> int FUN_10ef22d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef22e0(int param_1);
template<class... A> int FUN_10ef22e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10ef2310(int param_1);
template<class... A> int FUN_10ef2310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ basic_ostream<char,std::char_traits<char>> *
FUN_10ef3410(basic_ostream<char,std::char_traits<char>> *param_1);
template<class... A> int FUN_10ef3410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ef3af0(undefined4 param_1,char *param_2);
template<class... A> int FUN_10ef3af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ef3cc0(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_10ef3cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ef41c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_10ef41c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ef4200(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5);
template<class... A> int FUN_10ef4200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ef4380(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10ef4380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef43a0(void);
template<class... A> int FUN_10ef43a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef43b0(void);
template<class... A> int FUN_10ef43b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef43c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ef43c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ef43d0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10ef43d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ef4400(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10ef4400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef47e0(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_10ef47e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef4810(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_10ef4810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef4840(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_10ef4840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef4870(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_10ef4870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef48a0(undefined4 *param_1);
template<class... A> int FUN_10ef48a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef48b0(undefined4 *param_1);
template<class... A> int FUN_10ef48b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef48c0(undefined4 *param_1);
template<class... A> int FUN_10ef48c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef48d0(undefined4 *param_1);
template<class... A> int FUN_10ef48d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef48e0(undefined4 *param_1);
template<class... A> int FUN_10ef48e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef48f0(undefined4 *param_1);
template<class... A> int FUN_10ef48f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4900(undefined4 param_1);
template<class... A> int FUN_10ef4900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10ef4910(int param_1,SCStr *param_2);
template<class... A> int FUN_10ef4910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ef4940(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10ef4940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ef4970(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10ef4970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef49a0(undefined4 param_1);
template<class... A> int FUN_10ef49a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef49b0(undefined4 param_1);
template<class... A> int FUN_10ef49b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef49c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ef49c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef49d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ef49d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10ef4b70(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10ef4b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4ba0(undefined4 param_1);
template<class... A> int FUN_10ef4ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4bb0(undefined4 param_1);
template<class... A> int FUN_10ef4bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ef4bc0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10ef4bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ef4bf0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10ef4bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ef4c20(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10ef4c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4c50(undefined4 param_1);
template<class... A> int FUN_10ef4c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4c60(undefined4 param_1);
template<class... A> int FUN_10ef4c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4c70(undefined4 param_1);
template<class... A> int FUN_10ef4c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef4c80(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10ef4c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef4c90(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10ef4c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef4ca0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10ef4ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef4cd0(void);
template<class... A> int FUN_10ef4cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef4ce0(void);
template<class... A> int FUN_10ef4ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4d50(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ef4d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_10ef4d70(undefined4 *param_1,int *param_2,int *param_3,int *param_4);
template<class... A> int FUN_10ef4d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4dd0(undefined4 param_1);
template<class... A> int FUN_10ef4dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4de0(undefined4 param_1);
template<class... A> int FUN_10ef4de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4df0(undefined4 param_1);
template<class... A> int FUN_10ef4df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4e00(undefined4 param_1);
template<class... A> int FUN_10ef4e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4e10(undefined4 param_1);
template<class... A> int FUN_10ef4e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4e20(undefined4 param_1);
template<class... A> int FUN_10ef4e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4e30(undefined4 param_1);
template<class... A> int FUN_10ef4e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4e40(undefined4 param_1);
template<class... A> int FUN_10ef4e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4e50(undefined4 param_1);
template<class... A> int FUN_10ef4e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ef5100(undefined4 *param_1);
template<class... A> int FUN_10ef5100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ef5140(undefined4 *param_1);
template<class... A> int FUN_10ef5140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ef5310(undefined4 *param_1);
template<class... A> int FUN_10ef5310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5520(undefined4 *param_1);
template<class... A> int FUN_10ef5520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5530(undefined4 *param_1);
template<class... A> int FUN_10ef5530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5540(undefined4 *param_1);
template<class... A> int FUN_10ef5540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5550(undefined4 *param_1);
template<class... A> int FUN_10ef5550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10ef5560(int *param_1);
template<class... A> int FUN_10ef5560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10ef5570(int *param_1);
template<class... A> int FUN_10ef5570(A...);
extern void __fastcall FUN_101ba0d0(void *param_1);

extern void __fastcall thunk_FUN_101ba0d0(void *param_1);

extern int ghidra_vftable_RControlAIOOpRef_RHdmiGetInfoAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpHTCGetLEDFeedbackStateAIOOp_;

// Reference entry 10e28de0; body size 4 bytes.
extern int __stdcall thunk_FUN_1029ae60(int a1,int a2);
extern int __stdcall thunk_FUN_102a3ea0(int a1,int a2);
extern int __stdcall thunk_FUN_103beae0(int a1,int a2);
extern int __stdcall thunk_FUN_1059d940(int a1);
extern int __stdcall thunk_FUN_1068beb0(int a1);
extern int __stdcall thunk_FUN_106d8310(int a1);
extern int __stdcall thunk_FUN_106d8410(int a1);
extern int __stdcall thunk_FUN_1086f2f0(int a1,int a2);
extern int __stdcall thunk_FUN_10e0f500(int a1,int a2);
extern int __stdcall thunk_FUN_10e10dc0(int a1);
extern int __stdcall thunk_FUN_10ea7960(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10ea7a90(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10eaad30(int a1);
extern int __stdcall thunk_FUN_10eb2520(int a1,int a2);
extern int __stdcall thunk_FUN_10eb27e0(int a1,int a2);
extern int __stdcall thunk_FUN_10ee1d10(int a1);
extern int __stdcall thunk_FUN_10ee3c70(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_111a4bc0(int a1,int a2);
extern int __stdcall thunk_FUN_111bce20(int a1,int a2);
extern int __stdcall thunk_FUN_111bce40(int a1,int a2);
extern int __stdcall thunk_FUN_111bcfc0(int a1,int a2);
extern int __stdcall thunk_FUN_111bcfe0(int a1,int a2);
extern int __stdcall thunk_FUN_111beca0(int a1,int a2);
extern int __stdcall thunk_FUN_111c0760(int a1,int a2,int a3,int a4,int a5,int a6,int a7,int a8);
extern int __stdcall thunk_FUN_1124a160(int a1);
struct SCFp_72_0 { char _p[72]; int (__thiscall *v)(void); };
struct SCFp_76_0 { char _p[76]; int (__thiscall *v)(void); };
struct SCVtbl_0_1 { virtual int v(int a1); };
struct SCVtbl_3_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(int a1); };
struct SCVtbl_5_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(int a1); };
struct SCVtbl_6_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual int v(int a1); };
struct SCVtbl_7_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual int v(void); };
struct SCVtbl_7_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual int v(int a1,int a2); };
struct SCVtbl_8_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual int v(void); };
struct SCVtbl_8_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual int v(int a1); };
struct SCVtbl_12_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual int v(void); };
struct SCVtbl_19_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual int v(int a1,int a2); };
struct SCVtbl_20_4 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual int v(int a1,int a2,int a3,int a4); };
struct SCVtbl_51_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual int v(int a1); };
struct SCVtbl_1_0 { virtual void _p0(); virtual int v(void); };
struct SCVtbl_1_1 { virtual void _p0(); virtual int v(int a1); };
struct SCVtbl_2_0 { virtual void _p0(); virtual void _p1(); virtual int v(void); };
struct SCVtbl_2_1 { virtual void _p0(); virtual void _p1(); virtual int v(int a1); };
struct SCVtbl_3_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(void); };
struct SCVtbl_4_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(int a1); };
int FUN_10092686();
int FUN_10068ce6(void);
int FUN_1005c743(void);
int FUN_1005bce9(void);
int FUN_10068ce6(...);
int FUN_1005c743(...);
int FUN_1005bce9(...);
template<class... A> int FUN_1005bce9(A...);
template<class... A> int FUN_1005c743(A...);
template<class... A> int FUN_10068ce6(A...);
#line 1 "ENTRY_10e28de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e28de0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e28df0; body size 3 bytes.
#line 1 "ENTRY_10e28df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e28df0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e2a960; body size 8 bytes.
#line 1 "ENTRY_10e2a960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e2a960(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e2a970; body size 8 bytes.
#line 1 "ENTRY_10e2a970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e2a970(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e2a980; body size 8 bytes.
#line 1 "ENTRY_10e2a980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e2a980(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e2a990; body size 8 bytes.
#line 1 "ENTRY_10e2a990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e2a990(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e2a9a0; body size 4 bytes.
#line 1 "ENTRY_10e2a9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e2a9a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e2a9b0; body size 4 bytes.
#line 1 "ENTRY_10e2a9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e2a9b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e2a9c0; body size 4 bytes.
#line 1 "ENTRY_10e2a9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e2a9c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e2a9d0; body size 4 bytes.
#line 1 "ENTRY_10e2a9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e2a9d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e2a9e0; body size 7 bytes.
#line 1 "ENTRY_10e2a9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e2a9e0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10e2a9f0; body size 7 bytes.
#line 1 "ENTRY_10e2a9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e2a9f0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10e2aa00; body size 7 bytes.
#line 1 "ENTRY_10e2aa00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e2aa00(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10e2aa10; body size 7 bytes.
#line 1 "ENTRY_10e2aa10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e2aa10(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10e2aa20; body size 26 bytes.
#line 1 "ENTRY_10e2aa20"

__declspec(naked) void FUN_10e2aa20(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10e2aa36
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10e2aa40; body size 26 bytes.
#line 1 "ENTRY_10e2aa40"

__declspec(naked) void FUN_10e2aa40(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10e2aa56
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10e2aa60; body size 26 bytes.
#line 1 "ENTRY_10e2aa60"

__declspec(naked) void FUN_10e2aa60(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10e2aa76
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10e2aa80; body size 26 bytes.
#line 1 "ENTRY_10e2aa80"

__declspec(naked) void FUN_10e2aa80(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10e2aa96
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10e2aaa0; body size 10 bytes.
#line 1 "ENTRY_10e2aaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e2aaa0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10e2aab0; body size 10 bytes.
#line 1 "ENTRY_10e2aab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e2aab0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10e2aac0; body size 10 bytes.
#line 1 "ENTRY_10e2aac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e2aac0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10e2aad0; body size 10 bytes.
#line 1 "ENTRY_10e2aad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e2aad0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10e2f0e0; body size 8 bytes.
#line 1 "ENTRY_10e2f0e0"

__declspec(naked) void FUN_10e2f0e0(void)

{
  __asm add ecx, 0x18
  __asm jmp LAB_100183db
}





// Reference entry 10e2f170; body size 16 bytes.
#line 1 "ENTRY_10e2f170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e2f170(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e2f190; body size 16 bytes.
#line 1 "ENTRY_10e2f190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e2f190(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e2f1b0; body size 16 bytes.
#line 1 "ENTRY_10e2f1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e2f1b0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e2f1d0; body size 16 bytes.
#line 1 "ENTRY_10e2f1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e2f1d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e30000; body size 4 bytes.
#line 1 "ENTRY_10e30000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e30000(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x40));
}


// Reference entry 10e30980; body size 4 bytes.
#line 1 "ENTRY_10e30980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e30980(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e30990; body size 4 bytes.
#line 1 "ENTRY_10e30990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e30990(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e309a0; body size 4 bytes.
#line 1 "ENTRY_10e309a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e309a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e309b0; body size 4 bytes.
#line 1 "ENTRY_10e309b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e309b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e3cad0; body size 3 bytes.
#line 1 "ENTRY_10e3cad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10e3cad0(void)

{
  return (undefined1)(1);
}


// Reference entry 10e3e3d0; body size 16 bytes.
#line 1 "ENTRY_10e3e3d0"

__declspec(naked) undefined4 FUN_10e3e3d0(void)

{
  __asm call LAB_1001c9c2
  __asm mov eax, dword ptr [eax + 0x4c]
  __asm cmp dword ptr [eax + 0x6c], 3
  __asm sete al
  __asm ret
}



// Reference entry 10e3e480; body size 7 bytes.
#line 1 "ENTRY_10e3e480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e3e480(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10e3e490; body size 7 bytes.
#line 1 "ENTRY_10e3e490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e3e490(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10e3e4a0; body size 7 bytes.
#line 1 "ENTRY_10e3e4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e3e4a0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10e3f0d0; body size 3 bytes.
#line 1 "ENTRY_10e3f0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e3f0d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e3f0e0; body size 3 bytes.
#line 1 "ENTRY_10e3f0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e3f0e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e3f0f0; body size 3 bytes.
#line 1 "ENTRY_10e3f0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e3f0f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e3f200; body size 28 bytes.
#line 1 "ENTRY_10e3f200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e3f200(undefined4 *param_1)

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


// Reference entry 10e3f230; body size 28 bytes.
#line 1 "ENTRY_10e3f230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e3f230(undefined4 *param_1)

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


// Reference entry 10e3f260; body size 28 bytes.
#line 1 "ENTRY_10e3f260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e3f260(undefined4 *param_1)

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


// Reference entry 10e3f290; body size 28 bytes.
#line 1 "ENTRY_10e3f290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e3f290(undefined4 *param_1)

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


// Reference entry 10e3f2c0; body size 28 bytes.
#line 1 "ENTRY_10e3f2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e3f2c0(undefined4 *param_1)

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


// Reference entry 10e3f2f0; body size 28 bytes.
#line 1 "ENTRY_10e3f2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e3f2f0(undefined4 *param_1)

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


// Reference entry 10e45dd0; body size 25 bytes.
#line 1 "ENTRY_10e45dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e45dd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e45df0; body size 25 bytes.
#line 1 "ENTRY_10e45df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e45df0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e45e10; body size 3 bytes.
#line 1 "ENTRY_10e45e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e45e10(void)

{
  return;
}


// Reference entry 10e46230; body size 48 bytes.
#line 1 "ENTRY_10e46230"

__declspec(naked) void FUN_10e46230(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp ecx, eax
  __asm je 0x10e46258
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ecx], eax
  __asm test eax, eax
  __asm je 0x10e46258
  __asm add eax, 4
  __asm push eax
  __asm call LAB_10066e8c
  __asm add esp, 4
  __asm add dword ptr [esi + 4], 4
  __asm pop esi
  __asm ret 4
}



// Reference entry 10e46270; body size 39 bytes.
#line 1 "ENTRY_10e46270"

__declspec(naked) void FUN_10e46270(void)

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
  __asm je 0x10e4628e
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [edi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10e462a0; body size 39 bytes.
#line 1 "ENTRY_10e462a0"

__declspec(naked) void FUN_10e462a0(void)

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
  __asm je 0x10e462be
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [edi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10e462d0; body size 39 bytes.
#line 1 "ENTRY_10e462d0"

__declspec(naked) void FUN_10e462d0(void)

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
  __asm je 0x10e462ee
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [edi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10e46500; body size 7 bytes.
#line 1 "ENTRY_10e46500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e46500(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e46510; body size 7 bytes.
#line 1 "ENTRY_10e46510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e46510(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e46520; body size 7 bytes.
#line 1 "ENTRY_10e46520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e46520(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e46530; body size 92 bytes.
#line 1 "ENTRY_10e46530"

__declspec(naked) void FUN_10e46530(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm cmp edi, ebx
  __asm je 0x10e46585
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x18]
  __asm mov eax, dword ptr [edi]
  __asm cmp eax, dword ptr [esi]
  __asm je 0x10e46575
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10e46564
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov dword ptr [esi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10e46575
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add edi, 8
  __asm add esi, 8
  __asm cmp edi, ebx
  __asm jne 0x10e46543
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



// Reference entry 10e465b0; body size 3 bytes.
#line 1 "ENTRY_10e465b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e465b0(void)

{
  return;
}


// Reference entry 10e46690; body size 24 bytes.
#line 1 "ENTRY_10e46690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e46690(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e467a0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10e466b0; body size 5 bytes.
#line 1 "ENTRY_10e466b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e466b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e466c0; body size 5 bytes.
#line 1 "ENTRY_10e466c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e466c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e468e0; body size 5 bytes.
#line 1 "ENTRY_10e468e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e468e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e468f0; body size 5 bytes.
#line 1 "ENTRY_10e468f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e468f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e46900; body size 18 bytes.
#line 1 "ENTRY_10e46900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e46900(int *param_1,int param_2)

{
  *param_1 = (int)(*param_1 + param_2 * 4);
  return;
}


// Reference entry 10e46920; body size 20 bytes.
#line 1 "ENTRY_10e46920"

__declspec(naked) void FUN_10e46920(void)

{
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 0xc]
  __asm push dword ptr [esp + 0xc]
  __asm call LAB_10088136
  __asm ret 8
}



// Reference entry 10e46940; body size 37 bytes.
#line 1 "ENTRY_10e46940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e46940(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  *param_2 = (int)(0);
  if ((int *)(param_2) != (int *)(param_3)) {
    iVar1 = (int)(*param_3);
    *param_2 = (int)(iVar1);
    if (iVar1 != 0) {
      thunk_FUN_1123fce0(iVar1 + 4);
    }
  }
  return;
}


// Reference entry 10e46970; body size 28 bytes.
#line 1 "ENTRY_10e46970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e46970(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10e469a0; body size 28 bytes.
#line 1 "ENTRY_10e469a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e469a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10e469d0; body size 28 bytes.
#line 1 "ENTRY_10e469d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e469d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10e46af0; body size 12 bytes.
#line 1 "ENTRY_10e46af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10e46af0(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 2);
}


// Reference entry 10e46b50; body size 5 bytes.
#line 1 "ENTRY_10e46b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e46b50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e46b60; body size 5 bytes.
#line 1 "ENTRY_10e46b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e46b60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e46b70; body size 5 bytes.
#line 1 "ENTRY_10e46b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e46b70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e46b80; body size 5 bytes.
#line 1 "ENTRY_10e46b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e46b80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e46b90; body size 5 bytes.
#line 1 "ENTRY_10e46b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e46b90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e46ba0; body size 12 bytes.
#line 1 "ENTRY_10e46ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10e46ba0(int param_1,int param_2)

{
  return (int)(param_1 + param_2 * 4);
}


// Reference entry 10e46bb0; body size 49 bytes.
#line 1 "ENTRY_10e46bb0"

__declspec(naked) void FUN_10e46bb0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp esi, eax
  __asm je 0x10e46bda
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi], eax
  __asm test eax, eax
  __asm je 0x10e46bda
  __asm add eax, 4
  __asm push eax
  __asm call LAB_10066e8c
  __asm add esp, 4
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e46d40; body size 26 bytes.
#line 1 "ENTRY_10e46d40"

__declspec(naked) void FUN_10e46d40(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1193d9f0
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e46d60; body size 21 bytes.
#line 1 "ENTRY_10e46d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e46d60(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10e46d80; body size 21 bytes.
#line 1 "ENTRY_10e46d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e46d80(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10e46da0; body size 11 bytes.
#line 1 "ENTRY_10e46da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e46da0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10e46db0; body size 11 bytes.
#line 1 "ENTRY_10e46db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e46db0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10e46dc0; body size 23 bytes.
#line 1 "ENTRY_10e46dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e46dc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e46de0; body size 3 bytes.
#line 1 "ENTRY_10e46de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e46de0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e46eb0; body size 23 bytes.
#line 1 "ENTRY_10e46eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e46eb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e46ed0; body size 43 bytes.
#line 1 "ENTRY_10e46ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10e46ed0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  *param_1 = (int)(0);
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar1 = (int)(*param_2);
    *param_1 = (int)(iVar1);
    if (iVar1 != 0) {
      thunk_FUN_1123fce0(iVar1 + 4);
    }
  }
  return (int *)(param_1);
}


// Reference entry 10e46f10; body size 26 bytes.
#line 1 "ENTRY_10e46f10"

__declspec(naked) void FUN_10e46f10(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1193dd80
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e46f30; body size 26 bytes.
#line 1 "ENTRY_10e46f30"

__declspec(naked) void FUN_10e46f30(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1193dbf8
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e46f50; body size 26 bytes.
#line 1 "ENTRY_10e46f50"

__declspec(naked) void FUN_10e46f50(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1193dec4
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e46f70; body size 144 bytes.
#line 1 "ENTRY_10e46f70"

__declspec(naked) void FUN_10e46f70(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [ecx + 0xc], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_1193e17c
  __asm mov dword ptr [ecx + 0xc], LAB_1193e234
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x30 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x38 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00
  __asm mov dword ptr [ecx + 0x28], LAB_118900d8
  __asm mov dword ptr [ecx + 0x34], LAB_118900e8
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x8c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x90 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e47030; body size 26 bytes.
#line 1 "ENTRY_10e47030"

__declspec(naked) void FUN_10e47030(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1193e874
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e47050; body size 26 bytes.
#line 1 "ENTRY_10e47050"

__declspec(naked) void FUN_10e47050(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1193e6f8
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e47070; body size 26 bytes.
#line 1 "ENTRY_10e47070"

__declspec(naked) void FUN_10e47070(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1193daa8
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e47110; body size 26 bytes.
#line 1 "ENTRY_10e47110"

__declspec(naked) void FUN_10e47110(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1193e4b0
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e47130; body size 26 bytes.
#line 1 "ENTRY_10e47130"

__declspec(naked) void FUN_10e47130(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1193dcc8
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e47150; body size 26 bytes.
#line 1 "ENTRY_10e47150"

__declspec(naked) void FUN_10e47150(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1193e62c
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e47170; body size 26 bytes.
#line 1 "ENTRY_10e47170"

__declspec(naked) void FUN_10e47170(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1193e7b0
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e47190; body size 26 bytes.
#line 1 "ENTRY_10e47190"

__declspec(naked) void FUN_10e47190(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1193e574
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e47390; body size 7 bytes.
#line 1 "ENTRY_10e47390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e47390(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e473a0; body size 7 bytes.
#line 1 "ENTRY_10e473a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e473a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e473b0; body size 7 bytes.
#line 1 "ENTRY_10e473b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e473b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e474e0; body size 7 bytes.
#line 1 "ENTRY_10e474e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e474e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e474f0; body size 7 bytes.
#line 1 "ENTRY_10e474f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e474f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e47500; body size 7 bytes.
#line 1 "ENTRY_10e47500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e47500(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e475c0; body size 7 bytes.
#line 1 "ENTRY_10e475c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e475c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e475d0; body size 7 bytes.
#line 1 "ENTRY_10e475d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e475d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e475e0; body size 7 bytes.
#line 1 "ENTRY_10e475e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e475e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e475f0; body size 7 bytes.
#line 1 "ENTRY_10e475f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e475f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e47600; body size 7 bytes.
#line 1 "ENTRY_10e47600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e47600(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e47610; body size 39 bytes.
#line 1 "ENTRY_10e47610"

__declspec(naked) void FUN_10e47610(void)

{
  __asm mov dword ptr [ecx], LAB_1193d6f4
  __asm mov dword ptr [ecx + 8], LAB_1193d938
  __asm mov dword ptr [ecx + 0x28], LAB_1193d948
  __asm mov dword ptr [ecx + 0x48], LAB_1193d954
  __asm mov dword ptr [ecx + 0x4c], LAB_1193d964
  __asm jmp LAB_10088622
}



// Reference entry 10e476a0; body size 65 bytes.
#line 1 "ENTRY_10e476a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10e476a0(int *param_2)
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


// Reference entry 10e47700; body size 31 bytes.
#line 1 "ENTRY_10e47700"

__declspec(naked) void FUN_10e47700(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm cmp esi, eax
  __asm je 0x10e47719
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [eax + 4]
  __asm push dword ptr [eax]
  __asm call LAB_10088136
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10e47790; body size 5 bytes.
#line 1 "ENTRY_10e47790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e47790(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e47800; body size 14 bytes.
#line 1 "ENTRY_10e47800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10e47800(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10e47820; body size 14 bytes.
#line 1 "ENTRY_10e47820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10e47820(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10e47840; body size 22 bytes.
#line 1 "ENTRY_10e47840"

__declspec(naked) void FUN_10e47840(void)

{
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm call LAB_100110c7
  __asm add esp, 8
  __asm test al, al
  __asm sete al
  __asm ret
}



// Reference entry 10e47860; body size 3 bytes.
#line 1 "ENTRY_10e47860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e47860(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e47870; body size 3 bytes.
#line 1 "ENTRY_10e47870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e47870(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e47880; body size 6 bytes.
#line 1 "ENTRY_10e47880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10e47880(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 10e47890; body size 16 bytes.
#line 1 "ENTRY_10e47890"

__declspec(naked) void FUN_10e47890(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [ecx]
  __asm mov dword ptr [eax], edx
  __asm add edx, 8
  __asm mov dword ptr [ecx], edx
  __asm ret 8
}



// Reference entry 10e478b0; body size 6 bytes.
#line 1 "ENTRY_10e478b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10e478b0(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 10e48020; body size 129 bytes.
#line 1 "ENTRY_10e48020"

__declspec(naked) void FUN_10e48020(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm cmp esi, 0x3fffffff
  __asm ja 0x10e4809c
  __asm shl esi, 2
  __asm cmp esi, 0x1000
  __asm jb 0x10e4806f
  __asm lea eax, [esi + 0x23]
  __asm cmp eax, esi
  __asm jbe 0x10e4809c
  __asm push eax
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10e48069
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm mov dword ptr [edi], eax
  __asm mov dword ptr [edi + 4], eax
  __asm add eax, esi
  __asm mov dword ptr [edi + 8], eax
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test esi, esi
  __asm je 0x10e4808b
  __asm push esi
  __asm call LAB_10024f14
  __asm mov dword ptr [edi], eax
  __asm add esp, 4
  __asm mov dword ptr [edi + 4], eax
  __asm add eax, esi
  __asm mov dword ptr [edi + 8], eax
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm xor eax, eax
  __asm mov dword ptr [edi], eax
  __asm mov dword ptr [edi + 4], eax
  __asm mov eax, esi
  __asm mov dword ptr [edi + 8], eax
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10e480d0; body size 30 bytes.
#line 1 "ENTRY_10e480d0"

__declspec(naked) void FUN_10e480d0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm push esi
  __asm mov edi, ecx
  __asm call LAB_1001793b
  __asm mov dword ptr [edi], eax
  __asm mov dword ptr [edi + 4], eax
  __asm lea eax, [eax + esi*8]
  __asm mov dword ptr [edi + 8], eax
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10e48100; body size 49 bytes.
#line 1 "ENTRY_10e48100"

__declspec(naked) void FUN_10e48100(void)

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
  __asm jbe 0x10e48121
  __asm mov eax, 0x3fffffff
  __asm pop esi
  __asm ret 4
  __asm lea eax, [esi + edx]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10e48140; body size 49 bytes.
#line 1 "ENTRY_10e48140"

__declspec(naked) void FUN_10e48140(void)

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
  __asm jbe 0x10e48161
  __asm mov eax, 0x1fffffff
  __asm pop esi
  __asm ret 4
  __asm lea eax, [esi + edx]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10e48210; body size 277 bytes.
#line 1 "ENTRY_10e48210"

__declspec(naked) void FUN_10e48210(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm cmp ebx, 0x3fffffff
  __asm ja LAB_10e48320
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
  __asm jbe 0x10e48246
  __asm mov edi, 0x3fffffff
  __asm jmp 0x10e4824e
  __asm lea edi, [edx + ecx]
  __asm cmp edi, ebx
  __asm cmovb edi, ebx
  __asm test ebp, ebp
  __asm je 0x10e482a1
  __asm push esi
  __asm push dword ptr [esi + 4]
  __asm push ebp
  __asm call LAB_1006c92c
  __asm mov ecx, dword ptr [esi + 8]
  __asm add esp, 0xc
  __asm mov eax, dword ptr [esi]
  __asm sub ecx, eax
  __asm and ecx, 0xfffffffc
  __asm cmp ecx, 0x1000
  __asm jb 0x10e48283
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10e482e4
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp edi, 0x3fffffff
  __asm ja 0x10e4831b
  __asm shl edi, 2
  __asm cmp edi, 0x1000
  __asm jb 0x10e482ea
  __asm lea eax, [edi + 0x23]
  __asm cmp eax, edi
  __asm jbe 0x10e4831b
  __asm push eax
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10e482e4
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm mov dword ptr [esi], eax
  __asm mov dword ptr [esi + 4], eax
  __asm add eax, edi
  __asm pop edi
  __asm pop ebp
  __asm mov dword ptr [esi + 8], eax
  __asm pop esi
  __asm pop ebx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test edi, edi
  __asm je 0x10e48308
  __asm push edi
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi], eax
  __asm mov dword ptr [esi + 4], eax
  __asm add eax, edi
  __asm mov dword ptr [esi + 8], eax
  __asm pop edi
  __asm pop ebp
  __asm pop esi
  __asm pop ebx
  __asm ret 4
  __asm xor eax, eax
  __asm mov dword ptr [esi], eax
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, edi
  __asm pop edi
  __asm pop ebp
  __asm mov dword ptr [esi + 8], eax
  __asm pop esi
  __asm pop ebx
  __asm ret 4
  __asm call LAB_10070f3b
  __asm call LAB_1007ef19
}



// Reference entry 10e48370; body size 3 bytes.
#line 1 "ENTRY_10e48370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e48370(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10e48380; body size 21 bytes.
#line 1 "ENTRY_10e48380"

__declspec(naked) void FUN_10e48380(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push dword ptr [esp + 4]
  __asm push dword ptr [eax + 4]
  __asm push dword ptr [eax]
  __asm call LAB_10088136
  __asm ret 8
}



// Reference entry 10e483e0; body size 3 bytes.
#line 1 "ENTRY_10e483e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e483e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e483f0; body size 3 bytes.
#line 1 "ENTRY_10e483f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e483f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e48400; body size 3 bytes.
#line 1 "ENTRY_10e48400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e48400(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e48410; body size 3 bytes.
#line 1 "ENTRY_10e48410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e48410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e48420; body size 3 bytes.
#line 1 "ENTRY_10e48420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e48420(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e48430; body size 3 bytes.
#line 1 "ENTRY_10e48430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e48430(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e48440; body size 3 bytes.
#line 1 "ENTRY_10e48440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e48440(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e48450; body size 3 bytes.
#line 1 "ENTRY_10e48450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e48450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e48460; body size 3 bytes.
#line 1 "ENTRY_10e48460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e48460(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10e48470; body size 6 bytes.
#line 1 "ENTRY_10e48470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e48470(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10e48480; body size 6 bytes.
#line 1 "ENTRY_10e48480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e48480(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10e485b0; body size 24 bytes.
#line 1 "ENTRY_10e485b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e485b0(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e467a0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10e485d0; body size 24 bytes.
#line 1 "ENTRY_10e485d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e485d0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e467a0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10e48b70; body size 11 bytes.
#line 1 "ENTRY_10e48b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e48b70(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10e48d10; body size 9 bytes.
#line 1 "ENTRY_10e48d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e48d10(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10e48d20; body size 9 bytes.
#line 1 "ENTRY_10e48d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e48d20(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10e4a8b0; body size 12 bytes.
#line 1 "ENTRY_10e4a8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e4a8b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10e4dda0; body size 3 bytes.
#line 1 "ENTRY_10e4dda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10e4dda0(void)

{
  return (undefined1)(1);
}


// Reference entry 10e4e460; body size 6 bytes.
#line 1 "ENTRY_10e4e460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e4e460(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10e4e470; body size 6 bytes.
#line 1 "ENTRY_10e4e470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e4e470(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10e4e480; body size 6 bytes.
#line 1 "ENTRY_10e4e480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e4e480(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10e4e490; body size 6 bytes.
#line 1 "ENTRY_10e4e490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e4e490(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10e4f810; body size 5 bytes.
#line 1 "ENTRY_10e4f810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e4f810(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e4fb10; body size 9 bytes.
#line 1 "ENTRY_10e4fb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e4fb10(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 10e50bd0; body size 26 bytes.
#line 1 "ENTRY_10e50bd0"

__declspec(naked) void FUN_10e50bd0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1193ec58
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e50d00; body size 26 bytes.
#line 1 "ENTRY_10e50d00"

__declspec(naked) void FUN_10e50d00(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1193f6c0
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e50da0; body size 30 bytes.
#line 1 "ENTRY_10e50da0"

__declspec(naked) void FUN_10e50da0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1193f4f8
  __asm mov byte ptr [ecx + 0xc], 0
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e50dd0; body size 165 bytes.
#line 1 "ENTRY_10e50dd0"

__declspec(naked) void FUN_10e50dd0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [ecx + 0xc], LAB_11885d88
  __asm mov dword ptr [ecx + 0x10], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_1193f7dc
  __asm mov dword ptr [ecx + 0xc], LAB_1193f894
  __asm mov dword ptr [ecx + 0x10], LAB_1193f908
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x34 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x38 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0x30], LAB_118900d8
  __asm mov dword ptr [ecx + 0x3c], LAB_118900e8
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x6c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x94 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x98 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e50ea0; body size 26 bytes.
#line 1 "ENTRY_10e50ea0"

__declspec(naked) void FUN_10e50ea0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1193f948
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e50ec0; body size 26 bytes.
#line 1 "ENTRY_10e50ec0"

__declspec(naked) void FUN_10e50ec0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1193f5dc
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e50ee0; body size 134 bytes.
#line 1 "ENTRY_10e50ee0"

__declspec(naked) void FUN_10e50ee0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [ecx + 0xc], LAB_11885d88
  __asm mov dword ptr [ecx + 0x10], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_1193fa2c
  __asm mov dword ptr [ecx + 0xc], LAB_1193fae4
  __asm mov dword ptr [ecx + 0x10], LAB_1193fb58
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0x20], LAB_118900d8
  __asm mov dword ptr [ecx + 0x2c], LAB_118900e8
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e50f90; body size 26 bytes.
#line 1 "ENTRY_10e50f90"

__declspec(naked) void FUN_10e50f90(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1193f418
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e50fb0; body size 26 bytes.
#line 1 "ENTRY_10e50fb0"

__declspec(naked) void FUN_10e50fb0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1193ed10
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e50fd0; body size 26 bytes.
#line 1 "ENTRY_10e50fd0"

__declspec(naked) void FUN_10e50fd0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1193ede8
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e513e0; body size 7 bytes.
#line 1 "ENTRY_10e513e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e513e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e514a0; body size 7 bytes.
#line 1 "ENTRY_10e514a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e514a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e51570; body size 7 bytes.
#line 1 "ENTRY_10e51570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e51570(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e51580; body size 7 bytes.
#line 1 "ENTRY_10e51580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e51580(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e51640; body size 7 bytes.
#line 1 "ENTRY_10e51640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e51640(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e51650; body size 7 bytes.
#line 1 "ENTRY_10e51650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e51650(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e51660; body size 7 bytes.
#line 1 "ENTRY_10e51660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e51660(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e51720; body size 39 bytes.
#line 1 "ENTRY_10e51720"

__declspec(naked) void FUN_10e51720(void)

{
  __asm mov dword ptr [ecx], LAB_1193e968
  __asm mov dword ptr [ecx + 8], LAB_1193eb9c
  __asm mov dword ptr [ecx + 0x28], LAB_1193ebac
  __asm mov dword ptr [ecx + 0x48], LAB_1193ebb8
  __asm mov dword ptr [ecx + 0x4c], LAB_1193ebc8
  __asm jmp LAB_10088622
}



// Reference entry 10e5a2e0; body size 18 bytes.
#line 1 "ENTRY_10e5a2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5a2e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e5a300; body size 25 bytes.
#line 1 "ENTRY_10e5a300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5a300(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e5a320; body size 32 bytes.
#line 1 "ENTRY_10e5a320"

__declspec(naked) void FUN_10e5a320(void)

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



// Reference entry 10e5a350; body size 22 bytes.
#line 1 "ENTRY_10e5a350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e5a350(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10e5a370; body size 18 bytes.
#line 1 "ENTRY_10e5a370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5a370(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e5a450; body size 22 bytes.
#line 1 "ENTRY_10e5a450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e5a450(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10e5a470; body size 34 bytes.
#line 1 "ENTRY_10e5a470"

__declspec(naked) void FUN_10e5a470(void)

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



// Reference entry 10e5a4a0; body size 91 bytes.
#line 1 "ENTRY_10e5a4a0"

__declspec(naked) void FUN_10e5a4a0(void)

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
  __asm je 0x10e5a4d6
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10e5a4ed
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



// Reference entry 10e5a520; body size 83 bytes.
#line 1 "ENTRY_10e5a520"

__declspec(naked) void FUN_10e5a520(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm cmp edi, dword ptr [esi]
  __asm je 0x10e5a56c
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10e5a547
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10e5a565
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



// Reference entry 10e5a590; body size 25 bytes.
#line 1 "ENTRY_10e5a590"

__declspec(naked) void FUN_10e5a590(void)

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



// Reference entry 10e5a5b0; body size 13 bytes.
#line 1 "ENTRY_10e5a5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e5a5b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10e5a5c0; body size 13 bytes.
#line 1 "ENTRY_10e5a5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e5a5c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10e5a5d0; body size 3 bytes.
#line 1 "ENTRY_10e5a5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e5a5d0(void)

{
  return;
}


// Reference entry 10e5ad50; body size 15 bytes.
#line 1 "ENTRY_10e5ad50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e5ad50(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10e5adf0; body size 7 bytes.
#line 1 "ENTRY_10e5adf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5adf0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e5ae00; body size 5 bytes.
#line 1 "ENTRY_10e5ae00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5ae00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e5ae10; body size 31 bytes.
#line 1 "ENTRY_10e5ae10"

__declspec(naked) void FUN_10e5ae10(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm jne 0x10e5ae2a
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm cmp eax, dword ptr [ecx + 0x10]
  __asm jb 0x10e5ae2a
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10e5af60; body size 5 bytes.
#line 1 "ENTRY_10e5af60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5af60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e5b110; body size 5 bytes.
#line 1 "ENTRY_10e5b110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e5b120; body size 5 bytes.
#line 1 "ENTRY_10e5b120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e5b130; body size 5 bytes.
#line 1 "ENTRY_10e5b130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b130(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e5b140; body size 5 bytes.
#line 1 "ENTRY_10e5b140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b140(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e5b150; body size 5 bytes.
#line 1 "ENTRY_10e5b150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b150(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e5b160; body size 130 bytes.
#line 1 "ENTRY_10e5b160"

__declspec(naked) void FUN_10e5b160(void)

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
  __asm je 0x10e5b196
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi + 4], edi
  __asm test edi, edi
  __asm je 0x10e5b1bf
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm test ecx, ecx
  __asm je 0x10e5b1c6
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



// Reference entry 10e5b210; body size 130 bytes.
#line 1 "ENTRY_10e5b210"

__declspec(naked) void FUN_10e5b210(void)

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
  __asm je 0x10e5b246
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi + 4], edi
  __asm test edi, edi
  __asm je 0x10e5b26f
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm test ecx, ecx
  __asm je 0x10e5b276
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



// Reference entry 10e5b2c0; body size 130 bytes.
#line 1 "ENTRY_10e5b2c0"

__declspec(naked) void FUN_10e5b2c0(void)

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
  __asm je 0x10e5b2f6
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi + 4], edi
  __asm test edi, edi
  __asm je 0x10e5b31f
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm test ecx, ecx
  __asm je 0x10e5b326
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



// Reference entry 10e5b420; body size 130 bytes.
#line 1 "ENTRY_10e5b420"

__declspec(naked) void FUN_10e5b420(void)

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
  __asm je 0x10e5b456
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi + 4], edi
  __asm test edi, edi
  __asm je 0x10e5b47f
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm test ecx, ecx
  __asm je 0x10e5b486
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



// Reference entry 10e5b580; body size 29 bytes.
#line 1 "ENTRY_10e5b580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e5b580(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10e5b8f0; body size 15 bytes.
#line 1 "ENTRY_10e5b8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b8f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10e5b910; body size 15 bytes.
#line 1 "ENTRY_10e5b910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b910(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10e5b930; body size 5 bytes.
#line 1 "ENTRY_10e5b930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e5b940; body size 5 bytes.
#line 1 "ENTRY_10e5b940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b940(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e5b950; body size 5 bytes.
#line 1 "ENTRY_10e5b950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b950(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e5b960; body size 5 bytes.
#line 1 "ENTRY_10e5b960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e5b970; body size 5 bytes.
#line 1 "ENTRY_10e5b970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e5b980; body size 5 bytes.
#line 1 "ENTRY_10e5b980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b980(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e5b990; body size 5 bytes.
#line 1 "ENTRY_10e5b990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b990(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e5b9a0; body size 5 bytes.
#line 1 "ENTRY_10e5b9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b9a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e5b9b0; body size 5 bytes.
#line 1 "ENTRY_10e5b9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b9b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e5b9c0; body size 5 bytes.
#line 1 "ENTRY_10e5b9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b9c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e5b9d0; body size 5 bytes.
#line 1 "ENTRY_10e5b9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b9d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e5b9e0; body size 6 bytes.
#line 1 "ENTRY_10e5b9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10e5b9e0(void)

{
  return (char *)("SCIVSResponseListener");
}


// Reference entry 10e5b9f0; body size 5 bytes.
#line 1 "ENTRY_10e5b9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b9f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e5bb50; body size 27 bytes.
#line 1 "ENTRY_10e5bb50"

__declspec(naked) void FUN_10e5bb50(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11940354
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 10e5bb80; body size 70 bytes.
#line 1 "ENTRY_10e5bb80"

__declspec(naked) void FUN_10e5bb80(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0xc], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_11940428
  __asm mov dword ptr [ecx + 0xc], LAB_11940438
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}



// Reference entry 10e5bbe0; body size 70 bytes.
#line 1 "ENTRY_10e5bbe0"

__declspec(naked) void FUN_10e5bbe0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0xc], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_119403e0
  __asm mov dword ptr [ecx + 0xc], LAB_119403f0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}



// Reference entry 10e5bc40; body size 70 bytes.
#line 1 "ENTRY_10e5bc40"

__declspec(naked) void FUN_10e5bc40(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0xc], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_11940404
  __asm mov dword ptr [ecx + 0xc], LAB_11940414
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}



// Reference entry 10e5bca0; body size 70 bytes.
#line 1 "ENTRY_10e5bca0"

__declspec(naked) void FUN_10e5bca0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0xc], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_1194111c
  __asm mov dword ptr [ecx + 0xc], LAB_1194112c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}



// Reference entry 10e5bd00; body size 70 bytes.
#line 1 "ENTRY_10e5bd00"

__declspec(naked) void FUN_10e5bd00(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0xc], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_1193fda0
  __asm mov dword ptr [ecx + 0xc], LAB_1193fdb0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}



// Reference entry 10e5bd60; body size 32 bytes.
#line 1 "ENTRY_10e5bd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e5bd60(undefined4 *param_2)
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


// Reference entry 10e5bd90; body size 16 bytes.
#line 1 "ENTRY_10e5bd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5bd90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e5beb0; body size 16 bytes.
#line 1 "ENTRY_10e5beb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5beb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e5bed0; body size 127 bytes.
#line 1 "ENTRY_10e5bed0"

__declspec(naked) void FUN_10e5bed0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [ecx + 0xc], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0x18], eax
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_119419dc
  __asm mov dword ptr [ecx + 0xc], LAB_11941a94
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0x20], LAB_1193fda0
  __asm mov dword ptr [ecx + 0x2c], LAB_1193fdb0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov byte ptr [ecx + 0x88], 0
  __asm pop ecx
  __asm ret 8
}



// Reference entry 10e5bf70; body size 26 bytes.
#line 1 "ENTRY_10e5bf70"

__declspec(naked) void FUN_10e5bf70(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_119400dc
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e5bf90; body size 18 bytes.
#line 1 "ENTRY_10e5bf90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e5bf90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e5bfb0; body size 10 bytes.
#line 1 "ENTRY_10e5bfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5bfb0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e5bfc0; body size 10 bytes.
#line 1 "ENTRY_10e5bfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5bfc0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e5bfd0; body size 10 bytes.
#line 1 "ENTRY_10e5bfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5bfd0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e5bfe0; body size 10 bytes.
#line 1 "ENTRY_10e5bfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5bfe0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e5bff0; body size 10 bytes.
#line 1 "ENTRY_10e5bff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5bff0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e5c040; body size 11 bytes.
#line 1 "ENTRY_10e5c040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e5c040(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10e5c050; body size 11 bytes.
#line 1 "ENTRY_10e5c050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e5c050(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10e5c0e0; body size 11 bytes.
#line 1 "ENTRY_10e5c0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e5c0e0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10e5c0f0; body size 16 bytes.
#line 1 "ENTRY_10e5c0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5c0f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e5c110; body size 21 bytes.
#line 1 "ENTRY_10e5c110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e5c110(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10e5c130; body size 23 bytes.
#line 1 "ENTRY_10e5c130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5c130(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e5c150; body size 3 bytes.
#line 1 "ENTRY_10e5c150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e5c150(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e5c160; body size 3 bytes.
#line 1 "ENTRY_10e5c160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e5c160(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e5c170; body size 12 bytes.
#line 1 "ENTRY_10e5c170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5c170(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e5c200; body size 12 bytes.
#line 1 "ENTRY_10e5c200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5c200(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e5c290; body size 12 bytes.
#line 1 "ENTRY_10e5c290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5c290(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e5c320; body size 12 bytes.
#line 1 "ENTRY_10e5c320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5c320(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e5c3b0; body size 12 bytes.
#line 1 "ENTRY_10e5c3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5c3b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e5c440; body size 52 bytes.
#line 1 "ENTRY_10e5c440"

__declspec(naked) void FUN_10e5c440(void)

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



// Reference entry 10e5c490; body size 23 bytes.
#line 1 "ENTRY_10e5c490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5c490(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e5c4b0; body size 37 bytes.
#line 1 "ENTRY_10e5c4b0"

__declspec(naked) void FUN_10e5c4b0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1002e44c
  __asm mov dword ptr [esi], LAB_119429f0
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0xc], LAB_11942aa8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e5c720; body size 26 bytes.
#line 1 "ENTRY_10e5c720"

__declspec(naked) void FUN_10e5c720(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11941f9c
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e5c820; body size 30 bytes.
#line 1 "ENTRY_10e5c820"

__declspec(naked) void FUN_10e5c820(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11941750
  __asm mov byte ptr [ecx + 0xc], 0
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e5c850; body size 127 bytes.
#line 1 "ENTRY_10e5c850"

__declspec(naked) void FUN_10e5c850(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [ecx + 0xc], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x18 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00
  __asm mov dword ptr [ecx + 0x20], LAB_1193fda0
  __asm mov dword ptr [ecx + 0x2c], LAB_1193fdb0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov byte ptr [ecx + 0x88], 0
  __asm mov dword ptr [ecx], LAB_11941aa8
  __asm mov dword ptr [ecx + 0xc], LAB_11941b60
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e5ca00; body size 26 bytes.
#line 1 "ENTRY_10e5ca00"

__declspec(naked) void FUN_10e5ca00(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11942074
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e5cf80; body size 127 bytes.
#line 1 "ENTRY_10e5cf80"

__declspec(naked) void FUN_10e5cf80(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [ecx + 0xc], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x18 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00
  __asm mov dword ptr [ecx + 0x20], LAB_1193fda0
  __asm mov dword ptr [ecx + 0x2c], LAB_1193fdb0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov byte ptr [ecx + 0x88], 0
  __asm mov dword ptr [ecx], LAB_11941dc0
  __asm mov dword ptr [ecx + 0xc], LAB_11941e78
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e5d020; body size 26 bytes.
#line 1 "ENTRY_10e5d020"

__declspec(naked) void FUN_10e5d020(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11941678
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e5d040; body size 26 bytes.
#line 1 "ENTRY_10e5d040"

__declspec(naked) void FUN_10e5d040(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11941eb4
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e5d060; body size 197 bytes.
#line 1 "ENTRY_10e5d060"

__declspec(naked) void FUN_10e5d060(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [ecx + 0xc], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_11941140
  __asm mov dword ptr [ecx + 0xc], LAB_119411f8
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0x18], LAB_1194111c
  __asm mov dword ptr [ecx + 0x24], LAB_1194112c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x7c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81
  __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x88 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x90 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x94 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0x80], LAB_1193fda0
  __asm mov dword ptr [ecx + 0x8c], LAB_1193fdb0
  __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xbc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov byte ptr [ecx + 0xe8], 0
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e5d340; body size 26 bytes.
#line 1 "ENTRY_10e5d340"

__declspec(naked) void FUN_10e5d340(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11941000
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e5d3e0; body size 26 bytes.
#line 1 "ENTRY_10e5d3e0"

__declspec(naked) void FUN_10e5d3e0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1194152c
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e5d400; body size 127 bytes.
#line 1 "ENTRY_10e5d400"

__declspec(naked) void FUN_10e5d400(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [ecx + 0xc], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x18 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00
  __asm mov dword ptr [ecx + 0x20], LAB_1193fda0
  __asm mov dword ptr [ecx + 0x2c], LAB_1193fdb0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov byte ptr [ecx + 0x88], 0
  __asm mov dword ptr [ecx], LAB_11941cb8
  __asm mov dword ptr [ecx + 0xc], LAB_11941d70
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e5d750; body size 26 bytes.
#line 1 "ENTRY_10e5d750"

__declspec(naked) void FUN_10e5d750(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11940194
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e5d770; body size 127 bytes.
#line 1 "ENTRY_10e5d770"

__declspec(naked) void FUN_10e5d770(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [ecx + 0xc], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x18 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00
  __asm mov dword ptr [ecx + 0x20], LAB_1193fda0
  __asm mov dword ptr [ecx + 0x2c], LAB_1193fdb0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov byte ptr [ecx + 0x88], 0
  __asm mov dword ptr [ecx], LAB_11941bac
  __asm mov dword ptr [ecx + 0xc], LAB_11941c64
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e5d810; body size 30 bytes.
#line 1 "ENTRY_10e5d810"

__declspec(naked) void FUN_10e5d810(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11942d84
  __asm mov byte ptr [ecx + 0xc], 0
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e5d840; body size 9 bytes.
#line 1 "ENTRY_10e5d840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5d840(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIVSResponseListener);
  return (undefined4 *)(param_1);
}


// Reference entry 10e5d850; body size 28 bytes.
#line 1 "ENTRY_10e5d850"

__declspec(naked) void FUN_10e5d850(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}



// Reference entry 10e5d880; body size 77 bytes.
#line 1 "ENTRY_10e5d880"

__declspec(naked) void FUN_10e5d880(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_11940354
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], LAB_11881130
  __asm mov dword ptr [ecx + 0xc], eax
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_11940384
  __asm mov dword ptr [ecx + 8], LAB_119403b0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e5d8e0; body size 9 bytes.
#line 1 "ENTRY_10e5d8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5d8e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCVoiceResponseHandler_VoiceResponseDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 10e5da10; body size 28 bytes.
#line 1 "ENTRY_10e5da10"

__declspec(naked) void FUN_10e5da10(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}



// Reference entry 10e5db50; body size 19 bytes.
#line 1 "ENTRY_10e5db50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5db50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10e5e4e0; body size 19 bytes.
#line 1 "ENTRY_10e5e4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5e4e0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10e5e750; body size 18 bytes.
#line 1 "ENTRY_10e5e750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5e750(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthChecklistDownloadAlexaState);
  pa_1[3] = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthChecklistDownloadAlexaState);
  FUN_10068ce6<>();
  return;
}


// Reference entry 10e5e930; body size 7 bytes.
#line 1 "ENTRY_10e5e930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5e930(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e5ea00; body size 7 bytes.
#line 1 "ENTRY_10e5ea00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5ea00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e5eab0; body size 7 bytes.
#line 1 "ENTRY_10e5eab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5eab0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e5eac0; body size 7 bytes.
#line 1 "ENTRY_10e5eac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5eac0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e5ee60; body size 7 bytes.
#line 1 "ENTRY_10e5ee60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5ee60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e5ee70; body size 7 bytes.
#line 1 "ENTRY_10e5ee70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5ee70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e5f020; body size 7 bytes.
#line 1 "ENTRY_10e5f020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5f020(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e5f0e0; body size 7 bytes.
#line 1 "ENTRY_10e5f0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5f0e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e5f370; body size 7 bytes.
#line 1 "ENTRY_10e5f370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5f370(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e5f380; body size 7 bytes.
#line 1 "ENTRY_10e5f380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5f380(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10e5f570; body size 65 bytes.
#line 1 "ENTRY_10e5f570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10e5f570(int *param_2)
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


// Reference entry 10e5f810; body size 14 bytes.
#line 1 "ENTRY_10e5f810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10e5f810(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10e5f830; body size 14 bytes.
#line 1 "ENTRY_10e5f830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10e5f830(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10e5f940; body size 15 bytes.
#line 1 "ENTRY_10e5f940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10e5f940(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0xc);
}


// Reference entry 10e5f960; body size 3 bytes.
#line 1 "ENTRY_10e5f960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e5f960(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e5f970; body size 7 bytes.
#line 1 "ENTRY_10e5f970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e5f970(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10e5f980; body size 8 bytes.
#line 1 "ENTRY_10e5f980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e5f980(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e5f990; body size 8 bytes.
#line 1 "ENTRY_10e5f990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e5f990(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e5f9a0; body size 8 bytes.
#line 1 "ENTRY_10e5f9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e5f9a0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e5f9b0; body size 8 bytes.
#line 1 "ENTRY_10e5f9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e5f9b0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e5f9c0; body size 8 bytes.
#line 1 "ENTRY_10e5f9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e5f9c0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e5f9d0; body size 4 bytes.
#line 1 "ENTRY_10e5f9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e5f9d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e5f9e0; body size 4 bytes.
#line 1 "ENTRY_10e5f9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e5f9e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e5f9f0; body size 4 bytes.
#line 1 "ENTRY_10e5f9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e5f9f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e5fa00; body size 4 bytes.
#line 1 "ENTRY_10e5fa00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e5fa00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e5fa10; body size 4 bytes.
#line 1 "ENTRY_10e5fa10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e5fa10(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e5fa20; body size 3 bytes.
#line 1 "ENTRY_10e5fa20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e5fa20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e5fa30; body size 3 bytes.
#line 1 "ENTRY_10e5fa30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e5fa30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e5fa40; body size 6 bytes.
#line 1 "ENTRY_10e5fa40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5fa40(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10e5fa50; body size 6 bytes.
#line 1 "ENTRY_10e5fa50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5fa50(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10e5fa60; body size 6 bytes.
#line 1 "ENTRY_10e5fa60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5fa60(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10e610a0; body size 31 bytes.
#line 1 "ENTRY_10e610a0"

__declspec(naked) void FUN_10e610a0(void)

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



// Reference entry 10e610f0; body size 62 bytes.
#line 1 "ENTRY_10e610f0"

__declspec(naked) void FUN_10e610f0(void)

{
  __asm mov edx, dword ptr [ecx + 8]
  __asm mov eax, 0x2aaaaaab
  __asm sub edx, dword ptr [ecx]
  __asm mov ecx, 0x15555555
  __asm imul edx
  __asm push esi
  __asm _emit 0xd1 __asm _emit 0xfa
  __asm mov esi, edx
  __asm shr esi, 0x1f
  __asm add esi, edx
  __asm mov edx, esi
  __asm _emit 0xd1 __asm _emit 0xea
  __asm sub ecx, edx
  __asm cmp esi, ecx
  __asm jbe 0x10e6111e
  __asm mov eax, 0x15555555
  __asm pop esi
  __asm ret 4
  __asm lea eax, [edx + esi]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10e611f0; body size 14 bytes.
#line 1 "ENTRY_10e611f0"

__declspec(naked) void FUN_10e611f0(void)

{
  __asm cmp dword ptr [ecx + 4], 0x9249249
  __asm je LAB_1000d4ae
  __asm ret
}



// Reference entry 10e61230; body size 8 bytes.
#line 1 "ENTRY_10e61230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e61230(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e61240; body size 8 bytes.
#line 1 "ENTRY_10e61240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e61240(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e61250; body size 8 bytes.
#line 1 "ENTRY_10e61250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e61250(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e61260; body size 8 bytes.
#line 1 "ENTRY_10e61260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e61260(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e61270; body size 8 bytes.
#line 1 "ENTRY_10e61270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e61270(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e61690; body size 3 bytes.
#line 1 "ENTRY_10e61690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e61690(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e616a0; body size 3 bytes.
#line 1 "ENTRY_10e616a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e616a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e616b0; body size 3 bytes.
#line 1 "ENTRY_10e616b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e616b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e616c0; body size 3 bytes.
#line 1 "ENTRY_10e616c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e616c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e616d0; body size 3 bytes.
#line 1 "ENTRY_10e616d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e616d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e616e0; body size 3 bytes.
#line 1 "ENTRY_10e616e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e616e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e616f0; body size 3 bytes.
#line 1 "ENTRY_10e616f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e616f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e61700; body size 3 bytes.
#line 1 "ENTRY_10e61700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e61700(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e61710; body size 3 bytes.
#line 1 "ENTRY_10e61710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e61710(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e61720; body size 3 bytes.
#line 1 "ENTRY_10e61720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e61720(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e61730; body size 3 bytes.
#line 1 "ENTRY_10e61730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e61730(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e61740; body size 3 bytes.
#line 1 "ENTRY_10e61740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e61740(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e61750; body size 4 bytes.
#line 1 "ENTRY_10e61750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e61750(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e61760; body size 4 bytes.
#line 1 "ENTRY_10e61760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e61760(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e61770; body size 4 bytes.
#line 1 "ENTRY_10e61770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e61770(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e61780; body size 4 bytes.
#line 1 "ENTRY_10e61780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e61780(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e61790; body size 4 bytes.
#line 1 "ENTRY_10e61790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e61790(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e61a30; body size 7 bytes.
#line 1 "ENTRY_10e61a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e61a30(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10e61a40; body size 7 bytes.
#line 1 "ENTRY_10e61a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e61a40(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10e61a50; body size 7 bytes.
#line 1 "ENTRY_10e61a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e61a50(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10e61a60; body size 7 bytes.
#line 1 "ENTRY_10e61a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e61a60(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10e61a70; body size 7 bytes.
#line 1 "ENTRY_10e61a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e61a70(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10e61af0; body size 30 bytes.
#line 1 "ENTRY_10e61af0"

__declspec(naked) void FUN_10e61af0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10e61b0b
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov ecx, eax
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x10e61b00
  __asm mov eax, ecx
  __asm ret
}



// Reference entry 10e61b50; body size 3 bytes.
#line 1 "ENTRY_10e61b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e61b50(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10e61b60; body size 3 bytes.
#line 1 "ENTRY_10e61b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e61b60(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10e61b70; body size 11 bytes.
#line 1 "ENTRY_10e61b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e61b70(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e61b80; body size 6 bytes.
#line 1 "ENTRY_10e61b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e61b80(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10e61b90; body size 26 bytes.
#line 1 "ENTRY_10e61b90"

__declspec(naked) void FUN_10e61b90(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10e61ba6
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10e61bb0; body size 26 bytes.
#line 1 "ENTRY_10e61bb0"

__declspec(naked) void FUN_10e61bb0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10e61bc6
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10e61bd0; body size 26 bytes.
#line 1 "ENTRY_10e61bd0"

__declspec(naked) void FUN_10e61bd0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10e61be6
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10e61bf0; body size 26 bytes.
#line 1 "ENTRY_10e61bf0"

__declspec(naked) void FUN_10e61bf0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10e61c06
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10e61c10; body size 26 bytes.
#line 1 "ENTRY_10e61c10"

__declspec(naked) void FUN_10e61c10(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10e61c26
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10e61ca0; body size 10 bytes.
#line 1 "ENTRY_10e61ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e61ca0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10e61cb0; body size 10 bytes.
#line 1 "ENTRY_10e61cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e61cb0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10e61cc0; body size 10 bytes.
#line 1 "ENTRY_10e61cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e61cc0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10e61cd0; body size 10 bytes.
#line 1 "ENTRY_10e61cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e61cd0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10e61ce0; body size 10 bytes.
#line 1 "ENTRY_10e61ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e61ce0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10e620f0; body size 11 bytes.
#line 1 "ENTRY_10e620f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e620f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10e65d80; body size 97 bytes.
#line 1 "ENTRY_10e65d80"

__declspec(naked) void FUN_10e65d80(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp ecx, 0x9249249
  __asm ja 0x10e65ddc
  __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xcd __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub eax, ecx
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x10e65dc7
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10e65ddc
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10e65dc1
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x10e65dd7
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10e65e00; body size 90 bytes.
#line 1 "ENTRY_10e65e00"

__declspec(naked) void FUN_10e65e00(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x15555555
  __asm ja 0x10e65e55
  __asm lea eax, [eax + eax*2]
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x10e65e40
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10e65e55
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10e65e3a
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x10e65e50
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10e65eb0; body size 13 bytes.
#line 1 "ENTRY_10e65eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e65eb0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10e66b30; body size 22 bytes.
#line 1 "ENTRY_10e66b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e66b30(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0xc);
}


// Reference entry 10e692a0; body size 63 bytes.
#line 1 "ENTRY_10e692a0"

__declspec(naked) void FUN_10e692a0(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub ecx, eax
  __asm mov eax, dword ptr [esp + 8]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x10e692ce
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10e692d9
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
  __asm jmp dword ptr [LAB_122fc888]
}



// Reference entry 10e692f0; body size 66 bytes.
#line 1 "ENTRY_10e692f0"

__declspec(naked) void FUN_10e692f0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub ecx, eax
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x10e6931e
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10e6932b
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10e693a0; body size 16 bytes.
#line 1 "ENTRY_10e693a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e693a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e693c0; body size 16 bytes.
#line 1 "ENTRY_10e693c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e693c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e693e0; body size 16 bytes.
#line 1 "ENTRY_10e693e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e693e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e69400; body size 16 bytes.
#line 1 "ENTRY_10e69400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e69400(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e69420; body size 16 bytes.
#line 1 "ENTRY_10e69420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e69420(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e69680; body size 8 bytes.
#line 1 "ENTRY_10e69680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e69680(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 10e69690; body size 11 bytes.
#line 1 "ENTRY_10e69690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e69690(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10e69d00; body size 4 bytes.
#line 1 "ENTRY_10e69d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e69d00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e69d10; body size 4 bytes.
#line 1 "ENTRY_10e69d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e69d10(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e69d20; body size 4 bytes.
#line 1 "ENTRY_10e69d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e69d20(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e69d30; body size 4 bytes.
#line 1 "ENTRY_10e69d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e69d30(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e69d40; body size 4 bytes.
#line 1 "ENTRY_10e69d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e69d40(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e69e00; body size 4 bytes.
#line 1 "ENTRY_10e69e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e69e00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 10e71450; body size 6 bytes.
#line 1 "ENTRY_10e71450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10e71450(void)

{
  return (char *)("SCIVSResponseListener");
}


// Reference entry 10e71480; body size 7 bytes.
#line 1 "ENTRY_10e71480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e71480(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10e71490; body size 7 bytes.
#line 1 "ENTRY_10e71490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e71490(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10e716f0; body size 11 bytes.
#line 1 "ENTRY_10e716f0"

__declspec(naked) void FUN_10e716f0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x150]
  __asm jmp LAB_1005de40
}



// Reference entry 10e71700; body size 6 bytes.
#line 1 "ENTRY_10e71700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e71700(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10e71710; body size 6 bytes.
#line 1 "ENTRY_10e71710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e71710(void)

{
  return (undefined4)(0x15555555);
}


// Reference entry 10e71720; body size 6 bytes.
#line 1 "ENTRY_10e71720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e71720(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10e71730; body size 6 bytes.
#line 1 "ENTRY_10e71730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e71730(void)

{
  return (undefined4)(0x15555555);
}


// Reference entry 10e72170; body size 5 bytes.
#line 1 "ENTRY_10e72170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e72170(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e721a0; body size 3 bytes.
#line 1 "ENTRY_10e721a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e721a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e721b0; body size 3 bytes.
#line 1 "ENTRY_10e721b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e721b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e72e10; body size 28 bytes.
#line 1 "ENTRY_10e72e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e72e10(undefined4 *param_1)

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


// Reference entry 10e72e40; body size 28 bytes.
#line 1 "ENTRY_10e72e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e72e40(undefined4 *param_1)

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


// Reference entry 10e72e70; body size 28 bytes.
#line 1 "ENTRY_10e72e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e72e70(undefined4 *param_1)

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


// Reference entry 10e72ea0; body size 28 bytes.
#line 1 "ENTRY_10e72ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e72ea0(undefined4 *param_1)

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


// Reference entry 10e72ed0; body size 28 bytes.
#line 1 "ENTRY_10e72ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e72ed0(undefined4 *param_1)

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


// Reference entry 10e733b0; body size 8 bytes.
#line 1 "ENTRY_10e733b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e733b0(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  return;
}


// Reference entry 10e75660; body size 11 bytes.
#line 1 "ENTRY_10e75660"

__declspec(naked) void FUN_10e75660(void)

{
  __asm mov ecx, dword ptr [ecx + 0x150]
  __asm jmp LAB_10045863
}



// Reference entry 10e75700; body size 10 bytes.
#line 1 "ENTRY_10e75700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e75700(int param_1)

{
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 8) + 0x150));
}


// Reference entry 10e75710; body size 4 bytes.
#line 1 "ENTRY_10e75710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e75710(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e75720; body size 22 bytes.
#line 1 "ENTRY_10e75720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e75720(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0xc);
}


// Reference entry 10e75f70; body size 26 bytes.
#line 1 "ENTRY_10e75f70"

__declspec(naked) void FUN_10e75f70(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1194337c
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e760c0; body size 66 bytes.
#line 1 "ENTRY_10e760c0"

__declspec(naked) void FUN_10e760c0(void)

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
  __asm mov dword ptr [ebx], LAB_11944060
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



// Reference entry 10e76390; body size 430 bytes.
#line 1 "ENTRY_10e76390"

__declspec(naked) void FUN_10e76390(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [ecx + 0xc], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_119436a8
  __asm mov dword ptr [ecx + 0xc], LAB_11943760
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0x18], LAB_118900d8
  __asm mov dword ptr [ecx + 0x24], LAB_118900e8
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x7c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81
  __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x88 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x90 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x94 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0x80], LAB_118900d8
  __asm mov dword ptr [ecx + 0x8c], LAB_118900e8
  __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xbc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81
  __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xf8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0xe8], LAB_118900d8
  __asm mov dword ptr [ecx + 0xf4], LAB_118900e8
  __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x24 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x4c __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x54 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81
  __asm _emit 0x58 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x60 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x64 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0x150], LAB_1188fc48
  __asm mov dword ptr [ecx + 0x15c], LAB_1188fc58
  __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x8c __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xb4 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xbc __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81
  __asm _emit 0xc0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xc8 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xcc __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0x1b8], LAB_1188fc48
  __asm mov dword ptr [ecx + 0x1c4], LAB_1188fc58
  __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xf4 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x1c __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e765b0; body size 26 bytes.
#line 1 "ENTRY_10e765b0"

__declspec(naked) void FUN_10e765b0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_119434ec
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e765d0; body size 26 bytes.
#line 1 "ENTRY_10e765d0"

__declspec(naked) void FUN_10e765d0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_119435c0
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e76680; body size 26 bytes.
#line 1 "ENTRY_10e76680"

__declspec(naked) void FUN_10e76680(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11943434
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e767c0; body size 39 bytes.
#line 1 "ENTRY_10e767c0"

__declspec(naked) void FUN_10e767c0(void)

{
  __asm mov dword ptr [ecx], LAB_1194308c
  __asm mov dword ptr [ecx + 8], LAB_119432c0
  __asm mov dword ptr [ecx + 0x28], LAB_119432d0
  __asm mov dword ptr [ecx + 0x48], LAB_119432dc
  __asm mov dword ptr [ecx + 0x4c], LAB_119432ec
  __asm jmp LAB_10088622
}



// Reference entry 10e767f0; body size 7 bytes.
#line 1 "ENTRY_10e767f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e767f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e76b70; body size 7 bytes.
#line 1 "ENTRY_10e76b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e76b70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e76b80; body size 7 bytes.
#line 1 "ENTRY_10e76b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e76b80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e77f90; body size 24 bytes.
#line 1 "ENTRY_10e77f90"

__declspec(naked) void FUN_10e77f90(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm test ecx, ecx
  __asm je 0x10e77fa5
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm call eax
  __asm test al, al
  __asm je 0x10e77fa5
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 10e79210; body size 16 bytes.
#line 1 "ENTRY_10e79210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e79210(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e7f590; body size 26 bytes.
#line 1 "ENTRY_10e7f590"

__declspec(naked) void FUN_10e7f590(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1194421c
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e7f5b0; body size 26 bytes.
#line 1 "ENTRY_10e7f5b0"

__declspec(naked) void FUN_10e7f5b0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_119443d8
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e7f5d0; body size 26 bytes.
#line 1 "ENTRY_10e7f5d0"

__declspec(naked) void FUN_10e7f5d0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_119442d4
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e7f9a0; body size 40 bytes.
#line 1 "ENTRY_10e7f9a0"

__declspec(naked) void FUN_10e7f9a0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_11944698
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e7f9e0; body size 141 bytes.
#line 1 "ENTRY_10e7f9e0"

__declspec(naked) void FUN_10e7f9e0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [ecx + 0xc], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_11944750
  __asm mov dword ptr [ecx + 0xc], LAB_11944808
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x38 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0x28], LAB_118a0b44
  __asm mov dword ptr [ecx + 0x34], LAB_118a0b54
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x8c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e7faa0; body size 7 bytes.
#line 1 "ENTRY_10e7faa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e7faa0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e7fab0; body size 7 bytes.
#line 1 "ENTRY_10e7fab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e7fab0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e7fde0; body size 3 bytes.
#line 1 "ENTRY_10e7fde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e7fde0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e83090; body size 78 bytes.
#line 1 "ENTRY_10e83090"

__declspec(naked) void FUN_10e83090(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10e830b9
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10e830d0
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



// Reference entry 10e83290; body size 26 bytes.
#line 1 "ENTRY_10e83290"

__declspec(naked) void FUN_10e83290(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11944b54
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e83340; body size 26 bytes.
#line 1 "ENTRY_10e83340"

__declspec(naked) void FUN_10e83340(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11944d98
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e83360; body size 26 bytes.
#line 1 "ENTRY_10e83360"

__declspec(naked) void FUN_10e83360(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11944e70
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e83380; body size 30 bytes.
#line 1 "ENTRY_10e83380"

__declspec(naked) void FUN_10e83380(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_119452e0
  __asm mov byte ptr [ecx + 0xc], 0
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e833b0; body size 54 bytes.
#line 1 "ENTRY_10e833b0"

__declspec(naked) void FUN_10e833b0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [ecx + 0xc], LAB_11883dbc
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11944f98
  __asm mov dword ptr [ecx + 0xc], LAB_11945050
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e83530; body size 26 bytes.
#line 1 "ENTRY_10e83530"

__declspec(naked) void FUN_10e83530(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11944c0c
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e83550; body size 26 bytes.
#line 1 "ENTRY_10e83550"

__declspec(naked) void FUN_10e83550(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11944cc4
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e837e0; body size 7 bytes.
#line 1 "ENTRY_10e837e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e837e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e837f0; body size 7 bytes.
#line 1 "ENTRY_10e837f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e837f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e83800; body size 7 bytes.
#line 1 "ENTRY_10e83800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e83800(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e838a0; body size 39 bytes.
#line 1 "ENTRY_10e838a0"

__declspec(naked) void FUN_10e838a0(void)

{
  __asm mov dword ptr [ecx], LAB_11944864
  __asm mov dword ptr [ecx + 8], LAB_11944a98
  __asm mov dword ptr [ecx + 0x28], LAB_11944aa8
  __asm mov dword ptr [ecx + 0x48], LAB_11944ab4
  __asm mov dword ptr [ecx + 0x4c], LAB_11944ac4
  __asm jmp LAB_10088622
}



// Reference entry 10e838d0; body size 7 bytes.
#line 1 "ENTRY_10e838d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e838d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e838e0; body size 7 bytes.
#line 1 "ENTRY_10e838e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e838e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e838f0; body size 3 bytes.
#line 1 "ENTRY_10e838f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e838f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e868c0; body size 28 bytes.
#line 1 "ENTRY_10e868c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e868c0(undefined4 *param_1)

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


// Reference entry 10e86d60; body size 26 bytes.
#line 1 "ENTRY_10e86d60"

__declspec(naked) void FUN_10e86d60(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11945770
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e86d80; body size 26 bytes.
#line 1 "ENTRY_10e86d80"

__declspec(naked) void FUN_10e86d80(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_119459b8
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e86da0; body size 26 bytes.
#line 1 "ENTRY_10e86da0"

__declspec(naked) void FUN_10e86da0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11945a98
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e86dc0; body size 26 bytes.
#line 1 "ENTRY_10e86dc0"

__declspec(naked) void FUN_10e86dc0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11945c30
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e86de0; body size 30 bytes.
#line 1 "ENTRY_10e86de0"

__declspec(naked) void FUN_10e86de0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11945d7c
  __asm mov byte ptr [ecx + 0xc], 0
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e86e10; body size 30 bytes.
#line 1 "ENTRY_10e86e10"

__declspec(naked) void FUN_10e86e10(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11945e80
  __asm mov byte ptr [ecx + 0xc], 0
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e86e90; body size 26 bytes.
#line 1 "ENTRY_10e86e90"

__declspec(naked) void FUN_10e86e90(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11945828
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e86eb0; body size 26 bytes.
#line 1 "ENTRY_10e86eb0"

__declspec(naked) void FUN_10e86eb0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_119458e0
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e86ed0; body size 7 bytes.
#line 1 "ENTRY_10e86ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e86ed0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e86ee0; body size 7 bytes.
#line 1 "ENTRY_10e86ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e86ee0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e86ef0; body size 7 bytes.
#line 1 "ENTRY_10e86ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e86ef0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e86f00; body size 7 bytes.
#line 1 "ENTRY_10e86f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e86f00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e86f10; body size 7 bytes.
#line 1 "ENTRY_10e86f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e86f10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e86f20; body size 7 bytes.
#line 1 "ENTRY_10e86f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e86f20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e86f30; body size 39 bytes.
#line 1 "ENTRY_10e86f30"

__declspec(naked) void FUN_10e86f30(void)

{
  __asm mov dword ptr [ecx], LAB_11945478
  __asm mov dword ptr [ecx + 8], LAB_119456ac
  __asm mov dword ptr [ecx + 0x28], LAB_119456bc
  __asm mov dword ptr [ecx + 0x48], LAB_119456c8
  __asm mov dword ptr [ecx + 0x4c], LAB_119456d8
  __asm jmp LAB_10088622
}



// Reference entry 10e86f60; body size 7 bytes.
#line 1 "ENTRY_10e86f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e86f60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e86f70; body size 7 bytes.
#line 1 "ENTRY_10e86f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e86f70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e89960; body size 26 bytes.
#line 1 "ENTRY_10e89960"

__declspec(naked) void FUN_10e89960(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11946264
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e89a50; body size 26 bytes.
#line 1 "ENTRY_10e89a50"

__declspec(naked) void FUN_10e89a50(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11946594
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e89a70; body size 26 bytes.
#line 1 "ENTRY_10e89a70"

__declspec(naked) void FUN_10e89a70(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_119463d4
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e89a90; body size 26 bytes.
#line 1 "ENTRY_10e89a90"

__declspec(naked) void FUN_10e89a90(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1194631c
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e89ab0; body size 26 bytes.
#line 1 "ENTRY_10e89ab0"

__declspec(naked) void FUN_10e89ab0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_119464b4
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e89ad0; body size 7 bytes.
#line 1 "ENTRY_10e89ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e89ad0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e89ae0; body size 39 bytes.
#line 1 "ENTRY_10e89ae0"

__declspec(naked) void FUN_10e89ae0(void)

{
  __asm mov dword ptr [ecx], LAB_11945f68
  __asm mov dword ptr [ecx + 8], LAB_1194619c
  __asm mov dword ptr [ecx + 0x28], LAB_119461ac
  __asm mov dword ptr [ecx + 0x48], LAB_119461b8
  __asm mov dword ptr [ecx + 0x4c], LAB_119461c8
  __asm jmp LAB_10088622
}



// Reference entry 10e89b10; body size 7 bytes.
#line 1 "ENTRY_10e89b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e89b10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e89b20; body size 7 bytes.
#line 1 "ENTRY_10e89b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e89b20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e89b30; body size 7 bytes.
#line 1 "ENTRY_10e89b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e89b30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e89b40; body size 7 bytes.
#line 1 "ENTRY_10e89b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e89b40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e89f30; body size 25 bytes.
#line 1 "ENTRY_10e89f30"

__declspec(naked) void FUN_10e89f30(void)

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



// Reference entry 10e89f50; body size 22 bytes.
#line 1 "ENTRY_10e89f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e89f50(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10e8a030; body size 22 bytes.
#line 1 "ENTRY_10e8a030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10e8a030(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10e8a050; body size 27 bytes.
#line 1 "ENTRY_10e8a050"

__declspec(naked) void FUN_10e8a050(void)

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



// Reference entry 10e8a080; body size 43 bytes.
#line 1 "ENTRY_10e8a080"

__declspec(naked) void FUN_10e8a080(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10e8a0a5
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



// Reference entry 10e8a0c0; body size 26 bytes.
#line 1 "ENTRY_10e8a0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10e8a0c0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10e8a0e0; body size 91 bytes.
#line 1 "ENTRY_10e8a0e0"

__declspec(naked) void FUN_10e8a0e0(void)

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
  __asm je 0x10e8a116
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10e8a12d
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



// Reference entry 10e8a160; body size 91 bytes.
#line 1 "ENTRY_10e8a160"

__declspec(naked) void FUN_10e8a160(void)

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
  __asm je 0x10e8a196
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10e8a1ad
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



// Reference entry 10e8a1e0; body size 91 bytes.
#line 1 "ENTRY_10e8a1e0"

__declspec(naked) void FUN_10e8a1e0(void)

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
  __asm je 0x10e8a216
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10e8a22d
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



// Reference entry 10e8a260; body size 91 bytes.
#line 1 "ENTRY_10e8a260"

__declspec(naked) void FUN_10e8a260(void)

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
  __asm je 0x10e8a296
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10e8a2ad
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



// Reference entry 10e8a360; body size 91 bytes.
#line 1 "ENTRY_10e8a360"

__declspec(naked) void FUN_10e8a360(void)

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
  __asm je 0x10e8a396
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10e8a3ad
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



// Reference entry 10e8a3e0; body size 91 bytes.
#line 1 "ENTRY_10e8a3e0"

__declspec(naked) void FUN_10e8a3e0(void)

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
  __asm je 0x10e8a416
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10e8a42d
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



// Reference entry 10e8a460; body size 91 bytes.
#line 1 "ENTRY_10e8a460"

__declspec(naked) void FUN_10e8a460(void)

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
  __asm je 0x10e8a496
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10e8a4ad
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



// Reference entry 10e8a4e0; body size 91 bytes.
#line 1 "ENTRY_10e8a4e0"

__declspec(naked) void FUN_10e8a4e0(void)

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
  __asm je 0x10e8a516
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10e8a52d
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



// Reference entry 10e8a560; body size 43 bytes.
#line 1 "ENTRY_10e8a560"

__declspec(naked) void FUN_10e8a560(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10e8a585
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



// Reference entry 10e8a5a0; body size 43 bytes.
#line 1 "ENTRY_10e8a5a0"

__declspec(naked) void FUN_10e8a5a0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10e8a5c5
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



// Reference entry 10e8a6f0; body size 130 bytes.
#line 1 "ENTRY_10e8a6f0"

__declspec(naked) void FUN_10e8a6f0(void)

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
  __asm je 0x10e8a726
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi + 4], edi
  __asm test edi, edi
  __asm je 0x10e8a74f
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm test ecx, ecx
  __asm je 0x10e8a756
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



// Reference entry 10e8a7a0; body size 130 bytes.
#line 1 "ENTRY_10e8a7a0"

__declspec(naked) void FUN_10e8a7a0(void)

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
  __asm je 0x10e8a7d6
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi + 4], edi
  __asm test edi, edi
  __asm je 0x10e8a7ff
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm test ecx, ecx
  __asm je 0x10e8a806
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



// Reference entry 10e8a850; body size 130 bytes.
#line 1 "ENTRY_10e8a850"

__declspec(naked) void FUN_10e8a850(void)

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
  __asm je 0x10e8a886
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi + 4], edi
  __asm test edi, edi
  __asm je 0x10e8a8af
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm test ecx, ecx
  __asm je 0x10e8a8b6
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



// Reference entry 10e8a9b0; body size 130 bytes.
#line 1 "ENTRY_10e8a9b0"

__declspec(naked) void FUN_10e8a9b0(void)

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
  __asm je 0x10e8a9e6
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi + 4], edi
  __asm test edi, edi
  __asm je 0x10e8aa0f
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm test ecx, ecx
  __asm je 0x10e8aa16
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



// Reference entry 10e8aa60; body size 130 bytes.
#line 1 "ENTRY_10e8aa60"

__declspec(naked) void FUN_10e8aa60(void)

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
  __asm je 0x10e8aa96
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi + 4], edi
  __asm test edi, edi
  __asm je 0x10e8aabf
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm test ecx, ecx
  __asm je 0x10e8aac6
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



// Reference entry 10e8ab10; body size 130 bytes.
#line 1 "ENTRY_10e8ab10"

__declspec(naked) void FUN_10e8ab10(void)

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
  __asm je 0x10e8ab46
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi + 4], edi
  __asm test edi, edi
  __asm je 0x10e8ab6f
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm test ecx, ecx
  __asm je 0x10e8ab76
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



// Reference entry 10e8abc0; body size 130 bytes.
#line 1 "ENTRY_10e8abc0"

__declspec(naked) void FUN_10e8abc0(void)

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
  __asm je 0x10e8abf6
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi + 4], edi
  __asm test edi, edi
  __asm je 0x10e8ac1f
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm test ecx, ecx
  __asm je 0x10e8ac26
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



// Reference entry 10e8ac70; body size 130 bytes.
#line 1 "ENTRY_10e8ac70"

__declspec(naked) void FUN_10e8ac70(void)

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
  __asm je 0x10e8aca6
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi + 4], edi
  __asm test edi, edi
  __asm je 0x10e8accf
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm test ecx, ecx
  __asm je 0x10e8acd6
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



// Reference entry 10e8ad20; body size 130 bytes.
#line 1 "ENTRY_10e8ad20"

__declspec(naked) void FUN_10e8ad20(void)

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
  __asm je 0x10e8ad56
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi + 4], edi
  __asm test edi, edi
  __asm je 0x10e8ad7f
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm test ecx, ecx
  __asm je 0x10e8ad86
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



// Reference entry 10e8add0; body size 40 bytes.
#line 1 "ENTRY_10e8add0"

__declspec(naked) void FUN_10e8add0(void)

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



// Reference entry 10e8ae10; body size 40 bytes.
#line 1 "ENTRY_10e8ae10"

__declspec(naked) void FUN_10e8ae10(void)

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



// Reference entry 10e8ae50; body size 40 bytes.
#line 1 "ENTRY_10e8ae50"

__declspec(naked) void FUN_10e8ae50(void)

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



// Reference entry 10e8ae90; body size 40 bytes.
#line 1 "ENTRY_10e8ae90"

__declspec(naked) void FUN_10e8ae90(void)

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



// Reference entry 10e8aed0; body size 40 bytes.
#line 1 "ENTRY_10e8aed0"

__declspec(naked) void FUN_10e8aed0(void)

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



// Reference entry 10e8af10; body size 40 bytes.
#line 1 "ENTRY_10e8af10"

__declspec(naked) void FUN_10e8af10(void)

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



// Reference entry 10e8af50; body size 40 bytes.
#line 1 "ENTRY_10e8af50"

__declspec(naked) void FUN_10e8af50(void)

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



// Reference entry 10e8af90; body size 40 bytes.
#line 1 "ENTRY_10e8af90"

__declspec(naked) void FUN_10e8af90(void)

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



// Reference entry 10e8afd0; body size 40 bytes.
#line 1 "ENTRY_10e8afd0"

__declspec(naked) void FUN_10e8afd0(void)

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



// Reference entry 10e8b010; body size 40 bytes.
#line 1 "ENTRY_10e8b010"

__declspec(naked) void FUN_10e8b010(void)

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



// Reference entry 10e8b050; body size 40 bytes.
#line 1 "ENTRY_10e8b050"

__declspec(naked) void FUN_10e8b050(void)

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



// Reference entry 10e8b090; body size 40 bytes.
#line 1 "ENTRY_10e8b090"

__declspec(naked) void FUN_10e8b090(void)

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



// Reference entry 10e8b0d0; body size 40 bytes.
#line 1 "ENTRY_10e8b0d0"

__declspec(naked) void FUN_10e8b0d0(void)

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



// Reference entry 10e8b110; body size 40 bytes.
#line 1 "ENTRY_10e8b110"

__declspec(naked) void FUN_10e8b110(void)

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



// Reference entry 10e8b150; body size 40 bytes.
#line 1 "ENTRY_10e8b150"

__declspec(naked) void FUN_10e8b150(void)

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



// Reference entry 10e8b190; body size 40 bytes.
#line 1 "ENTRY_10e8b190"

__declspec(naked) void FUN_10e8b190(void)

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



// Reference entry 10e8b1d0; body size 40 bytes.
#line 1 "ENTRY_10e8b1d0"

__declspec(naked) void FUN_10e8b1d0(void)

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



// Reference entry 10e8b210; body size 40 bytes.
#line 1 "ENTRY_10e8b210"

__declspec(naked) void FUN_10e8b210(void)

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



// Reference entry 10e8b250; body size 40 bytes.
#line 1 "ENTRY_10e8b250"

__declspec(naked) void FUN_10e8b250(void)

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



// Reference entry 10e8b290; body size 40 bytes.
#line 1 "ENTRY_10e8b290"

__declspec(naked) void FUN_10e8b290(void)

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



// Reference entry 10e8b2d0; body size 40 bytes.
#line 1 "ENTRY_10e8b2d0"

__declspec(naked) void FUN_10e8b2d0(void)

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



// Reference entry 10e8b310; body size 22 bytes.
#line 1 "ENTRY_10e8b310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e8b310(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 10e8b330; body size 5 bytes.
#line 1 "ENTRY_10e8b330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e8b330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e8b340; body size 5 bytes.
#line 1 "ENTRY_10e8b340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e8b340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e8b350; body size 5 bytes.
#line 1 "ENTRY_10e8b350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e8b350(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e8b360; body size 5 bytes.
#line 1 "ENTRY_10e8b360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e8b360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e8b370; body size 5 bytes.
#line 1 "ENTRY_10e8b370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e8b370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e8b380; body size 5 bytes.
#line 1 "ENTRY_10e8b380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e8b380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e8b390; body size 5 bytes.
#line 1 "ENTRY_10e8b390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e8b390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10e8b3a0; body size 6 bytes.
#line 1 "ENTRY_10e8b3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10e8b3a0(void)

{
  return (char *)("SCIIntegerSettingsProperty");
}


// Reference entry 10e8b3b0; body size 6 bytes.
#line 1 "ENTRY_10e8b3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10e8b3b0(void)

{
  return (char *)("SCIOpHTControlGetLEDFeedbackState");
}


// Reference entry 10e8b3c0; body size 6 bytes.
#line 1 "ENTRY_10e8b3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10e8b3c0(void)

{
  return (char *)("SCISonarCalibrationItem");
}


// Reference entry 10e8b460; body size 27 bytes.
#line 1 "ENTRY_10e8b460"

__declspec(naked) void FUN_10e8b460(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11946a48
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 10e8b490; body size 27 bytes.
#line 1 "ENTRY_10e8b490"

__declspec(naked) void FUN_10e8b490(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_1194685c
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 10e8b4c0; body size 27 bytes.
#line 1 "ENTRY_10e8b4c0"

__declspec(naked) void FUN_10e8b4c0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11946b6c
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 10e8b4f0; body size 27 bytes.
#line 1 "ENTRY_10e8b4f0"

__declspec(naked) void FUN_10e8b4f0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11946ac0
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 10e8b680; body size 70 bytes.
#line 1 "ENTRY_10e8b680"

__declspec(naked) void FUN_10e8b680(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0xc], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_11946d84
  __asm mov dword ptr [ecx + 0xc], LAB_11946d94
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}



// Reference entry 10e8b6e0; body size 102 bytes.
#line 1 "ENTRY_10e8b6e0"

__declspec(naked) void FUN_10e8b6e0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm mov dword ptr [esp + 4], esi
  __asm mov dword ptr [esi], LAB_11883b70
  __asm mov dword ptr [esi + 4], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10e8b70f
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 8], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov dword ptr [esi + 0xc], LAB_11883984
  __asm mov eax, esi
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi], LAB_11946be4
  __asm mov dword ptr [esi + 0xc], LAB_11946bf4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e8b760; body size 102 bytes.
#line 1 "ENTRY_10e8b760"

__declspec(naked) void FUN_10e8b760(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm mov dword ptr [esp + 4], esi
  __asm mov dword ptr [esi], LAB_11883b70
  __asm mov dword ptr [esi + 4], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10e8b78f
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 8], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov dword ptr [esi + 0xc], LAB_11883984
  __asm mov eax, esi
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi], LAB_119470a0
  __asm mov dword ptr [esi + 0xc], LAB_119470b0
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e8b7e0; body size 102 bytes.
#line 1 "ENTRY_10e8b7e0"

__declspec(naked) void FUN_10e8b7e0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm mov dword ptr [esp + 4], esi
  __asm mov dword ptr [esi], LAB_11883b70
  __asm mov dword ptr [esi + 4], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10e8b80f
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 8], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov dword ptr [esi + 0xc], LAB_11883984
  __asm mov eax, esi
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi], LAB_119476b4
  __asm mov dword ptr [esi + 0xc], LAB_119476c4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e8b860; body size 102 bytes.
#line 1 "ENTRY_10e8b860"

__declspec(naked) void FUN_10e8b860(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm mov dword ptr [esp + 4], esi
  __asm mov dword ptr [esi], LAB_11883b70
  __asm mov dword ptr [esi + 4], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10e8b88f
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 8], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov dword ptr [esi + 0xc], LAB_11883984
  __asm mov eax, esi
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi], LAB_11947514
  __asm mov dword ptr [esi + 0xc], LAB_11947524
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e8b8e0; body size 102 bytes.
#line 1 "ENTRY_10e8b8e0"

__declspec(naked) void FUN_10e8b8e0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm mov dword ptr [esp + 4], esi
  __asm mov dword ptr [esi], LAB_11883b70
  __asm mov dword ptr [esi + 4], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10e8b90f
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 8], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov dword ptr [esi + 0xc], LAB_11883984
  __asm mov eax, esi
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi], LAB_1188fc48
  __asm mov dword ptr [esi + 0xc], LAB_1188fc58
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e8b960; body size 70 bytes.
#line 1 "ENTRY_10e8b960"

__declspec(naked) void FUN_10e8b960(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0xc], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_11947a1c
  __asm mov dword ptr [ecx + 0xc], LAB_11947a2c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}



// Reference entry 10e8bb40; body size 16 bytes.
#line 1 "ENTRY_10e8bb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e8bb40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e8be20; body size 16 bytes.
#line 1 "ENTRY_10e8be20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e8be20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10e8bfc0; body size 10 bytes.
#line 1 "ENTRY_10e8bfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8bfc0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e8bfd0; body size 10 bytes.
#line 1 "ENTRY_10e8bfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8bfd0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e8bfe0; body size 10 bytes.
#line 1 "ENTRY_10e8bfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8bfe0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e8bff0; body size 10 bytes.
#line 1 "ENTRY_10e8bff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8bff0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e8c000; body size 10 bytes.
#line 1 "ENTRY_10e8c000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8c000(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e8c010; body size 10 bytes.
#line 1 "ENTRY_10e8c010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8c010(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e8c020; body size 10 bytes.
#line 1 "ENTRY_10e8c020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8c020(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e8c030; body size 12 bytes.
#line 1 "ENTRY_10e8c030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8c030(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e8c140; body size 10 bytes.
#line 1 "ENTRY_10e8c140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8c140(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e8c1d0; body size 10 bytes.
#line 1 "ENTRY_10e8c1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8c1d0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e8c260; body size 10 bytes.
#line 1 "ENTRY_10e8c260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8c260(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e8c2f0; body size 10 bytes.
#line 1 "ENTRY_10e8c2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8c2f0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e8c300; body size 10 bytes.
#line 1 "ENTRY_10e8c300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8c300(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e8c310; body size 12 bytes.
#line 1 "ENTRY_10e8c310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8c310(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10e8c3a0; body size 134 bytes.
#line 1 "ENTRY_10e8c3a0"

__declspec(naked) void FUN_10e8c3a0(void)

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
  __asm je 0x10e8c3c7
  __asm call dword ptr [eax + 0x4c]
  __asm jmp 0x10e8c3ca
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
  __asm push offset LAB_119467d4
  __asm push offset LAB_118ba554
  __asm push ebx
  __asm mov ecx, edi
  __asm call LAB_10013336
  __asm mov dword ptr [edi], LAB_11946744
  __asm mov eax, edi
  __asm mov dword ptr [edi + 0x60], LAB_1194678c
  __asm mov dword ptr [edi + 0x46c], LAB_119467c8
  __asm mov byte ptr [edi + 0xd7d0], 0
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 0x18
}



// Reference entry 10e8dc30; body size 9 bytes.
#line 1 "ENTRY_10e8dc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e8dc30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIIntegerSettingsProperty);
  return (undefined4 *)(param_1);
}


// Reference entry 10e8dc40; body size 9 bytes.
#line 1 "ENTRY_10e8dc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e8dc40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpHTControlGetLEDFeedbackState);
  return (undefined4 *)(param_1);
}


// Reference entry 10e8dc50; body size 9 bytes.
#line 1 "ENTRY_10e8dc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e8dc50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISonarCalibrationItem);
  return (undefined4 *)(param_1);
}


// Reference entry 10e8dc60; body size 9 bytes.
#line 1 "ENTRY_10e8dc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e8dc60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIStringFromCustomSettingsProperty);
  return (undefined4 *)(param_1);
}


// Reference entry 10e8dc70; body size 9 bytes.
#line 1 "ENTRY_10e8dc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e8dc70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIStringFromListSettingsProperty);
  return (undefined4 *)(param_1);
}


// Reference entry 10e8f370; body size 54 bytes.
#line 1 "ENTRY_10e8f370"

__declspec(naked) void FUN_10e8f370(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm mov dword ptr [esp + 4], esi
  __asm mov dword ptr [esi], LAB_11883b70
  __asm mov dword ptr [esi + 4], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10e8f39f
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 8], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10e92eb0; body size 11 bytes.
#line 1 "ENTRY_10e92eb0"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e92eb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpHTCGetLEDFeedbackStateAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10e942f0; body size 28 bytes.
#line 1 "ENTRY_10e942f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e942f0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpHTCGetLEDFeedbackStateAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCGetLEDFeedbackStateAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCGetLEDFeedbackStateAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10e94960; body size 7 bytes.
#line 1 "ENTRY_10e94960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e94960(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10e94970; body size 7 bytes.
#line 1 "ENTRY_10e94970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e94970(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10e94990; body size 7 bytes.
#line 1 "ENTRY_10e94990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e94990(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10e949a0; body size 7 bytes.
#line 1 "ENTRY_10e949a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e949a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10e95010; body size 18 bytes.
#line 1 "ENTRY_10e95010"

__declspec(naked) void FUN_10e95010(void)

{
  __asm mov dword ptr [ecx], LAB_11946908
  __asm mov dword ptr [ecx + 8], LAB_11946954
  __asm jmp LAB_1004b7e0
}



// Reference entry 10e96930; body size 8 bytes.
#line 1 "ENTRY_10e96930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e96930(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e96940; body size 8 bytes.
#line 1 "ENTRY_10e96940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e96940(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e96950; body size 8 bytes.
#line 1 "ENTRY_10e96950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e96950(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e96960; body size 8 bytes.
#line 1 "ENTRY_10e96960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e96960(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e96970; body size 8 bytes.
#line 1 "ENTRY_10e96970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e96970(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e96980; body size 8 bytes.
#line 1 "ENTRY_10e96980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e96980(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e96990; body size 4 bytes.
#line 1 "ENTRY_10e96990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e96990(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e969a0; body size 4 bytes.
#line 1 "ENTRY_10e969a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e969a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e969b0; body size 4 bytes.
#line 1 "ENTRY_10e969b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e969b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e969c0; body size 4 bytes.
#line 1 "ENTRY_10e969c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e969c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e969d0; body size 4 bytes.
#line 1 "ENTRY_10e969d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e969d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e969e0; body size 4 bytes.
#line 1 "ENTRY_10e969e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e969e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e969f0; body size 4 bytes.
#line 1 "ENTRY_10e969f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e969f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e96a00; body size 4 bytes.
#line 1 "ENTRY_10e96a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e96a00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e96a10; body size 4 bytes.
#line 1 "ENTRY_10e96a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e96a10(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e96a20; body size 4 bytes.
#line 1 "ENTRY_10e96a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e96a20(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e96a30; body size 4 bytes.
#line 1 "ENTRY_10e96a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e96a30(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e96a40; body size 3 bytes.
#line 1 "ENTRY_10e96a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e96a40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e96a50; body size 3 bytes.
#line 1 "ENTRY_10e96a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e96a50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e96a60; body size 3 bytes.
#line 1 "ENTRY_10e96a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e96a60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e96a70; body size 3 bytes.
#line 1 "ENTRY_10e96a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e96a70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e96a80; body size 3 bytes.
#line 1 "ENTRY_10e96a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e96a80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10e99970; body size 8 bytes.
#line 1 "ENTRY_10e99970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e99970(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e99980; body size 8 bytes.
#line 1 "ENTRY_10e99980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e99980(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e99990; body size 8 bytes.
#line 1 "ENTRY_10e99990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e99990(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e999a0; body size 8 bytes.
#line 1 "ENTRY_10e999a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e999a0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e999b0; body size 8 bytes.
#line 1 "ENTRY_10e999b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e999b0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e999c0; body size 8 bytes.
#line 1 "ENTRY_10e999c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e999c0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e999d0; body size 4 bytes.
#line 1 "ENTRY_10e999d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e999d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e999e0; body size 4 bytes.
#line 1 "ENTRY_10e999e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e999e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e999f0; body size 4 bytes.
#line 1 "ENTRY_10e999f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e999f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e99a00; body size 4 bytes.
#line 1 "ENTRY_10e99a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e99a00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e99a10; body size 4 bytes.
#line 1 "ENTRY_10e99a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e99a10(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e99a20; body size 4 bytes.
#line 1 "ENTRY_10e99a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e99a20(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e99a30; body size 7 bytes.
#line 1 "ENTRY_10e99a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e99a30(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10e99a40; body size 7 bytes.
#line 1 "ENTRY_10e99a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e99a40(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10e99a50; body size 7 bytes.
#line 1 "ENTRY_10e99a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e99a50(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10e99a60; body size 7 bytes.
#line 1 "ENTRY_10e99a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e99a60(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10e99a70; body size 7 bytes.
#line 1 "ENTRY_10e99a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e99a70(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10e99a80; body size 7 bytes.
#line 1 "ENTRY_10e99a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e99a80(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10e99a90; body size 26 bytes.
#line 1 "ENTRY_10e99a90"

__declspec(naked) void FUN_10e99a90(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10e99aa6
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10e99ab0; body size 26 bytes.
#line 1 "ENTRY_10e99ab0"

__declspec(naked) void FUN_10e99ab0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10e99ac6
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10e99ad0; body size 26 bytes.
#line 1 "ENTRY_10e99ad0"

__declspec(naked) void FUN_10e99ad0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10e99ae6
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10e99af0; body size 26 bytes.
#line 1 "ENTRY_10e99af0"

__declspec(naked) void FUN_10e99af0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10e99b06
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10e99b10; body size 26 bytes.
#line 1 "ENTRY_10e99b10"

__declspec(naked) void FUN_10e99b10(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10e99b26
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10e99b30; body size 26 bytes.
#line 1 "ENTRY_10e99b30"

__declspec(naked) void FUN_10e99b30(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10e99b46
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10e99b50; body size 10 bytes.
#line 1 "ENTRY_10e99b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e99b50(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10e99b60; body size 10 bytes.
#line 1 "ENTRY_10e99b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e99b60(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10e99b70; body size 10 bytes.
#line 1 "ENTRY_10e99b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e99b70(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10e99b80; body size 10 bytes.
#line 1 "ENTRY_10e99b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e99b80(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10e99b90; body size 10 bytes.
#line 1 "ENTRY_10e99b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e99b90(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10e99ba0; body size 10 bytes.
#line 1 "ENTRY_10e99ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10e99ba0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10e9c270; body size 3 bytes.
#line 1 "ENTRY_10e9c270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e9c270(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10e9d060; body size 16 bytes.
#line 1 "ENTRY_10e9d060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d060(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d080; body size 16 bytes.
#line 1 "ENTRY_10e9d080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d080(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d0a0; body size 16 bytes.
#line 1 "ENTRY_10e9d0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d0a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d0c0; body size 16 bytes.
#line 1 "ENTRY_10e9d0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d0c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d0e0; body size 16 bytes.
#line 1 "ENTRY_10e9d0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d0e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d100; body size 16 bytes.
#line 1 "ENTRY_10e9d100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d100(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d120; body size 16 bytes.
#line 1 "ENTRY_10e9d120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d120(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d140; body size 16 bytes.
#line 1 "ENTRY_10e9d140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d140(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d160; body size 16 bytes.
#line 1 "ENTRY_10e9d160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d160(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d180; body size 16 bytes.
#line 1 "ENTRY_10e9d180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d180(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d1a0; body size 16 bytes.
#line 1 "ENTRY_10e9d1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d1a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d1c0; body size 16 bytes.
#line 1 "ENTRY_10e9d1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d1c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d1e0; body size 16 bytes.
#line 1 "ENTRY_10e9d1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d1e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d200; body size 16 bytes.
#line 1 "ENTRY_10e9d200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d200(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d220; body size 16 bytes.
#line 1 "ENTRY_10e9d220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d220(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d240; body size 16 bytes.
#line 1 "ENTRY_10e9d240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d240(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d260; body size 16 bytes.
#line 1 "ENTRY_10e9d260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d260(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d280; body size 16 bytes.
#line 1 "ENTRY_10e9d280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d280(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d2a0; body size 16 bytes.
#line 1 "ENTRY_10e9d2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d2a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d2c0; body size 16 bytes.
#line 1 "ENTRY_10e9d2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d2c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d2e0; body size 16 bytes.
#line 1 "ENTRY_10e9d2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d2e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d300; body size 16 bytes.
#line 1 "ENTRY_10e9d300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d300(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d320; body size 16 bytes.
#line 1 "ENTRY_10e9d320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d320(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d340; body size 16 bytes.
#line 1 "ENTRY_10e9d340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d340(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d360; body size 16 bytes.
#line 1 "ENTRY_10e9d360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d360(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d380; body size 16 bytes.
#line 1 "ENTRY_10e9d380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d380(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d3a0; body size 16 bytes.
#line 1 "ENTRY_10e9d3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d3a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d3c0; body size 16 bytes.
#line 1 "ENTRY_10e9d3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d3c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d3e0; body size 16 bytes.
#line 1 "ENTRY_10e9d3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d3e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d400; body size 16 bytes.
#line 1 "ENTRY_10e9d400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d400(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d420; body size 16 bytes.
#line 1 "ENTRY_10e9d420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d420(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d440; body size 9 bytes.
#line 1 "ENTRY_10e9d440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d440(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9d450; body size 9 bytes.
#line 1 "ENTRY_10e9d450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d450(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10e9db10; body size 7 bytes.
#line 1 "ENTRY_10e9db10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e9db10(int param_1)

{
  return (int)(param_1 + 0xd7d0);
}


// Reference entry 10e9df30; body size 4 bytes.
#line 1 "ENTRY_10e9df30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9df30(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e9df40; body size 4 bytes.
#line 1 "ENTRY_10e9df40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9df40(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e9df50; body size 4 bytes.
#line 1 "ENTRY_10e9df50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9df50(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e9df60; body size 4 bytes.
#line 1 "ENTRY_10e9df60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9df60(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e9df70; body size 4 bytes.
#line 1 "ENTRY_10e9df70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9df70(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e9df80; body size 4 bytes.
#line 1 "ENTRY_10e9df80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9df80(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ea1c80; body size 56 bytes.
#line 1 "ENTRY_10ea1c80"

__declspec(naked) void FUN_10ea1c80(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
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



// Reference entry 10ea1cd0; body size 56 bytes.
#line 1 "ENTRY_10ea1cd0"

__declspec(naked) void FUN_10ea1cd0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x20]
  __asm call eax
  __asm movzx eax, al
  __asm neg eax
  __asm push offset LAB_11882ff0
  __asm sbb eax, eax
  __asm add eax, 0x2089
  __asm push eax
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10ea1d80; body size 56 bytes.
#line 1 "ENTRY_10ea1d80"

__declspec(naked) void FUN_10ea1d80(void)

{
  __asm mov ecx, dword ptr [ecx + 0x80]
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



// Reference entry 10ea1e20; body size 56 bytes.
#line 1 "ENTRY_10ea1e20"

__declspec(naked) void FUN_10ea1e20(void)

{
  __asm mov ecx, dword ptr [ecx + 0x80]
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



// Reference entry 10ea1e70; body size 56 bytes.
#line 1 "ENTRY_10ea1e70"

__declspec(naked) void FUN_10ea1e70(void)

{
  __asm mov ecx, dword ptr [ecx + 0x80]
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



// Reference entry 10ea1f30; body size 56 bytes.
#line 1 "ENTRY_10ea1f30"

__declspec(naked) void FUN_10ea1f30(void)

{
  __asm mov ecx, dword ptr [ecx + 0x80]
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



// Reference entry 10ea2070; body size 56 bytes.
#line 1 "ENTRY_10ea2070"

__declspec(naked) void FUN_10ea2070(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x20]
  __asm call eax
  __asm movzx eax, al
  __asm neg eax
  __asm push offset LAB_11882ff0
  __asm sbb eax, eax
  __asm add eax, 0x2089
  __asm push eax
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10ea20c0; body size 56 bytes.
#line 1 "ENTRY_10ea20c0"

__declspec(naked) void FUN_10ea20c0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
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



// Reference entry 10ea2550; body size 13 bytes.
#line 1 "ENTRY_10ea2550"

__declspec(naked) void FUN_10ea2550(void)

{
  __asm mov ecx, dword ptr [ecx + 0x8c]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x30]
  __asm jmp eax
}



// Reference entry 10ea2560; body size 19 bytes.
#line 1 "ENTRY_10ea2560"

__declspec(naked) void FUN_10ea2560(void)

{
  __asm mov ecx, dword ptr [ecx + 0x8c]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x30]
  __asm call eax
  __asm test al, al
  __asm sete al
  __asm ret
}



// Reference entry 10ea2580; body size 6 bytes.
#line 1 "ENTRY_10ea2580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ea2580(void)

{
  return (char *)("SCIIntegerSettingsProperty");
}


// Reference entry 10ea2590; body size 6 bytes.
#line 1 "ENTRY_10ea2590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ea2590(void)

{
  return (char *)("SCIOpHTControlGetLEDFeedbackState");
}


// Reference entry 10ea25a0; body size 6 bytes.
#line 1 "ENTRY_10ea25a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ea25a0(void)

{
  return (char *)("SCISonarCalibrationItem");
}


// Reference entry 10ea25b0; body size 7 bytes.
#line 1 "ENTRY_10ea25b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ea25b0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10ea25c0; body size 7 bytes.
#line 1 "ENTRY_10ea25c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ea25c0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10ea25d0; body size 7 bytes.
#line 1 "ENTRY_10ea25d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ea25d0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10ea25e0; body size 7 bytes.
#line 1 "ENTRY_10ea25e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ea25e0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10ea2760; body size 45 bytes.
#line 1 "ENTRY_10ea2760"

__declspec(naked) void FUN_10ea2760(void)

{
  __asm cmp dword ptr [esp + 4], 1
  __asm push esi
  __asm mov esi, ecx
  __asm sete dl
  __asm push 0
  __asm push esi
  __asm push ecx
  __asm mov eax, dword ptr [esi + 0x7c]
  __asm mov ecx, esp
  __asm push offset LAB_1188086c
  __asm mov byte ptr [eax + 0x10], dl
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 0x18]
  __asm call LAB_10013543
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ea28e0; body size 3 bytes.
#line 1 "ENTRY_10ea28e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ea28e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ea28f0; body size 3 bytes.
#line 1 "ENTRY_10ea28f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ea28f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ea5eb0; body size 28 bytes.
#line 1 "ENTRY_10ea5eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea5eb0(undefined4 *param_1)

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


// Reference entry 10ea5ee0; body size 28 bytes.
#line 1 "ENTRY_10ea5ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea5ee0(undefined4 *param_1)

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


// Reference entry 10ea5f10; body size 28 bytes.
#line 1 "ENTRY_10ea5f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea5f10(undefined4 *param_1)

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


// Reference entry 10ea5f40; body size 28 bytes.
#line 1 "ENTRY_10ea5f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea5f40(undefined4 *param_1)

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


// Reference entry 10ea5f70; body size 28 bytes.
#line 1 "ENTRY_10ea5f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea5f70(undefined4 *param_1)

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


// Reference entry 10ea5fa0; body size 28 bytes.
#line 1 "ENTRY_10ea5fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea5fa0(undefined4 *param_1)

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


// Reference entry 10ea5fd0; body size 28 bytes.
#line 1 "ENTRY_10ea5fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea5fd0(undefined4 *param_1)

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


// Reference entry 10ea6000; body size 28 bytes.
#line 1 "ENTRY_10ea6000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea6000(undefined4 *param_1)

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


// Reference entry 10ea6030; body size 28 bytes.
#line 1 "ENTRY_10ea6030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea6030(undefined4 *param_1)

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


// Reference entry 10ea6060; body size 28 bytes.
#line 1 "ENTRY_10ea6060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea6060(undefined4 *param_1)

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


// Reference entry 10ea6090; body size 28 bytes.
#line 1 "ENTRY_10ea6090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea6090(undefined4 *param_1)

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


// Reference entry 10ea60c0; body size 28 bytes.
#line 1 "ENTRY_10ea60c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea60c0(undefined4 *param_1)

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


// Reference entry 10ea60f0; body size 28 bytes.
#line 1 "ENTRY_10ea60f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea60f0(undefined4 *param_1)

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


// Reference entry 10ea6120; body size 28 bytes.
#line 1 "ENTRY_10ea6120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea6120(undefined4 *param_1)

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


// Reference entry 10ea6150; body size 28 bytes.
#line 1 "ENTRY_10ea6150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea6150(undefined4 *param_1)

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


// Reference entry 10ea6180; body size 28 bytes.
#line 1 "ENTRY_10ea6180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea6180(undefined4 *param_1)

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


// Reference entry 10ea61b0; body size 28 bytes.
#line 1 "ENTRY_10ea61b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea61b0(undefined4 *param_1)

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


// Reference entry 10ea61e0; body size 28 bytes.
#line 1 "ENTRY_10ea61e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea61e0(undefined4 *param_1)

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


// Reference entry 10ea6210; body size 28 bytes.
#line 1 "ENTRY_10ea6210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea6210(undefined4 *param_1)

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


// Reference entry 10ea6240; body size 28 bytes.
#line 1 "ENTRY_10ea6240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea6240(undefined4 *param_1)

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


// Reference entry 10ea6270; body size 28 bytes.
#line 1 "ENTRY_10ea6270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea6270(undefined4 *param_1)

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


// Reference entry 10ea62a0; body size 28 bytes.
#line 1 "ENTRY_10ea62a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea62a0(undefined4 *param_1)

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


// Reference entry 10ea62d0; body size 28 bytes.
#line 1 "ENTRY_10ea62d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea62d0(undefined4 *param_1)

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


// Reference entry 10ea6300; body size 28 bytes.
#line 1 "ENTRY_10ea6300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea6300(undefined4 *param_1)

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


// Reference entry 10ea6c40; body size 10 bytes.
#line 1 "ENTRY_10ea6c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ea6c40(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x10) = (undefined1)(param_2);
  return;
}


// Reference entry 10ea6c50; body size 10 bytes.
#line 1 "ENTRY_10ea6c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ea6c50(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_2);
  return;
}


// Reference entry 10ea6cc0; body size 98 bytes.
#line 1 "ENTRY_10ea6cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ea6cc0(SCStr *param_2,SCStr *param_3,SCStr *param_4)
{
  int param_1 = (int )this;
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)((SCStr *)(param_1 + 0x10));
  if ((SCStr *)((param_2)) != (SCStr *)(pSVar1)) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(pSVar1))->int_addref();
  }
  pSVar1 = (SCStr *)((SCStr *)(param_1 + 0x14));
  if ((SCStr *)((param_3)) != (SCStr *)(pSVar1)) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)param_3));
    ((SCStr *)(pSVar1))->int_addref();
  }
  pSVar1 = (SCStr *)((SCStr *)(param_1 + 0x38));
  if ((SCStr *)((param_4)) != (SCStr *)(pSVar1)) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)param_4));
    ((SCStr *)(pSVar1))->int_addref();
  }
  return;
}


// Reference entry 10ea6f70; body size 25 bytes.
#line 1 "ENTRY_10ea6f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ea6f70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ea6f90; body size 22 bytes.
#line 1 "ENTRY_10ea6f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ea6f90(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ea6fd0; body size 18 bytes.
#line 1 "ENTRY_10ea6fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ea6fd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ea7150; body size 18 bytes.
#line 1 "ENTRY_10ea7150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ea7150(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ea7560; body size 3 bytes.
#line 1 "ENTRY_10ea7560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ea7560(void)

{
  return;
}


// Reference entry 10ea7570; body size 25 bytes.
#line 1 "ENTRY_10ea7570"

__declspec(naked) void FUN_10ea7570(void)

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



// Reference entry 10ea7810; body size 5 bytes.
#line 1 "ENTRY_10ea7810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ea7810(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ea7820; body size 13 bytes.
#line 1 "ENTRY_10ea7820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ea7820(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ea7830; body size 13 bytes.
#line 1 "ENTRY_10ea7830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ea7830(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ea7840; body size 113 bytes.
#line 1 "ENTRY_10ea7840"

__declspec(naked) void FUN_10ea7840(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm push dword ptr [esp + 0x10]
  __asm mov edi, ecx
  __asm mov eax, dword ptr [esi]
  __asm push dword ptr [edi]
  __asm push dword ptr [eax + 4]
  __asm call LAB_1002bb07
  __asm mov ecx, dword ptr [edi]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov eax, dword ptr [esi + 4]
  __asm mov esi, dword ptr [edi]
  __asm mov dword ptr [edi + 4], eax
  __asm mov edx, dword ptr [esi + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm jne 0x10ea78a5
  __asm mov ecx, dword ptr [edx]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm jne 0x10ea7882
  __asm mov eax, dword ptr [ecx]
  __asm mov edx, ecx
  __asm mov ecx, eax
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x10ea7876
  __asm mov dword ptr [esi], edx
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10ea789d
  __asm mov ecx, eax
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x10ea7892
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



// Reference entry 10ea78d0; body size 113 bytes.
#line 1 "ENTRY_10ea78d0"

__declspec(naked) void FUN_10ea78d0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm push dword ptr [esp + 0x10]
  __asm mov edi, ecx
  __asm mov eax, dword ptr [esi]
  __asm push dword ptr [edi]
  __asm push dword ptr [eax + 4]
  __asm call LAB_100181a6
  __asm mov ecx, dword ptr [edi]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov eax, dword ptr [esi + 4]
  __asm mov esi, dword ptr [edi]
  __asm mov dword ptr [edi + 4], eax
  __asm mov edx, dword ptr [esi + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm jne 0x10ea7935
  __asm mov ecx, dword ptr [edx]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm jne 0x10ea7912
  __asm mov eax, dword ptr [ecx]
  __asm mov edx, ecx
  __asm mov ecx, eax
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x10ea7906
  __asm mov dword ptr [esi], edx
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10ea792d
  __asm mov ecx, eax
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x10ea7922
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



// Reference entry 10ea7ce0; body size 33 bytes.
#line 1 "ENTRY_10ea7ce0"

__declspec(naked) void FUN_10ea7ce0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm cmp esi, edi
  __asm je 0x10ea7cfe
  __asm nop
  __asm mov ecx, esi
  __asm call LAB_10036ed0
  __asm add esi, 0x4c
  __asm cmp esi, edi
  __asm jne 0x10ea7cf0
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10ea7d10; body size 23 bytes.
#line 1 "ENTRY_10ea7d10"

__declspec(naked) void FUN_10ea7d10(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm call LAB_100891cb
  __asm add dword ptr [esi + 4], 0x4c
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ea7d30; body size 23 bytes.
#line 1 "ENTRY_10ea7d30"

__declspec(naked) void FUN_10ea7d30(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm call LAB_10003ee5
  __asm add dword ptr [esi + 4], 0x4c
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ea7d50; body size 23 bytes.
#line 1 "ENTRY_10ea7d50"

__declspec(naked) void FUN_10ea7d50(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm call LAB_100891cb
  __asm add dword ptr [esi + 4], 0x4c
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ea8180; body size 7 bytes.
#line 1 "ENTRY_10ea8180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ea8180(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ea8190; body size 7 bytes.
#line 1 "ENTRY_10ea8190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ea8190(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ea9150; body size 8 bytes.
#line 1 "ENTRY_10ea9150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ea9150(int param_1)

{
  return (int)(param_1 + 0x4c);
}


// Reference entry 10ea98c0; body size 3 bytes.
#line 1 "ENTRY_10ea98c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ea98c0(void)

{
  return;
}


// Reference entry 10ea9bf0; body size 8 bytes.
#line 1 "ENTRY_10ea9bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ea9bf0(int param_1)

{
  return (int)(param_1 + -0x4c);
}


// Reference entry 10ea9fe0; body size 19 bytes.
#line 1 "ENTRY_10ea9fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ea9fe0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10eaa010; body size 5 bytes.
#line 1 "ENTRY_10eaa010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa010(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eaa140; body size 5 bytes.
#line 1 "ENTRY_10eaa140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa140(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eaa160; body size 5 bytes.
#line 1 "ENTRY_10eaa160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa160(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eaa170; body size 5 bytes.
#line 1 "ENTRY_10eaa170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa170(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eaa180; body size 5 bytes.
#line 1 "ENTRY_10eaa180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eaa190; body size 14 bytes.
#line 1 "ENTRY_10eaa190"

__declspec(naked) void FUN_10eaa190(void)

{
  __asm push dword ptr [esp + 0xc]
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm call LAB_100891cb
  __asm ret
}



// Reference entry 10eaa1b0; body size 14 bytes.
#line 1 "ENTRY_10eaa1b0"

__declspec(naked) void FUN_10eaa1b0(void)

{
  __asm push dword ptr [esp + 0xc]
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm call LAB_100891cb
  __asm ret
}



// Reference entry 10eaa1d0; body size 14 bytes.
#line 1 "ENTRY_10eaa1d0"

__declspec(naked) void FUN_10eaa1d0(void)

{
  __asm push dword ptr [esp + 0xc]
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm call LAB_10003ee5
  __asm ret
}



// Reference entry 10eaa1f0; body size 14 bytes.
#line 1 "ENTRY_10eaa1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eaa1f0(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
  ((SCStr *)(param_2))->m_op_ctor(param_3);
  return;
}


// Reference entry 10eaa210; body size 13 bytes.
#line 1 "ENTRY_10eaa210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eaa210(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10eaa220; body size 9 bytes.
#line 1 "ENTRY_10eaa220"

__declspec(naked) void FUN_10eaa220(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm jmp LAB_10036ed0
}



// Reference entry 10eaa230; body size 40 bytes.
#line 1 "ENTRY_10eaa230"

__declspec(naked) void FUN_10eaa230(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 4]
  __asm cmp eax, dword ptr [esi + 8]
  __asm je 0x10eaa24e
  __asm mov ecx, eax
  __asm call LAB_100891cb
  __asm add dword ptr [esi + 4], 0x4c
  __asm pop esi
  __asm ret 4
  __asm push eax
  __asm call LAB_10050a97
  __asm pop esi
  __asm ret 4
}



// Reference entry 10eaa270; body size 15 bytes.
#line 1 "ENTRY_10eaa270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa270(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10eaa290; body size 5 bytes.
#line 1 "ENTRY_10eaa290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eaa2a0; body size 5 bytes.
#line 1 "ENTRY_10eaa2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa2a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eaa2b0; body size 5 bytes.
#line 1 "ENTRY_10eaa2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa2b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eaa2c0; body size 5 bytes.
#line 1 "ENTRY_10eaa2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa2c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eaa2d0; body size 5 bytes.
#line 1 "ENTRY_10eaa2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa2d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eaa2e0; body size 5 bytes.
#line 1 "ENTRY_10eaa2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa2e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eaa300; body size 5 bytes.
#line 1 "ENTRY_10eaa300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eaa310; body size 5 bytes.
#line 1 "ENTRY_10eaa310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eaa330; body size 5 bytes.
#line 1 "ENTRY_10eaa330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eaa3e0; body size 5 bytes.
#line 1 "ENTRY_10eaa3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa3e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eaa3f0; body size 5 bytes.
#line 1 "ENTRY_10eaa3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa3f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eaa410; body size 5 bytes.
#line 1 "ENTRY_10eaa410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eaa420; body size 5 bytes.
#line 1 "ENTRY_10eaa420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa420(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eaa470; body size 19 bytes.
#line 1 "ENTRY_10eaa470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eaa470(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10eaa5a0; body size 18 bytes.
#line 1 "ENTRY_10eaa5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eaa5a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10eaa620; body size 51 bytes.
#line 1 "ENTRY_10eaa620"

__declspec(naked) void FUN_10eaa620(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
  __asm mov dword ptr [esi], eax
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov dword ptr [esi + 4], eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [ecx], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10eaa660; body size 51 bytes.
#line 1 "ENTRY_10eaa660"

__declspec(naked) void FUN_10eaa660(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
  __asm mov dword ptr [esi], eax
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov dword ptr [esi + 4], eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [ecx], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10eaa6a0; body size 16 bytes.
#line 1 "ENTRY_10eaa6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eaa6a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10eaa6c0; body size 21 bytes.
#line 1 "ENTRY_10eaa6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eaa6c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10eaa6e0; body size 11 bytes.
#line 1 "ENTRY_10eaa6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eaa6e0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10eaa6f0; body size 9 bytes.
#line 1 "ENTRY_10eaa6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eaa6f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10eaa700; body size 11 bytes.
#line 1 "ENTRY_10eaa700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eaa700(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10eaa710; body size 9 bytes.
#line 1 "ENTRY_10eaa710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eaa710(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10eaa720; body size 23 bytes.
#line 1 "ENTRY_10eaa720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eaa720(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10eaa740; body size 3 bytes.
#line 1 "ENTRY_10eaa740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eaa740(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eaa870; body size 76 bytes.
#line 1 "ENTRY_10eaa870"

__declspec(naked) void FUN_10eaa870(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
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



// Reference entry 10eaa9f0; body size 23 bytes.
#line 1 "ENTRY_10eaa9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eaa9f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10eaaa10; body size 203 bytes.
#line 1 "ENTRY_10eaaa10"

__declspec(naked) void FUN_10eaaa10(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11881068
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx], LAB_11948a70
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x41 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x34
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov word ptr [ecx + 0x38], 0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x5c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ecx + 0xe8], 0
  __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xf4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov word ptr [ecx + 0xf8], 0
  __asm mov byte ptr [ecx + 0xfa], 0
  __asm pop ecx
  __asm ret
}



// Reference entry 10eaab10; body size 74 bytes.
#line 1 "ENTRY_10eaab10"

__declspec(naked) void FUN_10eaab10(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11881068
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx], LAB_11948a8c
  __asm mov word ptr [ecx + 8], 0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}



// Reference entry 10eab5e0; body size 65 bytes.
#line 1 "ENTRY_10eab5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10eab5e0(int *param_2)
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


// Reference entry 10eab640; body size 65 bytes.
#line 1 "ENTRY_10eab640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10eab640(int *param_2)
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


// Reference entry 10eab6a0; body size 110 bytes.
#line 1 "ENTRY_10eab6a0"

__declspec(naked) void FUN_10eab6a0(void)

{
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm cmp edi, ebp
  __asm je 0x10eab707
  __asm push ebx
  __asm mov ebx, dword ptr [edi]
  __asm push esi
  __asm mov esi, dword ptr [ebx + 4]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x10eab6e0
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x80 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push dword ptr [esi + 8]
  __asm mov ecx, edi
  __asm push edi
  __asm call LAB_10022c0a
  __asm mov eax, esi
  __asm mov esi, dword ptr [esi]
  __asm push 0x14
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm cmp byte ptr [esi + 0xd], 0
  __asm je 0x10eab6c0
  __asm mov dword ptr [ebx + 4], ebx
  __asm mov dword ptr [ebx], ebx
  __asm mov dword ptr [ebx + 8], ebx
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi]
  __asm mov eax, dword ptr [ebp]
  __asm mov dword ptr [edi], eax
  __asm mov eax, dword ptr [ebp + 4]
  __asm mov dword ptr [ebp], ecx
  __asm mov ecx, dword ptr [edi + 4]
  __asm pop esi
  __asm mov dword ptr [edi + 4], eax
  __asm mov dword ptr [ebp + 4], ecx
  __asm pop ebx
  __asm mov eax, edi
  __asm pop edi
  __asm pop ebp
  __asm ret 4
}



// Reference entry 10eab730; body size 110 bytes.
#line 1 "ENTRY_10eab730"

__declspec(naked) void FUN_10eab730(void)

{
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm cmp edi, ebp
  __asm je 0x10eab797
  __asm push ebx
  __asm mov ebx, dword ptr [edi]
  __asm push esi
  __asm mov esi, dword ptr [ebx + 4]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x10eab770
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x80 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push dword ptr [esi + 8]
  __asm mov ecx, edi
  __asm push edi
  __asm call LAB_10022c0a
  __asm mov eax, esi
  __asm mov esi, dword ptr [esi]
  __asm push 0x14
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm cmp byte ptr [esi + 0xd], 0
  __asm je 0x10eab750
  __asm mov dword ptr [ebx + 4], ebx
  __asm mov dword ptr [ebx], ebx
  __asm mov dword ptr [ebx + 8], ebx
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi]
  __asm mov eax, dword ptr [ebp]
  __asm mov dword ptr [edi], eax
  __asm mov eax, dword ptr [ebp + 4]
  __asm mov dword ptr [ebp], ecx
  __asm mov ecx, dword ptr [edi + 4]
  __asm pop esi
  __asm mov dword ptr [edi + 4], eax
  __asm mov dword ptr [ebp + 4], ecx
  __asm pop ebx
  __asm mov eax, edi
  __asm pop edi
  __asm pop ebp
  __asm ret 4
}



// Reference entry 10eab9b0; body size 14 bytes.
#line 1 "ENTRY_10eab9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10eab9b0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10eab9d0; body size 14 bytes.
#line 1 "ENTRY_10eab9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10eab9d0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10eab9f0; body size 10 bytes.
#line 1 "ENTRY_10eab9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10eab9f0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(param_2 * 0x4c + *param_1);
}


// Reference entry 10eaba00; body size 7 bytes.
#line 1 "ENTRY_10eaba00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10eaba00(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10eaba10; body size 3 bytes.
#line 1 "ENTRY_10eaba10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eaba10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10eaba20; body size 3 bytes.
#line 1 "ENTRY_10eaba20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eaba20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10eaba30; body size 3 bytes.
#line 1 "ENTRY_10eaba30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eaba30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10eaba40; body size 3 bytes.
#line 1 "ENTRY_10eaba40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eaba40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10eaba50; body size 3 bytes.
#line 1 "ENTRY_10eaba50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eaba50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10eaba60; body size 6 bytes.
#line 1 "ENTRY_10eaba60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10eaba60(int *param_1)

{
  *param_1 = (int)(*param_1 + 0x4c);
  return (int *)(param_1);
}


// Reference entry 10eaba70; body size 6 bytes.
#line 1 "ENTRY_10eaba70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10eaba70(int *param_1)

{
  *param_1 = (int)(*param_1 + 0x4c);
  return (int *)(param_1);
}


// Reference entry 10eaba80; body size 16 bytes.
#line 1 "ENTRY_10eaba80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10eaba80(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(param_3 * 0x4c + *param_1);
  return;
}


// Reference entry 10eabb20; body size 12 bytes.
#line 1 "ENTRY_10eabb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10eabb20(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 0x4c);
  return (int *)(param_1);
}


// Reference entry 10eabb30; body size 12 bytes.
#line 1 "ENTRY_10eabb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10eabb30(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 0x4c);
  return (int *)(param_1);
}


// Reference entry 10eabc50; body size 31 bytes.
#line 1 "ENTRY_10eabc50"

__declspec(naked) void FUN_10eabc50(void)

{
  __asm push esi
  __asm push 0x14
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



// Reference entry 10eabca0; body size 63 bytes.
#line 1 "ENTRY_10eabca0"

__declspec(naked) void FUN_10eabca0(void)

{
  __asm mov edx, dword ptr [ecx + 8]
  __asm mov eax, 0x6bca1af3
  __asm sub edx, dword ptr [ecx]
  __asm mov ecx, 0x35e50d7
  __asm imul edx
  __asm push esi
  __asm sar edx, 5
  __asm mov esi, edx
  __asm shr esi, 0x1f
  __asm add esi, edx
  __asm mov edx, esi
  __asm _emit 0xd1 __asm _emit 0xea
  __asm sub ecx, edx
  __asm cmp esi, ecx
  __asm jbe 0x10eabccf
  __asm mov eax, 0x35e50d7
  __asm pop esi
  __asm ret 4
  __asm lea eax, [edx + esi]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10eabda0; body size 3 bytes.
#line 1 "ENTRY_10eabda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10eabda0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10eabe50; body size 3 bytes.
#line 1 "ENTRY_10eabe50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eabe50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eabe60; body size 3 bytes.
#line 1 "ENTRY_10eabe60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eabe60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eabe70; body size 3 bytes.
#line 1 "ENTRY_10eabe70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eabe70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eabe80; body size 3 bytes.
#line 1 "ENTRY_10eabe80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eabe80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eabe90; body size 3 bytes.
#line 1 "ENTRY_10eabe90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eabe90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eabea0; body size 3 bytes.
#line 1 "ENTRY_10eabea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eabea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eabeb0; body size 3 bytes.
#line 1 "ENTRY_10eabeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eabeb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eabec0; body size 3 bytes.
#line 1 "ENTRY_10eabec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eabec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eabed0; body size 30 bytes.
#line 1 "ENTRY_10eabed0"

__declspec(naked) void FUN_10eabed0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10eabeeb
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov ecx, eax
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x10eabee0
  __asm mov eax, ecx
  __asm ret
}



// Reference entry 10eabf00; body size 31 bytes.
#line 1 "ENTRY_10eabf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10eabf00(int *param_1)

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


// Reference entry 10eabfd0; body size 3 bytes.
#line 1 "ENTRY_10eabfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10eabfd0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10eabfe0; body size 3 bytes.
#line 1 "ENTRY_10eabfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10eabfe0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10eabff0; body size 11 bytes.
#line 1 "ENTRY_10eabff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eabff0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10eac000; body size 8 bytes.
#line 1 "ENTRY_10eac000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10eac000(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10eac010; body size 8 bytes.
#line 1 "ENTRY_10eac010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10eac010(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10eac020; body size 6 bytes.
#line 1 "ENTRY_10eac020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10eac020(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10eac030; body size 33 bytes.
#line 1 "ENTRY_10eac030"

__declspec(naked) void FUN_10eac030(void)

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



// Reference entry 10eac2c0; body size 3 bytes.
#line 1 "ENTRY_10eac2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eac2c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10eac2d0; body size 3 bytes.
#line 1 "ENTRY_10eac2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10eac2d0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10eac3d0; body size 90 bytes.
#line 1 "ENTRY_10eac3d0"

__declspec(naked) void FUN_10eac3d0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0xccccccc
  __asm ja 0x10eac425
  __asm lea eax, [eax + eax*4]
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x10eac410
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10eac425
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10eac40a
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x10eac420
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10eac450; body size 87 bytes.
#line 1 "ENTRY_10eac450"

__declspec(naked) void FUN_10eac450(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x35e50d7
  __asm ja 0x10eac4a2
  __asm imul eax, eax, 0x4c
  __asm cmp eax, 0x1000
  __asm jb 0x10eac48d
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10eac4a2
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10eac487
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x10eac49d
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10eac4c0; body size 11 bytes.
#line 1 "ENTRY_10eac4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10eac4c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10eac4d0; body size 23 bytes.
#line 1 "ENTRY_10eac4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eac4d0(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0x4c);
}


// Reference entry 10eac5d0; body size 60 bytes.
#line 1 "ENTRY_10eac5d0"

__declspec(naked) void FUN_10eac5d0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm lea ecx, [eax + eax*4]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x10eac5f8
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10eac605
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10eac7e0; body size 12 bytes.
#line 1 "ENTRY_10eac7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10eac7e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10eac7f0; body size 50 bytes.
#line 1 "ENTRY_10eac7f0"

__declspec(naked) void FUN_10eac7f0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm push edi
  __asm push dword ptr [esi + 4]
  __asm lea eax, [edi + 0x4c]
  __asm push eax
  __asm call LAB_100667a7
  __asm mov ecx, dword ptr [esi + 4]
  __asm add esp, 0xc
  __asm sub ecx, 0x4c
  __asm call LAB_10036ed0
  __asm mov eax, dword ptr [esp + 0xc]
  __asm add dword ptr [esi + 4], -0x4c
  __asm mov dword ptr [eax], edi
  __asm pop edi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10ead0f0; body size 7 bytes.
#line 1 "ENTRY_10ead0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10ead0f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ead1a0; body size 6 bytes.
#line 1 "ENTRY_10ead1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ead1a0(void)

{
  return (undefined4)(0x35e50d7);
}


// Reference entry 10ead1b0; body size 6 bytes.
#line 1 "ENTRY_10ead1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ead1b0(void)

{
  return (undefined4)(0x35e50d7);
}


// Reference entry 10ead1c0; body size 40 bytes.
#line 1 "ENTRY_10ead1c0"

__declspec(naked) void FUN_10ead1c0(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 4]
  __asm cmp eax, dword ptr [esi + 8]
  __asm je 0x10ead1de
  __asm mov ecx, eax
  __asm call LAB_100891cb
  __asm add dword ptr [esi + 4], 0x4c
  __asm pop esi
  __asm ret 4
  __asm push eax
  __asm call LAB_10050a97
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ead500; body size 5 bytes.
#line 1 "ENTRY_10ead500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ead500(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ead510; body size 5 bytes.
#line 1 "ENTRY_10ead510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ead510(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eae190; body size 25 bytes.
#line 1 "ENTRY_10eae190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eae190(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10eae560; body size 7 bytes.
#line 1 "ENTRY_10eae560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eae560(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10eae670; body size 81 bytes.
#line 1 "ENTRY_10eae670"

__declspec(naked) void FUN_10eae670(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10eae6be
  __asm cmp ecx, esi
  __asm jne 0x10eae6b4
  __asm mov eax, dword ptr [ecx]
  __asm push edi
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [edi + 0x24], eax
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10eae6be
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm pop edi
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
  __asm mov dword ptr [edi + 0x24], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10eae790; body size 5 bytes.
#line 1 "ENTRY_10eae790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eae790(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eae7a0; body size 5 bytes.
#line 1 "ENTRY_10eae7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eae7a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eae7b0; body size 5 bytes.
#line 1 "ENTRY_10eae7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eae7b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eae7c0; body size 21 bytes.
#line 1 "ENTRY_10eae7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eae7c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10eae7e0; body size 23 bytes.
#line 1 "ENTRY_10eae7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eae7e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10eae800; body size 3 bytes.
#line 1 "ENTRY_10eae800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eae800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eae900; body size 23 bytes.
#line 1 "ENTRY_10eae900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eae900(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb0000; body size 17 bytes.
#line 1 "ENTRY_10eb0000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10eb0000(undefined4 *param_1)

{
  thunk_FUN_106d8da0(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 10eb0020; body size 14 bytes.
#line 1 "ENTRY_10eb0020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10eb0020(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10eb0040; body size 15 bytes.
#line 1 "ENTRY_10eb0040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10eb0040(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0x28);
}


// Reference entry 10eb01b0; body size 25 bytes.
#line 1 "ENTRY_10eb01b0"

__declspec(naked) void FUN_10eb01b0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm je 0x10eb01c4
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 4]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 4
  __asm call LAB_1148a05a
}



// Reference entry 10eb01d0; body size 63 bytes.
#line 1 "ENTRY_10eb01d0"

__declspec(naked) void FUN_10eb01d0(void)

{
  __asm mov edx, dword ptr [ecx + 8]
  __asm mov eax, 0x66666667
  __asm sub edx, dword ptr [ecx]
  __asm mov ecx, 0x6666666
  __asm imul edx
  __asm push esi
  __asm sar edx, 4
  __asm mov esi, edx
  __asm shr esi, 0x1f
  __asm add esi, edx
  __asm mov edx, esi
  __asm _emit 0xd1 __asm _emit 0xea
  __asm sub ecx, edx
  __asm cmp esi, ecx
  __asm jbe 0x10eb01ff
  __asm mov eax, 0x6666666
  __asm pop esi
  __asm ret 4
  __asm lea eax, [edx + esi]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10eb02d0; body size 3 bytes.
#line 1 "ENTRY_10eb02d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb02d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb02e0; body size 3 bytes.
#line 1 "ENTRY_10eb02e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb02e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb02f0; body size 31 bytes.
#line 1 "ENTRY_10eb02f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10eb02f0(int *param_1)

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


// Reference entry 10eb0320; body size 3 bytes.
#line 1 "ENTRY_10eb0320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10eb0320(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10eb0330; body size 6 bytes.
#line 1 "ENTRY_10eb0330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10eb0330(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10eb0340; body size 26 bytes.
#line 1 "ENTRY_10eb0340"

__declspec(naked) void FUN_10eb0340(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10eb0356
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10eb0360; body size 76 bytes.
#line 1 "ENTRY_10eb0360"

__declspec(naked) void FUN_10eb0360(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10eb03a7
  __asm cmp ecx, esi
  __asm jne 0x10eb039d
  __asm mov eax, dword ptr [ecx]
  __asm push edi
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [edi + 0x24], eax
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10eb03a7
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



// Reference entry 10eb03c0; body size 24 bytes.
#line 1 "ENTRY_10eb03c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10eb03c0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10eae570(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10eb03e0; body size 24 bytes.
#line 1 "ENTRY_10eb03e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10eb03e0(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10eae570(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10eb0400; body size 24 bytes.
#line 1 "ENTRY_10eb0400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10eb0400(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10eae570(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10eb0790; body size 90 bytes.
#line 1 "ENTRY_10eb0790"

__declspec(naked) void FUN_10eb0790(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x6666666
  __asm ja 0x10eb07e5
  __asm lea eax, [eax + eax*4]
  __asm shl eax, 3
  __asm cmp eax, 0x1000
  __asm jb 0x10eb07d0
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10eb07e5
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10eb07ca
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x10eb07e0
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10eb0810; body size 13 bytes.
#line 1 "ENTRY_10eb0810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10eb0810(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10eb0820; body size 23 bytes.
#line 1 "ENTRY_10eb0820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eb0820(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0x28);
}


// Reference entry 10eb0960; body size 6 bytes.
#line 1 "ENTRY_10eb0960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb0960(void)

{
  return (undefined4)(0x6666666);
}


// Reference entry 10eb0970; body size 6 bytes.
#line 1 "ENTRY_10eb0970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb0970(void)

{
  return (undefined4)(0x6666666);
}


// Reference entry 10eb0e90; body size 23 bytes.
#line 1 "ENTRY_10eb0e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eb0e90(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0x28);
}


// Reference entry 10eb0ff0; body size 3 bytes.
#line 1 "ENTRY_10eb0ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb0ff0(void)

{
  return;
}


// Reference entry 10eb1000; body size 7 bytes.
#line 1 "ENTRY_10eb1000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb1000(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10eb1590; body size 304 bytes.
#line 1 "ENTRY_10eb1590"

__declspec(naked) void FUN_10eb1590(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm cmp esi, dword ptr [esp + 8]
  __asm je LAB_10eb16ba
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm add esi, -0x2c
  __asm push ebx
  __asm push ebp
  __asm push edi
  __asm lea ebx, [ecx + 0x30]
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00
  __asm mov al, byte ptr [esi - 8]
  __asm sub ecx, 0x34
  __asm sub ebx, 0x34
  __asm mov dword ptr [esp + 0x1c], ecx
  __asm mov byte ptr [ecx], al
  __asm lea eax, [esi + 0x28]
  __asm cmp ebx, eax
  __asm je 0x10eb15f3
  __asm lea ecx, [ebx - 0x2c]
  __asm call LAB_1005de7c
  __asm mov eax, dword ptr [esi - 4]
  __asm mov dword ptr [ebx - 0x2c], eax
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [ebx - 0x28], eax
  __asm mov eax, dword ptr [esi + 4]
  __asm mov dword ptr [ebx - 0x24], eax
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ebp, [esi + 8]
  __asm lea eax, [ebx - 0x20]
  __asm cmp eax, ebp
  __asm je 0x10eb162c
  __asm lea ecx, [ebx - 0x20]
  __asm call LAB_10005f9c
  __asm mov eax, dword ptr [ebp]
  __asm mov dword ptr [ebx - 0x20], eax
  __asm mov eax, dword ptr [esi + 0xc]
  __asm mov dword ptr [ebx - 0x1c], eax
  __asm mov eax, dword ptr [esi + 0x10]
  __asm mov dword ptr [ebx - 0x18], eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi + 0x14]
  __asm mov dword ptr [ebx - 0x14], eax
  __asm mov eax, dword ptr [esi + 0x18]
  __asm mov dword ptr [ebx - 0x10], eax
  __asm mov eax, dword ptr [esi + 0x1c]
  __asm cmp eax, dword ptr [ebx - 0xc]
  __asm je 0x10eb166f
  __asm mov ecx, dword ptr [ebx - 8]
  __asm test ecx, ecx
  __asm je 0x10eb165d
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0xf4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0xf8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov eax, dword ptr [esi + 0x1c]
  __asm mov dword ptr [ebx - 0xc], eax
  __asm mov ecx, dword ptr [esi + 0x20]
  __asm mov dword ptr [ebx - 8], ecx
  __asm test ecx, ecx
  __asm je 0x10eb166f
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm mov eax, dword ptr [esi + 0x24]
  __asm cmp eax, dword ptr [ebx - 4]
  __asm je 0x10eb16a3
  __asm mov ecx, dword ptr [ebx]
  __asm test ecx, ecx
  __asm je 0x10eb1692
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov eax, dword ptr [esi + 0x24]
  __asm mov dword ptr [ebx - 4], eax
  __asm mov ecx, dword ptr [esi + 0x28]
  __asm mov dword ptr [ebx], ecx
  __asm test ecx, ecx
  __asm je 0x10eb16a3
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm sub esi, 0x34
  __asm lea ecx, [esi + 0x2c]
  __asm cmp ecx, dword ptr [esp + 0x14]
  __asm mov ecx, dword ptr [esp + 0x1c]
  __asm jne LAB_10eb15b0
  __asm pop edi
  __asm pop ebp
  __asm pop ebx
  __asm mov eax, dword ptr [esp + 0x10]
  __asm pop esi
  __asm ret
}



// Reference entry 10eb18b0; body size 5 bytes.
#line 1 "ENTRY_10eb18b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb18b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb18c0; body size 26 bytes.
#line 1 "ENTRY_10eb18c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10eb18c0(int param_1,int param_2)

{
  return (int)((param_2 - param_1) / 0x34);
}


// Reference entry 10eb18e0; body size 5 bytes.
#line 1 "ENTRY_10eb18e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb18e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb18f0; body size 64 bytes.
#line 1 "ENTRY_10eb18f0"

__declspec(naked) void FUN_10eb18f0(void)

{
  __asm mov edx, dword ptr [esp + 8]
  __asm mov eax, 0x4ec4ec4f
  __asm push ebx
  __asm mov ebx, ecx
  __asm push edi
  __asm push dword ptr [esp + 0x10]
  __asm sub edx, dword ptr [ebx]
  __asm push dword ptr [esp + 0x1c]
  __asm imul edx
  __asm push dword ptr [esp + 0x1c]
  __asm sar edx, 4
  __asm push dword ptr [esp + 0x1c]
  __asm mov edi, edx
  __asm shr edi, 0x1f
  __asm add edi, edx
  __asm call LAB_10064ab0
  __asm mov eax, dword ptr [esp + 0xc]
  __asm imul ecx, edi, 0x34
  __asm pop edi
  __asm add ecx, dword ptr [ebx]
  __asm mov dword ptr [eax], ecx
  __asm pop ebx
  __asm ret 0x10
}



// Reference entry 10eb1940; body size 37 bytes.
#line 1 "ENTRY_10eb1940"

__declspec(naked) void FUN_10eb1940(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x10]
  __asm mov dword ptr [esp + 0xc], esi
  __asm lea ecx, [esi + 4]
  __asm call LAB_10048fb3
  __asm mov dword ptr [esi], LAB_11948f50
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}



// Reference entry 10eb1970; body size 37 bytes.
#line 1 "ENTRY_10eb1970"

__declspec(naked) void FUN_10eb1970(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x10]
  __asm mov dword ptr [esp + 0xc], esi
  __asm lea ecx, [esi + 4]
  __asm call LAB_10048fb3
  __asm mov dword ptr [esi], LAB_11948f68
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}



// Reference entry 10eb19a0; body size 37 bytes.
#line 1 "ENTRY_10eb19a0"

__declspec(naked) void FUN_10eb19a0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x10]
  __asm mov dword ptr [esp + 0xc], esi
  __asm lea ecx, [esi + 4]
  __asm call LAB_10048fb3
  __asm mov dword ptr [esi], LAB_11948f80
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}



// Reference entry 10eb19d0; body size 37 bytes.
#line 1 "ENTRY_10eb19d0"

__declspec(naked) void FUN_10eb19d0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x10]
  __asm mov dword ptr [esp + 0xc], esi
  __asm lea ecx, [esi + 4]
  __asm call LAB_10048fb3
  __asm mov dword ptr [esi], LAB_11948f38
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}



// Reference entry 10eb1a00; body size 37 bytes.
#line 1 "ENTRY_10eb1a00"

__declspec(naked) void FUN_10eb1a00(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x10]
  __asm mov dword ptr [esp + 0xc], esi
  __asm lea ecx, [esi + 4]
  __asm call LAB_10048fb3
  __asm mov dword ptr [esi], LAB_11948f20
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}



// Reference entry 10eb1a30; body size 11 bytes.
#line 1 "ENTRY_10eb1a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eb1a30(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb1a40; body size 11 bytes.
#line 1 "ENTRY_10eb1a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eb1a40(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb1a50; body size 26 bytes.
#line 1 "ENTRY_10eb1a50"

__declspec(naked) void FUN_10eb1a50(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm push 3
  __asm mov dword ptr [esp + 0xc], esi
  __asm call LAB_10089243
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10eb28c0; body size 20 bytes.
#line 1 "ENTRY_10eb28c0"

__declspec(naked) void FUN_10eb28c0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_100087f6
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10eb28f0; body size 135 bytes.
#line 1 "ENTRY_10eb28f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eb28f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  int iVar2;
  
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  iVar2 = (int)(param_2[2]);
  if ((undefined4)((iVar2)) != param_1[2]) {
    piVar1 = (int *)((int *)param_1[3]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      param_1[2] = (undefined4)(0);
      param_1[3] = (undefined4)(0);
      ((SCVtbl_2_0*)(piVar1))->v();
      iVar2 = (int)(param_2[2]);
    }
    param_1[2] = (undefined4)(iVar2);
    piVar1 = (int *)((int *)param_2[3]);
    param_1[3] = (undefined4)(piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      ((SCVtbl_1_0*)(piVar1))->v();
    }
  }
  iVar2 = (int)(param_2[4]);
  if ((undefined4)((iVar2)) != param_1[4]) {
    piVar1 = (int *)((int *)param_1[5]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      param_1[4] = (undefined4)(0);
      param_1[5] = (undefined4)(0);
      ((SCVtbl_2_0*)(piVar1))->v();
      iVar2 = (int)(param_2[4]);
    }
    param_1[4] = (undefined4)(iVar2);
    piVar1 = (int *)((int *)param_2[5]);
    param_1[5] = (undefined4)(piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      ((SCVtbl_1_0*)(piVar1))->v();
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10eb29a0; body size 12 bytes.
#line 1 "ENTRY_10eb29a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10eb29a0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(param_2 * 0x20 + *param_1);
}


// Reference entry 10eb29b0; body size 16 bytes.
#line 1 "ENTRY_10eb29b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10eb29b0(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(param_3 * 0x34 + *param_1);
  return;
}


// Reference entry 10eb2ab0; body size 3 bytes.
#line 1 "ENTRY_10eb2ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb2ab0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10eb2ac0; body size 4 bytes.
#line 1 "ENTRY_10eb2ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb2ac0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10eb2ad0; body size 3 bytes.
#line 1 "ENTRY_10eb2ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb2ad0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10eb3740; body size 11 bytes.
#line 1 "ENTRY_10eb3740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10eb3740(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10eb3750; body size 12 bytes.
#line 1 "ENTRY_10eb3750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10eb3750(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10eb3b20; body size 23 bytes.
#line 1 "ENTRY_10eb3b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eb3b20(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0x34);
}


// Reference entry 10eb3b40; body size 9 bytes.
#line 1 "ENTRY_10eb3b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eb3b40(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 5);
}


// Reference entry 10eb42a0; body size 18 bytes.
#line 1 "ENTRY_10eb42a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eb42a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb42c0; body size 18 bytes.
#line 1 "ENTRY_10eb42c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eb42c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb42e0; body size 18 bytes.
#line 1 "ENTRY_10eb42e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eb42e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb4300; body size 22 bytes.
#line 1 "ENTRY_10eb4300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eb4300(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb4320; body size 22 bytes.
#line 1 "ENTRY_10eb4320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eb4320(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb4340; body size 22 bytes.
#line 1 "ENTRY_10eb4340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eb4340(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb4360; body size 18 bytes.
#line 1 "ENTRY_10eb4360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eb4360(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb4380; body size 18 bytes.
#line 1 "ENTRY_10eb4380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eb4380(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb43a0; body size 18 bytes.
#line 1 "ENTRY_10eb43a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eb43a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb4780; body size 28 bytes.
#line 1 "ENTRY_10eb4780"

__declspec(naked) void FUN_10eb4780(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10036c23
  __asm mov byte ptr [esi + 4], 0
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 0xc
}



// Reference entry 10eb48e0; body size 22 bytes.
#line 1 "ENTRY_10eb48e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eb48e0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb4900; body size 22 bytes.
#line 1 "ENTRY_10eb4900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eb4900(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb4920; body size 22 bytes.
#line 1 "ENTRY_10eb4920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eb4920(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb49e0; body size 30 bytes.
#line 1 "ENTRY_10eb49e0"

__declspec(naked) void FUN_10eb49e0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm push dword ptr [eax]
  __asm call LAB_10036c23
  __asm mov byte ptr [esi + 4], 0
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 0x10
}



// Reference entry 10eb4b40; body size 25 bytes.
#line 1 "ENTRY_10eb4b40"

__declspec(naked) void FUN_10eb4b40(void)

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



// Reference entry 10eb4b60; body size 25 bytes.
#line 1 "ENTRY_10eb4b60"

__declspec(naked) void FUN_10eb4b60(void)

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



// Reference entry 10eb4b80; body size 25 bytes.
#line 1 "ENTRY_10eb4b80"

__declspec(naked) void FUN_10eb4b80(void)

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



// Reference entry 10eb4ba0; body size 13 bytes.
#line 1 "ENTRY_10eb4ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb4ba0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10eb4bb0; body size 13 bytes.
#line 1 "ENTRY_10eb4bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb4bb0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10eb4bc0; body size 13 bytes.
#line 1 "ENTRY_10eb4bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb4bc0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10eb4bd0; body size 13 bytes.
#line 1 "ENTRY_10eb4bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb4bd0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10eb4be0; body size 13 bytes.
#line 1 "ENTRY_10eb4be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb4be0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10eb4bf0; body size 13 bytes.
#line 1 "ENTRY_10eb4bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb4bf0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10eb4c00; body size 3 bytes.
#line 1 "ENTRY_10eb4c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb4c00(void)

{
  return;
}


// Reference entry 10eb4c10; body size 3 bytes.
#line 1 "ENTRY_10eb4c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb4c10(void)

{
  return;
}


// Reference entry 10eb4c20; body size 3 bytes.
#line 1 "ENTRY_10eb4c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb4c20(void)

{
  return;
}


// Reference entry 10eb51a0; body size 15 bytes.
#line 1 "ENTRY_10eb51a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb51a0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10eb51c0; body size 15 bytes.
#line 1 "ENTRY_10eb51c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb51c0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x20);
  return;
}


// Reference entry 10eb51e0; body size 15 bytes.
#line 1 "ENTRY_10eb51e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb51e0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10eb53d0; body size 5 bytes.
#line 1 "ENTRY_10eb53d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb53d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb53e0; body size 5 bytes.
#line 1 "ENTRY_10eb53e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb53e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb53f0; body size 5 bytes.
#line 1 "ENTRY_10eb53f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb53f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5400; body size 37 bytes.
#line 1 "ENTRY_10eb5400"

__declspec(naked) void FUN_10eb5400(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10eb5420
  __asm mov ecx, dword ptr [esp + 8]
  __asm add eax, 0x10
  __asm push eax
  __asm call LAB_10070fbd
  __asm test al, al
  __asm jne 0x10eb5420
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10eb5430; body size 37 bytes.
#line 1 "ENTRY_10eb5430"

__declspec(naked) void FUN_10eb5430(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10eb5450
  __asm mov ecx, dword ptr [esp + 8]
  __asm add eax, 0x10
  __asm push eax
  __asm call LAB_10070fbd
  __asm test al, al
  __asm jne 0x10eb5450
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10eb5460; body size 37 bytes.
#line 1 "ENTRY_10eb5460"

__declspec(naked) void FUN_10eb5460(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10eb5480
  __asm mov ecx, dword ptr [esp + 8]
  __asm add eax, 0x10
  __asm push eax
  __asm call LAB_10070fbd
  __asm test al, al
  __asm jne 0x10eb5480
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10eb5a00; body size 5 bytes.
#line 1 "ENTRY_10eb5a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5a00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5a10; body size 5 bytes.
#line 1 "ENTRY_10eb5a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5a10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5a20; body size 5 bytes.
#line 1 "ENTRY_10eb5a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5a20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5a30; body size 5 bytes.
#line 1 "ENTRY_10eb5a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5a30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5a40; body size 5 bytes.
#line 1 "ENTRY_10eb5a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5a40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5a50; body size 5 bytes.
#line 1 "ENTRY_10eb5a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5a50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5a60; body size 5 bytes.
#line 1 "ENTRY_10eb5a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5a60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5a70; body size 5 bytes.
#line 1 "ENTRY_10eb5a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5a70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5a80; body size 5 bytes.
#line 1 "ENTRY_10eb5a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5a80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5a90; body size 5 bytes.
#line 1 "ENTRY_10eb5a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5a90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5aa0; body size 5 bytes.
#line 1 "ENTRY_10eb5aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5aa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5ab0; body size 5 bytes.
#line 1 "ENTRY_10eb5ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5ab0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5ac0; body size 5 bytes.
#line 1 "ENTRY_10eb5ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5ac0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5ad0; body size 5 bytes.
#line 1 "ENTRY_10eb5ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5ad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5ae0; body size 5 bytes.
#line 1 "ENTRY_10eb5ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5ae0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5af0; body size 5 bytes.
#line 1 "ENTRY_10eb5af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5af0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5b00; body size 5 bytes.
#line 1 "ENTRY_10eb5b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5b00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5b10; body size 5 bytes.
#line 1 "ENTRY_10eb5b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5b10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5b20; body size 24 bytes.
#line 1 "ENTRY_10eb5b20"

__declspec(naked) void FUN_10eb5b20(void)

{
  __asm mov eax, dword ptr [esp + 0x10]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm mov ecx, esi
  __asm push dword ptr [eax]
  __asm call LAB_10036c23
  __asm mov byte ptr [esi + 4], 0
  __asm pop esi
  __asm ret
}



// Reference entry 10eb5e90; body size 15 bytes.
#line 1 "ENTRY_10eb5e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5e90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10eb5eb0; body size 15 bytes.
#line 1 "ENTRY_10eb5eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5eb0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10eb5ed0; body size 15 bytes.
#line 1 "ENTRY_10eb5ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5ed0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10eb5ef0; body size 15 bytes.
#line 1 "ENTRY_10eb5ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5ef0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10eb5f10; body size 15 bytes.
#line 1 "ENTRY_10eb5f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5f10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10eb5f30; body size 15 bytes.
#line 1 "ENTRY_10eb5f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5f30(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10eb5f50; body size 5 bytes.
#line 1 "ENTRY_10eb5f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5f50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5f60; body size 5 bytes.
#line 1 "ENTRY_10eb5f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5f60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5f70; body size 5 bytes.
#line 1 "ENTRY_10eb5f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5f70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5f80; body size 5 bytes.
#line 1 "ENTRY_10eb5f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5f80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5f90; body size 5 bytes.
#line 1 "ENTRY_10eb5f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5f90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5fa0; body size 5 bytes.
#line 1 "ENTRY_10eb5fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5fa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5fb0; body size 5 bytes.
#line 1 "ENTRY_10eb5fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5fb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5fc0; body size 5 bytes.
#line 1 "ENTRY_10eb5fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5fc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5fd0; body size 5 bytes.
#line 1 "ENTRY_10eb5fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5fd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb5fe0; body size 18 bytes.
#line 1 "ENTRY_10eb5fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eb5fe0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb6000; body size 18 bytes.
#line 1 "ENTRY_10eb6000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eb6000(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb6020; body size 18 bytes.
#line 1 "ENTRY_10eb6020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eb6020(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb6100; body size 11 bytes.
#line 1 "ENTRY_10eb6100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eb6100(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb6110; body size 11 bytes.
#line 1 "ENTRY_10eb6110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eb6110(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb6120; body size 11 bytes.
#line 1 "ENTRY_10eb6120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eb6120(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb62b0; body size 11 bytes.
#line 1 "ENTRY_10eb62b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eb62b0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb62c0; body size 11 bytes.
#line 1 "ENTRY_10eb62c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eb62c0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb62d0; body size 11 bytes.
#line 1 "ENTRY_10eb62d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eb62d0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb62e0; body size 16 bytes.
#line 1 "ENTRY_10eb62e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eb62e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb6300; body size 16 bytes.
#line 1 "ENTRY_10eb6300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eb6300(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb6320; body size 16 bytes.
#line 1 "ENTRY_10eb6320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eb6320(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb6340; body size 3 bytes.
#line 1 "ENTRY_10eb6340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb6340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb6350; body size 3 bytes.
#line 1 "ENTRY_10eb6350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb6350(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb6360; body size 3 bytes.
#line 1 "ENTRY_10eb6360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb6360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb6370; body size 52 bytes.
#line 1 "ENTRY_10eb6370"

__declspec(naked) void FUN_10eb6370(void)

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



// Reference entry 10eb63c0; body size 52 bytes.
#line 1 "ENTRY_10eb63c0"

__declspec(naked) void FUN_10eb63c0(void)

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



// Reference entry 10eb6410; body size 52 bytes.
#line 1 "ENTRY_10eb6410"

__declspec(naked) void FUN_10eb6410(void)

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



// Reference entry 10eb6460; body size 6 bytes.
#line 1 "ENTRY_10eb6460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10eb6460(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return (undefined1 *)(param_1);
}


// Reference entry 10eb66a0; body size 30 bytes.
#line 1 "ENTRY_10eb66a0"

__declspec(naked) void FUN_10eb66a0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push offset LAB_1186d2ee
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10eb6e10; body size 14 bytes.
#line 1 "ENTRY_10eb6e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10eb6e10(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10eb6e30; body size 14 bytes.
#line 1 "ENTRY_10eb6e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10eb6e30(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10eb6e50; body size 14 bytes.
#line 1 "ENTRY_10eb6e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10eb6e50(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10eb6e70; body size 14 bytes.
#line 1 "ENTRY_10eb6e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10eb6e70(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10eb6e90; body size 14 bytes.
#line 1 "ENTRY_10eb6e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10eb6e90(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10eb6eb0; body size 14 bytes.
#line 1 "ENTRY_10eb6eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10eb6eb0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10eb73c0; body size 6 bytes.
#line 1 "ENTRY_10eb73c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eb73c0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10eb73d0; body size 6 bytes.
#line 1 "ENTRY_10eb73d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eb73d0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10eb73e0; body size 6 bytes.
#line 1 "ENTRY_10eb73e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eb73e0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10eb73f0; body size 6 bytes.
#line 1 "ENTRY_10eb73f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eb73f0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10eb7400; body size 6 bytes.
#line 1 "ENTRY_10eb7400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eb7400(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10eb7410; body size 6 bytes.
#line 1 "ENTRY_10eb7410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eb7410(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10eb7730; body size 31 bytes.
#line 1 "ENTRY_10eb7730"

__declspec(naked) void FUN_10eb7730(void)

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



// Reference entry 10eb7760; body size 31 bytes.
#line 1 "ENTRY_10eb7760"

__declspec(naked) void FUN_10eb7760(void)

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



// Reference entry 10eb7790; body size 31 bytes.
#line 1 "ENTRY_10eb7790"

__declspec(naked) void FUN_10eb7790(void)

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



// Reference entry 10eb7820; body size 14 bytes.
#line 1 "ENTRY_10eb7820"

__declspec(naked) void FUN_10eb7820(void)

{
  __asm cmp dword ptr [ecx + 4], 0xaaaaaaa
  __asm je LAB_1000d4ae
  __asm ret
}



// Reference entry 10eb7840; body size 14 bytes.
#line 1 "ENTRY_10eb7840"

__declspec(naked) void FUN_10eb7840(void)

{
  __asm cmp dword ptr [ecx + 4], 0x7ffffff
  __asm je LAB_1000d4ae
  __asm ret
}



// Reference entry 10eb7860; body size 14 bytes.
#line 1 "ENTRY_10eb7860"

__declspec(naked) void FUN_10eb7860(void)

{
  __asm cmp dword ptr [ecx + 4], 0x9249249
  __asm je LAB_1000d4ae
  __asm ret
}



// Reference entry 10eb7880; body size 3 bytes.
#line 1 "ENTRY_10eb7880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb7880(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb7890; body size 3 bytes.
#line 1 "ENTRY_10eb7890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb7890(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb78a0; body size 3 bytes.
#line 1 "ENTRY_10eb78a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb78a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb78b0; body size 3 bytes.
#line 1 "ENTRY_10eb78b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb78b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb78c0; body size 3 bytes.
#line 1 "ENTRY_10eb78c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb78c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb78d0; body size 3 bytes.
#line 1 "ENTRY_10eb78d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb78d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb78e0; body size 3 bytes.
#line 1 "ENTRY_10eb78e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb78e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb78f0; body size 3 bytes.
#line 1 "ENTRY_10eb78f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb78f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb7900; body size 3 bytes.
#line 1 "ENTRY_10eb7900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb7900(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb7910; body size 3 bytes.
#line 1 "ENTRY_10eb7910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb7910(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb7920; body size 3 bytes.
#line 1 "ENTRY_10eb7920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb7920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb7930; body size 3 bytes.
#line 1 "ENTRY_10eb7930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb7930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb7940; body size 3 bytes.
#line 1 "ENTRY_10eb7940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb7940(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb7950; body size 3 bytes.
#line 1 "ENTRY_10eb7950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb7950(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb7960; body size 3 bytes.
#line 1 "ENTRY_10eb7960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb7960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb7970; body size 3 bytes.
#line 1 "ENTRY_10eb7970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb7970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb7980; body size 3 bytes.
#line 1 "ENTRY_10eb7980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb7980(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb7990; body size 3 bytes.
#line 1 "ENTRY_10eb7990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb7990(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb79a0; body size 3 bytes.
#line 1 "ENTRY_10eb79a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb79a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb79b0; body size 3 bytes.
#line 1 "ENTRY_10eb79b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb79b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb79c0; body size 3 bytes.
#line 1 "ENTRY_10eb79c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb79c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb79d0; body size 3 bytes.
#line 1 "ENTRY_10eb79d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb79d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb79e0; body size 3 bytes.
#line 1 "ENTRY_10eb79e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb79e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb79f0; body size 3 bytes.
#line 1 "ENTRY_10eb79f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb79f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eb81b0; body size 79 bytes.
#line 1 "ENTRY_10eb81b0"

__declspec(naked) void FUN_10eb81b0(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [edx + 8]
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [edx + 8], eax
  __asm mov eax, dword ptr [esi]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10eb81c8
  __asm mov dword ptr [eax + 4], edx
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, dword ptr [ecx]
  __asm cmp edx, dword ptr [eax + 4]
  __asm jne 0x10eb81e1
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [esi], edx
  __asm mov dword ptr [edx + 4], esi
  __asm pop esi
  __asm ret 4
  __asm mov eax, dword ptr [edx + 4]
  __asm cmp edx, dword ptr [eax]
  __asm jne 0x10eb81f3
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



// Reference entry 10eb8220; body size 79 bytes.
#line 1 "ENTRY_10eb8220"

__declspec(naked) void FUN_10eb8220(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [edx + 8]
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [edx + 8], eax
  __asm mov eax, dword ptr [esi]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10eb8238
  __asm mov dword ptr [eax + 4], edx
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, dword ptr [ecx]
  __asm cmp edx, dword ptr [eax + 4]
  __asm jne 0x10eb8251
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [esi], edx
  __asm mov dword ptr [edx + 4], esi
  __asm pop esi
  __asm ret 4
  __asm mov eax, dword ptr [edx + 4]
  __asm cmp edx, dword ptr [eax]
  __asm jne 0x10eb8263
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



// Reference entry 10eb8290; body size 79 bytes.
#line 1 "ENTRY_10eb8290"

__declspec(naked) void FUN_10eb8290(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [edx + 8]
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [edx + 8], eax
  __asm mov eax, dword ptr [esi]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10eb82a8
  __asm mov dword ptr [eax + 4], edx
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, dword ptr [ecx]
  __asm cmp edx, dword ptr [eax + 4]
  __asm jne 0x10eb82c1
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [esi], edx
  __asm mov dword ptr [edx + 4], esi
  __asm pop esi
  __asm ret 4
  __asm mov eax, dword ptr [edx + 4]
  __asm cmp edx, dword ptr [eax]
  __asm jne 0x10eb82d3
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



// Reference entry 10eb8300; body size 11 bytes.
#line 1 "ENTRY_10eb8300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb8300(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10eb8310; body size 11 bytes.
#line 1 "ENTRY_10eb8310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb8310(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10eb8320; body size 11 bytes.
#line 1 "ENTRY_10eb8320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb8320(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10eb8330; body size 83 bytes.
#line 1 "ENTRY_10eb8330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10eb8330(int *param_2)
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


// Reference entry 10eb83a0; body size 83 bytes.
#line 1 "ENTRY_10eb83a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10eb83a0(int *param_2)
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


// Reference entry 10eb8410; body size 83 bytes.
#line 1 "ENTRY_10eb8410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10eb8410(int *param_2)
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


// Reference entry 10eb8480; body size 90 bytes.
#line 1 "ENTRY_10eb8480"

__declspec(naked) void FUN_10eb8480(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0xaaaaaaa
  __asm ja 0x10eb84d5
  __asm lea eax, [eax + eax*2]
  __asm shl eax, 3
  __asm cmp eax, 0x1000
  __asm jb 0x10eb84c0
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10eb84d5
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10eb84ba
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x10eb84d0
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10eb8500; body size 87 bytes.
#line 1 "ENTRY_10eb8500"

__declspec(naked) void FUN_10eb8500(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x7ffffff
  __asm ja 0x10eb8552
  __asm shl eax, 5
  __asm cmp eax, 0x1000
  __asm jb 0x10eb853d
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10eb8552
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10eb8537
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x10eb854d
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10eb8570; body size 97 bytes.
#line 1 "ENTRY_10eb8570"

__declspec(naked) void FUN_10eb8570(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp ecx, 0x9249249
  __asm ja 0x10eb85cc
  __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xcd __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub eax, ecx
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x10eb85b7
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10eb85cc
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10eb85b1
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x10eb85c7
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10eb88c0; body size 13 bytes.
#line 1 "ENTRY_10eb88c0"

__declspec(naked) void FUN_10eb88c0(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm lea ecx, [eax + 0x38]
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 8]
}



// Reference entry 10eb88d0; body size 57 bytes.
#line 1 "ENTRY_10eb88d0"

__declspec(naked) void FUN_10eb88d0(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, dword ptr [esp + 8]
  __asm shl ecx, 3
  __asm cmp ecx, 0x1000
  __asm jb 0x10eb88f8
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10eb8903
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
  __asm jmp dword ptr [LAB_122fc888]
}



// Reference entry 10eb8920; body size 54 bytes.
#line 1 "ENTRY_10eb8920"

__declspec(naked) void FUN_10eb8920(void)

{
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [esp + 8]
  __asm shl ecx, 5
  __asm cmp ecx, 0x1000
  __asm jb 0x10eb8945
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10eb8950
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
  __asm jmp dword ptr [LAB_122fc888]
}



// Reference entry 10eb8970; body size 63 bytes.
#line 1 "ENTRY_10eb8970"

__declspec(naked) void FUN_10eb8970(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub ecx, eax
  __asm mov eax, dword ptr [esp + 8]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x10eb899e
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10eb89a9
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
  __asm jmp dword ptr [LAB_122fc888]
}



// Reference entry 10eb89c0; body size 60 bytes.
#line 1 "ENTRY_10eb89c0"

__declspec(naked) void FUN_10eb89c0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 3
  __asm cmp ecx, 0x1000
  __asm jb 0x10eb89e8
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10eb89f5
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10eb8a10; body size 57 bytes.
#line 1 "ENTRY_10eb8a10"

__declspec(naked) void FUN_10eb8a10(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 5
  __asm cmp ecx, 0x1000
  __asm jb 0x10eb8a35
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10eb8a42
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10eb8a60; body size 66 bytes.
#line 1 "ENTRY_10eb8a60"

__declspec(naked) void FUN_10eb8a60(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub ecx, eax
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x10eb8a8e
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10eb8a9b
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10eb8ac0; body size 11 bytes.
#line 1 "ENTRY_10eb8ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10eb8ac0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10eb8ad0; body size 11 bytes.
#line 1 "ENTRY_10eb8ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10eb8ad0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10eb8ae0; body size 11 bytes.
#line 1 "ENTRY_10eb8ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10eb8ae0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10eb97a0; body size 19 bytes.
#line 1 "ENTRY_10eb97a0"

__declspec(naked) void FUN_10eb97a0(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm push dword ptr [esp + 4]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, eax
  __asm call LAB_100027f7
  __asm ret 4
}



// Reference entry 10eb97c0; body size 21 bytes.
#line 1 "ENTRY_10eb97c0"

__declspec(naked) bool FUN_10eb97c0(void)

{
  __asm add ecx, 0x10
  __asm call LAB_1000ba05
  __asm mov ecx, eax
  __asm call LAB_10012517
  __asm test eax, eax
  __asm setne al
  __asm ret
}



// Reference entry 10eba210; body size 85 bytes.
#line 1 "ENTRY_10eba210"

__declspec(naked) void FUN_10eba210(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 8]
  __asm push esi
  __asm push edi
  __asm mov edi, offset LAB_121a6ab8
  __asm xor esi, esi
  __asm nop
  __asm push edi
  __asm mov ecx, ebx
  __asm call LAB_10049a94
  __asm test al, al
  __asm jne 0x10eba25d
  __asm add esi, 4
  __asm add edi, 4
  __asm cmp esi, 0x38
  __asm jb 0x10eba220
  __asm mov edi, offset LAB_121a6b1c
  __asm xor esi, esi
  __asm nop
  __asm push edi
  __asm mov ecx, ebx
  __asm call LAB_10049a94
  __asm test al, al
  __asm jne 0x10eba25d
  __asm add esi, 4
  __asm add edi, 4
  __asm cmp esi, 4
  __asm jb 0x10eba240
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 4
  __asm pop edi
  __asm pop esi
  __asm mov al, 1
  __asm pop ebx
  __asm ret 4
}



// Reference entry 10eba280; body size 21 bytes.
#line 1 "ENTRY_10eba280"

__declspec(naked) bool FUN_10eba280(void)

{
  __asm add ecx, 0x10
  __asm call LAB_1000ba05
  __asm mov ecx, eax
  __asm call LAB_10012517
  __asm test eax, eax
  __asm sete al
  __asm ret
}



// Reference entry 10eba2a0; body size 21 bytes.
#line 1 "ENTRY_10eba2a0"

__declspec(naked) bool FUN_10eba2a0(void)

{
  __asm add ecx, 0x10
  __asm call LAB_100046e2
  __asm mov ecx, eax
  __asm call LAB_10012517
  __asm test eax, eax
  __asm setne al
  __asm ret
}



// Reference entry 10eba4f0; body size 17 bytes.
#line 1 "ENTRY_10eba4f0"

__declspec(naked) void FUN_10eba4f0(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, eax
  __asm jmp LAB_10004f61
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
  __asm push ebp
}



// Reference entry 10ebb1e0; body size 6 bytes.
#line 1 "ENTRY_10ebb1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebb1e0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10ebb1f0; body size 6 bytes.
#line 1 "ENTRY_10ebb1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebb1f0(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 10ebb200; body size 6 bytes.
#line 1 "ENTRY_10ebb200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebb200(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10ebb210; body size 6 bytes.
#line 1 "ENTRY_10ebb210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebb210(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10ebb220; body size 6 bytes.
#line 1 "ENTRY_10ebb220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebb220(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 10ebb230; body size 6 bytes.
#line 1 "ENTRY_10ebb230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebb230(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10ebb450; body size 5 bytes.
#line 1 "ENTRY_10ebb450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebb450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ebb460; body size 5 bytes.
#line 1 "ENTRY_10ebb460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebb460(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ebb470; body size 5 bytes.
#line 1 "ENTRY_10ebb470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebb470(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ebc4a0; body size 25 bytes.
#line 1 "ENTRY_10ebc4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ebc4a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ebc4c0; body size 22 bytes.
#line 1 "ENTRY_10ebc4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ebc4c0(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ebc4e0; body size 3 bytes.
#line 1 "ENTRY_10ebc4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ebc4e0(void)

{
  return;
}


// Reference entry 10ebc4f0; body size 3 bytes.
#line 1 "ENTRY_10ebc4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ebc4f0(void)

{
  return;
}


// Reference entry 10ebc500; body size 3 bytes.
#line 1 "ENTRY_10ebc500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ebc500(void)

{
  return;
}


// Reference entry 10ebc510; body size 3 bytes.
#line 1 "ENTRY_10ebc510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ebc510(void)

{
  return;
}


// Reference entry 10ebc5a0; body size 39 bytes.
#line 1 "ENTRY_10ebc5a0"

__declspec(naked) void FUN_10ebc5a0(void)

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
  __asm je 0x10ebc5be
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [edi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ebc610; body size 39 bytes.
#line 1 "ENTRY_10ebc610"

__declspec(naked) void FUN_10ebc610(void)

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
  __asm je 0x10ebc62e
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [edi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ebc6c0; body size 39 bytes.
#line 1 "ENTRY_10ebc6c0"

__declspec(naked) void FUN_10ebc6c0(void)

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
  __asm je 0x10ebc6de
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [edi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ebca80; body size 7 bytes.
#line 1 "ENTRY_10ebca80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebca80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ebca90; body size 7 bytes.
#line 1 "ENTRY_10ebca90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebca90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ebcaa0; body size 7 bytes.
#line 1 "ENTRY_10ebcaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebcaa0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ebcab0; body size 7 bytes.
#line 1 "ENTRY_10ebcab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebcab0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ebcac0; body size 7 bytes.
#line 1 "ENTRY_10ebcac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebcac0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ebcad0; body size 7 bytes.
#line 1 "ENTRY_10ebcad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebcad0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ebdde0; body size 85 bytes.
#line 1 "ENTRY_10ebdde0"

__declspec(naked) void FUN_10ebdde0(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x14]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm push edi
  __asm push esi
  __asm call ebx
  __asm add esp, 8
  __asm test al, al
  __asm je 0x10ebde04
  __asm push edi
  __asm push esi
  __asm call LAB_10004697
  __asm add esp, 8
  __asm push esi
  __asm push dword ptr [esp + 0x1c]
  __asm call ebx
  __asm add esp, 8
  __asm test al, al
  __asm je 0x10ebde31
  __asm push esi
  __asm push dword ptr [esp + 0x1c]
  __asm call LAB_10004697
  __asm push edi
  __asm push esi
  __asm call ebx
  __asm add esp, 0x10
  __asm test al, al
  __asm je 0x10ebde31
  __asm push edi
  __asm push esi
  __asm call LAB_10004697
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret
}



// Reference entry 10ebde50; body size 203 bytes.
#line 1 "ENTRY_10ebde50"

__declspec(naked) void FUN_10ebde50(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm cmp esi, dword ptr [esp + 8]
  __asm je LAB_10ebdf15
  __asm push ebx
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x18]
  __asm add esi, -0x10
  __asm push edi
  __asm lea ebx, [ebp + 0x14]
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00
  __asm sub ebp, 0x24
  __asm lea eax, [esi - 0x14]
  __asm sub ebx, 0x24
  __asm cmp eax, ebp
  __asm je 0x10ebde91
  __asm mov ecx, ebp
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [esi - 0x14]
  __asm mov ecx, ebp
  __asm mov dword ptr [ebp], eax
  __asm call LAB_1002a973
  __asm mov eax, dword ptr [esi - 0xc]
  __asm mov dword ptr [ebx - 0xc], eax
  __asm cmp ebx, esi
  __asm je 0x10ebdec7
  __asm lea ecx, [ebx - 8]
  __asm call LAB_1005dcb0
  __asm mov eax, dword ptr [esi - 8]
  __asm mov dword ptr [ebx - 8], eax
  __asm mov eax, dword ptr [esi - 4]
  __asm mov dword ptr [ebx - 4], eax
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [ebx], eax
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0xf8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x06
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea edi, [ebx + 4]
  __asm lea eax, [esi + 4]
  __asm cmp edi, eax
  __asm je 0x10ebdefe
  __asm mov ecx, edi
  __asm call LAB_10051c49
  __asm mov eax, dword ptr [esi + 4]
  __asm mov dword ptr [edi], eax
  __asm mov eax, dword ptr [esi + 8]
  __asm mov dword ptr [ebx + 8], eax
  __asm mov eax, dword ptr [esi + 0xc]
  __asm mov dword ptr [ebx + 0xc], eax
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub esi, 0x24
  __asm lea ecx, [esi + 0x10]
  __asm cmp ecx, dword ptr [esp + 0x14]
  __asm jne LAB_10ebde70
  __asm pop edi
  __asm mov eax, ebp
  __asm pop ebp
  __asm pop ebx
  __asm pop esi
  __asm ret
  __asm mov eax, dword ptr [esp + 0x10]
  __asm pop esi
  __asm ret
}



// Reference entry 10ebdf50; body size 139 bytes.
#line 1 "ENTRY_10ebdf50"

__declspec(naked) void FUN_10ebdf50(void)

{
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm cmp edi, dword ptr [esp + 8]
  __asm je 0x10ebdfd5
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x14]
  __asm add edi, -0xc
  __asm push ebp
  __asm push esi
  __asm lea esi, [ebx + 8]
  __asm mov eax, dword ptr [edi]
  __asm sub ebx, 0xc
  __asm mov ebp, edi
  __asm sub esi, 0xc
  __asm mov dword ptr [esp + 0x1c], ebp
  __asm cmp eax, dword ptr [ebx]
  __asm je 0x10ebdfa7
  __asm mov ecx, dword ptr [esi - 4]
  __asm test ecx, ecx
  __asm je 0x10ebdf96
  __asm _emit 0xc7 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov eax, dword ptr [ebp]
  __asm mov dword ptr [ebx], eax
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov dword ptr [esi - 4], ecx
  __asm test ecx, ecx
  __asm je 0x10ebdfa7
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm lea ebp, [edi + 8]
  __asm cmp ebp, esi
  __asm je 0x10ebdfc1
  __asm mov ecx, esi
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [ebp]
  __asm mov ecx, esi
  __asm mov dword ptr [esi], eax
  __asm call LAB_1002a973
  __asm mov eax, dword ptr [esp + 0x14]
  __asm sub edi, 0xc
  __asm cmp dword ptr [esp + 0x1c], eax
  __asm jne 0x10ebdf68
  __asm pop esi
  __asm pop ebp
  __asm mov eax, ebx
  __asm pop ebx
  __asm pop edi
  __asm ret
  __asm mov eax, dword ptr [esp + 0x10]
  __asm pop edi
  __asm ret
}



// Reference entry 10ebe2a0; body size 8 bytes.
#line 1 "ENTRY_10ebe2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ebe2a0(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10ebeb80; body size 5 bytes.
#line 1 "ENTRY_10ebeb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebeb80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ebed80; body size 92 bytes.
#line 1 "ENTRY_10ebed80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ebed80(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

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
  thunk_FUN_10ebeb90(param_1,0,param_2 - (int)param_1 >> 3,param_4,param_5);
  return;
}


// Reference entry 10ebef10; body size 8 bytes.
#line 1 "ENTRY_10ebef10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ebef10(int param_1)

{
  return (int)(param_1 + -8);
}


// Reference entry 10ebef20; body size 186 bytes.
#line 1 "ENTRY_10ebef20"

__declspec(naked) void FUN_10ebef20(void)

{
  __asm push ebx
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm cmp dword ptr [esp + 0x18], edi
  __asm jge 0x10ebef94
  __asm push esi
  __asm push dword ptr [esp + 0x20]
  __asm lea esi, [edi - 1]
  __asm _emit 0xd1 __asm _emit 0xfe __asm _emit 0x8d __asm _emit 0x1c __asm _emit 0xf5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add ebx, ebp
  __asm push ebx
  __asm call dword ptr [esp + 0x2c]
  __asm add esp, 8
  __asm test al, al
  __asm je 0x10ebef93
  __asm mov eax, dword ptr [ebx]
  __asm cmp eax, dword ptr [ebp + edi*8]
  __asm je 0x10ebef8b
  __asm mov ecx, dword ptr [ebp + edi*8 + 4]
  __asm test ecx, ecx
  __asm je 0x10ebef77
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0xfd __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0xfd __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov eax, dword ptr [ebx]
  __asm mov dword ptr [ebp + edi*8], eax
  __asm mov ecx, dword ptr [ebx + 4]
  __asm mov dword ptr [ebp + edi*8 + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10ebef8b
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm mov edi, esi
  __asm cmp dword ptr [esp + 0x1c], esi
  __asm jl 0x10ebef32
  __asm pop esi
  __asm mov ebx, dword ptr [esp + 0x1c]
  __asm mov eax, dword ptr [ebx]
  __asm cmp eax, dword ptr [ebp + edi*8]
  __asm je 0x10ebefd6
  __asm mov ecx, dword ptr [ebp + edi*8 + 4]
  __asm test ecx, ecx
  __asm je 0x10ebefbf
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0xfd __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0xfd __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov eax, dword ptr [ebx]
  __asm mov dword ptr [ebp + edi*8], eax
  __asm mov ecx, dword ptr [ebx + 4]
  __asm mov dword ptr [ebp + edi*8 + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10ebefd6
  __asm mov eax, dword ptr [ecx]
  __asm pop edi
  __asm pop ebp
  __asm pop ebx
  __asm jmp dword ptr [eax + 4]
  __asm pop edi
  __asm pop ebp
  __asm pop ebx
  __asm ret
}



// Reference entry 10ebf820; body size 5 bytes.
#line 1 "ENTRY_10ebf820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebf820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ebf830; body size 5 bytes.
#line 1 "ENTRY_10ebf830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebf830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ebf840; body size 5 bytes.
#line 1 "ENTRY_10ebf840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebf840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ebf850; body size 5 bytes.
#line 1 "ENTRY_10ebf850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebf850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ebf860; body size 5 bytes.
#line 1 "ENTRY_10ebf860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebf860(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ebf8e0; body size 33 bytes.
#line 1 "ENTRY_10ebf8e0"

__declspec(naked) void FUN_10ebf8e0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm mov ecx, edi
  __asm push esi
  __asm call LAB_10036c23
  __asm lea eax, [esi + 4]
  __asm push eax
  __asm lea ecx, [edi + 4]
  __asm call LAB_100105d2
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10ebf910; body size 28 bytes.
#line 1 "ENTRY_10ebf910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ebf910(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10ebf940; body size 28 bytes.
#line 1 "ENTRY_10ebf940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ebf940(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10ebf970; body size 25 bytes.
#line 1 "ENTRY_10ebf970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ebf970(int param_1,int param_2)

{
  return (int)((param_2 - param_1) / 0xc);
}


// Reference entry 10ebf990; body size 26 bytes.
#line 1 "ENTRY_10ebf990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ebf990(int param_1,int param_2)

{
  return (int)((param_2 - param_1) / 0x24);
}


// Reference entry 10ebf9b0; body size 12 bytes.
#line 1 "ENTRY_10ebf9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ebf9b0(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 3);
}


// Reference entry 10ebfac0; body size 5 bytes.
#line 1 "ENTRY_10ebfac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebfac0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ebfad0; body size 5 bytes.
#line 1 "ENTRY_10ebfad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebfad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ebfae0; body size 5 bytes.
#line 1 "ENTRY_10ebfae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebfae0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ebfaf0; body size 5 bytes.
#line 1 "ENTRY_10ebfaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebfaf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ebfb00; body size 5 bytes.
#line 1 "ENTRY_10ebfb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebfb00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ebfb10; body size 67 bytes.
#line 1 "ENTRY_10ebfb10"

__declspec(naked) void FUN_10ebfb10(void)

{
  __asm mov edx, dword ptr [esp + 8]
  __asm mov eax, 0x38e38e39
  __asm push ebx
  __asm mov ebx, ecx
  __asm push edi
  __asm push dword ptr [esp + 0x10]
  __asm sub edx, dword ptr [ebx]
  __asm push dword ptr [esp + 0x1c]
  __asm imul edx
  __asm push dword ptr [esp + 0x1c]
  __asm sar edx, 3
  __asm push dword ptr [esp + 0x1c]
  __asm mov edi, edx
  __asm shr edi, 0x1f
  __asm add edi, edx
  __asm call LAB_1006b4c8
  __asm mov eax, dword ptr [ebx]
  __asm lea ecx, [edi + edi*8]
  __asm pop edi
  __asm pop ebx
  __asm lea ecx, [eax + ecx*4]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret 0x10
}



// Reference entry 10ebfb70; body size 49 bytes.
#line 1 "ENTRY_10ebfb70"

__declspec(naked) void FUN_10ebfb70(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm push edi
  __asm push dword ptr [esp + 0x10]
  __asm mov edi, ecx
  __asm mov esi, eax
  __asm push dword ptr [esp + 0x1c]
  __asm push dword ptr [esp + 0x1c]
  __asm sub esi, dword ptr [edi]
  __asm push eax
  __asm sar esi, 3
  __asm call LAB_1007ee10
  __asm mov eax, dword ptr [edi]
  __asm pop edi
  __asm lea ecx, [eax + esi*8]
  __asm mov eax, dword ptr [esp + 8]
  __asm pop esi
  __asm mov dword ptr [eax], ecx
  __asm ret 0x10
}



// Reference entry 10ebfbb0; body size 66 bytes.
#line 1 "ENTRY_10ebfbb0"

__declspec(naked) void FUN_10ebfbb0(void)

{
  __asm mov edx, dword ptr [esp + 8]
  __asm mov eax, 0x2aaaaaab
  __asm push ebx
  __asm mov ebx, ecx
  __asm push edi
  __asm push dword ptr [esp + 0x10]
  __asm sub edx, dword ptr [ebx]
  __asm push dword ptr [esp + 0x1c]
  __asm imul edx
  __asm push dword ptr [esp + 0x1c]
  __asm _emit 0xd1 __asm _emit 0xfa
  __asm push dword ptr [esp + 0x1c]
  __asm mov edi, edx
  __asm shr edi, 0x1f
  __asm add edi, edx
  __asm call LAB_10068b24
  __asm mov eax, dword ptr [ebx]
  __asm lea ecx, [edi + edi*2]
  __asm pop edi
  __asm pop ebx
  __asm lea ecx, [eax + ecx*4]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret 0x10
}



// Reference entry 10ebfd30; body size 5 bytes.
#line 1 "ENTRY_10ebfd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebfd30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ebfd40; body size 5 bytes.
#line 1 "ENTRY_10ebfd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebfd40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ebfd50; body size 31 bytes.
#line 1 "ENTRY_10ebfd50"

__declspec(naked) void FUN_10ebfd50(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov edx, ecx
  __asm mov eax, dword ptr [esp + 4]
  __asm sub edx, eax
  __asm push dword ptr [esp + 0xc]
  __asm sar edx, 3
  __asm push edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100510a0
  __asm add esp, 0x10
  __asm ret
}



// Reference entry 10ec0620; body size 9 bytes.
#line 1 "ENTRY_10ec0620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ec0620(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizLayoutTemplate);
  return (undefined4 *)(param_1);
}


// Reference entry 10ec0630; body size 9 bytes.
#line 1 "ENTRY_10ec0630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ec0630(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizLayoutTemplate);
  return (undefined4 *)(param_1);
}


// Reference entry 10ec0640; body size 11 bytes.
#line 1 "ENTRY_10ec0640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ec0640(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ec0650; body size 11 bytes.
#line 1 "ENTRY_10ec0650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ec0650(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ec0660; body size 11 bytes.
#line 1 "ENTRY_10ec0660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ec0660(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ec0670; body size 11 bytes.
#line 1 "ENTRY_10ec0670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ec0670(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ec0680; body size 11 bytes.
#line 1 "ENTRY_10ec0680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ec0680(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ec0690; body size 11 bytes.
#line 1 "ENTRY_10ec0690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ec0690(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ec06a0; body size 3 bytes.
#line 1 "ENTRY_10ec06a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ec06a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ec06b0; body size 23 bytes.
#line 1 "ENTRY_10ec06b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ec06b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ec2240; body size 38 bytes.
#line 1 "ENTRY_10ec2240"

__declspec(naked) void FUN_10ec2240(void)

{
  __asm push ecx
  __asm mov edx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10ec225f
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10ec2c70; body size 65 bytes.
#line 1 "ENTRY_10ec2c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10ec2c70(int *param_2)
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


// Reference entry 10ec2cd0; body size 12 bytes.
#line 1 "ENTRY_10ec2cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10ec2cd0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(param_2 * 0x20 + *param_1);
}


// Reference entry 10ec2ce0; body size 12 bytes.
#line 1 "ENTRY_10ec2ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10ec2ce0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(param_2 * 0x20 + *param_1);
}


// Reference entry 10ec2cf0; body size 15 bytes.
#line 1 "ENTRY_10ec2cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10ec2cf0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0x24);
}


// Reference entry 10ec2d10; body size 15 bytes.
#line 1 "ENTRY_10ec2d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10ec2d10(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0xc);
}


// Reference entry 10ec2d30; body size 12 bytes.
#line 1 "ENTRY_10ec2d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10ec2d30(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 10ec2d40; body size 63 bytes.
#line 1 "ENTRY_10ec2d40"

__declspec(naked) void FUN_10ec2d40(void)

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
  __asm jbe 0x10ec2d6f
  __asm mov eax, 0x71c71c7
  __asm pop esi
  __asm ret 4
  __asm lea eax, [edx + esi]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10ec2d90; body size 49 bytes.
#line 1 "ENTRY_10ec2d90"

__declspec(naked) void FUN_10ec2d90(void)

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
  __asm jbe 0x10ec2db1
  __asm mov eax, 0x1fffffff
  __asm pop esi
  __asm ret 4
  __asm lea eax, [esi + edx]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10ec2f10; body size 21 bytes.
#line 1 "ENTRY_10ec2f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ec2f10(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 0x24);
  return;
}


// Reference entry 10ec2f30; body size 21 bytes.
#line 1 "ENTRY_10ec2f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ec2f30(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 0xc);
  return;
}


// Reference entry 10ec2f50; body size 18 bytes.
#line 1 "ENTRY_10ec2f50"

__declspec(naked) void FUN_10ec2f50(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [ecx]
  __asm lea ecx, [ecx + eax*8]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret 8
}



// Reference entry 10ec2f70; body size 3 bytes.
#line 1 "ENTRY_10ec2f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void  __stdcall FUN_10ec2f70(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
}


// Reference entry 10ec2f80; body size 3 bytes.
#line 1 "ENTRY_10ec2f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ec2f80(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10ec34b0; body size 3 bytes.
#line 1 "ENTRY_10ec34b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ec34b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ec34c0; body size 3 bytes.
#line 1 "ENTRY_10ec34c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ec34c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ec34d0; body size 3 bytes.
#line 1 "ENTRY_10ec34d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ec34d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ec34e0; body size 3 bytes.
#line 1 "ENTRY_10ec34e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ec34e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ec3510; body size 30 bytes.
#line 1 "ENTRY_10ec3510"

__declspec(naked) void FUN_10ec3510(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm push dword ptr [eax + 4]
  __asm push dword ptr [eax]
  __asm push dword ptr [esi + 4]
  __asm call LAB_1006b4c8
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ec3660; body size 3 bytes.
#line 1 "ENTRY_10ec3660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ec3660(void)

{
  return;
}


// Reference entry 10ec6720; body size 7 bytes.
#line 1 "ENTRY_10ec6720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ec6720(int param_1)

{
  return (int)(*(int *)(param_1 + 4) + -0x20);
}


// Reference entry 10ec6730; body size 11 bytes.
#line 1 "ENTRY_10ec6730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ec6730(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ec6740; body size 11 bytes.
#line 1 "ENTRY_10ec6740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ec6740(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ec6750; body size 11 bytes.
#line 1 "ENTRY_10ec6750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ec6750(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ec6760; body size 11 bytes.
#line 1 "ENTRY_10ec6760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ec6760(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ec6770; body size 23 bytes.
#line 1 "ENTRY_10ec6770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ec6770(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0x24);
}


// Reference entry 10ec6790; body size 9 bytes.
#line 1 "ENTRY_10ec6790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ec6790(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10ec6b40; body size 12 bytes.
#line 1 "ENTRY_10ec6b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ec6b40(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ec6b50; body size 12 bytes.
#line 1 "ENTRY_10ec6b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ec6b50(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ec6b60; body size 12 bytes.
#line 1 "ENTRY_10ec6b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ec6b60(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ec6b70; body size 12 bytes.
#line 1 "ENTRY_10ec6b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ec6b70(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ec6b80; body size 12 bytes.
#line 1 "ENTRY_10ec6b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ec6b80(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ec6fa0; body size 3 bytes.
#line 1 "ENTRY_10ec6fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ec6fa0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ec6fb0; body size 3 bytes.
#line 1 "ENTRY_10ec6fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ec6fb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ec71e0; body size 20 bytes.
#line 1 "ENTRY_10ec71e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10ec71e0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10ec7900; body size 6 bytes.
#line 1 "ENTRY_10ec7900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ec7900(void)

{
  return (undefined4)(0x71c71c7);
}


// Reference entry 10ec7910; body size 6 bytes.
#line 1 "ENTRY_10ec7910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ec7910(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10ec7920; body size 6 bytes.
#line 1 "ENTRY_10ec7920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ec7920(void)

{
  return (undefined4)(0x71c71c7);
}


// Reference entry 10ec7930; body size 6 bytes.
#line 1 "ENTRY_10ec7930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ec7930(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10eca4f0; body size 9 bytes.
#line 1 "ENTRY_10eca4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eca4f0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 5);
}


// Reference entry 10eca500; body size 9 bytes.
#line 1 "ENTRY_10eca500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eca500(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 5);
}


// Reference entry 10eca510; body size 23 bytes.
#line 1 "ENTRY_10eca510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eca510(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0x24);
}


// Reference entry 10eca530; body size 22 bytes.
#line 1 "ENTRY_10eca530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eca530(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0xc);
}


// Reference entry 10eca550; body size 9 bytes.
#line 1 "ENTRY_10eca550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eca550(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 10ecaab0; body size 29 bytes.
#line 1 "ENTRY_10ecaab0"

__declspec(naked) void FUN_10ecaab0(void)

{
  __asm push dword ptr [esp + 0xc]
  __asm push dword ptr [esp + 0xc]
  __asm push dword ptr [esp + 0xc]
  __asm call LAB_1008878a
  __asm add esp, 0xc
  __asm test eax, eax
  __asm je LAB_1002bb93
  __asm ret
}



// Reference entry 10ecbed0; body size 5 bytes.
#line 1 "ENTRY_10ecbed0"

__declspec(naked) void FUN_10ecbed0(void)
{ __asm jmp FUN_10092686 }


// Reference entry 10ecfab0; body size 18 bytes.
#line 1 "ENTRY_10ecfab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ecfab0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ecfad0; body size 22 bytes.
#line 1 "ENTRY_10ecfad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ecfad0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ecfaf0; body size 18 bytes.
#line 1 "ENTRY_10ecfaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ecfaf0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ecfde0; body size 11 bytes.
#line 1 "ENTRY_10ecfde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ecfde0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ecfdf0; body size 11 bytes.
#line 1 "ENTRY_10ecfdf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ecfdf0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ecfe00; body size 22 bytes.
#line 1 "ENTRY_10ecfe00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ecfe00(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ecfe20; body size 11 bytes.
#line 1 "ENTRY_10ecfe20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ecfe20(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ecfe30; body size 11 bytes.
#line 1 "ENTRY_10ecfe30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ecfe30(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ed0050; body size 11 bytes.
#line 1 "ENTRY_10ed0050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ed0050(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ed0060; body size 11 bytes.
#line 1 "ENTRY_10ed0060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ed0060(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ed0070; body size 25 bytes.
#line 1 "ENTRY_10ed0070"

__declspec(naked) void FUN_10ed0070(void)

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



// Reference entry 10ed0090; body size 13 bytes.
#line 1 "ENTRY_10ed0090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ed0090(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ed00a0; body size 13 bytes.
#line 1 "ENTRY_10ed00a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ed00a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ed00b0; body size 3 bytes.
#line 1 "ENTRY_10ed00b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ed00b0(void)

{
  return;
}


// Reference entry 10ed0250; body size 15 bytes.
#line 1 "ENTRY_10ed0250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ed0250(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x30);
  return;
}


// Reference entry 10ed0320; body size 5 bytes.
#line 1 "ENTRY_10ed0320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0320(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed0330; body size 31 bytes.
#line 1 "ENTRY_10ed0330"

__declspec(naked) void FUN_10ed0330(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm jne 0x10ed034a
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm cmp eax, dword ptr [ecx + 0x10]
  __asm jl 0x10ed034a
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10ed0640; body size 7 bytes.
#line 1 "ENTRY_10ed0640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0640(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ed0650; body size 7 bytes.
#line 1 "ENTRY_10ed0650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0650(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ed0660; body size 5 bytes.
#line 1 "ENTRY_10ed0660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0660(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed0670; body size 5 bytes.
#line 1 "ENTRY_10ed0670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0670(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed0680; body size 5 bytes.
#line 1 "ENTRY_10ed0680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0680(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed0690; body size 5 bytes.
#line 1 "ENTRY_10ed0690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0690(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed06a0; body size 5 bytes.
#line 1 "ENTRY_10ed06a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed06a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed0890; body size 15 bytes.
#line 1 "ENTRY_10ed0890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0890(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10ed08b0; body size 15 bytes.
#line 1 "ENTRY_10ed08b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed08b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10ed08d0; body size 5 bytes.
#line 1 "ENTRY_10ed08d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed08d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed08e0; body size 5 bytes.
#line 1 "ENTRY_10ed08e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed08e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed08f0; body size 5 bytes.
#line 1 "ENTRY_10ed08f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed08f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed0900; body size 5 bytes.
#line 1 "ENTRY_10ed0900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0900(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed0910; body size 5 bytes.
#line 1 "ENTRY_10ed0910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0910(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed0920; body size 5 bytes.
#line 1 "ENTRY_10ed0920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed0930; body size 5 bytes.
#line 1 "ENTRY_10ed0930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed0940; body size 5 bytes.
#line 1 "ENTRY_10ed0940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0940(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed0950; body size 11 bytes.
#line 1 "ENTRY_10ed0950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ed0950(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10ed0960; body size 11 bytes.
#line 1 "ENTRY_10ed0960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ed0960(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10ed0970; body size 5 bytes.
#line 1 "ENTRY_10ed0970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed0980; body size 5 bytes.
#line 1 "ENTRY_10ed0980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0980(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed0990; body size 5 bytes.
#line 1 "ENTRY_10ed0990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0990(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed09a0; body size 11 bytes.
#line 1 "ENTRY_10ed09a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ed09a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizLayoutTemplate);
  return (undefined4 *)(param_1);
}


// Reference entry 10ed09b0; body size 18 bytes.
#line 1 "ENTRY_10ed09b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ed09b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ed0a90; body size 16 bytes.
#line 1 "ENTRY_10ed0a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ed0a90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ed0ab0; body size 3 bytes.
#line 1 "ENTRY_10ed0ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ed0ab0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed0ac0; body size 52 bytes.
#line 1 "ENTRY_10ed0ac0"

__declspec(naked) void FUN_10ed0ac0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x30
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



// Reference entry 10ed0b10; body size 13 bytes.
#line 1 "ENTRY_10ed0b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ed0b10(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ed0b20; body size 13 bytes.
#line 1 "ENTRY_10ed0b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ed0b20(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ed1230; body size 18 bytes.
#line 1 "ENTRY_10ed1230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10ed1230(int *param_1,int *param_2)

{
  return (bool)(*param_1 < (int)(*(param_2)));
}


// Reference entry 10ed1310; body size 31 bytes.
#line 1 "ENTRY_10ed1310"

__declspec(naked) void FUN_10ed1310(void)

{
  __asm push esi
  __asm push 0x30
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



// Reference entry 10ed1360; body size 14 bytes.
#line 1 "ENTRY_10ed1360"

__declspec(naked) void FUN_10ed1360(void)

{
  __asm cmp dword ptr [ecx + 4], 0x5555555
  __asm je LAB_1000d4ae
  __asm ret
}



// Reference entry 10ed1380; body size 3 bytes.
#line 1 "ENTRY_10ed1380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ed1380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed1390; body size 3 bytes.
#line 1 "ENTRY_10ed1390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ed1390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed13a0; body size 3 bytes.
#line 1 "ENTRY_10ed13a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ed13a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed13b0; body size 3 bytes.
#line 1 "ENTRY_10ed13b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ed13b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed13c0; body size 3 bytes.
#line 1 "ENTRY_10ed13c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ed13c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed13d0; body size 3 bytes.
#line 1 "ENTRY_10ed13d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ed13d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed13e0; body size 3 bytes.
#line 1 "ENTRY_10ed13e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ed13e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed13f0; body size 3 bytes.
#line 1 "ENTRY_10ed13f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ed13f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ed1690; body size 79 bytes.
#line 1 "ENTRY_10ed1690"

__declspec(naked) void FUN_10ed1690(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [edx + 8]
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [edx + 8], eax
  __asm mov eax, dword ptr [esi]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10ed16a8
  __asm mov dword ptr [eax + 4], edx
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, dword ptr [ecx]
  __asm cmp edx, dword ptr [eax + 4]
  __asm jne 0x10ed16c1
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [esi], edx
  __asm mov dword ptr [edx + 4], esi
  __asm pop esi
  __asm ret 4
  __asm mov eax, dword ptr [edx + 4]
  __asm cmp edx, dword ptr [eax]
  __asm jne 0x10ed16d3
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



// Reference entry 10ed1700; body size 11 bytes.
#line 1 "ENTRY_10ed1700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ed1700(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10ed1710; body size 83 bytes.
#line 1 "ENTRY_10ed1710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ed1710(int *param_2)
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


// Reference entry 10ed3840; body size 90 bytes.
#line 1 "ENTRY_10ed3840"

__declspec(naked) void FUN_10ed3840(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x5555555
  __asm ja 0x10ed3895
  __asm lea eax, [eax + eax*2]
  __asm shl eax, 4
  __asm cmp eax, 0x1000
  __asm jb 0x10ed3880
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10ed3895
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10ed387a
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x10ed3890
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10ed40d0; body size 60 bytes.
#line 1 "ENTRY_10ed40d0"

__declspec(naked) void FUN_10ed40d0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm test edi, edi
  __asm je 0x10ed40fc
  __asm mov esi, dword ptr [esp + 0x14]
  __asm mov ecx, edi
  __asm push esi
  __asm call LAB_1008be03
  __asm test al, al
  __asm je 0x10ed40fc
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov ecx, edi
  __asm push esi
  __asm call LAB_1007fcc0
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm call LAB_1007e307
  __asm mov eax, dword ptr [esp + 0xc]
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10ed9820; body size 57 bytes.
#line 1 "ENTRY_10ed9820"

__declspec(naked) void FUN_10ed9820(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, dword ptr [esp + 8]
  __asm shl ecx, 4
  __asm cmp ecx, 0x1000
  __asm jb 0x10ed9848
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10ed9853
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
  __asm jmp dword ptr [LAB_122fc888]
}



// Reference entry 10ed9870; body size 60 bytes.
#line 1 "ENTRY_10ed9870"

__declspec(naked) void FUN_10ed9870(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 4
  __asm cmp ecx, 0x1000
  __asm jb 0x10ed9898
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10ed98a5
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10ed98c0; body size 8 bytes.
#line 1 "ENTRY_10ed98c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ed98c0(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 10edf310; body size 6 bytes.
#line 1 "ENTRY_10edf310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10edf310(void)

{
  return (undefined4)(0x5555555);
}


// Reference entry 10edf320; body size 6 bytes.
#line 1 "ENTRY_10edf320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10edf320(void)

{
  return (undefined4)(0x5555555);
}


// Reference entry 10edf330; body size 4 bytes.
#line 1 "ENTRY_10edf330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10edf330(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10edf340; body size 130 bytes.
#line 1 "ENTRY_10edf340"

__declspec(naked) void FUN_10edf340(void)

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
  __asm je 0x10edf376
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi + 4], edi
  __asm test edi, edi
  __asm je 0x10edf39f
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm test ecx, ecx
  __asm je 0x10edf3a6
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



// Reference entry 10edf3f0; body size 5 bytes.
#line 1 "ENTRY_10edf3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10edf3f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10edf400; body size 70 bytes.
#line 1 "ENTRY_10edf400"

__declspec(naked) void FUN_10edf400(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0xc], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_119496b8
  __asm mov dword ptr [ecx + 0xc], LAB_119496c8
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}



// Reference entry 10edf4a0; body size 10 bytes.
#line 1 "ENTRY_10edf4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10edf4a0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10edf4b0; body size 12 bytes.
#line 1 "ENTRY_10edf4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10edf4b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10edfaf0; body size 8 bytes.
#line 1 "ENTRY_10edfaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10edfaf0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10edfb00; body size 4 bytes.
#line 1 "ENTRY_10edfb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10edfb00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10edfd90; body size 8 bytes.
#line 1 "ENTRY_10edfd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10edfd90(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10edfda0; body size 4 bytes.
#line 1 "ENTRY_10edfda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10edfda0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10edfdb0; body size 7 bytes.
#line 1 "ENTRY_10edfdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10edfdb0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10edfdc0; body size 26 bytes.
#line 1 "ENTRY_10edfdc0"

__declspec(naked) void FUN_10edfdc0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10edfdd6
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10edfde0; body size 10 bytes.
#line 1 "ENTRY_10edfde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10edfde0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10ee0700; body size 16 bytes.
#line 1 "ENTRY_10ee0700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee0700(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10ee0790; body size 4 bytes.
#line 1 "ENTRY_10ee0790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee0790(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ee0c90; body size 28 bytes.
#line 1 "ENTRY_10ee0c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ee0c90(undefined4 *param_1)

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


// Reference entry 10ee1830; body size 25 bytes.
#line 1 "ENTRY_10ee1830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ee1830(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ee1850; body size 25 bytes.
#line 1 "ENTRY_10ee1850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ee1850(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ee1870; body size 3 bytes.
#line 1 "ENTRY_10ee1870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ee1870(void)

{
  return;
}


// Reference entry 10ee1880; body size 33 bytes.
#line 1 "ENTRY_10ee1880"

__declspec(naked) void FUN_10ee1880(void)

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



// Reference entry 10ee18b0; body size 3 bytes.
#line 1 "ENTRY_10ee18b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ee18b0(void)

{
  return;
}


// Reference entry 10ee18c0; body size 18 bytes.
#line 1 "ENTRY_10ee18c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ee18c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10ee1a30; body size 30 bytes.
#line 1 "ENTRY_10ee1a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ee1a30(int *param_1,int *param_2,int *param_3)

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


// Reference entry 10ee1a60; body size 30 bytes.
#line 1 "ENTRY_10ee1a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ee1a60(int *param_1,int *param_2,int *param_3)

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


// Reference entry 10ee1a90; body size 7 bytes.
#line 1 "ENTRY_10ee1a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee1a90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ee1aa0; body size 7 bytes.
#line 1 "ENTRY_10ee1aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee1aa0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ee1ab0; body size 7 bytes.
#line 1 "ENTRY_10ee1ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee1ab0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ee1ac0; body size 33 bytes.
#line 1 "ENTRY_10ee1ac0"

__declspec(naked) void FUN_10ee1ac0(void)

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



// Reference entry 10ee1af0; body size 5 bytes.
#line 1 "ENTRY_10ee1af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee1af0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ee1b00; body size 13 bytes.
#line 1 "ENTRY_10ee1b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ee1b00(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ee1b10; body size 38 bytes.
#line 1 "ENTRY_10ee1b10"

__declspec(naked) void FUN_10ee1b10(void)

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



// Reference entry 10ee1b40; body size 5 bytes.
#line 1 "ENTRY_10ee1b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee1b40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ee1b50; body size 36 bytes.
#line 1 "ENTRY_10ee1b50"

__declspec(naked) void FUN_10ee1b50(void)

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



// Reference entry 10ee1b80; body size 36 bytes.
#line 1 "ENTRY_10ee1b80"

__declspec(naked) void FUN_10ee1b80(void)

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



// Reference entry 10ee1bb0; body size 5 bytes.
#line 1 "ENTRY_10ee1bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee1bb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ee1bc0; body size 13 bytes.
#line 1 "ENTRY_10ee1bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ee1bc0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10ee1bd0; body size 3 bytes.
#line 1 "ENTRY_10ee1bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ee1bd0(void)

{
  return;
}


// Reference entry 10ee1be0; body size 36 bytes.
#line 1 "ENTRY_10ee1be0"

__declspec(naked) void FUN_10ee1be0(void)

{
  __asm mov edx, dword ptr [ecx + 4]
  __asm cmp edx, dword ptr [ecx + 8]
  __asm je 0x10ee1bf7
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm push dword ptr [esp + 4]
  __asm push edx
  __asm call LAB_1002314b
  __asm ret 4
}



// Reference entry 10ee1c10; body size 36 bytes.
#line 1 "ENTRY_10ee1c10"

__declspec(naked) void FUN_10ee1c10(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm cmp ecx, eax
  __asm je 0x10ee1c2d
  __asm mov edx, dword ptr [esp + 0x10]
  __asm mov edx, dword ptr [edx]
  __asm cmp dword ptr [ecx], edx
  __asm je 0x10ee1c2d
  __asm add ecx, 4
  __asm cmp ecx, eax
  __asm jne 0x10ee1c22
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret
}



// Reference entry 10ee1c40; body size 5 bytes.
#line 1 "ENTRY_10ee1c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee1c40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ee1c50; body size 5 bytes.
#line 1 "ENTRY_10ee1c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee1c50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ee1c60; body size 5 bytes.
#line 1 "ENTRY_10ee1c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee1c60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ee1c70; body size 5 bytes.
#line 1 "ENTRY_10ee1c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee1c70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ee1cc0; body size 11 bytes.
#line 1 "ENTRY_10ee1cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ee1cc0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ee1cd0; body size 11 bytes.
#line 1 "ENTRY_10ee1cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ee1cd0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ee1ce0; body size 23 bytes.
#line 1 "ENTRY_10ee1ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ee1ce0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ee1d00; body size 3 bytes.
#line 1 "ENTRY_10ee1d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee1d00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ee1d90; body size 23 bytes.
#line 1 "ENTRY_10ee1d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ee1d90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ee1db0; body size 9 bytes.
#line 1 "ENTRY_10ee1db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ee1db0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_Netstart2DtlsClient_MessageHandler);
  return (undefined4 *)(param_1);
}


// Reference entry 10ee2170; body size 16 bytes.
#line 1 "ENTRY_10ee2170"

__declspec(naked) void FUN_10ee2170(void)

{
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm jne LAB_10032169
  __asm ret
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}



// Reference entry 10ee21f0; body size 3 bytes.
#line 1 "ENTRY_10ee21f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ee21f0(void)

{
  return;
}


// Reference entry 10ee2610; body size 14 bytes.
#line 1 "ENTRY_10ee2610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ee2610(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10ee2630; body size 14 bytes.
#line 1 "ENTRY_10ee2630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ee2630(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10ee2650; body size 7 bytes.
#line 1 "ENTRY_10ee2650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ee2650(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10ee2660; body size 7 bytes.
#line 1 "ENTRY_10ee2660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ee2660(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10ee2670; body size 3 bytes.
#line 1 "ENTRY_10ee2670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee2670(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ee2680; body size 3 bytes.
#line 1 "ENTRY_10ee2680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee2680(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ee2720; body size 30 bytes.
#line 1 "ENTRY_10ee2720"

__declspec(naked) void FUN_10ee2720(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm push esi
  __asm mov edi, ecx
  __asm call LAB_1005f4c0
  __asm mov dword ptr [edi], eax
  __asm mov dword ptr [edi + 4], eax
  __asm lea eax, [eax + esi*4]
  __asm mov dword ptr [edi + 8], eax
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ee2750; body size 49 bytes.
#line 1 "ENTRY_10ee2750"

__declspec(naked) void FUN_10ee2750(void)

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
  __asm jbe 0x10ee2771
  __asm mov eax, 0x3fffffff
  __asm pop esi
  __asm ret 4
  __asm lea eax, [esi + edx]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10ee2800; body size 3 bytes.
#line 1 "ENTRY_10ee2800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ee2800(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10ee2810; body size 3 bytes.
#line 1 "ENTRY_10ee2810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ee2810(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10ee2820; body size 3 bytes.
#line 1 "ENTRY_10ee2820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee2820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ee2830; body size 3 bytes.
#line 1 "ENTRY_10ee2830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee2830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ee2840; body size 3 bytes.
#line 1 "ENTRY_10ee2840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee2840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ee2850; body size 3 bytes.
#line 1 "ENTRY_10ee2850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee2850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ee2860; body size 3 bytes.
#line 1 "ENTRY_10ee2860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ee2860(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10ee2870; body size 9 bytes.
#line 1 "ENTRY_10ee2870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ee2870(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10ee28f0; body size 38 bytes.
#line 1 "ENTRY_10ee28f0"

__declspec(naked) void FUN_10ee28f0(void)

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



// Reference entry 10ee2920; body size 27 bytes.
#line 1 "ENTRY_10ee2920"

__declspec(naked) void FUN_10ee2920(void)

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



// Reference entry 10ee2950; body size 27 bytes.
#line 1 "ENTRY_10ee2950"

__declspec(naked) void FUN_10ee2950(void)

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



// Reference entry 10ee2980; body size 3 bytes.
#line 1 "ENTRY_10ee2980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee2980(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ee2990; body size 4 bytes.
#line 1 "ENTRY_10ee2990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee2990(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ee29a0; body size 3 bytes.
#line 1 "ENTRY_10ee29a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee29a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ee2d50; body size 11 bytes.
#line 1 "ENTRY_10ee2d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ee2d50(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ee30f0; body size 9 bytes.
#line 1 "ENTRY_10ee30f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ee30f0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10ee3170; body size 272 bytes.
#line 1 "ENTRY_10ee3170"

__declspec(naked) void FUN_10ee3170(void)

{
  __asm sub esp, 0x590
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x58c], eax
  __asm push ebp
  __asm push esi
  __asm mov esi, ecx
  __asm cmp dword ptr [esi + 0xa8], 0
  __asm jne 0x10ee31b0
  __asm cmp dword ptr [esi + 0xac], 0
  __asm jne 0x10ee31b0
  __asm cmp dword ptr [esi + 0xb0], 0
  __asm jne 0x10ee31b0
  __asm cmp dword ptr [esi + 0xb4], 0
  __asm je LAB_10ee3269
  __asm cmp dword ptr [esi + 0xb0], 0
  __asm push ebx
  __asm jne 0x10ee31c9
  __asm cmp dword ptr [esi + 0xb4], 0
  __asm lea eax, [esi + 0xa8]
  __asm je 0x10ee31cf
  __asm lea eax, [esi + 0xb0]
  __asm push eax
  __asm call LAB_1004679a
  __asm add esp, 4
  __asm test eax, eax
  __asm jg LAB_10ee3268
  __asm push edi
  __asm lea edi, [esi + 4]
  __asm push offset LAB_11949f8c
  __asm push edi
  __asm call LAB_10018bab
  __asm xorps xmm0, xmm0
  __asm add esp, 8
  __asm movups xmmword ptr [esi + 0xa8], xmm0
  __asm cmp dword ptr [esi + 0xb8], 2
  __asm jne 0x10ee3267
  __asm cmp dword ptr [esi + 0x84], 0
  __asm je 0x10ee3267
  __asm lea eax, [esp + 0x10]
  __asm mov dword ptr [esp + 0x10], 0x586
  __asm push eax
  __asm lea eax, [esp + 0x18]
  __asm push eax
  __asm call LAB_1009390f
  __asm add esp, 8
  __asm test al, al
  __asm jne 0x10ee3233
  __asm push offset LAB_1194a3f0
  __asm jmp 0x10ee325e
  __asm push dword ptr [esp + 0x10]
  __asm mov ecx, dword ptr [esi + 0x84]
  __asm lea eax, [esp + 0x18]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10ee3252
  __asm push offset LAB_1194a410
  __asm jmp 0x10ee325e
  __asm mov byte ptr [esi + 0xa4], 1
  __asm push offset LAB_1194a42c
  __asm push edi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm pop edi
  __asm pop ebx
  __asm mov ecx, dword ptr [esp + 0x594]
  __asm pop esi
  __asm pop ebp
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
}



// Reference entry 10ee3490; body size 61 bytes.
#line 1 "ENTRY_10ee3490"

__declspec(naked) void FUN_10ee3490(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x10ee34b9
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10ee34c6
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10ee4140; body size 12 bytes.
#line 1 "ENTRY_10ee4140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ee4140(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ee42b0; body size 42 bytes.
#line 1 "ENTRY_10ee42b0"

__declspec(naked) void FUN_10ee42b0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 4]
  __asm lea edx, [edi + 4]
  __asm sub eax, edx
  __asm push eax
  __asm push edx
  __asm push edi
  __asm call LAB_1148cdf3
  __asm mov eax, dword ptr [esp + 0x18]
  __asm add esp, 0xc
  __asm add dword ptr [esi + 4], -4
  __asm mov dword ptr [eax], edi
  __asm pop edi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10ee49a0; body size 24 bytes.
#line 1 "ENTRY_10ee49a0"

__declspec(naked) void FUN_10ee49a0(void)

{
  __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xb8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx + 0x84]
  __asm call LAB_100973c0
  __asm xor eax, eax
  __asm ret
}



// Reference entry 10ee4e40; body size 355 bytes.
#line 1 "ENTRY_10ee4e40"

__declspec(naked) void FUN_10ee4e40(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x58c]
  __asm sub esp, 0x58c
  __asm push -1
  __asm push offset LAB_1175f295
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x10
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm mov dword ptr [ebp + 0x588], eax
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ebx, ecx
  __asm mov eax, dword ptr [ebp + 0x594]
  __asm lea ecx, [ebp]
  __asm xor edi, edi
  __asm lea esi, [ebx + 4]
  __asm push edi
  __asm push 0x586
  __asm push ecx
  __asm push dword ptr [ebp + 0x598]
  __asm push eax
  __asm call LAB_1005313e
  __asm add esp, 0x14
  __asm test al, al
  __asm jne 0x10ee4eb8
  __asm push offset LAB_1194abec
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov edi, 0x3e8
  __asm jmp 0x10ee4eca
  __asm lea eax, [ebp]
  __asm push eax
  __asm push offset LAB_1194ac2c
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 0xc
  __asm lea eax, [ebp]
  __asm push eax
  __asm lea ecx, [ebp - 0x10]
  __asm call LAB_1005273e
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test edi, edi
  __asm jne 0x10ee4f55
  __asm lea eax, [ebx + 8]
  __asm push eax
  __asm lea ecx, [ebp - 0x1c]
  __asm call LAB_1006ae2e
  __asm mov edi, dword ptr [ebp - 0x1c]
  __asm mov esi, edi
  __asm mov ebx, dword ptr [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 1
  __asm cmp esi, ebx
  __asm je 0x10ee4f12
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov ecx, dword ptr [esi]
  __asm lea edx, [ebp - 0x10]
  __asm push edx
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x20]
  __asm add esi, 4
  __asm cmp esi, ebx
  __asm jne 0x10ee4f00
  __asm mov byte ptr [ebp - 4], 0
  __asm test edi, edi
  __asm je 0x10ee4f6f
  __asm mov eax, dword ptr [ebp - 0x14]
  __asm sub eax, edi
  __asm sar eax, 2
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, edi
  __asm cmp ecx, 0x1000
  __asm jb 0x10ee4f49
  __asm mov edi, dword ptr [edi - 4]
  __asm add ecx, 0x23
  __asm sub eax, edi
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm jbe 0x10ee4f49
  __asm call dword ptr [LAB_122fc888]
  __asm push ecx
  __asm push edi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm jmp 0x10ee4f6f
  __asm push offset LAB_1194a248
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov ecx, ebx
  __asm push 7
  __asm push 1
  __asm push edi
  __asm call LAB_10038294
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov ecx, dword ptr [ebp + 0x588]
  __asm xor ecx, ebp
  __asm call LAB_100382f3
  __asm lea esp, [ebp + 0x58c]
  __asm pop ebp
  __asm ret 8
}



// Reference entry 10ee5f20; body size 329 bytes.
#line 1 "ENTRY_10ee5f20"

__declspec(naked) void FUN_10ee5f20(void)

{
  __asm sub esp, 0x5b4
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x5b0], eax
  __asm mov edx, dword ptr [esp + 0x5b8]
  __asm push edi
  __asm mov edi, ecx
  __asm mov ecx, dword ptr [edi + 0x84]
  __asm test ecx, ecx
  __asm jne 0x10ee5f65
  __asm mov eax, 0x3e8
  __asm pop edi
  __asm mov ecx, dword ptr [esp + 0x5b0]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x5b4
  __asm ret 8
  __asm mov eax, dword ptr [esp + 0x5c0]
  __asm test eax, eax
  __asm je 0x10ee5f7d
  __asm push eax
  __asm push edx
  __asm call LAB_1003f418
  __asm mov ecx, dword ptr [edi + 0x84]
  __asm push ebx
  __asm push esi
  __asm xor ebx, ebx
  __asm call LAB_100022d9
  __asm test al, al
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [esp + 0xc]
  __asm mov ecx, 0x40
  __asm push eax
  __asm lea eax, [esp + 0x18]
  __asm cmovne ebx, ecx
  __asm mov ecx, dword ptr [edi + 0x84]
  __asm lea esi, [edi + 4]
  __asm push eax
  __asm call LAB_1009009d
  __asm test al, al
  __asm jne 0x10ee5fcc
  __asm push offset LAB_1194a338
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm jmp LAB_10ee604f
  __asm push 0
  __asm push dword ptr [esp + 0x10]
  __asm lea eax, [esp + 0x1c]
  __asm mov dword ptr [esp + 0x18], 0x586
  __asm push eax
  __asm push ebx
  __asm push offset LAB_11889e7c
  __asm push 0x2a
  __asm lea eax, [esp + 0x28]
  __asm push eax
  __asm lea eax, [esp + 0x50]
  __asm push eax
  __asm call LAB_10072bab
  __asm add esp, 0x20
  __asm test al, al
  __asm jne 0x10ee6012
  __asm push offset LAB_1194a378
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm jmp 0x10ee604f
  __asm push dword ptr [esp + 0x10]
  __asm mov ecx, dword ptr [edi + 0x84]
  __asm lea eax, [esp + 0x38]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10ee603f
  __asm push offset LAB_1194a3a0
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm jmp 0x10ee604f
  __asm push offset LAB_1194a3c8
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm xor eax, eax
  __asm mov ecx, dword ptr [esp + 0x5bc]
  __asm pop esi
  __asm pop ebx
  __asm pop edi
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x5b4
  __asm ret 8
}



// Reference entry 10ee60c0; body size 242 bytes.
#line 1 "ENTRY_10ee60c0"

__declspec(naked) void FUN_10ee60c0(void)

{
  __asm sub esp, 0x590
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x58c], eax
  __asm push edi
  __asm mov edi, ecx
  __asm cmp dword ptr [edi + 0x84], 0
  __asm jne 0x10ee60fb
  __asm mov eax, 0x3e8
  __asm pop edi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push esi
  __asm push 0
  __asm lea eax, [esp + 0xc]
  __asm mov dword ptr [esp + 0xc], 0x586
  __asm push eax
  __asm lea eax, [esp + 0x14]
  __asm push eax
  __asm lea esi, [edi + 4]
  __asm call LAB_10074276
  __asm add esp, 0xc
  __asm test al, al
  __asm jne 0x10ee6149
  __asm push offset LAB_1194a708
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm pop esi
  __asm pop edi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push dword ptr [esp + 8]
  __asm mov ecx, dword ptr [edi + 0x84]
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10ee618b
  __asm push offset LAB_1194a72c
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm pop esi
  __asm pop edi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push offset LAB_1194a750
  __asm push esi
  __asm call LAB_10018bab
  __asm mov ecx, dword ptr [esp + 0x59c]
  __asm add esp, 8
  __asm xor eax, eax
  __asm pop esi
  __asm pop edi
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
}



// Reference entry 10ee61f0; body size 224 bytes.
#line 1 "ENTRY_10ee61f0"

__declspec(naked) void FUN_10ee61f0(void)

{
  __asm sub esp, 0x590
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x58c], eax
  __asm mov eax, dword ptr [esp + 0x594]
  __asm push edi
  __asm mov edi, ecx
  __asm cmp dword ptr [edi + 0x84], 0
  __asm jne 0x10ee6234
  __asm mov eax, 0x3e8
  __asm pop edi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret 4
  __asm mov eax, dword ptr [eax]
  __asm mov ecx, offset LAB_1186d2ee
  __asm push esi
  __asm test eax, eax
  __asm mov dword ptr [esp + 8], 0x586
  __asm push 0
  __asm cmovne ecx, eax
  __asm lea esi, [edi + 4]
  __asm push ecx
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm lea eax, [esp + 0x18]
  __asm push eax
  __asm call LAB_10006ce4
  __asm add esp, 0x10
  __asm test al, al
  __asm jne 0x10ee627a
  __asm push offset LAB_1194a2f0
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm jmp 0x10ee62b7
  __asm push dword ptr [esp + 8]
  __asm mov ecx, dword ptr [edi + 0x84]
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10ee62a7
  __asm push offset LAB_1194a308
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm jmp 0x10ee62b7
  __asm push offset LAB_1194a320
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm xor eax, eax
  __asm mov ecx, dword ptr [esp + 0x594]
  __asm pop esi
  __asm pop edi
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret 4
}



// Reference entry 10ee6310; body size 242 bytes.
#line 1 "ENTRY_10ee6310"

__declspec(naked) void FUN_10ee6310(void)

{
  __asm sub esp, 0x590
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x58c], eax
  __asm push edi
  __asm mov edi, ecx
  __asm cmp dword ptr [edi + 0x84], 0
  __asm jne 0x10ee634b
  __asm mov eax, 0x3e8
  __asm pop edi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push esi
  __asm push 0
  __asm lea eax, [esp + 0xc]
  __asm mov dword ptr [esp + 0xc], 0x586
  __asm push eax
  __asm lea eax, [esp + 0x14]
  __asm push eax
  __asm lea esi, [edi + 4]
  __asm call LAB_1000c6bc
  __asm add esp, 0xc
  __asm test al, al
  __asm jne 0x10ee6399
  __asm push offset LAB_1194a81c
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm pop esi
  __asm pop edi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push dword ptr [esp + 8]
  __asm mov ecx, dword ptr [edi + 0x84]
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10ee63db
  __asm push offset LAB_1194a838
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm pop esi
  __asm pop edi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push offset LAB_1194a854
  __asm push esi
  __asm call LAB_10018bab
  __asm mov ecx, dword ptr [esp + 0x59c]
  __asm add esp, 8
  __asm xor eax, eax
  __asm pop esi
  __asm pop edi
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
}



// Reference entry 10ee6440; body size 240 bytes.
#line 1 "ENTRY_10ee6440"

__declspec(naked) void FUN_10ee6440(void)

{
  __asm sub esp, 0x590
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x58c], eax
  __asm push edi
  __asm mov edi, ecx
  __asm cmp dword ptr [edi + 0x84], 0
  __asm jne 0x10ee647b
  __asm mov eax, 0x3e8
  __asm pop edi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push esi
  __asm lea eax, [esp + 8]
  __asm mov dword ptr [esp + 8], 0x586
  __asm push eax
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm lea esi, [edi + 4]
  __asm call LAB_1007b238
  __asm add esp, 8
  __asm test al, al
  __asm jne 0x10ee64c7
  __asm push offset LAB_1194a62c
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm pop esi
  __asm pop edi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push dword ptr [esp + 8]
  __asm mov ecx, dword ptr [edi + 0x84]
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10ee6509
  __asm push offset LAB_1194a650
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm pop esi
  __asm pop edi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push offset LAB_1194a670
  __asm push esi
  __asm call LAB_10018bab
  __asm mov ecx, dword ptr [esp + 0x59c]
  __asm add esp, 8
  __asm xor eax, eax
  __asm pop esi
  __asm pop edi
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
}



// Reference entry 10ee6570; body size 247 bytes.
#line 1 "ENTRY_10ee6570"

__declspec(naked) void FUN_10ee6570(void)

{
  __asm sub esp, 0x590
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x58c], eax
  __asm push esi
  __asm mov esi, ecx
  __asm cmp dword ptr [esi + 0x84], 0
  __asm jne 0x10ee65ab
  __asm mov eax, 0x3e8
  __asm pop esi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push edi
  __asm lea eax, [esp + 8]
  __asm mov dword ptr [esp + 8], 0x586
  __asm push eax
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm lea edi, [esi + 4]
  __asm call LAB_1009390f
  __asm add esp, 8
  __asm test al, al
  __asm jne 0x10ee65f7
  __asm push offset LAB_1194a3f0
  __asm push edi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm pop edi
  __asm pop esi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push dword ptr [esp + 8]
  __asm mov ecx, dword ptr [esi + 0x84]
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10ee6639
  __asm push offset LAB_1194a410
  __asm push edi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm pop edi
  __asm pop esi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push offset LAB_1194a42c
  __asm push edi
  __asm mov byte ptr [esi + 0xa4], 1
  __asm call LAB_10018bab
  __asm mov ecx, dword ptr [esp + 0x59c]
  __asm add esp, 8
  __asm xor eax, eax
  __asm pop edi
  __asm pop esi
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
}



// Reference entry 10ee66b0; body size 262 bytes.
#line 1 "ENTRY_10ee66b0"

__declspec(naked) void FUN_10ee66b0(void)

{
  __asm sub esp, 0x590
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x58c], eax
  __asm mov eax, dword ptr [esp + 0x598]
  __asm mov edx, dword ptr [esp + 0x5a0]
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x5b0]
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x5bc]
  __asm push edi
  __asm mov edi, ecx
  __asm mov ecx, dword ptr [esp + 0x5a8]
  __asm cmp dword ptr [edi + 0x84], 0
  __asm jne 0x10ee66ff
  __asm mov eax, 0x3e8
  __asm jmp LAB_10ee679c
  __asm push esi
  __asm push dword ptr [esp + 0x5c8]
  __asm mov dword ptr [esp + 0x14], 0x586
  __asm lea esi, [edi + 4]
  __asm push ebp
  __asm push dword ptr [esp + 0x5c8]
  __asm push ebx
  __asm push dword ptr [esp + 0x5c8]
  __asm push dword ptr [esp + 0x5c8]
  __asm push edx
  __asm push ecx
  __asm push eax
  __asm push dword ptr [esp + 0x5c8]
  __asm lea eax, [esp + 0x38]
  __asm push eax
  __asm lea eax, [esp + 0x40]
  __asm push eax
  __asm call LAB_1008979d
  __asm add esp, 0x30
  __asm test al, al
  __asm jne 0x10ee675e
  __asm push offset LAB_1194a694
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm jmp 0x10ee679b
  __asm push dword ptr [esp + 0x10]
  __asm mov ecx, dword ptr [edi + 0x84]
  __asm lea eax, [esp + 0x18]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10ee678b
  __asm push offset LAB_1194a6bc
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm jmp 0x10ee679b
  __asm push offset LAB_1194a6e0
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm xor eax, eax
  __asm pop esi
  __asm mov ecx, dword ptr [esp + 0x598]
  __asm pop edi
  __asm pop ebp
  __asm pop ebx
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret 0x28
}



// Reference entry 10ee6800; body size 453 bytes.
#line 1 "ENTRY_10ee6800"

__declspec(naked) void FUN_10ee6800(void)

{
  __asm sub esp, 0x9bc
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x9b8], eax
  __asm push edi
  __asm mov edi, ecx
  __asm mov ecx, dword ptr [edi + 0x84]
  __asm test ecx, ecx
  __asm je 0x10ee6855
  __asm lea eax, [esp + 8]
  __asm mov dword ptr [esp + 0xc], 0x586
  __asm push eax
  __asm lea eax, [esp + 0x38]
  __asm mov dword ptr [esp + 0xc], 0x400
  __asm push eax
  __asm call LAB_100971ae
  __asm test al, al
  __asm jne 0x10ee6872
  __asm lea eax, [edi + 4]
  __asm push offset LAB_1194a464
  __asm push eax
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm pop edi
  __asm mov ecx, dword ptr [esp + 0x9b8]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x9bc
  __asm ret 0x10
  __asm cmp byte ptr [esp + 0x9c8], 0
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x9c8]
  __asm jne 0x10ee68c5
  __asm cmp esi, 2
  __asm je 0x10ee68bd
  __asm cmp esi, 5
  __asm je 0x10ee68bd
  __asm cmp esi, 1
  __asm jne 0x10ee68a3
  __asm xor eax, eax
  __asm mov byte ptr [esp + 0x9cc], 0xf
  __asm mov dword ptr [esp + 8], eax
  __asm jmp 0x10ee6910
  __asm cmp esi, 3
  __asm je 0x10ee68ad
  __asm cmp esi, 4
  __asm jne 0x10ee68c5
  __asm mov ecx, edi
  __asm call LAB_10087713
  __asm mov byte ptr [esp + 0x9cc], al
  __asm jmp 0x10ee68c5
  __asm mov byte ptr [esp + 0x9cc], 0x18
  __asm xor eax, eax
  __asm mov dword ptr [esp + 8], eax
  __asm cmp esi, 4
  __asm jne 0x10ee6910
  __asm mov ecx, dword ptr [edi + 0x84]
  __asm lea eax, [esp + 8]
  __asm push eax
  __asm lea eax, [esp + 0x18]
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm call LAB_10020e50
  __asm test al, al
  __asm jne 0x10ee690c
  __asm lea eax, [edi + 4]
  __asm push offset LAB_1194a49c
  __asm push eax
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm jmp LAB_10ee69ac
  __asm mov eax, dword ptr [esp + 8]
  __asm push ebx
  __asm push dword ptr [esp + 0x9d8]
  __asm lea ebx, [edi + 4]
  __asm push dword ptr [esp + 0x9d8]
  __asm push 5
  __asm push dword ptr [esp + 0x9dc]
  __asm push eax
  __asm lea eax, [esp + 0x2c]
  __asm push eax
  __asm push dword ptr [esp + 0x28]
  __asm lea eax, [esp + 0x58]
  __asm push eax
  __asm push esi
  __asm lea eax, [esp + 0x38]
  __asm push eax
  __asm lea eax, [esp + 0x464]
  __asm push eax
  __asm call LAB_100804f4
  __asm add esp, 0x2c
  __asm test al, al
  __asm jne 0x10ee696a
  __asm push esi
  __asm push offset LAB_1194a4d4
  __asm push ebx
  __asm call LAB_10018bab
  __asm add esp, 0xc
  __asm mov eax, 0x3e8
  __asm jmp 0x10ee69ab
  __asm push dword ptr [esp + 0x14]
  __asm mov ecx, dword ptr [edi + 0x84]
  __asm lea eax, [esp + 0x440]
  __asm push eax
  __asm call LAB_10018dd1
  __asm push esi
  __asm test al, al
  __asm jne 0x10ee699b
  __asm push offset LAB_1194a500
  __asm push ebx
  __asm call LAB_10018bab
  __asm add esp, 0xc
  __asm mov eax, 0x3e8
  __asm jmp 0x10ee69ab
  __asm push offset LAB_1194a52c
  __asm push ebx
  __asm call LAB_10018bab
  __asm add esp, 0xc
  __asm xor eax, eax
  __asm pop ebx
  __asm mov ecx, dword ptr [esp + 0x9c0]
  __asm pop esi
  __asm pop edi
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x9bc
  __asm ret 0x10
}



// Reference entry 10ee6a40; body size 209 bytes.
#line 1 "ENTRY_10ee6a40"

__declspec(naked) void FUN_10ee6a40(void)

{
  __asm sub esp, 0x590
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x58c], eax
  __asm push edi
  __asm mov edi, ecx
  __asm cmp dword ptr [edi + 0x84], 0
  __asm jne 0x10ee6a7d
  __asm mov eax, 0x3e8
  __asm pop edi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret 4
  __asm push esi
  __asm push dword ptr [esp + 0x59c]
  __asm lea eax, [esp + 0xc]
  __asm mov dword ptr [esp + 0xc], 0x586
  __asm push eax
  __asm lea eax, [esp + 0x14]
  __asm push eax
  __asm lea esi, [edi + 4]
  __asm call LAB_100880af
  __asm add esp, 0xc
  __asm test al, al
  __asm jne 0x10ee6abb
  __asm push offset LAB_1194a55c
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm jmp 0x10ee6af8
  __asm push dword ptr [esp + 8]
  __asm mov ecx, dword ptr [edi + 0x84]
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10ee6ae8
  __asm push offset LAB_1194a57c
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm jmp 0x10ee6af8
  __asm push offset LAB_1194a59c
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm xor eax, eax
  __asm mov ecx, dword ptr [esp + 0x594]
  __asm pop esi
  __asm pop edi
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret 4
}



// Reference entry 10ee6b50; body size 211 bytes.
#line 1 "ENTRY_10ee6b50"

__declspec(naked) void FUN_10ee6b50(void)

{
  __asm sub esp, 0x590
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x58c], eax
  __asm push edi
  __asm mov edi, ecx
  __asm cmp dword ptr [edi + 0x84], 0
  __asm jne 0x10ee6b8d
  __asm mov eax, 0x3e8
  __asm pop edi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret 4
  __asm push esi
  __asm push 0
  __asm push dword ptr [esp + 0x5a0]
  __asm lea eax, [esp + 0x10]
  __asm mov dword ptr [esp + 0x10], 0x586
  __asm push eax
  __asm lea eax, [esp + 0x18]
  __asm push eax
  __asm lea esi, [edi + 4]
  __asm call LAB_10085071
  __asm add esp, 0x10
  __asm test al, al
  __asm jne 0x10ee6bcd
  __asm push offset LAB_1194a5c0
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm jmp 0x10ee6c0a
  __asm push dword ptr [esp + 8]
  __asm mov ecx, dword ptr [edi + 0x84]
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10ee6bfa
  __asm push offset LAB_1194a5e4
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm jmp 0x10ee6c0a
  __asm push offset LAB_1194a608
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm xor eax, eax
  __asm mov ecx, dword ptr [esp + 0x594]
  __asm pop esi
  __asm pop edi
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret 4
}



// Reference entry 10ee6c60; body size 187 bytes.
#line 1 "ENTRY_10ee6c60"

__declspec(naked) void FUN_10ee6c60(void)

{
  __asm sub esp, 0x590
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x58c], eax
  __asm push esi
  __asm mov esi, ecx
  __asm cmp dword ptr [esi + 0x84], 0
  __asm je 0x10ee6cc9
  __asm mov eax, dword ptr [esi + 0x90]
  __asm mov dword ptr [esp + 4], 0x586
  __asm test eax, eax
  __asm jle 0x10ee6c9a
  __asm imul eax, eax, 0x3e8
  __asm jmp 0x10ee6c9f
  __asm mov eax, 0xea60
  __asm push eax
  __asm push 1
  __asm lea eax, [esp + 0xc]
  __asm push eax
  __asm lea eax, [esp + 0x14]
  __asm push eax
  __asm call LAB_10014c4a
  __asm add esp, 0x10
  __asm test al, al
  __asm jne 0x10ee6ce4
  __asm push offset LAB_1194a778
  __asm lea eax, [esi + 4]
  __asm push eax
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm pop esi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push dword ptr [esp + 4]
  __asm mov ecx, dword ptr [esi + 0x84]
  __asm lea eax, [esp + 0xc]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10ee6d03
  __asm push offset LAB_1194a7a0
  __asm jmp 0x10ee6cbd
  __asm mov ecx, dword ptr [esp + 0x590]
  __asm xor eax, eax
  __asm pop esi
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
}



// Reference entry 10ee6d50; body size 240 bytes.
#line 1 "ENTRY_10ee6d50"

__declspec(naked) void FUN_10ee6d50(void)

{
  __asm sub esp, 0x590
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x58c], eax
  __asm push edi
  __asm mov edi, ecx
  __asm cmp dword ptr [edi + 0x84], 0
  __asm jne 0x10ee6d8b
  __asm mov eax, 0x3e8
  __asm pop edi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push esi
  __asm lea eax, [esp + 8]
  __asm mov dword ptr [esp + 8], 0x586
  __asm push eax
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm lea esi, [edi + 4]
  __asm call LAB_1009930f
  __asm add esp, 8
  __asm test al, al
  __asm jne 0x10ee6dd7
  __asm push offset LAB_1194a8d8
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm pop esi
  __asm pop edi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push dword ptr [esp + 8]
  __asm mov ecx, dword ptr [edi + 0x84]
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10ee6e19
  __asm push offset LAB_1194a8f8
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm pop esi
  __asm pop edi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push offset LAB_1194a918
  __asm push esi
  __asm call LAB_10018bab
  __asm mov ecx, dword ptr [esp + 0x59c]
  __asm add esp, 8
  __asm xor eax, eax
  __asm pop esi
  __asm pop edi
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
}



// Reference entry 10ee6e80; body size 240 bytes.
#line 1 "ENTRY_10ee6e80"

__declspec(naked) void FUN_10ee6e80(void)

{
  __asm sub esp, 0x590
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x58c], eax
  __asm push edi
  __asm mov edi, ecx
  __asm cmp dword ptr [edi + 0x84], 0
  __asm jne 0x10ee6ebb
  __asm mov eax, 0x3e8
  __asm pop edi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push esi
  __asm lea eax, [esp + 8]
  __asm mov dword ptr [esp + 8], 0x586
  __asm push eax
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm lea esi, [edi + 4]
  __asm call LAB_10052da1
  __asm add esp, 8
  __asm test al, al
  __asm jne 0x10ee6f07
  __asm push offset LAB_1194a870
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm pop esi
  __asm pop edi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push dword ptr [esp + 8]
  __asm mov ecx, dword ptr [edi + 0x84]
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10ee6f49
  __asm push offset LAB_1194a894
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm pop esi
  __asm pop edi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push offset LAB_1194a8b4
  __asm push esi
  __asm call LAB_10018bab
  __asm mov ecx, dword ptr [esp + 0x59c]
  __asm add esp, 8
  __asm xor eax, eax
  __asm pop esi
  __asm pop edi
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
}



// Reference entry 10ee6fb0; body size 217 bytes.
#line 1 "ENTRY_10ee6fb0"

__declspec(naked) void FUN_10ee6fb0(void)

{
  __asm sub esp, 0x590
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x58c], eax
  __asm mov eax, dword ptr [esp + 0x594]
  __asm push edi
  __asm mov edi, ecx
  __asm cmp dword ptr [edi + 0x84], 0
  __asm jne 0x10ee6ff4
  __asm mov eax, 0x3e8
  __asm pop edi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret 8
  __asm push esi
  __asm push dword ptr [esp + 0x5a0]
  __asm mov dword ptr [esp + 0xc], 0x586
  __asm lea esi, [edi + 4]
  __asm push eax
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm lea eax, [esp + 0x18]
  __asm push eax
  __asm call LAB_10026788
  __asm add esp, 0x10
  __asm test al, al
  __asm jne 0x10ee7033
  __asm push offset LAB_1194a7c8
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm jmp 0x10ee7070
  __asm push dword ptr [esp + 8]
  __asm mov ecx, dword ptr [edi + 0x84]
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10ee7060
  __asm push offset LAB_1194a7e4
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov eax, 0x3e8
  __asm jmp 0x10ee7070
  __asm push offset LAB_1194a800
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm xor eax, eax
  __asm mov ecx, dword ptr [esp + 0x594]
  __asm pop esi
  __asm pop edi
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret 8
}



// Reference entry 10ee7fb0; body size 6 bytes.
#line 1 "ENTRY_10ee7fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee7fb0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10ee7fc0; body size 6 bytes.
#line 1 "ENTRY_10ee7fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee7fc0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10ee8730; body size 36 bytes.
#line 1 "ENTRY_10ee8730"

__declspec(naked) void FUN_10ee8730(void)

{
  __asm mov edx, dword ptr [ecx + 4]
  __asm cmp edx, dword ptr [ecx + 8]
  __asm je 0x10ee8747
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm push dword ptr [esp + 4]
  __asm push edx
  __asm call LAB_1002314b
  __asm ret 4
}



// Reference entry 10ee8940; body size 28 bytes.
#line 1 "ENTRY_10ee8940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ee8940(undefined4 *param_1)

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


// Reference entry 10ee8970; body size 11 bytes.
#line 1 "ENTRY_10ee8970"

__declspec(naked) void FUN_10ee8970(void)

{
  __asm xorps xmm0, xmm0
  __asm movups xmmword ptr [ecx + 0xa8], xmm0
  __asm ret
}



// Reference entry 10ee8ab0; body size 5 bytes.
#line 1 "ENTRY_10ee8ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee8ab0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ee8df0; body size 372 bytes.
#line 1 "ENTRY_10ee8df0"

__declspec(naked) void FUN_10ee8df0(void)

{
  __asm sub esp, 0x5d4
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x5d0], eax
  __asm push ebx
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov eax, dword ptr [esi + 0xd4]
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xc0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test eax, eax
  __asm je LAB_10ee8eab
  __asm cmp dword ptr [eax + 8], 0
  __asm je LAB_10ee8eab
  __asm mov ecx, dword ptr [esi + 0xc4]
  __asm mov edi, 0x20
  __asm test ecx, ecx
  __asm je 0x10ee8e47
  __asm push edi
  __asm lea eax, [esp + 0x18]
  __asm push eax
  __asm call LAB_10081e4e
  __asm jmp 0x10ee8e49
  __asm xor edi, edi
  __asm mov ecx, dword ptr [esi + 0x84]
  __asm test ecx, ecx
  __asm je 0x10ee8eab
  __asm test edi, edi
  __asm je 0x10ee8e68
  __asm push edi
  __asm lea eax, [esp + 0x18]
  __asm push eax
  __asm call LAB_1003f418
  __asm mov ecx, dword ptr [esi + 0x84]
  __asm xor ebx, ebx
  __asm call LAB_100022d9
  __asm test al, al
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [esp + 0xc]
  __asm mov ecx, 0x40
  __asm push eax
  __asm lea eax, [esp + 0x38]
  __asm cmovne ebx, ecx
  __asm mov ecx, dword ptr [esi + 0x84]
  __asm lea edi, [esi + 4]
  __asm push eax
  __asm call LAB_1009009d
  __asm test al, al
  __asm jne 0x10ee8ee4
  __asm push offset LAB_1194a338
  __asm push edi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm lea eax, [esi + 4]
  __asm push offset LAB_1194a0d0
  __asm push eax
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov ecx, esi
  __asm push 7
  __asm push 1
  __asm push 0x3e8
  __asm call LAB_10038294
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov ecx, dword ptr [esp + 0x5d0]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x5d4
  __asm ret
  __asm push 0
  __asm push dword ptr [esp + 0x10]
  __asm lea eax, [esp + 0x3c]
  __asm mov dword ptr [esp + 0x18], 0x586
  __asm push eax
  __asm push ebx
  __asm push offset LAB_11889e7c
  __asm push 0x2a
  __asm lea eax, [esp + 0x28]
  __asm push eax
  __asm lea eax, [esp + 0x70]
  __asm push eax
  __asm call LAB_10072bab
  __asm add esp, 0x20
  __asm test al, al
  __asm jne 0x10ee8f1c
  __asm push offset LAB_1194a378
  __asm jmp 0x10ee8ea2
  __asm push dword ptr [esp + 0x10]
  __asm mov ecx, dword ptr [esi + 0x84]
  __asm lea eax, [esp + 0x58]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10ee8f3e
  __asm push offset LAB_1194a3a0
  __asm jmp LAB_10ee8ea2
  __asm push offset LAB_1194a3c8
  __asm push edi
  __asm call LAB_10018bab
  __asm mov ecx, dword ptr [esp + 0x5e4]
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x5d4
  __asm ret
}



// Reference entry 10ee8fd0; body size 220 bytes.
#line 1 "ENTRY_10ee8fd0"

__declspec(naked) void FUN_10ee8fd0(void)

{
  __asm sub esp, 0x590
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x58c], eax
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm cmp dword ptr [edi + 0x84], 0
  __asm lea esi, [edi + 4]
  __asm _emit 0xc7 __asm _emit 0x87 __asm _emit 0xc0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm je 0x10ee902c
  __asm push 0
  __asm lea eax, [esp + 0xc]
  __asm mov dword ptr [esp + 0xc], 0x586
  __asm push eax
  __asm lea eax, [esp + 0x14]
  __asm push eax
  __asm call LAB_10074276
  __asm add esp, 0xc
  __asm test al, al
  __asm jne 0x10ee9068
  __asm push offset LAB_1194a708
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm push offset LAB_1194a224
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov ecx, edi
  __asm call LAB_10026e45
  __asm push 7
  __asm push 1
  __asm push 0x3e8
  __asm mov ecx, edi
  __asm call LAB_10038294
  __asm pop edi
  __asm pop esi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push dword ptr [esp + 8]
  __asm mov ecx, dword ptr [edi + 0x84]
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10ee9087
  __asm push offset LAB_1194a72c
  __asm jmp 0x10ee9023
  __asm push offset LAB_1194a750
  __asm push esi
  __asm call LAB_10018bab
  __asm mov ecx, dword ptr [esp + 0x59c]
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
}



// Reference entry 10ee90f0; body size 230 bytes.
#line 1 "ENTRY_10ee90f0"

__declspec(naked) void FUN_10ee90f0(void)

{
  __asm sub esp, 0x590
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x58c], eax
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm cmp dword ptr [esi + 0x84], 0
  __asm lea edi, [esi + 4]
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xc0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm je 0x10ee917c
  __asm mov eax, dword ptr [esi + 0x3574]
  __asm mov ecx, offset LAB_1186d2ee
  __asm test eax, eax
  __asm mov dword ptr [esp + 8], 0x586
  __asm push 0
  __asm cmovne ecx, eax
  __asm lea eax, [esp + 0xc]
  __asm push ecx
  __asm push eax
  __asm lea eax, [esp + 0x18]
  __asm push eax
  __asm call LAB_10006ce4
  __asm add esp, 0x10
  __asm test al, al
  __asm jne 0x10ee9156
  __asm push offset LAB_1194a2f0
  __asm jmp 0x10ee9173
  __asm push dword ptr [esp + 8]
  __asm mov ecx, dword ptr [esi + 0x84]
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10ee91b1
  __asm push offset LAB_1194a308
  __asm push edi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm push offset LAB_1194a248
  __asm push edi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov ecx, esi
  __asm push 7
  __asm push 1
  __asm push 0x3e8
  __asm call LAB_10038294
  __asm pop edi
  __asm pop esi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push offset LAB_1194a320
  __asm push edi
  __asm call LAB_10018bab
  __asm mov ecx, dword ptr [esp + 0x59c]
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
}



// Reference entry 10ee9210; body size 199 bytes.
#line 1 "ENTRY_10ee9210"

__declspec(naked) void FUN_10ee9210(void)

{
  __asm sub esp, 0x590
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x58c], eax
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm cmp dword ptr [esi + 0x84], 0
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xc0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm je 0x10ee926c
  __asm push 0
  __asm lea eax, [esp + 0xc]
  __asm mov dword ptr [esp + 0xc], 0x586
  __asm push eax
  __asm lea eax, [esp + 0x14]
  __asm push eax
  __asm lea edi, [esi + 4]
  __asm call LAB_1000c6bc
  __asm add esp, 0xc
  __asm test al, al
  __asm jne 0x10ee9293
  __asm push offset LAB_1194a81c
  __asm push edi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm push 7
  __asm push 1
  __asm push 0x3e8
  __asm mov ecx, esi
  __asm call LAB_10038294
  __asm pop edi
  __asm pop esi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push dword ptr [esp + 8]
  __asm mov ecx, dword ptr [esi + 0x84]
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10ee92b2
  __asm push offset LAB_1194a838
  __asm jmp 0x10ee9263
  __asm push offset LAB_1194a854
  __asm push edi
  __asm call LAB_10018bab
  __asm mov ecx, dword ptr [esp + 0x59c]
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
}



// Reference entry 10ee9310; body size 229 bytes.
#line 1 "ENTRY_10ee9310"

__declspec(naked) void FUN_10ee9310(void)

{
  __asm sub esp, 0x590
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x58c], eax
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm push 0xff
  __asm push 0
  __asm lea eax, [esi + 0x194]
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xc0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x90 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1148ce0b
  __asm add esp, 0xc
  __asm cmp dword ptr [esi + 0x84], 0
  __asm je 0x10ee938a
  __asm lea eax, [esp + 8]
  __asm mov dword ptr [esp + 8], 0x586
  __asm push eax
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm lea edi, [esi + 4]
  __asm call LAB_1007b238
  __asm add esp, 8
  __asm test al, al
  __asm jne 0x10ee93b1
  __asm push offset LAB_1194a62c
  __asm push edi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm push 7
  __asm push 1
  __asm push 0x3e8
  __asm mov ecx, esi
  __asm call LAB_10038294
  __asm pop edi
  __asm pop esi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push dword ptr [esp + 8]
  __asm mov ecx, dword ptr [esi + 0x84]
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10ee93d0
  __asm push offset LAB_1194a650
  __asm jmp 0x10ee9381
  __asm push offset LAB_1194a670
  __asm push edi
  __asm call LAB_10018bab
  __asm mov ecx, dword ptr [esp + 0x59c]
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
}



// Reference entry 10ee9f30; body size 219 bytes.
#line 1 "ENTRY_10ee9f30"

__declspec(naked) void FUN_10ee9f30(void)

{
  __asm sub esp, 0x590
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x58c], eax
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm cmp dword ptr [esi + 0x84], 0
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xc0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm je 0x10ee9f90
  __asm push dword ptr [esi + 0x3580]
  __asm lea eax, [esp + 0xc]
  __asm mov dword ptr [esp + 0xc], 0x586
  __asm push eax
  __asm lea eax, [esp + 0x14]
  __asm push eax
  __asm lea edi, [esi + 4]
  __asm call LAB_100880af
  __asm add esp, 0xc
  __asm test al, al
  __asm jne 0x10ee9fc7
  __asm push offset LAB_1194a55c
  __asm push edi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm push 7
  __asm push 1
  __asm push 0x3e8
  __asm mov ecx, esi
  __asm call LAB_10038294
  __asm cmp byte ptr [esi + 0x358d], 0
  __asm je 0x10ee9fb0
  __asm mov ecx, esi
  __asm call LAB_10041704
  __asm pop edi
  __asm pop esi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push dword ptr [esp + 8]
  __asm mov ecx, dword ptr [esi + 0x84]
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10ee9fe6
  __asm push offset LAB_1194a57c
  __asm jmp 0x10ee9f87
  __asm push offset LAB_1194a59c
  __asm push edi
  __asm call LAB_10018bab
  __asm mov ecx, dword ptr [esp + 0x59c]
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
}



// Reference entry 10eea050; body size 213 bytes.
#line 1 "ENTRY_10eea050"

__declspec(naked) void FUN_10eea050(void)

{
  __asm sub esp, 0x594
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x590], eax
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm cmp dword ptr [esi + 0x84], 0
  __asm mov al, byte ptr [esi + 0x357d]
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xc0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [esp + 0xc], al
  __asm je 0x10eea0ba
  __asm push 0
  __asm push dword ptr [esp + 0x10]
  __asm lea eax, [esp + 0x10]
  __asm mov dword ptr [esp + 0x10], 0x586
  __asm push eax
  __asm lea eax, [esp + 0x1c]
  __asm push eax
  __asm lea edi, [esi + 4]
  __asm call LAB_10085071
  __asm add esp, 0x10
  __asm test al, al
  __asm jne 0x10eea0e1
  __asm push offset LAB_1194a5c0
  __asm push edi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm push 7
  __asm push 1
  __asm push 0x3e8
  __asm mov ecx, esi
  __asm call LAB_10038294
  __asm pop edi
  __asm pop esi
  __asm mov ecx, dword ptr [esp + 0x590]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x594
  __asm ret
  __asm push dword ptr [esp + 8]
  __asm mov ecx, dword ptr [esi + 0x84]
  __asm lea eax, [esp + 0x14]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10eea100
  __asm push offset LAB_1194a5e4
  __asm jmp 0x10eea0b1
  __asm push offset LAB_1194a608
  __asm push edi
  __asm call LAB_10018bab
  __asm mov ecx, dword ptr [esp + 0x5a0]
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x594
  __asm ret
}



// Reference entry 10eea160; body size 211 bytes.
#line 1 "ENTRY_10eea160"

__declspec(naked) void FUN_10eea160(void)

{
  __asm sub esp, 0x590
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x58c], eax
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm cmp dword ptr [edi + 0x84], 0
  __asm lea esi, [edi + 4]
  __asm _emit 0xc7 __asm _emit 0x87 __asm _emit 0xc0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm je 0x10eea1ba
  __asm lea eax, [esp + 8]
  __asm mov dword ptr [esp + 8], 0x586
  __asm push eax
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm call LAB_1009930f
  __asm add esp, 8
  __asm test al, al
  __asm jne 0x10eea1ef
  __asm push offset LAB_1194a8d8
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm push offset LAB_1194a288
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov ecx, edi
  __asm push 7
  __asm push 1
  __asm push 0x3e8
  __asm call LAB_10038294
  __asm pop edi
  __asm pop esi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push dword ptr [esp + 8]
  __asm mov ecx, dword ptr [edi + 0x84]
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10eea20e
  __asm push offset LAB_1194a8f8
  __asm jmp 0x10eea1b1
  __asm push offset LAB_1194a918
  __asm push esi
  __asm call LAB_10018bab
  __asm mov ecx, dword ptr [esp + 0x59c]
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
}



// Reference entry 10eea270; body size 211 bytes.
#line 1 "ENTRY_10eea270"

__declspec(naked) void FUN_10eea270(void)

{
  __asm sub esp, 0x590
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x58c], eax
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm cmp dword ptr [edi + 0x84], 0
  __asm lea esi, [edi + 4]
  __asm _emit 0xc7 __asm _emit 0x87 __asm _emit 0xc0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm je 0x10eea2ca
  __asm lea eax, [esp + 8]
  __asm mov dword ptr [esp + 8], 0x586
  __asm push eax
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm call LAB_10052da1
  __asm add esp, 8
  __asm test al, al
  __asm jne 0x10eea2ff
  __asm push offset LAB_1194a870
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm push offset LAB_1194a268
  __asm push esi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm mov ecx, edi
  __asm push 7
  __asm push 1
  __asm push 0x3e8
  __asm call LAB_10038294
  __asm pop edi
  __asm pop esi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push dword ptr [esp + 8]
  __asm mov ecx, dword ptr [edi + 0x84]
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10eea31e
  __asm push offset LAB_1194a894
  __asm jmp 0x10eea2c1
  __asm push offset LAB_1194a8b4
  __asm push esi
  __asm call LAB_10018bab
  __asm mov ecx, dword ptr [esp + 0x59c]
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
}



// Reference entry 10eea380; body size 220 bytes.
#line 1 "ENTRY_10eea380"

__declspec(naked) void FUN_10eea380(void)

{
  __asm sub esp, 0x590
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x58c], eax
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, offset LAB_1186d2ee
  __asm push edi
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xc0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi + 0x3588]
  __asm test eax, eax
  __asm cmovne ecx, eax
  __asm cmp dword ptr [esi + 0x84], 0
  __asm je 0x10eea3f1
  __asm push dword ptr [esi + 0x3584]
  __asm lea eax, [esp + 0xc]
  __asm mov dword ptr [esp + 0xc], 0x586
  __asm push ecx
  __asm push eax
  __asm lea eax, [esp + 0x18]
  __asm push eax
  __asm lea edi, [esi + 4]
  __asm call LAB_10026788
  __asm add esp, 0x10
  __asm test al, al
  __asm jne 0x10eea418
  __asm push offset LAB_1194a7c8
  __asm push edi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm push 7
  __asm push 1
  __asm push 0x3e8
  __asm mov ecx, esi
  __asm call LAB_10038294
  __asm pop edi
  __asm pop esi
  __asm mov ecx, dword ptr [esp + 0x58c]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
  __asm push dword ptr [esp + 8]
  __asm mov ecx, dword ptr [esi + 0x84]
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10eea437
  __asm push offset LAB_1194a7e4
  __asm jmp 0x10eea3e8
  __asm push offset LAB_1194a800
  __asm push edi
  __asm call LAB_10018bab
  __asm mov ecx, dword ptr [esp + 0x59c]
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
}



// Reference entry 10eea4a0; body size 167 bytes.
#line 1 "ENTRY_10eea4a0"

__declspec(naked) void FUN_10eea4a0(void)

{
  __asm sub esp, 0x590
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x58c], eax
  __asm push esi
  __asm mov esi, ecx
  __asm xorps xmm0, xmm0
  __asm movups xmmword ptr [esi + 0xa8], xmm0
  __asm cmp dword ptr [esi + 0xb8], 2
  __asm jne 0x10eea531
  __asm cmp dword ptr [esi + 0x84], 0
  __asm je 0x10eea531
  __asm push edi
  __asm lea eax, [esp + 8]
  __asm mov dword ptr [esp + 8], 0x586
  __asm push eax
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm lea edi, [esi + 4]
  __asm call LAB_1009390f
  __asm add esp, 8
  __asm test al, al
  __asm jne 0x10eea4fc
  __asm push offset LAB_1194a3f0
  __asm jmp 0x10eea527
  __asm push dword ptr [esp + 8]
  __asm mov ecx, dword ptr [esi + 0x84]
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm call LAB_10018dd1
  __asm test al, al
  __asm jne 0x10eea51b
  __asm push offset LAB_1194a410
  __asm jmp 0x10eea527
  __asm mov byte ptr [esi + 0xa4], 1
  __asm push offset LAB_1194a42c
  __asm push edi
  __asm call LAB_10018bab
  __asm add esp, 8
  __asm pop edi
  __asm mov ecx, dword ptr [esp + 0x590]
  __asm pop esi
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x590
  __asm ret
}



// Reference entry 10eea570; body size 66 bytes.
#line 1 "ENTRY_10eea570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10eea570(int param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(int*)(param_1 + 0xbc) = (int)(param_2);
  *(undefined4*)(param_1 + 0xc0) = (undefined4)(param_3);
  if (((param_2 != 1) && (param_2 != 2)) && (*(int *)(param_1 + 0xb8) == 0)) {
    *(undefined4*)(param_1 + 0xc0) = (undefined4)(0);
    thunk_FUN_10ee3c70<>(1000,1,7);
  }
  return;
}


// Reference entry 10eeb310; body size 12 bytes.
#line 1 "ENTRY_10eeb310"

__declspec(naked) undefined4 FUN_10eeb310(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm call LAB_1002484d
  __asm xor eax, eax
  __asm ret
}



// Reference entry 10eeb4d0; body size 130 bytes.
#line 1 "ENTRY_10eeb4d0"

__declspec(naked) void FUN_10eeb4d0(void)

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
  __asm je 0x10eeb506
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi + 4], edi
  __asm test edi, edi
  __asm je 0x10eeb52f
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm test ecx, ecx
  __asm je 0x10eeb536
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



// Reference entry 10eeb580; body size 130 bytes.
#line 1 "ENTRY_10eeb580"

__declspec(naked) void FUN_10eeb580(void)

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
  __asm je 0x10eeb5b6
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi + 4], edi
  __asm test edi, edi
  __asm je 0x10eeb5df
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm test ecx, ecx
  __asm je 0x10eeb5e6
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



// Reference entry 10eeb630; body size 5 bytes.
#line 1 "ENTRY_10eeb630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eeb630(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eeb640; body size 5 bytes.
#line 1 "ENTRY_10eeb640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eeb640(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eeb650; body size 102 bytes.
#line 1 "ENTRY_10eeb650"

__declspec(naked) void FUN_10eeb650(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm mov dword ptr [esp + 4], esi
  __asm mov dword ptr [esi], LAB_11883b70
  __asm mov dword ptr [esi + 4], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10eeb67f
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 8], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov dword ptr [esi + 0xc], LAB_11883984
  __asm mov eax, esi
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi], LAB_1194b118
  __asm mov dword ptr [esi + 0xc], LAB_1194b128
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10eeb6d0; body size 70 bytes.
#line 1 "ENTRY_10eeb6d0"

__declspec(naked) void FUN_10eeb6d0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0xc], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_1194b13c
  __asm mov dword ptr [ecx + 0xc], LAB_1194b14c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}



// Reference entry 10eeb770; body size 10 bytes.
#line 1 "ENTRY_10eeb770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eeb770(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10eeb780; body size 10 bytes.
#line 1 "ENTRY_10eeb780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eeb780(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10eeb810; body size 10 bytes.
#line 1 "ENTRY_10eeb810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eeb810(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10eeb820; body size 12 bytes.
#line 1 "ENTRY_10eeb820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eeb820(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10eebf30; body size 8 bytes.
#line 1 "ENTRY_10eebf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10eebf30(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10eebf40; body size 8 bytes.
#line 1 "ENTRY_10eebf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10eebf40(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10eebf50; body size 4 bytes.
#line 1 "ENTRY_10eebf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eebf50(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10eebf60; body size 4 bytes.
#line 1 "ENTRY_10eebf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eebf60(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10eec230; body size 8 bytes.
#line 1 "ENTRY_10eec230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10eec230(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10eec240; body size 8 bytes.
#line 1 "ENTRY_10eec240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10eec240(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10eec250; body size 4 bytes.
#line 1 "ENTRY_10eec250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eec250(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10eec260; body size 4 bytes.
#line 1 "ENTRY_10eec260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eec260(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10eec270; body size 7 bytes.
#line 1 "ENTRY_10eec270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10eec270(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10eec280; body size 7 bytes.
#line 1 "ENTRY_10eec280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10eec280(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10eec290; body size 26 bytes.
#line 1 "ENTRY_10eec290"

__declspec(naked) void FUN_10eec290(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10eec2a6
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10eec2b0; body size 26 bytes.
#line 1 "ENTRY_10eec2b0"

__declspec(naked) void FUN_10eec2b0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10eec2c6
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10eec2d0; body size 10 bytes.
#line 1 "ENTRY_10eec2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10eec2d0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10eec2e0; body size 10 bytes.
#line 1 "ENTRY_10eec2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10eec2e0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10eece60; body size 16 bytes.
#line 1 "ENTRY_10eece60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eece60(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10eece80; body size 16 bytes.
#line 1 "ENTRY_10eece80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eece80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10eecea0; body size 4 bytes.
#line 1 "ENTRY_10eecea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eecea0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 10eecef0; body size 4 bytes.
#line 1 "ENTRY_10eecef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eecef0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x58));
}


// Reference entry 10eecf00; body size 4 bytes.
#line 1 "ENTRY_10eecf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eecf00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x40));
}


// Reference entry 10eecf10; body size 4 bytes.
#line 1 "ENTRY_10eecf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eecf10(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 10eecf40; body size 4 bytes.
#line 1 "ENTRY_10eecf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eecf40(int param_1)

{
  return (int)(param_1 + 0x28);
}


// Reference entry 10eecf50; body size 4 bytes.
#line 1 "ENTRY_10eecf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eecf50(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10eecf60; body size 4 bytes.
#line 1 "ENTRY_10eecf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eecf60(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10eecf70; body size 4 bytes.
#line 1 "ENTRY_10eecf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eecf70(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x14));
}


// Reference entry 10eecfa0; body size 8 bytes.
#line 1 "ENTRY_10eecfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_10eecfa0(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x716));
}


// Reference entry 10eecfb0; body size 23 bytes.
#line 1 "ENTRY_10eecfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10eecfb0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->int_allocRep((char *)(param_1 + 0x6d4));
  return (SCStr *)(param_2);
}


// Reference entry 10eecfd0; body size 4 bytes.
#line 1 "ENTRY_10eecfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eecfd0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x18));
}


// Reference entry 10eed610; body size 3 bytes.
#line 1 "ENTRY_10eed610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eed610(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10eed6a0; body size 28 bytes.
#line 1 "ENTRY_10eed6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10eed6a0(undefined4 *param_1)

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


// Reference entry 10eed6f0; body size 22 bytes.
#line 1 "ENTRY_10eed6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eed6f0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10eed7e0; body size 31 bytes.
#line 1 "ENTRY_10eed7e0"

__declspec(naked) void FUN_10eed7e0(void)

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



// Reference entry 10eed810; body size 22 bytes.
#line 1 "ENTRY_10eed810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eed810(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10eed830; body size 33 bytes.
#line 1 "ENTRY_10eed830"

__declspec(naked) void FUN_10eed830(void)

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



// Reference entry 10eed860; body size 13 bytes.
#line 1 "ENTRY_10eed860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eed860(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10eed8e0; body size 5 bytes.
#line 1 "ENTRY_10eed8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eed8e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eed8f0; body size 37 bytes.
#line 1 "ENTRY_10eed8f0"

__declspec(naked) void FUN_10eed8f0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10eed910
  __asm mov ecx, dword ptr [esp + 8]
  __asm add eax, 0x10
  __asm push eax
  __asm call LAB_10070fbd
  __asm test al, al
  __asm jne 0x10eed910
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10eeda60; body size 5 bytes.
#line 1 "ENTRY_10eeda60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eeda60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eeda70; body size 27 bytes.
#line 1 "ENTRY_10eeda70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eeda70(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10eedaa0; body size 15 bytes.
#line 1 "ENTRY_10eedaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eedaa0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10eedac0; body size 5 bytes.
#line 1 "ENTRY_10eedac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eedac0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eedad0; body size 5 bytes.
#line 1 "ENTRY_10eedad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eedad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eedae0; body size 18 bytes.
#line 1 "ENTRY_10eedae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eedae0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10eedb80; body size 30 bytes.
#line 1 "ENTRY_10eedb80"

__declspec(naked) void FUN_10eedb80(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esi + 4]
  __asm mov byte ptr [esi], 0
  __asm call LAB_10036c23
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10eeddb0; body size 14 bytes.
#line 1 "ENTRY_10eeddb0"

__declspec(naked) void FUN_10eeddb0(void)

{
  __asm cmp dword ptr [ecx + 4], 0xaaaaaaa
  __asm je LAB_1000d4ae
  __asm ret
}



// Reference entry 10eeddd0; body size 3 bytes.
#line 1 "ENTRY_10eeddd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eeddd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eedde0; body size 3 bytes.
#line 1 "ENTRY_10eedde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eedde0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eeddf0; body size 3 bytes.
#line 1 "ENTRY_10eeddf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eeddf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eede00; body size 3 bytes.
#line 1 "ENTRY_10eede00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eede00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eede10; body size 3 bytes.
#line 1 "ENTRY_10eede10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eede10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eee0b0; body size 79 bytes.
#line 1 "ENTRY_10eee0b0"

__declspec(naked) void FUN_10eee0b0(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [edx + 8]
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [edx + 8], eax
  __asm mov eax, dword ptr [esi]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10eee0c8
  __asm mov dword ptr [eax + 4], edx
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, dword ptr [ecx]
  __asm cmp edx, dword ptr [eax + 4]
  __asm jne 0x10eee0e1
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [esi], edx
  __asm mov dword ptr [edx + 4], esi
  __asm pop esi
  __asm ret 4
  __asm mov eax, dword ptr [edx + 4]
  __asm cmp edx, dword ptr [eax]
  __asm jne 0x10eee0f3
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



// Reference entry 10eee120; body size 11 bytes.
#line 1 "ENTRY_10eee120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eee120(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10eee130; body size 83 bytes.
#line 1 "ENTRY_10eee130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10eee130(int *param_2)
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


// Reference entry 10eee3e0; body size 60 bytes.
#line 1 "ENTRY_10eee3e0"

__declspec(naked) void FUN_10eee3e0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 3
  __asm cmp ecx, 0x1000
  __asm jb 0x10eee408
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10eee415
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10eeea40; body size 3 bytes.
#line 1 "ENTRY_10eeea40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10eeea40(undefined1 *param_1)

{
  return (undefined1)(*param_1);
}


// Reference entry 10eeec40; body size 6 bytes.
#line 1 "ENTRY_10eeec40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eeec40(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10eeec50; body size 6 bytes.
#line 1 "ENTRY_10eeec50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eeec50(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10eeec70; body size 4 bytes.
#line 1 "ENTRY_10eeec70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10eeec70(undefined1 *param_1)

{
  *param_1 = (undefined1)(1);
  return;
}


// Reference entry 10eeed00; body size 22 bytes.
#line 1 "ENTRY_10eeed00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eeed00(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10eeedf0; body size 31 bytes.
#line 1 "ENTRY_10eeedf0"

__declspec(naked) void FUN_10eeedf0(void)

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



// Reference entry 10eeee20; body size 22 bytes.
#line 1 "ENTRY_10eeee20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eeee20(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10eeee40; body size 33 bytes.
#line 1 "ENTRY_10eeee40"

__declspec(naked) void FUN_10eeee40(void)

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



// Reference entry 10eeee70; body size 13 bytes.
#line 1 "ENTRY_10eeee70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eeee70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10eeeef0; body size 5 bytes.
#line 1 "ENTRY_10eeeef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eeeef0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eeef00; body size 37 bytes.
#line 1 "ENTRY_10eeef00"

__declspec(naked) void FUN_10eeef00(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10eeef20
  __asm mov ecx, dword ptr [esp + 8]
  __asm add eax, 0x10
  __asm push eax
  __asm call LAB_10070fbd
  __asm test al, al
  __asm jne 0x10eeef20
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10eef070; body size 5 bytes.
#line 1 "ENTRY_10eef070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eef070(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eef080; body size 27 bytes.
#line 1 "ENTRY_10eef080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eef080(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10eef0b0; body size 15 bytes.
#line 1 "ENTRY_10eef0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eef0b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10eef0d0; body size 5 bytes.
#line 1 "ENTRY_10eef0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eef0d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eef0e0; body size 5 bytes.
#line 1 "ENTRY_10eef0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eef0e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eef0f0; body size 18 bytes.
#line 1 "ENTRY_10eef0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10eef0f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10eef440; body size 14 bytes.
#line 1 "ENTRY_10eef440"

__declspec(naked) void FUN_10eef440(void)

{
  __asm cmp dword ptr [ecx + 4], 0xaaaaaaa
  __asm je LAB_1000d4ae
  __asm ret
}



// Reference entry 10eef460; body size 3 bytes.
#line 1 "ENTRY_10eef460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eef460(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eef470; body size 3 bytes.
#line 1 "ENTRY_10eef470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eef470(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eef480; body size 3 bytes.
#line 1 "ENTRY_10eef480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eef480(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eef490; body size 3 bytes.
#line 1 "ENTRY_10eef490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eef490(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eef4a0; body size 3 bytes.
#line 1 "ENTRY_10eef4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eef4a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10eef740; body size 79 bytes.
#line 1 "ENTRY_10eef740"

__declspec(naked) void FUN_10eef740(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [edx + 8]
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [edx + 8], eax
  __asm mov eax, dword ptr [esi]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10eef758
  __asm mov dword ptr [eax + 4], edx
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, dword ptr [ecx]
  __asm cmp edx, dword ptr [eax + 4]
  __asm jne 0x10eef771
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [esi], edx
  __asm mov dword ptr [edx + 4], esi
  __asm pop esi
  __asm ret 4
  __asm mov eax, dword ptr [edx + 4]
  __asm cmp edx, dword ptr [eax]
  __asm jne 0x10eef783
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



// Reference entry 10eef7b0; body size 11 bytes.
#line 1 "ENTRY_10eef7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eef7b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10eef7c0; body size 83 bytes.
#line 1 "ENTRY_10eef7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10eef7c0(int *param_2)
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


// Reference entry 10ef0040; body size 60 bytes.
#line 1 "ENTRY_10ef0040"

__declspec(naked) void FUN_10ef0040(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 3
  __asm cmp ecx, 0x1000
  __asm jb 0x10ef0068
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10ef0075
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10ef09e0; body size 3 bytes.
#line 1 "ENTRY_10ef09e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10ef09e0(undefined1 *param_1)

{
  return (undefined1)(*param_1);
}


// Reference entry 10ef0b80; body size 22 bytes.
#line 1 "ENTRY_10ef0b80"

__declspec(naked) void FUN_10ef0b80(void)

{
  __asm push 0
  __asm push ecx
  __asm push dword ptr [esp + 0xc]
  __asm call LAB_10060ee7
  __asm mov ecx, eax
  __asm call LAB_10035c47
  __asm ret 4
}



// Reference entry 10ef10d0; body size 6 bytes.
#line 1 "ENTRY_10ef10d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef10d0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10ef10e0; body size 6 bytes.
#line 1 "ENTRY_10ef10e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef10e0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10ef1170; body size 4 bytes.
#line 1 "ENTRY_10ef1170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ef1170(undefined1 *param_1)

{
  *param_1 = (undefined1)(1);
  return;
}


// Reference entry 10ef1610; body size 189 bytes.
#line 1 "ENTRY_10ef1610"

__declspec(naked) void FUN_10ef1610(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1004458a
  __asm mov dword ptr [esi + 0x610c], LAB_1189cc1c
  __asm mov eax, esi
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x10 __asm _emit 0x61 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x14 __asm _emit 0x61 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x18 __asm _emit 0x61 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov word ptr [esi + 0x611c], 1
  __asm mov byte ptr [esi + 0x611e], 0
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x20 __asm _emit 0x61 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi], LAB_1194b824
  __asm mov dword ptr [esi + 0x610c], LAB_1194b840
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x24 __asm _emit 0x61 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x28 __asm _emit 0x61 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x2c __asm _emit 0x61 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86
  __asm _emit 0x30 __asm _emit 0x61 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x34 __asm _emit 0x61 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x38 __asm _emit 0x61 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x3c __asm _emit 0x61
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x40 __asm _emit 0x61 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [esi + 0x6144], 0
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10ef1900; body size 11 bytes.
#line 1 "ENTRY_10ef1900"

/* WARNING: Removing unreachable block_10ef1900 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ef1900(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RHdmiGetInfoAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10ef1cd0; body size 18 bytes.
#line 1 "ENTRY_10ef1cd0"

__declspec(naked) void FUN_10ef1cd0(void)

{
  __asm mov dword ptr [ecx], LAB_1194b7cc
  __asm mov dword ptr [ecx + 8], LAB_1194b814
  __asm jmp LAB_100454cb
}



// Reference entry 10ef1cf0; body size 4 bytes.
#line 1 "ENTRY_10ef1cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef1cf0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ef2210; body size 23 bytes.
#line 1 "ENTRY_10ef2210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10ef2210(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6140));
  return (SCStr *)(param_2);
}


// Reference entry 10ef2230; body size 28 bytes.
#line 1 "ENTRY_10ef2230"

__declspec(naked) void FUN_10ef2230(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6154]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10ef2246
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ef2260; body size 28 bytes.
#line 1 "ENTRY_10ef2260"

__declspec(naked) void FUN_10ef2260(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6138]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10ef2276
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ef22d0; body size 7 bytes.
#line 1 "ENTRY_10ef22d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10ef22d0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x6178));
}


// Reference entry 10ef22e0; body size 10 bytes.
#line 1 "ENTRY_10ef22e0"

__declspec(naked) void FUN_10ef22e0(void)

{
  __asm mov eax, dword ptr [ecx + 0x18]
  __asm mov al, byte ptr [eax + 0x6178]
  __asm ret
}



// Reference entry 10ef2310; body size 17 bytes.
#line 1 "ENTRY_10ef2310"

__declspec(naked) void FUN_10ef2310(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6134]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}



// Reference entry 10ef3410; body size 44 bytes.
#line 1 "ENTRY_10ef3410"

__declspec(naked) void FUN_10ef3410(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push 0xa
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, dword ptr [eax + 4]
  __asm add ecx, esi
  __asm call dword ptr [LAB_122fc2dc]
  __asm movzx ecx, al
  __asm push ecx
  __asm mov ecx, esi
  __asm call dword ptr [LAB_122fc32c]
  __asm mov ecx, esi
  __asm call dword ptr [LAB_122fc3f0]
  __asm mov eax, esi
  __asm pop esi
  __asm ret
}



// Reference entry 10ef3670; body size 55 bytes.
#line 1 "ENTRY_10ef3670"

__declspec(naked) void FUN_10ef3670(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm mov byte ptr [esp + 7], 0
  __asm push edi
  __asm mov edi, ecx
  __asm test esi, 0x1ff
  __asm je 0x10ef36a1
  __asm mov ecx, dword ptr [edi + 8]
  __asm lea eax, [esp + 0xb]
  __asm push 0
  __asm push 1
  __asm push eax
  __asm call dword ptr [LAB_122fc394]
  __asm inc esi
  __asm test esi, 0x1ff
  __asm jne 0x10ef3686
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10ef3af0; body size 43 bytes.
#line 1 "ENTRY_10ef3af0"

__declspec(naked) void FUN_10ef3af0(void)

{
  __asm mov edx, dword ptr [esp + 8]
  __asm mov eax, edx
  __asm push esi
  __asm push edi
  __asm mov esi, ecx
  __asm lea edi, [eax + 1]
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov cl, byte ptr [eax]
  __asm inc eax
  __asm test cl, cl
  __asm jne 0x10ef3b00
  __asm sub eax, edi
  __asm mov ecx, esi
  __asm push eax
  __asm push edx
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_100632cd
  __asm pop edi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10ef3cc0; body size 30 bytes.
#line 1 "ENTRY_10ef3cc0"

__declspec(naked) void FUN_10ef3cc0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov edx, eax
  __asm cmp dword ptr [eax + 0x14], 0x10
  __asm jb 0x10ef3cce
  __asm mov edx, dword ptr [eax]
  __asm push dword ptr [eax + 0x10]
  __asm push edx
  __asm push dword ptr [esp + 0xc]
  __asm call LAB_100632cd
  __asm ret 8
}



// Reference entry 10ef41c0; body size 50 bytes.
#line 1 "ENTRY_10ef41c0"

__declspec(naked) void FUN_10ef41c0(void)

{
  __asm push dword ptr [esp + 0x10]
  __asm push 0
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_1007d2d1
  __asm mov ecx, dword ptr [eax]
  __asm push dword ptr [eax + 4]
  __asm or ecx, 1
  __asm push ecx
  __asm call dword ptr [LAB_122fc908]
  __asm or ecx, 0xffffffff
  __asm add esp, 0x1c
  __asm test eax, eax
  __asm cmovs eax, ecx
  __asm ret
}



// Reference entry 10ef4200; body size 52 bytes.
#line 1 "ENTRY_10ef4200"

__declspec(naked) void FUN_10ef4200(void)

{
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_1007d2d1
  __asm mov ecx, dword ptr [eax]
  __asm push dword ptr [eax + 4]
  __asm or ecx, 1
  __asm push ecx
  __asm call dword ptr [LAB_122fc908]
  __asm or ecx, 0xffffffff
  __asm add esp, 0x1c
  __asm test eax, eax
  __asm cmovs eax, ecx
  __asm ret
}



// Reference entry 10ef4270; body size 22 bytes.
#line 1 "ENTRY_10ef4270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef4270(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ef4360; body size 22 bytes.
#line 1 "ENTRY_10ef4360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef4360(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ef4380; body size 25 bytes.
#line 1 "ENTRY_10ef4380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ef4380(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ef43a0; body size 3 bytes.
#line 1 "ENTRY_10ef43a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef43a0(void)

{
  return;
}


// Reference entry 10ef43b0; body size 3 bytes.
#line 1 "ENTRY_10ef43b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef43b0(void)

{
  return;
}


// Reference entry 10ef43c0; body size 13 bytes.
#line 1 "ENTRY_10ef43c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef43c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ef43d0; body size 33 bytes.
#line 1 "ENTRY_10ef43d0"

__declspec(naked) void FUN_10ef43d0(void)

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



// Reference entry 10ef4400; body size 33 bytes.
#line 1 "ENTRY_10ef4400"

__declspec(naked) void FUN_10ef4400(void)

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



// Reference entry 10ef4430; body size 18 bytes.
#line 1 "ENTRY_10ef4430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ef4430(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10ef4450; body size 18 bytes.
#line 1 "ENTRY_10ef4450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ef4450(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10ef4770; body size 83 bytes.
#line 1 "ENTRY_10ef4770"

__declspec(naked) void FUN_10ef4770(void)

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
  __asm jne 0x10ef47bc
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x14]
  __asm push ebx
  __asm lea ecx, [esi + 0x10]
  __asm mov dword ptr [edi], esi
  __asm call LAB_10070fbd
  __asm test al, al
  __asm je 0x10ef47a8
  __asm mov esi, dword ptr [esi + 8]
  __asm xor eax, eax
  __asm jmp 0x10ef47b2
  __asm mov dword ptr [edi + 8], esi
  __asm mov eax, 1
  __asm mov esi, dword ptr [esi]
  __asm mov dword ptr [edi + 4], eax
  __asm cmp byte ptr [esi + 0xd], 0
  __asm je 0x10ef4792
  __asm pop ebx
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10ef47e0; body size 30 bytes.
#line 1 "ENTRY_10ef47e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef47e0(int *param_1,int *param_2,int *param_3)

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


// Reference entry 10ef4810; body size 30 bytes.
#line 1 "ENTRY_10ef4810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef4810(int *param_1,int *param_2,int *param_3)

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


// Reference entry 10ef4840; body size 30 bytes.
#line 1 "ENTRY_10ef4840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef4840(int *param_1,int *param_2,int *param_3)

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


// Reference entry 10ef4870; body size 30 bytes.
#line 1 "ENTRY_10ef4870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef4870(int *param_1,int *param_2,int *param_3)

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


// Reference entry 10ef48a0; body size 7 bytes.
#line 1 "ENTRY_10ef48a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef48a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ef48b0; body size 7 bytes.
#line 1 "ENTRY_10ef48b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef48b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ef48c0; body size 7 bytes.
#line 1 "ENTRY_10ef48c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef48c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ef48d0; body size 7 bytes.
#line 1 "ENTRY_10ef48d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef48d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ef48e0; body size 7 bytes.
#line 1 "ENTRY_10ef48e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef48e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ef48f0; body size 7 bytes.
#line 1 "ENTRY_10ef48f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef48f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ef4900; body size 5 bytes.
#line 1 "ENTRY_10ef4900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4900(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef4910; body size 37 bytes.
#line 1 "ENTRY_10ef4910"

__declspec(naked) void FUN_10ef4910(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10ef4930
  __asm mov ecx, dword ptr [esp + 8]
  __asm add eax, 0x10
  __asm push eax
  __asm call LAB_10070fbd
  __asm test al, al
  __asm jne 0x10ef4930
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10ef4940; body size 33 bytes.
#line 1 "ENTRY_10ef4940"

__declspec(naked) void FUN_10ef4940(void)

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



// Reference entry 10ef4970; body size 33 bytes.
#line 1 "ENTRY_10ef4970"

__declspec(naked) void FUN_10ef4970(void)

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



// Reference entry 10ef49a0; body size 5 bytes.
#line 1 "ENTRY_10ef49a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef49a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef49b0; body size 5 bytes.
#line 1 "ENTRY_10ef49b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef49b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef49c0; body size 13 bytes.
#line 1 "ENTRY_10ef49c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef49c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ef49d0; body size 13 bytes.
#line 1 "ENTRY_10ef49d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef49d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ef4b70; body size 38 bytes.
#line 1 "ENTRY_10ef4b70"

__declspec(naked) void FUN_10ef4b70(void)

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



// Reference entry 10ef4ba0; body size 5 bytes.
#line 1 "ENTRY_10ef4ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4ba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef4bb0; body size 5 bytes.
#line 1 "ENTRY_10ef4bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4bb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef4bc0; body size 36 bytes.
#line 1 "ENTRY_10ef4bc0"

__declspec(naked) void FUN_10ef4bc0(void)

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



// Reference entry 10ef4bf0; body size 36 bytes.
#line 1 "ENTRY_10ef4bf0"

__declspec(naked) void FUN_10ef4bf0(void)

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



// Reference entry 10ef4c20; body size 36 bytes.
#line 1 "ENTRY_10ef4c20"

__declspec(naked) void FUN_10ef4c20(void)

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



// Reference entry 10ef4c50; body size 5 bytes.
#line 1 "ENTRY_10ef4c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4c50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef4c60; body size 5 bytes.
#line 1 "ENTRY_10ef4c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4c60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef4c70; body size 5 bytes.
#line 1 "ENTRY_10ef4c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4c70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef4c80; body size 13 bytes.
#line 1 "ENTRY_10ef4c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef4c80(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10ef4c90; body size 13 bytes.
#line 1 "ENTRY_10ef4c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef4c90(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10ef4ca0; body size 34 bytes.
#line 1 "ENTRY_10ef4ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef4ca0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  return;
}


// Reference entry 10ef4cd0; body size 3 bytes.
#line 1 "ENTRY_10ef4cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef4cd0(void)

{
  return;
}


// Reference entry 10ef4ce0; body size 3 bytes.
#line 1 "ENTRY_10ef4ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef4ce0(void)

{
  return;
}


// Reference entry 10ef4cf0; body size 36 bytes.
#line 1 "ENTRY_10ef4cf0"

__declspec(naked) void FUN_10ef4cf0(void)

{
  __asm mov edx, dword ptr [ecx + 4]
  __asm cmp edx, dword ptr [ecx + 8]
  __asm je 0x10ef4d07
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm push dword ptr [esp + 4]
  __asm push edx
  __asm call LAB_10061e0f
  __asm ret 4
}



// Reference entry 10ef4d20; body size 36 bytes.
#line 1 "ENTRY_10ef4d20"

__declspec(naked) void FUN_10ef4d20(void)

{
  __asm mov edx, dword ptr [ecx + 4]
  __asm cmp edx, dword ptr [ecx + 8]
  __asm je 0x10ef4d37
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm push dword ptr [esp + 4]
  __asm push edx
  __asm call LAB_10029a37
  __asm ret 4
}



// Reference entry 10ef4d50; body size 15 bytes.
#line 1 "ENTRY_10ef4d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4d50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10ef4d70; body size 36 bytes.
#line 1 "ENTRY_10ef4d70"

__declspec(naked) void FUN_10ef4d70(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm cmp ecx, eax
  __asm je 0x10ef4d8d
  __asm mov edx, dword ptr [esp + 0x10]
  __asm mov edx, dword ptr [edx]
  __asm cmp dword ptr [ecx], edx
  __asm je 0x10ef4d8d
  __asm add ecx, 4
  __asm cmp ecx, eax
  __asm jne 0x10ef4d82
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret
}



// Reference entry 10ef4dd0; body size 5 bytes.
#line 1 "ENTRY_10ef4dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4dd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef4de0; body size 5 bytes.
#line 1 "ENTRY_10ef4de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4de0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef4df0; body size 5 bytes.
#line 1 "ENTRY_10ef4df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4df0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef4e00; body size 5 bytes.
#line 1 "ENTRY_10ef4e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4e00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef4e10; body size 5 bytes.
#line 1 "ENTRY_10ef4e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4e10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef4e20; body size 5 bytes.
#line 1 "ENTRY_10ef4e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4e20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef4e30; body size 5 bytes.
#line 1 "ENTRY_10ef4e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4e30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef4e40; body size 5 bytes.
#line 1 "ENTRY_10ef4e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4e40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef4e50; body size 5 bytes.
#line 1 "ENTRY_10ef4e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4e50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef4e60; body size 18 bytes.
#line 1 "ENTRY_10ef4e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef4e60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ef4f00; body size 11 bytes.
#line 1 "ENTRY_10ef4f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef4f00(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ef4f10; body size 11 bytes.
#line 1 "ENTRY_10ef4f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef4f10(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ef4f20; body size 11 bytes.
#line 1 "ENTRY_10ef4f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef4f20(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ef4f30; body size 11 bytes.
#line 1 "ENTRY_10ef4f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef4f30(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ef4f40; body size 100 bytes.
#line 1 "ENTRY_10ef4f40"

__declspec(naked) void FUN_10ef4f40(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push ebx
  __asm mov ebx, ecx
  __asm push ebp
  __asm _emit 0xc7 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x08
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [eax]
  __asm mov ebp, dword ptr [eax + 4]
  __asm mov dword ptr [esp + 0xc], ecx
  __asm cmp ecx, ebp
  __asm je 0x10ef4f9d
  __asm push esi
  __asm sub ebp, ecx
  __asm mov ecx, ebx
  __asm mov esi, ebp
  __asm push edi
  __asm sar esi, 2
  __asm push esi
  __asm call LAB_10052ffe
  __asm mov edi, eax
  __asm push ebp
  __asm push dword ptr [esp + 0x18]
  __asm mov dword ptr [ebx], edi
  __asm lea ecx, [edi + esi*4]
  __asm mov dword ptr [ebx + 4], edi
  __asm push edi
  __asm mov dword ptr [ebx + 8], ecx
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm lea eax, [edi + esi*4]
  __asm mov dword ptr [ebx + 4], eax
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm mov eax, ebx
  __asm pop ebx
  __asm ret 4
}



// Reference entry 10ef50b0; body size 58 bytes.
#line 1 "ENTRY_10ef50b0"

__declspec(naked) void FUN_10ef50b0(void)

{
  __asm push ecx
  __asm push esi
  __asm push offset LAB_1194bad0
  __asm mov esi, ecx
  __asm push 0
  __asm mov dword ptr [esp + 0xc], esi
  __asm call LAB_1003a904
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [esi + 0x14], LAB_1194ba3c
  __asm mov dword ptr [esi + 0x18], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi], LAB_1194ba7c
  __asm mov dword ptr [esi + 0x14], LAB_1194baac
  __asm mov byte ptr [esi + 0x1c], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10ef5100; body size 14 bytes.
#line 1 "ENTRY_10ef5100"

__declspec(naked) void FUN_10ef5100(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1194ba3c
  __asm pop ecx
  __asm ret
}



// Reference entry 10ef5140; body size 16 bytes.
#line 1 "ENTRY_10ef5140"

__declspec(naked) void FUN_10ef5140(void)

{
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm jne LAB_10035e22
  __asm ret
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}



// Reference entry 10ef5310; body size 18 bytes.
#line 1 "ENTRY_10ef5310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ef5310(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_ExtractArchiveOp);
  pa_1[5] = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  FUN_1005bce9<>();
  return;
}


// Reference entry 10ef5340; body size 14 bytes.
#line 1 "ENTRY_10ef5340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ef5340(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10ef5360; body size 14 bytes.
#line 1 "ENTRY_10ef5360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ef5360(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10ef5380; body size 14 bytes.
#line 1 "ENTRY_10ef5380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ef5380(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10ef53a0; body size 14 bytes.
#line 1 "ENTRY_10ef53a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ef53a0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10ef5520; body size 3 bytes.
#line 1 "ENTRY_10ef5520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5520(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ef5530; body size 3 bytes.
#line 1 "ENTRY_10ef5530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5530(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ef5540; body size 3 bytes.
#line 1 "ENTRY_10ef5540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5540(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ef5550; body size 3 bytes.
#line 1 "ENTRY_10ef5550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5550(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ef5560; body size 6 bytes.
#line 1 "ENTRY_10ef5560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10ef5560(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 10ef5570; body size 6 bytes.
#line 1 "ENTRY_10ef5570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10ef5570(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 10ef5580; body size 16 bytes.
#line 1 "ENTRY_10ef5580"

__declspec(naked) void FUN_10ef5580(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [ecx]
  __asm mov dword ptr [eax], edx
  __asm add edx, 4
  __asm mov dword ptr [ecx], edx
  __asm ret 8
}



// Reference entry 10ef55a0; body size 16 bytes.
#line 1 "ENTRY_10ef55a0"

__declspec(naked) void FUN_10ef55a0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [ecx]
  __asm mov dword ptr [eax], edx
  __asm add edx, 4
  __asm mov dword ptr [ecx], edx
  __asm ret 8
}



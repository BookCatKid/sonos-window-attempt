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
#define NAN 0.0f/0.0f
#define INFINITY 1.0f/0.0f
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
namespace std { struct codecvt_base { char _pad; codecvt_base(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> static int always_noconv(A...) { return 0; } }; }
namespace std { template<class... A> static int _Xbad_function_call(A...) { return 0; } template<class... A> static int _Xout_of_range(A...) { return 0; } }
struct SCShare { char _pad; SCShare(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int op_dtor(...) { return 0; } };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> static int hash(A...) { return 0; } template<class... A> static int int_addref(A...) { return 0; } template<class... A> static int int_allocRep(A...) { return 0; } template<class... A> static int int_release(A...) { return 0; } static int op_ctor(...) { return 0; } static int op_eq(...) { return 0; } static int op_lt(...) { return 0; } };
template<class...> struct _Tree { char _pad; _Tree(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int op_dtor(...) { return 0; } };
namespace std { template<class...> struct basic_filebuf { char _pad; basic_filebuf(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); }; }
namespace std { template<class...> struct basic_ios { char _pad; basic_ios(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int setstate(...); }; }
namespace std { template<class...> struct basic_streambuf { char _pad; basic_streambuf(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Init(...); }; }
namespace std { template<class...> struct char_traits { char _pad; char_traits(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); }; }
struct AddAccount { char _pad; AddAccount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct ChangeEmailWizard { char _pad; ChangeEmailWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Code { char _pad; Code(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Completed { char _pad; Completed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct ControllerUPnPClient { char _pad; ControllerUPnPClient(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct DesiredIRRepeaterState { char _pad; DesiredIRRepeaterState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Display { char _pad; Display(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Event { char _pad; Event(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct FactoryReset { char _pad; FactoryReset(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct ForgetHHID { char _pad; ForgetHHID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Helpsheets { char _pad; Helpsheets(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct LEDFeedbackState { char _pad; LEDFeedbackState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Libraries { char _pad; Libraries(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Library { char _pad; Library(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Match { char _pad; Match(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct OfflineHideDeviceSignInAction { char _pad; OfflineHideDeviceSignInAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Operation { char _pad; Operation(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Release { char _pad; Release(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Remove { char _pad; Remove(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct RunWizard { char _pad; RunWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIActionCategoryDefault { char _pad; SCIActionCategoryDefault(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIActionCategoryEdit { char _pad; SCIActionCategoryEdit(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIActionCategorySettings { char _pad; SCIActionCategorySettings(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIHouseholdManager { char _pad; SCIHouseholdManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIObj { char _pad; SCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIStringInput { char _pad; SCIStringInput(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCMusicServiceShowMenuAction { char _pad; SCMusicServiceShowMenuAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCReceiptSessionVerify { char _pad; SCReceiptSessionVerify(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCRemoveShareActionDescriptor { char _pad; SCRemoveShareActionDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCShareManager { char _pad; SCShareManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SerialNum { char _pad; SerialNum(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SetupProductAssets { char _pad; SetupProductAssets(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Single { char _pad; Single(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Sink { char _pad; Sink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Studio { char _pad; Studio(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct UpdateTips { char _pad; UpdateTips(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Visual { char _pad; Visual(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct VoiceServicesAssets { char _pad; VoiceServicesAssets(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct std_codecvt_base { char _pad; std_codecvt_base(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
typedef void *K;
typedef void *T;
typedef void *WARNING;
typedef void *_Init;
typedef void *_Reset_back;
using namespace std;
struct Recovered_Bulk { char _pad; void __thiscall FUN_105a5030(undefined4 param_2); template<class... A> int FUN_105a5030(A...); void __thiscall FUN_105a5060(undefined4 param_2); template<class... A> int FUN_105a5060(A...); void __thiscall FUN_105a5090(undefined4 param_2); template<class... A> int FUN_105a5090(A...); int __thiscall FUN_105a5510(int *param_2); template<class... A> int FUN_105a5510(A...); int __thiscall FUN_105a5550(uint *param_2); template<class... A> int FUN_105a5550(A...); int __thiscall FUN_105a5590(SCStr *param_2); template<class... A> int FUN_105a5590(A...); int __thiscall FUN_105a55e0(SCStr *param_2); template<class... A> int FUN_105a55e0(A...); void __thiscall FUN_105a6390(int param_2); template<class... A> int FUN_105a6390(A...); undefined4 * __thiscall FUN_105a6c80(int *param_2); template<class... A> int FUN_105a6c80(A...); undefined4 * __thiscall FUN_105a6cc0(int *param_2); template<class... A> int FUN_105a6cc0(A...); undefined4 * __thiscall FUN_105a6d00(int *param_2); template<class... A> int FUN_105a6d00(A...); undefined4 * __thiscall FUN_105a9a00(byte param_2); template<class... A> int FUN_105a9a00(A...); undefined4 * __thiscall FUN_105a9cb0(byte param_2); template<class... A> int FUN_105a9cb0(A...); undefined4 __thiscall FUN_105a9ce0(byte param_2); template<class... A> int FUN_105a9ce0(A...); void __thiscall FUN_105a9ed0(undefined4 param_2); template<class... A> int FUN_105a9ed0(A...); void __thiscall FUN_105ab7f0(undefined4 *param_2); template<class... A> int FUN_105ab7f0(A...); void __thiscall FUN_105ac000(int *param_2); template<class... A> int FUN_105ac000(A...); void __thiscall FUN_105ac050(int param_2); template<class... A> int FUN_105ac050(A...); undefined4 * __thiscall FUN_105b15b0(int *param_2); template<class... A> int FUN_105b15b0(A...); undefined4 * __thiscall FUN_105b15f0(int *param_2); template<class... A> int FUN_105b15f0(A...); undefined4 * __thiscall FUN_105b2780(byte param_2); template<class... A> int FUN_105b2780(A...); int __thiscall FUN_105b27c0(byte param_2); template<class... A> int FUN_105b27c0(A...); int __thiscall FUN_105b2810(byte param_2); template<class... A> int FUN_105b2810(A...); undefined4 * __thiscall FUN_105b2860(byte param_2); template<class... A> int FUN_105b2860(A...); undefined4 __thiscall FUN_105b28a0(byte param_2); template<class... A> int FUN_105b28a0(A...); undefined4 * __thiscall FUN_105b28d0(byte param_2); template<class... A> int FUN_105b28d0(A...); void __thiscall FUN_105b29a0(undefined4 *param_2); template<class... A> int FUN_105b29a0(A...); void __thiscall FUN_105b2a80(char param_2); template<class... A> int FUN_105b2a80(A...); void __thiscall FUN_105b2ad0(char param_2); template<class... A> int FUN_105b2ad0(A...); void __thiscall FUN_105b2af0(char param_2); template<class... A> int FUN_105b2af0(A...); void __thiscall FUN_105b2b10(char param_2); template<class... A> int FUN_105b2b10(A...); void __thiscall FUN_105b2b30(char param_2); template<class... A> int FUN_105b2b30(A...); void __thiscall FUN_105b2b80(undefined4 *param_2); template<class... A> int FUN_105b2b80(A...); void __thiscall FUN_105b2cd0(undefined4 *param_2,undefined4 param_3); template<class... A> int FUN_105b2cd0(A...); void __thiscall FUN_105b2dd0(undefined4 *param_2); template<class... A> int FUN_105b2dd0(A...); void __thiscall FUN_105b32d0(int *param_2); template<class... A> int FUN_105b32d0(A...); void __thiscall FUN_105b3420(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_105b3420(A...); SCStr * __thiscall FUN_105b3450(SCStr *param_2); template<class... A> int FUN_105b3450(A...); SCStr * __thiscall FUN_105b3470(SCStr *param_2); template<class... A> int FUN_105b3470(A...); SCStr * __thiscall FUN_105b3650(SCStr *param_2); template<class... A> int FUN_105b3650(A...); SCStr * __thiscall FUN_105b3670(SCStr *param_2); template<class... A> int FUN_105b3670(A...); void __thiscall FUN_105b6ce0(undefined4 param_2); template<class... A> int FUN_105b6ce0(A...); void __thiscall FUN_105b6d10(undefined4 param_2); template<class... A> int FUN_105b6d10(A...); void __thiscall FUN_105b77f0(undefined4 *param_2); template<class... A> int FUN_105b77f0(A...); void __thiscall FUN_105b7840(undefined4 *param_2); template<class... A> int FUN_105b7840(A...); void __thiscall FUN_105b7910(int *param_2,SCStr *param_3); template<class... A> int FUN_105b7910(A...); undefined4 * __thiscall FUN_105b8170(int *param_2); template<class... A> int FUN_105b8170(A...); undefined4 * __thiscall FUN_105ba6d0(byte param_2); template<class... A> int FUN_105ba6d0(A...); undefined4 * __thiscall FUN_105ba700(byte param_2); template<class... A> int FUN_105ba700(A...); undefined4 __thiscall FUN_105ba7b0(byte param_2); template<class... A> int FUN_105ba7b0(A...); undefined4 __thiscall FUN_105ba900(byte param_2); template<class... A> int FUN_105ba900(A...); undefined4 __thiscall FUN_105ba9b0(byte param_2); template<class... A> int FUN_105ba9b0(A...); undefined4 __thiscall FUN_105ba9e0(byte param_2); template<class... A> int FUN_105ba9e0(A...); undefined4 * __thiscall FUN_105baa10(byte param_2); template<class... A> int FUN_105baa10(A...); undefined4 __thiscall FUN_105baa60(byte param_2); template<class... A> int FUN_105baa60(A...); undefined4 * __thiscall FUN_105baa90(byte param_2); template<class... A> int FUN_105baa90(A...); undefined4 * __thiscall FUN_105baad0(byte param_2); template<class... A> int FUN_105baad0(A...); undefined4 * __thiscall FUN_105bab10(byte param_2); template<class... A> int FUN_105bab10(A...); void __thiscall FUN_105baf20(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_105baf20(A...); void __thiscall FUN_105baf40(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_105baf40(A...); int __thiscall FUN_105bd300(undefined4 param_2); template<class... A> int FUN_105bd300(A...); SCStr * __thiscall FUN_105befa0(SCStr *param_2); template<class... A> int FUN_105befa0(A...); void __thiscall FUN_105c04a0(undefined4 *param_2); template<class... A> int FUN_105c04a0(A...); void __thiscall FUN_105c04f0(undefined4 *param_2); template<class... A> int FUN_105c04f0(A...); undefined4 __thiscall FUN_105c2d80(void *param_2,uint param_3); template<class... A> int FUN_105c2d80(A...); undefined4 * __thiscall FUN_105c32c0(int *param_2); template<class... A> int FUN_105c32c0(A...); undefined4 * __thiscall FUN_105c3340(int *param_2); template<class... A> int FUN_105c3340(A...); undefined4 * __thiscall FUN_105c3380(int *param_2); template<class... A> int FUN_105c3380(A...); void __thiscall FUN_105c4a10(int *param_2); template<class... A> int FUN_105c4a10(A...); SCStr * __thiscall FUN_105c71c0(SCStr *param_2); template<class... A> int FUN_105c71c0(A...); int * __thiscall FUN_105c7bd0(int *param_2); template<class... A> int FUN_105c7bd0(A...); void __thiscall FUN_105cd280(int param_2); template<class... A> int FUN_105cd280(A...); void __thiscall FUN_105cd2b0(int param_2); template<class... A> int FUN_105cd2b0(A...); void __thiscall FUN_105cd2e0(int param_2); template<class... A> int FUN_105cd2e0(A...); undefined4 * __thiscall FUN_105ce0f0(int *param_2); template<class... A> int FUN_105ce0f0(A...); undefined4 * __thiscall FUN_105ce130(int *param_2); template<class... A> int FUN_105ce130(A...); undefined4 * __thiscall FUN_105ce170(int *param_2); template<class... A> int FUN_105ce170(A...); undefined4 * __thiscall FUN_105ce1d0(int *param_2); template<class... A> int FUN_105ce1d0(A...); undefined4 * __thiscall FUN_105ce210(int *param_2); template<class... A> int FUN_105ce210(A...); undefined4 * __thiscall FUN_105ce250(int *param_2); template<class... A> int FUN_105ce250(A...); undefined4 * __thiscall FUN_105ce270(int *param_2); template<class... A> int FUN_105ce270(A...); undefined4 * __thiscall FUN_105d4c40(byte param_2); template<class... A> int FUN_105d4c40(A...); undefined4 * __thiscall FUN_105d4c70(byte param_2); template<class... A> int FUN_105d4c70(A...); undefined4 * __thiscall FUN_105d4ca0(byte param_2); template<class... A> int FUN_105d4ca0(A...); undefined4 * __thiscall FUN_105d4cd0(byte param_2); template<class... A> int FUN_105d4cd0(A...); undefined4 * __thiscall FUN_105d4d00(byte param_2); template<class... A> int FUN_105d4d00(A...); undefined4 * __thiscall FUN_105d4d30(byte param_2); template<class... A> int FUN_105d4d30(A...); undefined4 * __thiscall FUN_105d4d60(byte param_2); template<class... A> int FUN_105d4d60(A...); undefined4 * __thiscall FUN_105d4d90(byte param_2); template<class... A> int FUN_105d4d90(A...); undefined4 * __thiscall FUN_105d4dc0(byte param_2); template<class... A> int FUN_105d4dc0(A...); undefined4 * __thiscall FUN_105d4e60(byte param_2); template<class... A> int FUN_105d4e60(A...); undefined4 * __thiscall FUN_105d4ea0(byte param_2); template<class... A> int FUN_105d4ea0(A...); undefined4 __thiscall FUN_105d4ee0(byte param_2); template<class... A> int FUN_105d4ee0(A...); undefined4 * __thiscall FUN_105d5230(byte param_2); template<class... A> int FUN_105d5230(A...); undefined4 * __thiscall FUN_105d5280(byte param_2); template<class... A> int FUN_105d5280(A...); undefined4 * __thiscall FUN_105d52d0(byte param_2); template<class... A> int FUN_105d52d0(A...); undefined4 * __thiscall FUN_105d5320(byte param_2); template<class... A> int FUN_105d5320(A...); undefined4 * __thiscall FUN_105d5370(byte param_2); template<class... A> int FUN_105d5370(A...); undefined4 * __thiscall FUN_105d53c0(byte param_2); template<class... A> int FUN_105d53c0(A...); undefined4 * __thiscall FUN_105d5410(byte param_2); template<class... A> int FUN_105d5410(A...); undefined4 * __thiscall FUN_105d5460(byte param_2); template<class... A> int FUN_105d5460(A...); undefined4 * __thiscall FUN_105d54b0(byte param_2); template<class... A> int FUN_105d54b0(A...); undefined4 * __thiscall FUN_105d5500(byte param_2); template<class... A> int FUN_105d5500(A...); undefined4 * __thiscall FUN_105d5550(byte param_2); template<class... A> int FUN_105d5550(A...); undefined4 * __thiscall FUN_105d55a0(byte param_2); template<class... A> int FUN_105d55a0(A...); undefined4 * __thiscall FUN_105d5750(byte param_2); template<class... A> int FUN_105d5750(A...); undefined4 * __thiscall FUN_105d5ca0(byte param_2); template<class... A> int FUN_105d5ca0(A...); undefined4 * __thiscall FUN_105d5ce0(byte param_2); template<class... A> int FUN_105d5ce0(A...); undefined4 * __thiscall FUN_105d5d10(byte param_2); template<class... A> int FUN_105d5d10(A...); undefined4 __thiscall FUN_105d5fc0(byte param_2); template<class... A> int FUN_105d5fc0(A...); undefined4 * __thiscall FUN_105d60e0(byte param_2); template<class... A> int FUN_105d60e0(A...); undefined4 * __thiscall FUN_105d62e0(byte param_2); template<class... A> int FUN_105d62e0(A...); undefined4 * __thiscall FUN_105d6400(byte param_2); template<class... A> int FUN_105d6400(A...); undefined4 * __thiscall FUN_105d6710(byte param_2); template<class... A> int FUN_105d6710(A...); undefined4 __thiscall FUN_105d6b20(byte param_2); template<class... A> int FUN_105d6b20(A...); void __thiscall FUN_105d6e70(char param_2); template<class... A> int FUN_105d6e70(A...); void __thiscall FUN_105d6e90(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_105d6e90(A...); void __thiscall FUN_105d8670(int *param_2); template<class... A> int FUN_105d8670(A...); void __thiscall FUN_105d86c0(int *param_2); template<class... A> int FUN_105d86c0(A...); void __thiscall FUN_105d8710(int param_2); template<class... A> int FUN_105d8710(A...); void __thiscall FUN_105d8740(int param_2); template<class... A> int FUN_105d8740(A...); void __thiscall FUN_105d8770(int param_2); template<class... A> int FUN_105d8770(A...); void __thiscall FUN_105d8bc0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_105d8bc0(A...); int __thiscall FUN_105dc1e0(int param_2); template<class... A> int FUN_105dc1e0(A...); SCStr * __thiscall FUN_105dd5d0(SCStr *param_2); template<class... A> int FUN_105dd5d0(A...); SCStr * __thiscall FUN_105dd660(SCStr *param_2); template<class... A> int FUN_105dd660(A...); SCStr * __thiscall FUN_105ddfd0(SCStr *param_2); template<class... A> int FUN_105ddfd0(A...); SCStr * __thiscall FUN_105e28f0(SCStr *param_2); template<class... A> int FUN_105e28f0(A...); undefined4 __thiscall FUN_105e74e0(undefined4 param_2); template<class... A> int FUN_105e74e0(A...); undefined4 __thiscall FUN_105e7510(undefined4 param_2); template<class... A> int FUN_105e7510(A...); undefined4 * __thiscall FUN_105ef430(undefined4 *param_2); template<class... A> int FUN_105ef430(A...); undefined4 __thiscall FUN_105f0340(byte param_2); template<class... A> int FUN_105f0340(A...); int __thiscall FUN_105f03f0(byte param_2); template<class... A> int FUN_105f03f0(A...); undefined4 * __thiscall FUN_105f07f0(undefined4 *param_2); template<class... A> int FUN_105f07f0(A...); void __thiscall FUN_105f08c0(undefined4 *param_2); template<class... A> int FUN_105f08c0(A...); void __thiscall FUN_105f0b80(undefined4 *param_2); template<class... A> int FUN_105f0b80(A...); void __thiscall FUN_105f0ba0(undefined4 *param_2); template<class... A> int FUN_105f0ba0(A...); void __thiscall FUN_105f0e90(char param_2); template<class... A> int FUN_105f0e90(A...); void __thiscall FUN_105f0ec0(char param_2); template<class... A> int FUN_105f0ec0(A...); void __thiscall FUN_105f0f60(char param_2); template<class... A> int FUN_105f0f60(A...); void __thiscall FUN_105f0f80(char param_2); template<class... A> int FUN_105f0f80(A...); void __thiscall FUN_105f1160(char param_2); template<class... A> int FUN_105f1160(A...); void __thiscall FUN_105f1180(char param_2); template<class... A> int FUN_105f1180(A...); void __thiscall FUN_105f11a0(char param_2); template<class... A> int FUN_105f11a0(A...); void __thiscall FUN_105f1240(char param_2); template<class... A> int FUN_105f1240(A...); void __thiscall FUN_105f12f0(char param_2); template<class... A> int FUN_105f12f0(A...); bool __thiscall FUN_105f1590(undefined4 *param_2); template<class... A> int FUN_105f1590(A...); void __thiscall FUN_105f1e80(undefined4 *param_2); template<class... A> int FUN_105f1e80(A...); void __thiscall FUN_105f1ef0(undefined4 *param_2); template<class... A> int FUN_105f1ef0(A...); void __thiscall FUN_105f1f50(undefined4 *param_2); template<class... A> int FUN_105f1f50(A...); void __thiscall FUN_105f1f70(undefined4 *param_2); template<class... A> int FUN_105f1f70(A...); void __thiscall FUN_105f4940(int param_2); template<class... A> int FUN_105f4940(A...); undefined4 * __thiscall FUN_105f7de0(int *param_2); template<class... A> int FUN_105f7de0(A...); undefined4 * __thiscall FUN_105f7e00(int *param_2); template<class... A> int FUN_105f7e00(A...); SCStr * __thiscall FUN_106013f0(SCStr *param_2); template<class... A> int FUN_106013f0(A...); SCStr * __thiscall FUN_10601430(SCStr *param_2); template<class... A> int FUN_10601430(A...); undefined4 __thiscall FUN_10601b30(byte param_2); template<class... A> int FUN_10601b30(A...); undefined4 * __thiscall FUN_10601b60(byte param_2); template<class... A> int FUN_10601b60(A...); undefined4 * __thiscall FUN_10601b90(byte param_2); template<class... A> int FUN_10601b90(A...); undefined4 * __thiscall FUN_10601bc0(byte param_2); template<class... A> int FUN_10601bc0(A...); undefined4 * __thiscall FUN_10601c00(byte param_2); template<class... A> int FUN_10601c00(A...); undefined4 * __thiscall FUN_10601c40(byte param_2); template<class... A> int FUN_10601c40(A...); undefined4 * __thiscall FUN_10601c70(byte param_2); template<class... A> int FUN_10601c70(A...); undefined4 * __thiscall FUN_10601d00(byte param_2); template<class... A> int FUN_10601d00(A...); undefined4 * __thiscall FUN_10601d30(byte param_2); template<class... A> int FUN_10601d30(A...); undefined4 * __thiscall FUN_10601d60(byte param_2); template<class... A> int FUN_10601d60(A...); undefined4 * __thiscall FUN_10601d90(byte param_2); template<class... A> int FUN_10601d90(A...); undefined4 * __thiscall FUN_10601dc0(byte param_2); template<class... A> int FUN_10601dc0(A...); undefined4 * __thiscall FUN_10601df0(byte param_2); template<class... A> int FUN_10601df0(A...); undefined4 * __thiscall FUN_10601e20(byte param_2); template<class... A> int FUN_10601e20(A...); undefined4 * __thiscall FUN_10601e50(byte param_2); template<class... A> int FUN_10601e50(A...); undefined4 * __thiscall FUN_10601e80(byte param_2); template<class... A> int FUN_10601e80(A...); undefined4 * __thiscall FUN_10601eb0(byte param_2); template<class... A> int FUN_10601eb0(A...); undefined4 * __thiscall FUN_10601ee0(byte param_2); template<class... A> int FUN_10601ee0(A...); undefined4 * __thiscall FUN_10601f10(byte param_2); template<class... A> int FUN_10601f10(A...); undefined4 * __thiscall FUN_10601f40(byte param_2); template<class... A> int FUN_10601f40(A...); undefined4 * __thiscall FUN_10601f70(byte param_2); template<class... A> int FUN_10601f70(A...); undefined4 * __thiscall FUN_10601fa0(byte param_2); template<class... A> int FUN_10601fa0(A...); undefined4 * __thiscall FUN_10601fd0(byte param_2); template<class... A> int FUN_10601fd0(A...); undefined4 * __thiscall FUN_10602000(byte param_2); template<class... A> int FUN_10602000(A...); undefined4 * __thiscall FUN_10602030(byte param_2); template<class... A> int FUN_10602030(A...); undefined4 * __thiscall FUN_10602060(byte param_2); template<class... A> int FUN_10602060(A...); undefined4 * __thiscall FUN_10602090(byte param_2); template<class... A> int FUN_10602090(A...); undefined4 * __thiscall FUN_106020c0(byte param_2); template<class... A> int FUN_106020c0(A...); undefined4 * __thiscall FUN_106020f0(byte param_2); template<class... A> int FUN_106020f0(A...); undefined4 * __thiscall FUN_10602120(byte param_2); template<class... A> int FUN_10602120(A...); undefined4 * __thiscall FUN_10602150(byte param_2); template<class... A> int FUN_10602150(A...); undefined4 * __thiscall FUN_10602180(byte param_2); template<class... A> int FUN_10602180(A...); undefined4 * __thiscall FUN_106021b0(byte param_2); template<class... A> int FUN_106021b0(A...); undefined4 * __thiscall FUN_106021e0(byte param_2); template<class... A> int FUN_106021e0(A...); undefined4 __thiscall FUN_10602750(byte param_2); template<class... A> int FUN_10602750(A...); undefined4 * __thiscall FUN_10602830(byte param_2); template<class... A> int FUN_10602830(A...); undefined4 * __thiscall FUN_106028c0(byte param_2); template<class... A> int FUN_106028c0(A...); undefined4 * __thiscall FUN_10602960(byte param_2); template<class... A> int FUN_10602960(A...); undefined4 * __thiscall FUN_10602a00(byte param_2); template<class... A> int FUN_10602a00(A...); undefined4 * __thiscall FUN_10602aa0(byte param_2); template<class... A> int FUN_10602aa0(A...); undefined4 * __thiscall FUN_10602b40(byte param_2); template<class... A> int FUN_10602b40(A...); undefined4 * __thiscall FUN_10602be0(byte param_2); template<class... A> int FUN_10602be0(A...); undefined4 * __thiscall FUN_10602c80(byte param_2); template<class... A> int FUN_10602c80(A...); undefined4 * __thiscall FUN_10602d20(byte param_2); template<class... A> int FUN_10602d20(A...); undefined4 * __thiscall FUN_10602dc0(byte param_2); template<class... A> int FUN_10602dc0(A...); undefined4 * __thiscall FUN_10602e60(byte param_2); template<class... A> int FUN_10602e60(A...); undefined4 * __thiscall FUN_10602f00(byte param_2); template<class... A> int FUN_10602f00(A...); undefined4 * __thiscall FUN_10603040(byte param_2); template<class... A> int FUN_10603040(A...); undefined4 * __thiscall FUN_106030e0(byte param_2); template<class... A> int FUN_106030e0(A...); undefined4 * __thiscall FUN_10603180(byte param_2); template<class... A> int FUN_10603180(A...); undefined4 * __thiscall FUN_10603220(byte param_2); template<class... A> int FUN_10603220(A...); undefined4 * __thiscall FUN_106032c0(byte param_2); template<class... A> int FUN_106032c0(A...); undefined4 * __thiscall FUN_10603360(byte param_2); template<class... A> int FUN_10603360(A...); undefined4 * __thiscall FUN_10603460(byte param_2); template<class... A> int FUN_10603460(A...); undefined4 * __thiscall FUN_10603560(byte param_2); template<class... A> int FUN_10603560(A...); undefined4 * __thiscall FUN_10603600(byte param_2); template<class... A> int FUN_10603600(A...); undefined4 * __thiscall FUN_106036a0(byte param_2); template<class... A> int FUN_106036a0(A...); undefined4 * __thiscall FUN_106037a0(byte param_2); template<class... A> int FUN_106037a0(A...); undefined4 * __thiscall FUN_10603840(byte param_2); template<class... A> int FUN_10603840(A...); undefined4 * __thiscall FUN_106038e0(byte param_2); template<class... A> int FUN_106038e0(A...); undefined4 * __thiscall FUN_10603980(byte param_2); template<class... A> int FUN_10603980(A...); undefined4 * __thiscall FUN_10603a20(byte param_2); template<class... A> int FUN_10603a20(A...); undefined4 __thiscall FUN_10603bd0(byte param_2); template<class... A> int FUN_10603bd0(A...); undefined4 * __thiscall FUN_10603c60(byte param_2); template<class... A> int FUN_10603c60(A...); void __thiscall FUN_106043a0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_106043a0(A...); void __thiscall FUN_10604ce0(int *param_2); template<class... A> int FUN_10604ce0(A...); void __thiscall FUN_10604d30(int param_2); template<class... A> int FUN_10604d30(A...); int __thiscall FUN_10605020(undefined4 param_2); template<class... A> int FUN_10605020(A...); int __thiscall FUN_10605060(undefined4 param_2); template<class... A> int FUN_10605060(A...); int __thiscall FUN_106050a0(undefined4 param_2); template<class... A> int FUN_106050a0(A...); int __thiscall FUN_10608110(undefined4 param_2); template<class... A> int FUN_10608110(A...); int __thiscall FUN_10608160(undefined4 param_2); template<class... A> int FUN_10608160(A...); int __thiscall FUN_106081b0(undefined4 param_2); template<class... A> int FUN_106081b0(A...); undefined4 * __thiscall FUN_1061cb10(int *param_2); template<class... A> int FUN_1061cb10(A...); SCStr * __thiscall FUN_1061d0e0(SCStr *param_2); template<class... A> int FUN_1061d0e0(A...); void __thiscall FUN_1061e340(int param_2); template<class... A> int FUN_1061e340(A...); undefined4 * __thiscall FUN_1061f9c0(byte param_2); template<class... A> int FUN_1061f9c0(A...); undefined4 * __thiscall FUN_1061f9f0(byte param_2); template<class... A> int FUN_1061f9f0(A...); undefined4 * __thiscall FUN_1061fa20(byte param_2); template<class... A> int FUN_1061fa20(A...); undefined4 * __thiscall FUN_1061fa50(byte param_2); template<class... A> int FUN_1061fa50(A...); undefined4 __thiscall FUN_1061fa80(byte param_2); template<class... A> int FUN_1061fa80(A...); undefined4 * __thiscall FUN_1061fb70(byte param_2); template<class... A> int FUN_1061fb70(A...); undefined4 * __thiscall FUN_1061fc10(byte param_2); template<class... A> int FUN_1061fc10(A...); undefined4 * __thiscall FUN_1061fcb0(byte param_2); template<class... A> int FUN_1061fcb0(A...); undefined4 * __thiscall FUN_1061fdc0(byte param_2); template<class... A> int FUN_1061fdc0(A...); void __thiscall FUN_1061fe90(int param_2); template<class... A> int FUN_1061fe90(A...); undefined4 * __thiscall FUN_10625fa0(int *param_2); template<class... A> int FUN_10625fa0(A...); undefined4 * __thiscall FUN_10625fc0(int *param_2); template<class... A> int FUN_10625fc0(A...); undefined4 * __thiscall FUN_1062e580(byte param_2); template<class... A> int FUN_1062e580(A...); undefined4 * __thiscall FUN_1062e5b0(byte param_2); template<class... A> int FUN_1062e5b0(A...); undefined4 * __thiscall FUN_1062e5e0(byte param_2); template<class... A> int FUN_1062e5e0(A...); undefined4 * __thiscall FUN_1062e610(byte param_2); template<class... A> int FUN_1062e610(A...); undefined4 * __thiscall FUN_1062e640(byte param_2); template<class... A> int FUN_1062e640(A...); undefined4 * __thiscall FUN_1062e670(byte param_2); template<class... A> int FUN_1062e670(A...); undefined4 * __thiscall FUN_1062e6a0(byte param_2); template<class... A> int FUN_1062e6a0(A...); undefined4 * __thiscall FUN_1062e6d0(byte param_2); template<class... A> int FUN_1062e6d0(A...); undefined4 * __thiscall FUN_1062e700(byte param_2); template<class... A> int FUN_1062e700(A...); undefined4 * __thiscall FUN_1062e730(byte param_2); template<class... A> int FUN_1062e730(A...); undefined4 * __thiscall FUN_1062e760(byte param_2); template<class... A> int FUN_1062e760(A...); undefined4 * __thiscall FUN_1062e790(byte param_2); template<class... A> int FUN_1062e790(A...); undefined4 * __thiscall FUN_1062e7c0(byte param_2); template<class... A> int FUN_1062e7c0(A...); undefined4 * __thiscall FUN_1062e7f0(byte param_2); template<class... A> int FUN_1062e7f0(A...); undefined4 * __thiscall FUN_1062e820(byte param_2); template<class... A> int FUN_1062e820(A...); undefined4 * __thiscall FUN_1062e850(byte param_2); template<class... A> int FUN_1062e850(A...); undefined4 * __thiscall FUN_1062e880(byte param_2); template<class... A> int FUN_1062e880(A...); undefined4 * __thiscall FUN_1062e8b0(byte param_2); template<class... A> int FUN_1062e8b0(A...); undefined4 * __thiscall FUN_1062e8e0(byte param_2); template<class... A> int FUN_1062e8e0(A...); undefined4 * __thiscall FUN_1062e910(byte param_2); template<class... A> int FUN_1062e910(A...); undefined4 * __thiscall FUN_1062e940(byte param_2); template<class... A> int FUN_1062e940(A...); undefined4 * __thiscall FUN_1062e970(byte param_2); template<class... A> int FUN_1062e970(A...); undefined4 * __thiscall FUN_1062e9a0(byte param_2); template<class... A> int FUN_1062e9a0(A...); undefined4 * __thiscall FUN_1062e9d0(byte param_2); template<class... A> int FUN_1062e9d0(A...); undefined4 * __thiscall FUN_1062ea00(byte param_2); template<class... A> int FUN_1062ea00(A...); undefined4 * __thiscall FUN_1062ea30(byte param_2); template<class... A> int FUN_1062ea30(A...); undefined4 * __thiscall FUN_1062ea60(byte param_2); template<class... A> int FUN_1062ea60(A...); undefined4 * __thiscall FUN_1062ea90(byte param_2); template<class... A> int FUN_1062ea90(A...); undefined4 * __thiscall FUN_1062eac0(byte param_2); template<class... A> int FUN_1062eac0(A...); undefined4 * __thiscall FUN_1062f190(byte param_2); template<class... A> int FUN_1062f190(A...); undefined4 * __thiscall FUN_1062f230(byte param_2); template<class... A> int FUN_1062f230(A...); undefined4 * __thiscall FUN_1062f2d0(byte param_2); template<class... A> int FUN_1062f2d0(A...); undefined4 * __thiscall FUN_1062f370(byte param_2); template<class... A> int FUN_1062f370(A...); undefined4 * __thiscall FUN_1062f410(byte param_2); template<class... A> int FUN_1062f410(A...); undefined4 * __thiscall FUN_1062f520(byte param_2); template<class... A> int FUN_1062f520(A...); undefined4 * __thiscall FUN_1062f5c0(byte param_2); template<class... A> int FUN_1062f5c0(A...); undefined4 * __thiscall FUN_1062f6c0(byte param_2); template<class... A> int FUN_1062f6c0(A...); undefined4 * __thiscall FUN_1062f760(byte param_2); template<class... A> int FUN_1062f760(A...); undefined4 * __thiscall FUN_1062f860(byte param_2); template<class... A> int FUN_1062f860(A...); undefined4 * __thiscall FUN_1062f900(byte param_2); template<class... A> int FUN_1062f900(A...); undefined4 * __thiscall FUN_1062f9a0(byte param_2); template<class... A> int FUN_1062f9a0(A...); undefined4 * __thiscall FUN_1062fab0(byte param_2); template<class... A> int FUN_1062fab0(A...); undefined4 * __thiscall FUN_1062fbb0(byte param_2); template<class... A> int FUN_1062fbb0(A...); undefined4 * __thiscall FUN_1062fc50(byte param_2); template<class... A> int FUN_1062fc50(A...); undefined4 * __thiscall FUN_1062fcf0(byte param_2); template<class... A> int FUN_1062fcf0(A...); undefined4 * __thiscall FUN_1062fd90(byte param_2); template<class... A> int FUN_1062fd90(A...); undefined4 * __thiscall FUN_1062fe30(byte param_2); template<class... A> int FUN_1062fe30(A...); undefined4 * __thiscall FUN_1062fed0(byte param_2); template<class... A> int FUN_1062fed0(A...); undefined4 * __thiscall FUN_1062ff70(byte param_2); template<class... A> int FUN_1062ff70(A...); undefined4 * __thiscall FUN_10630010(byte param_2); template<class... A> int FUN_10630010(A...); undefined4 * __thiscall FUN_106300b0(byte param_2); template<class... A> int FUN_106300b0(A...); undefined4 * __thiscall FUN_10630150(byte param_2); template<class... A> int FUN_10630150(A...); undefined4 * __thiscall FUN_106301f0(byte param_2); template<class... A> int FUN_106301f0(A...); undefined4 * __thiscall FUN_10630290(byte param_2); template<class... A> int FUN_10630290(A...); undefined4 * __thiscall FUN_10630330(byte param_2); template<class... A> int FUN_10630330(A...); undefined4 * __thiscall FUN_10630440(byte param_2); template<class... A> int FUN_10630440(A...); undefined4 * __thiscall FUN_106304e0(byte param_2); template<class... A> int FUN_106304e0(A...); undefined4 * __thiscall FUN_10630580(byte param_2); template<class... A> int FUN_10630580(A...); undefined4 __thiscall FUN_106306e0(byte param_2); template<class... A> int FUN_106306e0(A...); void __thiscall FUN_10630940(int *param_2); template<class... A> int FUN_10630940(A...); void __thiscall FUN_106486f0(undefined4 param_2); template<class... A> int FUN_106486f0(A...); void __thiscall FUN_10648720(undefined4 param_2); template<class... A> int FUN_10648720(A...); void __thiscall FUN_10648af0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_10648af0(A...); undefined4 * __thiscall FUN_1064bc40(int *param_2); template<class... A> int FUN_1064bc40(A...); undefined4 * __thiscall FUN_1064bc80(int *param_2); template<class... A> int FUN_1064bc80(A...); undefined4 * __thiscall FUN_1064bce0(int *param_2); template<class... A> int FUN_1064bce0(A...); undefined4 * __thiscall FUN_10657660(byte param_2); template<class... A> int FUN_10657660(A...); undefined4 * __thiscall FUN_10657690(byte param_2); template<class... A> int FUN_10657690(A...); undefined4 * __thiscall FUN_106576c0(byte param_2); template<class... A> int FUN_106576c0(A...); undefined4 * __thiscall FUN_106576f0(byte param_2); template<class... A> int FUN_106576f0(A...); undefined4 * __thiscall FUN_10657720(byte param_2); template<class... A> int FUN_10657720(A...); undefined4 * __thiscall FUN_10657750(byte param_2); template<class... A> int FUN_10657750(A...); undefined4 * __thiscall FUN_10657780(byte param_2); template<class... A> int FUN_10657780(A...); undefined4 * __thiscall FUN_106577b0(byte param_2); template<class... A> int FUN_106577b0(A...); undefined4 * __thiscall FUN_106577e0(byte param_2); template<class... A> int FUN_106577e0(A...); undefined4 * __thiscall FUN_10657810(byte param_2); template<class... A> int FUN_10657810(A...); undefined4 * __thiscall FUN_10657840(byte param_2); template<class... A> int FUN_10657840(A...); undefined4 * __thiscall FUN_10657870(byte param_2); template<class... A> int FUN_10657870(A...); undefined4 * __thiscall FUN_106578a0(byte param_2); template<class... A> int FUN_106578a0(A...); undefined4 * __thiscall FUN_106578d0(byte param_2); template<class... A> int FUN_106578d0(A...); undefined4 * __thiscall FUN_10657900(byte param_2); template<class... A> int FUN_10657900(A...); undefined4 * __thiscall FUN_10657930(byte param_2); template<class... A> int FUN_10657930(A...); undefined4 * __thiscall FUN_10657960(byte param_2); template<class... A> int FUN_10657960(A...); undefined4 * __thiscall FUN_10657990(byte param_2); template<class... A> int FUN_10657990(A...); undefined4 * __thiscall FUN_106579c0(byte param_2); template<class... A> int FUN_106579c0(A...); undefined4 * __thiscall FUN_106579f0(byte param_2); template<class... A> int FUN_106579f0(A...); undefined4 * __thiscall FUN_10657a20(byte param_2); template<class... A> int FUN_10657a20(A...); undefined4 * __thiscall FUN_10657a50(byte param_2); template<class... A> int FUN_10657a50(A...); undefined4 * __thiscall FUN_10657a80(byte param_2); template<class... A> int FUN_10657a80(A...); undefined4 * __thiscall FUN_10657ab0(byte param_2); template<class... A> int FUN_10657ab0(A...); undefined4 * __thiscall FUN_10657ae0(byte param_2); template<class... A> int FUN_10657ae0(A...); undefined4 * __thiscall FUN_10657b10(byte param_2); template<class... A> int FUN_10657b10(A...); undefined4 * __thiscall FUN_10657b40(byte param_2); template<class... A> int FUN_10657b40(A...); undefined4 * __thiscall FUN_10657b70(byte param_2); template<class... A> int FUN_10657b70(A...); undefined4 * __thiscall FUN_10657ba0(byte param_2); template<class... A> int FUN_10657ba0(A...); undefined4 * __thiscall FUN_10657bd0(byte param_2); template<class... A> int FUN_10657bd0(A...); undefined4 * __thiscall FUN_10657c00(byte param_2); template<class... A> int FUN_10657c00(A...); undefined4 * __thiscall FUN_10657c30(byte param_2); template<class... A> int FUN_10657c30(A...); undefined4 * __thiscall FUN_10657c60(byte param_2); template<class... A> int FUN_10657c60(A...); undefined4 * __thiscall FUN_10657c90(byte param_2); template<class... A> int FUN_10657c90(A...); undefined4 * __thiscall FUN_10657cc0(byte param_2); template<class... A> int FUN_10657cc0(A...); undefined4 * __thiscall FUN_10657cf0(byte param_2); template<class... A> int FUN_10657cf0(A...); undefined4 * __thiscall FUN_10657d20(byte param_2); template<class... A> int FUN_10657d20(A...); undefined4 * __thiscall FUN_10657d50(byte param_2); template<class... A> int FUN_10657d50(A...); undefined4 * __thiscall FUN_10658720(byte param_2); template<class... A> int FUN_10658720(A...); undefined4 * __thiscall FUN_106587c0(byte param_2); template<class... A> int FUN_106587c0(A...); undefined4 * __thiscall FUN_106588c0(byte param_2); template<class... A> int FUN_106588c0(A...); undefined4 * __thiscall FUN_10658960(byte param_2); template<class... A> int FUN_10658960(A...); undefined4 * __thiscall FUN_10658a00(byte param_2); template<class... A> int FUN_10658a00(A...); undefined4 * __thiscall FUN_10658aa0(byte param_2); template<class... A> int FUN_10658aa0(A...); undefined4 * __thiscall FUN_10658b40(byte param_2); template<class... A> int FUN_10658b40(A...); undefined4 * __thiscall FUN_10658be0(byte param_2); template<class... A> int FUN_10658be0(A...); undefined4 * __thiscall FUN_10658c80(byte param_2); template<class... A> int FUN_10658c80(A...); undefined4 * __thiscall FUN_10658d20(byte param_2); template<class... A> int FUN_10658d20(A...); undefined4 * __thiscall FUN_10658dc0(byte param_2); template<class... A> int FUN_10658dc0(A...); undefined4 * __thiscall FUN_10658e60(byte param_2); template<class... A> int FUN_10658e60(A...); undefined4 * __thiscall FUN_10658f70(byte param_2); template<class... A> int FUN_10658f70(A...); undefined4 * __thiscall FUN_10659010(byte param_2); template<class... A> int FUN_10659010(A...); undefined4 * __thiscall FUN_106590b0(byte param_2); template<class... A> int FUN_106590b0(A...); undefined4 * __thiscall FUN_10659150(byte param_2); template<class... A> int FUN_10659150(A...); undefined4 * __thiscall FUN_106591f0(byte param_2); template<class... A> int FUN_106591f0(A...); undefined4 * __thiscall FUN_10659290(byte param_2); template<class... A> int FUN_10659290(A...); undefined4 * __thiscall FUN_10659330(byte param_2); template<class... A> int FUN_10659330(A...); undefined4 * __thiscall FUN_106593d0(byte param_2); template<class... A> int FUN_106593d0(A...); undefined4 * __thiscall FUN_10659470(byte param_2); template<class... A> int FUN_10659470(A...); undefined4 * __thiscall FUN_10659510(byte param_2); template<class... A> int FUN_10659510(A...); undefined4 * __thiscall FUN_106595b0(byte param_2); template<class... A> int FUN_106595b0(A...); undefined4 * __thiscall FUN_106596b0(byte param_2); template<class... A> int FUN_106596b0(A...); undefined4 * __thiscall FUN_106597c0(byte param_2); template<class... A> int FUN_106597c0(A...); undefined4 * __thiscall FUN_10659860(byte param_2); template<class... A> int FUN_10659860(A...); undefined4 * __thiscall FUN_10659970(byte param_2); template<class... A> int FUN_10659970(A...); undefined4 * __thiscall FUN_10659a10(byte param_2); template<class... A> int FUN_10659a10(A...); undefined4 * __thiscall FUN_10659ab0(byte param_2); template<class... A> int FUN_10659ab0(A...); undefined4 * __thiscall FUN_10659b50(byte param_2); template<class... A> int FUN_10659b50(A...); undefined4 * __thiscall FUN_10659bf0(byte param_2); template<class... A> int FUN_10659bf0(A...); undefined4 * __thiscall FUN_10659c90(byte param_2); template<class... A> int FUN_10659c90(A...); undefined4 * __thiscall FUN_10659db0(byte param_2); template<class... A> int FUN_10659db0(A...); undefined4 * __thiscall FUN_10659e50(byte param_2); template<class... A> int FUN_10659e50(A...); undefined4 * __thiscall FUN_10659ef0(byte param_2); template<class... A> int FUN_10659ef0(A...); undefined4 * __thiscall FUN_10659f90(byte param_2); template<class... A> int FUN_10659f90(A...); undefined4 * __thiscall FUN_1065a030(byte param_2); template<class... A> int FUN_1065a030(A...); undefined4 * __thiscall FUN_1065a0d0(byte param_2); template<class... A> int FUN_1065a0d0(A...); undefined4 __thiscall FUN_1065a280(byte param_2); template<class... A> int FUN_1065a280(A...); undefined4 __thiscall FUN_1065a3c0(byte param_2); template<class... A> int FUN_1065a3c0(A...); void __thiscall FUN_1065a4d0(int param_2); template<class... A> int FUN_1065a4d0(A...); void __thiscall FUN_1065a6a0(undefined4 *param_2); template<class... A> int FUN_1065a6a0(A...); void __thiscall FUN_1065a6c0(undefined4 *param_2); template<class... A> int FUN_1065a6c0(A...); void __thiscall FUN_1065a6e0(undefined4 *param_2); template<class... A> int FUN_1065a6e0(A...); void __thiscall FUN_1065a720(char param_2); template<class... A> int FUN_1065a720(A...); void __thiscall FUN_1065a740(char param_2); template<class... A> int FUN_1065a740(A...); void __thiscall FUN_1065a760(char param_2); template<class... A> int FUN_1065a760(A...); void __thiscall FUN_1065ac80(undefined4 *param_2); template<class... A> int FUN_1065ac80(A...); void __thiscall FUN_1065aca0(undefined4 *param_2); template<class... A> int FUN_1065aca0(A...); void __thiscall FUN_1065acc0(undefined4 *param_2); template<class... A> int FUN_1065acc0(A...); undefined4 * __thiscall FUN_1067f4d0(int *param_2); template<class... A> int FUN_1067f4d0(A...); void __thiscall FUN_1067f9b0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_1067f9b0(A...); void __thiscall FUN_10680b40(SCStr *param_2); template<class... A> int FUN_10680b40(A...); void __thiscall FUN_10681e40(undefined4 param_2); template<class... A> int FUN_10681e40(A...); void __thiscall FUN_10681e70(undefined4 param_2); template<class... A> int FUN_10681e70(A...); int __thiscall FUN_10682040(SCStr *param_2); template<class... A> int FUN_10682040(A...); void __thiscall FUN_10682c90(undefined4 *param_2); template<class... A> int FUN_10682c90(A...); undefined4 * __thiscall FUN_10682fc0(int *param_2); template<class... A> int FUN_10682fc0(A...); undefined4 * __thiscall FUN_10683030(int *param_2); template<class... A> int FUN_10683030(A...); undefined4 * __thiscall FUN_10684c90(byte param_2); template<class... A> int FUN_10684c90(A...); undefined4 __thiscall FUN_10684e90(byte param_2); template<class... A> int FUN_10684e90(A...); undefined4 __thiscall FUN_10684f40(byte param_2); template<class... A> int FUN_10684f40(A...); undefined4 __thiscall FUN_10684f70(byte param_2); template<class... A> int FUN_10684f70(A...); undefined4 * __thiscall FUN_10684fa0(byte param_2); template<class... A> int FUN_10684fa0(A...); void __thiscall FUN_10685190(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10685190(A...); void __thiscall FUN_10687780(undefined4 *param_2); template<class... A> int FUN_10687780(A...); undefined4 * __thiscall FUN_106877d0(undefined4 *param_2,SCStr *param_3); template<class... A> int FUN_106877d0(A...); undefined4 * __thiscall FUN_10687820(undefined4 *param_2,SCStr *param_3); template<class... A> int FUN_10687820(A...); undefined4 * __thiscall FUN_10687e00(int param_2); template<class... A> int FUN_10687e00(A...); undefined4 * __thiscall FUN_10687fe0(int *param_2); template<class... A> int FUN_10687fe0(A...); undefined4 * __thiscall FUN_106885a0(int param_2); template<class... A> int FUN_106885a0(A...); int __thiscall FUN_10688e80(int param_2); template<class... A> int FUN_10688e80(A...); undefined4 * __thiscall FUN_10689120(byte param_2); template<class... A> int FUN_10689120(A...); undefined4 * __thiscall FUN_10689150(byte param_2); template<class... A> int FUN_10689150(A...); undefined4 * __thiscall FUN_10689190(byte param_2); template<class... A> int FUN_10689190(A...); undefined4 __thiscall FUN_106891d0(byte param_2); template<class... A> int FUN_106891d0(A...); undefined4 * __thiscall FUN_10689200(byte param_2); template<class... A> int FUN_10689200(A...); undefined4 * __thiscall FUN_10689250(byte param_2); template<class... A> int FUN_10689250(A...); undefined4 * __thiscall FUN_10689280(byte param_2); template<class... A> int FUN_10689280(A...); SCShare * __thiscall FUN_10689450(byte param_2); template<class... A> int FUN_10689450(A...); void __thiscall FUN_1068be50(int param_2); template<class... A> int FUN_1068be50(A...); int __thiscall FUN_1068d470(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_1068d470(A...); void __thiscall FUN_10690430(undefined4 *param_2); template<class... A> int FUN_10690430(A...); void __thiscall FUN_10690480(undefined4 *param_2); template<class... A> int FUN_10690480(A...); undefined4 * __thiscall FUN_10690d80(int *param_2); template<class... A> int FUN_10690d80(A...); undefined4 * __thiscall FUN_10690da0(int *param_2); template<class... A> int FUN_10690da0(A...); undefined4 __thiscall FUN_106936f0(byte param_2); template<class... A> int FUN_106936f0(A...); void __thiscall FUN_10693e30(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10693e30(A...); undefined4 __thiscall FUN_106967c0(undefined4 param_2); template<class... A> int FUN_106967c0(A...); void __thiscall FUN_10696ac0(undefined4 *param_2); template<class... A> int FUN_10696ac0(A...); void __thiscall FUN_10696b10(undefined4 *param_2); template<class... A> int FUN_10696b10(A...); undefined4 * __thiscall FUN_10696fc0(int *param_2); template<class... A> int FUN_10696fc0(A...); undefined4 * __thiscall FUN_10697be0(byte param_2); template<class... A> int FUN_10697be0(A...); SCStr * __thiscall FUN_10699700(SCStr *param_2); template<class... A> int FUN_10699700(A...); SCStr * __thiscall FUN_106997c0(SCStr *param_2); template<class... A> int FUN_106997c0(A...); undefined4 * __thiscall FUN_1069abb0(int *param_2); template<class... A> int FUN_1069abb0(A...); undefined4 * __thiscall FUN_1069abf0(int *param_2); template<class... A> int FUN_1069abf0(A...); undefined4 * __thiscall FUN_1069ac80(int *param_2); template<class... A> int FUN_1069ac80(A...); undefined4 * __thiscall FUN_1069acc0(int *param_2); template<class... A> int FUN_1069acc0(A...); undefined4 * __thiscall FUN_1069ad00(int *param_2); template<class... A> int FUN_1069ad00(A...); undefined4 * __thiscall FUN_1069ad20(int *param_2); template<class... A> int FUN_1069ad20(A...); undefined4 * __thiscall FUN_1069d400(byte param_2); template<class... A> int FUN_1069d400(A...); undefined4 * __thiscall FUN_1069d440(byte param_2); template<class... A> int FUN_1069d440(A...); undefined4 * __thiscall FUN_1069d480(byte param_2); template<class... A> int FUN_1069d480(A...); undefined4 * __thiscall FUN_1069d4c0(byte param_2); template<class... A> int FUN_1069d4c0(A...); undefined4 __thiscall FUN_1069d500(byte param_2); template<class... A> int FUN_1069d500(A...); undefined4 * __thiscall FUN_1069d6a0(byte param_2); template<class... A> int FUN_1069d6a0(A...); void __thiscall FUN_1069d8b0(undefined4 *param_2); template<class... A> int FUN_1069d8b0(A...); void __thiscall FUN_1069d8d0(char param_2); template<class... A> int FUN_1069d8d0(A...); void __thiscall FUN_1069dda0(undefined4 *param_2); template<class... A> int FUN_1069dda0(A...); void __thiscall FUN_1069e280(int *param_2); template<class... A> int FUN_1069e280(A...); undefined4 * __thiscall FUN_1069e990(undefined4 *param_2); template<class... A> int FUN_1069e990(A...); void __thiscall FUN_1069ed80(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_1069ed80(A...); void __thiscall FUN_1069edb0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_1069edb0(A...); undefined4 * __thiscall FUN_106a12f0(int *param_2); template<class... A> int FUN_106a12f0(A...); undefined4 * __thiscall FUN_106a1670(byte param_2); template<class... A> int FUN_106a1670(A...); undefined4 * __thiscall FUN_106a16b0(byte param_2); template<class... A> int FUN_106a16b0(A...); undefined4 __thiscall FUN_106a2b90(SCStr *param_2); template<class... A> int FUN_106a2b90(A...); int __thiscall FUN_106a30e0(undefined4 param_2); template<class... A> int FUN_106a30e0(A...); undefined4 * __thiscall FUN_106a40d0(int param_2); template<class... A> int FUN_106a40d0(A...); int __thiscall FUN_106a4e00(byte param_2); template<class... A> int FUN_106a4e00(A...); undefined4 * __thiscall FUN_106a4e30(byte param_2); template<class... A> int FUN_106a4e30(A...);void __thiscall FUN_106a54f0(void); template<class... A> int FUN_106a54f0(A...); void __thiscall FUN_106a6e50(undefined4 param_2); template<class... A> int FUN_106a6e50(A...); int __thiscall FUN_106a8380(void); template<class... A> int FUN_106a8380(A...); void __thiscall FUN_106aa2c0(SCStr *param_2); template<class... A> int FUN_106aa2c0(A...); void __thiscall FUN_106aa370(SCStr *param_2); template<class... A> int FUN_106aa370(A...); void __thiscall FUN_106aa470(SCStr *param_2); template<class... A> int FUN_106aa470(A...); void __thiscall FUN_106ab490(undefined4 param_2); template<class... A> int FUN_106ab490(A...); void __thiscall FUN_106ab4c0(undefined4 param_2); template<class... A> int FUN_106ab4c0(A...); int __thiscall FUN_106ab730(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_106ab730(A...); int __thiscall FUN_106ab770(int *param_2); template<class... A> int FUN_106ab770(A...); void __thiscall FUN_106af240(undefined4 *param_2); template<class... A> int FUN_106af240(A...); void __thiscall FUN_106af2d0(undefined4 *param_2); template<class... A> int FUN_106af2d0(A...); void __thiscall FUN_106af320(undefined4 *param_2); template<class... A> int FUN_106af320(A...); void __thiscall FUN_106af6d0(int *param_2,SCStr *param_3); template<class... A> int FUN_106af6d0(A...); undefined4 * __thiscall FUN_106b05a0(int *param_2); template<class... A> int FUN_106b05a0(A...); undefined4 * __thiscall FUN_106b0640(int *param_2); template<class... A> int FUN_106b0640(A...); undefined4 * __thiscall FUN_106b0680(int *param_2); template<class... A> int FUN_106b0680(A...); int * __thiscall FUN_106b06c0(int param_2); template<class... A> int FUN_106b06c0(A...); undefined4 * __thiscall FUN_106b0700(int *param_2); template<class... A> int FUN_106b0700(A...); undefined4 * __thiscall FUN_106b0720(int *param_2); template<class... A> int FUN_106b0720(A...); undefined4 * __thiscall FUN_106b1130(undefined4 *param_2); template<class... A> int FUN_106b1130(A...); undefined4 * __thiscall FUN_106b2380(undefined4 param_2); template<class... A> int FUN_106b2380(A...); int __thiscall FUN_106b6be0(byte param_2); template<class... A> int FUN_106b6be0(A...); undefined4 __thiscall FUN_106b6d30(byte param_2); template<class... A> int FUN_106b6d30(A...); undefined4 __thiscall FUN_106b6d60(byte param_2); template<class... A> int FUN_106b6d60(A...); undefined4 __thiscall FUN_106b6f00(byte param_2); template<class... A> int FUN_106b6f00(A...); undefined4 __thiscall FUN_106b7be0(byte param_2); template<class... A> int FUN_106b7be0(A...); void __thiscall FUN_106b89d0(undefined4 *param_2); template<class... A> int FUN_106b89d0(A...); void __thiscall FUN_106b89f0(undefined4 *param_2); template<class... A> int FUN_106b89f0(A...); void __thiscall FUN_106b8a40(undefined4 param_2); template<class... A> int FUN_106b8a40(A...); void __thiscall FUN_106b8ac0(char param_2); template<class... A> int FUN_106b8ac0(A...); void __thiscall FUN_106b8b10(char param_2); template<class... A> int FUN_106b8b10(A...); void __thiscall FUN_106b8b30(char param_2); template<class... A> int FUN_106b8b30(A...); void __thiscall FUN_106b8b50(char param_2); template<class... A> int FUN_106b8b50(A...); void __thiscall FUN_106b8b70(char param_2); template<class... A> int FUN_106b8b70(A...); void __thiscall FUN_106b8b90(char param_2); template<class... A> int FUN_106b8b90(A...); void __thiscall FUN_106b8cf0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_106b8cf0(A...); void __thiscall FUN_106b8d40(undefined4 *param_2); template<class... A> int FUN_106b8d40(A...); bool __thiscall FUN_106b8d70(undefined4 *param_2); template<class... A> int FUN_106b8d70(A...); void __thiscall FUN_106ba600(undefined4 *param_2); template<class... A> int FUN_106ba600(A...); void __thiscall FUN_106ba620(undefined4 *param_2); template<class... A> int FUN_106ba620(A...); void __thiscall FUN_106ba670(int *param_2); template<class... A> int FUN_106ba670(A...); void __thiscall FUN_106bcb40(int *param_2); template<class... A> int FUN_106bcb40(A...); void __thiscall FUN_106bcb90(int *param_2); template<class... A> int FUN_106bcb90(A...); void __thiscall FUN_106bcbe0(int *param_2); template<class... A> int FUN_106bcbe0(A...); uint __thiscall FUN_106bd210(SCStr *param_2); template<class... A> int FUN_106bd210(A...); undefined4 __thiscall FUN_106c3cd0(undefined4 param_2); template<class... A> int FUN_106c3cd0(A...); undefined4 __thiscall FUN_106cc650(undefined1 *param_2); template<class... A> int FUN_106cc650(A...); void __thiscall FUN_106cc6c0(SCStr *param_2); template<class... A> int FUN_106cc6c0(A...); void __thiscall FUN_106cc710(undefined4 *param_2); template<class... A> int FUN_106cc710(A...); void __thiscall FUN_106cc760(undefined4 *param_2); template<class... A> int FUN_106cc760(A...); void __thiscall FUN_106cc7b0(undefined4 *param_2); template<class... A> int FUN_106cc7b0(A...); void __thiscall FUN_106cc800(undefined4 param_2); template<class... A> int FUN_106cc800(A...); undefined4 * __thiscall FUN_106cfe30(int *param_2); template<class... A> int FUN_106cfe30(A...); undefined4 __thiscall FUN_106d02e0(byte param_2); template<class... A> int FUN_106d02e0(A...); SCStr * __thiscall FUN_106d0ad0(SCStr *param_2); template<class... A> int FUN_106d0ad0(A...); void __thiscall FUN_106d1910(undefined4 param_2); template<class... A> int FUN_106d1910(A...); int __thiscall FUN_106d1a20(SCStr *param_2); template<class... A> int FUN_106d1a20(A...); undefined4 * __thiscall FUN_106d2480(int *param_2); template<class... A> int FUN_106d2480(A...); undefined4 * __thiscall FUN_106d24e0(int *param_2); template<class... A> int FUN_106d24e0(A...); undefined4 __thiscall FUN_106d3500(byte param_2); template<class... A> int FUN_106d3500(A...); void __thiscall FUN_106d3760(undefined4 *param_2); template<class... A> int FUN_106d3760(A...); void __thiscall FUN_106d3780(undefined4 *param_2); template<class... A> int FUN_106d3780(A...); void __thiscall FUN_106d37a0(undefined4 *param_2); template<class... A> int FUN_106d37a0(A...); void __thiscall FUN_106d3850(char param_2); template<class... A> int FUN_106d3850(A...); void __thiscall FUN_106d3870(char param_2); template<class... A> int FUN_106d3870(A...); void __thiscall FUN_106d3890(char param_2); template<class... A> int FUN_106d3890(A...); void __thiscall FUN_106d42c0(undefined4 *param_2); template<class... A> int FUN_106d42c0(A...); void __thiscall FUN_106d42e0(undefined4 *param_2); template<class... A> int FUN_106d42e0(A...); void __thiscall FUN_106d4300(undefined4 *param_2); template<class... A> int FUN_106d4300(A...); void __thiscall FUN_106d4c90(int *param_2); template<class... A> int FUN_106d4c90(A...); undefined4 __thiscall FUN_106d5d20(undefined4 param_2); template<class... A> int FUN_106d5d20(A...); void __thiscall FUN_106d68b0(int param_2); template<class... A> int FUN_106d68b0(A...); void __thiscall FUN_106d74c0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_106d74c0(A...); undefined4 __thiscall FUN_106d7b00(byte param_2); template<class... A> int FUN_106d7b00(A...); undefined4 __thiscall FUN_106d7b30(byte param_2); template<class... A> int FUN_106d7b30(A...); undefined4 * __thiscall FUN_106d7b60(byte param_2); template<class... A> int FUN_106d7b60(A...); undefined4 * __thiscall FUN_106d8310(int *param_2); template<class... A> int FUN_106d8310(A...); int * __thiscall FUN_106d83f0(int *param_2); template<class... A> int FUN_106d83f0(A...); int * __thiscall FUN_106d8410(int *param_2); template<class... A> int FUN_106d8410(A...); void __thiscall FUN_106d90d0(undefined4 param_2); template<class... A> int FUN_106d90d0(A...); int __thiscall FUN_106d92c0(uint *param_2); template<class... A> int FUN_106d92c0(A...); int __thiscall FUN_106d9300(uint *param_2); template<class... A> int FUN_106d9300(A...); int * __thiscall FUN_106dacd0(byte param_2); template<class... A> int FUN_106dacd0(A...); undefined4 __thiscall FUN_106dad20(byte param_2); template<class... A> int FUN_106dad20(A...); undefined4 __thiscall FUN_106daf10(byte param_2); template<class... A> int FUN_106daf10(A...); void __thiscall FUN_106dd2a0(undefined4 param_2); template<class... A> int FUN_106dd2a0(A...); void __thiscall FUN_106dd2d0(undefined4 param_2); template<class... A> int FUN_106dd2d0(A...); SCStr * __thiscall FUN_106dfa00(SCStr *param_2); template<class... A> int FUN_106dfa00(A...); SCStr * __thiscall FUN_106dfa20(SCStr *param_2); template<class... A> int FUN_106dfa20(A...); void __thiscall FUN_106e1100(undefined4 *param_2); template<class... A> int FUN_106e1100(A...); undefined4 * __thiscall FUN_106e2410(int *param_2); template<class... A> int FUN_106e2410(A...); undefined4 * __thiscall FUN_106e2430(int *param_2); template<class... A> int FUN_106e2430(A...); undefined4 * __thiscall FUN_106e5e30(byte param_2); template<class... A> int FUN_106e5e30(A...); undefined4 * __thiscall FUN_106e5e70(byte param_2); template<class... A> int FUN_106e5e70(A...); undefined4 * __thiscall FUN_106e5ea0(byte param_2); template<class... A> int FUN_106e5ea0(A...); undefined4 * __thiscall FUN_106e5f30(byte param_2); template<class... A> int FUN_106e5f30(A...); undefined4 * __thiscall FUN_106e5f60(byte param_2); template<class... A> int FUN_106e5f60(A...); undefined4 * __thiscall FUN_106e5f90(byte param_2); template<class... A> int FUN_106e5f90(A...); undefined4 * __thiscall FUN_106e5fc0(byte param_2); template<class... A> int FUN_106e5fc0(A...); undefined4 * __thiscall FUN_106e5ff0(byte param_2); template<class... A> int FUN_106e5ff0(A...); undefined4 * __thiscall FUN_106e6020(byte param_2); template<class... A> int FUN_106e6020(A...); undefined4 * __thiscall FUN_106e6050(byte param_2); template<class... A> int FUN_106e6050(A...); undefined4 * __thiscall FUN_106e6080(byte param_2); template<class... A> int FUN_106e6080(A...); undefined4 * __thiscall FUN_106e60b0(byte param_2); template<class... A> int FUN_106e60b0(A...); undefined4 * __thiscall FUN_106e60e0(byte param_2); template<class... A> int FUN_106e60e0(A...); undefined4 * __thiscall FUN_106e6110(byte param_2); template<class... A> int FUN_106e6110(A...); undefined4 * __thiscall FUN_106e62c0(byte param_2); template<class... A> int FUN_106e62c0(A...); undefined4 * __thiscall FUN_106e6360(byte param_2); template<class... A> int FUN_106e6360(A...); undefined4 * __thiscall FUN_106e6500(byte param_2); template<class... A> int FUN_106e6500(A...); undefined4 * __thiscall FUN_106e65b0(byte param_2); template<class... A> int FUN_106e65b0(A...); undefined4 * __thiscall FUN_106e6650(byte param_2); template<class... A> int FUN_106e6650(A...); undefined4 * __thiscall FUN_106e66f0(byte param_2); template<class... A> int FUN_106e66f0(A...); undefined4 * __thiscall FUN_106e6790(byte param_2); template<class... A> int FUN_106e6790(A...); undefined4 * __thiscall FUN_106e6830(byte param_2); template<class... A> int FUN_106e6830(A...); undefined4 * __thiscall FUN_106e68d0(byte param_2); template<class... A> int FUN_106e68d0(A...); undefined4 * __thiscall FUN_106e6970(byte param_2); template<class... A> int FUN_106e6970(A...); undefined4 * __thiscall FUN_106e6a80(byte param_2); template<class... A> int FUN_106e6a80(A...); void __thiscall FUN_106e7160(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_106e7160(A...); void __thiscall FUN_106e78c0(int *param_2); template<class... A> int FUN_106e78c0(A...); void __thiscall FUN_106e7910(int *param_2); template<class... A> int FUN_106e7910(A...); int __thiscall FUN_106e7ac0(undefined4 param_2); template<class... A> int FUN_106e7ac0(A...); int __thiscall FUN_106e8b80(undefined4 param_2); template<class... A> int FUN_106e8b80(A...); undefined4 * __thiscall FUN_106e8c50(undefined4 *param_2); template<class... A> int FUN_106e8c50(A...); SCStr * __thiscall FUN_106ee050(SCStr *param_2); template<class... A> int FUN_106ee050(A...); SCStr * __thiscall FUN_106f1f90(SCStr *param_2); template<class... A> int FUN_106f1f90(A...); void __thiscall FUN_106f6ba0(undefined4 *param_2); template<class... A> int FUN_106f6ba0(A...); void __thiscall FUN_106f6ea0(SCStr *param_2); template<class... A> int FUN_106f6ea0(A...); undefined4 * __thiscall FUN_106f7590(int *param_2); template<class... A> int FUN_106f7590(A...); undefined4 * __thiscall FUN_106f8a90(byte param_2); template<class... A> int FUN_106f8a90(A...); undefined4 * __thiscall FUN_106f8ac0(byte param_2); template<class... A> int FUN_106f8ac0(A...); undefined4 * __thiscall FUN_106f8af0(byte param_2); template<class... A> int FUN_106f8af0(A...); undefined4 * __thiscall FUN_106f8b20(byte param_2); template<class... A> int FUN_106f8b20(A...); undefined4 * __thiscall FUN_106f8c10(byte param_2); template<class... A> int FUN_106f8c10(A...); undefined4 * __thiscall FUN_106f8da0(byte param_2); template<class... A> int FUN_106f8da0(A...); undefined4 * __thiscall FUN_106f8e40(byte param_2); template<class... A> int FUN_106f8e40(A...); undefined4 * __thiscall FUN_106f8ee0(byte param_2); template<class... A> int FUN_106f8ee0(A...); void __thiscall FUN_106f9080(int *param_2); template<class... A> int FUN_106f9080(A...); undefined4 * __thiscall FUN_106fdc30(int *param_2); template<class... A> int FUN_106fdc30(A...); undefined4 * __thiscall FUN_106fec40(byte param_2); template<class... A> int FUN_106fec40(A...); undefined4 * __thiscall FUN_106fec70(byte param_2); template<class... A> int FUN_106fec70(A...); undefined4 * __thiscall FUN_106feca0(byte param_2); template<class... A> int FUN_106feca0(A...); undefined4 * __thiscall FUN_106fecd0(byte param_2); template<class... A> int FUN_106fecd0(A...); undefined4 * __thiscall FUN_106fed60(byte param_2); template<class... A> int FUN_106fed60(A...); undefined4 * __thiscall FUN_106fee00(byte param_2); template<class... A> int FUN_106fee00(A...); undefined4 * __thiscall FUN_106feea0(byte param_2); template<class... A> int FUN_106feea0(A...); undefined4 * __thiscall FUN_106fefb0(byte param_2); template<class... A> int FUN_106fefb0(A...); undefined4 __thiscall FUN_106feff0(byte param_2); template<class... A> int FUN_106feff0(A...); void __thiscall FUN_106ff0b0(int *param_2); template<class... A> int FUN_106ff0b0(A...); undefined4 * __thiscall FUN_10702ef0(int *param_2); template<class... A> int FUN_10702ef0(A...); undefined4 * __thiscall FUN_10703e90(byte param_2); template<class... A> int FUN_10703e90(A...); undefined4 * __thiscall FUN_10703ec0(byte param_2); template<class... A> int FUN_10703ec0(A...); undefined4 * __thiscall FUN_10703ef0(byte param_2); template<class... A> int FUN_10703ef0(A...); undefined4 * __thiscall FUN_10703f80(byte param_2); template<class... A> int FUN_10703f80(A...); undefined4 * __thiscall FUN_10704110(byte param_2); template<class... A> int FUN_10704110(A...); undefined4 * __thiscall FUN_107041b0(byte param_2); template<class... A> int FUN_107041b0(A...); void __thiscall FUN_10704460(int *param_2); template<class... A> int FUN_10704460(A...); undefined4 * __thiscall FUN_10709270(int *param_2); template<class... A> int FUN_10709270(A...); undefined4 * __thiscall FUN_10709290(int *param_2); template<class... A> int FUN_10709290(A...); undefined4 * __thiscall FUN_107092b0(int *param_2); template<class... A> int FUN_107092b0(A...); undefined4 * __thiscall FUN_1070aae0(byte param_2); template<class... A> int FUN_1070aae0(A...); undefined4 * __thiscall FUN_1070ab10(byte param_2); template<class... A> int FUN_1070ab10(A...); undefined4 * __thiscall FUN_1070ab40(byte param_2); template<class... A> int FUN_1070ab40(A...); undefined4 * __thiscall FUN_1070ab70(byte param_2); template<class... A> int FUN_1070ab70(A...); undefined4 * __thiscall FUN_1070ac60(byte param_2); template<class... A> int FUN_1070ac60(A...); undefined4 * __thiscall FUN_1070adb0(byte param_2); template<class... A> int FUN_1070adb0(A...); undefined4 * __thiscall FUN_1070af90(byte param_2); template<class... A> int FUN_1070af90(A...); undefined4 * __thiscall FUN_1070b030(byte param_2); template<class... A> int FUN_1070b030(A...); void __thiscall FUN_1070b210(int *param_2); template<class... A> int FUN_1070b210(A...); void __thiscall FUN_1070b260(int *param_2); template<class... A> int FUN_1070b260(A...); void __thiscall FUN_1070b2b0(int *param_2); template<class... A> int FUN_1070b2b0(A...); void __thiscall FUN_10711cb0(SCStr *param_2); template<class... A> int FUN_10711cb0(A...); undefined4 * __thiscall FUN_10712700(int *param_2); template<class... A> int FUN_10712700(A...); undefined4 * __thiscall FUN_107134b0(byte param_2); template<class... A> int FUN_107134b0(A...); undefined4 * __thiscall FUN_107134e0(byte param_2); template<class... A> int FUN_107134e0(A...); undefined4 * __thiscall FUN_10713510(byte param_2); template<class... A> int FUN_10713510(A...); undefined4 * __thiscall FUN_10713690(byte param_2); template<class... A> int FUN_10713690(A...); undefined4 * __thiscall FUN_107137a0(byte param_2); template<class... A> int FUN_107137a0(A...); undefined4 * __thiscall FUN_10713840(byte param_2); template<class... A> int FUN_10713840(A...); void __thiscall FUN_10713990(int *param_2); template<class... A> int FUN_10713990(A...); void __thiscall FUN_10718090(SCStr *param_2); template<class... A> int FUN_10718090(A...); undefined4 * __thiscall FUN_10719d10(byte param_2); template<class... A> int FUN_10719d10(A...); undefined4 * __thiscall FUN_10719d40(byte param_2); template<class... A> int FUN_10719d40(A...); undefined4 * __thiscall FUN_10719d70(byte param_2); template<class... A> int FUN_10719d70(A...); undefined4 * __thiscall FUN_10719da0(byte param_2); template<class... A> int FUN_10719da0(A...); undefined4 * __thiscall FUN_10719dd0(byte param_2); template<class... A> int FUN_10719dd0(A...); undefined4 * __thiscall FUN_10719e60(byte param_2); template<class... A> int FUN_10719e60(A...); undefined4 * __thiscall FUN_10719f70(byte param_2); template<class... A> int FUN_10719f70(A...); undefined4 * __thiscall FUN_1071a080(byte param_2); template<class... A> int FUN_1071a080(A...); undefined4 * __thiscall FUN_1071a120(byte param_2); template<class... A> int FUN_1071a120(A...); undefined4 * __thiscall FUN_1071a1c0(byte param_2); template<class... A> int FUN_1071a1c0(A...); void __thiscall FUN_1071a400(int *param_2); template<class... A> int FUN_1071a400(A...); void __thiscall FUN_10723a70(undefined4 param_2); template<class... A> int FUN_10723a70(A...); undefined4 * __thiscall FUN_10726230(int *param_2); template<class... A> int FUN_10726230(A...); undefined4 * __thiscall FUN_1072c4f0(byte param_2); template<class... A> int FUN_1072c4f0(A...); undefined4 * __thiscall FUN_1072c520(byte param_2); template<class... A> int FUN_1072c520(A...); undefined4 * __thiscall FUN_1072c550(byte param_2); template<class... A> int FUN_1072c550(A...); undefined4 * __thiscall FUN_1072c580(byte param_2); template<class... A> int FUN_1072c580(A...); undefined4 * __thiscall FUN_1072c5b0(byte param_2); template<class... A> int FUN_1072c5b0(A...); undefined4 * __thiscall FUN_1072c5e0(byte param_2); template<class... A> int FUN_1072c5e0(A...); undefined4 * __thiscall FUN_1072c610(byte param_2); template<class... A> int FUN_1072c610(A...); undefined4 * __thiscall FUN_1072c640(byte param_2); template<class... A> int FUN_1072c640(A...); undefined4 * __thiscall FUN_1072c670(byte param_2); template<class... A> int FUN_1072c670(A...); undefined4 * __thiscall FUN_1072c6a0(byte param_2); template<class... A> int FUN_1072c6a0(A...); undefined4 * __thiscall FUN_1072c6d0(byte param_2); template<class... A> int FUN_1072c6d0(A...); undefined4 * __thiscall FUN_1072c700(byte param_2); template<class... A> int FUN_1072c700(A...); undefined4 * __thiscall FUN_1072c730(byte param_2); template<class... A> int FUN_1072c730(A...); undefined4 * __thiscall FUN_1072c760(byte param_2); template<class... A> int FUN_1072c760(A...); undefined4 * __thiscall FUN_1072c790(byte param_2); template<class... A> int FUN_1072c790(A...); undefined4 * __thiscall FUN_1072c7c0(byte param_2); template<class... A> int FUN_1072c7c0(A...); undefined4 * __thiscall FUN_1072c7f0(byte param_2); template<class... A> int FUN_1072c7f0(A...); undefined4 * __thiscall FUN_1072c820(byte param_2); template<class... A> int FUN_1072c820(A...); undefined4 * __thiscall FUN_1072c850(byte param_2); template<class... A> int FUN_1072c850(A...); undefined4 * __thiscall FUN_1072c880(byte param_2); template<class... A> int FUN_1072c880(A...); undefined4 * __thiscall FUN_1072c8b0(byte param_2); template<class... A> int FUN_1072c8b0(A...); undefined4 * __thiscall FUN_1072ce50(byte param_2); template<class... A> int FUN_1072ce50(A...); undefined4 * __thiscall FUN_1072cef0(byte param_2); template<class... A> int FUN_1072cef0(A...); undefined4 * __thiscall FUN_1072cf90(byte param_2); template<class... A> int FUN_1072cf90(A...); undefined4 * __thiscall FUN_1072d030(byte param_2); template<class... A> int FUN_1072d030(A...); undefined4 * __thiscall FUN_1072d0d0(byte param_2); template<class... A> int FUN_1072d0d0(A...); undefined4 * __thiscall FUN_1072d170(byte param_2); template<class... A> int FUN_1072d170(A...); undefined4 * __thiscall FUN_1072d210(byte param_2); template<class... A> int FUN_1072d210(A...); undefined4 * __thiscall FUN_1072d2b0(byte param_2); template<class... A> int FUN_1072d2b0(A...); undefined4 * __thiscall FUN_1072d350(byte param_2); template<class... A> int FUN_1072d350(A...); undefined4 * __thiscall FUN_1072d3f0(byte param_2); template<class... A> int FUN_1072d3f0(A...); undefined4 * __thiscall FUN_1072d490(byte param_2); template<class... A> int FUN_1072d490(A...); undefined4 * __thiscall FUN_1072d530(byte param_2); template<class... A> int FUN_1072d530(A...); undefined4 * __thiscall FUN_1072d5d0(byte param_2); template<class... A> int FUN_1072d5d0(A...); undefined4 * __thiscall FUN_1072d670(byte param_2); template<class... A> int FUN_1072d670(A...); undefined4 * __thiscall FUN_1072d710(byte param_2); template<class... A> int FUN_1072d710(A...); undefined4 * __thiscall FUN_1072d820(byte param_2); template<class... A> int FUN_1072d820(A...); undefined4 * __thiscall FUN_1072d8e0(byte param_2); template<class... A> int FUN_1072d8e0(A...); undefined4 * __thiscall FUN_1072d980(byte param_2); template<class... A> int FUN_1072d980(A...); undefined4 * __thiscall FUN_1072da20(byte param_2); template<class... A> int FUN_1072da20(A...); undefined4 * __thiscall FUN_1072dac0(byte param_2); template<class... A> int FUN_1072dac0(A...); undefined4 * __thiscall FUN_1072db60(byte param_2); template<class... A> int FUN_1072db60(A...); undefined4 __thiscall FUN_1072dca0(byte param_2); template<class... A> int FUN_1072dca0(A...); void __thiscall FUN_1072e190(int *param_2); template<class... A> int FUN_1072e190(A...); int * __thiscall FUN_10743460(int *param_2); template<class... A> int FUN_10743460(A...); undefined4 * __thiscall FUN_1074b840(byte param_2); template<class... A> int FUN_1074b840(A...); undefined4 * __thiscall FUN_1074b8d0(byte param_2); template<class... A> int FUN_1074b8d0(A...); undefined4 * __thiscall FUN_1074b9f0(byte param_2); template<class... A> int FUN_1074b9f0(A...); undefined4 * __thiscall FUN_1074d180(byte param_2); template<class... A> int FUN_1074d180(A...); undefined4 * __thiscall FUN_1074d210(byte param_2); template<class... A> int FUN_1074d210(A...); undefined4 * __thiscall FUN_1074d330(byte param_2); template<class... A> int FUN_1074d330(A...); undefined4 * __thiscall FUN_10750ed0(byte param_2); template<class... A> int FUN_10750ed0(A...); undefined4 * __thiscall FUN_10750f00(byte param_2); template<class... A> int FUN_10750f00(A...); undefined4 * __thiscall FUN_10750f30(byte param_2); template<class... A> int FUN_10750f30(A...); undefined4 * __thiscall FUN_10750f60(byte param_2); template<class... A> int FUN_10750f60(A...); undefined4 * __thiscall FUN_10750f90(byte param_2); template<class... A> int FUN_10750f90(A...); undefined4 * __thiscall FUN_10750fc0(byte param_2); template<class... A> int FUN_10750fc0(A...); undefined4 * __thiscall FUN_10750ff0(byte param_2); template<class... A> int FUN_10750ff0(A...); undefined4 * __thiscall FUN_10751140(byte param_2); template<class... A> int FUN_10751140(A...); undefined4 * __thiscall FUN_107511e0(byte param_2); template<class... A> int FUN_107511e0(A...); undefined4 * __thiscall FUN_10751280(byte param_2); template<class... A> int FUN_10751280(A...); undefined4 * __thiscall FUN_10751380(byte param_2); template<class... A> int FUN_10751380(A...); undefined4 * __thiscall FUN_10751420(byte param_2); template<class... A> int FUN_10751420(A...); undefined4 * __thiscall FUN_107514c0(byte param_2); template<class... A> int FUN_107514c0(A...); undefined4 * __thiscall FUN_10751560(byte param_2); template<class... A> int FUN_10751560(A...); int * __thiscall FUN_107558b0(int *param_2); template<class... A> int FUN_107558b0(A...); undefined4 * __thiscall FUN_1075a3f0(byte param_2); template<class... A> int FUN_1075a3f0(A...); undefined4 * __thiscall FUN_1075a420(byte param_2); template<class... A> int FUN_1075a420(A...); undefined4 * __thiscall FUN_1075a450(byte param_2); template<class... A> int FUN_1075a450(A...); undefined4 * __thiscall FUN_1075a480(byte param_2); template<class... A> int FUN_1075a480(A...); undefined4 * __thiscall FUN_1075a4b0(byte param_2); template<class... A> int FUN_1075a4b0(A...); undefined4 * __thiscall FUN_1075a4e0(byte param_2); template<class... A> int FUN_1075a4e0(A...); undefined4 * __thiscall FUN_1075a510(byte param_2); template<class... A> int FUN_1075a510(A...); undefined4 * __thiscall FUN_1075a600(byte param_2); template<class... A> int FUN_1075a600(A...); undefined4 * __thiscall FUN_1075a6a0(byte param_2); template<class... A> int FUN_1075a6a0(A...); undefined4 * __thiscall FUN_1075a740(byte param_2); template<class... A> int FUN_1075a740(A...); undefined4 * __thiscall FUN_1075a850(byte param_2); template<class... A> int FUN_1075a850(A...); undefined4 * __thiscall FUN_1075a8f0(byte param_2); template<class... A> int FUN_1075a8f0(A...); undefined4 * __thiscall FUN_1075a990(byte param_2); template<class... A> int FUN_1075a990(A...); undefined4 * __thiscall FUN_1075ab00(byte param_2); template<class... A> int FUN_1075ab00(A...); undefined4 * __thiscall FUN_107637b0(byte param_2); template<class... A> int FUN_107637b0(A...); undefined4 * __thiscall FUN_107637e0(byte param_2); template<class... A> int FUN_107637e0(A...); undefined4 * __thiscall FUN_10763810(byte param_2); template<class... A> int FUN_10763810(A...); undefined4 * __thiscall FUN_10763910(byte param_2); template<class... A> int FUN_10763910(A...); undefined4 * __thiscall FUN_107639b0(byte param_2); template<class... A> int FUN_107639b0(A...); undefined4 * __thiscall FUN_10763a50(byte param_2); template<class... A> int FUN_10763a50(A...); void __thiscall FUN_10763c50(int *param_2); template<class... A> int FUN_10763c50(A...); undefined4 * __thiscall FUN_10768430(byte param_2); template<class... A> int FUN_10768430(A...); undefined4 * __thiscall FUN_10768460(byte param_2); template<class... A> int FUN_10768460(A...); undefined4 * __thiscall FUN_107684f0(byte param_2); template<class... A> int FUN_107684f0(A...); undefined4 * __thiscall FUN_10768590(byte param_2); template<class... A> int FUN_10768590(A...); undefined4 * __thiscall FUN_1076d870(byte param_2); template<class... A> int FUN_1076d870(A...); undefined4 * __thiscall FUN_1076d8a0(byte param_2); template<class... A> int FUN_1076d8a0(A...); undefined4 * __thiscall FUN_1076d8d0(byte param_2); template<class... A> int FUN_1076d8d0(A...); undefined4 * __thiscall FUN_1076d900(byte param_2); template<class... A> int FUN_1076d900(A...); undefined4 * __thiscall FUN_1076d930(byte param_2); template<class... A> int FUN_1076d930(A...); undefined4 * __thiscall FUN_1076da80(byte param_2); template<class... A> int FUN_1076da80(A...); undefined4 * __thiscall FUN_1076db20(byte param_2); template<class... A> int FUN_1076db20(A...); undefined4 * __thiscall FUN_1076dbc0(byte param_2); template<class... A> int FUN_1076dbc0(A...); undefined4 * __thiscall FUN_1076dc60(byte param_2); template<class... A> int FUN_1076dc60(A...); undefined4 * __thiscall FUN_1076dd00(byte param_2); template<class... A> int FUN_1076dd00(A...); undefined4 * __thiscall FUN_107733b0(int *param_2); template<class... A> int FUN_107733b0(A...); undefined4 * __thiscall FUN_107746a0(byte param_2); template<class... A> int FUN_107746a0(A...); undefined4 * __thiscall FUN_107746d0(byte param_2); template<class... A> int FUN_107746d0(A...); undefined4 * __thiscall FUN_10774700(byte param_2); template<class... A> int FUN_10774700(A...); undefined4 * __thiscall FUN_10774730(byte param_2); template<class... A> int FUN_10774730(A...); undefined4 * __thiscall FUN_10774830(byte param_2); template<class... A> int FUN_10774830(A...); undefined4 * __thiscall FUN_107748d0(byte param_2); template<class... A> int FUN_107748d0(A...); undefined4 * __thiscall FUN_107749e0(byte param_2); template<class... A> int FUN_107749e0(A...); undefined4 * __thiscall FUN_10774af0(byte param_2); template<class... A> int FUN_10774af0(A...); undefined4 * __thiscall FUN_1077c480(byte param_2); template<class... A> int FUN_1077c480(A...); undefined4 * __thiscall FUN_1077c510(byte param_2); template<class... A> int FUN_1077c510(A...); undefined4 * __thiscall FUN_1077c660(byte param_2); template<class... A> int FUN_1077c660(A...); undefined4 * __thiscall FUN_1077f250(byte param_2); template<class... A> int FUN_1077f250(A...); undefined4 * __thiscall FUN_1077f280(byte param_2); template<class... A> int FUN_1077f280(A...); undefined4 * __thiscall FUN_1077f2b0(byte param_2); template<class... A> int FUN_1077f2b0(A...); undefined4 * __thiscall FUN_1077f340(byte param_2); template<class... A> int FUN_1077f340(A...); undefined4 * __thiscall FUN_1077f3e0(byte param_2); template<class... A> int FUN_1077f3e0(A...); undefined4 * __thiscall FUN_1077f480(byte param_2); template<class... A> int FUN_1077f480(A...); undefined4 * __thiscall FUN_10783a30(byte param_2); template<class... A> int FUN_10783a30(A...); undefined4 * __thiscall FUN_10783ac0(byte param_2); template<class... A> int FUN_10783ac0(A...); undefined4 * __thiscall FUN_10783bb0(byte param_2); template<class... A> int FUN_10783bb0(A...); void __thiscall FUN_10785c30(undefined4 param_2); template<class... A> int FUN_10785c30(A...); undefined4 * __thiscall FUN_10787f60(int *param_2); template<class... A> int FUN_10787f60(A...); undefined4 * __thiscall FUN_107908e0(byte param_2); template<class... A> int FUN_107908e0(A...); undefined4 * __thiscall FUN_10790910(byte param_2); template<class... A> int FUN_10790910(A...); undefined4 * __thiscall FUN_10790940(byte param_2); template<class... A> int FUN_10790940(A...); undefined4 * __thiscall FUN_10790970(byte param_2); template<class... A> int FUN_10790970(A...); undefined4 * __thiscall FUN_107909a0(byte param_2); template<class... A> int FUN_107909a0(A...); undefined4 * __thiscall FUN_107909d0(byte param_2); template<class... A> int FUN_107909d0(A...); undefined4 * __thiscall FUN_10790a00(byte param_2); template<class... A> int FUN_10790a00(A...); undefined4 * __thiscall FUN_10790a30(byte param_2); template<class... A> int FUN_10790a30(A...); undefined4 * __thiscall FUN_10790a60(byte param_2); template<class... A> int FUN_10790a60(A...); undefined4 * __thiscall FUN_10790a90(byte param_2); template<class... A> int FUN_10790a90(A...); undefined4 * __thiscall FUN_10790ac0(byte param_2); template<class... A> int FUN_10790ac0(A...); undefined4 * __thiscall FUN_10790af0(byte param_2); template<class... A> int FUN_10790af0(A...); undefined4 * __thiscall FUN_10790b20(byte param_2); template<class... A> int FUN_10790b20(A...); undefined4 * __thiscall FUN_10790b50(byte param_2); template<class... A> int FUN_10790b50(A...); undefined4 * __thiscall FUN_10790b80(byte param_2); template<class... A> int FUN_10790b80(A...); undefined4 * __thiscall FUN_10790bb0(byte param_2); template<class... A> int FUN_10790bb0(A...); undefined4 * __thiscall FUN_10790be0(byte param_2); template<class... A> int FUN_10790be0(A...); undefined4 * __thiscall FUN_10790c10(byte param_2); template<class... A> int FUN_10790c10(A...); undefined4 * __thiscall FUN_10790c40(byte param_2); template<class... A> int FUN_10790c40(A...); undefined4 * __thiscall FUN_10790c70(byte param_2); template<class... A> int FUN_10790c70(A...); undefined4 * __thiscall FUN_10790ca0(byte param_2); template<class... A> int FUN_10790ca0(A...); undefined4 * __thiscall FUN_10790cd0(byte param_2); template<class... A> int FUN_10790cd0(A...); undefined4 * __thiscall FUN_10790d00(byte param_2); template<class... A> int FUN_10790d00(A...); undefined4 * __thiscall FUN_10790d30(byte param_2); template<class... A> int FUN_10790d30(A...); undefined4 * __thiscall FUN_10790d60(byte param_2); template<class... A> int FUN_10790d60(A...); undefined4 * __thiscall FUN_10790d90(byte param_2); template<class... A> int FUN_10790d90(A...); undefined4 * __thiscall FUN_10790dc0(byte param_2); template<class... A> int FUN_10790dc0(A...); undefined4 * __thiscall FUN_10790df0(byte param_2); template<class... A> int FUN_10790df0(A...); undefined4 * __thiscall FUN_10790e20(byte param_2); template<class... A> int FUN_10790e20(A...); undefined4 * __thiscall FUN_10790e50(byte param_2); template<class... A> int FUN_10790e50(A...); undefined4 * __thiscall FUN_10790e80(byte param_2); template<class... A> int FUN_10790e80(A...); undefined4 * __thiscall FUN_10790eb0(byte param_2); template<class... A> int FUN_10790eb0(A...); undefined4 * __thiscall FUN_10791180(byte param_2); template<class... A> int FUN_10791180(A...); undefined4 * __thiscall FUN_10791220(byte param_2); template<class... A> int FUN_10791220(A...); undefined4 * __thiscall FUN_10791360(byte param_2); template<class... A> int FUN_10791360(A...); undefined4 * __thiscall FUN_10791400(byte param_2); template<class... A> int FUN_10791400(A...); undefined4 * __thiscall FUN_107914a0(byte param_2); template<class... A> int FUN_107914a0(A...); undefined4 * __thiscall FUN_107915e0(byte param_2); template<class... A> int FUN_107915e0(A...); undefined4 * __thiscall FUN_10791780(byte param_2); template<class... A> int FUN_10791780(A...); undefined4 * __thiscall FUN_107918c0(byte param_2); template<class... A> int FUN_107918c0(A...); undefined4 * __thiscall FUN_10791ad0(byte param_2); template<class... A> int FUN_10791ad0(A...); undefined4 * __thiscall FUN_10791b70(byte param_2); template<class... A> int FUN_10791b70(A...); undefined4 * __thiscall FUN_10791c10(byte param_2); template<class... A> int FUN_10791c10(A...); undefined4 * __thiscall FUN_10791cb0(byte param_2); template<class... A> int FUN_10791cb0(A...); undefined4 * __thiscall FUN_10791d50(byte param_2); template<class... A> int FUN_10791d50(A...); undefined4 * __thiscall FUN_10791df0(byte param_2); template<class... A> int FUN_10791df0(A...); undefined4 * __thiscall FUN_10791e90(byte param_2); template<class... A> int FUN_10791e90(A...); undefined4 * __thiscall FUN_10791f30(byte param_2); template<class... A> int FUN_10791f30(A...); undefined4 * __thiscall FUN_10791fd0(byte param_2); template<class... A> int FUN_10791fd0(A...); undefined4 * __thiscall FUN_10792130(byte param_2); template<class... A> int FUN_10792130(A...); undefined4 * __thiscall FUN_10792270(byte param_2); template<class... A> int FUN_10792270(A...); undefined4 * __thiscall FUN_10792310(byte param_2); template<class... A> int FUN_10792310(A...); undefined4 * __thiscall FUN_107923b0(byte param_2); template<class... A> int FUN_107923b0(A...); undefined4 * __thiscall FUN_10792450(byte param_2); template<class... A> int FUN_10792450(A...); undefined4 __thiscall FUN_10792490(byte param_2); template<class... A> int FUN_10792490(A...); undefined4 * __thiscall FUN_107924c0(byte param_2); template<class... A> int FUN_107924c0(A...); undefined4 __thiscall FUN_10792500(byte param_2); template<class... A> int FUN_10792500(A...); undefined4 * __thiscall FUN_10792600(byte param_2); template<class... A> int FUN_10792600(A...); undefined4 * __thiscall FUN_107926a0(byte param_2); template<class... A> int FUN_107926a0(A...); undefined4 * __thiscall FUN_10792740(byte param_2); template<class... A> int FUN_10792740(A...); undefined4 * __thiscall FUN_107928b0(byte param_2); template<class... A> int FUN_107928b0(A...); undefined4 * __thiscall FUN_10792a40(byte param_2); template<class... A> int FUN_10792a40(A...); undefined4 * __thiscall FUN_10792ae0(byte param_2); template<class... A> int FUN_10792ae0(A...); undefined4 * __thiscall FUN_10792c80(byte param_2); template<class... A> int FUN_10792c80(A...); undefined4 * __thiscall FUN_10792d20(byte param_2); template<class... A> int FUN_10792d20(A...); undefined4 * __thiscall FUN_10792dc0(byte param_2); template<class... A> int FUN_10792dc0(A...); undefined4 __thiscall FUN_10793000(byte param_2); template<class... A> int FUN_10793000(A...); void __thiscall FUN_10793090(undefined4 *param_2); template<class... A> int FUN_10793090(A...); void __thiscall FUN_107930e0(undefined4 *param_2); template<class... A> int FUN_107930e0(A...); void __thiscall FUN_10793b20(int *param_2); template<class... A> int FUN_10793b20(A...); void __thiscall FUN_10793b70(int *param_2); template<class... A> int FUN_10793b70(A...); int * __thiscall FUN_107998f0(int *param_2); template<class... A> int FUN_107998f0(A...); int * __thiscall FUN_107af2b0(int *param_2); template<class... A> int FUN_107af2b0(A...); undefined4 __thiscall FUN_107bca20(undefined4 param_2); template<class... A> int FUN_107bca20(A...); void __thiscall FUN_107cc370(undefined4 param_2); template<class... A> int FUN_107cc370(A...); void __thiscall FUN_107cc570(SCStr *param_2); template<class... A> int FUN_107cc570(A...); undefined4 * __thiscall FUN_107d0010(byte param_2); template<class... A> int FUN_107d0010(A...); undefined4 * __thiscall FUN_107d0040(byte param_2); template<class... A> int FUN_107d0040(A...); undefined4 * __thiscall FUN_107d0070(byte param_2); template<class... A> int FUN_107d0070(A...); undefined4 * __thiscall FUN_107d00a0(byte param_2); template<class... A> int FUN_107d00a0(A...); undefined4 * __thiscall FUN_107d00d0(byte param_2); template<class... A> int FUN_107d00d0(A...); undefined4 * __thiscall FUN_107d0100(byte param_2); template<class... A> int FUN_107d0100(A...); undefined4 * __thiscall FUN_107d0130(byte param_2); template<class... A> int FUN_107d0130(A...); undefined4 * __thiscall FUN_107d0160(byte param_2); template<class... A> int FUN_107d0160(A...); undefined4 * __thiscall FUN_107d0190(byte param_2); template<class... A> int FUN_107d0190(A...); undefined4 * __thiscall FUN_107d01c0(byte param_2); template<class... A> int FUN_107d01c0(A...); undefined4 * __thiscall FUN_107d02f0(byte param_2); template<class... A> int FUN_107d02f0(A...); undefined4 * __thiscall FUN_107d0430(byte param_2); template<class... A> int FUN_107d0430(A...); undefined4 * __thiscall FUN_107d04d0(byte param_2); template<class... A> int FUN_107d04d0(A...); undefined4 * __thiscall FUN_107d0610(byte param_2); template<class... A> int FUN_107d0610(A...); undefined4 * __thiscall FUN_107d06b0(byte param_2); template<class... A> int FUN_107d06b0(A...); undefined4 * __thiscall FUN_107d0820(byte param_2); template<class... A> int FUN_107d0820(A...); undefined4 * __thiscall FUN_107d0960(byte param_2); template<class... A> int FUN_107d0960(A...); undefined4 * __thiscall FUN_107d0aa0(byte param_2); template<class... A> int FUN_107d0aa0(A...); undefined4 * __thiscall FUN_107d0c30(byte param_2); template<class... A> int FUN_107d0c30(A...); undefined4 * __thiscall FUN_107d0d70(byte param_2); template<class... A> int FUN_107d0d70(A...); int * __thiscall FUN_107db420(int *param_2); template<class... A> int FUN_107db420(A...); void __thiscall FUN_107e5460(SCStr *param_2); template<class... A> int FUN_107e5460(A...); undefined4 * __thiscall FUN_107e6e30(byte param_2); template<class... A> int FUN_107e6e30(A...); undefined4 * __thiscall FUN_107e6e60(byte param_2); template<class... A> int FUN_107e6e60(A...); undefined4 * __thiscall FUN_107e6fc0(byte param_2); template<class... A> int FUN_107e6fc0(A...); undefined4 * __thiscall FUN_107e7060(byte param_2); template<class... A> int FUN_107e7060(A...); undefined4 __thiscall FUN_107e70a0(byte param_2); template<class... A> int FUN_107e70a0(A...); undefined4 * __thiscall FUN_107ec4e0(byte param_2); template<class... A> int FUN_107ec4e0(A...); undefined4 * __thiscall FUN_107ec510(byte param_2); template<class... A> int FUN_107ec510(A...); undefined4 * __thiscall FUN_107ec540(byte param_2); template<class... A> int FUN_107ec540(A...); undefined4 * __thiscall FUN_107ec570(byte param_2); template<class... A> int FUN_107ec570(A...); undefined4 * __thiscall FUN_107ec5a0(byte param_2); template<class... A> int FUN_107ec5a0(A...); undefined4 * __thiscall FUN_107ec5d0(byte param_2); template<class... A> int FUN_107ec5d0(A...); undefined4 * __thiscall FUN_107ec600(byte param_2); template<class... A> int FUN_107ec600(A...); undefined4 * __thiscall FUN_107ec630(byte param_2); template<class... A> int FUN_107ec630(A...); undefined4 * __thiscall FUN_107ec660(byte param_2); template<class... A> int FUN_107ec660(A...); undefined4 * __thiscall FUN_107ec690(byte param_2); template<class... A> int FUN_107ec690(A...); undefined4 * __thiscall FUN_107ec6c0(byte param_2); template<class... A> int FUN_107ec6c0(A...); undefined4 * __thiscall FUN_107ec6f0(byte param_2); template<class... A> int FUN_107ec6f0(A...); undefined4 * __thiscall FUN_107ec720(byte param_2); template<class... A> int FUN_107ec720(A...); undefined4 * __thiscall FUN_107ec7b0(byte param_2); template<class... A> int FUN_107ec7b0(A...); undefined4 * __thiscall FUN_107ec850(byte param_2); template<class... A> int FUN_107ec850(A...); undefined4 * __thiscall FUN_107ec8f0(byte param_2); template<class... A> int FUN_107ec8f0(A...); undefined4 * __thiscall FUN_107ec990(byte param_2); template<class... A> int FUN_107ec990(A...); undefined4 * __thiscall FUN_107eca30(byte param_2); template<class... A> int FUN_107eca30(A...); undefined4 * __thiscall FUN_107ecad0(byte param_2); template<class... A> int FUN_107ecad0(A...); undefined4 * __thiscall FUN_107ecb70(byte param_2); template<class... A> int FUN_107ecb70(A...); undefined4 * __thiscall FUN_107ecc10(byte param_2); template<class... A> int FUN_107ecc10(A...); undefined4 * __thiscall FUN_107eccb0(byte param_2); template<class... A> int FUN_107eccb0(A...); undefined4 * __thiscall FUN_107ecd50(byte param_2); template<class... A> int FUN_107ecd50(A...); undefined4 * __thiscall FUN_107ecdf0(byte param_2); template<class... A> int FUN_107ecdf0(A...); undefined4 * __thiscall FUN_107ece90(byte param_2); template<class... A> int FUN_107ece90(A...); undefined4 * __thiscall FUN_107ecf30(byte param_2); template<class... A> int FUN_107ecf30(A...); undefined4 * __thiscall FUN_10803350(byte param_2); template<class... A> int FUN_10803350(A...); undefined4 * __thiscall FUN_10803380(byte param_2); template<class... A> int FUN_10803380(A...); undefined4 * __thiscall FUN_108033b0(byte param_2); template<class... A> int FUN_108033b0(A...); undefined4 * __thiscall FUN_108033e0(byte param_2); template<class... A> int FUN_108033e0(A...); undefined4 * __thiscall FUN_10803410(byte param_2); template<class... A> int FUN_10803410(A...); undefined4 * __thiscall FUN_10803440(byte param_2); template<class... A> int FUN_10803440(A...); undefined4 * __thiscall FUN_10803470(byte param_2); template<class... A> int FUN_10803470(A...); undefined4 * __thiscall FUN_108034a0(byte param_2); template<class... A> int FUN_108034a0(A...); undefined4 * __thiscall FUN_10803530(byte param_2); template<class... A> int FUN_10803530(A...); undefined4 * __thiscall FUN_108035d0(byte param_2); template<class... A> int FUN_108035d0(A...); undefined4 * __thiscall FUN_10803670(byte param_2); template<class... A> int FUN_10803670(A...); undefined4 * __thiscall FUN_10803710(byte param_2); template<class... A> int FUN_10803710(A...); undefined4 * __thiscall FUN_108037b0(byte param_2); template<class... A> int FUN_108037b0(A...); undefined4 * __thiscall FUN_10803850(byte param_2); template<class... A> int FUN_10803850(A...); undefined4 * __thiscall FUN_108038f0(byte param_2); template<class... A> int FUN_108038f0(A...); undefined4 * __thiscall FUN_10803990(byte param_2); template<class... A> int FUN_10803990(A...); undefined4 * __thiscall FUN_10813170(byte param_2); template<class... A> int FUN_10813170(A...); undefined4 * __thiscall FUN_108131a0(byte param_2); template<class... A> int FUN_108131a0(A...); undefined4 * __thiscall FUN_108131d0(byte param_2); template<class... A> int FUN_108131d0(A...); undefined4 * __thiscall FUN_10813200(byte param_2); template<class... A> int FUN_10813200(A...); undefined4 * __thiscall FUN_108132f0(byte param_2); template<class... A> int FUN_108132f0(A...); undefined4 * __thiscall FUN_10813390(byte param_2); template<class... A> int FUN_10813390(A...); undefined4 * __thiscall FUN_10813430(byte param_2); template<class... A> int FUN_10813430(A...); undefined4 * __thiscall FUN_108134d0(byte param_2); template<class... A> int FUN_108134d0(A...); undefined4 * __thiscall FUN_1081afa0(byte param_2); template<class... A> int FUN_1081afa0(A...); undefined4 * __thiscall FUN_1081afd0(byte param_2); template<class... A> int FUN_1081afd0(A...); undefined4 * __thiscall FUN_1081b000(byte param_2); template<class... A> int FUN_1081b000(A...); undefined4 * __thiscall FUN_1081b030(byte param_2); template<class... A> int FUN_1081b030(A...); undefined4 * __thiscall FUN_1081b060(byte param_2); template<class... A> int FUN_1081b060(A...); undefined4 * __thiscall FUN_1081b090(byte param_2); template<class... A> int FUN_1081b090(A...); undefined4 * __thiscall FUN_1081b0c0(byte param_2); template<class... A> int FUN_1081b0c0(A...); undefined4 * __thiscall FUN_1081b0f0(byte param_2); template<class... A> int FUN_1081b0f0(A...); undefined4 * __thiscall FUN_1081b120(byte param_2); template<class... A> int FUN_1081b120(A...); undefined4 * __thiscall FUN_1081b150(byte param_2); template<class... A> int FUN_1081b150(A...); undefined4 * __thiscall FUN_1081b180(byte param_2); template<class... A> int FUN_1081b180(A...); undefined4 * __thiscall FUN_1081b210(byte param_2); template<class... A> int FUN_1081b210(A...); undefined4 * __thiscall FUN_1081b2b0(byte param_2); template<class... A> int FUN_1081b2b0(A...); undefined4 * __thiscall FUN_1081b350(byte param_2); template<class... A> int FUN_1081b350(A...); undefined4 * __thiscall FUN_1081b3f0(byte param_2); template<class... A> int FUN_1081b3f0(A...); undefined4 * __thiscall FUN_1081b490(byte param_2); template<class... A> int FUN_1081b490(A...); undefined4 * __thiscall FUN_1081b530(byte param_2); template<class... A> int FUN_1081b530(A...); undefined4 * __thiscall FUN_1081b5d0(byte param_2); template<class... A> int FUN_1081b5d0(A...); undefined4 * __thiscall FUN_1081b670(byte param_2); template<class... A> int FUN_1081b670(A...); undefined4 * __thiscall FUN_1081b710(byte param_2); template<class... A> int FUN_1081b710(A...); undefined4 * __thiscall FUN_1081b7b0(byte param_2); template<class... A> int FUN_1081b7b0(A...); undefined4 * __thiscall FUN_1081b850(byte param_2); template<class... A> int FUN_1081b850(A...); int * __thiscall FUN_10827fe0(SCStr *param_2); template<class... A> int FUN_10827fe0(A...); void __thiscall FUN_108288a0(undefined4 param_2); template<class... A> int FUN_108288a0(A...); undefined4 * __thiscall FUN_10829c50(int *param_2); template<class... A> int FUN_10829c50(A...); undefined4 * __thiscall FUN_1082c1a0(byte param_2); template<class... A> int FUN_1082c1a0(A...); undefined4 * __thiscall FUN_1082c1d0(byte param_2); template<class... A> int FUN_1082c1d0(A...); undefined4 * __thiscall FUN_1082c200(byte param_2); template<class... A> int FUN_1082c200(A...); undefined4 * __thiscall FUN_1082c230(byte param_2); template<class... A> int FUN_1082c230(A...); undefined4 * __thiscall FUN_1082c260(byte param_2); template<class... A> int FUN_1082c260(A...); undefined4 * __thiscall FUN_1082c290(byte param_2); template<class... A> int FUN_1082c290(A...); undefined4 * __thiscall FUN_1082c2c0(byte param_2); template<class... A> int FUN_1082c2c0(A...); undefined4 * __thiscall FUN_1082c4e0(byte param_2); template<class... A> int FUN_1082c4e0(A...); undefined4 * __thiscall FUN_1082c590(byte param_2); template<class... A> int FUN_1082c590(A...); undefined4 * __thiscall FUN_1082c630(byte param_2); template<class... A> int FUN_1082c630(A...); undefined4 * __thiscall FUN_1082c6d0(byte param_2); template<class... A> int FUN_1082c6d0(A...); undefined4 * __thiscall FUN_1082c770(byte param_2); template<class... A> int FUN_1082c770(A...); undefined4 * __thiscall FUN_1082c870(byte param_2); template<class... A> int FUN_1082c870(A...); undefined4 * __thiscall FUN_1082c970(byte param_2); template<class... A> int FUN_1082c970(A...); undefined4 __thiscall FUN_1082c9b0(byte param_2); template<class... A> int FUN_1082c9b0(A...); void __thiscall FUN_1082cc20(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_1082cc20(A...); void __thiscall FUN_1082d580(undefined4 *param_2); template<class... A> int FUN_1082d580(A...); undefined4 * __thiscall FUN_10838a20(byte param_2); template<class... A> int FUN_10838a20(A...); undefined4 * __thiscall FUN_10838a50(byte param_2); template<class... A> int FUN_10838a50(A...); undefined4 * __thiscall FUN_10838a80(byte param_2); template<class... A> int FUN_10838a80(A...); undefined4 * __thiscall FUN_10838ab0(byte param_2); template<class... A> int FUN_10838ab0(A...); undefined4 * __thiscall FUN_10838ae0(byte param_2); template<class... A> int FUN_10838ae0(A...); undefined4 * __thiscall FUN_10838b70(byte param_2); template<class... A> int FUN_10838b70(A...); undefined4 * __thiscall FUN_10838c10(byte param_2); template<class... A> int FUN_10838c10(A...); undefined4 * __thiscall FUN_10838d30(byte param_2); template<class... A> int FUN_10838d30(A...); void __thiscall FUN_1083e500(undefined4 param_2); template<class... A> int FUN_1083e500(A...); undefined4 * __thiscall FUN_108411d0(int *param_2); template<class... A> int FUN_108411d0(A...); undefined4 * __thiscall FUN_108470b0(byte param_2); template<class... A> int FUN_108470b0(A...); undefined4 * __thiscall FUN_108470e0(byte param_2); template<class... A> int FUN_108470e0(A...); undefined4 * __thiscall FUN_10847110(byte param_2); template<class... A> int FUN_10847110(A...); undefined4 * __thiscall FUN_10847140(byte param_2); template<class... A> int FUN_10847140(A...); undefined4 * __thiscall FUN_10847170(byte param_2); template<class... A> int FUN_10847170(A...); undefined4 * __thiscall FUN_108471a0(byte param_2); template<class... A> int FUN_108471a0(A...); undefined4 * __thiscall FUN_108471d0(byte param_2); template<class... A> int FUN_108471d0(A...); undefined4 * __thiscall FUN_10847200(byte param_2); template<class... A> int FUN_10847200(A...); undefined4 * __thiscall FUN_10847230(byte param_2); template<class... A> int FUN_10847230(A...); undefined4 * __thiscall FUN_10847260(byte param_2); template<class... A> int FUN_10847260(A...); undefined4 * __thiscall FUN_10847290(byte param_2); template<class... A> int FUN_10847290(A...); undefined4 * __thiscall FUN_108472c0(byte param_2); template<class... A> int FUN_108472c0(A...); undefined4 * __thiscall FUN_108472f0(byte param_2); template<class... A> int FUN_108472f0(A...); undefined4 * __thiscall FUN_10847320(byte param_2); template<class... A> int FUN_10847320(A...); };

extern int FUN_105f1c50(...);
extern int FUN_10692b90(...);
extern int FUN_1069ccd0(...);
extern int FUN_106a54f0(...);
extern int FUN_106a8380(...);
extern __declspec(dllimport) int _CxxThrowException(...);
extern __declspec(dllimport) int __std_exception_copy(...);
extern __declspec(dllimport) int __std_exception_destroy(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _lock_file(...);
extern __declspec(dllimport) int _unlock_file(...);
extern __declspec(dllimport) int fflush(...);
extern __declspec(dllimport) int fputc(...);
extern int operator_new(...);
extern int thunk_FUN_10116710(...);
extern int thunk_FUN_10117000(...);
extern int thunk_FUN_101a2b90(...);
extern int thunk_FUN_101a33f0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_10210b20(...);
extern int thunk_FUN_1025ed70(...);
extern int thunk_FUN_1026e550(...);
extern int thunk_FUN_1026fe20(...);
extern int thunk_FUN_10272f30(...);
extern int thunk_FUN_1027ee20(...);
extern int thunk_FUN_1033cdb0(...);
extern int thunk_FUN_10348740(...);
extern int thunk_FUN_1034d2f0(...);
extern int thunk_FUN_1034de20(...);
extern int thunk_FUN_1034eaf0(...);
extern int thunk_FUN_10357c10(...);
extern int thunk_FUN_1036e480(...);
extern int thunk_FUN_10370f20(...);
extern int thunk_FUN_103d0730(...);
extern int thunk_FUN_103d0880(...);
extern int thunk_FUN_103d61d0(...);
extern int thunk_FUN_103d63d0(...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_10478ea0(...);
extern int thunk_FUN_104cb6d0(...);
extern int thunk_FUN_1059d120(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_105a4960(...);
extern int thunk_FUN_105a50c0(...);
extern int thunk_FUN_105a5110(...);
extern int thunk_FUN_105a51f0(...);
extern int thunk_FUN_105a52b0(...);
extern int thunk_FUN_105a5630(...);
extern int thunk_FUN_105a5690(...);
extern int thunk_FUN_105a56f0(...);
extern int thunk_FUN_105a5760(...);
extern int thunk_FUN_105a85f0(...);
extern int thunk_FUN_105ad910(...);
extern int thunk_FUN_105b1fd0(...);
extern int thunk_FUN_105b36c0(...);
extern int thunk_FUN_105b3de0(...);
extern int thunk_FUN_105b4460(...);
extern int thunk_FUN_105b63f0(...);
extern int thunk_FUN_105b6490(...);
extern int thunk_FUN_105b6820(...);
extern int thunk_FUN_105b6a20(...);
extern int thunk_FUN_105b6d40(...);
extern int thunk_FUN_105b6da0(...);
extern int thunk_FUN_105b9a00(...);
extern int thunk_FUN_105b9d30(...);
extern int thunk_FUN_105b9f10(...);
extern int thunk_FUN_105ba0d0(...);
extern int thunk_FUN_105ba370(...);
extern int thunk_FUN_105bc9a0(...);
extern int thunk_FUN_105bebd0(...);
extern int thunk_FUN_105ca4f0(...);
extern int thunk_FUN_105d2670(...);
extern int thunk_FUN_105d2c90(...);
extern int thunk_FUN_105d3a20(...);
extern int thunk_FUN_105d44d0(...);
extern int thunk_FUN_105ef270(...);
extern int thunk_FUN_105f2210(...);
extern int thunk_FUN_105f2b00(...);
extern int thunk_FUN_105f34e0(...);
extern int thunk_FUN_105f36d0(...);
extern int thunk_FUN_105f38c0(...);
extern int thunk_FUN_105f5920(...);
extern int thunk_FUN_105f5a00(...);
extern int thunk_FUN_105f5df0(...);
extern int thunk_FUN_105f60e0(...);
extern int thunk_FUN_105feb30(...);
extern int thunk_FUN_105ff930(...);
extern int thunk_FUN_106010a0(...);
extern int thunk_FUN_106045d0(...);
extern int thunk_FUN_10604700(...);
extern int thunk_FUN_10604790(...);
extern int thunk_FUN_10604820(...);
extern int thunk_FUN_1061c5e0(...);
extern int thunk_FUN_10623d50(...);
extern int thunk_FUN_106243b0(...);
extern int thunk_FUN_1062db60(...);
extern int thunk_FUN_106431c0(...);
extern int thunk_FUN_10648010(...);
extern int thunk_FUN_10648750(...);
extern int thunk_FUN_10648810(...);
extern int thunk_FUN_1064d7a0(...);
extern int thunk_FUN_106562a0(...);
extern int thunk_FUN_10656840(...);
extern int thunk_FUN_10681930(...);
extern int thunk_FUN_10681b80(...);
extern int thunk_FUN_10681ea0(...);
extern int thunk_FUN_10681f80(...);
extern int thunk_FUN_10682380(...);
extern int thunk_FUN_106823f0(...);
extern int thunk_FUN_10684390(...);
extern int thunk_FUN_106844d0(...);
extern int thunk_FUN_106845c0(...);
extern int thunk_FUN_10688910(...);
extern int thunk_FUN_1068c930(...);
extern int thunk_FUN_1068cc80(...);
extern int thunk_FUN_1068cf40(...);
extern int thunk_FUN_1068d4b0(...);
extern int thunk_FUN_106912f0(...);
extern int thunk_FUN_10692780(...);
extern int thunk_FUN_10695a20(...);
extern int thunk_FUN_10699d60(...);
extern int thunk_FUN_10699fb0(...);
extern int thunk_FUN_1069c2e0(...);
extern int thunk_FUN_1069e690(...);
extern int thunk_FUN_106a3130(...);
extern int thunk_FUN_106a39d0(...);
extern int thunk_FUN_106a4110(...);
extern int thunk_FUN_106a48e0(...);
extern int thunk_FUN_106a4c50(...);
extern int thunk_FUN_106a6540(...);
extern int thunk_FUN_106a9bb0(...);
extern int thunk_FUN_106aa0a0(...);
extern int thunk_FUN_106aa5c0(...);
extern int thunk_FUN_106aa870(...);
extern int thunk_FUN_106aabe0(...);
extern int thunk_FUN_106aaea0(...);
extern int thunk_FUN_106ab040(...);
extern int thunk_FUN_106ab4f0(...);
extern int thunk_FUN_106ab5b0(...);
extern int thunk_FUN_106ab7b0(...);
extern int thunk_FUN_106ab850(...);
extern int thunk_FUN_106ab920(...);
extern int thunk_FUN_106aec80(...);
extern int thunk_FUN_106b1170(...);
extern int thunk_FUN_106b4980(...);
extern int thunk_FUN_106c9300(...);
extern int thunk_FUN_106cffb0(...);
extern int thunk_FUN_106d1940(...);
extern int thunk_FUN_106d1a70(...);
extern int thunk_FUN_106d2d60(...);
extern int thunk_FUN_106d64c0(...);
extern int thunk_FUN_106d6de0(...);
extern int thunk_FUN_106d91c0(...);
extern int thunk_FUN_106d9220(...);
extern int thunk_FUN_106d9270(...);
extern int thunk_FUN_106d9340(...);
extern int thunk_FUN_106d93a0(...);
extern int thunk_FUN_106da680(...);
extern int thunk_FUN_106da820(...);
extern int thunk_FUN_106dbf00(...);
extern int thunk_FUN_106dc530(...);
extern int thunk_FUN_106dd300(...);
extern int thunk_FUN_106dd3c0(...);
extern int thunk_FUN_106de7d0(...);
extern int thunk_FUN_106de840(...);
extern int thunk_FUN_106dfa20(...);
extern int thunk_FUN_106e0260(...);
extern int thunk_FUN_106e05a0(...);
extern int thunk_FUN_106e0790(...);
extern int thunk_FUN_106e09f0(...);
extern int thunk_FUN_106e1600(...);
extern int thunk_FUN_106e7650(...);
extern int thunk_FUN_106e76e0(...);
extern int thunk_FUN_10723b00(...);
extern int thunk_FUN_10723bc0(...);
extern int thunk_FUN_10723ea0(...);
extern int thunk_FUN_1072b8a0(...);
extern int thunk_FUN_10785c60(...);
extern int thunk_FUN_1078f040(...);
extern int thunk_FUN_1078f2a0(...);
extern int thunk_FUN_1078fc20(...);
extern int thunk_FUN_107931b0(...);
extern int thunk_FUN_10793550(...);
extern int thunk_FUN_107bcdc0(...);
extern int thunk_FUN_108249b0(...);
extern int thunk_FUN_108280a0(...);
extern int thunk_FUN_108288d0(...);
extern int thunk_FUN_1082baf0(...);
extern int thunk_FUN_1082d6b0(...);
extern int thunk_FUN_1082df70(...);
extern int thunk_FUN_1083d1a0(...);
extern int thunk_FUN_1083fac0(...);
extern int thunk_FUN_108eeb60(...);
extern int thunk_FUN_109e1620(...);
extern int thunk_FUN_10bf0290(...);
extern int thunk_FUN_10c66510(...);
extern int thunk_FUN_10c98710(...);
extern int thunk_FUN_10cf3630(...);
extern int thunk_FUN_10cf3780(...);
extern int thunk_FUN_10cf4ae0(...);
extern int thunk_FUN_10d9e5c0(...);
extern int thunk_FUN_10d9e6c0(...);
extern int thunk_FUN_10d9e6d0(...);
extern int thunk_FUN_10def0d0(...);
extern int thunk_FUN_10e10fd0(...);
extern int thunk_FUN_10e111f0(...);
extern int thunk_FUN_10eac8a0(...);
extern int thunk_FUN_10eacd40(...);
extern int thunk_FUN_10eade00(...);
extern int thunk_FUN_10eae090(...);
extern int thunk_FUN_10eae160(...);
extern int thunk_FUN_10eb0c60(...);
extern int thunk_FUN_10eb0d90(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eb41c0(...);
extern int thunk_FUN_10eb6cc0(...);
extern int thunk_FUN_10ebba70(...);
extern int thunk_FUN_10ebc110(...);
extern int thunk_FUN_10ebc1d0(...);
extern int thunk_FUN_10ee2ec0(...);
extern int thunk_FUN_10ee48c0(...);
extern int thunk_FUN_10f04dc0(...);
extern int thunk_FUN_10f19cf0(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_111c0a80(...);
extern int thunk_FUN_111c0af0(...);
extern int thunk_FUN_111c14c0(...);
extern int thunk_FUN_111c1710(...);
extern int thunk_FUN_11203e10(...);
extern int thunk_FUN_11248b40(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_1125b030(...);
extern int thunk_FUN_112601e0(...);
extern int thunk_FUN_11261f10(...);
extern int thunk_FUN_11287ac0(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_00004494;
extern int DAT_1186d2ee;
extern int DAT_11882ff0;
extern int DAT_11e2f6dc;
extern int DAT_12126b84;
extern int DAT_121a2128;
extern int DAT_121a212c;
extern int DAT_121a2130;
extern int DAT_121a2134;
extern int DAT_121a2138;
extern int DAT_121a213c;
extern int DAT_121a2140;
extern int DAT_121a2144;
extern int DAT_121a2148;
extern int DAT_121a214c;
extern int DAT_121a2150;
extern int DAT_121a2154;
extern int DAT_121a2158;
extern int DAT_121a215c;
extern int DAT_121a2160;
extern int DAT_121a2164;
extern int DAT_121a2168;
extern int DAT_121a216c;
extern int DAT_121a2170;
extern int DAT_121a2174;
extern int DAT_121a2178;
extern int DAT_121a217c;
extern int DAT_121a2180;
extern int DAT_121a2184;
extern int DAT_121a2188;
extern int DAT_121a218c;
extern int DAT_121a2190;
extern int DAT_121a2238;
extern int DAT_121a223c;
extern int DAT_121a2240;
extern int DAT_121a2244;
extern int DAT_121a2294;
extern int DAT_121a2298;
extern int DAT_121a229c;
extern int DAT_121a22a0;
extern int DAT_121a22a4;
extern int DAT_121a22a8;
extern int DAT_121a22ac;
extern int DAT_121a22b0;
extern int DAT_121a22b4;
extern int DAT_121a22b8;
extern int DAT_121a22bc;
extern int DAT_121a22c0;
extern int DAT_121a22c4;
extern int DAT_121a22c8;
extern int DAT_121a22cc;
extern int DAT_121a22d0;
extern int DAT_121a22d4;
extern int DAT_121a22d8;
extern int DAT_121a22dc;
extern int DAT_121a22e0;
extern int DAT_121a22e4;
extern int DAT_121a22e8;
extern int DAT_121a22ec;
extern int DAT_121a22f0;
extern int DAT_121a22f4;
extern int DAT_121a22f8;
extern int DAT_121a22fc;
extern int DAT_121a2300;
extern int DAT_121a2304;
extern int DAT_121a2368;
extern int DAT_121a236c;
extern int DAT_121a2370;
extern int DAT_121a2374;
extern int DAT_121a2378;
extern int DAT_121a237c;
extern int DAT_121a2380;
extern int DAT_121a2384;
extern int DAT_121a2388;
extern int DAT_121a238c;
extern int DAT_121a2390;
extern int DAT_121a2394;
extern int DAT_121a2398;
extern int DAT_121a239c;
extern int DAT_121a23a0;
extern int DAT_121a23a4;
extern int DAT_121a23a8;
extern int DAT_121a23ac;
extern int DAT_121a23b0;
extern int DAT_121a23b4;
extern int DAT_121a23b8;
extern int DAT_121a23bc;
extern int DAT_121a23c0;
extern int DAT_121a23c4;
extern int DAT_121a23c8;
extern int DAT_121a23cc;
extern int DAT_121a23d0;
extern int DAT_121a23d4;
extern int DAT_121a23d8;
extern int DAT_121a23dc;
extern int DAT_121a23e0;
extern int DAT_121a23e4;
extern int DAT_121a23e8;
extern int DAT_121a23ec;
extern int DAT_121a23f0;
extern int DAT_121a23f4;
extern int DAT_121a23f8;
extern int DAT_121a23fc;
extern int DAT_121a2764;
extern int DAT_121a27ac;
extern int DAT_121a27b0;
extern int DAT_121a27b4;
extern int DAT_121a27b8;
extern int DAT_121a27bc;
extern int DAT_121a27c0;
extern int DAT_121a27c4;
extern int DAT_121a27c8;
extern int DAT_121a27cc;
extern int DAT_121a27d0;
extern int DAT_121a27d4;
extern int DAT_121a2824;
extern int DAT_121a2828;
extern int DAT_121a282c;
extern int DAT_121a2830;
extern int DAT_121a284c;
extern int DAT_121a2850;
extern int DAT_121a2854;
extern int DAT_121a2858;
extern int DAT_121a2874;
extern int DAT_121a2878;
extern int DAT_121a287c;
extern int DAT_121a28c8;
extern int DAT_121a28cc;
extern int DAT_121a28d0;
extern int DAT_121a28d4;
extern int DAT_121a28f0;
extern int DAT_121a28f4;
extern int DAT_121a28f8;
extern int DAT_121a2944;
extern int DAT_121a2948;
extern int DAT_121a294c;
extern int DAT_121a2950;
extern int DAT_121a2954;
extern int DAT_121a29a0;
extern int DAT_121a29a4;
extern int DAT_121a29a8;
extern int DAT_121a29ac;
extern int DAT_121a29b0;
extern int DAT_121a29b4;
extern int DAT_121a29b8;
extern int DAT_121a29bc;
extern int DAT_121a29c0;
extern int DAT_121a29c4;
extern int DAT_121a29c8;
extern int DAT_121a29cc;
extern int DAT_121a29d0;
extern int DAT_121a29d4;
extern int DAT_121a29d8;
extern int DAT_121a29dc;
extern int DAT_121a29e0;
extern int DAT_121a29e4;
extern int DAT_121a29e8;
extern int DAT_121a29ec;
extern int DAT_121a29f0;
extern int DAT_121a2a78;
extern int DAT_121a2ac4;
extern int DAT_121a2b08;
extern int DAT_121a2b0c;
extern int DAT_121a2b10;
extern int DAT_121a2b14;
extern int DAT_121a2b18;
extern int DAT_121a2b1c;
extern int DAT_121a2b20;
extern int DAT_121a2b78;
extern int DAT_121a2b7c;
extern int DAT_121a2b80;
extern int DAT_121a2b84;
extern int DAT_121a2b88;
extern int DAT_121a2b8c;
extern int DAT_121a2b90;
extern int DAT_121a2be4;
extern int DAT_121a2be8;
extern int DAT_121a2bec;
extern int DAT_121a2c38;
extern int DAT_121a2c3c;
extern int DAT_121a2c8c;
extern int DAT_121a2c90;
extern int DAT_121a2c94;
extern int DAT_121a2c98;
extern int DAT_121a2c9c;
extern int DAT_121a2cec;
extern int DAT_121a2cf0;
extern int DAT_121a2cf4;
extern int DAT_121a2cf8;
extern int DAT_121a2d4c;
extern int DAT_121a2d94;
extern int DAT_121a2d98;
extern int DAT_121a2d9c;
extern int DAT_121a2de8;
extern int DAT_121a2e34;
extern int DAT_121a2e38;
extern int DAT_121a2e3c;
extern int DAT_121a2e40;
extern int DAT_121a2e44;
extern int DAT_121a2e48;
extern int DAT_121a2e4c;
extern int DAT_121a2e50;
extern int DAT_121a2e54;
extern int DAT_121a2e58;
extern int DAT_121a2e5c;
extern int DAT_121a2e60;
extern int DAT_121a2e64;
extern int DAT_121a2e68;
extern int DAT_121a2e6c;
extern int DAT_121a2e70;
extern int DAT_121a2e74;
extern int DAT_121a2e78;
extern int DAT_121a2e7c;
extern int DAT_121a2e80;
extern int DAT_121a2e84;
extern int DAT_121a2e88;
extern int DAT_121a2e8c;
extern int DAT_121a2e90;
extern int DAT_121a2e94;
extern int DAT_121a2e98;
extern int DAT_121a2e9c;
extern int DAT_121a2ea0;
extern int DAT_121a2ea4;
extern int DAT_121a2ea8;
extern int DAT_121a2eac;
extern int DAT_121a2eb0;
extern int DAT_121a2f18;
extern int DAT_121a2f1c;
extern int DAT_121a2f20;
extern int DAT_121a2f24;
extern int DAT_121a2f28;
extern int DAT_121a2f2c;
extern int DAT_121a2f30;
extern int DAT_121a2f34;
extern int DAT_121a2f38;
extern int DAT_121a2f3c;
extern int DAT_121a2f94;
extern int DAT_121a2f98;
extern int DAT_121a2fdc;
extern int DAT_121a2fe0;
extern int DAT_121a2fe4;
extern int DAT_121a2fe8;
extern int DAT_121a2fec;
extern int DAT_121a2ff0;
extern int DAT_121a2ff4;
extern int DAT_121a2ff8;
extern int DAT_121a2ffc;
extern int DAT_121a3000;
extern int DAT_121a3004;
extern int DAT_121a3008;
extern int DAT_121a300c;
extern int DAT_121a3064;
extern int DAT_121a3068;
extern int DAT_121a306c;
extern int DAT_121a3070;
extern int DAT_121a3074;
extern int DAT_121a3078;
extern int DAT_121a307c;
extern int DAT_121a3080;
extern int DAT_121a30d4;
extern int DAT_121a30d8;
extern int DAT_121a30e0;
extern int DAT_121a30e4;
extern int DAT_121a312c;
extern int DAT_121a3130;
extern int DAT_121a3134;
extern int DAT_121a3138;
extern int DAT_121a313c;
extern int DAT_121a3140;
extern int DAT_121a3144;
extern int DAT_121a3148;
extern int DAT_121a314c;
extern int DAT_121a3150;
extern int DAT_121a3154;
extern int DAT_121a31a8;
extern int DAT_121a31ac;
extern int DAT_121a31b0;
extern int DAT_121a31b4;
extern int DAT_121a31b8;
extern int DAT_121a31bc;
extern int DAT_121a31c0;
extern int DAT_121a3218;
extern int DAT_121a321c;
extern int DAT_121a3220;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RFileTransferDownloadAIOOp;
extern int ghidra_vftable_RHttpGetNoRedirectAIOOp;
extern int ghidra_vftable_RHttpPostNoRedirectAIOOp;
extern int ghidra_vftable_RUpdateOpCallback;
extern int ghidra_vftable_RUpnpAISetAudioInputAttributesAIOOp;
extern int ghidra_vftable_RUpnpAISetLineInLevelAIOOp;
extern int ghidra_vftable_RUpnpAVTSetPlayModeAIOOp;
extern int ghidra_vftable_RUpnpCDCreateObjectAIOOp;
extern int ghidra_vftable_RUpnpDPGetZoneAttributesAIOOp;
extern int ghidra_vftable_RUpnpDPSetAutoplayRoomUUIDAIOOp;
extern int ghidra_vftable_RUpnpDPSetAutoplayVolumeAIOOp;
extern int ghidra_vftable_RUpnpDPSetUseAutoplayVolumeAIOOp;
extern int ghidra_vftable_RUpnpHTCSetIRRepeaterStateAIOOp;
extern int ghidra_vftable_RUpnpHTCSetLEDFeedbackStateAIOOp;
extern int ghidra_vftable_RUpnpRCSetOutputFixedAIOOp;
extern int ghidra_vftable_RUpnpRCSetRoomCalibrationStatusAIOOp;
extern int ghidra_vftable_RZPUpdateProgressCB;
extern int ghidra_vftable_SCAddProductLaunchable;
extern int ghidra_vftable_SCAmazonAlexaPreviewWizardType;
extern int ghidra_vftable_SCAmazonAlexaSetupWizardType;
extern int ghidra_vftable_SCApInstructionsWizardType;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCAudioCompressionSelectAction;
extern int ghidra_vftable_SCBleConnectWizardType;
extern int ghidra_vftable_SCBluetoothOnlyWizardType;
extern int ghidra_vftable_SCBusinessWelcomeWizardType;
extern int ghidra_vftable_SCConditionalElementTree;
extern int ghidra_vftable_SCConditionalElementTreeNoAppendInterface;
extern int ghidra_vftable_SCConditionalVectorBuilderTree;
extern int ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCMusicServiceCatalogRequest;
extern int ghidra_vftable_SCNewWizPageFor;
extern int ghidra_vftable_SCNewWizParams;
extern int ghidra_vftable_SCNewWizStateTypeFor;
extern int ghidra_vftable_SCOpFileDownload;
extern int ghidra_vftable_SCOpRenderingControlSetRoomCalibrationStatus;
extern int ghidra_vftable_SCSearchHistoryToggleAction;
extern int ghidra_vftable_SCShare;
extern int ghidra_vftable_SCStaleSessionToggleAction;
extern int ghidra_vftable_SCSubwizStateFor;
extern int ghidra_vftable_SCTestPointManager;
extern int ghidra_vftable_SCVerifyUrlPostRequest;
extern int ghidra_vftable_SetupFileTransferDownloadOp;
extern int ghidra_vftable_SetupFileTransferUploadOp;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int ghidra_vftable_std_bad_cast;
extern int ghidra_vftable_std_exception;
extern int in_EAX;
extern int uStack_10;
extern int uStack_4;
extern int uStack_8;
extern int uStack_c;
extern undefined1 LAB_115aab70[];
extern undefined1 LAB_115ac280[];
extern undefined1 LAB_115ac2b0[];
extern undefined1 LAB_115ac2e0[];
extern undefined1 LAB_115ac310[];
extern undefined1 LAB_115ac340[];
extern undefined1 LAB_115afab0[];
extern undefined1 LAB_115b9bf0[];
extern undefined1 LAB_115b9c20[];
extern undefined1 LAB_115c26c0[];
extern undefined1 LAB_115c26f0[];
extern undefined1 LAB_115d4bc0[];
extern undefined1 LAB_115d4bf0[];
extern undefined1 LAB_115d79e0[];
extern undefined1 LAB_115da150[];
extern undefined1 LAB_115da180[];
extern undefined1 LAB_115da1b0[];
extern undefined1 LAB_115df4f0[];
extern undefined1 LAB_115e26d0[];
extern undefined1 LAB_115e2700[];
extern undefined1 LAB_115e5840[];
extern undefined1 LAB_115e6980[];
extern undefined1 LAB_115e7820[];
extern undefined1 LAB_115e8da0[];
extern undefined1 LAB_115e8dd0[];
extern undefined1 LAB_115e8e00[];
extern undefined1 LAB_115ea720[];
extern undefined1 LAB_115ebcd0[];
extern undefined1 LAB_115fd1d0[];
extern undefined1 LAB_11603790[];
extern undefined1 LAB_116037c0[];
extern undefined1 LAB_11623d20[];
extern int *PTR_s_AllowLaunchAfter_12119b3c;
extern int *stack0xfffffffc;
extern void *ExceptionList;
void __stdcall FUN_105a50c0(undefined4 param_1,int *param_2);
void __stdcall FUN_105a50c0(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_105a6dc0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_105a6dc0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_105a6e00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_105a6e00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_105a6e40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_105a6e40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_105a6e80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_105a6e80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105a7c40(undefined4 *param_1);
extern void __fastcall FUN_105a7c40(...);
void __fastcall FUN_105a7da0(int param_1);
extern void __fastcall FUN_105a7da0(...);
void __fastcall FUN_105a7dc0(int param_1);
extern void __fastcall FUN_105a7dc0(...);
void __fastcall FUN_105a7de0(int param_1);
extern void __fastcall FUN_105a7de0(...);
void __fastcall FUN_105a7e00(int param_1);
extern void __fastcall FUN_105a7e00(...);
void __fastcall FUN_105a7e70(int *param_1);
extern void __fastcall FUN_105a7e70(...);
void __fastcall FUN_105a7ea0(int *param_1);
extern void __fastcall FUN_105a7ea0(...);
void __fastcall FUN_105a7ed0(int *param_1);
extern void __fastcall FUN_105a7ed0(...);
void __fastcall FUN_105a7f00(undefined4 *param_1);
extern void __fastcall FUN_105a7f00(...);
void __fastcall FUN_105a7f30(undefined4 *param_1);
extern void __fastcall FUN_105a7f30(...);
void __fastcall FUN_105a8170(int param_1);
extern void __fastcall FUN_105a8170(...);
void __fastcall FUN_105a8190(int param_1);
extern void __fastcall FUN_105a8190(...);
void __fastcall FUN_105a81b0(int param_1);
extern void __fastcall FUN_105a81b0(...);
void __fastcall FUN_105a81e0(int *param_1);
extern void __fastcall FUN_105a81e0(...);
void __fastcall FUN_105a8210(int *param_1);
extern void __fastcall FUN_105a8210(...);
void __fastcall FUN_105a8240(int *param_1);
extern void __fastcall FUN_105a8240(...);
void __fastcall FUN_105a9dd0(int param_1);
extern void __fastcall FUN_105a9dd0(...);
void __fastcall FUN_105a9df0(int param_1);
extern void __fastcall FUN_105a9df0(...);
void __fastcall FUN_105a9e10(int param_1);
extern void __fastcall FUN_105a9e10(...);
void __fastcall FUN_105a9e30(int param_1);
extern void __fastcall FUN_105a9e30(...);
int * FUN_105ab690(int *param_1);
extern int * FUN_105ab690(...);
int * FUN_105ab720(int *param_1);
extern int * FUN_105ab720(...);
void __fastcall FUN_105ac680(int *param_1);
extern void __fastcall FUN_105ac680(...);
void __fastcall FUN_105ac6b0(int *param_1);
extern void __fastcall FUN_105ac6b0(...);
void __fastcall FUN_105ac6e0(int *param_1);
extern void __fastcall FUN_105ac6e0(...);
void __fastcall FUN_105ad2b0(int *param_1);
extern void __fastcall FUN_105ad2b0(...);
SCStr * __stdcall FUN_105ad820(SCStr *param_1);
SCStr * __stdcall FUN_105ad820(SCStr *param_1);
void __fastcall FUN_105af180(int param_1);
extern void __fastcall FUN_105af180(...);
void __fastcall FUN_105b1d20(undefined4 *param_1);
extern void __fastcall FUN_105b1d20(...);
void __fastcall FUN_105b1e90(int *param_1);
extern void __fastcall FUN_105b1e90(...);
void __fastcall FUN_105b1ec0(int *param_1);
extern void __fastcall FUN_105b1ec0(...);
void __fastcall FUN_105b1f50(int *param_1);
extern void __fastcall FUN_105b1f50(...);
void __fastcall FUN_105b1f80(int *param_1);
extern void __fastcall FUN_105b1f80(...);
void __fastcall FUN_105b2350(int *param_1);
extern void __fastcall FUN_105b2350(...);
void __fastcall FUN_105b2390(int *param_1);
extern void __fastcall FUN_105b2390(...);
void __fastcall FUN_105b2f30(int *param_1);
extern void __fastcall FUN_105b2f30(...);
void __fastcall FUN_105b2f60(int *param_1);
extern void __fastcall FUN_105b2f60(...);
undefined4 __fastcall FUN_105b34b0(int param_1);
extern undefined4 __fastcall FUN_105b34b0(...);
int __fastcall FUN_105b36a0(int param_1);
extern int __fastcall FUN_105b36a0(...);
int __fastcall FUN_105b4990(int param_1);
extern int __fastcall FUN_105b4990(...);
void __fastcall FUN_105b4be0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105b4be0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105b4c50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105b4c50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105b4ca0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105b4ca0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __stdcall FUN_105b4ed0(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_105b4ed0(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_105b5ef0(int param_1,char param_2);
void __stdcall FUN_105b5ef0(int param_1,char param_2);
void __stdcall FUN_105b5f30(int param_1);
void __stdcall FUN_105b5f30(int param_1);
void __stdcall FUN_105b5f60(int param_1);
void __stdcall FUN_105b5f60(int param_1);
undefined4 * __fastcall FUN_105b8210(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_105b8210(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_105b8250(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_105b8250(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105b9b50(int *param_1);
extern void __fastcall FUN_105b9b50(...);
void __fastcall FUN_105b9bb0(int param_1);
extern void __fastcall FUN_105b9bb0(...);
void __fastcall FUN_105b9be0(int *param_1);
extern void __fastcall FUN_105b9be0(...);
void __fastcall FUN_105b9c10(int *param_1);
extern void __fastcall FUN_105b9c10(...);
void __fastcall FUN_105b9c40(int param_1);
extern void __fastcall FUN_105b9c40(...);
void __fastcall FUN_105b9c70(int param_1);
extern void __fastcall FUN_105b9c70(...);
void __fastcall FUN_105b9c90(undefined4 *param_1);
extern void __fastcall FUN_105b9c90(...);
void __fastcall FUN_105b9cb0(undefined4 *param_1);
extern void __fastcall FUN_105b9cb0(...);
void __fastcall FUN_105b9cd0(int *param_1);
extern void __fastcall FUN_105b9cd0(...);
void __fastcall FUN_105b9d00(int *param_1);
extern void __fastcall FUN_105b9d00(...);
void __fastcall FUN_105ba340(undefined4 *param_1);
extern void __fastcall FUN_105ba340(...);
void __fastcall FUN_105ba3e0(undefined4 *param_1);
extern void __fastcall FUN_105ba3e0(...);
void __fastcall FUN_105ba400(undefined4 *param_1);
extern void __fastcall FUN_105ba400(...);
void __fastcall FUN_105ba4a0(undefined4 *param_1);
extern void __fastcall FUN_105ba4a0(...);
void __fastcall FUN_105ba4e0(undefined4 *param_1);
extern void __fastcall FUN_105ba4e0(...);
void __fastcall FUN_105bacf0(int param_1);
extern void __fastcall FUN_105bacf0(...);
void __stdcall FUN_105baf60(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_105baf60(undefined4 *param_1,undefined4 *param_2);
void __fastcall FUN_105bba00(int param_1);
extern void __fastcall FUN_105bba00(...);
void __fastcall FUN_105bc920(int param_1);
extern void __fastcall FUN_105bc920(...);
void __fastcall FUN_105bc960(int *param_1);
extern void __fastcall FUN_105bc960(...);
void __stdcall FUN_105bcf50(int param_1,int param_2);
void __stdcall FUN_105bcf50(int param_1,int param_2);
void __stdcall FUN_105bcfa0(int param_1,int param_2);
void __stdcall FUN_105bcfa0(int param_1,int param_2);
void __stdcall FUN_105bcff0(int param_1,int param_2);
void __stdcall FUN_105bcff0(int param_1,int param_2);
void __stdcall FUN_105bd190(undefined4 param_1);
void __stdcall FUN_105bd190(undefined4 param_1);
char * __fastcall FUN_105bd2e0(int param_1);
extern char * __fastcall FUN_105bd2e0(...);
undefined1 * __fastcall FUN_105be8d0(int param_1);
extern undefined1 * __fastcall FUN_105be8d0(...);
undefined1 * __fastcall FUN_105be910(int param_1);
extern undefined1 * __fastcall FUN_105be910(...);
SCStr * __stdcall FUN_105bee40(SCStr *param_1);
SCStr * __stdcall FUN_105bee40(SCStr *param_1);
undefined1 * __fastcall FUN_105befc0(int param_1);
extern undefined1 * __fastcall FUN_105befc0(...);
SCStr * __stdcall FUN_105bf0d0(SCStr *param_1);
SCStr * __stdcall FUN_105bf0d0(SCStr *param_1);
undefined4 FUN_105bfbb0(undefined4 param_1);
extern undefined4 FUN_105bfbb0(...);
undefined4 FUN_105bfe00(void);
extern undefined4 FUN_105bfe00(...);
undefined4 FUN_105c0090(int param_1);
extern undefined4 FUN_105c0090(...);
undefined4 FUN_105c0190(undefined4 param_1);
extern undefined4 FUN_105c0190(...);
void __fastcall FUN_105c3cd0(int *param_1);
extern void __fastcall FUN_105c3cd0(...);
void __fastcall FUN_105c3d30(int *param_1);
extern void __fastcall FUN_105c3d30(...);
void __fastcall FUN_105c3d90(int *param_1);
extern void __fastcall FUN_105c3d90(...);
void __fastcall FUN_105c3df0(int *param_1);
extern void __fastcall FUN_105c3df0(...);
void __fastcall FUN_105c3e50(int *param_1);
extern void __fastcall FUN_105c3e50(...);
SCStr * __stdcall FUN_105c66c0(SCStr *param_1);
SCStr * __stdcall FUN_105c66c0(SCStr *param_1);
SCStr * __stdcall FUN_105c66f0(SCStr *param_1);
SCStr * __stdcall FUN_105c66f0(SCStr *param_1);
SCStr * __stdcall FUN_105c6720(SCStr *param_1);
SCStr * __stdcall FUN_105c6720(SCStr *param_1);
SCStr * __stdcall FUN_105c6840(SCStr *param_1);
SCStr * __stdcall FUN_105c6840(SCStr *param_1);
SCStr * __stdcall FUN_105c69d0(SCStr *param_1);
SCStr * __stdcall FUN_105c69d0(SCStr *param_1);
SCStr * __stdcall FUN_105c7190(SCStr *param_1);
SCStr * __stdcall FUN_105c7190(SCStr *param_1);
SCStr * __stdcall FUN_105c75d0(SCStr *param_1);
SCStr * __stdcall FUN_105c75d0(SCStr *param_1);
void __stdcall FUN_105c93d0(undefined4 *param_1);
void __stdcall FUN_105c93d0(undefined4 *param_1);
void __stdcall FUN_105c9420(undefined4 *param_1);
void __stdcall FUN_105c9420(undefined4 *param_1);
SCStr * __stdcall FUN_105c97a0(SCStr *param_1);
SCStr * __stdcall FUN_105c97a0(SCStr *param_1);
void __fastcall FUN_105d25e0(undefined4 *param_1);
extern void __fastcall FUN_105d25e0(...);
void __fastcall FUN_105d2630(undefined4 *param_1);
extern void __fastcall FUN_105d2630(...);
void __fastcall FUN_105d2650(undefined4 *param_1);
extern void __fastcall FUN_105d2650(...);
void __fastcall FUN_105d2bf0(int *param_1);
extern void __fastcall FUN_105d2bf0(...);
void __fastcall FUN_105d2c50(undefined4 *param_1);
extern void __fastcall FUN_105d2c50(...);
void __fastcall FUN_105d2c70(undefined4 *param_1);
extern void __fastcall FUN_105d2c70(...);
void __stdcall FUN_105d6eb0(unsigned int recovered_unused_stack_0);
void __stdcall FUN_105d6eb0(unsigned int recovered_unused_stack_0);
void __fastcall FUN_105d8f00(undefined4 *param_1);
extern void __fastcall FUN_105d8f00(...);
void __stdcall FUN_105dc0c0(int param_1,int param_2);
void __stdcall FUN_105dc0c0(int param_1,int param_2);
void __fastcall FUN_105dc140(int *param_1);
extern void __fastcall FUN_105dc140(...);
void __fastcall FUN_105dc170(int *param_1);
extern void __fastcall FUN_105dc170(...);
void __fastcall FUN_105dc1a0(int *param_1);
extern void __fastcall FUN_105dc1a0(...);
SCStr * __stdcall FUN_105dd4b0(SCStr *param_1);
SCStr * __stdcall FUN_105dd4b0(SCStr *param_1);
SCStr * __stdcall FUN_105dd4d0(SCStr *param_1);
SCStr * __stdcall FUN_105dd4d0(SCStr *param_1);
SCStr * __stdcall FUN_105dd4f0(SCStr *param_1);
SCStr * __stdcall FUN_105dd4f0(SCStr *param_1);
SCStr * __stdcall FUN_105dd520(SCStr *param_1);
SCStr * __stdcall FUN_105dd520(SCStr *param_1);
SCStr * __stdcall FUN_105dd540(SCStr *param_1);
SCStr * __stdcall FUN_105dd540(SCStr *param_1);
SCStr * __stdcall FUN_105dd560(SCStr *param_1);
SCStr * __stdcall FUN_105dd560(SCStr *param_1);
SCStr * __stdcall FUN_105dd590(SCStr *param_1);
SCStr * __stdcall FUN_105dd590(SCStr *param_1);
SCStr * __stdcall FUN_105dd600(SCStr *param_1);
SCStr * __stdcall FUN_105dd600(SCStr *param_1);
SCStr * __stdcall FUN_105dd630(SCStr *param_1);
SCStr * __stdcall FUN_105dd630(SCStr *param_1);
SCStr * __stdcall FUN_105dd680(SCStr *param_1);
SCStr * __stdcall FUN_105dd680(SCStr *param_1);
SCStr * __stdcall FUN_105de490(SCStr *param_1);
SCStr * __stdcall FUN_105de490(SCStr *param_1);
void __fastcall FUN_105e3f70(int param_1);
extern void __fastcall FUN_105e3f70(...);
void __fastcall FUN_105ee900(int *param_1);
extern void __fastcall FUN_105ee900(...);
void __fastcall FUN_105eefa0(int *param_1);
extern void __fastcall FUN_105eefa0(...);
void __fastcall FUN_105eefd0(int *param_1);
extern void __fastcall FUN_105eefd0(...);
void __fastcall FUN_105ef000(int *param_1);
extern void __fastcall FUN_105ef000(...);
void __fastcall FUN_105ef030(int *param_1);
extern void __fastcall FUN_105ef030(...);
void __fastcall FUN_105ef050(int *param_1);
extern void __fastcall FUN_105ef050(...);
void __fastcall FUN_105ef070(int *param_1);
extern void __fastcall FUN_105ef070(...);
void __fastcall FUN_105ef0b0(int *param_1);
extern void __fastcall FUN_105ef0b0(...);
void __fastcall FUN_105ef0d0(int *param_1);
extern void __fastcall FUN_105ef0d0(...);
void __fastcall FUN_105ef0f0(int *param_1);
extern void __fastcall FUN_105ef0f0(...);
void __fastcall FUN_105ef130(int *param_1);
extern void __fastcall FUN_105ef130(...);
void __fastcall FUN_105ef150(int *param_1);
extern void __fastcall FUN_105ef150(...);
void __fastcall FUN_105ef170(int *param_1);
extern void __fastcall FUN_105ef170(...);
void __fastcall FUN_105ef190(int *param_1);
extern void __fastcall FUN_105ef190(...);
void __fastcall FUN_105ef1b0(int *param_1);
extern void __fastcall FUN_105ef1b0(...);
void __fastcall FUN_105ef1d0(int *param_1);
extern void __fastcall FUN_105ef1d0(...);
void __fastcall FUN_105ef1f0(int *param_1);
extern void __fastcall FUN_105ef1f0(...);
void __fastcall FUN_105ef230(int *param_1);
extern void __fastcall FUN_105ef230(...);
void __fastcall FUN_105ef250(int *param_1);
extern void __fastcall FUN_105ef250(...);
void __fastcall FUN_105f15d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105f15d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* WARNING: Removing unreachable block (ram,0x105f1c6f) */ undefined4 FUN_105f1c50(void);
void __fastcall FUN_105f1d10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105f1d10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void FUN_105f2a40(int param_1,int param_2);
extern void FUN_105f2a40(...);
void __fastcall FUN_105febd0(undefined4 *param_1);
extern void __fastcall FUN_105febd0(...);
void __fastcall FUN_105fec00(undefined4 *param_1);
extern void __fastcall FUN_105fec00(...);
void __fastcall FUN_105fee90(undefined4 *param_1);
extern void __fastcall FUN_105fee90(...);
void __fastcall FUN_105ff440(int *param_1);
extern void __fastcall FUN_105ff440(...);
void __fastcall FUN_105ff4a0(int *param_1);
extern void __fastcall FUN_105ff4a0(...);
void __fastcall FUN_105ff6e0(undefined4 *param_1);
extern void __fastcall FUN_105ff6e0(...);
void __fastcall FUN_105ff810(int *param_1);
extern void __fastcall FUN_105ff810(...);
void __fastcall FUN_105ff840(undefined4 *param_1);
extern void __fastcall FUN_105ff840(...);
void __fastcall FUN_105ff870(undefined4 *param_1);
extern void __fastcall FUN_105ff870(...);
void __fastcall FUN_105ff8a0(undefined4 *param_1);
extern void __fastcall FUN_105ff8a0(...);
void __fastcall FUN_105ff8d0(undefined4 *param_1);
extern void __fastcall FUN_105ff8d0(...);
void __fastcall FUN_105ff8f0(int *param_1);
extern void __fastcall FUN_105ff8f0(...);
void FUN_10600240(void);
extern void FUN_10600240(...);
void __stdcall FUN_106042e0(int param_1,int param_2);
void __stdcall FUN_106042e0(int param_1,int param_2);
void __stdcall FUN_10604310(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_10604310(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_10604340(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_10604340(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_10604370(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_10604370(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_10607f70(int param_1,int param_2);
void __stdcall FUN_10607f70(int param_1,int param_2);
void __stdcall FUN_10607fc0(int param_1,int param_2);
void __stdcall FUN_10607fc0(int param_1,int param_2);
void __stdcall FUN_10608010(int param_1,int param_2);
void __stdcall FUN_10608010(int param_1,int param_2);
void __stdcall FUN_10608060(int param_1,int param_2);
void __stdcall FUN_10608060(int param_1,int param_2);
void __stdcall FUN_106080b0(int param_1,int param_2);
void __stdcall FUN_106080b0(int param_1,int param_2);
void __fastcall FUN_10608380(int *param_1);
extern void __fastcall FUN_10608380(...);
void __stdcall FUN_10612870(undefined4 *param_1);
void __stdcall FUN_10612870(undefined4 *param_1);
void FUN_10619af0(void);
extern void FUN_10619af0(...);
void __fastcall FUN_10620360(int *param_1);
extern void __fastcall FUN_10620360(...);
void __fastcall FUN_1062c0b0(undefined4 *param_1);
extern void __fastcall FUN_1062c0b0(...);
void __fastcall FUN_1062c3c0(int *param_1);
extern void __fastcall FUN_1062c3c0(...);
void __fastcall FUN_1062c420(int *param_1);
extern void __fastcall FUN_1062c420(...);
void __fastcall FUN_1062c5a0(undefined4 *param_1);
extern void __fastcall FUN_1062c5a0(...);
void __fastcall FUN_1062c900(int *param_1);
extern void __fastcall FUN_1062c900(...);
void FUN_1062cc10(void);
extern void FUN_1062cc10(...);
void FUN_1062cc30(void);
extern void FUN_1062cc30(...);
void FUN_1062cc70(void);
extern void FUN_1062cc70(...);
void __stdcall FUN_10633d20(int param_1,int param_2);
void __stdcall FUN_10633d20(int param_1,int param_2);
undefined4 __stdcall FUN_1063d090(undefined4 param_1);
undefined4 __stdcall FUN_1063d090(undefined4 param_1);
undefined4 * __fastcall FUN_1064d4c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_1064d4c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_1064d500(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_1064d500(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_106545f0(undefined4 *param_1);
extern void __fastcall FUN_106545f0(...);
void __fastcall FUN_10654e60(int *param_1);
extern void __fastcall FUN_10654e60(...);
void __fastcall FUN_10654eb0(int *param_1);
extern void __fastcall FUN_10654eb0(...);
void __fastcall FUN_10654ee0(int *param_1);
extern void __fastcall FUN_10654ee0(...);
void __fastcall FUN_10654f10(undefined4 *param_1);
extern void __fastcall FUN_10654f10(...);
void __fastcall FUN_10654f30(int *param_1);
extern void __fastcall FUN_10654f30(...);
void __fastcall FUN_10654f60(int *param_1);
extern void __fastcall FUN_10654f60(...);
void __fastcall FUN_10654f90(int *param_1);
extern void __fastcall FUN_10654f90(...);
void __stdcall FUN_1065a700(undefined4 *param_1, unsigned int recovered_unused_stack_0);
void __stdcall FUN_1065a700(undefined4 *param_1, unsigned int recovered_unused_stack_0);
void __fastcall FUN_1065ad50(int *param_1);
extern void __fastcall FUN_1065ad50(...);
void __stdcall FUN_1065e730(int param_1,int param_2);
void __stdcall FUN_1065e730(int param_1,int param_2);
undefined4 __stdcall FUN_1066bbd0(undefined4 param_1);
undefined4 __stdcall FUN_1066bbd0(undefined4 param_1);
SCStr * __stdcall FUN_1066d560(SCStr *param_1);
SCStr * __stdcall FUN_1066d560(SCStr *param_1);
SCStr * __stdcall FUN_1066d580(SCStr *param_1);
SCStr * __stdcall FUN_1066d580(SCStr *param_1);
SCStr * __stdcall FUN_10677120(SCStr *param_1);
SCStr * __stdcall FUN_10677120(SCStr *param_1);
undefined1 __fastcall FUN_10677fe0(int param_1);
extern undefined1 __fastcall FUN_10677fe0(...);
void FUN_10678fa0(void);
extern void FUN_10678fa0(...);
void FUN_1067e860(void);
extern void FUN_1067e860(...);
void FUN_1067eaa0(void);
extern void FUN_1067eaa0(...);
undefined4 * __fastcall FUN_106830d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106830d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10683110(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10683110(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10683ed0(undefined4 *param_1);
extern void __fastcall FUN_10683ed0(...);
void __fastcall FUN_10683f60(int param_1);
extern void __fastcall FUN_10683f60(...);
void __fastcall FUN_10683f80(int param_1);
extern void __fastcall FUN_10683f80(...);
void __fastcall FUN_10683fa0(int *param_1);
extern void __fastcall FUN_10683fa0(...);
void __fastcall FUN_10683fd0(int *param_1);
extern void __fastcall FUN_10683fd0(...);
void __fastcall FUN_10684140(int param_1);
extern void __fastcall FUN_10684140(...);
void __fastcall FUN_10684160(int param_1);
extern void __fastcall FUN_10684160(...);
void __fastcall FUN_10684180(undefined4 *param_1);
extern void __fastcall FUN_10684180(...);
void __fastcall FUN_106841a0(int *param_1);
extern void __fastcall FUN_106841a0(...);
void __fastcall FUN_106841d0(int *param_1);
extern void __fastcall FUN_106841d0(...);
void __fastcall FUN_10685030(int param_1);
extern void __fastcall FUN_10685030(...);
void __fastcall FUN_10685050(int param_1);
extern void __fastcall FUN_10685050(...);
void __fastcall FUN_10685f50(int *param_1);
extern void __fastcall FUN_10685f50(...);
undefined4 FUN_10686070(SCStr *param_1);
extern undefined4 FUN_10686070(...);
void __stdcall FUN_106863b0(int param_1,int param_2);
void __stdcall FUN_106863b0(int param_1,int param_2);
void __stdcall FUN_10687270(undefined4 param_1,undefined2 param_2);
void __stdcall FUN_10687270(undefined4 param_1,undefined2 param_2);
undefined4 * __fastcall FUN_10687e20(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10687e20(...);
void __fastcall FUN_106888d0(undefined4 *param_1);
extern void __fastcall FUN_106888d0(...);
void __fastcall FUN_106888f0(undefined4 *param_1);
extern void __fastcall FUN_106888f0(...);
SCStr * __stdcall FUN_1068a3c0(SCStr *param_1);
SCStr * __stdcall FUN_1068a3c0(SCStr *param_1);
SCStr * __stdcall FUN_1068a5a0(SCStr *param_1);
SCStr * __stdcall FUN_1068a5a0(SCStr *param_1);
SCStr * __stdcall FUN_1068a5c0(SCStr *param_1);
SCStr * __stdcall FUN_1068a5c0(SCStr *param_1);
SCStr * __stdcall FUN_1068a700(SCStr *param_1);
SCStr * __stdcall FUN_1068a700(SCStr *param_1);
undefined4 __stdcall FUN_1068a750(undefined4 param_1,int param_2);
undefined4 __stdcall FUN_1068a750(undefined4 param_1,int param_2);
SCStr * __stdcall FUN_1068a780(SCStr *param_1);
SCStr * __stdcall FUN_1068a780(SCStr *param_1);
uint __fastcall FUN_1068ad60(int param_1);
extern uint __fastcall FUN_1068ad60(...);
void __fastcall FUN_1068c010(int param_1);
extern void __fastcall FUN_1068c010(...);
undefined4 * __fastcall FUN_106912c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106912c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_10691aa0(undefined4 param_1);
extern undefined4 __fastcall FUN_10691aa0(...);
void __fastcall FUN_10692270(int *param_1);
extern void __fastcall FUN_10692270(...);
void __fastcall FUN_106922d0(int *param_1);
extern void __fastcall FUN_106922d0(...);
void __fastcall FUN_10692330(int param_1);
extern void __fastcall FUN_10692330(...);
void __fastcall FUN_10692350(int *param_1);
extern void __fastcall FUN_10692350(...);
void __fastcall FUN_10692540(int param_1);
extern void __fastcall FUN_10692540(...);
void __fastcall FUN_10692580(undefined4 *param_1);
extern void __fastcall FUN_10692580(...);
void __fastcall FUN_106925a0(undefined4 *param_1);
extern void __fastcall FUN_106925a0(...);
void __fastcall FUN_106925c0(undefined4 *param_1);
extern void __fastcall FUN_106925c0(...);
void __fastcall FUN_106925e0(int *param_1);
extern void __fastcall FUN_106925e0(...);
void __fastcall FUN_10692610(int *param_1);
extern void __fastcall FUN_10692610(...);
void __fastcall FUN_10692960(int *param_1);
extern void __fastcall FUN_10692960(...);
void __fastcall FUN_10692980(int *param_1);
extern void __fastcall FUN_10692980(...);
void __fastcall FUN_10693740(int param_1);
extern void __fastcall FUN_10693740(...);
void __fastcall FUN_10693880(int *param_1);
extern void __fastcall FUN_10693880(...);
void __stdcall FUN_10693e50(undefined4 *param_1);
void __stdcall FUN_10693e50(undefined4 *param_1);
void __fastcall FUN_106944c0(int *param_1);
extern void __fastcall FUN_106944c0(...);
void __stdcall FUN_10695460(int param_1,int param_2);
void __stdcall FUN_10695460(int param_1,int param_2);
bool FUN_106967f0(void);
extern bool FUN_106967f0(...);
SCStr * __stdcall FUN_10699550(SCStr *param_1);
SCStr * __stdcall FUN_10699550(SCStr *param_1);
SCStr * __stdcall FUN_10699570(SCStr *param_1);
SCStr * __stdcall FUN_10699570(SCStr *param_1);
SCStr * __stdcall FUN_10699590(SCStr *param_1);
SCStr * __stdcall FUN_10699590(SCStr *param_1);
SCStr * __stdcall FUN_106995b0(SCStr *param_1);
SCStr * __stdcall FUN_106995b0(SCStr *param_1);
SCStr * __stdcall FUN_106995d0(SCStr *param_1);
SCStr * __stdcall FUN_106995d0(SCStr *param_1);
SCStr * __stdcall FUN_106995f0(SCStr *param_1);
SCStr * __stdcall FUN_106995f0(SCStr *param_1);
SCStr * __stdcall FUN_10699610(SCStr *param_1);
SCStr * __stdcall FUN_10699610(SCStr *param_1);
SCStr * __stdcall FUN_10699630(SCStr *param_1);
SCStr * __stdcall FUN_10699630(SCStr *param_1);
SCStr * __stdcall FUN_10699730(SCStr *param_1);
SCStr * __stdcall FUN_10699730(SCStr *param_1);
SCStr * __stdcall FUN_10699760(SCStr *param_1);
SCStr * __stdcall FUN_10699760(SCStr *param_1);
SCStr * __stdcall FUN_10699790(SCStr *param_1);
SCStr * __stdcall FUN_10699790(SCStr *param_1);
undefined4 * __fastcall FUN_10699a70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
undefined4 * __fastcall FUN_10699a70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
undefined4 * __fastcall FUN_1069b150(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_1069b150(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_1069bf60(int param_1);
extern void __fastcall FUN_1069bf60(...);
void __fastcall FUN_1069bf80(int *param_1);
extern void __fastcall FUN_1069bf80(...);
void __fastcall FUN_1069c160(int *param_1);
extern void __fastcall FUN_1069c160(...);
void __fastcall FUN_1069c190(undefined4 *param_1);
extern void __fastcall FUN_1069c190(...);
int __stdcall FUN_1069cbf0(undefined4 param_1);
int __stdcall FUN_1069cbf0(undefined4 param_1);
void __fastcall FUN_1069d6f0(int param_1);
extern void __fastcall FUN_1069d6f0(...);
void __stdcall FUN_1069d9a0(undefined4 *param_1);
void __stdcall FUN_1069d9a0(undefined4 *param_1);
void __fastcall FUN_1069e110(int *param_1);
extern void __fastcall FUN_1069e110(...);
void __fastcall FUN_1069e1b0(undefined4 *param_1);
extern void __fastcall FUN_1069e1b0(...);
void __fastcall FUN_1069e940(int *param_1);
extern void __fastcall FUN_1069e940(...);
void __fastcall FUN_1069e970(undefined4 *param_1);
extern void __fastcall FUN_1069e970(...);
void __fastcall FUN_106a1470(undefined4 *param_1);
extern void __fastcall FUN_106a1470(...);
void __fastcall FUN_106a1500(int *param_1);
extern void __fastcall FUN_106a1500(...);
bool FUN_106a36e0(char param_1,FILE *param_2);
extern bool FUN_106a36e0(...);
undefined4 * __fastcall FUN_106a3af0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106a3af0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106a4110(undefined4 *param_1);
extern undefined4 * __fastcall FUN_106a4110(...);
void __fastcall FUN_106a41d0(int param_1);
extern void __fastcall FUN_106a41d0(...);
void __fastcall FUN_106a4400(int param_1);
extern void __fastcall FUN_106a4400(...);
void __fastcall FUN_106a5460(int param_1);
extern void __fastcall FUN_106a5460(...);
void FUN_106a55d0(void);
extern void FUN_106a55d0(...);
void __fastcall FUN_106a5600(int param_1);
extern void __fastcall FUN_106a5600(...);
void __fastcall FUN_106a65c0(int *param_1);
extern void __fastcall FUN_106a65c0(...);
undefined4 __fastcall FUN_106a7f50(int *param_1);
extern undefined4 __fastcall FUN_106a7f50(...);
undefined4 * __fastcall FUN_106b0890(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106b0890(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106b0930(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106b0930(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_106b3510(int *param_1);
extern void __fastcall FUN_106b3510(...);
void __fastcall FUN_106b3570(int *param_1);
extern void __fastcall FUN_106b3570(...);
void __fastcall FUN_106b35d0(int *param_1);
extern void __fastcall FUN_106b35d0(...);
void __fastcall FUN_106b3630(int param_1);
extern void __fastcall FUN_106b3630(...);
void __fastcall FUN_106b3650(int param_1);
extern void __fastcall FUN_106b3650(...);
void __fastcall FUN_106b3670(int *param_1);
extern void __fastcall FUN_106b3670(...);
void __fastcall FUN_106b3770(int *param_1);
extern void __fastcall FUN_106b3770(...);
void __fastcall FUN_106b37a0(int *param_1);
extern void __fastcall FUN_106b37a0(...);
void __fastcall FUN_106b37d0(undefined4 *param_1);
extern void __fastcall FUN_106b37d0(...);
void __fastcall FUN_106b3920(int param_1);
extern void __fastcall FUN_106b3920(...);
void __fastcall FUN_106b39f0(undefined4 *param_1);
extern void __fastcall FUN_106b39f0(...);
void __fastcall FUN_106b3a10(undefined4 *param_1);
extern void __fastcall FUN_106b3a10(...);
void __fastcall FUN_106b3a30(undefined4 *param_1);
extern void __fastcall FUN_106b3a30(...);
void __fastcall FUN_106b3a60(int *param_1);
extern void __fastcall FUN_106b3a60(...);
void __fastcall FUN_106b3a90(int *param_1);
extern void __fastcall FUN_106b3a90(...);
void __fastcall FUN_106b3ac0(int *param_1);
extern void __fastcall FUN_106b3ac0(...);
void __fastcall FUN_106b3e80(int *param_1);
extern void __fastcall FUN_106b3e80(...);
void __fastcall FUN_106b52c0(int *param_1);
extern void __fastcall FUN_106b52c0(...);
void __fastcall FUN_106b8190(int param_1);
extern void __fastcall FUN_106b8190(...);
void __fastcall FUN_106b81b0(int param_1);
extern void __fastcall FUN_106b81b0(...);
void __stdcall FUN_106b8d10(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_106b8d10(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_106b8eb0(unsigned int recovered_unused_stack_0);
void __stdcall FUN_106b8eb0(unsigned int recovered_unused_stack_0);
bool __stdcall FUN_106b8f50(undefined4 *param_1);
bool __stdcall FUN_106b8f50(undefined4 *param_1);
int FUN_106ba4a0(int param_1);
extern int FUN_106ba4a0(...);
int * FUN_106ba520(int *param_1);
extern int * FUN_106ba520(...);
int * FUN_106ba550(int *param_1);
extern int * FUN_106ba550(...);
void __fastcall FUN_106baa10(int *param_1);
extern void __fastcall FUN_106baa10(...);
void __fastcall FUN_106bd440(int *param_1);
extern void __fastcall FUN_106bd440(...);
void __fastcall FUN_106bd470(int *param_1);
extern void __fastcall FUN_106bd470(...);
void __fastcall FUN_106bd4a0(undefined4 *param_1);
extern void __fastcall FUN_106bd4a0(...);
void __fastcall FUN_106bd4c0(int *param_1);
extern void __fastcall FUN_106bd4c0(...);
void __fastcall FUN_106bd500(int param_1);
extern void __fastcall FUN_106bd500(...);
undefined4 FUN_106bdd60(SCStr *param_1);
extern undefined4 FUN_106bdd60(...);
undefined4 FUN_106bddb0(SCStr *param_1);
extern undefined4 FUN_106bddb0(...);
void __stdcall FUN_106be280(int param_1,int param_2);
void __stdcall FUN_106be280(int param_1,int param_2);
void __stdcall FUN_106be2d0(int param_1,int param_2);
void __stdcall FUN_106be2d0(int param_1,int param_2);
void __stdcall FUN_106be320(int param_1,int param_2);
void __stdcall FUN_106be320(int param_1,int param_2);
SCStr * __stdcall FUN_106c1d10(SCStr *param_1);
SCStr * __stdcall FUN_106c1d10(SCStr *param_1);
SCStr * __stdcall FUN_106c1d30(SCStr *param_1);
SCStr * __stdcall FUN_106c1d30(SCStr *param_1);
SCStr * __stdcall FUN_106c1d50(SCStr *param_1);
SCStr * __stdcall FUN_106c1d50(SCStr *param_1);
int FUN_106c3c90(void);
extern int FUN_106c3c90(...);
void __stdcall FUN_106ca070(undefined4 param_1);
void __stdcall FUN_106ca070(undefined4 param_1);
void __fastcall FUN_106cf000(int param_1);
extern void __fastcall FUN_106cf000(...);
void __fastcall FUN_106cf0f0(int param_1);
extern void __fastcall FUN_106cf0f0(...);
void __fastcall FUN_106d00a0(int *param_1);
extern void __fastcall FUN_106d00a0(...);
void __fastcall FUN_106d00d0(int *param_1);
extern void __fastcall FUN_106d00d0(...);
int * __fastcall FUN_106d01d0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_106d01d0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_106d0460(int *param_1);
extern void __fastcall FUN_106d0460(...);
void __fastcall FUN_106d0a70(int param_1);
extern void __fastcall FUN_106d0a70(...);
undefined4 * __fastcall FUN_106d2520(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106d2520(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_106d2ab0(int *param_1);
extern void __fastcall FUN_106d2ab0(...);
void __fastcall FUN_106d2b10(int param_1);
extern void __fastcall FUN_106d2b10(...);
void __fastcall FUN_106d2ba0(int *param_1);
extern void __fastcall FUN_106d2ba0(...);
void __fastcall FUN_106d2c80(int param_1);
extern void __fastcall FUN_106d2c80(...);
void __fastcall FUN_106d2ca0(int *param_1);
extern void __fastcall FUN_106d2ca0(...);
void __fastcall FUN_106d2fc0(int *param_1);
extern void __fastcall FUN_106d2fc0(...);
void __fastcall FUN_106d2fe0(int *param_1);
extern void __fastcall FUN_106d2fe0(...);
void __fastcall FUN_106d3680(int param_1);
extern void __fastcall FUN_106d3680(...);
void __fastcall FUN_106d38b0(int param_1);
extern void __fastcall FUN_106d38b0(...);
int * FUN_106d4280(int *param_1);
extern int * FUN_106d4280(...);
void __fastcall FUN_106d4d70(int *param_1);
extern void __fastcall FUN_106d4d70(...);
void __fastcall FUN_106d56a0(int param_1);
extern void __fastcall FUN_106d56a0(...);
SCStr * __stdcall FUN_106d5ab0(SCStr *param_1);
SCStr * __stdcall FUN_106d5ab0(SCStr *param_1);
void FUN_106d71a0(void);
extern void FUN_106d71a0(...);
SCStr * FUN_106d8540(SCStr *param_1,int param_2);
extern SCStr * FUN_106d8540(...);
void FUN_106d8da0(int *param_1,int *param_2);
extern void FUN_106d8da0(...);
void __stdcall FUN_106d9220(undefined4 param_1,int *param_2);
void __stdcall FUN_106d9220(undefined4 param_1,int *param_2);
void __stdcall FUN_106d9270(undefined4 param_1,int *param_2);
void __stdcall FUN_106d9270(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_106d9c20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106d9c20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106d9c60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106d9c60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106d9ca0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106d9ca0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_106da2e0(int param_1);
extern void __fastcall FUN_106da2e0(...);
void __fastcall FUN_106da300(int param_1);
extern void __fastcall FUN_106da300(...);
void __fastcall FUN_106da320(int *param_1);
extern void __fastcall FUN_106da320(...);
void __fastcall FUN_106da3f0(int *param_1);
extern void __fastcall FUN_106da3f0(...);
void __fastcall FUN_106da4b0(int *param_1);
extern void __fastcall FUN_106da4b0(...);
void __fastcall FUN_106da500(int *param_1);
extern void __fastcall FUN_106da500(...);
void __fastcall FUN_106da960(int *param_1);
extern void __fastcall FUN_106da960(...);
void __fastcall FUN_106dafd0(int param_1);
extern void __fastcall FUN_106dafd0(...);
void __fastcall FUN_106daff0(int param_1);
extern void __fastcall FUN_106daff0(...);
void __stdcall FUN_106db150(int *param_1,int *param_2);
void __stdcall FUN_106db150(int *param_1,int *param_2);
void __fastcall FUN_106dba90(int *param_1);
extern void __fastcall FUN_106dba90(...);
void __stdcall FUN_106dc1a0(int param_1,int param_2);
void __stdcall FUN_106dc1a0(int param_1,int param_2);
undefined4 __stdcall FUN_106dc4e0(undefined4 param_1);
undefined4 __stdcall FUN_106dc4e0(undefined4 param_1);
SCStr * __stdcall FUN_106dc500(SCStr *param_1);
SCStr * __stdcall FUN_106dc500(SCStr *param_1);
undefined4 __fastcall FUN_106dc540(int param_1);
extern undefined4 __fastcall FUN_106dc540(...);
uint __fastcall FUN_106dc570(undefined4 *param_1);
extern uint __fastcall FUN_106dc570(...);
undefined4 __fastcall FUN_106dc5b0(int param_1);
extern undefined4 __fastcall FUN_106dc5b0(...);
undefined4 __fastcall FUN_106dc5f0(int param_1);
extern undefined4 __fastcall FUN_106dc5f0(...);
undefined4 * __fastcall FUN_106dde40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106dde40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106dde80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106dde80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_106de510(int param_1);
extern void __fastcall FUN_106de510(...);
void __fastcall FUN_106de530(int param_1);
extern void __fastcall FUN_106de530(...);
void __fastcall FUN_106de550(int *param_1);
extern void __fastcall FUN_106de550(...);
void __fastcall FUN_106de580(int *param_1);
extern void __fastcall FUN_106de580(...);
void __fastcall FUN_106de6d0(int param_1);
extern void __fastcall FUN_106de6d0(...);
void __fastcall FUN_106de6f0(int param_1);
extern void __fastcall FUN_106de6f0(...);
void __fastcall FUN_106de710(int *param_1);
extern void __fastcall FUN_106de710(...);
void __fastcall FUN_106de740(int *param_1);
extern void __fastcall FUN_106de740(...);
void __fastcall FUN_106def30(int param_1);
extern void __fastcall FUN_106def30(...);
void __fastcall FUN_106def50(int param_1);
extern void __fastcall FUN_106def50(...);
void __stdcall FUN_106e09f0(undefined4 param_1,int *param_2);
void __stdcall FUN_106e09f0(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_106e27a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106e27a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_106e4b20(undefined4 *param_1);
extern void __fastcall FUN_106e4b20(...);
void __fastcall FUN_106e4c00(undefined4 *param_1);
extern void __fastcall FUN_106e4c00(...);
void __fastcall FUN_106e4e30(int *param_1);
extern void __fastcall FUN_106e4e30(...);
void __fastcall FUN_106e4e90(int *param_1);
extern void __fastcall FUN_106e4e90(...);
void __fastcall FUN_106e4f80(int param_1);
extern void __fastcall FUN_106e4f80(...);
void __fastcall FUN_106e5050(undefined4 *param_1);
extern void __fastcall FUN_106e5050(...);
void __fastcall FUN_106e5080(undefined4 *param_1);
extern void __fastcall FUN_106e5080(...);
void __fastcall FUN_106e52d0(undefined4 *param_1);
extern void __fastcall FUN_106e52d0(...);
void __fastcall FUN_106e6ee0(int param_1);
extern void __fastcall FUN_106e6ee0(...);
void __stdcall FUN_106e7130(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_106e7130(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_106e8ac0(int param_1,int param_2);
void __stdcall FUN_106e8ac0(int param_1,int param_2);
void __stdcall FUN_106e8b10(int param_1,int param_2);
void __stdcall FUN_106e8b10(int param_1,int param_2);
SCStr * __stdcall FUN_106ee070(SCStr *param_1);
SCStr * __stdcall FUN_106ee070(SCStr *param_1);
SCStr * __stdcall FUN_106f2020(SCStr *param_1);
SCStr * __stdcall FUN_106f2020(SCStr *param_1);
void __fastcall FUN_106f8420(undefined4 *param_1);
extern void __fastcall FUN_106f8420(...);
void __fastcall FUN_106f8490(int *param_1);
extern void __fastcall FUN_106f8490(...);
void __fastcall FUN_106fe7a0(int *param_1);
extern void __fastcall FUN_106fe7a0(...);
void __fastcall FUN_107038d0(int *param_1);
extern void __fastcall FUN_107038d0(...);
SCStr * __stdcall FUN_10707940(SCStr *param_1);
SCStr * __stdcall FUN_10707940(SCStr *param_1);
void __fastcall FUN_1070a010(undefined4 *param_1);
extern void __fastcall FUN_1070a010(...);
void __fastcall FUN_1070a270(int *param_1);
extern void __fastcall FUN_1070a270(...);
void __fastcall FUN_1070a2d0(int *param_1);
extern void __fastcall FUN_1070a2d0(...);
void __fastcall FUN_1070a330(int *param_1);
extern void __fastcall FUN_1070a330(...);
void __fastcall FUN_1070b3a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
void __fastcall FUN_1070b3a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
void __fastcall FUN_10712fc0(int *param_1);
extern void __fastcall FUN_10712fc0(...);
void __fastcall FUN_107196f0(int *param_1);
extern void __fastcall FUN_107196f0(...);
void __fastcall FUN_10723790(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10723790(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __stdcall FUN_10723bc0(undefined4 param_1,int *param_2);
void __stdcall FUN_10723bc0(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_10726c20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10726c20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10726c60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10726c60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_1072a9f0(undefined4 *param_1);
extern void __fastcall FUN_1072a9f0(...);
void __fastcall FUN_1072ae00(int param_1);
extern void __fastcall FUN_1072ae00(...);
void __fastcall FUN_1072af20(int *param_1);
extern void __fastcall FUN_1072af20(...);
void __fastcall FUN_1072afe0(int *param_1);
extern void __fastcall FUN_1072afe0(...);
void __fastcall FUN_1072bc90(int *param_1);
extern void __fastcall FUN_1072bc90(...);
void __fastcall FUN_1072bcb0(int *param_1);
extern void __fastcall FUN_1072bcb0(...);
void __fastcall FUN_1072bcd0(int *param_1);
extern void __fastcall FUN_1072bcd0(...);
void __fastcall FUN_1072bcf0(int *param_1);
extern void __fastcall FUN_1072bcf0(...);
void __fastcall FUN_1072de90(int param_1);
extern void __fastcall FUN_1072de90(...);
void __fastcall FUN_1072e140(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_1072e140(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int __stdcall FUN_1072e7e0(int *param_1);
int __stdcall FUN_1072e7e0(int *param_1);
SCStr * __stdcall FUN_1073c360(SCStr *param_1);
SCStr * __stdcall FUN_1073c360(SCStr *param_1);
SCStr * __stdcall FUN_1073c380(SCStr *param_1);
SCStr * __stdcall FUN_1073c380(SCStr *param_1);
SCStr * __stdcall FUN_1073c3a0(SCStr *param_1);
SCStr * __stdcall FUN_1073c3a0(SCStr *param_1);
void FUN_107491c0(void);
extern void FUN_107491c0(...);
void __fastcall FUN_1074b740(undefined4 *param_1);
extern void __fastcall FUN_1074b740(...);
void __fastcall FUN_1074d080(undefined4 *param_1);
extern void __fastcall FUN_1074d080(...);
void FUN_10758160(void);
extern void FUN_10758160(...);
void FUN_10758190(void);
extern void FUN_10758190(...);
void __stdcall FUN_10760a40(undefined4 *param_1);
void __stdcall FUN_10760a40(undefined4 *param_1);
void __fastcall FUN_10760ec0(int param_1);
extern void __fastcall FUN_10760ec0(...);
void __fastcall FUN_10761000(int *param_1);
extern void __fastcall FUN_10761000(...);
void __fastcall FUN_10768300(undefined4 *param_1);
extern void __fastcall FUN_10768300(...);
void FUN_10771db0(void);
extern void FUN_10771db0(...);
void __fastcall FUN_10773f70(int *param_1);
extern void __fastcall FUN_10773f70(...);
void FUN_10774410(void);
extern void FUN_10774410(...);
void __fastcall FUN_1077c380(undefined4 *param_1);
extern void __fastcall FUN_1077c380(...);
bool FUN_10781c60(void);
extern bool FUN_10781c60(...);
void __fastcall FUN_10783930(undefined4 *param_1);
extern void __fastcall FUN_10783930(...);
undefined4 * __fastcall FUN_10788330(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10788330(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_1078dc90(undefined4 *param_1);
extern void __fastcall FUN_1078dc90(...);
void __fastcall FUN_1078e080(int *param_1);
extern void __fastcall FUN_1078e080(...);
void __fastcall FUN_1078e0e0(int *param_1);
extern void __fastcall FUN_1078e0e0(...);
void __fastcall FUN_1078e1d0(int *param_1);
extern void __fastcall FUN_1078e1d0(...);
void __fastcall FUN_1078e200(int *param_1);
extern void __fastcall FUN_1078e200(...);
undefined4 __fastcall FUN_10799320(int param_1);
extern undefined4 __fastcall FUN_10799320(...);
undefined4 __fastcall FUN_107bca40(int param_1);
extern undefined4 __fastcall FUN_107bca40(...);
bool FUN_107bcdc0(void);
extern bool FUN_107bcdc0(...);
void __stdcall FUN_107cc800(int param_1);
void __stdcall FUN_107cc800(int param_1);
void __fastcall FUN_107cf210(undefined4 *param_1);
extern void __fastcall FUN_107cf210(...);
void __fastcall FUN_107e6c70(undefined4 *param_1);
extern void __fastcall FUN_107e6c70(...);
void __stdcall FUN_107e84a0(undefined4 *param_1);
void __stdcall FUN_107e84a0(undefined4 *param_1);
void FUN_107ec120(void);
extern void FUN_107ec120(...);
void FUN_107ec190(void);
extern void FUN_107ec190(...);
void FUN_107ec200(void);
extern void FUN_107ec200(...);
undefined4 __stdcall FUN_10823350(undefined4 param_1);
undefined4 __stdcall FUN_10823350(undefined4 param_1);
undefined4 __stdcall FUN_10823370(undefined4 param_1);
undefined4 __stdcall FUN_10823370(undefined4 param_1);
undefined4 __stdcall FUN_10823390(undefined4 param_1);
undefined4 __stdcall FUN_10823390(undefined4 param_1);
undefined4 __stdcall FUN_10823870(undefined4 param_1);
undefined4 __stdcall FUN_10823870(undefined4 param_1);
undefined4 __stdcall FUN_10823bc0(undefined4 param_1);
undefined4 __stdcall FUN_10823bc0(undefined4 param_1);
undefined4 * __fastcall FUN_10829cb0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10829cb0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_1082b400(undefined4 *param_1);
extern void __fastcall FUN_1082b400(...);
void __fastcall FUN_1082b4a0(int param_1);
extern void __fastcall FUN_1082b4a0(...);
void __fastcall FUN_1082b4c0(int *param_1);
extern void __fastcall FUN_1082b4c0(...);
void __fastcall FUN_1082b580(int param_1);
extern void __fastcall FUN_1082b580(...);
void __fastcall FUN_1082b5a0(undefined4 *param_1);
extern void __fastcall FUN_1082b5a0(...);
void __fastcall FUN_1082b5c0(int *param_1);
extern void __fastcall FUN_1082b5c0(...);
void __fastcall FUN_1082b810(undefined4 *param_1);
extern void __fastcall FUN_1082b810(...);
void __fastcall FUN_1082cad0(int param_1);
extern void __fastcall FUN_1082cad0(...);
void __stdcall FUN_108303c0(int param_1,int param_2);
void __stdcall FUN_108303c0(int param_1,int param_2);
void FUN_10836240(void);
extern void FUN_10836240(...);
void FUN_10838510(void);
extern void FUN_10838510(...);
void FUN_108388d0(void);
extern void FUN_108388d0(...);
int __fastcall FUN_1083d1a0(int param_1);
extern int __fastcall FUN_1083d1a0(...);
void __fastcall FUN_108459b0(int *param_1);
extern void __fastcall FUN_108459b0(...);
void __fastcall FUN_10846600(undefined4 *param_1);
extern void __fastcall FUN_10846600(...);
// Reference entry 105a5030; body size 33 bytes.
#line 1 "ENTRY_105a5030"

void __thiscall Recovered_Bulk::FUN_105a5030(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_105a5110(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 105a5060; body size 33 bytes.
#line 1 "ENTRY_105a5060"

void __thiscall Recovered_Bulk::FUN_105a5060(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_105a51f0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x38);
  return;
}


// Reference entry 105a5090; body size 33 bytes.
#line 1 "ENTRY_105a5090"

void __thiscall Recovered_Bulk::FUN_105a5090(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_105a52b0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 105a50c0; body size 57 bytes.
#line 1 "ENTRY_105a50c0"

void __stdcall FUN_105a50c0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_105a50c0(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x18);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 105a5510; body size 49 bytes.
#line 1 "ENTRY_105a5510"

int __thiscall Recovered_Bulk::FUN_105a5510(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_105a5630((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || ((int)(*param_2) < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 105a5550; body size 49 bytes.
#line 1 "ENTRY_105a5550"

int __thiscall Recovered_Bulk::FUN_105a5550(uint *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_105a5690((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || ((uint)(*param_2) < *(uint *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 105a5590; body size 60 bytes.
#line 1 "ENTRY_105a5590"

int __thiscall Recovered_Bulk::FUN_105a5590(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_105a56f0((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), 0), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 105a55e0; body size 60 bytes.
#line 1 "ENTRY_105a55e0"

int __thiscall Recovered_Bulk::FUN_105a55e0(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_105a5760((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), 0), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 105a6390; body size 30 bytes.
#line 1 "ENTRY_105a6390"

void __thiscall Recovered_Bulk::FUN_105a6390(int param_2)
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


// Reference entry 105a6c80; body size 41 bytes.
#line 1 "ENTRY_105a6c80"

undefined4 * __thiscall Recovered_Bulk::FUN_105a6c80(int *param_2)
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


// Reference entry 105a6cc0; body size 41 bytes.
#line 1 "ENTRY_105a6cc0"

undefined4 * __thiscall Recovered_Bulk::FUN_105a6cc0(int *param_2)
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


// Reference entry 105a6d00; body size 41 bytes.
#line 1 "ENTRY_105a6d00"

undefined4 * __thiscall Recovered_Bulk::FUN_105a6d00(int *param_2)
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


// Reference entry 105a6dc0; body size 48 bytes.
#line 1 "ENTRY_105a6dc0"

undefined4 * __fastcall FUN_105a6dc0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 105a6e00; body size 48 bytes.
#line 1 "ENTRY_105a6e00"

undefined4 * __fastcall FUN_105a6e00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 105a6e40; body size 48 bytes.
#line 1 "ENTRY_105a6e40"

undefined4 * __fastcall FUN_105a6e40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 105a6e80; body size 48 bytes.
#line 1 "ENTRY_105a6e80"

undefined4 * __fastcall FUN_105a6e80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 105a7c40; body size 19 bytes.
#line 1 "ENTRY_105a7c40"

void __fastcall FUN_105a7c40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 105a7da0; body size 19 bytes.
#line 1 "ENTRY_105a7da0"

void __fastcall FUN_105a7da0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 105a7dc0; body size 19 bytes.
#line 1 "ENTRY_105a7dc0"

void __fastcall FUN_105a7dc0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x20);
  }
  return;
}


// Reference entry 105a7de0; body size 19 bytes.
#line 1 "ENTRY_105a7de0"

void __fastcall FUN_105a7de0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x38);
  }
  return;
}


// Reference entry 105a7e00; body size 19 bytes.
#line 1 "ENTRY_105a7e00"

void __fastcall FUN_105a7e00(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 105a7e70; body size 28 bytes.
#line 1 "ENTRY_105a7e70"

void __fastcall FUN_105a7e70(int *param_1)

{
  thunk_FUN_105a52b0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 105a7ea0; body size 28 bytes.
#line 1 "ENTRY_105a7ea0"

void __fastcall FUN_105a7ea0(int *param_1)

{
  thunk_FUN_105a5110(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 105a7ed0; body size 28 bytes.
#line 1 "ENTRY_105a7ed0"

void __fastcall FUN_105a7ed0(int *param_1)

{
  thunk_FUN_105a51f0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x38);
  return;
}


// Reference entry 105a7f00; body size 36 bytes.
#line 1 "ENTRY_105a7f00"

void __fastcall FUN_105a7f00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    thunk_FUN_105a5110(*param_1,*(undefined4 *)(*piVar1 + 4));
    thunk_FUN_1148a50e(*piVar1,0x20);
  }
  return;
}


// Reference entry 105a7f30; body size 36 bytes.
#line 1 "ENTRY_105a7f30"

void __fastcall FUN_105a7f30(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    thunk_FUN_105a51f0(*param_1,*(undefined4 *)(*piVar1 + 4));
    thunk_FUN_1148a50e(*piVar1,0x38);
  }
  return;
}


// Reference entry 105a8170; body size 19 bytes.
#line 1 "ENTRY_105a8170"

void __fastcall FUN_105a8170(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x20);
  }
  return;
}


// Reference entry 105a8190; body size 19 bytes.
#line 1 "ENTRY_105a8190"

void __fastcall FUN_105a8190(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x38);
  }
  return;
}


// Reference entry 105a81b0; body size 19 bytes.
#line 1 "ENTRY_105a81b0"

void __fastcall FUN_105a81b0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 105a81e0; body size 28 bytes.
#line 1 "ENTRY_105a81e0"

void __fastcall FUN_105a81e0(int *param_1)

{
  thunk_FUN_105a52b0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 105a8210; body size 28 bytes.
#line 1 "ENTRY_105a8210"

void __fastcall FUN_105a8210(int *param_1)

{
  thunk_FUN_105a5110(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 105a8240; body size 28 bytes.
#line 1 "ENTRY_105a8240"

void __fastcall FUN_105a8240(int *param_1)

{
  thunk_FUN_105a51f0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x38);
  return;
}


// Reference entry 105a9a00; body size 45 bytes.
#line 1 "ENTRY_105a9a00"

undefined4 * __thiscall Recovered_Bulk::FUN_105a9a00(byte param_2)
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


// Reference entry 105a9cb0; body size 33 bytes.
#line 1 "ENTRY_105a9cb0"

undefined4 * __thiscall Recovered_Bulk::FUN_105a9cb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105a9ce0; body size 35 bytes.
#line 1 "ENTRY_105a9ce0"

undefined4 __thiscall Recovered_Bulk::FUN_105a9ce0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105a85f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdc);
  }
  return (undefined4)(param_1);
}


// Reference entry 105a9dd0; body size 25 bytes.
#line 1 "ENTRY_105a9dd0"

void __fastcall FUN_105a9dd0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 105a9df0; body size 25 bytes.
#line 1 "ENTRY_105a9df0"

void __fastcall FUN_105a9df0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 105a9e10; body size 25 bytes.
#line 1 "ENTRY_105a9e10"

void __fastcall FUN_105a9e10(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x38), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 105a9e30; body size 25 bytes.
#line 1 "ENTRY_105a9e30"

void __fastcall FUN_105a9e30(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 105a9ed0; body size 50 bytes.
#line 1 "ENTRY_105a9ed0"

void __thiscall Recovered_Bulk::FUN_105a9ed0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_105a5110(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  thunk_FUN_105a4960(param_2,param_2);
  return;
}


// Reference entry 105ab690; body size 31 bytes.
#line 1 "ENTRY_105ab690"

int * FUN_105ab690(int *param_1)

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


// Reference entry 105ab720; body size 31 bytes.
#line 1 "ENTRY_105ab720"

int * FUN_105ab720(int *param_1)

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


// Reference entry 105ab7f0; body size 52 bytes.
#line 1 "ENTRY_105ab7f0"

void __thiscall Recovered_Bulk::FUN_105ab7f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_105a1c80();
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  param_1[2] = (undefined4)(param_2[2]);
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 105ac000; body size 61 bytes.
#line 1 "ENTRY_105ac000"

void __thiscall Recovered_Bulk::FUN_105ac000(int *param_2)
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


// Reference entry 105ac050; body size 30 bytes.
#line 1 "ENTRY_105ac050"

void __thiscall Recovered_Bulk::FUN_105ac050(int param_2)
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


// Reference entry 105ac680; body size 33 bytes.
#line 1 "ENTRY_105ac680"

void __fastcall FUN_105ac680(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_105a52b0(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 105ac6b0; body size 33 bytes.
#line 1 "ENTRY_105ac6b0"

void __fastcall FUN_105ac6b0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_105a5110(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 105ac6e0; body size 33 bytes.
#line 1 "ENTRY_105ac6e0"

void __fastcall FUN_105ac6e0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_105a51f0(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 105ad2b0; body size 28 bytes.
#line 1 "ENTRY_105ad2b0"

void __fastcall FUN_105ad2b0(int *param_1)

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


// Reference entry 105ad820; body size 21 bytes.
#line 1 "ENTRY_105ad820"

SCStr * __stdcall FUN_105ad820(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("newwiz");
  return (SCStr *)(param_1);
}


// Reference entry 105af180; body size 44 bytes.
#line 1 "ENTRY_105af180"

void __fastcall FUN_105af180(int param_1)

{
  if (*(int *)(param_1 + 0xb0) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0xb0));
    *(undefined4*)(param_1 + 0xb4) = (undefined4)(0);
    *(undefined4*)(param_1 + 0xb0) = (undefined4)(0);
  }
  return;
}


// Reference entry 105b15b0; body size 41 bytes.
#line 1 "ENTRY_105b15b0"

undefined4 * __thiscall Recovered_Bulk::FUN_105b15b0(int *param_2)
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


// Reference entry 105b15f0; body size 41 bytes.
#line 1 "ENTRY_105b15f0"

undefined4 * __thiscall Recovered_Bulk::FUN_105b15f0(int *param_2)
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


// Reference entry 105b1d20; body size 19 bytes.
#line 1 "ENTRY_105b1d20"

void __fastcall FUN_105b1d20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 105b1e90; body size 33 bytes.
#line 1 "ENTRY_105b1e90"

void __fastcall FUN_105b1e90(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 105b1ec0; body size 33 bytes.
#line 1 "ENTRY_105b1ec0"

void __fastcall FUN_105b1ec0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 105b1f50; body size 33 bytes.
#line 1 "ENTRY_105b1f50"

void __fastcall FUN_105b1f50(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 105b1f80; body size 33 bytes.
#line 1 "ENTRY_105b1f80"

void __fastcall FUN_105b1f80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 105b2350; body size 18 bytes.
#line 1 "ENTRY_105b2350"

void __fastcall FUN_105b2350(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 105b2390; body size 18 bytes.
#line 1 "ENTRY_105b2390"

void __fastcall FUN_105b2390(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 105b2780; body size 45 bytes.
#line 1 "ENTRY_105b2780"

undefined4 * __thiscall Recovered_Bulk::FUN_105b2780(byte param_2)
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


// Reference entry 105b27c0; body size 60 bytes.
#line 1 "ENTRY_105b27c0"

int __thiscall Recovered_Bulk::FUN_105b27c0(byte param_2)
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


// Reference entry 105b2810; body size 60 bytes.
#line 1 "ENTRY_105b2810"

int __thiscall Recovered_Bulk::FUN_105b2810(byte param_2)
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


// Reference entry 105b2860; body size 45 bytes.
#line 1 "ENTRY_105b2860"

undefined4 * __thiscall Recovered_Bulk::FUN_105b2860(byte param_2)
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


// Reference entry 105b28a0; body size 35 bytes.
#line 1 "ENTRY_105b28a0"

undefined4 __thiscall Recovered_Bulk::FUN_105b28a0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105b1fd0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa0);
  }
  return (undefined4)(param_1);
}


// Reference entry 105b28d0; body size 33 bytes.
#line 1 "ENTRY_105b28d0"

undefined4 * __thiscall Recovered_Bulk::FUN_105b28d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105b29a0; body size 19 bytes.
#line 1 "ENTRY_105b29a0"

void __thiscall Recovered_Bulk::FUN_105b29a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 105b2a80; body size 58 bytes.
#line 1 "ENTRY_105b2a80"

void __thiscall Recovered_Bulk::FUN_105b2a80(char param_2)
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


// Reference entry 105b2ad0; body size 21 bytes.
#line 1 "ENTRY_105b2ad0"

void __thiscall Recovered_Bulk::FUN_105b2ad0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 105b2af0; body size 21 bytes.
#line 1 "ENTRY_105b2af0"

void __thiscall Recovered_Bulk::FUN_105b2af0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 105b2b10; body size 21 bytes.
#line 1 "ENTRY_105b2b10"

void __thiscall Recovered_Bulk::FUN_105b2b10(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 105b2b30; body size 58 bytes.
#line 1 "ENTRY_105b2b30"

void __thiscall Recovered_Bulk::FUN_105b2b30(char param_2)
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


// Reference entry 105b2b80; body size 37 bytes.
#line 1 "ENTRY_105b2b80"

void __thiscall Recovered_Bulk::FUN_105b2b80(undefined4 *param_2)
{
  int param_1 = (int )this;
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 105b2cd0; body size 39 bytes.
#line 1 "ENTRY_105b2cd0"

void __thiscall Recovered_Bulk::FUN_105b2cd0(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 105b2dd0; body size 19 bytes.
#line 1 "ENTRY_105b2dd0"

void __thiscall Recovered_Bulk::FUN_105b2dd0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 105b2f30; body size 33 bytes.
#line 1 "ENTRY_105b2f30"

void __fastcall FUN_105b2f30(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 105b2f60; body size 33 bytes.
#line 1 "ENTRY_105b2f60"

void __fastcall FUN_105b2f60(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 105b32d0; body size 61 bytes.
#line 1 "ENTRY_105b32d0"

void __thiscall Recovered_Bulk::FUN_105b32d0(int *param_2)
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


// Reference entry 105b3420; body size 35 bytes.
#line 1 "ENTRY_105b3420"

void __thiscall Recovered_Bulk::FUN_105b3420(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0x3c), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 105b3450; body size 20 bytes.
#line 1 "ENTRY_105b3450"

SCStr * __thiscall Recovered_Bulk::FUN_105b3450(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x3c));
  return (SCStr *)(param_2);
}


// Reference entry 105b3470; body size 20 bytes.
#line 1 "ENTRY_105b3470"

SCStr * __thiscall Recovered_Bulk::FUN_105b3470(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x40));
  return (SCStr *)(param_2);
}


// Reference entry 105b34b0; body size 47 bytes.
#line 1 "ENTRY_105b34b0"

undefined4 __fastcall FUN_105b34b0(int param_1)

{
  char cVar1;
  
  if ((*(int **)(param_1 + 0x60) != (int *)((0x0))) &&
     (cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x60) + 0x1c))(), 0), cVar1 != '\0')) {
    return (undefined4)(1);
  }
  if ((*(int **)(param_1 + 0x68) != (int *)((0x0))) &&
     (cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x68) + 0x1c))(), 0), cVar1 != '\0')) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 105b3650; body size 20 bytes.
#line 1 "ENTRY_105b3650"

SCStr * __thiscall Recovered_Bulk::FUN_105b3650(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x54));
  return (SCStr *)(param_2);
}


// Reference entry 105b3670; body size 20 bytes.
#line 1 "ENTRY_105b3670"

SCStr * __thiscall Recovered_Bulk::FUN_105b3670(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x58));
  return (SCStr *)(param_2);
}


// Reference entry 105b36a0; body size 18 bytes.
#line 1 "ENTRY_105b36a0"

int __fastcall FUN_105b36a0(int param_1)

{
  char *pcVar1;
  uint3 uVar2;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x44), 0);
  uVar2 = (uint3)((uint3)((uint)pcVar1 >> 8));
  if (((char *)(pcVar1) != (char *)(0x0)) && (*pcVar1 != (char)(('\0')))) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 105b4990; body size 19 bytes.
#line 1 "ENTRY_105b4990"

int __fastcall FUN_105b4990(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x4c));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 2) && (iVar1 != 3)) {
    return (int)((uint)uVar2 << 8);
  }
  return (int)(((uint)(uVar2) << 8 | (uint)(1)));
}


// Reference entry 105b4be0; body size 49 bytes.
#line 1 "ENTRY_105b4be0"

void __fastcall FUN_105b4be0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  char cVar1;
  SCStr aSStack_18 [4];
  int iStack_14;
  undefined4 uStack_10;
  
  uStack_10 = (undefined4)(0x105b4bef);
  cVar1 = (char)(thunk_FUN_105b4460(), 0);
  if (cVar1 != '\0') {
    uStack_10 = (undefined4)(0);
    iStack_14 = (int)(param_1 + -0xc);
    ((SCStr *)((uint)&aSStack_18))->int_allocRep("SCIHouseholdManager:onCurrentHouseholdChanged");
    thunk_FUN_103d63d0();
  }
  return;
}


// Reference entry 105b4c50; body size 36 bytes.
#line 1 "ENTRY_105b4c50"

void __fastcall FUN_105b4c50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -0xc);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIHouseholdManager:onUpdatingZPs");
  thunk_FUN_103d63d0();
  return;
}


// Reference entry 105b4ca0; body size 36 bytes.
#line 1 "ENTRY_105b4ca0"

void __fastcall FUN_105b4ca0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -0xc);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIHouseholdManager:onZPUpdateComplete");
  thunk_FUN_103d63d0();
  return;
}


// Reference entry 105b4ed0; body size 37 bytes.
#line 1 "ENTRY_105b4ed0"

void __stdcall FUN_105b4ed0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10c66510(0x14,param_2), 0);
  if (cVar1 != '\0') {
    thunk_FUN_105b3de0(param_1);
  }
  return;
}


// Reference entry 105b5ef0; body size 46 bytes.
#line 1 "ENTRY_105b5ef0"

void __stdcall FUN_105b5ef0(int param_1,char param_2)

{
  undefined4 uVar1;
  
  if (param_2 != '\0') {
    uVar1 = (undefined4)(thunk_FUN_110828b0(), 0);
    thunk_FUN_105b36c0(uVar1);
  }
  if (param_1 != 0) {
    thunk_FUN_103d61d0(param_1,0);
  }
  return;
}


// Reference entry 105b5f30; body size 39 bytes.
#line 1 "ENTRY_105b5f30"

void __stdcall FUN_105b5f30(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_110828b0(), 0);
  thunk_FUN_105b36c0(uVar1);
  if (param_1 != 0) {
    thunk_FUN_103d61d0(param_1,0);
  }
  return;
}


// Reference entry 105b5f60; body size 23 bytes.
#line 1 "ENTRY_105b5f60"

void __stdcall FUN_105b5f60(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 105b6ce0; body size 33 bytes.
#line 1 "ENTRY_105b6ce0"

void __thiscall Recovered_Bulk::FUN_105b6ce0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_105b6d40(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x34);
  return;
}


// Reference entry 105b6d10; body size 33 bytes.
#line 1 "ENTRY_105b6d10"

void __thiscall Recovered_Bulk::FUN_105b6d10(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_105b6da0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 105b77f0; body size 59 bytes.
#line 1 "ENTRY_105b77f0"

void __thiscall Recovered_Bulk::FUN_105b77f0(undefined4 *param_2)
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
  thunk_FUN_105b6820(puVar1,param_2);
  return;
}


// Reference entry 105b7840; body size 59 bytes.
#line 1 "ENTRY_105b7840"

void __thiscall Recovered_Bulk::FUN_105b7840(undefined4 *param_2)
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
  thunk_FUN_105b6a20(puVar1,param_2);
  return;
}


// Reference entry 105b7910; body size 55 bytes.
#line 1 "ENTRY_105b7910"

void __thiscall Recovered_Bulk::FUN_105b7910(int *param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  undefined1 local_8 [8];
  
  uVar1 = (uint)(((SCStr *)(param_3))->hash(), 0);
  iVar2 = (int)(thunk_FUN_10117000((uint)&local_8,param_3,uVar1), 0);
  iVar2 = (int)(*(int *)(iVar2 + 4));
  if (iVar2 == 0) {
    iVar2 = (int)(*(int *)(param_1 + 4));
  }
  *param_2 = (int)(iVar2);
  return;
}


// Reference entry 105b8170; body size 24 bytes.
#line 1 "ENTRY_105b8170"

undefined4 * __thiscall Recovered_Bulk::FUN_105b8170(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105b8210; body size 48 bytes.
#line 1 "ENTRY_105b8210"

undefined4 * __fastcall FUN_105b8210(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x34), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 105b8250; body size 48 bytes.
#line 1 "ENTRY_105b8250"

undefined4 * __fastcall FUN_105b8250(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 105b9b50; body size 60 bytes.
#line 1 "ENTRY_105b9b50"

void __fastcall FUN_105b9b50(int *param_1)

{
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


// Reference entry 105b9bb0; body size 19 bytes.
#line 1 "ENTRY_105b9bb0"

void __fastcall FUN_105b9bb0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x34);
  }
  return;
}


// Reference entry 105b9be0; body size 28 bytes.
#line 1 "ENTRY_105b9be0"

void __fastcall FUN_105b9be0(int *param_1)

{
  thunk_FUN_105b6d40(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x34);
  return;
}


// Reference entry 105b9c10; body size 28 bytes.
#line 1 "ENTRY_105b9c10"

void __fastcall FUN_105b9c10(int *param_1)

{
  thunk_FUN_105b6da0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 105b9c40; body size 38 bytes.
#line 1 "ENTRY_105b9c40"

void __fastcall FUN_105b9c40(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_105b9d30();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x34);
  }
  return;
}


// Reference entry 105b9c70; body size 19 bytes.
#line 1 "ENTRY_105b9c70"

void __fastcall FUN_105b9c70(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x34);
  }
  return;
}


// Reference entry 105b9c90; body size 17 bytes.
#line 1 "ENTRY_105b9c90"

void __fastcall FUN_105b9c90(undefined4 *param_1)

{
  thunk_FUN_105b63f0(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 105b9cb0; body size 17 bytes.
#line 1 "ENTRY_105b9cb0"

void __fastcall FUN_105b9cb0(undefined4 *param_1)

{
  thunk_FUN_105b6490(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 105b9cd0; body size 28 bytes.
#line 1 "ENTRY_105b9cd0"

void __fastcall FUN_105b9cd0(int *param_1)

{
  thunk_FUN_105b6d40(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x34);
  return;
}


// Reference entry 105b9d00; body size 28 bytes.
#line 1 "ENTRY_105b9d00"

void __fastcall FUN_105b9d00(int *param_1)

{
  thunk_FUN_105b6da0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 105ba340; body size 38 bytes.
#line 1 "ENTRY_105ba340"

void __fastcall FUN_105ba340(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RFileTransferDownloadAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RFileTransferDownloadAIOOp);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  thunk_FUN_11261f10();
  return;
}


// Reference entry 105ba3e0; body size 18 bytes.
#line 1 "ENTRY_105ba3e0"

void __fastcall FUN_105ba3e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  thunk_FUN_111c0a80();
  return;
}


// Reference entry 105ba400; body size 18 bytes.
#line 1 "ENTRY_105ba400"

void __fastcall FUN_105ba400(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
  thunk_FUN_111c0a80();
  return;
}


// Reference entry 105ba4a0; body size 48 bytes.
#line 1 "ENTRY_105ba4a0"

void __fastcall FUN_105ba4a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SetupFileTransferDownloadOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_SetupFileTransferDownloadOp);
  thunk_FUN_105b9f10();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  thunk_FUN_111c0a80();
  return;
}


// Reference entry 105ba4e0; body size 48 bytes.
#line 1 "ENTRY_105ba4e0"

void __fastcall FUN_105ba4e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SetupFileTransferUploadOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_SetupFileTransferUploadOp);
  thunk_FUN_105ba0d0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
  thunk_FUN_111c0a80();
  return;
}


// Reference entry 105ba6d0; body size 38 bytes.
#line 1 "ENTRY_105ba6d0"

undefined4 * __thiscall Recovered_Bulk::FUN_105ba6d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105ba700; body size 38 bytes.
#line 1 "ENTRY_105ba700"

undefined4 * __thiscall Recovered_Bulk::FUN_105ba700(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105ba7b0; body size 32 bytes.
#line 1 "ENTRY_105ba7b0"

undefined4 __thiscall Recovered_Bulk::FUN_105ba7b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105b9a00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 105ba900; body size 32 bytes.
#line 1 "ENTRY_105ba900"

undefined4 __thiscall Recovered_Bulk::FUN_105ba900(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105b9d30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4)(param_1);
}


// Reference entry 105ba9b0; body size 35 bytes.
#line 1 "ENTRY_105ba9b0"

undefined4 __thiscall Recovered_Bulk::FUN_105ba9b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105b9f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6544);
  }
  return (undefined4)(param_1);
}


// Reference entry 105ba9e0; body size 35 bytes.
#line 1 "ENTRY_105ba9e0"

undefined4 __thiscall Recovered_Bulk::FUN_105ba9e0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6274);
  }
  return (undefined4)(param_1);
}


// Reference entry 105baa10; body size 61 bytes.
#line 1 "ENTRY_105baa10"

undefined4 * __thiscall Recovered_Bulk::FUN_105baa10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RFileTransferDownloadAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RFileTransferDownloadAIOOp);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105baa60; body size 32 bytes.
#line 1 "ENTRY_105baa60"

undefined4 __thiscall Recovered_Bulk::FUN_105baa60(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105ba370();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4)(param_1);
}


// Reference entry 105baa90; body size 48 bytes.
#line 1 "ENTRY_105baa90"

undefined4 * __thiscall Recovered_Bulk::FUN_105baa90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  thunk_FUN_111c0a80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,&DAT_00004494);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105baad0; body size 48 bytes.
#line 1 "ENTRY_105baad0"

undefined4 * __thiscall Recovered_Bulk::FUN_105baad0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
  thunk_FUN_111c0a80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x4490);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105bab10; body size 45 bytes.
#line 1 "ENTRY_105bab10"

undefined4 * __thiscall Recovered_Bulk::FUN_105bab10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpFileDownload);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpFileDownload);
  thunk_FUN_105b9a00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105bacf0; body size 25 bytes.
#line 1 "ENTRY_105bacf0"

void __fastcall FUN_105bacf0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x34), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 105baf20; body size 20 bytes.
#line 1 "ENTRY_105baf20"

void __thiscall Recovered_Bulk::FUN_105baf20(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105b63f0(param_2,param_3,param_1);
  return;
}


// Reference entry 105baf40; body size 20 bytes.
#line 1 "ENTRY_105baf40"

void __thiscall Recovered_Bulk::FUN_105baf40(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105b6490(param_2,param_3,param_1);
  return;
}


// Reference entry 105baf60; body size 36 bytes.
#line 1 "ENTRY_105baf60"

void __stdcall FUN_105baf60(undefined4 *param_1,undefined4 *param_2)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 4) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 105bba00; body size 55 bytes.
#line 1 "ENTRY_105bba00"

void __fastcall FUN_105bba00(int param_1)

{
  int *piVar1;
  
  *(undefined1*)(param_1 + 0x24) = (undefined1)(0);
  if (*(int *)(param_1 + 0x1c) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x20), 0);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
      *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  }
  return;
}


// Reference entry 105bc920; body size 48 bytes.
#line 1 "ENTRY_105bc920"

void __fastcall FUN_105bc920(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc), 0);
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 8), 0);
  if ((undefined4 *)((puVar2)) != (undefined4 *)(puVar1)) {
    do {
      (**(code **)*puVar2)(0);
      puVar2 = (undefined4 *)(puVar2 + 4);
    } while ((undefined4 *)((puVar2)) != (undefined4 *)(puVar1));
    *(undefined4*)(param_1 + 0xc) = (undefined4)(*(undefined4 *)(param_1 + 8));
    return;
  }
  *(undefined4**)(param_1 + 0xc) = (undefined4 *)(puVar2);
  return;
}


// Reference entry 105bc960; body size 47 bytes.
#line 1 "ENTRY_105bc960"

void __fastcall FUN_105bc960(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
  puVar2 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)((puVar2)) != (undefined4 *)(puVar1)) {
    do {
      (**(code **)*puVar2)(0);
      puVar2 = (undefined4 *)(puVar2 + 4);
    } while ((undefined4 *)((puVar2)) != (undefined4 *)(puVar1));
    param_1[1] = (int)(*param_1);
    return;
  }
  param_1[1] = (int)((int)puVar2);
  return;
}


// Reference entry 105bcf50; body size 60 bytes.
#line 1 "ENTRY_105bcf50"

void __stdcall FUN_105bcf50(int param_1,int param_2)

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


// Reference entry 105bcfa0; body size 60 bytes.
#line 1 "ENTRY_105bcfa0"

void __stdcall FUN_105bcfa0(int param_1,int param_2)

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


// Reference entry 105bcff0; body size 56 bytes.
#line 1 "ENTRY_105bcff0"

void __stdcall FUN_105bcff0(int param_1,int param_2)

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


// Reference entry 105bd190; body size 35 bytes.
#line 1 "ENTRY_105bd190"

void __stdcall FUN_105bd190(undefined4 param_1)

{
  thunk_FUN_1125b030(param_1,0);
  thunk_FUN_111c14c0(param_1);
  return;
}


// Reference entry 105bd2e0; body size 21 bytes.
#line 1 "ENTRY_105bd2e0"

char * __fastcall FUN_105bd2e0(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x6120), 0);
  if (((char *)(pcVar1) == (char *)(0x0)) || (*pcVar1 == (char)(('\0')))) {
    pcVar1 = (char *)("");
  }
  return (char *)(pcVar1);
}


// Reference entry 105bd300; body size 60 bytes.
#line 1 "ENTRY_105bd300"

int __thiscall Recovered_Bulk::FUN_105bd300(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_111c1710(param_2), 0);
  if ((*(char *)(param_1 + 0xa9d8) != '\0') || (param_2 = (undefined4)(1), iVar1 != 0)) {
    param_2 = (undefined4)(0);
  }
  thunk_FUN_105bc9a0(param_2);
  return (int)(iVar1);
}


// Reference entry 105be8d0; body size 17 bytes.
#line 1 "ENTRY_105be8d0"

undefined1 * __fastcall FUN_105be8d0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0xa5ac) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0xa5ac), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 105be910; body size 17 bytes.
#line 1 "ENTRY_105be910"

undefined1 * __fastcall FUN_105be910(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0xa5a8) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0xa5a8), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 105bee40; body size 21 bytes.
#line 1 "ENTRY_105bee40"

SCStr * __stdcall FUN_105bee40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SetupProductAssets");
  return (SCStr *)(param_1);
}


// Reference entry 105befa0; body size 22 bytes.
#line 1 "ENTRY_105befa0"

SCStr * __thiscall Recovered_Bulk::FUN_105befa0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->int_allocRep(*(char **)(*(int *)(param_1 + 0x18) + 0x38));
  return (SCStr *)(param_2);
}


// Reference entry 105befc0; body size 17 bytes.
#line 1 "ENTRY_105befc0"

undefined1 * __fastcall FUN_105befc0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0xa5bc) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0xa5bc), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 105bf0d0; body size 21 bytes.
#line 1 "ENTRY_105bf0d0"

SCStr * __stdcall FUN_105bf0d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 105bfbb0; body size 32 bytes.
#line 1 "ENTRY_105bfbb0"

undefined4 FUN_105bfbb0(undefined4 param_1)

{
  switch(param_1) {
  case 0x16:
  case 0x17:
  case 0x1d:
  case 0x23:
  case 0x37:
    return (undefined4)(1);
  default:
    return (undefined4)(0);
  }
}


// Reference entry 105bfe00; body size 63 bytes.
#line 1 "ENTRY_105bfe00"

undefined4 FUN_105bfe00(void)

{
  int iVar1;
  int iVar2;
  
  thunk_FUN_105ad910();
  iVar1 = (int)(thunk_FUN_106dc530(), 0);
  iVar2 = (int)(thunk_FUN_1083fac0(), 0);
  if (iVar1 != iVar2) {
    thunk_FUN_105ad910();
    iVar1 = (int)(thunk_FUN_106dc530(), 0);
    iVar2 = (int)(thunk_FUN_109e1620(), 0);
    if (iVar1 != iVar2) {
      return (undefined4)(0);
    }
  }
  return (undefined4)(1);
}


// Reference entry 105c0090; body size 25 bytes.
#line 1 "ENTRY_105c0090"

undefined4 FUN_105c0090(int param_1)

{
  if (((param_1 != 0x16) && (param_1 != 0x20)) && (param_1 != 0x2c)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 105c0190; body size 29 bytes.
#line 1 "ENTRY_105c0190"

undefined4 FUN_105c0190(undefined4 param_1)

{
  switch(param_1) {
  default:
    return (undefined4)(0);
  case 5:
  case 7:
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1a:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x32:
  case 0x37:
  case 0x3a:
  case 0x3b:
  case 0x3c:
    return (undefined4)(1);
  }
}


// Reference entry 105c04a0; body size 59 bytes.
#line 1 "ENTRY_105c04a0"

void __thiscall Recovered_Bulk::FUN_105c04a0(undefined4 *param_2)
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
  thunk_FUN_105b6820(puVar1,param_2);
  return;
}


// Reference entry 105c04f0; body size 59 bytes.
#line 1 "ENTRY_105c04f0"

void __thiscall Recovered_Bulk::FUN_105c04f0(undefined4 *param_2)
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
  thunk_FUN_105b6a20(puVar1,param_2);
  return;
}


// Reference entry 105c2d80; body size 57 bytes.
#line 1 "ENTRY_105c2d80"

undefined4 __thiscall Recovered_Bulk::FUN_105c2d80(void *param_2,uint param_3)
{
  int param_1 = (int )this;
  size_t sVar1;
  
  if ((param_3 == 0) && ((void *)(param_2) == (void *)(0x0))) {
    return (undefined4)(1);
  }
  if ((*(FILE **)(param_1 + 0x6110) != (FILE *)((0x0))) &&
     (sVar1 = (size_t)(fwrite(param_2,1,param_3,*(FILE **)(param_1 + 0x6110)), 0), param_3 <= sVar1)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 105c32c0; body size 41 bytes.
#line 1 "ENTRY_105c32c0"

undefined4 * __thiscall Recovered_Bulk::FUN_105c32c0(int *param_2)
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


// Reference entry 105c3340; body size 41 bytes.
#line 1 "ENTRY_105c3340"

undefined4 * __thiscall Recovered_Bulk::FUN_105c3340(int *param_2)
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


// Reference entry 105c3380; body size 41 bytes.
#line 1 "ENTRY_105c3380"

undefined4 * __thiscall Recovered_Bulk::FUN_105c3380(int *param_2)
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


// Reference entry 105c3cd0; body size 60 bytes.
#line 1 "ENTRY_105c3cd0"

void __fastcall FUN_105c3cd0(int *param_1)

{
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


// Reference entry 105c3d30; body size 60 bytes.
#line 1 "ENTRY_105c3d30"

void __fastcall FUN_105c3d30(int *param_1)

{
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


// Reference entry 105c3d90; body size 60 bytes.
#line 1 "ENTRY_105c3d90"

void __fastcall FUN_105c3d90(int *param_1)

{
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


// Reference entry 105c3df0; body size 60 bytes.
#line 1 "ENTRY_105c3df0"

void __fastcall FUN_105c3df0(int *param_1)

{
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


// Reference entry 105c3e50; body size 60 bytes.
#line 1 "ENTRY_105c3e50"

void __fastcall FUN_105c3e50(int *param_1)

{
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


// Reference entry 105c4a10; body size 61 bytes.
#line 1 "ENTRY_105c4a10"

void __thiscall Recovered_Bulk::FUN_105c4a10(int *param_2)
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


// Reference entry 105c66c0; body size 35 bytes.
#line 1 "ENTRY_105c66c0"

SCStr * __stdcall FUN_105c66c0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1f6c,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 105c66f0; body size 35 bytes.
#line 1 "ENTRY_105c66f0"

SCStr * __stdcall FUN_105c66f0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1f80,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 105c6720; body size 35 bytes.
#line 1 "ENTRY_105c6720"

SCStr * __stdcall FUN_105c6720(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x209b,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 105c6840; body size 35 bytes.
#line 1 "ENTRY_105c6840"

SCStr * __stdcall FUN_105c6840(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x20ea,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 105c69d0; body size 35 bytes.
#line 1 "ENTRY_105c69d0"

SCStr * __stdcall FUN_105c69d0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x20ea,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 105c7190; body size 35 bytes.
#line 1 "ENTRY_105c7190"

SCStr * __stdcall FUN_105c7190(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x81,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 105c71c0; body size 20 bytes.
#line 1 "ENTRY_105c71c0"

SCStr * __thiscall Recovered_Bulk::FUN_105c71c0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x1c));
  return (SCStr *)(param_2);
}


// Reference entry 105c75d0; body size 35 bytes.
#line 1 "ENTRY_105c75d0"

SCStr * __stdcall FUN_105c75d0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x209b,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 105c7bd0; body size 25 bytes.
#line 1 "ENTRY_105c7bd0"

int * __thiscall Recovered_Bulk::FUN_105c7bd0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x14), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 105c93d0; body size 63 bytes.
#line 1 "ENTRY_105c93d0"

void __stdcall FUN_105c93d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 105c9420; body size 63 bytes.
#line 1 "ENTRY_105c9420"

void __stdcall FUN_105c9420(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 105c97a0; body size 21 bytes.
#line 1 "ENTRY_105c97a0"

SCStr * __stdcall FUN_105c97a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("ChangeEmailWizard");
  return (SCStr *)(param_1);
}


// Reference entry 105cd280; body size 30 bytes.
#line 1 "ENTRY_105cd280"

void __thiscall Recovered_Bulk::FUN_105cd280(int param_2)
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


// Reference entry 105cd2b0; body size 30 bytes.
#line 1 "ENTRY_105cd2b0"

void __thiscall Recovered_Bulk::FUN_105cd2b0(int param_2)
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


// Reference entry 105cd2e0; body size 30 bytes.
#line 1 "ENTRY_105cd2e0"

void __thiscall Recovered_Bulk::FUN_105cd2e0(int param_2)
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


// Reference entry 105ce0f0; body size 41 bytes.
#line 1 "ENTRY_105ce0f0"

undefined4 * __thiscall Recovered_Bulk::FUN_105ce0f0(int *param_2)
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


// Reference entry 105ce130; body size 41 bytes.
#line 1 "ENTRY_105ce130"

undefined4 * __thiscall Recovered_Bulk::FUN_105ce130(int *param_2)
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


// Reference entry 105ce170; body size 41 bytes.
#line 1 "ENTRY_105ce170"

undefined4 * __thiscall Recovered_Bulk::FUN_105ce170(int *param_2)
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


// Reference entry 105ce1d0; body size 41 bytes.
#line 1 "ENTRY_105ce1d0"

undefined4 * __thiscall Recovered_Bulk::FUN_105ce1d0(int *param_2)
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


// Reference entry 105ce210; body size 41 bytes.
#line 1 "ENTRY_105ce210"

undefined4 * __thiscall Recovered_Bulk::FUN_105ce210(int *param_2)
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


// Reference entry 105ce250; body size 24 bytes.
#line 1 "ENTRY_105ce250"

undefined4 * __thiscall Recovered_Bulk::FUN_105ce250(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105ce270; body size 24 bytes.
#line 1 "ENTRY_105ce270"

undefined4 * __thiscall Recovered_Bulk::FUN_105ce270(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d25e0; body size 60 bytes.
#line 1 "ENTRY_105d25e0"

void __fastcall FUN_105d25e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  thunk_FUN_105ca4f0(*puVar1,param_1[3],puVar1);
  param_1[3] = (undefined4)(*puVar1);
  thunk_FUN_105d2c90();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 105d2630; body size 19 bytes.
#line 1 "ENTRY_105d2630"

void __fastcall FUN_105d2630(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 105d2650; body size 19 bytes.
#line 1 "ENTRY_105d2650"

void __fastcall FUN_105d2650(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 105d2bf0; body size 60 bytes.
#line 1 "ENTRY_105d2bf0"

void __fastcall FUN_105d2bf0(int *param_1)

{
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


// Reference entry 105d2c50; body size 17 bytes.
#line 1 "ENTRY_105d2c50"

void __fastcall FUN_105d2c50(undefined4 *param_1)

{
  thunk_FUN_105ca4f0(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 105d2c70; body size 17 bytes.
#line 1 "ENTRY_105d2c70"

void __fastcall FUN_105d2c70(undefined4 *param_1)

{
  thunk_FUN_104cb6d0(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 105d4c40; body size 38 bytes.
#line 1 "ENTRY_105d4c40"

undefined4 * __thiscall Recovered_Bulk::FUN_105d4c40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d4c70; body size 38 bytes.
#line 1 "ENTRY_105d4c70"

undefined4 * __thiscall Recovered_Bulk::FUN_105d4c70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d4ca0; body size 38 bytes.
#line 1 "ENTRY_105d4ca0"

undefined4 * __thiscall Recovered_Bulk::FUN_105d4ca0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d4cd0; body size 38 bytes.
#line 1 "ENTRY_105d4cd0"

undefined4 * __thiscall Recovered_Bulk::FUN_105d4cd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d4d00; body size 38 bytes.
#line 1 "ENTRY_105d4d00"

undefined4 * __thiscall Recovered_Bulk::FUN_105d4d00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d4d30; body size 38 bytes.
#line 1 "ENTRY_105d4d30"

undefined4 * __thiscall Recovered_Bulk::FUN_105d4d30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d4d60; body size 38 bytes.
#line 1 "ENTRY_105d4d60"

undefined4 * __thiscall Recovered_Bulk::FUN_105d4d60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d4d90; body size 38 bytes.
#line 1 "ENTRY_105d4d90"

undefined4 * __thiscall Recovered_Bulk::FUN_105d4d90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d4dc0; body size 38 bytes.
#line 1 "ENTRY_105d4dc0"

undefined4 * __thiscall Recovered_Bulk::FUN_105d4dc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d4e60; body size 45 bytes.
#line 1 "ENTRY_105d4e60"

undefined4 * __thiscall Recovered_Bulk::FUN_105d4e60(byte param_2)
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


// Reference entry 105d4ea0; body size 45 bytes.
#line 1 "ENTRY_105d4ea0"

undefined4 * __thiscall Recovered_Bulk::FUN_105d4ea0(byte param_2)
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


// Reference entry 105d4ee0; body size 32 bytes.
#line 1 "ENTRY_105d4ee0"

undefined4 __thiscall Recovered_Bulk::FUN_105d4ee0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105d2670();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 105d5230; body size 58 bytes.
#line 1 "ENTRY_105d5230"

undefined4 * __thiscall Recovered_Bulk::FUN_105d5230(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAISetAudioInputAttributesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAISetAudioInputAttributesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAISetAudioInputAttributesAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d5280; body size 58 bytes.
#line 1 "ENTRY_105d5280"

undefined4 * __thiscall Recovered_Bulk::FUN_105d5280(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAISetLineInLevelAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAISetLineInLevelAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAISetLineInLevelAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d52d0; body size 58 bytes.
#line 1 "ENTRY_105d52d0"

undefined4 * __thiscall Recovered_Bulk::FUN_105d52d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetPlayModeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetPlayModeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetPlayModeAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d5320; body size 58 bytes.
#line 1 "ENTRY_105d5320"

undefined4 * __thiscall Recovered_Bulk::FUN_105d5320(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetZoneAttributesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetZoneAttributesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetZoneAttributesAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe028);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d5370; body size 58 bytes.
#line 1 "ENTRY_105d5370"

undefined4 * __thiscall Recovered_Bulk::FUN_105d5370(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayRoomUUIDAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayRoomUUIDAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayRoomUUIDAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d53c0; body size 58 bytes.
#line 1 "ENTRY_105d53c0"

undefined4 * __thiscall Recovered_Bulk::FUN_105d53c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayVolumeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayVolumeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayVolumeAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d5410; body size 58 bytes.
#line 1 "ENTRY_105d5410"

undefined4 * __thiscall Recovered_Bulk::FUN_105d5410(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetUseAutoplayVolumeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetUseAutoplayVolumeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetUseAutoplayVolumeAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d5460; body size 58 bytes.
#line 1 "ENTRY_105d5460"

undefined4 * __thiscall Recovered_Bulk::FUN_105d5460(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpHTCSetIRRepeaterStateAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCSetIRRepeaterStateAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCSetIRRepeaterStateAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d54b0; body size 58 bytes.
#line 1 "ENTRY_105d54b0"

undefined4 * __thiscall Recovered_Bulk::FUN_105d54b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpHTCSetLEDFeedbackStateAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCSetLEDFeedbackStateAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCSetLEDFeedbackStateAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d5500; body size 58 bytes.
#line 1 "ENTRY_105d5500"

undefined4 * __thiscall Recovered_Bulk::FUN_105d5500(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetOutputFixedAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetOutputFixedAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetOutputFixedAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d5550; body size 58 bytes.
#line 1 "ENTRY_105d5550"

undefined4 * __thiscall Recovered_Bulk::FUN_105d5550(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetRoomCalibrationStatusAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetRoomCalibrationStatusAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetRoomCalibrationStatusAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d55a0; body size 38 bytes.
#line 1 "ENTRY_105d55a0"

undefined4 * __thiscall Recovered_Bulk::FUN_105d55a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAudioCompressionSelectAction);
  thunk_FUN_105d3a20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x4c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d5750; body size 45 bytes.
#line 1 "ENTRY_105d5750"

undefined4 * __thiscall Recovered_Bulk::FUN_105d5750(byte param_2)
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


// Reference entry 105d5ca0; body size 45 bytes.
#line 1 "ENTRY_105d5ca0"

undefined4 * __thiscall Recovered_Bulk::FUN_105d5ca0(byte param_2)
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


// Reference entry 105d5ce0; body size 33 bytes.
#line 1 "ENTRY_105d5ce0"

undefined4 * __thiscall Recovered_Bulk::FUN_105d5ce0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d5d10; body size 33 bytes.
#line 1 "ENTRY_105d5d10"

undefined4 * __thiscall Recovered_Bulk::FUN_105d5d10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d5fc0; body size 32 bytes.
#line 1 "ENTRY_105d5fc0"

undefined4 __thiscall Recovered_Bulk::FUN_105d5fc0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105d3a20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x44);
  }
  return (undefined4)(param_1);
}


// Reference entry 105d60e0; body size 45 bytes.
#line 1 "ENTRY_105d60e0"

undefined4 * __thiscall Recovered_Bulk::FUN_105d60e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRenderingControlSetRoomCalibrationStatus);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpRenderingControlSetRoomCalibrationStatus);
  thunk_FUN_105d2670();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d62e0; body size 45 bytes.
#line 1 "ENTRY_105d62e0"

undefined4 * __thiscall Recovered_Bulk::FUN_105d62e0(byte param_2)
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


// Reference entry 105d6400; body size 45 bytes.
#line 1 "ENTRY_105d6400"

undefined4 * __thiscall Recovered_Bulk::FUN_105d6400(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSearchHistoryToggleAction);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCSearchHistoryToggleAction);
  thunk_FUN_105d44d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d6710; body size 45 bytes.
#line 1 "ENTRY_105d6710"

undefined4 * __thiscall Recovered_Bulk::FUN_105d6710(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStaleSessionToggleAction);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCStaleSessionToggleAction);
  thunk_FUN_105d44d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105d6b20; body size 32 bytes.
#line 1 "ENTRY_105d6b20"

undefined4 __thiscall Recovered_Bulk::FUN_105d6b20(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105d44d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4)(param_1);
}


// Reference entry 105d6e70; body size 21 bytes.
#line 1 "ENTRY_105d6e70"

void __thiscall Recovered_Bulk::FUN_105d6e70(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 105d6e90; body size 20 bytes.
#line 1 "ENTRY_105d6e90"

void __thiscall Recovered_Bulk::FUN_105d6e90(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105ca4f0(param_2,param_3,param_1);
  return;
}


// Reference entry 105d6eb0; body size 22 bytes.
#line 1 "ENTRY_105d6eb0"

void __stdcall FUN_105d6eb0(unsigned int recovered_unused_stack_0)

{
  thunk_FUN_10eae090(0);
  return;
}


// Reference entry 105d8670; body size 61 bytes.
#line 1 "ENTRY_105d8670"

void __thiscall Recovered_Bulk::FUN_105d8670(int *param_2)
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


// Reference entry 105d86c0; body size 61 bytes.
#line 1 "ENTRY_105d86c0"

void __thiscall Recovered_Bulk::FUN_105d86c0(int *param_2)
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


// Reference entry 105d8710; body size 30 bytes.
#line 1 "ENTRY_105d8710"

void __thiscall Recovered_Bulk::FUN_105d8710(int param_2)
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


// Reference entry 105d8740; body size 30 bytes.
#line 1 "ENTRY_105d8740"

void __thiscall Recovered_Bulk::FUN_105d8740(int param_2)
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


// Reference entry 105d8770; body size 30 bytes.
#line 1 "ENTRY_105d8770"

void __thiscall Recovered_Bulk::FUN_105d8770(int param_2)
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


// Reference entry 105d8bc0; body size 16 bytes.
#line 1 "ENTRY_105d8bc0"

void __thiscall Recovered_Bulk::FUN_105d8bc0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(*(int *)(param_1 + -8) + 0x1c))(param_3);
  return;
}


// Reference entry 105d8f00; body size 24 bytes.
#line 1 "ENTRY_105d8f00"

void __fastcall FUN_105d8f00(undefined4 *param_1)

{
  thunk_FUN_105ca4f0(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 105dc0c0; body size 60 bytes.
#line 1 "ENTRY_105dc0c0"

void __stdcall FUN_105dc0c0(int param_1,int param_2)

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


// Reference entry 105dc140; body size 28 bytes.
#line 1 "ENTRY_105dc140"

void __fastcall FUN_105dc140(int *param_1)

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


// Reference entry 105dc170; body size 28 bytes.
#line 1 "ENTRY_105dc170"

void __fastcall FUN_105dc170(int *param_1)

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


// Reference entry 105dc1a0; body size 28 bytes.
#line 1 "ENTRY_105dc1a0"

void __fastcall FUN_105dc1a0(int *param_1)

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


// Reference entry 105dc1e0; body size 51 bytes.
#line 1 "ENTRY_105dc1e0"

int __thiscall Recovered_Bulk::FUN_105dc1e0(int param_2)
{
  int param_1 = (int )this;
  undefined2 uVar1;
  undefined1 *puVar2;
  
  if (param_2 == 0) {
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x70) != (undefined1 *)((0x0))) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x70), 0);
    }
    uVar1 = (undefined2)(thunk_FUN_112601e0(puVar2,*(undefined4 *)(param_1 + 0x6c),0), 0);
    *(undefined2*)(param_1 + 0x5c) = (undefined2)(uVar1);
  }
  return (int)(param_2);
}


// Reference entry 105dd4b0; body size 21 bytes.
#line 1 "ENTRY_105dd4b0"

SCStr * __stdcall FUN_105dd4b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("FactoryReset");
  return (SCStr *)(param_1);
}


// Reference entry 105dd4d0; body size 21 bytes.
#line 1 "ENTRY_105dd4d0"

SCStr * __stdcall FUN_105dd4d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("ForgetHHID");
  return (SCStr *)(param_1);
}


// Reference entry 105dd4f0; body size 21 bytes.
#line 1 "ENTRY_105dd4f0"

SCStr * __stdcall FUN_105dd4f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("OfflineHideDeviceSignInAction");
  return (SCStr *)(param_1);
}


// Reference entry 105dd520; body size 21 bytes.
#line 1 "ENTRY_105dd520"

SCStr * __stdcall FUN_105dd520(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategorySettings");
  return (SCStr *)(param_1);
}


// Reference entry 105dd540; body size 21 bytes.
#line 1 "ENTRY_105dd540"

SCStr * __stdcall FUN_105dd540(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategorySettings");
  return (SCStr *)(param_1);
}


// Reference entry 105dd560; body size 21 bytes.
#line 1 "ENTRY_105dd560"

SCStr * __stdcall FUN_105dd560(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategorySettings");
  return (SCStr *)(param_1);
}


// Reference entry 105dd590; body size 35 bytes.
#line 1 "ENTRY_105dd590"

SCStr * __stdcall FUN_105dd590(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x203b,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 105dd5d0; body size 20 bytes.
#line 1 "ENTRY_105dd5d0"

SCStr * __thiscall Recovered_Bulk::FUN_105dd5d0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x10));
  return (SCStr *)(param_2);
}


// Reference entry 105dd600; body size 35 bytes.
#line 1 "ENTRY_105dd600"

SCStr * __stdcall FUN_105dd600(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x22f6,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 105dd630; body size 35 bytes.
#line 1 "ENTRY_105dd630"

SCStr * __stdcall FUN_105dd630(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2011,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 105dd660; body size 20 bytes.
#line 1 "ENTRY_105dd660"

SCStr * __thiscall Recovered_Bulk::FUN_105dd660(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 105dd680; body size 21 bytes.
#line 1 "ENTRY_105dd680"

SCStr * __stdcall FUN_105dd680(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 105ddfd0; body size 20 bytes.
#line 1 "ENTRY_105ddfd0"

SCStr * __thiscall Recovered_Bulk::FUN_105ddfd0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 105de490; body size 21 bytes.
#line 1 "ENTRY_105de490"

SCStr * __stdcall FUN_105de490(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 105e28f0; body size 20 bytes.
#line 1 "ENTRY_105e28f0"

SCStr * __thiscall Recovered_Bulk::FUN_105e28f0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 105e3f70; body size 16 bytes.
#line 1 "ENTRY_105e3f70"

void __fastcall FUN_105e3f70(int param_1)

{
  if (*(int **)(param_1 + 0x58) != (int *)((0x0))) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x58) + 0xe4))();
    return;
  }
  return;
}


// Reference entry 105e74e0; body size 38 bytes.
#line 1 "ENTRY_105e74e0"

undefined4 __thiscall Recovered_Bulk::FUN_105e74e0(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("DesiredIRRepeaterState",0), 0);
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 105e7510; body size 38 bytes.
#line 1 "ENTRY_105e7510"

undefined4 __thiscall Recovered_Bulk::FUN_105e7510(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("LEDFeedbackState",0), 0);
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 105ee900; body size 33 bytes.
#line 1 "ENTRY_105ee900"

void __fastcall FUN_105ee900(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 105eefa0; body size 33 bytes.
#line 1 "ENTRY_105eefa0"

void __fastcall FUN_105eefa0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 105eefd0; body size 33 bytes.
#line 1 "ENTRY_105eefd0"

void __fastcall FUN_105eefd0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 105ef000; body size 33 bytes.
#line 1 "ENTRY_105ef000"

void __fastcall FUN_105ef000(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 105ef030; body size 18 bytes.
#line 1 "ENTRY_105ef030"

void __fastcall FUN_105ef030(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,8);
  }
  return;
}


// Reference entry 105ef050; body size 18 bytes.
#line 1 "ENTRY_105ef050"

void __fastcall FUN_105ef050(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,8);
  }
  return;
}


// Reference entry 105ef070; body size 18 bytes.
#line 1 "ENTRY_105ef070"

void __fastcall FUN_105ef070(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 105ef0b0; body size 18 bytes.
#line 1 "ENTRY_105ef0b0"

void __fastcall FUN_105ef0b0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 105ef0d0; body size 18 bytes.
#line 1 "ENTRY_105ef0d0"

void __fastcall FUN_105ef0d0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 105ef0f0; body size 18 bytes.
#line 1 "ENTRY_105ef0f0"

void __fastcall FUN_105ef0f0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x58);
  }
  return;
}


// Reference entry 105ef130; body size 18 bytes.
#line 1 "ENTRY_105ef130"

void __fastcall FUN_105ef130(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,8);
  }
  return;
}


// Reference entry 105ef150; body size 18 bytes.
#line 1 "ENTRY_105ef150"

void __fastcall FUN_105ef150(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,8);
  }
  return;
}


// Reference entry 105ef170; body size 18 bytes.
#line 1 "ENTRY_105ef170"

void __fastcall FUN_105ef170(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,8);
  }
  return;
}


// Reference entry 105ef190; body size 18 bytes.
#line 1 "ENTRY_105ef190"

void __fastcall FUN_105ef190(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,8);
  }
  return;
}


// Reference entry 105ef1b0; body size 18 bytes.
#line 1 "ENTRY_105ef1b0"

void __fastcall FUN_105ef1b0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 105ef1d0; body size 18 bytes.
#line 1 "ENTRY_105ef1d0"

void __fastcall FUN_105ef1d0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 105ef1f0; body size 18 bytes.
#line 1 "ENTRY_105ef1f0"

void __fastcall FUN_105ef1f0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x58);
  }
  return;
}


// Reference entry 105ef230; body size 18 bytes.
#line 1 "ENTRY_105ef230"

void __fastcall FUN_105ef230(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 105ef250; body size 18 bytes.
#line 1 "ENTRY_105ef250"

void __fastcall FUN_105ef250(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 105ef430; body size 47 bytes.
#line 1 "ENTRY_105ef430"

undefined4 * __thiscall Recovered_Bulk::FUN_105ef430(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_2);
  param_1[2] = (undefined4)(param_2[2]);
  thunk_FUN_105ef270(param_2 + 4);
  thunk_FUN_105f2210();
  return (undefined4 *)(param_1);
}


// Reference entry 105f0340; body size 35 bytes.
#line 1 "ENTRY_105f0340"

undefined4 __thiscall Recovered_Bulk::FUN_105f0340(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101a33f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4)(param_1);
}


// Reference entry 105f03f0; body size 60 bytes.
#line 1 "ENTRY_105f03f0"

int __thiscall Recovered_Bulk::FUN_105f03f0(byte param_2)
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


// Reference entry 105f07f0; body size 35 bytes.
#line 1 "ENTRY_105f07f0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f07f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  thunk_FUN_1027ee20(param_1 + 4);
  return (undefined4 *)(param_2);
}


// Reference entry 105f08c0; body size 19 bytes.
#line 1 "ENTRY_105f08c0"

void __thiscall Recovered_Bulk::FUN_105f08c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 105f0b80; body size 19 bytes.
#line 1 "ENTRY_105f0b80"

void __thiscall Recovered_Bulk::FUN_105f0b80(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 105f0ba0; body size 25 bytes.
#line 1 "ENTRY_105f0ba0"

void __thiscall Recovered_Bulk::FUN_105f0ba0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  param_2[2] = (undefined4)(uVar1);
  return;
}


// Reference entry 105f0e90; body size 33 bytes.
#line 1 "ENTRY_105f0e90"

void __thiscall Recovered_Bulk::FUN_105f0e90(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101a33f0();
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return;
}


// Reference entry 105f0ec0; body size 21 bytes.
#line 1 "ENTRY_105f0ec0"

void __thiscall Recovered_Bulk::FUN_105f0ec0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 105f0f60; body size 21 bytes.
#line 1 "ENTRY_105f0f60"

void __thiscall Recovered_Bulk::FUN_105f0f60(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 105f0f80; body size 58 bytes.
#line 1 "ENTRY_105f0f80"

void __thiscall Recovered_Bulk::FUN_105f0f80(char param_2)
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


// Reference entry 105f1160; body size 21 bytes.
#line 1 "ENTRY_105f1160"

void __thiscall Recovered_Bulk::FUN_105f1160(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 105f1180; body size 21 bytes.
#line 1 "ENTRY_105f1180"

void __thiscall Recovered_Bulk::FUN_105f1180(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return;
}


// Reference entry 105f11a0; body size 21 bytes.
#line 1 "ENTRY_105f11a0"

void __thiscall Recovered_Bulk::FUN_105f11a0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 105f1240; body size 21 bytes.
#line 1 "ENTRY_105f1240"

void __thiscall Recovered_Bulk::FUN_105f1240(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 105f12f0; body size 21 bytes.
#line 1 "ENTRY_105f12f0"

void __thiscall Recovered_Bulk::FUN_105f12f0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 105f1590; body size 42 bytes.
#line 1 "ENTRY_105f1590"

bool __thiscall Recovered_Bulk::FUN_105f1590(undefined4 *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2), 0);
    return (bool)(cVar1 == '\0');
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 105f15d0; body size 30 bytes.
#line 1 "ENTRY_105f15d0"

void __fastcall FUN_105f15d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  int iStack_8;
  
  piVar1 = (int *)(*(int **)(param_1 + 4), 0);
  iStack_8 = (int)(param_1);
  thunk_FUN_1034de20(&iStack_8);
  (**(code **)(*piVar1 + 0x2c))();
  return;
}


// Reference entry 105f1c50; body size 50 bytes.
#line 1 "ENTRY_105f1c50"

/* WARNING: Removing unreachable block (ram,0x105f1c6f) */

undefined4 FUN_105f1c50(void)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (char)(thunk_FUN_1034eaf0(), 0);
  if ((cVar1 != '\0') && (lVar2 = (longlong)(thunk_FUN_10348740(), 0), lVar2 < 0x4e21)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 105f1d10; body size 30 bytes.
#line 1 "ENTRY_105f1d10"

void __fastcall FUN_105f1d10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  int iStack_8;
  
  piVar1 = (int *)(*(int **)(param_1 + 4), 0);
  iStack_8 = (int)(param_1);
  thunk_FUN_1034d2f0(&iStack_8);
  (**(code **)(*piVar1 + 0x2c))();
  return;
}


// Reference entry 105f1e80; body size 58 bytes.
#line 1 "ENTRY_105f1e80"

void __thiscall Recovered_Bulk::FUN_105f1e80(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  uVar2 = (undefined4)(*(undefined4 *)(param_1 + 8));
  uVar3 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  param_2[3] = (undefined4)(uVar1);
  param_2[1] = (undefined4)(uVar3);
  param_2[2] = (undefined4)(uVar2);
  return;
}


// Reference entry 105f1ef0; body size 19 bytes.
#line 1 "ENTRY_105f1ef0"

void __thiscall Recovered_Bulk::FUN_105f1ef0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 105f1f50; body size 19 bytes.
#line 1 "ENTRY_105f1f50"

void __thiscall Recovered_Bulk::FUN_105f1f50(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 105f1f70; body size 25 bytes.
#line 1 "ENTRY_105f1f70"

void __thiscall Recovered_Bulk::FUN_105f1f70(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  param_2[2] = (undefined4)(uVar1);
  return;
}


// Reference entry 105f2a40; body size 33 bytes.
#line 1 "ENTRY_105f2a40"

void FUN_105f2a40(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x34) {
    thunk_FUN_105ff930();
  }
  return;
}


// Reference entry 105f4940; body size 30 bytes.
#line 1 "ENTRY_105f4940"

void __thiscall Recovered_Bulk::FUN_105f4940(int param_2)
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


// Reference entry 105f7de0; body size 24 bytes.
#line 1 "ENTRY_105f7de0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7de0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105f7e00; body size 24 bytes.
#line 1 "ENTRY_105f7e00"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7e00(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105febd0; body size 27 bytes.
#line 1 "ENTRY_105febd0"

void __fastcall FUN_105febd0(undefined4 *param_1)

{
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  return;
}


// Reference entry 105fec00; body size 27 bytes.
#line 1 "ENTRY_105fec00"

void __fastcall FUN_105fec00(undefined4 *param_1)

{
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  return;
}


// Reference entry 105fee90; body size 38 bytes.
#line 1 "ENTRY_105fee90"

void __fastcall FUN_105fee90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  return;
}


// Reference entry 105ff440; body size 60 bytes.
#line 1 "ENTRY_105ff440"

void __fastcall FUN_105ff440(int *param_1)

{
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


// Reference entry 105ff4a0; body size 60 bytes.
#line 1 "ENTRY_105ff4a0"

void __fastcall FUN_105ff4a0(int *param_1)

{
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


// Reference entry 105ff6e0; body size 38 bytes.
#line 1 "ENTRY_105ff6e0"

void __fastcall FUN_105ff6e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  return;
}


// Reference entry 105ff810; body size 33 bytes.
#line 1 "ENTRY_105ff810"

void __fastcall FUN_105ff810(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  for (iVar2 = (int)(*param_1); iVar2 != iVar1; iVar2 = iVar2 + 0x34) {
    thunk_FUN_105ff930();
  }
  return;
}


// Reference entry 105ff840; body size 34 bytes.
#line 1 "ENTRY_105ff840"

void __fastcall FUN_105ff840(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
  for (param_1 = (undefined4 *)((undefined4 *)*param_1);(undefined4 *)((param_1)) != (undefined4 *)(puVar1); param_1 = param_1 + 8) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 105ff870; body size 34 bytes.
#line 1 "ENTRY_105ff870"

void __fastcall FUN_105ff870(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
  for (param_1 = (undefined4 *)((undefined4 *)*param_1);(undefined4 *)((param_1)) != (undefined4 *)(puVar1); param_1 = param_1 + 8) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 105ff8a0; body size 34 bytes.
#line 1 "ENTRY_105ff8a0"

void __fastcall FUN_105ff8a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
  for (param_1 = (undefined4 *)((undefined4 *)*param_1);(undefined4 *)((param_1)) != (undefined4 *)(puVar1); param_1 = param_1 + 8) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 105ff8d0; body size 17 bytes.
#line 1 "ENTRY_105ff8d0"

void __fastcall FUN_105ff8d0(undefined4 *param_1)

{
  thunk_FUN_105f2b00(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 105ff8f0; body size 42 bytes.
#line 1 "ENTRY_105ff8f0"

void __fastcall FUN_105ff8f0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  for (iVar2 = (int)(*param_1); iVar2 != iVar1; iVar2 = iVar2 + 0x1c) {
    thunk_FUN_105a1d20();
    thunk_FUN_105a1c80();
  }
  return;
}


// Reference entry 10600240; body size 20 bytes.
#line 1 "ENTRY_10600240"

void FUN_10600240(void)

{
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  return;
}


// Reference entry 106013f0; body size 47 bytes.
#line 1 "ENTRY_106013f0"

SCStr * __thiscall Recovered_Bulk::FUN_106013f0(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  if ((SCStr *)((param_2)) != (SCStr *)(param_1)) {
    ((SCStr *)(param_1))->int_release();
    *(undefined4*)param_1 = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(param_1))->int_addref();
  }
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  *(undefined4*)(param_1 + 8) = (undefined4)(*(undefined4 *)(param_2 + 8));
  return (SCStr *)(param_1);
}


// Reference entry 10601430; body size 41 bytes.
#line 1 "ENTRY_10601430"

SCStr * __thiscall Recovered_Bulk::FUN_10601430(SCStr *param_2)
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


// Reference entry 10601b30; body size 32 bytes.
#line 1 "ENTRY_10601b30"

undefined4 __thiscall Recovered_Bulk::FUN_10601b30(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105feb30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4)(param_1);
}


// Reference entry 10601b60; body size 33 bytes.
#line 1 "ENTRY_10601b60"

undefined4 * __thiscall Recovered_Bulk::FUN_10601b60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10601b90; body size 33 bytes.
#line 1 "ENTRY_10601b90"

undefined4 * __thiscall Recovered_Bulk::FUN_10601b90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10601bc0; body size 49 bytes.
#line 1 "ENTRY_10601bc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10601bc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10601c00; body size 49 bytes.
#line 1 "ENTRY_10601c00"

undefined4 * __thiscall Recovered_Bulk::FUN_10601c00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10601c40; body size 33 bytes.
#line 1 "ENTRY_10601c40"

undefined4 * __thiscall Recovered_Bulk::FUN_10601c40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10601c70; body size 33 bytes.
#line 1 "ENTRY_10601c70"

undefined4 * __thiscall Recovered_Bulk::FUN_10601c70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10601d00; body size 38 bytes.
#line 1 "ENTRY_10601d00"

undefined4 * __thiscall Recovered_Bulk::FUN_10601d00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10601d30; body size 38 bytes.
#line 1 "ENTRY_10601d30"

undefined4 * __thiscall Recovered_Bulk::FUN_10601d30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10601d60; body size 38 bytes.
#line 1 "ENTRY_10601d60"

undefined4 * __thiscall Recovered_Bulk::FUN_10601d60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10601d90; body size 38 bytes.
#line 1 "ENTRY_10601d90"

undefined4 * __thiscall Recovered_Bulk::FUN_10601d90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10601dc0; body size 38 bytes.
#line 1 "ENTRY_10601dc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10601dc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10601df0; body size 38 bytes.
#line 1 "ENTRY_10601df0"

undefined4 * __thiscall Recovered_Bulk::FUN_10601df0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10601e20; body size 38 bytes.
#line 1 "ENTRY_10601e20"

undefined4 * __thiscall Recovered_Bulk::FUN_10601e20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10601e50; body size 38 bytes.
#line 1 "ENTRY_10601e50"

undefined4 * __thiscall Recovered_Bulk::FUN_10601e50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10601e80; body size 38 bytes.
#line 1 "ENTRY_10601e80"

undefined4 * __thiscall Recovered_Bulk::FUN_10601e80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10601eb0; body size 38 bytes.
#line 1 "ENTRY_10601eb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10601eb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10601ee0; body size 38 bytes.
#line 1 "ENTRY_10601ee0"

undefined4 * __thiscall Recovered_Bulk::FUN_10601ee0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10601f10; body size 38 bytes.
#line 1 "ENTRY_10601f10"

undefined4 * __thiscall Recovered_Bulk::FUN_10601f10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10601f40; body size 38 bytes.
#line 1 "ENTRY_10601f40"

undefined4 * __thiscall Recovered_Bulk::FUN_10601f40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10601f70; body size 38 bytes.
#line 1 "ENTRY_10601f70"

undefined4 * __thiscall Recovered_Bulk::FUN_10601f70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10601fa0; body size 38 bytes.
#line 1 "ENTRY_10601fa0"

undefined4 * __thiscall Recovered_Bulk::FUN_10601fa0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10601fd0; body size 38 bytes.
#line 1 "ENTRY_10601fd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10601fd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602000; body size 38 bytes.
#line 1 "ENTRY_10602000"

undefined4 * __thiscall Recovered_Bulk::FUN_10602000(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602030; body size 38 bytes.
#line 1 "ENTRY_10602030"

undefined4 * __thiscall Recovered_Bulk::FUN_10602030(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602060; body size 38 bytes.
#line 1 "ENTRY_10602060"

undefined4 * __thiscall Recovered_Bulk::FUN_10602060(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602090; body size 38 bytes.
#line 1 "ENTRY_10602090"

undefined4 * __thiscall Recovered_Bulk::FUN_10602090(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106020c0; body size 38 bytes.
#line 1 "ENTRY_106020c0"

undefined4 * __thiscall Recovered_Bulk::FUN_106020c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106020f0; body size 38 bytes.
#line 1 "ENTRY_106020f0"

undefined4 * __thiscall Recovered_Bulk::FUN_106020f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602120; body size 38 bytes.
#line 1 "ENTRY_10602120"

undefined4 * __thiscall Recovered_Bulk::FUN_10602120(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602150; body size 38 bytes.
#line 1 "ENTRY_10602150"

undefined4 * __thiscall Recovered_Bulk::FUN_10602150(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602180; body size 38 bytes.
#line 1 "ENTRY_10602180"

undefined4 * __thiscall Recovered_Bulk::FUN_10602180(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106021b0; body size 38 bytes.
#line 1 "ENTRY_106021b0"

undefined4 * __thiscall Recovered_Bulk::FUN_106021b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106021e0; body size 38 bytes.
#line 1 "ENTRY_106021e0"

undefined4 * __thiscall Recovered_Bulk::FUN_106021e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602750; body size 32 bytes.
#line 1 "ENTRY_10602750"

undefined4 __thiscall Recovered_Bulk::FUN_10602750(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105ff930();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x34);
  }
  return (undefined4)(param_1);
}


// Reference entry 10602830; body size 33 bytes.
#line 1 "ENTRY_10602830"

undefined4 * __thiscall Recovered_Bulk::FUN_10602830(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizParams);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106028c0; body size 48 bytes.
#line 1 "ENTRY_106028c0"

undefined4 * __thiscall Recovered_Bulk::FUN_106028c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a212c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602960; body size 48 bytes.
#line 1 "ENTRY_10602960"

undefined4 * __thiscall Recovered_Bulk::FUN_10602960(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a216c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602a00; body size 48 bytes.
#line 1 "ENTRY_10602a00"

undefined4 * __thiscall Recovered_Bulk::FUN_10602a00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2168 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602aa0; body size 48 bytes.
#line 1 "ENTRY_10602aa0"

undefined4 * __thiscall Recovered_Bulk::FUN_10602aa0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a215c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602b40; body size 48 bytes.
#line 1 "ENTRY_10602b40"

undefined4 * __thiscall Recovered_Bulk::FUN_10602b40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2148 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602be0; body size 48 bytes.
#line 1 "ENTRY_10602be0"

undefined4 * __thiscall Recovered_Bulk::FUN_10602be0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2180 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602c80; body size 48 bytes.
#line 1 "ENTRY_10602c80"

undefined4 * __thiscall Recovered_Bulk::FUN_10602c80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2170 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602d20; body size 48 bytes.
#line 1 "ENTRY_10602d20"

undefined4 * __thiscall Recovered_Bulk::FUN_10602d20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a218c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602dc0; body size 48 bytes.
#line 1 "ENTRY_10602dc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10602dc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2158 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602e60; body size 48 bytes.
#line 1 "ENTRY_10602e60"

undefined4 * __thiscall Recovered_Bulk::FUN_10602e60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2190 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10602f00; body size 48 bytes.
#line 1 "ENTRY_10602f00"

undefined4 * __thiscall Recovered_Bulk::FUN_10602f00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a217c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10603040; body size 48 bytes.
#line 1 "ENTRY_10603040"

undefined4 * __thiscall Recovered_Bulk::FUN_10603040(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2128 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106030e0; body size 48 bytes.
#line 1 "ENTRY_106030e0"

undefined4 * __thiscall Recovered_Bulk::FUN_106030e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2188 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10603180; body size 48 bytes.
#line 1 "ENTRY_10603180"

undefined4 * __thiscall Recovered_Bulk::FUN_10603180(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2184 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10603220; body size 48 bytes.
#line 1 "ENTRY_10603220"

undefined4 * __thiscall Recovered_Bulk::FUN_10603220(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a214c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106032c0; body size 48 bytes.
#line 1 "ENTRY_106032c0"

undefined4 * __thiscall Recovered_Bulk::FUN_106032c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2164 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10603360; body size 48 bytes.
#line 1 "ENTRY_10603360"

undefined4 * __thiscall Recovered_Bulk::FUN_10603360(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2174 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10603460; body size 48 bytes.
#line 1 "ENTRY_10603460"

undefined4 * __thiscall Recovered_Bulk::FUN_10603460(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2140 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10603560; body size 48 bytes.
#line 1 "ENTRY_10603560"

undefined4 * __thiscall Recovered_Bulk::FUN_10603560(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a213c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10603600; body size 48 bytes.
#line 1 "ENTRY_10603600"

undefined4 * __thiscall Recovered_Bulk::FUN_10603600(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2130 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106036a0; body size 48 bytes.
#line 1 "ENTRY_106036a0"

undefined4 * __thiscall Recovered_Bulk::FUN_106036a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2134 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106037a0; body size 48 bytes.
#line 1 "ENTRY_106037a0"

undefined4 * __thiscall Recovered_Bulk::FUN_106037a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2138 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10603840; body size 48 bytes.
#line 1 "ENTRY_10603840"

undefined4 * __thiscall Recovered_Bulk::FUN_10603840(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2178 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106038e0; body size 48 bytes.
#line 1 "ENTRY_106038e0"

undefined4 * __thiscall Recovered_Bulk::FUN_106038e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2144 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10603980; body size 48 bytes.
#line 1 "ENTRY_10603980"

undefined4 * __thiscall Recovered_Bulk::FUN_10603980(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2154 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10603a20; body size 48 bytes.
#line 1 "ENTRY_10603a20"

undefined4 * __thiscall Recovered_Bulk::FUN_10603a20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2160 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10603bd0; body size 32 bytes.
#line 1 "ENTRY_10603bd0"

undefined4 __thiscall Recovered_Bulk::FUN_10603bd0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106010a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4)(param_1);
}


// Reference entry 10603c60; body size 48 bytes.
#line 1 "ENTRY_10603c60"

undefined4 * __thiscall Recovered_Bulk::FUN_10603c60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2150 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106042e0; body size 35 bytes.
#line 1 "ENTRY_106042e0"

void __stdcall FUN_106042e0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x34) {
    thunk_FUN_105ff930();
  }
  return;
}


// Reference entry 10604310; body size 36 bytes.
#line 1 "ENTRY_10604310"

void __stdcall FUN_10604310(undefined4 *param_1,undefined4 *param_2)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 8) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 10604340; body size 36 bytes.
#line 1 "ENTRY_10604340"

void __stdcall FUN_10604340(undefined4 *param_1,undefined4 *param_2)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 8) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 10604370; body size 36 bytes.
#line 1 "ENTRY_10604370"

void __stdcall FUN_10604370(undefined4 *param_1,undefined4 *param_2)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 8) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 106043a0; body size 20 bytes.
#line 1 "ENTRY_106043a0"

void __thiscall Recovered_Bulk::FUN_106043a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105f2b00(param_2,param_3,param_1);
  return;
}


// Reference entry 10604ce0; body size 61 bytes.
#line 1 "ENTRY_10604ce0"

void __thiscall Recovered_Bulk::FUN_10604ce0(int *param_2)
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


// Reference entry 10604d30; body size 30 bytes.
#line 1 "ENTRY_10604d30"

void __thiscall Recovered_Bulk::FUN_10604d30(int param_2)
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


// Reference entry 10605020; body size 50 bytes.
#line 1 "ENTRY_10605020"

int __thiscall Recovered_Bulk::FUN_10605020(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 0x18)) != *(int *)((param_1 + 0x1c))) {
    thunk_FUN_105f5a00(param_2);
    *(int*)(param_1 + 0x18) = (int)(*(int *)(param_1 + 0x18) + 0x20);
    return (int)(param_1);
  }
  thunk_FUN_105f34e0(*(int *)(param_1 + 0x18),param_2);
  return (int)(param_1);
}


// Reference entry 10605060; body size 50 bytes.
#line 1 "ENTRY_10605060"

int __thiscall Recovered_Bulk::FUN_10605060(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 0x18)) != *(int *)((param_1 + 0x1c))) {
    thunk_FUN_105f5df0(param_2);
    *(int*)(param_1 + 0x18) = (int)(*(int *)(param_1 + 0x18) + 0x20);
    return (int)(param_1);
  }
  thunk_FUN_105f36d0(*(int *)(param_1 + 0x18),param_2);
  return (int)(param_1);
}


// Reference entry 106050a0; body size 50 bytes.
#line 1 "ENTRY_106050a0"

int __thiscall Recovered_Bulk::FUN_106050a0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 0x18)) != *(int *)((param_1 + 0x1c))) {
    thunk_FUN_105f60e0(param_2);
    *(int*)(param_1 + 0x18) = (int)(*(int *)(param_1 + 0x18) + 0x20);
    return (int)(param_1);
  }
  thunk_FUN_105f38c0(*(int *)(param_1 + 0x18),param_2);
  return (int)(param_1);
}


// Reference entry 10607f70; body size 54 bytes.
#line 1 "ENTRY_10607f70"

void __stdcall FUN_10607f70(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x34);
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


// Reference entry 10607fc0; body size 56 bytes.
#line 1 "ENTRY_10607fc0"

void __stdcall FUN_10607fc0(int param_1,int param_2)

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


// Reference entry 10608010; body size 56 bytes.
#line 1 "ENTRY_10608010"

void __stdcall FUN_10608010(int param_1,int param_2)

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


// Reference entry 10608060; body size 56 bytes.
#line 1 "ENTRY_10608060"

void __stdcall FUN_10608060(int param_1,int param_2)

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


// Reference entry 106080b0; body size 59 bytes.
#line 1 "ENTRY_106080b0"

void __stdcall FUN_106080b0(int param_1,int param_2)

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


// Reference entry 10608110; body size 60 bytes.
#line 1 "ENTRY_10608110"

int __thiscall Recovered_Bulk::FUN_10608110(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  *(undefined4*)(iVar1 + -0x1c) = (undefined4)(3);
  if (*(int *)((iVar1 + -8)) != *(int *)((iVar1 + -4))) {
    thunk_FUN_105f5a00(param_2);
    *(int*)(iVar1 + -8) = (int)(*(int *)(iVar1 + -8) + 0x20);
    return (int)(param_1);
  }
  thunk_FUN_105f34e0(*(int *)(iVar1 + -8),param_2);
  return (int)(param_1);
}


// Reference entry 10608160; body size 60 bytes.
#line 1 "ENTRY_10608160"

int __thiscall Recovered_Bulk::FUN_10608160(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  *(undefined4*)(iVar1 + -0x1c) = (undefined4)(3);
  if (*(int *)((iVar1 + -8)) != *(int *)((iVar1 + -4))) {
    thunk_FUN_105f5df0(param_2);
    *(int*)(iVar1 + -8) = (int)(*(int *)(iVar1 + -8) + 0x20);
    return (int)(param_1);
  }
  thunk_FUN_105f36d0(*(int *)(iVar1 + -8),param_2);
  return (int)(param_1);
}


// Reference entry 106081b0; body size 60 bytes.
#line 1 "ENTRY_106081b0"

int __thiscall Recovered_Bulk::FUN_106081b0(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  *(undefined4*)(iVar1 + -0x1c) = (undefined4)(3);
  if (*(int *)((iVar1 + -8)) != *(int *)((iVar1 + -4))) {
    thunk_FUN_105f60e0(param_2);
    *(int*)(iVar1 + -8) = (int)(*(int *)(iVar1 + -8) + 0x20);
    return (int)(param_1);
  }
  thunk_FUN_105f38c0(*(int *)(iVar1 + -8),param_2);
  return (int)(param_1);
}


// Reference entry 10608380; body size 28 bytes.
#line 1 "ENTRY_10608380"

void __fastcall FUN_10608380(int *param_1)

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


// Reference entry 10612870; body size 62 bytes.
#line 1 "ENTRY_10612870"

void __stdcall FUN_10612870(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTree);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return;
}


// Reference entry 10619af0; body size 18 bytes.
#line 1 "ENTRY_10619af0"

void FUN_10619af0(void)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0x80000004);
  thunk_FUN_10ee48c0(0x80000004);
  thunk_FUN_10ee2ec0(uVar1);
  return;
}


// Reference entry 1061cb10; body size 41 bytes.
#line 1 "ENTRY_1061cb10"

undefined4 * __thiscall Recovered_Bulk::FUN_1061cb10(int *param_2)
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


// Reference entry 1061d0e0; body size 46 bytes.
#line 1 "ENTRY_1061d0e0"

SCStr * __thiscall Recovered_Bulk::FUN_1061d0e0(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0((uint)(*(char *)(param_1 + 8) == '\0') * 8 + 0x276e,
                                      &DAT_11882ff0), 0);
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 1061e340; body size 30 bytes.
#line 1 "ENTRY_1061e340"

void __thiscall Recovered_Bulk::FUN_1061e340(int param_2)
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


// Reference entry 1061f9c0; body size 38 bytes.
#line 1 "ENTRY_1061f9c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1061f9c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1061f9f0; body size 38 bytes.
#line 1 "ENTRY_1061f9f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1061f9f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1061fa20; body size 38 bytes.
#line 1 "ENTRY_1061fa20"

undefined4 * __thiscall Recovered_Bulk::FUN_1061fa20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1061fa50; body size 38 bytes.
#line 1 "ENTRY_1061fa50"

undefined4 * __thiscall Recovered_Bulk::FUN_1061fa50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1061fa80; body size 35 bytes.
#line 1 "ENTRY_1061fa80"

undefined4 __thiscall Recovered_Bulk::FUN_1061fa80(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xec);
  }
  return (undefined4)(param_1);
}


// Reference entry 1061fb70; body size 48 bytes.
#line 1 "ENTRY_1061fb70"

undefined4 * __thiscall Recovered_Bulk::FUN_1061fb70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2244 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1061fc10; body size 48 bytes.
#line 1 "ENTRY_1061fc10"

undefined4 * __thiscall Recovered_Bulk::FUN_1061fc10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2240 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1061fcb0; body size 48 bytes.
#line 1 "ENTRY_1061fcb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1061fcb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2238 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1061fdc0; body size 48 bytes.
#line 1 "ENTRY_1061fdc0"

undefined4 * __thiscall Recovered_Bulk::FUN_1061fdc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a223c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1061fe90; body size 30 bytes.
#line 1 "ENTRY_1061fe90"

void __thiscall Recovered_Bulk::FUN_1061fe90(int param_2)
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


// Reference entry 10620360; body size 28 bytes.
#line 1 "ENTRY_10620360"

void __fastcall FUN_10620360(int *param_1)

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


// Reference entry 10625fa0; body size 24 bytes.
#line 1 "ENTRY_10625fa0"

undefined4 * __thiscall Recovered_Bulk::FUN_10625fa0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10625fc0; body size 24 bytes.
#line 1 "ENTRY_10625fc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10625fc0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062c0b0; body size 38 bytes.
#line 1 "ENTRY_1062c0b0"

void __fastcall FUN_1062c0b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  return;
}


// Reference entry 1062c3c0; body size 60 bytes.
#line 1 "ENTRY_1062c3c0"

void __fastcall FUN_1062c3c0(int *param_1)

{
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


// Reference entry 1062c420; body size 60 bytes.
#line 1 "ENTRY_1062c420"

void __fastcall FUN_1062c420(int *param_1)

{
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


// Reference entry 1062c5a0; body size 38 bytes.
#line 1 "ENTRY_1062c5a0"

void __fastcall FUN_1062c5a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  return;
}


// Reference entry 1062c900; body size 33 bytes.
#line 1 "ENTRY_1062c900"

void __fastcall FUN_1062c900(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1062cc10; body size 20 bytes.
#line 1 "ENTRY_1062cc10"

void FUN_1062cc10(void)

{
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  return;
}


// Reference entry 1062cc30; body size 20 bytes.
#line 1 "ENTRY_1062cc30"

void FUN_1062cc30(void)

{
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  return;
}


// Reference entry 1062cc70; body size 20 bytes.
#line 1 "ENTRY_1062cc70"

void FUN_1062cc70(void)

{
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  return;
}


// Reference entry 1062e580; body size 38 bytes.
#line 1 "ENTRY_1062e580"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e580(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062e5b0; body size 38 bytes.
#line 1 "ENTRY_1062e5b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e5b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062e5e0; body size 38 bytes.
#line 1 "ENTRY_1062e5e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e5e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062e610; body size 38 bytes.
#line 1 "ENTRY_1062e610"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e610(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062e640; body size 38 bytes.
#line 1 "ENTRY_1062e640"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e640(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062e670; body size 38 bytes.
#line 1 "ENTRY_1062e670"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e670(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062e6a0; body size 38 bytes.
#line 1 "ENTRY_1062e6a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e6a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062e6d0; body size 38 bytes.
#line 1 "ENTRY_1062e6d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e6d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062e700; body size 38 bytes.
#line 1 "ENTRY_1062e700"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e700(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062e730; body size 38 bytes.
#line 1 "ENTRY_1062e730"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e730(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062e760; body size 38 bytes.
#line 1 "ENTRY_1062e760"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e760(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062e790; body size 38 bytes.
#line 1 "ENTRY_1062e790"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e790(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062e7c0; body size 38 bytes.
#line 1 "ENTRY_1062e7c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e7c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062e7f0; body size 38 bytes.
#line 1 "ENTRY_1062e7f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e7f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062e820; body size 38 bytes.
#line 1 "ENTRY_1062e820"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e820(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062e850; body size 38 bytes.
#line 1 "ENTRY_1062e850"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e850(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062e880; body size 38 bytes.
#line 1 "ENTRY_1062e880"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e880(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062e8b0; body size 38 bytes.
#line 1 "ENTRY_1062e8b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e8b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062e8e0; body size 38 bytes.
#line 1 "ENTRY_1062e8e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e8e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062e910; body size 38 bytes.
#line 1 "ENTRY_1062e910"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e910(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062e940; body size 38 bytes.
#line 1 "ENTRY_1062e940"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e940(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062e970; body size 38 bytes.
#line 1 "ENTRY_1062e970"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e970(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062e9a0; body size 38 bytes.
#line 1 "ENTRY_1062e9a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e9a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062e9d0; body size 38 bytes.
#line 1 "ENTRY_1062e9d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062e9d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062ea00; body size 38 bytes.
#line 1 "ENTRY_1062ea00"

undefined4 * __thiscall Recovered_Bulk::FUN_1062ea00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062ea30; body size 38 bytes.
#line 1 "ENTRY_1062ea30"

undefined4 * __thiscall Recovered_Bulk::FUN_1062ea30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062ea60; body size 38 bytes.
#line 1 "ENTRY_1062ea60"

undefined4 * __thiscall Recovered_Bulk::FUN_1062ea60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062ea90; body size 38 bytes.
#line 1 "ENTRY_1062ea90"

undefined4 * __thiscall Recovered_Bulk::FUN_1062ea90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062eac0; body size 38 bytes.
#line 1 "ENTRY_1062eac0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062eac0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062f190; body size 48 bytes.
#line 1 "ENTRY_1062f190"

undefined4 * __thiscall Recovered_Bulk::FUN_1062f190(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a22c0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062f230; body size 48 bytes.
#line 1 "ENTRY_1062f230"

undefined4 * __thiscall Recovered_Bulk::FUN_1062f230(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a22bc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062f2d0; body size 48 bytes.
#line 1 "ENTRY_1062f2d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062f2d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a22c4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062f370; body size 48 bytes.
#line 1 "ENTRY_1062f370"

undefined4 * __thiscall Recovered_Bulk::FUN_1062f370(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a22a8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062f410; body size 48 bytes.
#line 1 "ENTRY_1062f410"

undefined4 * __thiscall Recovered_Bulk::FUN_1062f410(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a22c8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062f520; body size 48 bytes.
#line 1 "ENTRY_1062f520"

undefined4 * __thiscall Recovered_Bulk::FUN_1062f520(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a22b0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062f5c0; body size 48 bytes.
#line 1 "ENTRY_1062f5c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062f5c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a22d8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062f6c0; body size 48 bytes.
#line 1 "ENTRY_1062f6c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062f6c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a22e4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062f760; body size 48 bytes.
#line 1 "ENTRY_1062f760"

undefined4 * __thiscall Recovered_Bulk::FUN_1062f760(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a22dc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062f860; body size 48 bytes.
#line 1 "ENTRY_1062f860"

undefined4 * __thiscall Recovered_Bulk::FUN_1062f860(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a22e0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062f900; body size 48 bytes.
#line 1 "ENTRY_1062f900"

undefined4 * __thiscall Recovered_Bulk::FUN_1062f900(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a22ac = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062f9a0; body size 48 bytes.
#line 1 "ENTRY_1062f9a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062f9a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a22f8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062fab0; body size 48 bytes.
#line 1 "ENTRY_1062fab0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062fab0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a22fc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062fbb0; body size 48 bytes.
#line 1 "ENTRY_1062fbb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062fbb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2300 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062fc50; body size 48 bytes.
#line 1 "ENTRY_1062fc50"

undefined4 * __thiscall Recovered_Bulk::FUN_1062fc50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a22f4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062fcf0; body size 48 bytes.
#line 1 "ENTRY_1062fcf0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062fcf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a22d4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062fd90; body size 48 bytes.
#line 1 "ENTRY_1062fd90"

undefined4 * __thiscall Recovered_Bulk::FUN_1062fd90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2298 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062fe30; body size 48 bytes.
#line 1 "ENTRY_1062fe30"

undefined4 * __thiscall Recovered_Bulk::FUN_1062fe30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a22b8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062fed0; body size 48 bytes.
#line 1 "ENTRY_1062fed0"

undefined4 * __thiscall Recovered_Bulk::FUN_1062fed0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a22f0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1062ff70; body size 48 bytes.
#line 1 "ENTRY_1062ff70"

undefined4 * __thiscall Recovered_Bulk::FUN_1062ff70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a22ec = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10630010; body size 48 bytes.
#line 1 "ENTRY_10630010"

undefined4 * __thiscall Recovered_Bulk::FUN_10630010(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2294 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106300b0; body size 48 bytes.
#line 1 "ENTRY_106300b0"

undefined4 * __thiscall Recovered_Bulk::FUN_106300b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2304 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10630150; body size 48 bytes.
#line 1 "ENTRY_10630150"

undefined4 * __thiscall Recovered_Bulk::FUN_10630150(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a22b4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106301f0; body size 48 bytes.
#line 1 "ENTRY_106301f0"

undefined4 * __thiscall Recovered_Bulk::FUN_106301f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a229c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10630290; body size 48 bytes.
#line 1 "ENTRY_10630290"

undefined4 * __thiscall Recovered_Bulk::FUN_10630290(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a22a0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10630330; body size 48 bytes.
#line 1 "ENTRY_10630330"

undefined4 * __thiscall Recovered_Bulk::FUN_10630330(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a22e8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10630440; body size 48 bytes.
#line 1 "ENTRY_10630440"

undefined4 * __thiscall Recovered_Bulk::FUN_10630440(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a22a4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106304e0; body size 48 bytes.
#line 1 "ENTRY_106304e0"

undefined4 * __thiscall Recovered_Bulk::FUN_106304e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a22cc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10630580; body size 48 bytes.
#line 1 "ENTRY_10630580"

undefined4 * __thiscall Recovered_Bulk::FUN_10630580(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a22d0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106306e0; body size 32 bytes.
#line 1 "ENTRY_106306e0"

undefined4 __thiscall Recovered_Bulk::FUN_106306e0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1062db60();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4)(param_1);
}


// Reference entry 10630940; body size 61 bytes.
#line 1 "ENTRY_10630940"

void __thiscall Recovered_Bulk::FUN_10630940(int *param_2)
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


// Reference entry 10633d20; body size 59 bytes.
#line 1 "ENTRY_10633d20"

void __stdcall FUN_10633d20(int param_1,int param_2)

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


// Reference entry 1063d090; body size 30 bytes.
#line 1 "ENTRY_1063d090"

undefined4 __stdcall FUN_1063d090(undefined4 param_1)

{
  undefined4 local_4;
  
  local_4 = (undefined4)(DAT_121a22b8);
  thunk_FUN_105f5920(&local_4);
  return (undefined4)(param_1);
}


// Reference entry 106486f0; body size 33 bytes.
#line 1 "ENTRY_106486f0"

void __thiscall Recovered_Bulk::FUN_106486f0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10648750(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10648720; body size 33 bytes.
#line 1 "ENTRY_10648720"

void __thiscall Recovered_Bulk::FUN_10648720(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10648810(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10648af0; body size 24 bytes.
#line 1 "ENTRY_10648af0"

void __thiscall Recovered_Bulk::FUN_10648af0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10357c10(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 1064bc40; body size 41 bytes.
#line 1 "ENTRY_1064bc40"

undefined4 * __thiscall Recovered_Bulk::FUN_1064bc40(int *param_2)
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


// Reference entry 1064bc80; body size 41 bytes.
#line 1 "ENTRY_1064bc80"

undefined4 * __thiscall Recovered_Bulk::FUN_1064bc80(int *param_2)
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


// Reference entry 1064bce0; body size 41 bytes.
#line 1 "ENTRY_1064bce0"

undefined4 * __thiscall Recovered_Bulk::FUN_1064bce0(int *param_2)
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


// Reference entry 1064d4c0; body size 48 bytes.
#line 1 "ENTRY_1064d4c0"

undefined4 * __fastcall FUN_1064d4c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 1064d500; body size 48 bytes.
#line 1 "ENTRY_1064d500"

undefined4 * __fastcall FUN_1064d500(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 106545f0; body size 38 bytes.
#line 1 "ENTRY_106545f0"

void __fastcall FUN_106545f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  return;
}


// Reference entry 10654e60; body size 33 bytes.
#line 1 "ENTRY_10654e60"

void __fastcall FUN_10654e60(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10654eb0; body size 28 bytes.
#line 1 "ENTRY_10654eb0"

void __fastcall FUN_10654eb0(int *param_1)

{
  thunk_FUN_10648750(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10654ee0; body size 28 bytes.
#line 1 "ENTRY_10654ee0"

void __fastcall FUN_10654ee0(int *param_1)

{
  thunk_FUN_10648810(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10654f10; body size 17 bytes.
#line 1 "ENTRY_10654f10"

void __fastcall FUN_10654f10(undefined4 *param_1)

{
  thunk_FUN_10623d50(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 10654f30; body size 33 bytes.
#line 1 "ENTRY_10654f30"

void __fastcall FUN_10654f30(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10654f60; body size 28 bytes.
#line 1 "ENTRY_10654f60"

void __fastcall FUN_10654f60(int *param_1)

{
  thunk_FUN_10648750(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10654f90; body size 28 bytes.
#line 1 "ENTRY_10654f90"

void __fastcall FUN_10654f90(int *param_1)

{
  thunk_FUN_10648810(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10657660; body size 38 bytes.
#line 1 "ENTRY_10657660"

undefined4 * __thiscall Recovered_Bulk::FUN_10657660(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657690; body size 38 bytes.
#line 1 "ENTRY_10657690"

undefined4 * __thiscall Recovered_Bulk::FUN_10657690(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106576c0; body size 38 bytes.
#line 1 "ENTRY_106576c0"

undefined4 * __thiscall Recovered_Bulk::FUN_106576c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106576f0; body size 38 bytes.
#line 1 "ENTRY_106576f0"

undefined4 * __thiscall Recovered_Bulk::FUN_106576f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657720; body size 38 bytes.
#line 1 "ENTRY_10657720"

undefined4 * __thiscall Recovered_Bulk::FUN_10657720(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657750; body size 38 bytes.
#line 1 "ENTRY_10657750"

undefined4 * __thiscall Recovered_Bulk::FUN_10657750(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657780; body size 38 bytes.
#line 1 "ENTRY_10657780"

undefined4 * __thiscall Recovered_Bulk::FUN_10657780(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106577b0; body size 38 bytes.
#line 1 "ENTRY_106577b0"

undefined4 * __thiscall Recovered_Bulk::FUN_106577b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106577e0; body size 38 bytes.
#line 1 "ENTRY_106577e0"

undefined4 * __thiscall Recovered_Bulk::FUN_106577e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657810; body size 38 bytes.
#line 1 "ENTRY_10657810"

undefined4 * __thiscall Recovered_Bulk::FUN_10657810(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657840; body size 38 bytes.
#line 1 "ENTRY_10657840"

undefined4 * __thiscall Recovered_Bulk::FUN_10657840(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657870; body size 38 bytes.
#line 1 "ENTRY_10657870"

undefined4 * __thiscall Recovered_Bulk::FUN_10657870(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106578a0; body size 38 bytes.
#line 1 "ENTRY_106578a0"

undefined4 * __thiscall Recovered_Bulk::FUN_106578a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106578d0; body size 38 bytes.
#line 1 "ENTRY_106578d0"

undefined4 * __thiscall Recovered_Bulk::FUN_106578d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657900; body size 38 bytes.
#line 1 "ENTRY_10657900"

undefined4 * __thiscall Recovered_Bulk::FUN_10657900(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657930; body size 38 bytes.
#line 1 "ENTRY_10657930"

undefined4 * __thiscall Recovered_Bulk::FUN_10657930(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657960; body size 38 bytes.
#line 1 "ENTRY_10657960"

undefined4 * __thiscall Recovered_Bulk::FUN_10657960(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657990; body size 38 bytes.
#line 1 "ENTRY_10657990"

undefined4 * __thiscall Recovered_Bulk::FUN_10657990(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106579c0; body size 38 bytes.
#line 1 "ENTRY_106579c0"

undefined4 * __thiscall Recovered_Bulk::FUN_106579c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106579f0; body size 38 bytes.
#line 1 "ENTRY_106579f0"

undefined4 * __thiscall Recovered_Bulk::FUN_106579f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657a20; body size 38 bytes.
#line 1 "ENTRY_10657a20"

undefined4 * __thiscall Recovered_Bulk::FUN_10657a20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657a50; body size 38 bytes.
#line 1 "ENTRY_10657a50"

undefined4 * __thiscall Recovered_Bulk::FUN_10657a50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657a80; body size 38 bytes.
#line 1 "ENTRY_10657a80"

undefined4 * __thiscall Recovered_Bulk::FUN_10657a80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657ab0; body size 38 bytes.
#line 1 "ENTRY_10657ab0"

undefined4 * __thiscall Recovered_Bulk::FUN_10657ab0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657ae0; body size 38 bytes.
#line 1 "ENTRY_10657ae0"

undefined4 * __thiscall Recovered_Bulk::FUN_10657ae0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657b10; body size 38 bytes.
#line 1 "ENTRY_10657b10"

undefined4 * __thiscall Recovered_Bulk::FUN_10657b10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657b40; body size 38 bytes.
#line 1 "ENTRY_10657b40"

undefined4 * __thiscall Recovered_Bulk::FUN_10657b40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657b70; body size 38 bytes.
#line 1 "ENTRY_10657b70"

undefined4 * __thiscall Recovered_Bulk::FUN_10657b70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657ba0; body size 38 bytes.
#line 1 "ENTRY_10657ba0"

undefined4 * __thiscall Recovered_Bulk::FUN_10657ba0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657bd0; body size 38 bytes.
#line 1 "ENTRY_10657bd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10657bd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657c00; body size 38 bytes.
#line 1 "ENTRY_10657c00"

undefined4 * __thiscall Recovered_Bulk::FUN_10657c00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657c30; body size 38 bytes.
#line 1 "ENTRY_10657c30"

undefined4 * __thiscall Recovered_Bulk::FUN_10657c30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657c60; body size 38 bytes.
#line 1 "ENTRY_10657c60"

undefined4 * __thiscall Recovered_Bulk::FUN_10657c60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657c90; body size 38 bytes.
#line 1 "ENTRY_10657c90"

undefined4 * __thiscall Recovered_Bulk::FUN_10657c90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657cc0; body size 38 bytes.
#line 1 "ENTRY_10657cc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10657cc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657cf0; body size 38 bytes.
#line 1 "ENTRY_10657cf0"

undefined4 * __thiscall Recovered_Bulk::FUN_10657cf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657d20; body size 38 bytes.
#line 1 "ENTRY_10657d20"

undefined4 * __thiscall Recovered_Bulk::FUN_10657d20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10657d50; body size 38 bytes.
#line 1 "ENTRY_10657d50"

undefined4 * __thiscall Recovered_Bulk::FUN_10657d50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658720; body size 48 bytes.
#line 1 "ENTRY_10658720"

undefined4 * __thiscall Recovered_Bulk::FUN_10658720(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2388 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106587c0; body size 48 bytes.
#line 1 "ENTRY_106587c0"

undefined4 * __thiscall Recovered_Bulk::FUN_106587c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23d8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106588c0; body size 48 bytes.
#line 1 "ENTRY_106588c0"

undefined4 * __thiscall Recovered_Bulk::FUN_106588c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2390 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658960; body size 48 bytes.
#line 1 "ENTRY_10658960"

undefined4 * __thiscall Recovered_Bulk::FUN_10658960(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2394 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658a00; body size 48 bytes.
#line 1 "ENTRY_10658a00"

undefined4 * __thiscall Recovered_Bulk::FUN_10658a00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2378 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658aa0; body size 48 bytes.
#line 1 "ENTRY_10658aa0"

undefined4 * __thiscall Recovered_Bulk::FUN_10658aa0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23b0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658b40; body size 48 bytes.
#line 1 "ENTRY_10658b40"

undefined4 * __thiscall Recovered_Bulk::FUN_10658b40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2398 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658be0; body size 48 bytes.
#line 1 "ENTRY_10658be0"

undefined4 * __thiscall Recovered_Bulk::FUN_10658be0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2374 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658c80; body size 48 bytes.
#line 1 "ENTRY_10658c80"

undefined4 * __thiscall Recovered_Bulk::FUN_10658c80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23a8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658d20; body size 48 bytes.
#line 1 "ENTRY_10658d20"

undefined4 * __thiscall Recovered_Bulk::FUN_10658d20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23fc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658dc0; body size 48 bytes.
#line 1 "ENTRY_10658dc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10658dc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23f0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658e60; body size 48 bytes.
#line 1 "ENTRY_10658e60"

undefined4 * __thiscall Recovered_Bulk::FUN_10658e60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23f8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10658f70; body size 48 bytes.
#line 1 "ENTRY_10658f70"

undefined4 * __thiscall Recovered_Bulk::FUN_10658f70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a236c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659010; body size 48 bytes.
#line 1 "ENTRY_10659010"

undefined4 * __thiscall Recovered_Bulk::FUN_10659010(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a237c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106590b0; body size 48 bytes.
#line 1 "ENTRY_106590b0"

undefined4 * __thiscall Recovered_Bulk::FUN_106590b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23f4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659150; body size 48 bytes.
#line 1 "ENTRY_10659150"

undefined4 * __thiscall Recovered_Bulk::FUN_10659150(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23d4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106591f0; body size 48 bytes.
#line 1 "ENTRY_106591f0"

undefined4 * __thiscall Recovered_Bulk::FUN_106591f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23c8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659290; body size 48 bytes.
#line 1 "ENTRY_10659290"

undefined4 * __thiscall Recovered_Bulk::FUN_10659290(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a239c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659330; body size 48 bytes.
#line 1 "ENTRY_10659330"

undefined4 * __thiscall Recovered_Bulk::FUN_10659330(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2384 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106593d0; body size 48 bytes.
#line 1 "ENTRY_106593d0"

undefined4 * __thiscall Recovered_Bulk::FUN_106593d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23b8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659470; body size 48 bytes.
#line 1 "ENTRY_10659470"

undefined4 * __thiscall Recovered_Bulk::FUN_10659470(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23ac = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659510; body size 48 bytes.
#line 1 "ENTRY_10659510"

undefined4 * __thiscall Recovered_Bulk::FUN_10659510(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23ec = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106595b0; body size 48 bytes.
#line 1 "ENTRY_106595b0"

undefined4 * __thiscall Recovered_Bulk::FUN_106595b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23c0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106596b0; body size 48 bytes.
#line 1 "ENTRY_106596b0"

undefined4 * __thiscall Recovered_Bulk::FUN_106596b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a238c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106597c0; body size 48 bytes.
#line 1 "ENTRY_106597c0"

undefined4 * __thiscall Recovered_Bulk::FUN_106597c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2368 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659860; body size 48 bytes.
#line 1 "ENTRY_10659860"

undefined4 * __thiscall Recovered_Bulk::FUN_10659860(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23e0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659970; body size 48 bytes.
#line 1 "ENTRY_10659970"

undefined4 * __thiscall Recovered_Bulk::FUN_10659970(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23dc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659a10; body size 48 bytes.
#line 1 "ENTRY_10659a10"

undefined4 * __thiscall Recovered_Bulk::FUN_10659a10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2380 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659ab0; body size 48 bytes.
#line 1 "ENTRY_10659ab0"

undefined4 * __thiscall Recovered_Bulk::FUN_10659ab0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23cc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659b50; body size 48 bytes.
#line 1 "ENTRY_10659b50"

undefined4 * __thiscall Recovered_Bulk::FUN_10659b50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23bc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659bf0; body size 48 bytes.
#line 1 "ENTRY_10659bf0"

undefined4 * __thiscall Recovered_Bulk::FUN_10659bf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23b4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659c90; body size 48 bytes.
#line 1 "ENTRY_10659c90"

undefined4 * __thiscall Recovered_Bulk::FUN_10659c90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23d0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659db0; body size 48 bytes.
#line 1 "ENTRY_10659db0"

undefined4 * __thiscall Recovered_Bulk::FUN_10659db0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2370 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659e50; body size 48 bytes.
#line 1 "ENTRY_10659e50"

undefined4 * __thiscall Recovered_Bulk::FUN_10659e50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23e4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659ef0; body size 48 bytes.
#line 1 "ENTRY_10659ef0"

undefined4 * __thiscall Recovered_Bulk::FUN_10659ef0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23c4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10659f90; body size 48 bytes.
#line 1 "ENTRY_10659f90"

undefined4 * __thiscall Recovered_Bulk::FUN_10659f90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23e8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1065a030; body size 48 bytes.
#line 1 "ENTRY_1065a030"

undefined4 * __thiscall Recovered_Bulk::FUN_1065a030(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23a4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1065a0d0; body size 48 bytes.
#line 1 "ENTRY_1065a0d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1065a0d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a23a0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1065a280; body size 32 bytes.
#line 1 "ENTRY_1065a280"

undefined4 __thiscall Recovered_Bulk::FUN_1065a280(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106562a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4)(param_1);
}


// Reference entry 1065a3c0; body size 32 bytes.
#line 1 "ENTRY_1065a3c0"

undefined4 __thiscall Recovered_Bulk::FUN_1065a3c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10656840();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  return (undefined4)(param_1);
}


// Reference entry 1065a4d0; body size 30 bytes.
#line 1 "ENTRY_1065a4d0"

void __thiscall Recovered_Bulk::FUN_1065a4d0(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10370f20(param_2), 0);
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 8);
  return;
}


// Reference entry 1065a6a0; body size 19 bytes.
#line 1 "ENTRY_1065a6a0"

void __thiscall Recovered_Bulk::FUN_1065a6a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1065a6c0; body size 25 bytes.
#line 1 "ENTRY_1065a6c0"

void __thiscall Recovered_Bulk::FUN_1065a6c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  param_2[2] = (undefined4)(uVar1);
  return;
}


// Reference entry 1065a6e0; body size 25 bytes.
#line 1 "ENTRY_1065a6e0"

void __thiscall Recovered_Bulk::FUN_1065a6e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  param_2[2] = (undefined4)(uVar1);
  return;
}


// Reference entry 1065a700; body size 21 bytes.
#line 1 "ENTRY_1065a700"

void __stdcall FUN_1065a700(undefined4 *param_1, unsigned int recovered_unused_stack_0)

{
  thunk_FUN_10648010(*param_1,param_1[1],param_1);
  return;
}


// Reference entry 1065a720; body size 21 bytes.
#line 1 "ENTRY_1065a720"

void __thiscall Recovered_Bulk::FUN_1065a720(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 1065a740; body size 21 bytes.
#line 1 "ENTRY_1065a740"

void __thiscall Recovered_Bulk::FUN_1065a740(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return;
}


// Reference entry 1065a760; body size 21 bytes.
#line 1 "ENTRY_1065a760"

void __thiscall Recovered_Bulk::FUN_1065a760(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return;
}


// Reference entry 1065ac80; body size 19 bytes.
#line 1 "ENTRY_1065ac80"

void __thiscall Recovered_Bulk::FUN_1065ac80(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1065aca0; body size 25 bytes.
#line 1 "ENTRY_1065aca0"

void __thiscall Recovered_Bulk::FUN_1065aca0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  param_2[2] = (undefined4)(uVar1);
  return;
}


// Reference entry 1065acc0; body size 25 bytes.
#line 1 "ENTRY_1065acc0"

void __thiscall Recovered_Bulk::FUN_1065acc0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  param_2[2] = (undefined4)(uVar1);
  return;
}


// Reference entry 1065ad50; body size 33 bytes.
#line 1 "ENTRY_1065ad50"

void __fastcall FUN_1065ad50(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1065e730; body size 60 bytes.
#line 1 "ENTRY_1065e730"

void __stdcall FUN_1065e730(int param_1,int param_2)

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


// Reference entry 1066bbd0; body size 30 bytes.
#line 1 "ENTRY_1066bbd0"

undefined4 __stdcall FUN_1066bbd0(undefined4 param_1)

{
  undefined4 local_4;
  
  local_4 = (undefined4)(DAT_121a2384);
  thunk_FUN_105f5920(&local_4);
  return (undefined4)(param_1);
}


// Reference entry 1066d560; body size 21 bytes.
#line 1 "ENTRY_1066d560"

SCStr * __stdcall FUN_1066d560(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("Helpsheets");
  return (SCStr *)(param_1);
}


// Reference entry 1066d580; body size 21 bytes.
#line 1 "ENTRY_1066d580"

SCStr * __stdcall FUN_1066d580(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("UpdateTips");
  return (SCStr *)(param_1);
}


// Reference entry 10677120; body size 21 bytes.
#line 1 "ENTRY_10677120"

SCStr * __stdcall FUN_10677120(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10677fe0; body size 34 bytes.
#line 1 "ENTRY_10677fe0"

undefined1 __fastcall FUN_10677fe0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_11248b40(0x15), 0);
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x11d) == '\0')) {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 10678fa0; body size 42 bytes.
#line 1 "ENTRY_10678fa0"

void FUN_10678fa0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  return;
}


// Reference entry 1067e860; body size 40 bytes.
#line 1 "ENTRY_1067e860"

void FUN_1067e860(void)

{
  undefined1 uVar1;
  int iVar2;
  
  thunk_FUN_10ebc1d0();
  iVar2 = (int)(thunk_FUN_10eb41b0(), 0);
  uVar1 = (undefined1)(thunk_FUN_10eac8a0(), 0);
  *(undefined1*)(iVar2 + 0x11d) = (undefined1)(uVar1);
  return;
}


// Reference entry 1067eaa0; body size 45 bytes.
#line 1 "ENTRY_1067eaa0"

void FUN_1067eaa0(void)

{
  undefined1 uVar1;
  
  thunk_FUN_10ebc1d0();
  thunk_FUN_10eb41b0();
  uVar1 = (undefined1)(thunk_FUN_1083d1a0(), 0);
  thunk_FUN_10eade00(uVar1);
  return;
}


// Reference entry 1067f4d0; body size 41 bytes.
#line 1 "ENTRY_1067f4d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1067f4d0(int *param_2)
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


// Reference entry 1067f9b0; body size 29 bytes.
#line 1 "ENTRY_1067f9b0"

void __thiscall Recovered_Bulk::FUN_1067f9b0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 10680b40; body size 36 bytes.
#line 1 "ENTRY_10680b40"

void __thiscall Recovered_Bulk::FUN_10680b40(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0xc));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10681e40; body size 33 bytes.
#line 1 "ENTRY_10681e40"

void __thiscall Recovered_Bulk::FUN_10681e40(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10681ea0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10681e70; body size 33 bytes.
#line 1 "ENTRY_10681e70"

void __thiscall Recovered_Bulk::FUN_10681e70(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10681f80(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10682040; body size 60 bytes.
#line 1 "ENTRY_10682040"

int __thiscall Recovered_Bulk::FUN_10682040(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10682380((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), 0), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10682c90; body size 59 bytes.
#line 1 "ENTRY_10682c90"

void __thiscall Recovered_Bulk::FUN_10682c90(undefined4 *param_2)
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
  thunk_FUN_10681b80(puVar1,param_2);
  return;
}


// Reference entry 10682fc0; body size 41 bytes.
#line 1 "ENTRY_10682fc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10682fc0(int *param_2)
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


// Reference entry 10683030; body size 41 bytes.
#line 1 "ENTRY_10683030"

undefined4 * __thiscall Recovered_Bulk::FUN_10683030(int *param_2)
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


// Reference entry 106830d0; body size 48 bytes.
#line 1 "ENTRY_106830d0"

undefined4 * __fastcall FUN_106830d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10683110; body size 48 bytes.
#line 1 "ENTRY_10683110"

undefined4 * __fastcall FUN_10683110(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10683ed0; body size 19 bytes.
#line 1 "ENTRY_10683ed0"

void __fastcall FUN_10683ed0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10683f60; body size 19 bytes.
#line 1 "ENTRY_10683f60"

void __fastcall FUN_10683f60(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10683f80; body size 19 bytes.
#line 1 "ENTRY_10683f80"

void __fastcall FUN_10683f80(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10683fa0; body size 28 bytes.
#line 1 "ENTRY_10683fa0"

void __fastcall FUN_10683fa0(int *param_1)

{
  thunk_FUN_10681ea0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10683fd0; body size 28 bytes.
#line 1 "ENTRY_10683fd0"

void __fastcall FUN_10683fd0(int *param_1)

{
  thunk_FUN_10681f80(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10684140; body size 19 bytes.
#line 1 "ENTRY_10684140"

void __fastcall FUN_10684140(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10684160; body size 19 bytes.
#line 1 "ENTRY_10684160"

void __fastcall FUN_10684160(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10684180; body size 17 bytes.
#line 1 "ENTRY_10684180"

void __fastcall FUN_10684180(undefined4 *param_1)

{
  thunk_FUN_10681930(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 106841a0; body size 28 bytes.
#line 1 "ENTRY_106841a0"

void __fastcall FUN_106841a0(int *param_1)

{
  thunk_FUN_10681ea0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 106841d0; body size 28 bytes.
#line 1 "ENTRY_106841d0"

void __fastcall FUN_106841d0(int *param_1)

{
  thunk_FUN_10681f80(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10684c90; body size 45 bytes.
#line 1 "ENTRY_10684c90"

undefined4 * __thiscall Recovered_Bulk::FUN_10684c90(byte param_2)
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


// Reference entry 10684e90; body size 32 bytes.
#line 1 "ENTRY_10684e90"

undefined4 __thiscall Recovered_Bulk::FUN_10684e90(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10684390();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10684f40; body size 32 bytes.
#line 1 "ENTRY_10684f40"

undefined4 __thiscall Recovered_Bulk::FUN_10684f40(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106844d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4)(param_1);
}


// Reference entry 10684f70; body size 32 bytes.
#line 1 "ENTRY_10684f70"

undefined4 __thiscall Recovered_Bulk::FUN_10684f70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106845c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }
  return (undefined4)(param_1);
}


// Reference entry 10684fa0; body size 38 bytes.
#line 1 "ENTRY_10684fa0"

undefined4 * __thiscall Recovered_Bulk::FUN_10684fa0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCVerifyUrlPostRequest);
  thunk_FUN_106845c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10685030; body size 25 bytes.
#line 1 "ENTRY_10685030"

void __fastcall FUN_10685030(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10685050; body size 25 bytes.
#line 1 "ENTRY_10685050"

void __fastcall FUN_10685050(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10685190; body size 20 bytes.
#line 1 "ENTRY_10685190"

void __thiscall Recovered_Bulk::FUN_10685190(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10681930(param_2,param_3,param_1);
  return;
}


// Reference entry 10685f50; body size 33 bytes.
#line 1 "ENTRY_10685f50"

void __fastcall FUN_10685f50(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10681ea0(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10686070; body size 61 bytes.
#line 1 "ENTRY_10686070"

undefined4 FUN_10686070(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_106823f0((uint)&local_c,param_1), 0);
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)), 0);
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 106863b0; body size 60 bytes.
#line 1 "ENTRY_106863b0"

void __stdcall FUN_106863b0(int param_1,int param_2)

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


// Reference entry 10687270; body size 33 bytes.
#line 1 "ENTRY_10687270"

void __stdcall FUN_10687270(undefined4 param_1,undefined2 param_2)

{
  thunk_FUN_112af4e0("SCReceiptSessionVerify",3,"Operation Completed for SerialNum %d with Code: %d"
                     ,param_1,param_2);
  return;
}


// Reference entry 10687780; body size 59 bytes.
#line 1 "ENTRY_10687780"

void __thiscall Recovered_Bulk::FUN_10687780(undefined4 *param_2)
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
  thunk_FUN_10681b80(puVar1,param_2);
  return;
}


// Reference entry 106877d0; body size 60 bytes.
#line 1 "ENTRY_106877d0"

undefined4 * __thiscall Recovered_Bulk::FUN_106877d0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"), 0);
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if ((int *)(param_1) != (int *)(0x0)) {
      (**(code **)(*param_1 + 4))();
    }
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);
}


// Reference entry 10687820; body size 60 bytes.
#line 1 "ENTRY_10687820"

undefined4 * __thiscall Recovered_Bulk::FUN_10687820(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"), 0);
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if ((int *)(param_1) != (int *)(0x0)) {
      (**(code **)(*param_1 + 4))();
    }
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);
}


// Reference entry 10687e00; body size 21 bytes.
#line 1 "ENTRY_10687e00"

undefined4 * __thiscall Recovered_Bulk::FUN_10687e00(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (undefined4 *)(param_1);
}


// Reference entry 10687e20; body size 27 bytes.
#line 1 "ENTRY_10687e20"

undefined4 * __fastcall FUN_10687e20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10687fe0; body size 41 bytes.
#line 1 "ENTRY_10687fe0"

undefined4 * __thiscall Recovered_Bulk::FUN_10687fe0(int *param_2)
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


// Reference entry 106885a0; body size 46 bytes.
#line 1 "ENTRY_106885a0"

undefined4 * __thiscall Recovered_Bulk::FUN_106885a0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCShare);
  puVar2 = (undefined4 *)((undefined4 *)(param_2 + 8));
  puVar3 = (undefined4 *)(param_1 + 2);
  for (iVar1 = (int)(0x302); iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = (undefined4)(*puVar2);
    puVar2 = (undefined4 *)(puVar2 + 1);
    puVar3 = (undefined4 *)(puVar3 + 1);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106888d0; body size 19 bytes.
#line 1 "ENTRY_106888d0"

void __fastcall FUN_106888d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 106888f0; body size 19 bytes.
#line 1 "ENTRY_106888f0"

void __fastcall FUN_106888f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10688e80; body size 36 bytes.
#line 1 "ENTRY_10688e80"

int __thiscall Recovered_Bulk::FUN_10688e80(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  puVar2 = (undefined4 *)((undefined4 *)(param_2 + 8));
  puVar3 = (undefined4 *)((undefined4 *)(param_1 + 8));
  for (iVar1 = (int)(0x302); iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = (undefined4)(*puVar2);
    puVar2 = (undefined4 *)(puVar2 + 1);
    puVar3 = (undefined4 *)(puVar3 + 1);
  }
  return (int)(param_1);
}


// Reference entry 10689120; body size 38 bytes.
#line 1 "ENTRY_10689120"

undefined4 * __thiscall Recovered_Bulk::FUN_10689120(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10689150; body size 45 bytes.
#line 1 "ENTRY_10689150"

undefined4 * __thiscall Recovered_Bulk::FUN_10689150(byte param_2)
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


// Reference entry 10689190; body size 45 bytes.
#line 1 "ENTRY_10689190"

undefined4 * __thiscall Recovered_Bulk::FUN_10689190(byte param_2)
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


// Reference entry 106891d0; body size 32 bytes.
#line 1 "ENTRY_106891d0"

undefined4 __thiscall Recovered_Bulk::FUN_106891d0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10688910();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10689200; body size 58 bytes.
#line 1 "ENTRY_10689200"

undefined4 * __thiscall Recovered_Bulk::FUN_10689200(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDCreateObjectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDCreateObjectAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDCreateObjectAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x11bd0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10689250; body size 33 bytes.
#line 1 "ENTRY_10689250"

undefined4 * __thiscall Recovered_Bulk::FUN_10689250(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10689280; body size 33 bytes.
#line 1 "ENTRY_10689280"

undefined4 * __thiscall Recovered_Bulk::FUN_10689280(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10689450; body size 35 bytes.
#line 1 "ENTRY_10689450"

SCShare * __thiscall Recovered_Bulk::FUN_10689450(byte param_2)
{
  SCShare *param_1 = (SCShare *)this;
  ((SCShare *)(param_1))->op_dtor();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc10);
  }
  return (SCShare *)(param_1);
}


// Reference entry 1068a3c0; body size 21 bytes.
#line 1 "ENTRY_1068a3c0"

SCStr * __stdcall FUN_1068a3c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCRemoveShareActionDescriptor");
  return (SCStr *)(param_1);
}


// Reference entry 1068a5a0; body size 21 bytes.
#line 1 "ENTRY_1068a5a0"

SCStr * __stdcall FUN_1068a5a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 1068a5c0; body size 21 bytes.
#line 1 "ENTRY_1068a5c0"

SCStr * __stdcall FUN_1068a5c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryEdit");
  return (SCStr *)(param_1);
}


// Reference entry 1068a700; body size 35 bytes.
#line 1 "ENTRY_1068a700"

SCStr * __stdcall FUN_1068a700(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2114,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 1068a750; body size 29 bytes.
#line 1 "ENTRY_1068a750"

undefined4 __stdcall FUN_1068a750(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (param_2 != 1) {
    iVar1 = (int)(param_2);
  }
  thunk_FUN_10210b20(param_1,iVar1);
  return (undefined4)(param_1);
}


// Reference entry 1068a780; body size 21 bytes.
#line 1 "ENTRY_1068a780"

SCStr * __stdcall FUN_1068a780(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 1068ad60; body size 26 bytes.
#line 1 "ENTRY_1068ad60"

uint __fastcall FUN_1068ad60(int param_1)

{
  uint in_EAX;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x38));
  if (iVar1 != 0) {
    iVar1 = (int)(*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8));
    in_EAX = (uint)(0);
    if (iVar1 >> 3 != 0) {
      return (uint)(((uint)((int3)(iVar1 >> 0xb)) << 8 | (uint)(1)));
    }
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1068be50; body size 56 bytes.
#line 1 "ENTRY_1068be50"

void __thiscall Recovered_Bulk::FUN_1068be50(int param_2)
{
  int param_1 = (int )this;
  if (param_2 != 0) {
    thunk_FUN_103d6930(param_2);
    thunk_FUN_112af4e0("SCShareManager",5,"Remove Event Sink %p empty:%i",param_2,
                       *(int *)(param_1 + 0x20) == 0);
  }
  return;
}


// Reference entry 1068c010; body size 18 bytes.
#line 1 "ENTRY_1068c010"

void __fastcall FUN_1068c010(int param_1)

{
  if (*(void **)(param_1 + 0x7f8) != (void *)((0x0))) {
    free(*(void **)(param_1 + 0x7f8));
  }
  return;
}


// Reference entry 1068d470; body size 40 bytes.
#line 1 "ENTRY_1068d470"

int __thiscall Recovered_Bulk::FUN_1068d470(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_1068d4b0((uint)&local_8,param_2,param_3), 0);
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 10690430; body size 59 bytes.
#line 1 "ENTRY_10690430"

void __thiscall Recovered_Bulk::FUN_10690430(undefined4 *param_2)
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
  thunk_FUN_1068cc80(puVar1,param_2);
  return;
}


// Reference entry 10690480; body size 59 bytes.
#line 1 "ENTRY_10690480"

void __thiscall Recovered_Bulk::FUN_10690480(undefined4 *param_2)
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
  thunk_FUN_1068cf40(puVar1,param_2);
  return;
}


// Reference entry 10690d80; body size 24 bytes.
#line 1 "ENTRY_10690d80"

undefined4 * __thiscall Recovered_Bulk::FUN_10690d80(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10690da0; body size 24 bytes.
#line 1 "ENTRY_10690da0"

undefined4 * __thiscall Recovered_Bulk::FUN_10690da0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106912c0; body size 39 bytes.
#line 1 "ENTRY_106912c0"

undefined4 * __fastcall FUN_106912c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10691aa0; body size 18 bytes.
#line 1 "ENTRY_10691aa0"

undefined4 __fastcall FUN_10691aa0(undefined4 param_1)

{
  thunk_FUN_106912f0();
  return (undefined4)(param_1);
}


// Reference entry 10692270; body size 60 bytes.
#line 1 "ENTRY_10692270"

void __fastcall FUN_10692270(int *param_1)

{
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


// Reference entry 106922d0; body size 60 bytes.
#line 1 "ENTRY_106922d0"

void __fastcall FUN_106922d0(int *param_1)

{
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


// Reference entry 10692330; body size 19 bytes.
#line 1 "ENTRY_10692330"

void __fastcall FUN_10692330(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 10692350; body size 33 bytes.
#line 1 "ENTRY_10692350"

void __fastcall FUN_10692350(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10692540; body size 19 bytes.
#line 1 "ENTRY_10692540"

void __fastcall FUN_10692540(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 10692580; body size 17 bytes.
#line 1 "ENTRY_10692580"

void __fastcall FUN_10692580(undefined4 *param_1)

{
  thunk_FUN_1068c930(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 106925a0; body size 17 bytes.
#line 1 "ENTRY_106925a0"

void __fastcall FUN_106925a0(undefined4 *param_1)

{
  thunk_FUN_1026e550(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 106925c0; body size 17 bytes.
#line 1 "ENTRY_106925c0"

void __fastcall FUN_106925c0(undefined4 *param_1)

{
  thunk_FUN_10272f30(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 106925e0; body size 33 bytes.
#line 1 "ENTRY_106925e0"

void __fastcall FUN_106925e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10692610; body size 55 bytes.
#line 1 "ENTRY_10692610"

void __fastcall FUN_10692610(int *param_1)

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


// Reference entry 10692960; body size 18 bytes.
#line 1 "ENTRY_10692960"

void __fastcall FUN_10692960(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x38);
  }
  return;
}


// Reference entry 10692980; body size 18 bytes.
#line 1 "ENTRY_10692980"

void __fastcall FUN_10692980(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x38);
  }
  return;
}


// Reference entry 106936f0; body size 32 bytes.
#line 1 "ENTRY_106936f0"

undefined4 __thiscall Recovered_Bulk::FUN_106936f0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10692780();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,100);
  }
  return (undefined4)(param_1);
}


// Reference entry 10693740; body size 25 bytes.
#line 1 "ENTRY_10693740"

void __fastcall FUN_10693740(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10693880; body size 29 bytes.
#line 1 "ENTRY_10693880"

void __fastcall FUN_10693880(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[2]);
  param_1[2] = (int)(*piVar1);
  thunk_FUN_1148a50e(piVar1,0x10);
  *(int*)(*param_1 + 4) = (int)(*(int *)(*param_1 + 4) + -1);
  return;
}


// Reference entry 10693e30; body size 20 bytes.
#line 1 "ENTRY_10693e30"

void __thiscall Recovered_Bulk::FUN_10693e30(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1068c930(param_2,param_3,param_1);
  return;
}


// Reference entry 10693e50; body size 17 bytes.
#line 1 "ENTRY_10693e50"

void __stdcall FUN_10693e50(undefined4 *param_1)

{
  FUN_10692b90(*param_1);
  return;
}


// Reference entry 106944c0; body size 33 bytes.
#line 1 "ENTRY_106944c0"

void __fastcall FUN_106944c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10695460; body size 59 bytes.
#line 1 "ENTRY_10695460"

void __stdcall FUN_10695460(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x28);
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


// Reference entry 106967c0; body size 27 bytes.
#line 1 "ENTRY_106967c0"

undefined4 __thiscall Recovered_Bulk::FUN_106967c0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uStack_4;
  
  uStack_4 = (undefined4)(param_1);
  thunk_FUN_10116710(param_1 + 0x2c,(int)&uStack_4 + 3);
  return (undefined4)(param_2);
}


// Reference entry 106967f0; body size 40 bytes.
#line 1 "ENTRY_106967f0"

bool FUN_106967f0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_c [12];
  
  piVar3 = (int *)((int *)thunk_FUN_10695a20((uint)&local_c), 0);
  iVar1 = (int)(piVar3[1]);
  iVar2 = (int)(*piVar3);
  thunk_FUN_1026fe20();
  return (bool)(iVar1 - iVar2 >> 3 != 0);
}


// Reference entry 10696ac0; body size 59 bytes.
#line 1 "ENTRY_10696ac0"

void __thiscall Recovered_Bulk::FUN_10696ac0(undefined4 *param_2)
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
  thunk_FUN_1068cc80(puVar1,param_2);
  return;
}


// Reference entry 10696b10; body size 59 bytes.
#line 1 "ENTRY_10696b10"

void __thiscall Recovered_Bulk::FUN_10696b10(undefined4 *param_2)
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
  thunk_FUN_1068cf40(puVar1,param_2);
  return;
}


// Reference entry 10696fc0; body size 41 bytes.
#line 1 "ENTRY_10696fc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10696fc0(int *param_2)
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


// Reference entry 10697be0; body size 45 bytes.
#line 1 "ENTRY_10697be0"

undefined4 * __thiscall Recovered_Bulk::FUN_10697be0(byte param_2)
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


// Reference entry 10699550; body size 21 bytes.
#line 1 "ENTRY_10699550"

SCStr * __stdcall FUN_10699550(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("RunWizard.AddAccount");
  return (SCStr *)(param_1);
}


// Reference entry 10699570; body size 21 bytes.
#line 1 "ENTRY_10699570"

SCStr * __stdcall FUN_10699570(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10699590; body size 21 bytes.
#line 1 "ENTRY_10699590"

SCStr * __stdcall FUN_10699590(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCMusicServiceShowMenuAction");
  return (SCStr *)(param_1);
}


// Reference entry 106995b0; body size 21 bytes.
#line 1 "ENTRY_106995b0"

SCStr * __stdcall FUN_106995b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 106995d0; body size 21 bytes.
#line 1 "ENTRY_106995d0"

SCStr * __stdcall FUN_106995d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 106995f0; body size 21 bytes.
#line 1 "ENTRY_106995f0"

SCStr * __stdcall FUN_106995f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10699610; body size 21 bytes.
#line 1 "ENTRY_10699610"

SCStr * __stdcall FUN_10699610(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10699630; body size 21 bytes.
#line 1 "ENTRY_10699630"

SCStr * __stdcall FUN_10699630(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10699700; body size 30 bytes.
#line 1 "ENTRY_10699700"

SCStr * __thiscall Recovered_Bulk::FUN_10699700(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x14));
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_1 + 0x18));
  return (SCStr *)(param_2);
}


// Reference entry 10699730; body size 35 bytes.
#line 1 "ENTRY_10699730"

SCStr * __stdcall FUN_10699730(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x205f,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10699760; body size 35 bytes.
#line 1 "ENTRY_10699760"

SCStr * __stdcall FUN_10699760(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1fb7,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10699790; body size 35 bytes.
#line 1 "ENTRY_10699790"

SCStr * __stdcall FUN_10699790(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2a3,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 106997c0; body size 20 bytes.
#line 1 "ENTRY_106997c0"

SCStr * __thiscall Recovered_Bulk::FUN_106997c0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10699a70; body size 39 bytes.
#line 1 "ENTRY_10699a70"

undefined4 * __fastcall FUN_10699a70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

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


// Reference entry 1069abb0; body size 41 bytes.
#line 1 "ENTRY_1069abb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1069abb0(int *param_2)
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


// Reference entry 1069abf0; body size 41 bytes.
#line 1 "ENTRY_1069abf0"

undefined4 * __thiscall Recovered_Bulk::FUN_1069abf0(int *param_2)
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


// Reference entry 1069ac80; body size 41 bytes.
#line 1 "ENTRY_1069ac80"

undefined4 * __thiscall Recovered_Bulk::FUN_1069ac80(int *param_2)
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


// Reference entry 1069acc0; body size 41 bytes.
#line 1 "ENTRY_1069acc0"

undefined4 * __thiscall Recovered_Bulk::FUN_1069acc0(int *param_2)
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


// Reference entry 1069ad00; body size 24 bytes.
#line 1 "ENTRY_1069ad00"

undefined4 * __thiscall Recovered_Bulk::FUN_1069ad00(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1069ad20; body size 24 bytes.
#line 1 "ENTRY_1069ad20"

undefined4 * __thiscall Recovered_Bulk::FUN_1069ad20(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1069b150; body size 39 bytes.
#line 1 "ENTRY_1069b150"

undefined4 * __fastcall FUN_1069b150(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1069bf60; body size 19 bytes.
#line 1 "ENTRY_1069bf60"

void __fastcall FUN_1069bf60(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 1069bf80; body size 33 bytes.
#line 1 "ENTRY_1069bf80"

void __fastcall FUN_1069bf80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1069c160; body size 33 bytes.
#line 1 "ENTRY_1069c160"

void __fastcall FUN_1069c160(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1069c190; body size 25 bytes.
#line 1 "ENTRY_1069c190"

void __fastcall FUN_1069c190(undefined4 *param_1)

{
  thunk_FUN_10699d60(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 1069cbf0; body size 27 bytes.
#line 1 "ENTRY_1069cbf0"

int __stdcall FUN_1069cbf0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10699fb0((uint)&local_8,param_1), 0);
  return (int)(*piVar1 + 0xc);
}


// Reference entry 1069d400; body size 45 bytes.
#line 1 "ENTRY_1069d400"

undefined4 * __thiscall Recovered_Bulk::FUN_1069d400(byte param_2)
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


// Reference entry 1069d440; body size 45 bytes.
#line 1 "ENTRY_1069d440"

undefined4 * __thiscall Recovered_Bulk::FUN_1069d440(byte param_2)
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


// Reference entry 1069d480; body size 45 bytes.
#line 1 "ENTRY_1069d480"

undefined4 * __thiscall Recovered_Bulk::FUN_1069d480(byte param_2)
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


// Reference entry 1069d4c0; body size 45 bytes.
#line 1 "ENTRY_1069d4c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1069d4c0(byte param_2)
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


// Reference entry 1069d500; body size 32 bytes.
#line 1 "ENTRY_1069d500"

undefined4 __thiscall Recovered_Bulk::FUN_1069d500(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1069c2e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }
  return (undefined4)(param_1);
}


// Reference entry 1069d6a0; body size 38 bytes.
#line 1 "ENTRY_1069d6a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1069d6a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCatalogRequest);
  thunk_FUN_10bf0290();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1069d6f0; body size 25 bytes.
#line 1 "ENTRY_1069d6f0"

void __fastcall FUN_1069d6f0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 1069d8b0; body size 19 bytes.
#line 1 "ENTRY_1069d8b0"

void __thiscall Recovered_Bulk::FUN_1069d8b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1069d8d0; body size 21 bytes.
#line 1 "ENTRY_1069d8d0"

void __thiscall Recovered_Bulk::FUN_1069d8d0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 1069d9a0; body size 17 bytes.
#line 1 "ENTRY_1069d9a0"

void __stdcall FUN_1069d9a0(undefined4 *param_1)

{
  FUN_1069ccd0(*param_1);
  return;
}


// Reference entry 1069dda0; body size 19 bytes.
#line 1 "ENTRY_1069dda0"

void __thiscall Recovered_Bulk::FUN_1069dda0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1069e110; body size 33 bytes.
#line 1 "ENTRY_1069e110"

void __fastcall FUN_1069e110(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1069e1b0; body size 25 bytes.
#line 1 "ENTRY_1069e1b0"

void __fastcall FUN_1069e1b0(undefined4 *param_1)

{
  thunk_FUN_10699d60(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 1069e280; body size 61 bytes.
#line 1 "ENTRY_1069e280"

void __thiscall Recovered_Bulk::FUN_1069e280(int *param_2)
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


// Reference entry 1069e940; body size 32 bytes.
#line 1 "ENTRY_1069e940"

void __fastcall FUN_1069e940(int *param_1)

{
  thunk_FUN_10699d60(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 1069e970; body size 24 bytes.
#line 1 "ENTRY_1069e970"

void __fastcall FUN_1069e970(undefined4 *param_1)

{
  thunk_FUN_10272f30(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 1069e990; body size 45 bytes.
#line 1 "ENTRY_1069e990"

undefined4 * __thiscall Recovered_Bulk::FUN_1069e990(undefined4 *param_2)
{
  int param_1 = (int )this;
  if ((*(char **)(param_1 + 8) != (char *)((0x0))) && (**(char **)(param_1 + 8) != '\0')) {
    thunk_FUN_1069e690(param_2,param_1 + 8);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);
}


// Reference entry 1069ed80; body size 35 bytes.
#line 1 "ENTRY_1069ed80"

void __thiscall Recovered_Bulk::FUN_1069ed80(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0x3c), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 1069edb0; body size 35 bytes.
#line 1 "ENTRY_1069edb0"

void __thiscall Recovered_Bulk::FUN_1069edb0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0x3c), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 106a12f0; body size 41 bytes.
#line 1 "ENTRY_106a12f0"

undefined4 * __thiscall Recovered_Bulk::FUN_106a12f0(int *param_2)
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


// Reference entry 106a1470; body size 19 bytes.
#line 1 "ENTRY_106a1470"

void __fastcall FUN_106a1470(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 106a1500; body size 60 bytes.
#line 1 "ENTRY_106a1500"

void __fastcall FUN_106a1500(int *param_1)

{
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


// Reference entry 106a1670; body size 45 bytes.
#line 1 "ENTRY_106a1670"

undefined4 * __thiscall Recovered_Bulk::FUN_106a1670(byte param_2)
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


// Reference entry 106a16b0; body size 33 bytes.
#line 1 "ENTRY_106a16b0"

undefined4 * __thiscall Recovered_Bulk::FUN_106a16b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106a2b90; body size 59 bytes.
#line 1 "ENTRY_106a2b90"

undefined4 __thiscall Recovered_Bulk::FUN_106a2b90(SCStr *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_8 [8];
  
  iVar1 = (int)(*(int *)(param_1 + 4));
  uVar2 = (uint)(((SCStr *)(param_2))->hash(), 0);
  iVar3 = (int)(thunk_FUN_10117000((uint)&local_8,param_2,uVar2), 0);
  iVar3 = (int)(*(int *)(iVar3 + 4));
  if (iVar3 == 0) {
    iVar3 = (int)(*(int *)(param_1 + 4));
  }
  return (undefined4)(((uint)((int3)((uint)iVar3 >> 8)) << 8 | (uint)(iVar3 != iVar1)));
}


// Reference entry 106a30e0; body size 62 bytes.
#line 1 "ENTRY_106a30e0"

int __thiscall Recovered_Bulk::FUN_106a30e0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_106a3130((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (cVar1 = (char)(thunk_FUN_106a48e0(param_2,local_4 + 0x10), 0), cVar1 == '\0')) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 106a36e0; body size 26 bytes.
#line 1 "ENTRY_106a36e0"

bool FUN_106a36e0(char param_1,FILE *param_2)

{
  int iVar1;
  
  iVar1 = (int)(fputc((int)param_1,param_2), 0);
  return (bool)(iVar1 != -1);
}


// Reference entry 106a3af0; body size 48 bytes.
#line 1 "ENTRY_106a3af0"

undefined4 * __fastcall FUN_106a3af0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 106a40d0; body size 48 bytes.
#line 1 "ENTRY_106a40d0"

undefined4 * __thiscall Recovered_Bulk::FUN_106a40d0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  *(undefined8*)(param_1 + 1) = (undefined8)(0);
  __std_exception_copy(param_2 + 4,param_1 + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_bad_cast);
  return (undefined4 *)(param_1);
}


// Reference entry 106a4110; body size 24 bytes.
#line 1 "ENTRY_106a4110"

undefined4 * __fastcall FUN_106a4110(undefined4 *param_1)

{
  *(undefined8*)(param_1 + 1) = (undefined8)(0);
  param_1[1] = (undefined4)("bad cast");
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_bad_cast);
  return (undefined4 *)(param_1);
}


// Reference entry 106a41d0; body size 19 bytes.
#line 1 "ENTRY_106a41d0"

void __fastcall FUN_106a41d0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x20);
  }
  return;
}


// Reference entry 106a4400; body size 25 bytes.
#line 1 "ENTRY_106a4400"

void __fastcall FUN_106a4400(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
    puVar1 = (undefined4 *)((undefined4 *)(**(code **)(**(int **)(param_1 + 4) + 8))(), 0);
    if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}


// Reference entry 106a4e00; body size 38 bytes.
#line 1 "ENTRY_106a4e00"

int __thiscall Recovered_Bulk::FUN_106a4e00(byte param_2)
{
  int param_1 = (int )this;
  thunk_FUN_106a4c50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1 + -0x78,0xc0);
  }
  return (int)(param_1 + -0x78);
}


// Reference entry 106a4e30; body size 45 bytes.
#line 1 "ENTRY_106a4e30"

undefined4 * __thiscall Recovered_Bulk::FUN_106a4e30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106a5460; body size 16 bytes.
#line 1 "ENTRY_106a5460"

void __fastcall FUN_106a5460(int param_1)

{
  if (*(FILE **)(param_1 + 0x4c) != (FILE *)((0x0))) {
    _lock_file(*(FILE **)(param_1 + 0x4c));
  }
  return;
}


// Reference entry 106a54f0; body size 35 bytes.
#line 1 "ENTRY_106a54f0"

/* Library Function - Single Match
    private: void __thiscall std::basic_filebuf<char,struct std::char_traits<char>
   >::_Reset_back_106a54f0(void_)
   
Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */void __thiscall Recovered_Bulk::FUN_106a54f0(void)
{
  basic_filebuf<char,std::char_traits<char>> *this_ = (basic_filebuf<char,std::char_traits<char>> *)this;
  int iVar1;
  int iVar2;
  
  if ((basic_filebuf<char,std::char_traits<char>> *)**(int **)(this_ + 0xc) == (basic_filebuf<char,std::char_traits<char>> *)(this_) + 0x3c) {
    iVar1 = (int)(*(int *)(this_ + 0x50));
    iVar2 = (int)(*(int *)(this_ + 0x54));
    **(int**)(this_ + 0xc) = (int)(iVar1);
    **(int**)(this_ + 0x1c) = (int)(iVar1);
    **(int**)(this_ + 0x2c) = (int)(iVar2 - iVar1);
  }
  return;
}


// Reference entry 106a55d0; body size 26 bytes.
#line 1 "ENTRY_106a55d0"

void FUN_106a55d0(void)

{
  undefined1 local_c [12];
  
  thunk_FUN_106a4110();
                    
  _CxxThrowException((uint)&local_c,(ThrowInfo *)&DAT_11e2f6dc);
}


// Reference entry 106a5600; body size 16 bytes.
#line 1 "ENTRY_106a5600"

void __fastcall FUN_106a5600(int param_1)

{
  if (*(FILE **)(param_1 + 0x4c) != (FILE *)((0x0))) {
    _unlock_file(*(FILE **)(param_1 + 0x4c));
  }
  return;
}


// Reference entry 106a65c0; body size 33 bytes.
#line 1 "ENTRY_106a65c0"

void __fastcall FUN_106a65c0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_106a6540(), 0);
  if (iVar1 == 0) {
    ((std::basic_ios<> *)((basic_ios<char,std::char_traits<char>> *)(*(int *)(*param_1 + 4) + (int)param_1)))->setstate(2,
               false);
  }
  return;
}


// Reference entry 106a6e50; body size 58 bytes.
#line 1 "ENTRY_106a6e50"

void __thiscall Recovered_Bulk::FUN_106a6e50(undefined4 param_2)
{
  basic_streambuf<char,std::char_traits<char>> *param_1 = (basic_streambuf<char,std::char_traits<char>> *)this;
  bool bVar1;
  std_codecvt_base *this_;
  
  this_ = (std_codecvt_base *)((codecvt_base *)thunk_FUN_106a39d0(param_2), 0);
  bVar1 = (bool)(((std::codecvt_base *)(this_))->always_noconv(), 0);
  if (bVar1) {
    *(undefined4*)(param_1 + 0x38) = (undefined4)(0);
    return;
  }
  *(codecvt_base**)(param_1 + 0x38) = (codecvt_base *)(this_);
  ((std::basic_streambuf<> *)(param_1))->_Init();
  return;
}


// Reference entry 106a7f50; body size 46 bytes.
#line 1 "ENTRY_106a7f50"

undefined4 __fastcall FUN_106a7f50(int *param_1)

{
  int iVar1;
  
  if (param_1[0x13] != 0) {
    iVar1 = (int)((**(code **)(*param_1 + 0xc))(0xffffffff), 0);
    if (iVar1 != -1) {
      iVar1 = (int)(fflush((FILE *)param_1[0x13]), 0);
      if (iVar1 < 0) {
        return (undefined4)(0xffffffff);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 106a8380; body size 61 bytes.
#line 1 "ENTRY_106a8380"

/* Library Function - Single Match
    protected: virtual int __thiscall std::basic_filebuf<char,struct std::char_traits<char>
   >::underflow(void_)
   
Library: Visual Studio 2019 Release */int __thiscall Recovered_Bulk::FUN_106a8380(void)
{
  basic_filebuf<char,std::char_traits<char>> *this_ = (basic_filebuf<char,std::char_traits<char>> *)this;
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)((byte *)**(undefined4 **)(this_ + 0x1c), 0);
  if (((byte *)(pbVar1) != (byte *)(0x0)) && ((byte *)(pbVar1) < (byte *)(pbVar1) + **(int **)(this_ + 0x2c))) {
    return (int)((uint)*pbVar1);
  }
  iVar2 = (int)((**(code **)(*(int *)this_ + 0x1c))(), 0);
  if (iVar2 == -1) {
    return (int)(-1);
  }
  (**(code **)(*(int *)this_ + 0x10))(iVar2);
  return (int)(iVar2);
}


// Reference entry 106aa2c0; body size 36 bytes.
#line 1 "ENTRY_106aa2c0"

void __thiscall Recovered_Bulk::FUN_106aa2c0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)(*(SCStr **)(param_1 + 4), 0);
  ((SCStr *)(this_))->op_ctor(param_2);
  this_[4] = (SCStr)(param_2[4]);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 106aa370; body size 36 bytes.
#line 1 "ENTRY_106aa370"

void __thiscall Recovered_Bulk::FUN_106aa370(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)(*(SCStr **)(param_1 + 4), 0);
  ((SCStr *)(this_))->op_ctor(param_2);
  this_[4] = (SCStr)(param_2[4]);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 106aa470; body size 36 bytes.
#line 1 "ENTRY_106aa470"

void __thiscall Recovered_Bulk::FUN_106aa470(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)(*(SCStr **)(param_1 + 4), 0);
  ((SCStr *)(this_))->op_ctor(param_2);
  this_[4] = (SCStr)(param_2[4]);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 106ab490; body size 33 bytes.
#line 1 "ENTRY_106ab490"

void __thiscall Recovered_Bulk::FUN_106ab490(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_106ab4f0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 106ab4c0; body size 33 bytes.
#line 1 "ENTRY_106ab4c0"

void __thiscall Recovered_Bulk::FUN_106ab4c0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_106ab5b0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x28);
  return;
}


// Reference entry 106ab730; body size 40 bytes.
#line 1 "ENTRY_106ab730"

int __thiscall Recovered_Bulk::FUN_106ab730(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_106ab7b0((uint)&local_8,param_2,param_3), 0);
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 106ab770; body size 49 bytes.
#line 1 "ENTRY_106ab770"

int __thiscall Recovered_Bulk::FUN_106ab770(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_106ab920((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || ((int)(*param_2) < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 106af240; body size 59 bytes.
#line 1 "ENTRY_106af240"

void __thiscall Recovered_Bulk::FUN_106af240(undefined4 *param_2)
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
  thunk_FUN_106aa870(puVar1,param_2);
  return;
}


// Reference entry 106af2d0; body size 59 bytes.
#line 1 "ENTRY_106af2d0"

void __thiscall Recovered_Bulk::FUN_106af2d0(undefined4 *param_2)
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
  thunk_FUN_106aabe0(puVar1,param_2);
  return;
}


// Reference entry 106af320; body size 59 bytes.
#line 1 "ENTRY_106af320"

void __thiscall Recovered_Bulk::FUN_106af320(undefined4 *param_2)
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
  thunk_FUN_106aaea0(puVar1,param_2);
  return;
}


// Reference entry 106af6d0; body size 55 bytes.
#line 1 "ENTRY_106af6d0"

void __thiscall Recovered_Bulk::FUN_106af6d0(int *param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  undefined1 local_8 [8];
  
  uVar1 = (uint)(((SCStr *)(param_3))->hash(), 0);
  iVar2 = (int)(thunk_FUN_106ab7b0((uint)&local_8,param_3,uVar1), 0);
  iVar2 = (int)(*(int *)(iVar2 + 4));
  if (iVar2 == 0) {
    iVar2 = (int)(*(int *)(param_1 + 4));
  }
  *param_2 = (int)(iVar2);
  return;
}


// Reference entry 106b05a0; body size 41 bytes.
#line 1 "ENTRY_106b05a0"

undefined4 * __thiscall Recovered_Bulk::FUN_106b05a0(int *param_2)
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


// Reference entry 106b0640; body size 41 bytes.
#line 1 "ENTRY_106b0640"

undefined4 * __thiscall Recovered_Bulk::FUN_106b0640(int *param_2)
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


// Reference entry 106b0680; body size 41 bytes.
#line 1 "ENTRY_106b0680"

undefined4 * __thiscall Recovered_Bulk::FUN_106b0680(int *param_2)
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


// Reference entry 106b06c0; body size 51 bytes.
#line 1 "ENTRY_106b06c0"

int * __thiscall Recovered_Bulk::FUN_106b06c0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  *param_1 = (int)(param_2);
  param_1[1] = (int)(0);
  if (param_2 != 0) {
    piVar1 = (int *)((int *)(**(code **)(*(int *)(param_2 + 200) + 0xc))(), 0);
    param_1[1] = (int)((int)piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 106b0700; body size 24 bytes.
#line 1 "ENTRY_106b0700"

undefined4 * __thiscall Recovered_Bulk::FUN_106b0700(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106b0720; body size 24 bytes.
#line 1 "ENTRY_106b0720"

undefined4 * __thiscall Recovered_Bulk::FUN_106b0720(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106b0890; body size 48 bytes.
#line 1 "ENTRY_106b0890"

undefined4 * __fastcall FUN_106b0890(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 106b0930; body size 48 bytes.
#line 1 "ENTRY_106b0930"

undefined4 * __fastcall FUN_106b0930(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x28), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 106b1130; body size 49 bytes.
#line 1 "ENTRY_106b1130"

undefined4 * __thiscall Recovered_Bulk::FUN_106b1130(undefined4 *param_2)
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


// Reference entry 106b2380; body size 37 bytes.
#line 1 "ENTRY_106b2380"

undefined4 * __thiscall Recovered_Bulk::FUN_106b2380(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10f04dc0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductLaunchable);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCAddProductLaunchable);
  return (undefined4 *)(param_1);
}


// Reference entry 106b3510; body size 60 bytes.
#line 1 "ENTRY_106b3510"

void __fastcall FUN_106b3510(int *param_1)

{
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


// Reference entry 106b3570; body size 60 bytes.
#line 1 "ENTRY_106b3570"

void __fastcall FUN_106b3570(int *param_1)

{
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


// Reference entry 106b35d0; body size 60 bytes.
#line 1 "ENTRY_106b35d0"

void __fastcall FUN_106b35d0(int *param_1)

{
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


// Reference entry 106b3630; body size 19 bytes.
#line 1 "ENTRY_106b3630"

void __fastcall FUN_106b3630(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x20);
  }
  return;
}


// Reference entry 106b3650; body size 19 bytes.
#line 1 "ENTRY_106b3650"

void __fastcall FUN_106b3650(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x28);
  }
  return;
}


// Reference entry 106b3670; body size 33 bytes.
#line 1 "ENTRY_106b3670"

void __fastcall FUN_106b3670(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 106b3770; body size 28 bytes.
#line 1 "ENTRY_106b3770"

void __fastcall FUN_106b3770(int *param_1)

{
  thunk_FUN_106ab4f0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 106b37a0; body size 28 bytes.
#line 1 "ENTRY_106b37a0"

void __fastcall FUN_106b37a0(int *param_1)

{
  thunk_FUN_106ab5b0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x28);
  return;
}


// Reference entry 106b37d0; body size 36 bytes.
#line 1 "ENTRY_106b37d0"

void __fastcall FUN_106b37d0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    thunk_FUN_106ab5b0(*param_1,*(undefined4 *)(*piVar1 + 4));
    thunk_FUN_1148a50e(*piVar1,0x28);
  }
  return;
}


// Reference entry 106b3920; body size 19 bytes.
#line 1 "ENTRY_106b3920"

void __fastcall FUN_106b3920(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x20);
  }
  return;
}


// Reference entry 106b39f0; body size 17 bytes.
#line 1 "ENTRY_106b39f0"

void __fastcall FUN_106b39f0(undefined4 *param_1)

{
  thunk_FUN_106aa0a0(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 106b3a10; body size 17 bytes.
#line 1 "ENTRY_106b3a10"

void __fastcall FUN_106b3a10(undefined4 *param_1)

{
  thunk_FUN_10478ea0(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 106b3a30; body size 34 bytes.
#line 1 "ENTRY_106b3a30"

void __fastcall FUN_106b3a30(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
  for (param_1 = (undefined4 *)((undefined4 *)*param_1);(undefined4 *)((param_1)) != (undefined4 *)(puVar1); param_1 = param_1 + 5) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 106b3a60; body size 33 bytes.
#line 1 "ENTRY_106b3a60"

void __fastcall FUN_106b3a60(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 106b3a90; body size 28 bytes.
#line 1 "ENTRY_106b3a90"

void __fastcall FUN_106b3a90(int *param_1)

{
  thunk_FUN_106ab4f0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 106b3ac0; body size 28 bytes.
#line 1 "ENTRY_106b3ac0"

void __fastcall FUN_106b3ac0(int *param_1)

{
  thunk_FUN_106ab5b0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x28);
  return;
}


// Reference entry 106b3e80; body size 33 bytes.
#line 1 "ENTRY_106b3e80"

void __fastcall FUN_106b3e80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 106b52c0; body size 18 bytes.
#line 1 "ENTRY_106b52c0"

void __fastcall FUN_106b52c0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 106b6be0; body size 60 bytes.
#line 1 "ENTRY_106b6be0"

int __thiscall Recovered_Bulk::FUN_106b6be0(byte param_2)
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


// Reference entry 106b6d30; body size 32 bytes.
#line 1 "ENTRY_106b6d30"

undefined4 __thiscall Recovered_Bulk::FUN_106b6d30(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103d0730();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x60);
  }
  return (undefined4)(param_1);
}


// Reference entry 106b6d60; body size 32 bytes.
#line 1 "ENTRY_106b6d60"

undefined4 __thiscall Recovered_Bulk::FUN_106b6d60(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103d0730();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x60);
  }
  return (undefined4)(param_1);
}


// Reference entry 106b6f00; body size 32 bytes.
#line 1 "ENTRY_106b6f00"

undefined4 __thiscall Recovered_Bulk::FUN_106b6f00(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103d0730();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x60);
  }
  return (undefined4)(param_1);
}


// Reference entry 106b7be0; body size 35 bytes.
#line 1 "ENTRY_106b7be0"

undefined4 __thiscall Recovered_Bulk::FUN_106b7be0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106b4980();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1d8);
  }
  return (undefined4)(param_1);
}


// Reference entry 106b8190; body size 25 bytes.
#line 1 "ENTRY_106b8190"

void __fastcall FUN_106b8190(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 106b81b0; body size 25 bytes.
#line 1 "ENTRY_106b81b0"

void __fastcall FUN_106b81b0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x28), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 106b89d0; body size 19 bytes.
#line 1 "ENTRY_106b89d0"

void __thiscall Recovered_Bulk::FUN_106b89d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106b89f0; body size 19 bytes.
#line 1 "ENTRY_106b89f0"

void __thiscall Recovered_Bulk::FUN_106b89f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106b8a40; body size 50 bytes.
#line 1 "ENTRY_106b8a40"

void __thiscall Recovered_Bulk::FUN_106b8a40(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_106ab5b0(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  thunk_FUN_106a9bb0(param_2,param_2);
  return;
}


// Reference entry 106b8ac0; body size 58 bytes.
#line 1 "ENTRY_106b8ac0"

void __thiscall Recovered_Bulk::FUN_106b8ac0(char param_2)
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


// Reference entry 106b8b10; body size 21 bytes.
#line 1 "ENTRY_106b8b10"

void __thiscall Recovered_Bulk::FUN_106b8b10(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 106b8b30; body size 21 bytes.
#line 1 "ENTRY_106b8b30"

void __thiscall Recovered_Bulk::FUN_106b8b30(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 106b8b50; body size 21 bytes.
#line 1 "ENTRY_106b8b50"

void __thiscall Recovered_Bulk::FUN_106b8b50(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 106b8b70; body size 21 bytes.
#line 1 "ENTRY_106b8b70"

void __thiscall Recovered_Bulk::FUN_106b8b70(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 106b8b90; body size 21 bytes.
#line 1 "ENTRY_106b8b90"

void __thiscall Recovered_Bulk::FUN_106b8b90(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 106b8cf0; body size 20 bytes.
#line 1 "ENTRY_106b8cf0"

void __thiscall Recovered_Bulk::FUN_106b8cf0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106aa0a0(param_2,param_3,param_1);
  return;
}


// Reference entry 106b8d10; body size 36 bytes.
#line 1 "ENTRY_106b8d10"

void __stdcall FUN_106b8d10(undefined4 *param_1,undefined4 *param_2)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 5) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 106b8d40; body size 37 bytes.
#line 1 "ENTRY_106b8d40"

void __thiscall Recovered_Bulk::FUN_106b8d40(undefined4 *param_2)
{
  int param_1 = (int )this;
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 106b8d70; body size 60 bytes.
#line 1 "ENTRY_106b8d70"

bool __thiscall Recovered_Bulk::FUN_106b8d70(undefined4 *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  if (**(int **)(param_1 + 4) == 1) {
    cVar1 = (char)((**(code **)(*(int *)*param_2 + 0x20))(), 0);
    return (bool)(cVar1 == '\0');
  }
  if (**(int **)(param_1 + 4) != 2) {
    return (bool)(false);
  }
  cVar1 = (char)((**(code **)(*(int *)*param_2 + 0x24))(), 0);
  return (bool)(cVar1 == '\0');
}


// Reference entry 106b8eb0; body size 16 bytes.
#line 1 "ENTRY_106b8eb0"

void __stdcall FUN_106b8eb0(unsigned int recovered_unused_stack_0)

{
  thunk_FUN_1061c5e0(4);
  return;
}


// Reference entry 106b8f50; body size 19 bytes.
#line 1 "ENTRY_106b8f50"

bool __stdcall FUN_106b8f50(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(*(int *)*param_1 + 0x18))(), 0);
  return (bool)(iVar1 == 0);
}


// Reference entry 106ba4a0; body size 30 bytes.
#line 1 "ENTRY_106ba4a0"

int FUN_106ba4a0(int param_1)

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


// Reference entry 106ba520; body size 31 bytes.
#line 1 "ENTRY_106ba520"

int * FUN_106ba520(int *param_1)

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


// Reference entry 106ba550; body size 31 bytes.
#line 1 "ENTRY_106ba550"

int * FUN_106ba550(int *param_1)

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


// Reference entry 106ba600; body size 19 bytes.
#line 1 "ENTRY_106ba600"

void __thiscall Recovered_Bulk::FUN_106ba600(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106ba620; body size 19 bytes.
#line 1 "ENTRY_106ba620"

void __thiscall Recovered_Bulk::FUN_106ba620(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106ba670; body size 59 bytes.
#line 1 "ENTRY_106ba670"

void __thiscall Recovered_Bulk::FUN_106ba670(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_106ab5b0(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  iVar1 = (int)(*param_1);
  *param_1 = (int)(*param_2);
  *param_2 = (int)(iVar1);
  iVar1 = (int)(param_1[1]);
  param_1[1] = (int)(param_2[1]);
  param_2[1] = (int)(iVar1);
  return;
}


// Reference entry 106baa10; body size 33 bytes.
#line 1 "ENTRY_106baa10"

void __fastcall FUN_106baa10(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 106bcb40; body size 61 bytes.
#line 1 "ENTRY_106bcb40"

void __thiscall Recovered_Bulk::FUN_106bcb40(int *param_2)
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


// Reference entry 106bcb90; body size 61 bytes.
#line 1 "ENTRY_106bcb90"

void __thiscall Recovered_Bulk::FUN_106bcb90(int *param_2)
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


// Reference entry 106bcbe0; body size 61 bytes.
#line 1 "ENTRY_106bcbe0"

void __thiscall Recovered_Bulk::FUN_106bcbe0(int *param_2)
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


// Reference entry 106bd210; body size 19 bytes.
#line 1 "ENTRY_106bd210"

uint __thiscall Recovered_Bulk::FUN_106bd210(SCStr *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(((SCStr *)(param_2))->hash(), 0);
  return (uint)(uVar1 & *(uint *)(param_1 + 0x18));
}


// Reference entry 106bd440; body size 33 bytes.
#line 1 "ENTRY_106bd440"

void __fastcall FUN_106bd440(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_106ab4f0(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 106bd470; body size 33 bytes.
#line 1 "ENTRY_106bd470"

void __fastcall FUN_106bd470(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_106ab5b0(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 106bd4a0; body size 24 bytes.
#line 1 "ENTRY_106bd4a0"

void __fastcall FUN_106bd4a0(undefined4 *param_1)

{
  thunk_FUN_10478ea0(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 106bd4c0; body size 47 bytes.
#line 1 "ENTRY_106bd4c0"

void __fastcall FUN_106bd4c0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
  puVar2 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)((puVar2)) != (undefined4 *)(puVar1)) {
    do {
      (**(code **)*puVar2)(0);
      puVar2 = (undefined4 *)(puVar2 + 5);
    } while ((undefined4 *)((puVar2)) != (undefined4 *)(puVar1));
    param_1[1] = (int)(*param_1);
    return;
  }
  param_1[1] = (int)((int)puVar2);
  return;
}


// Reference entry 106bd500; body size 59 bytes.
#line 1 "ENTRY_106bd500"

void __fastcall FUN_106bd500(int param_1)

{
  *(undefined4*)(param_1 + 0x118) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x11c) = (undefined4)(0);
  thunk_FUN_1059d940(*(undefined4 *)(param_1 + 0x104));
  (**(code **)(**(int **)(param_1 + 0x124) + 0x14))(PTR_s_AllowLaunchAfter_12119b3c);
  return;
}


// Reference entry 106bdd60; body size 61 bytes.
#line 1 "ENTRY_106bdd60"

undefined4 FUN_106bdd60(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_106ab850((uint)&local_c,param_1), 0);
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)), 0);
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 106bddb0; body size 61 bytes.
#line 1 "ENTRY_106bddb0"

undefined4 FUN_106bddb0(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_1025ed70((uint)&local_c,param_1), 0);
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)), 0);
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 106be280; body size 60 bytes.
#line 1 "ENTRY_106be280"

void __stdcall FUN_106be280(int param_1,int param_2)

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


// Reference entry 106be2d0; body size 60 bytes.
#line 1 "ENTRY_106be2d0"

void __stdcall FUN_106be2d0(int param_1,int param_2)

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


// Reference entry 106be320; body size 59 bytes.
#line 1 "ENTRY_106be320"

void __stdcall FUN_106be320(int param_1,int param_2)

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


// Reference entry 106c1d10; body size 21 bytes.
#line 1 "ENTRY_106c1d10"

SCStr * __stdcall FUN_106c1d10(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("setup_engine_denylist");
  return (SCStr *)(param_1);
}


// Reference entry 106c1d30; body size 21 bytes.
#line 1 "ENTRY_106c1d30"

SCStr * __stdcall FUN_106c1d30(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("setup_engine_launchable");
  return (SCStr *)(param_1);
}


// Reference entry 106c1d50; body size 21 bytes.
#line 1 "ENTRY_106c1d50"

SCStr * __stdcall FUN_106c1d50(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("setup_engine");
  return (SCStr *)(param_1);
}


// Reference entry 106c3c90; body size 16 bytes.
#line 1 "ENTRY_106c3c90"

int FUN_106c3c90(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1033cdb0(0x17), 0);
  return (int)(iVar1 * 2);
}


// Reference entry 106c3cd0; body size 23 bytes.
#line 1 "ENTRY_106c3cd0"

undefined4 __thiscall Recovered_Bulk::FUN_106c3cd0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_106b1170(param_1 + 0x1ac);
  return (undefined4)(param_2);
}


// Reference entry 106ca070; body size 39 bytes.
#line 1 "ENTRY_106ca070"

void __stdcall FUN_106ca070(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(param_1);
  thunk_FUN_105bebd0(param_1);
  cVar1 = (char)(thunk_FUN_10e10fd0(uVar2), 0);
  if (cVar1 == '\0') {
    thunk_FUN_105bebd0(param_1);
    thunk_FUN_10e111f0(param_1);
  }
  return;
}


// Reference entry 106cc650; body size 41 bytes.
#line 1 "ENTRY_106cc650"

undefined4 __thiscall Recovered_Bulk::FUN_106cc650(undefined1 *param_2)
{
  int param_1 = (int )this;
  if ((undefined1 *)(param_2) != (undefined1 *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x90) + 0x24))(*param_2);
    thunk_FUN_1148a50e(param_2,1);
  }
  return (undefined4)(0);
}


// Reference entry 106cc6c0; body size 56 bytes.
#line 1 "ENTRY_106cc6c0"

void __thiscall Recovered_Bulk::FUN_106cc6c0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)(*(SCStr **)(param_1 + 4), 0);
  if ((SCStr *)(this_) != *(SCStr **)(param_1 + 8)) {
    ((SCStr *)(this_))->op_ctor(param_2);
    this_[4] = (SCStr)(param_2[4]);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_106aa5c0(this_,param_2);
  return;
}


// Reference entry 106cc710; body size 59 bytes.
#line 1 "ENTRY_106cc710"

void __thiscall Recovered_Bulk::FUN_106cc710(undefined4 *param_2)
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
  thunk_FUN_106aabe0(puVar1,param_2);
  return;
}


// Reference entry 106cc760; body size 59 bytes.
#line 1 "ENTRY_106cc760"

void __thiscall Recovered_Bulk::FUN_106cc760(undefined4 *param_2)
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
  thunk_FUN_106aaea0(puVar1,param_2);
  return;
}


// Reference entry 106cc7b0; body size 59 bytes.
#line 1 "ENTRY_106cc7b0"

void __thiscall Recovered_Bulk::FUN_106cc7b0(undefined4 *param_2)
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
  thunk_FUN_106aa870(puVar1,param_2);
  return;
}


// Reference entry 106cc800; body size 42 bytes.
#line 1 "ENTRY_106cc800"

void __thiscall Recovered_Bulk::FUN_106cc800(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_106aec80(param_1);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x14);
    return;
  }
  thunk_FUN_106ab040(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 106cf000; body size 56 bytes.
#line 1 "ENTRY_106cf000"

void __fastcall FUN_106cf000(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x100) != 0) &&
     (cVar1 = (char)(thunk_FUN_1059d120(*(int *)(param_1 + 0x100)), 0), cVar1 != '\0')) {
    thunk_FUN_1059d940(*(undefined4 *)(param_1 + 0x100));
  }
  thunk_FUN_106c9300();
  return;
}


// Reference entry 106cf0f0; body size 55 bytes.
#line 1 "ENTRY_106cf0f0"

void __fastcall FUN_106cf0f0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_1059d120(*(undefined4 *)(param_1 + 0x100)), 0);
  if (cVar1 != '\0') {
    thunk_FUN_1059d940(*(undefined4 *)(param_1 + 0x100));
    *(undefined4*)(param_1 + 0x100) = (undefined4)(0);
  }
  return;
}


// Reference entry 106cfe30; body size 41 bytes.
#line 1 "ENTRY_106cfe30"

undefined4 * __thiscall Recovered_Bulk::FUN_106cfe30(int *param_2)
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


// Reference entry 106d00a0; body size 33 bytes.
#line 1 "ENTRY_106d00a0"

void __fastcall FUN_106d00a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 106d00d0; body size 33 bytes.
#line 1 "ENTRY_106d00d0"

void __fastcall FUN_106d00d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 106d01d0; body size 37 bytes.
#line 1 "ENTRY_106d01d0"

int * __fastcall FUN_106d01d0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 106d02e0; body size 32 bytes.
#line 1 "ENTRY_106d02e0"

undefined4 __thiscall Recovered_Bulk::FUN_106d02e0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106cffb0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 106d0460; body size 33 bytes.
#line 1 "ENTRY_106d0460"

void __fastcall FUN_106d0460(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 106d0a70; body size 28 bytes.
#line 1 "ENTRY_106d0a70"

void __fastcall FUN_106d0a70(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x14) + 0x1c))(), 0);
  if (cVar1 != '\0') {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x14) + 0x18))();
    return;
  }
  return;
}


// Reference entry 106d0ad0; body size 23 bytes.
#line 1 "ENTRY_106d0ad0"

SCStr * __thiscall Recovered_Bulk::FUN_106d0ad0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x80));
  return (SCStr *)(param_2);
}


// Reference entry 106d1910; body size 33 bytes.
#line 1 "ENTRY_106d1910"

void __thiscall Recovered_Bulk::FUN_106d1910(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_106d1940(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 106d1a20; body size 60 bytes.
#line 1 "ENTRY_106d1a20"

int __thiscall Recovered_Bulk::FUN_106d1a20(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_106d1a70((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), 0), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 106d2480; body size 41 bytes.
#line 1 "ENTRY_106d2480"

undefined4 * __thiscall Recovered_Bulk::FUN_106d2480(int *param_2)
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


// Reference entry 106d24e0; body size 24 bytes.
#line 1 "ENTRY_106d24e0"

undefined4 * __thiscall Recovered_Bulk::FUN_106d24e0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106d2520; body size 48 bytes.
#line 1 "ENTRY_106d2520"

undefined4 * __fastcall FUN_106d2520(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 106d2ab0; body size 60 bytes.
#line 1 "ENTRY_106d2ab0"

void __fastcall FUN_106d2ab0(int *param_1)

{
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


// Reference entry 106d2b10; body size 19 bytes.
#line 1 "ENTRY_106d2b10"

void __fastcall FUN_106d2b10(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 106d2ba0; body size 28 bytes.
#line 1 "ENTRY_106d2ba0"

void __fastcall FUN_106d2ba0(int *param_1)

{
  thunk_FUN_106d1940(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 106d2c80; body size 19 bytes.
#line 1 "ENTRY_106d2c80"

void __fastcall FUN_106d2c80(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 106d2ca0; body size 28 bytes.
#line 1 "ENTRY_106d2ca0"

void __fastcall FUN_106d2ca0(int *param_1)

{
  thunk_FUN_106d1940(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 106d2fc0; body size 18 bytes.
#line 1 "ENTRY_106d2fc0"

void __fastcall FUN_106d2fc0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x10);
  }
  return;
}


// Reference entry 106d2fe0; body size 18 bytes.
#line 1 "ENTRY_106d2fe0"

void __fastcall FUN_106d2fe0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x10);
  }
  return;
}


// Reference entry 106d3500; body size 35 bytes.
#line 1 "ENTRY_106d3500"

undefined4 __thiscall Recovered_Bulk::FUN_106d3500(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106d2d60();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x85c0);
  }
  return (undefined4)(param_1);
}


// Reference entry 106d3680; body size 25 bytes.
#line 1 "ENTRY_106d3680"

void __fastcall FUN_106d3680(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 106d3760; body size 25 bytes.
#line 1 "ENTRY_106d3760"

void __thiscall Recovered_Bulk::FUN_106d3760(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  param_2[2] = (undefined4)(uVar1);
  return;
}


// Reference entry 106d3780; body size 19 bytes.
#line 1 "ENTRY_106d3780"

void __thiscall Recovered_Bulk::FUN_106d3780(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106d37a0; body size 19 bytes.
#line 1 "ENTRY_106d37a0"

void __thiscall Recovered_Bulk::FUN_106d37a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106d3850; body size 21 bytes.
#line 1 "ENTRY_106d3850"

void __thiscall Recovered_Bulk::FUN_106d3850(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return;
}


// Reference entry 106d3870; body size 21 bytes.
#line 1 "ENTRY_106d3870"

void __thiscall Recovered_Bulk::FUN_106d3870(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 106d3890; body size 21 bytes.
#line 1 "ENTRY_106d3890"

void __thiscall Recovered_Bulk::FUN_106d3890(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 106d38b0; body size 48 bytes.
#line 1 "ENTRY_106d38b0"

void __fastcall FUN_106d38b0(int param_1)

{
  int extraout_ECX;
  int iStack_c;
  
  iStack_c = (int)(param_1);
  if (*(char *)(param_1 + 0xc) != '\0') {
    iStack_c = (int)(0x106d38c2);
    thunk_FUN_106d64c0();
    iStack_c = (int)(extraout_ECX);
  }
  ((SCStr *)((SCStr *)&iStack_c))->op_ctor((SCStr *)(*(int *)(param_1 + 4) + 0x85a0));
  thunk_FUN_10f19cf0();
  return;
}


// Reference entry 106d4280; body size 31 bytes.
#line 1 "ENTRY_106d4280"

int * FUN_106d4280(int *param_1)

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


// Reference entry 106d42c0; body size 25 bytes.
#line 1 "ENTRY_106d42c0"

void __thiscall Recovered_Bulk::FUN_106d42c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  param_2[2] = (undefined4)(uVar1);
  return;
}


// Reference entry 106d42e0; body size 19 bytes.
#line 1 "ENTRY_106d42e0"

void __thiscall Recovered_Bulk::FUN_106d42e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106d4300; body size 19 bytes.
#line 1 "ENTRY_106d4300"

void __thiscall Recovered_Bulk::FUN_106d4300(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106d4c90; body size 61 bytes.
#line 1 "ENTRY_106d4c90"

void __thiscall Recovered_Bulk::FUN_106d4c90(int *param_2)
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


// Reference entry 106d4d70; body size 33 bytes.
#line 1 "ENTRY_106d4d70"

void __fastcall FUN_106d4d70(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_106d1940(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 106d56a0; body size 17 bytes.
#line 1 "ENTRY_106d56a0"

void __fastcall FUN_106d56a0(int param_1)

{
                    
                    
  (**(code **)(*(int *)(param_1 + 0x8554) + 8))();
  return;
}


// Reference entry 106d5ab0; body size 21 bytes.
#line 1 "ENTRY_106d5ab0"

SCStr * __stdcall FUN_106d5ab0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("ControllerUPnPClient");
  return (SCStr *)(param_1);
}


// Reference entry 106d5d20; body size 23 bytes.
#line 1 "ENTRY_106d5d20"

undefined4 __thiscall Recovered_Bulk::FUN_106d5d20(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_101a2b90(param_1 + 0x85a0);
  return (undefined4)(param_2);
}


// Reference entry 106d68b0; body size 50 bytes.
#line 1 "ENTRY_106d68b0"

void __thiscall Recovered_Bulk::FUN_106d68b0(int param_2)
{
  int param_1 = (int )this;
  undefined **local_28;
  int local_24;
  undefined1 *local_4;
  
  if ((int)(param_2) == *(int *)(param_1 + 0x85ac)) {
    local_4 = (undefined1 *)((undefined1 *)&local_28);
    *(undefined4*)(param_1 + 0x85ac) = (undefined4)(0);
    local_24 = (int)(param_1 + -0xc);
    local_28 = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
    thunk_FUN_106d6de0();
  }
  return;
}


// Reference entry 106d71a0; body size 25 bytes.
#line 1 "ENTRY_106d71a0"

void FUN_106d71a0(void)

{
  undefined **local_2c [9];
  undefined1 *local_8;
  
  local_8 = (undefined1 *)((undefined1 *)(uint)&local_2c);
  local_2c[0] = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  thunk_FUN_106d6de0();
  return;
}


// Reference entry 106d74c0; body size 23 bytes.
#line 1 "ENTRY_106d74c0"

void __thiscall Recovered_Bulk::FUN_106d74c0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x48c) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x488) = (undefined4)(param_3);
  return;
}


// Reference entry 106d7b00; body size 32 bytes.
#line 1 "ENTRY_106d7b00"

undefined4 __thiscall Recovered_Bulk::FUN_106d7b00(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103d0730();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x60);
  }
  return (undefined4)(param_1);
}


// Reference entry 106d7b30; body size 32 bytes.
#line 1 "ENTRY_106d7b30"

undefined4 __thiscall Recovered_Bulk::FUN_106d7b30(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103d0730();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x60);
  }
  return (undefined4)(param_1);
}


// Reference entry 106d7b60; body size 48 bytes.
#line 1 "ENTRY_106d7b60"

undefined4 * __thiscall Recovered_Bulk::FUN_106d7b60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTestPointManager);
  DAT_121a2764 = (int)(0);
  thunk_FUN_103d0880();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x70);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106d8310; body size 47 bytes.
#line 1 "ENTRY_106d8310"

undefined4 * __thiscall Recovered_Bulk::FUN_106d8310(int *param_2)
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


// Reference entry 106d83f0; body size 24 bytes.
#line 1 "ENTRY_106d83f0"

int * __thiscall Recovered_Bulk::FUN_106d83f0(int *param_2)
{
  int *param_1 = (int *)this;
  param_1 = (int *)((int *)*param_1);
  *param_2 = (int)((int)param_1);
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 106d8410; body size 24 bytes.
#line 1 "ENTRY_106d8410"

int * __thiscall Recovered_Bulk::FUN_106d8410(int *param_2)
{
  int *param_1 = (int *)this;
  param_1 = (int *)((int *)*param_1);
  *param_2 = (int)((int)param_1);
  if ((int *)(param_1) != (int *)(0x0)) {
    (**(code **)(*param_1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 106d8540; body size 44 bytes.
#line 1 "ENTRY_106d8540"

SCStr * FUN_106d8540(SCStr *param_1,int param_2)

{
  if (param_2 != 0) {
    ((SCStr *)(param_1))->int_allocRep("unknown");
    return (SCStr *)(param_1);
  }
  ((SCStr *)(param_1))->int_allocRep("default");
  return (SCStr *)(param_1);
}


// Reference entry 106d8da0; body size 54 bytes.
#line 1 "ENTRY_106d8da0"

void FUN_106d8da0(int *param_1,int *param_2)

{
  int *piVar1;
  
  for (;(int *)( param_1) != (int *)(param_2); param_1 = param_1 + 10) {
    piVar1 = (int *)((int *)param_1[9]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
      param_1[9] = (int)(0);
    }
  }
  return;
}


// Reference entry 106d90d0; body size 33 bytes.
#line 1 "ENTRY_106d90d0"

void __thiscall Recovered_Bulk::FUN_106d90d0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_106d91c0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x2c);
  return;
}


// Reference entry 106d9220; body size 57 bytes.
#line 1 "ENTRY_106d9220"

void __stdcall FUN_106d9220(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_106d9220(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x18);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 106d9270; body size 57 bytes.
#line 1 "ENTRY_106d9270"

void __stdcall FUN_106d9270(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_106d9270(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x18);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 106d92c0; body size 49 bytes.
#line 1 "ENTRY_106d92c0"

int __thiscall Recovered_Bulk::FUN_106d92c0(uint *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_106d9340((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || ((uint)(*param_2) < *(uint *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 106d9300; body size 49 bytes.
#line 1 "ENTRY_106d9300"

int __thiscall Recovered_Bulk::FUN_106d9300(uint *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_106d93a0((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || ((uint)(*param_2) < *(uint *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 106d9c20; body size 48 bytes.
#line 1 "ENTRY_106d9c20"

undefined4 * __fastcall FUN_106d9c20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 106d9c60; body size 48 bytes.
#line 1 "ENTRY_106d9c60"

undefined4 * __fastcall FUN_106d9c60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 106d9ca0; body size 48 bytes.
#line 1 "ENTRY_106d9ca0"

undefined4 * __fastcall FUN_106d9ca0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 106da2e0; body size 19 bytes.
#line 1 "ENTRY_106da2e0"

void __fastcall FUN_106da2e0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 106da300; body size 19 bytes.
#line 1 "ENTRY_106da300"

void __fastcall FUN_106da300(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 106da320; body size 33 bytes.
#line 1 "ENTRY_106da320"

void __fastcall FUN_106da320(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 106da3f0; body size 28 bytes.
#line 1 "ENTRY_106da3f0"

void __fastcall FUN_106da3f0(int *param_1)

{
  thunk_FUN_106d91c0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x2c);
  return;
}


// Reference entry 106da4b0; body size 33 bytes.
#line 1 "ENTRY_106da4b0"

void __fastcall FUN_106da4b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 106da500; body size 28 bytes.
#line 1 "ENTRY_106da500"

void __fastcall FUN_106da500(int *param_1)

{
  thunk_FUN_106d91c0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x2c);
  return;
}


// Reference entry 106da960; body size 28 bytes.
#line 1 "ENTRY_106da960"

void __fastcall FUN_106da960(int *param_1)

{
  thunk_FUN_106d91c0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x2c);
  return;
}


// Reference entry 106dacd0; body size 55 bytes.
#line 1 "ENTRY_106dacd0"

int * __thiscall Recovered_Bulk::FUN_106dacd0(byte param_2)
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


// Reference entry 106dad20; body size 32 bytes.
#line 1 "ENTRY_106dad20"

undefined4 __thiscall Recovered_Bulk::FUN_106dad20(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10def0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  return (undefined4)(param_1);
}


// Reference entry 106daf10; body size 32 bytes.
#line 1 "ENTRY_106daf10"

undefined4 __thiscall Recovered_Bulk::FUN_106daf10(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106da820();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  return (undefined4)(param_1);
}


// Reference entry 106dafd0; body size 25 bytes.
#line 1 "ENTRY_106dafd0"

void __fastcall FUN_106dafd0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 106daff0; body size 25 bytes.
#line 1 "ENTRY_106daff0"

void __fastcall FUN_106daff0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 106db150; body size 56 bytes.
#line 1 "ENTRY_106db150"

void __stdcall FUN_106db150(int *param_1,int *param_2)

{
  int *piVar1;
  
  for (;(int *)( param_1) != (int *)(param_2); param_1 = param_1 + 10) {
    piVar1 = (int *)((int *)param_1[9]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
      param_1[9] = (int)(0);
    }
  }
  return;
}


// Reference entry 106dba90; body size 33 bytes.
#line 1 "ENTRY_106dba90"

void __fastcall FUN_106dba90(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 106dc1a0; body size 59 bytes.
#line 1 "ENTRY_106dc1a0"

void __stdcall FUN_106dc1a0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x28);
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


// Reference entry 106dc4e0; body size 26 bytes.
#line 1 "ENTRY_106dc4e0"

undefined4 __stdcall FUN_106dc4e0(undefined4 param_1)

{
  thunk_FUN_10eae160();
  thunk_FUN_106dfa20(param_1);
  return (undefined4)(param_1);
}


// Reference entry 106dc500; body size 21 bytes.
#line 1 "ENTRY_106dc500"

SCStr * __stdcall FUN_106dc500(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("newwiz");
  return (SCStr *)(param_1);
}


// Reference entry 106dc540; body size 32 bytes.
#line 1 "ENTRY_106dc540"

undefined4 __fastcall FUN_106dc540(int param_1)

{
  int iVar1;
  
  iVar1 = (int)((*(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc)) / 0xc);
  return (undefined4)(((uint)((int3)((uint)iVar1 >> 8)) << 8 | (uint)(iVar1 != 0)));
}


// Reference entry 106dc570; body size 49 bytes.
#line 1 "ENTRY_106dc570"

uint __fastcall FUN_106dc570(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)((**(code **)*param_1)(), 0);
  if (uVar2 == 0) {
    iVar1 = (int)((int)(param_1[0x34] - param_1[0x33]) / 0xc);
    uVar2 = (uint)(0);
    if (iVar1 != 0) {
      return (uint)(((uint)((int3)((uint)iVar1 >> 8)) << 8 | (uint)(1)));
    }
  }
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 106dc5b0; body size 41 bytes.
#line 1 "ENTRY_106dc5b0"

undefined4 __fastcall FUN_106dc5b0(int param_1)

{
  if ((*(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc)) / 0xc == 0) {
    return (undefined4)(0);
  }
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0xd0) + -8));
}


// Reference entry 106dc5f0; body size 41 bytes.
#line 1 "ENTRY_106dc5f0"

undefined4 __fastcall FUN_106dc5f0(int param_1)

{
  if ((*(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc)) / 0xc == 0) {
    return (undefined4)(0);
  }
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0xd0) + -8));
}


// Reference entry 106dd2a0; body size 33 bytes.
#line 1 "ENTRY_106dd2a0"

void __thiscall Recovered_Bulk::FUN_106dd2a0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_106dd300(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 106dd2d0; body size 33 bytes.
#line 1 "ENTRY_106dd2d0"

void __thiscall Recovered_Bulk::FUN_106dd2d0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_106dd3c0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 106dde40; body size 48 bytes.
#line 1 "ENTRY_106dde40"

undefined4 * __fastcall FUN_106dde40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 106dde80; body size 48 bytes.
#line 1 "ENTRY_106dde80"

undefined4 * __fastcall FUN_106dde80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 106de510; body size 19 bytes.
#line 1 "ENTRY_106de510"

void __fastcall FUN_106de510(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 106de530; body size 19 bytes.
#line 1 "ENTRY_106de530"

void __fastcall FUN_106de530(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 106de550; body size 28 bytes.
#line 1 "ENTRY_106de550"

void __fastcall FUN_106de550(int *param_1)

{
  thunk_FUN_106dd300(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 106de580; body size 28 bytes.
#line 1 "ENTRY_106de580"

void __fastcall FUN_106de580(int *param_1)

{
  thunk_FUN_106dd3c0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 106de6d0; body size 19 bytes.
#line 1 "ENTRY_106de6d0"

void __fastcall FUN_106de6d0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 106de6f0; body size 19 bytes.
#line 1 "ENTRY_106de6f0"

void __fastcall FUN_106de6f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 106de710; body size 28 bytes.
#line 1 "ENTRY_106de710"

void __fastcall FUN_106de710(int *param_1)

{
  thunk_FUN_106dd300(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 106de740; body size 28 bytes.
#line 1 "ENTRY_106de740"

void __fastcall FUN_106de740(int *param_1)

{
  thunk_FUN_106dd3c0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 106def30; body size 25 bytes.
#line 1 "ENTRY_106def30"

void __fastcall FUN_106def30(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 106def50; body size 25 bytes.
#line 1 "ENTRY_106def50"

void __fastcall FUN_106def50(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 106dfa00; body size 20 bytes.
#line 1 "ENTRY_106dfa00"

SCStr * __thiscall Recovered_Bulk::FUN_106dfa00(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 4));
  return (SCStr *)(param_2);
}


// Reference entry 106dfa20; body size 20 bytes.
#line 1 "ENTRY_106dfa20"

SCStr * __thiscall Recovered_Bulk::FUN_106dfa20(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 4));
  return (SCStr *)(param_2);
}


// Reference entry 106e09f0; body size 57 bytes.
#line 1 "ENTRY_106e09f0"

void __stdcall FUN_106e09f0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_106e09f0(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x14);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 106e1100; body size 59 bytes.
#line 1 "ENTRY_106e1100"

void __thiscall Recovered_Bulk::FUN_106e1100(undefined4 *param_2)
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
  thunk_FUN_106e0790(puVar1,param_2);
  return;
}


// Reference entry 106e2410; body size 24 bytes.
#line 1 "ENTRY_106e2410"

undefined4 * __thiscall Recovered_Bulk::FUN_106e2410(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e2430; body size 24 bytes.
#line 1 "ENTRY_106e2430"

undefined4 * __thiscall Recovered_Bulk::FUN_106e2430(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e27a0; body size 48 bytes.
#line 1 "ENTRY_106e27a0"

undefined4 * __fastcall FUN_106e27a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 106e4b20; body size 27 bytes.
#line 1 "ENTRY_106e4b20"

void __fastcall FUN_106e4b20(undefined4 *param_1)

{
  thunk_FUN_106e7650();
  thunk_FUN_106e76e0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  return;
}


// Reference entry 106e4c00; body size 38 bytes.
#line 1 "ENTRY_106e4c00"

void __fastcall FUN_106e4c00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  return;
}


// Reference entry 106e4e30; body size 60 bytes.
#line 1 "ENTRY_106e4e30"

void __fastcall FUN_106e4e30(int *param_1)

{
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


// Reference entry 106e4e90; body size 60 bytes.
#line 1 "ENTRY_106e4e90"

void __fastcall FUN_106e4e90(int *param_1)

{
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


// Reference entry 106e4f80; body size 19 bytes.
#line 1 "ENTRY_106e4f80"

void __fastcall FUN_106e4f80(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 106e5050; body size 34 bytes.
#line 1 "ENTRY_106e5050"

void __fastcall FUN_106e5050(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
  for (param_1 = (undefined4 *)((undefined4 *)*param_1);(undefined4 *)((param_1)) != (undefined4 *)(puVar1); param_1 = param_1 + 8) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 106e5080; body size 17 bytes.
#line 1 "ENTRY_106e5080"

void __fastcall FUN_106e5080(undefined4 *param_1)

{
  thunk_FUN_106e0260(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 106e52d0; body size 55 bytes.
#line 1 "ENTRY_106e52d0"

void __fastcall FUN_106e52d0(undefined4 *param_1)

{
  ((_Tree<> *)(0))->op_dtor();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  return;
}


// Reference entry 106e5e30; body size 49 bytes.
#line 1 "ENTRY_106e5e30"

undefined4 * __thiscall Recovered_Bulk::FUN_106e5e30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_106e7650();
  thunk_FUN_106e76e0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e5e70; body size 33 bytes.
#line 1 "ENTRY_106e5e70"

undefined4 * __thiscall Recovered_Bulk::FUN_106e5e70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e5ea0; body size 33 bytes.
#line 1 "ENTRY_106e5ea0"

undefined4 * __thiscall Recovered_Bulk::FUN_106e5ea0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e5f30; body size 38 bytes.
#line 1 "ENTRY_106e5f30"

undefined4 * __thiscall Recovered_Bulk::FUN_106e5f30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e5f60; body size 38 bytes.
#line 1 "ENTRY_106e5f60"

undefined4 * __thiscall Recovered_Bulk::FUN_106e5f60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e5f90; body size 38 bytes.
#line 1 "ENTRY_106e5f90"

undefined4 * __thiscall Recovered_Bulk::FUN_106e5f90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e5fc0; body size 38 bytes.
#line 1 "ENTRY_106e5fc0"

undefined4 * __thiscall Recovered_Bulk::FUN_106e5fc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e5ff0; body size 38 bytes.
#line 1 "ENTRY_106e5ff0"

undefined4 * __thiscall Recovered_Bulk::FUN_106e5ff0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e6020; body size 38 bytes.
#line 1 "ENTRY_106e6020"

undefined4 * __thiscall Recovered_Bulk::FUN_106e6020(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e6050; body size 38 bytes.
#line 1 "ENTRY_106e6050"

undefined4 * __thiscall Recovered_Bulk::FUN_106e6050(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e6080; body size 38 bytes.
#line 1 "ENTRY_106e6080"

undefined4 * __thiscall Recovered_Bulk::FUN_106e6080(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e60b0; body size 38 bytes.
#line 1 "ENTRY_106e60b0"

undefined4 * __thiscall Recovered_Bulk::FUN_106e60b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e60e0; body size 38 bytes.
#line 1 "ENTRY_106e60e0"

undefined4 * __thiscall Recovered_Bulk::FUN_106e60e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e6110; body size 38 bytes.
#line 1 "ENTRY_106e6110"

undefined4 * __thiscall Recovered_Bulk::FUN_106e6110(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e62c0; body size 48 bytes.
#line 1 "ENTRY_106e62c0"

undefined4 * __thiscall Recovered_Bulk::FUN_106e62c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a27d0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e6360; body size 48 bytes.
#line 1 "ENTRY_106e6360"

undefined4 * __thiscall Recovered_Bulk::FUN_106e6360(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a27d4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e6500; body size 48 bytes.
#line 1 "ENTRY_106e6500"

undefined4 * __thiscall Recovered_Bulk::FUN_106e6500(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a27b8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e65b0; body size 48 bytes.
#line 1 "ENTRY_106e65b0"

undefined4 * __thiscall Recovered_Bulk::FUN_106e65b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a27c4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e6650; body size 48 bytes.
#line 1 "ENTRY_106e6650"

undefined4 * __thiscall Recovered_Bulk::FUN_106e6650(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a27c0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e66f0; body size 48 bytes.
#line 1 "ENTRY_106e66f0"

undefined4 * __thiscall Recovered_Bulk::FUN_106e66f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a27b0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e6790; body size 48 bytes.
#line 1 "ENTRY_106e6790"

undefined4 * __thiscall Recovered_Bulk::FUN_106e6790(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a27c8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e6830; body size 48 bytes.
#line 1 "ENTRY_106e6830"

undefined4 * __thiscall Recovered_Bulk::FUN_106e6830(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a27cc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e68d0; body size 48 bytes.
#line 1 "ENTRY_106e68d0"

undefined4 * __thiscall Recovered_Bulk::FUN_106e68d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a27b4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e6970; body size 48 bytes.
#line 1 "ENTRY_106e6970"

undefined4 * __thiscall Recovered_Bulk::FUN_106e6970(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a27bc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e6a80; body size 48 bytes.
#line 1 "ENTRY_106e6a80"

undefined4 * __thiscall Recovered_Bulk::FUN_106e6a80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a27ac = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e6ee0; body size 25 bytes.
#line 1 "ENTRY_106e6ee0"

void __fastcall FUN_106e6ee0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 106e7130; body size 36 bytes.
#line 1 "ENTRY_106e7130"

void __stdcall FUN_106e7130(undefined4 *param_1,undefined4 *param_2)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 8) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 106e7160; body size 20 bytes.
#line 1 "ENTRY_106e7160"

void __thiscall Recovered_Bulk::FUN_106e7160(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106e0260(param_2,param_3,param_1);
  return;
}


// Reference entry 106e78c0; body size 61 bytes.
#line 1 "ENTRY_106e78c0"

void __thiscall Recovered_Bulk::FUN_106e78c0(int *param_2)
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


// Reference entry 106e7910; body size 61 bytes.
#line 1 "ENTRY_106e7910"

void __thiscall Recovered_Bulk::FUN_106e7910(int *param_2)
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


// Reference entry 106e7ac0; body size 50 bytes.
#line 1 "ENTRY_106e7ac0"

int __thiscall Recovered_Bulk::FUN_106e7ac0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 0x18)) != *(int *)((param_1 + 0x1c))) {
    thunk_FUN_106e1600(param_2);
    *(int*)(param_1 + 0x18) = (int)(*(int *)(param_1 + 0x18) + 0x20);
    return (int)(param_1);
  }
  thunk_FUN_106e05a0(*(int *)(param_1 + 0x18),param_2);
  return (int)(param_1);
}


// Reference entry 106e8ac0; body size 56 bytes.
#line 1 "ENTRY_106e8ac0"

void __stdcall FUN_106e8ac0(int param_1,int param_2)

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


// Reference entry 106e8b10; body size 60 bytes.
#line 1 "ENTRY_106e8b10"

void __stdcall FUN_106e8b10(int param_1,int param_2)

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


// Reference entry 106e8b80; body size 60 bytes.
#line 1 "ENTRY_106e8b80"

int __thiscall Recovered_Bulk::FUN_106e8b80(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  *(undefined4*)(iVar1 + -0x1c) = (undefined4)(3);
  if (*(int *)((iVar1 + -8)) != *(int *)((iVar1 + -4))) {
    thunk_FUN_106e1600(param_2);
    *(int*)(iVar1 + -8) = (int)(*(int *)(iVar1 + -8) + 0x20);
    return (int)(param_1);
  }
  thunk_FUN_106e05a0(*(int *)(iVar1 + -8),param_2);
  return (int)(param_1);
}


// Reference entry 106e8c50; body size 37 bytes.
#line 1 "ENTRY_106e8c50"

undefined4 * __thiscall Recovered_Bulk::FUN_106e8c50(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xe8));
  piVar1 = (int *)(*(int **)(param_1 + 0xec), 0);
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 106ee050; body size 20 bytes.
#line 1 "ENTRY_106ee050"

SCStr * __thiscall Recovered_Bulk::FUN_106ee050(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 106ee070; body size 21 bytes.
#line 1 "ENTRY_106ee070"

SCStr * __stdcall FUN_106ee070(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIStringInput");
  return (SCStr *)(param_1);
}


// Reference entry 106f1f90; body size 20 bytes.
#line 1 "ENTRY_106f1f90"

SCStr * __thiscall Recovered_Bulk::FUN_106f1f90(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 106f2020; body size 21 bytes.
#line 1 "ENTRY_106f2020"

SCStr * __stdcall FUN_106f2020(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 106f6ba0; body size 59 bytes.
#line 1 "ENTRY_106f6ba0"

void __thiscall Recovered_Bulk::FUN_106f6ba0(undefined4 *param_2)
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
  thunk_FUN_106e0790(puVar1,param_2);
  return;
}


// Reference entry 106f6ea0; body size 36 bytes.
#line 1 "ENTRY_106f6ea0"

void __thiscall Recovered_Bulk::FUN_106f6ea0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0xc));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 106f7590; body size 24 bytes.
#line 1 "ENTRY_106f7590"

undefined4 * __thiscall Recovered_Bulk::FUN_106f7590(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106f8420; body size 38 bytes.
#line 1 "ENTRY_106f8420"

void __fastcall FUN_106f8420(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  return;
}


// Reference entry 106f8490; body size 60 bytes.
#line 1 "ENTRY_106f8490"

void __fastcall FUN_106f8490(int *param_1)

{
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


// Reference entry 106f8a90; body size 38 bytes.
#line 1 "ENTRY_106f8a90"

undefined4 * __thiscall Recovered_Bulk::FUN_106f8a90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106f8ac0; body size 38 bytes.
#line 1 "ENTRY_106f8ac0"

undefined4 * __thiscall Recovered_Bulk::FUN_106f8ac0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106f8af0; body size 38 bytes.
#line 1 "ENTRY_106f8af0"

undefined4 * __thiscall Recovered_Bulk::FUN_106f8af0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106f8b20; body size 38 bytes.
#line 1 "ENTRY_106f8b20"

undefined4 * __thiscall Recovered_Bulk::FUN_106f8b20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106f8c10; body size 48 bytes.
#line 1 "ENTRY_106f8c10"

undefined4 * __thiscall Recovered_Bulk::FUN_106f8c10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2828 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106f8da0; body size 48 bytes.
#line 1 "ENTRY_106f8da0"

undefined4 * __thiscall Recovered_Bulk::FUN_106f8da0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2824 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106f8e40; body size 48 bytes.
#line 1 "ENTRY_106f8e40"

undefined4 * __thiscall Recovered_Bulk::FUN_106f8e40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2830 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106f8ee0; body size 48 bytes.
#line 1 "ENTRY_106f8ee0"

undefined4 * __thiscall Recovered_Bulk::FUN_106f8ee0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a282c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106f9080; body size 61 bytes.
#line 1 "ENTRY_106f9080"

void __thiscall Recovered_Bulk::FUN_106f9080(int *param_2)
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


// Reference entry 106fdc30; body size 24 bytes.
#line 1 "ENTRY_106fdc30"

undefined4 * __thiscall Recovered_Bulk::FUN_106fdc30(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106fe7a0; body size 60 bytes.
#line 1 "ENTRY_106fe7a0"

void __fastcall FUN_106fe7a0(int *param_1)

{
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


// Reference entry 106fec40; body size 38 bytes.
#line 1 "ENTRY_106fec40"

undefined4 * __thiscall Recovered_Bulk::FUN_106fec40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106fec70; body size 38 bytes.
#line 1 "ENTRY_106fec70"

undefined4 * __thiscall Recovered_Bulk::FUN_106fec70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106feca0; body size 38 bytes.
#line 1 "ENTRY_106feca0"

undefined4 * __thiscall Recovered_Bulk::FUN_106feca0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106fecd0; body size 38 bytes.
#line 1 "ENTRY_106fecd0"

undefined4 * __thiscall Recovered_Bulk::FUN_106fecd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106fed60; body size 48 bytes.
#line 1 "ENTRY_106fed60"

undefined4 * __thiscall Recovered_Bulk::FUN_106fed60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2850 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106fee00; body size 48 bytes.
#line 1 "ENTRY_106fee00"

undefined4 * __thiscall Recovered_Bulk::FUN_106fee00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a284c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106feea0; body size 48 bytes.
#line 1 "ENTRY_106feea0"

undefined4 * __thiscall Recovered_Bulk::FUN_106feea0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2858 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106fefb0; body size 48 bytes.
#line 1 "ENTRY_106fefb0"

undefined4 * __thiscall Recovered_Bulk::FUN_106fefb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2854 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106feff0; body size 35 bytes.
#line 1 "ENTRY_106feff0"

undefined4 __thiscall Recovered_Bulk::FUN_106feff0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xec);
  }
  return (undefined4)(param_1);
}


// Reference entry 106ff0b0; body size 61 bytes.
#line 1 "ENTRY_106ff0b0"

void __thiscall Recovered_Bulk::FUN_106ff0b0(int *param_2)
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


// Reference entry 10702ef0; body size 24 bytes.
#line 1 "ENTRY_10702ef0"

undefined4 * __thiscall Recovered_Bulk::FUN_10702ef0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107038d0; body size 60 bytes.
#line 1 "ENTRY_107038d0"

void __fastcall FUN_107038d0(int *param_1)

{
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


// Reference entry 10703e90; body size 38 bytes.
#line 1 "ENTRY_10703e90"

undefined4 * __thiscall Recovered_Bulk::FUN_10703e90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10703ec0; body size 38 bytes.
#line 1 "ENTRY_10703ec0"

undefined4 * __thiscall Recovered_Bulk::FUN_10703ec0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10703ef0; body size 38 bytes.
#line 1 "ENTRY_10703ef0"

undefined4 * __thiscall Recovered_Bulk::FUN_10703ef0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10703f80; body size 48 bytes.
#line 1 "ENTRY_10703f80"

undefined4 * __thiscall Recovered_Bulk::FUN_10703f80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2878 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10704110; body size 48 bytes.
#line 1 "ENTRY_10704110"

undefined4 * __thiscall Recovered_Bulk::FUN_10704110(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2874 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107041b0; body size 48 bytes.
#line 1 "ENTRY_107041b0"

undefined4 * __thiscall Recovered_Bulk::FUN_107041b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a287c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10704460; body size 61 bytes.
#line 1 "ENTRY_10704460"

void __thiscall Recovered_Bulk::FUN_10704460(int *param_2)
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


// Reference entry 10707940; body size 21 bytes.
#line 1 "ENTRY_10707940"

SCStr * __stdcall FUN_10707940(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10709270; body size 24 bytes.
#line 1 "ENTRY_10709270"

undefined4 * __thiscall Recovered_Bulk::FUN_10709270(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10709290; body size 24 bytes.
#line 1 "ENTRY_10709290"

undefined4 * __thiscall Recovered_Bulk::FUN_10709290(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107092b0; body size 24 bytes.
#line 1 "ENTRY_107092b0"

undefined4 * __thiscall Recovered_Bulk::FUN_107092b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1070a010; body size 38 bytes.
#line 1 "ENTRY_1070a010"

void __fastcall FUN_1070a010(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  return;
}


// Reference entry 1070a270; body size 60 bytes.
#line 1 "ENTRY_1070a270"

void __fastcall FUN_1070a270(int *param_1)

{
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


// Reference entry 1070a2d0; body size 60 bytes.
#line 1 "ENTRY_1070a2d0"

void __fastcall FUN_1070a2d0(int *param_1)

{
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


// Reference entry 1070a330; body size 60 bytes.
#line 1 "ENTRY_1070a330"

void __fastcall FUN_1070a330(int *param_1)

{
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


// Reference entry 1070aae0; body size 38 bytes.
#line 1 "ENTRY_1070aae0"

undefined4 * __thiscall Recovered_Bulk::FUN_1070aae0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1070ab10; body size 38 bytes.
#line 1 "ENTRY_1070ab10"

undefined4 * __thiscall Recovered_Bulk::FUN_1070ab10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1070ab40; body size 38 bytes.
#line 1 "ENTRY_1070ab40"

undefined4 * __thiscall Recovered_Bulk::FUN_1070ab40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1070ab70; body size 38 bytes.
#line 1 "ENTRY_1070ab70"

undefined4 * __thiscall Recovered_Bulk::FUN_1070ab70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1070ac60; body size 48 bytes.
#line 1 "ENTRY_1070ac60"

undefined4 * __thiscall Recovered_Bulk::FUN_1070ac60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a28d4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1070adb0; body size 48 bytes.
#line 1 "ENTRY_1070adb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1070adb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a28c8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1070af90; body size 48 bytes.
#line 1 "ENTRY_1070af90"

undefined4 * __thiscall Recovered_Bulk::FUN_1070af90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a28d0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1070b030; body size 48 bytes.
#line 1 "ENTRY_1070b030"

undefined4 * __thiscall Recovered_Bulk::FUN_1070b030(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a28cc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1070b210; body size 61 bytes.
#line 1 "ENTRY_1070b210"

void __thiscall Recovered_Bulk::FUN_1070b210(int *param_2)
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


// Reference entry 1070b260; body size 61 bytes.
#line 1 "ENTRY_1070b260"

void __thiscall Recovered_Bulk::FUN_1070b260(int *param_2)
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


// Reference entry 1070b2b0; body size 61 bytes.
#line 1 "ENTRY_1070b2b0"

void __thiscall Recovered_Bulk::FUN_1070b2b0(int *param_2)
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


// Reference entry 1070b3a0; body size 53 bytes.
#line 1 "ENTRY_1070b3a0"

void __fastcall FUN_1070b3a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x30), 0);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
      *(undefined4*)(param_1 + 0x30) = (undefined4)(0);
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x30) = (undefined4)(0);
  }
  return;
}


// Reference entry 10711cb0; body size 39 bytes.
#line 1 "ENTRY_10711cb0"

void __thiscall Recovered_Bulk::FUN_10711cb0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0xf8));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10712700; body size 24 bytes.
#line 1 "ENTRY_10712700"

undefined4 * __thiscall Recovered_Bulk::FUN_10712700(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10712fc0; body size 60 bytes.
#line 1 "ENTRY_10712fc0"

void __fastcall FUN_10712fc0(int *param_1)

{
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


// Reference entry 107134b0; body size 38 bytes.
#line 1 "ENTRY_107134b0"

undefined4 * __thiscall Recovered_Bulk::FUN_107134b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107134e0; body size 38 bytes.
#line 1 "ENTRY_107134e0"

undefined4 * __thiscall Recovered_Bulk::FUN_107134e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10713510; body size 38 bytes.
#line 1 "ENTRY_10713510"

undefined4 * __thiscall Recovered_Bulk::FUN_10713510(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10713690; body size 48 bytes.
#line 1 "ENTRY_10713690"

undefined4 * __thiscall Recovered_Bulk::FUN_10713690(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a28f8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107137a0; body size 48 bytes.
#line 1 "ENTRY_107137a0"

undefined4 * __thiscall Recovered_Bulk::FUN_107137a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a28f0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10713840; body size 48 bytes.
#line 1 "ENTRY_10713840"

undefined4 * __thiscall Recovered_Bulk::FUN_10713840(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a28f4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10713990; body size 61 bytes.
#line 1 "ENTRY_10713990"

void __thiscall Recovered_Bulk::FUN_10713990(int *param_2)
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


// Reference entry 10718090; body size 39 bytes.
#line 1 "ENTRY_10718090"

void __thiscall Recovered_Bulk::FUN_10718090(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0xe8));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 107196f0; body size 60 bytes.
#line 1 "ENTRY_107196f0"

void __fastcall FUN_107196f0(int *param_1)

{
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


// Reference entry 10719d10; body size 38 bytes.
#line 1 "ENTRY_10719d10"

undefined4 * __thiscall Recovered_Bulk::FUN_10719d10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10719d40; body size 38 bytes.
#line 1 "ENTRY_10719d40"

undefined4 * __thiscall Recovered_Bulk::FUN_10719d40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10719d70; body size 38 bytes.
#line 1 "ENTRY_10719d70"

undefined4 * __thiscall Recovered_Bulk::FUN_10719d70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10719da0; body size 38 bytes.
#line 1 "ENTRY_10719da0"

undefined4 * __thiscall Recovered_Bulk::FUN_10719da0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10719dd0; body size 38 bytes.
#line 1 "ENTRY_10719dd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10719dd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10719e60; body size 48 bytes.
#line 1 "ENTRY_10719e60"

undefined4 * __thiscall Recovered_Bulk::FUN_10719e60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2948 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10719f70; body size 48 bytes.
#line 1 "ENTRY_10719f70"

undefined4 * __thiscall Recovered_Bulk::FUN_10719f70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2950 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1071a080; body size 48 bytes.
#line 1 "ENTRY_1071a080"

undefined4 * __thiscall Recovered_Bulk::FUN_1071a080(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2944 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1071a120; body size 48 bytes.
#line 1 "ENTRY_1071a120"

undefined4 * __thiscall Recovered_Bulk::FUN_1071a120(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2954 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1071a1c0; body size 48 bytes.
#line 1 "ENTRY_1071a1c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1071a1c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a294c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1071a400; body size 61 bytes.
#line 1 "ENTRY_1071a400"

void __thiscall Recovered_Bulk::FUN_1071a400(int *param_2)
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


// Reference entry 10723790; body size 58 bytes.
#line 1 "ENTRY_10723790"

void __fastcall FUN_10723790(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  thunk_FUN_10eb41c0();
  uVar1 = (undefined4)(thunk_FUN_10d9e5c0(), 0);
  thunk_FUN_10d9e6c0(uVar1);
  thunk_FUN_10d9e6d0(param_1 + 4);
  return;
}


// Reference entry 10723a70; body size 33 bytes.
#line 1 "ENTRY_10723a70"

void __thiscall Recovered_Bulk::FUN_10723a70(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10723b00(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10723bc0; body size 57 bytes.
#line 1 "ENTRY_10723bc0"

void __stdcall FUN_10723bc0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_10723bc0(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x18);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 10726230; body size 41 bytes.
#line 1 "ENTRY_10726230"

undefined4 * __thiscall Recovered_Bulk::FUN_10726230(int *param_2)
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


// Reference entry 10726c20; body size 48 bytes.
#line 1 "ENTRY_10726c20"

undefined4 * __fastcall FUN_10726c20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10726c60; body size 48 bytes.
#line 1 "ENTRY_10726c60"

undefined4 * __fastcall FUN_10726c60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 1072a9f0; body size 38 bytes.
#line 1 "ENTRY_1072a9f0"

void __fastcall FUN_1072a9f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  return;
}


// Reference entry 1072ae00; body size 19 bytes.
#line 1 "ENTRY_1072ae00"

void __fastcall FUN_1072ae00(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 1072af20; body size 28 bytes.
#line 1 "ENTRY_1072af20"

void __fastcall FUN_1072af20(int *param_1)

{
  thunk_FUN_10723b00(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 1072afe0; body size 28 bytes.
#line 1 "ENTRY_1072afe0"

void __fastcall FUN_1072afe0(int *param_1)

{
  thunk_FUN_10723b00(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 1072bc90; body size 18 bytes.
#line 1 "ENTRY_1072bc90"

void __fastcall FUN_1072bc90(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 1072bcb0; body size 18 bytes.
#line 1 "ENTRY_1072bcb0"

void __fastcall FUN_1072bcb0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 1072bcd0; body size 18 bytes.
#line 1 "ENTRY_1072bcd0"

void __fastcall FUN_1072bcd0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x10);
  }
  return;
}


// Reference entry 1072bcf0; body size 18 bytes.
#line 1 "ENTRY_1072bcf0"

void __fastcall FUN_1072bcf0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x10);
  }
  return;
}


// Reference entry 1072c4f0; body size 38 bytes.
#line 1 "ENTRY_1072c4f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1072c4f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072c520; body size 38 bytes.
#line 1 "ENTRY_1072c520"

undefined4 * __thiscall Recovered_Bulk::FUN_1072c520(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072c550; body size 38 bytes.
#line 1 "ENTRY_1072c550"

undefined4 * __thiscall Recovered_Bulk::FUN_1072c550(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072c580; body size 38 bytes.
#line 1 "ENTRY_1072c580"

undefined4 * __thiscall Recovered_Bulk::FUN_1072c580(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072c5b0; body size 38 bytes.
#line 1 "ENTRY_1072c5b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1072c5b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072c5e0; body size 38 bytes.
#line 1 "ENTRY_1072c5e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1072c5e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072c610; body size 38 bytes.
#line 1 "ENTRY_1072c610"

undefined4 * __thiscall Recovered_Bulk::FUN_1072c610(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072c640; body size 38 bytes.
#line 1 "ENTRY_1072c640"

undefined4 * __thiscall Recovered_Bulk::FUN_1072c640(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072c670; body size 38 bytes.
#line 1 "ENTRY_1072c670"

undefined4 * __thiscall Recovered_Bulk::FUN_1072c670(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072c6a0; body size 38 bytes.
#line 1 "ENTRY_1072c6a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1072c6a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072c6d0; body size 38 bytes.
#line 1 "ENTRY_1072c6d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1072c6d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072c700; body size 38 bytes.
#line 1 "ENTRY_1072c700"

undefined4 * __thiscall Recovered_Bulk::FUN_1072c700(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072c730; body size 38 bytes.
#line 1 "ENTRY_1072c730"

undefined4 * __thiscall Recovered_Bulk::FUN_1072c730(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072c760; body size 38 bytes.
#line 1 "ENTRY_1072c760"

undefined4 * __thiscall Recovered_Bulk::FUN_1072c760(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072c790; body size 38 bytes.
#line 1 "ENTRY_1072c790"

undefined4 * __thiscall Recovered_Bulk::FUN_1072c790(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072c7c0; body size 38 bytes.
#line 1 "ENTRY_1072c7c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1072c7c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072c7f0; body size 38 bytes.
#line 1 "ENTRY_1072c7f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1072c7f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072c820; body size 38 bytes.
#line 1 "ENTRY_1072c820"

undefined4 * __thiscall Recovered_Bulk::FUN_1072c820(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072c850; body size 38 bytes.
#line 1 "ENTRY_1072c850"

undefined4 * __thiscall Recovered_Bulk::FUN_1072c850(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072c880; body size 38 bytes.
#line 1 "ENTRY_1072c880"

undefined4 * __thiscall Recovered_Bulk::FUN_1072c880(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072c8b0; body size 38 bytes.
#line 1 "ENTRY_1072c8b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1072c8b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072ce50; body size 48 bytes.
#line 1 "ENTRY_1072ce50"

undefined4 * __thiscall Recovered_Bulk::FUN_1072ce50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a29ec = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072cef0; body size 48 bytes.
#line 1 "ENTRY_1072cef0"

undefined4 * __thiscall Recovered_Bulk::FUN_1072cef0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a29bc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072cf90; body size 48 bytes.
#line 1 "ENTRY_1072cf90"

undefined4 * __thiscall Recovered_Bulk::FUN_1072cf90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a29e0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072d030; body size 48 bytes.
#line 1 "ENTRY_1072d030"

undefined4 * __thiscall Recovered_Bulk::FUN_1072d030(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a29d0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072d0d0; body size 48 bytes.
#line 1 "ENTRY_1072d0d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1072d0d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a29b4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072d170; body size 48 bytes.
#line 1 "ENTRY_1072d170"

undefined4 * __thiscall Recovered_Bulk::FUN_1072d170(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a29ac = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072d210; body size 48 bytes.
#line 1 "ENTRY_1072d210"

undefined4 * __thiscall Recovered_Bulk::FUN_1072d210(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a29b0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072d2b0; body size 48 bytes.
#line 1 "ENTRY_1072d2b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1072d2b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a29c0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072d350; body size 48 bytes.
#line 1 "ENTRY_1072d350"

undefined4 * __thiscall Recovered_Bulk::FUN_1072d350(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a29e4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072d3f0; body size 48 bytes.
#line 1 "ENTRY_1072d3f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1072d3f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a29b8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072d490; body size 48 bytes.
#line 1 "ENTRY_1072d490"

undefined4 * __thiscall Recovered_Bulk::FUN_1072d490(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a29a0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072d530; body size 48 bytes.
#line 1 "ENTRY_1072d530"

undefined4 * __thiscall Recovered_Bulk::FUN_1072d530(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a29d4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072d5d0; body size 48 bytes.
#line 1 "ENTRY_1072d5d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1072d5d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a29f0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072d670; body size 48 bytes.
#line 1 "ENTRY_1072d670"

undefined4 * __thiscall Recovered_Bulk::FUN_1072d670(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a29cc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072d710; body size 48 bytes.
#line 1 "ENTRY_1072d710"

undefined4 * __thiscall Recovered_Bulk::FUN_1072d710(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a29dc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072d820; body size 48 bytes.
#line 1 "ENTRY_1072d820"

undefined4 * __thiscall Recovered_Bulk::FUN_1072d820(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a29c8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072d8e0; body size 48 bytes.
#line 1 "ENTRY_1072d8e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1072d8e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a29a4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072d980; body size 48 bytes.
#line 1 "ENTRY_1072d980"

undefined4 * __thiscall Recovered_Bulk::FUN_1072d980(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a29c4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072da20; body size 48 bytes.
#line 1 "ENTRY_1072da20"

undefined4 * __thiscall Recovered_Bulk::FUN_1072da20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a29e8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072dac0; body size 48 bytes.
#line 1 "ENTRY_1072dac0"

undefined4 * __thiscall Recovered_Bulk::FUN_1072dac0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a29d8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072db60; body size 48 bytes.
#line 1 "ENTRY_1072db60"

undefined4 * __thiscall Recovered_Bulk::FUN_1072db60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a29a8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072dca0; body size 32 bytes.
#line 1 "ENTRY_1072dca0"

undefined4 __thiscall Recovered_Bulk::FUN_1072dca0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1072b8a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4)(param_1);
}


// Reference entry 1072de90; body size 25 bytes.
#line 1 "ENTRY_1072de90"

void __fastcall FUN_1072de90(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 1072e140; body size 61 bytes.
#line 1 "ENTRY_1072e140"

void __fastcall FUN_1072e140(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  thunk_FUN_10eb41c0();
  uVar1 = (undefined4)(thunk_FUN_10d9e5c0(), 0);
  thunk_FUN_10d9e6c0(uVar1);
  thunk_FUN_10d9e6d0(param_1 + 8);
  return;
}


// Reference entry 1072e190; body size 60 bytes.
#line 1 "ENTRY_1072e190"

void __thiscall Recovered_Bulk::FUN_1072e190(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  SCStr *this_;
  
  iVar1 = (int)(*param_2);
  thunk_FUN_10cf3780(*(undefined4 *)(param_1 + 4));
  this_ = (SCStr *)((SCStr *)(iVar1 + 0xf4));
  if ((SCStr *)((param_1 + 0xc)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)(param_1 + 0xc)));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 1072e7e0; body size 56 bytes.
#line 1 "ENTRY_1072e7e0"

int __stdcall FUN_1072e7e0(int *param_1)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10723ea0((uint)&local_c,param_1);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= (int)(*param_1))) {
    return (int)(local_4 + 0x14);
  }
                    
  std::_Xout_of_range("invalid map<K, T> key");
}


// Reference entry 1073c360; body size 21 bytes.
#line 1 "ENTRY_1073c360"

SCStr * __stdcall FUN_1073c360(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("Display wizard");
  return (SCStr *)(param_1);
}


// Reference entry 1073c380; body size 21 bytes.
#line 1 "ENTRY_1073c380"

SCStr * __stdcall FUN_1073c380(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("voice_services_assets");
  return (SCStr *)(param_1);
}


// Reference entry 1073c3a0; body size 21 bytes.
#line 1 "ENTRY_1073c3a0"

SCStr * __stdcall FUN_1073c3a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("VoiceServicesAssets");
  return (SCStr *)(param_1);
}


// Reference entry 10743460; body size 25 bytes.
#line 1 "ENTRY_10743460"

int * __thiscall Recovered_Bulk::FUN_10743460(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x14), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 107491c0; body size 42 bytes.
#line 1 "ENTRY_107491c0"

void FUN_107491c0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  return;
}


// Reference entry 1074b740; body size 33 bytes.
#line 1 "ENTRY_1074b740"

void __fastcall FUN_1074b740(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAmazonAlexaPreviewWizardType);
  if ((undefined4 *)(DAT_121a2a78) != (undefined4 *)(0x0)) {
    (**(code **)DAT_121a2a78)(1);
  }
  thunk_FUN_106de840();
  return;
}


// Reference entry 1074b840; body size 38 bytes.
#line 1 "ENTRY_1074b840"

undefined4 * __thiscall Recovered_Bulk::FUN_1074b840(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1074b8d0; body size 48 bytes.
#line 1 "ENTRY_1074b8d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1074b8d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2a78 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1074b9f0; body size 56 bytes.
#line 1 "ENTRY_1074b9f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1074b9f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAmazonAlexaPreviewWizardType);
  if ((undefined4 *)(DAT_121a2a78) != (undefined4 *)(0x0)) {
    (**(code **)DAT_121a2a78)(1);
  }
  thunk_FUN_106de840();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1074d080; body size 33 bytes.
#line 1 "ENTRY_1074d080"

void __fastcall FUN_1074d080(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAmazonAlexaSetupWizardType);
  if ((undefined4 *)(DAT_121a2ac4) != (undefined4 *)(0x0)) {
    (**(code **)DAT_121a2ac4)(1);
  }
  thunk_FUN_106de840();
  return;
}


// Reference entry 1074d180; body size 38 bytes.
#line 1 "ENTRY_1074d180"

undefined4 * __thiscall Recovered_Bulk::FUN_1074d180(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1074d210; body size 48 bytes.
#line 1 "ENTRY_1074d210"

undefined4 * __thiscall Recovered_Bulk::FUN_1074d210(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2ac4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1074d330; body size 56 bytes.
#line 1 "ENTRY_1074d330"

undefined4 * __thiscall Recovered_Bulk::FUN_1074d330(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAmazonAlexaSetupWizardType);
  if ((undefined4 *)(DAT_121a2ac4) != (undefined4 *)(0x0)) {
    (**(code **)DAT_121a2ac4)(1);
  }
  thunk_FUN_106de840();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10750ed0; body size 38 bytes.
#line 1 "ENTRY_10750ed0"

undefined4 * __thiscall Recovered_Bulk::FUN_10750ed0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10750f00; body size 38 bytes.
#line 1 "ENTRY_10750f00"

undefined4 * __thiscall Recovered_Bulk::FUN_10750f00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10750f30; body size 38 bytes.
#line 1 "ENTRY_10750f30"

undefined4 * __thiscall Recovered_Bulk::FUN_10750f30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10750f60; body size 38 bytes.
#line 1 "ENTRY_10750f60"

undefined4 * __thiscall Recovered_Bulk::FUN_10750f60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10750f90; body size 38 bytes.
#line 1 "ENTRY_10750f90"

undefined4 * __thiscall Recovered_Bulk::FUN_10750f90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10750fc0; body size 38 bytes.
#line 1 "ENTRY_10750fc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10750fc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10750ff0; body size 38 bytes.
#line 1 "ENTRY_10750ff0"

undefined4 * __thiscall Recovered_Bulk::FUN_10750ff0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10751140; body size 48 bytes.
#line 1 "ENTRY_10751140"

undefined4 * __thiscall Recovered_Bulk::FUN_10751140(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2b20 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107511e0; body size 48 bytes.
#line 1 "ENTRY_107511e0"

undefined4 * __thiscall Recovered_Bulk::FUN_107511e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2b1c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10751280; body size 48 bytes.
#line 1 "ENTRY_10751280"

undefined4 * __thiscall Recovered_Bulk::FUN_10751280(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2b08 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10751380; body size 48 bytes.
#line 1 "ENTRY_10751380"

undefined4 * __thiscall Recovered_Bulk::FUN_10751380(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2b10 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10751420; body size 48 bytes.
#line 1 "ENTRY_10751420"

undefined4 * __thiscall Recovered_Bulk::FUN_10751420(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2b0c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107514c0; body size 48 bytes.
#line 1 "ENTRY_107514c0"

undefined4 * __thiscall Recovered_Bulk::FUN_107514c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2b14 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10751560; body size 48 bytes.
#line 1 "ENTRY_10751560"

undefined4 * __thiscall Recovered_Bulk::FUN_10751560(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2b18 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107558b0; body size 28 bytes.
#line 1 "ENTRY_107558b0"

int * __thiscall Recovered_Bulk::FUN_107558b0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xe8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10758160; body size 36 bytes.
#line 1 "ENTRY_10758160"

void FUN_10758160(void)

{
  undefined1 uVar1;
  int iVar2;
  
  thunk_FUN_10ebc1d0();
  iVar2 = (int)(thunk_FUN_10eb41b0(), 0);
  uVar1 = (undefined1)(thunk_FUN_107bcdc0(), 0);
  *(undefined1*)(iVar2 + 0xf4) = (undefined1)(uVar1);
  return;
}


// Reference entry 10758190; body size 36 bytes.
#line 1 "ENTRY_10758190"

void FUN_10758190(void)

{
  undefined1 uVar1;
  int iVar2;
  
  thunk_FUN_10ebc1d0();
  iVar2 = (int)(thunk_FUN_10eb41b0(), 0);
  uVar1 = (undefined1)(thunk_FUN_108eeb60(), 0);
  *(undefined1*)(iVar2 + 0xf4) = (undefined1)(uVar1);
  return;
}


// Reference entry 1075a3f0; body size 38 bytes.
#line 1 "ENTRY_1075a3f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1075a3f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1075a420; body size 38 bytes.
#line 1 "ENTRY_1075a420"

undefined4 * __thiscall Recovered_Bulk::FUN_1075a420(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1075a450; body size 38 bytes.
#line 1 "ENTRY_1075a450"

undefined4 * __thiscall Recovered_Bulk::FUN_1075a450(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1075a480; body size 38 bytes.
#line 1 "ENTRY_1075a480"

undefined4 * __thiscall Recovered_Bulk::FUN_1075a480(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1075a4b0; body size 38 bytes.
#line 1 "ENTRY_1075a4b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1075a4b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1075a4e0; body size 38 bytes.
#line 1 "ENTRY_1075a4e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1075a4e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1075a510; body size 38 bytes.
#line 1 "ENTRY_1075a510"

undefined4 * __thiscall Recovered_Bulk::FUN_1075a510(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1075a600; body size 48 bytes.
#line 1 "ENTRY_1075a600"

undefined4 * __thiscall Recovered_Bulk::FUN_1075a600(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2b8c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1075a6a0; body size 48 bytes.
#line 1 "ENTRY_1075a6a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1075a6a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2b80 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1075a740; body size 48 bytes.
#line 1 "ENTRY_1075a740"

undefined4 * __thiscall Recovered_Bulk::FUN_1075a740(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2b7c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1075a850; body size 48 bytes.
#line 1 "ENTRY_1075a850"

undefined4 * __thiscall Recovered_Bulk::FUN_1075a850(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2b78 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1075a8f0; body size 48 bytes.
#line 1 "ENTRY_1075a8f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1075a8f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2b84 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1075a990; body size 48 bytes.
#line 1 "ENTRY_1075a990"

undefined4 * __thiscall Recovered_Bulk::FUN_1075a990(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2b90 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1075ab00; body size 48 bytes.
#line 1 "ENTRY_1075ab00"

undefined4 * __thiscall Recovered_Bulk::FUN_1075ab00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2b88 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10760a40; body size 62 bytes.
#line 1 "ENTRY_10760a40"

void __stdcall FUN_10760a40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return;
}


// Reference entry 10760ec0; body size 34 bytes.
#line 1 "ENTRY_10760ec0"

void __fastcall FUN_10760ec0(int param_1)

{
  thunk_FUN_10ebba70("appVersionCheckMax");
  thunk_FUN_10ebba70("appVersionCheckDuration");
  *(undefined1*)(param_1 + 0xec) = (undefined1)(0);
  return;
}


// Reference entry 10761000; body size 61 bytes.
#line 1 "ENTRY_10761000"

void __fastcall FUN_10761000(int *param_1)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 8))();
  thunk_FUN_105ad910();
  iVar1 = (int)(thunk_FUN_106dc530(), 0);
  iVar2 = (int)(thunk_FUN_106243b0(), 0);
  if (iVar1 != iVar2) {
    thunk_FUN_10eacd40();
    return;
  }
  thunk_FUN_106431c0();
  return;
}


// Reference entry 107637b0; body size 38 bytes.
#line 1 "ENTRY_107637b0"

undefined4 * __thiscall Recovered_Bulk::FUN_107637b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107637e0; body size 38 bytes.
#line 1 "ENTRY_107637e0"

undefined4 * __thiscall Recovered_Bulk::FUN_107637e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10763810; body size 38 bytes.
#line 1 "ENTRY_10763810"

undefined4 * __thiscall Recovered_Bulk::FUN_10763810(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10763910; body size 48 bytes.
#line 1 "ENTRY_10763910"

undefined4 * __thiscall Recovered_Bulk::FUN_10763910(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2be8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107639b0; body size 48 bytes.
#line 1 "ENTRY_107639b0"

undefined4 * __thiscall Recovered_Bulk::FUN_107639b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2bec = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10763a50; body size 48 bytes.
#line 1 "ENTRY_10763a50"

undefined4 * __thiscall Recovered_Bulk::FUN_10763a50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2be4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10763c50; body size 61 bytes.
#line 1 "ENTRY_10763c50"

void __thiscall Recovered_Bulk::FUN_10763c50(int *param_2)
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


// Reference entry 10768300; body size 49 bytes.
#line 1 "ENTRY_10768300"

void __fastcall FUN_10768300(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCApInstructionsWizardType);
  if ((undefined4 *)(DAT_121a2c38) != (undefined4 *)(0x0)) {
    (**(code **)DAT_121a2c38)(1);
  }
  if ((undefined4 *)(DAT_121a2c3c) != (undefined4 *)(0x0)) {
    (**(code **)DAT_121a2c3c)(1);
  }
  thunk_FUN_106de840();
  return;
}


// Reference entry 10768430; body size 38 bytes.
#line 1 "ENTRY_10768430"

undefined4 * __thiscall Recovered_Bulk::FUN_10768430(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10768460; body size 38 bytes.
#line 1 "ENTRY_10768460"

undefined4 * __thiscall Recovered_Bulk::FUN_10768460(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107684f0; body size 48 bytes.
#line 1 "ENTRY_107684f0"

undefined4 * __thiscall Recovered_Bulk::FUN_107684f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2c38 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10768590; body size 48 bytes.
#line 1 "ENTRY_10768590"

undefined4 * __thiscall Recovered_Bulk::FUN_10768590(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2c3c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1076d870; body size 38 bytes.
#line 1 "ENTRY_1076d870"

undefined4 * __thiscall Recovered_Bulk::FUN_1076d870(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1076d8a0; body size 38 bytes.
#line 1 "ENTRY_1076d8a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1076d8a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1076d8d0; body size 38 bytes.
#line 1 "ENTRY_1076d8d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1076d8d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1076d900; body size 38 bytes.
#line 1 "ENTRY_1076d900"

undefined4 * __thiscall Recovered_Bulk::FUN_1076d900(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1076d930; body size 38 bytes.
#line 1 "ENTRY_1076d930"

undefined4 * __thiscall Recovered_Bulk::FUN_1076d930(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1076da80; body size 48 bytes.
#line 1 "ENTRY_1076da80"

undefined4 * __thiscall Recovered_Bulk::FUN_1076da80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2c90 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1076db20; body size 48 bytes.
#line 1 "ENTRY_1076db20"

undefined4 * __thiscall Recovered_Bulk::FUN_1076db20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2c98 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1076dbc0; body size 48 bytes.
#line 1 "ENTRY_1076dbc0"

undefined4 * __thiscall Recovered_Bulk::FUN_1076dbc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2c9c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1076dc60; body size 48 bytes.
#line 1 "ENTRY_1076dc60"

undefined4 * __thiscall Recovered_Bulk::FUN_1076dc60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2c8c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1076dd00; body size 48 bytes.
#line 1 "ENTRY_1076dd00"

undefined4 * __thiscall Recovered_Bulk::FUN_1076dd00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2c94 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10771db0; body size 59 bytes.
#line 1 "ENTRY_10771db0"

void FUN_10771db0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10ebc1d0(), 0);
  *(undefined4*)(iVar1 + 0xf4) = (undefined4)(3);
  iVar1 = (int)(thunk_FUN_10eb41b0(), 0);
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  return;
}


// Reference entry 107733b0; body size 24 bytes.
#line 1 "ENTRY_107733b0"

undefined4 * __thiscall Recovered_Bulk::FUN_107733b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10773f70; body size 60 bytes.
#line 1 "ENTRY_10773f70"

void __fastcall FUN_10773f70(int *param_1)

{
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


// Reference entry 10774410; body size 20 bytes.
#line 1 "ENTRY_10774410"

void FUN_10774410(void)

{
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  return;
}


// Reference entry 107746a0; body size 38 bytes.
#line 1 "ENTRY_107746a0"

undefined4 * __thiscall Recovered_Bulk::FUN_107746a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107746d0; body size 38 bytes.
#line 1 "ENTRY_107746d0"

undefined4 * __thiscall Recovered_Bulk::FUN_107746d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10774700; body size 38 bytes.
#line 1 "ENTRY_10774700"

undefined4 * __thiscall Recovered_Bulk::FUN_10774700(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10774730; body size 38 bytes.
#line 1 "ENTRY_10774730"

undefined4 * __thiscall Recovered_Bulk::FUN_10774730(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10774830; body size 48 bytes.
#line 1 "ENTRY_10774830"

undefined4 * __thiscall Recovered_Bulk::FUN_10774830(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2cf0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107748d0; body size 48 bytes.
#line 1 "ENTRY_107748d0"

undefined4 * __thiscall Recovered_Bulk::FUN_107748d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2cec = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107749e0; body size 48 bytes.
#line 1 "ENTRY_107749e0"

undefined4 * __thiscall Recovered_Bulk::FUN_107749e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2cf4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10774af0; body size 48 bytes.
#line 1 "ENTRY_10774af0"

undefined4 * __thiscall Recovered_Bulk::FUN_10774af0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2cf8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1077c380; body size 33 bytes.
#line 1 "ENTRY_1077c380"

void __fastcall FUN_1077c380(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBleConnectWizardType);
  if ((undefined4 *)(DAT_121a2d4c) != (undefined4 *)(0x0)) {
    (**(code **)DAT_121a2d4c)(1);
  }
  thunk_FUN_106de840();
  return;
}


// Reference entry 1077c480; body size 38 bytes.
#line 1 "ENTRY_1077c480"

undefined4 * __thiscall Recovered_Bulk::FUN_1077c480(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1077c510; body size 48 bytes.
#line 1 "ENTRY_1077c510"

undefined4 * __thiscall Recovered_Bulk::FUN_1077c510(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2d4c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1077c660; body size 56 bytes.
#line 1 "ENTRY_1077c660"

undefined4 * __thiscall Recovered_Bulk::FUN_1077c660(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBleConnectWizardType);
  if ((undefined4 *)(DAT_121a2d4c) != (undefined4 *)(0x0)) {
    (**(code **)DAT_121a2d4c)(1);
  }
  thunk_FUN_106de840();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1077f250; body size 38 bytes.
#line 1 "ENTRY_1077f250"

undefined4 * __thiscall Recovered_Bulk::FUN_1077f250(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1077f280; body size 38 bytes.
#line 1 "ENTRY_1077f280"

undefined4 * __thiscall Recovered_Bulk::FUN_1077f280(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1077f2b0; body size 38 bytes.
#line 1 "ENTRY_1077f2b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1077f2b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1077f340; body size 48 bytes.
#line 1 "ENTRY_1077f340"

undefined4 * __thiscall Recovered_Bulk::FUN_1077f340(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2d94 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1077f3e0; body size 48 bytes.
#line 1 "ENTRY_1077f3e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1077f3e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2d9c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1077f480; body size 48 bytes.
#line 1 "ENTRY_1077f480"

undefined4 * __thiscall Recovered_Bulk::FUN_1077f480(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2d98 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10781c60; body size 17 bytes.
#line 1 "ENTRY_10781c60"

bool FUN_10781c60(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_106dbf00(DAT_121a2d98), 0);
  return (bool)(0 < iVar1);
}


// Reference entry 10783930; body size 33 bytes.
#line 1 "ENTRY_10783930"

void __fastcall FUN_10783930(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBluetoothOnlyWizardType);
  if ((undefined4 *)(DAT_121a2de8) != (undefined4 *)(0x0)) {
    (**(code **)DAT_121a2de8)(1);
  }
  thunk_FUN_106de840();
  return;
}


// Reference entry 10783a30; body size 38 bytes.
#line 1 "ENTRY_10783a30"

undefined4 * __thiscall Recovered_Bulk::FUN_10783a30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10783ac0; body size 48 bytes.
#line 1 "ENTRY_10783ac0"

undefined4 * __thiscall Recovered_Bulk::FUN_10783ac0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2de8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10783bb0; body size 56 bytes.
#line 1 "ENTRY_10783bb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10783bb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBluetoothOnlyWizardType);
  if ((undefined4 *)(DAT_121a2de8) != (undefined4 *)(0x0)) {
    (**(code **)DAT_121a2de8)(1);
  }
  thunk_FUN_106de840();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10785c30; body size 33 bytes.
#line 1 "ENTRY_10785c30"

void __thiscall Recovered_Bulk::FUN_10785c30(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10785c60(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10787f60; body size 41 bytes.
#line 1 "ENTRY_10787f60"

undefined4 * __thiscall Recovered_Bulk::FUN_10787f60(int *param_2)
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


// Reference entry 10788330; body size 48 bytes.
#line 1 "ENTRY_10788330"

undefined4 * __fastcall FUN_10788330(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 1078dc90; body size 38 bytes.
#line 1 "ENTRY_1078dc90"

void __fastcall FUN_1078dc90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  return;
}


// Reference entry 1078e080; body size 60 bytes.
#line 1 "ENTRY_1078e080"

void __fastcall FUN_1078e080(int *param_1)

{
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


// Reference entry 1078e0e0; body size 60 bytes.
#line 1 "ENTRY_1078e0e0"

void __fastcall FUN_1078e0e0(int *param_1)

{
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


// Reference entry 1078e1d0; body size 28 bytes.
#line 1 "ENTRY_1078e1d0"

void __fastcall FUN_1078e1d0(int *param_1)

{
  thunk_FUN_10785c60(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 1078e200; body size 28 bytes.
#line 1 "ENTRY_1078e200"

void __fastcall FUN_1078e200(int *param_1)

{
  thunk_FUN_10785c60(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 107908e0; body size 38 bytes.
#line 1 "ENTRY_107908e0"

undefined4 * __thiscall Recovered_Bulk::FUN_107908e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790910; body size 38 bytes.
#line 1 "ENTRY_10790910"

undefined4 * __thiscall Recovered_Bulk::FUN_10790910(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790940; body size 38 bytes.
#line 1 "ENTRY_10790940"

undefined4 * __thiscall Recovered_Bulk::FUN_10790940(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790970; body size 38 bytes.
#line 1 "ENTRY_10790970"

undefined4 * __thiscall Recovered_Bulk::FUN_10790970(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107909a0; body size 38 bytes.
#line 1 "ENTRY_107909a0"

undefined4 * __thiscall Recovered_Bulk::FUN_107909a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107909d0; body size 38 bytes.
#line 1 "ENTRY_107909d0"

undefined4 * __thiscall Recovered_Bulk::FUN_107909d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790a00; body size 38 bytes.
#line 1 "ENTRY_10790a00"

undefined4 * __thiscall Recovered_Bulk::FUN_10790a00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790a30; body size 38 bytes.
#line 1 "ENTRY_10790a30"

undefined4 * __thiscall Recovered_Bulk::FUN_10790a30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790a60; body size 38 bytes.
#line 1 "ENTRY_10790a60"

undefined4 * __thiscall Recovered_Bulk::FUN_10790a60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790a90; body size 38 bytes.
#line 1 "ENTRY_10790a90"

undefined4 * __thiscall Recovered_Bulk::FUN_10790a90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790ac0; body size 38 bytes.
#line 1 "ENTRY_10790ac0"

undefined4 * __thiscall Recovered_Bulk::FUN_10790ac0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790af0; body size 38 bytes.
#line 1 "ENTRY_10790af0"

undefined4 * __thiscall Recovered_Bulk::FUN_10790af0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790b20; body size 38 bytes.
#line 1 "ENTRY_10790b20"

undefined4 * __thiscall Recovered_Bulk::FUN_10790b20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790b50; body size 38 bytes.
#line 1 "ENTRY_10790b50"

undefined4 * __thiscall Recovered_Bulk::FUN_10790b50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790b80; body size 38 bytes.
#line 1 "ENTRY_10790b80"

undefined4 * __thiscall Recovered_Bulk::FUN_10790b80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790bb0; body size 38 bytes.
#line 1 "ENTRY_10790bb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10790bb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790be0; body size 38 bytes.
#line 1 "ENTRY_10790be0"

undefined4 * __thiscall Recovered_Bulk::FUN_10790be0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790c10; body size 38 bytes.
#line 1 "ENTRY_10790c10"

undefined4 * __thiscall Recovered_Bulk::FUN_10790c10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790c40; body size 38 bytes.
#line 1 "ENTRY_10790c40"

undefined4 * __thiscall Recovered_Bulk::FUN_10790c40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790c70; body size 38 bytes.
#line 1 "ENTRY_10790c70"

undefined4 * __thiscall Recovered_Bulk::FUN_10790c70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790ca0; body size 38 bytes.
#line 1 "ENTRY_10790ca0"

undefined4 * __thiscall Recovered_Bulk::FUN_10790ca0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790cd0; body size 38 bytes.
#line 1 "ENTRY_10790cd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10790cd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790d00; body size 38 bytes.
#line 1 "ENTRY_10790d00"

undefined4 * __thiscall Recovered_Bulk::FUN_10790d00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790d30; body size 38 bytes.
#line 1 "ENTRY_10790d30"

undefined4 * __thiscall Recovered_Bulk::FUN_10790d30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790d60; body size 38 bytes.
#line 1 "ENTRY_10790d60"

undefined4 * __thiscall Recovered_Bulk::FUN_10790d60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790d90; body size 38 bytes.
#line 1 "ENTRY_10790d90"

undefined4 * __thiscall Recovered_Bulk::FUN_10790d90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790dc0; body size 38 bytes.
#line 1 "ENTRY_10790dc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10790dc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790df0; body size 38 bytes.
#line 1 "ENTRY_10790df0"

undefined4 * __thiscall Recovered_Bulk::FUN_10790df0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790e20; body size 38 bytes.
#line 1 "ENTRY_10790e20"

undefined4 * __thiscall Recovered_Bulk::FUN_10790e20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790e50; body size 38 bytes.
#line 1 "ENTRY_10790e50"

undefined4 * __thiscall Recovered_Bulk::FUN_10790e50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790e80; body size 38 bytes.
#line 1 "ENTRY_10790e80"

undefined4 * __thiscall Recovered_Bulk::FUN_10790e80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10790eb0; body size 38 bytes.
#line 1 "ENTRY_10790eb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10790eb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10791180; body size 48 bytes.
#line 1 "ENTRY_10791180"

undefined4 * __thiscall Recovered_Bulk::FUN_10791180(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e38 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10791220; body size 48 bytes.
#line 1 "ENTRY_10791220"

undefined4 * __thiscall Recovered_Bulk::FUN_10791220(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e3c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10791360; body size 48 bytes.
#line 1 "ENTRY_10791360"

undefined4 * __thiscall Recovered_Bulk::FUN_10791360(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e40 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10791400; body size 48 bytes.
#line 1 "ENTRY_10791400"

undefined4 * __thiscall Recovered_Bulk::FUN_10791400(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e8c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107914a0; body size 48 bytes.
#line 1 "ENTRY_107914a0"

undefined4 * __thiscall Recovered_Bulk::FUN_107914a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2ea0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107915e0; body size 48 bytes.
#line 1 "ENTRY_107915e0"

undefined4 * __thiscall Recovered_Bulk::FUN_107915e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e6c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10791780; body size 48 bytes.
#line 1 "ENTRY_10791780"

undefined4 * __thiscall Recovered_Bulk::FUN_10791780(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e70 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107918c0; body size 48 bytes.
#line 1 "ENTRY_107918c0"

undefined4 * __thiscall Recovered_Bulk::FUN_107918c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e74 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10791ad0; body size 48 bytes.
#line 1 "ENTRY_10791ad0"

undefined4 * __thiscall Recovered_Bulk::FUN_10791ad0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e68 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10791b70; body size 48 bytes.
#line 1 "ENTRY_10791b70"

undefined4 * __thiscall Recovered_Bulk::FUN_10791b70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e54 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10791c10; body size 48 bytes.
#line 1 "ENTRY_10791c10"

undefined4 * __thiscall Recovered_Bulk::FUN_10791c10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2eac = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10791cb0; body size 48 bytes.
#line 1 "ENTRY_10791cb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10791cb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e60 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10791d50; body size 48 bytes.
#line 1 "ENTRY_10791d50"

undefined4 * __thiscall Recovered_Bulk::FUN_10791d50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e64 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10791df0; body size 48 bytes.
#line 1 "ENTRY_10791df0"

undefined4 * __thiscall Recovered_Bulk::FUN_10791df0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e34 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10791e90; body size 48 bytes.
#line 1 "ENTRY_10791e90"

undefined4 * __thiscall Recovered_Bulk::FUN_10791e90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e9c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10791f30; body size 48 bytes.
#line 1 "ENTRY_10791f30"

undefined4 * __thiscall Recovered_Bulk::FUN_10791f30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e94 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10791fd0; body size 48 bytes.
#line 1 "ENTRY_10791fd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10791fd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2ea8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10792130; body size 48 bytes.
#line 1 "ENTRY_10792130"

undefined4 * __thiscall Recovered_Bulk::FUN_10792130(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e4c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10792270; body size 48 bytes.
#line 1 "ENTRY_10792270"

undefined4 * __thiscall Recovered_Bulk::FUN_10792270(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e50 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10792310; body size 48 bytes.
#line 1 "ENTRY_10792310"

undefined4 * __thiscall Recovered_Bulk::FUN_10792310(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e48 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107923b0; body size 48 bytes.
#line 1 "ENTRY_107923b0"

undefined4 * __thiscall Recovered_Bulk::FUN_107923b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e44 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10792450; body size 48 bytes.
#line 1 "ENTRY_10792450"

undefined4 * __thiscall Recovered_Bulk::FUN_10792450(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e5c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10792490; body size 35 bytes.
#line 1 "ENTRY_10792490"

undefined4 __thiscall Recovered_Bulk::FUN_10792490(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1078f040();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x13c);
  }
  return (undefined4)(param_1);
}


// Reference entry 107924c0; body size 48 bytes.
#line 1 "ENTRY_107924c0"

undefined4 * __thiscall Recovered_Bulk::FUN_107924c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e58 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10792500; body size 32 bytes.
#line 1 "ENTRY_10792500"

undefined4 __thiscall Recovered_Bulk::FUN_10792500(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1078f2a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x4c);
  }
  return (undefined4)(param_1);
}


// Reference entry 10792600; body size 48 bytes.
#line 1 "ENTRY_10792600"

undefined4 * __thiscall Recovered_Bulk::FUN_10792600(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e98 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107926a0; body size 48 bytes.
#line 1 "ENTRY_107926a0"

undefined4 * __thiscall Recovered_Bulk::FUN_107926a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2eb0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10792740; body size 48 bytes.
#line 1 "ENTRY_10792740"

undefined4 * __thiscall Recovered_Bulk::FUN_10792740(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e90 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107928b0; body size 48 bytes.
#line 1 "ENTRY_107928b0"

undefined4 * __thiscall Recovered_Bulk::FUN_107928b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e7c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10792a40; body size 48 bytes.
#line 1 "ENTRY_10792a40"

undefined4 * __thiscall Recovered_Bulk::FUN_10792a40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e80 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10792ae0; body size 48 bytes.
#line 1 "ENTRY_10792ae0"

undefined4 * __thiscall Recovered_Bulk::FUN_10792ae0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e84 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10792c80; body size 48 bytes.
#line 1 "ENTRY_10792c80"

undefined4 * __thiscall Recovered_Bulk::FUN_10792c80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e78 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10792d20; body size 48 bytes.
#line 1 "ENTRY_10792d20"

undefined4 * __thiscall Recovered_Bulk::FUN_10792d20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2ea4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10792dc0; body size 48 bytes.
#line 1 "ENTRY_10792dc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10792dc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2e88 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10793000; body size 32 bytes.
#line 1 "ENTRY_10793000"

undefined4 __thiscall Recovered_Bulk::FUN_10793000(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1078fc20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4)(param_1);
}


// Reference entry 10793090; body size 52 bytes.
#line 1 "ENTRY_10793090"

void __thiscall Recovered_Bulk::FUN_10793090(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10604790();
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  param_1[2] = (undefined4)(param_2[2]);
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 107930e0; body size 52 bytes.
#line 1 "ENTRY_107930e0"

void __thiscall Recovered_Bulk::FUN_107930e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10604820();
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  param_1[2] = (undefined4)(param_2[2]);
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10793b20; body size 61 bytes.
#line 1 "ENTRY_10793b20"

void __thiscall Recovered_Bulk::FUN_10793b20(int *param_2)
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


// Reference entry 10793b70; body size 61 bytes.
#line 1 "ENTRY_10793b70"

void __thiscall Recovered_Bulk::FUN_10793b70(int *param_2)
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


// Reference entry 10799320; body size 52 bytes.
#line 1 "ENTRY_10799320"

undefined4 __fastcall FUN_10799320(int param_1)

{
  switch(*(undefined4 *)(*(int *)(param_1 + 0x128) + 0x28)) {
  case 1:
    return (undefined4)(DAT_121a2e68);
  case 2:
    return (undefined4)(DAT_121a2e6c);
  default:
    return (undefined4)(DAT_121a2e8c);
  case 7:
    return (undefined4)(DAT_121a2e74);
  case 8:
    return (undefined4)(DAT_121a2e70);
  }
}


// Reference entry 107998f0; body size 28 bytes.
#line 1 "ENTRY_107998f0"

int * __thiscall Recovered_Bulk::FUN_107998f0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x128), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 107af2b0; body size 28 bytes.
#line 1 "ENTRY_107af2b0"

int * __thiscall Recovered_Bulk::FUN_107af2b0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x100), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 107bca20; body size 20 bytes.
#line 1 "ENTRY_107bca20"

undefined4 __thiscall Recovered_Bulk::FUN_107bca20(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1064d7a0(param_1 + 0x40);
  return (undefined4)(param_2);
}


// Reference entry 107bca40; body size 48 bytes.
#line 1 "ENTRY_107bca40"

undefined4 __fastcall FUN_107bca40(int param_1)

{
  switch(*(undefined4 *)(*(int *)(param_1 + 0x128) + 0x28)) {
  case 9:
  case 10:
    return (undefined4)(DAT_121a2e78);
  default:
    return (undefined4)(DAT_121a2e90);
  case 0xd:
    return (undefined4)(DAT_121a2e80);
  case 0xe:
    return (undefined4)(DAT_121a2e7c);
  }
}


// Reference entry 107bcdc0; body size 17 bytes.
#line 1 "ENTRY_107bcdc0"

bool FUN_107bcdc0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_106dbf00(DAT_121a2e98), 0);
  return (bool)(0 < iVar1);
}


// Reference entry 107cc370; body size 16 bytes.
#line 1 "ENTRY_107cc370"

void __thiscall Recovered_Bulk::FUN_107cc370(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(*(int *)(param_1 + 0x128) + 0x28) = (undefined4)(param_2);
  return;
}


// Reference entry 107cc570; body size 42 bytes.
#line 1 "ENTRY_107cc570"

void __thiscall Recovered_Bulk::FUN_107cc570(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(*(int *)(param_1 + 0x128) + 8));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 107cc800; body size 41 bytes.
#line 1 "ENTRY_107cc800"

void __stdcall FUN_107cc800(int param_1)

{
  undefined4 uStack_c;
  
  if (param_1 != 0) {
    uStack_c = (undefined4)(3);
    thunk_FUN_107931b0(param_1);
    thunk_FUN_10c98710(&uStack_c);
    thunk_FUN_10793550();
  }
  return;
}


// Reference entry 107cf210; body size 38 bytes.
#line 1 "ENTRY_107cf210"

void __fastcall FUN_107cf210(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  return;
}


// Reference entry 107d0010; body size 38 bytes.
#line 1 "ENTRY_107d0010"

undefined4 * __thiscall Recovered_Bulk::FUN_107d0010(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107d0040; body size 38 bytes.
#line 1 "ENTRY_107d0040"

undefined4 * __thiscall Recovered_Bulk::FUN_107d0040(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107d0070; body size 38 bytes.
#line 1 "ENTRY_107d0070"

undefined4 * __thiscall Recovered_Bulk::FUN_107d0070(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107d00a0; body size 38 bytes.
#line 1 "ENTRY_107d00a0"

undefined4 * __thiscall Recovered_Bulk::FUN_107d00a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107d00d0; body size 38 bytes.
#line 1 "ENTRY_107d00d0"

undefined4 * __thiscall Recovered_Bulk::FUN_107d00d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107d0100; body size 38 bytes.
#line 1 "ENTRY_107d0100"

undefined4 * __thiscall Recovered_Bulk::FUN_107d0100(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107d0130; body size 38 bytes.
#line 1 "ENTRY_107d0130"

undefined4 * __thiscall Recovered_Bulk::FUN_107d0130(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107d0160; body size 38 bytes.
#line 1 "ENTRY_107d0160"

undefined4 * __thiscall Recovered_Bulk::FUN_107d0160(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107d0190; body size 38 bytes.
#line 1 "ENTRY_107d0190"

undefined4 * __thiscall Recovered_Bulk::FUN_107d0190(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107d01c0; body size 38 bytes.
#line 1 "ENTRY_107d01c0"

undefined4 * __thiscall Recovered_Bulk::FUN_107d01c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107d02f0; body size 48 bytes.
#line 1 "ENTRY_107d02f0"

undefined4 * __thiscall Recovered_Bulk::FUN_107d02f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2f30 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107d0430; body size 48 bytes.
#line 1 "ENTRY_107d0430"

undefined4 * __thiscall Recovered_Bulk::FUN_107d0430(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2f34 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107d04d0; body size 48 bytes.
#line 1 "ENTRY_107d04d0"

undefined4 * __thiscall Recovered_Bulk::FUN_107d04d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2f3c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107d0610; body size 48 bytes.
#line 1 "ENTRY_107d0610"

undefined4 * __thiscall Recovered_Bulk::FUN_107d0610(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2f18 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107d06b0; body size 48 bytes.
#line 1 "ENTRY_107d06b0"

undefined4 * __thiscall Recovered_Bulk::FUN_107d06b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2f38 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107d0820; body size 48 bytes.
#line 1 "ENTRY_107d0820"

undefined4 * __thiscall Recovered_Bulk::FUN_107d0820(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2f1c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107d0960; body size 48 bytes.
#line 1 "ENTRY_107d0960"

undefined4 * __thiscall Recovered_Bulk::FUN_107d0960(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2f20 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107d0aa0; body size 48 bytes.
#line 1 "ENTRY_107d0aa0"

undefined4 * __thiscall Recovered_Bulk::FUN_107d0aa0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2f24 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107d0c30; body size 48 bytes.
#line 1 "ENTRY_107d0c30"

undefined4 * __thiscall Recovered_Bulk::FUN_107d0c30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2f28 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107d0d70; body size 48 bytes.
#line 1 "ENTRY_107d0d70"

undefined4 * __thiscall Recovered_Bulk::FUN_107d0d70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2f2c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107db420; body size 28 bytes.
#line 1 "ENTRY_107db420"

int * __thiscall Recovered_Bulk::FUN_107db420(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xe8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 107e5460; body size 50 bytes.
#line 1 "ENTRY_107e5460"

void __thiscall Recovered_Bulk::FUN_107e5460(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0xf0));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  *(undefined1*)(param_1 + 0xfa) = (undefined1)(1);
  return;
}


// Reference entry 107e6c70; body size 49 bytes.
#line 1 "ENTRY_107e6c70"

void __fastcall FUN_107e6c70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBusinessWelcomeWizardType);
  if ((undefined4 *)(DAT_121a2f94) != (undefined4 *)(0x0)) {
    (**(code **)DAT_121a2f94)(1);
  }
  if ((undefined4 *)(DAT_121a2f98) != (undefined4 *)(0x0)) {
    (**(code **)DAT_121a2f98)(1);
  }
  thunk_FUN_106de840();
  return;
}


// Reference entry 107e6e30; body size 38 bytes.
#line 1 "ENTRY_107e6e30"

undefined4 * __thiscall Recovered_Bulk::FUN_107e6e30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107e6e60; body size 38 bytes.
#line 1 "ENTRY_107e6e60"

undefined4 * __thiscall Recovered_Bulk::FUN_107e6e60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107e6fc0; body size 48 bytes.
#line 1 "ENTRY_107e6fc0"

undefined4 * __thiscall Recovered_Bulk::FUN_107e6fc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2f94 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107e7060; body size 48 bytes.
#line 1 "ENTRY_107e7060"

undefined4 * __thiscall Recovered_Bulk::FUN_107e7060(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2f98 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107e70a0; body size 35 bytes.
#line 1 "ENTRY_107e70a0"

undefined4 __thiscall Recovered_Bulk::FUN_107e70a0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe8);
  }
  return (undefined4)(param_1);
}


// Reference entry 107e84a0; body size 62 bytes.
#line 1 "ENTRY_107e84a0"

void __stdcall FUN_107e84a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTree);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return;
}


// Reference entry 107ec120; body size 20 bytes.
#line 1 "ENTRY_107ec120"

void FUN_107ec120(void)

{
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  return;
}


// Reference entry 107ec190; body size 20 bytes.
#line 1 "ENTRY_107ec190"

void FUN_107ec190(void)

{
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  return;
}


// Reference entry 107ec200; body size 20 bytes.
#line 1 "ENTRY_107ec200"

void FUN_107ec200(void)

{
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  return;
}


// Reference entry 107ec4e0; body size 38 bytes.
#line 1 "ENTRY_107ec4e0"

undefined4 * __thiscall Recovered_Bulk::FUN_107ec4e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107ec510; body size 38 bytes.
#line 1 "ENTRY_107ec510"

undefined4 * __thiscall Recovered_Bulk::FUN_107ec510(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107ec540; body size 38 bytes.
#line 1 "ENTRY_107ec540"

undefined4 * __thiscall Recovered_Bulk::FUN_107ec540(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107ec570; body size 38 bytes.
#line 1 "ENTRY_107ec570"

undefined4 * __thiscall Recovered_Bulk::FUN_107ec570(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107ec5a0; body size 38 bytes.
#line 1 "ENTRY_107ec5a0"

undefined4 * __thiscall Recovered_Bulk::FUN_107ec5a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107ec5d0; body size 38 bytes.
#line 1 "ENTRY_107ec5d0"

undefined4 * __thiscall Recovered_Bulk::FUN_107ec5d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107ec600; body size 38 bytes.
#line 1 "ENTRY_107ec600"

undefined4 * __thiscall Recovered_Bulk::FUN_107ec600(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107ec630; body size 38 bytes.
#line 1 "ENTRY_107ec630"

undefined4 * __thiscall Recovered_Bulk::FUN_107ec630(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107ec660; body size 38 bytes.
#line 1 "ENTRY_107ec660"

undefined4 * __thiscall Recovered_Bulk::FUN_107ec660(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107ec690; body size 38 bytes.
#line 1 "ENTRY_107ec690"

undefined4 * __thiscall Recovered_Bulk::FUN_107ec690(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107ec6c0; body size 38 bytes.
#line 1 "ENTRY_107ec6c0"

undefined4 * __thiscall Recovered_Bulk::FUN_107ec6c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107ec6f0; body size 38 bytes.
#line 1 "ENTRY_107ec6f0"

undefined4 * __thiscall Recovered_Bulk::FUN_107ec6f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107ec720; body size 38 bytes.
#line 1 "ENTRY_107ec720"

undefined4 * __thiscall Recovered_Bulk::FUN_107ec720(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107ec7b0; body size 48 bytes.
#line 1 "ENTRY_107ec7b0"

undefined4 * __thiscall Recovered_Bulk::FUN_107ec7b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a300c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107ec850; body size 48 bytes.
#line 1 "ENTRY_107ec850"

undefined4 * __thiscall Recovered_Bulk::FUN_107ec850(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a3008 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107ec8f0; body size 48 bytes.
#line 1 "ENTRY_107ec8f0"

undefined4 * __thiscall Recovered_Bulk::FUN_107ec8f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a3004 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107ec990; body size 48 bytes.
#line 1 "ENTRY_107ec990"

undefined4 * __thiscall Recovered_Bulk::FUN_107ec990(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2ff0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107eca30; body size 48 bytes.
#line 1 "ENTRY_107eca30"

undefined4 * __thiscall Recovered_Bulk::FUN_107eca30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a3000 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107ecad0; body size 48 bytes.
#line 1 "ENTRY_107ecad0"

undefined4 * __thiscall Recovered_Bulk::FUN_107ecad0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2ffc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107ecb70; body size 48 bytes.
#line 1 "ENTRY_107ecb70"

undefined4 * __thiscall Recovered_Bulk::FUN_107ecb70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2ff8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107ecc10; body size 48 bytes.
#line 1 "ENTRY_107ecc10"

undefined4 * __thiscall Recovered_Bulk::FUN_107ecc10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2ff4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107eccb0; body size 48 bytes.
#line 1 "ENTRY_107eccb0"

undefined4 * __thiscall Recovered_Bulk::FUN_107eccb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2fe0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107ecd50; body size 48 bytes.
#line 1 "ENTRY_107ecd50"

undefined4 * __thiscall Recovered_Bulk::FUN_107ecd50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2fdc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107ecdf0; body size 48 bytes.
#line 1 "ENTRY_107ecdf0"

undefined4 * __thiscall Recovered_Bulk::FUN_107ecdf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2fec = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107ece90; body size 48 bytes.
#line 1 "ENTRY_107ece90"

undefined4 * __thiscall Recovered_Bulk::FUN_107ece90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2fe4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 107ecf30; body size 48 bytes.
#line 1 "ENTRY_107ecf30"

undefined4 * __thiscall Recovered_Bulk::FUN_107ecf30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a2fe8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10803350; body size 38 bytes.
#line 1 "ENTRY_10803350"

undefined4 * __thiscall Recovered_Bulk::FUN_10803350(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10803380; body size 38 bytes.
#line 1 "ENTRY_10803380"

undefined4 * __thiscall Recovered_Bulk::FUN_10803380(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108033b0; body size 38 bytes.
#line 1 "ENTRY_108033b0"

undefined4 * __thiscall Recovered_Bulk::FUN_108033b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108033e0; body size 38 bytes.
#line 1 "ENTRY_108033e0"

undefined4 * __thiscall Recovered_Bulk::FUN_108033e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10803410; body size 38 bytes.
#line 1 "ENTRY_10803410"

undefined4 * __thiscall Recovered_Bulk::FUN_10803410(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10803440; body size 38 bytes.
#line 1 "ENTRY_10803440"

undefined4 * __thiscall Recovered_Bulk::FUN_10803440(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10803470; body size 38 bytes.
#line 1 "ENTRY_10803470"

undefined4 * __thiscall Recovered_Bulk::FUN_10803470(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108034a0; body size 38 bytes.
#line 1 "ENTRY_108034a0"

undefined4 * __thiscall Recovered_Bulk::FUN_108034a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10803530; body size 48 bytes.
#line 1 "ENTRY_10803530"

undefined4 * __thiscall Recovered_Bulk::FUN_10803530(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a3080 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108035d0; body size 48 bytes.
#line 1 "ENTRY_108035d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108035d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a307c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10803670; body size 48 bytes.
#line 1 "ENTRY_10803670"

undefined4 * __thiscall Recovered_Bulk::FUN_10803670(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a3074 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10803710; body size 48 bytes.
#line 1 "ENTRY_10803710"

undefined4 * __thiscall Recovered_Bulk::FUN_10803710(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a3070 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108037b0; body size 48 bytes.
#line 1 "ENTRY_108037b0"

undefined4 * __thiscall Recovered_Bulk::FUN_108037b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a306c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10803850; body size 48 bytes.
#line 1 "ENTRY_10803850"

undefined4 * __thiscall Recovered_Bulk::FUN_10803850(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a3068 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108038f0; body size 48 bytes.
#line 1 "ENTRY_108038f0"

undefined4 * __thiscall Recovered_Bulk::FUN_108038f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a3078 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10803990; body size 48 bytes.
#line 1 "ENTRY_10803990"

undefined4 * __thiscall Recovered_Bulk::FUN_10803990(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a3064 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10813170; body size 38 bytes.
#line 1 "ENTRY_10813170"

undefined4 * __thiscall Recovered_Bulk::FUN_10813170(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108131a0; body size 38 bytes.
#line 1 "ENTRY_108131a0"

undefined4 * __thiscall Recovered_Bulk::FUN_108131a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108131d0; body size 38 bytes.
#line 1 "ENTRY_108131d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108131d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10813200; body size 38 bytes.
#line 1 "ENTRY_10813200"

undefined4 * __thiscall Recovered_Bulk::FUN_10813200(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108132f0; body size 48 bytes.
#line 1 "ENTRY_108132f0"

undefined4 * __thiscall Recovered_Bulk::FUN_108132f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a30e4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10813390; body size 48 bytes.
#line 1 "ENTRY_10813390"

undefined4 * __thiscall Recovered_Bulk::FUN_10813390(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a30e0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10813430; body size 48 bytes.
#line 1 "ENTRY_10813430"

undefined4 * __thiscall Recovered_Bulk::FUN_10813430(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a30d4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108134d0; body size 48 bytes.
#line 1 "ENTRY_108134d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108134d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a30d8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1081afa0; body size 38 bytes.
#line 1 "ENTRY_1081afa0"

undefined4 * __thiscall Recovered_Bulk::FUN_1081afa0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1081afd0; body size 38 bytes.
#line 1 "ENTRY_1081afd0"

undefined4 * __thiscall Recovered_Bulk::FUN_1081afd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1081b000; body size 38 bytes.
#line 1 "ENTRY_1081b000"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b000(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1081b030; body size 38 bytes.
#line 1 "ENTRY_1081b030"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b030(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1081b060; body size 38 bytes.
#line 1 "ENTRY_1081b060"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b060(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1081b090; body size 38 bytes.
#line 1 "ENTRY_1081b090"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b090(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1081b0c0; body size 38 bytes.
#line 1 "ENTRY_1081b0c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b0c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1081b0f0; body size 38 bytes.
#line 1 "ENTRY_1081b0f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b0f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1081b120; body size 38 bytes.
#line 1 "ENTRY_1081b120"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b120(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1081b150; body size 38 bytes.
#line 1 "ENTRY_1081b150"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b150(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1081b180; body size 38 bytes.
#line 1 "ENTRY_1081b180"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b180(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1081b210; body size 48 bytes.
#line 1 "ENTRY_1081b210"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b210(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a3140 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1081b2b0; body size 48 bytes.
#line 1 "ENTRY_1081b2b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b2b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a3144 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1081b350; body size 48 bytes.
#line 1 "ENTRY_1081b350"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b350(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a313c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1081b3f0; body size 48 bytes.
#line 1 "ENTRY_1081b3f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b3f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a3148 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1081b490; body size 48 bytes.
#line 1 "ENTRY_1081b490"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b490(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a312c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1081b530; body size 48 bytes.
#line 1 "ENTRY_1081b530"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b530(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a3134 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1081b5d0; body size 48 bytes.
#line 1 "ENTRY_1081b5d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b5d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a3130 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1081b670; body size 48 bytes.
#line 1 "ENTRY_1081b670"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b670(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a3138 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1081b710; body size 48 bytes.
#line 1 "ENTRY_1081b710"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b710(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a3150 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1081b7b0; body size 48 bytes.
#line 1 "ENTRY_1081b7b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b7b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a3154 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1081b850; body size 48 bytes.
#line 1 "ENTRY_1081b850"

undefined4 * __thiscall Recovered_Bulk::FUN_1081b850(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a314c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10823350; body size 25 bytes.
#line 1 "ENTRY_10823350"

undefined4 __stdcall FUN_10823350(undefined4 param_1)

{
  thunk_FUN_10eb41c0();
  thunk_FUN_108249b0(param_1,1);
  return (undefined4)(param_1);
}


// Reference entry 10823370; body size 25 bytes.
#line 1 "ENTRY_10823370"

undefined4 __stdcall FUN_10823370(undefined4 param_1)

{
  thunk_FUN_10eb41c0();
  thunk_FUN_108249b0(param_1,0);
  return (undefined4)(param_1);
}


// Reference entry 10823390; body size 25 bytes.
#line 1 "ENTRY_10823390"

undefined4 __stdcall FUN_10823390(undefined4 param_1)

{
  thunk_FUN_10eb41c0();
  thunk_FUN_108249b0(param_1,4);
  return (undefined4)(param_1);
}


// Reference entry 10823870; body size 25 bytes.
#line 1 "ENTRY_10823870"

undefined4 __stdcall FUN_10823870(undefined4 param_1)

{
  thunk_FUN_10eb41c0();
  thunk_FUN_108249b0(param_1,4);
  return (undefined4)(param_1);
}


// Reference entry 10823bc0; body size 25 bytes.
#line 1 "ENTRY_10823bc0"

undefined4 __stdcall FUN_10823bc0(undefined4 param_1)

{
  thunk_FUN_10eb41c0();
  thunk_FUN_108249b0(param_1,3);
  return (undefined4)(param_1);
}


// Reference entry 10827fe0; body size 55 bytes.
#line 1 "ENTRY_10827fe0"

int * __thiscall Recovered_Bulk::FUN_10827fe0(SCStr *param_2)
{
  int *param_1 = (int *)this;
  SCStr *this_;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  this_ = (SCStr *)((SCStr *)param_1[1]);
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 8));
  *puVar1 = (undefined4)(*(undefined4 *)(param_2 + 4));
  puVar1[1] = (undefined4)(uVar2);
  return (int *)(param_1);
}


// Reference entry 108288a0; body size 33 bytes.
#line 1 "ENTRY_108288a0"

void __thiscall Recovered_Bulk::FUN_108288a0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_108288d0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10829c50; body size 41 bytes.
#line 1 "ENTRY_10829c50"

undefined4 * __thiscall Recovered_Bulk::FUN_10829c50(int *param_2)
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


// Reference entry 10829cb0; body size 48 bytes.
#line 1 "ENTRY_10829cb0"

undefined4 * __fastcall FUN_10829cb0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 1082b400; body size 38 bytes.
#line 1 "ENTRY_1082b400"

void __fastcall FUN_1082b400(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  return;
}


// Reference entry 1082b4a0; body size 19 bytes.
#line 1 "ENTRY_1082b4a0"

void __fastcall FUN_1082b4a0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 1082b4c0; body size 28 bytes.
#line 1 "ENTRY_1082b4c0"

void __fastcall FUN_1082b4c0(int *param_1)

{
  thunk_FUN_108288d0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 1082b580; body size 19 bytes.
#line 1 "ENTRY_1082b580"

void __fastcall FUN_1082b580(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 1082b5a0; body size 17 bytes.
#line 1 "ENTRY_1082b5a0"

void __fastcall FUN_1082b5a0(undefined4 *param_1)

{
  thunk_FUN_108280a0(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 1082b5c0; body size 28 bytes.
#line 1 "ENTRY_1082b5c0"

void __fastcall FUN_1082b5c0(int *param_1)

{
  thunk_FUN_108288d0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 1082b810; body size 55 bytes.
#line 1 "ENTRY_1082b810"

void __fastcall FUN_1082b810(undefined4 *param_1)

{
  thunk_FUN_1082d6b0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  return;
}


// Reference entry 1082c1a0; body size 38 bytes.
#line 1 "ENTRY_1082c1a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1082c1a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1082c1d0; body size 38 bytes.
#line 1 "ENTRY_1082c1d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1082c1d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1082c200; body size 38 bytes.
#line 1 "ENTRY_1082c200"

undefined4 * __thiscall Recovered_Bulk::FUN_1082c200(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1082c230; body size 38 bytes.
#line 1 "ENTRY_1082c230"

undefined4 * __thiscall Recovered_Bulk::FUN_1082c230(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1082c260; body size 38 bytes.
#line 1 "ENTRY_1082c260"

undefined4 * __thiscall Recovered_Bulk::FUN_1082c260(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1082c290; body size 38 bytes.
#line 1 "ENTRY_1082c290"

undefined4 * __thiscall Recovered_Bulk::FUN_1082c290(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1082c2c0; body size 38 bytes.
#line 1 "ENTRY_1082c2c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1082c2c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1082c4e0; body size 48 bytes.
#line 1 "ENTRY_1082c4e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1082c4e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a31ac = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1082c590; body size 48 bytes.
#line 1 "ENTRY_1082c590"

undefined4 * __thiscall Recovered_Bulk::FUN_1082c590(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a31b4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1082c630; body size 48 bytes.
#line 1 "ENTRY_1082c630"

undefined4 * __thiscall Recovered_Bulk::FUN_1082c630(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a31a8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1082c6d0; body size 48 bytes.
#line 1 "ENTRY_1082c6d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1082c6d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a31c0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1082c770; body size 48 bytes.
#line 1 "ENTRY_1082c770"

undefined4 * __thiscall Recovered_Bulk::FUN_1082c770(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a31bc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1082c870; body size 48 bytes.
#line 1 "ENTRY_1082c870"

undefined4 * __thiscall Recovered_Bulk::FUN_1082c870(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a31b8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1082c970; body size 48 bytes.
#line 1 "ENTRY_1082c970"

undefined4 * __thiscall Recovered_Bulk::FUN_1082c970(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a31b0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1082c9b0; body size 35 bytes.
#line 1 "ENTRY_1082c9b0"

undefined4 __thiscall Recovered_Bulk::FUN_1082c9b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1082baf0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x13c);
  }
  return (undefined4)(param_1);
}


// Reference entry 1082cad0; body size 25 bytes.
#line 1 "ENTRY_1082cad0"

void __fastcall FUN_1082cad0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 1082cc20; body size 20 bytes.
#line 1 "ENTRY_1082cc20"

void __thiscall Recovered_Bulk::FUN_1082cc20(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_108280a0(param_2,param_3,param_1);
  return;
}


// Reference entry 1082d580; body size 52 bytes.
#line 1 "ENTRY_1082d580"

void __thiscall Recovered_Bulk::FUN_1082d580(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1082d6b0();
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  param_1[2] = (undefined4)(param_2[2]);
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 108303c0; body size 59 bytes.
#line 1 "ENTRY_108303c0"

void __stdcall FUN_108303c0(int param_1,int param_2)

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


// Reference entry 10836240; body size 52 bytes.
#line 1 "ENTRY_10836240"

void FUN_10836240(void)

{
  thunk_FUN_10cf4ae0(1);
  thunk_FUN_10cf4ae0(3);
  thunk_FUN_10cf4ae0(2);
  thunk_FUN_1082df70();
  return;
}


// Reference entry 10838510; body size 22 bytes.
#line 1 "ENTRY_10838510"

void FUN_10838510(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_11287ac0();
  return;
}


// Reference entry 108388d0; body size 22 bytes.
#line 1 "ENTRY_108388d0"

void FUN_108388d0(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_11287ac0();
  return;
}


// Reference entry 10838a20; body size 38 bytes.
#line 1 "ENTRY_10838a20"

undefined4 * __thiscall Recovered_Bulk::FUN_10838a20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10838a50; body size 38 bytes.
#line 1 "ENTRY_10838a50"

undefined4 * __thiscall Recovered_Bulk::FUN_10838a50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10838a80; body size 38 bytes.
#line 1 "ENTRY_10838a80"

undefined4 * __thiscall Recovered_Bulk::FUN_10838a80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10838ab0; body size 33 bytes.
#line 1 "ENTRY_10838ab0"

undefined4 * __thiscall Recovered_Bulk::FUN_10838ab0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpdateOpCallback);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10838ae0; body size 33 bytes.
#line 1 "ENTRY_10838ae0"

undefined4 * __thiscall Recovered_Bulk::FUN_10838ae0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPUpdateProgressCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10838b70; body size 48 bytes.
#line 1 "ENTRY_10838b70"

undefined4 * __thiscall Recovered_Bulk::FUN_10838b70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a3220 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10838c10; body size 48 bytes.
#line 1 "ENTRY_10838c10"

undefined4 * __thiscall Recovered_Bulk::FUN_10838c10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a3218 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10838d30; body size 48 bytes.
#line 1 "ENTRY_10838d30"

undefined4 * __thiscall Recovered_Bulk::FUN_10838d30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a321c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1083d1a0; body size 23 bytes.
#line 1 "ENTRY_1083d1a0"

int __fastcall FUN_1083d1a0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x100));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 0) && (iVar1 != 0x3ef)) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 1083e500; body size 61 bytes.
#line 1 "ENTRY_1083e500"

void __thiscall Recovered_Bulk::FUN_1083e500(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  *(undefined4*)(param_1 + 0x100) = (undefined4)(param_2);
  thunk_FUN_10eb0d90("updateResultCode",param_2);
  iVar1 = (int)(thunk_FUN_110828b0(), 0);
  if (iVar1 != 0) {
    thunk_FUN_10eb0c60("targetBaselineVersion",iVar1 + 0xad1);
  }
  return;
}


// Reference entry 108411d0; body size 24 bytes.
#line 1 "ENTRY_108411d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108411d0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108459b0; body size 60 bytes.
#line 1 "ENTRY_108459b0"

void __fastcall FUN_108459b0(int *param_1)

{
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


// Reference entry 10846600; body size 55 bytes.
#line 1 "ENTRY_10846600"

void __fastcall FUN_10846600(undefined4 *param_1)

{
  thunk_FUN_1036e480();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  return;
}


// Reference entry 108470b0; body size 38 bytes.
#line 1 "ENTRY_108470b0"

undefined4 * __thiscall Recovered_Bulk::FUN_108470b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108470e0; body size 38 bytes.
#line 1 "ENTRY_108470e0"

undefined4 * __thiscall Recovered_Bulk::FUN_108470e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10847110; body size 38 bytes.
#line 1 "ENTRY_10847110"

undefined4 * __thiscall Recovered_Bulk::FUN_10847110(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10847140; body size 38 bytes.
#line 1 "ENTRY_10847140"

undefined4 * __thiscall Recovered_Bulk::FUN_10847140(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10847170; body size 38 bytes.
#line 1 "ENTRY_10847170"

undefined4 * __thiscall Recovered_Bulk::FUN_10847170(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108471a0; body size 38 bytes.
#line 1 "ENTRY_108471a0"

undefined4 * __thiscall Recovered_Bulk::FUN_108471a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108471d0; body size 38 bytes.
#line 1 "ENTRY_108471d0"

undefined4 * __thiscall Recovered_Bulk::FUN_108471d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10847200; body size 38 bytes.
#line 1 "ENTRY_10847200"

undefined4 * __thiscall Recovered_Bulk::FUN_10847200(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10847230; body size 38 bytes.
#line 1 "ENTRY_10847230"

undefined4 * __thiscall Recovered_Bulk::FUN_10847230(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10847260; body size 38 bytes.
#line 1 "ENTRY_10847260"

undefined4 * __thiscall Recovered_Bulk::FUN_10847260(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10847290; body size 38 bytes.
#line 1 "ENTRY_10847290"

undefined4 * __thiscall Recovered_Bulk::FUN_10847290(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108472c0; body size 38 bytes.
#line 1 "ENTRY_108472c0"

undefined4 * __thiscall Recovered_Bulk::FUN_108472c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 108472f0; body size 38 bytes.
#line 1 "ENTRY_108472f0"

undefined4 * __thiscall Recovered_Bulk::FUN_108472f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10847320; body size 38 bytes.
#line 1 "ENTRY_10847320"

undefined4 * __thiscall Recovered_Bulk::FUN_10847320(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


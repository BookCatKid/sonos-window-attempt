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
struct ActionScriptTrace { char _pad; ActionScriptTrace(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct EnqueuedTransportURIMetaData { char _pad; EnqueuedTransportURIMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Hi { char _pad; Hi(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct InstanceID { char _pad; InstanceID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct MediaServer { char _pad; MediaServer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Op { char _pad; Op(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct PostMessageA { char _pad; PostMessageA(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct RDMValue { char _pad; RDMValue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SetEvent { char _pad; SetEvent(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
typedef void *H;
typedef void *HWND;
typedef void *R;
typedef void *URI;
typedef void *WARNING;
using namespace std;
extern "C" void LAB_100015be(void);
extern "C" void LAB_100025d1(void);
extern "C" void LAB_10002a68(void);
extern "C" void LAB_10002f90(void);
extern "C" void LAB_10002ff4(void);
extern "C" void LAB_10003d37(void);
extern "C" void LAB_1000470a(void);
extern "C" void LAB_10004a70(void);
extern "C" void LAB_1000546b(void);
extern "C" void LAB_100069c9(void);
extern "C" void LAB_1000879c(void);
extern "C" void LAB_1000c2b1(void);
extern "C" void LAB_1000d0df(void);
extern "C" void LAB_1000e23c(void);
extern "C" void LAB_100109fb(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_100162a2(void);
extern "C" void LAB_10017017(void);
extern "C" void LAB_1001718e(void);
extern "C" void LAB_10019245(void);
extern "C" void LAB_1001acad(void);
extern "C" void LAB_1001b1f8(void);
extern "C" void LAB_1001b667(void);
extern "C" void LAB_1001c864(void);
extern "C" void LAB_100208ab(void);
extern "C" void LAB_10021a3f(void);
extern "C" void LAB_1002267e(void);
extern "C" void LAB_1002312d(void);
extern "C" void LAB_10023277(void);
extern "C" void LAB_100238df(void);
extern "C" void LAB_10023a4c(void);
extern "C" void LAB_10023bf0(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_1002815a(void);
extern "C" void LAB_1002cb4c(void);
extern "C" void LAB_100310bb(void);
extern "C" void LAB_1003125a(void);
extern "C" void LAB_100318bd(void);
extern "C" void LAB_1003214b(void);
extern "C" void LAB_100327e5(void);
extern "C" void LAB_10034e0f(void);
extern "C" void LAB_10035891(void);
extern "C" void LAB_1003675f(void);
extern "C" void LAB_10036e30(void);
extern "C" void LAB_10037c95(void);
extern "C" void LAB_1003a904(void);
extern "C" void LAB_1003c691(void);
extern "C" void LAB_1003ddb6(void);
extern "C" void LAB_1003df55(void);
extern "C" void LAB_1003f2ba(void);
extern "C" void LAB_10041c59(void);
extern "C" void LAB_10041e02(void);
extern "C" void LAB_10042064(void);
extern "C" void LAB_100437fc(void);
extern "C" void LAB_10046425(void);
extern "C" void LAB_10047b09(void);
extern "C" void LAB_100480b8(void);
extern "C" void LAB_10048252(void);
extern "C" void LAB_1004a56b(void);
extern "C" void LAB_1004ae94(void);
extern "C" void LAB_1004b9b1(void);
extern "C" void LAB_1004d6da(void);
extern "C" void LAB_1004e904(void);
extern "C" void LAB_1004ec47(void);
extern "C" void LAB_10050e52(void);
extern "C" void LAB_1005311b(void);
extern "C" void LAB_10054999(void);
extern "C" void LAB_10055466(void);
extern "C" void LAB_10056497(void);
extern "C" void LAB_1005907a(void);
extern "C" void LAB_10059133(void);
extern "C" void LAB_10059bb0(void);
extern "C" void LAB_1005a128(void);
extern "C" void LAB_1005a3ee(void);
extern "C" void LAB_1005d56c(void);
extern "C" void LAB_1005e0a2(void);
extern "C" void LAB_1005e890(void);
extern "C" void LAB_1005f2d1(void);
extern "C" void LAB_1005f3fd(void);
extern "C" void LAB_10060140(void);
extern "C" void LAB_10060235(void);
extern "C" void LAB_1006041a(void);
extern "C" void LAB_10063d27(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_100672a1(void);
extern "C" void LAB_1006adb1(void);
extern "C" void LAB_1006cc4c(void);
extern "C" void LAB_1006de49(void);
extern "C" void LAB_1006f9dd(void);
extern "C" void LAB_10070185(void);
extern "C" void LAB_10070653(void);
extern "C" void LAB_10070892(void);
extern "C" void LAB_10070ced(void);
extern "C" void LAB_10071b61(void);
extern "C" void LAB_10072d77(void);
extern "C" void LAB_100742c6(void);
extern "C" void LAB_10075b7b(void);
extern "C" void LAB_100769e5(void);
extern "C" void LAB_10079820(void);
extern "C" void LAB_1007c363(void);
extern "C" void LAB_1007ca8e(void);
extern "C" void LAB_1007fff4(void);
extern "C" void LAB_10080c0b(void);
extern "C" void LAB_10081697(void);
extern "C" void LAB_10081787(void);
extern "C" void LAB_100839f6(void);
extern "C" void LAB_10084f13(void);
extern "C" void LAB_10086cb9(void);
extern "C" void LAB_10087137(void);
extern "C" void LAB_10089f3b(void);
extern "C" void LAB_1008aab2(void);
extern "C" void LAB_1008b728(void);
extern "C" void LAB_1008fc3d(void);
extern "C" void LAB_1009070f(void);
extern "C" void LAB_10091542(void);
extern "C" void LAB_1009177c(void);
extern "C" void LAB_100922b7(void);
extern "C" void LAB_10093793(void);
extern "C" void LAB_1009a598(void);
extern "C" void LAB_1009a9cb(void);
extern "C" void LAB_110befd0(void);
extern "C" void LAB_110d8e40(void);
extern "C" void LAB_110d8e48(void);
extern "C" void LAB_110f53d0(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_118821c0(void);
extern "C" void LAB_11887444(void);
extern "C" void LAB_1189067c(void);
extern "C" void LAB_118938e4(void);
extern "C" void LAB_118af674(void);
extern "C" void LAB_118b3210(void);
extern "C" void LAB_118b4510(void);
extern "C" void LAB_119c127c(void);
extern "C" void LAB_119c1520(void);
extern "C" void LAB_119c1b38(void);
extern "C" void LAB_119c2924(void);
extern "C" void LAB_119c2934(void);
extern "C" void LAB_119c34b8(void);
extern "C" void LAB_119c3570(void);
extern "C" void LAB_119c35a4(void);
extern "C" void LAB_119c35b8(void);
extern "C" void LAB_119c35d0(void);
extern "C" void LAB_119c35e4(void);
extern "C" void LAB_119c3614(void);
extern "C" void LAB_119c3674(void);
extern "C" void LAB_119c3680(void);
extern "C" void LAB_119c3694(void);
extern "C" void LAB_119c36a4(void);
extern "C" void LAB_119c36b0(void);
extern "C" void LAB_119c36d0(void);
extern "C" void LAB_119c3b78(void);
extern "C" void LAB_119c41b0(void);
extern "C" void LAB_119c50ec(void);
extern "C" void LAB_119c5840(void);
extern "C" void LAB_119c58ec(void);
extern "C" void LAB_119c591c(void);
extern "C" void LAB_119c592c(void);
extern "C" void LAB_119c5a7c(void);
extern "C" void LAB_119c5ad4(void);
extern "C" void LAB_119c5b34(void);
extern "C" void LAB_119c5c40(void);
extern "C" void LAB_119c6480(void);
extern "C" void LAB_119c64ac(void);
extern "C" void LAB_119c64dc(void);
extern "C" void LAB_119c6638(void);
extern "C" void LAB_119c66e8(void);
extern "C" void LAB_119c6714(void);
extern "C" void LAB_119c76cc(void);
extern "C" void LAB_119c76e0(void);
extern "C" void LAB_119c76fc(void);
extern "C" void LAB_119c7738(void);
extern "C" void LAB_1211dae0(void);
extern "C" void LAB_122e8d40(void);
extern "C" unsigned char LAB_122fc19c;
extern "C" unsigned char LAB_122fc4f8;
extern "C" unsigned char LAB_122fca10;

extern "C" void LAB_100015be(void);
extern "C" void LAB_100025d1(void);
extern "C" void LAB_10002a68(void);
extern "C" void LAB_10002f90(void);
extern "C" void LAB_10002ff4(void);
extern "C" void LAB_10003d37(void);
extern "C" void LAB_1000470a(void);
extern "C" void LAB_10004a70(void);
extern "C" void LAB_1000546b(void);
extern "C" void LAB_100069c9(void);
extern "C" void LAB_1000879c(void);
extern "C" void LAB_1000c2b1(void);
extern "C" void LAB_1000d0df(void);
extern "C" void LAB_1000e23c(void);
extern "C" void LAB_100109fb(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_100162a2(void);
extern "C" void LAB_10017017(void);
extern "C" void LAB_1001718e(void);
extern "C" void LAB_10019245(void);
extern "C" void LAB_1001acad(void);
extern "C" void LAB_1001b1f8(void);
extern "C" void LAB_1001b667(void);
extern "C" void LAB_1001c864(void);
extern "C" void LAB_100208ab(void);
extern "C" void LAB_10021a3f(void);
extern "C" void LAB_1002267e(void);
extern "C" void LAB_1002312d(void);
extern "C" void LAB_10023277(void);
extern "C" void LAB_100238df(void);
extern "C" void LAB_10023a4c(void);
extern "C" void LAB_10023bf0(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_1002815a(void);
extern "C" void LAB_1002cb4c(void);
extern "C" void LAB_100310bb(void);
extern "C" void LAB_1003125a(void);
extern "C" void LAB_100318bd(void);
extern "C" void LAB_1003214b(void);
extern "C" void LAB_100327e5(void);
extern "C" void LAB_10034e0f(void);
extern "C" void LAB_10035891(void);
extern "C" void LAB_1003675f(void);
extern "C" void LAB_10036e30(void);
extern "C" void LAB_10037c95(void);
extern "C" void LAB_1003a904(void);
extern "C" void LAB_1003c691(void);
extern "C" void LAB_1003ddb6(void);
extern "C" void LAB_1003df55(void);
extern "C" void LAB_1003f2ba(void);
extern "C" void LAB_10041c59(void);
extern "C" void LAB_10041e02(void);
extern "C" void LAB_10042064(void);
extern "C" void LAB_100437fc(void);
extern "C" void LAB_10046425(void);
extern "C" void LAB_10047b09(void);
extern "C" void LAB_100480b8(void);
extern "C" void LAB_10048252(void);
extern "C" void LAB_1004a56b(void);
extern "C" void LAB_1004ae94(void);
extern "C" void LAB_1004b9b1(void);
extern "C" void LAB_1004d6da(void);
extern "C" void LAB_1004e904(void);
extern "C" void LAB_1004ec47(void);
extern "C" void LAB_10050e52(void);
extern "C" void LAB_1005311b(void);
extern "C" void LAB_10054999(void);
extern "C" void LAB_10055466(void);
extern "C" void LAB_10056497(void);
extern "C" void LAB_1005907a(void);
extern "C" void LAB_10059133(void);
extern "C" void LAB_10059bb0(void);
extern "C" void LAB_1005a128(void);
extern "C" void LAB_1005a3ee(void);
extern "C" void LAB_1005d56c(void);
extern "C" void LAB_1005e0a2(void);
extern "C" void LAB_1005e890(void);
extern "C" void LAB_1005f2d1(void);
extern "C" void LAB_1005f3fd(void);
extern "C" void LAB_10060140(void);
extern "C" void LAB_10060235(void);
extern "C" void LAB_1006041a(void);
extern "C" void LAB_10063d27(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_100672a1(void);
extern "C" void LAB_1006adb1(void);
extern "C" void LAB_1006cc4c(void);
extern "C" void LAB_1006de49(void);
extern "C" void LAB_1006f9dd(void);
extern "C" void LAB_10070185(void);
extern "C" void LAB_10070653(void);
extern "C" void LAB_10070892(void);
extern "C" void LAB_10070ced(void);
extern "C" void LAB_10071b61(void);
extern "C" void LAB_10072d77(void);
extern "C" void LAB_100742c6(void);
extern "C" void LAB_10075b7b(void);
extern "C" void LAB_100769e5(void);
extern "C" void LAB_10079820(void);
extern "C" void LAB_1007c363(void);
extern "C" void LAB_1007ca8e(void);
extern "C" void LAB_1007fff4(void);
extern "C" void LAB_10080c0b(void);
extern "C" void LAB_10081697(void);
extern "C" void LAB_10081787(void);
extern "C" void LAB_100839f6(void);
extern "C" void LAB_10084f13(void);
extern "C" void LAB_10086cb9(void);
extern "C" void LAB_10087137(void);
extern "C" void LAB_10089f3b(void);
extern "C" void LAB_1008aab2(void);
extern "C" void LAB_1008b728(void);
extern "C" void LAB_1008fc3d(void);
extern "C" void LAB_1009070f(void);
extern "C" void LAB_10091542(void);
extern "C" void LAB_1009177c(void);
extern "C" void LAB_100922b7(void);
extern "C" void LAB_10093793(void);
extern "C" void LAB_1009a598(void);
extern "C" void LAB_1009a9cb(void);
extern "C" void LAB_110befd0(void);
extern "C" void LAB_110d8e40(void);
extern "C" void LAB_110d8e48(void);
extern "C" void LAB_110f53d0(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_118821c0(void);
extern "C" void LAB_11887444(void);
extern "C" void LAB_1189067c(void);
extern "C" void LAB_118938e4(void);
extern "C" void LAB_118af674(void);
extern "C" void LAB_118b3210(void);
extern "C" void LAB_118b4510(void);
extern "C" void LAB_119c127c(void);
extern "C" void LAB_119c1520(void);
extern "C" void LAB_119c1b38(void);
extern "C" void LAB_119c2924(void);
extern "C" void LAB_119c2934(void);
extern "C" void LAB_119c34b8(void);
extern "C" void LAB_119c3570(void);
extern "C" void LAB_119c35a4(void);
extern "C" void LAB_119c35b8(void);
extern "C" void LAB_119c35d0(void);
extern "C" void LAB_119c35e4(void);
extern "C" void LAB_119c3614(void);
extern "C" void LAB_119c3674(void);
extern "C" void LAB_119c3680(void);
extern "C" void LAB_119c3694(void);
extern "C" void LAB_119c36a4(void);
extern "C" void LAB_119c36b0(void);
extern "C" void LAB_119c36d0(void);
extern "C" void LAB_119c3b78(void);
extern "C" void LAB_119c41b0(void);
extern "C" void LAB_119c50ec(void);
extern "C" void LAB_119c5840(void);
extern "C" void LAB_119c58ec(void);
extern "C" void LAB_119c591c(void);
extern "C" void LAB_119c592c(void);
extern "C" void LAB_119c5a7c(void);
extern "C" void LAB_119c5ad4(void);
extern "C" void LAB_119c5b34(void);
extern "C" void LAB_119c5c40(void);
extern "C" void LAB_119c6480(void);
extern "C" void LAB_119c64ac(void);
extern "C" void LAB_119c64dc(void);
extern "C" void LAB_119c6638(void);
extern "C" void LAB_119c66e8(void);
extern "C" void LAB_119c6714(void);
extern "C" void LAB_119c76cc(void);
extern "C" void LAB_119c76e0(void);
extern "C" void LAB_119c76fc(void);
extern "C" void LAB_119c7738(void);
extern "C" void LAB_1211dae0(void);
extern "C" void LAB_122e8d40(void);
extern "C" unsigned char LAB_122fc19c;
extern "C" unsigned char LAB_122fc4f8;
extern "C" unsigned char LAB_122fca10;

extern "C" void LAB_100015be(void);
extern "C" void LAB_100025d1(void);
extern "C" void LAB_10002a68(void);
extern "C" void LAB_10002f90(void);
extern "C" void LAB_10002ff4(void);
extern "C" void LAB_10003d37(void);
extern "C" void LAB_1000470a(void);
extern "C" void LAB_10004a70(void);
extern "C" void LAB_1000546b(void);
extern "C" void LAB_100069c9(void);
extern "C" void LAB_1000879c(void);
extern "C" void LAB_1000c2b1(void);
extern "C" void LAB_1000d0df(void);
extern "C" void LAB_1000e23c(void);
extern "C" void LAB_100109fb(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_100162a2(void);
extern "C" void LAB_10017017(void);
extern "C" void LAB_1001718e(void);
extern "C" void LAB_10019245(void);
extern "C" void LAB_1001acad(void);
extern "C" void LAB_1001b1f8(void);
extern "C" void LAB_1001b667(void);
extern "C" void LAB_1001c864(void);
extern "C" void LAB_100208ab(void);
extern "C" void LAB_10021a3f(void);
extern "C" void LAB_1002267e(void);
extern "C" void LAB_1002312d(void);
extern "C" void LAB_10023277(void);
extern "C" void LAB_100238df(void);
extern "C" void LAB_10023a4c(void);
extern "C" void LAB_10023bf0(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_1002815a(void);
extern "C" void LAB_1002cb4c(void);
extern "C" void LAB_100310bb(void);
extern "C" void LAB_1003125a(void);
extern "C" void LAB_100318bd(void);
extern "C" void LAB_1003214b(void);
extern "C" void LAB_100327e5(void);
extern "C" void LAB_10034e0f(void);
extern "C" void LAB_10035891(void);
extern "C" void LAB_1003675f(void);
extern "C" void LAB_10036e30(void);
extern "C" void LAB_10037c95(void);
extern "C" void LAB_1003a904(void);
extern "C" void LAB_1003c691(void);
extern "C" void LAB_1003ddb6(void);
extern "C" void LAB_1003df55(void);
extern "C" void LAB_1003f2ba(void);
extern "C" void LAB_10041c59(void);
extern "C" void LAB_10041e02(void);
extern "C" void LAB_10042064(void);
extern "C" void LAB_100437fc(void);
extern "C" void LAB_10046425(void);
extern "C" void LAB_10047b09(void);
extern "C" void LAB_100480b8(void);
extern "C" void LAB_10048252(void);
extern "C" void LAB_1004a56b(void);
extern "C" void LAB_1004ae94(void);
extern "C" void LAB_1004b9b1(void);
extern "C" void LAB_1004d6da(void);
extern "C" void LAB_1004e904(void);
extern "C" void LAB_1004ec47(void);
extern "C" void LAB_10050e52(void);
extern "C" void LAB_1005311b(void);
extern "C" void LAB_10054999(void);
extern "C" void LAB_10055466(void);
extern "C" void LAB_10056497(void);
extern "C" void LAB_1005907a(void);
extern "C" void LAB_10059133(void);
extern "C" void LAB_10059bb0(void);
extern "C" void LAB_1005a128(void);
extern "C" void LAB_1005a3ee(void);
extern "C" void LAB_1005d56c(void);
extern "C" void LAB_1005e0a2(void);
extern "C" void LAB_1005e890(void);
extern "C" void LAB_1005f2d1(void);
extern "C" void LAB_1005f3fd(void);
extern "C" void LAB_10060140(void);
extern "C" void LAB_10060235(void);
extern "C" void LAB_1006041a(void);
extern "C" void LAB_10063d27(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_100672a1(void);
extern "C" void LAB_1006adb1(void);
extern "C" void LAB_1006cc4c(void);
extern "C" void LAB_1006de49(void);
extern "C" void LAB_1006f9dd(void);
extern "C" void LAB_10070185(void);
extern "C" void LAB_10070653(void);
extern "C" void LAB_10070892(void);
extern "C" void LAB_10070ced(void);
extern "C" void LAB_10071b61(void);
extern "C" void LAB_10072d77(void);
extern "C" void LAB_100742c6(void);
extern "C" void LAB_10075b7b(void);
extern "C" void LAB_100769e5(void);
extern "C" void LAB_10079820(void);
extern "C" void LAB_1007c363(void);
extern "C" void LAB_1007ca8e(void);
extern "C" void LAB_1007fff4(void);
extern "C" void LAB_10080c0b(void);
extern "C" void LAB_10081697(void);
extern "C" void LAB_10081787(void);
extern "C" void LAB_100839f6(void);
extern "C" void LAB_10084f13(void);
extern "C" void LAB_10086cb9(void);
extern "C" void LAB_10087137(void);
extern "C" void LAB_10089f3b(void);
extern "C" void LAB_1008aab2(void);
extern "C" void LAB_1008b728(void);
extern "C" void LAB_1008fc3d(void);
extern "C" void LAB_1009070f(void);
extern "C" void LAB_10091542(void);
extern "C" void LAB_1009177c(void);
extern "C" void LAB_100922b7(void);
extern "C" void LAB_10093793(void);
extern "C" void LAB_1009a598(void);
extern "C" void LAB_1009a9cb(void);
extern "C" void LAB_110befd0(void);
extern "C" void LAB_110d8e40(void);
extern "C" void LAB_110d8e48(void);
extern "C" void LAB_110f53d0(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_118821c0(void);
extern "C" void LAB_11887444(void);
extern "C" void LAB_1189067c(void);
extern "C" void LAB_118938e4(void);
extern "C" void LAB_118af674(void);
extern "C" void LAB_118b3210(void);
extern "C" void LAB_118b4510(void);
extern "C" void LAB_119c127c(void);
extern "C" void LAB_119c1520(void);
extern "C" void LAB_119c1b38(void);
extern "C" void LAB_119c2924(void);
extern "C" void LAB_119c2934(void);
extern "C" void LAB_119c34b8(void);
extern "C" void LAB_119c3570(void);
extern "C" void LAB_119c35a4(void);
extern "C" void LAB_119c35b8(void);
extern "C" void LAB_119c35d0(void);
extern "C" void LAB_119c35e4(void);
extern "C" void LAB_119c3614(void);
extern "C" void LAB_119c3674(void);
extern "C" void LAB_119c3680(void);
extern "C" void LAB_119c3694(void);
extern "C" void LAB_119c36a4(void);
extern "C" void LAB_119c36b0(void);
extern "C" void LAB_119c36d0(void);
extern "C" void LAB_119c3b78(void);
extern "C" void LAB_119c41b0(void);
extern "C" void LAB_119c50ec(void);
extern "C" void LAB_119c5840(void);
extern "C" void LAB_119c58ec(void);
extern "C" void LAB_119c591c(void);
extern "C" void LAB_119c592c(void);
extern "C" void LAB_119c5a7c(void);
extern "C" void LAB_119c5ad4(void);
extern "C" void LAB_119c5b34(void);
extern "C" void LAB_119c5c40(void);
extern "C" void LAB_119c6480(void);
extern "C" void LAB_119c64ac(void);
extern "C" void LAB_119c64dc(void);
extern "C" void LAB_119c6638(void);
extern "C" void LAB_119c66e8(void);
extern "C" void LAB_119c6714(void);
extern "C" void LAB_119c76cc(void);
extern "C" void LAB_119c76e0(void);
extern "C" void LAB_119c76fc(void);
extern "C" void LAB_119c7738(void);
extern "C" void LAB_1211dae0(void);
extern "C" void LAB_122e8d40(void);
extern "C" unsigned char LAB_122fc19c;
extern "C" unsigned char LAB_122fc4f8;
extern "C" unsigned char LAB_122fca10;

extern "C" void LAB_100015be(void);
extern "C" void LAB_100025d1(void);
extern "C" void LAB_10002a68(void);
extern "C" void LAB_10002f90(void);
extern "C" void LAB_10002ff4(void);
extern "C" void LAB_10003d37(void);
extern "C" void LAB_1000470a(void);
extern "C" void LAB_10004a70(void);
extern "C" void LAB_1000546b(void);
extern "C" void LAB_100069c9(void);
extern "C" void LAB_1000879c(void);
extern "C" void LAB_1000c2b1(void);
extern "C" void LAB_1000d0df(void);
extern "C" void LAB_1000e23c(void);
extern "C" void LAB_100109fb(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_100162a2(void);
extern "C" void LAB_10017017(void);
extern "C" void LAB_1001718e(void);
extern "C" void LAB_10019245(void);
extern "C" void LAB_1001acad(void);
extern "C" void LAB_1001b1f8(void);
extern "C" void LAB_1001b667(void);
extern "C" void LAB_1001c864(void);
extern "C" void LAB_100208ab(void);
extern "C" void LAB_10021a3f(void);
extern "C" void LAB_1002267e(void);
extern "C" void LAB_1002312d(void);
extern "C" void LAB_10023277(void);
extern "C" void LAB_100238df(void);
extern "C" void LAB_10023a4c(void);
extern "C" void LAB_10023bf0(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_1002815a(void);
extern "C" void LAB_1002cb4c(void);
extern "C" void LAB_100310bb(void);
extern "C" void LAB_1003125a(void);
extern "C" void LAB_100318bd(void);
extern "C" void LAB_1003214b(void);
extern "C" void LAB_100327e5(void);
extern "C" void LAB_10034e0f(void);
extern "C" void LAB_10035891(void);
extern "C" void LAB_1003675f(void);
extern "C" void LAB_10036e30(void);
extern "C" void LAB_10037c95(void);
extern "C" void LAB_1003a904(void);
extern "C" void LAB_1003c691(void);
extern "C" void LAB_1003df55(void);
extern "C" void LAB_1003f2ba(void);
extern "C" void LAB_10041c59(void);
extern "C" void LAB_10041e02(void);
extern "C" void LAB_10042064(void);
extern "C" void LAB_100437fc(void);
extern "C" void LAB_10046425(void);
extern "C" void LAB_10047b09(void);
extern "C" void LAB_100480b8(void);
extern "C" void LAB_10048252(void);
extern "C" void LAB_1004a56b(void);
extern "C" void LAB_1004ae94(void);
extern "C" void LAB_1004b9b1(void);
extern "C" void LAB_1004d6da(void);
extern "C" void LAB_1004e904(void);
extern "C" void LAB_1004ec47(void);
extern "C" void LAB_10050e52(void);
extern "C" void LAB_1005311b(void);
extern "C" void LAB_10054999(void);
extern "C" void LAB_10055466(void);
extern "C" void LAB_10056497(void);
extern "C" void LAB_1005907a(void);
extern "C" void LAB_10059133(void);
extern "C" void LAB_10059bb0(void);
extern "C" void LAB_1005a128(void);
extern "C" void LAB_1005a3ee(void);
extern "C" void LAB_1005d56c(void);
extern "C" void LAB_1005e0a2(void);
extern "C" void LAB_1005e890(void);
extern "C" void LAB_1005f2d1(void);
extern "C" void LAB_1005f3fd(void);
extern "C" void LAB_10060140(void);
extern "C" void LAB_10060235(void);
extern "C" void LAB_1006041a(void);
extern "C" void LAB_10063d27(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_100672a1(void);
extern "C" void LAB_1006adb1(void);
extern "C" void LAB_1006cc4c(void);
extern "C" void LAB_1006de49(void);
extern "C" void LAB_1006f9dd(void);
extern "C" void LAB_10070185(void);
extern "C" void LAB_10070653(void);
extern "C" void LAB_10070892(void);
extern "C" void LAB_10070ced(void);
extern "C" void LAB_10071b61(void);
extern "C" void LAB_10072d77(void);
extern "C" void LAB_100742c6(void);
extern "C" void LAB_10075b7b(void);
extern "C" void LAB_100769e5(void);
extern "C" void LAB_10079820(void);
extern "C" void LAB_1007c363(void);
extern "C" void LAB_1007ca8e(void);
extern "C" void LAB_1007fff4(void);
extern "C" void LAB_10080c0b(void);
extern "C" void LAB_10081697(void);
extern "C" void LAB_10081787(void);
extern "C" void LAB_100839f6(void);
extern "C" void LAB_10084f13(void);
extern "C" void LAB_10086cb9(void);
extern "C" void LAB_10087137(void);
extern "C" void LAB_10089f3b(void);
extern "C" void LAB_1008aab2(void);
extern "C" void LAB_1008b728(void);
extern "C" void LAB_1008fc3d(void);
extern "C" void LAB_1009070f(void);
extern "C" void LAB_10091542(void);
extern "C" void LAB_1009177c(void);
extern "C" void LAB_100922b7(void);
extern "C" void LAB_10093793(void);
extern "C" void LAB_1009a598(void);
extern "C" void LAB_1009a9cb(void);
extern "C" void LAB_110befd0(void);
extern "C" void LAB_110d8e40(void);
extern "C" void LAB_110d8e48(void);
extern "C" void LAB_110f53d0(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_118821c0(void);
extern "C" void LAB_11887444(void);
extern "C" void LAB_1189067c(void);
extern "C" void LAB_118938e4(void);
extern "C" void LAB_118af674(void);
extern "C" void LAB_118b3210(void);
extern "C" void LAB_118b4510(void);
extern "C" void LAB_119c127c(void);
extern "C" void LAB_119c1520(void);
extern "C" void LAB_119c1b38(void);
extern "C" void LAB_119c2924(void);
extern "C" void LAB_119c2934(void);
extern "C" void LAB_119c34b8(void);
extern "C" void LAB_119c3570(void);
extern "C" void LAB_119c35a4(void);
extern "C" void LAB_119c35b8(void);
extern "C" void LAB_119c35d0(void);
extern "C" void LAB_119c35e4(void);
extern "C" void LAB_119c3614(void);
extern "C" void LAB_119c3674(void);
extern "C" void LAB_119c3680(void);
extern "C" void LAB_119c3694(void);
extern "C" void LAB_119c36a4(void);
extern "C" void LAB_119c36b0(void);
extern "C" void LAB_119c36d0(void);
extern "C" void LAB_119c3b78(void);
extern "C" void LAB_119c41b0(void);
extern "C" void LAB_119c50ec(void);
extern "C" void LAB_119c5840(void);
extern "C" void LAB_119c58ec(void);
extern "C" void LAB_119c591c(void);
extern "C" void LAB_119c592c(void);
extern "C" void LAB_119c5a7c(void);
extern "C" void LAB_119c5ad4(void);
extern "C" void LAB_119c5b34(void);
extern "C" void LAB_119c5c40(void);
extern "C" void LAB_119c6480(void);
extern "C" void LAB_119c64ac(void);
extern "C" void LAB_119c64dc(void);
extern "C" void LAB_119c6638(void);
extern "C" void LAB_119c66e8(void);
extern "C" void LAB_119c6714(void);
extern "C" void LAB_119c76cc(void);
extern "C" void LAB_119c76e0(void);
extern "C" void LAB_119c76fc(void);
extern "C" void LAB_119c7738(void);
extern "C" void LAB_1211dae0(void);
extern "C" void LAB_122e8d40(void);
extern "C" unsigned char LAB_122fc19c;
extern "C" unsigned char LAB_122fc4f8;
extern "C" unsigned char LAB_122fca10;


struct Recovered_Bulk { char _pad; bool __thiscall m_FUN_110a1280(uint param_2); template<class... A> int m_FUN_110a1280(A...); undefined4 __thiscall m_FUN_110a3080(undefined4 param_2); template<class... A> int m_FUN_110a3080(A...); void __thiscall m_FUN_110a30b0(undefined4 param_2); template<class... A> int m_FUN_110a30b0(A...); void __thiscall m_FUN_110a30d0(char param_2); template<class... A> int m_FUN_110a30d0(A...); void __thiscall m_FUN_110a3240(char param_2); template<class... A> int m_FUN_110a3240(A...); void __thiscall m_FUN_110a3e60(char param_2); template<class... A> int m_FUN_110a3e60(A...); bool __thiscall m_FUN_110a5340(uint param_2); template<class... A> int m_FUN_110a5340(A...); int __thiscall m_FUN_110a6770(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_110a6770(A...); int __thiscall m_FUN_110a67b0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_110a67b0(A...); undefined4 * __thiscall m_FUN_110aaa50(byte param_2); template<class... A> int m_FUN_110aaa50(A...); undefined4 __thiscall m_FUN_110aae10(byte param_2); template<class... A> int m_FUN_110aae10(A...); void __thiscall m_FUN_110ac250(undefined4 param_2); template<class... A> int m_FUN_110ac250(A...); void __thiscall m_FUN_110aea50(undefined4 param_2); template<class... A> int m_FUN_110aea50(A...); void __thiscall m_FUN_110b4850(int param_2); template<class... A> int m_FUN_110b4850(A...); undefined1 * __thiscall m_FUN_110b4ef0(uint param_2); template<class... A> int m_FUN_110b4ef0(A...); void __thiscall m_FUN_110b5240(int *param_2); template<class... A> int m_FUN_110b5240(A...); undefined4 * __thiscall m_FUN_110b5610(undefined4 param_2,int *param_3); template<class... A> int m_FUN_110b5610(A...); undefined4 * __thiscall m_FUN_110b5660(int param_2); template<class... A> int m_FUN_110b5660(A...); undefined4 * __thiscall m_FUN_110b5690(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_110b5690(A...); int __thiscall m_FUN_110b58d0(int param_2); template<class... A> int m_FUN_110b58d0(A...); undefined4 * __thiscall m_FUN_110b5900(byte param_2); template<class... A> int m_FUN_110b5900(A...); undefined4 * __thiscall m_FUN_110b5950(byte param_2); template<class... A> int m_FUN_110b5950(A...); void __thiscall m_FUN_110b60e0(void); template<class... A> int m_FUN_110b60e0(A...); undefined4 * __thiscall m_FUN_110b6d60(byte param_2); template<class... A> int m_FUN_110b6d60(A...); undefined4 * __thiscall m_FUN_110b6db0(byte param_2); template<class... A> int m_FUN_110b6db0(A...); undefined4 * __thiscall m_FUN_110b6e00(byte param_2); template<class... A> int m_FUN_110b6e00(A...); undefined4 * __thiscall m_FUN_110b6e50(byte param_2); template<class... A> int m_FUN_110b6e50(A...); undefined4 * __thiscall m_FUN_110b6ea0(byte param_2); template<class... A> int m_FUN_110b6ea0(A...); undefined4 * __thiscall m_FUN_110b6ef0(byte param_2); template<class... A> int m_FUN_110b6ef0(A...); undefined4 * __thiscall m_FUN_110b6f40(byte param_2); template<class... A> int m_FUN_110b6f40(A...); undefined4 * __thiscall m_FUN_110b6f90(byte param_2); template<class... A> int m_FUN_110b6f90(A...); undefined4 * __thiscall m_FUN_110b6fe0(byte param_2); template<class... A> int m_FUN_110b6fe0(A...); undefined4 * __thiscall m_FUN_110b7030(byte param_2); template<class... A> int m_FUN_110b7030(A...); undefined4 * __thiscall m_FUN_110b7080(byte param_2); template<class... A> int m_FUN_110b7080(A...); undefined4 * __thiscall m_FUN_110b70d0(byte param_2); template<class... A> int m_FUN_110b70d0(A...); undefined4 * __thiscall m_FUN_110b7120(byte param_2); template<class... A> int m_FUN_110b7120(A...); void __thiscall m_FUN_110bf210(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_110bf210(A...); undefined4 __thiscall m_FUN_110bf3e0(undefined4 param_2); template<class... A> int m_FUN_110bf3e0(A...); undefined4 __thiscall m_FUN_110bf600(undefined4 param_2); template<class... A> int m_FUN_110bf600(A...); undefined4 __thiscall m_FUN_110bf630(undefined4 param_2); template<class... A> int m_FUN_110bf630(A...); undefined4 __thiscall m_FUN_110bf660(undefined4 param_2); template<class... A> int m_FUN_110bf660(A...); undefined4 * __thiscall m_FUN_110c0cc0(byte param_2); template<class... A> int m_FUN_110c0cc0(A...); undefined4 * __thiscall m_FUN_110c0cf0(byte param_2); template<class... A> int m_FUN_110c0cf0(A...); undefined4 * __thiscall m_FUN_110c0d20(byte param_2); template<class... A> int m_FUN_110c0d20(A...); undefined4 __thiscall m_FUN_110c0df0(byte param_2); template<class... A> int m_FUN_110c0df0(A...); undefined4 * __thiscall m_FUN_110c0eb0(byte param_2); template<class... A> int m_FUN_110c0eb0(A...); undefined4 * __thiscall m_FUN_110c0ef0(byte param_2); template<class... A> int m_FUN_110c0ef0(A...); undefined4 * __thiscall m_FUN_110c0f40(byte param_2); template<class... A> int m_FUN_110c0f40(A...); undefined4 * __thiscall m_FUN_110c0f90(byte param_2); template<class... A> int m_FUN_110c0f90(A...); undefined4 * __thiscall m_FUN_110c1160(byte param_2); template<class... A> int m_FUN_110c1160(A...); void __thiscall m_FUN_110c1190(undefined4 param_2); template<class... A> int m_FUN_110c1190(A...); void __thiscall m_FUN_110c1920(int param_2); template<class... A> int m_FUN_110c1920(A...); void __thiscall m_FUN_110c1970(int param_2); template<class... A> int m_FUN_110c1970(A...); void __thiscall m_FUN_110c19c0(int param_2); template<class... A> int m_FUN_110c19c0(A...); void __thiscall m_FUN_110c1a10(int param_2); template<class... A> int m_FUN_110c1a10(A...); int __thiscall m_FUN_110c2570(int param_2); template<class... A> int m_FUN_110c2570(A...); void __thiscall m_FUN_110c4940(undefined4 param_2); template<class... A> int m_FUN_110c4940(A...); void __thiscall m_FUN_110c5640(undefined4 param_2); template<class... A> int m_FUN_110c5640(A...); int __thiscall m_FUN_110c5770(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_110c5770(A...); int __thiscall m_FUN_110c57b0(undefined4 param_2); template<class... A> int m_FUN_110c57b0(A...); undefined4 __thiscall m_FUN_110c8ff0(byte param_2); template<class... A> int m_FUN_110c8ff0(A...); undefined4 * __thiscall m_FUN_110c9020(byte param_2); template<class... A> int m_FUN_110c9020(A...); undefined4 __thiscall m_FUN_110c9050(byte param_2); template<class... A> int m_FUN_110c9050(A...); undefined4 __thiscall m_FUN_110c9090(byte param_2); template<class... A> int m_FUN_110c9090(A...); void __thiscall m_FUN_110c9cb0(int param_2); template<class... A> int m_FUN_110c9cb0(A...); void __thiscall m_FUN_110c9cf0(int param_2); template<class... A> int m_FUN_110c9cf0(A...); void __thiscall m_FUN_110c9d30(int param_2); template<class... A> int m_FUN_110c9d30(A...); void __thiscall m_FUN_110c9d70(int param_2); template<class... A> int m_FUN_110c9d70(A...); void __thiscall m_FUN_110c9db0(int param_2); template<class... A> int m_FUN_110c9db0(A...); void __thiscall m_FUN_110c9df0(int param_2); template<class... A> int m_FUN_110c9df0(A...); void __thiscall m_FUN_110c9e30(int param_2); template<class... A> int m_FUN_110c9e30(A...); void __thiscall m_FUN_110c9e70(int param_2); template<class... A> int m_FUN_110c9e70(A...); void __thiscall m_FUN_110c9eb0(int param_2); template<class... A> int m_FUN_110c9eb0(A...); void __thiscall m_FUN_110c9ef0(int param_2); template<class... A> int m_FUN_110c9ef0(A...); void __thiscall m_FUN_110c9f30(int param_2); template<class... A> int m_FUN_110c9f30(A...); void __thiscall m_FUN_110c9f70(int param_2); template<class... A> int m_FUN_110c9f70(A...); void __thiscall m_FUN_110c9fb0(int param_2); template<class... A> int m_FUN_110c9fb0(A...); void __thiscall m_FUN_110c9ff0(int param_2); template<class... A> int m_FUN_110c9ff0(A...); void __thiscall m_FUN_110cad70(undefined4 param_2); template<class... A> int m_FUN_110cad70(A...); void __thiscall m_FUN_110d2ec0(undefined4 param_2); template<class... A> int m_FUN_110d2ec0(A...); void __thiscall m_FUN_110d3030(undefined4 param_2); template<class... A> int m_FUN_110d3030(A...); void __thiscall m_FUN_110d3070(undefined4 param_2); template<class... A> int m_FUN_110d3070(A...); void __thiscall m_FUN_110d7950(undefined4 param_2); template<class... A> int m_FUN_110d7950(A...); void __thiscall m_FUN_110d7a50(undefined4 param_2); template<class... A> int m_FUN_110d7a50(A...); void __thiscall m_FUN_110d7ad0(undefined4 param_2); template<class... A> int m_FUN_110d7ad0(A...); void __thiscall m_FUN_110d8470(undefined4 param_2); template<class... A> int m_FUN_110d8470(A...); undefined4 * __thiscall m_FUN_110d9bc0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_110d9bc0(A...); int * __thiscall m_FUN_110db240(int *param_2); template<class... A> int m_FUN_110db240(A...); undefined4 __thiscall m_FUN_110dcb50(byte param_2); template<class... A> int m_FUN_110dcb50(A...); undefined4 * __thiscall m_FUN_110dcb80(byte param_2); template<class... A> int m_FUN_110dcb80(A...); undefined4 * __thiscall m_FUN_110dcbb0(byte param_2); template<class... A> int m_FUN_110dcbb0(A...); undefined4 * __thiscall m_FUN_110dcbe0(byte param_2); template<class... A> int m_FUN_110dcbe0(A...); undefined4 * __thiscall m_FUN_110dcd90(byte param_2); template<class... A> int m_FUN_110dcd90(A...); undefined4 * __thiscall m_FUN_110dcdd0(byte param_2); template<class... A> int m_FUN_110dcdd0(A...); undefined4 * __thiscall m_FUN_110dce20(byte param_2); template<class... A> int m_FUN_110dce20(A...); undefined4 * __thiscall m_FUN_110dce70(byte param_2); template<class... A> int m_FUN_110dce70(A...); int * __thiscall m_FUN_110df060(int *param_2); template<class... A> int m_FUN_110df060(A...); undefined4 __thiscall m_FUN_110e09c0(undefined4 param_2,short *param_3); template<class... A> int m_FUN_110e09c0(A...); void __thiscall m_FUN_110e20d0(undefined4 *param_2); template<class... A> int m_FUN_110e20d0(A...); void __thiscall m_FUN_110e3630(undefined4 param_2); template<class... A> int m_FUN_110e3630(A...); undefined4 * __thiscall m_FUN_110e43f0(byte param_2); template<class... A> int m_FUN_110e43f0(A...); undefined4 __thiscall m_FUN_110e4420(byte param_2); template<class... A> int m_FUN_110e4420(A...); undefined4 * __thiscall m_FUN_110e4450(byte param_2); template<class... A> int m_FUN_110e4450(A...); undefined4 * __thiscall m_FUN_110e9480(byte param_2); template<class... A> int m_FUN_110e9480(A...); undefined4 __thiscall m_FUN_110e94b0(byte param_2); template<class... A> int m_FUN_110e94b0(A...); undefined4 * __thiscall m_FUN_110e94e0(byte param_2); template<class... A> int m_FUN_110e94e0(A...); undefined4 * __thiscall m_FUN_110e9510(byte param_2); template<class... A> int m_FUN_110e9510(A...); void __thiscall m_FUN_110ed0b0(undefined4 param_2); template<class... A> int m_FUN_110ed0b0(A...); void __thiscall m_FUN_110ed2d0(undefined1 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_110ed2d0(A...); void __thiscall m_FUN_110ed5b0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_110ed5b0(A...); void __thiscall m_FUN_110edc00(undefined4 param_2); template<class... A> int m_FUN_110edc00(A...); void __thiscall m_FUN_110ee040(undefined4 param_2); template<class... A> int m_FUN_110ee040(A...); int __thiscall m_FUN_110ee0d0(undefined4 param_2); template<class... A> int m_FUN_110ee0d0(A...); undefined4 * __thiscall m_FUN_110f0a60(byte param_2); template<class... A> int m_FUN_110f0a60(A...); void __thiscall m_FUN_110f1790(int param_2); template<class... A> int m_FUN_110f1790(A...); void __thiscall m_FUN_110f2ac0(undefined4 param_2); template<class... A> int m_FUN_110f2ac0(A...); void __thiscall m_FUN_110f2af0(char *param_2); template<class... A> int m_FUN_110f2af0(A...); void __thiscall m_FUN_110f2b40(char *param_2); template<class... A> int m_FUN_110f2b40(A...); undefined4 * __thiscall m_FUN_110f66a0(undefined4 param_2); template<class... A> int m_FUN_110f66a0(A...); int __thiscall m_FUN_110f6ac0(int param_2); template<class... A> int m_FUN_110f6ac0(A...); undefined4 * __thiscall m_FUN_110f6b60(byte param_2); template<class... A> int m_FUN_110f6b60(A...); undefined4 * __thiscall m_FUN_110f6bb0(byte param_2); template<class... A> int m_FUN_110f6bb0(A...); undefined4 * __thiscall m_FUN_110f6be0(byte param_2); template<class... A> int m_FUN_110f6be0(A...); undefined4 * __thiscall m_FUN_110f6c10(byte param_2); template<class... A> int m_FUN_110f6c10(A...); undefined4 * __thiscall m_FUN_110f6c60(byte param_2); template<class... A> int m_FUN_110f6c60(A...); undefined4 * __thiscall m_FUN_110f6cb0(byte param_2); template<class... A> int m_FUN_110f6cb0(A...); undefined4 * __thiscall m_FUN_110f6d00(byte param_2); template<class... A> int m_FUN_110f6d00(A...); undefined4 __thiscall m_FUN_110f6d40(byte param_2); template<class... A> int m_FUN_110f6d40(A...); undefined4 __thiscall m_FUN_110f6d70(byte param_2); template<class... A> int m_FUN_110f6d70(A...); };

extern int FUN_10002a68(...);
extern int FUN_1006adb1(...);
extern int FUN_1006f9dd(...);
extern int FUN_10070892(...);
extern int FUN_1009070f(...);
extern int FUN_1009a598(...);
extern int FUN_110b5990(...);
extern int FUN_110befd0(...);
extern int FUN_1122c9e0(...);
extern __declspec(dllimport) int PostMessageA(...);
extern __declspec(dllimport) int SetEvent(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern __declspec(dllimport) int strncmp(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_10bfa4b0(...);
extern int thunk_FUN_10bfb550(...);
extern int thunk_FUN_11069340(...);
extern int thunk_FUN_1106a8d0(...);
extern int thunk_FUN_1106d6f0(...);
extern int thunk_FUN_1106f140(...);
template<class... A> int __stdcall thunk_FUN_1107e1f0(A...);
extern int thunk_FUN_1107e550(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_110944c0(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a0140(...);
extern int thunk_FUN_110a67f0(...);
extern int thunk_FUN_110a68c0(...);
extern int thunk_FUN_110a69d0(...);
template<class... A> int __stdcall thunk_FUN_110a6d20(A...);
template<class... A> int __stdcall thunk_FUN_110a6fa0(A...);
extern int thunk_FUN_110a9ef0(...);
extern int thunk_FUN_110aa330(...);
extern int thunk_FUN_110ab530(...);
template<class... A> int __stdcall thunk_FUN_110acc40(A...);
extern int thunk_FUN_110adba0(...);
extern int thunk_FUN_110aeaa0(...);
template<class... A> int __stdcall thunk_FUN_110aeb40(A...);
template<class... A> int __stdcall thunk_FUN_110b2410(A...);
extern int thunk_FUN_110b3000(...);
template<class... A> int __stdcall thunk_FUN_110b3620(A...);
template<class... A> int __stdcall thunk_FUN_110b4400(A...);
extern int thunk_FUN_110b87c0(...);
template<class... A> int __stdcall thunk_FUN_110bcb10(A...);
extern int thunk_FUN_110c0690(...);
extern int thunk_FUN_110c20d0(...);
template<class... A> int __stdcall thunk_FUN_110c2160(A...);
extern int thunk_FUN_110c2bc0(...);
extern int thunk_FUN_110c2c60(...);
extern int thunk_FUN_110c3210(...);
extern int thunk_FUN_110c33f0(...);
extern int thunk_FUN_110c37b0(...);
extern int thunk_FUN_110c49a0(...);
template<class... A> int __stdcall thunk_FUN_110c4ef0(A...);
extern int thunk_FUN_110c5670(...);
extern int thunk_FUN_110c5800(...);
template<class... A> int __stdcall thunk_FUN_110c59b0(A...);
extern int thunk_FUN_110c7c10(...);
extern int thunk_FUN_110c7e70(...);
template<class... A> int __stdcall thunk_FUN_110cc7f0(A...);
extern int thunk_FUN_110dc560(...);
extern int thunk_FUN_110e4170(...);
extern int thunk_FUN_110ee070(...);
extern int thunk_FUN_110ee120(...);
extern int thunk_FUN_110f3120(...);
extern int thunk_FUN_110f69f0(...);
extern int thunk_FUN_110f8530(...);
extern int thunk_FUN_111392b0(...);
extern int thunk_FUN_1113e6f0(...);
extern int thunk_FUN_1113eb00(...);
extern int thunk_FUN_1114f320(...);
extern int thunk_FUN_11167180(...);
extern int thunk_FUN_11172910(...);
template<class... A> int __stdcall thunk_FUN_1118aa30(A...);
extern int thunk_FUN_1118adc0(...);
extern int thunk_FUN_1118d230(...);
extern int thunk_FUN_111a0940(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_111a4bc0(...);
extern int thunk_FUN_111a4f00(...);
extern int thunk_FUN_111a7630(...);
extern int thunk_FUN_111a7be0(...);
template<class... A> int __stdcall thunk_FUN_111c0af0(A...);
extern int thunk_FUN_111d3d00(...);
extern int thunk_FUN_111f3f50(...);
extern int thunk_FUN_111f4c10(...);
extern int thunk_FUN_111f77e0(...);
extern int thunk_FUN_111f7800(...);
extern int thunk_FUN_111f7860(...);
extern int thunk_FUN_111feb20(...);
extern int thunk_FUN_111feb50(...);
extern int thunk_FUN_11202570(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11245a50(...);
extern int thunk_FUN_11245bb0(...);
extern int thunk_FUN_112462e0(...);
extern int thunk_FUN_11246be0(...);
extern int thunk_FUN_112470f0(...);
extern int thunk_FUN_112471a0(...);
extern int thunk_FUN_11247e90(...);
extern int thunk_FUN_1124f350(...);
template<class... A> int __stdcall thunk_FUN_1124f3c0(A...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_11261f10(...);
extern int thunk_FUN_1127caf0(...);
extern int thunk_FUN_1127cb00(...);
extern int thunk_FUN_1127cc80(...);
extern int thunk_FUN_112818d0(...);
extern int thunk_FUN_11281950(...);
extern int thunk_FUN_11284360(...);
extern int thunk_FUN_112a7c30(...);
extern int thunk_FUN_112a7c70(...);
extern int thunk_FUN_112a7f20(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_1138fad0(...);
extern int thunk_FUN_1138fd50(...);
extern int thunk_FUN_113d3650(...);
extern int thunk_FUN_11456830(...);
extern int thunk_FUN_11456fc0(...);
extern int thunk_FUN_11457040(...);
extern int thunk_FUN_114574f0(...);
extern int thunk_FUN_11457670(...);
extern int thunk_FUN_11458220(...);
extern int thunk_FUN_114586f0(...);
extern int thunk_FUN_11458720(...);
extern int thunk_FUN_11458820(...);
extern int thunk_FUN_11458830(...);
extern int thunk_FUN_11458870(...);
extern int thunk_FUN_11458880(...);
extern int thunk_FUN_114588c0(...);
extern int thunk_FUN_114588f0(...);
extern int thunk_FUN_11458910(...);
extern int thunk_FUN_11458940(...);
extern int thunk_FUN_11458970(...);
extern int thunk_FUN_114589e0(...);
extern int thunk_FUN_114589f0(...);
extern int thunk_FUN_11458a00(...);
extern int thunk_FUN_11458a30(...);
extern int thunk_FUN_11458a40(...);
extern int thunk_FUN_11458a50(...);
extern int thunk_FUN_11458a60(...);
extern int thunk_FUN_11458a90(...);
extern int thunk_FUN_11458e90(...);
extern int thunk_FUN_11458fa0(...);
extern int thunk_FUN_114595b0(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145c720(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_1186d2ee;
extern int DAT_11881128;
extern int DAT_118872c0;
extern int DAT_119c41b0;
extern int ghidra_vftable_RAesDecoder;
extern int ghidra_vftable_RAllocationChunk;
extern int ghidra_vftable_RAsyncURITranslator;
extern int ghidra_vftable_RCPBrowseOperation;
extern int ghidra_vftable_RCPBrowseOperationCB;
extern int ghidra_vftable_RCPMetadataFormatter;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_REncryptedDataDecoder;
extern int ghidra_vftable_REncryptedStringDecoder;
extern int ghidra_vftable_RFlashPlayerLastChangeCallback;
extern int ghidra_vftable_RFlashPlayerMediaServerCallback;
extern int ghidra_vftable_RFlashPlayerNotifyBodyParserCallback;
extern int ghidra_vftable_RFlashPlayerZoneGroupStateCallback;
extern int ghidra_vftable_RGetFormattedMetadataOperation;
extern int ghidra_vftable_RIdPrefixerCB;
extern int ghidra_vftable_RLookupMetadataAIOOp;
extern int ghidra_vftable_RMSDListProcessorWithLogos;
extern int ghidra_vftable_RMSQuickSkip;
extern int ghidra_vftable_RPresentationMap;
extern int ghidra_vftable_RPresentationMapCB;
extern int ghidra_vftable_RRadioTimeContentProvider;
extern int ghidra_vftable_RSonosAAURITranslator;
extern int ghidra_vftable_RUpnpAVTAddURIToQueueAIOOp;
extern int ghidra_vftable_RUpnpAVTConfigureSleepTimerAIOOp;
extern int ghidra_vftable_RUpnpAVTEndDirectControlSessionAIOOp;
extern int ghidra_vftable_RUpnpAVTGetPositionInfoAIOOp;
extern int ghidra_vftable_RUpnpAVTGetRemainingSleepTimerDurationAIOOp;
extern int ghidra_vftable_RUpnpAVTNextAIOOp;
extern int ghidra_vftable_RUpnpAVTPreviousAIOOp;
extern int ghidra_vftable_RUpnpAVTRemoveAllTracksFromQueueAIOOp;
extern int ghidra_vftable_RUpnpAVTRemoveTrackFromQueueAIOOp;
extern int ghidra_vftable_RUpnpAVTRemoveTrackRangeFromQueueAIOOp;
extern int ghidra_vftable_RUpnpAVTReorderTracksInQueueAIOOp;
extern int ghidra_vftable_RUpnpAVTSaveQueueAIOOp;
extern int ghidra_vftable_RUpnpAVTSeekAIOOp;
extern int ghidra_vftable_RUpnpCDBrowseAIOOp;
extern int ghidra_vftable_RUpnpMSDListAvailableServicesAIOOp;
extern int ghidra_vftable_RUpnpMSDUpdateAvailableServicesAIOOp;
extern int ghidra_vftable_RWrapperBrowseOp;
extern int ghidra_vftable_RefCountBase;
extern int ghidra_vftable_SwfObjAvt;
extern int ghidra_vftable_SwfObjDBAdapter;
extern int ghidra_vftable_SwfObjMSD;
extern int ghidra_vftable_SwfObjMediaServer;
extern int ghidra_vftable_SwfObjRadioTimeCP;
extern int ghidra_vftable_SwfObjServiceDesc;
extern int ghidra_vftable_SwfObjZPCMR;
extern int in_EAX;
extern int in_stack_00000010;
extern "C" void LAB_1003ddb6(void);
extern int *PTR_s_A_ALBUMARTIST_1211dae0;
extern int *PTR_s_ServiceListVersion_119c37dc;
extern int *PTR_s_TransportState_119c29e8;
extern int FUN_112a9d40(...);
extern int FUN_112aa340(...);
undefined4 __fastcall FUN_110a1230(int param_1);
template<class... A> int FUN_110a1230(A...);
undefined4 __fastcall FUN_110a12a0(int param_1);
template<class... A> int FUN_110a12a0(A...);
void __fastcall FUN_110a3e40(undefined4 *param_1);
template<class... A> int FUN_110a3e40(A...);
void FUN_110a4fa0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_110a4fa0(A...);
undefined4 * __fastcall FUN_110a8600(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_110a8600(A...);
undefined4 * __fastcall FUN_110a8630(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_110a8630(A...);
undefined4 * __fastcall FUN_110a8660(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_110a8660(A...);
undefined4 * __fastcall FUN_110a8690(undefined4 *param_1);
template<class... A> int FUN_110a8690(A...);
void __fastcall FUN_110a9630(int param_1);
template<class... A> int FUN_110a9630(A...);
void __fastcall FUN_110a9650(int param_1);
template<class... A> int FUN_110a9650(A...);
void __fastcall FUN_110a9670(int param_1);
template<class... A> int FUN_110a9670(A...);
void __fastcall FUN_110a9a80(int param_1);
template<class... A> int FUN_110a9a80(A...);
void __fastcall FUN_110a9af0(int *param_1);
template<class... A> int FUN_110a9af0(A...);
void __fastcall FUN_110a9b40(undefined4 *param_1);
template<class... A> int FUN_110a9b40(A...);
void __fastcall FUN_110a9b60(int *param_1);
template<class... A> int FUN_110a9b60(A...);
void __fastcall FUN_110a9bb0(int *param_1);
template<class... A> int FUN_110a9bb0(A...);
void __fastcall FUN_110a9d60(undefined4 *param_1);
template<class... A> int FUN_110a9d60(A...);
int __stdcall FUN_110aa6d0(undefined4 param_1);
template<class... A> int __stdcall FUN_110aa6d0(A...);
int __stdcall FUN_110aa700(undefined4 param_1);
template<class... A> int __stdcall FUN_110aa700(A...);
void __fastcall FUN_110ab120(int param_1);
template<class... A> int FUN_110ab120(A...);
void __fastcall FUN_110ab140(int param_1);
template<class... A> int FUN_110ab140(A...);
void __fastcall FUN_110ab160(int param_1);
template<class... A> int FUN_110ab160(A...);
void __fastcall FUN_110ac5f0(undefined4 *param_1);
template<class... A> int FUN_110ac5f0(A...);
bool __fastcall FUN_110add70(int param_1);
template<class... A> int FUN_110add70(A...);
void __fastcall FUN_110ae620(int *param_1);
template<class... A> int FUN_110ae620(A...);
bool __stdcall FUN_110b0c50(undefined4 param_1);
template<class... A> int __stdcall FUN_110b0c50(A...);
bool __stdcall FUN_110b23a0(int param_1,int param_2);
template<class... A> int FUN_110b23a0(A...);
undefined4 __stdcall FUN_110b43b0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_110b43b0(A...);
void __fastcall FUN_110b51f0(undefined4 *param_1);
template<class... A> int FUN_110b51f0(A...);
undefined4 * __fastcall FUN_110b56c0(undefined4 *param_1);
template<class... A> int FUN_110b56c0(A...);
void __fastcall FUN_110b5890(undefined4 *param_1);
template<class... A> int FUN_110b5890(A...);
undefined4 __stdcall FUN_110b5c70(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_110b5c70(A...);
undefined4 __stdcall FUN_110b5e60(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_110b5e60(A...);
undefined4 *  __fastcall FUN_110b5f20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_110b5f20(A...);
undefined4 * __stdcall FUN_110b7de0(undefined4 *param_1);
template<class... A> int __stdcall FUN_110b7de0(A...);
undefined1 * FUN_110b89b0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_110b89b0(A...);
undefined4 FUN_110b8e40(undefined4 param_1);
template<class... A> int FUN_110b8e40(A...);
undefined4 FUN_110b8e90(undefined4 param_1);
template<class... A> int FUN_110b8e90(A...);
void FUN_110b8ef0(undefined4 param_1);
template<class... A> int FUN_110b8ef0(A...);
undefined4 FUN_110b8fc0(undefined4 param_1);
template<class... A> int FUN_110b8fc0(A...);
undefined4 FUN_110b9130(undefined4 param_1);
template<class... A> int FUN_110b9130(A...);
undefined4 FUN_110b9200(undefined4 *param_1);
template<class... A> int FUN_110b9200(A...);
undefined4 FUN_110b9230(undefined4 param_1);
template<class... A> int FUN_110b9230(A...);
undefined4 FUN_110b9280(undefined4 *param_1);
template<class... A> int FUN_110b9280(A...);
undefined4 FUN_110b92b0(undefined4 param_1);
template<class... A> int FUN_110b92b0(A...);
bool FUN_110b93b0(undefined4 param_1);
template<class... A> int FUN_110b93b0(A...);
bool FUN_110b9430(undefined4 param_1);
template<class... A> int FUN_110b9430(A...);
undefined4 FUN_110b9590(undefined4 param_1);
template<class... A> int FUN_110b9590(A...);
undefined4 FUN_110b9610(undefined4 param_1);
template<class... A> int FUN_110b9610(A...);
undefined4 FUN_110b9940(undefined4 *param_1);
template<class... A> int FUN_110b9940(A...);
void __stdcall FUN_110bc830(undefined4 param_1,undefined1 *param_2,undefined4 param_3);
template<class... A> int FUN_110bc830(A...);
undefined ** __stdcall FUN_110bc860(undefined4 *param_1);
template<class... A> int __stdcall FUN_110bc860(A...);
bool FUN_110bf1b0(undefined4 *param_1);
template<class... A> int FUN_110bf1b0(A...);
void __fastcall FUN_110c0940(undefined4 *param_1);
template<class... A> int FUN_110c0940(A...);
void __stdcall FUN_110c1a60(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_110c1a60(A...);
undefined4 __fastcall FUN_110c1a90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_110c1a90(A...);
void __fastcall FUN_110c1e70(int *param_1);
template<class... A> int FUN_110c1e70(A...);
undefined4 __stdcall FUN_110c20d0(undefined4 param_1);
template<class... A> int __stdcall FUN_110c20d0(A...);
int __fastcall FUN_110c2590(int param_1);
template<class... A> int FUN_110c2590(A...);
undefined ** __stdcall FUN_110c25e0(undefined4 *param_1);
template<class... A> int __stdcall FUN_110c25e0(A...);
undefined4 __fastcall FUN_110c35b0(int param_1);
template<class... A> int FUN_110c35b0(A...);
undefined4 __fastcall FUN_110c3e90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_110c3e90(A...);
bool __fastcall FUN_110c4a10(int *param_1);
template<class... A> int FUN_110c4a10(A...);
bool __fastcall FUN_110c4a40(int *param_1);
template<class... A> int FUN_110c4a40(A...);
bool __fastcall FUN_110c4a70(int *param_1);
template<class... A> int FUN_110c4a70(A...);
bool __fastcall FUN_110c4ac0(int *param_1);
template<class... A> int FUN_110c4ac0(A...);
bool __fastcall FUN_110c4ae0(int *param_1);
template<class... A> int FUN_110c4ae0(A...);
bool __fastcall FUN_110c4b00(int *param_1);
template<class... A> int FUN_110c4b00(A...);
undefined4 * __fastcall FUN_110c65a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_110c65a0(A...);
void __fastcall FUN_110c79f0(int param_1);
template<class... A> int FUN_110c79f0(A...);
void __fastcall FUN_110c7a10(int *param_1);
template<class... A> int FUN_110c7a10(A...);
void __fastcall FUN_110c7b10(int param_1);
template<class... A> int FUN_110c7b10(A...);
void __fastcall FUN_110c7b30(int *param_1);
template<class... A> int FUN_110c7b30(A...);
void FUN_110c7e50(void);
template<class... A> int FUN_110c7e50(A...);
int __stdcall FUN_110c8bc0(undefined4 param_1);
template<class... A> int __stdcall FUN_110c8bc0(A...);
void __fastcall FUN_110c9180(int param_1);
template<class... A> int FUN_110c9180(A...);
int * FUN_110c9910(int *param_1);
template<class... A> int FUN_110c9910(A...);
int * __stdcall FUN_110ca040(int *param_1, int *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_110ca040(A...);
undefined1 __fastcall FUN_110ca230(int param_1);
template<class... A> int FUN_110ca230(A...);
void __fastcall FUN_110ca620(int *param_1);
template<class... A> int FUN_110ca620(A...);
undefined4 __stdcall FUN_110ca780(undefined4 *param_1);
template<class... A> int __stdcall FUN_110ca780(A...);
undefined4 __fastcall FUN_110cadc0(int param_1);
template<class... A> int FUN_110cadc0(A...);
void __fastcall FUN_110caef0(int *param_1);
template<class... A> int FUN_110caef0(A...);
void __fastcall FUN_110caf30(int *param_1);
template<class... A> int FUN_110caf30(A...);
void __fastcall FUN_110caf70(int *param_1);
template<class... A> int FUN_110caf70(A...);
void __fastcall FUN_110cafb0(int *param_1);
template<class... A> int FUN_110cafb0(A...);
void __fastcall FUN_110caff0(int *param_1);
template<class... A> int FUN_110caff0(A...);
void __fastcall FUN_110cb030(int *param_1);
template<class... A> int FUN_110cb030(A...);
void __fastcall FUN_110cb070(int *param_1);
template<class... A> int FUN_110cb070(A...);
void __fastcall FUN_110cb0b0(int *param_1);
template<class... A> int FUN_110cb0b0(A...);
void __fastcall FUN_110cb0f0(int *param_1);
template<class... A> int FUN_110cb0f0(A...);
void __fastcall FUN_110cb130(int *param_1);
template<class... A> int FUN_110cb130(A...);
void __fastcall FUN_110cb170(int *param_1);
template<class... A> int FUN_110cb170(A...);
void __fastcall FUN_110cb1b0(int *param_1);
template<class... A> int FUN_110cb1b0(A...);
void __fastcall FUN_110cb1f0(int *param_1);
template<class... A> int FUN_110cb1f0(A...);
void __fastcall FUN_110cb230(int *param_1);
template<class... A> int FUN_110cb230(A...);
void __fastcall FUN_110cb270(int *param_1);
template<class... A> int FUN_110cb270(A...);
undefined4 __stdcall FUN_110cc260(undefined4 param_1);
template<class... A> int __stdcall FUN_110cc260(A...);
undefined4 __fastcall FUN_110cdca0(int param_1);
template<class... A> int FUN_110cdca0(A...);
undefined2 __fastcall FUN_110ce370(int param_1);
template<class... A> int FUN_110ce370(A...);
undefined4 __stdcall FUN_110ceab0(undefined4 param_1);
template<class... A> int __stdcall FUN_110ceab0(A...);
char * __fastcall FUN_110cead0(int param_1);
template<class... A> int FUN_110cead0(A...);
undefined4 __stdcall FUN_110d1d10(undefined4 param_1);
template<class... A> int __stdcall FUN_110d1d10(A...);
undefined1 __fastcall FUN_110d2700(int param_1);
template<class... A> int FUN_110d2700(A...);
bool __fastcall FUN_110d2720(int param_1);
template<class... A> int FUN_110d2720(A...);
undefined4
__stdcall FUN_110d2e80(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_110d2e80(A...);
undefined1 __fastcall FUN_110d3140(int param_1);
template<class... A> int FUN_110d3140(A...);
undefined1 __fastcall FUN_110d4080(int param_1);
template<class... A> int FUN_110d4080(A...);
undefined1 __fastcall FUN_110d55a0(int param_1);
template<class... A> int FUN_110d55a0(A...);
undefined1 __fastcall FUN_110d5760(int param_1);
template<class... A> int FUN_110d5760(A...);
bool __fastcall FUN_110d5780(int param_1);
template<class... A> int FUN_110d5780(A...);
void __stdcall FUN_110d67a0(int param_1,int param_2,int param_3,undefined4 param_4);
template<class... A> int FUN_110d67a0(A...);
void __stdcall FUN_110d6ed0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_110d6ed0(A...);
undefined1 __fastcall FUN_110d88a0(int param_1);
template<class... A> int FUN_110d88a0(A...);
undefined1 __fastcall FUN_110d88c0(int param_1);
template<class... A> int FUN_110d88c0(A...);
undefined1 __fastcall FUN_110d88e0(int param_1);
template<class... A> int FUN_110d88e0(A...);
undefined1 __fastcall FUN_110d8900(int param_1);
template<class... A> int FUN_110d8900(A...);
undefined1 __fastcall FUN_110d8930(int param_1);
template<class... A> int FUN_110d8930(A...);
undefined1 __fastcall FUN_110d8950(int param_1);
template<class... A> int FUN_110d8950(A...);
undefined1 __fastcall FUN_110d8970(int param_1);
template<class... A> int FUN_110d8970(A...);
undefined1 __fastcall FUN_110d89b0(int param_1);
template<class... A> int FUN_110d89b0(A...);
undefined1 __fastcall FUN_110d89d0(int param_1);
template<class... A> int FUN_110d89d0(A...);
undefined1 __fastcall FUN_110d89f0(int param_1);
template<class... A> int FUN_110d89f0(A...);
undefined1 __fastcall FUN_110d8a30(int param_1);
template<class... A> int FUN_110d8a30(A...);
undefined1 __fastcall FUN_110d8a50(int param_1);
template<class... A> int FUN_110d8a50(A...);
undefined1 __fastcall FUN_110d8c40(int param_1);
template<class... A> int FUN_110d8c40(A...);
undefined1 __fastcall FUN_110d8c60(int param_1);
template<class... A> int FUN_110d8c60(A...);
undefined1 __fastcall FUN_110d8c80(int param_1);
template<class... A> int FUN_110d8c80(A...);
undefined1 __fastcall FUN_110d8cb0(int param_1);
template<class... A> int FUN_110d8cb0(A...);
undefined1 __fastcall FUN_110d8d00(int param_1);
template<class... A> int FUN_110d8d00(A...);
undefined1 __fastcall FUN_110d8d20(int param_1);
template<class... A> int FUN_110d8d20(A...);
undefined1 __fastcall FUN_110d8d40(int param_1);
template<class... A> int FUN_110d8d40(A...);
undefined1 __fastcall FUN_110d8d60(int param_1);
template<class... A> int FUN_110d8d60(A...);
undefined1 __fastcall FUN_110d8d80(int param_1);
template<class... A> int FUN_110d8d80(A...);
undefined1 __fastcall FUN_110d8dc0(int param_1);
template<class... A> int FUN_110d8dc0(A...);
bool __fastcall FUN_110d8de0(int param_1);
template<class... A> int FUN_110d8de0(A...);
undefined4 __fastcall FUN_110d8e10(int param_1);
template<class... A> int FUN_110d8e10(A...);
undefined4 __fastcall FUN_110d9b30(int param_1);
template<class... A> int FUN_110d9b30(A...);
int __fastcall FUN_110da760(int param_1);
template<class... A> int FUN_110da760(A...);
undefined4 __fastcall FUN_110db5c0(int *param_1);
template<class... A> int FUN_110db5c0(A...);
void __fastcall FUN_110dc6d0(int param_1);
template<class... A> int FUN_110dc6d0(A...);
void __fastcall FUN_110dc760(undefined4 *param_1);
template<class... A> int FUN_110dc760(A...);
void __fastcall FUN_110dc880(undefined4 *param_1);
template<class... A> int FUN_110dc880(A...);
void __fastcall FUN_110dc8a0(undefined4 *param_1);
template<class... A> int FUN_110dc8a0(A...);
uint __fastcall FUN_110de320(int param_1);
template<class... A> int FUN_110de320(A...);
int __fastcall FUN_110de640(int param_1);
template<class... A> int FUN_110de640(A...);
undefined4 __fastcall FUN_110def50(int param_1);
template<class... A> int FUN_110def50(A...);
void __fastcall FUN_110e1d30(int param_1);
template<class... A> int FUN_110e1d30(A...);
undefined4 __fastcall FUN_110e28d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_110e28d0(A...);
void __fastcall FUN_110e2c60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_110e2c60(A...);
void __fastcall FUN_110e3660(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_110e3660(A...);
int __fastcall FUN_110e3bf0(int param_1);
template<class... A> int FUN_110e3bf0(A...);
void __fastcall FUN_110e4390(undefined4 *param_1);
template<class... A> int FUN_110e4390(A...);
void __fastcall FUN_110e70a0(int param_1);
template<class... A> int FUN_110e70a0(A...);
undefined1 __stdcall FUN_110e7d10(char param_1);
template<class... A> int __stdcall FUN_110e7d10(A...);
void __fastcall FUN_110e9120(undefined4 *param_1);
template<class... A> int FUN_110e9120(A...);
void __fastcall FUN_110e9160(undefined4 *param_1);
template<class... A> int FUN_110e9160(A...);
void __fastcall FUN_110e9320(undefined4 *param_1);
template<class... A> int FUN_110e9320(A...);
void __fastcall FUN_110e9370(undefined4 *param_1);
template<class... A> int FUN_110e9370(A...);
void __fastcall FUN_110ea940(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_110ea940(A...);
undefined4 __stdcall FUN_110eb700(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_110eb700(A...);
void __fastcall FUN_110ec740(int *param_1);
template<class... A> int FUN_110ec740(A...);
undefined4 __fastcall FUN_110ec780(int param_1);
template<class... A> int FUN_110ec780(A...);
int __fastcall FUN_110ec7a0(int param_1);
template<class... A> int FUN_110ec7a0(A...);
undefined4 __fastcall FUN_110ecc20(int *param_1);
template<class... A> int FUN_110ecc20(A...);
int __fastcall FUN_110ecd80(int *param_1);
template<class... A> int FUN_110ecd80(A...);
undefined4 __fastcall FUN_110ecda0(int param_1);
template<class... A> int FUN_110ecda0(A...);
int __fastcall FUN_110ecdc0(int param_1);
template<class... A> int FUN_110ecdc0(A...);
void __stdcall FUN_110ecde0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_110ecde0(A...);
undefined4 FUN_110ecfe0(char *param_1);
template<class... A> int FUN_110ecfe0(A...);
void __fastcall FUN_110ed320(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_110ed320(A...);
undefined4 *  __stdcall FUN_110ed980(undefined1 *param_1,int param_2);
template<class... A> int FUN_110ed980(A...);
char * FUN_110ede50(char *param_1,char *param_2,undefined4 param_3);
template<class... A> int FUN_110ede50(A...);
undefined4 * __fastcall FUN_110ee540(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_110ee540(A...);
void __fastcall FUN_110f0440(int param_1);
template<class... A> int FUN_110f0440(A...);
void __fastcall FUN_110f0460(int *param_1);
template<class... A> int FUN_110f0460(A...);
void __fastcall FUN_110f0490(int param_1);
template<class... A> int FUN_110f0490(A...);
void __fastcall FUN_110f04c0(int param_1);
template<class... A> int FUN_110f04c0(A...);
void __fastcall FUN_110f04e0(int *param_1);
template<class... A> int FUN_110f04e0(A...);
void __fastcall FUN_110f0df0(int param_1);
template<class... A> int FUN_110f0df0(A...);
void __fastcall FUN_110f24b0(int *param_1);
template<class... A> int FUN_110f24b0(A...);
undefined4 __fastcall FUN_110f2960(int param_1);
template<class... A> int FUN_110f2960(A...);
undefined4 FUN_110f53b0(undefined4 param_1);
template<class... A> int FUN_110f53b0(A...);
void __fastcall FUN_110f6650(int param_1);
template<class... A> int FUN_110f6650(A...);
void __fastcall FUN_110f68d0(int param_1);
template<class... A> int FUN_110f68d0(A...);
void __fastcall FUN_110f68f0(undefined4 *param_1);
template<class... A> int FUN_110f68f0(A...);
void __fastcall FUN_110f6940(undefined4 *param_1);
template<class... A> int FUN_110f6940(A...);
void __fastcall FUN_110f6970(undefined4 *param_1);
template<class... A> int FUN_110f6970(A...);
void __fastcall FUN_110f69a0(undefined4 *param_1);
template<class... A> int FUN_110f69a0(A...);
void __fastcall FUN_110f69d0(undefined4 *param_1);
template<class... A> int FUN_110f69d0(A...);
// Reference entry 110a1230; body size 58 bytes.
extern int __stdcall FUN_10070892(int a1);
extern int __stdcall thunk_FUN_10bfa4b0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_1107e550(int a1);
extern int __stdcall thunk_FUN_110a67f0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_110a68c0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_110aeaa0(int a1,int a2);
extern int __stdcall thunk_FUN_110aeb40(int a1,int a2,int a3,int a4,int a5);
extern int __stdcall thunk_FUN_110b2410(int a1,int a2);
extern int __stdcall thunk_FUN_110b3000(int a1,int a2);
extern int __stdcall thunk_FUN_110b3620(int a1,int a2,int a3,int a4,int a5);
extern int __stdcall thunk_FUN_110c20d0(int a1);
extern int __stdcall thunk_FUN_110c33f0(int a1);
extern int __stdcall thunk_FUN_110c37b0(int a1,int a2);
extern int __stdcall thunk_FUN_110c5670(int a1,int a2);
extern int __stdcall thunk_FUN_110c5800(int a1,int a2);
extern int __stdcall thunk_FUN_110ee070(int a1,int a2);
extern int __stdcall thunk_FUN_110ee120(int a1,int a2);
extern int __stdcall thunk_FUN_110f8530(int a1,int a2);
extern int __stdcall thunk_FUN_1113eb00(int a1);
extern int __stdcall thunk_FUN_1118aa30(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_1118adc0(int a1,int a2);
extern int __stdcall thunk_FUN_111a0940(int a1);
extern int __stdcall thunk_FUN_111a4bc0(int a1,int a2);
extern int __stdcall thunk_FUN_111f4c10(int a1);
extern int __stdcall thunk_FUN_1124f350(int a1);
extern int __stdcall thunk_FUN_1124ffa0(int a1,int a2);
extern int __stdcall thunk_FUN_1127cc80(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_11458fa0(int a1);
extern int __stdcall thunk_FUN_114595b0(int a1,int a2,int a3);
struct SCFp_36_0 { char _p[36]; int (__thiscall *v)(void); };
struct SCVtbl_0_1 { virtual int v(int a1); };
struct SCVtbl_1_0 { virtual void _p0(); virtual int v(void); };
struct SCVtbl_1_1 { virtual void _p0(); virtual int v(int a1); };
struct SCVtbl_1_2 { virtual void _p0(); virtual int v(int a1,int a2); };
struct SCVtbl_4_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(void); };
struct SCVtbl_4_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(int a1,int a2); };
struct SCVtbl_9_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual int v(void); };
struct SCVtbl_16_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual int v(void); };
struct SCVtbl_22_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual int v(void); };
struct SCVtbl_30_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual int v(void); };
struct SCVtbl_35_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual int v(void); };
struct SCVtbl_2_0 { virtual void _p0(); virtual void _p1(); virtual int v(void); };
struct SCVtbl_9_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual int v(int a1,int a2); };
struct SCVtbl_21_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual int v(void); };
struct SCVtbl_23_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual int v(void); };
struct SCVtbl_47_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual int v(int a1); };
struct SCVtbl_57_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual int v(void); };
#line 1 "ENTRY_110a1230"

__declspec(naked) void FUN_110a1230(void)

{
  __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x1c __asm _emit 0xff __asm _emit 0x71 __asm _emit 0x20 __asm _emit 0x8d __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_1000d0df
  __asm _emit 0x6a __asm _emit 0x02 __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x50
  __asm push offset LAB_1189067c
  __asm _emit 0x8d __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x10
  __asm call LAB_100015be
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x80 __asm _emit 0x3c __asm _emit 0x24 __asm _emit 0x31 __asm _emit 0x75 __asm _emit 0x06 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x1c __asm _emit 0xc3
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x1c __asm _emit 0xc3
}






// Reference entry 110a1280; body size 17 bytes.
#line 1 "ENTRY_110a1280"

bool __thiscall Recovered_Bulk::m_FUN_110a1280(uint param_2)
{
  int param_1 = (int )this;
  return (bool)((*(uint *)(param_1 + 0x28) & param_2) == param_2);
}


// Reference entry 110a12a0; body size 58 bytes.
#line 1 "ENTRY_110a12a0"

__declspec(naked) void FUN_110a12a0(void)

{
  __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x1c __asm _emit 0xff __asm _emit 0x71 __asm _emit 0x20 __asm _emit 0x8d __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_1000d0df
  __asm _emit 0x6a __asm _emit 0x02 __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x50
  __asm push offset LAB_119c1b38
  __asm _emit 0x8d __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x10
  __asm call LAB_100015be
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x80 __asm _emit 0x3c __asm _emit 0x24 __asm _emit 0x31 __asm _emit 0x75 __asm _emit 0x06 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x1c __asm _emit 0xc3
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x1c __asm _emit 0xc3
}






// Reference entry 110a3080; body size 38 bytes.
#line 1 "ENTRY_110a3080"

__declspec(naked) void FUN_110a3080(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x00
  __asm push offset LAB_119c127c
  __asm _emit 0x8d __asm _emit 0x8e __asm _emit 0x88 __asm _emit 0xa9 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1007fff4
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc8
  __asm call LAB_100769e5
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110a30b0; body size 16 bytes.
#line 1 "ENTRY_110a30b0"

void __thiscall Recovered_Bulk::m_FUN_110a30b0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 0x48) == -1) {
    *(undefined4*)(param_1 + 0x48) = (undefined4)(param_2);
  }
  return;
}


// Reference entry 110a30d0; body size 37 bytes.
#line 1 "ENTRY_110a30d0"

void __thiscall Recovered_Bulk::m_FUN_110a30d0(char param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_11881128);
  if (param_2 == '\0') {
    puVar1 = (undefined1 *)(&DAT_118872c0);
  }
  ((SCVtbl_4_2*)(*(int **)(param_1 + 0x20)))->v((int)("userMetricsTracking"),(int)(puVar1));
  return;
}


// Reference entry 110a3240; body size 37 bytes.
#line 1 "ENTRY_110a3240"

void __thiscall Recovered_Bulk::m_FUN_110a3240(char param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_11881128);
  if (param_2 == '\0') {
    puVar1 = (undefined1 *)(&DAT_118872c0);
  }
  ((SCVtbl_4_2*)(*(int **)(param_1 + 0x20)))->v((int)("hideTuneIn"),(int)(puVar1));
  return;
}


// Reference entry 110a3e40; body size 16 bytes.
#line 1 "ENTRY_110a3e40"

void __fastcall FUN_110a3e40(undefined4 *param_1)

{
  thunk_FUN_111a36f0();
  *param_1 = (undefined4)(1);
  return;
}


// Reference entry 110a3e60; body size 37 bytes.
#line 1 "ENTRY_110a3e60"

void __thiscall Recovered_Bulk::m_FUN_110a3e60(char param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_11881128);
  if (param_2 == '\0') {
    puVar1 = (undefined1 *)(&DAT_118872c0);
  }
  ((SCVtbl_4_2*)(*(int **)(param_1 + 0x20)))->v((int)("recentlyPlayed"),(int)(puVar1));
  return;
}


// Reference entry 110a4fa0; body size 25 bytes.
#line 1 "ENTRY_110a4fa0"

__declspec(naked) void FUN_110a4fa0(void)

{
  __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x6a __asm _emit 0x0a
  __asm push offset LAB_119c1520
  __asm call LAB_100437fc
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x10 __asm _emit 0xc3
}






// Reference entry 110a5340; body size 59 bytes.
#line 1 "ENTRY_110a5340"

__declspec(naked) void FUN_110a5340(void)

{
  __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x37 __asm _emit 0x85 __asm _emit 0xf6 __asm _emit 0x74 __asm _emit 0x2a __asm _emit 0x8b __asm _emit 0x56 __asm _emit 0xf4 __asm _emit 0x85 __asm _emit 0xd2 __asm _emit 0x75
  __asm _emit 0x11 __asm _emit 0x8b __asm _emit 0xd6 __asm _emit 0x8d __asm _emit 0x4a __asm _emit 0x01 __asm _emit 0x8a __asm _emit 0x02 __asm _emit 0x42 __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0xf9 __asm _emit 0x2b __asm _emit 0xd1 __asm _emit 0x89
  __asm _emit 0x56 __asm _emit 0xf4 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x3b __asm _emit 0xca __asm _emit 0x73 __asm _emit 0x0a __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x8a __asm _emit 0x04
  __asm _emit 0x01 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x5f __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110a6770; body size 40 bytes.
#line 1 "ENTRY_110a6770"

__declspec(naked) void FUN_110a6770(void)

{
  __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x24 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24
  __asm _emit 0x14 __asm _emit 0x50
  __asm call LAB_10034e0f
  __asm _emit 0x8b __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x03 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x5e __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08
  __asm _emit 0x00
}






// Reference entry 110a67b0; body size 40 bytes.
#line 1 "ENTRY_110a67b0"

__declspec(naked) void FUN_110a67b0(void)

{
  __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x24 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24
  __asm _emit 0x14 __asm _emit 0x50
  __asm call LAB_1008fc3d
  __asm _emit 0x8b __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x03 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08
  __asm _emit 0x00
}






// Reference entry 110a8600; body size 39 bytes.
#line 1 "ENTRY_110a8600"

__declspec(naked) void FUN_110a8600(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x10 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110a8630; body size 39 bytes.
#line 1 "ENTRY_110a8630"

__declspec(naked) void FUN_110a8630(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x10 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110a8660; body size 39 bytes.
#line 1 "ENTRY_110a8660"

__declspec(naked) void FUN_110a8660(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x10 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110a8690; body size 37 bytes.
#line 1 "ENTRY_110a8690"

__declspec(naked) void FUN_110a8690(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x14 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110a9630; body size 19 bytes.
#line 1 "ENTRY_110a9630"

void __fastcall FUN_110a9630(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 110a9650; body size 19 bytes.
#line 1 "ENTRY_110a9650"

void __fastcall FUN_110a9650(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 110a9670; body size 19 bytes.
#line 1 "ENTRY_110a9670"

void __fastcall FUN_110a9670(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 110a9a80; body size 19 bytes.
#line 1 "ENTRY_110a9a80"

void __fastcall FUN_110a9a80(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 110a9af0; body size 55 bytes.
#line 1 "ENTRY_110a9af0"

void __fastcall FUN_110a9af0(int *param_1)

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


// Reference entry 110a9b40; body size 25 bytes.
#line 1 "ENTRY_110a9b40"

void __fastcall FUN_110a9b40(undefined4 *param_1)

{
  thunk_FUN_110a69d0(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 110a9b60; body size 55 bytes.
#line 1 "ENTRY_110a9b60"

void __fastcall FUN_110a9b60(int *param_1)

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


// Reference entry 110a9bb0; body size 55 bytes.
#line 1 "ENTRY_110a9bb0"

void __fastcall FUN_110a9bb0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4*)puVar1[1] = (undefined4)((undefined4)(0));
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_1148a50e(puVar1,0x14);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 110a9d60; body size 33 bytes.
#line 1 "ENTRY_110a9d60"

void __fastcall FUN_110a9d60(undefined4 *param_1)

{
  free((void *)*param_1);
  FUN_112aa340(param_1 + 9);
  FUN_112a9d40(param_1 + 7);
  return;
}


// Reference entry 110aa6d0; body size 27 bytes.
#line 1 "ENTRY_110aa6d0"

__declspec(naked) void FUN_110aa6d0(void)

{
  __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x24 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x50
  __asm call LAB_10063d27
  __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0x0c __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110aa700; body size 27 bytes.
#line 1 "ENTRY_110aa700"

__declspec(naked) void FUN_110aa700(void)

{
  __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x24 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x50
  __asm call LAB_1008aab2
  __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0x0c __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110aaa50; body size 33 bytes.
#line 1 "ENTRY_110aaa50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110aaa50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAllocationChunk);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110aae10; body size 35 bytes.
#line 1 "ENTRY_110aae10"

undefined4 __thiscall Recovered_Bulk::m_FUN_110aae10(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_110aa330();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x188);
  }
  return (undefined4)(param_1);
}


// Reference entry 110ab120; body size 25 bytes.
#line 1 "ENTRY_110ab120"

__declspec(naked) void FUN_110ab120(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x10 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110ab140; body size 25 bytes.
#line 1 "ENTRY_110ab140"

__declspec(naked) void FUN_110ab140(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x10 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110ab160; body size 25 bytes.
#line 1 "ENTRY_110ab160"

__declspec(naked) void FUN_110ab160(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x14 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110ac250; body size 63 bytes.
#line 1 "ENTRY_110ac250"

__declspec(naked) void FUN_110ac250(void)

{
  __asm _emit 0x53 __asm _emit 0x55 __asm _emit 0x8b __asm _emit 0xe9 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x5d __asm _emit 0x04 __asm _emit 0x2b __asm _emit 0x5d __asm _emit 0x00 __asm _emit 0xc1
  __asm _emit 0xfb __asm _emit 0x02
  __asm call LAB_10054999
  __asm _emit 0x8b __asm _emit 0x55 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xf0 __asm _emit 0x8b __asm _emit 0x4d __asm _emit 0x04 __asm _emit 0x2b __asm _emit 0xca __asm _emit 0x51 __asm _emit 0x52 __asm _emit 0x56
  __asm call LAB_1148cdf3
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xcd __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x53 __asm _emit 0x56
  __asm call LAB_10070ced
  __asm _emit 0x5e __asm _emit 0x5d __asm _emit 0x5b __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110ac5f0; body size 25 bytes.
#line 1 "ENTRY_110ac5f0"

void __fastcall FUN_110ac5f0(undefined4 *param_1)

{
  thunk_FUN_110a69d0(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 110add70; body size 49 bytes.
#line 1 "ENTRY_110add70"

__declspec(naked) void FUN_110add70(void)

{
  __asm _emit 0x53 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x83 __asm _emit 0x7e __asm _emit 0x38 __asm _emit 0x00 __asm _emit 0x0f __asm _emit 0x95 __asm _emit 0xc3 __asm _emit 0x80 __asm _emit 0x7e __asm _emit 0x31 __asm _emit 0x00 __asm _emit 0x75
  __asm _emit 0x1b __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x68 __asm _emit 0xec __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xff __asm _emit 0x76 __asm _emit 0x20 __asm _emit 0xff __asm _emit 0x76 __asm _emit 0x1c
  __asm call LAB_1000546b
  __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_1002267e
  __asm _emit 0x5e __asm _emit 0x8a __asm _emit 0xc3 __asm _emit 0x5b __asm _emit 0xc3
}






// Reference entry 110ae620; body size 32 bytes.
#line 1 "ENTRY_110ae620"

void __fastcall FUN_110ae620(int *param_1)

{
  thunk_FUN_110a69d0(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 110aea50; body size 52 bytes.
#line 1 "ENTRY_110aea50"

__declspec(naked) void FUN_110aea50(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x89 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x77 __asm _emit 0x1c __asm _emit 0x56
  __asm call LAB_10081697
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14
  __asm call LAB_100327e5
  __asm _emit 0x56
  __asm call LAB_10056497
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110b0c50; body size 29 bytes.
#line 1 "ENTRY_110b0c50"

__declspec(naked) void FUN_110b0c50(void)

{
  __asm _emit 0x51 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x24 __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x98 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c
  __asm call LAB_1004b9b1
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x0f __asm _emit 0x95 __asm _emit 0xc0 __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110b23a0; body size 44 bytes.
#line 1 "ENTRY_110b23a0"

__declspec(naked) void FUN_110b23a0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x1f __asm _emit 0x83 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x6a
  __asm _emit 0x00 __asm _emit 0x50 __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x98 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1004b9b1
  __asm _emit 0x39 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x0f __asm _emit 0x94 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 110b43b0; body size 52 bytes.
#line 1 "ENTRY_110b43b0"

__declspec(naked) void FUN_110b43b0(void)

{
  __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8d __asm _emit 0x8f __asm _emit 0x98 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1003675f
  __asm _emit 0x8b __asm _emit 0xf0 __asm _emit 0x80 __asm _emit 0x3e __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x0e __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xcf
  __asm call LAB_1002815a
  __asm _emit 0xc6 __asm _emit 0x06 __asm _emit 0x01 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 110b4850; body size 54 bytes.
#line 1 "ENTRY_110b4850"

__declspec(naked) void FUN_110b4850(void)

{
  __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x8d __asm _emit 0x51 __asm _emit 0x20 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x29 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x66 __asm _emit 0x90
  __asm _emit 0x3b __asm _emit 0xc1 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x50 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x02 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0xf3 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x02 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110b4ef0; body size 49 bytes.
#line 1 "ENTRY_110b4ef0"

__declspec(naked) void FUN_110b4ef0(void)

{
  __asm _emit 0x8b __asm _emit 0x81 __asm _emit 0xbc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x91 __asm _emit 0xb8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x8b __asm _emit 0x4c
  __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xc1 __asm _emit 0xf8 __asm _emit 0x02 __asm _emit 0x3b __asm _emit 0xc8 __asm _emit 0x73 __asm _emit 0x13 __asm _emit 0x8b __asm _emit 0x04 __asm _emit 0x8a __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x04 __asm _emit 0x85
  __asm _emit 0xc9
  __asm mov eax, offset LAB_1186d2ee
  __asm _emit 0x0f __asm _emit 0x45 __asm _emit 0xc1 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110b51f0; body size 55 bytes.
#line 1 "ENTRY_110b51f0"

__declspec(naked) void FUN_110b51f0(void)

{
  __asm _emit 0x8b __asm _emit 0x51 __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0x02 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x27 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x80 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x3b __asm _emit 0xc1 __asm _emit 0x74 __asm _emit 0x10 __asm _emit 0x8d __asm _emit 0x50 __asm _emit 0x3c __asm _emit 0x8b __asm _emit 0x02 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0xf3 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x6a
  __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0xc3 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x89 __asm _emit 0x02 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0xc3
}






// Reference entry 110b5240; body size 30 bytes.
#line 1 "ENTRY_110b5240"

void __thiscall Recovered_Bulk::m_FUN_110b5240(int *param_2)
{
  int *param_1 = (int *)this;
  ((SCVtbl_2_0*)(param_2))->v();
  thunk_FUN_112a7c70(*param_1 + 0x24);
  return;
}


// Reference entry 110b5610; body size 54 bytes.
#line 1 "ENTRY_110b5610"

__declspec(naked) void FUN_110b5610(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x44
  __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x14 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0xf0 __asm _emit 0x81 __asm _emit 0x38
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x7d __asm _emit 0x09 __asm _emit 0x50
  __asm call LAB_10066e8c
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 110b5660; body size 33 bytes.
#line 1 "ENTRY_110b5660"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b5660(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMSQuickSkip);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  param_1[2] = (undefined4)(*(undefined4 *)(param_2 + 8));
  param_1[3] = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  return (undefined4 *)(param_1);
}


// Reference entry 110b5690; body size 32 bytes.
#line 1 "ENTRY_110b5690"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b5690(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  param_1[3] = (undefined4)(param_4);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMSQuickSkip);
  return (undefined4 *)(param_1);
}


// Reference entry 110b56c0; body size 30 bytes.
#line 1 "ENTRY_110b56c0"

undefined4 * __fastcall FUN_110b56c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMSQuickSkip);
  param_1[1] = (undefined4)(0xff);
  param_1[2] = (undefined4)(0xffffffff);
  param_1[3] = (undefined4)(0xffffffff);
  return (undefined4 *)(param_1);
}


// Reference entry 110b5890; body size 30 bytes.
#line 1 "ENTRY_110b5890"

__declspec(naked) void FUN_110b5890(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04
  __asm mov dword ptr [esi], offset LAB_119c2934
  __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10
  __asm mov dword ptr [esi], offset LAB_119c2924
  __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110b58d0; body size 27 bytes.
#line 1 "ENTRY_110b58d0"

int __thiscall Recovered_Bulk::m_FUN_110b58d0(int param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  *(undefined4*)(param_1 + 8) = (undefined4)(*(undefined4 *)(param_2 + 8));
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  return (int)(param_1);
}


// Reference entry 110b5900; body size 52 bytes.
#line 1 "ENTRY_110b5900"

__declspec(naked) void FUN_110b5900(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04
  __asm mov dword ptr [esi], offset LAB_119c2934
  __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0xf6 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x01
  __asm mov dword ptr [esi], offset LAB_119c2924
  __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x6a __asm _emit 0x0c __asm _emit 0x56
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110b5950; body size 33 bytes.
#line 1 "ENTRY_110b5950"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b5950(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RPresentationMapCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b5c70; body size 27 bytes.
#line 1 "ENTRY_110b5c70"

__declspec(naked) void FUN_110b5c70(void)

{
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c
  __asm call LAB_10046425
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 110b5e60; body size 23 bytes.
#line 1 "ENTRY_110b5e60"

__declspec(naked) void FUN_110b5e60(void)

{
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_10041e02
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 110b5f20; body size 27 bytes.
#line 1 "ENTRY_110b5f20"

__declspec(naked) void FUN_110b5f20(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x08 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110b60e0; body size 19 bytes.
#line 1 "ENTRY_110b60e0"

__declspec(naked) void FUN_110b60e0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x04
  __asm jmp LAB_1003c691
}






// Reference entry 110b6d60; body size 58 bytes.
#line 1 "ENTRY_110b6d60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b6d60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTConfigureSleepTimerAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTConfigureSleepTimerAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTConfigureSleepTimerAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b6db0; body size 58 bytes.
#line 1 "ENTRY_110b6db0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b6db0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTEndDirectControlSessionAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTEndDirectControlSessionAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTEndDirectControlSessionAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b6e00; body size 58 bytes.
#line 1 "ENTRY_110b6e00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b6e00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetPositionInfoAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetPositionInfoAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetPositionInfoAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf7e0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b6e50; body size 58 bytes.
#line 1 "ENTRY_110b6e50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b6e50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetRemainingSleepTimerDurationAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetRemainingSleepTimerDurationAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetRemainingSleepTimerDurationAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdbd8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b6ea0; body size 58 bytes.
#line 1 "ENTRY_110b6ea0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b6ea0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTNextAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTNextAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTNextAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b6ef0; body size 58 bytes.
#line 1 "ENTRY_110b6ef0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b6ef0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPreviousAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPreviousAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPreviousAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b6f40; body size 58 bytes.
#line 1 "ENTRY_110b6f40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b6f40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTRemoveAllTracksFromQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTRemoveAllTracksFromQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTRemoveAllTracksFromQueueAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b6f90; body size 58 bytes.
#line 1 "ENTRY_110b6f90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b6f90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTRemoveTrackFromQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTRemoveTrackFromQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTRemoveTrackFromQueueAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b6fe0; body size 58 bytes.
#line 1 "ENTRY_110b6fe0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b6fe0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTRemoveTrackRangeFromQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTRemoveTrackRangeFromQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTRemoveTrackRangeFromQueueAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b7030; body size 58 bytes.
#line 1 "ENTRY_110b7030"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b7030(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTReorderTracksInQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTReorderTracksInQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTReorderTracksInQueueAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b7080; body size 58 bytes.
#line 1 "ENTRY_110b7080"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b7080(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSaveQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSaveQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSaveQueueAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdbd0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b70d0; body size 58 bytes.
#line 1 "ENTRY_110b70d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b70d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSeekAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSeekAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSeekAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b7120; body size 38 bytes.
#line 1 "ENTRY_110b7120"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b7120(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjAvt);
  thunk_FUN_1113e6f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b7de0; body size 40 bytes.
#line 1 "ENTRY_110b7de0"

__declspec(naked) void FUN_110b7de0(void)

{
  __asm push offset LAB_119c34b8
  __asm call LAB_10059bb0
  __asm _emit 0x66 __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x44 __asm _emit 0x73 __asm _emit 0x0b __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x01 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110b89b0; body size 33 bytes.
#line 1 "ENTRY_110b89b0"

__declspec(naked) void FUN_110b89b0(void)

{
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_1009177c
  __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x60 __asm _emit 0x24
  __asm mov eax, offset LAB_1186d2ee
  __asm _emit 0xc3
}






// Reference entry 110b8e40; body size 62 bytes.
#line 1 "ENTRY_110b8e40"

__declspec(naked) void FUN_110b8e40(void)

{
  __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x24 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x30
  __asm call LAB_10002ff4
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x0f __asm _emit 0x75 __asm _emit 0x1e __asm _emit 0x6a __asm _emit 0x0f
  __asm push offset LAB_119c35a4
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call dword ptr [LAB_122fca10]
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x06 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x28 __asm _emit 0xc3 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x83
  __asm _emit 0xc4 __asm _emit 0x28 __asm _emit 0xc3
}






// Reference entry 110b8e90; body size 62 bytes.
#line 1 "ENTRY_110b8e90"

__declspec(naked) void FUN_110b8e90(void)

{
  __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x24 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x30
  __asm call LAB_10002ff4
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x0f __asm _emit 0x75 __asm _emit 0x1e __asm _emit 0x6a __asm _emit 0x0f
  __asm push offset LAB_119c35d0
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call dword ptr [LAB_122fca10]
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x06 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x28 __asm _emit 0xc3 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x83
  __asm _emit 0xc4 __asm _emit 0x28 __asm _emit 0xc3
}






// Reference entry 110b8ef0; body size 30 bytes.
#line 1 "ENTRY_110b8ef0"

__declspec(naked) void FUN_110b8ef0(void)

{
  __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x24 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x30
  __asm call LAB_10002ff4
  __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x50
  __asm call LAB_110befd0
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x34 __asm _emit 0xc3
}






// Reference entry 110b8fc0; body size 62 bytes.
#line 1 "ENTRY_110b8fc0"

__declspec(naked) void FUN_110b8fc0(void)

{
  __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x24 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x30
  __asm call LAB_10002ff4
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x11 __asm _emit 0x75 __asm _emit 0x1e __asm _emit 0x6a __asm _emit 0x11
  __asm push offset LAB_119c35b8
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call dword ptr [LAB_122fca10]
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x06 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x28 __asm _emit 0xc3 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x83
  __asm _emit 0xc4 __asm _emit 0x28 __asm _emit 0xc3
}






// Reference entry 110b9130; body size 62 bytes.
#line 1 "ENTRY_110b9130"

__declspec(naked) void FUN_110b9130(void)

{
  __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x24 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x30
  __asm call LAB_10002ff4
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x0e __asm _emit 0x75 __asm _emit 0x1e __asm _emit 0x6a __asm _emit 0x0e
  __asm push offset LAB_119c36b0
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call dword ptr [LAB_122fca10]
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x06 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x28 __asm _emit 0xc3 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x83
  __asm _emit 0xc4 __asm _emit 0x28 __asm _emit 0xc3
}






// Reference entry 110b9200; body size 38 bytes.
#line 1 "ENTRY_110b9200"

__declspec(naked) void FUN_110b9200(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0x78 __asm _emit 0x04 __asm _emit 0x13 __asm _emit 0x75 __asm _emit 0x19 __asm _emit 0x6a __asm _emit 0x13
  __asm push offset LAB_119c3614
  __asm _emit 0xff __asm _emit 0x30
  __asm call dword ptr [LAB_122fca10]
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x03 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0xc3 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110b9230; body size 62 bytes.
#line 1 "ENTRY_110b9230"

__declspec(naked) void FUN_110b9230(void)

{
  __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x24 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x30
  __asm call LAB_10002ff4
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x13 __asm _emit 0x75 __asm _emit 0x1e __asm _emit 0x6a __asm _emit 0x13
  __asm push offset LAB_119c3614
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call dword ptr [LAB_122fca10]
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x06 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x28 __asm _emit 0xc3 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x83
  __asm _emit 0xc4 __asm _emit 0x28 __asm _emit 0xc3
}






// Reference entry 110b9280; body size 38 bytes.
#line 1 "ENTRY_110b9280"

__declspec(naked) void FUN_110b9280(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0x78 __asm _emit 0x04 __asm _emit 0x11 __asm _emit 0x75 __asm _emit 0x19 __asm _emit 0x6a __asm _emit 0x11
  __asm push offset LAB_119c35e4
  __asm _emit 0xff __asm _emit 0x30
  __asm call dword ptr [LAB_122fca10]
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x03 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0xc3 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110b92b0; body size 62 bytes.
#line 1 "ENTRY_110b92b0"

__declspec(naked) void FUN_110b92b0(void)

{
  __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x24 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x30
  __asm call LAB_10002ff4
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x11 __asm _emit 0x75 __asm _emit 0x1e __asm _emit 0x6a __asm _emit 0x11
  __asm push offset LAB_119c35e4
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call dword ptr [LAB_122fca10]
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x06 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x28 __asm _emit 0xc3 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x83
  __asm _emit 0xc4 __asm _emit 0x28 __asm _emit 0xc3
}






// Reference entry 110b93b0; body size 59 bytes.
#line 1 "ENTRY_110b93b0"

__declspec(naked) void FUN_110b93b0(void)

{
  __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x24 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x30
  __asm call LAB_10002ff4
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x06 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x28
  __asm _emit 0xc3 __asm _emit 0x6a __asm _emit 0x10
  __asm push offset LAB_119c3680
  __asm _emit 0x50
  __asm call dword ptr [LAB_122fca10]
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x0f __asm _emit 0x94 __asm _emit 0xc0 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x28 __asm _emit 0xc3
}






// Reference entry 110b9430; body size 59 bytes.
#line 1 "ENTRY_110b9430"

__declspec(naked) void FUN_110b9430(void)

{
  __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x24 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x30
  __asm call LAB_10002ff4
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x06 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x28
  __asm _emit 0xc3 __asm _emit 0x6a __asm _emit 0x0b
  __asm push offset LAB_119c3694
  __asm _emit 0x50
  __asm call dword ptr [LAB_122fca10]
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x0f __asm _emit 0x94 __asm _emit 0xc0 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x28 __asm _emit 0xc3
}






// Reference entry 110b9590; body size 62 bytes.
#line 1 "ENTRY_110b9590"

__declspec(naked) void FUN_110b9590(void)

{
  __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x24 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x30
  __asm call LAB_10002ff4
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x0b __asm _emit 0x75 __asm _emit 0x1e __asm _emit 0x6a __asm _emit 0x0b
  __asm push offset LAB_119c36d0
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call dword ptr [LAB_122fca10]
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x06 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x28 __asm _emit 0xc3 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x83
  __asm _emit 0xc4 __asm _emit 0x28 __asm _emit 0xc3
}






// Reference entry 110b9610; body size 62 bytes.
#line 1 "ENTRY_110b9610"

__declspec(naked) void FUN_110b9610(void)

{
  __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x24 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x30
  __asm call LAB_10002ff4
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x08 __asm _emit 0x75 __asm _emit 0x1e __asm _emit 0x6a __asm _emit 0x08
  __asm push offset LAB_119c36a4
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call dword ptr [LAB_122fca10]
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x06 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x28 __asm _emit 0xc3 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x83
  __asm _emit 0xc4 __asm _emit 0x28 __asm _emit 0xc3
}






// Reference entry 110b9940; body size 43 bytes.
#line 1 "ENTRY_110b9940"

__declspec(naked) void FUN_110b9940(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x08 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x1e __asm _emit 0x83 __asm _emit 0x78 __asm _emit 0x04 __asm _emit 0x07 __asm _emit 0x72 __asm _emit 0x18
  __asm _emit 0x6a __asm _emit 0x07
  __asm push offset LAB_119c3674
  __asm _emit 0x51
  __asm call dword ptr [LAB_122fca10]
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x03 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0xc3 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110bc830; body size 34 bytes.
#line 1 "ENTRY_110bc830"

void __stdcall FUN_110bc830(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  *param_2 = (undefined1)(0);
  thunk_FUN_110bcb10<>("r:EnqueuedTransportURIMetaData","dc:title",param_1,param_2,param_3);
  return;
}


// Reference entry 110bc860; body size 18 bytes.
#line 1 "ENTRY_110bc860"

undefined ** __stdcall FUN_110bc860(undefined4 *param_1)

{
  *param_1 = (undefined4)(0x1c);
  return (undefined **)(&PTR_s_TransportState_119c29e8);
}


// Reference entry 110bf1b0; body size 36 bytes.
#line 1 "ENTRY_110bf1b0"

__declspec(naked) void FUN_110bf1b0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x03 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3 __asm _emit 0x6a __asm _emit 0x10
  __asm push offset LAB_119c3680
  __asm _emit 0x50
  __asm call dword ptr [LAB_122fca10]
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x0f __asm _emit 0x94 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110bf210; body size 42 bytes.
#line 1 "ENTRY_110bf210"

__declspec(naked) void FUN_110bf210(void)

{
  __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x20
  __asm mov ecx, offset LAB_1186d2ee
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x0f __asm _emit 0x45 __asm _emit 0xc8 __asm _emit 0x51
  __asm push offset LAB_119c3570
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x18
  __asm call LAB_10086cb9
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x14 __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 110bf3e0; body size 38 bytes.
#line 1 "ENTRY_110bf3e0"

__declspec(naked) void FUN_110bf3e0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x00
  __asm push offset LAB_118938e4
  __asm _emit 0x8d __asm _emit 0x8e __asm _emit 0x88 __asm _emit 0xa9 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1007fff4
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc8
  __asm call LAB_1008b728
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110bf600; body size 38 bytes.
#line 1 "ENTRY_110bf600"

__declspec(naked) void FUN_110bf600(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x00
  __asm push offset LAB_118938e4
  __asm _emit 0x8d __asm _emit 0x8e __asm _emit 0x88 __asm _emit 0xa9 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1007fff4
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc8
  __asm call LAB_1008b728
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110bf630; body size 38 bytes.
#line 1 "ENTRY_110bf630"

__declspec(naked) void FUN_110bf630(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x00
  __asm push offset LAB_118938e4
  __asm _emit 0x8d __asm _emit 0x8e __asm _emit 0x88 __asm _emit 0xa9 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1007fff4
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc8
  __asm call LAB_1008b728
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110bf660; body size 38 bytes.
#line 1 "ENTRY_110bf660"

__declspec(naked) void FUN_110bf660(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x00
  __asm push offset LAB_118938e4
  __asm _emit 0x8d __asm _emit 0x8e __asm _emit 0x88 __asm _emit 0xa9 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1007fff4
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc8
  __asm call LAB_1008b728
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c0940; body size 25 bytes.
#line 1 "ENTRY_110c0940"

__declspec(naked) void FUN_110c0940(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8d __asm _emit 0x4e __asm _emit 0x04
  __asm mov dword ptr [esi], offset LAB_119c3b78
  __asm call LAB_10089f3b
  __asm _emit 0x8b __asm _emit 0xce __asm _emit 0x5e
  __asm jmp LAB_100025d1
}






// Reference entry 110c0cc0; body size 38 bytes.
#line 1 "ENTRY_110c0cc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110c0cc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110c0cf0; body size 38 bytes.
#line 1 "ENTRY_110c0cf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110c0cf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110c0d20; body size 38 bytes.
#line 1 "ENTRY_110c0d20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110c0d20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110c0df0; body size 32 bytes.
#line 1 "ENTRY_110c0df0"

undefined4 __thiscall Recovered_Bulk::m_FUN_110c0df0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_110c0690();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }
  return (undefined4)(param_1);
}


// Reference entry 110c0eb0; body size 51 bytes.
#line 1 "ENTRY_110c0eb0"

__declspec(naked) void FUN_110c0eb0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8d __asm _emit 0x4e __asm _emit 0x04
  __asm mov dword ptr [esi], offset LAB_119c3b78
  __asm call LAB_10089f3b
  __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_100025d1
  __asm _emit 0xf6 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x01 __asm _emit 0x74 __asm _emit 0x0e __asm _emit 0x68 __asm _emit 0x50 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x56
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c0ef0; body size 58 bytes.
#line 1 "ENTRY_110c0ef0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110c0ef0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpMSDListAvailableServicesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpMSDListAvailableServicesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpMSDListAvailableServicesAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe3d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110c0f40; body size 58 bytes.
#line 1 "ENTRY_110c0f40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110c0f40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpMSDUpdateAvailableServicesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpMSDUpdateAvailableServicesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpMSDUpdateAvailableServicesAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110c0f90; body size 38 bytes.
#line 1 "ENTRY_110c0f90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110c0f90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjMSD);
  thunk_FUN_1113e6f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110c1160; body size 38 bytes.
#line 1 "ENTRY_110c1160"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110c1160(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjServiceDesc);
  thunk_FUN_111a4f00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110c1190; body size 50 bytes.
#line 1 "ENTRY_110c1190"

__declspec(naked) void FUN_110c1190(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x83 __asm _emit 0x7e __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x17
  __asm call LAB_10080c0b
  __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x28 __asm _emit 0x56
  __asm call LAB_10087137
  __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x28 __asm _emit 0x56
  __asm call LAB_1005e890
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x4e __asm _emit 0x20
  __asm call LAB_10070892
  __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c1920; body size 59 bytes.
#line 1 "ENTRY_110c1920"

__declspec(naked) void FUN_110c1920(void)

{
  __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x37 __asm _emit 0x85 __asm _emit 0xf6 __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x8b
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x07 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0a __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_10066e8c
  __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c1970; body size 59 bytes.
#line 1 "ENTRY_110c1970"

__declspec(naked) void FUN_110c1970(void)

{
  __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x37 __asm _emit 0x85 __asm _emit 0xf6 __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x8b
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x07 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0a __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_10066e8c
  __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c19c0; body size 59 bytes.
#line 1 "ENTRY_110c19c0"

__declspec(naked) void FUN_110c19c0(void)

{
  __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x37 __asm _emit 0x85 __asm _emit 0xf6 __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x8b
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x07 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0a __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_10066e8c
  __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c1a10; body size 45 bytes.
#line 1 "ENTRY_110c1a10"

__declspec(naked) void FUN_110c1a10(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x8b
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c1a60; body size 24 bytes.
#line 1 "ENTRY_110c1a60"

__declspec(naked) void FUN_110c1a60(void)

{
  __asm _emit 0x8b __asm _emit 0x89 __asm _emit 0x48 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10055466
  __asm mov ecx, offset LAB_122e8d40
  __asm call LAB_10003d37
  __asm _emit 0xc2 __asm _emit 0x10 __asm _emit 0x00
}






// Reference entry 110c1a90; body size 16 bytes.
#line 1 "ENTRY_110c1a90"

__declspec(naked) void FUN_110c1a90(void)

{
  __asm _emit 0x83 __asm _emit 0x79 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x05 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
  __asm jmp LAB_10002a68
}






// Reference entry 110c1e70; body size 43 bytes.
#line 1 "ENTRY_110c1e70"

__declspec(naked) void FUN_110c1e70(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x5f
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110c20d0; body size 24 bytes.
#line 1 "ENTRY_110c20d0"

__declspec(naked) void FUN_110c20d0(void)

{
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04
  __asm call LAB_1003f2ba
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c2570; body size 18 bytes.
#line 1 "ENTRY_110c2570"

int __thiscall Recovered_Bulk::m_FUN_110c2570(int param_2)
{
  int param_1 = (int )this;
  return (int)(param_2 * 0x10 + param_1 + 0x28874);
}


// Reference entry 110c2590; body size 33 bytes.
#line 1 "ENTRY_110c2590"

int __fastcall FUN_110c2590(int param_1)

{
  if (*(char *)(param_1 + 0x29a9c) != '\0') {
    thunk_FUN_110c2160<>(0,2000,0,0);
  }
  return (int)(param_1 + 0x6c);
}


// Reference entry 110c25e0; body size 18 bytes.
#line 1 "ENTRY_110c25e0"

undefined ** __stdcall FUN_110c25e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(1);
  return (undefined **)(&PTR_s_ServiceListVersion_119c37dc);
}


// Reference entry 110c35b0; body size 30 bytes.
#line 1 "ENTRY_110c35b0"

__declspec(naked) void FUN_110c35b0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x28 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x1c
  __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x50 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_100480b8
  __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110c3e90; body size 32 bytes.
#line 1 "ENTRY_110c3e90"

__declspec(naked) void FUN_110c3e90(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x28 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x1c
  __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x50 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_100480b8
  __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 110c4940; body size 55 bytes.
#line 1 "ENTRY_110c4940"

__declspec(naked) void FUN_110c4940(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x2c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x14 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x11
  __asm _emit 0x8d __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x30 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_10091542
  __asm _emit 0xff __asm _emit 0x76 __asm _emit 0x3c __asm _emit 0x8b __asm _emit 0xce __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c
  __asm call LAB_1005f3fd
  __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c4a10; body size 27 bytes.
#line 1 "ENTRY_110c4a10"

bool __fastcall FUN_110c4a10(int *param_1)

{
  uint in_EAX;
  
  if (((*param_1 == (int)((0))) && (in_EAX = (uint)(param_1[1]), in_EAX != 0)) && (*(char *)(in_EAX + 300) == '\x02') ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (bool)0;
}


// Reference entry 110c4a40; body size 27 bytes.
#line 1 "ENTRY_110c4a40"

bool __fastcall FUN_110c4a40(int *param_1)

{
  uint in_EAX;
  
  if (((*param_1 == (int)((0))) && (in_EAX = (uint)(param_1[1]), in_EAX != 0)) && (*(char *)(in_EAX + 300) == '\x04') ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (bool)0;
}


// Reference entry 110c4a70; body size 27 bytes.
#line 1 "ENTRY_110c4a70"

bool __fastcall FUN_110c4a70(int *param_1)

{
  uint in_EAX;
  
  if (((*param_1 == (int)((0))) && (in_EAX = (uint)(param_1[1]), in_EAX != 0)) && (*(char *)(in_EAX + 300) == '\x03') ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (bool)0;
}


// Reference entry 110c4ac0; body size 20 bytes.
#line 1 "ENTRY_110c4ac0"

__declspec(naked) void FUN_110c4ac0(void)

{
  __asm _emit 0x83 __asm _emit 0x39 __asm _emit 0x01 __asm _emit 0x75 __asm _emit 0x0c
  __asm call LAB_10048252
  __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x0b __asm _emit 0x0f __asm _emit 0x94 __asm _emit 0xc0 __asm _emit 0xc3 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110c4ae0; body size 23 bytes.
#line 1 "ENTRY_110c4ae0"

bool __fastcall FUN_110c4ae0(int *param_1)

{
  uint in_EAX;
  
  if (*param_1 == (int)((1))) {
    return (bool)0;
  }
  return (bool)((*(uint *)(param_1[1] + 0x130) >> 8) & 1);
}


// Reference entry 110c4b00; body size 27 bytes.
#line 1 "ENTRY_110c4b00"

bool __fastcall FUN_110c4b00(int *param_1)

{
  uint in_EAX;
  
  if (((*param_1 == (int)((0))) && (in_EAX = (uint)(param_1[1]), in_EAX != 0)) && (*(char *)(in_EAX + 300) == '\0')) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (bool)0;
}


// Reference entry 110c5640; body size 33 bytes.
#line 1 "ENTRY_110c5640"

void __thiscall Recovered_Bulk::m_FUN_110c5640(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_110c5670((int)(param_2),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x50);
  return;
}


// Reference entry 110c5770; body size 40 bytes.
#line 1 "ENTRY_110c5770"

__declspec(naked) void FUN_110c5770(void)

{
  __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x24 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24
  __asm _emit 0x14 __asm _emit 0x50
  __asm call LAB_100922b7
  __asm _emit 0x8b __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x03 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08
  __asm _emit 0x00
}






// Reference entry 110c57b0; body size 60 bytes.
#line 1 "ENTRY_110c57b0"

__declspec(naked) void FUN_110c57b0(void)

{
  __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x0c __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x50
  __asm call LAB_1007c363
  __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x80 __asm _emit 0x7e __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x13 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x56
  __asm _emit 0x10 __asm _emit 0x52
  __asm call LAB_10071b61
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x74 __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c65a0; body size 48 bytes.
#line 1 "ENTRY_110c65a0"

__declspec(naked) void FUN_110c65a0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x50 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c79f0; body size 19 bytes.
#line 1 "ENTRY_110c79f0"

void __fastcall FUN_110c79f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x50);
  }
  return;
}


// Reference entry 110c7a10; body size 28 bytes.
#line 1 "ENTRY_110c7a10"

void __fastcall FUN_110c7a10(int *param_1)

{
  thunk_FUN_110c5670((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x50);
  return;
}


// Reference entry 110c7b10; body size 19 bytes.
#line 1 "ENTRY_110c7b10"

void __fastcall FUN_110c7b10(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x50);
  }
  return;
}


// Reference entry 110c7b30; body size 28 bytes.
#line 1 "ENTRY_110c7b30"

void __fastcall FUN_110c7b30(int *param_1)

{
  thunk_FUN_110c5670((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x50);
  return;
}


// Reference entry 110c7e50; body size 19 bytes.
#line 1 "ENTRY_110c7e50"

__declspec(naked) void FUN_110c7e50(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8d __asm _emit 0x4e __asm _emit 0x2c
  __asm call LAB_1007ca8e
  __asm _emit 0x8b __asm _emit 0xce __asm _emit 0x5e
  __asm jmp LAB_10047b09
}






// Reference entry 110c8bc0; body size 27 bytes.
#line 1 "ENTRY_110c8bc0"

__declspec(naked) void FUN_110c8bc0(void)

{
  __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x24 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x50
  __asm call LAB_10079820
  __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0x0c __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c8ff0; body size 32 bytes.
#line 1 "ENTRY_110c8ff0"

undefined4 __thiscall Recovered_Bulk::m_FUN_110c8ff0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_110c7c10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x78);
  }
  return (undefined4)(param_1);
}


// Reference entry 110c9020; body size 38 bytes.
#line 1 "ENTRY_110c9020"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110c9020(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjZPCMR);
  thunk_FUN_11172910();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x3c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110c9050; body size 42 bytes.
#line 1 "ENTRY_110c9050"

__declspec(naked) void FUN_110c9050(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8d __asm _emit 0x4e __asm _emit 0x2c
  __asm call LAB_1007ca8e
  __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_10047b09
  __asm _emit 0xf6 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x01 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x6a __asm _emit 0x44 __asm _emit 0x56
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c9090; body size 35 bytes.
#line 1 "ENTRY_110c9090"

undefined4 __thiscall Recovered_Bulk::m_FUN_110c9090(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_110c7e70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa7c);
  }
  return (undefined4)(param_1);
}


// Reference entry 110c9180; body size 25 bytes.
#line 1 "ENTRY_110c9180"

__declspec(naked) void FUN_110c9180(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x50 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110c9910; body size 31 bytes.
#line 1 "ENTRY_110c9910"

int * FUN_110c9910(int *param_1)

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


// Reference entry 110c9cb0; body size 45 bytes.
#line 1 "ENTRY_110c9cb0"

__declspec(naked) void FUN_110c9cb0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x8b
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c9cf0; body size 45 bytes.
#line 1 "ENTRY_110c9cf0"

__declspec(naked) void FUN_110c9cf0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x8b
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c9d30; body size 45 bytes.
#line 1 "ENTRY_110c9d30"

__declspec(naked) void FUN_110c9d30(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x8b
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c9d70; body size 45 bytes.
#line 1 "ENTRY_110c9d70"

__declspec(naked) void FUN_110c9d70(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x8b
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c9db0; body size 45 bytes.
#line 1 "ENTRY_110c9db0"

__declspec(naked) void FUN_110c9db0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x8b
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c9df0; body size 45 bytes.
#line 1 "ENTRY_110c9df0"

__declspec(naked) void FUN_110c9df0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x8b
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c9e30; body size 45 bytes.
#line 1 "ENTRY_110c9e30"

__declspec(naked) void FUN_110c9e30(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x8b
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c9e70; body size 45 bytes.
#line 1 "ENTRY_110c9e70"

__declspec(naked) void FUN_110c9e70(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x8b
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c9eb0; body size 45 bytes.
#line 1 "ENTRY_110c9eb0"

__declspec(naked) void FUN_110c9eb0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x8b
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c9ef0; body size 45 bytes.
#line 1 "ENTRY_110c9ef0"

__declspec(naked) void FUN_110c9ef0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x8b
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c9f30; body size 45 bytes.
#line 1 "ENTRY_110c9f30"

__declspec(naked) void FUN_110c9f30(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x8b
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c9f70; body size 45 bytes.
#line 1 "ENTRY_110c9f70"

__declspec(naked) void FUN_110c9f70(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x8b
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c9fb0; body size 45 bytes.
#line 1 "ENTRY_110c9fb0"

__declspec(naked) void FUN_110c9fb0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x8b
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110c9ff0; body size 45 bytes.
#line 1 "ENTRY_110c9ff0"

__declspec(naked) void FUN_110c9ff0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x8b
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110ca040; body size 43 bytes.
#line 1 "ENTRY_110ca040"

int * __stdcall FUN_110ca040(int *param_1, int *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_1);
}


// Reference entry 110ca230; body size 44 bytes.
#line 1 "ENTRY_110ca230"

__declspec(naked) void FUN_110ca230(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x83 __asm _emit 0x7e __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0x1f
  __asm call LAB_1006f9dd
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x1c __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100672a1
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x04 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0x5e __asm _emit 0xc3 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110ca620; body size 33 bytes.
#line 1 "ENTRY_110ca620"

void __fastcall FUN_110ca620(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_110c5670((int)(param_1),(int)(*(undefined4 *)(iVar1 + 4)));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 110ca780; body size 47 bytes.
#line 1 "ENTRY_110ca780"

__declspec(naked) void FUN_110ca780(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x08 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x20 __asm _emit 0x83 __asm _emit 0x78 __asm _emit 0x04 __asm _emit 0x0b __asm _emit 0x75 __asm _emit 0x1a
  __asm _emit 0x6a __asm _emit 0x0b
  __asm push offset LAB_118af674
  __asm _emit 0x51
  __asm call dword ptr [LAB_122fca10]
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x05 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00
}






// Reference entry 110cad70; body size 61 bytes.
#line 1 "ENTRY_110cad70"

__declspec(naked) void FUN_110cad70(void)

{
  __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x77 __asm _emit 0x14 __asm _emit 0x85 __asm _emit 0xf6 __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0xff
  __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0xff __asm _emit 0x90
  __asm _emit 0xbc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110cadc0; body size 24 bytes.
#line 1 "ENTRY_110cadc0"

__declspec(naked) void FUN_110cadc0(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_1002312d
  __asm _emit 0xb8 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc3
}






// Reference entry 110caef0; body size 43 bytes.
#line 1 "ENTRY_110caef0"

__declspec(naked) void FUN_110caef0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x5f
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110caf30; body size 43 bytes.
#line 1 "ENTRY_110caf30"

__declspec(naked) void FUN_110caf30(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x5f
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110caf70; body size 43 bytes.
#line 1 "ENTRY_110caf70"

__declspec(naked) void FUN_110caf70(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x5f
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110cafb0; body size 43 bytes.
#line 1 "ENTRY_110cafb0"

__declspec(naked) void FUN_110cafb0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x5f
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110caff0; body size 43 bytes.
#line 1 "ENTRY_110caff0"

__declspec(naked) void FUN_110caff0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x5f
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110cb030; body size 43 bytes.
#line 1 "ENTRY_110cb030"

__declspec(naked) void FUN_110cb030(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x5f
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110cb070; body size 43 bytes.
#line 1 "ENTRY_110cb070"

__declspec(naked) void FUN_110cb070(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x5f
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110cb0b0; body size 43 bytes.
#line 1 "ENTRY_110cb0b0"

__declspec(naked) void FUN_110cb0b0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x5f
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110cb0f0; body size 43 bytes.
#line 1 "ENTRY_110cb0f0"

__declspec(naked) void FUN_110cb0f0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x5f
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110cb130; body size 43 bytes.
#line 1 "ENTRY_110cb130"

__declspec(naked) void FUN_110cb130(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x5f
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110cb170; body size 43 bytes.
#line 1 "ENTRY_110cb170"

__declspec(naked) void FUN_110cb170(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x5f
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110cb1b0; body size 43 bytes.
#line 1 "ENTRY_110cb1b0"

__declspec(naked) void FUN_110cb1b0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x5f
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110cb1f0; body size 43 bytes.
#line 1 "ENTRY_110cb1f0"

__declspec(naked) void FUN_110cb1f0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x5f
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110cb230; body size 43 bytes.
#line 1 "ENTRY_110cb230"

__declspec(naked) void FUN_110cb230(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x5f
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110cb270; body size 43 bytes.
#line 1 "ENTRY_110cb270"

__declspec(naked) void FUN_110cb270(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x5f
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110cc260; body size 18 bytes.
#line 1 "ENTRY_110cc260"

undefined4 __stdcall FUN_110cc260(undefined4 param_1)

{
  thunk_FUN_110cc7f0<>(param_1,0);
  return (undefined4)(param_1);
}


// Reference entry 110cdca0; body size 17 bytes.
#line 1 "ENTRY_110cdca0"

undefined4 __fastcall FUN_110cdca0(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x714));
  }
  return (undefined4)(0);
}


// Reference entry 110ce370; body size 18 bytes.
#line 1 "ENTRY_110ce370"

__declspec(naked) void FUN_110ce370(void)

{
  __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x08 __asm _emit 0x0f __asm _emit 0xb7 __asm _emit 0x80 __asm _emit 0x6a __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc3 __asm _emit 0x33
  __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110ceab0; body size 18 bytes.
#line 1 "ENTRY_110ceab0"

undefined4 __stdcall FUN_110ceab0(undefined4 param_1)

{
  thunk_FUN_110cc7f0<>(param_1,4);
  return (undefined4)(param_1);
}


// Reference entry 110cead0; body size 43 bytes.
#line 1 "ENTRY_110cead0"

__declspec(naked) void FUN_110cead0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x80 __asm _emit 0xbe __asm _emit 0x20 __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x17 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x1c __asm _emit 0x85
  __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x10 __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10075b7b
  __asm _emit 0x80 __asm _emit 0x38 __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x06 __asm _emit 0x8d __asm _emit 0x86 __asm _emit 0xb8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110d1d10; body size 18 bytes.
#line 1 "ENTRY_110d1d10"

undefined4 __stdcall FUN_110d1d10(undefined4 param_1)

{
  thunk_FUN_110cc7f0<>(param_1,5);
  return (undefined4)(param_1);
}


// Reference entry 110d2700; body size 21 bytes.
#line 1 "ENTRY_110d2700"

__declspec(naked) void FUN_110d2700(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_1000879c
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d2720; body size 31 bytes.
#line 1 "ENTRY_110d2720"

__declspec(naked) void FUN_110d2720(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x15 __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005e0a2
  __asm _emit 0x50
  __asm call LAB_10081787
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0xc3 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d2e80; body size 33 bytes.
#line 1 "ENTRY_110d2e80"

undefined4
__stdcall FUN_110d2e80(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  *param_1 = (undefined1)(0);
  thunk_FUN_1145c250(param_3, "http-get:*:audio/mp3:*,x-file-cifs:*:audio/mp3:*,http-get:*:audio/mp4:*,x-file-cifs:*:audio/mp4:*,http-get:*:audio/x-m4a:*,x-file-cifs:*:audio/x-m4a:*,http-get:*:audio/mpeg:*,x-file-cifs:*:audio/mpeg:*,http-get:*:audio/mpegurl:*,x-file-cifs:*:audio/mpegurl:*,file:*:audio/mpegurl:*,http-get:*:audio/x-mpegurl:*,x-file-cifs:*:audio/x-mpegurl:*,http-get:*:application/x-mpegurl:*,x-file-cifs:*:application/x-mpegurl:*,http-get:*:application/vnd.apple.mpegurl:*,x-file-cifs:*:application/vnd.apple.mpegurl:*,http-get:*:application/dash+xml:*,x-file-cifs:*:application/dash+xml:*,http-get:*:audio/mpeg3:*,x-file-cifs:*:audio/mpeg3:*,http-get:*:audio/wav:*,x-file-cifs:*:audio/wav:*,http-get:*:audio/x-wav:*,x-file-cifs:*:audio/x-wav:*,http-get:*:audio/wma:*,x-file-cifs:*:audio/wma:*,http-get:*:audio/x-ms-wma:*,x-file-cifs:*:audio/x-ms-wma:*,http-get:*:audio/aiff:*,x-file-cifs:*:audio/aiff:*,http-get:*:audio/x-aiff:*,x-file-cifs:*:audio/x-aiff:*,http-get:*:audio/flac:*,x-file-cifs:*:audio/flac:*,http-get:*:application/ogg:*,x-file-cifs:*:application/ogg:*,http-get:*:audio/ogg:*,x-file-cifs:*:audio/ogg:*,sonos.com-mms:*:audio/x-ms-wma:*,sonos.com-http:*:audio/mp3:*,sonos.com-http:*:audio/mpeg:*,sonos.com-http:*:audio/mpeg3:*,sonos.com-http:*:audio/wma:*,sonos.com-http:*:audio/mp4:*,sonos.com-http:*:audio/x-m4a:*,sonos.com-http:*:audio/wav:*,sonos.com-http:*:audio/aiff:*,sonos.com-http:*:audio/flac:*,sonos.com-http:*:application/ogg:*,sonos.com-http:*:application/x-mpegURL:*,sonos.com-http:*:application/dash+xml:*,sonos.com-spotify:*:audio/x-spotify:*,sonos.com-rtrecent:*:audio/x-sonos-recent:*,x-rincon:*:*:*,x-rincon-mp3radio:*:*:*,x-rincon-playlist:*:*:*,x-rincon-queue:*:*:*,x-rincon-stream:*:*:*,x-sonosapi-stream:*:*:*,x-sonosapi-hls:*:*:*,x-sonosapi-hls-static:*:*:*,x-sonosapi-radio:*:audio/x-sonosapi-radio:*,x-rincon-cpcontainer:*:*:*,"
                     ,param_4);
  return (undefined4)(0);
}


// Reference entry 110d2ec0; body size 43 bytes.
#line 1 "ENTRY_110d2ec0"

__declspec(naked) void FUN_110d2ec0(void)

{
  __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x30 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x24 __asm _emit 0x56 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x3c __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_100839f6
  __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x50
  __asm call LAB_10019245
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x66 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x74 __asm _emit 0x5e __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x30 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110d3030; body size 43 bytes.
#line 1 "ENTRY_110d3030"

__declspec(naked) void FUN_110d3030(void)

{
  __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x30 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x24 __asm _emit 0x56 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x3c __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_100839f6
  __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x50
  __asm call LAB_1004a56b
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x66 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x70 __asm _emit 0x5e __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x30 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110d3070; body size 43 bytes.
#line 1 "ENTRY_110d3070"

__declspec(naked) void FUN_110d3070(void)

{
  __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x30 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x24 __asm _emit 0x56 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x3c __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_100839f6
  __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x50
  __asm call LAB_1006de49
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x66 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x72 __asm _emit 0x5e __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x30 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110d3140; body size 35 bytes.
#line 1 "ENTRY_110d3140"

__declspec(naked) void FUN_110d3140(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8d __asm _emit 0x8e __asm _emit 0x64 __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100310bb
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0d __asm _emit 0x83 __asm _emit 0xbe __asm _emit 0x68 __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x76 __asm _emit 0x04 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0x5e
  __asm _emit 0xc3 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110d4080; body size 62 bytes.
#line 1 "ENTRY_110d4080"

__declspec(naked) void FUN_110d4080(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x80 __asm _emit 0xbe __asm _emit 0x70 __asm _emit 0x0a __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0x2c __asm _emit 0x8d __asm _emit 0x8e __asm _emit 0x64
  __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100310bb
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x83 __asm _emit 0xbe __asm _emit 0x68 __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x76 __asm _emit 0x0f __asm _emit 0x8d __asm _emit 0x8e __asm _emit 0x64
  __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1001acad
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x05 __asm _emit 0x5f __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0x5e __asm _emit 0xc3 __asm _emit 0x5f __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110d55a0; body size 53 bytes.
#line 1 "ENTRY_110d55a0"

__declspec(naked) void FUN_110d55a0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8d __asm _emit 0x8e __asm _emit 0x64 __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100310bb
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x1d __asm _emit 0x83 __asm _emit 0xbe __asm _emit 0x68 __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x76 __asm _emit 0x14 __asm _emit 0x8d __asm _emit 0x8e __asm _emit 0x64
  __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1001acad
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x5f __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0x5e __asm _emit 0xc3 __asm _emit 0x5f __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110d5760; body size 19 bytes.
#line 1 "ENTRY_110d5760"

__declspec(naked) void FUN_110d5760(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9
  __asm jne LAB_10084f13
  __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0xc3 __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}






// Reference entry 110d5780; body size 40 bytes.
#line 1 "ENTRY_110d5780"

__declspec(naked) void FUN_110d5780(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_1004ec47
  __asm _emit 0x8b __asm _emit 0xc8
  __asm call LAB_1005d56c
  __asm _emit 0x8b __asm _emit 0x8e __asm _emit 0x38 __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x07 __asm _emit 0x83 __asm _emit 0xf9 __asm _emit 0x05 __asm _emit 0x0f __asm _emit 0x94
  __asm _emit 0xc0 __asm _emit 0xc3 __asm _emit 0x83 __asm _emit 0xf9 __asm _emit 0x03 __asm _emit 0x0f __asm _emit 0x94 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d67a0; body size 58 bytes.
#line 1 "ENTRY_110d67a0"

__declspec(naked) void FUN_110d67a0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0xc1 __asm _emit 0xe0
  __asm _emit 0x04
  __asm push dword ptr [eax + LAB_1211dae0]
  __asm push offset LAB_119c41b0
  __asm _emit 0x57 __asm _emit 0x56
  __asm call LAB_10086cb9
  __asm _emit 0x2b __asm _emit 0xf8 __asm _emit 0x03 __asm _emit 0xc6 __asm _emit 0x57 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x30
  __asm call LAB_1004d6da
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x1c __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x10 __asm _emit 0x00
}






// Reference entry 110d6ed0; body size 17 bytes.
#line 1 "ENTRY_110d6ed0"

void __stdcall FUN_110d6ed0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_11069340(param_1,0);
  return;
}


// Reference entry 110d7950; body size 34 bytes.
#line 1 "ENTRY_110d7950"

__declspec(naked) void FUN_110d7950(void)

{
  __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x5c
  __asm mov edx, offset LAB_1186d2ee
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x0f __asm _emit 0x45 __asm _emit 0xd0 __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x64 __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x52 __asm _emit 0xff __asm _emit 0x74
  __asm _emit 0x24 __asm _emit 0x0c
  __asm call LAB_10060140
  __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110d7a50; body size 24 bytes.
#line 1 "ENTRY_110d7a50"

void __thiscall Recovered_Bulk::m_FUN_110d7a50(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1145c250(param_1 + 0x4fa,param_2,0x24);
  return;
}


// Reference entry 110d7ad0; body size 27 bytes.
#line 1 "ENTRY_110d7ad0"

void __thiscall Recovered_Bulk::m_FUN_110d7ad0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1145c250(param_1 + 0xf9,param_2,0x401);
  return;
}


// Reference entry 110d8470; body size 24 bytes.
#line 1 "ENTRY_110d8470"

void __thiscall Recovered_Bulk::m_FUN_110d8470(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1145c250(param_1 + 0xb8,param_2,0x41);
  return;
}


// Reference entry 110d88a0; body size 21 bytes.
#line 1 "ENTRY_110d88a0"

__declspec(naked) void FUN_110d88a0(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_1002cb4c
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d88c0; body size 21 bytes.
#line 1 "ENTRY_110d88c0"

__declspec(naked) void FUN_110d88c0(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_10017017
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d88e0; body size 21 bytes.
#line 1 "ENTRY_110d88e0"

__declspec(naked) void FUN_110d88e0(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_1009070f
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d8900; body size 21 bytes.
#line 1 "ENTRY_110d8900"

__declspec(naked) void FUN_110d8900(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_1000c2b1
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d8930; body size 21 bytes.
#line 1 "ENTRY_110d8930"

__declspec(naked) void FUN_110d8930(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_10023277
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d8950; body size 21 bytes.
#line 1 "ENTRY_110d8950"

__declspec(naked) void FUN_110d8950(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_100318bd
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d8970; body size 21 bytes.
#line 1 "ENTRY_110d8970"

__declspec(naked) void FUN_110d8970(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_1006adb1
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d89b0; body size 21 bytes.
#line 1 "ENTRY_110d89b0"

__declspec(naked) void FUN_110d89b0(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_100109fb
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d89d0; body size 21 bytes.
#line 1 "ENTRY_110d89d0"

__declspec(naked) void FUN_110d89d0(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_10037c95
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d89f0; body size 51 bytes.
#line 1 "ENTRY_110d89f0"

__declspec(naked) void FUN_110d89f0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x25 __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1001b1f8
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x1c __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1006adb1
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x04 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0x5e __asm _emit 0xc3 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110d8a30; body size 21 bytes.
#line 1 "ENTRY_110d8a30"

__declspec(naked) void FUN_110d8a30(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_100742c6
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d8a50; body size 21 bytes.
#line 1 "ENTRY_110d8a50"

__declspec(naked) void FUN_110d8a50(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_10035891
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d8c40; body size 21 bytes.
#line 1 "ENTRY_110d8c40"

__declspec(naked) void FUN_110d8c40(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_10023bf0
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d8c60; body size 21 bytes.
#line 1 "ENTRY_110d8c60"

__declspec(naked) void FUN_110d8c60(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_10042064
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d8c80; body size 21 bytes.
#line 1 "ENTRY_110d8c80"

__declspec(naked) void FUN_110d8c80(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_1006041a
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d8cb0; body size 21 bytes.
#line 1 "ENTRY_110d8cb0"

__declspec(naked) void FUN_110d8cb0(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_10021a3f
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d8d00; body size 21 bytes.
#line 1 "ENTRY_110d8d00"

__declspec(naked) void FUN_110d8d00(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_1009a598
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d8d20; body size 21 bytes.
#line 1 "ENTRY_110d8d20"

__declspec(naked) void FUN_110d8d20(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_10059133
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d8d40; body size 21 bytes.
#line 1 "ENTRY_110d8d40"

__declspec(naked) void FUN_110d8d40(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_1009a9cb
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d8d60; body size 21 bytes.
#line 1 "ENTRY_110d8d60"

__declspec(naked) void FUN_110d8d60(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_10004a70
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d8d80; body size 21 bytes.
#line 1 "ENTRY_110d8d80"

__declspec(naked) void FUN_110d8d80(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_1000470a
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d8dc0; body size 21 bytes.
#line 1 "ENTRY_110d8dc0"

__declspec(naked) void FUN_110d8dc0(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_100208ab
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d8de0; body size 31 bytes.
#line 1 "ENTRY_110d8de0"

__declspec(naked) void FUN_110d8de0(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x15 __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005e0a2
  __asm _emit 0x50
  __asm call LAB_10002f90
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0xc3 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d8e10; body size 46 bytes.
#line 1 "ENTRY_110d8e10"

__declspec(naked) void FUN_110d8e10(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005e0a2
  __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x33 __asm _emit 0x77 __asm _emit 0x11
  __asm movzx eax, byte ptr [eax + LAB_110d8e48]
  __asm jmp dword ptr [eax*4 + LAB_110d8e40]
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0xc3
}






// Reference entry 110d9b30; body size 21 bytes.
#line 1 "ENTRY_110d9b30"

__declspec(naked) void FUN_110d9b30(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x78 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_1005e0a2
  __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110d9bc0; body size 63 bytes.
#line 1 "ENTRY_110d9bc0"

__declspec(naked) void FUN_110d9bc0(void)

{
  __asm _emit 0x51 __asm _emit 0x56
  __asm push offset LAB_11887444
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c
  __asm call LAB_1003a904
  __asm _emit 0x68 __asm _emit 0x01 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8d __asm _emit 0x46 __asm _emit 0x18
  __asm mov dword ptr [esi], offset LAB_119c50ec
  __asm _emit 0x50 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005907a
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 110da760; body size 45 bytes.
#line 1 "ENTRY_110da760"

__declspec(naked) void FUN_110da760(void)

{
  __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x20 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x1f __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x58
  __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x20 __asm _emit 0x8b __asm _emit 0xf0 __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x58 __asm _emit 0x81 __asm _emit 0xe6 __asm _emit 0x7f __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm _emit 0x83 __asm _emit 0xe0 __asm _emit 0x01 __asm _emit 0x4e __asm _emit 0x03 __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x5f __asm _emit 0xc3 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0x5f __asm _emit 0xc3
}






// Reference entry 110db240; body size 40 bytes.
#line 1 "ENTRY_110db240"

int * __thiscall Recovered_Bulk::m_FUN_110db240(int *param_2)
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


// Reference entry 110db5c0; body size 34 bytes.
#line 1 "ENTRY_110db5c0"

__declspec(naked) void FUN_110db5c0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x54 __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x01 __asm _emit 0x75 __asm _emit 0x11 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x8b
  __asm _emit 0xce __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x5c __asm _emit 0xf6 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x74 __asm _emit 0x04 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0x5e __asm _emit 0xc3 __asm _emit 0x32 __asm _emit 0xc0
  __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110dc6d0; body size 18 bytes.
#line 1 "ENTRY_110dc6d0"

void __fastcall FUN_110dc6d0(int param_1)

{
  if (*(void **)(param_1 + 8) != (char *)(((param_1 + 0xc)))) {
    free(*(void **)(param_1 + 8));
  }
  return;
}


// Reference entry 110dc760; body size 58 bytes.
#line 1 "ENTRY_110dc760"

__declspec(naked) void FUN_110dc760(void)

{
  __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8d __asm _emit 0x8f __asm _emit 0xc0 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [edi], offset LAB_119c58ec
  __asm mov dword ptr [edi + 8], offset LAB_119c591c
  __asm mov dword ptr [edi + 0x1c], offset LAB_119c592c
  __asm mov dword ptr [ecx], offset LAB_118821c0
  __asm call LAB_10072d77
  __asm _emit 0x8d __asm _emit 0x4f __asm _emit 0x1c
  __asm call LAB_1004e904
  __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x5f __asm _emit 0x5e
  __asm jmp LAB_10070653
}






// Reference entry 110dc880; body size 19 bytes.
#line 1 "ENTRY_110dc880"

__declspec(naked) void FUN_110dc880(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8d __asm _emit 0x4e __asm _emit 0x08
  __asm call LAB_10041c59
  __asm mov dword ptr [esi], offset LAB_119c5840
  __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110dc8a0; body size 34 bytes.
#line 1 "ENTRY_110dc8a0"

__declspec(naked) void FUN_110dc8a0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8d __asm _emit 0x8e __asm _emit 0x14 __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi], offset LAB_119c5ad4
  __asm mov dword ptr [ecx], offset LAB_118b4510
  __asm call LAB_10072d77
  __asm mov dword ptr [esi], offset LAB_119c5a7c
  __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110dcb50; body size 32 bytes.
#line 1 "ENTRY_110dcb50"

undefined4 __thiscall Recovered_Bulk::m_FUN_110dcb50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_110dc560();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4)(param_1);
}


// Reference entry 110dcb80; body size 36 bytes.
#line 1 "ENTRY_110dcb80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110dcb80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAsyncURITranslator);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2008);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110dcbb0; body size 33 bytes.
#line 1 "ENTRY_110dcbb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110dcbb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCPMetadataFormatter);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110dcbe0; body size 52 bytes.
#line 1 "ENTRY_110dcbe0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110dcbe0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RGetFormattedMetadataOperation);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RGetFormattedMetadataOperation);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RCPMetadataFormatter);
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110dcd90; body size 41 bytes.
#line 1 "ENTRY_110dcd90"

__declspec(naked) void FUN_110dcd90(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8d __asm _emit 0x4e __asm _emit 0x08
  __asm call LAB_10041c59
  __asm _emit 0xf6 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x01
  __asm mov dword ptr [esi], offset LAB_119c5840
  __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x6a __asm _emit 0x64 __asm _emit 0x56
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110dcdd0; body size 59 bytes.
#line 1 "ENTRY_110dcdd0"

__declspec(naked) void FUN_110dcdd0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8d __asm _emit 0x8e __asm _emit 0x14 __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi], offset LAB_119c5ad4
  __asm mov dword ptr [ecx], offset LAB_118b4510
  __asm call LAB_10072d77
  __asm _emit 0xf6 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x01
  __asm mov dword ptr [esi], offset LAB_119c5a7c
  __asm _emit 0x74 __asm _emit 0x0e __asm _emit 0x68 __asm _emit 0x20 __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x56
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110dce20; body size 58 bytes.
#line 1 "ENTRY_110dce20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110dce20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddURIToQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddURIToQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddURIToQueueAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7e0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110dce70; body size 33 bytes.
#line 1 "ENTRY_110dce70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110dce70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RefCountBase);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110de320; body size 58 bytes.
#line 1 "ENTRY_110de320"

__declspec(naked) void FUN_110de320(void)

{
  __asm _emit 0x8b __asm _emit 0x81 __asm _emit 0x88 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0d __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1e __asm _emit 0x72 __asm _emit 0x08 __asm _emit 0x3d
  __asm _emit 0x10 __asm _emit 0x0e __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x77 __asm _emit 0x18 __asm _emit 0xc3 __asm _emit 0x0f __asm _emit 0xb7 __asm _emit 0x81 __asm _emit 0x9a __asm _emit 0x16 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x85 __asm _emit 0xc0
  __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1e __asm _emit 0x72 __asm _emit 0x0d __asm _emit 0x3d __asm _emit 0x10 __asm _emit 0x0e __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x76 __asm _emit 0x0b __asm _emit 0xb8 __asm _emit 0x10
  __asm _emit 0x0e __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc3 __asm _emit 0xb8 __asm _emit 0x1e __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc3
}






// Reference entry 110de640; body size 45 bytes.
#line 1 "ENTRY_110de640"

__declspec(naked) void FUN_110de640(void)

{
  __asm _emit 0x8b __asm _emit 0x81 __asm _emit 0x18 __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x33 __asm _emit 0xc9 __asm _emit 0x38 __asm _emit 0x88 __asm _emit 0xb5 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x0f __asm _emit 0x45 __asm _emit 0xc1 __asm _emit 0xc3
  __asm push offset LAB_119c5c40
  __asm _emit 0x6a __asm _emit 0x02
  __asm push offset LAB_119c5b34
  __asm call LAB_100238df
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 110def50; body size 22 bytes.
#line 1 "ENTRY_110def50"

__declspec(naked) void FUN_110def50(void)

{
  __asm _emit 0x8b __asm _emit 0x89 __asm _emit 0x94 __asm _emit 0x19 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x85 __asm _emit 0xc9
  __asm jne LAB_1005311b
  __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xc3 __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}






// Reference entry 110df060; body size 40 bytes.
#line 1 "ENTRY_110df060"

int * __thiscall Recovered_Bulk::m_FUN_110df060(int *param_2)
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


// Reference entry 110e09c0; body size 34 bytes.
#line 1 "ENTRY_110e09c0"

__declspec(naked) void FUN_110e09c0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x66 __asm _emit 0x83 __asm _emit 0x38 __asm _emit 0x00 __asm _emit 0x75
  __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x8d __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x71 __asm _emit 0x28 __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x24 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0xc2
  __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 110e1d30; body size 51 bytes.
#line 1 "ENTRY_110e1d30"

__declspec(naked) void FUN_110e1d30(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0xc6 __asm _emit 0x86 __asm _emit 0x8c __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi + 0x34], offset LAB_1003ddb6
  __asm call LAB_1004ec47
  __asm _emit 0x05 __asm _emit 0xe1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8d __asm _emit 0x4e __asm _emit 0x30 __asm _emit 0x50
  __asm call LAB_1005f2d1
  __asm _emit 0x0f __asm _emit 0xb7 __asm _emit 0x86 __asm _emit 0x9a __asm _emit 0x16 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x86 __asm _emit 0x88 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110e20d0; body size 37 bytes.
#line 1 "ENTRY_110e20d0"

__declspec(naked) void FUN_110e20d0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x85 __asm _emit 0xf6 __asm _emit 0x74 __asm _emit 0x16 __asm _emit 0x57 __asm _emit 0x8d __asm _emit 0xb8 __asm _emit 0x8c __asm _emit 0x18
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xb9 __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xf3 __asm _emit 0xa5 __asm _emit 0xc6 __asm _emit 0x80 __asm _emit 0x8b __asm _emit 0x19 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110e28d0; body size 24 bytes.
#line 1 "ENTRY_110e28d0"

__declspec(naked) void FUN_110e28d0(void)

{
  __asm _emit 0x8b __asm _emit 0x89 __asm _emit 0x8c __asm _emit 0x19 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x09 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x08
  __asm _emit 0xff __asm _emit 0x60 __asm _emit 0x04 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 110e2c60; body size 43 bytes.
#line 1 "ENTRY_110e2c60"

__declspec(naked) void FUN_110e2c60(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x80 __asm _emit 0xbe __asm _emit 0x64 __asm _emit 0x19 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x1b __asm _emit 0xc6 __asm _emit 0x86 __asm _emit 0x64 __asm _emit 0x19
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x01
  __asm call LAB_1000e23c
  __asm _emit 0x8d __asm _emit 0x4e __asm _emit 0xd4 __asm _emit 0x5e __asm _emit 0x89 __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc8
  __asm jmp LAB_10050e52
  __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110e3630; body size 30 bytes.
#line 1 "ENTRY_110e3630"

__declspec(naked) void FUN_110e3630(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x28 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x11
  __asm _emit 0x8d __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x2c __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110e3660; body size 38 bytes.
#line 1 "ENTRY_110e3660"

__declspec(naked) void FUN_110e3660(void)

{
  __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x8d __asm _emit 0x81 __asm _emit 0xb6 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xd1 __asm _emit 0x50 __asm _emit 0x8d __asm _emit 0x41 __asm _emit 0x24
  __asm _emit 0xf7 __asm _emit 0xda __asm _emit 0x50 __asm _emit 0x8d __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x1b __asm _emit 0xd2 __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x20 __asm _emit 0x23 __asm _emit 0xd0 __asm _emit 0x52
  __asm call LAB_10093793
  __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110e3bf0; body size 48 bytes.
#line 1 "ENTRY_110e3bf0"

int __fastcall FUN_110e3bf0(int param_1)

{
  if (*(int *)(param_1 + 0x6018) != 0) {
    return (int)(*(int *)(param_1 + 0x6018) + 0xb5);
  }
  thunk_FUN_112af4e0("sonoscp",2, "Hi-res art translator, getting translated URI before the Op is set");
  return (int)(param_1 + 0x2010);
}


// Reference entry 110e4390; body size 28 bytes.
#line 1 "ENTRY_110e4390"

void __fastcall FUN_110e4390(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDBrowseAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDBrowseAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDBrowseAIOOp);
  thunk_FUN_111c0af0<>();
  return;
}


// Reference entry 110e43f0; body size 38 bytes.
#line 1 "ENTRY_110e43f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110e43f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110e4420; body size 35 bytes.
#line 1 "ENTRY_110e4420"

undefined4 __thiscall Recovered_Bulk::m_FUN_110e4420(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_110e4170();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  return (undefined4)(param_1);
}


// Reference entry 110e4450; body size 58 bytes.
#line 1 "ENTRY_110e4450"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110e4450(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDBrowseAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDBrowseAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDBrowseAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7e0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110e70a0; body size 56 bytes.
#line 1 "ENTRY_110e70a0"

__declspec(naked) void FUN_110e70a0(void)

{
  __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9
  __asm mov edx, offset LAB_1186d2ee
  __asm _emit 0x8b __asm _emit 0xf7 __asm _emit 0x8b __asm _emit 0xca __asm _emit 0xf7 __asm _emit 0xde __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x1b __asm _emit 0xf6 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x1c __asm _emit 0x23 __asm _emit 0xf0 __asm _emit 0x8b
  __asm _emit 0x47 __asm _emit 0x5c __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x0f __asm _emit 0x45 __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x47 __asm _emit 0x60 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x51 __asm _emit 0x8b
  __asm _emit 0x4f __asm _emit 0x24 __asm _emit 0x0f __asm _emit 0x45 __asm _emit 0xd0 __asm _emit 0x52 __asm _emit 0x56
  __asm call LAB_10093793
  __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110e7d10; body size 45 bytes.
#line 1 "ENTRY_110e7d10"

__declspec(naked) void FUN_110e7d10(void)

{
  __asm _emit 0x56 __asm _emit 0x8d __asm _emit 0x71 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_1001c864
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x0b __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_1004ae94
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0d __asm _emit 0x80 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x06 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110e9120; body size 44 bytes.
#line 1 "ENTRY_110e9120"

__declspec(naked) void FUN_110e9120(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x10
  __asm mov dword ptr [esi], offset LAB_119c66e8
  __asm mov dword ptr [esi + 0xc], offset LAB_119c6714
  __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10
  __asm mov dword ptr [esi], offset LAB_119c6480
  __asm mov dword ptr [esi + 0xc], offset LAB_118b3210
  __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110e9160; body size 52 bytes.
#line 1 "ENTRY_110e9160"

__declspec(naked) void FUN_110e9160(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8d __asm _emit 0x4e __asm _emit 0x14
  __asm call LAB_10060235
  __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x10
  __asm mov dword ptr [esi], offset LAB_119c66e8
  __asm mov dword ptr [esi + 0xc], offset LAB_119c6714
  __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10
  __asm mov dword ptr [esi], offset LAB_119c6480
  __asm mov dword ptr [esi + 0xc], offset LAB_118b3210
  __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110e9320; body size 52 bytes.
#line 1 "ENTRY_110e9320"

__declspec(naked) void FUN_110e9320(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8d __asm _emit 0x4e __asm _emit 0x14
  __asm call LAB_1003df55
  __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x10
  __asm mov dword ptr [esi], offset LAB_119c66e8
  __asm mov dword ptr [esi + 0xc], offset LAB_119c6714
  __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10
  __asm mov dword ptr [esi], offset LAB_119c6480
  __asm mov dword ptr [esi + 0xc], offset LAB_118b3210
  __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110e9370; body size 60 bytes.
#line 1 "ENTRY_110e9370"

__declspec(naked) void FUN_110e9370(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x8e __asm _emit 0xc4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi], offset LAB_119c64dc
  __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xc4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8d __asm _emit 0x8e __asm _emit 0xac __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], offset LAB_119c64ac
  __asm call LAB_1006cc4c
  __asm _emit 0x8b __asm _emit 0xce __asm _emit 0x5e
  __asm jmp LAB_10036e30
}






// Reference entry 110e9480; body size 33 bytes.
#line 1 "ENTRY_110e9480"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110e9480(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCPBrowseOperation);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110e94b0; body size 35 bytes.
#line 1 "ENTRY_110e94b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_110e94b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11202570();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x5d4);
  }
  return (undefined4)(param_1);
}


// Reference entry 110e94e0; body size 38 bytes.
#line 1 "ENTRY_110e94e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110e94e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RIdPrefixerCB);
  thunk_FUN_11202570();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110e9510; body size 38 bytes.
#line 1 "ENTRY_110e9510"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110e9510(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RRadioTimeContentProvider);
  thunk_FUN_111feb50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110ea940; body size 50 bytes.
#line 1 "ENTRY_110ea940"

__declspec(naked) void FUN_110ea940(void)

{
  __asm _emit 0x56 __asm _emit 0x68 __asm _emit 0xfe __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_100069c9
  __asm _emit 0x8b __asm _emit 0xc8
  __asm call LAB_1003214b
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0xff __asm _emit 0x90 __asm _emit 0xe4 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x8e __asm _emit 0xc4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x60 __asm _emit 0x40
}






// Reference entry 110eb700; body size 18 bytes.
#line 1 "ENTRY_110eb700"

undefined4 __stdcall FUN_110eb700(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)(0);
  return (undefined4)(1000);
}


// Reference entry 110ec740; body size 48 bytes.
#line 1 "ENTRY_110ec740"

__declspec(naked) void FUN_110ec740(void)

{
  __asm _emit 0x56 __asm _emit 0x68 __asm _emit 0xfe __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_100069c9
  __asm _emit 0x8b __asm _emit 0xc8
  __asm call LAB_1003214b
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x02 __asm _emit 0x5e __asm _emit 0xc3 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0xff __asm _emit 0x90 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x8b __asm _emit 0x8e __asm _emit 0xc4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x60 __asm _emit 0x78
}






// Reference entry 110ec780; body size 18 bytes.
#line 1 "ENTRY_110ec780"

__declspec(naked) void FUN_110ec780(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x10 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x60 __asm _emit 0x04 __asm _emit 0xb8 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc3
}






// Reference entry 110ec7a0; body size 19 bytes.
#line 1 "ENTRY_110ec7a0"

__declspec(naked) void FUN_110ec7a0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x03 __asm _emit 0x86 __asm _emit 0x10 __asm _emit 0x17 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110ecc20; body size 50 bytes.
#line 1 "ENTRY_110ecc20"

__declspec(naked) void FUN_110ecc20(void)

{
  __asm _emit 0x56 __asm _emit 0x68 __asm _emit 0xfe __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_100069c9
  __asm _emit 0x8b __asm _emit 0xc8
  __asm call LAB_1003214b
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x02 __asm _emit 0x5e __asm _emit 0xc3 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0xff __asm _emit 0x90 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x8b __asm _emit 0x86 __asm _emit 0xc4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0x8b __asm _emit 0x80 __asm _emit 0x94 __asm _emit 0x19 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc3
}






// Reference entry 110ecd80; body size 19 bytes.
#line 1 "ENTRY_110ecd80"

int __fastcall FUN_110ecd80(int *param_1)

{
  ((SCVtbl_57_0*)(param_1))->v();
  return (int)(param_1[0x31]);
}


// Reference entry 110ecda0; body size 18 bytes.
#line 1 "ENTRY_110ecda0"

__declspec(naked) void FUN_110ecda0(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x10 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x60 __asm _emit 0x08 __asm _emit 0xb8 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc3
}






// Reference entry 110ecdc0; body size 19 bytes.
#line 1 "ENTRY_110ecdc0"

__declspec(naked) void FUN_110ecdc0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0x03 __asm _emit 0x86 __asm _emit 0x0c __asm _emit 0x17 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110ecde0; body size 23 bytes.
#line 1 "ENTRY_110ecde0"

void __stdcall FUN_110ecde0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1106a8d0(param_2,param_1,param_3);
  return;
}


// Reference entry 110ecfe0; body size 63 bytes.
#line 1 "ENTRY_110ecfe0"

__declspec(naked) void FUN_110ecfe0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x6a __asm _emit 0x04
  __asm push offset LAB_119c6638
  __asm _emit 0x56
  __asm call dword ptr [LAB_122fca10]
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x21 __asm _emit 0x80 __asm _emit 0x3e __asm _emit 0x48 __asm _emit 0x75 __asm _emit 0x18 __asm _emit 0x6a __asm _emit 0x04 __asm _emit 0x8d __asm _emit 0x46
  __asm _emit 0x01
  __asm push offset LAB_119c6638
  __asm _emit 0x50
  __asm call dword ptr [LAB_122fca10]
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x04 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x5e __asm _emit 0xc3 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110ed0b0; body size 24 bytes.
#line 1 "ENTRY_110ed0b0"

void __thiscall Recovered_Bulk::m_FUN_110ed0b0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1106a8d0(param_1 + 0x2c,param_2,0x80);
  return;
}


// Reference entry 110ed2d0; body size 60 bytes.
#line 1 "ENTRY_110ed2d0"

__declspec(naked) void FUN_110ed2d0(void)

{
  __asm _emit 0x56 __asm _emit 0x68 __asm _emit 0xfe __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_100069c9
  __asm _emit 0x8b __asm _emit 0xc8
  __asm call LAB_1003214b
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x0b __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x5e __asm _emit 0xc6 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc2 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x8b
  __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0xff __asm _emit 0x90 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x8e __asm _emit 0xc4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e
  __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0xa0 __asm _emit 0x8c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
}






// Reference entry 110ed320; body size 21 bytes.
#line 1 "ENTRY_110ed320"

__declspec(naked) void FUN_110ed320(void)

{
  __asm _emit 0x8b __asm _emit 0xd1 __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x09 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xff
  __asm _emit 0x60 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 110ed5b0; body size 23 bytes.
#line 1 "ENTRY_110ed5b0"

void __thiscall Recovered_Bulk::m_FUN_110ed5b0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  ((SCVtbl_1_2*)(*(int **)(param_1 + -8)))->v((int)(param_1 + -0xc),(int)(param_3));
  return;
}


// Reference entry 110ed980; body size 17 bytes.
#line 1 "ENTRY_110ed980"

__declspec(naked) void FUN_110ed980(void)

{
  __asm _emit 0x83 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x76 __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xc6 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc2 __asm _emit 0x08
  __asm _emit 0x00
}






// Reference entry 110edc00; body size 26 bytes.
#line 1 "ENTRY_110edc00"

__declspec(naked) void FUN_110edc00(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8d __asm _emit 0x46 __asm _emit 0x0c
  __asm _emit 0x5e __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x62 __asm _emit 0x10
}






// Reference entry 110ede50; body size 42 bytes.
#line 1 "ENTRY_110ede50"

char * FUN_110ede50(char *param_1,char *param_2,undefined4 param_3)

{
  if (*param_1 == (char)(('H'))) {
    param_1 = (char *)(param_1 + 1);
    thunk_FUN_112462e0(&param_1,1,param_2,param_3);
    param_1 = (char *)(param_2);
  }
  return (char *)(param_1);
}


// Reference entry 110ee040; body size 33 bytes.
#line 1 "ENTRY_110ee040"

void __thiscall Recovered_Bulk::m_FUN_110ee040(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_110ee070((int)(param_2),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 110ee0d0; body size 60 bytes.
#line 1 "ENTRY_110ee0d0"

__declspec(naked) void FUN_110ee0d0(void)

{
  __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x0c __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x50
  __asm call LAB_1005a3ee
  __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x80 __asm _emit 0x7e __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x13 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x56
  __asm _emit 0x10 __asm _emit 0x52
  __asm call LAB_10071b61
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x74 __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110ee540; body size 48 bytes.
#line 1 "ENTRY_110ee540"

__declspec(naked) void FUN_110ee540(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x18 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110f0440; body size 19 bytes.
#line 1 "ENTRY_110f0440"

void __fastcall FUN_110f0440(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 110f0460; body size 28 bytes.
#line 1 "ENTRY_110f0460"

void __fastcall FUN_110f0460(int *param_1)

{
  thunk_FUN_110ee070((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 110f0490; body size 38 bytes.
#line 1 "ENTRY_110f0490"

__declspec(naked) void FUN_110f0490(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x8d __asm _emit 0x48 __asm _emit 0x10
  __asm call LAB_10023a4c
  __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x6a __asm _emit 0x18 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc3
}






// Reference entry 110f04c0; body size 19 bytes.
#line 1 "ENTRY_110f04c0"

void __fastcall FUN_110f04c0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 110f04e0; body size 28 bytes.
#line 1 "ENTRY_110f04e0"

void __fastcall FUN_110f04e0(int *param_1)

{
  thunk_FUN_110ee070((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 110f0a60; body size 38 bytes.
#line 1 "ENTRY_110f0a60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110f0a60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjDBAdapter);
  thunk_FUN_111a4f00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110f0df0; body size 25 bytes.
#line 1 "ENTRY_110f0df0"

__declspec(naked) void FUN_110f0df0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x18 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110f1790; body size 59 bytes.
#line 1 "ENTRY_110f1790"

__declspec(naked) void FUN_110f1790(void)

{
  __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x37 __asm _emit 0x85 __asm _emit 0xf6 __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x8b
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x07 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0a __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_10066e8c
  __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110f24b0; body size 43 bytes.
#line 1 "ENTRY_110f24b0"

__declspec(naked) void FUN_110f24b0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_1001718e
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x5f
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110f2960; body size 19 bytes.
#line 1 "ENTRY_110f2960"

undefined4 __fastcall FUN_110f2960(int param_1)

{
  if (*(char *)(param_1 + 0x28) == '\0') {
    thunk_FUN_110f3120();
  }
  return (undefined4)(*(undefined4 *)(param_1 + 0x30));
}


// Reference entry 110f2ac0; body size 39 bytes.
#line 1 "ENTRY_110f2ac0"

void __thiscall Recovered_Bulk::m_FUN_110f2ac0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(char *)(param_1 + 0x28) == '\0') {
    thunk_FUN_110f3120();
  }
  thunk_FUN_1138fad0(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),param_2);
  *(int*)(param_1 + 0x38) = (int)(*(int *)(param_1 + 0x38) + 1);
  return;
}


// Reference entry 110f2af0; body size 59 bytes.
#line 1 "ENTRY_110f2af0"

void __thiscall Recovered_Bulk::m_FUN_110f2af0(char *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    thunk_FUN_110f3120();
  }
  thunk_FUN_1138fd50(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),param_2, (int)strlen((const char *)param_2),0);
  *(int*)(param_1 + 0x38) = (int)(*(int *)(param_1 + 0x38) + 1);
  return;
}


// Reference entry 110f2b40; body size 59 bytes.
#line 1 "ENTRY_110f2b40"

void __thiscall Recovered_Bulk::m_FUN_110f2b40(char *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    thunk_FUN_110f3120();
  }
  thunk_FUN_1138fd50(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),param_2, (int)strlen((const char *)param_2),0);
  *(int*)(param_1 + 0x38) = (int)(*(int *)(param_1 + 0x38) + 1);
  return;
}


// Reference entry 110f53b0; body size 29 bytes.
#line 1 "ENTRY_110f53b0"

__declspec(naked) void FUN_110f53b0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x03 __asm _emit 0x77 __asm _emit 0x10
  __asm jmp dword ptr [eax*4 + LAB_110f53d0]
  __asm _emit 0xb8 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc3 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xc3 __asm _emit 0x83 __asm _emit 0xc8 __asm _emit 0xff __asm _emit 0xc3
}






// Reference entry 110f6650; body size 52 bytes.
#line 1 "ENTRY_110f6650"

__declspec(naked) void FUN_110f6650(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x03 __asm _emit 0x5e __asm _emit 0xff __asm _emit 0xe0 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x1c
  __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x07 __asm _emit 0x50
  __asm call dword ptr [LAB_122fc19c]
  __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x20 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0f __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x68 __asm _emit 0x64 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x50
  __asm call dword ptr [LAB_122fc4f8]
  __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 110f66a0; body size 45 bytes.
#line 1 "ENTRY_110f66a0"

__declspec(naked) void FUN_110f66a0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x46
  __asm _emit 0x0c __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x80 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x46
  __asm _emit 0x08
  __asm call LAB_1005a128
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110f68d0; body size 18 bytes.
#line 1 "ENTRY_110f68d0"

void __fastcall FUN_110f68d0(int param_1)

{
  if (*(void **)(param_1 + 8) != (char *)(((param_1 + 0xc)))) {
    free(*(void **)(param_1 + 8));
  }
  return;
}


// Reference entry 110f68f0; body size 29 bytes.
#line 1 "ENTRY_110f68f0"

void __fastcall FUN_110f68f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAesDecoder);
  thunk_FUN_113d3650(param_1 + 0xe);
  *param_1 = (undefined4)((uint)&ghidra_vftable_REncryptedDataDecoder);
  return;
}


// Reference entry 110f6940; body size 33 bytes.
#line 1 "ENTRY_110f6940"

__declspec(naked) void FUN_110f6940(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04
  __asm mov dword ptr [esi], offset LAB_119c76e0
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x09 __asm _emit 0x50
  __asm call LAB_1001b667
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0x5e
  __asm jmp LAB_1003125a
}






// Reference entry 110f6970; body size 33 bytes.
#line 1 "ENTRY_110f6970"

__declspec(naked) void FUN_110f6970(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04
  __asm mov dword ptr [esi], offset LAB_119c7738
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x09 __asm _emit 0x50
  __asm call LAB_1001b667
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0x5e
  __asm jmp LAB_100162a2
}






// Reference entry 110f69a0; body size 33 bytes.
#line 1 "ENTRY_110f69a0"

__declspec(naked) void FUN_110f69a0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04
  __asm mov dword ptr [esi], offset LAB_119c76cc
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x09 __asm _emit 0x50
  __asm call LAB_1001b667
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0x5e
  __asm jmp LAB_10070185
}






// Reference entry 110f69d0; body size 21 bytes.
#line 1 "ENTRY_110f69d0"

__declspec(naked) void FUN_110f69d0(void)

{
  __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x04
  __asm mov dword ptr [ecx], offset LAB_119c76fc
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x07 __asm _emit 0x50
  __asm call LAB_1001b667
  __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 110f6ac0; body size 54 bytes.
#line 1 "ENTRY_110f6ac0"

__declspec(naked) void FUN_110f6ac0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x3b __asm _emit 0xfe __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0xff __asm _emit 0x76 __asm _emit 0x04 __asm _emit 0xff
  __asm _emit 0x76 __asm _emit 0x08
  __asm call LAB_1005a128
  __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x10 __asm _emit 0x2b __asm _emit 0xf7 __asm _emit 0xba __asm _emit 0x7c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8a __asm _emit 0x0c __asm _emit 0x06 __asm _emit 0x8d __asm _emit 0x40 __asm _emit 0x01
  __asm _emit 0x88 __asm _emit 0x48 __asm _emit 0xff __asm _emit 0x83 __asm _emit 0xea __asm _emit 0x01 __asm _emit 0x75 __asm _emit 0xf2 __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110f6b60; body size 54 bytes.
#line 1 "ENTRY_110f6b60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110f6b60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAesDecoder);
  thunk_FUN_113d3650(param_1 + 0xe);
  *param_1 = (undefined4)((uint)&ghidra_vftable_REncryptedDataDecoder);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110f6bb0; body size 33 bytes.
#line 1 "ENTRY_110f6bb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110f6bb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_REncryptedDataDecoder);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110f6be0; body size 33 bytes.
#line 1 "ENTRY_110f6be0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110f6be0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_REncryptedStringDecoder);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110f6c10; body size 56 bytes.
#line 1 "ENTRY_110f6c10"

__declspec(naked) void FUN_110f6c10(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04
  __asm mov dword ptr [esi], offset LAB_119c76e0
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x09 __asm _emit 0x50
  __asm call LAB_1001b667
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_1003125a
  __asm _emit 0xf6 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x01 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x6a __asm _emit 0x0c __asm _emit 0x56
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110f6c60; body size 56 bytes.
#line 1 "ENTRY_110f6c60"

__declspec(naked) void FUN_110f6c60(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04
  __asm mov dword ptr [esi], offset LAB_119c7738
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x09 __asm _emit 0x50
  __asm call LAB_1001b667
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_100162a2
  __asm _emit 0xf6 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x01 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x6a __asm _emit 0x08 __asm _emit 0x56
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110f6cb0; body size 56 bytes.
#line 1 "ENTRY_110f6cb0"

__declspec(naked) void FUN_110f6cb0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04
  __asm mov dword ptr [esi], offset LAB_119c76cc
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x09 __asm _emit 0x50
  __asm call LAB_1001b667
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_10070185
  __asm _emit 0xf6 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x01 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x6a __asm _emit 0x0c __asm _emit 0x56
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110f6d00; body size 49 bytes.
#line 1 "ENTRY_110f6d00"

__declspec(naked) void FUN_110f6d00(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04
  __asm mov dword ptr [esi], offset LAB_119c76fc
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x09 __asm _emit 0x50
  __asm call LAB_1001b667
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0xf6 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x01 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x6a __asm _emit 0x18 __asm _emit 0x56
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 110f6d40; body size 32 bytes.
#line 1 "ENTRY_110f6d40"

undefined4 __thiscall Recovered_Bulk::m_FUN_110f6d40(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_110f69f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4)(param_1);
}


// Reference entry 110f6d70; body size 27 bytes.
#line 1 "ENTRY_110f6d70"

undefined4 __thiscall Recovered_Bulk::m_FUN_110f6d70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}


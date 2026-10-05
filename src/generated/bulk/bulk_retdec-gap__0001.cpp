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
using namespace std;
extern "C" void LAB_1000346d(void);
extern "C" void LAB_1000448f(void);
extern "C" void LAB_10004bec(void);
extern "C" void LAB_10004c1e(void);
extern "C" void LAB_10004c96(void);
extern "C" void LAB_1000518c(void);
extern "C" void LAB_1000572c(void);
extern "C" void LAB_10005c9a(void);
extern "C" void LAB_10005d21(void);
extern "C" void LAB_1000695b(void);
extern "C" void LAB_1000981d(void);
extern "C" void LAB_1000d111(void);
extern "C" void LAB_1000febb(void);
extern "C" void LAB_10010c12(void);
extern "C" void LAB_10012cf1(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_100136ab(void);
extern "C" void LAB_10013c78(void);
extern "C" void LAB_10014a33(void);
extern "C" void LAB_100152e9(void);
extern "C" void LAB_10015f23(void);
extern "C" void LAB_1001645f(void);
extern "C" void LAB_10016a9f(void);
extern "C" void LAB_10017292(void);
extern "C" void LAB_100185a7(void);
extern "C" void LAB_10018fa2(void);
extern "C" void LAB_100191be(void);
extern "C" void LAB_1001a2fd(void);
extern "C" void LAB_1001aa55(void);
extern "C" void LAB_1001b743(void);
extern "C" void LAB_1001c053(void);
extern "C" void LAB_1001c715(void);
extern "C" void LAB_1001d1a1(void);
extern "C" void LAB_1001f2b2(void);
extern "C" void LAB_1001f384(void);
extern "C" void LAB_1001f82f(void);
extern "C" void LAB_1001f98d(void);
extern "C" void LAB_100216cf(void);
extern "C" void LAB_10022502(void);
extern "C" void LAB_10023902(void);
extern "C" void LAB_10023907(void);
extern "C" void LAB_10025ee1(void);
extern "C" void LAB_1002784a(void);
extern "C" void LAB_10027a93(void);
extern "C" void LAB_1002820e(void);
extern "C" void LAB_100286af(void);
extern "C" void LAB_1002a0ae(void);
extern "C" void LAB_1002c651(void);
extern "C" void LAB_1002ca07(void);
extern "C" void LAB_100308b4(void);
extern "C" void LAB_10030b11(void);
extern "C" void LAB_100310fc(void);
extern "C" void LAB_1003215a(void);
extern "C" void LAB_10032e5c(void);
extern "C" void LAB_10033370(void);
extern "C" void LAB_1003445a(void);
extern "C" void LAB_100369ee(void);
extern "C" void LAB_10037222(void);
extern "C" void LAB_100382f3(void);
extern "C" void LAB_10039207(void);
extern "C" void LAB_1003ab7a(void);
extern "C" void LAB_1003c53d(void);
extern "C" void LAB_1003cdfd(void);
extern "C" void LAB_1003e284(void);
extern "C" void LAB_1003f2a6(void);
extern "C" void LAB_1003fb39(void);
extern "C" void LAB_1003fc92(void);
extern "C" void LAB_10040322(void);
extern "C" void LAB_10040692(void);
extern "C" void LAB_10040b38(void);
extern "C" void LAB_100432d4(void);
extern "C" void LAB_10043b8f(void);
extern "C" void LAB_10044021(void);
extern "C" void LAB_10045129(void);
extern "C" void LAB_100473ac(void);
extern "C" void LAB_10048d0b(void);
extern "C" void LAB_1004a223(void);
extern "C" void LAB_1004b60a(void);
extern "C" void LAB_1004c1b3(void);
extern "C" void LAB_1004e436(void);
extern "C" void LAB_1004ed23(void);
extern "C" void LAB_1004ee4a(void);
extern "C" void LAB_1004f020(void);
extern "C" void LAB_1004f60b(void);
extern "C" void LAB_100521f3(void);
extern "C" void LAB_100531c0(void);
extern "C" void LAB_10053396(void);
extern "C" void LAB_10053a80(void);
extern "C" void LAB_10053e04(void);
extern "C" void LAB_1005418d(void);
extern "C" void LAB_10054700(void);
extern "C" void LAB_10054a20(void);
extern "C" void LAB_10058585(void);
extern "C" void LAB_1005907f(void);
extern "C" void LAB_10059a98(void);
extern "C" void LAB_1005b4dd(void);
extern "C" void LAB_1005b901(void);
extern "C" void LAB_1005ba19(void);
extern "C" void LAB_1005c4a5(void);
extern "C" void LAB_1005d337(void);
extern "C" void LAB_1005d3b9(void);
extern "C" void LAB_1005dc47(void);
extern "C" void LAB_1005e1ce(void);
extern "C" void LAB_1005e813(void);
extern "C" void LAB_1005ef75(void);
extern "C" void LAB_1005f8c1(void);
extern "C" void LAB_1005fe93(void);
extern "C" void LAB_10060e56(void);
extern "C" void LAB_1006123e(void);
extern "C" void LAB_10061cc0(void);
extern "C" void LAB_10061cc5(void);
extern "C" void LAB_100627b5(void);
extern "C" void LAB_10062b9d(void);
extern "C" void LAB_10062ec7(void);
extern "C" void LAB_100638c7(void);
extern "C" void LAB_1006629d(void);
extern "C" void LAB_10069308(void);
extern "C" void LAB_1006b770(void);
extern "C" void LAB_1006bc52(void);
extern "C" void LAB_1006bc57(void);
extern "C" void LAB_1006c0a3(void);
extern "C" void LAB_1006c5f3(void);
extern "C" void LAB_1006d147(void);
extern "C" void LAB_1006d41c(void);
extern "C" void LAB_1006e8ee(void);
extern "C" void LAB_10071391(void);
extern "C" void LAB_100723c2(void);
extern "C" void LAB_10072e76(void);
extern "C" void LAB_10073ffb(void);
extern "C" void LAB_10074712(void);
extern "C" void LAB_100755db(void);
extern "C" void LAB_10075c89(void);
extern "C" void LAB_10077610(void);
extern "C" void LAB_1007bb66(void);
extern "C" void LAB_1007c87c(void);
extern "C" void LAB_1007d128(void);
extern "C" void LAB_1007dcef(void);
extern "C" void LAB_1007dfe7(void);
extern "C" void LAB_1007eef1(void);
extern "C" void LAB_10080724(void);
extern "C" void LAB_10080bf7(void);
extern "C" void LAB_10084e5f(void);
extern "C" void LAB_100885af(void);
extern "C" void LAB_100892a2(void);
extern "C" void LAB_10089342(void);
extern "C" void LAB_10089ee6(void);
extern "C" void LAB_1008a83c(void);
extern "C" void LAB_1008a9e5(void);
extern "C" void LAB_1008b8e0(void);
extern "C" void LAB_1008d9ec(void);
extern "C" void LAB_1008ebdf(void);
extern "C" void LAB_1008ec57(void);
extern "C" void LAB_1008ed7e(void);
extern "C" void LAB_1008fdeb(void);
extern "C" void LAB_100938c9(void);
extern "C" void LAB_10093ef5(void);
extern "C" void LAB_10094fa8(void);
extern "C" void LAB_100958e5(void);
extern "C" void LAB_10095abb(void);
extern "C" void LAB_10095c1e(void);
extern "C" void LAB_10095f9d(void);
extern "C" void LAB_100970eb(void);
extern "C" void LAB_10097442(void);
extern "C" void LAB_100976d6(void);
extern "C" void LAB_10098513(void);
extern "C" void LAB_10098b8a(void);
extern "C" void LAB_10099111(void);
extern "C" void LAB_10099e09(void);
extern "C" void LAB_1009aa43(void);
extern "C" void LAB_113ea210(void);
extern "C" void LAB_113ed30d(void);
extern "C" void LAB_113eddd8(void);
extern "C" void LAB_113edddc(void);
extern "C" void LAB_113ede48(void);
extern "C" void LAB_113ede4c(void);
extern "C" void LAB_113f0636(void);
extern "C" void LAB_113f063b(void);
extern "C" void LAB_113f064b(void);
extern "C" void LAB_113f065d(void);
extern "C" void LAB_113f0765(void);
extern "C" void LAB_113f0788(void);
extern "C" void LAB_113f078c(void);
extern "C" void LAB_113f1400(void);
extern "C" void LAB_113f1408(void);
extern "C" void LAB_113f1560(void);
extern "C" void LAB_113f28ae(void);
extern "C" void LAB_113f29a0(void);
extern "C" void LAB_113f2ad0(void);
extern "C" void LAB_113f3060(void);
extern "C" void LAB_113f437c(void);
extern "C" void LAB_113f4bac(void);
extern "C" void LAB_113f51b0(void);
extern "C" void LAB_113f5210(void);
extern "C" void LAB_113f5340(void);
extern "C" void LAB_113f5cf0(void);
extern "C" void LAB_113f6c4c(void);
extern "C" void LAB_113f75bc(void);
extern "C" void LAB_113f75d9(void);
extern "C" void LAB_113f817d(void);
extern "C" void LAB_113f8918(void);
extern "C" void LAB_113f8ab7(void);
extern "C" void LAB_113f8be7(void);
extern "C" void LAB_113f8bf7(void);
extern "C" void LAB_113f8dac(void);
extern "C" void LAB_113f8dae(void);
extern "C" void LAB_113f8ddb(void);
extern "C" void LAB_113f8dde(void);
extern "C" void LAB_113fef30(void);
extern "C" void LAB_11400900(void);
extern "C" void LAB_11400f82(void);
extern "C" void LAB_114012da(void);
extern "C" void LAB_114012df(void);
extern "C" void LAB_11404d71(void);
extern "C" void LAB_11405c60(void);
extern "C" void LAB_11405cc0(void);
extern "C" void LAB_11408886(void);
extern "C" void LAB_1140a911(void);
extern "C" void LAB_1140a930(void);
extern "C" void LAB_1140ab01(void);
extern "C" void LAB_1140ab20(void);
extern "C" void LAB_114134a0(void);
extern "C" void LAB_11413543(void);
extern "C" void LAB_11413567(void);
extern "C" void LAB_11418cc5(void);
extern "C" void LAB_11418d6e(void);
extern "C" void LAB_11418d8d(void);
extern "C" void LAB_1141d980(void);
extern "C" void LAB_11424480(void);
extern "C" void LAB_11424dd0(void);
extern "C" void LAB_1142bf40(void);
extern "C" void LAB_1142bfb0(void);
extern "C" void LAB_1142d8f0(void);
extern "C" void LAB_1142f960(void);
extern "C" void LAB_1142fd11(void);
extern "C" void LAB_1142fe10(void);
extern "C" void LAB_11430511(void);
extern "C" void LAB_114336c0(void);
extern "C" void LAB_11446cf0(void);
extern "C" void LAB_11446d82(void);
extern "C" void LAB_114472f0(void);
extern "C" void LAB_11447382(void);
extern "C" void LAB_1144cf23(void);
extern "C" void LAB_1144f270(void);
extern "C" void LAB_1144f605(void);
extern "C" void LAB_1144f8f8(void);
extern "C" void LAB_1145ea6c(void);
extern "C" void LAB_1145eb70(void);
extern "C" void LAB_1146074a(void);
extern "C" void LAB_11460780(void);
extern "C" void LAB_11465140(void);
extern "C" void LAB_11466840(void);
extern "C" void LAB_114672af(void);
extern "C" void LAB_114672b0(void);
extern "C" void LAB_11469411(void);
extern "C" void LAB_1146e46b(void);
extern "C" void LAB_11472102(void);
extern "C" void LAB_11477eef(void);
extern "C" void LAB_11477ef0(void);
extern "C" void LAB_114887d0(void);
extern "C" void LAB_11488850(void);
extern "C" void LAB_11488920(void);
extern "C" void LAB_11488970(void);
extern "C" void LAB_11488a02(void);
extern "C" void LAB_11488a50(void);
extern "C" void LAB_11488a90(void);
extern "C" void LAB_1148cde7(void);
extern "C" void LAB_1148cded(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_1148ce0b(void);
extern "C" void LAB_11881ac8(void);
extern "C" void LAB_11bfd8ac(void);
extern "C" void LAB_11bfd9b8(void);
extern "C" void LAB_11bfd9bc(void);
extern "C" void LAB_11bfd9f4(void);
extern "C" void LAB_11c04d50(void);
extern "C" void LAB_11c05fbc(void);
extern "C" void LAB_11c06310(void);
extern "C" void LAB_11c08410(void);
extern "C" void LAB_11d1af9c(void);
extern "C" void LAB_11d5af54(void);
extern "C" void LAB_11d637dc(void);
extern "C" void LAB_11d71130(void);
extern "C" void LAB_11d9a518(void);
extern "C" void LAB_11dc61c8(void);
extern "C" void LAB_11de021c(void);
extern "C" void LAB_11df5af0(void);
extern "C" void LAB_11e33954(void);
extern "C" void LAB_11f1ab14(void);
extern "C" void LAB_11f714d8(void);
extern "C" void LAB_11f71fb8(void);
extern "C" void LAB_11f722dc(void);
extern "C" void LAB_11fa4f30(void);
extern "C" void LAB_11fb1e64(void);
extern "C" void LAB_11ff81b0(void);
extern "C" void LAB_1202e7e0(void);
extern "C" void LAB_1203c220(void);
extern "C" void LAB_120413b8(void);
extern "C" void LAB_120430d8(void);
extern "C" void LAB_1205da44(void);
extern "C" void LAB_12119638(void);
extern "C" void LAB_12119648(void);
extern "C" void LAB_1211964c(void);
extern "C" void LAB_12126b50(void);
extern "C" void LAB_12126b54(void);
extern "C" void LAB_12126b84(void);
extern "C" void LAB_121a1348(void);
extern "C" void LAB_121a4ad8(void);
extern "C" void LAB_121a5238(void);
extern "C" void LAB_121a523c(void);
extern "C" void LAB_121a5240(void);
extern "C" void LAB_121a56a8(void);
extern "C" void LAB_121a56d0(void);
extern "C" void LAB_121a56fc(void);
extern "C" void LAB_121a6524(void);
extern "C" void LAB_121a652c(void);
extern "C" void LAB_121a7bb0(void);
extern "C" void LAB_121a7bb8(void);
extern "C" void LAB_121a7bc0(void);
extern "C" void LAB_122fa1d0(void);
extern "C" void LAB_122fa560(void);
extern "C" void LAB_122faa80(void);
extern "C" void LAB_122fb15c(void);
extern "C" void LAB_122fc1e8(void);
extern "C" void LAB_122fc7ac(void);
extern "C" void LAB_122fc7b0(void);
extern "C" void LAB_122fc7bc(void);
extern "C" void LAB_122fc888(void);
extern "C" void LAB_122fc914(void);
extern "C" void LAB_122fca5c(void);

extern "C" void LAB_1000346d(void);
extern "C" void LAB_1000448f(void);
extern "C" void LAB_10004bec(void);
extern "C" void LAB_10004c1e(void);
extern "C" void LAB_10004c96(void);
extern "C" void LAB_1000518c(void);
extern "C" void LAB_1000572c(void);
extern "C" void LAB_10005c9a(void);
extern "C" void LAB_10005d21(void);
extern "C" void LAB_1000695b(void);
extern "C" void LAB_1000981d(void);
extern "C" void LAB_1000d111(void);
extern "C" void LAB_1000febb(void);
extern "C" void LAB_10010c12(void);
extern "C" void LAB_10012cf1(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_100136ab(void);
extern "C" void LAB_10013c78(void);
extern "C" void LAB_10014a33(void);
extern "C" void LAB_100152e9(void);
extern "C" void LAB_10015f23(void);
extern "C" void LAB_1001645f(void);
extern "C" void LAB_10016a9f(void);
extern "C" void LAB_10017292(void);
extern "C" void LAB_100185a7(void);
extern "C" void LAB_10018fa2(void);
extern "C" void LAB_100191be(void);
extern "C" void LAB_1001a2fd(void);
extern "C" void LAB_1001aa55(void);
extern "C" void LAB_1001b743(void);
extern "C" void LAB_1001c053(void);
extern "C" void LAB_1001c715(void);
extern "C" void LAB_1001d1a1(void);
extern "C" void LAB_1001f2b2(void);
extern "C" void LAB_1001f384(void);
extern "C" void LAB_1001f82f(void);
extern "C" void LAB_1001f98d(void);
extern "C" void LAB_100216cf(void);
extern "C" void LAB_10022502(void);
extern "C" void LAB_10023902(void);
extern "C" void LAB_10023907(void);
extern "C" void LAB_10025ee1(void);
extern "C" void LAB_1002784a(void);
extern "C" void LAB_10027a93(void);
extern "C" void LAB_1002820e(void);
extern "C" void LAB_100286af(void);
extern "C" void LAB_1002a0ae(void);
extern "C" void LAB_1002c651(void);
extern "C" void LAB_1002ca07(void);
extern "C" void LAB_100308b4(void);
extern "C" void LAB_10030b11(void);
extern "C" void LAB_100310fc(void);
extern "C" void LAB_1003215a(void);
extern "C" void LAB_10032e5c(void);
extern "C" void LAB_10033370(void);
extern "C" void LAB_1003445a(void);
extern "C" void LAB_100369ee(void);
extern "C" void LAB_10037222(void);
extern "C" void LAB_100382f3(void);
extern "C" void LAB_10039207(void);
extern "C" void LAB_1003ab7a(void);
extern "C" void LAB_1003c53d(void);
extern "C" void LAB_1003cdfd(void);
extern "C" void LAB_1003e284(void);
extern "C" void LAB_1003f2a6(void);
extern "C" void LAB_1003fb39(void);
extern "C" void LAB_1003fc92(void);
extern "C" void LAB_10040322(void);
extern "C" void LAB_10040692(void);
extern "C" void LAB_10040b38(void);
extern "C" void LAB_100432d4(void);
extern "C" void LAB_10043b8f(void);
extern "C" void LAB_10044021(void);
extern "C" void LAB_10045129(void);
extern "C" void LAB_100473ac(void);
extern "C" void LAB_10048d0b(void);
extern "C" void LAB_1004a223(void);
extern "C" void LAB_1004b60a(void);
extern "C" void LAB_1004c1b3(void);
extern "C" void LAB_1004e436(void);
extern "C" void LAB_1004ed23(void);
extern "C" void LAB_1004ee4a(void);
extern "C" void LAB_1004f020(void);
extern "C" void LAB_1004f60b(void);
extern "C" void LAB_100521f3(void);
extern "C" void LAB_100531c0(void);
extern "C" void LAB_10053396(void);
extern "C" void LAB_10053a80(void);
extern "C" void LAB_10053e04(void);
extern "C" void LAB_1005418d(void);
extern "C" void LAB_10054700(void);
extern "C" void LAB_10054a20(void);
extern "C" void LAB_10058585(void);
extern "C" void LAB_1005907f(void);
extern "C" void LAB_10059a98(void);
extern "C" void LAB_1005b4dd(void);
extern "C" void LAB_1005b901(void);
extern "C" void LAB_1005ba19(void);
extern "C" void LAB_1005c4a5(void);
extern "C" void LAB_1005d337(void);
extern "C" void LAB_1005d3b9(void);
extern "C" void LAB_1005dc47(void);
extern "C" void LAB_1005e1ce(void);
extern "C" void LAB_1005e813(void);
extern "C" void LAB_1005ef75(void);
extern "C" void LAB_1005f8c1(void);
extern "C" void LAB_1005fe93(void);
extern "C" void LAB_10060e56(void);
extern "C" void LAB_1006123e(void);
extern "C" void LAB_10061cc0(void);
extern "C" void LAB_10061cc5(void);
extern "C" void LAB_100627b5(void);
extern "C" void LAB_10062b9d(void);
extern "C" void LAB_10062ec7(void);
extern "C" void LAB_100638c7(void);
extern "C" void LAB_1006629d(void);
extern "C" void LAB_10069308(void);
extern "C" void LAB_1006b770(void);
extern "C" void LAB_1006bc52(void);
extern "C" void LAB_1006bc57(void);
extern "C" void LAB_1006c0a3(void);
extern "C" void LAB_1006c5f3(void);
extern "C" void LAB_1006d147(void);
extern "C" void LAB_1006d41c(void);
extern "C" void LAB_1006e8ee(void);
extern "C" void LAB_10071391(void);
extern "C" void LAB_100723c2(void);
extern "C" void LAB_10072e76(void);
extern "C" void LAB_10073ffb(void);
extern "C" void LAB_10074712(void);
extern "C" void LAB_100755db(void);
extern "C" void LAB_10075c89(void);
extern "C" void LAB_10077610(void);
extern "C" void LAB_1007bb66(void);
extern "C" void LAB_1007c87c(void);
extern "C" void LAB_1007d128(void);
extern "C" void LAB_1007dcef(void);
extern "C" void LAB_1007dfe7(void);
extern "C" void LAB_1007eef1(void);
extern "C" void LAB_10080724(void);
extern "C" void LAB_10080bf7(void);
extern "C" void LAB_10084e5f(void);
extern "C" void LAB_100885af(void);
extern "C" void LAB_100892a2(void);
extern "C" void LAB_10089342(void);
extern "C" void LAB_10089ee6(void);
extern "C" void LAB_1008a83c(void);
extern "C" void LAB_1008a9e5(void);
extern "C" void LAB_1008b8e0(void);
extern "C" void LAB_1008d9ec(void);
extern "C" void LAB_1008ebdf(void);
extern "C" void LAB_1008ec57(void);
extern "C" void LAB_1008ed7e(void);
extern "C" void LAB_1008fdeb(void);
extern "C" void LAB_100938c9(void);
extern "C" void LAB_10093ef5(void);
extern "C" void LAB_10094fa8(void);
extern "C" void LAB_100958e5(void);
extern "C" void LAB_10095abb(void);
extern "C" void LAB_10095c1e(void);
extern "C" void LAB_10095f9d(void);
extern "C" void LAB_100970eb(void);
extern "C" void LAB_10097442(void);
extern "C" void LAB_100976d6(void);
extern "C" void LAB_10098513(void);
extern "C" void LAB_10098b8a(void);
extern "C" void LAB_10099111(void);
extern "C" void LAB_10099e09(void);
extern "C" void LAB_1009aa43(void);
extern "C" void LAB_113ea210(void);
extern "C" void LAB_113ed30d(void);
extern "C" void LAB_113eddd8(void);
extern "C" void LAB_113edddc(void);
extern "C" void LAB_113ede48(void);
extern "C" void LAB_113ede4c(void);
extern "C" void LAB_113f0636(void);
extern "C" void LAB_113f063b(void);
extern "C" void LAB_113f064b(void);
extern "C" void LAB_113f065d(void);
extern "C" void LAB_113f0765(void);
extern "C" void LAB_113f0788(void);
extern "C" void LAB_113f078c(void);
extern "C" void LAB_113f1400(void);
extern "C" void LAB_113f1408(void);
extern "C" void LAB_113f1560(void);
extern "C" void LAB_113f28ae(void);
extern "C" void LAB_113f29a0(void);
extern "C" void LAB_113f2ad0(void);
extern "C" void LAB_113f3060(void);
extern "C" void LAB_113f437c(void);
extern "C" void LAB_113f4bac(void);
extern "C" void LAB_113f51b0(void);
extern "C" void LAB_113f5210(void);
extern "C" void LAB_113f5340(void);
extern "C" void LAB_113f5cf0(void);
extern "C" void LAB_113f6c4c(void);
extern "C" void LAB_113f75bc(void);
extern "C" void LAB_113f75d9(void);
extern "C" void LAB_113f817d(void);
extern "C" void LAB_113f8918(void);
extern "C" void LAB_113f8ab7(void);
extern "C" void LAB_113f8be7(void);
extern "C" void LAB_113f8bf7(void);
extern "C" void LAB_113f8dac(void);
extern "C" void LAB_113f8dae(void);
extern "C" void LAB_113f8ddb(void);
extern "C" void LAB_113f8dde(void);
extern "C" void LAB_113fef30(void);
extern "C" void LAB_11400900(void);
extern "C" void LAB_11400f82(void);
extern "C" void LAB_114012da(void);
extern "C" void LAB_114012df(void);
extern "C" void LAB_11404d71(void);
extern "C" void LAB_11405c60(void);
extern "C" void LAB_11405cc0(void);
extern "C" void LAB_11408886(void);
extern "C" void LAB_1140a911(void);
extern "C" void LAB_1140a930(void);
extern "C" void LAB_1140ab01(void);
extern "C" void LAB_1140ab20(void);
extern "C" void LAB_114134a0(void);
extern "C" void LAB_11413543(void);
extern "C" void LAB_11413567(void);
extern "C" void LAB_11418cc5(void);
extern "C" void LAB_11418d6e(void);
extern "C" void LAB_11418d8d(void);
extern "C" void LAB_1141d980(void);
extern "C" void LAB_11424480(void);
extern "C" void LAB_11424dd0(void);
extern "C" void LAB_1142bf40(void);
extern "C" void LAB_1142bfb0(void);
extern "C" void LAB_1142d8f0(void);
extern "C" void LAB_1142f960(void);
extern "C" void LAB_1142fd11(void);
extern "C" void LAB_1142fe10(void);
extern "C" void LAB_11430511(void);
extern "C" void LAB_114336c0(void);
extern "C" void LAB_11446cf0(void);
extern "C" void LAB_11446d82(void);
extern "C" void LAB_114472f0(void);
extern "C" void LAB_11447382(void);
extern "C" void LAB_1144cf23(void);
extern "C" void LAB_1144f270(void);
extern "C" void LAB_1144f605(void);
extern "C" void LAB_1144f8f8(void);
extern "C" void LAB_1145ea6c(void);
extern "C" void LAB_1145eb70(void);
extern "C" void LAB_1146074a(void);
extern "C" void LAB_11460780(void);
extern "C" void LAB_11465140(void);
extern "C" void LAB_11466840(void);
extern "C" void LAB_114672af(void);
extern "C" void LAB_114672b0(void);
extern "C" void LAB_11469411(void);
extern "C" void LAB_1146e46b(void);
extern "C" void LAB_11472102(void);
extern "C" void LAB_11477eef(void);
extern "C" void LAB_11477ef0(void);
extern "C" void LAB_114887d0(void);
extern "C" void LAB_11488850(void);
extern "C" void LAB_11488920(void);
extern "C" void LAB_11488970(void);
extern "C" void LAB_11488a02(void);
extern "C" void LAB_11488a50(void);
extern "C" void LAB_11488a90(void);
extern "C" void LAB_1148cde7(void);
extern "C" void LAB_1148cded(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_1148ce0b(void);
extern "C" void LAB_11881ac8(void);
extern "C" void LAB_11bfd8ac(void);
extern "C" void LAB_11bfd9b8(void);
extern "C" void LAB_11bfd9bc(void);
extern "C" void LAB_11bfd9f4(void);
extern "C" void LAB_11c04d50(void);
extern "C" void LAB_11c05fbc(void);
extern "C" void LAB_11c06310(void);
extern "C" void LAB_11c08410(void);
extern "C" void LAB_11d1af9c(void);
extern "C" void LAB_11d5af54(void);
extern "C" void LAB_11d637dc(void);
extern "C" void LAB_11d71130(void);
extern "C" void LAB_11d9a518(void);
extern "C" void LAB_11dc61c8(void);
extern "C" void LAB_11de021c(void);
extern "C" void LAB_11df5af0(void);
extern "C" void LAB_11e33954(void);
extern "C" void LAB_11f1ab14(void);
extern "C" void LAB_11f714d8(void);
extern "C" void LAB_11f71fb8(void);
extern "C" void LAB_11f722dc(void);
extern "C" void LAB_11fa4f30(void);
extern "C" void LAB_11fb1e64(void);
extern "C" void LAB_11ff81b0(void);
extern "C" void LAB_1202e7e0(void);
extern "C" void LAB_1203c220(void);
extern "C" void LAB_120413b8(void);
extern "C" void LAB_120430d8(void);
extern "C" void LAB_1205da44(void);
extern "C" void LAB_12119638(void);
extern "C" void LAB_12119648(void);
extern "C" void LAB_1211964c(void);
extern "C" void LAB_12126b50(void);
extern "C" void LAB_12126b54(void);
extern "C" void LAB_12126b84(void);
extern "C" void LAB_121a1348(void);
extern "C" void LAB_121a4ad8(void);
extern "C" void LAB_121a5238(void);
extern "C" void LAB_121a523c(void);
extern "C" void LAB_121a5240(void);
extern "C" void LAB_121a56a8(void);
extern "C" void LAB_121a56d0(void);
extern "C" void LAB_121a56fc(void);
extern "C" void LAB_121a6524(void);
extern "C" void LAB_121a652c(void);
extern "C" void LAB_121a7bb0(void);
extern "C" void LAB_121a7bb8(void);
extern "C" void LAB_121a7bc0(void);
extern "C" void LAB_122fa1d0(void);
extern "C" void LAB_122fa560(void);
extern "C" void LAB_122faa80(void);
extern "C" void LAB_122fb15c(void);
extern "C" void LAB_122fc1e8(void);
extern "C" void LAB_122fc7ac(void);
extern "C" void LAB_122fc7b0(void);
extern "C" void LAB_122fc7bc(void);
extern "C" void LAB_122fc888(void);
extern "C" void LAB_122fc914(void);
extern "C" void LAB_122fca5c(void);


extern int FUN_1001645f(...);
extern int FUN_1004068d(...);
extern int FUN_10044021(...);
extern int FUN_1004f60b(...);
extern int FUN_10069308(...);
extern int FUN_10080bf7(...);
extern int FUN_100892a2(...);
extern int FUN_1008ed7e(...);
extern int FUN_113ea210(...);
extern int FUN_113ed234(...);
extern int FUN_113ed24c(...);
extern int FUN_113ed253(...);
extern int FUN_113ed269(...);
extern int FUN_113ed289(...);
extern int FUN_113ed359(...);
extern int FUN_113ed37c(...);
extern int FUN_113ed3ba(...);
extern int FUN_113ed3c0(...);
extern int FUN_113ed3dd(...);
extern int FUN_113ed467(...);
extern int FUN_113ed470(...);
extern int FUN_113ed4d0(...);
extern int FUN_113ed57b(...);
extern int FUN_113ed5b5(...);
extern int FUN_113ed724(...);
extern int FUN_113ed754(...);
extern int FUN_113edc74(...);
extern int FUN_113edc7b(...);
extern int FUN_113edc87(...);
extern int FUN_113edd54(...);
extern int FUN_113edd66(...);
extern int FUN_113edd69(...);
extern int FUN_113edddb(...);
extern int FUN_113ede18(...);
extern int FUN_113ede1b(...);
extern int FUN_113ede4b(...);
extern int FUN_113ef785(...);
extern int FUN_113ef7b0(...);
extern int FUN_113ef7d5(...);
extern int FUN_113efedd(...);
extern int FUN_113efeed(...);
extern int FUN_113efef0(...);
extern int FUN_113eff0a(...);
extern int FUN_113f057f(...);
extern int FUN_113f0596(...);
extern int FUN_113f05ac(...);
extern int FUN_113f05bf(...);
extern int FUN_113f05cd(...);
extern int FUN_113f05d0(...);
extern int FUN_113f06b0(...);
extern int FUN_113f06df(...);
extern int FUN_113f0710(...);
extern int FUN_113f078b(...);
extern int FUN_113f08e5(...);
extern int FUN_113f08eb(...);
extern int FUN_113f09b6(...);
extern int FUN_113f09bc(...);
extern int FUN_113f09c1(...);
extern int FUN_113f09da(...);
extern int FUN_113f09dc(...);
extern int FUN_113f09e3(...);
extern int FUN_113f0a18(...);
extern int FUN_113f0a2e(...);
extern int FUN_113f0a59(...);
extern int FUN_113f0a6e(...);
extern int FUN_113f0ac4(...);
extern int FUN_113f12e2(...);
extern int FUN_113f12e4(...);
extern int FUN_113f12fb(...);
extern int FUN_113f1310(...);
extern int FUN_113f1354(...);
extern int FUN_113f1358(...);
extern int FUN_113f1407(...);
extern int FUN_113f1560(...);
extern int FUN_113f16b4(...);
extern int FUN_113f16bb(...);
extern int FUN_113f16c7(...);
extern int FUN_113f16e0(...);
extern int FUN_113f275e(...);
extern int FUN_113f2764(...);
extern int FUN_113f27a8(...);
extern int FUN_113f27fa(...);
extern int FUN_113f2810(...);
extern int FUN_113f2813(...);
extern int FUN_113f282d(...);
extern int FUN_113f2837(...);
extern int FUN_113f283c(...);
extern int FUN_113f283f(...);
extern int FUN_113f284d(...);
extern int FUN_113f290c(...);
extern int FUN_113f29a0(...);
extern int FUN_113f2a24(...);
extern int FUN_113f2a27(...);
extern int FUN_113f2a38(...);
extern int FUN_113f2a53(...);
extern int FUN_113f2a71(...);
extern int FUN_113f2ad0(...);
extern int FUN_113f2b5f(...);
extern int FUN_113f2bab(...);
extern int FUN_113f3060(...);
extern int FUN_113f384a(...);
extern int FUN_113f387a(...);
extern int FUN_113f42d3(...);
extern int FUN_113f42d6(...);
extern int FUN_113f4348(...);
extern int FUN_113f43ff(...);
extern int FUN_113f448e(...);
extern int FUN_113f44a3(...);
extern int FUN_113f44a8(...);
extern int FUN_113f4697(...);
extern int FUN_113f469a(...);
extern int FUN_113f46fe(...);
extern int FUN_113f470d(...);
extern int FUN_113f4ae0(...);
extern int FUN_113f4ae7(...);
extern int FUN_113f4af9(...);
extern int FUN_113f4b06(...);
extern int FUN_113f4b3e(...);
extern int FUN_113f4b65(...);
extern int FUN_113f4b78(...);
extern int FUN_113f4b88(...);
extern int FUN_113f4b99(...);
extern int FUN_113f4e96(...);
extern int FUN_113f4ea4(...);
extern int FUN_113f4ec7(...);
extern int FUN_113f5155(...);
extern int FUN_113f51b0(...);
extern int FUN_113f5210(...);
extern int FUN_113f52b8(...);
extern int FUN_113f52c4(...);
extern int FUN_113f52cc(...);
extern int FUN_113f52de(...);
extern int FUN_113f52e8(...);
extern int FUN_113f5340(...);
extern int FUN_113f5598(...);
extern int FUN_113f55b6(...);
extern int FUN_113f55c2(...);
extern int FUN_113f55c9(...);
extern int FUN_113f55d5(...);
extern int FUN_113f5656(...);
extern int FUN_113f5663(...);
extern int FUN_113f5cf0(...);
extern int FUN_113f5df7(...);
extern int FUN_113f5e01(...);
extern int FUN_113f5e07(...);
extern int FUN_113f5e13(...);
extern int FUN_113f5e44(...);
extern int FUN_113f5e94(...);
extern int FUN_113f5e9b(...);
extern int FUN_113f5ea7(...);
extern int FUN_113f5ec7(...);
extern int FUN_113f5ed1(...);
extern int FUN_113f5ed7(...);
extern int FUN_113f5ee3(...);
extern int FUN_113f5f19(...);
extern int FUN_113f5f1c(...);
extern int FUN_113f5f28(...);
extern int FUN_113f5f2a(...);
extern int FUN_113f6b24(...);
extern int FUN_113f6b27(...);
extern int FUN_113f6b2c(...);
extern int FUN_113f6b68(...);
extern int FUN_113f6b8f(...);
extern int FUN_113f6b92(...);
extern int FUN_113f6bae(...);
extern int FUN_113f6bba(...);
extern int FUN_113f6bdf(...);
extern int FUN_113f6be1(...);
extern int FUN_113f6bf6(...);
extern int FUN_113f6bff(...);
extern int FUN_113f6c02(...);
extern int FUN_113f6c0a(...);
extern int FUN_113f6c0d(...);
extern int FUN_113f6c10(...);
extern int FUN_113f6cc7(...);
extern int FUN_113f6cf7(...);
extern int FUN_113f6d27(...);
extern int FUN_113f6d58(...);
extern int FUN_113f6d64(...);
extern int FUN_113f6d87(...);
extern int FUN_113f6d9a(...);
extern int FUN_113f6e0e(...);
extern int FUN_113f6e81(...);
extern int FUN_113f74d6(...);
extern int FUN_113f7515(...);
extern int FUN_113f7522(...);
extern int FUN_113f7558(...);
extern int FUN_113f755d(...);
extern int FUN_113f7565(...);
extern int FUN_113f7575(...);
extern int FUN_113f7577(...);
extern int FUN_113f758b(...);
extern int FUN_113f7591(...);
extern int FUN_113f80ef(...);
extern int FUN_113f80f2(...);
extern int FUN_113f8127(...);
extern int FUN_113f8130(...);
extern int FUN_113f813a(...);
extern int FUN_113f8918(...);
extern int FUN_113f8939(...);
extern int FUN_113f893c(...);
extern int FUN_113f8946(...);
extern int FUN_113f8955(...);
extern int FUN_113f898e(...);
extern int FUN_113f8a20(...);
extern int FUN_113f8a29(...);
extern int FUN_113f8a37(...);
extern int FUN_113f8a47(...);
extern int FUN_113f8a6a(...);
extern int FUN_113f8a7a(...);
extern int FUN_113f8a7d(...);
extern int FUN_113f8a87(...);
extern int FUN_113f8b18(...);
extern int FUN_113f8b26(...);
extern int FUN_113f8b36(...);
extern int FUN_113f8b42(...);
extern int FUN_113f8b45(...);
extern int FUN_113f8b53(...);
extern int FUN_113f8b64(...);
extern int FUN_113f8b66(...);
extern int FUN_113f8c55(...);
extern int FUN_113f8c57(...);
extern int FUN_113f8c6f(...);
extern int FUN_113f8c8a(...);
extern int FUN_113f8c9a(...);
extern int FUN_113f8ce1(...);
extern int FUN_113f8cfd(...);
extern int FUN_113f8d2b(...);
extern int FUN_113f8d30(...);
extern int FUN_113f8d32(...);
extern int FUN_113f8d47(...);
extern int FUN_113f8d50(...);
extern int FUN_113f8d53(...);
extern int FUN_113f8d5b(...);
extern int FUN_113f8d5e(...);
extern int FUN_113f8d61(...);
extern int FUN_113f8dbf(...);
extern int FUN_113f8e96(...);
extern int FUN_113f8ea0(...);
extern int FUN_113f90d5(...);
extern int FUN_113f90df(...);
extern int FUN_113f9116(...);
extern int FUN_113f9120(...);
extern int FUN_113f974a(...);
extern int FUN_113f974d(...);
extern int FUN_113f975b(...);
extern int FUN_113f976a(...);
extern int FUN_113f976f(...);
extern int FUN_113f98e3(...);
extern int FUN_113f98eb(...);
extern int FUN_113f9910(...);
extern int FUN_113f9914(...);
extern int FUN_113f991c(...);
extern int FUN_113f9926(...);
extern int FUN_113f992c(...);
extern int FUN_113f9ae2(...);
extern int FUN_113f9b08(...);
extern int FUN_113f9b0d(...);
extern int FUN_113f9b1c(...);
extern int FUN_113f9b24(...);
extern int FUN_113f9b30(...);
extern int FUN_113f9b42(...);
extern int FUN_113fa486(...);
extern int FUN_113fa494(...);
extern int FUN_113fa4b7(...);
extern int FUN_113fdf24(...);
extern int FUN_113fdf8e(...);
extern int FUN_113feb72(...);
extern int FUN_113febd4(...);
extern int FUN_113febda(...);
extern int FUN_113febde(...);
extern int FUN_113fef30(...);
extern int FUN_113ff014(...);
extern int FUN_113ff01b(...);
extern int FUN_113ff027(...);
extern int FUN_113ff044(...);
extern int FUN_113ff04b(...);
extern int FUN_113ff057(...);
extern int FUN_11400824(...);
extern int FUN_114008ce(...);
extern int FUN_11400900(...);
extern int FUN_11400cb4(...);
extern int FUN_11400cbd(...);
extern int FUN_11400d36(...);
extern int FUN_11400d39(...);
extern int FUN_11400d79(...);
extern int FUN_11400d7c(...);
extern int FUN_11400db7(...);
extern int FUN_11400dbc(...);
extern int FUN_11400dc3(...);
extern int FUN_11400dcb(...);
extern int FUN_11400dd4(...);
extern int FUN_11400e68(...);
extern int FUN_11400e6b(...);
extern int FUN_11400e70(...);
extern int FUN_11400e7c(...);
extern int FUN_11400e81(...);
extern int FUN_11400e93(...);
extern int FUN_11400ebc(...);
extern int FUN_11400ec1(...);
extern int FUN_11400ef7(...);
extern int FUN_11400f00(...);
extern int FUN_11400f03(...);
extern int FUN_11400f29(...);
extern int FUN_11400f35(...);
extern int FUN_11400f3b(...);
extern int FUN_11400f4b(...);
extern int FUN_11400f57(...);
extern int FUN_11400f59(...);
extern int FUN_11401018(...);
extern int FUN_1140103f(...);
extern int FUN_1140104b(...);
extern int FUN_11401056(...);
extern int FUN_11401074(...);
extern int FUN_1140107a(...);
extern int FUN_1140108c(...);
extern int FUN_11401405(...);
extern int FUN_11401408(...);
extern int FUN_11401475(...);
extern int FUN_1140294c(...);
extern int FUN_1140295b(...);
extern int FUN_1140295d(...);
extern int FUN_11402965(...);
extern int FUN_1140296d(...);
extern int FUN_11402980(...);
extern int FUN_11402989(...);
extern int FUN_11402999(...);
extern int FUN_114029a5(...);
extern int FUN_11402bf4(...);
extern int FUN_11402bfc(...);
extern int FUN_11402c01(...);
extern int FUN_11402c1c(...);
extern int FUN_11402c53(...);
extern int FUN_11402c5b(...);
extern int FUN_11402cb1(...);
extern int FUN_114037f7(...);
extern int FUN_114037fa(...);
extern int FUN_11403810(...);
extern int FUN_11403813(...);
extern int FUN_1140383f(...);
extern int FUN_11404c94(...);
extern int FUN_11404c9c(...);
extern int FUN_11404cb1(...);
extern int FUN_11404ccc(...);
extern int FUN_11404cee(...);
extern int FUN_11404cfb(...);
extern int FUN_11404d09(...);
extern int FUN_11404d21(...);
extern int FUN_11404d39(...);
extern int FUN_11404ddc(...);
extern int FUN_11404de3(...);
extern int FUN_11404dea(...);
extern int FUN_11404e00(...);
extern int FUN_11404e07(...);
extern int FUN_11404e1b(...);
extern int FUN_11404e38(...);
extern int FUN_11404e52(...);
extern int FUN_11404e5a(...);
extern int FUN_114058a2(...);
extern int FUN_114058b7(...);
extern int FUN_114058bd(...);
extern int FUN_114058c3(...);
extern int FUN_114058d5(...);
extern int FUN_114058df(...);
extern int FUN_11405920(...);
extern int FUN_11405964(...);
extern int FUN_1140596c(...);
extern int FUN_11405992(...);
extern int FUN_11405999(...);
extern int FUN_11405a45(...);
extern int FUN_11405a6e(...);
extern int FUN_11405a74(...);
extern int FUN_11405a7a(...);
extern int FUN_11405c60(...);
extern int FUN_11405cc0(...);
extern int FUN_114087b2(...);
extern int FUN_114087c6(...);
extern int FUN_114087cd(...);
extern int FUN_114087e7(...);
extern int FUN_114087ef(...);
extern int FUN_11408803(...);
extern int FUN_11408810(...);
extern int FUN_11408839(...);
extern int FUN_11408847(...);
extern int FUN_11408866(...);
extern int FUN_11408c5b(...);
extern int FUN_11408c5e(...);
extern int FUN_1140a179(...);
extern int FUN_1140a180(...);
extern int FUN_1140a185(...);
extern int FUN_1140a7c5(...);
extern int FUN_1140a7c9(...);
extern int FUN_1140a9cb(...);
extern int FUN_1140a9f7(...);
extern int FUN_1140a9fb(...);
extern int FUN_1140ad38(...);
extern int FUN_1140ad3f(...);
extern int FUN_1140adf8(...);
extern int FUN_1140bd54(...);
extern int FUN_1140be1e(...);
extern int FUN_1140be56(...);
extern int FUN_1140be5d(...);
extern int FUN_11411a48(...);
extern int FUN_11411aa6(...);
extern int FUN_11411aa8(...);
extern int FUN_11411aaf(...);
extern int FUN_11411aeb(...);
extern int FUN_11411aee(...);
extern int FUN_11411b37(...);
extern int FUN_11411b3a(...);
extern int FUN_11411b96(...);
extern int FUN_11411c15(...);
extern int FUN_11411c17(...);
extern int FUN_11411c1c(...);
extern int FUN_11411c55(...);
extern int FUN_11411c94(...);
extern int FUN_11412654(...);
extern int FUN_1141265d(...);
extern int FUN_11412662(...);
extern int FUN_114131fb(...);
extern int FUN_11413231(...);
extern int FUN_1141324a(...);
extern int FUN_11413256(...);
extern int FUN_114132b1(...);
extern int FUN_114132ca(...);
extern int FUN_114132d6(...);
extern int FUN_11413331(...);
extern int FUN_1141334a(...);
extern int FUN_11413356(...);
extern int FUN_114133bb(...);
extern int FUN_11413412(...);
extern int FUN_11413419(...);
extern int FUN_11413421(...);
extern int FUN_11413444(...);
extern int FUN_1141348e(...);
extern int FUN_114134ae(...);
extern int FUN_114134d7(...);
extern int FUN_1141350d(...);
extern int FUN_11413532(...);
extern int FUN_11413533(...);
extern int FUN_1141353d(...);
extern int FUN_11418648(...);
extern int FUN_11418659(...);
extern int FUN_11418676(...);
extern int FUN_1141868f(...);
extern int FUN_11418cb2(...);
extern int FUN_11418cc1(...);
extern int FUN_11418cc6(...);
extern int FUN_11418ccc(...);
extern int FUN_11418cd8(...);
extern int FUN_11418cde(...);
extern int FUN_11418d15(...);
extern int FUN_11418d23(...);
extern int FUN_11418d81(...);
extern int FUN_11418e34(...);
extern int FUN_1141936b(...);
extern int FUN_114193a1(...);
extern int FUN_114193ba(...);
extern int FUN_114193c6(...);
extern int FUN_11419451(...);
extern int FUN_1141946a(...);
extern int FUN_11419476(...);
extern int FUN_1141eb6c(...);
extern int FUN_1141eb7d(...);
extern int FUN_1141eb97(...);
extern int FUN_1141eb9d(...);
extern int FUN_1141ebc0(...);
extern int FUN_1141f006(...);
extern int FUN_1141f036(...);
extern int FUN_1141f040(...);
extern int FUN_1141f435(...);
extern int FUN_1141f465(...);
extern int FUN_1141f495(...);
extern int FUN_11422119(...);
extern int FUN_11422120(...);
extern int FUN_11422125(...);
extern int FUN_11424480(...);
extern int FUN_1142499b(...);
extern int FUN_1142499f(...);
extern int FUN_114249c9(...);
extern int FUN_114249d7(...);
extern int FUN_114249e7(...);
extern int FUN_11424a5d(...);
extern int FUN_11424ba9(...);
extern int FUN_11424baf(...);
extern int FUN_11424bcf(...);
extern int FUN_11424dd0(...);
extern int FUN_11425c76(...);
extern int FUN_11426135(...);
extern int FUN_11426146(...);
extern int FUN_1142618b(...);
extern int FUN_11426d69(...);
extern int FUN_114272c4(...);
extern int FUN_1142a003(...);
extern int FUN_1142a103(...);
extern int FUN_1142a109(...);
extern int FUN_1142a11e(...);
extern int FUN_1142a278(...);
extern int FUN_1142a2dd(...);
extern int FUN_1142a524(...);
extern int FUN_1142a5a9(...);
extern int FUN_1142a77d(...);
extern int FUN_1142a8ad(...);
extern int FUN_1142ab7d(...);
extern int FUN_1142b284(...);
extern int FUN_1142b3cb(...);
extern int FUN_1142b3e0(...);
extern int FUN_1142b407(...);
extern int FUN_1142b40f(...);
extern int FUN_1142b418(...);
extern int FUN_1142b41d(...);
extern int FUN_1142b423(...);
extern int FUN_1142bf40(...);
extern int FUN_1142bfb0(...);
extern int FUN_1142c192(...);
extern int FUN_1142c19e(...);
extern int FUN_1142d8f0(...);
extern int FUN_1142e094(...);
extern int FUN_1142e4d4(...);
extern int FUN_1142f960(...);
extern int FUN_1142fc75(...);
extern int FUN_1142fc78(...);
extern int FUN_1142fc82(...);
extern int FUN_1142fd1a(...);
extern int FUN_1142fd3c(...);
extern int FUN_1142fd45(...);
extern int FUN_1142fd4d(...);
extern int FUN_1142fd6c(...);
extern int FUN_1142fd8d(...);
extern int FUN_1142fd99(...);
extern int FUN_1142fda3(...);
extern int FUN_1142fe10(...);
extern int FUN_1143040f(...);
extern int FUN_1143042b(...);
extern int FUN_114304a1(...);
extern int FUN_114321fa(...);
extern int FUN_114321fd(...);
extern int FUN_11432204(...);
extern int FUN_11432209(...);
extern int FUN_11432210(...);
extern int FUN_11432217(...);
extern int FUN_1143224b(...);
extern int FUN_114322ce(...);
extern int FUN_11432484(...);
extern int FUN_1143351b(...);
extern int FUN_1143352b(...);
extern int FUN_11433565(...);
extern int FUN_11433571(...);
extern int FUN_11433577(...);
extern int FUN_11433578(...);
extern int FUN_11433580(...);
extern int FUN_114335a3(...);
extern int FUN_114335b2(...);
extern int FUN_114335d0(...);
extern int FUN_114335e0(...);
extern int FUN_11433645(...);
extern int FUN_114336c0(...);
extern int FUN_11433735(...);
extern int FUN_114337a5(...);
extern int FUN_1143381b(...);
extern int FUN_1143381e(...);
extern int FUN_11433822(...);
extern int FUN_1143382f(...);
extern int FUN_11433935(...);
extern int FUN_114339be(...);
extern int FUN_114339dc(...);
extern int FUN_11433ca4(...);
extern int FUN_11434496(...);
extern int FUN_114344a2(...);
extern int FUN_11434742(...);
extern int FUN_1143474c(...);
extern int FUN_11434880(...);
extern int FUN_11434885(...);
extern int FUN_1143488d(...);
extern int FUN_114348a1(...);
extern int FUN_114348bd(...);
extern int FUN_114348de(...);
extern int FUN_114348e8(...);
extern int FUN_11434948(...);
extern int FUN_11434951(...);
extern int FUN_11434959(...);
extern int FUN_11434970(...);
extern int FUN_1143497a(...);
extern int FUN_11434a08(...);
extern int FUN_11434a0e(...);
extern int FUN_11434a18(...);
extern int FUN_114356bb(...);
extern int FUN_114356f1(...);
extern int FUN_1143570a(...);
extern int FUN_11435716(...);
extern int FUN_114357a1(...);
extern int FUN_114357ba(...);
extern int FUN_114357c6(...);
extern int FUN_1143582b(...);
extern int FUN_11437163(...);
extern int FUN_1143716c(...);
extern int FUN_11437179(...);
extern int FUN_1143717f(...);
extern int FUN_1143718d(...);
extern int FUN_114371c4(...);
extern int FUN_114371c9(...);
extern int FUN_114371cc(...);
extern int FUN_11437213(...);
extern int FUN_1143721c(...);
extern int FUN_11437229(...);
extern int FUN_1143722f(...);
extern int FUN_1143723d(...);
extern int FUN_11437274(...);
extern int FUN_11437279(...);
extern int FUN_1143727c(...);
extern int FUN_114372c3(...);
extern int FUN_114372cc(...);
extern int FUN_114372d9(...);
extern int FUN_114372df(...);
extern int FUN_114372ed(...);
extern int FUN_11437324(...);
extern int FUN_11437329(...);
extern int FUN_1143732c(...);
extern int FUN_11437373(...);
extern int FUN_1143737c(...);
extern int FUN_11437389(...);
extern int FUN_1143738f(...);
extern int FUN_1143739d(...);
extern int FUN_114373d4(...);
extern int FUN_114373d9(...);
extern int FUN_114373dc(...);
extern int FUN_11437423(...);
extern int FUN_1143742c(...);
extern int FUN_11437439(...);
extern int FUN_1143743f(...);
extern int FUN_1143744d(...);
extern int FUN_11437484(...);
extern int FUN_11437489(...);
extern int FUN_1143748c(...);
extern int FUN_114374d3(...);
extern int FUN_114374dc(...);
extern int FUN_114374e9(...);
extern int FUN_114374ef(...);
extern int FUN_114374fd(...);
extern int FUN_11437534(...);
extern int FUN_11437539(...);
extern int FUN_1143753c(...);
extern int FUN_11437583(...);
extern int FUN_1143758c(...);
extern int FUN_11437599(...);
extern int FUN_1143759f(...);
extern int FUN_114375ad(...);
extern int FUN_114375e4(...);
extern int FUN_114375e9(...);
extern int FUN_114375ec(...);
extern int FUN_114376b3(...);
extern int FUN_114376bc(...);
extern int FUN_114376c9(...);
extern int FUN_114376cf(...);
extern int FUN_114376dd(...);
extern int FUN_11437714(...);
extern int FUN_11437719(...);
extern int FUN_1143771c(...);
extern int FUN_11437763(...);
extern int FUN_1143776c(...);
extern int FUN_11437779(...);
extern int FUN_1143777f(...);
extern int FUN_1143778d(...);
extern int FUN_114377c4(...);
extern int FUN_114377c9(...);
extern int FUN_114377cc(...);
extern int FUN_11437963(...);
extern int FUN_1143796c(...);
extern int FUN_11437979(...);
extern int FUN_1143797f(...);
extern int FUN_1143798d(...);
extern int FUN_114379c4(...);
extern int FUN_114379c9(...);
extern int FUN_114379cc(...);
extern int FUN_11437a13(...);
extern int FUN_11437a1c(...);
extern int FUN_11437a29(...);
extern int FUN_11437a2f(...);
extern int FUN_11437a3d(...);
extern int FUN_11437a74(...);
extern int FUN_11437a79(...);
extern int FUN_11437a7c(...);
extern int FUN_11438735(...);
extern int FUN_11438744(...);
extern int FUN_1143874a(...);
extern int FUN_11438756(...);
extern int FUN_11438795(...);
extern int FUN_114387a3(...);
extern int FUN_114387b0(...);
extern int FUN_114387fb(...);
extern int FUN_114387fc(...);
extern int FUN_11438803(...);
extern int FUN_11439d23(...);
extern int FUN_11439d28(...);
extern int FUN_11439d44(...);
extern int FUN_11439d55(...);
extern int FUN_11439d5f(...);
extern int FUN_11439d61(...);
extern int FUN_11439d68(...);
extern int FUN_11439d6b(...);
extern int FUN_11439d73(...);
extern int FUN_11439d83(...);
extern int FUN_11439d90(...);
extern int FUN_11439d95(...);
extern int FUN_11439da0(...);
extern int FUN_11439da6(...);
extern int FUN_11439dbe(...);
extern int FUN_11439dc0(...);
extern int FUN_1143aa85(...);
extern int FUN_1143aaa4(...);
extern int FUN_1143aad4(...);
extern int FUN_1143aadd(...);
extern int FUN_1143ab05(...);
extern int FUN_1143ab19(...);
extern int FUN_1143ab33(...);
extern int FUN_1143ab3f(...);
extern int FUN_1143c995(...);
extern int FUN_1143c9b0(...);
extern int FUN_1143c9d0(...);
extern int FUN_1143e5e8(...);
extern int FUN_1143e5eb(...);
extern int FUN_1143e603(...);
extern int FUN_1143e613(...);
extern int FUN_1143e622(...);
extern int FUN_1143e632(...);
extern int FUN_1143e63c(...);
extern int FUN_1143e692(...);
extern int FUN_11440156(...);
extern int FUN_1144015f(...);
extern int FUN_1144016d(...);
extern int FUN_1144016e(...);
extern int FUN_11440178(...);
extern int FUN_1144017a(...);
extern int FUN_1144018d(...);
extern int FUN_11440199(...);
extern int FUN_1144024e(...);
extern int FUN_1144027e(...);
extern int FUN_114402d5(...);
extern int FUN_11440305(...);
extern int FUN_11440566(...);
extern int FUN_1144056a(...);
extern int FUN_11440578(...);
extern int FUN_11440593(...);
extern int FUN_114405c5(...);
extern int FUN_114405c9(...);
extern int FUN_11440625(...);
extern int FUN_11440685(...);
extern int FUN_11440689(...);
extern int FUN_11440758(...);
extern int FUN_1144077c(...);
extern int FUN_114407e7(...);
extern int FUN_114408db(...);
extern int FUN_11442c05(...);
extern int FUN_11442c07(...);
extern int FUN_11442c0d(...);
extern int FUN_11442c13(...);
extern int FUN_11442c1c(...);
extern int FUN_11442c21(...);
extern int FUN_11442c25(...);
extern int FUN_11442c27(...);
extern int FUN_11442c2c(...);
extern int FUN_11442c30(...);
extern int FUN_11442c32(...);
extern int FUN_11442c37(...);
extern int FUN_11442c3b(...);
extern int FUN_11442c3e(...);
extern int FUN_11444122(...);
extern int FUN_11444124(...);
extern int FUN_11444131(...);
extern int FUN_11444133(...);
extern int FUN_11444147(...);
extern int FUN_11444149(...);
extern int FUN_11444156(...);
extern int FUN_11444167(...);
extern int FUN_11446900(...);
extern int FUN_11446cff(...);
extern int FUN_11446d08(...);
extern int FUN_11446d12(...);
extern int FUN_11446d17(...);
extern int FUN_11446d24(...);
extern int FUN_11446d36(...);
extern int FUN_11446d39(...);
extern int FUN_11446d3d(...);
extern int FUN_11446d3f(...);
extern int FUN_11446d4d(...);
extern int FUN_11446d62(...);
extern int FUN_11446d69(...);
extern int FUN_11446d78(...);
extern int FUN_11446e9b(...);
extern int FUN_11446ed1(...);
extern int FUN_11446eea(...);
extern int FUN_11446ef6(...);
extern int FUN_11446f51(...);
extern int FUN_11446f6a(...);
extern int FUN_11446f76(...);
extern int FUN_11446fdb(...);
extern int FUN_114472ff(...);
extern int FUN_11447308(...);
extern int FUN_11447312(...);
extern int FUN_11447317(...);
extern int FUN_11447324(...);
extern int FUN_11447336(...);
extern int FUN_1144733d(...);
extern int FUN_1144733f(...);
extern int FUN_1144734d(...);
extern int FUN_11447362(...);
extern int FUN_11447369(...);
extern int FUN_11447378(...);
extern int FUN_1144abcf(...);
extern int FUN_1144abd4(...);
extern int FUN_1144abdf(...);
extern int FUN_1144abe8(...);
extern int FUN_1144ac16(...);
extern int FUN_1144ac1c(...);
extern int FUN_1144ac33(...);
extern int FUN_1144ac39(...);
extern int FUN_1144ac55(...);
extern int FUN_1144ce18(...);
extern int FUN_1144ce1d(...);
extern int FUN_1144ce46(...);
extern int FUN_1144ce49(...);
extern int FUN_1144ce4c(...);
extern int FUN_1144ce50(...);
extern int FUN_1144ce54(...);
extern int FUN_1144ce6b(...);
extern int FUN_1144ce6d(...);
extern int FUN_1144ce70(...);
extern int FUN_1144ce94(...);
extern int FUN_1144cecb(...);
extern int FUN_1144ced0(...);
extern int FUN_1144cedf(...);
extern int FUN_1144ceef(...);
extern int FUN_1144cef5(...);
extern int FUN_1144cef9(...);
extern int FUN_1144cf01(...);
extern int FUN_1144dae2(...);
extern int FUN_1144e5e7(...);
extern int FUN_1144e5ec(...);
extern int FUN_1144e5f5(...);
extern int FUN_1144e610(...);
extern int FUN_1144e614(...);
extern int FUN_1144e61e(...);
extern int FUN_1144f270(...);
extern int FUN_1144f532(...);
extern int FUN_1144f559(...);
extern int FUN_1144f578(...);
extern int FUN_1144f59e(...);
extern int FUN_1144f809(...);
extern int FUN_1144f840(...);
extern int FUN_1144f863(...);
extern int FUN_1144f86c(...);
extern int FUN_1144f873(...);
extern int FUN_1144f878(...);
extern int FUN_1144f884(...);
extern int FUN_1144fd96(...);
extern int FUN_1144fda2(...);
extern int FUN_1144fda5(...);
extern int FUN_1144fdb0(...);
extern int FUN_11450990(...);
extern int FUN_1145099b(...);
extern int FUN_114509fb(...);
extern int FUN_11450a02(...);
extern int FUN_11451f8a(...);
extern int FUN_11452945(...);
extern int FUN_11452964(...);
extern int FUN_11454474(...);
extern int FUN_1145b227(...);
extern int FUN_1145b238(...);
extern int FUN_1145b240(...);
extern int FUN_1145b24e(...);
extern int FUN_1145b262(...);
extern int FUN_1145d714(...);
extern int FUN_1145eb70(...);
extern int FUN_1145f290(...);
extern int FUN_1145f29d(...);
extern int FUN_1145f2b7(...);
extern int FUN_114606c6(...);
extern int FUN_114606fe(...);
extern int FUN_11460780(...);
extern int FUN_11465140(...);
extern int FUN_114655d1(...);
extern int FUN_114655e8(...);
extern int FUN_114655fd(...);
extern int FUN_114666e1(...);
extern int FUN_11466840(...);
extern int FUN_114671e4(...);
extern int FUN_114671f0(...);
extern int FUN_114671f2(...);
extern int FUN_114671fc(...);
extern int FUN_1146721e(...);
extern int FUN_11467221(...);
extern int FUN_11467224(...);
extern int FUN_11467227(...);
extern int FUN_1146723a(...);
extern int FUN_11467257(...);
extern int FUN_11467264(...);
extern int FUN_11467268(...);
extern int FUN_11467272(...);
extern int FUN_11467274(...);
extern int FUN_11467279(...);
extern int FUN_1146727d(...);
extern int FUN_11467282(...);
extern int FUN_1146728d(...);
extern int FUN_11467294(...);
extern int FUN_1146730d(...);
extern int FUN_114677b5(...);
extern int FUN_114677be(...);
extern int FUN_1146a4ca(...);
extern int FUN_1146a4cc(...);
extern int FUN_1146a4e7(...);
extern int FUN_1146a4fc(...);
extern int FUN_1146a511(...);
extern int FUN_1146a523(...);
extern int FUN_1146a54f(...);
extern int FUN_1146a8db(...);
extern int FUN_1146a8e7(...);
extern int FUN_1146a8fd(...);
extern int FUN_1146a913(...);
extern int FUN_1146a929(...);
extern int FUN_1146a93f(...);
extern int FUN_1146a957(...);
extern int FUN_1146a959(...);
extern int FUN_1146a978(...);
extern int FUN_1146a988(...);
extern int FUN_1146a98a(...);
extern int FUN_1146a9c0(...);
extern int FUN_1146a9cc(...);
extern int FUN_1146a9e2(...);
extern int FUN_1146a9f3(...);
extern int FUN_1146cde5(...);
extern int FUN_1146cdf2(...);
extern int FUN_1146cdf5(...);
extern int FUN_1146cdf9(...);
extern int FUN_1146ce05(...);
extern int FUN_1146ce0f(...);
extern int FUN_1146ce1c(...);
extern int FUN_1146e3aa(...);
extern int FUN_1146e3ad(...);
extern int FUN_1146e3b9(...);
extern int FUN_1146e3c1(...);
extern int FUN_1146e3f0(...);
extern int FUN_1146e3fa(...);
extern int FUN_1146e408(...);
extern int FUN_1146e43f(...);
extern int FUN_1146e440(...);
extern int FUN_1146e444(...);
extern int FUN_1146e447(...);
extern int FUN_1146e449(...);
extern int FUN_1146e44d(...);
extern int FUN_1146ea25(...);
extern int FUN_1146ea31(...);
extern int FUN_1146ea38(...);
extern int FUN_1146ea3a(...);
extern int FUN_1146ea3f(...);
extern int FUN_1146ea41(...);
extern int FUN_1146ea54(...);
extern int FUN_1146ea61(...);
extern int FUN_1146fa05(...);
extern int FUN_1146fa08(...);
extern int FUN_1146fa11(...);
extern int FUN_1146fa1d(...);
extern int FUN_1146fa20(...);
extern int FUN_1146fa2f(...);
extern int FUN_1146fa31(...);
extern int FUN_1146fa34(...);
extern int FUN_1146fa37(...);
extern int FUN_1146fa48(...);
extern int FUN_1146fa56(...);
extern int FUN_1146fa7d(...);
extern int FUN_1146fa80(...);
extern int FUN_1146fa86(...);
extern int FUN_11470ad5(...);
extern int FUN_11470ae0(...);
extern int FUN_11470ae3(...);
extern int FUN_11470aea(...);
extern int FUN_11470af0(...);
extern int FUN_11470af6(...);
extern int FUN_11470b14(...);
extern int FUN_11470b21(...);
extern int FUN_11470fb2(...);
extern int FUN_11472034(...);
extern int FUN_1147203d(...);
extern int FUN_11472042(...);
extern int FUN_11472049(...);
extern int FUN_1147205b(...);
extern int FUN_11472066(...);
extern int FUN_1147207f(...);
extern int FUN_11472086(...);
extern int FUN_1147208e(...);
extern int FUN_1147209a(...);
extern int FUN_114720d2(...);
extern int FUN_114720e8(...);
extern int FUN_114720ed(...);
extern int FUN_114723a8(...);
extern int FUN_11473e08(...);
extern int FUN_11477e24(...);
extern int FUN_11477e30(...);
extern int FUN_11477e32(...);
extern int FUN_11477e3c(...);
extern int FUN_11477e5e(...);
extern int FUN_11477e61(...);
extern int FUN_11477e64(...);
extern int FUN_11477e67(...);
extern int FUN_11477e7a(...);
extern int FUN_11477e97(...);
extern int FUN_11477ea4(...);
extern int FUN_11477ea8(...);
extern int FUN_11477eb2(...);
extern int FUN_11477eb4(...);
extern int FUN_11477eb9(...);
extern int FUN_11477ebd(...);
extern int FUN_11477ec2(...);
extern int FUN_11477ecd(...);
extern int FUN_11477ed4(...);
extern int FUN_11479487(...);
extern int FUN_11479493(...);
extern int FUN_114794a9(...);
extern int FUN_114794b5(...);
extern int FUN_114794c1(...);
extern int FUN_114794e6(...);
extern int FUN_1147ca1a(...);
extern int FUN_1147ca27(...);
extern int FUN_1147ca30(...);
extern int FUN_1147ca39(...);
extern int FUN_1147ca40(...);
extern int FUN_1147ca70(...);
extern int FUN_1147ca77(...);
extern int FUN_1147cc3f(...);
extern int FUN_1147cc61(...);
extern int FUN_1147cc64(...);
extern int FUN_11480aa2(...);
extern int FUN_11480aaa(...);
extern int FUN_11480aab(...);
extern int FUN_11480ab8(...);
extern int FUN_114842d5(...);
extern int FUN_114842d8(...);
extern int FUN_114842dc(...);
extern int FUN_114842ea(...);
extern int FUN_114842f1(...);
extern int FUN_1148813d(...);
extern int FUN_114887e1(...);
extern int FUN_114887e4(...);
extern int FUN_114887e7(...);
extern int FUN_114887f0(...);
extern int FUN_114887f6(...);
extern int FUN_114887f9(...);
extern int FUN_1148880c(...);
extern int FUN_11488810(...);
extern int FUN_11488814(...);
extern int FUN_11488817(...);
extern int FUN_11488821(...);
extern int FUN_11488850(...);
extern int FUN_11488939(...);
extern int FUN_1148893c(...);
extern int FUN_11488941(...);
extern int FUN_11488945(...);
extern int FUN_11488946(...);
extern int FUN_1148894d(...);
extern int FUN_11488952(...);
extern int FUN_1148896d(...);
extern int FUN_11488970(...);
extern int FUN_11488973(...);
extern int FUN_11488977(...);
extern int FUN_11488984(...);
extern int FUN_11488990(...);
extern int FUN_114889a3(...);
extern int FUN_114889ae(...);
extern int FUN_114889b1(...);
extern int FUN_114889dc(...);
extern int FUN_114889e8(...);
extern int FUN_114889eb(...);
extern int FUN_11488a5a(...);
extern int FUN_11488a64(...);
extern int FUN_11488a6e(...);
extern int FUN_11488a76(...);
extern int FUN_11488a90(...);
extern int FUN_11489834(...);
extern int FUN_11489840(...);
extern int FUN_1148984a(...);
extern int FUN_11489850(...);
extern int FUN_1148985e(...);
extern int FUN_11489860(...);
extern int FUN_11489866(...);
extern int FUN_1148987d(...);
extern int FUN_11489885(...);
extern int FUN_114898a5(...);
extern int FUN_114898a7(...);
extern int FUN_114898ad(...);
extern int FUN_117f6ebb(...);
extern int FUN_117f6ee4(...);
extern int FUN_11831537(...);
extern int FUN_11840f8a(...);
extern __declspec(dllimport) int __CxxFrameHandler3(...);
extern __declspec(dllimport) int abort(...);
extern int llvm_bswap_i16(...);
extern int llvm_bswap_i32(...);
extern __declspec(dllimport) int memmove(...);
extern int thunk_FUN_10264380(...);
extern int thunk_FUN_103f6950(...);
extern int thunk_FUN_108288d0(...);
extern int thunk_FUN_10af43b0(...);
extern int thunk_FUN_10c5e210(...);
extern int thunk_FUN_11098770(...);
extern int thunk_FUN_111ac070(...);
extern int thunk_FUN_113b9f60(...);
extern int thunk_FUN_113c4010(...);
extern int thunk_FUN_113c7de0(...);
extern int thunk_FUN_113da210(...);
extern int thunk_FUN_113da960(...);
extern int thunk_FUN_113db800(...);
extern int thunk_FUN_113db910(...);
extern int thunk_FUN_113dbe10(...);
extern int thunk_FUN_113dc3c0(...);
extern int thunk_FUN_113dc610(...);
extern int thunk_FUN_113dde70(...);
extern int thunk_FUN_113de340(...);
extern int thunk_FUN_113dea50(...);
extern int thunk_FUN_113df6a0(...);
extern int thunk_FUN_113df720(...);
extern int thunk_FUN_113dfb10(...);
extern int thunk_FUN_113dff50(...);
extern int thunk_FUN_113e4860(...);
extern int thunk_FUN_113e50f0(...);
extern int thunk_FUN_113e56d0(...);
extern int thunk_FUN_113e5b80(...);
extern int thunk_FUN_113e5e30(...);
extern int thunk_FUN_113e5f20(...);
extern int thunk_FUN_113e5f90(...);
extern int thunk_FUN_113e5fb0(...);
extern int thunk_FUN_113e6480(...);
extern int thunk_FUN_113e6ac0(...);
extern int thunk_FUN_113e9f00(...);
extern int thunk_FUN_113fbdf0(...);
extern int thunk_FUN_113fbfe0(...);
extern int thunk_FUN_113fc110(...);
extern int thunk_FUN_113fc210(...);
extern int thunk_FUN_113fc330(...);
extern int thunk_FUN_113fd220(...);
extern int thunk_FUN_113fdba0(...);
extern int thunk_FUN_113ff070(...);
extern int thunk_FUN_113ff170(...);
extern int thunk_FUN_113ff370(...);
extern int thunk_FUN_113ff3f0(...);
extern int thunk_FUN_113ff5d0(...);
extern int thunk_FUN_113ff630(...);
extern int thunk_FUN_113ffdd0(...);
extern int thunk_FUN_11400010(...);
extern int thunk_FUN_11400690(...);
extern int thunk_FUN_11400740(...);
extern int thunk_FUN_11401620(...);
extern int thunk_FUN_11407190(...);
extern int thunk_FUN_11407360(...);
extern int thunk_FUN_11409600(...);
extern int thunk_FUN_11409660(...);
extern int thunk_FUN_11409bb0(...);
extern int thunk_FUN_1140b1f0(...);
extern int thunk_FUN_1140c460(...);
extern int thunk_FUN_1140c500(...);
extern int thunk_FUN_1140c520(...);
extern int thunk_FUN_1140c630(...);
extern int thunk_FUN_1140c750(...);
extern int thunk_FUN_1140c8e0(...);
extern int thunk_FUN_1140d570(...);
extern int thunk_FUN_11412800(...);
extern int thunk_FUN_11412b80(...);
extern int thunk_FUN_11412bf0(...);
extern int thunk_FUN_11413aa0(...);
extern int thunk_FUN_11413ac0(...);
extern int thunk_FUN_11413b90(...);
extern int thunk_FUN_11413bf0(...);
extern int thunk_FUN_11413e90(...);
extern int thunk_FUN_11414c10(...);
extern int thunk_FUN_11414d70(...);
extern int thunk_FUN_114156d0(...);
extern int thunk_FUN_114157a0(...);
extern int thunk_FUN_11416350(...);
extern int thunk_FUN_11416420(...);
extern int thunk_FUN_114168b0(...);
extern int thunk_FUN_11417640(...);
extern int thunk_FUN_11417820(...);
extern int thunk_FUN_11417930(...);
extern int thunk_FUN_11417b50(...);
extern int thunk_FUN_1141a490(...);
extern int thunk_FUN_1141a680(...);
extern int thunk_FUN_1141abb0(...);
extern int thunk_FUN_1141ace0(...);
extern int thunk_FUN_1141af70(...);
extern int thunk_FUN_1141b160(...);
extern int thunk_FUN_11420a70(...);
extern int thunk_FUN_11423e60(...);
extern int thunk_FUN_11423ed0(...);
extern int thunk_FUN_11423f00(...);
extern int thunk_FUN_11424fd0(...);
extern int thunk_FUN_11425390(...);
extern int thunk_FUN_11425430(...);
extern int thunk_FUN_11425480(...);
extern int thunk_FUN_11425630(...);
extern int thunk_FUN_11425660(...);
extern int thunk_FUN_11425770(...);
extern int thunk_FUN_11425860(...);
extern int thunk_FUN_114262c0(...);
extern int thunk_FUN_1142c330(...);
extern int thunk_FUN_1142ddf0(...);
extern int thunk_FUN_1142ea40(...);
extern int thunk_FUN_11433a20(...);
extern int thunk_FUN_114351b0(...);
extern int thunk_FUN_1143e370(...);
extern int thunk_FUN_1143e4d0(...);
extern int thunk_FUN_1143e710(...);
extern int thunk_FUN_1143e810(...);
extern int thunk_FUN_1143ea00(...);
extern int thunk_FUN_1143ea90(...);
extern int thunk_FUN_1143f0b0(...);
extern int thunk_FUN_1143f0f0(...);
extern int thunk_FUN_1143f360(...);
extern int thunk_FUN_1143fce0(...);
extern int thunk_FUN_1143fd40(...);
extern int thunk_FUN_1143fdc0(...);
extern int thunk_FUN_11440430(...);
extern int thunk_FUN_114404f0(...);
extern int thunk_FUN_11442ee0(...);
extern int thunk_FUN_11442fd0(...);
extern int thunk_FUN_114437c0(...);
extern int thunk_FUN_11443880(...);
extern int thunk_FUN_11443aa0(...);
extern int thunk_FUN_114446b0(...);
extern int thunk_FUN_11444780(...);
extern int thunk_FUN_11444db0(...);
extern int thunk_FUN_11445ca0(...);
extern int thunk_FUN_11445e20(...);
extern int thunk_FUN_11445f50(...);
extern int thunk_FUN_1144c070(...);
extern int thunk_FUN_1144dd80(...);
extern int thunk_FUN_1144e3a0(...);
extern int thunk_FUN_1144e770(...);
extern int thunk_FUN_1144f140(...);
extern int thunk_FUN_1144f950(...);
extern int thunk_FUN_11450230(...);
extern int thunk_FUN_11450ff0(...);
extern int thunk_FUN_11451500(...);
extern int thunk_FUN_11451db0(...);
extern int thunk_FUN_11452150(...);
extern int thunk_FUN_114521e0(...);
extern int thunk_FUN_114521f0(...);
extern int thunk_FUN_11452c40(...);
extern int thunk_FUN_11453510(...);
extern int thunk_FUN_11454b90(...);
extern int thunk_FUN_1145e290(...);
extern int thunk_FUN_1145ede0(...);
extern int thunk_FUN_11464030(...);
extern int thunk_FUN_11464ab0(...);
extern int thunk_FUN_11465990(...);
extern int thunk_FUN_1146af30(...);
extern int thunk_FUN_1146bd60(...);
extern int thunk_FUN_1146cad0(...);
extern int thunk_FUN_1147b2f0(...);
extern int thunk_FUN_1147c0d0(...);
extern int thunk_FUN_11480f60(...);
extern int thunk_FUN_11481a20(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int DAT_11881ac8;
extern int DAT_11bfd8ac;
extern int DAT_11bfd8b0;
extern int DAT_11bfd8b2;
extern int DAT_11bfd9b8;
extern int DAT_11bfd9bc;
extern int DAT_11bfd9f4;
extern int DAT_11c00514;
extern int DAT_11c0051c;
extern int DAT_11c00524;
extern int DAT_11c0548c;
extern int DAT_11c05fbc;
extern int DAT_11c06310;
extern int DAT_11c08410;
extern int DAT_12119638;
extern int DAT_12119648;
extern int DAT_1211964c;
extern int DAT_12126b84;
extern int DAT_121a1348;
extern int DAT_121a4ad8;
extern int DAT_121a5238;
extern int DAT_121a523c;
extern int DAT_121a5240;
extern int DAT_121a56a8;
extern int DAT_121a56d0;
extern int DAT_121a56fc;
extern int DAT_121a6524;
extern int DAT_121a652c;
extern int DAT_121a7bb0;
extern int DAT_121a7bb8;
extern int DAT_121a7bc0;
extern int DAT_122fa1d0;
extern int DAT_122fa560;
extern int DAT_122faa80;
extern undefined1 LAB_11469332[];
extern int *PTR_DAT_11bfecc0;
extern int *PTR_DAT_11bfee68;
extern int *PTR_DAT_11bfef20;
extern int *PTR_DAT_11bfefa0;
extern int *PTR_DAT_11bff110;
extern int *PTR_DAT_11bff160;
extern int *PTR_DAT_11bff19c;
extern int *PTR_DAT_11bff1c8;
extern int *PTR_DAT_11bff240;
extern int *PTR_DAT_11bff2d0;
extern int *PTR_DAT_11bff348;
extern char s_invalid_after_png_start_read_ima_11c06018[];
extern char s_invalid_before_the_PNG_header_ha_11c06060[];
extern char s_too_short_11c04d50[];
int FUN_113ed220(int a1, int a2, int a3);
template<class... A> int FUN_113ed220(A...);
int FUN_113ed350(int a1, int a2, int a3, int a4);
template<class... A> int FUN_113ed350(A...);
int FUN_113ed3b0(int a1, int a2, int a3, int a4);
template<class... A> int FUN_113ed3b0(A...);
int FUN_113ed463(int a1, int a2, int a3);
template<class... A> int FUN_113ed463(A...);
int FUN_113ed4c0(int a1, int a2, int a3);
template<class... A> int FUN_113ed4c0(A...);
int FUN_113ed560(int a1, int a2);
template<class... A> int FUN_113ed560(A...);
int FUN_113ed5b0(int a1);
template<class... A> int FUN_113ed5b0(A...);
int FUN_113ed720(int a1);
template<class... A> int FUN_113ed720(A...);
int FUN_113ed750(int a1);
template<class... A> int FUN_113ed750(A...);
int FUN_113ed7a0(int a1);
template<class... A> int FUN_113ed7a0(A...);
int FUN_113edc70(int a1);
template<class... A> int FUN_113edc70(A...);
int FUN_113edd50(int a1, ushort a2);
template<class... A> int FUN_113edd50(A...);
int FUN_113ede10(ushort a1);
template<class... A> int FUN_113ede10(A...);
int FUN_113ef780(int a1, int a2, int a3);
template<class... A> int FUN_113ef780(A...);
int FUN_113efed0(int a1, int a2, int a3);
template<class... A> int FUN_113efed0(A...);
int FUN_113f056d(int a1, int a2);
template<class... A> int FUN_113f056d(A...);
int FUN_113f06dc(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
template<class... A> int FUN_113f06dc(A...);
int FUN_113f08e0(int a1, int a2, int result);
template<class... A> int FUN_113f08e0(A...);
int FUN_113f0970(int a1, int a2, int result);
template<class... A> int FUN_113f0970(A...);
int FUN_113f09b0(int a1);
template<class... A> int FUN_113f09b0(A...);
int FUN_113f0ac0(int a1, int a2, int result);
template<class... A> int FUN_113f0ac0(A...);
int FUN_113f0b90(int a1, int a2, int a3);
template<class... A> int FUN_113f0b90(A...);
int FUN_113f0bf0(int a1, int a2, int result);
template<class... A> int FUN_113f0bf0(A...);
int FUN_113f12c0(int a1);
template<class... A> int FUN_113f12c0(A...);
int FUN_113f1340(int a1);
template<class... A> int FUN_113f1340(A...);
int FUN_113f1450(int a1, int a2, int result);
template<class... A> int FUN_113f1450(A...);
int FUN_113f1490(int a1, int a2, int result);
template<class... A> int FUN_113f1490(A...);
int FUN_113f16b0(int a1);
template<class... A> int FUN_113f16b0(A...);
int FUN_113f1e00(short a1);
template<class... A> int FUN_113f1e00(A...);
int FUN_113f2720(int a1, int a2, int a3);
template<class... A> int FUN_113f2720(A...);
int FUN_113f27a0(int a1);
template<class... A> int FUN_113f27a0(A...);
int FUN_113f27f0(int a1, int a2, int a3);
template<class... A> int FUN_113f27f0(A...);
int FUN_113f2900(int a1);
template<class... A> int FUN_113f2900(A...);
int FUN_113f2a20(int a1);
template<class... A> int FUN_113f2a20(A...);
int FUN_113f2b10(int a1, int a2, int a3);
template<class... A> int FUN_113f2b10(A...);
int FUN_113f2b90(int a1, int a2, uint a3);
template<class... A> int FUN_113f2b90(A...);
int FUN_113f3840(int a1, int a2, int a3);
template<class... A> int FUN_113f3840(A...);
int FUN_113f42d2(int a1, int a2, int a3, int a4);
template<class... A> int FUN_113f42d2(A...);
int FUN_113f43e0(int a1, int a2, int a3);
template<class... A> int FUN_113f43e0(A...);
int FUN_113f4480(int a1);
template<class... A> int FUN_113f4480(A...);
int FUN_113f4690(int a1);
template<class... A> int FUN_113f4690(A...);
int FUN_113f4ad0(int a1);
template<class... A> int FUN_113f4ad0(A...);
int FUN_113f4e90(int a1);
template<class... A> int FUN_113f4e90(A...);
int FUN_113f5150(int a1, int a2, int a3, int a4);
template<class... A> int FUN_113f5150(A...);
int FUN_113f52b0(int a1, int a2, int a3, int a4);
template<class... A> int FUN_113f52b0(A...);
int FUN_113f5590(int a1);
template<class... A> int FUN_113f5590(A...);
int FUN_113f5650(int a1);
template<class... A> int FUN_113f5650(A...);
int FUN_113f5d20(int a1);
template<class... A> int FUN_113f5d20(A...);
int FUN_113f5df0(int a1, short a2);
template<class... A> int FUN_113f5df0(A...);
int FUN_113f5e40(int a1);
template<class... A> int FUN_113f5e40(A...);
int FUN_113f5e90(int a1);
template<class... A> int FUN_113f5e90(A...);
int FUN_113f5ec0(int a1, short a2);
template<class... A> int FUN_113f5ec0(A...);
int FUN_113f5f10(int a1, int a2);
template<class... A> int FUN_113f5f10(A...);
int FUN_113f69b0(short a1);
template<class... A> int FUN_113f69b0(A...);
int FUN_113f6b20(int a1);
template<class... A> int FUN_113f6b20(A...);
int FUN_113f6b60(int a1);
template<class... A> int FUN_113f6b60(A...);
int FUN_113f6cc0(int a1);
template<class... A> int FUN_113f6cc0(A...);
int FUN_113f6cf0(int a1);
template<class... A> int FUN_113f6cf0(A...);
int FUN_113f6d20(int a1);
template<class... A> int FUN_113f6d20(A...);
int FUN_113f6d50(int a1);
template<class... A> int FUN_113f6d50(A...);
int FUN_113f6e00(int a1, int a2, int a3, int a4, int a5);
template<class... A> int FUN_113f6e00(A...);
int FUN_113f6e70(int a1);
template<class... A> int FUN_113f6e70(A...);
int FUN_113f6ea0(int a1);
template<class... A> int FUN_113f6ea0(A...);
int FUN_113f74d0(int a1, int a2, int a3, int a4, int a5);
template<class... A> int FUN_113f74d0(A...);
int FUN_113f80a0(int a1, int a2, int a3);
template<class... A> int FUN_113f80a0(A...);
int FUN_113f80d0(int a1, int a2, int a3);
template<class... A> int FUN_113f80d0(A...);
int FUN_113f8936(int a1, int a2, int a3, int a4);
template<class... A> int FUN_113f8936(A...);
int FUN_113f8a10(int a1, int a2, int a3);
template<class... A> int FUN_113f8a10(A...);
int FUN_113f8b10(int a1);
template<class... A> int FUN_113f8b10(A...);
int FUN_113f8c50(int a1, int a2);
template<class... A> int FUN_113f8c50(A...);
int FUN_113f8e70(int a1);
template<class... A> int FUN_113f8e70(A...);
int FUN_113f90c0(int a1);
template<class... A> int FUN_113f90c0(A...);
int FUN_113f9110(int a1);
template<class... A> int FUN_113f9110(A...);
int FUN_113f9740(int a1, int a2);
template<class... A> int FUN_113f9740(A...);
int FUN_113f98d0(int a1, int a2, int a3, int a4);
template<class... A> int FUN_113f98d0(A...);
int FUN_113f9ad0(int a1, int a2, int a3, int a4);
template<class... A> int FUN_113f9ad0(A...);
int FUN_113fa480(int a1);
template<class... A> int FUN_113fa480(A...);
int FUN_113fac60(short a1);
template<class... A> int FUN_113fac60(A...);
int FUN_113face0(short a1);
template<class... A> int FUN_113face0(A...);
int FUN_113faf40(int a1);
template<class... A> int FUN_113faf40(A...);
int FUN_113fdcf0(short a1);
template<class... A> int FUN_113fdcf0(A...);
int FUN_113fdf20(int a1);
template<class... A> int FUN_113fdf20(A...);
int FUN_113fdf80(int result, uint a2);
template<class... A> int FUN_113fdf80(A...);
int FUN_113feb30(uint a1, int a2, int a3, int a4, int a5, int a6, int result);
template<class... A> int FUN_113feb30(A...);
int FUN_113febd0(int a1);
template<class... A> int FUN_113febd0(A...);
int FUN_113ff010(int a1);
template<class... A> int FUN_113ff010(A...);
int FUN_113ff040(int a1);
template<class... A> int FUN_113ff040(A...);
int FUN_11400820(int a1);
template<class... A> int FUN_11400820(A...);
int FUN_11400880(int a1, uint a2);
template<class... A> int FUN_11400880(A...);
int FUN_114008c0(int result, uint a2);
template<class... A> int FUN_114008c0(A...);
int FUN_11400cb0(int a1, int a2, int a3);
template<class... A> int FUN_11400cb0(A...);
int FUN_11400d30(int a1);
template<class... A> int FUN_11400d30(A...);
int FUN_11400d70(int a1);
template<class... A> int FUN_11400d70(A...);
int FUN_11400db0(int a1);
template<class... A> int FUN_11400db0(A...);
int FUN_11400e60(int a1, uint a2, uint a3);
template<class... A> int FUN_11400e60(A...);
int FUN_11400fe0(int a1, int a2, int a3, int a4);
template<class... A> int FUN_11400fe0(A...);
int FUN_114013c0(int a1, int a2, int a3);
template<class... A> int FUN_114013c0(A...);
int FUN_11401400(int a1, int a2, int a3, int a4);
template<class... A> int FUN_11401400(A...);
int FUN_11401470(int a1);
template<class... A> int FUN_11401470(A...);
int FUN_11402940(int a1, int a2);
template<class... A> int FUN_11402940(A...);
int FUN_11402bd0(int a1, int a2);
template<class... A> int FUN_11402bd0(A...);
int FUN_11402ca0(int a1, int a2, int a3);
template<class... A> int FUN_11402ca0(A...);
int FUN_114037f0(int a1, int a2, int a3);
template<class... A> int FUN_114037f0(A...);
int FUN_11404320(int result);
template<class... A> int FUN_11404320(A...);
int FUN_11404c80(int a1, uint a2, int a3);
template<class... A> int FUN_11404c80(A...);
int FUN_11404dc0(int a1, int a2, int a3, int a4);
template<class... A> int FUN_11404dc0(A...);
int FUN_11405890(int a1, int a2, int a3, int a4);
template<class... A> int FUN_11405890(A...);
int FUN_11405910(int a1, int a2, int a3);
template<class... A> int FUN_11405910(A...);
int FUN_11405950(int a1, int a2, int a3);
template<class... A> int FUN_11405950(A...);
int FUN_11405a30(int a1, int a2, int a3);
template<class... A> int FUN_11405a30(A...);
int FUN_11405f20(int a1, int a2);
template<class... A> int FUN_11405f20(A...);
int FUN_11405f50(int a1, int a2);
template<class... A> int FUN_11405f50(A...);
int FUN_114087a0(int a1, int a2, int a3);
template<class... A> int FUN_114087a0(A...);
int FUN_11408c50(int a1);
template<class... A> int FUN_11408c50(A...);
int FUN_1140a170(int a1);
template<class... A> int FUN_1140a170(A...);
int FUN_1140a790(int a1, int a2, int a3);
template<class... A> int FUN_1140a790(A...);
int FUN_1140a9b0(int a1, int a2, int a3);
template<class... A> int FUN_1140a9b0(A...);
int FUN_1140ad30(int a1, int result);
template<class... A> int FUN_1140ad30(A...);
int FUN_1140adf0(int a1);
template<class... A> int FUN_1140adf0(A...);
int FUN_1140bcf0(int a1, int a2);
template<class... A> int FUN_1140bcf0(A...);
int FUN_1140bd50(int a1);
template<class... A> int FUN_1140bd50(A...);
int FUN_1140bdc0(int a1, uint a2);
template<class... A> int FUN_1140bdc0(A...);
int FUN_1140be10(int result, uint a2);
template<class... A> int FUN_1140be10(A...);
int FUN_1140be50(int a1, int a2, int a3, int a4);
template<class... A> int FUN_1140be50(A...);
int FUN_11411a40(int a1, int a2, int a3);
template<class... A> int FUN_11411a40(A...);
int FUN_11411aa0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
template<class... A> int FUN_11411aa0(A...);
int FUN_11411c10(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
template<class... A> int FUN_11411c10(A...);
int FUN_11412650(int a1);
template<class... A> int FUN_11412650(A...);
int FUN_114131e0(int a1, int a2);
template<class... A> int FUN_114131e0(A...);
int FUN_11413220(int a1, int a2);
template<class... A> int FUN_11413220(A...);
int FUN_114132a0(int a1, int a2);
template<class... A> int FUN_114132a0(A...);
int FUN_11413320(int a1, int a2);
template<class... A> int FUN_11413320(A...);
int FUN_114133a0(int a1, int a2);
template<class... A> int FUN_114133a0(A...);
int FUN_114133e0(int a1, uint a2, int a3);
template<class... A> int FUN_114133e0(A...);
int FUN_11413730(int a1, int a2, int a3);
template<class... A> int FUN_11413730(A...);
int FUN_11418640(int a1, uint a2, char a3);
template<class... A> int FUN_11418640(A...);
int FUN_11418ca0(int a1, int a2, int a3, int a4);
template<class... A> int FUN_11418ca0(A...);
int FUN_11418e30(int a1);
template<class... A> int FUN_11418e30(A...);
int FUN_11419010(int a1, int a2, int a3);
template<class... A> int FUN_11419010(A...);
int FUN_11419350(int a1, int a2);
template<class... A> int FUN_11419350(A...);
int FUN_11419390(int a1, int a2);
template<class... A> int FUN_11419390(A...);
int FUN_11419440(int a1, int a2);
template<class... A> int FUN_11419440(A...);
int FUN_1141d940(int result);
template<class... A> int FUN_1141d940(A...);
int FUN_1141eb60(int a1, int a2, int a3);
template<class... A> int FUN_1141eb60(A...);
int FUN_1141eff0(int a1, int a2, int a3, int a4, int a5, int a6);
template<class... A> int FUN_1141eff0(A...);
int FUN_1141f430(int a1);
template<class... A> int FUN_1141f430(A...);
int FUN_1141f460(int a1);
template<class... A> int FUN_1141f460(A...);
int FUN_1141f490(int a1);
template<class... A> int FUN_1141f490(A...);
int FUN_11422110(int a1);
template<class... A> int FUN_11422110(A...);
int FUN_11424990(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14);
template<class... A> int FUN_11424990(A...);
int FUN_11424ba0(int a1, uint a2, int a3, int a4, int a5);
template<class... A> int FUN_11424ba0(A...);
int FUN_11425000(int a1, int a2, int a3, int a4);
template<class... A> int FUN_11425000(A...);
int FUN_11425c70(int a1);
template<class... A> int FUN_11425c70(A...);
int FUN_11425cc0(int a1);
template<class... A> int FUN_11425cc0(A...);
int FUN_114260c0(int a1, int a2, int a3, int a4);
template<class... A> int FUN_114260c0(A...);
int FUN_11426100(int a1);
template<class... A> int FUN_11426100(A...);
int FUN_11426130(int a1);
template<class... A> int FUN_11426130(A...);
int FUN_11426180(int a1);
template<class... A> int FUN_11426180(A...);
int FUN_11426d60(int a1);
template<class... A> int FUN_11426d60(A...);
int FUN_114272c0(int a1);
template<class... A> int FUN_114272c0(A...);
int FUN_11429460(int a1, uint a2, int a3, uint a4);
template<class... A> int FUN_11429460(A...);
int FUN_114294a0(int a1, uint a2, int a3, uint a4);
template<class... A> int FUN_114294a0(A...);
int FUN_11429ff0(int a1, int a2, uint a3, int a4, uint a5, int a6);
template<class... A> int FUN_11429ff0(A...);
int FUN_1142a0d0(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
template<class... A> int FUN_1142a0d0(A...);
int FUN_1142a260(int a1, int a2, int a3, int a4, int a5, int a6);
template<class... A> int FUN_1142a260(A...);
int FUN_1142a2d0(int a1, int a2);
template<class... A> int FUN_1142a2d0(A...);
int FUN_1142a480(int a1);
template<class... A> int FUN_1142a480(A...);
int FUN_1142a4f0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
template<class... A> int FUN_1142a4f0(A...);
int FUN_1142a580(int a1, int a2, int a3, int a4, int a5);
template<class... A> int FUN_1142a580(A...);
int FUN_1142a760(int a1, int a2);
template<class... A> int FUN_1142a760(A...);
int FUN_1142a890(int a1, int a2);
template<class... A> int FUN_1142a890(A...);
int FUN_1142ab60(int a1, int a2);
template<class... A> int FUN_1142ab60(A...);
int FUN_1142af40(int a1, uint a2, int a3, uint a4, int a5);
template<class... A> int FUN_1142af40(A...);
int FUN_1142b280(int a1);
template<class... A> int FUN_1142b280(A...);
int FUN_1142b390(int a1, int a2, int a3);
template<class... A> int FUN_1142b390(A...);
int FUN_1142c180(int a1, int a2, int a3, int a4);
template<class... A> int FUN_1142c180(A...);
int FUN_1142c1e0(void);
template<class... A> int FUN_1142c1e0(A...);
int FUN_1142c900(void);
template<class... A> int FUN_1142c900(A...);
int FUN_1142e090(int a1);
template<class... A> int FUN_1142e090(A...);
int FUN_1142e4d0(int a1);
template<class... A> int FUN_1142e4d0(A...);
int FUN_1142fc70(int a1, uint a2, int a3, int a4);
template<class... A> int FUN_1142fc70(A...);
int FUN_11430400(int a1, int a2, uint a3);
template<class... A> int FUN_11430400(A...);
int FUN_114321f0(int a1, int a2, int a3);
template<class... A> int FUN_114321f0(A...);
int FUN_11432280(int a1, uint a2);
template<class... A> int FUN_11432280(A...);
int FUN_114322c0(int result, uint a2);
template<class... A> int FUN_114322c0(A...);
int FUN_11432480(int a1);
template<class... A> int FUN_11432480(A...);
int FUN_11433510(int a1, int a2, uint a3);
template<class... A> int FUN_11433510(A...);
int FUN_11433640(int a1, int a2, int a3);
template<class... A> int FUN_11433640(A...);
int FUN_11433730(int a1, int a2, int a3);
template<class... A> int FUN_11433730(A...);
int FUN_114337a0(int a1, int a2, int a3);
template<class... A> int FUN_114337a0(A...);
int FUN_11433810(int a1, int a2);
template<class... A> int FUN_11433810(A...);
int FUN_114338c0(int a1, int a2);
template<class... A> int FUN_114338c0(A...);
int FUN_114339b0(uint a1);
template<class... A> int FUN_114339b0(A...);
int FUN_11433ca0(int a1);
template<class... A> int FUN_11433ca0(A...);
int FUN_11434490(int a1, int a2, int a3, int a4);
template<class... A> int FUN_11434490(A...);
int FUN_114346e0(int a1);
template<class... A> int FUN_114346e0(A...);
int FUN_11434730(int a1, int a2, int a3, int a4, int a5, int a6);
template<class... A> int FUN_11434730(A...);
int FUN_11434810(int a1);
template<class... A> int FUN_11434810(A...);
int FUN_11434860(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
template<class... A> int FUN_11434860(A...);
int FUN_11434930(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
template<class... A> int FUN_11434930(A...);
int FUN_114349c0(int a1, int a2, int a3);
template<class... A> int FUN_114349c0(A...);
int FUN_114349f0(int a1, int a2, int a3);
template<class... A> int FUN_114349f0(A...);
int FUN_114356a0(int a1, int a2);
template<class... A> int FUN_114356a0(A...);
int FUN_114356e0(int a1, int a2);
template<class... A> int FUN_114356e0(A...);
int FUN_11435790(int a1, int a2);
template<class... A> int FUN_11435790(A...);
int FUN_11435810(int a1, int a2);
template<class... A> int FUN_11435810(A...);
int FUN_11437150(int a1);
template<class... A> int FUN_11437150(A...);
int FUN_11437200(int a1);
template<class... A> int FUN_11437200(A...);
int FUN_114372b0(int a1);
template<class... A> int FUN_114372b0(A...);
int FUN_11437360(int a1);
template<class... A> int FUN_11437360(A...);
int FUN_11437410(int a1);
template<class... A> int FUN_11437410(A...);
int FUN_114374c0(int a1);
template<class... A> int FUN_114374c0(A...);
int FUN_11437570(int a1);
template<class... A> int FUN_11437570(A...);
int FUN_114376a0(int a1);
template<class... A> int FUN_114376a0(A...);
int FUN_11437750(int a1);
template<class... A> int FUN_11437750(A...);
int FUN_11437950(int a1);
template<class... A> int FUN_11437950(A...);
int FUN_11437a00(int a1);
template<class... A> int FUN_11437a00(A...);
int FUN_11438720(int a1, uint a2, int a3);
template<class... A> int FUN_11438720(A...);
int FUN_11438780(int a1, int a2, int a3);
template<class... A> int FUN_11438780(A...);
int FUN_11439d10(int a1, uint a2, unsigned char a3);
template<class... A> int FUN_11439d10(A...);
int FUN_1143aa80(int a1, int a2);
template<class... A> int FUN_1143aa80(A...);
int FUN_1143c990(int a1, char a2);
template<class... A> int FUN_1143c990(A...);
int FUN_1143e5d0(uint a1, int a2, int a3, int a4);
template<class... A> int FUN_1143e5d0(A...);
int FUN_1143e680(int a1, int a2, int a3, int a4);
template<class... A> int FUN_1143e680(A...);
int FUN_11440150(int a1, int a2, int a3, int a4);
template<class... A> int FUN_11440150(A...);
int FUN_11440240(int a1, int a2);
template<class... A> int FUN_11440240(A...);
int FUN_11440270(int a1, int a2);
template<class... A> int FUN_11440270(A...);
int FUN_114402d0(int a1);
template<class... A> int FUN_114402d0(A...);
int FUN_11440300(int a1);
template<class... A> int FUN_11440300(A...);
int FUN_11440560(int a1, int a2, int a3, int a4, int a5, uint a6);
template<class... A> int FUN_11440560(A...);
int FUN_114405c0(int a1, int a2, int a3, int a4, int a5, uint a6, int a7, int a8, int a9);
template<class... A> int FUN_114405c0(A...);
int FUN_11440620(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
template<class... A> int FUN_11440620(A...);
int FUN_11440680(int a1, int a2, int a3, int a4, int a5, uint a6, int a7, int a8);
template<class... A> int FUN_11440680(A...);
int FUN_11440700(void);
template<class... A> int FUN_11440700(A...);
int FUN_11440750(int a1, int a2);
template<class... A> int FUN_11440750(A...);
int FUN_114407d0(int a1, int a2, int a3, int a4, int a5);
template<class... A> int FUN_114407d0(A...);
int FUN_11440810(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
template<class... A> int FUN_11440810(A...);
int FUN_11440850(int a1, int a2, int a3, int a4);
template<class... A> int FUN_11440850(A...);
int FUN_11440880(void);
template<class... A> int FUN_11440880(A...);
int FUN_114408d0(int a1, int a2);
template<class... A> int FUN_114408d0(A...);
int FUN_11442bf0(int a1, int a2, int a3, int a4, int a5);
template<class... A> int FUN_11442bf0(A...);
int FUN_11444110(int a1, int a2);
template<class... A> int FUN_11444110(A...);
int FUN_11446740(void);
template<class... A> int FUN_11446740(A...);
int FUN_11446790(void);
template<class... A> int FUN_11446790(A...);
int FUN_11446830(void);
template<class... A> int FUN_11446830(A...);
int FUN_114468f0(int a1, int a2, int a3, int a4);
template<class... A> int FUN_114468f0(A...);
int FUN_11446920(void);
template<class... A> int FUN_11446920(A...);
int FUN_114469a0(void);
template<class... A> int FUN_114469a0(A...);
int FUN_11446c90(int a1, int a2, int a3, int a4, int a5, int a6);
template<class... A> int FUN_11446c90(A...);
int FUN_11446e80(int a1, int a2);
template<class... A> int FUN_11446e80(A...);
int FUN_11446ec0(int a1, int a2);
template<class... A> int FUN_11446ec0(A...);
int FUN_11446f40(int a1, int a2);
template<class... A> int FUN_11446f40(A...);
int FUN_11446fc0(int a1, int a2);
template<class... A> int FUN_11446fc0(A...);
int FUN_114472d0(int a1, int a2, int a3, int a4, int a5);
template<class... A> int FUN_114472d0(A...);
int FUN_1144abb0(int a1, int a2, int result, uint a4);
template<class... A> int FUN_1144abb0(A...);
int FUN_1144ac10(int a1, int a2, int a3);
template<class... A> int FUN_1144ac10(A...);
int FUN_1144bb70(int a1, int result, uint a3);
template<class... A> int FUN_1144bb70(A...);
int FUN_1144c100(int a1, short a2);
template<class... A> int FUN_1144c100(A...);
int FUN_1144ce10(int a1, int a2, uint a3, int a4, int a5);
template<class... A> int FUN_1144ce10(A...);
int FUN_1144dad0(uint a1, int a2, uint a3, uint a4, int a5);
template<class... A> int FUN_1144dad0(A...);
int FUN_1144e5e0(int a1, int a2, int a3);
template<class... A> int FUN_1144e5e0(A...);
int FUN_1144e660(int a1, int a2);
template<class... A> int FUN_1144e660(A...);
int FUN_1144eb00(int a1);
template<class... A> int FUN_1144eb00(A...);
int FUN_1144f510(int a1, int a2, int a3, int a4);
template<class... A> int FUN_1144f510(A...);
int FUN_1144f7d0(int a1, int a2, int a3, uint a4, int a5);
template<class... A> int FUN_1144f7d0(A...);
int FUN_1144fd90(int a1);
template<class... A> int FUN_1144fd90(A...);
int FUN_11450980(int a1, uint a2, int a3);
template<class... A> int FUN_11450980(A...);
int FUN_114509d0(int a1, int a2, int a3);
template<class... A> int FUN_114509d0(A...);
int FUN_11451d70(void);
template<class... A> int FUN_11451d70(A...);
int FUN_11451f80(int a1);
template<class... A> int FUN_11451f80(A...);
int FUN_11452940(unsigned char a1, unsigned char a2, char a3, char a4);
template<class... A> int FUN_11452940(A...);
int FUN_11454440(int a1, int result, int a3, uint a4);
template<class... A> int FUN_11454440(A...);
int FUN_1145b220(int a1, int a2, uint a3);
template<class... A> int FUN_1145b220(A...);
int FUN_1145c6b0(int a1);
template<class... A> int FUN_1145c6b0(A...);
int FUN_1145d710(char a1, int a2);
template<class... A> int FUN_1145d710(A...);
int FUN_1145e9c0(int a1, int a2, int a3, int a4, int a5);
template<class... A> int FUN_1145e9c0(A...);
int FUN_1145f280(int a1, int a2, int a3, int a4, int a5);
template<class... A> int FUN_1145f280(A...);
int FUN_11460650(int a1, int a2, int a3, uint a4);
template<class... A> int FUN_11460650(A...);
int FUN_11460690(int a1);
template<class... A> int FUN_11460690(A...);
int FUN_114655b0(int a1, uint a2);
template<class... A> int FUN_114655b0(A...);
int FUN_114666e0(int a1);
template<class... A> int FUN_114666e0(A...);
int FUN_114671e0(int a1, int a2);
template<class... A> int FUN_114671e0(A...);
int FUN_114672f0(int result);
template<class... A> int FUN_114672f0(A...);
int FUN_114677b0(int a1);
template<class... A> int FUN_114677b0(A...);
int FUN_11469357(uint a1);
template<class... A> int FUN_11469357(A...);
int FUN_1146a4c0(int a1);
template<class... A> int FUN_1146a4c0(A...);
int FUN_1146a8a0(int a1);
template<class... A> int FUN_1146a8a0(A...);
int FUN_1146a8d0(int a1);
template<class... A> int FUN_1146a8d0(A...);
int FUN_1146c130(int a1);
template<class... A> int FUN_1146c130(A...);
int FUN_1146cde0(int a1, int a2);
template<class... A> int FUN_1146cde0(A...);
int FUN_1146e3a0(int a1, int a2, int a3);
template<class... A> int FUN_1146e3a0(A...);
int FUN_1146ea20(int a1, int a2);
template<class... A> int FUN_1146ea20(A...);
int FUN_1146fa00(int a1, int a2);
template<class... A> int FUN_1146fa00(A...);
int FUN_11470ad0(int a1, int a2);
template<class... A> int FUN_11470ad0(A...);
int FUN_11470f90(int a1, int a2);
template<class... A> int FUN_11470f90(A...);
int FUN_11472030(int a1);
template<class... A> int FUN_11472030(A...);
int FUN_114723a0(int a1, int a2);
template<class... A> int FUN_114723a0(A...);
int FUN_11473dd0(int a1, int result, int a3);
template<class... A> int FUN_11473dd0(A...);
int FUN_114779e0(uint a1);
template<class... A> int FUN_114779e0(A...);
int FUN_11477e20(int a1, int a2);
template<class... A> int FUN_11477e20(A...);
int FUN_11479460(int a1);
template<class... A> int FUN_11479460(A...);
int FUN_1147ca10(int a1, int a2, uint a3, uint a4);
template<class... A> int FUN_1147ca10(A...);
int FUN_1147cc30(int a1, uint a2, uint a3);
template<class... A> int FUN_1147cc30(A...);
int FUN_11480a90(int a1, uint result2, int a3, int a4);
template<class... A> int FUN_11480a90(A...);
int FUN_114842d0(int a1, int a2);
template<class... A> int FUN_114842d0(A...);
int FUN_11488100(int a1);
template<class... A> int FUN_11488100(A...);
int FUN_114887d0(int a1, int a2, int a3);
template<class... A> int FUN_114887d0(A...);
int FUN_11488920(int a1, int a2, int a3);
template<class... A> int FUN_11488920(A...);
int FUN_11488a50(int a1, int a2);
template<class... A> int FUN_11488a50(A...);
int FUN_11489830(int result, int a2);
template<class... A> int FUN_11489830(A...);
int FUN_1148a46a(void);
template<class... A> int FUN_1148a46a(A...);
int FUN_114de129(void);
template<class... A> int FUN_114de129(A...);
int FUN_115197f9(void);
template<class... A> int FUN_115197f9(A...);
int FUN_11521d8c(void);
template<class... A> int FUN_11521d8c(A...);
int FUN_1152f112(void);
template<class... A> int FUN_1152f112(A...);
int FUN_115551d1(void);
template<class... A> int FUN_115551d1(A...);
int FUN_1157a8fb(void);
template<class... A> int FUN_1157a8fb(A...);
int FUN_115905ab(void);
template<class... A> int FUN_115905ab(A...);
int FUN_115a1b61(void);
template<class... A> int FUN_115a1b61(A...);
int FUN_115dda19(void);
template<class... A> int FUN_115dda19(A...);
int FUN_116a39f2(void);
template<class... A> int FUN_116a39f2(A...);
int FUN_116f1501(void);
template<class... A> int FUN_116f1501(A...);
int FUN_116f20b3(void);
template<class... A> int FUN_116f20b3(A...);
int FUN_116f23a9(void);
template<class... A> int FUN_116f23a9(A...);
int FUN_1171fe81(void);
template<class... A> int FUN_1171fe81(A...);
int FUN_1172befa(void);
template<class... A> int FUN_1172befa(A...);
int FUN_11767531(void);
template<class... A> int FUN_11767531(A...);
int FUN_117994ba(void);
template<class... A> int FUN_117994ba(A...);
int FUN_117a6aab(void);
template<class... A> int FUN_117a6aab(A...);
int FUN_117aa881(void);
template<class... A> int FUN_117aa881(A...);
int FUN_117adc89(void);
template<class... A> int FUN_117adc89(A...);
int FUN_117ce149(void);
template<class... A> int FUN_117ce149(A...);
int FUN_117f6180(void);
template<class... A> int FUN_117f6180(A...);
int FUN_117f6eb0(void);
template<class... A> int FUN_117f6eb0(A...);
int FUN_117f6ee2(void);
template<class... A> int FUN_117f6ee2(A...);
int FUN_1182b5d0(void);
template<class... A> int FUN_1182b5d0(A...);
int FUN_11831500(void);
template<class... A> int FUN_11831500(A...);
int FUN_11831535(void);
template<class... A> int FUN_11831535(A...);
int FUN_11835470(void);
template<class... A> int FUN_11835470(A...);
int FUN_11835560(void);
template<class... A> int FUN_11835560(A...);
int FUN_118355a0(void);
template<class... A> int FUN_118355a0(A...);
int FUN_11840f7e(void);
template<class... A> int FUN_11840f7e(A...);
int FUN_11846210(void);
template<class... A> int FUN_11846210(A...);
int FUN_11846250(void);
template<class... A> int FUN_11846250(A...);
int FUN_11861ee0(void);
template<class... A> int FUN_11861ee0(A...);
int FUN_11861f20(void);
template<class... A> int FUN_11861f20(A...);
int FUN_11861f60(void);
template<class... A> int FUN_11861f60(A...);
// Reference entry 113ed220; body size 121 bytes.
extern int __stdcall thunk_FUN_10264380(int a1,int a2);
extern int __stdcall thunk_FUN_103f6950(int a1,int a2);
extern int __stdcall thunk_FUN_108288d0(int a1,int a2);
extern int __stdcall thunk_FUN_10af43b0(int a1,int a2);
extern int __stdcall thunk_FUN_10c5e210(int a1,int a2);
extern int __stdcall thunk_FUN_11098770(int a1,int a2);
#line 1 "ENTRY_113ed220"

__declspec(naked) void FUN_113ed220(void)

{
  __asm mov eax, dword ptr [esp + 0x10]
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0xc]
  __asm add eax, 0x564
  __asm push ebp
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov ebp, dword ptr [esi + 0x3c]
  __asm add ebp, eax
  __asm lea eax, [ebx + 2]
  __asm cmp eax, 0x4000
  __asm _emit 0x76 __asm _emit 0x09
  __asm pop esi
  __asm pop ebp
  __asm mov eax, 0xffff9600
  __asm pop ebx
  __asm ret
  __asm mov eax, dword ptr [esi]
  __asm push 0x303
  __asm movzx eax, byte ptr [eax + 9]
  __asm push eax
  __asm push ebp
  __asm call LAB_1005418d
  __asm mov ecx, dword ptr [esi]
  __asm lea eax, [ebp + 2]
  __asm push 0x2e
  __asm push eax
  __asm push dword ptr [ecx + 0x2c]
  __asm mov eax, dword ptr [ecx + 0x28]
  __asm call eax
  __asm add esp, 0x18
  __asm test eax, eax
  __asm jne LAB_113ed30d
  __asm mov eax, dword ptr [esi + 0x3c]
  __asm _emit 0xc7 __asm _emit 0x80 __asm _emit 0xc8 __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi + 0x38]
  __asm mov eax, dword ptr [eax + 0x68]
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x09
  __asm pop esi
  __asm pop ebp
  __asm mov eax, 0xffff9400
  __asm pop ebx
  __asm ret
}



// Reference entry 113ed350; body size 69 bytes.
#line 1 "ENTRY_113ed350"

__declspec(naked) void FUN_113ed350(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x14]
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [eax]
  __asm cmp byte ptr [eax + 0xe], 0
  __asm _emit 0x74 __asm _emit 0x2a
  __asm mov edx, dword ptr [esp + 0xc]
  __asm push 4
  __asm push dword ptr [esp + 0x14]
  __asm push edx
  __asm call LAB_113ea210
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov eax, 0xffff9600
  __asm pop esi
  __asm ret
  __asm mov dword ptr [edx], 0x1700
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 113ed3b0; body size 80 bytes.
#line 1 "ENTRY_113ed3b0"

__declspec(naked) void FUN_113ed3b0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x14]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [edi]
  __asm cmp byte ptr [eax + 0xc], 0
  __asm _emit 0x74 __asm _emit 0x33
  __asm mov edx, dword ptr [esp + 0x10]
  __asm push 5
  __asm push dword ptr [esp + 0x18]
  __asm push edx
  __asm call LAB_113ea210
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x08
  __asm pop edi
  __asm mov eax, 0xffff9600
  __asm pop esi
  __asm ret
  __asm mov dword ptr [edx], 0x1000100
  __asm mov eax, dword ptr [edi]
  __asm mov al, byte ptr [eax + 0xc]
  __asm mov byte ptr [edx + 4], al
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 113ed463; body size 46 bytes.
#line 1 "ENTRY_113ed463"

__declspec(naked) void FUN_113ed463(void)

{
  __asm mov word ptr [edx + 2], cx
  __asm _emit 0xc7 __asm _emit 0x07 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ebx + 0x38]
  __asm mov eax, dword ptr [eax + 0x70]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x14
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x10
  __asm push esi
  __asm push eax
  __asm lea eax, [edx + 4]
  __asm push eax
  __asm call LAB_1148cded
  __asm add esp, 0xc
  __asm add dword ptr [edi], esi
  __asm pop edi
  __asm pop esi
  __asm xor eax, eax
  __asm pop ebx
  __asm ret
  __asm pop edi
  __asm pop esi
  __asm mov eax, 0xffff9600
  __asm pop ebx
  __asm ret
}



// Reference entry 113ed4c0; body size 63 bytes.
#line 1 "ENTRY_113ed4c0"

__declspec(naked) void FUN_113ed4c0(void)

{
  __asm mov edx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x14]
  __asm push 6
  __asm push dword ptr [esp + 0x14]
  __asm push edx
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_113ea210
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov eax, 0xffff9600
  __asm pop esi
  __asm ret
  __asm mov dword ptr [edx], 0x2000b00
  __asm xor eax, eax
  __asm mov word ptr [edx + 4], 1
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 113ed560; body size 45 bytes.
#line 1 "ENTRY_113ed560"

__declspec(naked) void FUN_113ed560(void)

{
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm xor eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm mov edx, dword ptr [LAB_122fa560]
  __asm xor ecx, eax
  __asm xor ecx, dword ptr [esp + 8]
  __asm xor edx, ecx
  __asm mov eax, edx
  __asm neg edx
  __asm _emit 0xd1 __asm _emit 0xe8
  __asm neg eax
  __asm or eax, edx
  __asm shr eax, 0x1f
  __asm neg eax
  __asm ret
}



// Reference entry 113ed5b0; body size 36 bytes.
#line 1 "ENTRY_113ed5b0"

__declspec(naked) void FUN_113ed5b0(void)

{
  __asm lea eax, [esp + 4]
  __asm push eax
  __asm call LAB_100191be
  __asm add esp, 4
  __asm sub eax, 2
  __asm _emit 0x74 __asm _emit 0x0d
  __asm sub eax, 1
  __asm _emit 0x74 __asm _emit 0x08
  __asm sub eax, 1
  __asm _emit 0x74 __asm _emit 0x03
  __asm xor eax, eax
  __asm ret
  __asm mov eax, dword ptr [esp + 8]
  __asm ret
}



// Reference entry 113ed720; body size 32 bytes.
#line 1 "ENTRY_113ed720"

__declspec(naked) void FUN_113ed720(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm movzx eax, byte ptr [eax + 0xa]
  __asm sub eax, 3
  __asm _emit 0x74 __asm _emit 0x0d
  __asm sub eax, 1
  __asm _emit 0x74 __asm _emit 0x08
  __asm sub eax, 4
  __asm _emit 0x74 __asm _emit 0x03
  __asm xor eax, eax
  __asm ret
  __asm mov eax, 1
  __asm ret
}



// Reference entry 113ed750; body size 32 bytes.
#line 1 "ENTRY_113ed750"

__declspec(naked) void FUN_113ed750(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm movzx eax, byte ptr [eax + 0xa]
  __asm sub eax, 2
  __asm _emit 0x74 __asm _emit 0x0d
  __asm sub eax, 1
  __asm _emit 0x74 __asm _emit 0x08
  __asm sub eax, 1
  __asm _emit 0x74 __asm _emit 0x03
  __asm xor eax, eax
  __asm ret
  __asm mov eax, 1
  __asm ret
}



// Reference entry 113ed7a0; body size 30 bytes.
#line 1 "ENTRY_113ed7a0"
int FUN_113ed7a0(int a1) {

    if (*(int *)(a1 + 4) <= 772) {
        if (*(int *)a1 >= 772) {
            return (int)(1);
        }
    }
    return (int)(0);
}

// Reference entry 113edc70; body size 34 bytes.
#line 1 "ENTRY_113edc70"
int FUN_113edc70(int a1) {

    int v1 = (int)(*(int *)(a1 + 60)); // (int)&FUN_113edc74
    if (v1 != 0) {
        int v2 = (int)(*(int *)(v1 + 1080)); // (int)&FUN_113edc7b
        if (v2 != 0) {
            return (int)(*(int *)v2);
        }
    }
    int result = (int)(*(int *)(*(int *)a1 + 116)); // (int)&FUN_113edc87
    if (result == 0) {
        return (int)(result);
    }
    return (int)(*(int *)result);
}

// Reference entry 113edd50; body size 45 bytes.
#line 1 "ENTRY_113edd50"

__declspec(naked) void FUN_113edd50(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax + 8]
  __asm cmp eax, 0x303
  __asm _emit 0x75 __asm _emit 0x2c
  __asm mov cx, word ptr [esp + 8]
  __asm movzx eax, cx
  __asm shr eax, 8
  __asm dec eax
  __asm cmp eax, 5
  __asm _emit 0x77 __asm _emit 0x65
  __asm movzx eax, byte ptr [eax + LAB_113edddc]
  __asm jmp dword ptr [eax*4 + LAB_113eddd8]
}



// Reference entry 113ede10; body size 31 bytes.
#line 1 "ENTRY_113ede10"

__declspec(naked) void FUN_113ede10(void)

{
  __asm mov cx, word ptr [esp + 4]
  __asm movzx eax, cx
  __asm shr eax, 8
  __asm dec eax
  __asm cmp eax, 5
  __asm _emit 0x77 __asm _emit 0x21
  __asm movzx eax, byte ptr [eax + LAB_113ede4c]
  __asm jmp dword ptr [eax*4 + LAB_113ede48]
}



// Reference entry 113ef780; body size 92 bytes.
#line 1 "ENTRY_113ef780"

__declspec(naked) void FUN_113ef780(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov eax, dword ptr [esi + 0x3c]
  __asm add eax, 0x324
  __asm push eax
  __asm call LAB_1005c4a5
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x04
  __asm xor eax, eax
  __asm pop esi
  __asm ret
  __asm mov eax, dword ptr [esi + 0x3c]
  __asm push edi
  __asm push dword ptr [esp + 0x14]
  __asm add eax, 0x324
  __asm push dword ptr [esp + 0x14]
  __asm push eax
  __asm call LAB_1003cdfd
  __asm mov edi, eax
  __asm add esp, 0xc
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x12
  __asm push 0x2f
  __asm push 2
  __asm push esi
  __asm call LAB_10025ee1
  __asm add esp, 0xc
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm ret
  __asm mov eax, dword ptr [esi + 0x3c]
  __asm pop edi
  __asm pop esi
  __asm or byte ptr [eax + 1], 2
  __asm xor eax, eax
  __asm ret
}



// Reference entry 113efed0; body size 113 bytes.
#line 1 "ENTRY_113efed0"

__declspec(naked) void FUN_113efed0(void)

{
  __asm mov edx, dword ptr [esp + 0xc]
  __asm push esi
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x51
  __asm mov esi, dword ptr [esp + 0xc]
  __asm movzx ecx, byte ptr [esi]
  __asm lea eax, [ecx + 1]
  __asm cmp eax, edx
  __asm _emit 0x75 __asm _emit 0x43
  __asm lea edx, [esi + 1]
  __asm push ebx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x36
  __asm nop
  __asm mov bl, byte ptr [edx]
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x10
  __asm cmp bl, 1
  __asm _emit 0x74 __asm _emit 0x0b
  __asm inc edx
  __asm sub ecx, 1
  __asm _emit 0x75 __asm _emit 0xef
  __asm pop ebx
  __asm xor eax, eax
  __asm pop esi
  __asm ret
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [ecx + 0x3c]
  __asm mov byte ptr [eax + 0x54], bl
  __asm movzx eax, byte ptr [edx]
  __asm push eax
  __asm mov eax, dword ptr [ecx + 0x3c]
  __asm add eax, 0x324
  __asm push eax
  __asm call LAB_1001f384
  __asm add esp, 8
  __asm pop ebx
  __asm xor eax, eax
  __asm pop esi
  __asm ret
  __asm push 0x32
  __asm push 2
  __asm push dword ptr [esp + 0x10]
  __asm call LAB_10025ee1
  __asm add esp, 0xc
  __asm mov eax, 0xffff8d00
  __asm pop esi
  __asm ret
}



// Reference entry 113f056d; body size 123 bytes.
#line 1 "ENTRY_113f056d"

__declspec(naked) void FUN_113f056d(void)

{
  __asm push esi
  __asm push edi
  __asm lea edi, [ebp + 4]
  __asm xor ebp, ebp
  __asm mov word ptr [edi + 1], 0x4001
  __asm mov byte ptr [edi], 2
  __asm mov eax, dword ptr [ebx]
  __asm mov esi, dword ptr [eax + 0x80]
  __asm test esi, esi
  __asm _emit 0x75 __asm _emit 0x0d
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm mov eax, 0xffffa180
  __asm pop ebx
  __asm add esp, 0xc
  __asm ret
  __asm movzx eax, word ptr [esi]
  __asm test ax, ax
  __asm je LAB_113f065d
  __asm mov ecx, eax
  __asm movzx eax, cx
  __asm shr eax, 8
  __asm push eax
  __asm push ebx
  __asm call LAB_10069308
  __asm add esp, 8
  __asm test eax, eax
  __asm jne LAB_113f064b
  __asm movzx edx, word ptr [esi]
  __asm mov eax, dword ptr [ebx + 8]
  __asm mov ecx, edx
  __asm cmp eax, 0x303
  __asm _emit 0x75 __asm _emit 0x2e
  __asm mov eax, ecx
  __asm shr eax, 8
  __asm dec eax
  __asm cmp eax, 5
  __asm ja LAB_113f0765
  __asm movzx eax, byte ptr [eax + LAB_113f078c]
  __asm jmp dword ptr [eax*4 + LAB_113f0788]
}



// Reference entry 113f06dc; body size 117 bytes.
#line 1 "ENTRY_113f06dc"

__declspec(naked) void FUN_113f06dc(void)

{
  __asm mov word ptr [edi], cx
  __asm add edi, 2
  __asm push ebp
  __asm push dword ptr [esi + 0x4c]
  __asm push edi
  __asm call LAB_1148cded
  __asm mov edx, dword ptr [esp + 0x1c]
  __asm add esp, 0xc
  __asm mov esi, dword ptr [esi + 0x194]
  __asm add edx, 2
  __asm add edx, ebx
  __asm add edi, ebp
  __asm mov dword ptr [esp + 0x10], edx
  __asm test esi, esi
  __asm _emit 0x75 __asm _emit 0xa8
  __asm mov ebx, dword ptr [esp + 0x20]
  __asm mov ebp, dword ptr [esp + 0x18]
  __asm mov eax, dword ptr [ebx + 0xd8]
  __asm mov ch, dl
  __asm sub edi, dword ptr [esp + 0x14]
  __asm mov cl, dh
  __asm mov dword ptr [ebx + 0xe0], edi
  __asm _emit 0xc7 __asm _emit 0x83 __asm _emit 0xdc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x16 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [eax], 0xd
  __asm mov eax, dword ptr [ebx + 0xd8]
  __asm push 1
  __asm push 1
  __asm push ebx
  __asm mov word ptr [eax + ebp + 7], cx
  __asm call LAB_10094fa8
  __asm add esp, 0xc
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm add esp, 0xc
  __asm ret
  __asm sub eax, 0x805
  __asm je LAB_113f0636
  __asm sub eax, 1
  __asm je LAB_113f0636
  __asm xor eax, eax
  __asm jmp LAB_113f063b
}



// Reference entry 113f08e0; body size 112 bytes.
#line 1 "ENTRY_113f08e0"

__declspec(naked) void FUN_113f08e0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov eax, dword ptr [esi + 0x38]
  __asm push dword ptr [eax + 0x10]
  __asm call LAB_10061cc5
  __asm mov ecx, dword ptr [esi + 0x38]
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x08
  __asm mov dword ptr [ecx + 0xd4], eax
  __asm _emit 0xeb __asm _emit 0x21
  __asm push eax
  __asm push dword ptr [ecx + 0xd4]
  __asm call LAB_1006b770
  __asm add esp, 8
  __asm cmp eax, 2
  __asm _emit 0x74 __asm _emit 0x0d
  __asm mov eax, dword ptr [esi + 0x38]
  __asm _emit 0xc7 __asm _emit 0x80 __asm _emit 0xd4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi + 0x38]
  __asm pop esi
  __asm cmp dword ptr [eax + 0xd4], 0
  __asm _emit 0x75 __asm _emit 0x0b
  __asm mov eax, dword ptr [esp + 0xc]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [eax], 0x1600
  __asm mov eax, dword ptr [esp + 0xc]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
}



// Reference entry 113f0970; body size 45 bytes.
#line 1 "ENTRY_113f0970"
int FUN_113f0970(int a1, int a2, int result) {

    if (*(char *)(*(int *)(a1 + 60) + 12) == 0) {
        *(int*)result = (int)((int)(0));
        return (int)(result);
    }
    *(int*)a2 = (int)((int)(0x1700));
    *(int*)result = (int)((int)(4));
    return (int)(result);
}

// Reference entry 113f09b0; body size 207 bytes.
#line 1 "ENTRY_113f09b0"

__declspec(naked) void FUN_113f09b0(void)

{
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm mov ecx, dword ptr [esi + 0xd8]
  __asm mov eax, dword ptr [esi]
  __asm add ecx, 4
  __asm push dword ptr [esi + 8]
  __asm mov dword ptr [esp + 0x10], ecx
  __asm movzx eax, byte ptr [eax + 9]
  __asm push eax
  __asm push ecx
  __asm call LAB_1005418d
  __asm mov ebx, dword ptr [esp + 0x18]
  __asm add esp, 0xc
  __asm mov ecx, dword ptr [esi]
  __asm add ebx, 2
  __asm mov dword ptr [esp + 0xc], ebx
  __asm cmp dword ptr [ecx + 0x58], 0
  __asm _emit 0x75 __asm _emit 0x08
  __asm pop esi
  __asm mov eax, 0xffff9400
  __asm pop ebx
  __asm ret
  __asm push dword ptr [esi + 0x100]
  __asm lea eax, [ebx + 1]
  __asm push dword ptr [esi + 0xfc]
  __asm mov dword ptr [esp + 0x14], eax
  __asm mov eax, dword ptr [esi + 0xc4]
  __asm add eax, 0x414d
  __asm push eax
  __asm lea eax, [esp + 0x18]
  __asm push eax
  __asm push dword ptr [ecx + 0x60]
  __asm mov eax, dword ptr [ecx + 0x58]
  __asm call eax
  __asm add esp, 0x14
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x58
  __asm mov al, byte ptr [esp + 0xc]
  __asm sub al, bl
  __asm dec al
  __asm mov byte ptr [ebx], al
  __asm mov ecx, dword ptr [esi + 0xd8]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm push 1
  __asm sub eax, ecx
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xdc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x16 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi + 0xe0], eax
  __asm push 1
  __asm mov byte ptr [ecx], 3
  __asm push esi
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x11 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10094fa8
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x17
  __asm mov eax, dword ptr [esi]
  __asm cmp byte ptr [eax + 9], 1
  __asm _emit 0x75 __asm _emit 0x0d
  __asm push esi
  __asm call LAB_10097442
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x02
  __asm xor eax, eax
  __asm pop esi
  __asm pop ebx
  __asm ret
}



// Reference entry 113f0ac0; body size 62 bytes.
#line 1 "ENTRY_113f0ac0"

__declspec(naked) void FUN_113f0ac0(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [edx + 0x38]
  __asm cmp byte ptr [eax], 0
  __asm _emit 0x75 __asm _emit 0x0b
  __asm mov eax, dword ptr [esp + 0xc]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm mov eax, dword ptr [esp + 8]
  __asm mov ecx, 0x100
  __asm mov word ptr [eax], cx
  __asm lea ecx, [eax + 2]
  __asm mov word ptr [ecx], 0x100
  __asm mov eax, dword ptr [edx + 0x38]
  __asm mov al, byte ptr [eax]
  __asm mov byte ptr [ecx + 2], al
  __asm mov eax, dword ptr [esp + 0xc]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
}



// Reference entry 113f0b90; body size 43 bytes.
#line 1 "ENTRY_113f0b90"

__declspec(naked) void FUN_113f0b90(void)

{
  __asm mov eax, dword ptr [esi + 0xd8]
  __asm push 1
  __asm push esi
  __asm mov word ptr [eax + 8], cx
  __asm mov eax, dword ptr [esp + 0x34]
  __asm add eax, 0xa
  __asm mov dword ptr [esi + 0xe0], eax
  __asm mov eax, dword ptr [esi + 0x3c]
  __asm mov byte ptr [eax + 5], dl
  __asm call LAB_10094fa8
  __asm add esp, 0x28
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 113f0bf0; body size 49 bytes.
#line 1 "ENTRY_113f0bf0"
int FUN_113f0bf0(int a1, int a2, int result) {

    if (*(int *)(a1 + 260) != 1) {
        *(int*)result = (int)((int)(0));
        return (int)(result);
    }
    *(int*)a2 = (int)((int)(0x10001ff));
    *(char*)(a2 + 4) = (char)(0);
    *(int*)result = (int)((int)(5));
    return (int)(result);
}

// Reference entry 113f12c0; body size 96 bytes.
#line 1 "ENTRY_113f12c0"

__declspec(naked) void FUN_113f12c0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov eax, dword ptr [esi + 0xd8]
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xdc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x16 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [eax], 0xe
  __asm mov eax, dword ptr [esi]
  __asm inc dword ptr [esi + 4]
  __asm cmp byte ptr [eax + 9], 1
  __asm _emit 0x75 __asm _emit 0x09
  __asm push esi
  __asm call LAB_100473ac
  __asm add esp, 4
  __asm push 1
  __asm push 1
  __asm push esi
  __asm call LAB_10094fa8
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x17
  __asm mov eax, dword ptr [esi]
  __asm cmp byte ptr [eax + 9], 1
  __asm _emit 0x75 __asm _emit 0x0d
  __asm push esi
  __asm call LAB_10097442
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x02
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 113f1340; body size 44 bytes.
#line 1 "ENTRY_113f1340"

__declspec(naked) void FUN_113f1340(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi + 0x3c]
  __asm mov eax, dword ptr [eax + 0x10]
  __asm movzx eax, byte ptr [eax + 0xa]
  __asm dec eax
  __asm cmp eax, 9
  __asm _emit 0x77 __asm _emit 0x16
  __asm movzx eax, byte ptr [eax + LAB_113f1408]
  __asm jmp dword ptr [eax*4 + LAB_113f1400]
}



// Reference entry 113f1450; body size 45 bytes.
#line 1 "ENTRY_113f1450"
int FUN_113f1450(int a1, int a2, int result) {

    if (*(char *)(*(int *)(a1 + 60) + 5) == 0) {
        *(int*)result = (int)((int)(0));
        return (int)(result);
    }
    *(int*)a2 = (int)((int)(0x2300));
    *(int*)result = (int)((int)(4));
    return (int)(result);
}

// Reference entry 113f1490; body size 51 bytes.
#line 1 "ENTRY_113f1490"

__declspec(naked) void FUN_113f1490(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax + 0x3c]
  __asm test byte ptr [eax + 1], 1
  __asm _emit 0x75 __asm _emit 0x0b
  __asm mov eax, dword ptr [esp + 0xc]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [eax], 0x2000b00
  __asm mov word ptr [eax + 4], 1
  __asm mov eax, dword ptr [esp + 0xc]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
}



// Reference entry 113f16b0; body size 34 bytes.
#line 1 "ENTRY_113f16b0"
int FUN_113f16b0(int a1) {

    int v1 = (int)(*(int *)(a1 + 60)); // (int)&FUN_113f16b4
    if (v1 != 0) {
        int v2 = (int)(*(int *)(v1 + 1080)); // (int)&FUN_113f16bb
        if (v2 != 0) {
            return (int)(*(int *)v2);
        }
    }
    int result = (int)(*(int *)(*(int *)a1 + 116)); // (int)&FUN_113f16c7
    if (result == 0) {
        return (int)(result);
    }
    return (int)(*(int *)result);
}

// Reference entry 113f1e00; body size 44 bytes.
#line 1 "ENTRY_113f1e00"

__declspec(naked) void FUN_113f1e00(void)

{
  __asm mov ax, word ptr [esp + 4]
  __asm cmp ax, 0x1d
  __asm _emit 0x74 __asm _emit 0x1b
  __asm cmp ax, 0x17
  __asm _emit 0x74 __asm _emit 0x15
  __asm cmp ax, 0x18
  __asm _emit 0x74 __asm _emit 0x0f
  __asm cmp ax, 0x19
  __asm _emit 0x74 __asm _emit 0x09
  __asm cmp ax, 0x1e
  __asm _emit 0x74 __asm _emit 0x03
  __asm xor eax, eax
  __asm ret
  __asm mov eax, 1
  __asm ret
}



// Reference entry 113f2720; body size 92 bytes.
#line 1 "ENTRY_113f2720"

__declspec(naked) void FUN_113f2720(void)

{
  __asm mov edx, dword ptr [esp + 8]
  __asm push 0x22
  __asm push dword ptr [esp + 0x10]
  __asm push edx
  __asm call LAB_113f1560
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x19
  __asm push 0xffff8d00
  __asm push 0x32
  __asm push dword ptr [esp + 0xc]
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, 0xffff8d00
  __asm ret
  __asm push esi
  __asm lea ecx, [edx + 2]
  __asm mov esi, 0x1c
  __asm mov edx, offset LAB_11bfd9f4
  __asm nop
  __asm mov eax, dword ptr [ecx]
  __asm cmp eax, dword ptr [edx]
  __asm _emit 0x75 __asm _emit 0x12
  __asm add ecx, 4
  __asm add edx, 4
  __asm sub esi, 4
  __asm _emit 0x73 __asm _emit 0xef
  __asm mov eax, 1
  __asm pop esi
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 113f27a0; body size 55 bytes.
#line 1 "ENTRY_113f27a0"

__declspec(naked) void FUN_113f27a0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push 0
  __asm push esi
  __asm call LAB_1002a0ae
  __asm add esp, 8
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x21
  __asm cmp dword ptr [esi + 0x7c], 0x16
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xb0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x0c
  __asm mov eax, dword ptr [esi + 0x74]
  __asm cmp byte ptr [eax], 0xd
  __asm _emit 0x75 __asm _emit 0x04
  __asm xor eax, eax
  __asm pop esi
  __asm ret
  __asm mov eax, 1
  __asm pop esi
  __asm ret
}



// Reference entry 113f27f0; body size 217 bytes.
#line 1 "ENTRY_113f27f0"

__declspec(naked) void FUN_113f27f0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov edx, dword ptr [esp + 0xc]
  __asm push ebx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm push 1
  __asm push edx
  __asm push edi
  __asm call LAB_113f1560
  __asm add esp, 0xc
  __asm test eax, eax
  __asm jne LAB_113f28ae
  __asm movzx ebx, byte ptr [edi]
  __asm inc edi
  __asm push ebx
  __asm push edx
  __asm push edi
  __asm call LAB_113f1560
  __asm add esp, 0xc
  __asm test eax, eax
  __asm jne LAB_113f28ae
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x10]
  __asm push esi
  __asm mov ecx, dword ptr [ebp + 0x38]
  __asm cmp dword ptr [ecx + 0x14], ebx
  __asm _emit 0x75 __asm _emit 0x5f
  __asm mov esi, ebx
  __asm add ecx, 0x18
  __asm mov edx, edi
  __asm sub esi, 4
  __asm _emit 0x72 __asm _emit 0x11
  __asm mov eax, dword ptr [ecx]
  __asm cmp eax, dword ptr [edx]
  __asm _emit 0x75 __asm _emit 0x10
  __asm add ecx, 4
  __asm add edx, 4
  __asm sub esi, 4
  __asm _emit 0x73 __asm _emit 0xef
  __asm cmp esi, -4
  __asm _emit 0x74 __asm _emit 0x2d
  __asm mov al, byte ptr [ecx]
  __asm cmp al, byte ptr [edx]
  __asm _emit 0x75 __asm _emit 0x37
  __asm cmp esi, -3
  __asm _emit 0x74 __asm _emit 0x22
  __asm mov al, byte ptr [ecx + 1]
  __asm cmp al, byte ptr [edx + 1]
  __asm _emit 0x75 __asm _emit 0x2a
  __asm cmp esi, -2
  __asm _emit 0x74 __asm _emit 0x15
  __asm mov al, byte ptr [ecx + 2]
  __asm cmp al, byte ptr [edx + 2]
  __asm _emit 0x75 __asm _emit 0x1d
  __asm cmp esi, -1
  __asm _emit 0x74 __asm _emit 0x08
  __asm mov al, byte ptr [ecx + 3]
  __asm cmp al, byte ptr [edx + 3]
  __asm _emit 0x75 __asm _emit 0x10
  __asm mov ecx, dword ptr [esp + 0x18]
  __asm lea eax, [ebx + edi]
  __asm pop esi
  __asm pop ebp
  __asm pop edi
  __asm mov dword ptr [ecx], eax
  __asm xor eax, eax
  __asm pop ebx
  __asm ret
  __asm push 0xffff9a00
  __asm push 0x2f
  __asm push ebp
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, 0xffff9a00
  __asm pop esi
  __asm pop ebp
  __asm pop edi
  __asm pop ebx
  __asm ret
  __asm push 0xffff8d00
  __asm push 0x32
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, 0xffff8d00
  __asm pop edi
  __asm pop ebx
  __asm ret
}



// Reference entry 113f2900; body size 58 bytes.
#line 1 "ENTRY_113f2900"
int FUN_113f2900(int a1) {

    if (*(char *)*(int *)(a1 + 60) == 0) {
        return (int)(0);
    }
    int v1 = (int)(*(int *)(a1 + 56)); // (int)&FUN_113f290c
    if (*(int *)(v1 + 4) != 772 || (*(char *)(v1 + 140) & 8) == 0) {
        return (int)(0);
    }
    if (FUN_113f16e0(a1, *(int *)(v1 + 16)) != 0) {
        return (int)(1);
    }
    return (int)(0);
}

// Reference entry 113f2a20; body size 113 bytes.
#line 1 "ENTRY_113f2a20"

__declspec(naked) void FUN_113f2a20(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov eax, dword ptr [eax]
  __asm mov esi, dword ptr [eax + 0x84]
  __asm test esi, esi
  __asm _emit 0x75 __asm _emit 0x07
  __asm mov eax, 0xffffa180
  __asm pop esi
  __asm ret
  __asm movzx eax, word ptr [esi]
  __asm test ax, ax
  __asm _emit 0x74 __asm _emit 0x3f
  __asm mov ecx, eax
  __asm push 0
  __asm push 0
  __asm push ecx
  __asm call LAB_10017292
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x1e
  __asm movzx ecx, word ptr [esi]
  __asm mov eax, ecx
  __asm cmp eax, 0x1d
  __asm _emit 0x74 __asm _emit 0x29
  __asm cmp eax, 0x17
  __asm _emit 0x74 __asm _emit 0x24
  __asm cmp eax, 0x18
  __asm _emit 0x74 __asm _emit 0x1f
  __asm cmp eax, 0x19
  __asm _emit 0x74 __asm _emit 0x1a
  __asm cmp eax, 0x1e
  __asm _emit 0x74 __asm _emit 0x15
  __asm movzx eax, word ptr [esi + 2]
  __asm add esi, 2
  __asm mov ecx, eax
  __asm test ax, ax
  __asm _emit 0x75 __asm _emit 0xc3
  __asm mov eax, 0xffff8f80
  __asm pop esi
  __asm ret
  __asm mov eax, dword ptr [esp + 0xc]
  __asm pop esi
  __asm mov word ptr [eax], cx
  __asm xor eax, eax
  __asm ret
}



// Reference entry 113f2b10; body size 99 bytes.
#line 1 "ENTRY_113f2b10"

__declspec(naked) void FUN_113f2b10(void)

{
  __asm mov edx, dword ptr [esp + 8]
  __asm push 0x22
  __asm push dword ptr [esp + 0x10]
  __asm push edx
  __asm call LAB_113f1560
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x19
  __asm push 0xffff8d00
  __asm push 0x32
  __asm push dword ptr [esp + 0xc]
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, 0xffff8d00
  __asm ret
  __asm mov eax, dword ptr [edx + 0x1a]
  __asm mov ecx, offset LAB_11bfd8ac
  __asm cmp eax, dword ptr [ecx]
  __asm _emit 0x75 __asm _emit 0x24
  __asm movzx eax, word ptr [edx + 0x1e]
  __asm cmp ax, word ptr [ecx + 4]
  __asm _emit 0x75 __asm _emit 0x1a
  __asm movzx eax, byte ptr [edx + 0x20]
  __asm cmp al, byte ptr [ecx + 6]
  __asm _emit 0x75 __asm _emit 0x11
  __asm mov al, byte ptr [edx + 0x21]
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x04
  __asm cmp al, 1
  __asm _emit 0x75 __asm _emit 0x06
  __asm mov eax, 1
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 113f2b90; body size 110 bytes.
#line 1 "ENTRY_113f2b90"

__declspec(naked) void FUN_113f2b90(void)

{
  __asm push ecx
  __asm mov edx, dword ptr [esp + 0x10]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push edi
  __asm push 0x23
  __asm push edx
  __asm push esi
  __asm call LAB_113f1560
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x37
  __asm movzx edi, byte ptr [esi + 0x22]
  __asm add esi, 0x22
  __asm cmp esi, edx
  __asm _emit 0x77 __asm _emit 0x2c
  __asm mov ecx, edx
  __asm lea eax, [edi + 4]
  __asm sub ecx, esi
  __asm cmp eax, ecx
  __asm _emit 0x77 __asm _emit 0x21
  __asm lea eax, [esp + 0x14]
  __asm push eax
  __asm lea eax, [esp + 0xc]
  __asm push eax
  __asm push edx
  __asm lea eax, [esi + 4]
  __asm add eax, edi
  __asm push eax
  __asm push dword ptr [esp + 0x20]
  __asm call LAB_1008ebdf
  __asm add esp, 0x14
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm push 0xffff8d00
  __asm push 0x32
  __asm push dword ptr [esp + 0x18]
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, 0xffff8d00
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 113f3840; body size 78 bytes.
#line 1 "ENTRY_113f3840"

__declspec(naked) void FUN_113f3840(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm mov esi, dword ptr [edx + 0x34]
  __asm push 4
  __asm push dword ptr [esp + 0x18]
  __asm push edi
  __asm call LAB_113f1560
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x18
  __asm push 0xffff8d00
  __asm push 0x32
  __asm push edx
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, 0xffff8d00
  __asm pop edi
  __asm pop esi
  __asm ret
  __asm mov eax, dword ptr [edi]
  __asm or byte ptr [esi + 0x8c], 8
  __asm bswap eax
  __asm mov dword ptr [esi + 0xd0], eax
  __asm xor eax, eax
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 113f42d2; body size 197 bytes.
#line 1 "ENTRY_113f42d2"

__declspec(naked) void FUN_113f42d2(void)

{
  __asm push edi
  __asm movzx ecx, cx
  __asm mov eax, dword ptr [esi + 0x3c]
  __asm mov edi, ecx
  __asm push esi
  __asm mov word ptr [eax + 0x434], cx
  __asm call LAB_113f29a0
  __asm add esp, 4
  __asm cmp edi, eax
  __asm jge LAB_113f437c
  __asm test edi, edi
  __asm _emit 0x75 __asm _emit 0x24
  __asm push esi
  __asm call LAB_113f2ad0
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x17
  __asm lea eax, [esp + 0xc]
  __asm push eax
  __asm lea eax, [esp + 0x14]
  __asm push eax
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm push esi
  __asm call LAB_113f5340
  __asm _emit 0xeb __asm _emit 0x23
  __asm push dword ptr [esi]
  __asm call LAB_10004bec
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x48
  __asm lea eax, [esp + 0xc]
  __asm push eax
  __asm lea eax, [esp + 0x14]
  __asm push eax
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm push esi
  __asm call LAB_113f51b0
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x4c
  __asm mov eax, dword ptr [esi + 0x3c]
  __asm mov eax, dword ptr [eax + 0x10]
  __asm movzx eax, byte ptr [eax + 9]
  __asm or eax, 0x2000000
  __asm cmp eax, dword ptr [esp + 8]
  __asm _emit 0x75 __asm _emit 0x22
  __asm push dword ptr [esp + 0xc]
  __asm push dword ptr [esp + 0x14]
  __asm push esi
  __asm call LAB_10054a20
  __asm add esp, 0xc
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret
  __asm pop edi
  __asm mov eax, 0xffff9400
  __asm pop esi
  __asm add esp, 0xc
  __asm ret
  __asm push 0xffff9a00
  __asm push 0x2f
  __asm push esi
  __asm call LAB_10014a33
  __asm mov eax, 0xffff9a00
  __asm add esp, 0xc
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret
}



// Reference entry 113f43e0; body size 117 bytes.
#line 1 "ENTRY_113f43e0"

__declspec(naked) void FUN_113f43e0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm push 2
  __asm push dword ptr [esp + 0x18]
  __asm push edi
  __asm call LAB_113f1560
  __asm mov esi, dword ptr [esp + 0x18]
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x40
  __asm mov eax, dword ptr [esi]
  __asm movzx eax, byte ptr [eax + 9]
  __asm push eax
  __asm push edi
  __asm call LAB_1006c5f3
  __asm mov ecx, 0x304
  __asm add esp, 8
  __asm cmp ax, cx
  __asm _emit 0x74 __asm _emit 0x18
  __asm push 0xffff9a00
  __asm push 0x2f
  __asm push esi
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, 0xffff9a00
  __asm pop edi
  __asm pop esi
  __asm ret
  __asm lea eax, [edi + 2]
  __asm cmp eax, dword ptr [esp + 0x14]
  __asm _emit 0x75 __asm _emit 0x05
  __asm pop edi
  __asm xor eax, eax
  __asm pop esi
  __asm ret
  __asm push 0xffff8d00
  __asm push 0x32
  __asm push esi
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, 0xffff8d00
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 113f4480; body size 57 bytes.
#line 1 "ENTRY_113f4480"

__declspec(naked) void FUN_113f4480(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push 0
  __asm push esi
  __asm call LAB_1008a9e5
  __asm push esi
  __asm call LAB_113f5210
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x1d
  __asm mov eax, dword ptr [esi + 0x3c]
  __asm mov ecx, dword ptr [esi + 0x38]
  __asm mov eax, dword ptr [eax + 0x10]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ecx + 0x10], eax
  __asm cmp dword ptr [esi + 0xc], 1
  __asm _emit 0x74 __asm _emit 0x07 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 113f4690; body size 166 bytes.
#line 1 "ENTRY_113f4690"

__declspec(naked) void FUN_113f4690(void)

{
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov ebx, dword ptr [esi + 0x3c]
  __asm mov eax, dword ptr [ebx + 0x5d0]
  __asm and eax, 0x402000
  __asm cmp eax, 0x2000
  __asm _emit 0x74 __asm _emit 0x39
  __asm cmp eax, 0x400000
  __asm _emit 0x74 __asm _emit 0x2a
  __asm cmp eax, 0x402000
  __asm _emit 0x74 __asm _emit 0x1b
  __asm mov edi, 0xffff9200
  __asm push 0xffff9200
  __asm push 0x28
  __asm push esi
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret
  __asm mov byte ptr [ebx + 0x24], 4
  __asm mov cl, 4
  __asm _emit 0xeb __asm _emit 0x0e
  __asm mov byte ptr [ebx + 0x24], 2
  __asm mov cl, 2
  __asm _emit 0xeb __asm _emit 0x06
  __asm mov byte ptr [ebx + 0x24], 1
  __asm mov cl, 1
  __asm mov eax, dword ptr [esi]
  __asm test byte ptr [eax + 0x1c], cl
  __asm _emit 0x74 __asm _emit 0xc8
  __asm cmp dword ptr [esi + 0xc], 1
  __asm _emit 0x74 __asm _emit 0x05
  __asm cmp cl, 2
  __asm _emit 0x75 __asm _emit 0x0f
  __asm push esi
  __asm call LAB_10040692
  __asm mov edi, eax
  __asm add esp, 4
  __asm test edi, edi
  __asm _emit 0x75 __asm _emit 0xb3
  __asm push esi
  __asm call LAB_10061cc0
  __asm mov edi, eax
  __asm add esp, 4
  __asm test edi, edi
  __asm _emit 0x75 __asm _emit 0xa4
  __asm push dword ptr [ebx + 0x5dc]
  __asm push esi
  __asm call LAB_100638c7
  __asm mov eax, dword ptr [esi + 0x38]
  __asm add esp, 8
  __asm mov dword ptr [esi + 0x2c], eax
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret
}



// Reference entry 113f4ad0; body size 226 bytes.
#line 1 "ENTRY_113f4ad0"

__declspec(naked) void FUN_113f4ad0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm lea eax, [esp + 0xc]
  __asm push edi
  __asm push eax
  __asm lea eax, [esp + 0xc]
  __asm mov edi, dword ptr [esi + 0x3c]
  __asm push eax
  __asm push 8
  __asm push esi
  __asm call LAB_1007d128
  __asm mov ecx, eax
  __asm add esp, 0x10
  __asm test ecx, ecx
  __asm jne LAB_113f4bac
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov eax, dword ptr [esp + 0x10]
  __asm add eax, ecx
  __asm push eax
  __asm push ecx
  __asm push esi
  __asm call LAB_113f3060
  __asm mov ecx, eax
  __asm add esp, 0xc
  __asm test ecx, ecx
  __asm jne LAB_113f4bac
  __asm test dword ptr [edi + 0x5d0], 0x4000
  __asm _emit 0x74 __asm _emit 0x41
  __asm mov eax, dword ptr [esi + 0x3c]
  __asm test byte ptr [eax + 0x24], 5
  __asm _emit 0x74 __asm _emit 0x1f
  __asm cmp word ptr [edi + 0x434], cx
  __asm _emit 0x75 __asm _emit 0x16
  __asm mov eax, dword ptr [edi + 0x10]
  __asm mov ecx, dword ptr [esi + 0x38]
  __asm mov eax, dword ptr [eax]
  __asm cmp eax, dword ptr [ecx + 0x10]
  __asm _emit 0x75 __asm _emit 0x09 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xeb __asm _emit 0x26
  __asm push 0xffff9a00
  __asm push 0x2f
  __asm push esi
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, 0xffff9a00
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm cmp dword ptr [esi + 0xc], 1
  __asm _emit 0x74 __asm _emit 0x07 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [edi + 0x10]
  __asm mov ecx, dword ptr [esi + 0x38]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ecx + 0x10], eax
  __asm push dword ptr [esp + 0x10]
  __asm push dword ptr [esp + 0xc]
  __asm push 8
  __asm push esi
  __asm call LAB_10098513
  __asm mov ecx, eax
  __asm add esp, 0x10
  __asm test ecx, ecx
  __asm _emit 0x75 __asm _emit 0x16
  __asm mov eax, dword ptr [esi + 0x3c]
  __asm test byte ptr [eax + 0x24], 5
  __asm mov eax, ecx
  __asm setne al
  __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xc5 __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi + 4], eax
  __asm pop edi
  __asm mov eax, ecx
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 113f4e90; body size 94 bytes.
#line 1 "ENTRY_113f4e90"

__declspec(naked) void FUN_113f4e90(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push esi
  __asm call LAB_1008fdeb
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x4a
  __asm push edi
  __asm push esi
  __asm call LAB_1003c53d
  __asm mov edi, eax
  __asm add esp, 4
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x15
  __asm push 0xffff9200
  __asm push 0x28
  __asm push esi
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm ret
  __asm cmp dword ptr [esi + 0xc], 4
  __asm _emit 0x75 __asm _emit 0x14
  __asm mov eax, 0x14
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi + 4], eax
  __asm xor eax, eax
  __asm pop edi
  __asm pop esi
  __asm ret
  __asm mov eax, 0x16
  __asm mov dword ptr [esi + 4], eax
  __asm xor eax, eax
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 113f5150; body size 66 bytes.
#line 1 "ENTRY_113f5150"

__declspec(naked) void FUN_113f5150(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push dword ptr [esi]
  __asm call LAB_10004bec
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x05
  __asm or eax, 0xffffffff
  __asm pop esi
  __asm ret
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [eax], 0x2000009
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, dword ptr [eax + 0x90]
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov dword ptr [eax], ecx
  __asm mov eax, dword ptr [esi]
  __asm pop esi
  __asm mov ecx, dword ptr [eax + 0x94]
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov dword ptr [eax], ecx
  __asm xor eax, eax
  __asm ret
}



// Reference entry 113f52b0; body size 105 bytes.
#line 1 "ENTRY_113f52b0"

__declspec(naked) void FUN_113f52b0(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push esi
  __asm mov eax, dword ptr [edx + 0x3c]
  __asm mov esi, dword ptr [edx + 0x38]
  __asm cmp byte ptr [eax], 0
  __asm _emit 0x74 __asm _emit 0x54
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x50
  __asm cmp dword ptr [esi + 0x70], 0
  __asm _emit 0x74 __asm _emit 0x4a
  __asm mov eax, dword ptr [edx]
  __asm movzx ecx, byte ptr [esi + 0x8c]
  __asm and ecx, dword ptr [eax + 0x1c]
  __asm test cl, 5
  __asm _emit 0x74 __asm _emit 0x39
  __asm push dword ptr [esi + 0x10]
  __asm call LAB_10061cc5
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0c
  __asm movzx ecx, byte ptr [eax + 9]
  __asm or ecx, 0x2000000
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor ecx, ecx
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [eax], ecx
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov ecx, dword ptr [esi + 0x70]
  __asm mov dword ptr [eax], ecx
  __asm mov eax, dword ptr [esp + 0x14]
  __asm mov ecx, dword ptr [esi + 0x74]
  __asm pop esi
  __asm mov dword ptr [eax], ecx
  __asm xor eax, eax
  __asm ret
  __asm or eax, 0xffffffff
  __asm pop esi
  __asm ret
}



// Reference entry 113f5590; body size 108 bytes.
#line 1 "ENTRY_113f5590"

__declspec(naked) void FUN_113f5590(void)

{
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm xor ebx, ebx
  __asm mov eax, dword ptr [esi + 0x3c]
  __asm push dword ptr [eax + 0x5dc]
  __asm push esi
  __asm call LAB_10053e04
  __asm mov eax, dword ptr [esi + 0x3c]
  __asm add esp, 8
  __asm cmp byte ptr [eax + 0x4da], bl
  __asm _emit 0x74 __asm _emit 0x30
  __asm push esi
  __asm call LAB_100308b4
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x37
  __asm mov eax, dword ptr [esi + 0x3c]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0a
  __asm mov eax, dword ptr [eax + 0x438]
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x09
  __asm mov eax, dword ptr [esi]
  __asm mov eax, dword ptr [eax + 0x74]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x02
  __asm mov eax, dword ptr [eax]
  __asm xor ebx, ebx
  __asm test eax, eax
  __asm setne bl
  __asm test ebx, ebx
  __asm mov eax, 0x15
  __asm mov ecx, 0xb
  __asm cmove eax, ecx
  __asm mov dword ptr [esi + 4], eax
  __asm xor eax, eax
  __asm pop esi
  __asm pop ebx
  __asm ret
}



// Reference entry 113f5650; body size 40 bytes.
#line 1 "ENTRY_113f5650"

__declspec(naked) void FUN_113f5650(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push esi
  __asm call LAB_10023907
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x14
  __asm push esi
  __asm call LAB_10089ee6
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x07 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x0e __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 113f5d20; body size 30 bytes.
#line 1 "ENTRY_113f5d20"
int FUN_113f5d20(int a1) {

    if (*(int *)(a1 + 4) <= 771) {
        if (*(int *)a1 >= 771) {
            return (int)(1);
        }
    }
    return (int)(0);
}

// Reference entry 113f5df0; body size 62 bytes.
#line 1 "ENTRY_113f5df0"

__declspec(naked) void FUN_113f5df0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov eax, dword ptr [eax]
  __asm mov ecx, dword ptr [eax + 0x84]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x22
  __asm movzx eax, word ptr [ecx]
  __asm test ax, ax
  __asm _emit 0x74 __asm _emit 0x1a
  __asm mov si, word ptr [esp + 0xc]
  __asm mov edx, eax
  __asm cmp dx, si
  __asm _emit 0x74 __asm _emit 0x12
  __asm movzx eax, word ptr [ecx + 2]
  __asm add ecx, 2
  __asm mov edx, eax
  __asm test ax, ax
  __asm _emit 0x75 __asm _emit 0xed
  __asm xor eax, eax
  __asm pop esi
  __asm ret
  __asm mov eax, 1
  __asm pop esi
  __asm ret
}



// Reference entry 113f5e40; body size 56 bytes.
#line 1 "ENTRY_113f5e40"

__declspec(naked) void FUN_113f5e40(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ax, 0x1d
  __asm _emit 0x74 __asm _emit 0x18
  __asm cmp ax, 0x17
  __asm _emit 0x74 __asm _emit 0x12
  __asm cmp ax, 0x18
  __asm _emit 0x74 __asm _emit 0x0c
  __asm cmp ax, 0x19
  __asm _emit 0x74 __asm _emit 0x06
  __asm cmp ax, 0x1e
  __asm _emit 0x75 __asm _emit 0x13
  __asm push eax
  __asm call LAB_1002820e
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x06
  __asm mov eax, 1
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 113f5e90; body size 34 bytes.
#line 1 "ENTRY_113f5e90"
int FUN_113f5e90(int a1) {

    int v1 = (int)(*(int *)(a1 + 60)); // (int)&FUN_113f5e94
    if (v1 != 0) {
        int v2 = (int)(*(int *)(v1 + 1080)); // (int)&FUN_113f5e9b
        if (v2 != 0) {
            return (int)(*(int *)v2);
        }
    }
    int result = (int)(*(int *)(*(int *)a1 + 116)); // (int)&FUN_113f5ea7
    if (result == 0) {
        return (int)(result);
    }
    return (int)(*(int *)result);
}

// Reference entry 113f5ec0; body size 62 bytes.
#line 1 "ENTRY_113f5ec0"

__declspec(naked) void FUN_113f5ec0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov eax, dword ptr [eax]
  __asm mov ecx, dword ptr [eax + 0x80]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x22
  __asm movzx eax, word ptr [ecx]
  __asm test ax, ax
  __asm _emit 0x74 __asm _emit 0x1a
  __asm mov si, word ptr [esp + 0xc]
  __asm mov edx, eax
  __asm cmp dx, si
  __asm _emit 0x74 __asm _emit 0x12
  __asm movzx eax, word ptr [ecx + 2]
  __asm add ecx, 2
  __asm mov edx, eax
  __asm test ax, ax
  __asm _emit 0x75 __asm _emit 0xed
  __asm xor eax, eax
  __asm pop esi
  __asm ret
  __asm mov eax, 1
  __asm pop esi
  __asm ret
}



// Reference entry 113f5f10; body size 46 bytes.
#line 1 "ENTRY_113f5f10"

__declspec(naked) void FUN_113f5f10(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm xor ecx, ecx
  __asm push esi
  __asm mov eax, dword ptr [eax]
  __asm mov edx, dword ptr [eax + 0x18]
  __asm mov eax, dword ptr [edx]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x11
  __asm mov esi, dword ptr [esp + 0xc]
  __asm cmp eax, esi
  __asm _emit 0x74 __asm _emit 0x0d
  __asm mov eax, dword ptr [edx + ecx*4 + 4]
  __asm inc ecx
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0xf3
  __asm xor eax, eax
  __asm pop esi
  __asm ret
  __asm mov eax, 1
  __asm pop esi
  __asm ret
}



// Reference entry 113f69b0; body size 44 bytes.
#line 1 "ENTRY_113f69b0"

__declspec(naked) void FUN_113f69b0(void)

{
  __asm mov ax, word ptr [esp + 4]
  __asm cmp ax, 0x1d
  __asm _emit 0x74 __asm _emit 0x1b
  __asm cmp ax, 0x17
  __asm _emit 0x74 __asm _emit 0x15
  __asm cmp ax, 0x18
  __asm _emit 0x74 __asm _emit 0x0f
  __asm cmp ax, 0x19
  __asm _emit 0x74 __asm _emit 0x09
  __asm cmp ax, 0x1e
  __asm _emit 0x74 __asm _emit 0x03
  __asm xor eax, eax
  __asm ret
  __asm mov eax, 1
  __asm ret
}



// Reference entry 113f6b20; body size 46 bytes.
#line 1 "ENTRY_113f6b20"

__declspec(naked) void FUN_113f6b20(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov edx, dword ptr [ecx + 0x3c]
  __asm mov al, byte ptr [edx + 2]
  __asm cmp al, 3
  __asm _emit 0x75 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm mov al, byte ptr [eax + 0xa]
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0x10
  __asm mov eax, dword ptr [ecx + 0x38]
  __asm mov dword ptr [eax + 0x6c], 0x80
  __asm mov eax, 1
  __asm ret
  __asm mov byte ptr [edx + 3], 1
  __asm xor eax, eax
  __asm ret
}



// Reference entry 113f6b60; body size 242 bytes.
#line 1 "ENTRY_113f6b60"

__declspec(naked) void FUN_113f6b60(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, dword ptr [esi + 0x3c]
  __asm cmp dword ptr [eax + 0x98], 0
  __asm je LAB_113f6c4c
  __asm cmp byte ptr [ecx], 0
  __asm je LAB_113f6c4c
  __asm cmp word ptr [ecx + 0x434], 0
  __asm jne LAB_113f6c4c
  __asm mov eax, dword ptr [ecx + 0x10]
  __asm mov edx, dword ptr [esi + 0x38]
  __asm mov eax, dword ptr [eax]
  __asm cmp eax, dword ptr [edx + 0x10]
  __asm jne LAB_113f6c4c
  __asm test byte ptr [edx + 0x8c], 8
  __asm je LAB_113f6c4c
  __asm push esi
  __asm call LAB_10074712
  __asm mov edx, eax
  __asm add esp, 4
  __asm test edx, edx
  __asm _emit 0x75 __asm _emit 0x14
  __asm mov eax, dword ptr [esi + 0x38]
  __asm cmp dword ptr [eax + 0xc4], edx
  __asm jne LAB_113f6c4c
  __asm pop edi
  __asm xor eax, eax
  __asm pop esi
  __asm ret
  __asm mov ecx, edx
  __asm lea edi, [ecx + 1]
  __asm mov al, byte ptr [ecx]
  __asm inc ecx
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0xf9
  __asm mov eax, dword ptr [esi + 0x38]
  __asm sub ecx, edi
  __asm mov esi, dword ptr [eax + 0xc4]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x61
  __asm mov edi, esi
  __asm push ebx
  __asm lea ebx, [edi + 1]
  __asm mov al, byte ptr [edi]
  __asm inc edi
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0xf9
  __asm sub edi, ebx
  __asm pop ebx
  __asm cmp ecx, edi
  __asm _emit 0x75 __asm _emit 0x4d
  __asm sub ecx, 4
  __asm _emit 0x72 __asm _emit 0x11
  __asm mov eax, dword ptr [edx]
  __asm cmp eax, dword ptr [esi]
  __asm _emit 0x75 __asm _emit 0x10
  __asm add edx, 4
  __asm add esi, 4
  __asm sub ecx, 4
  __asm _emit 0x73 __asm _emit 0xef
  __asm cmp ecx, -4
  __asm _emit 0x74 __asm _emit 0x2d
  __asm mov al, byte ptr [edx]
  __asm cmp al, byte ptr [esi]
  __asm _emit 0x75 __asm _emit 0x2c
  __asm cmp ecx, -3
  __asm _emit 0x74 __asm _emit 0x22
  __asm mov al, byte ptr [edx + 1]
  __asm cmp al, byte ptr [esi + 1]
  __asm _emit 0x75 __asm _emit 0x1f
  __asm cmp ecx, -2
  __asm _emit 0x74 __asm _emit 0x15
  __asm mov al, byte ptr [edx + 2]
  __asm cmp al, byte ptr [esi + 2]
  __asm _emit 0x75 __asm _emit 0x12
  __asm cmp ecx, -1
  __asm _emit 0x74 __asm _emit 0x08
  __asm mov al, byte ptr [edx + 3]
  __asm cmp al, byte ptr [esi + 3]
  __asm _emit 0x75 __asm _emit 0x05
  __asm pop edi
  __asm xor eax, eax
  __asm pop esi
  __asm ret
  __asm pop edi
  __asm or eax, 0xffffffff
  __asm pop esi
  __asm ret
}



// Reference entry 113f6cc0; body size 31 bytes.
#line 1 "ENTRY_113f6cc0"
int FUN_113f6cc0(int a1) {

    int v1 = (int)(*(int *)(*(int *)(a1 + 60) + 1488)); // (int)&FUN_113f6cc7
    return (int)((v1 & 0x400030) == 0x400030);
}

// Reference entry 113f6cf0; body size 31 bytes.
#line 1 "ENTRY_113f6cf0"
int FUN_113f6cf0(int a1) {

    int v1 = (int)(*(int *)(*(int *)(a1 + 60) + 1488)); // (int)&FUN_113f6cf7
    return (int)((v1 & 0x422010) == 0x422010);
}

// Reference entry 113f6d20; body size 31 bytes.
#line 1 "ENTRY_113f6d20"
int FUN_113f6d20(int a1) {

    int v1 = (int)(*(int *)(*(int *)(a1 + 60) + 1488)); // (int)&FUN_113f6d27
    return (int)((v1 & 0x22000) == 0x22000);
}

// Reference entry 113f6d50; body size 116 bytes.
#line 1 "ENTRY_113f6d50"

__declspec(naked) void FUN_113f6d50(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push 0
  __asm push esi
  __asm call LAB_1002a0ae
  __asm add esp, 8
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x5e
  __asm mov eax, dword ptr [esi + 0x7c]
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xb0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp eax, 0x16
  __asm _emit 0x75 __asm _emit 0x0c
  __asm mov eax, dword ptr [esi + 0x74]
  __asm cmp byte ptr [eax], 5
  __asm _emit 0x75 __asm _emit 0x2f
  __asm xor eax, eax
  __asm pop esi
  __asm ret
  __asm cmp eax, 0x17
  __asm _emit 0x75 __asm _emit 0x26
  __asm cmp dword ptr [esi + 0x78], 0
  __asm _emit 0x75 __asm _emit 0x19
  __asm push dword ptr [esi + 0x80]
  __asm mov eax, dword ptr [esi + 0x74]
  __asm push esi
  __asm mov dword ptr [esi + 0x78], eax
  __asm call LAB_10018fa2
  __asm add esp, 8
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x1c
  __asm mov eax, 1
  __asm pop esi
  __asm ret
  __asm push 0xffff8900
  __asm push 0xa
  __asm push esi
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, 0xffff8900
  __asm pop esi
  __asm ret
}



// Reference entry 113f6e00; body size 85 bytes.
#line 1 "ENTRY_113f6e00"

__declspec(naked) void FUN_113f6e00(void)

{
  __asm mov edx, dword ptr [esp + 0x14]
  __asm mov ecx, dword ptr [esp + 8]
  __asm _emit 0xc7 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp cx, 0x1d
  __asm _emit 0x74 __asm _emit 0x2a
  __asm cmp cx, 0x17
  __asm _emit 0x74 __asm _emit 0x24
  __asm cmp cx, 0x18
  __asm _emit 0x74 __asm _emit 0x1e
  __asm cmp cx, 0x19
  __asm _emit 0x74 __asm _emit 0x18
  __asm cmp cx, 0x1e
  __asm _emit 0x74 __asm _emit 0x12
  __asm lea eax, [ecx - 0x100]
  __asm cmp ax, 4
  __asm _emit 0x76 __asm _emit 0x06
  __asm mov eax, 0xffff9400
  __asm ret
  __asm push edx
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x14]
  __asm push ecx
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_10010c12
  __asm add esp, 0x14
  __asm ret
}



// Reference entry 113f6e70; body size 39 bytes.
#line 1 "ENTRY_113f6e70"

__declspec(naked) void FUN_113f6e70(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push esi
  __asm call LAB_100216cf
  __asm mov eax, dword ptr [esi + 0x3c]
  __asm add esp, 4
  __asm test byte ptr [eax + 0x27], 5
  __asm mov eax, 0
  __asm setne al
  __asm add eax, 0x1b
  __asm mov dword ptr [esi + 4], eax
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 113f6ea0; body size 42 bytes.
#line 1 "ENTRY_113f6ea0"
int FUN_113f6ea0(int a1) {

    if ((*(char *)(*(int *)a1 + 28) & 2) != 0) {
        if ((*(int *)(*(int *)(a1 + 60) + 1488) & 0x400030) == 0x400030) {
            return (int)(1);
        }
    }
    return (int)(0);
}

// Reference entry 113f74d0; body size 273 bytes.
#line 1 "ENTRY_113f74d0"

__declspec(naked) void FUN_113f74d0(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 8]
  __asm push edi
  __asm mov eax, dword ptr [ebx]
  __asm cmp dword ptr [eax + 0x68], 0
  __asm je LAB_113f75d9
  __asm mov edi, dword ptr [esp + 0x14]
  __asm test edi, edi
  __asm je LAB_113f75d9
  __asm push esi
  __asm push edi
  __asm push 1
  __asm call dword ptr [LAB_122fc7b0]
  __asm mov esi, eax
  __asm add esp, 8
  __asm test esi, esi
  __asm _emit 0x75 __asm _emit 0x09
  __asm pop esi
  __asm pop edi
  __asm mov eax, 0xffff8100
  __asm pop ebx
  __asm ret
  __asm push edi
  __asm push dword ptr [esp + 0x18]
  __asm push esi
  __asm call LAB_1148cded
  __asm mov eax, dword ptr [ebx]
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x30]
  __asm push edi
  __asm push esi
  __asm push ebx
  __asm push dword ptr [eax + 0x6c]
  __asm mov eax, dword ptr [eax + 0x68]
  __asm call eax
  __asm add esp, 0x20
  __asm push esi
  __asm cmp eax, 0xffff8e80
  __asm je LAB_113f75bc
  __asm cmp eax, 0xffff9280
  __asm _emit 0x74 __asm _emit 0x78
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x7b
  __asm call dword ptr [LAB_122fc7ac]
  __asm add esp, 4
  __asm mov edi, 1
  __asm cmp dword ptr [ebx + 4], 0x304
  __asm _emit 0x75 __asm _emit 0x72
  __asm call LAB_10095c1e
  __asm mov esi, dword ptr [ebx + 0x84]
  __asm mov ecx, eax
  __asm mov eax, dword ptr [ebx + 0x80]
  __asm cmp edx, esi
  __asm _emit 0x7c __asm _emit 0x5b __asm _emit 0x7f __asm _emit 0x04
  __asm cmp ecx, eax
  __asm _emit 0x72 __asm _emit 0x55
  __asm sub ecx, eax
  __asm sbb edx, esi
  __asm test edx, edx
  __asm _emit 0x7f __asm _emit 0x4d __asm _emit 0x7c __asm _emit 0x08
  __asm cmp ecx, 0x240c8400
  __asm _emit 0x77 __asm _emit 0x43
  __asm mov eax, dword ptr [esp + 0x1c]
  __asm sub eax, dword ptr [ebx + 0x88]
  __asm sub ecx, eax
  __asm sbb edx, 0
  __asm add ecx, 0x1770
  __asm adc edx, 0
  __asm test edx, edx
  __asm _emit 0x77 __asm _emit 0x27 __asm _emit 0x72 __asm _emit 0x08
  __asm cmp ecx, 0x2ee0
  __asm _emit 0x77 __asm _emit 0x1d
  __asm xor edi, edi
  __asm pop esi
  __asm mov eax, edi
  __asm pop edi
  __asm pop ebx
  __asm ret
  __asm mov edi, 1
  __asm _emit 0xeb __asm _emit 0x05
  __asm mov edi, 2
  __asm call dword ptr [LAB_122fc7ac]
  __asm add esp, 4
  __asm push ebx
  __asm call LAB_10060e56
  __asm add esp, 4
  __asm mov eax, edi
  __asm pop esi
  __asm pop edi
  __asm pop ebx
  __asm ret
  __asm pop edi
  __asm mov eax, 2
  __asm pop ebx
  __asm ret
}



// Reference entry 113f80a0; body size 38 bytes.
#line 1 "ENTRY_113f80a0"

__declspec(naked) void FUN_113f80a0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm cmp eax, dword ptr [esp + 0xc]
  __asm _emit 0x74 __asm _emit 0x19
  __asm push 0xffff8d00
  __asm push 0x32
  __asm push dword ptr [esp + 0xc]
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, 0xffff8d00
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 113f80d0; body size 200 bytes.
#line 1 "ENTRY_113f80d0"

__declspec(naked) void FUN_113f80d0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm xor edx, edx
  __asm push 1
  __asm push dword ptr [esp + 0x18]
  __asm push edi
  __asm call LAB_113f5cf0
  __asm add esp, 0xc
  __asm test eax, eax
  __asm jne LAB_113f817d
  __asm movzx esi, byte ptr [edi]
  __asm inc edi
  __asm cmp esi, 2
  __asm _emit 0x76 __asm _emit 0x1b
  __asm push 0xffff9a00
  __asm push 0x2f
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, 0xffff9200
  __asm pop edi
  __asm pop esi
  __asm ret
  __asm push esi
  __asm push dword ptr [esp + 0x18]
  __asm push edi
  __asm call LAB_113f5cf0
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x58
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x2a __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x80 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm movzx eax, byte ptr [edi]
  __asm lea edi, [edi + 1]
  __asm dec esi
  __asm sub eax, 0
  __asm _emit 0x74 __asm _emit 0x0c
  __asm sub eax, 1
  __asm _emit 0x75 __asm _emit 0x21
  __asm mov eax, 4
  __asm _emit 0xeb __asm _emit 0x05
  __asm mov eax, 1
  __asm or edx, eax
  __asm test esi, esi
  __asm _emit 0x75 __asm _emit 0xdd
  __asm mov eax, dword ptr [esp + 0xc]
  __asm pop edi
  __asm pop esi
  __asm mov eax, dword ptr [eax + 0x3c]
  __asm mov byte ptr [eax + 0x27], dl
  __asm xor eax, eax
  __asm ret
  __asm push 0xffff9a00
  __asm push 0x2f
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, 0xffff9a00
  __asm pop edi
  __asm pop esi
  __asm ret
  __asm push 0xffff8d00
  __asm push 0x32
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, 0xffff8d00
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 113f8936; body size 114 bytes.
#line 1 "ENTRY_113f8936"

__declspec(naked) void FUN_113f8936(void)

{
  __asm mov eax, dword ptr [ebp]
  __asm movzx esi, cx
  __asm mov ecx, dword ptr [eax + 0x84]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x53
  __asm movzx eax, word ptr [ecx]
  __asm test ax, ax
  __asm _emit 0x74 __asm _emit 0x4b
  __asm mov edx, eax
  __asm cmp dx, si
  __asm _emit 0x74 __asm _emit 0x10
  __asm movzx eax, word ptr [ecx + 2]
  __asm add ecx, 2
  __asm mov edx, eax
  __asm test ax, ax
  __asm _emit 0x75 __asm _emit 0xed __asm _emit 0xeb __asm _emit 0x34
  __asm cmp esi, 0x1d
  __asm _emit 0x74 __asm _emit 0x14
  __asm cmp esi, 0x17
  __asm _emit 0x74 __asm _emit 0x0f
  __asm cmp esi, 0x18
  __asm _emit 0x74 __asm _emit 0x0a
  __asm cmp esi, 0x19
  __asm _emit 0x74 __asm _emit 0x05
  __asm cmp esi, 0x1e
  __asm _emit 0x75 __asm _emit 0x1b
  __asm push esi
  __asm call LAB_1002820e
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0e
  __asm mov eax, dword ptr [ebp + 0x3c]
  __asm cmp word ptr [eax + 0x28], 0
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov word ptr [eax + 0x28], si
  __asm cmp edi, ebx
  __asm jb LAB_113f8918
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm xor eax, eax
  __asm pop ebx
  __asm ret
  __asm push 0xffff8d00
  __asm push 0x32
  __asm push ebp
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, 0xffff8d00
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret
}



// Reference entry 113f8a10; body size 193 bytes.
#line 1 "ENTRY_113f8a10"

__declspec(naked) void FUN_113f8a10(void)

{
  __asm mov edx, dword ptr [esp + 0xc]
  __asm push ebx
  __asm push ebp
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x14]
  __asm push edi
  __asm push 1
  __asm push edx
  __asm push esi
  __asm call LAB_113f5cf0
  __asm mov ebx, dword ptr [esp + 0x20]
  __asm add esp, 0xc
  __asm test eax, eax
  __asm jne LAB_113f8ab7
  __asm movzx edi, byte ptr [esi]
  __asm inc esi
  __asm push edi
  __asm push edx
  __asm push esi
  __asm call LAB_113f5cf0
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x70
  __asm add edi, esi
  __asm cmp esi, edi
  __asm _emit 0x73 __asm _emit 0x49
  __asm mov ebp, 0x303
  __asm push 2
  __asm push edi
  __asm push esi
  __asm call LAB_113f5cf0
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x55
  __asm mov eax, dword ptr [ebx]
  __asm movzx eax, byte ptr [eax + 9]
  __asm push eax
  __asm push esi
  __asm call LAB_1006c5f3
  __asm movzx ecx, ax
  __asm add esp, 8
  __asm mov eax, 0x304
  __asm add esi, 2
  __asm cmp ax, cx
  __asm _emit 0x74 __asm _emit 0x2e
  __asm cmp bp, cx
  __asm _emit 0x75 __asm _emit 0x0b
  __asm mov eax, dword ptr [ebx]
  __asm cmp dword ptr [eax + 4], ebp
  __asm _emit 0x7f __asm _emit 0x04
  __asm cmp dword ptr [eax], ebp
  __asm _emit 0x7d __asm _emit 0x1e
  __asm cmp esi, edi
  __asm _emit 0x72 __asm _emit 0xbc
  __asm push 0xffff9180
  __asm push 0x46
  __asm push ebx
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, 0xffff9180
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm mov eax, ecx
  __asm pop ebx
  __asm ret
  __asm push 0xffff8d00
  __asm push 0x32
  __asm push ebx
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, 0xffff8d00
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret
}



// Reference entry 113f8b10; body size 102 bytes.
#line 1 "ENTRY_113f8b10"

__declspec(naked) void FUN_113f8b10(void)

{
  __asm push ebx
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0xc]
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [ebp + 0x3c]
  __asm mov ebx, dword ptr [eax + 0x43c]
  __asm lea edi, [eax + 0x2c]
  __asm test ebx, ebx
  __asm _emit 0x75 __asm _emit 0x0e
  __asm mov eax, dword ptr [ebp]
  __asm mov ebx, dword ptr [eax + 0x74]
  __asm test ebx, ebx
  __asm je LAB_113f8bf7
  __asm movzx esi, word ptr [edi]
  __asm test si, si
  __asm je LAB_113f8bf7
  __asm mov eax, dword ptr [ebp]
  __asm mov ecx, dword ptr [eax + 0x80]
  __asm test ecx, ecx
  __asm je LAB_113f8be7
  __asm movzx eax, word ptr [ecx]
  __asm test ax, ax
  __asm je LAB_113f8be7
  __asm mov edx, eax
  __asm cmp dx, si
  __asm _emit 0x74 __asm _emit 0x10
  __asm movzx eax, word ptr [ecx + 2]
  __asm add ecx, 2
  __asm mov edx, eax
  __asm test ax, ax
  __asm _emit 0x75 __asm _emit 0xed __asm _emit 0xeb __asm _emit 0x71
}



// Reference entry 113f8c50; body size 400 bytes.
#line 1 "ENTRY_113f8c50"

__declspec(naked) void FUN_113f8c50(void)

{
  __asm push edi
  __asm mov edi, dword ptr [esp + 8]
  __asm mov eax, dword ptr [edi]
  __asm mov eax, dword ptr [eax + 0xb8]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0e
  __asm push edi
  __asm call eax
  __asm add esp, 4
  __asm test eax, eax
  __asm jne LAB_113f8dde
  __asm mov eax, dword ptr [edi + 0x3c]
  __asm push edi
  __asm _emit 0xc7 __asm _emit 0x80 __asm _emit 0xa4 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [edi + 0x3c]
  __asm _emit 0xc7 __asm _emit 0x80 __asm _emit 0xa8 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10040692
  __asm add esp, 4
  __asm test eax, eax
  __asm jne LAB_113f8dde
  __asm mov ecx, dword ptr [edi + 0x3c]
  __asm push ebx
  __asm test dword ptr [ecx + 0x5d0], 0x4000
  __asm je LAB_113f8ddb
  __asm mov ebx, dword ptr [esp + 0x10]
  __asm push esi
  __asm test ebx, ebx
  __asm jne LAB_113f8dac
  __asm mov eax, dword ptr [edi]
  __asm cmp dword ptr [eax + 0x98], ebx
  __asm je LAB_113f8dac
  __asm cmp byte ptr [ecx], bl
  __asm je LAB_113f8dac
  __asm cmp word ptr [ecx + 0x434], bx
  __asm jne LAB_113f8dac
  __asm mov eax, dword ptr [ecx + 0x10]
  __asm mov edx, dword ptr [edi + 0x38]
  __asm mov eax, dword ptr [eax]
  __asm cmp eax, dword ptr [edx + 0x10]
  __asm jne LAB_113f8dac
  __asm test byte ptr [edx + 0x8c], 8
  __asm je LAB_113f8dac
  __asm push edi
  __asm call LAB_10074712
  __asm mov edx, eax
  __asm add esp, 4
  __asm test edx, edx
  __asm _emit 0x75 __asm _emit 0x16
  __asm mov eax, dword ptr [edi + 0x38]
  __asm cmp dword ptr [eax + 0xc4], edx
  __asm jne LAB_113f8dac
  __asm mov cl, 1
  __asm jmp LAB_113f8dae
  __asm mov ecx, edx
  __asm lea esi, [ecx + 1]
  __asm mov al, byte ptr [ecx]
  __asm inc ecx
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0xf9
  __asm mov eax, dword ptr [edi + 0x38]
  __asm sub ecx, esi
  __asm mov esi, dword ptr [eax + 0xc4]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x70
  __asm mov ebx, esi
  __asm push ebp
  __asm lea ebp, [ebx + 1]
  __asm mov al, byte ptr [ebx]
  __asm inc ebx
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0xf9
  __asm sub ebx, ebp
  __asm pop ebp
  __asm cmp ecx, ebx
  __asm _emit 0x75 __asm _emit 0x58
  __asm sub ecx, 4
  __asm _emit 0x72 __asm _emit 0x11
  __asm mov eax, dword ptr [edx]
  __asm cmp eax, dword ptr [esi]
  __asm _emit 0x75 __asm _emit 0x10
  __asm add edx, 4
  __asm add esi, 4
  __asm sub ecx, 4
  __asm _emit 0x73 __asm _emit 0xef
  __asm cmp ecx, -4
  __asm _emit 0x74 __asm _emit 0x35
  __asm mov al, byte ptr [edx]
  __asm cmp al, byte ptr [esi]
  __asm _emit 0x75 __asm _emit 0x37
  __asm cmp ecx, -3
  __asm _emit 0x74 __asm _emit 0x2a
  __asm mov al, byte ptr [edx + 1]
  __asm cmp al, byte ptr [esi + 1]
  __asm _emit 0x75 __asm _emit 0x2a
  __asm cmp ecx, -2
  __asm _emit 0x74 __asm _emit 0x1d
  __asm mov al, byte ptr [edx + 2]
  __asm cmp al, byte ptr [esi + 2]
  __asm _emit 0x75 __asm _emit 0x1d
  __asm mov ebx, dword ptr [esp + 0x14]
  __asm cmp ecx, -1
  __asm _emit 0x74 __asm _emit 0x10
  __asm mov al, byte ptr [edx + 3]
  __asm cmp al, byte ptr [esi + 3]
  __asm _emit 0x75 __asm _emit 0x10
  __asm mov cl, 1
  __asm _emit 0xeb __asm _emit 0x0e
  __asm mov ebx, dword ptr [esp + 0x14]
  __asm mov cl, 1
  __asm _emit 0xeb __asm _emit 0x06
  __asm mov ebx, dword ptr [esp + 0x14]
  __asm xor cl, cl
  __asm mov eax, dword ptr [edi + 0x3c]
  __asm pop esi
  __asm mov byte ptr [eax + 4], cl
  __asm mov eax, dword ptr [edi + 0x3c]
  __asm cmp byte ptr [eax + 4], 0
  __asm _emit 0x74 __asm _emit 0x10
  __asm push edi
  __asm call LAB_1004b60a
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x10
  __asm pop ebx
  __asm pop edi
  __asm ret
  __asm test ebx, ebx
  __asm setne al
  __asm inc al
  __asm mov byte ptr [edi + 0xbd], al
  __asm xor eax, eax
  __asm pop ebx
  __asm pop edi
  __asm ret
}



// Reference entry 113f8e70; body size 64 bytes.
#line 1 "ENTRY_113f8e70"

__declspec(naked) void FUN_113f8e70(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov eax, dword ptr [esi + 0x3c]
  __asm cmp byte ptr [eax + 0x25], 0
  __asm _emit 0x74 __asm _emit 0x17
  __asm push 0xffff9200
  __asm push 0x28
  __asm push esi
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, 0xffff9200
  __asm pop esi
  __asm ret
  __asm push esi
  __asm call LAB_10033370
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x0c
  __asm push eax
  __asm push esi
  __asm call LAB_1008a9e5
  __asm add esp, 8
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 113f90c0; body size 56 bytes.
#line 1 "ENTRY_113f90c0"

__declspec(naked) void FUN_113f90c0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push 0x20
  __asm mov eax, dword ptr [esi + 0x3c]
  __asm mov ecx, dword ptr [esi]
  __asm add eax, 0x544
  __asm push eax
  __asm push dword ptr [ecx + 0x2c]
  __asm mov eax, dword ptr [ecx + 0x28]
  __asm call eax
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x15
  __asm push eax
  __asm call dword ptr [LAB_122fca5c]
  __asm mov ecx, dword ptr [esi + 0x38]
  __asm add esp, 4
  __asm mov dword ptr [ecx + 8], eax
  __asm xor eax, eax
  __asm mov dword ptr [ecx + 0xc], edx
  __asm pop esi
  __asm ret
}



// Reference entry 113f9110; body size 38 bytes.
#line 1 "ENTRY_113f9110"

__declspec(naked) void FUN_113f9110(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push esi
  __asm call LAB_1008fdeb
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x12
  __asm push esi
  __asm call LAB_10089ee6
  __asm add esp, 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x0f __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 113f9740; body size 73 bytes.
#line 1 "ENTRY_113f9740"

__declspec(naked) void FUN_113f9740(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm xor ecx, ecx
  __asm mov eax, dword ptr [edi]
  __asm mov esi, dword ptr [eax + 0x18]
  __asm mov eax, dword ptr [esi]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x11
  __asm mov edx, dword ptr [esp + 0x10]
  __asm cmp eax, edx
  __asm _emit 0x74 __asm _emit 0x0e
  __asm mov eax, dword ptr [esi + ecx*4 + 4]
  __asm inc ecx
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0xf3
  __asm pop edi
  __asm xor eax, eax
  __asm pop esi
  __asm ret
  __asm push edx
  __asm call LAB_10061cc5
  __asm mov ecx, dword ptr [edi + 8]
  __asm mov esi, eax
  __asm push ecx
  __asm push ecx
  __asm push esi
  __asm push edi
  __asm call LAB_1005d337
  __asm add esp, 0x14
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0xe0
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret
}



// Reference entry 113f98d0; body size 121 bytes.
#line 1 "ENTRY_113f98d0"

__declspec(naked) void FUN_113f98d0(void)

{
  __asm push ecx
  __asm mov edx, dword ptr [esp + 0x10]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x1c]
  __asm push 3
  __asm push edx
  __asm push esi
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_113f5cf0
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x09
  __asm pop edi
  __asm mov eax, 0xffff9600
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm push ebx
  __asm push ebp
  __asm lea eax, [esp + 0x10]
  __asm mov byte ptr [esi], 0
  __asm push eax
  __asm lea ebx, [esi + 1]
  __asm push edx
  __asm lea ebp, [ebx + 2]
  __asm push ebp
  __asm push dword ptr [esp + 0x24]
  __asm call LAB_1006629d
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x1b
  __asm mov eax, dword ptr [esp + 0x10]
  __asm lea edx, [eax + ebp]
  __asm mov ecx, edx
  __asm sub edx, esi
  __asm sub ecx, ebx
  __asm sub ecx, 2
  __asm mov ah, cl
  __asm mov al, ch
  __asm mov word ptr [ebx], ax
  __asm xor eax, eax
  __asm mov dword ptr [edi], edx
  __asm pop ebp
  __asm pop ebx
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 113f9ad0; body size 141 bytes.
#line 1 "ENTRY_113f9ad0"

__declspec(naked) void FUN_113f9ad0(void)

{
  __asm mov eax, dword ptr [esp + 0x10]
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm push 2
  __asm push ebx
  __asm push edi
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_113f5cf0
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x08
  __asm pop edi
  __asm mov eax, 0xffff9600
  __asm pop ebx
  __asm ret
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x10]
  __asm lea eax, [esp + 0x14]
  __asm push esi
  __asm push eax
  __asm push ebx
  __asm lea esi, [edi + 2]
  __asm push esi
  __asm push ebp
  __asm call LAB_1005e1ce
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x3f
  __asm mov eax, dword ptr [ebp + 0x3c]
  __asm add esi, dword ptr [esp + 0x18]
  __asm cmp byte ptr [eax + 4], 0
  __asm _emit 0x74 __asm _emit 0x1a
  __asm lea eax, [esp + 0x18]
  __asm push eax
  __asm push ebx
  __asm push esi
  __asm push 0
  __asm push ebp
  __asm call LAB_1004ee4a
  __asm add esp, 0x14
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x1c
  __asm add esi, dword ptr [esp + 0x18]
  __asm mov ecx, esi
  __asm sub esi, edi
  __asm sub ecx, edi
  __asm sub ecx, 2
  __asm mov ah, cl
  __asm mov al, ch
  __asm mov word ptr [edi], ax
  __asm mov eax, dword ptr [esp + 0x20]
  __asm mov dword ptr [eax], esi
  __asm xor eax, eax
  __asm pop esi
  __asm pop ebp
  __asm pop edi
  __asm pop ebx
  __asm ret
}



// Reference entry 113fa480; body size 132 bytes.
#line 1 "ENTRY_113fa480"

__declspec(naked) void FUN_113fa480(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push esi
  __asm call LAB_10023907
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x70
  __asm push edi
  __asm push esi
  __asm call LAB_1003c53d
  __asm mov edi, eax
  __asm add esp, 4
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x15
  __asm push 0xffff9200
  __asm push 0x28
  __asm push esi
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm ret
  __asm mov eax, dword ptr [esi + 0x3c]
  __asm cmp byte ptr [eax + 4], 0
  __asm _emit 0x74 __asm _emit 0x1b
  __asm push dword ptr [eax + 0x6a0]
  __asm push esi
  __asm call LAB_100638c7
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm xor eax, eax
  __asm pop edi
  __asm pop esi
  __asm ret
  __asm push dword ptr [eax + 0x5dc]
  __asm push esi
  __asm call LAB_100638c7
  __asm mov eax, dword ptr [esi + 0x3c]
  __asm xor ecx, ecx
  __asm add esp, 8
  __asm cmp byte ptr [eax + 3], cl
  __asm pop edi
  __asm sete cl
  __asm xor eax, eax
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi + 4], ecx
  __asm pop esi
  __asm ret
}



// Reference entry 113fac60; body size 92 bytes.
#line 1 "ENTRY_113fac60"

__declspec(naked) void FUN_113fac60(void)

{
  __asm mov ax, word ptr [esp + 4]
  __asm cmp ax, 0x1d
  __asm _emit 0x74 __asm _emit 0x4b
  __asm cmp ax, 0x1a
  __asm _emit 0x74 __asm _emit 0x45
  __asm cmp ax, 0x1b
  __asm _emit 0x74 __asm _emit 0x3f
  __asm cmp ax, 0x1c
  __asm _emit 0x74 __asm _emit 0x39
  __asm cmp ax, 0x1e
  __asm _emit 0x74 __asm _emit 0x33
  __asm cmp ax, 0x12
  __asm _emit 0x74 __asm _emit 0x2d
  __asm cmp ax, 0x13
  __asm _emit 0x74 __asm _emit 0x27
  __asm cmp ax, 0x14
  __asm _emit 0x74 __asm _emit 0x21
  __asm cmp ax, 0x15
  __asm _emit 0x74 __asm _emit 0x1b
  __asm cmp ax, 0x16
  __asm _emit 0x74 __asm _emit 0x15
  __asm cmp ax, 0x17
  __asm _emit 0x74 __asm _emit 0x0f
  __asm cmp ax, 0x18
  __asm _emit 0x74 __asm _emit 0x09
  __asm cmp ax, 0x19
  __asm _emit 0x74 __asm _emit 0x03
  __asm xor eax, eax
  __asm ret
  __asm mov eax, 1
  __asm ret
}



// Reference entry 113face0; body size 44 bytes.
#line 1 "ENTRY_113face0"

__declspec(naked) void FUN_113face0(void)

{
  __asm mov ax, word ptr [esp + 4]
  __asm cmp ax, 0x1d
  __asm _emit 0x74 __asm _emit 0x1b
  __asm cmp ax, 0x17
  __asm _emit 0x74 __asm _emit 0x15
  __asm cmp ax, 0x18
  __asm _emit 0x74 __asm _emit 0x0f
  __asm cmp ax, 0x19
  __asm _emit 0x74 __asm _emit 0x09
  __asm cmp ax, 0x1e
  __asm _emit 0x74 __asm _emit 0x03
  __asm xor eax, eax
  __asm ret
  __asm mov eax, 1
  __asm ret
}



// Reference entry 113faf40; body size 73 bytes.
#line 1 "ENTRY_113faf40"

__declspec(naked) void FUN_113faf40(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm xor edx, edx
  __asm mov esi, dword ptr [edi + 0x3c]
  __asm add esi, 0x524
  __asm cmp dword ptr [edi + 8], 0x303
  __asm _emit 0x75 __asm _emit 0x13
  __asm push edx
  __asm call dword ptr [LAB_122fca5c]
  __asm bswap eax
  __asm add esp, 4
  __asm mov dword ptr [esi], eax
  __asm mov edx, 4
  __asm mov ecx, dword ptr [edi]
  __asm mov eax, 0x20
  __asm sub eax, edx
  __asm push eax
  __asm lea eax, [edx + esi]
  __asm push eax
  __asm push dword ptr [ecx + 0x2c]
  __asm mov eax, dword ptr [ecx + 0x28]
  __asm call eax
  __asm add esp, 0xc
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 113fdcf0; body size 44 bytes.
#line 1 "ENTRY_113fdcf0"

__declspec(naked) void FUN_113fdcf0(void)

{
  __asm mov ax, word ptr [esp + 4]
  __asm cmp ax, 0x1d
  __asm _emit 0x74 __asm _emit 0x1b
  __asm cmp ax, 0x17
  __asm _emit 0x74 __asm _emit 0x15
  __asm cmp ax, 0x18
  __asm _emit 0x74 __asm _emit 0x0f
  __asm cmp ax, 0x19
  __asm _emit 0x74 __asm _emit 0x09
  __asm cmp ax, 0x1e
  __asm _emit 0x74 __asm _emit 0x03
  __asm xor eax, eax
  __asm ret
  __asm mov eax, 1
  __asm ret
}



// Reference entry 113fdf20; body size 35 bytes.
#line 1 "ENTRY_113fdf20"

__declspec(naked) void FUN_113fdf20(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0xa9 __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0x07
  __asm or eax, 0x400
  __asm mov dword ptr [ecx], eax
  __asm _emit 0xa9 __asm _emit 0x00 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0x07
  __asm or eax, 0x800
  __asm mov dword ptr [ecx], eax
  __asm ret
}



// Reference entry 113fdf80; body size 48 bytes.
#line 1 "ENTRY_113fdf80"

__declspec(naked) void FUN_113fdf80(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov edx, ecx
  __asm mov eax, ecx
  __asm or edx, 0x400
  __asm and eax, 0x1000
  __asm cmove edx, ecx
  __asm mov ecx, edx
  __asm mov eax, edx
  __asm or ecx, 0x800
  __asm and eax, 0x2000
  __asm mov eax, dword ptr [esp + 4]
  __asm cmove ecx, edx
  __asm mov dword ptr [eax + 8], ecx
  __asm ret
}



// Reference entry 113feb30; body size 119 bytes.
#line 1 "ENTRY_113feb30"

__declspec(naked) void FUN_113feb30(void)

{
  __asm mov eax, dword ptr [esp + 0x18]
  __asm mov edx, dword ptr [esp + 4]
  __asm mov ecx, edx
  __asm push ebx
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x1c]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x18]
  __asm add ebp, 4
  __asm push edi
  __asm lea edi, [eax + 1]
  __asm shr ecx, 8
  __asm mov byte ptr [edi], dl
  __asm mov byte ptr [eax], cl
  __asm lea ebx, [esi + 6]
  __asm mov byte ptr [edi + 1], bl
  __asm add ebp, ebx
  __asm mov eax, dword ptr [LAB_11bfd9b8]
  __asm mov dword ptr [edi + 2], eax
  __asm mov ax, word ptr [LAB_11bfd9bc]
  __asm push esi
  __asm push dword ptr [esp + 0x1c]
  __asm mov word ptr [edi + 6], ax
  __asm add edi, 8
  __asm push edi
  __asm call LAB_1148cded
  __asm mov eax, dword ptr [esp + 0x30]
  __asm add esp, 0xc
  __asm mov byte ptr [edi + esi], al
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x13
  __asm push eax
  __asm push dword ptr [esp + 0x24]
  __asm lea eax, [esi + 1]
  __asm add eax, edi
  __asm push eax
  __asm call LAB_1148cded
  __asm add esp, 0xc
  __asm mov eax, dword ptr [esp + 0x2c]
  __asm pop edi
  __asm pop esi
  __asm mov dword ptr [eax], ebp
  __asm pop ebp
  __asm pop ebx
  __asm ret
}



// Reference entry 113febd0; body size 42 bytes.
#line 1 "ENTRY_113febd0"

__declspec(naked) void FUN_113febd0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [eax + 0x3c]
  __asm mov eax, dword ptr [ecx + 0x10]
  __asm movzx edx, byte ptr [eax + 9]
  __asm lea eax, [ecx + 0x5e0]
  __asm push eax
  __asm push 0
  __asm push 0
  __asm or edx, 0x2000000
  __asm push eax
  __asm push edx
  __asm call LAB_10040322
  __asm add esp, 0x14
  __asm ret
}



// Reference entry 113ff010; body size 34 bytes.
#line 1 "ENTRY_113ff010"
int FUN_113ff010(int a1) {

    int v1 = (int)(*(int *)(a1 + 60)); // (int)&FUN_113ff014
    if (v1 != 0) {
        int v2 = (int)(*(int *)(v1 + 1080)); // (int)&FUN_113ff01b
        if (v2 != 0) {
            return (int)(*(int *)v2);
        }
    }
    int result = (int)(*(int *)(*(int *)a1 + 116)); // (int)&FUN_113ff027
    if (result == 0) {
        return (int)(result);
    }
    return (int)(*(int *)result);
}

// Reference entry 113ff040; body size 35 bytes.
#line 1 "ENTRY_113ff040"
int FUN_113ff040(int a1) {

    int v1 = (int)(*(int *)(a1 + 60)); // (int)&FUN_113ff044
    if (v1 != 0) {
        int v2 = (int)(*(int *)(v1 + 1080)); // (int)&FUN_113ff04b
        if (v2 != 0) {
            return (int)(*(int *)(v2 + 4));
        }
    }
    int result = (int)(*(int *)(*(int *)a1 + 116)); // (int)&FUN_113ff057
    if (result == 0) {
        return (int)(result);
    }
    return (int)(*(int *)(result + 4));
}

// Reference entry 11400820; body size 35 bytes.
#line 1 "ENTRY_11400820"

__declspec(naked) void FUN_11400820(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0xa9 __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0x07
  __asm or eax, 0x400
  __asm mov dword ptr [ecx], eax
  __asm _emit 0xa9 __asm _emit 0x00 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0x07
  __asm or eax, 0x800
  __asm mov dword ptr [ecx], eax
  __asm ret
}



// Reference entry 11400880; body size 33 bytes.
#line 1 "ENTRY_11400880"

__declspec(naked) void FUN_11400880(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp eax, 0xfff8
  __asm _emit 0x76 __asm _emit 0x0a
  __asm mov eax, 0xffff
  __asm mov word ptr [ecx + 2], ax
  __asm ret
  __asm movzx eax, ax
  __asm mov word ptr [ecx + 2], ax
  __asm ret
}



// Reference entry 114008c0; body size 48 bytes.
#line 1 "ENTRY_114008c0"

__declspec(naked) void FUN_114008c0(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov edx, ecx
  __asm mov eax, ecx
  __asm or edx, 0x400
  __asm and eax, 0x1000
  __asm cmove edx, ecx
  __asm mov ecx, edx
  __asm mov eax, edx
  __asm or ecx, 0x800
  __asm and eax, 0x2000
  __asm mov eax, dword ptr [esp + 4]
  __asm cmove ecx, edx
  __asm mov dword ptr [eax + 8], ecx
  __asm ret
}



// Reference entry 11400cb0; body size 100 bytes.
#line 1 "ENTRY_11400cb0"

__declspec(naked) void FUN_11400cb0(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm sub eax, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [esi + 0x3c]
  __asm mov edx, dword ptr [ecx + 0x520]
  __asm cmp eax, edx
  __asm _emit 0x74 __asm _emit 0x17
  __asm push 0xffff8d00
  __asm push 0x32
  __asm push esi
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, 0xffff8d00
  __asm pop esi
  __asm ret
  __asm push edx
  __asm lea eax, [ecx + 0x4dd]
  __asm push eax
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_1004f020
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x17
  __asm push 0xffff9200
  __asm push 0x33
  __asm push esi
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, 0xffff9200
  __asm pop esi
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 11400d30; body size 40 bytes.
#line 1 "ENTRY_11400d30"

__declspec(naked) void FUN_11400d30(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [edx]
  __asm mov ecx, dword ptr [edx + 0x3c]
  __asm movzx eax, byte ptr [eax + 8]
  __asm push eax
  __asm lea eax, [ecx + 0x520]
  __asm push eax
  __asm push 0x40
  __asm lea eax, [ecx + 0x4dd]
  __asm push eax
  __asm push edx
  __asm call LAB_10013c78
  __asm add esp, 0x14
  __asm ret
}



// Reference entry 11400d70; body size 46 bytes.
#line 1 "ENTRY_11400d70"

__declspec(naked) void FUN_11400d70(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm xor ecx, ecx
  __asm mov eax, dword ptr [esi]
  __asm mov edx, dword ptr [esi + 0x3c]
  __asm cmp byte ptr [eax + 8], cl
  __asm lea eax, [edx + 0x520]
  __asm sete cl
  __asm push ecx
  __asm push eax
  __asm push 0x40
  __asm lea eax, [edx + 0x4dd]
  __asm push eax
  __asm push esi
  __asm call LAB_10013c78
  __asm add esp, 0x14
  __asm pop esi
  __asm ret
}



// Reference entry 11400db0; body size 130 bytes.
#line 1 "ENTRY_11400db0"

__declspec(naked) void FUN_11400db0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx + 0x3c]
  __asm mov al, byte ptr [eax + 2]
  __asm cmp al, 3
  __asm _emit 0x75 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm mov al, byte ptr [eax + 0xa]
  __asm mov edx, dword ptr [ecx + 0x38]
  __asm push esi
  __asm push edi
  __asm movzx esi, al
  __asm mov edi, dword ptr [edx + 0x68]
  __asm test edi, edi
  __asm _emit 0x75 __asm _emit 0x4e
  __asm mov eax, dword ptr [ecx]
  __asm mov al, byte ptr [eax + 8]
  __asm cmp al, 1
  __asm _emit 0x75 __asm _emit 0x29 __asm _emit 0xc7 __asm _emit 0x42 __asm _emit 0x6c __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp esi, 1
  __asm _emit 0x75 __asm _emit 0x05
  __asm pop edi
  __asm xor eax, eax
  __asm pop esi
  __asm ret
  __asm push 0xffff8b80
  __asm push 0x29
  __asm push ecx
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, 0xffff8b80
  __asm pop edi
  __asm pop esi
  __asm ret
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0x18
  __asm push 0xffff8880
  __asm push 0x29
  __asm push ecx
  __asm call LAB_10014a33
  __asm add esp, 0xc
  __asm mov eax, 0xffff8880
  __asm pop edi
  __asm pop esi
  __asm ret
  __asm push 0
  __asm push 0
  __asm push edi
  __asm push esi
  __asm push ecx
  __asm call LAB_1002784a
  __asm add esp, 0x14
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 11400e60; body size 301 bytes.
#line 1 "ENTRY_11400e60"

__declspec(naked) void FUN_11400e60(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push ebx
  __asm push ebp
  __asm push esi
  __asm mov ecx, dword ptr [eax + 0x3c]
  __asm push edi
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0a
  __asm mov esi, dword ptr [ecx + 0x438]
  __asm test esi, esi
  __asm _emit 0x75 __asm _emit 0x09
  __asm mov eax, dword ptr [eax]
  __asm mov esi, dword ptr [eax + 0x74]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x02
  __asm mov esi, dword ptr [esi]
  __asm mov ebp, dword ptr [esp + 0x1c]
  __asm mov edi, dword ptr [esp + 0x20]
  __asm mov eax, dword ptr [ecx + 0x5d8]
  __asm mov dl, byte ptr [ecx + 0x5d4]
  __asm mov dword ptr [esp + 0x10], eax
  __asm cmp ebp, edi
  __asm ja LAB_11400f82
  __asm movzx eax, dl
  __asm mov ecx, edi
  __asm mov dword ptr [esp + 0x18], eax
  __asm sub ecx, ebp
  __asm inc eax
  __asm cmp eax, ecx
  __asm ja LAB_11400f82
  __asm mov byte ptr [ebp], dl
  __asm lea ebx, [ebp + 1]
  __asm test dl, dl
  __asm _emit 0x74 __asm _emit 0x15
  __asm push dword ptr [esp + 0x18]
  __asm push dword ptr [esp + 0x14]
  __asm push ebx
  __asm call LAB_1148cded
  __asm add esp, 0xc
  __asm add ebx, dword ptr [esp + 0x18]
  __asm push 3
  __asm push edi
  __asm push ebx
  __asm call LAB_113fef30
  __asm add esp, 0xc
  __asm test eax, eax
  __asm jne LAB_11400f82
  __asm mov edx, ebx
  __asm add ebx, 3
  __asm mov dword ptr [esp + 0x1c], edx
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5c __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x80 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [esi + 8]
  __asm mov dword ptr [esp + 0x18], edx
  __asm cmp ebx, edi
  __asm _emit 0x77 __asm _emit 0x77
  __asm mov ecx, edi
  __asm lea eax, [edx + 5]
  __asm sub ecx, ebx
  __asm cmp eax, ecx
  __asm _emit 0x77 __asm _emit 0x6c
  __asm mov eax, edx
  __asm mov byte ptr [ebx + 2], dl
  __asm shr eax, 0x10
  __asm mov byte ptr [ebx], al
  __asm mov eax, edx
  __asm shr eax, 8
  __asm push edx
  __asm mov byte ptr [ebx + 1], al
  __asm add ebx, 3
  __asm push dword ptr [esi + 0xc]
  __asm push ebx
  __asm call LAB_1148cded
  __asm mov eax, dword ptr [esp + 0x24]
  __asm xor ecx, ecx
  __asm mov esi, dword ptr [esi + 0x194]
  __asm add esp, 0xc
  __asm mov word ptr [ebx + eax], cx
  __asm add ebx, 2
  __asm add ebx, eax
  __asm test esi, esi
  __asm _emit 0x75 __asm _emit 0xaf
  __asm mov edx, dword ptr [esp + 0x1c]
  __asm mov ecx, ebx
  __asm sub ecx, edx
  __asm sub ecx, 3
  __asm mov eax, ecx
  __asm sar ecx, 8
  __asm sar eax, 0x10
  __asm mov byte ptr [edx], al
  __asm mov al, bl
  __asm sub al, dl
  __asm mov byte ptr [edx + 1], cl
  __asm sub al, 3
  __asm sub ebx, ebp
  __asm mov byte ptr [edx + 2], al
  __asm mov eax, dword ptr [esp + 0x24]
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm mov dword ptr [eax], ebx
  __asm xor eax, eax
  __asm pop ebx
  __asm pop ecx
  __asm ret
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm mov eax, 0xffff9600
  __asm pop ebx
  __asm pop ecx
  __asm ret
}



// Reference entry 11400fe0; body size 230 bytes.
#line 1 "ENTRY_11400fe0"

__declspec(naked) void FUN_11400fe0(void)

{
  __asm sub esp, 0x14c
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x148], eax
  __asm mov eax, dword ptr [esp + 0x15c]
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x154]
  __asm push ebp
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x160]
  __asm mov ebp, dword ptr [ebx + 0x3c]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add ebp, 0x2c
  __asm mov ecx, dword ptr [ebx + 0x3c]
  __asm mov dword ptr [esp + 0xc], ebx
  __asm mov dword ptr [esp + 0x14], esi
  __asm mov dword ptr [esp + 0x2c], eax
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x168]
  __asm mov dword ptr [esp + 0x28], edi
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0a
  __asm mov eax, dword ptr [ecx + 0x438]
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x0d
  __asm mov eax, dword ptr [ebx]
  __asm mov eax, dword ptr [eax + 0x74]
  __asm test eax, eax
  __asm je LAB_114012da
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esp + 0x14], eax
  __asm test eax, eax
  __asm je LAB_114012da
  __asm lea eax, [esp + 0x20]
  __asm push eax
  __asm push 0x40
  __asm lea eax, [esp + 0x3c]
  __asm push eax
  __asm mov eax, dword ptr [ecx + 0x10]
  __asm movzx eax, byte ptr [eax + 9]
  __asm push eax
  __asm push ebx
  __asm call LAB_10059a98
  __asm add esp, 0x14
  __asm test eax, eax
  __asm jne LAB_114012df
  __asm mov eax, dword ptr [ebx]
  __asm movzx eax, byte ptr [eax + 8]
  __asm push eax
  __asm lea eax, [esp + 0x28]
  __asm push eax
  __asm lea eax, [esp + 0xbc]
  __asm push eax
  __asm push dword ptr [esp + 0x2c]
  __asm lea eax, [esp + 0x44]
  __asm push eax
  __asm call LAB_11400900
  __asm push 4
  __asm push edi
  __asm push esi
  __asm call LAB_113fef30
  __asm add esp, 0x20
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0a
  __asm mov eax, 0xffff9600
  __asm jmp LAB_114012df
}



// Reference entry 114013c0; body size 45 bytes.
#line 1 "ENTRY_114013c0"

__declspec(naked) void FUN_114013c0(void)

{
  __asm mov edx, dword ptr [esp + 8]
  __asm push 1
  __asm push dword ptr [esp + 0x10]
  __asm push edx
  __asm call LAB_113fef30
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x06
  __asm mov eax, 0xffff9600
  __asm ret
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov byte ptr [edx], 1
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm xor eax, eax
  __asm ret
}



// Reference entry 11401400; body size 72 bytes.
#line 1 "ENTRY_11401400"

__declspec(naked) void FUN_11401400(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov edx, dword ptr [eax + 0x3c]
  __asm mov esi, dword ptr [edx + 0x520]
  __asm push esi
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_113fef30
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov eax, 0xffff9600
  __asm pop esi
  __asm ret
  __asm push esi
  __asm lea eax, [edx + 0x4dd]
  __asm push eax
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_1148cded
  __asm mov eax, dword ptr [esp + 0x20]
  __asm add esp, 0xc
  __asm mov dword ptr [eax], esi
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 11401470; body size 36 bytes.
#line 1 "ENTRY_11401470"

__declspec(naked) void FUN_11401470(void)

{
  __asm lea eax, [esp + 4]
  __asm push eax
  __asm call LAB_100191be
  __asm add esp, 4
  __asm sub eax, 2
  __asm _emit 0x74 __asm _emit 0x0d
  __asm sub eax, 1
  __asm _emit 0x74 __asm _emit 0x08
  __asm sub eax, 1
  __asm _emit 0x74 __asm _emit 0x03
  __asm xor eax, eax
  __asm ret
  __asm mov eax, dword ptr [esp + 8]
  __asm ret
}



// Reference entry 11402940; body size 117 bytes.
#line 1 "ENTRY_11402940"

__declspec(naked) void FUN_11402940(void)

{
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm mov ecx, esi
  __asm push edi
  __asm lea edx, [ecx + 1]
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00
  __asm mov al, byte ptr [ecx]
  __asm inc ecx
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0xf9
  __asm mov eax, dword ptr [esp + 0x14]
  __asm sub ecx, edx
  __asm mov ebx, dword ptr [eax + 4]
  __asm cmp ebx, 3
  __asm _emit 0x72 __asm _emit 0x29
  __asm mov eax, dword ptr [eax + 8]
  __asm cmp byte ptr [eax], 0x2a
  __asm _emit 0x75 __asm _emit 0x21
  __asm cmp byte ptr [eax + 1], 0x2e
  __asm lea edi, [eax + 1]
  __asm _emit 0x75 __asm _emit 0x18
  __asm xor eax, eax
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00
  __asm cmp byte ptr [eax + esi], 0x2e
  __asm lea edx, [eax + esi]
  __asm _emit 0x74 __asm _emit 0x0c
  __asm inc eax
  __asm cmp eax, ecx
  __asm _emit 0x72 __asm _emit 0xf2
  __asm pop edi
  __asm pop esi
  __asm or eax, 0xffffffff
  __asm pop ebx
  __asm ret
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0xf5
  __asm lea esi, [ebx - 1]
  __asm sub ecx, eax
  __asm cmp ecx, esi
  __asm _emit 0x75 __asm _emit 0xec
  __asm push esi
  __asm push edx
  __asm push edi
  __asm call LAB_11405c60
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0xdd
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret
}



// Reference entry 11402bd0; body size 156 bytes.
#line 1 "ENTRY_11402bd0"
int FUN_11402bd0(int a1, int a2) {

    int v1; // (int)((int(*)(int a1, int a2))&FUN_11402bd0<>)
    if (a2 == 0 | FUN_11405cc0(a1 + 80, a1 + 112, v1, v1, v1, v1) != 0) {
        return (int)(-1);
    }
    uint v2 = (uint)(*(int *)(a1 + 8)); // (int)&FUN_11402bf4
    int v3 = (int)(v2 - 4);
    int v4; // (int)((int(*)(int a1, int a2))&FUN_11402bd0<>)
    int v5; // (int)((int(*)(int a1, int a2))&FUN_11402bd0<>)
    int v6; // (int)((int(*)(int a1, int a2))&FUN_11402bd0<>)
    int v7; // (int)((int(*)(int a1, int a2))&FUN_11402bd0<>)
    int v8; // (int)((int(*)(int a1, int a2))&FUN_11402bd0<>)
    int v9; // (int)((int(*)(int a1, int a2))&FUN_11402bd0<>)
    int v10; // (int)((int(*)(int a1, int a2))&FUN_11402bd0<>)
    int v11; // (int)((int(*)(int a1, int a2))&FUN_11402bd0<>)
    int v12; // (int)((int(*)(int a1, int a2))&FUN_11402bd0<>)
    int v13; // (int)((int(*)(int a1, int a2))&FUN_11402bd0<>)
    int v14; // (int)((int(*)(int a1, int a2))&FUN_11402bd0<>)
    int v15; // (int)((int(*)(int a1, int a2))&FUN_11402bd0<>)
    int v16; // (int)((int(*)(int a1, int a2))&FUN_11402bd0<>)
    int v17; // (int)((int(*)(int a1, int a2))&FUN_11402bd0<>)
    int v18; // (int)&FUN_11402bfc
    int v19; // (int)&FUN_11402c01
    int v20; // (int)&FUN_11402c1c
    if ((int)(v2) == *(int *)(a2 + 8)) {
        v18 = (int)(*(int *)(a1 + 12));
        v19 = (int)(*(int *)(a2 + 12));
        v8 = (int)(v18);
        v13 = (int)(v19);
        v5 = (int)(v3);
        v10 = (int)(v18);
        v15 = (int)(v19);
        if (v2 < 4) {
            v6 = (int)(v5);
            v11 = (int)(v10);
            v16 = (int)(v15);
            if (v5 == -4) {
                goto lab_brk_11402bd0;
            }
        } else {
            v14 = (int)(v13);
            v9 = (int)(v8);
            v4 = (int)(v3);
            v6 = (int)(v4);
            v11 = (int)(v9);
            v16 = (int)(v14);
            while (*(int *)(v9) == *(int *)(v14)) {
                v20 = (int)(v4 - 4);
                v5 = (int)(v20);
                if (v4 < 4) {
                    goto lab_brk_11402bd0;
                }
                v14 += 4;
                v9 += 4;
                v4 = (int)(v20);
                v6 = (int)(v4);
                v11 = (int)(v9);
                v16 = (int)(v14);
            }
        }
        v17 = (int)(v16);
        v12 = (int)(v11);
        if (*(char *)(v12) == *(char *)(v17)) {
            v7 = (int)(v6);
            if (v7 == -3) {
                goto lab_brk_11402bd0;
            }
            if (*(char *)((v12 + 1)) == *(char *)((v17 + 1))) {
                if (v7 == -2) {
                    goto lab_brk_11402bd0;
                }
                if (*(char *)((v12 + 2)) == *(char *)((v17 + 2))) {
                    if (v7 == -1) {
                        goto lab_brk_11402bd0;
                    }
                    if (*(char *)((v12 + 3)) == *(char *)((v17 + 3))) {
                        goto lab_brk_11402bd0;
                    }
                }
            }
        }
    }
    int v21 = (int)(*(int *)(a2 + 404)); // (int)&FUN_11402c53
    int result = (int)(-1); // (int)&FUN_11402c5b
    while (v21 != 0) {
        int v22 = (int)(v21);
        if ((int)(v2) == *(int *)(v22 + 8)) {
            v18 = (int)(*(int *)(a1 + 12));
            v19 = (int)(*(int *)(v22 + 12));
            v8 = (int)(v18);
            v13 = (int)(v19);
            v5 = (int)(v3);
            v10 = (int)(v18);
            v15 = (int)(v19);
            if (v2 < 4) {
                v6 = (int)(v5);
                v11 = (int)(v10);
                v16 = (int)(v15);
                result = (int)(0);
                if (v5 == -4) {
                    break;
                }
            } else {
                v14 = (int)(v13);
                v9 = (int)(v8);
                v4 = (int)(v3);
                v6 = (int)(v4);
                v11 = (int)(v9);
                v16 = (int)(v14);
                while (*(int *)(v9) == *(int *)(v14)) {
                    v20 = (int)(v4 - 4);
                    v5 = (int)(v20);
                    if (v4 < 4) {
                        goto lab_brk_11402bd0;
                    }
                    v14 += 4;
                    v9 += 4;
                    v4 = (int)(v20);
                    v6 = (int)(v4);
                    v11 = (int)(v9);
                    v16 = (int)(v14);
                }
            }
            v17 = (int)(v16);
            v12 = (int)(v11);
            if (*(char *)(v12) == *(char *)(v17)) {
                v7 = (int)(v6);
                result = (int)(0);
                if (v7 == -3) {
                    break;
                }
                if (*(char *)((v12 + 1)) == *(char *)((v17 + 1))) {
                    result = (int)(0);
                    if (v7 == -2) {
                        break;
                    }
                    if (*(char *)((v12 + 2)) == *(char *)((v17 + 2))) {
                        result = (int)(0);
                        if (v7 == -1) {
                            break;
                        }
                        result = (int)(0);
                        if (*(char *)((v12 + 3)) == *(char *)((v17 + 3))) {
                            break;
                        }
                    }
                }
            }
        }
        v21 = (int)(*(int *)(v22 + 404));
        result = (int)(-1);
    }
    return (int)(result);
lab_brk_11402bd0: ;
}

// Reference entry 11402ca0; body size 74 bytes.
#line 1 "ENTRY_11402ca0"

__declspec(naked) void FUN_11402ca0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm lea eax, [esi + 0x70]
  __asm push eax
  __asm mov eax, dword ptr [esp + 0xc]
  __asm add eax, 0x50
  __asm push eax
  __asm call LAB_11405cc0
  __asm add esp, 8
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x28
  __asm cmp dword ptr [esp + 0x10], eax
  __asm _emit 0x74 __asm _emit 0x06
  __asm cmp dword ptr [esi + 0x1c], 3
  __asm _emit 0x7c __asm _emit 0x18
  __asm cmp dword ptr [esi + 0x15c], 0
  __asm _emit 0x74 __asm _emit 0x13
  __asm push 4
  __asm push esi
  __asm call LAB_1006d41c
  __asm add esp, 8
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x04
  __asm xor eax, eax
  __asm pop esi
  __asm ret
  __asm or eax, 0xffffffff
  __asm pop esi
  __asm ret
}



// Reference entry 114037f0; body size 88 bytes.
#line 1 "ENTRY_114037f0"

__declspec(naked) void FUN_114037f0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm push ebx
  __asm push ebp
  __asm push esi
  __asm mov esi, dword ptr [eax + 0x50]
  __asm push edi
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x42
  __asm mov ebp, dword ptr [esp + 0x1c]
  __asm lea edi, [eax - 8]
  __asm mov ebx, dword ptr [esp + 0x14]
  __asm lea edi, [edi + esi*8]
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov eax, dword ptr [edi + 4]
  __asm mov dword ptr [esp + 0x18], eax
  __asm test ebp, ebp
  __asm _emit 0x74 __asm _emit 0x1c
  __asm lea eax, [esp + 0x18]
  __asm push eax
  __asm lea eax, [esi - 1]
  __asm push eax
  __asm push dword ptr [edi]
  __asm push dword ptr [esp + 0x2c]
  __asm call ebp
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x10
  __asm mov eax, dword ptr [esp + 0x18]
  __asm or dword ptr [ebx], eax
  __asm sub edi, 8
  __asm sub esi, 1
  __asm _emit 0x75 __asm _emit 0xcf
  __asm xor eax, eax
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret
}



// Reference entry 11404320; body size 151 bytes.
#line 1 "ENTRY_11404320"
int FUN_11404320(int result) {

    *(int*)result = (int)((int)(0));
    *(int*)(result + 4) = (int)(-1);
    *(int*)(result + 8) = (int)(0);
    *(int*)(result + 12) = (int)(-1);
    *(int*)(result + 16) = (int)(0);
    *(int*)(result + 20) = (int)(-1);
    *(int*)(result + 24) = (int)(0);
    *(int*)(result + 28) = (int)(-1);
    *(int*)(result + 32) = (int)(0);
    *(int*)(result + 36) = (int)(-1);
    *(int*)(result + 40) = (int)(0);
    *(int*)(result + 44) = (int)(-1);
    *(int*)(result + 48) = (int)(0);
    *(int*)(result + 52) = (int)(-1);
    *(int*)(result + 56) = (int)(0);
    *(int*)(result + 60) = (int)(-1);
    *(int*)(result + 64) = (int)(0);
    *(int*)(result + 68) = (int)(-1);
    *(int*)(result + 72) = (int)(0);
    *(int*)(result + 76) = (int)(-1);
    *(int*)(result + 80) = (int)(0);
    return (int)(result);
}

// Reference entry 11404c80; body size 251 bytes.
#line 1 "ENTRY_11404c80"

__declspec(naked) void FUN_11404c80(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm lea eax, [esp + 4]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm push 0x30
  __asm push eax
  __asm push edi
  __asm push esi
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10040b38
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x09
  __asm pop edi
  __asm add eax, 0xffffdb00
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm mov eax, dword ptr [esi]
  __asm add eax, dword ptr [esp + 8]
  __asm push ebx
  __asm cmp eax, edi
  __asm jne LAB_11404d71
  __asm push 0x80
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm push edi
  __asm push esi
  __asm call LAB_10040b38
  __asm mov ebx, dword ptr [esp + 0x2c]
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x16
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm mov dword ptr [ebx + 4], ecx
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [ebx + 8], eax
  __asm _emit 0xc7 __asm _emit 0x03 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add dword ptr [esi], ecx
  __asm _emit 0xeb __asm _emit 0x05
  __asm cmp eax, -0x62
  __asm _emit 0x75 __asm _emit 0x4e
  __asm mov eax, dword ptr [esi]
  __asm cmp eax, edi
  __asm _emit 0x73 __asm _emit 0x6b
  __asm push 0xa1
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm push edi
  __asm push esi
  __asm call LAB_10040b38
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x30
  __asm lea eax, [ebx + 0xc]
  __asm push eax
  __asm mov eax, dword ptr [esi]
  __asm add eax, dword ptr [esp + 0x10]
  __asm push eax
  __asm push esi
  __asm call LAB_1008ec57
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x49
  __asm push 0x82
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm push edi
  __asm push esi
  __asm call LAB_10040b38
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0a
  __asm pop ebx
  __asm pop edi
  __asm add eax, 0xffffdb00
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm mov dword ptr [ebx + 0x20], ecx
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [ebx + 0x24], eax
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x1c __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add dword ptr [esi], ecx
  __asm mov eax, dword ptr [esi]
  __asm cmp eax, edi
  __asm _emit 0x75 __asm _emit 0x07
  __asm pop ebx
  __asm pop edi
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm mov eax, 0xffffda9a
  __asm pop ebx
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 11404dc0; body size 177 bytes.
#line 1 "ENTRY_11404dc0"

__declspec(naked) void FUN_11404dc0(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x10]
  __asm lea eax, [esp + 0x10]
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x18]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x14]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm push 0x30
  __asm push eax
  __asm push esi
  __asm _emit 0xc7 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push edi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10040b38
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0a
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm add eax, 0xffffdb00
  __asm pop ebx
  __asm ret
  __asm cmp dword ptr [edi], esi
  __asm _emit 0x74 __asm _emit 0x66
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm call LAB_100521f3
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x1e
  __asm cmp eax, -0x62
  __asm _emit 0x75 __asm _emit 0xde
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm call LAB_10032e5c
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0xcf
  __asm cmp dword ptr [ebx], eax
  __asm _emit 0x74 __asm _emit 0x06 __asm _emit 0xc7 __asm _emit 0x03 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp dword ptr [edi], esi
  __asm _emit 0x74 __asm _emit 0x35
  __asm push ebp
  __asm push esi
  __asm push edi
  __asm call LAB_10032e5c
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0xb2
  __asm cmp dword ptr [edi], esi
  __asm _emit 0x74 __asm _emit 0x0a
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm mov eax, 0xffffda9a
  __asm pop ebx
  __asm ret
  __asm mov eax, dword ptr [ebp]
  __asm cmp eax, 0x7fffffff
  __asm _emit 0x75 __asm _emit 0x0a
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm mov eax, 0xffffda9c
  __asm pop ebx
  __asm ret
  __asm inc eax
  __asm mov dword ptr [ebp], eax
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm xor eax, eax
  __asm pop ebx
  __asm ret
}



// Reference entry 11405890; body size 95 bytes.
#line 1 "ENTRY_11405890"

__declspec(naked) void FUN_11405890(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm lea eax, [esp + 4]
  __asm push 0x30
  __asm push eax
  __asm push dword ptr [esp + 0x18]
  __asm push esi
  __asm call LAB_10040b38
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x08
  __asm add eax, 0xffffdc00
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm push dword ptr [esp + 0x18]
  __asm add edi, dword ptr [esp + 0xc]
  __asm push edi
  __asm push esi
  __asm call LAB_10005c9a
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x1c
  __asm push dword ptr [esp + 0x1c]
  __asm push edi
  __asm push esi
  __asm call LAB_10005c9a
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x0a
  __asm cmp dword ptr [esi], edi
  __asm mov ecx, 0xffffdb9a
  __asm cmovne eax, ecx
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 11405910; body size 50 bytes.
#line 1 "ENTRY_11405910"

__declspec(naked) void FUN_11405910(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push 6
  __asm push esi
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_1001aa55
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xffffdb00
  __asm pop esi
  __asm ret
  __asm xor eax, eax
  __asm mov ecx, 0xffffda9c
  __asm cmp dword ptr [esi + 8], eax
  __asm pop esi
  __asm cmove eax, ecx
  __asm ret
}



// Reference entry 11405950; body size 89 bytes.
#line 1 "ENTRY_11405950"

__declspec(naked) void FUN_11405950(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm lea eax, [esp + 4]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm push 4
  __asm push eax
  __asm push edi
  __asm push esi
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10040b38
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x09
  __asm pop edi
  __asm add eax, 0xffffdb00
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm mov ecx, dword ptr [esp + 0x18]
  __asm mov edx, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], edx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [ecx + 8], eax
  __asm xor eax, eax
  __asm add dword ptr [esi], edx
  __asm mov ecx, 0xffffda9a
  __asm cmp dword ptr [esi], edi
  __asm pop edi
  __asm cmovne eax, ecx
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 11405a30; body size 111 bytes.
#line 1 "ENTRY_11405a30"

__declspec(naked) void FUN_11405a30(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm lea eax, [esp + 4]
  __asm push 0xa0
  __asm push eax
  __asm push dword ptr [esp + 0x18]
  __asm push esi
  __asm call LAB_10040b38
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x1c
  __asm cmp eax, -0x62
  __asm _emit 0x75 __asm _emit 0x0f
  __asm mov eax, dword ptr [esp + 0x14]
  __asm pop esi
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm xor eax, eax
  __asm pop ecx
  __asm ret
  __asm add eax, 0xffffde80
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm push dword ptr [esp + 0x18]
  __asm add edi, dword ptr [esp + 0xc]
  __asm push edi
  __asm push esi
  __asm call LAB_10032e5c
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x09
  __asm pop edi
  __asm add eax, 0xffffde00
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm mov ecx, 0xffffdd9a
  __asm cmp dword ptr [esi], edi
  __asm pop edi
  __asm cmovne eax, ecx
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 11405f20; body size 31 bytes.
#line 1 "ENTRY_11405f20"

__declspec(naked) void FUN_11405f20(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13
  __asm mov eax, dword ptr [esp + 4]
  __asm dec ecx
  __asm mov edx, 1
  __asm shl edx, cl
  __asm test dword ptr [eax], edx
  __asm _emit 0x74 __asm _emit 0x03
  __asm xor eax, eax
  __asm ret
  __asm or eax, 0xffffffff
  __asm ret
}



// Reference entry 11405f50; body size 32 bytes.
#line 1 "ENTRY_11405f50"

__declspec(naked) void FUN_11405f50(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x14
  __asm mov eax, dword ptr [esp + 4]
  __asm dec ecx
  __asm mov edx, 1
  __asm shl edx, cl
  __asm test dword ptr [eax + 4], edx
  __asm _emit 0x74 __asm _emit 0x03
  __asm xor eax, eax
  __asm ret
  __asm or eax, 0xffffffff
  __asm ret
}



// Reference entry 114087a0; body size 241 bytes.
#line 1 "ENTRY_114087a0"

__declspec(naked) void FUN_114087a0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm lea eax, [esp + 4]
  __asm push 0x30
  __asm push eax
  __asm push dword ptr [esp + 0x18]
  __asm push esi
  __asm call LAB_10040b38
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x08
  __asm add eax, 0xffffdc80
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm mov ecx, dword ptr [esi]
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 8]
  __asm add ebx, ecx
  __asm mov eax, ebx
  __asm sub eax, ecx
  __asm push ebp
  __asm push edi
  __asm cmp eax, 1
  __asm jl LAB_11408886
  __asm mov edi, dword ptr [esp + 0x20]
  __asm movzx eax, byte ptr [ecx]
  __asm push 6
  __asm lea ebp, [edi + 4]
  __asm mov dword ptr [edi], eax
  __asm push ebp
  __asm push ebx
  __asm push esi
  __asm call LAB_10040b38
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x58
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [edi + 8], eax
  __asm mov eax, dword ptr [ebp]
  __asm add dword ptr [esi], eax
  __asm mov eax, ebx
  __asm mov ecx, dword ptr [esi]
  __asm sub eax, ecx
  __asm cmp eax, 1
  __asm _emit 0x7c __asm _emit 0x76
  __asm mov al, byte ptr [ecx]
  __asm cmp al, 0x1e
  __asm _emit 0x74 __asm _emit 0x23
  __asm cmp al, 0xc
  __asm _emit 0x74 __asm _emit 0x1f
  __asm cmp al, 0x14
  __asm _emit 0x74 __asm _emit 0x1b
  __asm cmp al, 0x13
  __asm _emit 0x74 __asm _emit 0x17
  __asm cmp al, 0x16
  __asm _emit 0x74 __asm _emit 0x13
  __asm cmp al, 0x1c
  __asm _emit 0x74 __asm _emit 0x0f
  __asm cmp al, 3
  __asm _emit 0x74 __asm _emit 0x0b
  __asm pop edi
  __asm pop ebp
  __asm pop ebx
  __asm mov eax, 0xffffdc1e
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm lea ebp, [edi + 0x10]
  __asm movzx eax, al
  __asm push ebp
  __asm push ebx
  __asm mov dword ptr [edi + 0xc], eax
  __asm inc dword ptr [esi]
  __asm push esi
  __asm call LAB_1001f2b2
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0b
  __asm pop edi
  __asm pop ebp
  __asm pop ebx
  __asm add eax, 0xffffdc80
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [edi + 0x14], eax
  __asm mov eax, dword ptr [ebp]
  __asm add dword ptr [esi], eax
  __asm cmp dword ptr [esi], ebx
  __asm _emit 0x74 __asm _emit 0x0b
  __asm pop edi
  __asm pop ebp
  __asm pop ebx
  __asm mov eax, 0xffffdc1a
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm xor eax, eax
  __asm pop edi
  __asm pop ebp
  __asm pop ebx
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm pop edi
  __asm pop ebp
  __asm pop ebx
  __asm mov eax, 0xffffdc20
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 11408c50; body size 38 bytes.
#line 1 "ENTRY_11408c50"

__declspec(naked) void FUN_11408c50(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm movzx ecx, byte ptr [eax]
  __asm movzx edx, byte ptr [eax + 1]
  __asm sub ecx, 0x30
  __asm sub edx, 0x30
  __asm cmp ecx, 0xa
  __asm _emit 0x73 __asm _emit 0x0c
  __asm cmp edx, 0xa
  __asm _emit 0x73 __asm _emit 0x07
  __asm lea eax, [ecx + ecx*4]
  __asm lea eax, [edx + eax*2]
  __asm ret
  __asm or eax, 0xffffffff
  __asm ret
}



// Reference entry 1140a170; body size 39 bytes.
#line 1 "ENTRY_1140a170"

__declspec(naked) void FUN_1140a170(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm mov eax, 3
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x80 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edx + eax*4]
  __asm bswap ecx
  __asm add ecx, 1
  __asm bswap ecx
  __asm mov dword ptr [edx + eax*4], ecx
  __asm _emit 0x75 __asm _emit 0x07
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x03
  __asm dec eax
  __asm _emit 0xeb __asm _emit 0xea
  __asm ret
}



// Reference entry 1140a790; body size 82 bytes.
#line 1 "ENTRY_1140a790"

__declspec(naked) void FUN_1140a790(void)

{
  __asm sub esp, 0x97c
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x978], eax
  __asm mov ecx, dword ptr [esp + 0x980]
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x988]
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x990]
  __asm push esi
  __asm push edi
  __asm test ecx, ecx
  __asm je LAB_1140a911
  __asm mov eax, dword ptr [ecx]
  __asm test eax, eax
  __asm je LAB_1140a911
  __asm mov eax, dword ptr [eax]
  __asm dec eax
  __asm cmp eax, 3
  __asm ja LAB_1140a911
  __asm jmp dword ptr [eax*4 + LAB_1140a930]
}



// Reference entry 1140a9b0; body size 100 bytes.
#line 1 "ENTRY_1140a9b0"

__declspec(naked) void FUN_1140a9b0(void)

{
  __asm sub esp, 0x224
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x220], eax
  __asm mov ecx, dword ptr [esp + 0x228]
  __asm _emit 0xc7 __asm _emit 0x04 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x230]
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x238]
  __asm push esi
  __asm push edi
  __asm movzx edi, word ptr [ebx]
  __asm test ecx, ecx
  __asm je LAB_1140ab01
  __asm mov eax, dword ptr [ecx]
  __asm test eax, eax
  __asm je LAB_1140ab01
  __asm mov eax, dword ptr [eax]
  __asm dec eax
  __asm cmp eax, 3
  __asm ja LAB_1140ab01
  __asm jmp dword ptr [eax*4 + LAB_1140ab20]
}



// Reference entry 1140ad30; body size 33 bytes.
#line 1 "ENTRY_1140ad30"

__declspec(naked) void FUN_1140ad30(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x16
  __asm mov eax, dword ptr [eax]
  __asm sub eax, 2
  __asm _emit 0x74 __asm _emit 0x0a
  __asm sub eax, 1
  __asm _emit 0x74 __asm _emit 0x05
  __asm sub eax, 1
  __asm _emit 0x75 __asm _emit 0x05
  __asm mov eax, dword ptr [esp + 8]
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 1140adf0; body size 38 bytes.
#line 1 "ENTRY_1140adf0"

__declspec(naked) void FUN_1140adf0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x16
  __asm mov ecx, dword ptr [eax]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x10
  __asm push eax
  __asm mov eax, dword ptr [ecx + 8]
  __asm call eax
  __asm add eax, 7
  __asm add esp, 4
  __asm shr eax, 3
  __asm ret
  __asm xor eax, eax
  __asm mov eax, 0
  __asm ret
}



// Reference entry 1140bcf0; body size 70 bytes.
#line 1 "ENTRY_1140bcf0"

__declspec(naked) void FUN_1140bcf0(void)

{
  __asm push dword ptr [esp + 4]
  __asm call LAB_1008ed7e
  __asm add esp, 4
  __asm cmp eax, 1
  __asm _emit 0x75 __asm _emit 0x22
  __asm cmp dword ptr [esp + 8], 0
  __asm _emit 0x74 __asm _emit 0x15
  __asm push dword ptr [esp + 4]
  __asm call LAB_100892a2
  __asm movzx eax, al
  __asm add esp, 4
  __asm or eax, 0x7000300
  __asm ret
  __asm mov eax, 0x60013ff
  __asm ret
  __asm cmp dword ptr [esp + 8], 0
  __asm mov eax, 0x60002ff
  __asm mov ecx, 0x7000200
  __asm cmovne eax, ecx
  __asm ret
}



// Reference entry 1140bd50; body size 35 bytes.
#line 1 "ENTRY_1140bd50"

__declspec(naked) void FUN_1140bd50(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0xa9 __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0x07
  __asm or eax, 0x400
  __asm mov dword ptr [ecx], eax
  __asm _emit 0xa9 __asm _emit 0x00 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0x07
  __asm or eax, 0x800
  __asm mov dword ptr [ecx], eax
  __asm ret
}



// Reference entry 1140bdc0; body size 33 bytes.
#line 1 "ENTRY_1140bdc0"

__declspec(naked) void FUN_1140bdc0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp eax, 0xfff8
  __asm _emit 0x76 __asm _emit 0x0a
  __asm mov eax, 0xffff
  __asm mov word ptr [ecx + 2], ax
  __asm ret
  __asm movzx eax, ax
  __asm mov word ptr [ecx + 2], ax
  __asm ret
}



// Reference entry 1140be10; body size 48 bytes.
#line 1 "ENTRY_1140be10"

__declspec(naked) void FUN_1140be10(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov edx, ecx
  __asm mov eax, ecx
  __asm or edx, 0x400
  __asm and eax, 0x1000
  __asm cmove edx, ecx
  __asm mov ecx, edx
  __asm mov eax, edx
  __asm or ecx, 0x800
  __asm and eax, 0x2000
  __asm mov eax, dword ptr [esp + 4]
  __asm cmove ecx, edx
  __asm mov dword ptr [eax + 8], ecx
  __asm ret
}



// Reference entry 1140be50; body size 73 bytes.
#line 1 "ENTRY_1140be50"

__declspec(naked) void FUN_1140be50(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm mov esi, dword ptr [edi + 4]
  __asm cmp dword ptr [esi + 8], 0
  __asm _emit 0x74 __asm _emit 0x1e
  __asm push 0x10
  __asm push 1
  __asm call dword ptr [LAB_122fc7b0]
  __asm add esp, 8
  __asm mov dword ptr [esi + 0xc], eax
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x08
  __asm pop edi
  __asm mov eax, 0xffffff96
  __asm pop esi
  __asm ret
  __asm mov esi, eax
  __asm mov eax, dword ptr [esp + 0x14]
  __asm mov dword ptr [esi + 8], eax
  __asm mov eax, dword ptr [esp + 0x18]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov dword ptr [esi], eax
  __asm xor eax, eax
  __asm mov dword ptr [edi + 4], esi
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 11411a40; body size 32 bytes.
#line 1 "ENTRY_11411a40"

__declspec(naked) void FUN_11411a40(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov edx, dword ptr [esp + 0xc]
  __asm sub ecx, edx
  __asm _emit 0x74 __asm _emit 0x14
  __asm add dword ptr [esp + 4], edx
  __asm movzx eax, cl
  __asm mov dword ptr [esp + 0xc], eax
  __asm mov dword ptr [esp + 8], ecx
  __asm jmp LAB_1148ce0b
}



// Reference entry 11411aa0; body size 284 bytes.
#line 1 "ENTRY_11411aa0"

__declspec(naked) void FUN_11411aa0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm mov esi, dword ptr [edi]
  __asm mov eax, dword ptr [esi + 4]
  __asm mov ecx, eax
  __asm mov edx, eax
  __asm and ecx, 0xf000
  __asm shr edx, 0x10
  __asm cmp ecx, 0x6000
  __asm _emit 0x75 __asm _emit 0x44
  __asm push dword ptr [esp + 0x28]
  __asm mov eax, dword ptr [esp + 0x30]
  __asm push dword ptr [esp + 0x24]
  __asm mov ecx, dword ptr [esp + 0x2c]
  __asm push dword ptr [esp + 0x3c]
  __asm mov dword ptr [eax], ecx
  __asm push dword ptr [esp + 0x3c]
  __asm push dword ptr [esp + 0x2c]
  __asm push dword ptr [esp + 0x2c]
  __asm push dword ptr [esp + 0x2c]
  __asm push dword ptr [esp + 0x2c]
  __asm push ecx
  __asm push dword ptr [edi + 0x3c]
  __asm call LAB_10062ec7
  __asm add esp, 0x28
  __asm mov ecx, 0xffff9d00
  __asm cmp eax, -0x12
  __asm cmove eax, ecx
  __asm pop edi
  __asm pop esi
  __asm ret
  __asm cmp ecx, 0x8000
  __asm _emit 0x75 __asm _emit 0x44
  __asm push dword ptr [esp + 0x34]
  __asm mov eax, dword ptr [esp + 0x30]
  __asm push dword ptr [esp + 0x34]
  __asm mov ecx, dword ptr [esp + 0x2c]
  __asm push dword ptr [esp + 0x30]
  __asm mov dword ptr [eax], ecx
  __asm push dword ptr [esp + 0x2c]
  __asm push dword ptr [esp + 0x2c]
  __asm push dword ptr [esp + 0x2c]
  __asm push dword ptr [esp + 0x2c]
  __asm push dword ptr [esp + 0x2c]
  __asm push ecx
  __asm push dword ptr [edi + 0x3c]
  __asm call LAB_10073ffb
  __asm add esp, 0x28
  __asm mov ecx, 0xffff9d00
  __asm cmp eax, -0xf
  __asm cmove eax, ecx
  __asm pop edi
  __asm pop esi
  __asm ret
  __asm cmp dl, 0x4d
  __asm _emit 0x75 __asm _emit 0x5f
  __asm test esi, esi
  __asm _emit 0x75 __asm _emit 0x04
  __asm xor eax, eax
  __asm _emit 0xeb __asm _emit 0x06
  __asm shr eax, 3
  __asm and eax, 0x1c
  __asm cmp dword ptr [esp + 0x14], eax
  __asm _emit 0x75 __asm _emit 0x43
  __asm cmp dword ptr [esp + 0x34], 0x10
  __asm _emit 0x75 __asm _emit 0x3c
  __asm push dword ptr [esp + 0x28]
  __asm mov eax, dword ptr [esp + 0x30]
  __asm push dword ptr [esp + 0x24]
  __asm mov ecx, dword ptr [esp + 0x2c]
  __asm push dword ptr [esp + 0x38]
  __asm mov dword ptr [eax], ecx
  __asm push dword ptr [esp + 0x28]
  __asm push dword ptr [esp + 0x28]
  __asm push dword ptr [esp + 0x24]
  __asm push ecx
  __asm push dword ptr [edi + 0x3c]
  __asm call LAB_1005ef75
  __asm add esp, 0x20
  __asm mov ecx, 0xffff9d00
  __asm cmp eax, -0x56
  __asm cmove eax, ecx
  __asm pop edi
  __asm pop esi
  __asm ret
  __asm pop edi
  __asm mov eax, 0xffff9f00
  __asm pop esi
  __asm ret
  __asm pop edi
  __asm mov eax, 0xffff9f80
  __asm pop esi
  __asm ret
}



// Reference entry 11411c10; body size 243 bytes.
#line 1 "ENTRY_11411c10"

__declspec(naked) void FUN_11411c10(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov eax, ecx
  __asm and eax, 0xf000
  __asm cmp eax, 0x6000
  __asm _emit 0x75 __asm _emit 0x3a
  __asm push dword ptr [esp + 0x2c]
  __asm mov ecx, dword ptr [esp + 0x24]
  __asm push dword ptr [esp + 0x34]
  __asm mov eax, dword ptr [esp + 0x30]
  __asm push dword ptr [esp + 0x2c]
  __asm push dword ptr [esp + 0x28]
  __asm mov dword ptr [eax], ecx
  __asm push dword ptr [esp + 0x28]
  __asm push dword ptr [esp + 0x28]
  __asm push dword ptr [esp + 0x28]
  __asm push dword ptr [esp + 0x28]
  __asm push ecx
  __asm push 1
  __asm push dword ptr [esi + 0x3c]
  __asm call LAB_10015f23
  __asm add esp, 0x2c
  __asm pop esi
  __asm ret
  __asm cmp eax, 0x8000
  __asm _emit 0x75 __asm _emit 0x38
  __asm push dword ptr [esp + 0x30]
  __asm mov eax, dword ptr [esp + 0x2c]
  __asm push dword ptr [esp + 0x30]
  __asm mov ecx, dword ptr [esp + 0x28]
  __asm push dword ptr [esp + 0x2c]
  __asm mov dword ptr [eax], ecx
  __asm push dword ptr [esp + 0x28]
  __asm push dword ptr [esp + 0x28]
  __asm push dword ptr [esp + 0x28]
  __asm push dword ptr [esp + 0x28]
  __asm push dword ptr [esp + 0x28]
  __asm push ecx
  __asm push dword ptr [esi + 0x3c]
  __asm call LAB_10004c96
  __asm add esp, 0x28
  __asm pop esi
  __asm ret
  __asm mov eax, ecx
  __asm shr eax, 0x10
  __asm cmp al, 0x4d
  __asm _emit 0x75 __asm _emit 0x52
  __asm test edx, edx
  __asm _emit 0x75 __asm _emit 0x04
  __asm xor ecx, ecx
  __asm _emit 0xeb __asm _emit 0x06
  __asm shr ecx, 3
  __asm and ecx, 0x1c
  __asm cmp dword ptr [esp + 0x10], ecx
  __asm _emit 0x75 __asm _emit 0x37
  __asm cmp dword ptr [esp + 0x30], 0x10
  __asm _emit 0x75 __asm _emit 0x30
  __asm push dword ptr [esp + 0x2c]
  __asm mov eax, dword ptr [esp + 0x2c]
  __asm push dword ptr [esp + 0x28]
  __asm mov ecx, dword ptr [esp + 0x28]
  __asm push dword ptr [esp + 0x24]
  __asm mov dword ptr [eax], ecx
  __asm push dword ptr [esp + 0x24]
  __asm push dword ptr [esp + 0x24]
  __asm push dword ptr [esp + 0x20]
  __asm push ecx
  __asm push dword ptr [esi + 0x3c]
  __asm call LAB_10099e09
  __asm add esp, 0x20
  __asm pop esi
  __asm ret
  __asm mov eax, 0xffff9f00
  __asm pop esi
  __asm ret
  __asm mov eax, 0xffff9f80
  __asm pop esi
  __asm ret
}



// Reference entry 11412650; body size 33 bytes.
#line 1 "ENTRY_11412650"

__declspec(naked) void FUN_11412650(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [eax]
  __asm test ecx, ecx
  __asm _emit 0x75 __asm _emit 0x03
  __asm xor eax, eax
  __asm ret
  __asm mov eax, dword ptr [eax + 0x38]
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x0c
  __asm mov eax, dword ptr [ecx + 4]
  __asm shr eax, 5
  __asm and eax, 7
  __asm shl eax, 2
  __asm ret
}



// Reference entry 114131e0; body size 44 bytes.
#line 1 "ENTRY_114131e0"

__declspec(naked) void FUN_114131e0(void)

{
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm xor eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm mov edx, dword ptr [LAB_122fa560]
  __asm xor ecx, eax
  __asm xor ecx, dword ptr [esp + 8]
  __asm xor edx, ecx
  __asm mov eax, edx
  __asm neg edx
  __asm _emit 0xd1 __asm _emit 0xe8
  __asm neg eax
  __asm or eax, edx
  __asm shr eax, 0x1f
  __asm dec eax
  __asm ret
}



// Reference entry 11413220; body size 93 bytes.
#line 1 "ENTRY_11413220"

__declspec(naked) void FUN_11413220(void)

{
  __asm push esi
  __asm mov esi, dword ptr [LAB_122fa560]
  __asm mov edx, dword ptr [LAB_122fa560]
  __asm xor esi, dword ptr [esp + 8]
  __asm xor edx, dword ptr [esp + 0xc]
  __asm mov eax, edx
  __asm xor eax, esi
  __asm sub esi, edx
  __asm shr eax, 0x1f
  __asm xor eax, dword ptr [LAB_122fa560]
  __asm mov ecx, eax
  __asm neg eax
  __asm _emit 0xd1 __asm _emit 0xe9
  __asm neg ecx
  __asm or ecx, eax
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm shr ecx, 0x1f
  __asm neg ecx
  __asm xor eax, ecx
  __asm and ecx, edx
  __asm not eax
  __asm and esi, eax
  __asm or esi, ecx
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm shr esi, 0x1f
  __asm xor ecx, esi
  __asm mov eax, ecx
  __asm neg ecx
  __asm _emit 0xd1 __asm _emit 0xe8
  __asm neg eax
  __asm or eax, ecx
  __asm shr eax, 0x1f
  __asm dec eax
  __asm pop esi
  __asm ret
}



// Reference entry 114132a0; body size 94 bytes.
#line 1 "ENTRY_114132a0"

__declspec(naked) void FUN_114132a0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [LAB_122fa560]
  __asm mov edx, dword ptr [LAB_122fa560]
  __asm xor esi, dword ptr [esp + 0xc]
  __asm xor edx, dword ptr [esp + 8]
  __asm mov eax, edx
  __asm xor eax, esi
  __asm sub esi, edx
  __asm shr eax, 0x1f
  __asm xor eax, dword ptr [LAB_122fa560]
  __asm mov ecx, eax
  __asm neg eax
  __asm _emit 0xd1 __asm _emit 0xe9
  __asm neg ecx
  __asm or ecx, eax
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm shr ecx, 0x1f
  __asm neg ecx
  __asm xor eax, ecx
  __asm and ecx, edx
  __asm not eax
  __asm and esi, eax
  __asm or esi, ecx
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm shr esi, 0x1f
  __asm xor ecx, esi
  __asm mov eax, ecx
  __asm neg ecx
  __asm _emit 0xd1 __asm _emit 0xe8
  __asm neg eax
  __asm or eax, ecx
  __asm shr eax, 0x1f
  __asm neg eax
  __asm pop esi
  __asm ret
}



// Reference entry 11413320; body size 94 bytes.
#line 1 "ENTRY_11413320"

__declspec(naked) void FUN_11413320(void)

{
  __asm push esi
  __asm mov esi, dword ptr [LAB_122fa560]
  __asm mov edx, dword ptr [LAB_122fa560]
  __asm xor esi, dword ptr [esp + 8]
  __asm xor edx, dword ptr [esp + 0xc]
  __asm mov eax, edx
  __asm xor eax, esi
  __asm sub esi, edx
  __asm shr eax, 0x1f
  __asm xor eax, dword ptr [LAB_122fa560]
  __asm mov ecx, eax
  __asm neg eax
  __asm _emit 0xd1 __asm _emit 0xe9
  __asm neg ecx
  __asm or ecx, eax
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm shr ecx, 0x1f
  __asm neg ecx
  __asm xor eax, ecx
  __asm and ecx, edx
  __asm not eax
  __asm and esi, eax
  __asm or esi, ecx
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm shr esi, 0x1f
  __asm xor ecx, esi
  __asm mov eax, ecx
  __asm neg ecx
  __asm _emit 0xd1 __asm _emit 0xe8
  __asm neg eax
  __asm or eax, ecx
  __asm shr eax, 0x1f
  __asm neg eax
  __asm pop esi
  __asm ret
}



// Reference entry 114133a0; body size 45 bytes.
#line 1 "ENTRY_114133a0"

__declspec(naked) void FUN_114133a0(void)

{
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm xor eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm mov edx, dword ptr [LAB_122fa560]
  __asm xor ecx, eax
  __asm xor ecx, dword ptr [esp + 8]
  __asm xor edx, ecx
  __asm mov eax, edx
  __asm neg edx
  __asm _emit 0xd1 __asm _emit 0xe8
  __asm neg eax
  __asm or eax, edx
  __asm shr eax, 0x1f
  __asm neg eax
  __asm ret
}



// Reference entry 114133e0; body size 400 bytes.
#line 1 "ENTRY_114133e0"

__declspec(naked) void FUN_114133e0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm sub esp, 8
  __asm test eax, eax
  __asm je LAB_11413567
  __asm cmp dword ptr [esp + 0x14], 0
  __asm je LAB_11413567
  __asm push ebx
  __asm push ebp
  __asm push esi
  __asm mov esi, dword ptr [LAB_122fa560]
  __asm mov edx, dword ptr [LAB_122fa560]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x20]
  __asm xor esi, edi
  __asm mov ebp, edi
  __asm mov al, byte ptr [eax + edi - 1]
  __asm movzx ebx, al
  __asm xor edx, ebx
  __asm mov dword ptr [esp + 0x14], ebx
  __asm mov eax, edx
  __asm sub ebp, dword ptr [esp + 0x14]
  __asm xor eax, esi
  __asm sub esi, edx
  __asm shr eax, 0x1f
  __asm xor eax, dword ptr [LAB_122fa560]
  __asm mov ecx, eax
  __asm neg eax
  __asm _emit 0xd1 __asm _emit 0xe9
  __asm neg ecx
  __asm or ecx, eax
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm shr ecx, 0x1f
  __asm neg ecx
  __asm xor eax, ecx
  __asm and ecx, edx
  __asm mov edx, dword ptr [LAB_122fa560]
  __asm not eax
  __asm and esi, eax
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm xor eax, ebx
  __asm or esi, ecx
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm xor ecx, eax
  __asm shr esi, 0x1f
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm xor edx, esi
  __asm xor eax, ecx
  __asm mov ebx, eax
  __asm neg eax
  __asm _emit 0xd1 __asm _emit 0xeb
  __asm neg ebx
  __asm or ebx, eax
  __asm mov eax, edx
  __asm _emit 0xd1 __asm _emit 0xe8
  __asm neg edx
  __asm neg eax
  __asm shr ebx, 0x1f
  __asm or eax, edx
  __asm dec ebx
  __asm shr eax, 0x1f
  __asm neg eax
  __asm or ebx, eax
  __asm xor eax, eax
  __asm mov dword ptr [esp + 0x10], eax
  __asm test edi, edi
  __asm je LAB_11413543
  __asm nop
  __asm mov edi, dword ptr [LAB_122fa560]
  __asm mov edx, dword ptr [LAB_122fa560]
  __asm xor edi, eax
  __asm xor edx, ebp
  __asm mov eax, edx
  __asm xor eax, edi
  __asm sub edi, edx
  __asm shr eax, 0x1f
  __asm xor eax, dword ptr [LAB_122fa560]
  __asm mov ecx, eax
  __asm neg eax
  __asm _emit 0xd1 __asm _emit 0xe9
  __asm neg ecx
  __asm or ecx, eax
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm mov esi, dword ptr [LAB_122fa560]
  __asm shr ecx, 0x1f
  __asm neg ecx
  __asm xor eax, ecx
  __asm and ecx, edx
  __asm not eax
  __asm and edi, eax
  __asm mov eax, dword ptr [esp + 0x1c]
  __asm or edi, ecx
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm shr edi, 0x1f
  __asm xor esi, edi
  __asm movzx eax, byte ptr [ecx + eax]
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm xor ecx, eax
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm xor eax, ecx
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm xor eax, dword ptr [esp + 0x14]
  __asm xor ecx, eax
  __asm mov eax, esi
  __asm _emit 0xd1 __asm _emit 0xe8
  __asm mov edx, ecx
  __asm _emit 0xd1 __asm _emit 0xea
  __asm neg eax
  __asm neg edx
  __asm neg ecx
  __asm or edx, ecx
  __asm neg esi
  __asm or eax, esi
  __asm shr edx, 0x1f
  __asm shr eax, 0x1f
  __asm neg edx
  __asm dec eax
  __asm and edx, eax
  __asm mov eax, dword ptr [esp + 0x10]
  __asm inc eax
  __asm or ebx, edx
  __asm mov dword ptr [esp + 0x10], eax
  __asm cmp eax, dword ptr [esp + 0x20]
  __asm jb LAB_114134a0
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm mov eax, dword ptr [esp + 0x24]
  __asm xor ecx, ebx
  __asm pop edi
  __asm not ecx
  __asm and ebx, 0x6200
  __asm and ebp, ecx
  __asm neg ebx
  __asm pop esi
  __asm mov dword ptr [eax], ebp
  __asm mov eax, ebx
  __asm pop ebp
  __asm pop ebx
  __asm add esp, 8
  __asm ret
  __asm mov eax, 0xffff9f00
  __asm add esp, 8
  __asm ret
}



// Reference entry 11413730; body size 32 bytes.
#line 1 "ENTRY_11413730"

__declspec(naked) void FUN_11413730(void)

{
  __asm mov edx, dword ptr [LAB_122fa560]
  __asm xor edx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [esp + 8]
  __asm not edx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm inc eax
  __asm and eax, dword ptr [esp + 4]
  __asm inc ecx
  __asm and ecx, edx
  __asm or eax, ecx
  __asm dec eax
  __asm ret
}



// Reference entry 11418640; body size 106 bytes.
#line 1 "ENTRY_11418640"

__declspec(naked) void FUN_11418640(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm mov al, byte ptr [esp + 0xc]
  __asm mov dword ptr [edx], 0xff
  __asm cmp al, 0x30
  __asm _emit 0x7c __asm _emit 0x19
  __asm cmp al, 0x39
  __asm _emit 0x7f __asm _emit 0x15
  __asm movsx ecx, al
  __asm add ecx, -0x30
  __asm cmp ecx, dword ptr [esp + 8]
  __asm mov dword ptr [edx], ecx
  __asm sbb eax, eax
  __asm and eax, 6
  __asm add eax, -6
  __asm ret
  __asm cmp al, 0x41
  __asm _emit 0x7c __asm _emit 0x19
  __asm cmp al, 0x46
  __asm _emit 0x7f __asm _emit 0x15
  __asm movsx ecx, al
  __asm add ecx, -0x37
  __asm cmp ecx, dword ptr [esp + 8]
  __asm mov dword ptr [edx], ecx
  __asm sbb eax, eax
  __asm and eax, 6
  __asm add eax, -6
  __asm ret
  __asm mov ecx, 0xff
  __asm cmp al, 0x61
  __asm _emit 0x7c __asm _emit 0x0c
  __asm cmp al, 0x66
  __asm _emit 0x7f __asm _emit 0x08
  __asm movsx ecx, al
  __asm add ecx, -0x57
  __asm mov dword ptr [edx], ecx
  __asm cmp ecx, dword ptr [esp + 8]
  __asm sbb eax, eax
  __asm and eax, 6
  __asm add eax, -6
  __asm ret
}



// Reference entry 11418ca0; body size 247 bytes.
#line 1 "ENTRY_11418ca0"

__declspec(naked) void FUN_11418ca0(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm sub esp, 0x18
  __asm push ebx
  __asm push ebp
  __asm push esi
  __asm mov esi, dword ptr [eax]
  __asm mov eax, dword ptr [esp + 0x34]
  __asm add esi, eax
  __asm push edi
  __asm xor edi, edi
  __asm test eax, eax
  __asm je LAB_11418d6e
  __asm mov eax, dword ptr [esp + 0x30]
  __asm mov ebp, dword ptr [esp + 0x2c]
  __asm push eax
  __asm lea eax, [esp + 0x18]
  __asm push ebp
  __asm push eax
  __asm call LAB_10030b11
  __asm mov ebx, eax
  __asm add esp, 0xc
  __asm test ebx, ebx
  __asm jne LAB_11418d8d
  __asm mov ecx, dword ptr [esp + 0x30]
  __asm mov eax, ecx
  __asm cdq
  __asm xor eax, edx
  __asm shr ecx, 0x1f
  __asm sub eax, edx
  __asm add ecx, ecx
  __asm mov dword ptr [esp + 0x10], eax
  __asm mov edx, 1
  __asm mov eax, edx
  __asm mov word ptr [esp + 0x1e], dx
  __asm sub eax, ecx
  __asm mov word ptr [esp + 0x1c], ax
  __asm lea eax, [esp + 0x10]
  __asm mov dword ptr [esp + 0x18], eax
  __asm lea eax, [esp + 0x18]
  __asm push eax
  __asm push ebp
  __asm push ebx
  __asm push ebp
  __asm call LAB_10095abb
  __asm mov ebx, eax
  __asm add esp, 0x10
  __asm test ebx, ebx
  __asm _emit 0x75 __asm _emit 0x6a
  __asm mov eax, dword ptr [esp + 0x14]
  __asm dec esi
  __asm cmp eax, 0xa
  __asm _emit 0x73 __asm _emit 0x04
  __asm add al, 0x30
  __asm _emit 0xeb __asm _emit 0x02
  __asm add al, 0x37
  __asm mov byte ptr [esi], al
  __asm inc edi
  __asm lea eax, [esp + 0x10]
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp + 0x20], eax
  __asm lea eax, [esp + 0x20]
  __asm push eax
  __asm push ebp
  __asm mov dword ptr [esp + 0x2c], 0x10001
  __asm call LAB_1005dc47
  __asm add esp, 8
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x1b
  __asm mov eax, dword ptr [esp + 0x30]
  __asm cmp edi, dword ptr [esp + 0x38]
  __asm jb LAB_11418cc5
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm mov eax, 0xfffffff8
  __asm pop ebx
  __asm add esp, 0x18
  __asm ret
  __asm push edi
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x3c]
  __asm push dword ptr [esi]
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm add dword ptr [esi], edi
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm mov eax, ebx
  __asm pop ebx
  __asm add esp, 0x18
  __asm ret
}



// Reference entry 11418e30; body size 31 bytes.
#line 1 "ENTRY_11418e30"

__declspec(naked) void FUN_11418e30(void)

{
  __asm push dword ptr [esp + 4]
  __asm call LAB_1004c1b3
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x06
  __asm mov eax, 0xffffbf80
  __asm ret
  __asm mov dword ptr [esp + 4], eax
  __asm jmp LAB_10045129
}



// Reference entry 11419010; body size 35 bytes.
#line 1 "ENTRY_11419010"

__declspec(naked) void FUN_11419010(void)

{
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm xor ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm not ecx
  __asm neg eax
  __asm and eax, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm neg ecx
  __asm and ecx, dword ptr [esp + 4]
  __asm or eax, ecx
  __asm neg eax
  __asm ret
}



// Reference entry 11419350; body size 44 bytes.
#line 1 "ENTRY_11419350"

__declspec(naked) void FUN_11419350(void)

{
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm xor eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm mov edx, dword ptr [LAB_122fa560]
  __asm xor ecx, eax
  __asm xor ecx, dword ptr [esp + 8]
  __asm xor edx, ecx
  __asm mov eax, edx
  __asm neg edx
  __asm _emit 0xd1 __asm _emit 0xe8
  __asm neg eax
  __asm or eax, edx
  __asm shr eax, 0x1f
  __asm dec eax
  __asm ret
}



// Reference entry 11419390; body size 94 bytes.
#line 1 "ENTRY_11419390"

__declspec(naked) void FUN_11419390(void)

{
  __asm push esi
  __asm mov esi, dword ptr [LAB_122fa560]
  __asm mov edx, dword ptr [LAB_122fa560]
  __asm xor esi, dword ptr [esp + 0xc]
  __asm xor edx, dword ptr [esp + 8]
  __asm mov eax, edx
  __asm xor eax, esi
  __asm sub esi, edx
  __asm shr eax, 0x1f
  __asm xor eax, dword ptr [LAB_122fa560]
  __asm mov ecx, eax
  __asm neg eax
  __asm _emit 0xd1 __asm _emit 0xe9
  __asm neg ecx
  __asm or ecx, eax
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm shr ecx, 0x1f
  __asm neg ecx
  __asm xor eax, ecx
  __asm and ecx, edx
  __asm not eax
  __asm and esi, eax
  __asm or esi, ecx
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm shr esi, 0x1f
  __asm xor ecx, esi
  __asm mov eax, ecx
  __asm neg ecx
  __asm _emit 0xd1 __asm _emit 0xe8
  __asm neg eax
  __asm or eax, ecx
  __asm shr eax, 0x1f
  __asm neg eax
  __asm pop esi
  __asm ret
}



// Reference entry 11419440; body size 94 bytes.
#line 1 "ENTRY_11419440"

__declspec(naked) void FUN_11419440(void)

{
  __asm push esi
  __asm mov esi, dword ptr [LAB_122fa560]
  __asm mov edx, dword ptr [LAB_122fa560]
  __asm xor esi, dword ptr [esp + 8]
  __asm xor edx, dword ptr [esp + 0xc]
  __asm mov eax, edx
  __asm xor eax, esi
  __asm sub esi, edx
  __asm shr eax, 0x1f
  __asm xor eax, dword ptr [LAB_122fa560]
  __asm mov ecx, eax
  __asm neg eax
  __asm _emit 0xd1 __asm _emit 0xe9
  __asm neg ecx
  __asm or ecx, eax
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm shr ecx, 0x1f
  __asm neg ecx
  __asm xor eax, ecx
  __asm and ecx, edx
  __asm not eax
  __asm and esi, eax
  __asm or esi, ecx
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm shr esi, 0x1f
  __asm xor ecx, esi
  __asm mov eax, ecx
  __asm neg ecx
  __asm _emit 0xd1 __asm _emit 0xe8
  __asm neg eax
  __asm or eax, ecx
  __asm shr eax, 0x1f
  __asm neg eax
  __asm pop esi
  __asm ret
}



// Reference entry 1141d940; body size 37 bytes.
#line 1 "ENTRY_1141d940"

__declspec(naked) void FUN_1141d940(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp dword ptr [eax + 0x70], 1
  __asm _emit 0x75 __asm _emit 0x1b
  __asm cmp dword ptr [eax + 0x74], 0
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm _emit 0x75 __asm _emit 0x04
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0d
  __asm mov dword ptr [esp + 0x10], ecx
  __asm mov dword ptr [esp + 4], eax
  __asm jmp LAB_1141d980
}



// Reference entry 1141eb60; body size 110 bytes.
#line 1 "ENTRY_1141eb60"

__declspec(naked) void FUN_1141eb60(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm mov eax, edi
  __asm mov ecx, dword ptr [esi]
  __asm sub eax, ecx
  __asm cmp eax, 1
  __asm _emit 0x7d __asm _emit 0x08
  __asm pop edi
  __asm mov eax, 0xffffc2a0
  __asm pop esi
  __asm ret
  __asm movzx eax, byte ptr [ecx]
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x18]
  __asm mov dword ptr [ebx], eax
  __asm cmp eax, 6
  __asm _emit 0x74 __asm _emit 0x09
  __asm pop ebx
  __asm pop edi
  __asm mov eax, 0xffffc29e
  __asm pop esi
  __asm ret
  __asm push ebp
  __asm push eax
  __asm lea ebp, [ebx + 4]
  __asm push ebp
  __asm push edi
  __asm push esi
  __asm call LAB_10040b38
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0a
  __asm pop ebp
  __asm pop ebx
  __asm pop edi
  __asm add eax, 0xffffc300
  __asm pop esi
  __asm ret
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, 0xffffc29a
  __asm mov dword ptr [ebx + 8], eax
  __asm mov eax, dword ptr [ebp]
  __asm add dword ptr [esi], eax
  __asm xor eax, eax
  __asm cmp dword ptr [esi], edi
  __asm pop ebp
  __asm pop ebx
  __asm pop edi
  __asm cmovne eax, ecx
  __asm pop esi
  __asm ret
}



// Reference entry 1141eff0; body size 112 bytes.
#line 1 "ENTRY_1141eff0"

__declspec(naked) void FUN_1141eff0(void)

{
  __asm push ecx
  __asm push 4
  __asm lea eax, [esp + 4]
  __asm push eax
  __asm mov eax, dword ptr [esp + 0x14]
  __asm add eax, dword ptr [esp + 0x18]
  __asm push eax
  __asm lea eax, [esp + 0x18]
  __asm push eax
  __asm call LAB_10040b38
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 0xffffc300
  __asm pop ecx
  __asm ret
  __asm mov ecx, dword ptr [esp]
  __asm mov edx, dword ptr [esp + 0xc]
  __asm lea eax, [ecx + edx]
  __asm cmp eax, dword ptr [esp + 0x14]
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov eax, 0xffffc300
  __asm pop ecx
  __asm ret
  __asm push ecx
  __asm push edx
  __asm push dword ptr [esp + 0x10]
  __asm call LAB_1006c0a3
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x1c
  __asm push dword ptr [esp + 0x1c]
  __asm push dword ptr [esp + 0x1c]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 0x18]
  __asm push dword ptr [esp + 0x18]
  __asm call LAB_1006123e
  __asm add esp, 0x14
  __asm pop ecx
  __asm ret
}



// Reference entry 1141f430; body size 36 bytes.
#line 1 "ENTRY_1141f430"

__declspec(naked) void FUN_1141f430(void)

{
  __asm lea eax, [esp + 4]
  __asm push eax
  __asm call LAB_100191be
  __asm add esp, 4
  __asm sub eax, 2
  __asm _emit 0x74 __asm _emit 0x0d
  __asm sub eax, 1
  __asm _emit 0x74 __asm _emit 0x08
  __asm sub eax, 1
  __asm _emit 0x74 __asm _emit 0x03
  __asm xor eax, eax
  __asm ret
  __asm mov eax, dword ptr [esp + 8]
  __asm ret
}



// Reference entry 1141f460; body size 36 bytes.
#line 1 "ENTRY_1141f460"

__declspec(naked) void FUN_1141f460(void)

{
  __asm lea eax, [esp + 4]
  __asm push eax
  __asm call LAB_100191be
  __asm add esp, 4
  __asm sub eax, 2
  __asm _emit 0x74 __asm _emit 0x0d
  __asm sub eax, 1
  __asm _emit 0x74 __asm _emit 0x08
  __asm sub eax, 1
  __asm _emit 0x74 __asm _emit 0x03
  __asm xor eax, eax
  __asm ret
  __asm mov eax, dword ptr [esp + 8]
  __asm ret
}



// Reference entry 1141f490; body size 36 bytes.
#line 1 "ENTRY_1141f490"

__declspec(naked) void FUN_1141f490(void)

{
  __asm lea eax, [esp + 4]
  __asm push eax
  __asm call LAB_100191be
  __asm add esp, 4
  __asm sub eax, 2
  __asm _emit 0x74 __asm _emit 0x0d
  __asm sub eax, 1
  __asm _emit 0x74 __asm _emit 0x08
  __asm sub eax, 1
  __asm _emit 0x74 __asm _emit 0x03
  __asm xor eax, eax
  __asm ret
  __asm mov eax, dword ptr [esp + 8]
  __asm ret
}



// Reference entry 11422110; body size 39 bytes.
#line 1 "ENTRY_11422110"

__declspec(naked) void FUN_11422110(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm mov eax, 3
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x80 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edx + eax*4]
  __asm bswap ecx
  __asm add ecx, 1
  __asm bswap ecx
  __asm mov dword ptr [edx + eax*4], ecx
  __asm _emit 0x75 __asm _emit 0x07
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x03
  __asm dec eax
  __asm _emit 0xeb __asm _emit 0xea
  __asm ret
}



// Reference entry 11424990; body size 234 bytes.
#line 1 "ENTRY_11424990"

__declspec(naked) void FUN_11424990(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x30]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x30]
  __asm push edi
  __asm mov dword ptr [esp + 0x38], esi
  __asm lea edi, [esi + ebx]
  __asm cmp edi, esi
  __asm _emit 0x73 __asm _emit 0x09
  __asm pop edi
  __asm pop esi
  __asm mov eax, 0xffffb100
  __asm pop ebx
  __asm ret
  __asm push ebp
  __asm push dword ptr [esp + 0x48]
  __asm mov ebp, dword ptr [esp + 0x1c]
  __asm push dword ptr [esp + 0x48]
  __asm push dword ptr [esp + 0x30]
  __asm push dword ptr [esp + 0x30]
  __asm push dword ptr [esp + 0x30]
  __asm push ebp
  __asm call LAB_100286af
  __asm mov ecx, dword ptr [esp + 0x34]
  __asm add esp, 0x18
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x5b
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x2c]
  __asm lea eax, [esp + 0x3c]
  __asm push esi
  __asm push eax
  __asm push ecx
  __asm push ebx
  __asm push ebp
  __asm call LAB_10062b9d
  __asm add esp, 0x18
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x3d
  __asm push dword ptr [esp + 0x48]
  __asm mov eax, dword ptr [esp + 0x3c]
  __asm push dword ptr [esp + 0x48]
  __asm add eax, esi
  __asm push edi
  __asm mov dword ptr [esp + 0x48], eax
  __asm lea eax, [esp + 0x48]
  __asm push eax
  __asm push dword ptr [esp + 0x44]
  __asm push ebx
  __asm push dword ptr [esp + 0x3c]
  __asm mov ebx, dword ptr [esp + 0x3c]
  __asm push ebx
  __asm push dword ptr [esp + 0x3c]
  __asm push ebp
  __asm push dword ptr [esp + 0x3c]
  __asm call LAB_11424dd0
  __asm mov ecx, dword ptr [esp + 0x48]
  __asm add esp, 0x2c
  __asm _emit 0xeb __asm _emit 0x08
  __asm mov ecx, dword ptr [esp + 0x1c]
  __asm mov ebx, dword ptr [esp + 0x20]
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x39
  __asm push dword ptr [esp + 0x48]
  __asm lea eax, [esp + 0x40]
  __asm push dword ptr [esp + 0x48]
  __asm push edi
  __asm push eax
  __asm push dword ptr [esp + 0x44]
  __asm push dword ptr [esp + 0x44]
  __asm push dword ptr [esp + 0x44]
  __asm push ebx
  __asm push ecx
  __asm push ebp
  __asm push dword ptr [esp + 0x3c]
  __asm call LAB_11424480
  __asm add esp, 0x2c
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x0c
  __asm mov ecx, dword ptr [esp + 0x40]
  __asm mov edx, dword ptr [esp + 0x3c]
  __asm sub edx, esi
  __asm mov dword ptr [ecx], edx
  __asm pop ebp
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret
}



// Reference entry 11424ba0; body size 89 bytes.
#line 1 "ENTRY_11424ba0"

__declspec(naked) void FUN_11424ba0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [esi]
  __asm cmp eax, ecx
  __asm _emit 0x72 __asm _emit 0x43
  __asm sub eax, ecx
  __asm cmp eax, 5
  __asm _emit 0x7c __asm _emit 0x3c
  __asm add eax, -4
  __asm push eax
  __asm lea eax, [ecx + 4]
  __asm push eax
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm push dword ptr [esp + 0x20]
  __asm push dword ptr [esp + 0x28]
  __asm push dword ptr [esp + 0x24]
  __asm call LAB_10071391
  __asm add esp, 0x18
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x1c
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, dword ptr [esp + 8]
  __asm bswap ecx
  __asm mov dword ptr [eax], ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm add eax, 4
  __asm add dword ptr [esi], eax
  __asm xor eax, eax
  __asm pop esi
  __asm ret
  __asm mov eax, 0xffffb100
  __asm pop esi
  __asm ret
}



// Reference entry 11425000; body size 34 bytes.
#line 1 "ENTRY_11425000"

__declspec(naked) void FUN_11425000(void)

{
  __asm push dword ptr [esp + 0x10]
  __asm push dword ptr [esp + 0x10]
  __asm push dword ptr [esp + 0x10]
  __asm push dword ptr [esp + 0x10]
  __asm call LAB_1004c1b3
  __asm add esp, 4
  __asm push eax
  __asm call LAB_10045129
  __asm add esp, 0x10
  __asm ret
}



// Reference entry 11425c70; body size 63 bytes.
#line 1 "ENTRY_11425c70"

__declspec(naked) void FUN_11425c70(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, ecx
  __asm and eax, 0xffffff00
  __asm cmp eax, 0x8000100
  __asm _emit 0x74 __asm _emit 0x27
  __asm cmp eax, 0x8000400
  __asm _emit 0x74 __asm _emit 0x20
  __asm cmp eax, 0x8000500
  __asm _emit 0x74 __asm _emit 0x19
  __asm cmp eax, 0x8000200
  __asm _emit 0x74 __asm _emit 0x12
  __asm cmp eax, 0x8000300
  __asm _emit 0x74 __asm _emit 0x0b
  __asm cmp ecx, 0x8000609
  __asm _emit 0x74 __asm _emit 0x03
  __asm xor eax, eax
  __asm ret
  __asm mov eax, 1
  __asm ret
}



// Reference entry 11425cc0; body size 38 bytes.
#line 1 "ENTRY_11425cc0"

__declspec(naked) void FUN_11425cc0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, 0x1000
  __asm and eax, 0x7000
  __asm cmp ax, cx
  __asm _emit 0x74 __asm _emit 0x0d
  __asm mov ecx, 0x2000
  __asm cmp ax, cx
  __asm _emit 0x74 __asm _emit 0x03
  __asm xor eax, eax
  __asm ret
  __asm mov eax, 1
  __asm ret
}



// Reference entry 114260c0; body size 30 bytes.
#line 1 "ENTRY_114260c0"
int FUN_114260c0(int a1, int a2, int a3, int a4) {

    return (int)(thunk_FUN_11409bb0(a1, (int)&FUN_10080bf7, a2, a3, a4));
}

// Reference entry 11426100; body size 31 bytes.
#line 1 "ENTRY_11426100"

__declspec(naked) void FUN_11426100(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm lea eax, [esi + 0x1b0]
  __asm push eax
  __asm call LAB_1003fb39
  __asm lea eax, [esi + 8]
  __asm push eax
  __asm mov eax, dword ptr [esi + 4]
  __asm call eax
  __asm add esp, 8
  __asm pop esi
  __asm ret
}



// Reference entry 11426130; body size 60 bytes.
#line 1 "ENTRY_11426130"

__declspec(naked) void FUN_11426130(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [esi]
  __asm test ecx, ecx
  __asm _emit 0x75 __asm _emit 0x0b
  __asm mov dword ptr [esi], LAB_1001645f
  __asm mov ecx, offset LAB_1001645f
  __asm cmp dword ptr [esi + 4], 0
  __asm _emit 0x75 __asm _emit 0x07
  __asm mov dword ptr [esi + 4], LAB_1004f60b
  __asm lea eax, [esi + 8]
  __asm push eax
  __asm call ecx
  __asm add esp, 4
  __asm lea eax, [esi + 0x1b0]
  __asm pop esi
  __asm mov dword ptr [esp + 4], eax
  __asm jmp LAB_10048d0b
}



// Reference entry 11426180; body size 52 bytes.
#line 1 "ENTRY_11426180"

__declspec(naked) void FUN_11426180(void)

{
  __asm push ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm lea eax, [esp]
  __asm push 3
  __asm push eax
  __asm mov dword ptr [esp + 8], 0x415350
  __asm lea eax, [ecx + 8]
  __asm push eax
  __asm lea eax, [ecx + 0x1b0]
  __asm push offset LAB_10080bf7
  __asm push eax
  __asm call LAB_1008a83c
  __asm add esp, 0x18
  __asm mov dword ptr [esp + 4], eax
  __asm jmp LAB_1006e8ee
}



// Reference entry 11426d60; body size 49 bytes.
#line 1 "ENTRY_11426d60"

__declspec(naked) void FUN_11426d60(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp dword ptr [eax], 0
  __asm _emit 0x74 __asm _emit 0x22
  __asm mov ecx, dword ptr [eax + 0x14]
  __asm test cl, 1
  __asm _emit 0x74 __asm _emit 0x1a
  __asm test cl, 2
  __asm _emit 0x74 __asm _emit 0x12
  __asm cmp dword ptr [eax + 0xc], 0
  __asm _emit 0x75 __asm _emit 0x06
  __asm cmp dword ptr [eax + 0x10], 0
  __asm _emit 0x74 __asm _emit 0x06
  __asm mov eax, 0xffffff79
  __asm ret
  __asm xor eax, eax
  __asm ret
  __asm mov eax, 0xffffff77
  __asm ret
}



// Reference entry 114272c0; body size 55 bytes.
#line 1 "ENTRY_114272c0"

__declspec(naked) void FUN_114272c0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm and ecx, 0xffc07fff
  __asm cmp ecx, 0x5400100
  __asm _emit 0x75 __asm _emit 0x06
  __asm mov eax, 0x5500100
  __asm ret
  __asm cmp ecx, 0x5400200
  __asm _emit 0x75 __asm _emit 0x06
  __asm mov eax, 0x5500200
  __asm ret
  __asm xor eax, eax
  __asm mov edx, 0x5100500
  __asm cmp ecx, 0x5000500
  __asm cmove eax, edx
  __asm ret
}



// Reference entry 11429460; body size 40 bytes.
#line 1 "ENTRY_11429460"
int FUN_11429460(int a1, uint a2, int a3, uint a4) {

    if (a2 > a4) {
        return (int)(-151);
    }
    if (a2 != 0) {
        memcpy((void *)(a3), (void *)(a1), a2);
    }
    return (int)(0);
}

// Reference entry 114294a0; body size 40 bytes.
#line 1 "ENTRY_114294a0"
int FUN_114294a0(int a1, uint a2, int a3, uint a4) {

    if (a4 < a2) {
        return (int)(-138);
    }
    if (a2 != 0) {
        memcpy((void *)(a3), (void *)(a1), a2);
    }
    return (int)(0);
}

// Reference entry 11429ff0; body size 158 bytes.
#line 1 "ENTRY_11429ff0"

__declspec(naked) void FUN_11429ff0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp dword ptr [eax + 4], 0x100
  __asm _emit 0x72 __asm _emit 0x06
  __asm mov eax, 0xffffff79
  __asm ret
  __asm movzx ecx, word ptr [eax]
  __asm mov edx, 0x1000
  __asm mov eax, ecx
  __asm and eax, 0x7000
  __asm cmp ax, dx
  __asm _emit 0x74 __asm _emit 0x34
  __asm mov edx, 0x2000
  __asm cmp ax, dx
  __asm _emit 0x74 __asm _emit 0x2a
  __asm mov eax, ecx
  __asm and eax, 0xffffcfff
  __asm cmp eax, 0x4001
  __asm _emit 0x74 __asm _emit 0x1c
  __asm and ecx, 0xffffcf00
  __asm cmp ecx, 0x4100
  __asm _emit 0x74 __asm _emit 0x0e
  __asm cmp ecx, 0x4200
  __asm _emit 0x74 __asm _emit 0x06
  __asm mov eax, 0xffffff7a
  __asm ret
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x18]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm cmp edi, ebx
  __asm _emit 0x76 __asm _emit 0x08
  __asm pop edi
  __asm mov eax, 0xffffff76
  __asm pop ebx
  __asm ret
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x1c]
  __asm push edi
  __asm push dword ptr [esp + 0x18]
  __asm push esi
  __asm call LAB_1148cded
  __asm sub ebx, edi
  __asm lea eax, [edi + esi]
  __asm push ebx
  __asm push 0
  __asm push eax
  __asm call LAB_1148ce0b
  __asm mov eax, dword ptr [esp + 0x3c]
  __asm add esp, 0x18
  __asm pop esi
  __asm mov dword ptr [eax], edi
  __asm xor eax, eax
  __asm pop edi
  __asm pop ebx
  __asm ret
}



// Reference entry 1142a0d0; body size 194 bytes.
#line 1 "ENTRY_1142a0d0"

__declspec(naked) void FUN_1142a0d0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov edx, dword ptr [esp + 4]
  __asm cmp dword ptr [eax], 0
  __asm _emit 0x74 __asm _emit 0x04
  __asm xor eax, eax
  __asm _emit 0xeb __asm _emit 0x09
  __asm xor eax, eax
  __asm cmp dword ptr [esp + 0x10], eax
  __asm sete al
  __asm cmp dword ptr [edx + 4], 0x100
  __asm _emit 0x72 __asm _emit 0x10
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x06
  __asm mov eax, 0xffffff7a
  __asm ret
  __asm mov eax, 0xffffff79
  __asm ret
  __asm movzx eax, word ptr [edx]
  __asm mov ecx, eax
  __asm push edi
  __asm and ecx, 0x7000
  __asm mov edi, 0x1000
  __asm cmp cx, di
  __asm _emit 0x74 __asm _emit 0x67
  __asm mov edi, 0x2000
  __asm cmp cx, di
  __asm _emit 0x74 __asm _emit 0x5d
  __asm mov edi, 0x7001
  __asm cmp ax, di
  __asm _emit 0x75 __asm _emit 0x1f
  __asm push dword ptr [esp + 0x20]
  __asm push dword ptr [esp + 0x20]
  __asm push dword ptr [esp + 0x20]
  __asm push dword ptr [esp + 0x20]
  __asm push dword ptr [esp + 0x20]
  __asm push edx
  __asm call LAB_10075c89
  __asm add esp, 0x18
  __asm pop edi
  __asm ret
  __asm and eax, 0xffffcf00
  __asm cmp eax, 0x4100
  __asm _emit 0x75 __asm _emit 0x21
  __asm mov eax, 0x7000
  __asm cmp cx, ax
  __asm _emit 0x75 __asm _emit 0x17
  __asm push dword ptr [esp + 0x20]
  __asm push dword ptr [esp + 0x20]
  __asm push dword ptr [esp + 0x20]
  __asm push edx
  __asm call LAB_1007c87c
  __asm add esp, 0x10
  __asm pop edi
  __asm ret
  __asm mov eax, 0xffffff7a
  __asm pop edi
  __asm ret
  __asm push dword ptr [esp + 0x1c]
  __asm push dword ptr [esp + 0x1c]
  __asm call LAB_1142bf40
  __asm add esp, 8
  __asm pop edi
  __asm ret
}



// Reference entry 1142a260; body size 45 bytes.
#line 1 "ENTRY_1142a260"

__declspec(naked) void FUN_1142a260(void)

{
  __asm push dword ptr [esp + 0x18]
  __asm push dword ptr [esp + 0x18]
  __asm push dword ptr [esp + 0x18]
  __asm push dword ptr [esp + 0x18]
  __asm push dword ptr [esp + 0x18]
  __asm push dword ptr [esp + 0x18]
  __asm call LAB_10054700
  __asm mov ecx, 0xffffff7a
  __asm add esp, 0x18
  __asm cmp eax, ecx
  __asm cmovne ecx, eax
  __asm mov eax, ecx
  __asm ret
}



// Reference entry 1142a2d0; body size 42 bytes.
#line 1 "ENTRY_1142a2d0"

__declspec(naked) void FUN_1142a2d0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push dword ptr [esp + 0xc]
  __asm lea eax, [esi + 8]
  __asm push eax
  __asm call LAB_1003ab7a
  __asm add esp, 8
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
  __asm cmp eax, 0xffffff7a
  __asm _emit 0x75 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 1142a480; body size 46 bytes.
#line 1 "ENTRY_1142a480"

__declspec(naked) void FUN_1142a480(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp dword ptr [eax + 4], 0x100
  __asm _emit 0x72 __asm _emit 0x06
  __asm mov eax, 0xffffff7a
  __asm ret
  __asm cmp dword ptr [esp + 0x10], 0x9020000
  __asm _emit 0x75 __asm _emit 0xf0
  __asm mov dword ptr [esp + 0x10], 0x9020000
  __asm mov dword ptr [esp + 4], eax
  __asm jmp LAB_1004e436
}



// Reference entry 1142a4f0; body size 73 bytes.
#line 1 "ENTRY_1142a4f0"

__declspec(naked) void FUN_1142a4f0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp dword ptr [eax + 4], 0x100
  __asm _emit 0x72 __asm _emit 0x06
  __asm mov eax, 0xffffff79
  __asm ret
  __asm push dword ptr [esp + 0x24]
  __asm push dword ptr [esp + 0x24]
  __asm push dword ptr [esp + 0x24]
  __asm push dword ptr [esp + 0x24]
  __asm push dword ptr [esp + 0x24]
  __asm push dword ptr [esp + 0x24]
  __asm push dword ptr [esp + 0x24]
  __asm push dword ptr [esp + 0x24]
  __asm push eax
  __asm call LAB_1004a223
  __asm mov ecx, 0xffffff7a
  __asm add esp, 0x24
  __asm cmp eax, ecx
  __asm cmovne ecx, eax
  __asm mov eax, ecx
  __asm ret
}



// Reference entry 1142a580; body size 70 bytes.
#line 1 "ENTRY_1142a580"

__declspec(naked) void FUN_1142a580(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm cmp dword ptr [eax + 4], 0x100
  __asm _emit 0x72 __asm _emit 0x06
  __asm mov eax, 0xffffff79
  __asm ret
  __asm push esi
  __asm push dword ptr [esp + 0x18]
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push dword ptr [esp + 0x18]
  __asm push dword ptr [esp + 0x18]
  __asm push eax
  __asm lea eax, [esi + 0x10]
  __asm push eax
  __asm call LAB_1002c651
  __asm add esp, 0x14
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
  __asm cmp eax, 0xffffff7a
  __asm _emit 0x75 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 1142a760; body size 49 bytes.
#line 1 "ENTRY_1142a760"

__declspec(naked) void FUN_1142a760(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm cmp dword ptr [eax + 0x1c], 0x100
  __asm _emit 0x72 __asm _emit 0x06
  __asm mov eax, 0xffffff79
  __asm ret
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push eax
  __asm lea eax, [esi + 0x1c]
  __asm push eax
  __asm call LAB_100958e5
  __asm add esp, 8
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x06 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 1142a890; body size 89 bytes.
#line 1 "ENTRY_1142a890"

__declspec(naked) void FUN_1142a890(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm cmp dword ptr [ecx + 4], 0x100
  __asm _emit 0x72 __asm _emit 0x06
  __asm mov eax, 0xffffff79
  __asm ret
  __asm mov eax, dword ptr [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm movzx edx, word ptr [ecx]
  __asm mov ecx, edx
  __asm mov eax, edx
  __asm and eax, 0xffffff00
  __asm cmp eax, 0x7100
  __asm _emit 0x74 __asm _emit 0x06
  __asm mov eax, 0xffffff7a
  __asm ret
  __asm and ecx, 0xffffcf00
  __asm movzx eax, dl
  __asm xor edx, edx
  __asm cmp ecx, 0x4100
  __asm cmovne eax, edx
  __asm and al, 0xc0
  __asm movzx eax, al
  __asm neg eax
  __asm sbb eax, eax
  __asm add eax, 0xffffff7a
  __asm ret
}



// Reference entry 1142ab60; body size 68 bytes.
#line 1 "ENTRY_1142ab60"

__declspec(naked) void FUN_1142ab60(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm cmp dword ptr [ecx + 4], 0x100
  __asm _emit 0x72 __asm _emit 0x06
  __asm mov eax, 0xffffff79
  __asm ret
  __asm mov eax, dword ptr [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm movzx ecx, word ptr [ecx]
  __asm mov eax, ecx
  __asm and eax, 0xffffcf00
  __asm cmp eax, 0x4100
  __asm _emit 0x74 __asm _emit 0x06
  __asm mov eax, 0xffffff7a
  __asm ret
  __asm and cl, 0xc0
  __asm movzx eax, cl
  __asm neg eax
  __asm sbb eax, eax
  __asm add eax, 0xffffff7a
  __asm ret
}



// Reference entry 1142af40; body size 67 bytes.
#line 1 "ENTRY_1142af40"

__declspec(naked) void FUN_1142af40(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x14]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm cmp edi, ebx
  __asm _emit 0x76 __asm _emit 0x08
  __asm pop edi
  __asm mov eax, 0xffffff76
  __asm pop ebx
  __asm ret
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x18]
  __asm push edi
  __asm push dword ptr [esp + 0x14]
  __asm push esi
  __asm call LAB_1148cded
  __asm sub ebx, edi
  __asm lea eax, [edi + esi]
  __asm push ebx
  __asm push 0
  __asm push eax
  __asm call LAB_1148ce0b
  __asm mov eax, dword ptr [esp + 0x38]
  __asm add esp, 0x18
  __asm pop esi
  __asm mov dword ptr [eax], edi
  __asm xor eax, eax
  __asm pop edi
  __asm pop ebx
  __asm ret
}



// Reference entry 1142b280; body size 35 bytes.
#line 1 "ENTRY_1142b280"

__declspec(naked) void FUN_1142b280(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0xa9 __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0x07
  __asm or eax, 0x400
  __asm mov dword ptr [ecx], eax
  __asm _emit 0xa9 __asm _emit 0x00 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0x07
  __asm or eax, 0x800
  __asm mov dword ptr [ecx], eax
  __asm ret
}



// Reference entry 1142b390; body size 157 bytes.
#line 1 "ENTRY_1142b390"

__declspec(naked) void FUN_1142b390(void)

{
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm cmp esi, 0xff
  __asm _emit 0x74 __asm _emit 0x17
  __asm cmp esi, 0x1c0
  __asm _emit 0x74 __asm _emit 0x08
  __asm pop esi
  __asm mov eax, 0xffffff79
  __asm pop ebx
  __asm ret
  __asm mov ebx, 0x38
  __asm _emit 0xeb __asm _emit 0x05
  __asm mov ebx, 0x20
  __asm push edi
  __asm push ebx
  __asm push 1
  __asm call dword ptr [LAB_122fc7b0]
  __asm mov edi, dword ptr [esp + 0x20]
  __asm add esp, 8
  __asm mov dword ptr [edi], eax
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x09
  __asm pop edi
  __asm pop esi
  __asm mov eax, 0xffffff73
  __asm pop ebx
  __asm ret
  __asm push ebx
  __asm push eax
  __asm push dword ptr [esp + 0x1c]
  __asm call LAB_100152e9
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x3d
  __asm cmp esi, 0xff
  __asm _emit 0x74 __asm _emit 0x22
  __asm cmp esi, 0x1c0
  __asm _emit 0x74 __asm _emit 0x09
  __asm pop edi
  __asm pop esi
  __asm mov eax, 0xffffff69
  __asm pop ebx
  __asm ret
  __asm mov eax, dword ptr [edi]
  __asm and byte ptr [eax], 0xfc
  __asm mov eax, dword ptr [edi]
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm or byte ptr [eax + 0x37], 0x80
  __asm xor eax, eax
  __asm ret
  __asm mov eax, dword ptr [edi]
  __asm and byte ptr [eax], 0xf8
  __asm mov eax, dword ptr [edi]
  __asm and byte ptr [eax + 0x1f], 0x7f
  __asm mov eax, dword ptr [edi]
  __asm or byte ptr [eax + 0x1f], 0x40
  __asm xor eax, eax
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret
}



// Reference entry 1142c180; body size 67 bytes.
#line 1 "ENTRY_1142c180"

__declspec(naked) void FUN_1142c180(void)

{
  __asm push esi
  __asm push dword ptr [esp + 0x14]
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push dword ptr [esp + 0x14]
  __asm push esi
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_1142bfb0
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x23
  __asm mov eax, dword ptr [esi]
  __asm cmp dword ptr [eax + 4], 0x100
  __asm _emit 0x72 __asm _emit 0x16
  __asm push eax
  __asm call LAB_1000d111
  __asm add esp, 4
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, 0xffffff7a
  __asm pop esi
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 1142c1e0; body size 39 bytes.
#line 1 "ENTRY_1142c1e0"

__declspec(naked) int FUN_1142c1e0(void)

{
  __asm push ebx
  __asm push offset LAB_122fb15c
  __asm call dword ptr [LAB_12126b50]
  __asm mov bl, byte ptr [LAB_122fa1d0]
  __asm push offset LAB_122fb15c
  __asm and bl, 1
  __asm call dword ptr [LAB_12126b54]
  __asm add esp, 8
  __asm mov al, bl
  __asm pop ebx
  __asm ret
}



// Reference entry 1142c900; body size 72 bytes.
#line 1 "ENTRY_1142c900"

__declspec(naked) int FUN_1142c900(void)

{
  __asm sub esp, 0xec
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0xe8], eax
  __asm push esi
  __asm push 0xdc
  __asm lea eax, [esp + 0x14]
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push 0
  __asm push eax
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1148ce0b
  __asm mov eax, dword ptr [esp + 0x10]
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov esi, 0xffffff77
  __asm _emit 0xeb __asm _emit 0x6c
}



// Reference entry 1142e090; body size 33 bytes.
#line 1 "ENTRY_1142e090"
int FUN_1142e090(int a1) {

    int v1 = (int)(*(int *)a1); // (int)&FUN_1142e094
    return (int)((v1 & 0x7f000000) != 0x9000000 ? v1 : v1 & -0x9ff0001 | 0x8000000);
}

// Reference entry 1142e4d0; body size 60 bytes.
#line 1 "ENTRY_1142e4d0"

__declspec(naked) void FUN_1142e4d0(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [edx]
  __asm mov eax, ecx
  __asm and eax, 0x7f000000
  __asm cmp eax, 0x9000000
  __asm _emit 0x75 __asm _emit 0x0c
  __asm and ecx, 0xfe00ffff
  __asm or ecx, 0x8000000
  __asm push ebx
  __asm xor ebx, ebx
  __asm test ecx, ecx
  __asm push edx
  __asm setne bl
  __asm lea ebx, [ebx*2 - 0x89]
  __asm call LAB_1005e813
  __asm add esp, 4
  __asm mov eax, ebx
  __asm pop ebx
  __asm ret
}



// Reference entry 1142fc70; body size 317 bytes.
#line 1 "ENTRY_1142fc70"

__declspec(naked) void FUN_1142fc70(void)

{
  __asm push ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm movzx eax, cl
  __asm or eax, 0x2000000
  __asm cmp eax, 0x2000003
  __asm _emit 0x75 __asm _emit 0x07
  __asm mov dl, 0x10
  __asm jmp LAB_1142fd11
  __asm cmp eax, 0x2000004
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov dl, 0x14
  __asm _emit 0xeb __asm _emit 0x7b
  __asm cmp eax, 0x2000005
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov dl, 0x14
  __asm _emit 0xeb __asm _emit 0x70
  __asm cmp eax, 0x2000008
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov dl, 0x1c
  __asm _emit 0xeb __asm _emit 0x65
  __asm cmp eax, 0x2000009
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov dl, 0x20
  __asm _emit 0xeb __asm _emit 0x5a
  __asm cmp eax, 0x200000a
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov dl, 0x30
  __asm _emit 0xeb __asm _emit 0x4f
  __asm cmp eax, 0x200000b
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov dl, 0x40
  __asm _emit 0xeb __asm _emit 0x44
  __asm cmp eax, 0x200000c
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov dl, 0x1c
  __asm _emit 0xeb __asm _emit 0x39
  __asm cmp eax, 0x200000d
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov dl, 0x20
  __asm _emit 0xeb __asm _emit 0x2e
  __asm cmp eax, 0x2000010
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov dl, 0x1c
  __asm _emit 0xeb __asm _emit 0x23
  __asm cmp eax, 0x2000011
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov dl, 0x20
  __asm _emit 0xeb __asm _emit 0x18
  __asm cmp eax, 0x2000012
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov dl, 0x30
  __asm _emit 0xeb __asm _emit 0x0d
  __asm cmp eax, 0x2000013
  __asm setne dl
  __asm dec dl
  __asm and dl, 0x40
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm mov byte ptr [esp + 7], dl
  __asm mov eax, dword ptr [edi + 4]
  __asm sub eax, 4
  __asm _emit 0x74 __asm _emit 0x0d
  __asm sub eax, 1
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov eax, 0xffffff77
  __asm pop edi
  __asm pop ecx
  __asm ret
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 0x18]
  __asm push ebx
  __asm push ebp
  __asm push esi
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x64
  __asm mov ebp, dword ptr [esp + 0x20]
  __asm mov dh, byte ptr [edi]
  __asm test dh, dh
  __asm _emit 0x75 __asm _emit 0x14
  __asm push ecx
  __asm push edi
  __asm call LAB_1142f960
  __asm add esp, 8
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x4e
  __asm mov eax, dword ptr [esp + 0x24]
  __asm _emit 0xeb __asm _emit 0x38
  __asm movzx ebx, al
  __asm movzx ecx, dh
  __asm cmp ecx, dword ptr [esp + 0x24]
  __asm movzx eax, dh
  __asm cmovbe ebx, eax
  __asm mov al, dl
  __asm sub al, dh
  __asm movzx esi, bl
  __asm movzx eax, al
  __asm add eax, 0x68
  __asm push esi
  __asm add eax, edi
  __asm push eax
  __asm push ebp
  __asm call LAB_1148cded
  __asm mov eax, dword ptr [esp + 0x30]
  __asm add esp, 0xc
  __asm sub eax, esi
  __asm add ebp, esi
  __asm sub byte ptr [edi], bl
  __asm mov dword ptr [esp + 0x24], eax
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0a
  __asm mov dl, byte ptr [esp + 0x13]
  __asm mov ecx, dword ptr [esp + 0x1c]
  __asm _emit 0xeb __asm _emit 0xa0
  __asm xor eax, eax
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm pop edi
  __asm pop ecx
  __asm ret
}



// Reference entry 11430400; body size 280 bytes.
#line 1 "ENTRY_11430400"

__declspec(naked) void FUN_11430400(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x10]
  __asm test ebx, ebx
  __asm je LAB_11430511
  __asm mov eax, ebx
  __asm and eax, 0xffffff00
  __asm cmp eax, 0x6000300
  __asm _emit 0x74 __asm _emit 0x2d
  __asm cmp eax, 0x6001300
  __asm _emit 0x74 __asm _emit 0x26
  __asm cmp eax, 0x6000200
  __asm _emit 0x74 __asm _emit 0x1f
  __asm mov ecx, ebx
  __asm and ecx, 0xfffffe00
  __asm cmp ecx, 0x6000600
  __asm _emit 0x74 __asm _emit 0x0f
  __asm cmp eax, 0x6000900
  __asm _emit 0x74 __asm _emit 0x08
  __asm cmp ecx, 0x6000400
  __asm _emit 0x75 __asm _emit 0x57
  __asm movzx ecx, bl
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x50
  __asm cmp eax, 0x6000300
  __asm _emit 0x74 __asm _emit 0x39
  __asm cmp eax, 0x6001300
  __asm _emit 0x74 __asm _emit 0x32
  __asm cmp eax, 0x6000200
  __asm _emit 0x74 __asm _emit 0x2b
  __asm mov edx, ebx
  __asm and edx, 0xfffffe00
  __asm cmp edx, 0x6000600
  __asm _emit 0x74 __asm _emit 0x1b
  __asm cmp eax, 0x6000900
  __asm _emit 0x74 __asm _emit 0x14
  __asm cmp edx, 0x6000400
  __asm _emit 0x74 __asm _emit 0x0c
  __asm xor ecx, ecx
  __asm xor eax, eax
  __asm cmp ecx, 0x20000ff
  __asm _emit 0xeb __asm _emit 0x41
  __asm or ecx, 0x2000000
  __asm xor eax, eax
  __asm cmp ecx, 0x20000ff
  __asm _emit 0xeb __asm _emit 0x31
  __asm mov eax, ebx
  __asm and eax, 0x7f000000
  __asm cmp eax, 0x3000000
  __asm _emit 0x75 __asm _emit 0x0a
  __asm mov eax, ebx
  __asm shr eax, 0xf
  __asm and eax, 1
  __asm _emit 0xeb __asm _emit 0x1c
  __asm cmp eax, 0x5000000
  __asm _emit 0x75 __asm _emit 0x0a
  __asm mov eax, ebx
  __asm shr eax, 0xf
  __asm and eax, 1
  __asm _emit 0xeb __asm _emit 0x0b
  __asm xor eax, eax
  __asm cmp ebx, 0x20000ff
  __asm sete al
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x3a
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push ebx
  __asm push dword ptr [esi + 4]
  __asm push dword ptr [esp + 0x18]
  __asm call LAB_1142d8f0
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x1c
  __asm push ebx
  __asm push dword ptr [esi + 8]
  __asm push dword ptr [esp + 0x18]
  __asm call LAB_1142d8f0
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x08
  __asm pop esi
  __asm mov eax, 0xffffff7b
  __asm pop ebx
  __asm ret
  __asm pop esi
  __asm xor eax, eax
  __asm pop ebx
  __asm ret
  __asm mov eax, 0xffffff79
  __asm pop ebx
  __asm ret
}



// Reference entry 114321f0; body size 104 bytes.
#line 1 "ENTRY_114321f0"

__declspec(naked) void FUN_114321f0(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm push dword ptr [ebx + 4]
  __asm push dword ptr [edi + 4]
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_1142fe10
  __asm push dword ptr [ebx + 8]
  __asm mov dword ptr [esp + 0x24], eax
  __asm push dword ptr [edi + 8]
  __asm push dword ptr [esp + 0x20]
  __asm call LAB_1142fe10
  __asm mov edx, dword ptr [esp + 0x2c]
  __asm add esp, 0x18
  __asm mov ecx, eax
  __asm test edx, edx
  __asm _emit 0x75 __asm _emit 0x0a
  __asm cmp dword ptr [edi + 4], edx
  __asm _emit 0x74 __asm _emit 0x05
  __asm cmp dword ptr [ebx + 4], edx
  __asm _emit 0x75 __asm _emit 0x0e
  __asm test ecx, ecx
  __asm _emit 0x75 __asm _emit 0x12
  __asm cmp dword ptr [edi + 8], ecx
  __asm _emit 0x74 __asm _emit 0x0d
  __asm cmp dword ptr [ebx + 8], ecx
  __asm _emit 0x74 __asm _emit 0x08
  __asm pop edi
  __asm mov eax, 0xffffff79
  __asm pop ebx
  __asm ret
  __asm mov eax, dword ptr [ebx]
  __asm and dword ptr [edi], eax
  __asm xor eax, eax
  __asm mov dword ptr [edi + 4], edx
  __asm mov dword ptr [edi + 8], ecx
  __asm pop edi
  __asm pop ebx
  __asm ret
}



// Reference entry 11432280; body size 33 bytes.
#line 1 "ENTRY_11432280"

__declspec(naked) void FUN_11432280(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp eax, 0xfff8
  __asm _emit 0x76 __asm _emit 0x0a
  __asm mov eax, 0xffff
  __asm mov word ptr [ecx + 2], ax
  __asm ret
  __asm movzx eax, ax
  __asm mov word ptr [ecx + 2], ax
  __asm ret
}



// Reference entry 114322c0; body size 48 bytes.
#line 1 "ENTRY_114322c0"

__declspec(naked) void FUN_114322c0(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov edx, ecx
  __asm mov eax, ecx
  __asm or edx, 0x400
  __asm and eax, 0x1000
  __asm cmove edx, ecx
  __asm mov ecx, edx
  __asm mov eax, edx
  __asm or ecx, 0x800
  __asm and eax, 0x2000
  __asm mov eax, dword ptr [esp + 4]
  __asm cmove ecx, edx
  __asm mov dword ptr [eax + 8], ecx
  __asm ret
}



// Reference entry 11432480; body size 33 bytes.
#line 1 "ENTRY_11432480"

__declspec(naked) void FUN_11432480(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx]
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x01
  __asm ret
  __asm sub eax, 1
  __asm mov eax, 0xffffff79
  __asm _emit 0x75 __asm _emit 0x05
  __asm mov eax, 0xffffff7a
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
}



// Reference entry 11433510; body size 236 bytes.
#line 1 "ENTRY_11433510"

__declspec(naked) void FUN_11433510(void)

{
  __asm push ecx
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x14]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm cmp dword ptr [edi + 4], 2
  __asm _emit 0x75 __asm _emit 0x07
  __asm mov eax, dword ptr [edi + 0x24]
  __asm add eax, ebx
  __asm _emit 0xeb __asm _emit 0x03
  __asm lea eax, [ebx + ebx]
  __asm add eax, 4
  __asm mov dword ptr [esp + 8], eax
  __asm cmp ebx, 0x80
  __asm _emit 0x76 __asm _emit 0x09
  __asm pop edi
  __asm mov eax, 0xffffff79
  __asm pop ebx
  __asm pop ecx
  __asm ret
  __asm push ebp
  __asm push eax
  __asm push 1
  __asm call dword ptr [LAB_122fc7b0]
  __asm mov ebp, eax
  __asm add esp, 8
  __asm test ebp, ebp
  __asm _emit 0x75 __asm _emit 0x0a
  __asm pop ebp
  __asm pop edi
  __asm mov eax, 0xffffff73
  __asm pop ebx
  __asm pop ecx
  __asm ret
  __asm cmp dword ptr [edi + 4], 2
  __asm push esi
  __asm lea esi, [ebp + 1]
  __asm _emit 0x75 __asm _emit 0x37
  __asm movzx eax, byte ptr [edi + 0x25]
  __asm mov byte ptr [ebp], al
  __asm movzx eax, byte ptr [edi + 0x24]
  __asm mov byte ptr [esi], al
  __asm inc esi
  __asm mov eax, dword ptr [edi + 0x24]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x1b
  __asm push eax
  __asm push dword ptr [edi + 0x20]
  __asm push esi
  __asm call LAB_1148cded
  __asm push dword ptr [edi + 0x24]
  __asm push dword ptr [edi + 0x20]
  __asm call LAB_100755db
  __asm add esp, 0x14
  __asm add esi, dword ptr [edi + 0x24]
  __asm mov eax, ebx
  __asm shr eax, 8
  __asm _emit 0xeb __asm _emit 0x23
  __asm mov eax, ebx
  __asm shr eax, 8
  __asm mov byte ptr [ebp], al
  __asm mov dword ptr [esp + 0x18], eax
  __asm mov al, bl
  __asm push ebx
  __asm mov byte ptr [esi], al
  __asm inc esi
  __asm push 0
  __asm push esi
  __asm call LAB_1148ce0b
  __asm mov eax, dword ptr [esp + 0x24]
  __asm add esp, 0xc
  __asm add esi, ebx
  __asm mov cl, bl
  __asm mov byte ptr [esi], al
  __asm push ebx
  __asm push dword ptr [esp + 0x20]
  __asm mov byte ptr [esi + 1], cl
  __asm add esi, 2
  __asm push esi
  __asm call LAB_1148cded
  __asm sub esi, ebp
  __asm add esi, ebx
  __asm push esi
  __asm push ebp
  __asm push edi
  __asm call LAB_114336c0
  __asm push dword ptr [esp + 0x28]
  __asm mov esi, eax
  __asm push ebp
  __asm call LAB_1008b8e0
  __asm add esp, 0x20
  __asm mov eax, esi
  __asm pop esi
  __asm pop ebp
  __asm pop edi
  __asm pop ebx
  __asm pop ecx
  __asm ret
}



// Reference entry 11433640; body size 100 bytes.
#line 1 "ENTRY_11433640"

__declspec(naked) void FUN_11433640(void)

{
  __asm push edi
  __asm mov edi, dword ptr [esp + 8]
  __asm cmp dword ptr [edi + 4], 1
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov eax, 0xffffff77
  __asm pop edi
  __asm ret
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x14]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x38
  __asm push esi
  __asm push 1
  __asm call dword ptr [LAB_122fc7b0]
  __asm add esp, 8
  __asm mov dword ptr [edi + 0x20], eax
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x08
  __asm pop esi
  __asm mov eax, 0xffffff73
  __asm pop edi
  __asm ret
  __asm push esi
  __asm push dword ptr [esp + 0x14]
  __asm push eax
  __asm call LAB_1148cded
  __asm add esp, 0xc
  __asm mov dword ptr [edi + 0x24], esi
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm xor eax, eax
  __asm pop esi
  __asm pop edi
  __asm ret
  __asm xor esi, esi
  __asm xor eax, eax
  __asm mov dword ptr [edi + 0x24], esi
  __asm pop esi
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm ret
}



// Reference entry 11433730; body size 83 bytes.
#line 1 "ENTRY_11433730"

__declspec(naked) void FUN_11433730(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm cmp dword ptr [esi + 4], 3
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov eax, 0xffffff77
  __asm pop esi
  __asm ret
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x2c
  __asm push edi
  __asm push 1
  __asm call dword ptr [LAB_122fc7b0]
  __asm add esp, 8
  __asm mov dword ptr [esi + 0x18], eax
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x08
  __asm pop edi
  __asm mov eax, 0xffffff73
  __asm pop esi
  __asm ret
  __asm push edi
  __asm push dword ptr [esp + 0x14]
  __asm push eax
  __asm call LAB_1148cded
  __asm add esp, 0xc
  __asm mov dword ptr [esi + 0x1c], edi
  __asm pop edi
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 114337a0; body size 83 bytes.
#line 1 "ENTRY_114337a0"

__declspec(naked) void FUN_114337a0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm cmp dword ptr [esi + 4], 0
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov eax, 0xffffff77
  __asm pop esi
  __asm ret
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x2c
  __asm push edi
  __asm push 1
  __asm call dword ptr [LAB_122fc7b0]
  __asm add esp, 8
  __asm mov dword ptr [esi + 0x10], eax
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x08
  __asm pop edi
  __asm mov eax, 0xffffff73
  __asm pop esi
  __asm ret
  __asm push edi
  __asm push dword ptr [esp + 0x14]
  __asm push eax
  __asm call LAB_1148cded
  __asm add esp, 0xc
  __asm mov dword ptr [esi + 0x14], edi
  __asm pop edi
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 11433810; body size 106 bytes.
#line 1 "ENTRY_11433810"

__declspec(naked) void FUN_11433810(void)

{
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edi
  __asm push dword ptr [esp + 0x14]
  __asm mov ebx, dword ptr [esi + 4]
  __asm mov edi, dword ptr [esi + 0x14]
  __asm push ebx
  __asm call LAB_1003445a
  __asm add esp, 8
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x1a
  __asm push ebx
  __asm call LAB_1005b901
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x0d
  __asm test bl, bl
  __asm _emit 0x75 __asm _emit 0x0d
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x1a
  __asm mov eax, 0xffffff79
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret
  __asm push 0
  __asm push dword ptr [esi + 0x14]
  __asm call LAB_10039207
  __asm add esp, 8
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0xe6
  __asm test dword ptr [esi + 8], 0xffff00fc
  __asm _emit 0x75 __asm _emit 0xdd
  __asm mov eax, 0xfff8
  __asm cmp ax, word ptr [esi + 2]
  __asm pop edi
  __asm sbb eax, eax
  __asm pop esi
  __asm and eax, 0xffffff7a
  __asm pop ebx
  __asm ret
}



// Reference entry 114338c0; body size 133 bytes.
#line 1 "ENTRY_114338c0"

__declspec(naked) void FUN_114338c0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, 0x1000
  __asm mov ecx, eax
  __asm and ecx, 0x7000
  __asm push esi
  __asm cmp cx, dx
  __asm _emit 0x74 __asm _emit 0x59
  __asm mov edx, 0x2000
  __asm cmp cx, dx
  __asm _emit 0x74 __asm _emit 0x4f
  __asm movzx edx, ax
  __asm mov esi, 0x7000
  __asm mov eax, edx
  __asm and eax, 0xffffcfff
  __asm cmp eax, 0x4001
  __asm _emit 0x75 __asm _emit 0x1f
  __asm cmp cx, si
  __asm _emit 0x75 __asm _emit 0x1a
  __asm mov eax, dword ptr [esp + 0xc]
  __asm cmp eax, 0x1000
  __asm _emit 0x77 __asm _emit 0x22
  __asm cmp eax, 0x400
  __asm _emit 0x72 __asm _emit 0x1b __asm _emit 0xa8 __asm _emit 0x07 __asm _emit 0x75 __asm _emit 0x17
  __asm xor eax, eax
  __asm pop esi
  __asm ret
  __asm and edx, 0xffffcf00
  __asm cmp edx, 0x4100
  __asm _emit 0x75 __asm _emit 0x05
  __asm cmp cx, si
  __asm _emit 0x74 __asm _emit 0x18
  __asm mov eax, 0xffffff7a
  __asm pop esi
  __asm ret
  __asm push dword ptr [esp + 0xc]
  __asm push eax
  __asm call LAB_10089342
  __asm add esp, 8
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x02
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 114339b0; body size 90 bytes.
#line 1 "ENTRY_114339b0"

__declspec(naked) void FUN_114339b0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, eax
  __asm shr ecx, 0x10
  __asm and eax, 0xffc07fff
  __asm and cl, 0x3f
  __asm cmp eax, 0x5000500
  __asm _emit 0x74 __asm _emit 0x37
  __asm cmp eax, 0x5400100
  __asm _emit 0x74 __asm _emit 0x24
  __asm cmp eax, 0x5400200
  __asm _emit 0x74 __asm _emit 0x06
  __asm mov eax, 0xffffff7a
  __asm ret
  __asm cmp cl, 4
  __asm _emit 0x74 __asm _emit 0x0f
  __asm cmp cl, 8
  __asm _emit 0x74 __asm _emit 0x0a
  __asm cmp cl, 0xc
  __asm _emit 0x72 __asm _emit 0x19
  __asm cmp cl, 0x10
  __asm _emit 0x77 __asm _emit 0x14
  __asm xor eax, eax
  __asm ret
  __asm lea eax, [ecx - 4]
  __asm cmp al, 0xc
  __asm _emit 0x77 __asm _emit 0x0a
  __asm test cl, 1
  __asm _emit 0xeb __asm _emit 0x03
  __asm cmp cl, 0x10
  __asm _emit 0x74 __asm _emit 0xec
  __asm mov eax, 0xffffff79
  __asm ret
}



// Reference entry 11433ca0; body size 33 bytes.
#line 1 "ENTRY_11433ca0"

__declspec(naked) void FUN_11433ca0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx]
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x01
  __asm ret
  __asm sub eax, 1
  __asm mov eax, 0xffffff79
  __asm _emit 0x75 __asm _emit 0x05
  __asm mov eax, 0xffffff7a
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
}



// Reference entry 11434490; body size 42 bytes.
#line 1 "ENTRY_11434490"

__declspec(naked) void FUN_11434490(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x21
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm xor edx, edx
  __asm cmp dword ptr [esp + 8], edx
  __asm cmovne ecx, edx
  __asm sub eax, ecx
  __asm push eax
  __asm mov eax, dword ptr [esp + 8]
  __asm add eax, ecx
  __asm push 0x21
  __asm push eax
  __asm call LAB_1148ce0b
  __asm add esp, 0xc
  __asm ret
}



// Reference entry 114346e0; body size 60 bytes.
#line 1 "ENTRY_114346e0"

__declspec(naked) void FUN_114346e0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push esi
  __asm call LAB_1001d1a1
  __asm lea eax, [esi + 0x60]
  __asm push eax
  __asm call LAB_100369ee
  __asm lea eax, [esi + 0x68]
  __asm push eax
  __asm call LAB_100976d6
  __asm lea eax, [esi + 0x80]
  __asm push eax
  __asm call LAB_100976d6
  __asm add esp, 0x10
  __asm lea eax, [esi + 0x98]
  __asm pop esi
  __asm mov dword ptr [esp + 4], eax
  __asm jmp LAB_100369ee
}



// Reference entry 11434730; body size 65 bytes.
#line 1 "ENTRY_11434730"

__declspec(naked) void FUN_11434730(void)

{
  __asm push esi
  __asm push dword ptr [esp + 0x18]
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push dword ptr [esp + 0x18]
  __asm push dword ptr [esp + 0x14]
  __asm push esi
  __asm call LAB_1006bc52
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x21
  __asm push dword ptr [esp + 0x1c]
  __asm lea eax, [esi + 0x1c]
  __asm push dword ptr [esp + 0x1c]
  __asm push dword ptr [esp + 0x1c]
  __asm push eax
  __asm push dword ptr [esp + 0x1c]
  __asm push dword ptr [esp + 0x24]
  __asm push esi
  __asm call LAB_1007eef1
  __asm add esp, 0x1c
  __asm pop esi
  __asm ret
}



// Reference entry 11434810; body size 60 bytes.
#line 1 "ENTRY_11434810"

__declspec(naked) void FUN_11434810(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push esi
  __asm call LAB_100185a7
  __asm lea eax, [esi + 0x60]
  __asm push eax
  __asm call LAB_1004ed23
  __asm lea eax, [esi + 0x68]
  __asm push eax
  __asm call LAB_1005907f
  __asm lea eax, [esi + 0x80]
  __asm push eax
  __asm call LAB_1005907f
  __asm add esp, 0x10
  __asm lea eax, [esi + 0x98]
  __asm pop esi
  __asm mov dword ptr [esp + 4], eax
  __asm jmp LAB_1004ed23
}



// Reference entry 11434860; body size 160 bytes.
#line 1 "ENTRY_11434860"

__declspec(naked) void FUN_11434860(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm cmp dword ptr [esi + 0x3c], 0
  __asm _emit 0x75 __asm _emit 0x08
  __asm mov eax, 0xffffb080
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x28]
  __asm push ebp
  __asm push edi
  __asm push ebx
  __asm push dword ptr [esp + 0x30]
  __asm lea edi, [esi + 0x60]
  __asm push edi
  __asm push esi
  __asm call LAB_1006bc52
  __asm add esp, 0x10
  __asm lea ebp, [esi + 0x68]
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x66
  __asm push eax
  __asm push ebx
  __asm push dword ptr [esp + 0x34]
  __asm lea eax, [esi + 0x1c]
  __asm push eax
  __asm push edi
  __asm push ebp
  __asm push esi
  __asm call LAB_1007eef1
  __asm add esp, 0x1c
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x4d
  __asm mov edi, dword ptr [esp + 0x28]
  __asm lea eax, [esp + 0x18]
  __asm mov ebx, dword ptr [esp + 0x24]
  __asm push edi
  __asm push ebx
  __asm push eax
  __asm push esi
  __asm call LAB_1005fe93
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x31
  __asm sub edi, dword ptr [esp + 0x18]
  __asm lea eax, [esp + 0x10]
  __asm add ebx, dword ptr [esp + 0x18]
  __asm push edi
  __asm push ebx
  __asm push eax
  __asm push dword ptr [esp + 0x2c]
  __asm push ebp
  __asm push esi
  __asm call LAB_10062b9d
  __asm add esp, 0x18
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x10
  __asm mov eax, dword ptr [esp + 0x1c]
  __asm mov ecx, dword ptr [esp + 0x18]
  __asm add ecx, dword ptr [esp + 0x10]
  __asm mov dword ptr [eax], ecx
  __asm xor eax, eax
  __asm pop edi
  __asm pop ebp
  __asm pop ebx
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 11434930; body size 106 bytes.
#line 1 "ENTRY_11434930"

__declspec(naked) void FUN_11434930(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm cmp dword ptr [esi + 0x3c], 0
  __asm _emit 0x75 __asm _emit 0x07
  __asm mov eax, 0xffffb080
  __asm pop esi
  __asm ret
  __asm push ebx
  __asm push edi
  __asm push dword ptr [esp + 0x28]
  __asm lea ebx, [esi + 0x60]
  __asm push dword ptr [esp + 0x28]
  __asm push ebx
  __asm push esi
  __asm call LAB_1006bc52
  __asm add esp, 0x10
  __asm lea edi, [esi + 0x68]
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x36
  __asm push eax
  __asm push dword ptr [esp + 0x2c]
  __asm lea eax, [esi + 0x1c]
  __asm push dword ptr [esp + 0x2c]
  __asm push eax
  __asm push ebx
  __asm push edi
  __asm push esi
  __asm call LAB_1007eef1
  __asm add esp, 0x1c
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x1a
  __asm push dword ptr [esp + 0x20]
  __asm push dword ptr [esp + 0x20]
  __asm push dword ptr [esp + 0x1c]
  __asm push dword ptr [esp + 0x24]
  __asm push edi
  __asm push esi
  __asm call LAB_10062b9d
  __asm add esp, 0x18
  __asm pop edi
  __asm pop ebx
  __asm pop esi
  __asm ret
}



// Reference entry 114349c0; body size 33 bytes.
#line 1 "ENTRY_114349c0"
int FUN_114349c0(int a1, int a2, int a3) {

    return (int)(thunk_FUN_1143fce0(a1, a1 + 128, a2, a3 - *(int *)a2));
}

// Reference entry 114349f0; body size 63 bytes.
#line 1 "ENTRY_114349f0"

__declspec(naked) void FUN_114349f0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm lea eax, [esp + 8]
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push eax
  __asm lea eax, [ecx + 0x80]
  __asm mov dword ptr [esp + 0x14], esi
  __asm push eax
  __asm push ecx
  __asm call LAB_1000346d
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x13
  __asm mov eax, dword ptr [esp + 0xc]
  __asm sub eax, esi
  __asm sub eax, dword ptr [esp + 0x10]
  __asm neg eax
  __asm sbb eax, eax
  __asm and eax, 0xffffb080
  __asm pop esi
  __asm ret
}



// Reference entry 114356a0; body size 44 bytes.
#line 1 "ENTRY_114356a0"

__declspec(naked) void FUN_114356a0(void)

{
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm xor eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm mov edx, dword ptr [LAB_122fa560]
  __asm xor ecx, eax
  __asm xor ecx, dword ptr [esp + 8]
  __asm xor edx, ecx
  __asm mov eax, edx
  __asm neg edx
  __asm _emit 0xd1 __asm _emit 0xe8
  __asm neg eax
  __asm or eax, edx
  __asm shr eax, 0x1f
  __asm dec eax
  __asm ret
}



// Reference entry 114356e0; body size 94 bytes.
#line 1 "ENTRY_114356e0"

__declspec(naked) void FUN_114356e0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [LAB_122fa560]
  __asm mov edx, dword ptr [LAB_122fa560]
  __asm xor esi, dword ptr [esp + 0xc]
  __asm xor edx, dword ptr [esp + 8]
  __asm mov eax, edx
  __asm xor eax, esi
  __asm sub esi, edx
  __asm shr eax, 0x1f
  __asm xor eax, dword ptr [LAB_122fa560]
  __asm mov ecx, eax
  __asm neg eax
  __asm _emit 0xd1 __asm _emit 0xe9
  __asm neg ecx
  __asm or ecx, eax
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm shr ecx, 0x1f
  __asm neg ecx
  __asm xor eax, ecx
  __asm and ecx, edx
  __asm not eax
  __asm and esi, eax
  __asm or esi, ecx
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm shr esi, 0x1f
  __asm xor ecx, esi
  __asm mov eax, ecx
  __asm neg ecx
  __asm _emit 0xd1 __asm _emit 0xe8
  __asm neg eax
  __asm or eax, ecx
  __asm shr eax, 0x1f
  __asm neg eax
  __asm pop esi
  __asm ret
}



// Reference entry 11435790; body size 94 bytes.
#line 1 "ENTRY_11435790"

__declspec(naked) void FUN_11435790(void)

{
  __asm push esi
  __asm mov esi, dword ptr [LAB_122fa560]
  __asm mov edx, dword ptr [LAB_122fa560]
  __asm xor esi, dword ptr [esp + 8]
  __asm xor edx, dword ptr [esp + 0xc]
  __asm mov eax, edx
  __asm xor eax, esi
  __asm sub esi, edx
  __asm shr eax, 0x1f
  __asm xor eax, dword ptr [LAB_122fa560]
  __asm mov ecx, eax
  __asm neg eax
  __asm _emit 0xd1 __asm _emit 0xe9
  __asm neg ecx
  __asm or ecx, eax
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm shr ecx, 0x1f
  __asm neg ecx
  __asm xor eax, ecx
  __asm and ecx, edx
  __asm not eax
  __asm and esi, eax
  __asm or esi, ecx
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm shr esi, 0x1f
  __asm xor ecx, esi
  __asm mov eax, ecx
  __asm neg ecx
  __asm _emit 0xd1 __asm _emit 0xe8
  __asm neg eax
  __asm or eax, ecx
  __asm shr eax, 0x1f
  __asm neg eax
  __asm pop esi
  __asm ret
}



// Reference entry 11435810; body size 45 bytes.
#line 1 "ENTRY_11435810"

__declspec(naked) void FUN_11435810(void)

{
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm xor eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm mov edx, dword ptr [LAB_122fa560]
  __asm xor ecx, eax
  __asm xor ecx, dword ptr [esp + 8]
  __asm xor edx, ecx
  __asm mov eax, edx
  __asm neg edx
  __asm _emit 0xd1 __asm _emit 0xe8
  __asm neg eax
  __asm or eax, edx
  __asm shr eax, 0x1f
  __asm neg eax
  __asm ret
}



// Reference entry 11437150; body size 140 bytes.
#line 1 "ENTRY_11437150"
int FUN_11437150(int a1) {

    if (a1 == 0) {
        return (int)(0);
    }
    int v1 = (int)(*(int * *)(&PTR_DAT_11bfefa0)); // (int)&FUN_11437163
    if (v1 == 0) {
        return (int)(0);
    }
    uint v2 = (uint)(*(int *)(a1 + 4)); // (int)&FUN_1143716c
    int v3 = (int)(v2 - 4);
    int v4 = (int)((int)&PTR_DAT_11bfefa0);
    int v5; // (int)((int(*)(int a1))&FUN_11437150<>)
    int v6; // (int)((int(*)(int a1))&FUN_11437150<>)
    int v7; // (int)((int(*)(int a1))&FUN_11437150<>)
    int v8; // (int)((int(*)(int a1))&FUN_11437150<>)
    int v9; // (int)((int(*)(int a1))&FUN_11437150<>)
    int v10; // (int)((int(*)(int a1))&FUN_11437150<>)
    int v11; // (int)((int(*)(int a1))&FUN_11437150<>)
    int v12; // (int)((int(*)(int a1))&FUN_11437150<>)
    int v13; // (int)((int(*)(int a1))&FUN_11437150<>)
    int v14; // (int)((int(*)(int a1))&FUN_11437150<>)
    int v15; // (int)((int(*)(int a1))&FUN_11437150<>)
    int v16; // (int)((int(*)(int a1))&FUN_11437150<>)
    int v17; // (int)&FUN_1143718d
    int v18; // (int)&FUN_11437179
    if (*(int *)(v4 || 4) == (int)(v2)) {
        v18 = (int)(*(int *)(a1 + 8));
        v5 = (int)(v18);
        v7 = (int)(v18);
        v14 = (int)(v3);
        if (v2 < 4) {
            v8 = (int)(v7);
            v11 = (int)(v1);
            v15 = (int)(v14);
            if (v14 == -4) {
                goto lab_brk_11437150;
            }
        } else {
            v13 = (int)(v3);
            v10 = (int)(v1);
            v6 = (int)(v5);
            v8 = (int)(v6);
            v11 = (int)(v10);
            v15 = (int)(v13);
            while (*(int *)(v10) == *(int *)(v6)) {
                v17 = (int)(v13 - 4);
                v14 = (int)(v17);
                if (v13 < 4) {
                    goto lab_brk_11437150;
                }
                v13 = (int)(v17);
                v10 += 4;
                v6 += 4;
                v8 = (int)(v6);
                v11 = (int)(v10);
                v15 = (int)(v13);
            }
        }
        v12 = (int)(v11);
        v9 = (int)(v8);
        if (*(char *)(v12) == *(char *)(v9)) {
            v16 = (int)(v15);
            if (v16 == -3) {
                goto lab_brk_11437150;
            }
            if (*(char *)((v12 + 1)) == *(char *)((v9 + 1))) {
                if (v16 == -2) {
                    goto lab_brk_11437150;
                }
                if (*(char *)((v12 + 2)) == *(char *)((v9 + 2))) {
                    if (v16 == -1) {
                        goto lab_brk_11437150;
                    }
                    if (*(char *)((v12 + 3)) == *(char *)((v9 + 3))) {
                        goto lab_brk_11437150;
                    }
                }
            }
        }
    }
    int v19 = (int)(v4 + 16); // (int)&FUN_114371c4
    int v20 = (int)(*(int *)v19); // (int)&FUN_114371c9
    int v21 = (int)(v20); // (int)&FUN_114371cc
    int result = (int)(0); // (int)&FUN_114371cc
    while (v20 != 0) {
        v4 = (int)(v19);
        if (*(int *)(v4 || 4) == (int)(v2)) {
            v18 = (int)(*(int *)(a1 + 8));
            v5 = (int)(v18);
            int v22 = (int)(v21); // (int)&FUN_1143717f
            v7 = (int)(v18);
            int v23 = (int)(v21); // (int)&FUN_1143717f
            v14 = (int)(v3);
            if (v2 < 4) {
                v8 = (int)(v7);
                v11 = (int)(v23);
                v15 = (int)(v14);
                result = (int)(v4);
                if (v14 == -4) {
                    break;
                }
            } else {
                v13 = (int)(v3);
                v10 = (int)(v22);
                v6 = (int)(v5);
                v8 = (int)(v6);
                v11 = (int)(v10);
                v15 = (int)(v13);
                while (*(int *)(v10) == *(int *)(v6)) {
                    v17 = (int)(v13 - 4);
                    v14 = (int)(v17);
                    if (v13 < 4) {
                        goto lab_brk_11437150;
                    }
                    v13 = (int)(v17);
                    v10 += 4;
                    v6 += 4;
                    v8 = (int)(v6);
                    v11 = (int)(v10);
                    v15 = (int)(v13);
                }
            }
            v12 = (int)(v11);
            v9 = (int)(v8);
            if (*(char *)(v12) == *(char *)(v9)) {
                v16 = (int)(v15);
                result = (int)(v4);
                if (v16 == -3) {
                    break;
                }
                if (*(char *)((v12 + 1)) == *(char *)((v9 + 1))) {
                    result = (int)(v4);
                    if (v16 == -2) {
                        break;
                    }
                    if (*(char *)((v12 + 2)) == *(char *)((v9 + 2))) {
                        result = (int)(v4);
                        if (v16 == -1) {
                            break;
                        }
                        result = (int)(v4);
                        if (*(char *)((v12 + 3)) == *(char *)((v9 + 3))) {
                            break;
                        }
                    }
                }
            }
        }
        v19 = (int)(v4 + 16);
        v20 = (int)(*(int *)v19);
        v21 = (int)(v20);
        result = (int)(0);
    }
    return (int)(result);
lab_brk_11437150: ;
}

// Reference entry 11437200; body size 140 bytes.
#line 1 "ENTRY_11437200"
int FUN_11437200(int a1) {

    if (a1 == 0) {
        return (int)(0);
    }
    int v1 = (int)(*(int * *)(&PTR_DAT_11bff1c8)); // (int)&FUN_11437213
    if (v1 == 0) {
        return (int)(0);
    }
    uint v2 = (uint)(*(int *)(a1 + 4)); // (int)&FUN_1143721c
    int v3 = (int)(v2 - 4);
    int v4 = (int)((int)&PTR_DAT_11bff1c8);
    int v5; // (int)((int(*)(int a1))&FUN_11437200<>)
    int v6; // (int)((int(*)(int a1))&FUN_11437200<>)
    int v7; // (int)((int(*)(int a1))&FUN_11437200<>)
    int v8; // (int)((int(*)(int a1))&FUN_11437200<>)
    int v9; // (int)((int(*)(int a1))&FUN_11437200<>)
    int v10; // (int)((int(*)(int a1))&FUN_11437200<>)
    int v11; // (int)((int(*)(int a1))&FUN_11437200<>)
    int v12; // (int)((int(*)(int a1))&FUN_11437200<>)
    int v13; // (int)((int(*)(int a1))&FUN_11437200<>)
    int v14; // (int)((int(*)(int a1))&FUN_11437200<>)
    int v15; // (int)((int(*)(int a1))&FUN_11437200<>)
    int v16; // (int)((int(*)(int a1))&FUN_11437200<>)
    int v17; // (int)&FUN_1143723d
    int v18; // (int)&FUN_11437229
    if (*(int *)(v4 + 4) == (int)(v2)) {
        v18 = (int)(*(int *)(a1 + 8));
        v5 = (int)(v18);
        v7 = (int)(v18);
        v14 = (int)(v3);
        if (v2 < 4) {
            v8 = (int)(v7);
            v11 = (int)(v1);
            v15 = (int)(v14);
            if (v14 == -4) {
                goto lab_brk_11437200;
            }
        } else {
            v13 = (int)(v3);
            v10 = (int)(v1);
            v6 = (int)(v5);
            v8 = (int)(v6);
            v11 = (int)(v10);
            v15 = (int)(v13);
            while (*(int *)(v10) == *(int *)(v6)) {
                v17 = (int)(v13 - 4);
                v14 = (int)(v17);
                if (v13 < 4) {
                    goto lab_brk_11437200;
                }
                v13 = (int)(v17);
                v10 += 4;
                v6 += 4;
                v8 = (int)(v6);
                v11 = (int)(v10);
                v15 = (int)(v13);
            }
        }
        v12 = (int)(v11);
        v9 = (int)(v8);
        if (*(char *)(v12) == *(char *)(v9)) {
            v16 = (int)(v15);
            if (v16 == -3) {
                goto lab_brk_11437200;
            }
            if (*(char *)((v12 + 1)) == *(char *)((v9 + 1))) {
                if (v16 == -2) {
                    goto lab_brk_11437200;
                }
                if (*(char *)((v12 + 2)) == *(char *)((v9 + 2))) {
                    if (v16 == -1) {
                        goto lab_brk_11437200;
                    }
                    if (*(char *)((v12 + 3)) == *(char *)((v9 + 3))) {
                        goto lab_brk_11437200;
                    }
                }
            }
        }
    }
    int v19 = (int)(v4 + 20); // (int)&FUN_11437274
    int v20 = (int)(*(int *)v19); // (int)&FUN_11437279
    int v21 = (int)(v20); // (int)&FUN_1143727c
    int result = (int)(0); // (int)&FUN_1143727c
    while (v20 != 0) {
        v4 = (int)(v19);
        if (*(int *)(v4 + 4) == (int)(v2)) {
            v18 = (int)(*(int *)(a1 + 8));
            v5 = (int)(v18);
            int v22 = (int)(v21); // (int)&FUN_1143722f
            v7 = (int)(v18);
            int v23 = (int)(v21); // (int)&FUN_1143722f
            v14 = (int)(v3);
            if (v2 < 4) {
                v8 = (int)(v7);
                v11 = (int)(v23);
                v15 = (int)(v14);
                result = (int)(v4);
                if (v14 == -4) {
                    break;
                }
            } else {
                v13 = (int)(v3);
                v10 = (int)(v22);
                v6 = (int)(v5);
                v8 = (int)(v6);
                v11 = (int)(v10);
                v15 = (int)(v13);
                while (*(int *)(v10) == *(int *)(v6)) {
                    v17 = (int)(v13 - 4);
                    v14 = (int)(v17);
                    if (v13 < 4) {
                        goto lab_brk_11437200;
                    }
                    v13 = (int)(v17);
                    v10 += 4;
                    v6 += 4;
                    v8 = (int)(v6);
                    v11 = (int)(v10);
                    v15 = (int)(v13);
                }
            }
            v12 = (int)(v11);
            v9 = (int)(v8);
            if (*(char *)(v12) == *(char *)(v9)) {
                v16 = (int)(v15);
                result = (int)(v4);
                if (v16 == -3) {
                    break;
                }
                if (*(char *)((v12 + 1)) == *(char *)((v9 + 1))) {
                    result = (int)(v4);
                    if (v16 == -2) {
                        break;
                    }
                    if (*(char *)((v12 + 2)) == *(char *)((v9 + 2))) {
                        result = (int)(v4);
                        if (v16 == -1) {
                            break;
                        }
                        result = (int)(v4);
                        if (*(char *)((v12 + 3)) == *(char *)((v9 + 3))) {
                            break;
                        }
                    }
                }
            }
        }
        v19 = (int)(v4 + 20);
        v20 = (int)(*(int *)v19);
        v21 = (int)(v20);
        result = (int)(0);
    }
    return (int)(result);
lab_brk_11437200: ;
}

// Reference entry 114372b0; body size 140 bytes.
#line 1 "ENTRY_114372b0"
int FUN_114372b0(int a1) {

    if (a1 == 0) {
        return (int)(0);
    }
    int v1 = (int)(*(int * *)(&PTR_DAT_11bfef20)); // (int)&FUN_114372c3
    if (v1 == 0) {
        return (int)(0);
    }
    uint v2 = (uint)(*(int *)(a1 + 4)); // (int)&FUN_114372cc
    int v3 = (int)(v2 - 4);
    int v4 = (int)((int)&PTR_DAT_11bfef20);
    int v5; // (int)((int(*)(int a1))&FUN_114372b0<>)
    int v6; // (int)((int(*)(int a1))&FUN_114372b0<>)
    int v7; // (int)((int(*)(int a1))&FUN_114372b0<>)
    int v8; // (int)((int(*)(int a1))&FUN_114372b0<>)
    int v9; // (int)((int(*)(int a1))&FUN_114372b0<>)
    int v10; // (int)((int(*)(int a1))&FUN_114372b0<>)
    int v11; // (int)((int(*)(int a1))&FUN_114372b0<>)
    int v12; // (int)((int(*)(int a1))&FUN_114372b0<>)
    int v13; // (int)((int(*)(int a1))&FUN_114372b0<>)
    int v14; // (int)((int(*)(int a1))&FUN_114372b0<>)
    int v15; // (int)((int(*)(int a1))&FUN_114372b0<>)
    int v16; // (int)((int(*)(int a1))&FUN_114372b0<>)
    int v17; // (int)&FUN_114372ed
    int v18; // (int)&FUN_114372d9
    if (*(int *)(v4 || 4) == (int)(v2)) {
        v18 = (int)(*(int *)(a1 + 8));
        v5 = (int)(v18);
        v7 = (int)(v18);
        v14 = (int)(v3);
        if (v2 < 4) {
            v8 = (int)(v7);
            v11 = (int)(v1);
            v15 = (int)(v14);
            if (v14 == -4) {
                goto lab_brk_114372b0;
            }
        } else {
            v13 = (int)(v3);
            v10 = (int)(v1);
            v6 = (int)(v5);
            v8 = (int)(v6);
            v11 = (int)(v10);
            v15 = (int)(v13);
            while (*(int *)(v10) == *(int *)(v6)) {
                v17 = (int)(v13 - 4);
                v14 = (int)(v17);
                if (v13 < 4) {
                    goto lab_brk_114372b0;
                }
                v13 = (int)(v17);
                v10 += 4;
                v6 += 4;
                v8 = (int)(v6);
                v11 = (int)(v10);
                v15 = (int)(v13);
            }
        }
        v12 = (int)(v11);
        v9 = (int)(v8);
        if (*(char *)(v12) == *(char *)(v9)) {
            v16 = (int)(v15);
            if (v16 == -3) {
                goto lab_brk_114372b0;
            }
            if (*(char *)((v12 + 1)) == *(char *)((v9 + 1))) {
                if (v16 == -2) {
                    goto lab_brk_114372b0;
                }
                if (*(char *)((v12 + 2)) == *(char *)((v9 + 2))) {
                    if (v16 == -1) {
                        goto lab_brk_114372b0;
                    }
                    if (*(char *)((v12 + 3)) == *(char *)((v9 + 3))) {
                        goto lab_brk_114372b0;
                    }
                }
            }
        }
    }
    int v19 = (int)(v4 + 16); // (int)&FUN_11437324
    int v20 = (int)(*(int *)v19); // (int)&FUN_11437329
    int v21 = (int)(v20); // (int)&FUN_1143732c
    int result = (int)(0); // (int)&FUN_1143732c
    while (v20 != 0) {
        v4 = (int)(v19);
        if (*(int *)(v4 || 4) == (int)(v2)) {
            v18 = (int)(*(int *)(a1 + 8));
            v5 = (int)(v18);
            int v22 = (int)(v21); // (int)&FUN_114372df
            v7 = (int)(v18);
            int v23 = (int)(v21); // (int)&FUN_114372df
            v14 = (int)(v3);
            if (v2 < 4) {
                v8 = (int)(v7);
                v11 = (int)(v23);
                v15 = (int)(v14);
                result = (int)(v4);
                if (v14 == -4) {
                    break;
                }
            } else {
                v13 = (int)(v3);
                v10 = (int)(v22);
                v6 = (int)(v5);
                v8 = (int)(v6);
                v11 = (int)(v10);
                v15 = (int)(v13);
                while (*(int *)(v10) == *(int *)(v6)) {
                    v17 = (int)(v13 - 4);
                    v14 = (int)(v17);
                    if (v13 < 4) {
                        goto lab_brk_114372b0;
                    }
                    v13 = (int)(v17);
                    v10 += 4;
                    v6 += 4;
                    v8 = (int)(v6);
                    v11 = (int)(v10);
                    v15 = (int)(v13);
                }
            }
            v12 = (int)(v11);
            v9 = (int)(v8);
            if (*(char *)(v12) == *(char *)(v9)) {
                v16 = (int)(v15);
                result = (int)(v4);
                if (v16 == -3) {
                    break;
                }
                if (*(char *)((v12 + 1)) == *(char *)((v9 + 1))) {
                    result = (int)(v4);
                    if (v16 == -2) {
                        break;
                    }
                    if (*(char *)((v12 + 2)) == *(char *)((v9 + 2))) {
                        result = (int)(v4);
                        if (v16 == -1) {
                            break;
                        }
                        result = (int)(v4);
                        if (*(char *)((v12 + 3)) == *(char *)((v9 + 3))) {
                            break;
                        }
                    }
                }
            }
        }
        v19 = (int)(v4 + 16);
        v20 = (int)(*(int *)v19);
        v21 = (int)(v20);
        result = (int)(0);
    }
    return (int)(result);
lab_brk_114372b0: ;
}

// Reference entry 11437360; body size 140 bytes.
#line 1 "ENTRY_11437360"
int FUN_11437360(int a1) {

    if (a1 == 0) {
        return (int)(0);
    }
    int v1 = (int)(*(int * *)(&PTR_DAT_11bff19c)); // (int)&FUN_11437373
    if (v1 == 0) {
        return (int)(0);
    }
    uint v2 = (uint)(*(int *)(a1 + 4)); // (int)&FUN_1143737c
    int v3 = (int)(v2 - 4);
    int v4 = (int)((int)&PTR_DAT_11bff19c);
    int v5; // (int)((int(*)(int a1))&FUN_11437360<>)
    int v6; // (int)((int(*)(int a1))&FUN_11437360<>)
    int v7; // (int)((int(*)(int a1))&FUN_11437360<>)
    int v8; // (int)((int(*)(int a1))&FUN_11437360<>)
    int v9; // (int)((int(*)(int a1))&FUN_11437360<>)
    int v10; // (int)((int(*)(int a1))&FUN_11437360<>)
    int v11; // (int)((int(*)(int a1))&FUN_11437360<>)
    int v12; // (int)((int(*)(int a1))&FUN_11437360<>)
    int v13; // (int)((int(*)(int a1))&FUN_11437360<>)
    int v14; // (int)((int(*)(int a1))&FUN_11437360<>)
    int v15; // (int)((int(*)(int a1))&FUN_11437360<>)
    int v16; // (int)((int(*)(int a1))&FUN_11437360<>)
    int v17; // (int)&FUN_1143739d
    int v18; // (int)&FUN_11437389
    if (*(int *)(v4 + 4) == (int)(v2)) {
        v18 = (int)(*(int *)(a1 + 8));
        v5 = (int)(v18);
        v7 = (int)(v18);
        v14 = (int)(v3);
        if (v2 < 4) {
            v8 = (int)(v7);
            v11 = (int)(v1);
            v15 = (int)(v14);
            if (v14 == -4) {
                goto lab_brk_11437360;
            }
        } else {
            v13 = (int)(v3);
            v10 = (int)(v1);
            v6 = (int)(v5);
            v8 = (int)(v6);
            v11 = (int)(v10);
            v15 = (int)(v13);
            while (*(int *)(v10) == *(int *)(v6)) {
                v17 = (int)(v13 - 4);
                v14 = (int)(v17);
                if (v13 < 4) {
                    goto lab_brk_11437360;
                }
                v13 = (int)(v17);
                v10 += 4;
                v6 += 4;
                v8 = (int)(v6);
                v11 = (int)(v10);
                v15 = (int)(v13);
            }
        }
        v12 = (int)(v11);
        v9 = (int)(v8);
        if (*(char *)(v12) == *(char *)(v9)) {
            v16 = (int)(v15);
            if (v16 == -3) {
                goto lab_brk_11437360;
            }
            if (*(char *)((v12 + 1)) == *(char *)((v9 + 1))) {
                if (v16 == -2) {
                    goto lab_brk_11437360;
                }
                if (*(char *)((v12 + 2)) == *(char *)((v9 + 2))) {
                    if (v16 == -1) {
                        goto lab_brk_11437360;
                    }
                    if (*(char *)((v12 + 3)) == *(char *)((v9 + 3))) {
                        goto lab_brk_11437360;
                    }
                }
            }
        }
    }
    int v19 = (int)(v4 + 20); // (int)&FUN_114373d4
    int v20 = (int)(*(int *)v19); // (int)&FUN_114373d9
    int v21 = (int)(v20); // (int)&FUN_114373dc
    int result = (int)(0); // (int)&FUN_114373dc
    while (v20 != 0) {
        v4 = (int)(v19);
        if (*(int *)(v4 + 4) == (int)(v2)) {
            v18 = (int)(*(int *)(a1 + 8));
            v5 = (int)(v18);
            int v22 = (int)(v21); // (int)&FUN_1143738f
            v7 = (int)(v18);
            int v23 = (int)(v21); // (int)&FUN_1143738f
            v14 = (int)(v3);
            if (v2 < 4) {
                v8 = (int)(v7);
                v11 = (int)(v23);
                v15 = (int)(v14);
                result = (int)(v4);
                if (v14 == -4) {
                    break;
                }
            } else {
                v13 = (int)(v3);
                v10 = (int)(v22);
                v6 = (int)(v5);
                v8 = (int)(v6);
                v11 = (int)(v10);
                v15 = (int)(v13);
                while (*(int *)(v10) == *(int *)(v6)) {
                    v17 = (int)(v13 - 4);
                    v14 = (int)(v17);
                    if (v13 < 4) {
                        goto lab_brk_11437360;
                    }
                    v13 = (int)(v17);
                    v10 += 4;
                    v6 += 4;
                    v8 = (int)(v6);
                    v11 = (int)(v10);
                    v15 = (int)(v13);
                }
            }
            v12 = (int)(v11);
            v9 = (int)(v8);
            if (*(char *)(v12) == *(char *)(v9)) {
                v16 = (int)(v15);
                result = (int)(v4);
                if (v16 == -3) {
                    break;
                }
                if (*(char *)((v12 + 1)) == *(char *)((v9 + 1))) {
                    result = (int)(v4);
                    if (v16 == -2) {
                        break;
                    }
                    if (*(char *)((v12 + 2)) == *(char *)((v9 + 2))) {
                        result = (int)(v4);
                        if (v16 == -1) {
                            break;
                        }
                        result = (int)(v4);
                        if (*(char *)((v12 + 3)) == *(char *)((v9 + 3))) {
                            break;
                        }
                    }
                }
            }
        }
        v19 = (int)(v4 + 20);
        v20 = (int)(*(int *)v19);
        v21 = (int)(v20);
        result = (int)(0);
    }
    return (int)(result);
lab_brk_11437360: ;
}

// Reference entry 11437410; body size 140 bytes.
#line 1 "ENTRY_11437410"
int FUN_11437410(int a1) {

    if (a1 == 0) {
        return (int)(0);
    }
    int v1 = (int)(*(int * *)(&PTR_DAT_11bff160)); // (int)&FUN_11437423
    if (v1 == 0) {
        return (int)(0);
    }
    uint v2 = (uint)(*(int *)(a1 + 4)); // (int)&FUN_1143742c
    int v3 = (int)(v2 - 4);
    int v4 = (int)((int)&PTR_DAT_11bff160);
    int v5; // (int)((int(*)(int a1))&FUN_11437410<>)
    int v6; // (int)((int(*)(int a1))&FUN_11437410<>)
    int v7; // (int)((int(*)(int a1))&FUN_11437410<>)
    int v8; // (int)((int(*)(int a1))&FUN_11437410<>)
    int v9; // (int)((int(*)(int a1))&FUN_11437410<>)
    int v10; // (int)((int(*)(int a1))&FUN_11437410<>)
    int v11; // (int)((int(*)(int a1))&FUN_11437410<>)
    int v12; // (int)((int(*)(int a1))&FUN_11437410<>)
    int v13; // (int)((int(*)(int a1))&FUN_11437410<>)
    int v14; // (int)((int(*)(int a1))&FUN_11437410<>)
    int v15; // (int)((int(*)(int a1))&FUN_11437410<>)
    int v16; // (int)((int(*)(int a1))&FUN_11437410<>)
    int v17; // (int)&FUN_1143744d
    int v18; // (int)&FUN_11437439
    if (*(int *)(v4 + 4) == (int)(v2)) {
        v18 = (int)(*(int *)(a1 + 8));
        v5 = (int)(v18);
        v7 = (int)(v18);
        v14 = (int)(v3);
        if (v2 < 4) {
            v8 = (int)(v7);
            v11 = (int)(v1);
            v15 = (int)(v14);
            if (v14 == -4) {
                goto lab_brk_11437410;
            }
        } else {
            v13 = (int)(v3);
            v10 = (int)(v1);
            v6 = (int)(v5);
            v8 = (int)(v6);
            v11 = (int)(v10);
            v15 = (int)(v13);
            while (*(int *)(v10) == *(int *)(v6)) {
                v17 = (int)(v13 - 4);
                v14 = (int)(v17);
                if (v13 < 4) {
                    goto lab_brk_11437410;
                }
                v13 = (int)(v17);
                v10 += 4;
                v6 += 4;
                v8 = (int)(v6);
                v11 = (int)(v10);
                v15 = (int)(v13);
            }
        }
        v12 = (int)(v11);
        v9 = (int)(v8);
        if (*(char *)(v12) == *(char *)(v9)) {
            v16 = (int)(v15);
            if (v16 == -3) {
                goto lab_brk_11437410;
            }
            if (*(char *)((v12 + 1)) == *(char *)((v9 + 1))) {
                if (v16 == -2) {
                    goto lab_brk_11437410;
                }
                if (*(char *)((v12 + 2)) == *(char *)((v9 + 2))) {
                    if (v16 == -1) {
                        goto lab_brk_11437410;
                    }
                    if (*(char *)((v12 + 3)) == *(char *)((v9 + 3))) {
                        goto lab_brk_11437410;
                    }
                }
            }
        }
    }
    int v19 = (int)(v4 + 20); // (int)&FUN_11437484
    int v20 = (int)(*(int *)v19); // (int)&FUN_11437489
    int v21 = (int)(v20); // (int)&FUN_1143748c
    int result = (int)(0); // (int)&FUN_1143748c
    while (v20 != 0) {
        v4 = (int)(v19);
        if (*(int *)(v4 + 4) == (int)(v2)) {
            v18 = (int)(*(int *)(a1 + 8));
            v5 = (int)(v18);
            int v22 = (int)(v21); // (int)&FUN_1143743f
            v7 = (int)(v18);
            int v23 = (int)(v21); // (int)&FUN_1143743f
            v14 = (int)(v3);
            if (v2 < 4) {
                v8 = (int)(v7);
                v11 = (int)(v23);
                v15 = (int)(v14);
                result = (int)(v4);
                if (v14 == -4) {
                    break;
                }
            } else {
                v13 = (int)(v3);
                v10 = (int)(v22);
                v6 = (int)(v5);
                v8 = (int)(v6);
                v11 = (int)(v10);
                v15 = (int)(v13);
                while (*(int *)(v10) == *(int *)(v6)) {
                    v17 = (int)(v13 - 4);
                    v14 = (int)(v17);
                    if (v13 < 4) {
                        goto lab_brk_11437410;
                    }
                    v13 = (int)(v17);
                    v10 += 4;
                    v6 += 4;
                    v8 = (int)(v6);
                    v11 = (int)(v10);
                    v15 = (int)(v13);
                }
            }
            v12 = (int)(v11);
            v9 = (int)(v8);
            if (*(char *)(v12) == *(char *)(v9)) {
                v16 = (int)(v15);
                result = (int)(v4);
                if (v16 == -3) {
                    break;
                }
                if (*(char *)((v12 + 1)) == *(char *)((v9 + 1))) {
                    result = (int)(v4);
                    if (v16 == -2) {
                        break;
                    }
                    if (*(char *)((v12 + 2)) == *(char *)((v9 + 2))) {
                        result = (int)(v4);
                        if (v16 == -1) {
                            break;
                        }
                        result = (int)(v4);
                        if (*(char *)((v12 + 3)) == *(char *)((v9 + 3))) {
                            break;
                        }
                    }
                }
            }
        }
        v19 = (int)(v4 + 20);
        v20 = (int)(*(int *)v19);
        v21 = (int)(v20);
        result = (int)(0);
    }
    return (int)(result);
lab_brk_11437410: ;
}

// Reference entry 114374c0; body size 140 bytes.
#line 1 "ENTRY_114374c0"
int FUN_114374c0(int a1) {

    if (a1 == 0) {
        return (int)(0);
    }
    int v1 = (int)(*(int * *)(&PTR_DAT_11bff240)); // (int)&FUN_114374d3
    if (v1 == 0) {
        return (int)(0);
    }
    uint v2 = (uint)(*(int *)(a1 + 4)); // (int)&FUN_114374dc
    int v3 = (int)(v2 - 4);
    int v4 = (int)((int)&PTR_DAT_11bff240);
    int v5; // (int)((int(*)(int a1))&FUN_114374c0<>)
    int v6; // (int)((int(*)(int a1))&FUN_114374c0<>)
    int v7; // (int)((int(*)(int a1))&FUN_114374c0<>)
    int v8; // (int)((int(*)(int a1))&FUN_114374c0<>)
    int v9; // (int)((int(*)(int a1))&FUN_114374c0<>)
    int v10; // (int)((int(*)(int a1))&FUN_114374c0<>)
    int v11; // (int)((int(*)(int a1))&FUN_114374c0<>)
    int v12; // (int)((int(*)(int a1))&FUN_114374c0<>)
    int v13; // (int)((int(*)(int a1))&FUN_114374c0<>)
    int v14; // (int)((int(*)(int a1))&FUN_114374c0<>)
    int v15; // (int)((int(*)(int a1))&FUN_114374c0<>)
    int v16; // (int)((int(*)(int a1))&FUN_114374c0<>)
    int v17; // (int)&FUN_114374fd
    int v18; // (int)&FUN_114374e9
    if (*(int *)(v4 + 4) == (int)(v2)) {
        v18 = (int)(*(int *)(a1 + 8));
        v5 = (int)(v18);
        v7 = (int)(v18);
        v14 = (int)(v3);
        if (v2 < 4) {
            v8 = (int)(v7);
            v11 = (int)(v1);
            v15 = (int)(v14);
            if (v14 == -4) {
                goto lab_brk_114374c0;
            }
        } else {
            v13 = (int)(v3);
            v10 = (int)(v1);
            v6 = (int)(v5);
            v8 = (int)(v6);
            v11 = (int)(v10);
            v15 = (int)(v13);
            while (*(int *)(v10) == *(int *)(v6)) {
                v17 = (int)(v13 - 4);
                v14 = (int)(v17);
                if (v13 < 4) {
                    goto lab_brk_114374c0;
                }
                v13 = (int)(v17);
                v10 += 4;
                v6 += 4;
                v8 = (int)(v6);
                v11 = (int)(v10);
                v15 = (int)(v13);
            }
        }
        v12 = (int)(v11);
        v9 = (int)(v8);
        if (*(char *)(v12) == *(char *)(v9)) {
            v16 = (int)(v15);
            if (v16 == -3) {
                goto lab_brk_114374c0;
            }
            if (*(char *)((v12 + 1)) == *(char *)((v9 + 1))) {
                if (v16 == -2) {
                    goto lab_brk_114374c0;
                }
                if (*(char *)((v12 + 2)) == *(char *)((v9 + 2))) {
                    if (v16 == -1) {
                        goto lab_brk_114374c0;
                    }
                    if (*(char *)((v12 + 3)) == *(char *)((v9 + 3))) {
                        goto lab_brk_114374c0;
                    }
                }
            }
        }
    }
    int v19 = (int)(v4 + 20); // (int)&FUN_11437534
    int v20 = (int)(*(int *)v19); // (int)&FUN_11437539
    int v21 = (int)(v20); // (int)&FUN_1143753c
    int result = (int)(0); // (int)&FUN_1143753c
    while (v20 != 0) {
        v4 = (int)(v19);
        if (*(int *)(v4 + 4) == (int)(v2)) {
            v18 = (int)(*(int *)(a1 + 8));
            v5 = (int)(v18);
            int v22 = (int)(v21); // (int)&FUN_114374ef
            v7 = (int)(v18);
            int v23 = (int)(v21); // (int)&FUN_114374ef
            v14 = (int)(v3);
            if (v2 < 4) {
                v8 = (int)(v7);
                v11 = (int)(v23);
                v15 = (int)(v14);
                result = (int)(v4);
                if (v14 == -4) {
                    break;
                }
            } else {
                v13 = (int)(v3);
                v10 = (int)(v22);
                v6 = (int)(v5);
                v8 = (int)(v6);
                v11 = (int)(v10);
                v15 = (int)(v13);
                while (*(int *)(v10) == *(int *)(v6)) {
                    v17 = (int)(v13 - 4);
                    v14 = (int)(v17);
                    if (v13 < 4) {
                        goto lab_brk_114374c0;
                    }
                    v13 = (int)(v17);
                    v10 += 4;
                    v6 += 4;
                    v8 = (int)(v6);
                    v11 = (int)(v10);
                    v15 = (int)(v13);
                }
            }
            v12 = (int)(v11);
            v9 = (int)(v8);
            if (*(char *)(v12) == *(char *)(v9)) {
                v16 = (int)(v15);
                result = (int)(v4);
                if (v16 == -3) {
                    break;
                }
                if (*(char *)((v12 + 1)) == *(char *)((v9 + 1))) {
                    result = (int)(v4);
                    if (v16 == -2) {
                        break;
                    }
                    if (*(char *)((v12 + 2)) == *(char *)((v9 + 2))) {
                        result = (int)(v4);
                        if (v16 == -1) {
                            break;
                        }
                        result = (int)(v4);
                        if (*(char *)((v12 + 3)) == *(char *)((v9 + 3))) {
                            break;
                        }
                    }
                }
            }
        }
        v19 = (int)(v4 + 20);
        v20 = (int)(*(int *)v19);
        v21 = (int)(v20);
        result = (int)(0);
    }
    return (int)(result);
lab_brk_114374c0: ;
}

// Reference entry 11437570; body size 140 bytes.
#line 1 "ENTRY_11437570"
int FUN_11437570(int a1) {

    if (a1 == 0) {
        return (int)(0);
    }
    int v1 = (int)(*(int * *)(&PTR_DAT_11bff2d0)); // (int)&FUN_11437583
    if (v1 == 0) {
        return (int)(0);
    }
    uint v2 = (uint)(*(int *)(a1 + 4)); // (int)&FUN_1143758c
    int v3 = (int)(v2 - 4);
    int v4 = (int)((int)&PTR_DAT_11bff2d0);
    int v5; // (int)((int(*)(int a1))&FUN_11437570<>)
    int v6; // (int)((int(*)(int a1))&FUN_11437570<>)
    int v7; // (int)((int(*)(int a1))&FUN_11437570<>)
    int v8; // (int)((int(*)(int a1))&FUN_11437570<>)
    int v9; // (int)((int(*)(int a1))&FUN_11437570<>)
    int v10; // (int)((int(*)(int a1))&FUN_11437570<>)
    int v11; // (int)((int(*)(int a1))&FUN_11437570<>)
    int v12; // (int)((int(*)(int a1))&FUN_11437570<>)
    int v13; // (int)((int(*)(int a1))&FUN_11437570<>)
    int v14; // (int)((int(*)(int a1))&FUN_11437570<>)
    int v15; // (int)((int(*)(int a1))&FUN_11437570<>)
    int v16; // (int)((int(*)(int a1))&FUN_11437570<>)
    int v17; // (int)&FUN_114375ad
    int v18; // (int)&FUN_11437599
    if (*(int *)(v4 + 4) == (int)(v2)) {
        v18 = (int)(*(int *)(a1 + 8));
        v5 = (int)(v18);
        v7 = (int)(v18);
        v14 = (int)(v3);
        if (v2 < 4) {
            v8 = (int)(v7);
            v11 = (int)(v1);
            v15 = (int)(v14);
            if (v14 == -4) {
                goto lab_brk_11437570;
            }
        } else {
            v13 = (int)(v3);
            v10 = (int)(v1);
            v6 = (int)(v5);
            v8 = (int)(v6);
            v11 = (int)(v10);
            v15 = (int)(v13);
            while (*(int *)(v10) == *(int *)(v6)) {
                v17 = (int)(v13 - 4);
                v14 = (int)(v17);
                if (v13 < 4) {
                    goto lab_brk_11437570;
                }
                v13 = (int)(v17);
                v10 += 4;
                v6 += 4;
                v8 = (int)(v6);
                v11 = (int)(v10);
                v15 = (int)(v13);
            }
        }
        v12 = (int)(v11);
        v9 = (int)(v8);
        if (*(char *)(v12) == *(char *)(v9)) {
            v16 = (int)(v15);
            if (v16 == -3) {
                goto lab_brk_11437570;
            }
            if (*(char *)((v12 + 1)) == *(char *)((v9 + 1))) {
                if (v16 == -2) {
                    goto lab_brk_11437570;
                }
                if (*(char *)((v12 + 2)) == *(char *)((v9 + 2))) {
                    if (v16 == -1) {
                        goto lab_brk_11437570;
                    }
                    if (*(char *)((v12 + 3)) == *(char *)((v9 + 3))) {
                        goto lab_brk_11437570;
                    }
                }
            }
        }
    }
    int v19 = (int)(v4 + 20); // (int)&FUN_114375e4
    int v20 = (int)(*(int *)v19); // (int)&FUN_114375e9
    int v21 = (int)(v20); // (int)&FUN_114375ec
    int result = (int)(0); // (int)&FUN_114375ec
    while (v20 != 0) {
        v4 = (int)(v19);
        if (*(int *)(v4 + 4) == (int)(v2)) {
            v18 = (int)(*(int *)(a1 + 8));
            v5 = (int)(v18);
            int v22 = (int)(v21); // (int)&FUN_1143759f
            v7 = (int)(v18);
            int v23 = (int)(v21); // (int)&FUN_1143759f
            v14 = (int)(v3);
            if (v2 < 4) {
                v8 = (int)(v7);
                v11 = (int)(v23);
                v15 = (int)(v14);
                result = (int)(v4);
                if (v14 == -4) {
                    break;
                }
            } else {
                v13 = (int)(v3);
                v10 = (int)(v22);
                v6 = (int)(v5);
                v8 = (int)(v6);
                v11 = (int)(v10);
                v15 = (int)(v13);
                while (*(int *)(v10) == *(int *)(v6)) {
                    v17 = (int)(v13 - 4);
                    v14 = (int)(v17);
                    if (v13 < 4) {
                        goto lab_brk_11437570;
                    }
                    v13 = (int)(v17);
                    v10 += 4;
                    v6 += 4;
                    v8 = (int)(v6);
                    v11 = (int)(v10);
                    v15 = (int)(v13);
                }
            }
            v12 = (int)(v11);
            v9 = (int)(v8);
            if (*(char *)(v12) == *(char *)(v9)) {
                v16 = (int)(v15);
                result = (int)(v4);
                if (v16 == -3) {
                    break;
                }
                if (*(char *)((v12 + 1)) == *(char *)((v9 + 1))) {
                    result = (int)(v4);
                    if (v16 == -2) {
                        break;
                    }
                    if (*(char *)((v12 + 2)) == *(char *)((v9 + 2))) {
                        result = (int)(v4);
                        if (v16 == -1) {
                            break;
                        }
                        result = (int)(v4);
                        if (*(char *)((v12 + 3)) == *(char *)((v9 + 3))) {
                            break;
                        }
                    }
                }
            }
        }
        v19 = (int)(v4 + 20);
        v20 = (int)(*(int *)v19);
        v21 = (int)(v20);
        result = (int)(0);
    }
    return (int)(result);
lab_brk_11437570: ;
}

// Reference entry 114376a0; body size 140 bytes.
#line 1 "ENTRY_114376a0"
int FUN_114376a0(int a1) {

    if (a1 == 0) {
        return (int)(0);
    }
    int v1 = (int)(*(int * *)(&PTR_DAT_11bff110)); // (int)&FUN_114376b3
    if (v1 == 0) {
        return (int)(0);
    }
    uint v2 = (uint)(*(int *)(a1 + 4)); // (int)&FUN_114376bc
    int v3 = (int)(v2 - 4);
    int v4 = (int)((int)&PTR_DAT_11bff110);
    int v5; // (int)((int(*)(int a1))&FUN_114376a0<>)
    int v6; // (int)((int(*)(int a1))&FUN_114376a0<>)
    int v7; // (int)((int(*)(int a1))&FUN_114376a0<>)
    int v8; // (int)((int(*)(int a1))&FUN_114376a0<>)
    int v9; // (int)((int(*)(int a1))&FUN_114376a0<>)
    int v10; // (int)((int(*)(int a1))&FUN_114376a0<>)
    int v11; // (int)((int(*)(int a1))&FUN_114376a0<>)
    int v12; // (int)((int(*)(int a1))&FUN_114376a0<>)
    int v13; // (int)((int(*)(int a1))&FUN_114376a0<>)
    int v14; // (int)((int(*)(int a1))&FUN_114376a0<>)
    int v15; // (int)((int(*)(int a1))&FUN_114376a0<>)
    int v16; // (int)((int(*)(int a1))&FUN_114376a0<>)
    int v17; // (int)&FUN_114376dd
    int v18; // (int)&FUN_114376c9
    if (*(int *)(v4 + 4) == (int)(v2)) {
        v18 = (int)(*(int *)(a1 + 8));
        v5 = (int)(v18);
        v7 = (int)(v18);
        v14 = (int)(v3);
        if (v2 < 4) {
            v8 = (int)(v7);
            v11 = (int)(v1);
            v15 = (int)(v14);
            if (v14 == -4) {
                goto lab_brk_114376a0;
            }
        } else {
            v13 = (int)(v3);
            v10 = (int)(v1);
            v6 = (int)(v5);
            v8 = (int)(v6);
            v11 = (int)(v10);
            v15 = (int)(v13);
            while (*(int *)(v10) == *(int *)(v6)) {
                v17 = (int)(v13 - 4);
                v14 = (int)(v17);
                if (v13 < 4) {
                    goto lab_brk_114376a0;
                }
                v13 = (int)(v17);
                v10 += 4;
                v6 += 4;
                v8 = (int)(v6);
                v11 = (int)(v10);
                v15 = (int)(v13);
            }
        }
        v12 = (int)(v11);
        v9 = (int)(v8);
        if (*(char *)(v12) == *(char *)(v9)) {
            v16 = (int)(v15);
            if (v16 == -3) {
                goto lab_brk_114376a0;
            }
            if (*(char *)((v12 + 1)) == *(char *)((v9 + 1))) {
                if (v16 == -2) {
                    goto lab_brk_114376a0;
                }
                if (*(char *)((v12 + 2)) == *(char *)((v9 + 2))) {
                    if (v16 == -1) {
                        goto lab_brk_114376a0;
                    }
                    if (*(char *)((v12 + 3)) == *(char *)((v9 + 3))) {
                        goto lab_brk_114376a0;
                    }
                }
            }
        }
    }
    int v19 = (int)(v4 + 20); // (int)&FUN_11437714
    int v20 = (int)(*(int *)v19); // (int)&FUN_11437719
    int v21 = (int)(v20); // (int)&FUN_1143771c
    int result = (int)(0); // (int)&FUN_1143771c
    while (v20 != 0) {
        v4 = (int)(v19);
        if (*(int *)(v4 + 4) == (int)(v2)) {
            v18 = (int)(*(int *)(a1 + 8));
            v5 = (int)(v18);
            int v22 = (int)(v21); // (int)&FUN_114376cf
            v7 = (int)(v18);
            int v23 = (int)(v21); // (int)&FUN_114376cf
            v14 = (int)(v3);
            if (v2 < 4) {
                v8 = (int)(v7);
                v11 = (int)(v23);
                v15 = (int)(v14);
                result = (int)(v4);
                if (v14 == -4) {
                    break;
                }
            } else {
                v13 = (int)(v3);
                v10 = (int)(v22);
                v6 = (int)(v5);
                v8 = (int)(v6);
                v11 = (int)(v10);
                v15 = (int)(v13);
                while (*(int *)(v10) == *(int *)(v6)) {
                    v17 = (int)(v13 - 4);
                    v14 = (int)(v17);
                    if (v13 < 4) {
                        goto lab_brk_114376a0;
                    }
                    v13 = (int)(v17);
                    v10 += 4;
                    v6 += 4;
                    v8 = (int)(v6);
                    v11 = (int)(v10);
                    v15 = (int)(v13);
                }
            }
            v12 = (int)(v11);
            v9 = (int)(v8);
            if (*(char *)(v12) == *(char *)(v9)) {
                v16 = (int)(v15);
                result = (int)(v4);
                if (v16 == -3) {
                    break;
                }
                if (*(char *)((v12 + 1)) == *(char *)((v9 + 1))) {
                    result = (int)(v4);
                    if (v16 == -2) {
                        break;
                    }
                    if (*(char *)((v12 + 2)) == *(char *)((v9 + 2))) {
                        result = (int)(v4);
                        if (v16 == -1) {
                            break;
                        }
                        result = (int)(v4);
                        if (*(char *)((v12 + 3)) == *(char *)((v9 + 3))) {
                            break;
                        }
                    }
                }
            }
        }
        v19 = (int)(v4 + 20);
        v20 = (int)(*(int *)v19);
        v21 = (int)(v20);
        result = (int)(0);
    }
    return (int)(result);
lab_brk_114376a0: ;
}

// Reference entry 11437750; body size 140 bytes.
#line 1 "ENTRY_11437750"
int FUN_11437750(int a1) {

    if (a1 == 0) {
        return (int)(0);
    }
    int v1 = (int)(*(int * *)(&PTR_DAT_11bff348)); // (int)&FUN_11437763
    if (v1 == 0) {
        return (int)(0);
    }
    uint v2 = (uint)(*(int *)(a1 + 4)); // (int)&FUN_1143776c
    int v3 = (int)(v2 - 4);
    int v4 = (int)((int)&PTR_DAT_11bff348);
    int v5; // (int)((int(*)(int a1))&FUN_11437750<>)
    int v6; // (int)((int(*)(int a1))&FUN_11437750<>)
    int v7; // (int)((int(*)(int a1))&FUN_11437750<>)
    int v8; // (int)((int(*)(int a1))&FUN_11437750<>)
    int v9; // (int)((int(*)(int a1))&FUN_11437750<>)
    int v10; // (int)((int(*)(int a1))&FUN_11437750<>)
    int v11; // (int)((int(*)(int a1))&FUN_11437750<>)
    int v12; // (int)((int(*)(int a1))&FUN_11437750<>)
    int v13; // (int)((int(*)(int a1))&FUN_11437750<>)
    int v14; // (int)((int(*)(int a1))&FUN_11437750<>)
    int v15; // (int)((int(*)(int a1))&FUN_11437750<>)
    int v16; // (int)((int(*)(int a1))&FUN_11437750<>)
    int v17; // (int)&FUN_1143778d
    int v18; // (int)&FUN_11437779
    if (*(int *)(v4 || 4) == (int)(v2)) {
        v18 = (int)(*(int *)(a1 + 8));
        v5 = (int)(v18);
        v7 = (int)(v18);
        v14 = (int)(v3);
        if (v2 < 4) {
            v8 = (int)(v7);
            v11 = (int)(v1);
            v15 = (int)(v14);
            if (v14 == -4) {
                goto lab_brk_11437750;
            }
        } else {
            v13 = (int)(v3);
            v10 = (int)(v1);
            v6 = (int)(v5);
            v8 = (int)(v6);
            v11 = (int)(v10);
            v15 = (int)(v13);
            while (*(int *)(v10) == *(int *)(v6)) {
                v17 = (int)(v13 - 4);
                v14 = (int)(v17);
                if (v13 < 4) {
                    goto lab_brk_11437750;
                }
                v13 = (int)(v17);
                v10 += 4;
                v6 += 4;
                v8 = (int)(v6);
                v11 = (int)(v10);
                v15 = (int)(v13);
            }
        }
        v12 = (int)(v11);
        v9 = (int)(v8);
        if (*(char *)(v12) == *(char *)(v9)) {
            v16 = (int)(v15);
            if (v16 == -3) {
                goto lab_brk_11437750;
            }
            if (*(char *)((v12 + 1)) == *(char *)((v9 + 1))) {
                if (v16 == -2) {
                    goto lab_brk_11437750;
                }
                if (*(char *)((v12 + 2)) == *(char *)((v9 + 2))) {
                    if (v16 == -1) {
                        goto lab_brk_11437750;
                    }
                    if (*(char *)((v12 + 3)) == *(char *)((v9 + 3))) {
                        goto lab_brk_11437750;
                    }
                }
            }
        }
    }
    int v19 = (int)(v4 + 24); // (int)&FUN_114377c4
    int v20 = (int)(*(int *)v19); // (int)&FUN_114377c9
    int v21 = (int)(v20); // (int)&FUN_114377cc
    int result = (int)(0); // (int)&FUN_114377cc
    while (v20 != 0) {
        v4 = (int)(v19);
        if (*(int *)(v4 || 4) == (int)(v2)) {
            v18 = (int)(*(int *)(a1 + 8));
            v5 = (int)(v18);
            int v22 = (int)(v21); // (int)&FUN_1143777f
            v7 = (int)(v18);
            int v23 = (int)(v21); // (int)&FUN_1143777f
            v14 = (int)(v3);
            if (v2 < 4) {
                v8 = (int)(v7);
                v11 = (int)(v23);
                v15 = (int)(v14);
                result = (int)(v4);
                if (v14 == -4) {
                    break;
                }
            } else {
                v13 = (int)(v3);
                v10 = (int)(v22);
                v6 = (int)(v5);
                v8 = (int)(v6);
                v11 = (int)(v10);
                v15 = (int)(v13);
                while (*(int *)(v10) == *(int *)(v6)) {
                    v17 = (int)(v13 - 4);
                    v14 = (int)(v17);
                    if (v13 < 4) {
                        goto lab_brk_11437750;
                    }
                    v13 = (int)(v17);
                    v10 += 4;
                    v6 += 4;
                    v8 = (int)(v6);
                    v11 = (int)(v10);
                    v15 = (int)(v13);
                }
            }
            v12 = (int)(v11);
            v9 = (int)(v8);
            if (*(char *)(v12) == *(char *)(v9)) {
                v16 = (int)(v15);
                result = (int)(v4);
                if (v16 == -3) {
                    break;
                }
                if (*(char *)((v12 + 1)) == *(char *)((v9 + 1))) {
                    result = (int)(v4);
                    if (v16 == -2) {
                        break;
                    }
                    if (*(char *)((v12 + 2)) == *(char *)((v9 + 2))) {
                        result = (int)(v4);
                        if (v16 == -1) {
                            break;
                        }
                        result = (int)(v4);
                        if (*(char *)((v12 + 3)) == *(char *)((v9 + 3))) {
                            break;
                        }
                    }
                }
            }
        }
        v19 = (int)(v4 + 24);
        v20 = (int)(*(int *)v19);
        v21 = (int)(v20);
        result = (int)(0);
    }
    return (int)(result);
lab_brk_11437750: ;
}

// Reference entry 11437950; body size 140 bytes.
#line 1 "ENTRY_11437950"
int FUN_11437950(int a1) {

    if (a1 == 0) {
        return (int)(0);
    }
    int v1 = (int)(*(int * *)(&PTR_DAT_11bfee68)); // (int)&FUN_11437963
    if (v1 == 0) {
        return (int)(0);
    }
    uint v2 = (uint)(*(int *)(a1 + 4)); // (int)&FUN_1143796c
    int v3 = (int)(v2 - 4);
    int v4 = (int)((int)&PTR_DAT_11bfee68);
    int v5; // (int)((int(*)(int a1))&FUN_11437950<>)
    int v6; // (int)((int(*)(int a1))&FUN_11437950<>)
    int v7; // (int)((int(*)(int a1))&FUN_11437950<>)
    int v8; // (int)((int(*)(int a1))&FUN_11437950<>)
    int v9; // (int)((int(*)(int a1))&FUN_11437950<>)
    int v10; // (int)((int(*)(int a1))&FUN_11437950<>)
    int v11; // (int)((int(*)(int a1))&FUN_11437950<>)
    int v12; // (int)((int(*)(int a1))&FUN_11437950<>)
    int v13; // (int)((int(*)(int a1))&FUN_11437950<>)
    int v14; // (int)((int(*)(int a1))&FUN_11437950<>)
    int v15; // (int)((int(*)(int a1))&FUN_11437950<>)
    int v16; // (int)((int(*)(int a1))&FUN_11437950<>)
    int v17; // (int)&FUN_1143798d
    int v18; // (int)&FUN_11437979
    if (*(int *)(v4 + 4) == (int)(v2)) {
        v18 = (int)(*(int *)(a1 + 8));
        v5 = (int)(v18);
        v7 = (int)(v18);
        v14 = (int)(v3);
        if (v2 < 4) {
            v8 = (int)(v7);
            v11 = (int)(v1);
            v15 = (int)(v14);
            if (v14 == -4) {
                goto lab_brk_11437950;
            }
        } else {
            v13 = (int)(v3);
            v10 = (int)(v1);
            v6 = (int)(v5);
            v8 = (int)(v6);
            v11 = (int)(v10);
            v15 = (int)(v13);
            while (*(int *)(v10) == *(int *)(v6)) {
                v17 = (int)(v13 - 4);
                v14 = (int)(v17);
                if (v13 < 4) {
                    goto lab_brk_11437950;
                }
                v13 = (int)(v17);
                v10 += 4;
                v6 += 4;
                v8 = (int)(v6);
                v11 = (int)(v10);
                v15 = (int)(v13);
            }
        }
        v12 = (int)(v11);
        v9 = (int)(v8);
        if (*(char *)(v12) == *(char *)(v9)) {
            v16 = (int)(v15);
            if (v16 == -3) {
                goto lab_brk_11437950;
            }
            if (*(char *)((v12 + 1)) == *(char *)((v9 + 1))) {
                if (v16 == -2) {
                    goto lab_brk_11437950;
                }
                if (*(char *)((v12 + 2)) == *(char *)((v9 + 2))) {
                    if (v16 == -1) {
                        goto lab_brk_11437950;
                    }
                    if (*(char *)((v12 + 3)) == *(char *)((v9 + 3))) {
                        goto lab_brk_11437950;
                    }
                }
            }
        }
    }
    int v19 = (int)(v4 + 20); // (int)&FUN_114379c4
    int v20 = (int)(*(int *)v19); // (int)&FUN_114379c9
    int v21 = (int)(v20); // (int)&FUN_114379cc
    int result = (int)(0); // (int)&FUN_114379cc
    while (v20 != 0) {
        v4 = (int)(v19);
        if (*(int *)(v4 + 4) == (int)(v2)) {
            v18 = (int)(*(int *)(a1 + 8));
            v5 = (int)(v18);
            int v22 = (int)(v21); // (int)&FUN_1143797f
            v7 = (int)(v18);
            int v23 = (int)(v21); // (int)&FUN_1143797f
            v14 = (int)(v3);
            if (v2 < 4) {
                v8 = (int)(v7);
                v11 = (int)(v23);
                v15 = (int)(v14);
                result = (int)(v4);
                if (v14 == -4) {
                    break;
                }
            } else {
                v13 = (int)(v3);
                v10 = (int)(v22);
                v6 = (int)(v5);
                v8 = (int)(v6);
                v11 = (int)(v10);
                v15 = (int)(v13);
                while (*(int *)(v10) == *(int *)(v6)) {
                    v17 = (int)(v13 - 4);
                    v14 = (int)(v17);
                    if (v13 < 4) {
                        goto lab_brk_11437950;
                    }
                    v13 = (int)(v17);
                    v10 += 4;
                    v6 += 4;
                    v8 = (int)(v6);
                    v11 = (int)(v10);
                    v15 = (int)(v13);
                }
            }
            v12 = (int)(v11);
            v9 = (int)(v8);
            if (*(char *)(v12) == *(char *)(v9)) {
                v16 = (int)(v15);
                result = (int)(v4);
                if (v16 == -3) {
                    break;
                }
                if (*(char *)((v12 + 1)) == *(char *)((v9 + 1))) {
                    result = (int)(v4);
                    if (v16 == -2) {
                        break;
                    }
                    if (*(char *)((v12 + 2)) == *(char *)((v9 + 2))) {
                        result = (int)(v4);
                        if (v16 == -1) {
                            break;
                        }
                        result = (int)(v4);
                        if (*(char *)((v12 + 3)) == *(char *)((v9 + 3))) {
                            break;
                        }
                    }
                }
            }
        }
        v19 = (int)(v4 + 20);
        v20 = (int)(*(int *)v19);
        v21 = (int)(v20);
        result = (int)(0);
    }
    return (int)(result);
lab_brk_11437950: ;
}

// Reference entry 11437a00; body size 140 bytes.
#line 1 "ENTRY_11437a00"
int FUN_11437a00(int a1) {

    if (a1 == 0) {
        return (int)(0);
    }
    int v1 = (int)(*(int * *)(&PTR_DAT_11bfecc0)); // (int)&FUN_11437a13
    if (v1 == 0) {
        return (int)(0);
    }
    uint v2 = (uint)(*(int *)(a1 + 4)); // (int)&FUN_11437a1c
    int v3 = (int)(v2 - 4);
    int v4 = (int)((int)&PTR_DAT_11bfecc0);
    int v5; // (int)((int(*)(int a1))&FUN_11437a00<>)
    int v6; // (int)((int(*)(int a1))&FUN_11437a00<>)
    int v7; // (int)((int(*)(int a1))&FUN_11437a00<>)
    int v8; // (int)((int(*)(int a1))&FUN_11437a00<>)
    int v9; // (int)((int(*)(int a1))&FUN_11437a00<>)
    int v10; // (int)((int(*)(int a1))&FUN_11437a00<>)
    int v11; // (int)((int(*)(int a1))&FUN_11437a00<>)
    int v12; // (int)((int(*)(int a1))&FUN_11437a00<>)
    int v13; // (int)((int(*)(int a1))&FUN_11437a00<>)
    int v14; // (int)((int(*)(int a1))&FUN_11437a00<>)
    int v15; // (int)((int(*)(int a1))&FUN_11437a00<>)
    int v16; // (int)((int(*)(int a1))&FUN_11437a00<>)
    int v17; // (int)&FUN_11437a3d
    int v18; // (int)&FUN_11437a29
    if (*(int *)(v4 + 4) == (int)(v2)) {
        v18 = (int)(*(int *)(a1 + 8));
        v5 = (int)(v18);
        v7 = (int)(v18);
        v14 = (int)(v3);
        if (v2 < 4) {
            v8 = (int)(v7);
            v11 = (int)(v1);
            v15 = (int)(v14);
            if (v14 == -4) {
                goto lab_brk_11437a00;
            }
        } else {
            v13 = (int)(v3);
            v10 = (int)(v1);
            v6 = (int)(v5);
            v8 = (int)(v6);
            v11 = (int)(v10);
            v15 = (int)(v13);
            while (*(int *)(v10) == *(int *)(v6)) {
                v17 = (int)(v13 - 4);
                v14 = (int)(v17);
                if (v13 < 4) {
                    goto lab_brk_11437a00;
                }
                v13 = (int)(v17);
                v10 += 4;
                v6 += 4;
                v8 = (int)(v6);
                v11 = (int)(v10);
                v15 = (int)(v13);
            }
        }
        v12 = (int)(v11);
        v9 = (int)(v8);
        if (*(char *)(v12) == *(char *)(v9)) {
            v16 = (int)(v15);
            if (v16 == -3) {
                goto lab_brk_11437a00;
            }
            if (*(char *)((v12 + 1)) == *(char *)((v9 + 1))) {
                if (v16 == -2) {
                    goto lab_brk_11437a00;
                }
                if (*(char *)((v12 + 2)) == *(char *)((v9 + 2))) {
                    if (v16 == -1) {
                        goto lab_brk_11437a00;
                    }
                    if (*(char *)((v12 + 3)) == *(char *)((v9 + 3))) {
                        goto lab_brk_11437a00;
                    }
                }
            }
        }
    }
    int v19 = (int)(v4 + 20); // (int)&FUN_11437a74
    int v20 = (int)(*(int *)v19); // (int)&FUN_11437a79
    int v21 = (int)(v20); // (int)&FUN_11437a7c
    int result = (int)(0); // (int)&FUN_11437a7c
    while (v20 != 0) {
        v4 = (int)(v19);
        if (*(int *)(v4 + 4) == (int)(v2)) {
            v18 = (int)(*(int *)(a1 + 8));
            v5 = (int)(v18);
            int v22 = (int)(v21); // (int)&FUN_11437a2f
            v7 = (int)(v18);
            int v23 = (int)(v21); // (int)&FUN_11437a2f
            v14 = (int)(v3);
            if (v2 < 4) {
                v8 = (int)(v7);
                v11 = (int)(v23);
                v15 = (int)(v14);
                result = (int)(v4);
                if (v14 == -4) {
                    break;
                }
            } else {
                v13 = (int)(v3);
                v10 = (int)(v22);
                v6 = (int)(v5);
                v8 = (int)(v6);
                v11 = (int)(v10);
                v15 = (int)(v13);
                while (*(int *)(v10) == *(int *)(v6)) {
                    v17 = (int)(v13 - 4);
                    v14 = (int)(v17);
                    if (v13 < 4) {
                        goto lab_brk_11437a00;
                    }
                    v13 = (int)(v17);
                    v10 += 4;
                    v6 += 4;
                    v8 = (int)(v6);
                    v11 = (int)(v10);
                    v15 = (int)(v13);
                }
            }
            v12 = (int)(v11);
            v9 = (int)(v8);
            if (*(char *)(v12) == *(char *)(v9)) {
                v16 = (int)(v15);
                result = (int)(v4);
                if (v16 == -3) {
                    break;
                }
                if (*(char *)((v12 + 1)) == *(char *)((v9 + 1))) {
                    result = (int)(v4);
                    if (v16 == -2) {
                        break;
                    }
                    if (*(char *)((v12 + 2)) == *(char *)((v9 + 2))) {
                        result = (int)(v4);
                        if (v16 == -1) {
                            break;
                        }
                        result = (int)(v4);
                        if (*(char *)((v12 + 3)) == *(char *)((v9 + 3))) {
                            break;
                        }
                    }
                }
            }
        }
        v19 = (int)(v4 + 20);
        v20 = (int)(*(int *)v19);
        v21 = (int)(v20);
        result = (int)(0);
    }
    return (int)(result);
lab_brk_11437a00: ;
}

// Reference entry 11438720; body size 74 bytes.
#line 1 "ENTRY_11438720"

__declspec(naked) void FUN_11438720(void)

{
  __asm mov edx, dword ptr [esp + 8]
  __asm cmp edx, 1
  __asm _emit 0x73 __asm _emit 0x06
  __asm mov eax, 0xffffef00
  __asm ret
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm movzx esi, byte ptr [edi + edx - 1]
  __asm cmp esi, edx
  __asm _emit 0x77 __asm _emit 0x24
  __asm mov ecx, dword ptr [esp + 0x14]
  __asm mov eax, edx
  __asm sub eax, esi
  __asm mov dword ptr [ecx], eax
  __asm cmp eax, edx
  __asm _emit 0x73 __asm _emit 0x11 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00
  __asm movzx ecx, byte ptr [eax + edi]
  __asm cmp ecx, esi
  __asm _emit 0x75 __asm _emit 0x0a
  __asm inc eax
  __asm cmp eax, edx
  __asm _emit 0x72 __asm _emit 0xf3
  __asm pop edi
  __asm xor eax, eax
  __asm pop esi
  __asm ret
  __asm pop edi
  __asm mov eax, 0xffffec80
  __asm pop esi
  __asm ret
}



// Reference entry 11438780; body size 150 bytes.
#line 1 "ENTRY_11438780"

__declspec(naked) void FUN_11438780(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0xc]
  __asm push ebp
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x18]
  __asm push edi
  __asm push esi
  __asm push 0
  __asm push ebx
  __asm call LAB_1148ce0b
  __asm lea eax, [esi + esi]
  __asm add esp, 0xc
  __asm xor edi, edi
  __asm mov dword ptr [esp + 0x1c], eax
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x60
  __asm mov ebp, dword ptr [esp + 0x14]
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x80 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov cl, byte ptr [ebp]
  __asm lea eax, [ecx - 0x30]
  __asm cmp al, 9
  __asm _emit 0x77 __asm _emit 0x08
  __asm movzx eax, cl
  __asm sub eax, 0x30
  __asm _emit 0xeb __asm _emit 0x1c
  __asm lea eax, [ecx - 0x41]
  __asm cmp al, 5
  __asm _emit 0x77 __asm _emit 0x08
  __asm movzx eax, cl
  __asm sub eax, 0x37
  __asm _emit 0xeb __asm _emit 0x0d
  __asm lea eax, [ecx - 0x61]
  __asm cmp al, 5
  __asm _emit 0x77 __asm _emit 0x34
  __asm movzx eax, cl
  __asm sub eax, 0x57
  __asm mov esi, edi
  __asm movzx edx, al
  __asm _emit 0xd1 __asm _emit 0xee
  __asm mov cl, al
  __asm add esi, ebx
  __asm shl cl, 4
  __asm mov ebx, edi
  __asm movzx eax, cl
  __asm and bl, 1
  __asm mov ebx, dword ptr [esp + 0x18]
  __asm cmove edx, eax
  __asm inc edi
  __asm or byte ptr [esi], dl
  __asm inc ebp
  __asm cmp edi, dword ptr [esp + 0x1c]
  __asm _emit 0x72 __asm _emit 0xab
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm xor eax, eax
  __asm pop ebx
  __asm ret
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm mov eax, 0xffffee00
  __asm pop ebx
  __asm ret
}



// Reference entry 11439d10; body size 190 bytes.
#line 1 "ENTRY_11439d10"

__declspec(naked) void FUN_11439d10(void)

{
  __asm push ebx
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x10]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push edi
  __asm lea eax, [ebp + 1]
  __asm push eax
  __asm push 0
  __asm push esi
  __asm call LAB_1148ce0b
  __asm add esp, 0xc
  __asm xor ebx, ebx
  __asm test ebp, ebp
  __asm _emit 0x74 __asm _emit 0x4b
  __asm movzx eax, byte ptr [esp + 0x1c]
  __asm mov dword ptr [esp + 0x18], eax
  __asm nop word ptr [eax + eax]
  __asm xor esi, esi
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x2d
  __asm mov edi, ebx
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push edi
  __asm push dword ptr [esp + 0x24]
  __asm call LAB_10023902
  __asm mov ecx, esi
  __asm add esp, 8
  __asm shl al, cl
  __asm inc esi
  __asm mov ecx, dword ptr [esp + 0x14]
  __asm add edi, ebp
  __asm or byte ptr [ecx + ebx], al
  __asm mov eax, dword ptr [esp + 0x18]
  __asm cmp esi, eax
  __asm _emit 0x72 __asm _emit 0xdd
  __asm inc ebx
  __asm cmp ebx, ebp
  __asm _emit 0x72 __asm _emit 0xc8
  __asm mov esi, dword ptr [esp + 0x14]
  __asm xor al, al
  __asm mov edi, 1
  __asm mov byte ptr [esp + 0x18], al
  __asm cmp ebp, edi
  __asm _emit 0x72 __asm _emit 0x3e __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00
  __asm mov bl, byte ptr [edi + esi]
  __asm mov bh, 1
  __asm movzx ecx, byte ptr [edi + esi - 1]
  __asm mov dh, bl
  __asm and bl, byte ptr [esp + 0x18]
  __asm xor dh, al
  __asm mov al, dh
  __asm and al, 1
  __asm sub bh, al
  __asm movzx eax, bh
  __asm imul ecx, eax
  __asm shl bh, 7
  __asm or byte ptr [edi + esi - 1], bh
  __asm mov al, cl
  __asm xor cl, dh
  __asm and al, dh
  __asm mov byte ptr [edi + esi], cl
  __asm or al, bl
  __asm inc edi
  __asm mov byte ptr [esp + 0x18], al
  __asm cmp edi, ebp
  __asm _emit 0x76 __asm _emit 0xc7
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret
}



// Reference entry 1143aa80; body size 213 bytes.
#line 1 "ENTRY_1143aa80"

__declspec(naked) void FUN_1143aa80(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0xc]
  __asm cmp dword ptr [ebx + 0x48], 0
  __asm _emit 0x75 __asm _emit 0x14
  __asm lea eax, [ebx + 4]
  __asm push eax
  __asm mov eax, dword ptr [esp + 0xc]
  __asm push eax
  __asm push eax
  __asm call LAB_10037222
  __asm add esp, 0xc
  __asm pop ebx
  __asm ret
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm cmp word ptr [esi + 4], 0
  __asm _emit 0x7d __asm _emit 0x0f
  __asm push 0
  __asm push esi
  __asm call LAB_1001f98d
  __asm add esp, 8
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x12
  __asm push esi
  __asm call LAB_1006bc57
  __asm mov ecx, dword ptr [ebx + 0x3c]
  __asm add esp, 4
  __asm add ecx, ecx
  __asm cmp eax, ecx
  __asm _emit 0x76 __asm _emit 0x08
  __asm pop esi
  __asm mov eax, 0xffffb080
  __asm pop ebx
  __asm ret
  __asm mov eax, dword ptr [ebx + 0x48]
  __asm push edi
  __asm push esi
  __asm call eax
  __asm mov edi, eax
  __asm add esp, 4
  __asm test edi, edi
  __asm _emit 0x75 __asm _emit 0x6b
  __asm cmp word ptr [esi + 4], ax
  __asm _emit 0x7d __asm _emit 0x2f
  __asm nop word ptr [eax + eax]
  __asm push 0
  __asm push esi
  __asm call LAB_1001f98d
  __asm add esp, 8
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x1a
  __asm lea eax, [ebx + 4]
  __asm push eax
  __asm push esi
  __asm push esi
  __asm call LAB_10016a9f
  __asm mov edi, eax
  __asm add esp, 0xc
  __asm test edi, edi
  __asm _emit 0x75 __asm _emit 0x3c
  __asm cmp word ptr [esi + 4], ax
  __asm _emit 0x7c __asm _emit 0xd7
  __asm add ebx, 4
  __asm push ebx
  __asm push esi
  __asm call LAB_1005dc47
  __asm add esp, 8
  __asm test eax, eax
  __asm _emit 0x78 __asm _emit 0x25
  __asm nop word ptr [eax + eax]
  __asm push ebx
  __asm push esi
  __asm push esi
  __asm call LAB_10080724
  __asm mov edi, eax
  __asm add esp, 0xc
  __asm test edi, edi
  __asm _emit 0x75 __asm _emit 0x0e
  __asm push ebx
  __asm push esi
  __asm call LAB_1005dc47
  __asm add esp, 8
  __asm test eax, eax
  __asm _emit 0x79 __asm _emit 0xe1
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret
}



// Reference entry 1143c990; body size 83 bytes.
#line 1 "ENTRY_1143c990"

__declspec(naked) void FUN_1143c990(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm cmp dword ptr [esi + 0x40], 0x180
  __asm sbb cl, cl
  __asm add cl, 5
  __asm lea eax, [ecx + 1]
  __asm movzx edx, al
  __asm movzx eax, cl
  __asm mov cl, byte ptr [esp + 0xc]
  __asm test cl, cl
  __asm cmove edx, eax
  __asm _emit 0x74 __asm _emit 0x0c
  __asm cmp dword ptr [esi + 0x58], 0
  __asm _emit 0x74 __asm _emit 0x06
  __asm cmp dword ptr [esi + 0x5c], 0
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov ecx, 4
  __asm movzx eax, dl
  __asm cmp dl, cl
  __asm cmova eax, ecx
  __asm mov dl, al
  __asm movzx ecx, dl
  __asm cmp ecx, dword ptr [esi + 0x40]
  __asm movzx eax, dl
  __asm mov edx, 2
  __asm cmovae eax, edx
  __asm pop esi
  __asm ret
}



// Reference entry 1143e5d0; body size 134 bytes.
#line 1 "ENTRY_1143e5d0"

__declspec(naked) void FUN_1143e5d0(void)

{
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push edi
  __asm push dword ptr [esp + 0x1c]
  __asm mov edi, dword ptr [esp + 0x14]
  __asm mov ebx, edi
  __asm push dword ptr [esp + 0x1c]
  __asm shr ebx, 3
  __asm inc ebx
  __asm push ebx
  __asm push esi
  __asm call LAB_10084e5f
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x5b __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xdd __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub eax, edi
  __asm dec eax
  __asm push eax
  __asm push esi
  __asm call LAB_1001c715
  __asm add esp, 8
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x43
  __asm push 1
  __asm push edi
  __asm push esi
  __asm call LAB_100136ab
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x33
  __asm push eax
  __asm push eax
  __asm push esi
  __asm call LAB_100136ab
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x24
  __asm push eax
  __asm push 1
  __asm push esi
  __asm call LAB_100136ab
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x14
  __asm cmp edi, 0xfe
  __asm _emit 0x75 __asm _emit 0x0c
  __asm push eax
  __asm push 2
  __asm push esi
  __asm call LAB_100136ab
  __asm add esp, 0xc
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret
}



// Reference entry 1143e680; body size 40 bytes.
#line 1 "ENTRY_1143e680"

__declspec(naked) void FUN_1143e680(void)

{
  __asm push dword ptr [esp + 0x10]
  __asm push dword ptr [esp + 0x10]
  __asm push dword ptr [esp + 0xc]
  __asm push 1
  __asm push dword ptr [esp + 0x18]
  __asm call LAB_1006d147
  __asm add esp, 0x14
  __asm mov ecx, 0xffffb300
  __asm cmp eax, -0xe
  __asm cmovne ecx, eax
  __asm mov eax, ecx
  __asm ret
}



// Reference entry 11440150; body size 87 bytes.
#line 1 "ENTRY_11440150"

__declspec(naked) void FUN_11440150(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edi
  __asm push dword ptr [esp + 0x18]
  __asm push dword ptr [esp + 0x18]
  __asm push esi
  __asm call LAB_10022502
  __asm mov edi, eax
  __asm add esp, 0xc
  __asm test edi, edi
  __asm _emit 0x75 __asm _emit 0x37
  __asm push ebx
  __asm cmp word ptr [esi + 4], ax
  __asm _emit 0x7d __asm _emit 0x2d
  __asm mov ebx, dword ptr [esp + 0x10]
  __asm push 0
  __asm push esi
  __asm call LAB_1001f98d
  __asm add esp, 8
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x1a
  __asm lea eax, [ebx + 4]
  __asm push eax
  __asm push esi
  __asm push esi
  __asm call LAB_10016a9f
  __asm mov edi, eax
  __asm add esp, 0xc
  __asm test edi, edi
  __asm _emit 0x75 __asm _emit 0x06
  __asm cmp word ptr [esi + 4], ax
  __asm _emit 0x7c __asm _emit 0xd7
  __asm mov eax, edi
  __asm pop ebx
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 11440240; body size 36 bytes.
#line 1 "ENTRY_11440240"

__declspec(naked) void FUN_11440240(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x19
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm nop
  __asm push edi
  __asm call LAB_100369ee
  __asm add esp, 4
  __asm add edi, 8
  __asm sub esi, 1
  __asm _emit 0x75 __asm _emit 0xef
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 11440270; body size 36 bytes.
#line 1 "ENTRY_11440270"

__declspec(naked) void FUN_11440270(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x19
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm nop
  __asm push edi
  __asm call LAB_1004ed23
  __asm add esp, 4
  __asm add edi, 8
  __asm sub esi, 1
  __asm _emit 0x75 __asm _emit 0xef
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 114402d0; body size 36 bytes.
#line 1 "ENTRY_114402d0"

__declspec(naked) void FUN_114402d0(void)

{
  __asm lea eax, [esp + 4]
  __asm push eax
  __asm call LAB_100191be
  __asm add esp, 4
  __asm sub eax, 2
  __asm _emit 0x74 __asm _emit 0x0d
  __asm sub eax, 1
  __asm _emit 0x74 __asm _emit 0x08
  __asm sub eax, 1
  __asm _emit 0x74 __asm _emit 0x03
  __asm xor eax, eax
  __asm ret
  __asm mov eax, dword ptr [esp + 8]
  __asm ret
}



// Reference entry 11440300; body size 36 bytes.
#line 1 "ENTRY_11440300"

__declspec(naked) void FUN_11440300(void)

{
  __asm lea eax, [esp + 4]
  __asm push eax
  __asm call LAB_100191be
  __asm add esp, 4
  __asm sub eax, 2
  __asm _emit 0x74 __asm _emit 0x0d
  __asm sub eax, 1
  __asm _emit 0x74 __asm _emit 0x08
  __asm sub eax, 1
  __asm _emit 0x74 __asm _emit 0x03
  __asm xor eax, eax
  __asm ret
  __asm mov eax, dword ptr [esp + 8]
  __asm ret
}



// Reference entry 11440560; body size 77 bytes.
#line 1 "ENTRY_11440560"

__declspec(naked) void FUN_11440560(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push ebx
  __asm push esi
  __asm mov ebx, dword ptr [eax + 4]
  __asm push ebx
  __asm call LAB_100432d4
  __asm mov esi, eax
  __asm add esp, 4
  __asm cmp dword ptr [esp + 0x20], esi
  __asm _emit 0x73 __asm _emit 0x08
  __asm pop esi
  __asm mov eax, 0xffffbc80
  __asm pop ebx
  __asm ret
  __asm push dword ptr [esp + 0x1c]
  __asm push dword ptr [esp + 0x18]
  __asm push dword ptr [esp + 0x20]
  __asm push dword ptr [esp + 0x1c]
  __asm push ebx
  __asm call LAB_1003215a
  __asm add esp, 0x14
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x0b
  __asm cmp esi, dword ptr [esp + 0x20]
  __asm sbb eax, eax
  __asm and eax, 0xffffc700
  __asm pop esi
  __asm pop ebx
  __asm ret
}



// Reference entry 114405c0; body size 71 bytes.
#line 1 "ENTRY_114405c0"

__declspec(naked) void FUN_114405c0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [eax + 4]
  __asm push esi
  __asm call LAB_100432d4
  __asm mov ecx, dword ptr [esp + 0x24]
  __asm add esp, 4
  __asm mov dword ptr [ecx], eax
  __asm cmp dword ptr [esp + 0x1c], eax
  __asm _emit 0x73 __asm _emit 0x07
  __asm mov eax, 0xffffc780
  __asm pop esi
  __asm ret
  __asm push dword ptr [esp + 0x18]
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x1c]
  __asm push dword ptr [esp + 0x18]
  __asm push dword ptr [esp + 0x38]
  __asm push dword ptr [esp + 0x38]
  __asm push esi
  __asm call LAB_10098b8a
  __asm add esp, 0x1c
  __asm pop esi
  __asm ret
}



// Reference entry 11440620; body size 65 bytes.
#line 1 "ENTRY_11440620"

__declspec(naked) void FUN_11440620(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [eax + 4]
  __asm push esi
  __asm call LAB_100432d4
  __asm add esp, 4
  __asm cmp dword ptr [esp + 0x10], eax
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov eax, 0xffffbf80
  __asm pop esi
  __asm ret
  __asm push dword ptr [esp + 0x1c]
  __asm push dword ptr [esp + 0x18]
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x24]
  __asm push dword ptr [esp + 0x34]
  __asm push dword ptr [esp + 0x34]
  __asm push esi
  __asm call LAB_1000febb
  __asm add esp, 0x1c
  __asm pop esi
  __asm ret
}



// Reference entry 11440680; body size 67 bytes.
#line 1 "ENTRY_11440680"

__declspec(naked) void FUN_11440680(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [eax + 4]
  __asm push esi
  __asm call LAB_100432d4
  __asm mov ecx, dword ptr [esp + 0x1c]
  __asm add esp, 4
  __asm mov dword ptr [ecx], eax
  __asm cmp eax, dword ptr [esp + 0x1c]
  __asm _emit 0x76 __asm _emit 0x07
  __asm mov eax, 0xffffbc00
  __asm pop esi
  __asm ret
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x10]
  __asm push dword ptr [esp + 0x18]
  __asm push dword ptr [esp + 0x30]
  __asm push dword ptr [esp + 0x30]
  __asm push esi
  __asm call LAB_1001a2fd
  __asm add esp, 0x18
  __asm pop esi
  __asm ret
}



// Reference entry 11440700; body size 33 bytes.
#line 1 "ENTRY_11440700"

__declspec(naked) int FUN_11440700(void)

{
  __asm push esi
  __asm push 0x7c
  __asm push 1
  __asm call dword ptr [LAB_122fc7b0]
  __asm mov esi, eax
  __asm add esp, 8
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x0b
  __asm push esi
  __asm call LAB_1000695b
  __asm add esp, 4
  __asm mov eax, esi
  __asm pop esi
  __asm ret
}



// Reference entry 11440750; body size 51 bytes.
#line 1 "ENTRY_11440750"
int FUN_11440750(int a1, int a2) {

    int v1 = (int)(*(int *)(a1 + 4)); // (int)&FUN_11440758
    *(int*)a2 = (int)((int)(1));
    *(int*)(a2 + 4) = (int)((int)&DAT_11c00514);
    *(int*)(a2 + 12) = (int)(1);
    *(int*)(a2 + 16) = (int)((int)&DAT_11c0051c);
    *(int*)(a2 + 8) = (int)(v1 + 8);
    int result = (int)(v1 + 16); // (int)&FUN_1144077c
    *(int*)(a2 + 20) = (int)(result);
    return (int)(result);
}

// Reference entry 114407d0; body size 45 bytes.
#line 1 "ENTRY_114407d0"

__declspec(naked) void FUN_114407d0(void)

{
  __asm push dword ptr [esp + 0x18]
  __asm mov eax, dword ptr [esp + 8]
  __asm push dword ptr [esp + 0x18]
  __asm push dword ptr [esp + 0x18]
  __asm push dword ptr [esp + 0x18]
  __asm push dword ptr [eax + 4]
  __asm call LAB_1008d9ec
  __asm add esp, 0x14
  __asm mov ecx, 0xffffc700
  __asm cmp eax, 0xffffb400
  __asm cmove eax, ecx
  __asm ret
}



// Reference entry 11440810; body size 48 bytes.
#line 1 "ENTRY_11440810"
int FUN_11440810(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9) {

    return (int)(thunk_FUN_11453510(*(int *)(a1 + 4), a2, a3, a4, a5, a6, a7, a8, a9));
}

// Reference entry 11440850; body size 31 bytes.
#line 1 "ENTRY_11440850"
int FUN_11440850(int a1, int a2, int a3, int a4) {

    return (int)(FUN_1004068d(*(int *)(a1 + 4), *(int *)(a2 + 4), a3, a4));
}

// Reference entry 11440880; body size 36 bytes.
#line 1 "ENTRY_11440880"

__declspec(naked) int FUN_11440880(void)

{
  __asm push esi
  __asm push 0x80
  __asm push 1
  __asm call dword ptr [LAB_122fc7b0]
  __asm mov esi, eax
  __asm add esp, 8
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x0b
  __asm push esi
  __asm call LAB_10012cf1
  __asm add esp, 4
  __asm mov eax, esi
  __asm pop esi
  __asm ret
}



// Reference entry 114408d0; body size 31 bytes.
#line 1 "ENTRY_114408d0"
int FUN_114408d0(int a1, int a2) {

    int result = (int)(*(int *)(a1 + 4) + 104); // (int)&FUN_114408db
    *(int*)a2 = (int)((int)(2));
    *(int*)(a2 + 4) = (int)((int)&DAT_11c00524);
    *(int*)(a2 + 8) = (int)(result);
    return (int)(result);
}

// Reference entry 11442bf0; body size 86 bytes.
#line 1 "ENTRY_11442bf0"

__declspec(naked) void FUN_11442bf0(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [esp + 8]
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm lea edi, [edx + eax*4]
  __asm mov eax, dword ptr [esp + 0x18]
  __asm lea ebx, [edx + eax*4]
  __asm mov eax, dword ptr [ebx]
  __asm add dword ptr [edi], eax
  __asm mov eax, dword ptr [esp + 0x20]
  __asm mov ecx, dword ptr [edx + eax*4]
  __asm lea esi, [edx + eax*4]
  __asm xor ecx, dword ptr [edi]
  __asm mov eax, dword ptr [esp + 0x1c]
  __asm lea edx, [edx + eax*4]
  __asm rol ecx, 0x10
  __asm mov dword ptr [esi], ecx
  __asm add dword ptr [edx], ecx
  __asm mov eax, dword ptr [ebx]
  __asm xor eax, dword ptr [edx]
  __asm rol eax, 0xc
  __asm mov dword ptr [ebx], eax
  __asm add dword ptr [edi], eax
  __asm mov eax, dword ptr [esi]
  __asm xor eax, dword ptr [edi]
  __asm rol eax, 8
  __asm mov dword ptr [esi], eax
  __asm add dword ptr [edx], eax
  __asm mov eax, dword ptr [ebx]
  __asm xor eax, dword ptr [edx]
  __asm pop edi
  __asm rol eax, 7
  __asm pop esi
  __asm mov dword ptr [ebx], eax
  __asm pop ebx
  __asm ret
}



// Reference entry 11444110; body size 95 bytes.
#line 1 "ENTRY_11444110"

__declspec(naked) void FUN_11444110(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm sub esp, 8
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x14]
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov eax, dword ptr [esi + 0xc]
  __asm bswap eax
  __asm bswap ecx
  __asm shrd eax, ecx, 1
  __asm bswap eax
  __asm mov dword ptr [edx + 0xc], eax
  __asm _emit 0xd1 __asm _emit 0xe9
  __asm bswap ecx
  __asm mov dword ptr [edx + 8], ecx
  __asm movzx eax, byte ptr [esi + 7]
  __asm shl al, 7
  __asm or al, cl
  __asm mov byte ptr [edx + 8], al
  __asm mov ecx, dword ptr [esi]
  __asm mov eax, dword ptr [esi + 4]
  __asm bswap eax
  __asm bswap ecx
  __asm shrd eax, ecx, 1
  __asm bswap eax
  __asm _emit 0xd1 __asm _emit 0xe9
  __asm mov dword ptr [edx + 4], eax
  __asm bswap ecx
  __asm mov dword ptr [edx], ecx
  __asm movzx eax, byte ptr [esi + 0xf]
  __asm and al, 1
  __asm neg al
  __asm pop esi
  __asm sbb al, al
  __asm and al, 0xe1
  __asm xor al, cl
  __asm mov byte ptr [edx], al
  __asm add esp, 8
  __asm ret
}



// Reference entry 11446740; body size 36 bytes.
#line 1 "ENTRY_11446740"

__declspec(naked) int FUN_11446740(void)

{
  __asm push esi
  __asm push 0x190
  __asm push 1
  __asm call dword ptr [LAB_122fc7b0]
  __asm mov esi, eax
  __asm add esp, 8
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x0b
  __asm push esi
  __asm call LAB_1005d3b9
  __asm add esp, 4
  __asm mov eax, esi
  __asm pop esi
  __asm ret
}



// Reference entry 11446790; body size 36 bytes.
#line 1 "ENTRY_11446790"

__declspec(naked) int FUN_11446790(void)

{
  __asm push esi
  __asm push 0x80
  __asm push 1
  __asm call dword ptr [LAB_122fc7b0]
  __asm mov esi, eax
  __asm add esp, 8
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x0b
  __asm push esi
  __asm call LAB_100723c2
  __asm add esp, 4
  __asm mov eax, esi
  __asm pop esi
  __asm ret
}



// Reference entry 11446830; body size 38 bytes.
#line 1 "ENTRY_11446830"

__declspec(naked) int FUN_11446830(void)

{
  __asm push esi
  __asm push 0x118
  __asm push 1
  __asm call dword ptr [LAB_122fc7b0]
  __asm mov esi, eax
  __asm add esp, 8
  __asm test esi, esi
  __asm _emit 0x75 __asm _emit 0x02
  __asm pop esi
  __asm ret
  __asm push esi
  __asm call LAB_1001c053
  __asm add esp, 4
  __asm mov eax, esi
  __asm pop esi
  __asm ret
}



// Reference entry 114468f0; body size 36 bytes.
#line 1 "ENTRY_114468f0"

__declspec(naked) void FUN_114468f0(void)

{
  __asm push dword ptr [esp + 0x10]
  __asm push dword ptr [esp + 0x10]
  __asm push dword ptr [esp + 0x10]
  __asm push dword ptr [esp + 0x10]
  __asm call LAB_10077610
  __asm add esp, 0x10
  __asm mov ecx, 0xffff9f00
  __asm cmp eax, -0x51
  __asm cmove eax, ecx
  __asm ret
}



// Reference entry 11446920; body size 38 bytes.
#line 1 "ENTRY_11446920"

__declspec(naked) int FUN_11446920(void)

{
  __asm push esi
  __asm push 0x84
  __asm push 1
  __asm call dword ptr [LAB_122fc7b0]
  __asm mov esi, eax
  __asm add esp, 8
  __asm test esi, esi
  __asm _emit 0x75 __asm _emit 0x02
  __asm pop esi
  __asm ret
  __asm push esi
  __asm call LAB_1005f8c1
  __asm add esp, 4
  __asm mov eax, esi
  __asm pop esi
  __asm ret
}



// Reference entry 114469a0; body size 38 bytes.
#line 1 "ENTRY_114469a0"

__declspec(naked) int FUN_114469a0(void)

{
  __asm push esi
  __asm push 0xe8
  __asm push 1
  __asm call dword ptr [LAB_122fc7b0]
  __asm mov esi, eax
  __asm add esp, 8
  __asm test esi, esi
  __asm _emit 0x75 __asm _emit 0x02
  __asm pop esi
  __asm ret
  __asm push esi
  __asm call LAB_10099111
  __asm add esp, 4
  __asm mov eax, esi
  __asm pop esi
  __asm ret
}



// Reference entry 11446c90; body size 244 bytes.
#line 1 "ENTRY_11446c90"

__declspec(naked) void FUN_11446c90(void)

{
  __asm push ecx
  __asm cmp dword ptr [esp + 0x1c], 0x2a2a2a2a
  __asm _emit 0x75 __asm _emit 0x27
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x8d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm imul ecx, dword ptr [esp + 0x18]
  __asm push eax
  __asm mov eax, dword ptr [esp + 0x10]
  __asm lea eax, [eax + ecx*4]
  __asm push eax
  __asm push dword ptr [esp + 0x10]
  __asm call LAB_1148cded
  __asm add esp, 0xc
  __asm pop ecx
  __asm ret
  __asm mov edx, dword ptr [esp + 0xc]
  __asm xor ecx, ecx
  __asm mov dword ptr [esp], edx
  __asm mov dword ptr [esp + 0x1c], ecx
  __asm cmp dword ptr [esp + 0x14], ecx
  __asm jbe LAB_11446d82
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x14]
  __asm push ebp
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x14]
  __asm push edi
  __asm _emit 0x66 __asm _emit 0x66 __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm xor eax, ecx
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm xor ecx, eax
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm xor ecx, dword ptr [esp + 0x28]
  __asm xor eax, ecx
  __asm mov edi, eax
  __asm neg eax
  __asm _emit 0xd1 __asm _emit 0xef
  __asm neg edi
  __asm or edi, eax
  __asm shr edi, 0x1f
  __asm dec edi
  __asm cmp esi, edx
  __asm _emit 0x74 __asm _emit 0x42
  __asm test ebx, ebx
  __asm _emit 0x74 __asm _emit 0x3e
  __asm mov ebp, edx
  __asm mov eax, esi
  __asm sub ebp, esi
  __asm _emit 0x66 __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [LAB_122fa560]
  __asm lea eax, [eax + 4]
  __asm mov edx, dword ptr [eax + ebp - 4]
  __asm xor esi, edi
  __asm mov ecx, dword ptr [eax - 4]
  __asm not esi
  __asm and edx, edi
  __asm and ecx, esi
  __asm or edx, ecx
  __asm mov dword ptr [eax - 4], edx
  __asm sub ebx, 1
  __asm _emit 0x75 __asm _emit 0xde
  __asm mov edx, dword ptr [esp + 0x10]
  __asm mov ebx, dword ptr [esp + 0x20]
  __asm mov esi, dword ptr [esp + 0x18]
  __asm mov ecx, dword ptr [esp + 0x2c]
  __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x9d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc ecx
  __asm add edx, eax
  __asm mov dword ptr [esp + 0x2c], ecx
  __asm mov dword ptr [esp + 0x10], edx
  __asm cmp ecx, dword ptr [esp + 0x24]
  __asm jb LAB_11446cf0
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm pop ecx
  __asm ret
}



// Reference entry 11446e80; body size 44 bytes.
#line 1 "ENTRY_11446e80"

__declspec(naked) void FUN_11446e80(void)

{
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm xor eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm mov edx, dword ptr [LAB_122fa560]
  __asm xor ecx, eax
  __asm xor ecx, dword ptr [esp + 8]
  __asm xor edx, ecx
  __asm mov eax, edx
  __asm neg edx
  __asm _emit 0xd1 __asm _emit 0xe8
  __asm neg eax
  __asm or eax, edx
  __asm shr eax, 0x1f
  __asm dec eax
  __asm ret
}



// Reference entry 11446ec0; body size 93 bytes.
#line 1 "ENTRY_11446ec0"

__declspec(naked) void FUN_11446ec0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [LAB_122fa560]
  __asm mov edx, dword ptr [LAB_122fa560]
  __asm xor esi, dword ptr [esp + 8]
  __asm xor edx, dword ptr [esp + 0xc]
  __asm mov eax, edx
  __asm xor eax, esi
  __asm sub esi, edx
  __asm shr eax, 0x1f
  __asm xor eax, dword ptr [LAB_122fa560]
  __asm mov ecx, eax
  __asm neg eax
  __asm _emit 0xd1 __asm _emit 0xe9
  __asm neg ecx
  __asm or ecx, eax
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm shr ecx, 0x1f
  __asm neg ecx
  __asm xor eax, ecx
  __asm and ecx, edx
  __asm not eax
  __asm and esi, eax
  __asm or esi, ecx
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm shr esi, 0x1f
  __asm xor ecx, esi
  __asm mov eax, ecx
  __asm neg ecx
  __asm _emit 0xd1 __asm _emit 0xe8
  __asm neg eax
  __asm or eax, ecx
  __asm shr eax, 0x1f
  __asm dec eax
  __asm pop esi
  __asm ret
}



// Reference entry 11446f40; body size 94 bytes.
#line 1 "ENTRY_11446f40"

__declspec(naked) void FUN_11446f40(void)

{
  __asm push esi
  __asm mov esi, dword ptr [LAB_122fa560]
  __asm mov edx, dword ptr [LAB_122fa560]
  __asm xor esi, dword ptr [esp + 8]
  __asm xor edx, dword ptr [esp + 0xc]
  __asm mov eax, edx
  __asm xor eax, esi
  __asm sub esi, edx
  __asm shr eax, 0x1f
  __asm xor eax, dword ptr [LAB_122fa560]
  __asm mov ecx, eax
  __asm neg eax
  __asm _emit 0xd1 __asm _emit 0xe9
  __asm neg ecx
  __asm or ecx, eax
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm shr ecx, 0x1f
  __asm neg ecx
  __asm xor eax, ecx
  __asm and ecx, edx
  __asm not eax
  __asm and esi, eax
  __asm or esi, ecx
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm shr esi, 0x1f
  __asm xor ecx, esi
  __asm mov eax, ecx
  __asm neg ecx
  __asm _emit 0xd1 __asm _emit 0xe8
  __asm neg eax
  __asm or eax, ecx
  __asm shr eax, 0x1f
  __asm neg eax
  __asm pop esi
  __asm ret
}



// Reference entry 11446fc0; body size 45 bytes.
#line 1 "ENTRY_11446fc0"

__declspec(naked) void FUN_11446fc0(void)

{
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm xor eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm mov edx, dword ptr [LAB_122fa560]
  __asm xor ecx, eax
  __asm xor ecx, dword ptr [esp + 8]
  __asm xor edx, ecx
  __asm mov eax, edx
  __asm neg edx
  __asm _emit 0xd1 __asm _emit 0xe8
  __asm neg eax
  __asm or eax, edx
  __asm shr eax, 0x1f
  __asm neg eax
  __asm ret
}



// Reference entry 114472d0; body size 180 bytes.
#line 1 "ENTRY_114472d0"

__declspec(naked) void FUN_114472d0(void)

{
  __asm push ecx
  __asm xor ecx, ecx
  __asm mov dword ptr [esp], ecx
  __asm cmp dword ptr [esp + 0x14], ecx
  __asm jbe LAB_11447382
  __asm mov edx, dword ptr [esp + 0xc]
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x14]
  __asm push ebp
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x14]
  __asm push edi
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm xor eax, ecx
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm xor ecx, eax
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm xor ecx, dword ptr [esp + 0x28]
  __asm xor eax, ecx
  __asm mov edi, eax
  __asm neg eax
  __asm _emit 0xd1 __asm _emit 0xef
  __asm neg edi
  __asm or edi, eax
  __asm shr edi, 0x1f
  __asm dec edi
  __asm cmp esi, edx
  __asm _emit 0x74 __asm _emit 0x42
  __asm test ebx, ebx
  __asm _emit 0x74 __asm _emit 0x3e
  __asm mov ebp, edx
  __asm mov eax, esi
  __asm sub ebp, esi
  __asm _emit 0x66 __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [LAB_122fa560]
  __asm lea eax, [eax + 4]
  __asm mov edx, dword ptr [eax + ebp - 4]
  __asm xor esi, edi
  __asm mov ecx, dword ptr [eax - 4]
  __asm not esi
  __asm and edx, edi
  __asm and ecx, esi
  __asm or edx, ecx
  __asm mov dword ptr [eax - 4], edx
  __asm sub ebx, 1
  __asm _emit 0x75 __asm _emit 0xde
  __asm mov edx, dword ptr [esp + 0x1c]
  __asm mov ebx, dword ptr [esp + 0x20]
  __asm mov esi, dword ptr [esp + 0x18]
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x9d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc ecx
  __asm add edx, eax
  __asm mov dword ptr [esp + 0x10], ecx
  __asm mov dword ptr [esp + 0x1c], edx
  __asm cmp ecx, dword ptr [esp + 0x24]
  __asm jb LAB_114472f0
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm pop ecx
  __asm ret
}



// Reference entry 1144abb0; body size 65 bytes.
#line 1 "ENTRY_1144abb0"

__declspec(naked) void FUN_1144abb0(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 8]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x32
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x18]
  __asm test ebp, ebp
  __asm _emit 0x74 __asm _emit 0x28
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x14]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x1e
  __asm push edi
  __asm cmp esi, ebp
  __asm mov edi, esi
  __asm cmova edi, ebp
  __asm push edi
  __asm push eax
  __asm push ebx
  __asm call LAB_1148cded
  __asm mov eax, dword ptr [esp + 0x28]
  __asm add esp, 0xc
  __asm add ebx, edi
  __asm sub esi, edi
  __asm _emit 0x75 __asm _emit 0xe4
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret
}



// Reference entry 1144ac10; body size 108 bytes.
#line 1 "ENTRY_1144ac10"

__declspec(naked) void FUN_1144ac10(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm push edi
  __asm lea esi, [eax + 8]
  __asm mov edi, dword ptr [eax + 4]
  __asm add edi, dword ptr [esi]
  __asm cmp dword ptr [eax], 0x30
  __asm _emit 0x74 __asm _emit 0x08
  __asm pop edi
  __asm mov eax, 0xffffe11e
  __asm pop esi
  __asm ret
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x14]
  __asm push ebp
  __asm push 4
  __asm lea ebp, [ebx + 4]
  __asm push ebp
  __asm push edi
  __asm push esi
  __asm call LAB_10040b38
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x1c
  __asm push dword ptr [esp + 0x1c]
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [ebx + 8], eax
  __asm mov eax, dword ptr [ebp]
  __asm add dword ptr [esi], eax
  __asm push edi
  __asm push esi
  __asm call LAB_10032e5c
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0a
  __asm pop ebp
  __asm pop ebx
  __asm pop edi
  __asm add eax, 0xffffe180
  __asm pop esi
  __asm ret
  __asm pop ebp
  __asm xor eax, eax
  __asm mov ecx, 0xffffe11a
  __asm cmp dword ptr [esi], edi
  __asm pop ebx
  __asm pop edi
  __asm cmovne eax, ecx
  __asm pop esi
  __asm ret
}



// Reference entry 1144bb70; body size 31 bytes.
#line 1 "ENTRY_1144bb70"
int FUN_1144bb70(int a1, int result, uint a3) {

    *(short*)(a1 + 4) = (short)(1);
    *(short*)(a1 + 6) = (short)((short)(a3 / 4));
    *(int*)a1 = (int)((int)(result));
    return (int)(result);
}

// Reference entry 1144c100; body size 162 bytes.
#line 1 "ENTRY_1144c100"

__declspec(naked) void FUN_1144c100(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov cx, word ptr [esp + 8]
  __asm push esi
  __asm push edi
  __asm cmp eax, 0x4800100
  __asm _emit 0x74 __asm _emit 0x07
  __asm cmp eax, 0x5000500
  __asm _emit 0x75 __asm _emit 0x0a
  __asm mov edx, 0x2004
  __asm cmp cx, dx
  __asm _emit 0x74 __asm _emit 0x7a
  __asm mov edi, 0x2400
  __asm lea esi, [edi + 6]
  __asm lea edx, [edi + 3]
  __asm cmp eax, 0x5400100
  __asm _emit 0x74 __asm _emit 0x0e
  __asm cmp eax, 0x5400200
  __asm _emit 0x74 __asm _emit 0x07
  __asm cmp eax, 0x4c01300
  __asm _emit 0x75 __asm _emit 0x0f
  __asm cmp cx, di
  __asm _emit 0x74 __asm _emit 0x55
  __asm cmp cx, si
  __asm _emit 0x74 __asm _emit 0x50
  __asm cmp cx, dx
  __asm _emit 0x74 __asm _emit 0x4b
  __asm cmp eax, 0x4c01000
  __asm _emit 0x74 __asm _emit 0x23
  __asm cmp eax, 0x440ff00
  __asm _emit 0x74 __asm _emit 0x1c
  __asm cmp eax, 0x4404400
  __asm _emit 0x74 __asm _emit 0x15
  __asm cmp eax, 0x4404000
  __asm _emit 0x74 __asm _emit 0x0e
  __asm cmp eax, 0x4404100
  __asm _emit 0x74 __asm _emit 0x07
  __asm cmp eax, 0x3c00200
  __asm _emit 0x75 __asm _emit 0x19
  __asm cmp cx, di
  __asm _emit 0x74 __asm _emit 0x1c
  __asm cmp cx, si
  __asm _emit 0x74 __asm _emit 0x17
  __asm mov eax, 0x2301
  __asm cmp cx, ax
  __asm _emit 0x74 __asm _emit 0x0d
  __asm cmp cx, dx
  __asm _emit 0x74 __asm _emit 0x08
  __asm pop edi
  __asm mov eax, 0xffffff7a
  __asm pop esi
  __asm ret
  __asm pop edi
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 1144ce10; body size 281 bytes.
#line 1 "ENTRY_1144ce10"

__declspec(naked) void FUN_1144ce10(void)

{
  __asm push ecx
  __asm push ebx
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov edi, dword ptr [ebp]
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x06
  __asm mov edi, dword ptr [edi + 4]
  __asm and edi, 0x1f
  __asm mov eax, dword ptr [esp + 0x24]
  __asm mov ebx, dword ptr [esp + 0x1c]
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ebx, ebx
  __asm _emit 0x75 __asm _emit 0x07
  __asm pop edi
  __asm pop ebp
  __asm xor eax, eax
  __asm pop ebx
  __asm pop ecx
  __asm ret
  __asm mov eax, dword ptr [ebp + 0x24]
  __asm push esi
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x6f
  __asm mov esi, edi
  __asm sub esi, eax
  __asm cmp ebx, esi
  __asm cmovb esi, ebx
  __asm add eax, 0x14
  __asm push esi
  __asm push dword ptr [esp + 0x20]
  __asm add eax, ebp
  __asm push eax
  __asm call LAB_1148cded
  __asm mov ecx, dword ptr [esp + 0x28]
  __asm sub ebx, esi
  __asm add dword ptr [ebp + 0x24], esi
  __asm add ecx, esi
  __asm mov esi, dword ptr [esp + 0x30]
  __asm add esp, 0xc
  __asm mov dword ptr [esp + 0x18], ecx
  __asm cmp dword ptr [ebp + 0x24], edi
  __asm _emit 0x75 __asm _emit 0x47
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm push esi
  __asm push edi
  __asm lea eax, [ebp + 0x14]
  __asm push eax
  __asm push ebp
  __asm call LAB_100531c0
  __asm push eax
  __asm call LAB_1006e8ee
  __asm add esp, 0x18
  __asm test eax, eax
  __asm jne LAB_1144cf23
  __asm mov ecx, dword ptr [esp + 0x28]
  __asm mov eax, dword ptr [esp + 0x10]
  __asm add esi, eax
  __asm add dword ptr [ecx], eax
  __asm mov ecx, dword ptr [esp + 0x18]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xeb __asm _emit 0x0c
  __asm mov ecx, dword ptr [esp + 0x1c]
  __asm mov esi, dword ptr [esp + 0x24]
  __asm mov dword ptr [esp + 0x18], ecx
  __asm cmp ebx, edi
  __asm _emit 0x72 __asm _emit 0x3a __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm push esi
  __asm push edi
  __asm push ecx
  __asm push ebp
  __asm call LAB_100531c0
  __asm push eax
  __asm call LAB_1006e8ee
  __asm add esp, 0x18
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x38
  __asm mov edx, dword ptr [esp + 0x28]
  __asm sub ebx, edi
  __asm mov ecx, dword ptr [esp + 0x18]
  __asm mov eax, dword ptr [esp + 0x10]
  __asm add ecx, edi
  __asm add esi, eax
  __asm mov dword ptr [esp + 0x18], ecx
  __asm add dword ptr [edx], eax
  __asm cmp ebx, edi
  __asm _emit 0x73 __asm _emit 0xc9
  __asm test ebx, ebx
  __asm _emit 0x74 __asm _emit 0x16
  __asm mov eax, dword ptr [ebp + 0x24]
  __asm push ebx
  __asm add eax, 0x14
  __asm push ecx
  __asm add eax, ebp
  __asm push eax
  __asm call LAB_1148cded
  __asm add esp, 0xc
  __asm add dword ptr [ebp + 0x24], ebx
  __asm xor eax, eax
  __asm pop esi
  __asm pop edi
  __asm pop ebp
  __asm pop ebx
  __asm pop ecx
  __asm ret
}



// Reference entry 1144dad0; body size 45 bytes.
#line 1 "ENTRY_1144dad0"

__declspec(naked) void FUN_1144dad0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm cmp eax, ecx
  __asm _emit 0x76 __asm _emit 0x06
  __asm mov eax, 0xffffff79
  __asm ret
  __asm sub ecx, eax
  __asm cmp ecx, dword ptr [esp + 0x10]
  __asm _emit 0x76 __asm _emit 0x06
  __asm mov eax, 0xffffff76
  __asm ret
  __asm mov eax, dword ptr [esp + 0x14]
  __asm add ecx, dword ptr [esp + 8]
  __asm mov dword ptr [eax], ecx
  __asm xor eax, eax
  __asm ret
}



// Reference entry 1144e5e0; body size 94 bytes.
#line 1 "ENTRY_1144e5e0"

__declspec(naked) void FUN_1144e5e0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push 0
  __asm movzx eax, word ptr [esi + 2]
  __asm push eax
  __asm movzx eax, word ptr [esi]
  __asm push eax
  __asm push 0x3c00200
  __asm call LAB_1002ca07
  __asm mov ecx, eax
  __asm add esp, 0x10
  __asm test ecx, ecx
  __asm _emit 0x75 __asm _emit 0x07
  __asm mov eax, 0xffffff7a
  __asm pop esi
  __asm ret
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm push ecx
  __asm add edi, 8
  __asm push edi
  __asm call LAB_100885af
  __asm add esp, 8
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x12
  __asm movzx eax, word ptr [esi + 2]
  __asm push eax
  __asm push dword ptr [esp + 0x18]
  __asm push edi
  __asm call LAB_1009aa43
  __asm add esp, 0xc
  __asm push eax
  __asm call LAB_1006e8ee
  __asm add esp, 4
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 1144e660; body size 85 bytes.
#line 1 "ENTRY_1144e660"

__declspec(naked) void FUN_1144e660(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov eax, ecx
  __asm mov edx, dword ptr [esp + 4]
  __asm and eax, 0xffc07fff
  __asm mov dword ptr [edx], ecx
  __asm cmp eax, 0x3c00200
  __asm _emit 0x75 __asm _emit 0x0f
  __asm lea eax, [edx + 8]
  __asm push eax
  __asm call LAB_1003e284
  __asm add esp, 4
  __asm xor eax, eax
  __asm ret
  __asm and ecx, 0x7fc00000
  __asm cmp ecx, 0x3800000
  __asm _emit 0x75 __asm _emit 0x0a __asm _emit 0xc7 __asm _emit 0x42 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm xor eax, eax
  __asm ret
  __asm push 0x178
  __asm push 0
  __asm push edx
  __asm call LAB_1148ce0b
  __asm add esp, 0xc
  __asm mov eax, 0xffffff7a
  __asm ret
}



// Reference entry 1144eb00; body size 38 bytes.
#line 1 "ENTRY_1144eb00"

__declspec(naked) void FUN_1144eb00(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push 0x80
  __asm lea eax, [esi + 0xf0]
  __asm push eax
  __asm call LAB_100755db
  __asm add esp, 8
  __asm lea eax, [esi + 8]
  __asm pop esi
  __asm mov dword ptr [esp + 4], eax
  __asm jmp LAB_10095f9d
}



// Reference entry 1144f510; body size 252 bytes.
#line 1 "ENTRY_1144f510"

__declspec(naked) void FUN_1144f510(void)

{
  __asm push edi
  __asm mov edi, dword ptr [esp + 8]
  __asm cmp dword ptr [edi], 0xa000100
  __asm jne LAB_1144f605
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x14]
  __asm cmp esi, 0xa
  __asm _emit 0x75 __asm _emit 0x29
  __asm cmp dword ptr [edi + 0xc], 0
  __asm _emit 0x75 __asm _emit 0x23
  __asm mov ecx, dword ptr [edi + 0x160]
  __asm lea eax, [ecx + 3]
  __asm cmp eax, 0x150
  __asm _emit 0x77 __asm _emit 0x29
  __asm mov word ptr [ecx + edi + 0x10], 3
  __asm mov byte ptr [ecx + edi + 0x12], 0x17
  __asm add dword ptr [edi + 0x160], 3
  __asm mov ebx, dword ptr [esp + 0x1c]
  __asm mov ecx, dword ptr [edi + 0x160]
  __asm lea eax, [ebx + 1]
  __asm add eax, ecx
  __asm cmp eax, 0x150
  __asm _emit 0x76 __asm _emit 0x09
  __asm pop esi
  __asm pop ebx
  __asm mov eax, 0xffffff76
  __asm pop edi
  __asm ret
  __asm mov byte ptr [ecx + edi + 0x10], bl
  __asm mov eax, dword ptr [edi + 0x160]
  __asm inc eax
  __asm mov dword ptr [edi + 0x160], eax
  __asm add eax, 0x10
  __asm push ebx
  __asm push dword ptr [esp + 0x1c]
  __asm add eax, edi
  __asm push eax
  __asm call LAB_1148cded
  __asm mov eax, dword ptr [edi + 0x160]
  __asm add esp, 0xc
  __asm add eax, ebx
  __asm mov dword ptr [edi + 0x160], eax
  __asm cmp esi, 6
  __asm _emit 0x75 __asm _emit 0x13
  __asm push eax
  __asm lea esi, [edi + 0x10]
  __asm lea eax, [edi + 0x168]
  __asm push esi
  __asm push eax
  __asm call LAB_1003cdfd
  __asm _emit 0xeb __asm _emit 0x16
  __asm cmp esi, 0xc
  __asm _emit 0x75 __asm _emit 0x3c
  __asm push eax
  __asm lea esi, [edi + 0x10]
  __asm lea eax, [edi + 0x168]
  __asm push esi
  __asm push eax
  __asm call LAB_1000981d
  __asm push 0x150
  __asm push esi
  __asm mov ebx, eax
  __asm call LAB_100755db
  __asm add esp, 0x14
  __asm _emit 0xc7 __asm _emit 0x87 __asm _emit 0x60 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ebx, ebx
  __asm _emit 0x74 __asm _emit 0x0d
  __asm push ebx
  __asm call LAB_1144f270
  __asm add esp, 4
  __asm pop esi
  __asm pop ebx
  __asm pop edi
  __asm ret
  __asm pop esi
  __asm pop ebx
  __asm xor eax, eax
  __asm pop edi
  __asm ret
  __asm mov eax, 0xffffff7a
  __asm pop edi
  __asm ret
}



// Reference entry 1144f7d0; body size 303 bytes.
#line 1 "ENTRY_1144f7d0"

__declspec(naked) void FUN_1144f7d0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm cmp dword ptr [esi], 0xa000100
  __asm jne LAB_1144f8f8
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm cmp edi, 1
  __asm _emit 0x75 __asm _emit 0x32
  __asm push 0
  __asm push offset LAB_10044021
  __asm lea eax, [esi + 0x160]
  __asm push eax
  __asm push 0x150
  __asm lea eax, [esi + 0x10]
  __asm push eax
  __asm lea eax, [esi + 0x168]
  __asm push eax
  __asm call LAB_1003f2a6
  __asm add esp, 0x18
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x37
  __asm mov dword ptr [esi + 0x164], eax
  __asm _emit 0xeb __asm _emit 0x4f
  __asm cmp edi, 7
  __asm _emit 0x75 __asm _emit 0x4a
  __asm push 0
  __asm push offset LAB_10044021
  __asm lea eax, [esi + 0x160]
  __asm push eax
  __asm push 0x150
  __asm lea eax, [esi + 0x10]
  __asm push eax
  __asm lea eax, [esi + 0x168]
  __asm push eax
  __asm call LAB_10093ef5
  __asm add esp, 0x18
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0c
  __asm push eax
  __asm call LAB_1144f270
  __asm add esp, 4
  __asm pop edi
  __asm pop esi
  __asm ret
  __asm xor eax, eax
  __asm mov ecx, 3
  __asm cmp dword ptr [esi + 0xc], 1
  __asm cmove eax, ecx
  __asm mov dword ptr [esi + 0x164], eax
  __asm mov eax, dword ptr [esi + 0x164]
  __asm push ebx
  __asm movzx ebx, byte ptr [eax + esi + 0x10]
  __asm lea ecx, [eax + 1]
  __asm mov dword ptr [esi + 0x164], ecx
  __asm lea eax, [ecx + ebx]
  __asm cmp eax, dword ptr [esi + 0x160]
  __asm _emit 0x76 __asm _emit 0x09
  __asm pop ebx
  __asm pop edi
  __asm mov eax, 0xffffff68
  __asm pop esi
  __asm ret
  __asm cmp dword ptr [esp + 0x1c], ebx
  __asm _emit 0x73 __asm _emit 0x09
  __asm pop ebx
  __asm pop edi
  __asm mov eax, 0xffffff76
  __asm pop esi
  __asm ret
  __asm lea eax, [esi + 0x10]
  __asm push ebx
  __asm add eax, ecx
  __asm push eax
  __asm push dword ptr [esp + 0x20]
  __asm call LAB_1148cded
  __asm mov eax, dword ptr [esp + 0x2c]
  __asm add esp, 0xc
  __asm mov dword ptr [eax], ebx
  __asm add dword ptr [esi + 0x164], ebx
  __asm cmp edi, 6
  __asm _emit 0x74 __asm _emit 0x05
  __asm cmp edi, 9
  __asm _emit 0x75 __asm _emit 0x25
  __asm lea eax, [esi + 0x10]
  __asm push 0x150
  __asm push eax
  __asm call LAB_100755db
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x60 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x64 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ebx
  __asm pop edi
  __asm xor eax, eax
  __asm pop esi
  __asm ret
  __asm mov eax, 0xffffff7a
  __asm pop esi
  __asm ret
}



// Reference entry 1144fd90; body size 74 bytes.
#line 1 "ENTRY_1144fd90"

__declspec(naked) void FUN_1144fd90(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm lea esi, [edi + 0x168]
  __asm push esi
  __asm call LAB_1005b4dd
  __asm push dword ptr [edi + 8]
  __asm push dword ptr [edi + 4]
  __asm push 3
  __asm push 9
  __asm push dword ptr [edi + 0xc]
  __asm push esi
  __asm call LAB_100970eb
  __asm push dword ptr [edi + 8]
  __asm mov esi, eax
  __asm push dword ptr [edi + 4]
  __asm call LAB_100755db
  __asm add esp, 0x24
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x0c
  __asm push esi
  __asm call LAB_1144f270
  __asm add esp, 4
  __asm pop edi
  __asm pop esi
  __asm ret
  __asm pop edi
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 11450980; body size 63 bytes.
#line 1 "ENTRY_11450980"

__declspec(naked) void FUN_11450980(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm xor ecx, ecx
  __asm cmp esi, 4
  __asm _emit 0x77 __asm _emit 0x2c
  __asm xor edx, edx
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x1c
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm movzx eax, byte ptr [edx + edi]
  __asm inc edx
  __asm shl ecx, 8
  __asm or ecx, eax
  __asm cmp edx, esi
  __asm _emit 0x72 __asm _emit 0xf2
  __asm pop edi
  __asm cmp ecx, 0x7fffffff
  __asm _emit 0x77 __asm _emit 0x0a
  __asm mov eax, dword ptr [esp + 0x10]
  __asm pop esi
  __asm mov dword ptr [eax], ecx
  __asm xor eax, eax
  __asm ret
  __asm mov eax, 0xffffff7a
  __asm pop esi
  __asm ret
}



// Reference entry 114509d0; body size 56 bytes.
#line 1 "ENTRY_114509d0"

__declspec(naked) void FUN_114509d0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm and eax, 0xffffff00
  __asm cmp eax, 0x6001300
  __asm _emit 0x75 __asm _emit 0x04
  __asm or eax, 0xffffffff
  __asm ret
  __asm push dword ptr [esp + 8]
  __asm call LAB_100432d4
  __asm mov edx, dword ptr [esp + 0x10]
  __asm mov ecx, 0xfffffffe
  __asm sub ecx, edx
  __asm add esp, 4
  __asm add eax, ecx
  __asm _emit 0x79 __asm _emit 0x03
  __asm xor eax, eax
  __asm ret
  __asm cmp eax, edx
  __asm cmovg eax, edx
  __asm ret
}



// Reference entry 11451d70; body size 36 bytes.
#line 1 "ENTRY_11451d70"

__declspec(naked) int FUN_11451d70(void)

{
  __asm push ebx
  __asm push offset LAB_122fb15c
  __asm call dword ptr [LAB_12126b50]
  __asm mov bl, byte ptr [LAB_122faa80]
  __asm push offset LAB_122fb15c
  __asm call dword ptr [LAB_12126b54]
  __asm add esp, 8
  __asm mov al, bl
  __asm pop ebx
  __asm ret
}



// Reference entry 11451f80; body size 31 bytes.
#line 1 "ENTRY_11451f80"

__declspec(naked) void FUN_11451f80(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp dword ptr [ecx + 0x18], 2
  __asm _emit 0x75 __asm _emit 0x0f
  __asm mov eax, dword ptr [ecx + 0x1c]
  __asm cmp eax, -1
  __asm _emit 0x73 __asm _emit 0x07
  __asm inc eax
  __asm mov dword ptr [ecx + 0x1c], eax
  __asm xor eax, eax
  __asm ret
  __asm mov eax, 0xffffff69
  __asm ret
}



// Reference entry 11452940; body size 49 bytes.
#line 1 "ENTRY_11452940"

__declspec(naked) void FUN_11452940(void)

{
  __asm mov eax, dword ptr [LAB_122fa560]
  __asm xor al, byte ptr [esp + 0xc]
  __asm movzx ecx, byte ptr [esp + 4]
  __asm movzx edx, al
  __asm movzx eax, byte ptr [esp + 8]
  __asm sub eax, edx
  __asm sub edx, ecx
  __asm mov ecx, dword ptr [LAB_122fa560]
  __asm xor cl, byte ptr [esp + 0x10]
  __asm shr eax, 8
  __asm shr edx, 8
  __asm or al, dl
  __asm not al
  __asm and al, cl
  __asm ret
}



// Reference entry 11454440; body size 61 bytes.
#line 1 "ENTRY_11454440"

__declspec(naked) void FUN_11454440(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm xor eax, eax
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x2a
  __asm mov edx, dword ptr [esp + 0x18]
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x18]
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x80 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp eax, edx
  __asm _emit 0x73 __asm _emit 0x05
  __asm mov cl, byte ptr [eax + ebx]
  __asm _emit 0xeb __asm _emit 0x08
  __asm setne cl
  __asm dec cl
  __asm and cl, 0x80
  __asm mov byte ptr [edi + eax], cl
  __asm inc eax
  __asm cmp eax, esi
  __asm _emit 0x72 __asm _emit 0xe7
  __asm pop ebx
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 1145b220; body size 114 bytes.
#line 1 "ENTRY_1145b220"

__declspec(naked) void FUN_1145b220(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x10]
  __asm push ebp
  __asm push esi
  __asm push edi
  __asm test ebx, ebx
  __asm _emit 0x74 __asm _emit 0x4e
  __asm mov ebp, dword ptr [esp + 0x24]
  __asm mov eax, dword ptr [esp + 0x20]
  __asm xor edi, edi
  __asm test ebp, ebp
  __asm _emit 0x7e __asm _emit 0x34
  __asm nop word ptr [eax + eax]
  __asm mov ecx, dword ptr [ebx]
  __asm mov esi, ecx
  __asm lea edx, [esi + 1]
  __asm mov al, byte ptr [esi]
  __asm inc esi
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0xf9
  __asm sub esi, edx
  __asm push esi
  __asm push dword ptr [esp + 0x18]
  __asm push ecx
  __asm call LAB_10053a80
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x1f
  __asm inc edi
  __asm add ebx, 4
  __asm cmp edi, ebp
  __asm _emit 0x7c __asm _emit 0xd6
  __asm mov eax, dword ptr [esp + 0x20]
  __asm mov ebx, eax
  __asm xor eax, eax
  __asm mov dword ptr [esp + 0x20], eax
  __asm test ebx, ebx
  __asm _emit 0x75 __asm _emit 0xba
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm xor eax, eax
  __asm pop ebx
  __asm ret
  __asm mov eax, dword ptr [esp + 0x18]
  __asm mov dword ptr [eax], edi
  __asm mov eax, dword ptr [esp + 0x14]
  __asm pop edi
  __asm add eax, esi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret
}



// Reference entry 1145c6b0; body size 86 bytes.
#line 1 "ENTRY_1145c6b0"

__declspec(naked) void FUN_1145c6b0(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [LAB_122fc1e8]
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm push 0
  __asm push 0
  __asm push -1
  __asm push edi
  __asm push 0
  __asm push 0xfde9
  __asm call ebx
  __asm mov esi, eax
  __asm mov eax, dword ptr [esp + 0x1c]
  __asm cmp esi, eax
  __asm _emit 0x76 __asm _emit 0x11
  __asm lea ecx, [esi + esi]
  __asm push ecx
  __asm call dword ptr [LAB_122fc7bc]
  __asm add esp, 4
  __asm mov ecx, eax
  __asm _emit 0xeb __asm _emit 0x06
  __asm mov ecx, dword ptr [esp + 0x18]
  __asm mov esi, eax
  __asm mov eax, dword ptr [esp + 0x14]
  __asm push esi
  __asm push ecx
  __asm push -1
  __asm push edi
  __asm push 0
  __asm push 0xfde9
  __asm mov dword ptr [eax], ecx
  __asm call ebx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret
}



// Reference entry 1145d710; body size 73 bytes.
#line 1 "ENTRY_1145d710"

__declspec(naked) void FUN_1145d710(void)

{
  __asm mov cl, byte ptr [esp + 4]
  __asm lea eax, [ecx - 0x30]
  __asm cmp al, 9
  __asm _emit 0x77 __asm _emit 0x0f
  __asm mov eax, dword ptr [esp + 8]
  __asm sub cl, 0x30
  __asm mov byte ptr [eax], cl
  __asm mov eax, 1
  __asm ret
  __asm lea eax, [ecx - 0x61]
  __asm cmp al, 5
  __asm _emit 0x77 __asm _emit 0x0f
  __asm mov eax, dword ptr [esp + 8]
  __asm sub cl, 0x57
  __asm mov byte ptr [eax], cl
  __asm mov eax, 1
  __asm ret
  __asm lea eax, [ecx - 0x41]
  __asm cmp al, 5
  __asm _emit 0x77 __asm _emit 0x0f
  __asm mov eax, dword ptr [esp + 8]
  __asm sub cl, 0x37
  __asm mov byte ptr [eax], cl
  __asm mov eax, 1
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 1145e9c0; body size 61 bytes.
#line 1 "ENTRY_1145e9c0"

__declspec(naked) void FUN_1145e9c0(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x10]
  __asm push ebp
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x24]
  __asm push dword ptr [edi]
  __asm push dword ptr [esp + 0x24]
  __asm push ebx
  __asm push dword ptr [esp + 0x24]
  __asm push esi
  __asm call LAB_10053396
  __asm mov ecx, dword ptr [esi + 4]
  __asm add esp, 0x14
  __asm mov ebp, eax
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x60
  __asm cmp byte ptr [esi + 9], 0
  __asm _emit 0x74 __asm _emit 0x64
  __asm and ebx, 3
  __asm jmp dword ptr [ebx*4 + LAB_1145ea6c]
}



// Reference entry 1145f280; body size 68 bytes.
#line 1 "ENTRY_1145f280"

__declspec(naked) void FUN_1145f280(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 8]
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x1c]
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x20]
  __asm push dword ptr [ebp]
  __asm push edi
  __asm push dword ptr [esp + 0x24]
  __asm push dword ptr [esp + 0x24]
  __asm push ebx
  __asm call LAB_10072e76
  __asm mov ecx, dword ptr [ebp]
  __asm mov esi, eax
  __asm sub ecx, esi
  __asm push ecx
  __asm lea ecx, [esi + edi]
  __asm push ecx
  __asm push ebx
  __asm call LAB_1145eb70
  __asm add esp, 0x20
  __asm add eax, esi
  __asm mov dword ptr [ebp], eax
  __asm mov al, byte ptr [ebx + 8]
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret
}



// Reference entry 11460650; body size 44 bytes.
#line 1 "ENTRY_11460650"

__declspec(naked) void FUN_11460650(void)

{
  __asm mov eax, dword ptr [esp + 0x10]
  __asm cmp eax, 0x84
  __asm _emit 0x73 __asm _emit 0x1b
  __asm push offset LAB_11c04d50
  __asm push eax
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_11465140
  __asm add esp, 0x14
  __asm ret
  __asm mov eax, 1
  __asm ret
}



// Reference entry 11460690; body size 189 bytes.
#line 1 "ENTRY_11460690"

__declspec(naked) void FUN_11460690(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, ecx
  __asm shr eax, 0x18
  __asm cmp eax, 0x20
  __asm _emit 0x74 __asm _emit 0x26
  __asm cmp eax, 0x30
  __asm _emit 0x72 __asm _emit 0x05
  __asm cmp eax, 0x39
  __asm _emit 0x76 __asm _emit 0x1c
  __asm cmp eax, 0x41
  __asm _emit 0x72 __asm _emit 0x05
  __asm cmp eax, 0x5a
  __asm _emit 0x76 __asm _emit 0x12
  __asm cmp eax, 0x61
  __asm jb LAB_1146074a
  __asm cmp eax, 0x7a
  __asm ja LAB_1146074a
  __asm mov eax, ecx
  __asm and eax, 0xff0000
  __asm cmp eax, 0x200000
  __asm _emit 0x74 __asm _emit 0x2a
  __asm cmp eax, 0x300000
  __asm _emit 0x72 __asm _emit 0x07
  __asm cmp eax, 0x390000
  __asm _emit 0x76 __asm _emit 0x1c
  __asm cmp eax, 0x410000
  __asm _emit 0x72 __asm _emit 0x07
  __asm cmp eax, 0x5a0000
  __asm _emit 0x76 __asm _emit 0x0e
  __asm cmp eax, 0x610000
  __asm _emit 0x72 __asm _emit 0x55
  __asm cmp eax, 0x7a0000
  __asm _emit 0x77 __asm _emit 0x4e
  __asm mov eax, ecx
  __asm and eax, 0xff00
  __asm cmp eax, 0x2000
  __asm _emit 0x74 __asm _emit 0x2a
  __asm cmp eax, 0x3000
  __asm _emit 0x72 __asm _emit 0x07
  __asm cmp eax, 0x3900
  __asm _emit 0x76 __asm _emit 0x1c
  __asm cmp eax, 0x4100
  __asm _emit 0x72 __asm _emit 0x07
  __asm cmp eax, 0x5a00
  __asm _emit 0x76 __asm _emit 0x0e
  __asm cmp eax, 0x6100
  __asm _emit 0x72 __asm _emit 0x1d
  __asm cmp eax, 0x7a00
  __asm _emit 0x77 __asm _emit 0x16
  __asm movzx eax, cl
  __asm push eax
  __asm call LAB_11460780
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x06
  __asm mov eax, 1
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 114655b0; body size 105 bytes.
#line 1 "ENTRY_114655b0"

__declspec(naked) void FUN_114655b0(void)

{
  __asm mov edx, dword ptr [esp + 8]
  __asm mov eax, edx
  __asm mov ecx, dword ptr [esp + 4]
  __asm shr eax, 0x18
  __asm mov byte ptr [ecx], 0x27
  __asm cmp eax, 0x20
  __asm _emit 0x72 __asm _emit 0x05
  __asm cmp eax, 0x7e
  __asm _emit 0x76 __asm _emit 0x02
  __asm mov al, 0x3f
  __asm mov byte ptr [ecx + 1], al
  __asm mov eax, edx
  __asm shr eax, 0x10
  __asm movzx eax, al
  __asm cmp eax, 0x20
  __asm _emit 0x72 __asm _emit 0x05
  __asm cmp eax, 0x7e
  __asm _emit 0x76 __asm _emit 0x02
  __asm mov al, 0x3f
  __asm mov byte ptr [ecx + 2], al
  __asm mov eax, edx
  __asm shr eax, 8
  __asm movzx eax, al
  __asm cmp eax, 0x20
  __asm _emit 0x72 __asm _emit 0x05
  __asm cmp eax, 0x7e
  __asm _emit 0x76 __asm _emit 0x02
  __asm mov al, 0x3f
  __asm mov byte ptr [ecx + 3], al
  __asm movzx eax, dl
  __asm cmp eax, 0x20
  __asm _emit 0x72 __asm _emit 0x0d
  __asm cmp eax, 0x7e
  __asm _emit 0x77 __asm _emit 0x08
  __asm mov byte ptr [ecx + 4], al
  __asm mov byte ptr [ecx + 5], 0x27
  __asm ret
  __asm mov word ptr [ecx + 4], 0x273f
  __asm ret
}



// Reference entry 114666e0; body size 42 bytes.
#line 1 "ENTRY_114666e0"

__declspec(naked) void FUN_114666e0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm xor esi, esi
  __asm push 3
  __asm push 0xff
  __asm push esi
  __asm push esi
  __asm push esi
  __asm push esi
  __asm push edi
  __asm call LAB_11466840
  __asm inc esi
  __asm add esp, 0x1c
  __asm cmp esi, 0x100
  __asm _emit 0x72 __asm _emit 0xe3
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret
}



// Reference entry 114671e0; body size 209 bytes.
#line 1 "ENTRY_114671e0"

__declspec(naked) void FUN_114671e0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov al, byte ptr [ecx + 8]
  __asm _emit 0xa8 __asm _emit 0x02
  __asm je LAB_114672b0
  __asm push edi
  __asm mov edi, dword ptr [ecx]
  __asm mov cl, byte ptr [ecx + 9]
  __asm cmp cl, 8
  __asm _emit 0x75 __asm _emit 0x38
  __asm cmp al, 2
  __asm _emit 0x75 __asm _emit 0x07
  __asm mov edx, 3
  __asm _emit 0xeb __asm _emit 0x0d
  __asm cmp al, 6
  __asm jne LAB_114672af
  __asm mov edx, 4
  __asm test edi, edi
  __asm je LAB_114672af
  __asm mov eax, dword ptr [esp + 0xc]
  __asm add eax, 2
  __asm mov cl, byte ptr [eax - 1]
  __asm add byte ptr [eax - 2], cl
  __asm add byte ptr [eax], cl
  __asm add eax, edx
  __asm sub edi, 1
  __asm _emit 0x75 __asm _emit 0xf1
  __asm pop edi
  __asm ret
  __asm cmp cl, 0x10
  __asm _emit 0x75 __asm _emit 0x78
  __asm push ebp
  __asm cmp al, 2
  __asm _emit 0x75 __asm _emit 0x07
  __asm mov ebp, 6
  __asm _emit 0xeb __asm _emit 0x09
  __asm cmp al, 6
  __asm _emit 0x75 __asm _emit 0x67
  __asm mov ebp, 8
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x5e
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x14]
  __asm push esi
  __asm inc ebx
  __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm movzx esi, byte ptr [ebx + 1]
  __asm movzx eax, byte ptr [ebx + 2]
  __asm movzx ecx, byte ptr [ebx - 1]
  __asm shl ecx, 8
  __asm shl esi, 8
  __asm or esi, eax
  __asm movzx eax, byte ptr [ebx]
  __asm or ecx, eax
  __asm movzx eax, byte ptr [ebx + 4]
  __asm add ecx, esi
  __asm movzx edx, cx
  __asm movzx ecx, byte ptr [ebx + 3]
  __asm shl ecx, 8
  __asm or ecx, eax
  __asm mov byte ptr [ebx], dl
  __asm add ecx, esi
  __asm mov eax, edx
  __asm shr eax, 8
  __asm movzx ecx, cx
  __asm mov byte ptr [ebx - 1], al
  __asm mov eax, ecx
  __asm shr eax, 8
  __asm mov byte ptr [ebx + 3], al
  __asm mov byte ptr [ebx + 4], cl
  __asm add ebx, ebp
  __asm sub edi, 1
  __asm _emit 0x75 __asm _emit 0xb4
  __asm pop esi
  __asm pop ebx
  __asm pop ebp
  __asm pop edi
  __asm ret
}



// Reference entry 114672f0; body size 47 bytes.
#line 1 "ENTRY_114672f0"

__declspec(naked) void FUN_114672f0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x186a0
  __asm _emit 0x7d __asm _emit 0x24
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x01
  __asm ret
  __asm imul ecx, eax, 0xb
  __asm mov eax, 0x66666667
  __asm add ecx, 2
  __asm imul ecx
  __asm _emit 0xd1 __asm _emit 0xfa
  __asm mov eax, edx
  __asm shr eax, 0x1f
  __asm add eax, edx
  __asm mov dword ptr [esp + 4], eax
  __asm jmp LAB_1000448f
}



// Reference entry 114677b0; body size 63 bytes.
#line 1 "ENTRY_114677b0"

__declspec(naked) void FUN_114677b0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dl, byte ptr [esi + 0x14f]
  __asm movzx eax, dl
  __asm and eax, 2
  __asm test dl, 4
  __asm _emit 0x75 __asm _emit 0x0a
  __asm cmp word ptr [esi + 0x148], 0
  __asm _emit 0x76 __asm _emit 0x03
  __asm or eax, 1
  __asm mov ecx, eax
  __asm or ecx, 4
  __asm cmp byte ptr [esi + 0x150], 0x10
  __asm pop esi
  __asm cmovne ecx, eax
  __asm mov eax, ecx
  __asm or eax, 8
  __asm and dl, 1
  __asm cmove eax, ecx
  __asm ret
}



// Reference entry 11469357; body size 36 bytes.
#line 1 "ENTRY_11469357"

__declspec(naked) void FUN_11469357(void)

{
  __asm mov edx, dword ptr [esp + 0x4c]
  __asm cmp edx, esi
  __asm jae LAB_11469411
  __asm cmp edx, 0xfe
  __asm _emit 0xeb __asm _emit 0x08
  __asm cmp dword ptr [esp + 0x4c], 0xd8
  __asm jne LAB_11469411
  __asm _emit 0xeb __asm _emit 0xb7
}



// Reference entry 1146a4c0; body size 221 bytes.
#line 1 "ENTRY_1146a4c0"

__declspec(naked) void FUN_1146a4c0(void)

{
  __asm push ecx
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0xc]
  __asm push esi
  __asm push edi
  __asm push 1
  __asm mov eax, dword ptr [ebx]
  __asm mov edi, dword ptr [eax]
  __asm mov esi, dword ptr [eax + 4]
  __asm push edi
  __asm call LAB_1003fc92
  __asm push esi
  __asm push edi
  __asm call LAB_1000518c
  __asm mov eax, dword ptr [edi + 0x100]
  __asm add esp, 0x10
  __asm mov cl, byte ptr [edi + 0x14f]
  __asm mov dword ptr [ebx + 8], eax
  __asm mov eax, dword ptr [edi + 0x104]
  __asm mov dword ptr [ebx + 0xc], eax
  __asm movzx eax, cl
  __asm and eax, 2
  __asm test cl, 4
  __asm _emit 0x75 __asm _emit 0x0a
  __asm cmp word ptr [edi + 0x148], 0
  __asm _emit 0x76 __asm _emit 0x03
  __asm or eax, 1
  __asm mov ch, byte ptr [edi + 0x150]
  __asm mov edx, eax
  __asm or edx, 4
  __asm mov byte ptr [esp + 0xf], ch
  __asm cmp ch, 0x10
  __asm cmovne edx, eax
  __asm mov al, cl
  __asm mov ecx, edx
  __asm or ecx, 8
  __asm and al, 1
  __asm cmove ecx, edx
  __asm mov dword ptr [ebx + 0x10], ecx
  __asm test cl, 2
  __asm _emit 0x74 __asm _emit 0x19
  __asm mov ax, word ptr [edi + 0x30e]
  __asm mov ecx, 0x8042
  __asm and ax, cx
  __asm cmp ax, 2
  __asm _emit 0x75 __asm _emit 0x04
  __asm or dword ptr [ebx + 0x14], 1
  __asm mov al, byte ptr [edi + 0x14f]
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x1e
  __asm cmp al, 3
  __asm _emit 0x74 __asm _emit 0x11
  __asm pop edi
  __asm pop esi
  __asm mov dword ptr [ebx + 0x18], 0x100
  __asm mov eax, 1
  __asm pop ebx
  __asm pop ecx
  __asm ret
  __asm movzx eax, word ptr [edi + 0x140]
  __asm _emit 0xeb __asm _emit 0x0b
  __asm mov cl, byte ptr [esp + 0xf]
  __asm mov eax, 1
  __asm shl eax, cl
  __asm mov ecx, 0x100
  __asm cmp eax, ecx
  __asm pop edi
  __asm cmova eax, ecx
  __asm mov dword ptr [ebx + 0x18], eax
  __asm mov eax, 1
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret
}



// Reference entry 1146a8a0; body size 37 bytes.
#line 1 "ENTRY_1146a8a0"
int FUN_1146a8a0(int a1) {

    thunk_FUN_11481a20(a1, 1, 0, -1);
    return (int)(thunk_FUN_11481a20(a1, 0, (int)&DAT_11c0548c, 6));
}

// Reference entry 1146a8d0; body size 311 bytes.
#line 1 "ENTRY_1146a8d0"

__declspec(naked) void FUN_1146a8d0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push esi
  __asm call LAB_10058585
  __asm push dword ptr [esi + 0x264]
  __asm push esi
  __asm call LAB_1007dcef
  __asm push dword ptr [esi + 0x2b0]
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x64 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push esi
  __asm call LAB_1007dcef
  __asm push dword ptr [esi + 0x2a0]
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xb0 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push esi
  __asm call LAB_1007dcef
  __asm push dword ptr [esi + 0x204]
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xa0 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push esi
  __asm call LAB_1007dcef
  __asm push dword ptr [esi + 0x208]
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x04 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push esi
  __asm call LAB_1007dcef
  __asm mov eax, dword ptr [esi + 0x230]
  __asm add esp, 0x2c
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x08 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xa9 __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x74
  __asm _emit 0x1f
  __asm push dword ptr [esi + 0x13c]
  __asm push esi
  __asm call LAB_10027a93
  __asm mov eax, dword ptr [esi + 0x230]
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x3c __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm and eax, 0xffffefff
  __asm mov dword ptr [esi + 0x230], eax
  __asm _emit 0xa9 __asm _emit 0x00 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0x1f
  __asm push dword ptr [esi + 0x1b0]
  __asm push esi
  __asm call LAB_1007dcef
  __asm mov eax, dword ptr [esi + 0x230]
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm and eax, 0xffffdfff
  __asm mov dword ptr [esi + 0x230], eax
  __asm lea eax, [esi + 0x84]
  __asm push eax
  __asm call LAB_1007dfe7
  __asm push dword ptr [esi + 0x1d8]
  __asm push esi
  __asm call LAB_1007dcef
  __asm push dword ptr [esi + 0x290]
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xd8 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push esi
  __asm call LAB_1007dcef
  __asm push dword ptr [esi + 0x244]
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x90 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push esi
  __asm call LAB_1007dcef
  __asm add esp, 0x1c
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x44 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 1146c130; body size 55 bytes.
#line 1 "ENTRY_1146c130"

__declspec(naked) void FUN_1146c130(void)

{
  __asm push dword ptr [esp + 8]
  __asm push offset LAB_11c05fbc
  __asm push 2
  __asm call dword ptr [LAB_122fc914]
  __asm add esp, 4
  __asm push eax
  __asm call LAB_1005ba19
  __asm add esp, 0xc
  __asm push offset LAB_11881ac8
  __asm push 2
  __asm call dword ptr [LAB_122fc914]
  __asm add esp, 4
  __asm push eax
  __asm call LAB_1005ba19
  __asm add esp, 8
  __asm ret
}



// Reference entry 1146cde0; body size 73 bytes.
#line 1 "ENTRY_1146cde0"

__declspec(naked) void FUN_1146cde0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm cmp byte ptr [esi + 9], 0x10
  __asm _emit 0x75 __asm _emit 0x3c
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov edx, eax
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm add edi, eax
  __asm cmp eax, edi
  __asm _emit 0x73 __asm _emit 0x14 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00
  __asm mov cl, byte ptr [eax]
  __asm lea edx, [edx + 1]
  __asm add eax, 2
  __asm mov byte ptr [edx - 1], cl
  __asm cmp eax, edi
  __asm _emit 0x72 __asm _emit 0xf1
  __asm mov al, byte ptr [esi + 0xa]
  __asm shl al, 3
  __asm mov byte ptr [esi + 0xb], al
  __asm movzx eax, byte ptr [esi + 0xa]
  __asm imul eax, dword ptr [esi]
  __asm mov byte ptr [esi + 9], 8
  __asm pop edi
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 1146e3a0; body size 221 bytes.
#line 1 "ENTRY_1146e3a0"

__declspec(naked) void FUN_1146e3a0(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm push ebx
  __asm push ebp
  __asm mov bl, byte ptr [edx + 8]
  __asm mov eax, dword ptr [edx]
  __asm push esi
  __asm test bl, 4
  __asm je LAB_1146e46b
  __asm mov dl, byte ptr [edx + 9]
  __asm cmp dl, 8
  __asm _emit 0x75 __asm _emit 0x42
  __asm mov esi, dword ptr [ecx + 0x194]
  __asm test esi, esi
  __asm je LAB_1146e46b
  __asm mov edx, dword ptr [esp + 0x14]
  __asm test bl, 2
  __asm mov ebx, 0
  __asm setne bl
  __asm dec edx
  __asm _emit 0x8d __asm _emit 0x1c __asm _emit 0x5d __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add edx, ebx
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x7b __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00
  __asm movzx ecx, byte ptr [edx]
  __asm mov cl, byte ptr [ecx + esi]
  __asm mov byte ptr [edx], cl
  __asm add edx, ebx
  __asm sub eax, 1
  __asm _emit 0x75 __asm _emit 0xf1
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret
  __asm cmp dl, 0x10
  __asm _emit 0x75 __asm _emit 0x63
  __asm mov ebp, dword ptr [ecx + 0x19c]
  __asm mov edx, dword ptr [ecx + 0x184]
  __asm test ebp, ebp
  __asm _emit 0x74 __asm _emit 0x53
  __asm test bl, 2
  __asm mov ebx, 0
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x18]
  __asm setne bl
  __asm add edi, -2
  __asm _emit 0x8d __asm _emit 0x1c __asm _emit 0x9d __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add edi, ebx
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x2e
  __asm movzx ecx, dl
  __asm mov dword ptr [esp + 0x14], ecx
  __asm nop
  __asm movzx esi, byte ptr [edi + 1]
  __asm movzx edx, byte ptr [edi]
  __asm shr esi, cl
  __asm mov ecx, dword ptr [ebp + esi*4]
  __asm movzx edx, word ptr [ecx + edx*2]
  __asm mov ecx, edx
  __asm mov byte ptr [edi + 1], dl
  __asm shr ecx, 8
  __asm mov byte ptr [edi], cl
  __asm add edi, ebx
  __asm mov ecx, dword ptr [esp + 0x14]
  __asm sub eax, 1
  __asm _emit 0x75 __asm _emit 0xda
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret
  __asm push offset LAB_11c06310
  __asm push ecx
  __asm call LAB_1001b743
  __asm add esp, 8
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret
}



// Reference entry 1146ea20; body size 73 bytes.
#line 1 "ENTRY_1146ea20"

__declspec(naked) void FUN_1146ea20(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm cmp byte ptr [esi + 9], 8
  __asm _emit 0x75 __asm _emit 0x3c
  __asm cmp byte ptr [esi + 8], 3
  __asm _emit 0x74 __asm _emit 0x36
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov edx, dword ptr [esp + 0xc]
  __asm add edx, ecx
  __asm lea eax, [ecx + edx]
  __asm cmp eax, edx
  __asm _emit 0x76 __asm _emit 0x13
  __asm mov cl, byte ptr [edx - 1]
  __asm dec edx
  __asm mov byte ptr [eax - 1], cl
  __asm add eax, -2
  __asm mov byte ptr [eax], cl
  __asm cmp eax, edx
  __asm _emit 0x77 __asm _emit 0xf0
  __asm mov ecx, dword ptr [esi + 4]
  __asm lea eax, [ecx + ecx]
  __asm mov byte ptr [esi + 9], 0x10
  __asm mov dword ptr [esi + 4], eax
  __asm mov al, byte ptr [esi + 0xa]
  __asm shl al, 4
  __asm mov byte ptr [esi + 0xb], al
  __asm pop esi
  __asm ret
}



// Reference entry 1146fa00; body size 144 bytes.
#line 1 "ENTRY_1146fa00"

__declspec(naked) void FUN_1146fa00(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm push esi
  __asm mov al, byte ptr [ecx + 8]
  __asm mov esi, dword ptr [ecx]
  __asm cmp al, 6
  __asm _emit 0x75 __asm _emit 0x33
  __asm mov eax, dword ptr [ecx + 4]
  __asm add eax, dword ptr [esp + 0xc]
  __asm cmp byte ptr [ecx + 9], 8
  __asm _emit 0x75 __asm _emit 0x12
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x6f
  __asm nop
  __asm not byte ptr [eax - 1]
  __asm lea eax, [eax - 4]
  __asm sub esi, 1
  __asm _emit 0x75 __asm _emit 0xf5
  __asm pop esi
  __asm ret
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x5d
  __asm not byte ptr [eax - 1]
  __asm lea eax, [eax - 8]
  __asm not byte ptr [eax + 6]
  __asm sub esi, 1
  __asm _emit 0x75 __asm _emit 0xf2
  __asm pop esi
  __asm ret
  __asm cmp al, 4
  __asm _emit 0x75 __asm _emit 0x49
  __asm mov edx, dword ptr [ecx + 4]
  __asm add edx, dword ptr [esp + 0xc]
  __asm cmp byte ptr [ecx + 9], 8
  __asm _emit 0x75 __asm _emit 0x29
  __asm mov ecx, edx
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x36 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm movzx eax, byte ptr [edx - 1]
  __asm lea edx, [edx - 2]
  __asm lea ecx, [ecx - 2]
  __asm not al
  __asm mov byte ptr [ecx + 1], al
  __asm movzx eax, byte ptr [edx]
  __asm mov byte ptr [ecx], al
  __asm sub esi, 1
  __asm _emit 0x75 __asm _emit 0xe7
  __asm pop esi
  __asm ret
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x0f
  __asm nop
  __asm not byte ptr [edx - 1]
  __asm lea edx, [edx - 4]
  __asm not byte ptr [edx + 2]
  __asm sub esi, 1
  __asm _emit 0x75 __asm _emit 0xf2
  __asm pop esi
  __asm ret
}



// Reference entry 11470ad0; body size 95 bytes.
#line 1 "ENTRY_11470ad0"

__declspec(naked) void FUN_11470ad0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm cmp byte ptr [esi + 9], 0x10
  __asm _emit 0x75 __asm _emit 0x52
  __asm mov eax, dword ptr [esp + 0xc]
  __asm push ebx
  __asm mov ebx, dword ptr [esi + 4]
  __asm add ebx, eax
  __asm push edi
  __asm mov edi, eax
  __asm cmp eax, ebx
  __asm _emit 0x73 __asm _emit 0x28 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00
  __asm movzx edx, byte ptr [eax]
  __asm lea edi, [edi + 1]
  __asm movzx ecx, byte ptr [eax + 1]
  __asm add eax, 2
  __asm sub ecx, edx
  __asm sub ecx, -0x80
  __asm imul ecx, ecx, 0xffff
  __asm sar ecx, 0x18
  __asm add edx, ecx
  __asm mov byte ptr [edi - 1], dl
  __asm cmp eax, ebx
  __asm _emit 0x72 __asm _emit 0xdc
  __asm mov al, byte ptr [esi + 0xa]
  __asm shl al, 3
  __asm mov byte ptr [esi + 0xb], al
  __asm movzx eax, byte ptr [esi + 0xa]
  __asm imul eax, dword ptr [esi]
  __asm pop edi
  __asm mov byte ptr [esi + 9], 8
  __asm pop ebx
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 11470f90; body size 55 bytes.
#line 1 "ENTRY_11470f90"

__declspec(naked) void FUN_11470f90(void)

{
  __asm push ecx
  __asm push 0x186a0
  __asm push dword ptr [esp + 0x10]
  __asm lea eax, [esp + 8]
  __asm push dword ptr [esp + 0x10]
  __asm push eax
  __asm call LAB_10043b8f
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x11
  __asm push dword ptr [esp]
  __asm call LAB_1000448f
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x02
  __asm pop ecx
  __asm ret
  __asm mov eax, 1
  __asm pop ecx
  __asm ret
}



// Reference entry 11472030; body size 211 bytes.
#line 1 "ENTRY_11472030"

__declspec(naked) void FUN_11472030(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov dl, byte ptr [ecx + 0x14f]
  __asm test dl, 4
  __asm _emit 0x75 __asm _emit 0x24
  __asm mov eax, dword ptr [ecx + 0x7c]
  __asm and dword ptr [ecx + 0x78], 0xffffdfff
  __asm and eax, 0xff7fffff
  __asm cmp word ptr [ecx + 0x148], 0
  __asm mov dword ptr [ecx + 0x7c], eax
  __asm _emit 0x77 __asm _emit 0x08
  __asm and eax, 0xfffffe7f
  __asm mov dword ptr [ecx + 0x7c], eax
  __asm mov eax, dword ptr [ecx + 0x7c]
  __asm and eax, 0x1100
  __asm cmp eax, 0x1100
  __asm jne LAB_11472102
  __asm test dl, 2
  __asm jne LAB_11472102
  __asm movzx eax, byte ptr [ecx + 0x150]
  __asm movzx edx, word ptr [ecx + 0x1bc]
  __asm push esi
  __asm movzx esi, word ptr [ecx + 0x16c]
  __asm sub eax, 1
  __asm _emit 0x74 __asm _emit 0x22
  __asm sub eax, 1
  __asm _emit 0x74 __asm _emit 0x15
  __asm sub eax, 2
  __asm _emit 0x75 __asm _emit 0x24
  __asm mov eax, esi
  __asm shl esi, 4
  __asm add esi, eax
  __asm mov eax, edx
  __asm shl edx, 4
  __asm add edx, eax
  __asm _emit 0xeb __asm _emit 0x14
  __asm imul esi, esi, 0x55
  __asm imul edx, edx, 0x55
  __asm _emit 0xeb __asm _emit 0x0c
  __asm imul esi, esi, 0xff
  __asm imul edx, edx, 0xff
  __asm test dword ptr [ecx + 0x7c], 0x2000000
  __asm movzx eax, si
  __asm mov word ptr [ecx + 0x16a], ax
  __asm mov word ptr [ecx + 0x168], ax
  __asm mov word ptr [ecx + 0x166], ax
  __asm pop esi
  __asm _emit 0x75 __asm _emit 0x18
  __asm movzx eax, dx
  __asm mov word ptr [ecx + 0x1ba], ax
  __asm mov word ptr [ecx + 0x1b8], ax
  __asm mov word ptr [ecx + 0x1b6], ax
  __asm ret
}



// Reference entry 114723a0; body size 78 bytes.
#line 1 "ENTRY_114723a0"
int FUN_114723a0(int a1, int a2) {

    if (a1 == 0) {
        return (int)(0);
    }
int *v1 = (int *)((int)((int *)(a1 + 120))); // (int)&FUN_114723a8
    int v2 = (int)(*v1); // (int)&FUN_114723a8
    if ((v2 & 64) != 0) {
        thunk_FUN_1146bd60(a1, (int)&s_invalid_after_png_start_read_ima_11c06018);
        return (int)(0);
    }
    if (a2 == 0 || (*(char *)(a1 + 116) & 1) != 0) {
        *v1 = (int)(v2 | 0x4000);
        return (int)(1);
    }
    thunk_FUN_1146bd60(a1, (int)&s_invalid_before_the_PNG_header_ha_11c06060);
    return (int)(0);
}

// Reference entry 11473dd0; body size 77 bytes.
#line 1 "ENTRY_11473dd0"

__declspec(naked) void FUN_11473dd0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm cmp eax, -1
  __asm _emit 0x74 __asm _emit 0x26
  __asm cmp eax, 0xfffe7960
  __asm _emit 0x74 __asm _emit 0x1f
  __asm cmp eax, -2
  __asm _emit 0x74 __asm _emit 0x07
  __asm cmp eax, 0xffff3cb0
  __asm _emit 0x75 __asm _emit 0x30
  __asm cmp dword ptr [esp + 0xc], 0
  __asm mov eax, 0x10175
  __asm mov ecx, 0x250ac
  __asm cmovne eax, ecx
  __asm ret
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, 0x35b60
  __asm or dword ptr [eax + 0x78], 0x1000
  __asm mov eax, 0xb18f
  __asm cmp dword ptr [esp + 0xc], 0
  __asm cmovne eax, ecx
  __asm ret
}



// Reference entry 114779e0; body size 44 bytes.
#line 1 "ENTRY_114779e0"

__declspec(naked) void FUN_114779e0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x7fffffff
  __asm _emit 0x77 __asm _emit 0x1e
  __asm push 0x1388
  __asm push 0x7f
  __asm push eax
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm call LAB_10043b8f
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [esp + 4]
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 11477e20; body size 209 bytes.
#line 1 "ENTRY_11477e20"

__declspec(naked) void FUN_11477e20(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov al, byte ptr [ecx + 8]
  __asm _emit 0xa8 __asm _emit 0x02
  __asm je LAB_11477ef0
  __asm push edi
  __asm mov edi, dword ptr [ecx]
  __asm mov cl, byte ptr [ecx + 9]
  __asm cmp cl, 8
  __asm _emit 0x75 __asm _emit 0x38
  __asm cmp al, 2
  __asm _emit 0x75 __asm _emit 0x07
  __asm mov edx, 3
  __asm _emit 0xeb __asm _emit 0x0d
  __asm cmp al, 6
  __asm jne LAB_11477eef
  __asm mov edx, 4
  __asm test edi, edi
  __asm je LAB_11477eef
  __asm mov eax, dword ptr [esp + 0xc]
  __asm add eax, 2
  __asm mov cl, byte ptr [eax - 1]
  __asm sub byte ptr [eax - 2], cl
  __asm sub byte ptr [eax], cl
  __asm add eax, edx
  __asm sub edi, 1
  __asm _emit 0x75 __asm _emit 0xf1
  __asm pop edi
  __asm ret
  __asm cmp cl, 0x10
  __asm _emit 0x75 __asm _emit 0x78
  __asm push ebp
  __asm cmp al, 2
  __asm _emit 0x75 __asm _emit 0x07
  __asm mov ebp, 6
  __asm _emit 0xeb __asm _emit 0x09
  __asm cmp al, 6
  __asm _emit 0x75 __asm _emit 0x67
  __asm mov ebp, 8
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x5e
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x14]
  __asm push esi
  __asm inc ebx
  __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm movzx esi, byte ptr [ebx + 1]
  __asm movzx eax, byte ptr [ebx + 2]
  __asm movzx ecx, byte ptr [ebx - 1]
  __asm shl ecx, 8
  __asm shl esi, 8
  __asm or esi, eax
  __asm movzx eax, byte ptr [ebx]
  __asm or ecx, eax
  __asm movzx eax, byte ptr [ebx + 4]
  __asm sub ecx, esi
  __asm movzx edx, cx
  __asm movzx ecx, byte ptr [ebx + 3]
  __asm shl ecx, 8
  __asm or ecx, eax
  __asm mov byte ptr [ebx], dl
  __asm sub ecx, esi
  __asm mov eax, edx
  __asm shr eax, 8
  __asm movzx ecx, cx
  __asm mov byte ptr [ebx - 1], al
  __asm mov eax, ecx
  __asm shr eax, 8
  __asm mov byte ptr [ebx + 3], al
  __asm mov byte ptr [ebx + 4], cl
  __asm add ebx, ebp
  __asm sub edi, 1
  __asm _emit 0x75 __asm _emit 0xb4
  __asm pop esi
  __asm pop ebx
  __asm pop ebp
  __asm pop edi
  __asm ret
}



// Reference entry 11479460; body size 154 bytes.
#line 1 "ENTRY_11479460"

__declspec(naked) void FUN_11479460(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm test byte ptr [esi + 0x78], 2
  __asm _emit 0x74 __asm _emit 0x0f
  __asm lea eax, [esi + 0x84]
  __asm push eax
  __asm call LAB_1001f82f
  __asm add esp, 4
  __asm lea eax, [esi + 0xbc]
  __asm push eax
  __asm push esi
  __asm call LAB_100627b5
  __asm push dword ptr [esi + 0x124]
  __asm push esi
  __asm call LAB_1007dcef
  __asm push dword ptr [esi + 0x120]
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x24 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push esi
  __asm call LAB_1007dcef
  __asm push dword ptr [esi + 0x128]
  __asm push esi
  __asm call LAB_1007dcef
  __asm push dword ptr [esi + 0x12c]
  __asm push esi
  __asm call LAB_1007dcef
  __asm push dword ptr [esi + 0x244]
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x20 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push esi
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x28 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x2c __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1007dcef
  __asm add esp, 0x30
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x44 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 1147ca10; body size 152 bytes.
#line 1 "ENTRY_1147ca10"

__declspec(naked) void FUN_1147ca10(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push ebx
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x10]
  __asm mov ecx, dword ptr [eax + 0x128]
  __asm mov edx, dword ptr [eax + 0x124]
  __asm push esi
  __asm inc edx
  __asm xor esi, esi
  __asm push edi
  __asm mov byte ptr [ecx], 1
  __asm xor edi, edi
  __asm inc ecx
  __asm mov dword ptr [esp + 0x14], edx
  __asm mov ebx, edx
  __asm test ebp, ebp
  __asm _emit 0x74 __asm _emit 0x29
  __asm mov edi, ebp
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov al, byte ptr [ebx]
  __asm movzx edx, al
  __asm mov byte ptr [ecx], al
  __asm mov eax, 0x100
  __asm sub eax, edx
  __asm cmp edx, 0x80
  __asm cmovae edx, eax
  __asm inc ebx
  __asm add esi, edx
  __asm inc ecx
  __asm sub ebp, 1
  __asm _emit 0x75 __asm _emit 0xe0
  __asm mov edx, dword ptr [esp + 0x14]
  __asm mov ebp, dword ptr [esp + 0x1c]
  __asm cmp edi, ebp
  __asm _emit 0x73 __asm _emit 0x35
  __asm sub ebx, ecx
  __asm sub edx, ecx
  __asm mov dword ptr [esp + 0x14], edx
  __asm mov al, byte ptr [ebx + ecx]
  __asm sub al, byte ptr [edx + ecx]
  __asm movzx edx, al
  __asm mov byte ptr [ecx], al
  __asm mov eax, 0x100
  __asm sub eax, edx
  __asm cmp edx, 0x80
  __asm cmovae edx, eax
  __asm add esi, edx
  __asm cmp esi, dword ptr [esp + 0x20]
  __asm _emit 0x77 __asm _emit 0x0a
  __asm mov edx, dword ptr [esp + 0x14]
  __asm inc edi
  __asm inc ecx
  __asm cmp edi, ebp
  __asm _emit 0x72 __asm _emit 0xd3
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret
}



// Reference entry 1147cc30; body size 108 bytes.
#line 1 "ENTRY_1147cc30"

__declspec(naked) void FUN_1147cc30(void)

{
  __asm push ebx
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x10]
  __asm xor ebx, ebx
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm xor ecx, ecx
  __asm mov eax, dword ptr [edi + 0x128]
  __asm mov byte ptr [eax], 2
  __asm lea edx, [eax + 1]
  __asm mov dword ptr [esp + 0x10], edx
  __asm test ebp, ebp
  __asm _emit 0x74 __asm _emit 0x43
  __asm push esi
  __asm mov esi, dword ptr [edi + 0x120]
  __asm mov edi, dword ptr [edi + 0x124]
  __asm inc esi
  __asm inc edi
  __asm mov al, byte ptr [edi]
  __asm sub al, byte ptr [esi]
  __asm mov byte ptr [edx + ecx], al
  __asm movzx edx, al
  __asm mov eax, 0x100
  __asm sub eax, edx
  __asm cmp edx, 0x80
  __asm cmovae edx, eax
  __asm add ebx, edx
  __asm cmp ebx, dword ptr [esp + 0x1c]
  __asm _emit 0x77 __asm _emit 0x0b
  __asm mov edx, dword ptr [esp + 0x14]
  __asm inc ecx
  __asm inc edi
  __asm inc esi
  __asm cmp ecx, ebp
  __asm _emit 0x72 __asm _emit 0xd3
  __asm pop esi
  __asm pop edi
  __asm pop ebp
  __asm mov eax, ebx
  __asm pop ebx
  __asm ret
  __asm pop edi
  __asm pop ebp
  __asm mov eax, ebx
  __asm pop ebx
  __asm ret
}



// Reference entry 11480a90; body size 67 bytes.
#line 1 "ENTRY_11480a90"

__declspec(naked) void FUN_11480a90(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm xor edx, edx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x0e
  __asm mov ecx, dword ptr [eax]
  __asm cmp ecx, dword ptr [edi]
  __asm _emit 0x74 __asm _emit 0x1d
  __asm inc edx
  __asm add eax, 5
  __asm cmp edx, esi
  __asm _emit 0x72 __asm _emit 0xf2
  __asm mov edx, dword ptr [esp + 0x18]
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x08
  __asm mov ecx, dword ptr [edi]
  __asm inc esi
  __asm mov dword ptr [eax], ecx
  __asm mov byte ptr [eax + 4], dl
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret
  __asm mov cl, byte ptr [esp + 0x18]
  __asm mov byte ptr [eax + 4], cl
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 114842d0; body size 74 bytes.
#line 1 "ENTRY_114842d0"

__declspec(naked) void FUN_114842d0(void)

{
  __asm mov edx, dword ptr [esp + 8]
  __asm push esi
  __asm movzx esi, byte ptr [edx]
  __asm movzx eax, byte ptr [edx + 1]
  __asm movzx ecx, byte ptr [edx + 2]
  __asm shl esi, 8
  __asm add esi, eax
  __asm shl esi, 8
  __asm add esi, ecx
  __asm movzx ecx, byte ptr [edx + 3]
  __asm shl esi, 8
  __asm add esi, ecx
  __asm cmp esi, 0x7fffffff
  __asm _emit 0x77 __asm _emit 0x04
  __asm mov eax, esi
  __asm pop esi
  __asm ret
  __asm mov eax, dword ptr [esp + 8]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0e
  __asm push offset LAB_11c08410
  __asm push eax
  __asm call LAB_1001b743
  __asm add esp, 8
  __asm or eax, 0xffffffff
  __asm pop esi
  __asm ret
}



// Reference entry 11488100; body size 72 bytes.
#line 1 "ENTRY_11488100"

__declspec(naked) void FUN_11488100(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm mov eax, offset LAB_11488850
  __asm push esi
  __asm mov esi, offset LAB_11488920
  __asm movzx ecx, byte ptr [edx + 0x152]
  __asm add ecx, 7
  __asm mov dword ptr [edx + 0x2b4], LAB_11488a50
  __asm and ecx, 0xfffffff8
  __asm mov dword ptr [edx + 0x2b8], LAB_11488a90
  __asm cmp ecx, 8
  __asm mov dword ptr [edx + 0x2bc], LAB_114887d0
  __asm cmovne eax, esi
  __asm mov dword ptr [edx + 0x2c0], eax
  __asm pop esi
  __asm ret
}



// Reference entry 114887d0; body size 94 bytes.
#line 1 "ENTRY_114887d0"

__declspec(naked) void FUN_114887d0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [esp + 8]
  __asm push ebx
  __asm push ebp
  __asm movzx ebp, byte ptr [ecx + 0xb]
  __asm mov ebx, dword ptr [ecx + 4]
  __asm add ebp, 7
  __asm shr ebp, 3
  __asm sub ebx, ebp
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x18]
  __asm test ebp, ebp
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov edx, ebp
  __asm mov cl, byte ptr [esi]
  __asm inc esi
  __asm _emit 0xd0 __asm _emit 0xe9
  __asm add byte ptr [eax], cl
  __asm inc eax
  __asm sub edx, 1
  __asm _emit 0x75 __asm _emit 0xf3
  __asm test ebx, ebx
  __asm _emit 0x74 __asm _emit 0x25
  __asm push edi
  __asm mov edi, eax
  __asm sub edi, ebp
  __asm sub esi, eax
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00
  __asm movzx edx, byte ptr [esi + eax]
  __asm lea eax, [eax + 1]
  __asm movzx ecx, byte ptr [edi]
  __asm lea edi, [edi + 1]
  __asm add edx, ecx
  __asm _emit 0xd1 __asm _emit 0xea
  __asm add byte ptr [eax - 1], dl
  __asm sub ebx, 1
  __asm _emit 0x75 __asm _emit 0xe7
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret
}



// Reference entry 11488920; body size 233 bytes.
#line 1 "ENTRY_11488920"

__declspec(naked) void FUN_11488920(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm sub esp, 0x18
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x20]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x2c]
  __asm push edi
  __asm movzx edi, byte ptr [ebx + 0xb]
  __asm add edi, 7
  __asm shr edi, 3
  __asm lea edx, [edi + ecx]
  __asm cmp ecx, edx
  __asm _emit 0x73 __asm _emit 0x0a
  __asm mov al, byte ptr [esi]
  __asm inc esi
  __asm add byte ptr [ecx], al
  __asm inc ecx
  __asm cmp ecx, edx
  __asm _emit 0x72 __asm _emit 0xf6
  __asm mov eax, dword ptr [ebx + 4]
  __asm sub eax, edi
  __asm add edx, eax
  __asm mov dword ptr [esp + 0x18], edx
  __asm cmp ecx, edx
  __asm jae LAB_11488a02
  __asm push ebp
  __asm mov edx, ecx
  __asm mov ebp, esi
  __asm sub edx, edi
  __asm sub ebp, edi
  __asm mov dword ptr [esp + 0x30], edx
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm movzx ebx, byte ptr [edx]
  __asm movzx edx, byte ptr [esi]
  __asm inc esi
  __asm mov al, byte ptr [ebp]
  __asm mov edi, edx
  __asm mov byte ptr [esp + 0x2c], al
  __asm inc ebp
  __asm movzx eax, al
  __asm sub edi, eax
  __asm mov dword ptr [esp + 0x10], edx
  __asm mov dword ptr [esp + 0x20], esi
  __asm mov esi, ebx
  __asm sub esi, eax
  __asm mov dword ptr [esp + 0x14], ebx
  __asm mov eax, edi
  __asm mov dword ptr [esp + 0x24], ebp
  __asm cdq
  __asm mov ebx, eax
  __asm mov eax, esi
  __asm xor ebx, edx
  __asm sub ebx, edx
  __asm cdq
  __asm mov ebp, eax
  __asm mov dword ptr [esp + 0x18], ebx
  __asm xor ebp, edx
  __asm lea eax, [esi + edi]
  __asm sub ebp, edx
  __asm mov esi, ebx
  __asm cdq
  __asm mov edi, eax
  __asm mov eax, dword ptr [esp + 0x10]
  __asm xor edi, edx
  __asm sub edi, edx
  __asm movzx edx, byte ptr [esp + 0x2c]
  __asm cmp ebp, ebx
  __asm movzx ebx, al
  __asm mov eax, dword ptr [esp + 0x14]
  __asm cmovl esi, ebp
  __asm movzx eax, al
  __asm cmp ebp, dword ptr [esp + 0x18]
  __asm mov ebp, dword ptr [esp + 0x24]
  __asm cmovge ebx, eax
  __asm cmp edi, esi
  __asm mov esi, dword ptr [esp + 0x20]
  __asm movzx eax, bl
  __asm cmovge edx, eax
  __asm add byte ptr [ecx], dl
  __asm inc ecx
  __asm mov edx, dword ptr [esp + 0x30]
  __asm inc edx
  __asm mov dword ptr [esp + 0x30], edx
  __asm cmp ecx, dword ptr [esp + 0x1c]
  __asm jb LAB_11488970
  __asm pop ebp
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm add esp, 0x18
  __asm ret
}



// Reference entry 11488a50; body size 49 bytes.
#line 1 "ENTRY_11488a50"

__declspec(naked) void FUN_11488a50(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, dword ptr [eax + 4]
  __asm movzx eax, byte ptr [eax + 0xb]
  __asm add eax, 7
  __asm shr eax, 3
  __asm lea edx, [eax + esi]
  __asm cmp eax, edi
  __asm _emit 0x73 __asm _emit 0x10
  __asm sub esi, eax
  __asm mov cl, byte ptr [esi + eax]
  __asm lea edx, [edx + 1]
  __asm add byte ptr [edx - 1], cl
  __asm inc eax
  __asm cmp eax, edi
  __asm _emit 0x72 __asm _emit 0xf2
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 11489830; body size 135 bytes.
#line 1 "ENTRY_11489830"

__declspec(naked) void FUN_11489830(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov cl, byte ptr [eax + 8]
  __asm cmp cl, 6
  __asm _emit 0x75 __asm _emit 0x33
  __asm cmp byte ptr [eax + 9], 8
  __asm mov edx, dword ptr [eax]
  __asm mov ecx, dword ptr [esp + 8]
  __asm _emit 0x75 __asm _emit 0x14
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x6a __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00
  __asm not byte ptr [ecx + 3]
  __asm lea ecx, [ecx + 4]
  __asm sub edx, 1
  __asm _emit 0x75 __asm _emit 0xf5
  __asm ret
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x56
  __asm not byte ptr [ecx + 6]
  __asm lea ecx, [ecx + 8]
  __asm not byte ptr [ecx - 1]
  __asm sub edx, 1
  __asm _emit 0x75 __asm _emit 0xf2
  __asm ret
  __asm cmp cl, 4
  __asm _emit 0x75 __asm _emit 0x42
  __asm cmp byte ptr [eax + 9], 8
  __asm mov ecx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, dword ptr [eax]
  __asm _emit 0x75 __asm _emit 0x22
  __asm mov edx, ecx
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x2e
  __asm movzx eax, byte ptr [edx]
  __asm lea ecx, [ecx + 2]
  __asm mov byte ptr [ecx - 2], al
  __asm lea edx, [edx + 2]
  __asm movzx eax, byte ptr [edx - 1]
  __asm not al
  __asm mov byte ptr [ecx - 1], al
  __asm sub esi, 1
  __asm _emit 0x75 __asm _emit 0xe6
  __asm pop esi
  __asm ret
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x0e
  __asm not byte ptr [ecx + 2]
  __asm lea ecx, [ecx + 4]
  __asm not byte ptr [ecx - 1]
  __asm sub esi, 1
  __asm _emit 0x75 __asm _emit 0xf2
  __asm pop esi
  __asm ret
}



// Reference entry 1148a46a; body size 11 bytes.
#line 1 "ENTRY_1148a46a"

__declspec(naked) int FUN_1148a46a(void)

{
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ebp - 0x28]
  __asm ret
  __asm mov esp, dword ptr [ebp - 0x18]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xfe __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm mov ecx, dword ptr [ebp - 0x10]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm leave
  __asm ret 0x10
}



// Reference entry 114de129; body size 30 bytes.
#line 1 "ENTRY_114de129"

__declspec(naked) int FUN_114de129(void)

{
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov ecx, dword ptr [edx + 0x1858]
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_11d1af9c
  __asm jmp LAB_1148cde7
}



// Reference entry 115197f9; body size 30 bytes.
#line 1 "ENTRY_115197f9"

__declspec(naked) int FUN_115197f9(void)

{
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov ecx, dword ptr [edx + 0x100c]
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_11d5af54
  __asm jmp LAB_1148cde7
}



// Reference entry 11521d8c; body size 30 bytes.
#line 1 "ENTRY_11521d8c"

__declspec(naked) int FUN_11521d8c(void)

{
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov ecx, dword ptr [edx + 0x4ac]
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_11d637dc
  __asm jmp LAB_1148cde7
}



// Reference entry 1152f112; body size 30 bytes.
#line 1 "ENTRY_1152f112"

__declspec(naked) int FUN_1152f112(void)

{
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov ecx, dword ptr [edx + 0x10c]
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_11d71130
  __asm jmp LAB_1148cde7
}



// Reference entry 115551d1; body size 30 bytes.
#line 1 "ENTRY_115551d1"

__declspec(naked) int FUN_115551d1(void)

{
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov ecx, dword ptr [edx + 0xe8]
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_11d9a518
  __asm jmp LAB_1148cde7
}



// Reference entry 1157a8fb; body size 30 bytes.
#line 1 "ENTRY_1157a8fb"

__declspec(naked) int FUN_1157a8fb(void)

{
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov ecx, dword ptr [edx + 0x80]
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_11dc61c8
  __asm jmp LAB_1148cde7
}



// Reference entry 115905ab; body size 30 bytes.
#line 1 "ENTRY_115905ab"

__declspec(naked) int FUN_115905ab(void)

{
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov ecx, dword ptr [edx + 0x410]
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_11de021c
  __asm jmp LAB_1148cde7
}



// Reference entry 115a1b61; body size 30 bytes.
#line 1 "ENTRY_115a1b61"

__declspec(naked) int FUN_115a1b61(void)

{
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov ecx, dword ptr [edx + 0x20c]
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_11df5af0
  __asm jmp LAB_1148cde7
}



// Reference entry 115dda19; body size 30 bytes.
#line 1 "ENTRY_115dda19"

__declspec(naked) int FUN_115dda19(void)

{
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov ecx, dword ptr [edx + 0xbc]
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_11e33954
  __asm jmp LAB_1148cde7
}



// Reference entry 116a39f2; body size 30 bytes.
#line 1 "ENTRY_116a39f2"

__declspec(naked) int FUN_116a39f2(void)

{
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov ecx, dword ptr [edx + 0x174]
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_11f1ab14
  __asm jmp LAB_1148cde7
}



// Reference entry 116f1501; body size 30 bytes.
#line 1 "ENTRY_116f1501"

__declspec(naked) int FUN_116f1501(void)

{
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov ecx, dword ptr [edx + 0x25c]
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_11f714d8
  __asm jmp LAB_1148cde7
}



// Reference entry 116f20b3; body size 30 bytes.
#line 1 "ENTRY_116f20b3"

__declspec(naked) int FUN_116f20b3(void)

{
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov ecx, dword ptr [edx + 0x80]
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_11f722dc
  __asm jmp LAB_1148cde7
}



// Reference entry 116f23a9; body size 30 bytes.
#line 1 "ENTRY_116f23a9"

__declspec(naked) int FUN_116f23a9(void)

{
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov ecx, dword ptr [edx + 0x18bc]
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_11f71fb8
  __asm jmp LAB_1148cde7
}



// Reference entry 1171fe81; body size 30 bytes.
#line 1 "ENTRY_1171fe81"

__declspec(naked) int FUN_1171fe81(void)

{
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov ecx, dword ptr [edx + 0xdc]
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_11fa4f30
  __asm jmp LAB_1148cde7
}



// Reference entry 1172befa; body size 30 bytes.
#line 1 "ENTRY_1172befa"

__declspec(naked) int FUN_1172befa(void)

{
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov ecx, dword ptr [edx + 0x2a4]
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_11fb1e64
  __asm jmp LAB_1148cde7
}



// Reference entry 11767531; body size 30 bytes.
#line 1 "ENTRY_11767531"

__declspec(naked) int FUN_11767531(void)

{
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov ecx, dword ptr [edx + 0x410]
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_11ff81b0
  __asm jmp LAB_1148cde7
}



// Reference entry 117994ba; body size 30 bytes.
#line 1 "ENTRY_117994ba"

__declspec(naked) int FUN_117994ba(void)

{
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov ecx, dword ptr [edx + 0x1024]
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1202e7e0
  __asm jmp LAB_1148cde7
}



// Reference entry 117a6aab; body size 30 bytes.
#line 1 "ENTRY_117a6aab"

__declspec(naked) int FUN_117a6aab(void)

{
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov ecx, dword ptr [edx + 0x1024]
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1203c220
  __asm jmp LAB_1148cde7
}



// Reference entry 117aa881; body size 30 bytes.
#line 1 "ENTRY_117aa881"

__declspec(naked) int FUN_117aa881(void)

{
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov ecx, dword ptr [edx + 0x2028]
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_120413b8
  __asm jmp LAB_1148cde7
}



// Reference entry 117adc89; body size 30 bytes.
#line 1 "ENTRY_117adc89"

__declspec(naked) int FUN_117adc89(void)

{
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov ecx, dword ptr [edx + 0x40c]
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_120430d8
  __asm jmp LAB_1148cde7
}



// Reference entry 117ce149; body size 30 bytes.
#line 1 "ENTRY_117ce149"

__declspec(naked) int FUN_117ce149(void)

{
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov ecx, dword ptr [edx + 0x944]
  __asm xor ecx, eax
  __asm call LAB_100382f3
  __asm mov eax, offset LAB_1205da44
  __asm jmp LAB_1148cde7
}



// Reference entry 117f6180; body size 40 bytes.
#line 1 "ENTRY_117f6180"

__declspec(naked) int FUN_117f6180(void)

{
  __asm mov eax, dword ptr [LAB_121a1348]
  __asm mov ecx, offset LAB_121a1348
  __asm push dword ptr [eax + 4]
  __asm push offset LAB_121a1348
  __asm call LAB_10005d21
  __asm push 0x18
  __asm push dword ptr [LAB_121a1348]
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
}



// Reference entry 117f6eb0; body size 50 bytes.
#line 1 "ENTRY_117f6eb0"

__declspec(naked) int FUN_117f6eb0(void)

{
  __asm mov edx, dword ptr [LAB_1211964c]
  __asm cmp edx, 0x10
  __asm _emit 0x72 __asm _emit 0x31
  __asm mov ecx, dword ptr [LAB_12119638]
  __asm inc edx
  __asm mov eax, ecx
  __asm cmp edx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov ecx, dword ptr [ecx - 4]
  __asm add edx, 0x23
  __asm sub eax, ecx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm jmp dword ptr [LAB_122fc888]
}



// Reference entry 117f6ee2; body size 38 bytes.
#line 1 "ENTRY_117f6ee2"

__declspec(naked) int FUN_117f6ee2(void)

{
  __asm push edx
  __asm push ecx
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov dword ptr [LAB_12119648], 0
  __asm mov dword ptr [LAB_1211964c], 0xf
  __asm mov byte ptr [LAB_12119638], 0
  __asm ret
}



// Reference entry 1182b5d0; body size 40 bytes.
#line 1 "ENTRY_1182b5d0"

__declspec(naked) int FUN_1182b5d0(void)

{
  __asm mov eax, dword ptr [LAB_121a4ad8]
  __asm mov ecx, offset LAB_121a4ad8
  __asm push dword ptr [eax + 4]
  __asm push offset LAB_121a4ad8
  __asm call LAB_10004c1e
  __asm push 0x18
  __asm push dword ptr [LAB_121a4ad8]
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
}



// Reference entry 11831500; body size 53 bytes.
#line 1 "ENTRY_11831500"

__declspec(naked) int FUN_11831500(void)

{
  __asm mov edx, dword ptr [LAB_121a5238]
  __asm test edx, edx
  __asm _emit 0x74 __asm _emit 0x53
  __asm mov ecx, dword ptr [LAB_121a5240]
  __asm mov eax, edx
  __asm sub ecx, edx
  __asm and ecx, 0xfffffffc
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov edx, dword ptr [edx - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm jmp dword ptr [LAB_122fc888]
}



// Reference entry 11831535; body size 41 bytes.
#line 1 "ENTRY_11831535"

__declspec(naked) int FUN_11831535(void)

{
  __asm push ecx
  __asm push edx
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov dword ptr [LAB_121a5238], 0
  __asm mov dword ptr [LAB_121a523c], 0
  __asm mov dword ptr [LAB_121a5240], 0
  __asm ret
}



// Reference entry 11835470; body size 40 bytes.
#line 1 "ENTRY_11835470"

__declspec(naked) int FUN_11835470(void)

{
  __asm mov eax, dword ptr [LAB_121a56fc]
  __asm mov ecx, offset LAB_121a56fc
  __asm push dword ptr [eax + 4]
  __asm push offset LAB_121a56fc
  __asm call LAB_1000572c
  __asm push 0x1c
  __asm push dword ptr [LAB_121a56fc]
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
}



// Reference entry 11835560; body size 40 bytes.
#line 1 "ENTRY_11835560"

__declspec(naked) int FUN_11835560(void)

{
  __asm mov eax, dword ptr [LAB_121a56a8]
  __asm mov ecx, offset LAB_121a56a8
  __asm push dword ptr [eax + 4]
  __asm push offset LAB_121a56a8
  __asm call LAB_1007bb66
  __asm push 0x18
  __asm push dword ptr [LAB_121a56a8]
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
}



// Reference entry 118355a0; body size 40 bytes.
#line 1 "ENTRY_118355a0"

__declspec(naked) int FUN_118355a0(void)

{
  __asm mov eax, dword ptr [LAB_121a56d0]
  __asm mov ecx, offset LAB_121a56d0
  __asm push dword ptr [eax + 4]
  __asm push offset LAB_121a56d0
  __asm call LAB_1007bb66
  __asm push 0x18
  __asm push dword ptr [LAB_121a56d0]
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
}



// Reference entry 11840f7e; body size 36 bytes.
#line 1 "ENTRY_11840f7e"

__declspec(naked) int FUN_11840f7e(void)

{
  __asm _emit 0xa0 __asm _emit 0x11 __asm _emit 0x12 __asm _emit 0x42 __asm _emit 0x8b
  __asm rol dword ptr [ecx + 0x1000fa], 0
  __asm _emit 0x72 __asm _emit 0x16
  __asm mov ecx, dword ptr [ecx - 4]
  __asm add edx, 0x23
  __asm sub eax, ecx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x06
  __asm jmp dword ptr [LAB_122fc888]
}



// Reference entry 11846210; body size 40 bytes.
#line 1 "ENTRY_11846210"

__declspec(naked) int FUN_11846210(void)

{
  __asm mov eax, dword ptr [LAB_121a652c]
  __asm mov ecx, offset LAB_121a652c
  __asm push dword ptr [eax + 4]
  __asm push offset LAB_121a652c
  __asm call LAB_100938c9
  __asm push 0x18
  __asm push dword ptr [LAB_121a652c]
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
}



// Reference entry 11846250; body size 40 bytes.
#line 1 "ENTRY_11846250"

__declspec(naked) int FUN_11846250(void)

{
  __asm mov eax, dword ptr [LAB_121a6524]
  __asm mov ecx, offset LAB_121a6524
  __asm push dword ptr [eax + 4]
  __asm push offset LAB_121a6524
  __asm call LAB_100938c9
  __asm push 0x18
  __asm push dword ptr [LAB_121a6524]
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
}



// Reference entry 11861ee0; body size 40 bytes.
#line 1 "ENTRY_11861ee0"

__declspec(naked) int FUN_11861ee0(void)

{
  __asm mov eax, dword ptr [LAB_121a7bb8]
  __asm mov ecx, offset LAB_121a7bb8
  __asm push dword ptr [eax + 4]
  __asm push offset LAB_121a7bb8
  __asm call LAB_100310fc
  __asm push 0x18
  __asm push dword ptr [LAB_121a7bb8]
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
}



// Reference entry 11861f20; body size 40 bytes.
#line 1 "ENTRY_11861f20"

__declspec(naked) int FUN_11861f20(void)

{
  __asm mov eax, dword ptr [LAB_121a7bb0]
  __asm mov ecx, offset LAB_121a7bb0
  __asm push dword ptr [eax + 4]
  __asm push offset LAB_121a7bb0
  __asm call LAB_100310fc
  __asm push 0x18
  __asm push dword ptr [LAB_121a7bb0]
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
}



// Reference entry 11861f60; body size 40 bytes.
#line 1 "ENTRY_11861f60"

__declspec(naked) int FUN_11861f60(void)

{
  __asm mov eax, dword ptr [LAB_121a7bc0]
  __asm mov ecx, offset LAB_121a7bc0
  __asm push dword ptr [eax + 4]
  __asm push offset LAB_121a7bc0
  __asm call LAB_100310fc
  __asm push 0x18
  __asm push dword ptr [LAB_121a7bc0]
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
}



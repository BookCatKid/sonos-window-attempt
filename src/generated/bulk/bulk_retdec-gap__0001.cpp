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
extern int FUN_1001645f(...);
extern int FUN_1004068d(...);
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
extern int FUN_11402cb1(...);
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
extern int FUN_1143040f(...);
extern int FUN_1143042b(...);
extern int FUN_114304a1(...);
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
extern int FUN_114336c0(...);
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
extern int FUN_11438735(...);
extern int FUN_11438744(...);
extern int FUN_1143874a(...);
extern int FUN_11438756(...);
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
extern int thunk_FUN_11423ed0(...);
extern int thunk_FUN_11423f00(...);
extern int thunk_FUN_11424fd0(...);
extern int thunk_FUN_11425390(...);
extern int thunk_FUN_11425430(...);
extern int thunk_FUN_11425630(...);
extern int thunk_FUN_11425660(...);
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
int FUN_11402ca0(int a1, int a2, int a3);
template<class... A> int FUN_11402ca0(A...);
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
int FUN_11430400(int a1, int a2, uint a3);
template<class... A> int FUN_11430400(A...);
int FUN_11432280(int a1, uint a2);
template<class... A> int FUN_11432280(A...);
int FUN_114322c0(int result, uint a2);
template<class... A> int FUN_114322c0(A...);
int FUN_11432480(int a1);
template<class... A> int FUN_11432480(A...);
int FUN_11433510(int a1, int a2, uint a3);
template<class... A> int FUN_11433510(A...);
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
int FUN_11438720(int a1, uint a2, int a3);
template<class... A> int FUN_11438720(A...);
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
#line 1 "ENTRY_113ed220"
int FUN_113ed220(int a1, int a2, int a3) {

    if (a2 >= 0x3fff) {
        return (int)(-0x6a00);
    }
int *v1 = (int *)((int)((int *)(a1 + 60))); // (int)&FUN_113ed234
int *v2 = (int *)((int)((int *)a1)); // (int)&FUN_113ed24c
    unsigned char v3 = (unsigned char)(*(char *)(*v2 + 9)); // (int)&FUN_113ed253
    int v4; // (int)((int(*)(int a1, int a2, int a3))&FUN_113ed220)
    thunk_FUN_113e6ac0(a3 + 1380 + *v1, (int)v3, 771, v4, v4, v4);
    int result = (int)(*(int *)(*v2 + 40)); // (int)&FUN_113ed269
    if (result != 0) {
        return (int)(result);
    }
    *(int*)(*v1 + 1480) = (int)(48);
    int v5 = (int)(*(int *)(*(int *)(a1 + 56) + 104)); // (int)&FUN_113ed289
    return (int)(v5 != 0 ? v5 : -0x6c00);
}

// Reference entry 113ed350; body size 69 bytes.
#line 1 "ENTRY_113ed350"
int FUN_113ed350(int a1, int a2, int a3, int a4) {
int *v1 = (int *)((int)((int *)a4)); // (int)&FUN_113ed359
    *v1 = (int)(0);
    if (*(char *)(*(int *)a1 + 14) == 0) {
        return (int)(0);
    }
    int result = (int)(-0x6a00); // (int)&FUN_113ed37c
    int v2; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_113ed350)
    if (FUN_113ea210(a2, a3, 4, v2) == 0) {
        *(int*)a2 = (int)((int)(0x1700));
        *v1 = (int)(4);
        result = (int)(0);
    }
    return (int)(result);
}

// Reference entry 113ed3b0; body size 80 bytes.
#line 1 "ENTRY_113ed3b0"
int FUN_113ed3b0(int a1, int a2, int a3, int a4) {
int *v1 = (int *)((int)((int *)a4)); // (int)&FUN_113ed3ba
    *v1 = (int)(0);
int *v2 = (int *)((int)((int *)a1)); // (int)&FUN_113ed3c0
    if (*(char *)(*v2 + 12) == 0) {
        return (int)(0);
    }
    int result = (int)(-0x6a00); // (int)&FUN_113ed3dd
    int v3; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_113ed3b0)
    if (FUN_113ea210(a2, a3, 5, v3, v3) == 0) {
        *(int*)a2 = (int)((int)(0x1000100));
        *(char*)(a2 + 4) = (char)(*(char *)(*v2 + 12));
        *v1 = (int)(5);
        result = (int)(0);
    }
    return (int)(result);
}

// Reference entry 113ed463; body size 55 bytes.
#line 1 "ENTRY_113ed463"
int FUN_113ed463(int a1, int a2, int a3) {

    int v1; // (int)((int(*)(int a1, int a2, int a3))&FUN_113ed463)
    *(short*)(v1 + 2) = (short)((short)v1);
int *v2 = (int *)((int)((int *)v1)); // (int)&FUN_113ed467
    *v2 = (int)(4);
    int v3 = (int)(*(int *)(*(int *)(v1 + 56) + 112)); // (int)&FUN_113ed470
    if (v1 != 0 && v3 != 0) {
        memcpy((char *)(v1 + 4), (void *)(v3), v1);
        *v2 = (int)(2 * v1);
    }
    return (int)(0);
}

// Reference entry 113ed4c0; body size 63 bytes.
#line 1 "ENTRY_113ed4c0"
int FUN_113ed4c0(int a1, int a2, int a3) {
int *v1 = (int *)((int)((int *)a3)); // (int)&FUN_113ed4d0
    *v1 = (int)(0);
    int v2; // (int)((int(*)(int a1, int a2, int a3))&FUN_113ed4c0)
    if (FUN_113ea210(a1, a2, 6, v2) != 0) {
        return (int)(-0x6a00);
    }
    *(int*)a1 = (int)((int)(0x2000b00));
    *(short*)(a1 + 4) = (short)(1);
    *v1 = (int)(6);
    return (int)(0);
}

// Reference entry 113ed560; body size 45 bytes.
#line 1 "ENTRY_113ed560"
int FUN_113ed560(int a1, int a2) {

    uint v1 = (uint)(a2 ^ a1 ^ *(int *)&DAT_122fa560); // (int)&FUN_113ed57b
    return (int)((-((v1 / 2)) | -v1) / 0x80000000);
}

// Reference entry 113ed5b0; body size 36 bytes.
#line 1 "ENTRY_113ed5b0"
int FUN_113ed5b0(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_113ed5b0)
    int v2 = (int)(thunk_FUN_1140b1f0(&v1), 0); // (int)&FUN_113ed5b5
    return (int)(v2 == 2 | v2 < 5 ? a1 : 0);
}

// Reference entry 113ed720; body size 32 bytes.
#line 1 "ENTRY_113ed720"
int FUN_113ed720(int a1) {

    unsigned char v1 = (unsigned char)(*(char *)(a1 + 10)); // (int)&FUN_113ed724
    if (v1 != 3) {
        if (((int)v1 - 4 || 4) != 4) {
            return (int)(0);
        }
    }
    return (int)(1);
}

// Reference entry 113ed750; body size 32 bytes.
#line 1 "ENTRY_113ed750"
int FUN_113ed750(int a1) {

    unsigned char v1 = (unsigned char)(*(char *)(a1 + 10)); // (int)&FUN_113ed754
    if (v1 != 2) {
        if ((int)v1 >= 5) {
            return (int)(0);
        }
    }
    return (int)(1);
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
int FUN_113edd50(int a1, ushort a2) {

    int result = (int)(*(int *)(a1 + 8)); // (int)&FUN_113edd54
    if (result != 771) {
        return (int)(result);
    }
    int v1 = (int)(a2 / 256); // (int)&FUN_113edd66
    int result2 = (int)(v1 - 1); // (int)&FUN_113edd69
    if (result2 < 6) {
        return (int)((int)*(char *)(v1 + (int)&FUN_113edddb));
    }
    return (int)(result2);
}

// Reference entry 113ede10; body size 31 bytes.
#line 1 "ENTRY_113ede10"
int FUN_113ede10(ushort a1) {

    int v1 = (int)(a1 / 256); // (int)&FUN_113ede18
    uint result = (uint)(v1 - 1); // (int)&FUN_113ede1b
    if (result < 6) {
        return (int)((int)*(char *)(v1 + (int)&FUN_113ede4b));
    }
    return (int)(result);
}

// Reference entry 113ef780; body size 92 bytes.
#line 1 "ENTRY_113ef780"
int FUN_113ef780(int a1, int a2, int a3) {
int *v1 = (int *)((int)((int *)(a1 + 60))); // (int)&FUN_113ef785
    int v2; // (int)((int(*)(int a1, int a2, int a3))&FUN_113ef780)
    if (thunk_FUN_11424fd0(*v1 + 804, v2) != 0) {
        return (int)(0);
    }
    int result = (int)(thunk_FUN_11425430(*v1 + 804, a2, a3, v2), 0); // (int)&FUN_113ef7b0
    if (result != 0) {
        thunk_FUN_113e5e30(a1, 2, 47);
        return (int)(result);
    }
char *v3 = (char *)((char)((char *)(*v1 + 1))); // (int)&FUN_113ef7d5
    *v3 = (char)(*v3 + 2);
    return (int)(0);
}

// Reference entry 113efed0; body size 113 bytes.
#line 1 "ENTRY_113efed0"
int FUN_113efed0(int a1, int a2, int a3) {

    int v1; // (int)((int(*)(int a1, int a2, int a3))&FUN_113efed0)
    if (a3 == 0) {
        thunk_FUN_113e5e30(a1, 2, 50, v1);
        return (int)(-0x7300);
    }
    unsigned char v2 = (unsigned char)(*(char *)a2); // (int)&FUN_113efedd
    int v3 = (int)(v2); // (int)&FUN_113efedd
    if (v3 + 1 != a3) {
        thunk_FUN_113e5e30(a1, 2, 50, v1);
        return (int)(-0x7300);
    }
    int v4 = (int)(v3); // (int)&FUN_113efeed
    if (v2 == 0) {
        return (int)(0);
    }
    int v5 = (int)(a2); // (int)&FUN_113efeed
    v5++;
char *v6 = (char *)((char)((char *)v5));
    unsigned char v7 = (unsigned char)(*v6); // (int)&FUN_113efef0
    while (v7 >= 2) {
        v4--;
        if (v4 == 0) {
            return (int)(0);
        }
        v5++;
        v6 = (char *)((char *)v5);
        v7 = (unsigned char)(*v6);
    }
int *v8 = (int *)((int)((int *)(a1 + 60))); // (int)&FUN_113eff0a
    *(char*)(*v8 + 84) = (char)(v7);
    thunk_FUN_11425630(*v8 + 804, (int)*v6);
    return (int)(0);
}

// Reference entry 113f056d; body size 123 bytes.
#line 1 "ENTRY_113f056d"
int FUN_113f056d(int a1, int a2) {

    int v1; // (int)((int(*)(int a1, int a2))&FUN_113f056d)
    *(short*)(v1 + 5) = (short)(0x4001);
    *(char*)(v1 + 4) = (char)(2);
    int v2 = (int)(*(int *)(v1 + 128)); // (int)&FUN_113f057f
    if (v2 == 0) {
        return (int)(-0x5e80);
    }
short *v3 = (short *)((short)((short *)v2)); // (int)&FUN_113f0596
    ushort v4 = (ushort)(*v3); // (int)&FUN_113f0596
    if (v4 == 0) {
        return (int)(0);
    }
    int result = (int)(FUN_10069308(v1, v1, (int)(v4 / 256), v1), 0); // (int)&FUN_113f05ac
    if (result != 0) {
        return (int)(result);
    }
    int result2 = (int)(*(int *)(v1 + 8)); // (int)&FUN_113f05bf
    if (result2 != 771) {
        return (int)(result2);
    }
    int v5 = (int)((int)(*v3 / 256)); // (int)&FUN_113f05cd
    int result3 = (int)(v5 - 1); // (int)&FUN_113f05d0
    if (result3 < 6) {
        return (int)((int)*(char *)(v5 + (int)&FUN_113f078b));
    }
    return (int)(result3);
}

// Reference entry 113f06dc; body size 144 bytes.
#line 1 "ENTRY_113f06dc"
int FUN_113f06dc(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {

    int v1; // (int)((int(*)(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8))&FUN_113f06dc)
    *(short*)v1 = (short)((int)((short)v1));
    int v2 = (int)(v1 + 2); // (int)&FUN_113f06df
    memcpy((void *)(v2), (char *)(*(int *)(v1 + 76)), v1);
    if (*(int *)(v1 + 404) != 0) {
        FUN_113f06b0();
    }
int *v3 = (int *)((int)((int *)(a8 + 216))); // (int)&FUN_113f0710
    short v4 = (short)(llvm_bswap_i16((short)(a5 + 2 + v1)), 0);
    *(int*)(a8 + 224) = (int)(v2 - a6 + v1);
    *(int*)(a8 + 220) = (int)(22);
    *(char *)*v3 = (int)(13);
    *(short*)(a7 + 7 + *v3) = (short)(v4);
    return (int)(thunk_FUN_113e6480(a8, 1, 1));
}

// Reference entry 113f08e0; body size 112 bytes.
#line 1 "ENTRY_113f08e0"
int FUN_113f08e0(int a1, int a2, int result) {
int *v1 = (int *)((int)((int *)(a1 + 56))); // (int)&FUN_113f08e5
    int v2; // (int)((int(*)(int a1, int a2, int result))&FUN_113f08e0)
    int v3 = (int)(thunk_FUN_113e9f00(*(int *)(*v1 + 16), v2), 0); // (int)&FUN_113f08eb
int *v4 = (int *)((int)((int *)(*v1 + 212)));
    if (v3 != 0) {
        if (thunk_FUN_113dc3c0(*v4, v3) != 2) {
            *(int*)(*v1 + 212) = (int)(0);
        }
    } else {
        *v4 = (int)(v3);
    }
    if (*(int *)(*v1 + 212) == 0) {
        *(int*)result = (int)((int)(0));
        return (int)(result);
    }
    *(int*)a2 = (int)((int)(0x1600));
    *(int*)result = (int)((int)(4));
    return (int)(result);
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
int FUN_113f09b0(int a1) {

    int v1 = (int)(a1);
int *v2 = (int *)((int)((int *)(a1 + 216))); // (int)&FUN_113f09b6
    int v3 = (int)(*v2); // (int)&FUN_113f09b6
int *v4 = (int *)((int)((int *)a1)); // (int)&FUN_113f09bc
    int v5 = (int)(v3 + 4);
    int v6 = (int)(*(int *)(a1 + 8)); // (int)&FUN_113f09c1
    v1 = (int)(v5);
    int v7; // (int)((int(*)(int a1))&FUN_113f09b0)
    thunk_FUN_113e6ac0(v5, (int)*(char *)(*v4 + 9), v6, v7, v7, v5);
    int v8 = (int)(*v4); // (int)&FUN_113f09da
    int v9 = (int)(v3 + 6); // (int)&FUN_113f09dc
    v1 = (int)(v9);
int *v10 = (int *)((int)((int *)(v8 + 88))); // (int)&FUN_113f09e3
    if (*v10 == (int)((0))) {
        return (int)(-0x6c00);
    }
    v1 = (int)(v3 + 7);
    int result = (int)(*v10); // (int)&FUN_113f0a18
    if (result != 0) {
        return (int)(result);
    }
    *(char*)v9 = (char)((int)(0));
    int v11 = (int)(*v2); // (int)&FUN_113f0a2e
    *(int*)(a1 + 220) = (int)(22);
    *(int*)(a1 + 224) = (int)(v1 - v11);
    *(char*)v11 = (char)((int)(3));
    *(int*)(a1 + 4) = (int)(17);
    int result2 = (int)(thunk_FUN_113e6480(*(int *)(v8 + 96), &v1, a1, 1, 1), 0); // (int)&FUN_113f0a59
    if (result2 != 0) {
        return (int)(result2);
    }
    if (*(char *)(*v4 + 9) != 1) {
        return (int)(0);
    }
    int result3 = (int)(thunk_FUN_113e4860(a1), 0); // (int)&FUN_113f0a6e
    if (result3 != 0) {
        return (int)(result3);
    }
    return (int)(0);
}

// Reference entry 113f0ac0; body size 62 bytes.
#line 1 "ENTRY_113f0ac0"
int FUN_113f0ac0(int a1, int a2, int result) {
int *v1 = (int *)((int)((int *)(a1 + 56))); // (int)&FUN_113f0ac4
    if (*(char *)*v1 == (char)(((0)))) {
        *(int*)result = (int)((int)(0));
        return (int)(result);
    }
    *(short*)a2 = (short)((int)(256));
    *(short*)(a2 + 2) = (short)(256);
    *(char*)(a2 + 4) = (char)(*(char *)*v1);
    *(int*)result = (int)((int)(5));
    return (int)(result);
}

// Reference entry 113f0b90; body size 43 bytes.
#line 1 "ENTRY_113f0b90"
int FUN_113f0b90(int a1, int a2, int a3) {

    int v1; // (int)((int(*)(int a1, int a2, int a3))&FUN_113f0b90)
    *(short*)(*(int *)(v1 + 216) + 8) = (short)((short)v1);
    *(int*)(v1 + 224) = (int)(a3 + 10);
    *(char*)(*(int *)(v1 + 60) + 5) = (char)((char)v1);
    return (int)(thunk_FUN_113e6480(v1, 1));
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
int FUN_113f12c0(int a1) {

    *(int*)(a1 + 224) = (int)(4);
    *(int*)(a1 + 220) = (int)(22);
    *(char *)*(int*)(a1 + 216) = (int)(14);
int *v1 = (int *)((int)((int *)a1)); // (int)&FUN_113f12e2
int *v2 = (int *)((int)((int *)(a1 + 4))); // (int)&FUN_113f12e4
    *v2 = (int)(*v2 + 1);
    if (*(char *)(*v1 + 9) == 1) {
        int v3; // (int)((int(*)(int a1))&FUN_113f12c0)
        thunk_FUN_113e5f20(a1, v3);
    }
    int result = (int)(thunk_FUN_113e6480(a1, 1, 1), 0); // (int)&FUN_113f12fb
    if (result != 0) {
        return (int)(result);
    }
    if (*(char *)(*v1 + 9) == 1) {
        int result2 = (int)(thunk_FUN_113e4860(a1), 0); // (int)&FUN_113f1310
        if (result2 != 0) {
            return (int)(result2);
        }
    }
    return (int)(0);
}

// Reference entry 113f1340; body size 44 bytes.
#line 1 "ENTRY_113f1340"
int FUN_113f1340(int a1) {

    unsigned char v1 = (unsigned char)(*(char *)(*(int *)(*(int *)(a1 + 60) + 16) + 10)); // (int)&FUN_113f1354
    int v2 = (int)(v1); // (int)&FUN_113f1354
    uint result = (uint)(v2 - 1); // (int)&FUN_113f1358
    if (v1 == 10 || result < 9) {
        return (int)((int)*(char *)(v2 + (int)&FUN_113f1407));
    }
    return (int)(result);
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
int FUN_113f1490(int a1, int a2, int result) {

    if ((*(char *)(*(int *)(a1 + 60) + 1) & 1) == 0) {
        *(int*)result = (int)((int)(0));
        return (int)(result);
    }
    *(int*)a2 = (int)((int)(0x2000b00));
    *(short*)(a2 + 4) = (short)(1);
    *(int*)result = (int)((int)(6));
    return (int)(result);
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
int FUN_113f1e00(short a1) {

    int result = (int)(0); // (int)((int(*)(short a1))&FUN_113f1e00)
    switch (a1) {
        case 29: {
        }
        case 23: {
        }
        case 24: {
        }
        case 25: {
        }
        case 30: {
            result = (int)(1);
            break;
        }
    }
    return (int)(result);
}

// Reference entry 113f2720; body size 92 bytes.
#line 1 "ENTRY_113f2720"
int FUN_113f2720(int a1, int a2, int a3) {

    if (FUN_113f1560(a2, a3, 34) != 0) {
        thunk_FUN_113e50f0(a1, 50, -0x7300);
        return (int)(-0x7300);
    }
    int v1 = (int)(a2 + 2); // (int)&FUN_113f275e
    int v2 = (int)((int)&DAT_11bfd9f4); // (int)&FUN_113f275e
    int v3 = (int)(28); // (int)&FUN_113f275e
    int result = (int)(0); // (int)&FUN_113f2764
    while (*(int *)(v1) == *(int *)(v2)) {
        int v4 = (int)(v3);
        v1 += 4;
        v2 += 4;
        v3 = (int)(v4 - 4);
        result = (int)(1);
        if (v4 == 0) {
            break;
        }
        result = (int)(0);
    }
    return (int)(result);
}

// Reference entry 113f27a0; body size 55 bytes.
#line 1 "ENTRY_113f27a0"
int FUN_113f27a0(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_113f27a0)
    int result = (int)(thunk_FUN_113e56d0(a1, 0, v1), 0); // (int)&FUN_113f27a8
    if (result != 0) {
        return (int)(result);
    }
    *(int*)(a1 + 176) = (int)(1);
    if (*(int *)(a1 + 124) != 22) {
        return (int)(1);
    }
    if (*(char *)*(int *)(a1 + 116) == 13) {
        return (int)(0);
    }
    return (int)(1);
}

// Reference entry 113f27f0; body size 217 bytes.
#line 1 "ENTRY_113f27f0"
int FUN_113f27f0(int a1, int a2, int a3) {
int *v1 = (int *)((int)((int *)a2)); // (int)&FUN_113f27fa
    int v2 = (int)(*v1); // (int)&FUN_113f27fa
    if (FUN_113f1560(v2, a3, 1) != 0) {
        thunk_FUN_113e50f0(a1, 50, -0x7300);
        return (int)(-0x7300);
    }
    unsigned char v3 = (unsigned char)(*(char *)v2); // (int)&FUN_113f2810
    int v4 = (int)(v3); // (int)&FUN_113f2810
    int v5 = (int)(v2 + 1); // (int)&FUN_113f2813
    if (FUN_113f1560(v5, a3, v4) != 0) {
        thunk_FUN_113e50f0(a1, 50, -0x7300);
        return (int)(-0x7300);
    }
    int v6 = (int)(*(int *)(a1 + 56)); // (int)&FUN_113f282d
    if (*(int *)(v6 + 20) != (int)(v4)) {
        thunk_FUN_113e50f0(a1, 47, -0x6600);
        return (int)(-0x6600);
    }
    int v7 = (int)(v6 + 24); // (int)&FUN_113f2837
    int v8 = (int)(v4 - 4); // (int)&FUN_113f283c
    int v9 = (int)(v7); // (int)&FUN_113f283f
    int v10 = (int)(v5); // (int)&FUN_113f283f
    int v11 = (int)(v7); // (int)&FUN_113f283f
    int v12 = (int)(v5); // (int)&FUN_113f283f
    int v13 = (int)(v8); // (int)&FUN_113f283f
    int v14; // (int)((int(*)(int a1, int a2, int a3))&FUN_113f27f0)
    int v15; // (int)((int(*)(int a1, int a2, int a3))&FUN_113f27f0)
    int v16; // (int)((int(*)(int a1, int a2, int a3))&FUN_113f27f0)
    if (v3 < 4) {
      lab_0x113f2852:
        v14 = (int)(v11);
        v15 = (int)(v12);
        v16 = (int)(v13);
        if (v13 == -4) {
            *v1 = (int)(v5 + v4);
            return (int)(0);
        }
    } else {
        int v17 = (int)(v8);
        v14 = (int)(v9);
        v15 = (int)(v10);
        v16 = (int)(v17);
        while (*(int *)(v9) == *(int *)(v10)) {
            v9 += 4;
            v10 += 4;
            int v18 = (int)(v17 - 4); // (int)&FUN_113f284d
            v11 = (int)(v9);
            v12 = (int)(v10);
            v13 = (int)(v18);
            if (v17 < 4) {
                goto lab_0x113f2852;
            }
            v17 = (int)(v18);
            v14 = (int)(v9);
            v15 = (int)(v10);
            v16 = (int)(v17);
        }
    }
    if (*(char *)(v14) != *(char *)(v15)) {
        thunk_FUN_113e50f0(a1, 47, -0x6600);
        return (int)(-0x6600);
    }
    if (v16 == -3) {
        *v1 = (int)(v5 + v4);
        return (int)(0);
    }
    if (*(char *)((v14 + 1)) != *(char *)((v15 + 1))) {
        thunk_FUN_113e50f0(a1, 47, -0x6600);
        return (int)(-0x6600);
    }
    if (v16 == -2) {
        *v1 = (int)(v5 + v4);
        return (int)(0);
    }
    if (*(char *)((v14 + 2)) != *(char *)((v15 + 2))) {
        thunk_FUN_113e50f0(a1, 47, -0x6600);
        return (int)(-0x6600);
    }
    if (v16 == -1) {
        *v1 = (int)(v5 + v4);
        return (int)(0);
    }
    if (*(char *)((v14 + 3)) != *(char *)((v15 + 3))) {
        thunk_FUN_113e50f0(a1, 47, -0x6600);
        return (int)(-0x6600);
    }
    *v1 = (int)(v5 + v4);
    return (int)(0);
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
int FUN_113f2a20(int a1) {

    int v1 = (int)(*(int *)(*(int *)a1 + 132)); // (int)&FUN_113f2a27
    if (v1 == 0) {
        return (int)(-0x5e80);
    }
    short v2 = (short)(*(short *)v1); // (int)&FUN_113f2a38
    if (v2 == 0) {
        return (int)(-0x7080);
    }
    int v3; // bp-4, (int)((int(*)(int a1))&FUN_113f2a20)
    int v4 = (int)(&v3); // (int)&FUN_113f2a24
    *(int*)(v4 - 4) = (int)(0);
    *(int*)(v4 - 8) = (int)(0);
    *(int*)(v4 - 12) = (int)((int)v2);
    short v5; // (int)&FUN_113f2a53
    if (thunk_FUN_113dc610() == 0) {
        v5 = (short)(*(short *)v1);
        switch (v5) {
            case 30: {
            }
            case 29: {
            }
            case 25: {
            }
            case 24: {
            }
            case 23: {
                *(short *)*(int*)(v4 + 12) = (int)(v5);
                return (int)(0);
            }
        }
    }
    int v6 = (int)(v1 + 2); // (int)&FUN_113f2a71
    short v7 = (short)(*(short *)v6); // (int)&FUN_113f2a71
    while (v7 != 0) {
        int v8 = (int)(v6);
        *(int*)(v4 - 4) = (int)(0);
        *(int*)(v4 - 8) = (int)(0);
        *(int*)(v4 - 12) = (int)((int)v7);
        if (thunk_FUN_113dc610() == 0) {
            v5 = (short)(*(short *)v8);
            switch (v5) {
                case 30: {
                }
                case 29: {
                }
                case 25: {
                }
                case 24: {
                }
                case 23: {
                    *(short *)*(int*)(v4 + 12) = (int)(v5);
                    return (int)(0);
                }
            }
        }
        v6 = (int)(v8 + 2);
        v7 = (short)(*(short *)v6);
    }
    return (int)(-0x7080);
}

// Reference entry 113f2b10; body size 99 bytes.
#line 1 "ENTRY_113f2b10"
int FUN_113f2b10(int a1, int a2, int a3) {

    if (FUN_113f1560(a2, a3, 34) != 0) {
        thunk_FUN_113e50f0(a1, 50, -0x7300);
        return (int)(-0x7300);
    }
    if (*(int *)((a2 + 26)) != *(int *)((uint)&DAT_11bfd8ac) || *(short *)((a2 + 30)) != *(short *)((uint)&DAT_11bfd8b0) || *(char *)((a2 + 32)) != *(char *)(&DAT_11bfd8b2)) {
        return (int)(0);
    }
    char v1 = (char)(*(char *)(a2 + 33)); // (int)&FUN_113f2b5f
    if (v1 != 0 != v1 != 1) {
        return (int)(1);
    }
    return (int)(0);
}

// Reference entry 113f2b90; body size 110 bytes.
#line 1 "ENTRY_113f2b90"
int FUN_113f2b90(int a1, int a2, uint a3) {

    int v1 = (int)(a2);
    int v2; // (int)((int(*)(int a1, int a2, uint a3))&FUN_113f2b90)
    if (FUN_113f1560(a2, a3, 35, v2, v2, v2) != 0) {
        thunk_FUN_113e50f0(a1, 50, -0x7300);
        return (int)(-0x7300);
    }
    uint v3 = (uint)(a2 + 34); // (int)&FUN_113f2bab
    if (v3 > a3) {
        thunk_FUN_113e50f0(a1, 50, -0x7300);
        return (int)(-0x7300);
    }
    int v4 = (int)((int)*(char *)v3); // (int)&FUN_113f2bab
    if (v4 + 4 <= a3 - v3) {
        int v5; // bp-4, (int)((int(*)(int a1, int a2, uint a3))&FUN_113f2b90)
        return (int)(thunk_FUN_113ff630(a1, a2 + 38 + v4, a3, &v5, &v1));
    }
    thunk_FUN_113e50f0(a1, 50, -0x7300);
    return (int)(-0x7300);
}

// Reference entry 113f3840; body size 78 bytes.
#line 1 "ENTRY_113f3840"
int FUN_113f3840(int a1, int a2, int a3) {

    int v1 = (int)(*(int *)(a1 + 52)); // (int)&FUN_113f384a
    int v2; // (int)((int(*)(int a1, int a2, int a3))&FUN_113f3840)
    if (FUN_113f1560(a2, a3, 4, v2, v2) != 0) {
        thunk_FUN_113e50f0(a1, 50, -0x7300);
        return (int)(-0x7300);
    }
char *v3 = (char *)((char)((char *)(v1 + 140))); // (int)&FUN_113f387a
    *v3 = (char)(*v3 + 8);
    *(int*)(v1 + 208) = (int)(llvm_bswap_i32(*(int *)a2), 0);
    return (int)(0);
}

// Reference entry 113f42d2; body size 197 bytes.
#line 1 "ENTRY_113f42d2"
int FUN_113f42d2(int a1, int a2, int a3, int a4) {

    int v1 = (int)(a2);
    int v2 = (int)(a4);
    int v3 = (int)(a3);
    int v4; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_113f42d2)
    uint v5 = (uint)(v4 % 0x10000); // (int)&FUN_113f42d3
int *v6 = (int *)((int)((int *)(v4 + 60))); // (int)&FUN_113f42d6
    *(short*)(*v6 + 1076) = (short)((short)v4);
    if (v5 >= FUN_113f29a0(v4, v4)) {
        thunk_FUN_113e50f0(v4, 47, -0x6600);
        return (int)(-0x6600);
    }
    int result; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_113f42d2)
    if (v5 != 0) {
        goto lab_0x113f431b;
    } else {
        if (FUN_113f2ad0(v4) == 0) {
            goto lab_0x113f431b;
        } else {
            result = (int)(FUN_113f5340(v4, &v1, &v2, &v3), 0);
            goto lab_0x113f433e;
        }
    }
  lab_0x113f431b:
    if (thunk_FUN_113da960(v4) == 0) {
        return (int)(-0x6c00);
    }
    result = (int)(FUN_113f51b0(v4, &v1, &v2, &v3), 0);
    goto lab_0x113f433e;
  lab_0x113f433e:
    if (result != 0) {
        return (int)(result);
    }
    int v7 = (int)(*(int *)(*v6 + 16)); // (int)&FUN_113f4348
    if (((int)*(char *)(v7 + 9) || 0x2000000) == v1) {
        return (int)(thunk_FUN_113dea50(v4, v2, v3));
    }
    thunk_FUN_113e50f0(v4, 47, -0x6600);
    return (int)(-0x6600);
}

// Reference entry 113f43e0; body size 117 bytes.
#line 1 "ENTRY_113f43e0"
int FUN_113f43e0(int a1, int a2, int a3) {

    int v1; // (int)((int(*)(int a1, int a2, int a3))&FUN_113f43e0)
    if (FUN_113f1560(a2, a3, 2, v1, v1) != 0) {
        thunk_FUN_113e50f0(a1, 50, -0x7300);
        return (int)(-0x7300);
    }
    unsigned char v2 = (unsigned char)(*(char *)(*(int *)a1 + 9)); // (int)&FUN_113f43ff
    if ((short)thunk_FUN_113e5b80(a2, (int)v2) != 772) {
        thunk_FUN_113e50f0(a1, 47, -0x6600);
        return (int)(-0x6600);
    }
    if (a2 + 2 == a3) {
        return (int)(0);
    }
    thunk_FUN_113e50f0(a1, 50, -0x7300);
    return (int)(-0x7300);
}

// Reference entry 113f4480; body size 57 bytes.
#line 1 "ENTRY_113f4480"
int FUN_113f4480(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_113f4480)
    thunk_FUN_113de340(a1, 0, v1);
    int result = (int)(FUN_113f5210(a1), 0); // (int)&FUN_113f448e
    if (result != 0) {
        return (int)(result);
    }
    int v2 = (int)(*(int *)*(int *)(*(int *)(a1 + 60) + 16)); // (int)&FUN_113f44a3
    *(int*)(*(int *)(a1 + 56) + 16) = (int)(v2);
int *v3 = (int *)((int)((int *)(a1 + 12))); // (int)&FUN_113f44a8
    if (*v3 != (int)((1))) {
        *v3 = (int)(5);
    }
    return (int)(0);
}

// Reference entry 113f4690; body size 166 bytes.
#line 1 "ENTRY_113f4690"
int FUN_113f4690(int a1) {

    int v1 = (int)(*(int *)(a1 + 60)); // (int)&FUN_113f4697
    char v2; // (int)((int(*)(int a1))&FUN_113f4690)
    int v3; // (int)&FUN_113f469a
    switch (v3 & 0x402000) {
        case 0x2000: {
            *(char*)(v1 + 36) = (char)(1);
            v2 = (char)(1);
            break;
        }
        case 0x400000: {
            *(char*)(v1 + 36) = (char)(2);
            v2 = (char)(2);
            break;
        }
        case 0x402000: {
            *(char*)(v1 + 36) = (char)(4);
            v2 = (char)(4);
            break;
        }
        default: {
            thunk_FUN_113e50f0(a1, 40, -0x6e00);
            return (int)(-0x6e00);
        }
    }
    if ((*(char *)(*(int *)a1 + 28) & v2) == 0) {
        thunk_FUN_113e50f0(a1, 40, -0x6e00);
        return (int)(-0x6e00);
    }
    if (v2 != 2 != *(int *)(a1 + 12) != 1) {
        int v4; // (int)((int(*)(int a1))&FUN_113f4690)
        int result = (int)(thunk_FUN_113fdba0(a1, v4, v4, v4), 0); // (int)&FUN_113f46fe
        if (result != 0) {
            thunk_FUN_113e50f0(a1, 40, -0x6e00);
            return (int)(result);
        }
    }
    int result2 = (int)(thunk_FUN_113fc210(a1), 0); // (int)&FUN_113f470d
    if (result2 != 0) {
        thunk_FUN_113e50f0(a1, 40, -0x6e00);
        return (int)(result2);
    }
    thunk_FUN_113e5f90(a1, *(int *)(v1 + 1500));
    *(int*)(a1 + 44) = (int)(*(int *)(a1 + 56));
    return (int)(result2);
}

// Reference entry 113f4ad0; body size 226 bytes.
#line 1 "ENTRY_113f4ad0"
int FUN_113f4ad0(int a1) {

    int v1 = (int)(a1);
int *v2 = (int *)((int)((int *)(a1 + 60))); // (int)&FUN_113f4ae0
    int v3 = (int)(*v2); // (int)&FUN_113f4ae0
    int v4; // bp-4, (int)((int(*)(int a1))&FUN_113f4ad0)
    int v5; // (int)((int(*)(int a1))&FUN_113f4ad0)
    int result = (int)(thunk_FUN_113ff370(a1, 8, &v4, &v1, v5, v5, v5), 0); // (int)&FUN_113f4ae7
    if (result != 0) {
        return (int)(result);
    }
    int v6 = (int)(v4); // (int)&FUN_113f4af9
    int result2 = (int)(FUN_113f3060(a1, v6, v1 + v6), 0); // (int)&FUN_113f4b06
    if (result2 != 0) {
        return (int)(result2);
    }
    if ((*(int *)(v3 + 1488) & 0x4000) == 0) {
int *v7 = (int *)((int)((int *)(a1 + 12))); // (int)&FUN_113f4b65
        if (*v7 != (int)((1))) {
            *v7 = (int)(5);
        }
    } else {
        if ((*(char *)(*v2 + 36) & 5) == 0 || *(short *)(v3 + 1076) != (short)(result2)) {
            thunk_FUN_113e50f0(a1, 47, -0x6600);
            return (int)(-0x6600);
        }
        int v8 = (int)(*(int *)(*(int *)(a1 + 56) + 16)); // (int)&FUN_113f4b3e
        if (*(int *)*(int *)(v3 + 16) != (int)(v8)) {
            thunk_FUN_113e50f0(a1, 47, -0x6600);
            return (int)(-0x6600);
        }
        *(int*)(a1 + 12) = (int)(4);
    }
    int v9 = (int)(*(int *)*(int *)(v3 + 16)); // (int)&FUN_113f4b78
    *(int*)(*(int *)(a1 + 56) + 16) = (int)(v9);
    int result3 = (int)(thunk_FUN_113da210(a1, 8, v4, v1), 0); // (int)&FUN_113f4b88
    if (result3 == 0) {
        char v10 = (char)(*(char *)(*v2 + 36)); // (int)&FUN_113f4b99
        *(int*)(a1 + 4) = (int)(8 * (result3 & 0x1fffff00 | (int)((v10 & 5) != 0)) | 5);
    }
    return (int)(result3);
}

// Reference entry 113f4e90; body size 94 bytes.
#line 1 "ENTRY_113f4e90"
int FUN_113f4e90(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_113f4e90)
    int result = (int)(thunk_FUN_113ffdd0(a1, v1), 0); // (int)&FUN_113f4e96
    if (result != 0) {
        return (int)(result);
    }
    int result2 = (int)(thunk_FUN_113fbfe0(a1, v1), 0); // (int)&FUN_113f4ea4
    if (result2 != 0) {
        thunk_FUN_113e50f0(a1, 40, -0x6e00);
        return (int)(result2);
    }
int *v2 = (int *)((int)((int *)(a1 + 12))); // (int)&FUN_113f4ec7
    if (*v2 != (int)((4))) {
        *(int*)(a1 + 4) = (int)(22);
        return (int)(0);
    }
    *v2 = (int)(6);
    *(int*)(a1 + 4) = (int)(20);
    return (int)(0);
}

// Reference entry 113f5150; body size 66 bytes.
#line 1 "ENTRY_113f5150"
int FUN_113f5150(int a1, int a2, int a3, int a4) {
int *v1 = (int *)((int)((int *)a1)); // (int)&FUN_113f5155
    int v2; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_113f5150)
    if (thunk_FUN_113da960(*v1, v2) == 0) {
        return (int)(-1);
    }
    *(int*)a2 = (int)((int)(0x2000009));
    *(int*)a3 = (int)((int)(*(int *)(*v1 + 144)));
    *(int*)a4 = (int)((int)(*(int *)(*v1 + 148)));
    return (int)(0);
}

// Reference entry 113f52b0; body size 105 bytes.
#line 1 "ENTRY_113f52b0"
int FUN_113f52b0(int a1, int a2, int a3, int a4) {

    int v1 = (int)(*(int *)(a1 + 56)); // (int)&FUN_113f52b8
    if (v1 == 0 | *(char *)*(int *)(a1 + 60) == 0) {
        return (int)(-1);
    }
int *v2 = (int *)((int)((int *)(v1 + 112))); // (int)&FUN_113f52c4
    if (*v2 == (int)((0))) {
        return (int)(-1);
    }
    char v3 = (char)(*(char *)(v1 + 140)); // (int)&FUN_113f52cc
    if ((v3 & 5 & (char)*(int *)(*(int *)a1 + 28)) == 0) {
        return (int)(-1);
    }
    int v4; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_113f52b0)
    int v5 = (int)(thunk_FUN_113e9f00(*(int *)(v1 + 16), v4), 0); // (int)&FUN_113f52de
    int v6 = (int)(0); // (int)&FUN_113f52e8
    if (v5 != 0) {
        v6 = (int)((int)*(char *)(v5 + 9) | 0x2000000);
    }
    *(int*)a2 = (int)((int)(v6));
    *(int*)a3 = (int)((int)(*v2));
    *(int*)a4 = (int)((int)(*(int *)(v1 + 116)));
    return (int)(0);
}

// Reference entry 113f5590; body size 108 bytes.
#line 1 "ENTRY_113f5590"
int FUN_113f5590(int a1) {
int *v1 = (int *)((int)((int *)(a1 + 60))); // (int)&FUN_113f5598
    int v2; // (int)((int(*)(int a1))&FUN_113f5590)
    thunk_FUN_113e5fb0(a1, *(int *)(*v1 + 1500), v2, v2);
    if (*(char *)(*v1 + 1242) == 0) {
        *(int*)(a1 + 4) = (int)(11);
        return (int)(0);
    }
    int result = (int)(thunk_FUN_11400010(a1), 0); // (int)&FUN_113f55b6
    if (result != 0) {
        return (int)(result);
    }
    int v3 = (int)(*v1); // (int)&FUN_113f55c2
    int v4; // (int)((int(*)(int a1))&FUN_113f5590)
    if (v3 == 0) {
        goto lab_0x113f55d3;
    } else {
        int v5 = (int)(*(int *)(v3 + 1080)); // (int)&FUN_113f55c9
        v4 = (int)(v5);
        if (v5 != 0) {
            goto lab_0x113f55dc;
        } else {
            goto lab_0x113f55d3;
        }
    }
  lab_0x113f55d3:;
    int v6 = (int)(*(int *)(*(int *)a1 + 116)); // (int)&FUN_113f55d5
    v4 = (int)(v6);
    if (v6 == 0) {
        *(int*)(a1 + 4) = (int)(11);
        return (int)(0);
    }
    goto lab_0x113f55dc;
  lab_0x113f55dc:
    *(int*)(a1 + 4) = (int)(*(int *)v4 == 0 ? 11 : 21);
    return (int)(0);
}

// Reference entry 113f5650; body size 40 bytes.
#line 1 "ENTRY_113f5650"
int FUN_113f5650(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_113f5650)
    int result = (int)(thunk_FUN_11400740(a1, v1), 0); // (int)&FUN_113f5656
    if (result != 0) {
        return (int)(result);
    }
    int result2 = (int)(thunk_FUN_113fc330(a1), 0); // (int)&FUN_113f5663
    if (result2 == 0) {
        *(int*)(a1 + 4) = (int)(14);
    }
    return (int)(result2);
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
int FUN_113f5df0(int a1, short a2) {

    int v1 = (int)(*(int *)(*(int *)a1 + 132)); // (int)&FUN_113f5df7
    if (v1 == 0) {
        return (int)(0);
    }
    short v2 = (short)(*(short *)v1); // (int)&FUN_113f5e01
    int v3 = (int)(v1); // (int)&FUN_113f5e07
    if (v2 == 0) {
        return (int)(0);
    }
    short v4 = (short)(v2); // (int)&FUN_113f5e07
    int result = (int)(1); // (int)&FUN_113f5e13
    while (v4 != a2) {
        v3 += 2;
        v4 = (short)(*(short *)v3);
        result = (int)(0);
        if (v4 == 0) {
            break;
        }
        result = (int)(1);
    }
    return (int)(result);
}

// Reference entry 113f5e40; body size 56 bytes.
#line 1 "ENTRY_113f5e40"
int FUN_113f5e40(int a1) {

    short v1 = (short)(a1); // (int)&FUN_113f5e44
    switch (v1) {
        default: {
            if (v1 != 30) {
                return (int)(0);
            }
        }
        case 29: {
        }
        case 23: {
        }
        case 24: {
        }
        case 25: {
            if (thunk_FUN_113db910(a1) != 0) {
                return (int)(1);
            }
            return (int)(0);
        }
    }
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
int FUN_113f5ec0(int a1, short a2) {

    int v1 = (int)(*(int *)(*(int *)a1 + 128)); // (int)&FUN_113f5ec7
    if (v1 == 0) {
        return (int)(0);
    }
    short v2 = (short)(*(short *)v1); // (int)&FUN_113f5ed1
    int v3 = (int)(v1); // (int)&FUN_113f5ed7
    if (v2 == 0) {
        return (int)(0);
    }
    short v4 = (short)(v2); // (int)&FUN_113f5ed7
    int result = (int)(1); // (int)&FUN_113f5ee3
    while (v4 != a2) {
        v3 += 2;
        v4 = (short)(*(short *)v3);
        result = (int)(0);
        if (v4 == 0) {
            break;
        }
        result = (int)(1);
    }
    return (int)(result);
}

// Reference entry 113f5f10; body size 46 bytes.
#line 1 "ENTRY_113f5f10"
int FUN_113f5f10(int a1, int a2) {

    int v1 = (int)(*(int *)(*(int *)a1 + 24)); // (int)&FUN_113f5f19
    int v2 = (int)(*(int *)v1); // (int)&FUN_113f5f1c
    if (v2 == 0) {
        return (int)(0);
    }
    int v3 = (int)(v2); // (int)&FUN_113f5f2a
    int v4 = (int)(0); // (int)((int(*)(int a1, int a2))&FUN_113f5f10)
    int result = (int)(1); // (int)&FUN_113f5f28
    while (v3 != a2) {
        v3 = (int)(*(int *)(v1 + 4 + 4 * v4));
        v4++;
        result = (int)(0);
        if (v3 == 0) {
            break;
        }
        result = (int)(1);
    }
    return (int)(result);
}

// Reference entry 113f69b0; body size 44 bytes.
#line 1 "ENTRY_113f69b0"
int FUN_113f69b0(short a1) {

    int result = (int)(0); // (int)((int(*)(short a1))&FUN_113f69b0)
    switch (a1) {
        case 29: {
        }
        case 23: {
        }
        case 24: {
        }
        case 25: {
        }
        case 30: {
            result = (int)(1);
            break;
        }
    }
    return (int)(result);
}

// Reference entry 113f6b20; body size 46 bytes.
#line 1 "ENTRY_113f6b20"
int FUN_113f6b20(int a1) {

    int v1 = (int)(*(int *)(a1 + 60)); // (int)&FUN_113f6b24
    char v2 = (char)(*(char *)(v1 + 2)); // (int)&FUN_113f6b27
    char v3 = (char)(v2); // (int)&FUN_113f6b2c
    if (v2 == 3) {
        v3 = (char)(*(char *)(*(int *)a1 + 10));
    }
    if (v3 != 0) {
        *(char*)(v1 + 3) = (char)(1);
        return (int)(0);
    }
    *(int*)(*(int *)(a1 + 56) + 108) = (int)(128);
    return (int)(1);
}

// Reference entry 113f6b60; body size 242 bytes.
#line 1 "ENTRY_113f6b60"
int FUN_113f6b60(int a1) {

    if (*(int *)(*(int *)a1 + 152) == 0) {
        return (int)(-1);
    }
    int v1 = (int)(*(int *)(a1 + 60)); // (int)&FUN_113f6b68
    if (*(char *)v1 == 0 || *(short *)(v1 + 1076) != 0) {
        return (int)(-1);
    }
    int v2 = (int)(*(int *)(v1 + 16)); // (int)&FUN_113f6b8f
int *v3 = (int *)((int)((int *)(a1 + 56))); // (int)&FUN_113f6b92
    int v4 = (int)(*v3); // (int)&FUN_113f6b92
    if (*(int *)(v2) != *(int *)((v4 + 16) )|| (*(char *)(v4 + 140) & 8) == 0) {
        return (int)(-1);
    }
    int v5; // (int)((int(*)(int a1))&FUN_113f6b60)
    int v6 = (int)(thunk_FUN_113db800(a1, v5, v5), 0); // (int)&FUN_113f6bae
    int v7 = (int)(v6); // (int)&FUN_113f6bba
    if (v6 == 0) {
        if (*(int *)(*v3 + 196) == (int)(v6)) {
            return (int)(0);
        }
        return (int)(-1);
    }
    while (*(char *)v7 != 0) {
        v7++;
    }
    uint v8 = (uint)(v7 - v6); // (int)&FUN_113f6bdf
    int v9 = (int)(*(int *)(*v3 + 196)); // (int)&FUN_113f6be1
    if (v9 == 0) {
        return (int)(-1);
    }
    int v10 = (int)(v9);
    int v11 = (int)(v10 + 1); // (int)&FUN_113f6bf6
    while (*(char *)v10 != 0) {
        v10 = (int)(v11);
        v11 = (int)(v10 + 1);
    }
    if (v8 != v10 - v9) {
        return (int)(-1);
    }
    int v12 = (int)(v8 - 4); // (int)&FUN_113f6bff
    int v13 = (int)(v6); // (int)&FUN_113f6c02
    int v14 = (int)(v9); // (int)&FUN_113f6c02
    int v15 = (int)(v12); // (int)&FUN_113f6c02
    int v16 = (int)(v6); // (int)&FUN_113f6c02
    int v17 = (int)(v9); // (int)&FUN_113f6c02
    int v18; // (int)((int(*)(int a1))&FUN_113f6b60)
    int v19; // (int)((int(*)(int a1))&FUN_113f6b60)
    int v20; // (int)((int(*)(int a1))&FUN_113f6b60)
    if (v8 < 4) {
      lab_0x113f6c15:
        v18 = (int)(v15);
        v19 = (int)(v16);
        v20 = (int)(v17);
        if (v15 == -4) {
            return (int)(0);
        }
    } else {
        int v21 = (int)(v12);
        v18 = (int)(v21);
        v19 = (int)(v13);
        v20 = (int)(v14);
        while (*(int *)(v13) == *(int *)(v14)) {
            int v22 = (int)(v13 + 4); // (int)&FUN_113f6c0a
            int v23 = (int)(v14 + 4); // (int)&FUN_113f6c0d
            int v24 = (int)(v21 - 4); // (int)&FUN_113f6c10
            v13 = (int)(v22);
            v14 = (int)(v23);
            v15 = (int)(v24);
            v16 = (int)(v22);
            v17 = (int)(v23);
            if (v21 < 4) {
                goto lab_0x113f6c15;
            }
            v21 = (int)(v24);
            v18 = (int)(v21);
            v19 = (int)(v13);
            v20 = (int)(v14);
        }
    }
    if (*(char *)(v19) != *(char *)(v20)) {
        return (int)(-1);
    }
    if (v18 == -3) {
        return (int)(0);
    }
    if (*(char *)((v19 + 1)) != *(char *)((v20 + 1))) {
        return (int)(-1);
    }
    if (v18 == -2) {
        return (int)(0);
    }
    if (*(char *)((v19 + 2)) != *(char *)((v20 + 2))) {
        return (int)(-1);
    }
    if (v18 == -1) {
        return (int)(0);
    }
    if (*(char *)((v19 + 3)) != *(char *)((v20 + 3))) {
        return (int)(-1);
    }
    return (int)(0);
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
int FUN_113f6d50(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_113f6d50)
    int result = (int)(thunk_FUN_113e56d0(a1, 0, v1), 0); // (int)&FUN_113f6d58
    if (result != 0) {
        return (int)(result);
    }
    int v2 = (int)(*(int *)(a1 + 124)); // (int)&FUN_113f6d64
    *(int*)(a1 + 176) = (int)(1);
    if (v2 != 22) {
        if (v2 == 23) {
int *v3 = (int *)((int)((int *)(a1 + 120))); // (int)&FUN_113f6d87
            if (*v3 != (int)((0))) {
                return (int)(1);
            }
            *v3 = (int)(*(int *)(a1 + 116));
            int result2 = (int)(thunk_FUN_113ff170(a1, *(int *)(a1 + 128)), 0); // (int)&FUN_113f6d9a
            if (result2 == 0) {
                return (int)(1);
            }
            return (int)(result2);
        }
    } else {
        if (*(char *)*(int *)(a1 + 116) == 5) {
            return (int)(0);
        }
    }
    thunk_FUN_113e50f0(a1, 10, -0x7700);
    return (int)(-0x7700);
}

// Reference entry 113f6e00; body size 85 bytes.
#line 1 "ENTRY_113f6e00"
int FUN_113f6e00(int a1, int a2, int a3, int a4, int a5) {

    *(int*)a5 = (int)((int)(0));
    short v1 = (short)(a2); // (int)&FUN_113f6e0e
    switch (v1) {
        default: {
            if (v1 != 260 && (v1 & -4) != 256) {
                return (int)(-0x6c00);
            }
        }
        case 29: {
        }
        case 23: {
        }
        case 24: {
        }
        case 25: {
        }
        case 30: {
            return (int)(thunk_FUN_113ff3f0(a1, a2, a3, a4, a5));
        }
    }
}

// Reference entry 113f6e70; body size 39 bytes.
#line 1 "ENTRY_113f6e70"
int FUN_113f6e70(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_113f6e70)
    thunk_FUN_113ff5d0(a1, v1);
    char v2 = (char)(*(char *)(*(int *)(a1 + 60) + 39)); // (int)&FUN_113f6e81
    *(int*)(a1 + 4) = (int)((v2 & 5) != 0 ? 28 : 27);
    return (int)(0);
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

// Reference entry 113f80a0; body size 38 bytes.
#line 1 "ENTRY_113f80a0"
int FUN_113f80a0(int a1, int a2, int a3) {

    if (a2 == a3) {
        return (int)(0);
    }
    thunk_FUN_113e50f0(a1, 50, -0x7300);
    return (int)(-0x7300);
}

// Reference entry 113f80d0; body size 200 bytes.
#line 1 "ENTRY_113f80d0"
int FUN_113f80d0(int a1, int a2, int a3) {

    if (FUN_113f5cf0(a2, a3, 1) != 0) {
        thunk_FUN_113e50f0(a1, 50, -0x7300);
        return (int)(-0x7300);
    }
    unsigned char v1 = (unsigned char)(*(char *)a2); // (int)&FUN_113f80ef
    if (v1 >= 3) {
        thunk_FUN_113e50f0(a1, 47, -0x6600);
        return (int)(-0x6e00);
    }
    int v2 = (int)(v1); // (int)&FUN_113f80ef
    int v3 = (int)(a2 + 1); // (int)&FUN_113f80f2
    if (FUN_113f5cf0(v3, a3, v2) != 0) {
        thunk_FUN_113e50f0(a1, 50, -0x7300);
        return (int)(-0x7300);
    }
    int v4 = (int)(0); // (int)&FUN_113f8127
    int v5 = (int)(v2); // (int)&FUN_113f8127
    int v6 = (int)(v3); // (int)&FUN_113f8127
    if (v1 == 0) {
        *(char*)(*(int *)(a1 + 60) + 39) = (char)(0);
        return (int)(0);
    }
    char v7 = (char)(*(char *)v6); // (int)&FUN_113f8130
    int v8 = (int)(1); // (int)&FUN_113f813a
    if (v7 != 0) {
        v8 = (int)(4);
        if (v7 != 1) {
            thunk_FUN_113e50f0(a1, 47, -0x6600);
            return (int)(-0x6600);
        }
    }
    v5--;
    v4 |= v8;
    v6++;
    while (v5 != 0) {
        v7 = (char)(*(char *)v6);
        v8 = (int)(1);
        if (v7 != 0) {
            v8 = (int)(4);
            if (v7 != 1) {
                thunk_FUN_113e50f0(a1, 47, -0x6600);
                return (int)(-0x6600);
            }
        }
        v5--;
        v4 |= v8;
        v6++;
    }
    *(char*)(*(int *)(a1 + 60) + 39) = (char)((char)v4);
    return (int)(0);
}

// Reference entry 113f8936; body size 140 bytes.
#line 1 "ENTRY_113f8936"
int FUN_113f8936(int a1, int a2, int a3, int a4) {

    int v1; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_113f8936)
    int v2 = (int)(*(int *)(v1 + 132)); // (int)&FUN_113f893c
    int v3; // (int)&FUN_113f8939
    short v4; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_113f8936)
    if (v2 == 0) {
        goto lab_0x113f8999;
    } else {
        short v5 = (short)(*(short *)v2); // (int)&FUN_113f8946
        if (v5 == 0) {
            goto lab_0x113f8999;
        } else {
            v3 = (int)(v1 & 0xffff);
            v4 = (short)(v1);
            short v6 = (short)(v5); // (int)&FUN_113f8955
            int v7 = (int)(v2); // (int)&FUN_113f8955
            while (v6 != v4) {
                v7 += 2;
                v6 = (short)(*(short *)v7);
                if (v6 == 0) {
                    goto lab_0x113f8999;
                }
            }
            switch (v4) {
                case 29: {
                    goto lab_0x113f897e;
                }
                case 25: {
                    goto lab_0x113f897e;
                }
                case 24: {
                    goto lab_0x113f897e;
                }
                case 23: {
                    goto lab_0x113f897e;
                }
                default: {
                    if (v3 != 30) {
                        goto lab_0x113f8999;
                    } else {
                        goto lab_0x113f897e;
                    }
                }
            }
        }
    }
  lab_0x113f8999:
    if ((uint)v1 < v1) {
        FUN_113f8918();
    }
    return (int)(0);
  lab_0x113f897e:
    if (thunk_FUN_113db910(v3) != 0) {
short *v8 = (short *)((short)((short *)(*(int *)(v1 + 60) + 40))); // (int)&FUN_113f898e
        if (*v8 == (short)((0))) {
            *v8 = (short)(v4);
        }
    }
    goto lab_0x113f8999;
}

// Reference entry 113f8a10; body size 193 bytes.
#line 1 "ENTRY_113f8a10"
int FUN_113f8a10(int a1, int a2, int a3) {

    int v1 = (int)(FUN_113f5cf0(), 0); // (int)&FUN_113f8a20
    int v2; // bp-16, (int)((int(*)(int a1, int a2, int a3))&FUN_113f8a10)
    int v3 = (int)(&v2); // (int)&FUN_113f8a29
    if (v1 != 0 || FUN_113f5cf0() != 0) {
        *(int*)(v3 - 4) = (int)(-0x7300);
        *(int*)(v3 - 8) = (int)(50);
        *(int*)(v3 - 12) = (int)(a1);
        thunk_FUN_113e50f0();
        return (int)(-0x7300);
    }
    int v4 = (int)(a2 + 1); // (int)&FUN_113f8a37
    uint v5 = (uint)(v4 + (int)*(char *)a2); // (int)&FUN_113f8a47
int *v6 = (int *)((int)((int *)(v3 - 4)));
int *v7 = (int *)((int)((int *)(v3 - 8)));
int *v8 = (int *)((int)((int *)(v3 - 12)));
    if (v4 >= v5) {
        *v6 = (int)(-0x6e80);
        *v7 = (int)(70);
        *v8 = (int)(a1);
        thunk_FUN_113e50f0();
        return (int)(-0x6e80);
    }
int *v9 = (int *)((int)((int *)a1));
    int v10 = (int)(v4); // (int)&FUN_113f8a7a
    *v6 = (int)(2);
    *v7 = (int)(v5);
    *v8 = (int)(v10);
    while (FUN_113f5cf0() == 0) {
        *v6 = (int)((int)*(char *)(*v9 + 9));
        *v7 = (int)(v10);
        int v11 = (int)(thunk_FUN_113e5b80(), 0); // (int)&FUN_113f8a6a
        short v12 = (short)(v11); // (int)&FUN_113f8a7d
        if (v12 == 772) {
            return (int)(v11 & 0xffff);
        }
        if (v12 == 771) {
            int v13 = (int)(*v9); // (int)&FUN_113f8a87
            if (*(int *)(v13 + 4) <= 771) {
                if (*(int *)v13 >= 771) {
                    return (int)(v11 & 0xffff);
                }
            }
        }
        v10 += 2;
        if (v10 >= v5) {
            *v6 = (int)(-0x6e80);
            *v7 = (int)(70);
            *v8 = (int)(a1);
            thunk_FUN_113e50f0();
            return (int)(-0x6e80);
        }
        *v6 = (int)(2);
        *v7 = (int)(v5);
        *v8 = (int)(v10);
    }
    *(int*)(v3 - 4) = (int)(-0x7300);
    *(int*)(v3 - 8) = (int)(50);
    *(int*)(v3 - 12) = (int)(a1);
    thunk_FUN_113e50f0();
    return (int)(-0x7300);
}

// Reference entry 113f8b10; body size 102 bytes.
#line 1 "ENTRY_113f8b10"
int FUN_113f8b10(int a1) {

    int v1 = (int)(*(int *)(a1 + 60)); // (int)&FUN_113f8b18
    int result = (int)(v1); // (int)&FUN_113f8b26
    if (*(int *)(v1 + 1084) == 0) {
        result = (int)(*(int *)a1);
        if (*(int *)(result + 116) == 0) {
            return (int)(result);
        }
    }
    short v2 = (short)(*(short *)(v1 + 44)); // (int)&FUN_113f8b36
    if (v2 == 0) {
        return (int)(result);
    }
    int result2 = (int)(*(int *)a1); // (int)&FUN_113f8b42
    int v3 = (int)(*(int *)(result2 + 128)); // (int)&FUN_113f8b45
    if (v3 == 0) {
        return (int)(result2);
    }
    ushort result3 = (ushort)(*(short *)v3); // (int)&FUN_113f8b53
    if (result3 == 0) {
        return (int)(0);
    }
    if (result3 == v2) {
        return (int)(result3);
    }
    int v4 = (int)(v3); // (int)&FUN_113f8b64
    v4 += 2;
    ushort result4 = (ushort)(*(short *)v4); // (int)&FUN_113f8b66
    while (result4 != 0 && result4 != v2) {
        v4 += 2;
        result4 = (ushort)(*(short *)v4);
    }
    return (int)(result4);
}

// Reference entry 113f8c50; body size 400 bytes.
#line 1 "ENTRY_113f8c50"
int FUN_113f8c50(int a1, int a2) {
int *v1 = (int *)((int)((int *)a1)); // (int)&FUN_113f8c55
    int result = (int)(*(int *)(*v1 + 184)); // (int)&FUN_113f8c57
    if (result != 0) {
        return (int)(result);
    }
int *v2 = (int *)((int)((int *)(a1 + 60))); // (int)&FUN_113f8c6f
    *(int*)(*v2 + 1700) = (int)(0);
    *(int*)(*v2 + 1704) = (int)(0);
    int v3; // (int)((int(*)(int a1, int a2))&FUN_113f8c50)
    int result2 = (int)(thunk_FUN_113fdba0(a1, v3), 0); // (int)&FUN_113f8c8a
    if (result2 != 0) {
        return (int)(result2);
    }
    int v4 = (int)(*v2); // (int)&FUN_113f8c9a
    if ((*(int *)(v4 + 1488) & 0x4000) == 0) {
        return (int)(0);
    }
    int v5; // (int)((int(*)(int a1, int a2))&FUN_113f8c50)
    int v6; // (int)((int(*)(int a1, int a2))&FUN_113f8c50)
    char v7; // (int)((int(*)(int a1, int a2))&FUN_113f8c50)
    int v8; // (int)((int(*)(int a1, int a2))&FUN_113f8c50)
    int v9; // (int)((int(*)(int a1, int a2))&FUN_113f8c50)
    int v10; // (int)((int(*)(int a1, int a2))&FUN_113f8c50)
    int v11; // (int)((int(*)(int a1, int a2))&FUN_113f8c50)
    if (a2 != 0) {
        v7 = (char)(0);
        goto lab_0x113f8dae;
    } else {
        if (*(int *)(*v1 + 152) == (int)(a2)) {
            v7 = (char)(0);
            goto lab_0x113f8dae;
        } else {
            if (*(char *)v4 == (char)(a2)) {
                v7 = (char)(0);
                goto lab_0x113f8dae;
            } else {
                if (*(short *)(v4 + 1076) != (short)(a2)) {
                    v7 = (char)(0);
                    goto lab_0x113f8dae;
                } else {
int *v12 = (int *)((int)((int *)(a1 + 56))); // (int)&FUN_113f8ce1
                    int v13 = (int)(*v12); // (int)&FUN_113f8ce1
                    if (*(int *)(*(int *)(v4 + 16)) != *(int *)((v13 + 16))) {
                        v7 = (char)(0);
                        goto lab_0x113f8dae;
                    } else {
                        if ((*(char *)(v13 + 140) & 8) == 0) {
                            v7 = (char)(0);
                            goto lab_0x113f8dae;
                        } else {
                            int v14 = (int)(thunk_FUN_113db800(a1, v3, v3), 0); // (int)&FUN_113f8cfd
                            if (v14 != 0) {
                                int v15 = (int)(v14);
                                int v16 = (int)(v15 + 1); // (int)&FUN_113f8d2b
                                while (*(char *)v15 != 0) {
                                    v15 = (int)(v16);
                                    v16 = (int)(v15 + 1);
                                }
                                uint v17 = (uint)(v15 - v14); // (int)&FUN_113f8d30
                                int v18 = (int)(*(int *)(*v12 + 196)); // (int)&FUN_113f8d32
                                if (v18 == 0) {
                                    v7 = (char)(0);
                                    goto lab_0x113f8dae;
                                } else {
                                    int v19 = (int)(v18);
                                    int v20 = (int)(v19 + 1); // (int)&FUN_113f8d47
                                    while (*(char *)v19 != 0) {
                                        v19 = (int)(v20);
                                        v20 = (int)(v19 + 1);
                                    }
                                    if (v17 != v19 - v18) {
                                        v7 = (char)(0);
                                        goto lab_0x113f8dae;
                                    } else {
                                        int v21 = (int)(v17 - 4); // (int)&FUN_113f8d50
                                        int v22 = (int)(v14); // (int)&FUN_113f8d53
                                        int v23 = (int)(v18); // (int)&FUN_113f8d53
                                        v5 = (int)(v21);
                                        v8 = (int)(v14);
                                        v10 = (int)(v18);
                                        if (v17 < 4) {
                                            goto lab_0x113f8d66;
                                        } else {
                                            int v24 = (int)(v21);
                                            v6 = (int)(v24);
                                            v9 = (int)(v22);
                                            v11 = (int)(v23);
                                            while (*(int *)(v22) == *(int *)(v23)) {
                                                int v25 = (int)(v22 + 4); // (int)&FUN_113f8d5b
                                                int v26 = (int)(v23 + 4); // (int)&FUN_113f8d5e
                                                int v27 = (int)(v24 - 4); // (int)&FUN_113f8d61
                                                v22 = (int)(v25);
                                                v23 = (int)(v26);
                                                v5 = (int)(v27);
                                                v8 = (int)(v25);
                                                v10 = (int)(v26);
                                                if (v24 < 4) {
                                                    goto lab_0x113f8d66;
                                                }
                                                v24 = (int)(v27);
                                                v6 = (int)(v24);
                                                v9 = (int)(v22);
                                                v11 = (int)(v23);
                                            }
                                            goto lab_0x113f8d6b;
                                        }
                                    }
                                }
                            } else {
                                v7 = (char)(1);
                                if (*(int *)(*v12 + 196) != (int)(v14)) {
                                    v7 = (char)(0);
                                    goto lab_0x113f8dae;
                                } else {
                                    goto lab_0x113f8dae;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x113f8d66:
    v6 = (int)(v5);
    v9 = (int)(v8);
    v11 = (int)(v10);
    v7 = (char)(1);
    if (v5 == -4) {
        goto lab_0x113f8dae;
    } else {
        goto lab_0x113f8d6b;
    }
  lab_0x113f8dae:
    *(char*)(*v2 + 4) = (char)(v7);
    if (*(char *)(*v2 + 4) == 0) {
        *(char*)(a1 + 189) = (char)(a2 != 0 ? 2 : 1);
        return (int)(0);
    }
    int result3 = (int)(thunk_FUN_113fc110(a1), 0); // (int)&FUN_113f8dbf
    if (result3 != 0) {
        return (int)(result3);
    }
    return (int)(0);
  lab_0x113f8d6b:
    if (*(char *)(v9) != *(char *)(v11)) {
        v7 = (char)(0);
        goto lab_0x113f8dae;
    } else {
        v7 = (char)(1);
        if (v6 == -3) {
            goto lab_0x113f8dae;
        } else {
            if (*(char *)((v9 + 1)) != *(char *)((v11 + 1))) {
                v7 = (char)(0);
                goto lab_0x113f8dae;
            } else {
                v7 = (char)(1);
                if (v6 == -2) {
                    goto lab_0x113f8dae;
                } else {
                    if (*(char *)((v9 + 2)) != *(char *)((v11 + 2))) {
                        v7 = (char)(0);
                        goto lab_0x113f8dae;
                    } else {
                        v7 = (char)(1);
                        if (v6 == -1) {
                            goto lab_0x113f8dae;
                        } else {
                            v7 = (char)(1);
                            if (*(char *)((v9 + 3)) != *(char *)((v11 + 3))) {
                                v7 = (char)(0);
                                goto lab_0x113f8dae;
                            } else {
                                goto lab_0x113f8dae;
                            }
                        }
                    }
                }
            }
        }
    }
}

// Reference entry 113f8e70; body size 64 bytes.
#line 1 "ENTRY_113f8e70"
int FUN_113f8e70(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_113f8e70)
    if (*(char *)(*(int *)(a1 + 60) + 37) != 0) {
        thunk_FUN_113e50f0(a1, 40, -0x6e00, v1);
        return (int)(-0x6e00);
    }
    int v2 = (int)(thunk_FUN_113ff070(a1, v1), 0); // (int)&FUN_113f8e96
    int result = (int)(v2); // (int)&FUN_113f8ea0
    if (v2 == 0) {
        thunk_FUN_113de340(a1, v2);
        result = (int)(0);
    }
    return (int)(result);
}

// Reference entry 113f90c0; body size 56 bytes.
#line 1 "ENTRY_113f90c0"
int FUN_113f90c0(int a1) {

    int v1 = (int)(*(int *)(*(int *)a1 + 40)); // (int)&FUN_113f90d5
    int result = (int)(v1); // (int)&FUN_113f90df
    if (v1 == 0) {
        *(int*)(*(int *)(a1 + 56) + 8) = (int)(v1);
        result = (int)(0);
    }
    return (int)(result);
}

// Reference entry 113f9110; body size 38 bytes.
#line 1 "ENTRY_113f9110"
int FUN_113f9110(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_113f9110)
    int v2 = (int)(thunk_FUN_113ffdd0(a1, v1), 0); // (int)&FUN_113f9116
    int result = (int)(v2); // (int)&FUN_113f9120
    if (v2 == 0) {
        thunk_FUN_113fc330(a1);
        *(int*)(a1 + 4) = (int)(15);
        result = (int)(0);
    }
    return (int)(result);
}

// Reference entry 113f9740; body size 73 bytes.
#line 1 "ENTRY_113f9740"
int FUN_113f9740(int a1, int a2) {

    int v1 = (int)(*(int *)(*(int *)a1 + 24)); // (int)&FUN_113f974a
    int v2 = (int)(*(int *)v1); // (int)&FUN_113f974d
    if (v2 == 0) {
        return (int)(0);
    }
    int v3 = (int)(v2); // (int)&FUN_113f975b
    int v4 = (int)(0); // (int)((int(*)(int a1, int a2))&FUN_113f9740)
    while (v3 != a2) {
        v3 = (int)(*(int *)(v1 + 4 + 4 * v4));
        v4++;
        if (v3 == 0) {
            return (int)(0);
        }
    }
    int v5 = (int)(thunk_FUN_113e9f00(a2), 0); // (int)&FUN_113f976a
    int v6 = (int)(*(int *)(a1 + 8)); // (int)&FUN_113f976f
    return (int)(thunk_FUN_113df6a0(a1, v5, v6, v6) != 0 ? 0 : v5);
}

// Reference entry 113f98d0; body size 121 bytes.
#line 1 "ENTRY_113f98d0"
int FUN_113f98d0(int a1, int a2, int a3, int a4) {

    int v1 = (int)(0); // bp-4, (int)&FUN_113f98e3
int *v2 = (int *)((int)((int *)a4)); // (int)&FUN_113f98eb
    *v2 = (int)(0);
    int v3; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_113f98d0)
    if (FUN_113f5cf0(a2, a3, 3, v3, v3, v1) != 0) {
        return (int)(-0x6a00);
    }
    *(char*)a2 = (char)((int)(0));
    int v4 = (int)(a2 + 3); // (int)&FUN_113f9914
    int v5 = (int)(thunk_FUN_113dff50(a1, v4, a3, &v1, v3, v3), 0); // (int)&FUN_113f991c
    int result = (int)(v5); // (int)&FUN_113f9926
    if (v5 == 0) {
        int v6 = (int)(a2 + 1); // (int)&FUN_113f9910
        int v7 = (int)(v1 + v4); // (int)&FUN_113f992c
        *(short*)v6 = (short)((int)(llvm_bswap_i16((short)(v7 - v6) - 2), 0), 0);
        *v2 = (int)(v7 - a2);
        result = (int)(0);
    }
    return (int)(result);
}

// Reference entry 113f9ad0; body size 141 bytes.
#line 1 "ENTRY_113f9ad0"
int FUN_113f9ad0(int a1, int a2, int a3, int a4) {

    int v1 = (int)(a2);
int *v2 = (int *)((int)((int *)a4)); // (int)&FUN_113f9ae2
    *v2 = (int)(0);
    int v3; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_113f9ad0)
    if (FUN_113f5cf0(a2, a3, 2, v3, v3) != 0) {
        return (int)(-0x6a00);
    }
    int v4 = (int)(a2 + 2); // (int)&FUN_113f9b08
    int result = (int)(thunk_FUN_113dfb10(a1, v4, a3, &v1, v3, v3), 0); // (int)&FUN_113f9b0d
    if (result != 0) {
        return (int)(result);
    }
    int v5 = (int)(v1 + v4); // (int)&FUN_113f9b1c
    int v6 = (int)(v5); // (int)&FUN_113f9b24
    if (*(char *)(*(int *)(a1 + 60) + 4) != 0) {
        int result2 = (int)(thunk_FUN_11400690(a1, 0, v5, a3, &v1), 0); // (int)&FUN_113f9b30
        if (result2 != 0) {
            return (int)(result2);
        }
        v6 = (int)(v1 + v5);
    }
    int v7 = (int)(v6 - a2); // (int)&FUN_113f9b42
    *(short*)a2 = (short)((int)(llvm_bswap_i16((short)v7 - 2), 0), 0);
    *v2 = (int)(v7);
    return (int)(0);
}

// Reference entry 113fa480; body size 132 bytes.
#line 1 "ENTRY_113fa480"
int FUN_113fa480(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_113fa480)
    int result = (int)(thunk_FUN_11400740(a1, v1), 0); // (int)&FUN_113fa486
    if (result != 0) {
        return (int)(result);
    }
    int result2 = (int)(thunk_FUN_113fbfe0(a1, v1), 0); // (int)&FUN_113fa494
    if (result2 != 0) {
        thunk_FUN_113e50f0(a1, 40, -0x6e00);
        return (int)(result2);
    }
int *v2 = (int *)((int)((int *)(a1 + 60))); // (int)&FUN_113fa4b7
    int v3 = (int)(*v2); // (int)&FUN_113fa4b7
    if (*(char *)(v3 + 4) != 0) {
        thunk_FUN_113e5f90(a1, *(int *)(v3 + 1696));
        *(int*)(a1 + 4) = (int)(20);
        return (int)(0);
    }
    thunk_FUN_113e5f90(a1, *(int *)(v3 + 1500));
    *(int*)(a1 + 4) = (int)(4 * (int)(*(char *)(*v2 + 3) == 0) + 7);
    return (int)(0);
}

// Reference entry 113fac60; body size 92 bytes.
#line 1 "ENTRY_113fac60"
int FUN_113fac60(short a1) {

    return (int)((bool)((ushort)(a1 - 18) < 13));
}

// Reference entry 113face0; body size 44 bytes.
#line 1 "ENTRY_113face0"
int FUN_113face0(short a1) {

    int result = (int)(0); // (int)((int(*)(short a1))&FUN_113face0)
    switch (a1) {
        case 29: {
        }
        case 23: {
        }
        case 24: {
        }
        case 25: {
        }
        case 30: {
            result = (int)(1);
            break;
        }
    }
    return (int)(result);
}

// Reference entry 113faf40; body size 73 bytes.
#line 1 "ENTRY_113faf40"
int FUN_113faf40(int a1) {

    if (*(int *)(a1 + 8) == 771) {
        int v1; // (int)((int(*)(int a1))&FUN_113faf40)
        *(int*)(*(int *)(a1 + 60) + 1316) = (int)(llvm_bswap_i32(v1), 0);
    }
    return (int)(*(int *)(*(int *)a1 + 40));
}

// Reference entry 113fdcf0; body size 44 bytes.
#line 1 "ENTRY_113fdcf0"
int FUN_113fdcf0(short a1) {

    int result = (int)(0); // (int)((int(*)(short a1))&FUN_113fdcf0)
    switch (a1) {
        case 29: {
        }
        case 23: {
        }
        case 24: {
        }
        case 25: {
        }
        case 30: {
            result = (int)(1);
            break;
        }
    }
    return (int)(result);
}

// Reference entry 113fdf20; body size 35 bytes.
#line 1 "ENTRY_113fdf20"
int FUN_113fdf20(int a1) {
int *v1 = (int *)((int)((int *)a1)); // (int)&FUN_113fdf24
    uint v2 = (uint)(*v1); // (int)&FUN_113fdf24
    uint v3 = (uint)(v2 / 4);
    int result = (int)(v3 & 1024 | v2 | v3 & 2048);
    if ((v2 & 0x3000) != 0) {
        *v1 = (int)(result);
    }
    return (int)(result);
}

// Reference entry 113fdf80; body size 48 bytes.
#line 1 "ENTRY_113fdf80"
int FUN_113fdf80(int result, uint a2) {

    uint v1 = (uint)(a2 / 4); // (int)&FUN_113fdf8e
    *(int*)(result + 8) = (int)(v1 & 1024 | a2 | v1 & 2048);
    return (int)(result);
}

// Reference entry 113feb30; body size 119 bytes.
#line 1 "ENTRY_113feb30"
int FUN_113feb30(uint a1, int a2, int a3, int a4, int a5, int a6, int result) {

    *(char*)(a6 + 1) = (char)((char)a1);
    *(char*)a6 = (char)((int)((char)(a1 / 256)));
    *(char*)(a6 + 2) = (char)((char)a3 + 6);
    *(int*)(a6 + 3) = (int)(*(int *)&DAT_11bfd9b8);
    *(short*)(a6 + 7) = (short)(*(short *)&DAT_11bfd9bc);
    int v1 = (int)(a6 + 9); // (int)&FUN_113feb72
    memcpy((void *)(v1), (void *)(a2), a3);
    int v2 = (int)(v1 + a3);
    *(char*)v2 = (char)((int)((char)a5));
    if (a5 != 0) {
        memcpy((char *)(v2 + 1), (void *)(a4), a5);
    }
    *(int*)result = (int)((int)(a3 + 10 + a5));
    return (int)(result);
}

// Reference entry 113febd0; body size 42 bytes.
#line 1 "ENTRY_113febd0"
int FUN_113febd0(int a1) {

    int v1 = (int)(*(int *)(a1 + 60)); // (int)&FUN_113febd4
    unsigned char v2 = (unsigned char)(*(char *)(*(int *)(v1 + 16) + 9)); // (int)&FUN_113febda
    int v3 = (int)(v1 + 1504); // (int)&FUN_113febde
    return (int)(thunk_FUN_113fd220((int)v2 | 0x2000000, v3, 0, 0, v3));
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
int FUN_11400820(int a1) {
int *v1 = (int *)((int)((int *)a1)); // (int)&FUN_11400824
    uint v2 = (uint)(*v1); // (int)&FUN_11400824
    uint v3 = (uint)(v2 / 4);
    int result = (int)(v3 & 1024 | v2 | v3 & 2048);
    if ((v2 & 0x3000) != 0) {
        *v1 = (int)(result);
    }
    return (int)(result);
}

// Reference entry 11400880; body size 33 bytes.
#line 1 "ENTRY_11400880"
int FUN_11400880(int a1, uint a2) {

    if (a2 < 0xfff9) {
        *(short*)(a1 + 2) = (short)((short)a2);
        return (int)(a2 & 0xffff);
    }
    *(short*)(a1 + 2) = (short)(-1);
    return (int)(0xffff);
}

// Reference entry 114008c0; body size 48 bytes.
#line 1 "ENTRY_114008c0"
int FUN_114008c0(int result, uint a2) {

    uint v1 = (uint)(a2 / 4); // (int)&FUN_114008ce
    *(int*)(result + 8) = (int)(v1 & 1024 | a2 | v1 & 2048);
    return (int)(result);
}

// Reference entry 11400cb0; body size 100 bytes.
#line 1 "ENTRY_11400cb0"
int FUN_11400cb0(int a1, int a2, int a3) {

    int v1 = (int)(a3 - a2); // (int)&FUN_11400cb4
    int v2 = (int)(*(int *)(a1 + 60)); // (int)&FUN_11400cbd
    if ((int)(v1) != *(int *)(v2 + 1312)) {
        thunk_FUN_113e50f0(a1, 50, -0x7300);
        return (int)(-0x7300);
    }
    int v3; // (int)((int(*)(int a1, int a2, int a3))&FUN_11400cb0)
    if (thunk_FUN_114351b0(a2, v2 + 1245, v1, v3) == 0) {
        return (int)(0);
    }
    thunk_FUN_113e50f0(a1, 51, -0x6e00);
    return (int)(-0x6e00);
}

// Reference entry 11400d30; body size 40 bytes.
#line 1 "ENTRY_11400d30"
int FUN_11400d30(int a1) {

    int v1 = (int)(*(int *)(a1 + 60)); // (int)&FUN_11400d36
    unsigned char v2 = (unsigned char)(*(char *)(*(int *)a1 + 8)); // (int)&FUN_11400d39
    return (int)(thunk_FUN_113fbdf0(a1, v1 + 1245, 64, v1 + 1312, (int)v2));
}

// Reference entry 11400d70; body size 46 bytes.
#line 1 "ENTRY_11400d70"
int FUN_11400d70(int a1) {

    int v1 = (int)(*(int *)(a1 + 60)); // (int)&FUN_11400d79
    char v2 = (char)(*(char *)(*(int *)a1 + 8)); // (int)&FUN_11400d7c
    int v3; // (int)((int(*)(int a1))&FUN_11400d70)
    return (int)(thunk_FUN_113fbdf0(a1, v1 + 1245, 64, v1 + 1312, (int)(v2 == 0), v3));
}

// Reference entry 11400db0; body size 130 bytes.
#line 1 "ENTRY_11400db0"
int FUN_11400db0(int a1) {

    char v1 = (char)(*(char *)(*(int *)(a1 + 60) + 2)); // (int)&FUN_11400db7
    char v2 = (char)(v1); // (int)&FUN_11400dbc
    if (v1 == 3) {
        v2 = (char)(*(char *)(*(int *)a1 + 10));
    }
    int v3 = (int)(*(int *)(a1 + 56)); // (int)&FUN_11400dc3
    int v4 = (int)(*(int *)(v3 + 104)); // (int)&FUN_11400dcb
    int v5; // (int)((int(*)(int a1))&FUN_11400db0)
    if (v4 != 0) {
        return (int)(thunk_FUN_113df720(a1, (int)v2, v4, 0, 0, v5, v5));
    }
    char v6 = (char)(*(char *)(*(int *)a1 + 8)); // (int)&FUN_11400dd4
    if (v6 != 1) {
        if (v6 != 0) {
            return (int)(thunk_FUN_113df720(a1, (int)v2, v4, 0, 0, v5, v5));
        }
        thunk_FUN_113e50f0(a1, 41, -0x7780, v5, v5);
        return (int)(-0x7780);
    }
    *(int*)(v3 + 108) = (int)(64);
    if (v2 == 1) {
        return (int)(0);
    }
    thunk_FUN_113e50f0(a1, 41, -0x7480, v5, v5);
    return (int)(-0x7480);
}

// Reference entry 11400e60; body size 301 bytes.
#line 1 "ENTRY_11400e60"
int FUN_11400e60(int a1, uint a2, uint a3) {

    int v1 = (int)(*(int *)(a1 + 60)); // (int)&FUN_11400e68
    int v2; // (int)((int(*)(int a1, uint a2, uint a3))&FUN_11400e60)
    if (v1 == 0) {
        goto lab_0x11400e7a;
    } else {
        int v3 = (int)(*(int *)(v1 + 1080)); // (int)&FUN_11400e70
        v2 = (int)(v3);
        if (v3 != 0) {
            goto lab_0x11400e83;
        } else {
            goto lab_0x11400e7a;
        }
    }
  lab_0x11400e7a:;
    int v4 = (int)(*(int *)(*(int *)a1 + 116)); // (int)&FUN_11400e7c
    v2 = (int)(v4);
    int v5 = (int)(0); // (int)&FUN_11400e81
    if (v4 == 0) {
        goto lab_0x11400e85;
    } else {
        goto lab_0x11400e83;
    }
  lab_0x11400e85:;
    unsigned char v6 = (unsigned char)(*(char *)(v1 + 1492)); // (int)&FUN_11400e93
    uint v7 = (uint)((int)v6); // (int)&FUN_11400e93
    if (a3 >= a2 != a3 - a2 > v7) {
        return (int)(-0x6a00);
    }
    *(char*)a2 = (char)((uint)(v6));
    int v8 = (int)(a2 + 1); // (int)&FUN_11400ebc
    int v9 = (int)(v8); // (int)&FUN_11400ec1
    if (v6 != 0) {
        memcpy((void *)0, (void *)0, 0);
        v9 = (int)(v8 + v7);
    }
    if (FUN_113fef30(v9, a3, 3) != 0) {
        return (int)(-0x6a00);
    }
    int v10; // bp-20, (int)((int(*)(int a1, uint a2, uint a3))&FUN_11400e60)
    int v11 = (int)(&v10); // (int)&FUN_11400e6b
    int v12 = (int)(v9); // (int)&FUN_11400ef7
    int v13 = (int)(v9 + 3); // (int)&FUN_11400ef7
    if (v5 == 0) {
        goto lab_0x11400f55;
      lab_0x11400e83:
        v5 = (int)(*(int *)v2);
        goto lab_0x11400e85;
      lab_0x11400f55:;
        int v14 = (int)(v13 - v12); // (int)&FUN_11400f57
        uint v15 = (uint)(v14 - 3); // (int)&FUN_11400f59
        *(char*)v12 = (char)((int)((char)(v15 / 0x10000)));
        *(char*)(v12 + 1) = (char)((char)(v15 / 256));
        *(char*)(v12 + 2) = (char)((char)v14 - 3);
        *(int *)*(int*)(v11 + 36) = (int)(v13 - a2);
        return (int)(0);
    }
    int v16; // (int)((int(*)(int a1, uint a2, uint a3))&FUN_11400e60)
    int v17 = (int)(v16);
    int v18; // (int)((int(*)(int a1, uint a2, uint a3))&FUN_11400e60)
    uint v19 = (uint)(v18);
    uint v20 = (uint)(*(int *)(v17 + 8)); // (int)&FUN_11400f00
    int * v21; // (int)&FUN_11400f03
    *v21 = (int)(v20);
    while (v19 <= a3) {
        if (v20 + 5 > a3 - v19) {
            break;
        }
        *(char*)(v19 + 2) = (char)((char)v20);
        *(char*)v19 = (char)((uint)((char)(v20 / 0x10000)));
        int * v22; // (int)((int(*)(int a1, uint a2, uint a3))&FUN_11400e60)
        *v22 = (int)(v20);
        *(char*)(v19 + 1) = (char)((char)(v20 / 256));
        int v23 = (int)(v19 + 3); // (int)&FUN_11400f29
        int * v24; // (int)((int(*)(int a1, uint a2, uint a3))&FUN_11400e60)
        *v24 = (int)(*(int *)(v17 + 12));
        int * v25; // (int)((int(*)(int a1, uint a2, uint a3))&FUN_11400e60)
        *v25 = (int)(v23);
        memcpy((void *)0, (void *)0, 0);
        int v26 = (int)(*v21); // (int)&FUN_11400f35
        int v27 = (int)(*(int *)(v17 + 404)); // (int)&FUN_11400f3b
        *(short*)(v26 + v23) = (short)(0);
        int v28 = (int)(v19 + 5 + v26); // (int)&FUN_11400f4b
        if (v27 == 0) {
            v12 = (int)(*(int *)(v11 + 28));
            v13 = (int)(v28);
            goto lab_0x11400f55;
        }
        v17 = (int)(v27);
        v19 = (uint)(v28);
        v20 = (uint)(*(int *)(v17 + 8));
        *v21 = (int)(v20);
    }
    return (int)(-0x6a00);
}

// Reference entry 11400fe0; body size 230 bytes.
#line 1 "ENTRY_11400fe0"
int FUN_11400fe0(int a1, int a2, int a3, int a4) {

    *(int*)a4 = (int)((int)(0));
    int v1 = (int)(*(int *)(a1 + 60)); // (int)&FUN_11401018
    int v2; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_11400fe0)
    if (v1 == 0) {
        goto lab_0x11401049;
    } else {
        int v3 = (int)(*(int *)(v1 + 1080)); // (int)&FUN_1140103f
        v2 = (int)(v3);
        if (v3 != 0) {
            goto lab_0x11401056;
        } else {
            goto lab_0x11401049;
        }
    }
  lab_0x11401049:;
    int v4 = (int)(*(int *)(*(int *)a1 + 116)); // (int)&FUN_1140104b
    v2 = (int)(v4);
    if (v4 == 0) {
        return (int)(0);
    }
    goto lab_0x11401056;
  lab_0x11401056:;
    int v5 = (int)(*(int *)(v2 + 4)); // (int)&FUN_11401056
    if (v5 == 0) {
        return (int)(0);
    }
    unsigned char v6 = (unsigned char)(*(char *)(*(int *)(v1 + 16) + 9)); // (int)&FUN_11401074
    int v7; // bp-296, (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_11400fe0)
    int v8; // bp-316, (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_11400fe0)
    int v9; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_11400fe0)
    int result = (int)(thunk_FUN_113dbe10(a1, (int)v6, &v7, 64, &v8, v9, v9, v9, v9, a1, v5, a2, 0), 0); // (int)&FUN_1140107a
    if (result != 0) {
        return (int)(result);
    }
    unsigned char v10 = (unsigned char)(*(char *)(*(int *)a1 + 8)); // (int)&FUN_1140108c
    int v11; // bp-168, (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_11400fe0)
    int v12; // bp-312, (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_11400fe0)
    FUN_11400900(&v7, v8, &v11, &v12, (int)v10);
    if (FUN_113fef30(a2, a3, 4) == 0) {
        return (int)(0);
    }
    return (int)(-0x6a00);
}

// Reference entry 114013c0; body size 45 bytes.
#line 1 "ENTRY_114013c0"
int FUN_114013c0(int a1, int a2, int a3) {

    if (FUN_113fef30(a1, a2, 1) != 0) {
        return (int)(-0x6a00);
    }
    *(char*)a1 = (char)((int)(1));
    *(int*)a3 = (int)((int)(1));
    return (int)(0);
}

// Reference entry 11401400; body size 72 bytes.
#line 1 "ENTRY_11401400"
int FUN_11401400(int a1, int a2, int a3, int a4) {

    int v1 = (int)(*(int *)(a1 + 60)); // (int)&FUN_11401405
    int v2 = (int)(*(int *)(v1 + 1312)); // (int)&FUN_11401408
    int v3; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_11401400)
    if (FUN_113fef30(a2, a3, v2, v3) != 0) {
        return (int)(-0x6a00);
    }
    memcpy((void *)(a2), (char *)(v1 + 1245), v2);
    *(int*)a4 = (int)((int)(v2));
    return (int)(0);
}

// Reference entry 11401470; body size 36 bytes.
#line 1 "ENTRY_11401470"
int FUN_11401470(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_11401470)
    int v2 = (int)(thunk_FUN_1140b1f0(&v1), 0); // (int)&FUN_11401475
    return (int)(v2 == 2 | v2 < 5 ? a1 : 0);
}

// Reference entry 11402940; body size 117 bytes.
#line 1 "ENTRY_11402940"
int FUN_11402940(int a1, int a2) {

    int v1 = (int)(a1); // (int)&FUN_1140294c
    while (*(char *)v1 != 0) {
        v1++;
    }
    uint v2 = (uint)(*(int *)(a2 + 4)); // (int)&FUN_1140295d
    if (v2 < 3) {
        return (int)(-1);
    }
    int v3 = (int)(*(int *)(a2 + 8)); // (int)&FUN_11402965
    if (*(char *)v3 != 42) {
        return (int)(-1);
    }
    uint v4 = (uint)(v1 - a1); // (int)&FUN_1140295b
    int v5 = (int)(v3 + 1); // (int)&FUN_1140296d
    if (v4 == 0 | *(char *)v5 != 46) {
        return (int)(-1);
    }
    int v6 = (int)(0);
    int v7 = (int)(v6 + a1); // (int)&FUN_11402980
    while (*(char *)v7 != 46) {
        int v8 = (int)(v6 + 1); // (int)&FUN_11402989
        if (v8 >= v4) {
            return (int)(-1);
        }
        v6 = (int)(v8);
        v7 = (int)(v6 + a1);
    }
    if (v6 == 0) {
        return (int)(-1);
    }
    int v9 = (int)(v2 - 1); // (int)&FUN_11402999
    if (v4 - v6 != v9) {
        return (int)(-1);
    }
    int v10 = (int)(FUN_11405c60(v5, v7, v9), 0); // (int)&FUN_114029a5
    return (int)(v10 != 0 ? -1 : v10);
}

// Reference entry 11402ca0; body size 74 bytes.
#line 1 "ENTRY_11402ca0"
int FUN_11402ca0(int a1, int a2, int a3) {

    int v1; // (int)((int(*)(int a1, int a2, int a3))&FUN_11402ca0)
    int v2 = (int)(FUN_11405cc0(a1 + 80, a2 + 112, v1), 0); // (int)&FUN_11402cb1
    if (v2 != 0) {
        return (int)(-1);
    }
    if (v2 != a3) {
        if (*(int *)(a2 + 28) < 3) {
            return (int)(0);
        }
    }
    if (*(int *)(a2 + 348) == 0) {
        return (int)(-1);
    }
    if (thunk_FUN_11401620(a2, 4) == 0) {
        return (int)(0);
    }
    return (int)(-1);
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
int FUN_11404c80(int a1, uint a2, int a3) {

    int v1 = (int)(0); // bp-4, (int)&FUN_11404c94
    int v2 = (int)(thunk_FUN_1140c750(a1, a2, &v1, 48), 0); // (int)&FUN_11404c9c
    if (v2 != 0) {
        return (int)(v2 - 0x2500);
    }
int *v3 = (int *)((int)((int *)a1)); // (int)&FUN_11404cb1
    if (v1 + *v3 != (int)((a2))) {
        return (int)(-0x2566);
    }
    int v4 = (int)(thunk_FUN_1140c750(a1, a2, &v1, 128), 0); // (int)&FUN_11404ccc
    int v5; // (int)((int(*)(int a1, uint a2, int a3))&FUN_11404c80)
    if (v4 != 0) {
        if (v4 != -98) {
            return (int)(v4 - 0x2500);
        }
        v5 = (int)(*v3);
    } else {
        *(int*)(a3 + 4) = (int)(v1);
        *(int*)(a3 + 8) = (int)(*v3);
        *(int*)a3 = (int)((int)(4));
        int v6 = (int)(*v3 + v1); // (int)&FUN_11404cee
        *v3 = (int)(v6);
        v5 = (int)(v6);
    }
    int v7 = (int)(v5); // (int)&FUN_11404cfb
    if (v5 < a2) {
        int v8 = (int)(thunk_FUN_1140c750(a1, a2, &v1, 161), 0); // (int)&FUN_11404d09
        if (v8 != 0) {
            return (int)(v8 - 0x2500);
        }
        int result = (int)(thunk_FUN_11407190(a1, v1 + *v3, a3 + 12), 0); // (int)&FUN_11404d21
        if (result != 0) {
            return (int)(result);
        }
        int v9 = (int)(thunk_FUN_1140c750(a1, a2, &v1, 130), 0); // (int)&FUN_11404d39
        if (v9 != 0) {
            return (int)(v9 - 0x2500);
        }
        *(int*)(a3 + 32) = (int)(v1);
        *(int*)(a3 + 36) = (int)(*v3);
        *(int*)(a3 + 28) = (int)(2);
        v7 = (int)(*v3 + v1);
        *v3 = (int)(v7);
    }
    if (v7 == a2) {
        return (int)(0);
    }
    return (int)(-0x2566);
}

// Reference entry 11404dc0; body size 177 bytes.
#line 1 "ENTRY_11404dc0"
int FUN_11404dc0(int a1, int a2, int a3, int a4) {

    int v1 = (int)(a3);
int *v2 = (int *)((int)((int *)a3)); // (int)&FUN_11404ddc
    *v2 = (int)(0);
int *v3 = (int *)((int)((int *)a4)); // (int)&FUN_11404de3
    *v3 = (int)(0);
    int v4; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_11404dc0)
    int v5 = (int)(thunk_FUN_1140c750(a1, a2, &v1, 48, v4, v4, v4, v4), 0); // (int)&FUN_11404dea
    if (v5 != 0) {
        return (int)(v5 - 0x2500);
    }
int *v6 = (int *)((int)((int *)a1)); // (int)&FUN_11404e00
    if (*v6 == (int)((a2))) {
        return (int)(0);
    }
    int v7 = (int)(thunk_FUN_1140c460(a1, a2, a3), 0); // (int)&FUN_11404e07
    if (v7 != 0) {
        if (v7 != -98) {
            return (int)(v7 - 0x2500);
        }
        int v8 = (int)(thunk_FUN_1140c500(a1, a2, a3), 0); // (int)&FUN_11404e1b
        if (v8 != 0) {
            return (int)(v8 - 0x2500);
        }
        if (*v2 != (int)((v8))) {
            *v2 = (int)(1);
        }
    }
    if (*v6 == (int)((a2))) {
        return (int)(0);
    }
    int v9 = (int)(thunk_FUN_1140c500(a1, a2, a4), 0); // (int)&FUN_11404e38
    if (v9 != 0) {
        return (int)(v9 - 0x2500);
    }
    if (*v6 != (int)((a2))) {
        return (int)(-0x2566);
    }
    int v10 = (int)(*v3); // (int)&FUN_11404e52
    int result = (int)(-0x2564); // (int)&FUN_11404e5a
    if (v10 != 0x7fffffff) {
        *v3 = (int)(v10 + 1);
        result = (int)(0);
    }
    return (int)(result);
}

// Reference entry 11405890; body size 95 bytes.
#line 1 "ENTRY_11405890"
int FUN_11405890(int a1, int a2, int a3, int a4) {

    int v1; // bp-4, (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_11405890)
    int v2; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_11405890)
    int v3 = (int)(thunk_FUN_1140c750(v2, v2, 48, &v1, a3, a4), 0); // (int)&FUN_114058a2
    if (v3 != 0) {
        return (int)(v3 - 0x2400);
    }
int *v4 = (int *)((int)((int *)a4)); // (int)&FUN_114058b7
    int v5 = (int)(v1 + *v4); // (int)&FUN_114058bd
    int result = (int)(thunk_FUN_11407360(v2, a2, v5), 0); // (int)&FUN_114058c3
    if (result != 0) {
        return (int)(result);
    }
    int v6 = (int)(thunk_FUN_11407360(a1, v5, a4), 0); // (int)&FUN_114058d5
    int result2 = (int)(v6); // (int)&FUN_114058df
    if (v6 == 0) {
        result2 = (int)(*v4 != (int)((v5)) ? -0x2466 : v6);
    }
    return (int)(result2);
}

// Reference entry 11405910; body size 50 bytes.
#line 1 "ENTRY_11405910"
int FUN_11405910(int a1, int a2, int a3) {

    int v1; // (int)((int(*)(int a1, int a2, int a3))&FUN_11405910)
    int v2 = (int)(thunk_FUN_1140c630(a1, a2, a3, 6, v1), 0); // (int)&FUN_11405920
    if (v2 == 0) {
        return (int)(*(int *)(a3 + 8) == 0 ? -0x2564 : 0);
    }
    return (int)(v2 - 0x2500);
}

// Reference entry 11405950; body size 89 bytes.
#line 1 "ENTRY_11405950"
int FUN_11405950(int a1, int a2, int a3) {

    int v1 = (int)(0); // bp-4, (int)&FUN_11405964
    int v2; // (int)((int(*)(int a1, int a2, int a3))&FUN_11405950)
    int v3 = (int)(thunk_FUN_1140c750(a1, a2, &v1, 4, v2, v2, 0), 0); // (int)&FUN_1140596c
    if (v3 != 0) {
        return (int)(v3 - 0x2500);
    }
    *(int*)(a3 + 4) = (int)(v1);
    *(int*)a3 = (int)((int)(4));
int *v4 = (int *)((int)((int *)a1)); // (int)&FUN_11405992
    *(int*)(a3 + 8) = (int)(*v4);
    int v5 = (int)(*v4 + v1); // (int)&FUN_11405999
    *v4 = (int)(v5);
    return (int)(v5 != a2 ? -0x2566 : 0);
}

// Reference entry 11405a30; body size 111 bytes.
#line 1 "ENTRY_11405a30"
int FUN_11405a30(int a1, int a2, int a3) {

    int v1; // bp-4, (int)((int(*)(int a1, int a2, int a3))&FUN_11405a30)
    int v2; // (int)((int(*)(int a1, int a2, int a3))&FUN_11405a30)
    int v3 = (int)(thunk_FUN_1140c750(a1, a2, &v1, 160, v2, v2), 0); // (int)&FUN_11405a45
    if (v3 != 0) {
        if (v3 != -98) {
            return (int)(v3 - 0x2180);
        }
        *(int*)a3 = (int)((int)(0));
        return (int)(0);
    }
int *v4 = (int *)((int)((int *)a1)); // (int)&FUN_11405a6e
    int v5 = (int)(v1 + *v4); // (int)&FUN_11405a74
    int v6 = (int)(thunk_FUN_1140c500(a1, v5, a3, v2), 0); // (int)&FUN_11405a7a
    if (v6 == 0) {
        return (int)(*v4 != (int)((v5)) ? -0x2266 : 0);
    }
    return (int)(v6 - 0x2200);
}

// Reference entry 11405f20; body size 31 bytes.
#line 1 "ENTRY_11405f20"
int FUN_11405f20(int a1, int a2) {

    if (a2 != 0) {
        if ((*(int *)a1 & 1 << (a2 + 31 & 31)) != 0) {
            return (int)(0);
        }
    }
    return (int)(-1);
}

// Reference entry 11405f50; body size 32 bytes.
#line 1 "ENTRY_11405f50"
int FUN_11405f50(int a1, int a2) {

    if (a2 != 0) {
        if ((*(int *)(a1 + 4) & 1 << (a2 + 31 & 31)) != 0) {
            return (int)(0);
        }
    }
    return (int)(-1);
}

// Reference entry 114087a0; body size 241 bytes.
#line 1 "ENTRY_114087a0"
int FUN_114087a0(int a1, int a2, int a3) {

    int v1; // bp-4, (int)((int(*)(int a1, int a2, int a3))&FUN_114087a0)
    int v2; // (int)((int(*)(int a1, int a2, int a3))&FUN_114087a0)
    int v3 = (int)(thunk_FUN_1140c750(v2, v2, 48, &v1, a2, a3), 0); // (int)&FUN_114087b2
    if (v3 != 0) {
        return (int)(v3 - 0x2380);
    }
int *v4 = (int *)((int)((int *)a3)); // (int)&FUN_114087c6
    int v5 = (int)(*v4); // (int)&FUN_114087c6
    if (v1 < 1) {
        return (int)(-0x23e0);
    }
    int v6 = (int)(v1 + v5); // (int)&FUN_114087cd
    int v7 = (int)(a1 + 4); // (int)&FUN_114087e7
    *(int*)a1 = (int)((int)((int)*(char *)v5));
    int v8 = (int)(thunk_FUN_1140c750(v2, v2, v2, (int *)6, v7, v6), 0); // (int)&FUN_114087ef
    if (v8 != 0) {
        return (int)(v8 - 0x2380);
    }
    *(int*)(a1 + 8) = (int)(*v4);
    int v9 = (int)(*v4 + *(int *)v7); // (int)&FUN_11408803
    *v4 = (int)(v9);
    if (v6 - v9 < 1) {
        return (int)(-0x23e0);
    }
    unsigned char v10 = (unsigned char)(*(char *)v9); // (int)&FUN_11408810
    int result = (int)(-0x23e2); // (int)((int(*)(int a1, int a2, int a3))&FUN_114087a0)
    switch (v10) {
        case 30: {
        }
        case 12: {
        }
        case 20: {
        }
        case 19: {
        }
        case 22: {
        }
        case 28: {
        }
        case 3: {
            int v11 = (int)(a1 + 16); // (int)&FUN_11408839
            *(int*)(a1 + 12) = (int)((int)v10);
            *v4 = (int)(*v4 + 1);
            int v12 = (int)(thunk_FUN_1140c520(v11, v6, a3), 0); // (int)&FUN_11408847
            if (v12 != 0) {
                return (int)(v12 - 0x2380);
            }
            *(int*)(a1 + 20) = (int)(*v4);
            int v13 = (int)(*v4 + *(int *)v11); // (int)&FUN_11408866
            *v4 = (int)(v13);
            result = (int)(-0x23e6);
            if (v13 == v6) {
                *(int*)(a1 + 24) = (int)(0);
                return (int)(0);
            }
            break;
        }
    }
    return (int)(result);
}

// Reference entry 11408c50; body size 38 bytes.
#line 1 "ENTRY_11408c50"
int FUN_11408c50(int a1) {

    uint v1 = (uint)((int)*(char *)a1 - 48); // (int)&FUN_11408c5b
    uint v2 = (uint)((int)*(char *)(a1 + 1) - 48); // (int)&FUN_11408c5e
    if (v1 < 10 == v2 < 10) {
        return (int)(v2 + 10 * v1);
    }
    return (int)(-1);
}

// Reference entry 1140a170; body size 39 bytes.
#line 1 "ENTRY_1140a170"
int FUN_1140a170(int a1) {

    int result = (int)(3); // (int)&FUN_1140a179
int *v1 = (int *)((int)((int *)(4 * result + a1))); // (int)&FUN_1140a180
    int v2 = (int)(llvm_bswap_i32(*v1) + 1, 0); // (int)&FUN_1140a185
    *v1 = (int)(llvm_bswap_i32(v2), 0);
    while (result != 0 && v2 == 0) {
        result--;
        v1 = (int *)((int *)(4 * result + a1));
        v2 = (int)(llvm_bswap_i32(*v1) + 1, 0);
        *v1 = (int)(llvm_bswap_i32(v2), 0);
    }
    return (int)(result);
}

// Reference entry 1140a790; body size 82 bytes.
#line 1 "ENTRY_1140a790"
int FUN_1140a790(int a1, int a2, int a3) {

    if (a1 == 0) {
        int v1; // bp-2428, (int)((int(*)(int a1, int a2, int a3))&FUN_1140a790)
        return (int)(*(int *)&DAT_12126b84 ^ (int)&v1);
    }
    int v2 = (int)(*(int *)a1); // (int)&FUN_1140a7c5
    int result = (int)(0); // (int)&FUN_1140a7c9
    if (v2 != 0) {
        result = (int)(*(int *)v2 - 1);
    }
    return (int)(result);
}

// Reference entry 1140a9b0; body size 100 bytes.
#line 1 "ENTRY_1140a9b0"
int FUN_1140a9b0(int a1, int a2, int a3) {

    int v1 = (int)(0); // bp-548, (int)&FUN_1140a9cb
    if (a1 == 0) {
        return (int)(*(int *)&DAT_12126b84 ^ (int)&v1);
    }
    int v2 = (int)(*(int *)a1); // (int)&FUN_1140a9f7
    int result = (int)(0); // (int)&FUN_1140a9fb
    if (v2 != 0) {
        result = (int)(*(int *)v2 - 1);
    }
    return (int)(result);
}

// Reference entry 1140ad30; body size 33 bytes.
#line 1 "ENTRY_1140ad30"
int FUN_1140ad30(int a1, int result) {

    if (a1 == 0) {
        return (int)(0);
    }
    int v1 = (int)(*(int *)a1); // (int)&FUN_1140ad38
    if (v1 == 2) {
        return (int)(result);
    }
    int v2 = (int)(v1 - 3); // (int)&FUN_1140ad3f
    if (v2 != 0 != v2 != 1) {
        return (int)(result);
    }
    return (int)(0);
}

// Reference entry 1140adf0; body size 38 bytes.
#line 1 "ENTRY_1140adf0"
int FUN_1140adf0(int a1) {

    if (a1 == 0) {
        return (int)(0);
    }
    int v1 = (int)(*(int *)a1); // (int)&FUN_1140adf8
    if (v1 == 0) {
        return (int)(0);
    }
    return (int)((*(int *)(v1 + 8) + 7) / 8);
}

// Reference entry 1140bcf0; body size 70 bytes.
#line 1 "ENTRY_1140bcf0"
int FUN_1140bcf0(int a1, int a2) {

    if (FUN_1008ed7e(a1) != 1) {
        return (int)(a2 != 0 ? 0x7000200 : 0x60002ff);
    }
    if (a2 == 0) {
        return (int)(0x60013ff);
    }
    return (int)(FUN_100892a2(a1) & 255 | 0x7000300);
}

// Reference entry 1140bd50; body size 35 bytes.
#line 1 "ENTRY_1140bd50"
int FUN_1140bd50(int a1) {
int *v1 = (int *)((int)((int *)a1)); // (int)&FUN_1140bd54
    uint v2 = (uint)(*v1); // (int)&FUN_1140bd54
    uint v3 = (uint)(v2 / 4);
    int result = (int)(v3 & 1024 | v2 | v3 & 2048);
    if ((v2 & 0x3000) != 0) {
        *v1 = (int)(result);
    }
    return (int)(result);
}

// Reference entry 1140bdc0; body size 33 bytes.
#line 1 "ENTRY_1140bdc0"
int FUN_1140bdc0(int a1, uint a2) {

    if (a2 < 0xfff9) {
        *(short*)(a1 + 2) = (short)((short)a2);
        return (int)(a2 & 0xffff);
    }
    *(short*)(a1 + 2) = (short)(-1);
    return (int)(0xffff);
}

// Reference entry 1140be10; body size 48 bytes.
#line 1 "ENTRY_1140be10"
int FUN_1140be10(int result, uint a2) {

    uint v1 = (uint)(a2 / 4); // (int)&FUN_1140be1e
    *(int*)(result + 8) = (int)(v1 & 1024 | a2 | v1 & 2048);
    return (int)(result);
}

// Reference entry 1140be50; body size 73 bytes.
#line 1 "ENTRY_1140be50"
int FUN_1140be50(int a1, int a2, int a3, int a4) {
int *v1 = (int *)((int)((int *)(a1 + 4))); // (int)&FUN_1140be56
    int v2 = (int)(*v1); // (int)&FUN_1140be56
int *v3 = (int *)((int)((int *)(v2 + 8)));
int *v4 = (int *)((int)(v3)); // (int)&FUN_1140be5d
    if (*v3 != (int)((0))) {
        int v5; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_1140be50)
        if (v5 == 0) {
            return (int)(-106);
        }
        v4 = (int *)((int *)(v5 + 8));
    }
    *v4 = (int)(a3);
    *(int*)(v2 + 4) = (int)(a4);
    *(int*)v2 = (int)((int)(a2));
    *v1 = (int)(v2);
    return (int)(0);
}

// Reference entry 11411a40; body size 32 bytes.
#line 1 "ENTRY_11411a40"
int FUN_11411a40(int a1, int a2, int a3) {

    int v1 = (int)(a2 - a3); // (int)&FUN_11411a48
    if (v1 == 0) {
        int result; // (int)((int(*)(int a1, int a2, int a3))&FUN_11411a40)
        return (int)(result);
    }
    return (int)(v1 & 255);
}

// Reference entry 11411aa0; body size 284 bytes.
#line 1 "ENTRY_11411aa0"
int FUN_11411aa0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11) {

    int v1 = (int)(*(int *)a1); // (int)&FUN_11411aa6
    uint v2 = (uint)(*(int *)(v1 + 4)); // (int)&FUN_11411aa8
    int v3 = (int)(v2 & 0xf000); // (int)&FUN_11411aaf
    int v4; // (int)((int(*)(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11))&FUN_11411aa0)
    if (v3 == 0x6000) {
        *(int*)a9 = (int)((int)(a7));
        int v5 = (int)(*(int *)(a1 + 60)); // (int)&FUN_11411aeb
        int v6 = (int)(thunk_FUN_114446b0(v5, a7, a2, a3, a4, a5, a10, a11, a6, a8, v4, v4), 0); // (int)&FUN_11411aee
        return (int)(v6 == -18 ? -0x6300 : v6);
    }
    if (v3 == 0x8000) {
        *(int*)a9 = (int)((int)(a7));
        int v7 = (int)(*(int *)(a1 + 60)); // (int)&FUN_11411b37
        int v8 = (int)(thunk_FUN_11445ca0(v7, a7, a2, a3, a4, a5, a6, a8, a10, a11, v4, v4), 0); // (int)&FUN_11411b3a
        return (int)(v8 == -15 ? -0x6300 : v8);
    }
    if ((v2 & 0xff0000) != 0x4d0000) {
        return (int)(-0x6080);
    }
    if (a11 == 16 != ((v1 != 0 ? v2 / 8 & 28 : 0) == a3)) {
        return (int)(-0x6100);
    }
    *(int*)a9 = (int)((int)(a7));
    int v9 = (int)(thunk_FUN_114437c0(*(int *)(a1 + 60), a7, a2, a4, a5, a10, a6, a8, v4, v4), 0); // (int)&FUN_11411b96
    return (int)(v9 == -86 ? -0x6300 : v9);
}

// Reference entry 11411c10; body size 243 bytes.
#line 1 "ENTRY_11411c10"
int FUN_11411c10(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11) {

    int v1 = (int)(*(int *)a1); // (int)&FUN_11411c15
    uint v2 = (uint)(*(int *)(v1 + 4)); // (int)&FUN_11411c17
    int v3 = (int)(v2 & 0xf000); // (int)&FUN_11411c1c
    int v4; // (int)((int(*)(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11))&FUN_11411c10)
    if (v3 == 0x6000) {
        *(int*)a9 = (int)((int)(a7));
        int v5 = (int)(*(int *)(a1 + 60)); // (int)&FUN_11411c55
        return (int)(thunk_FUN_11444780(v5, 1, a7, a2, a3, a4, a5, a6, a8, a11, a10, v4));
    }
    if (v3 == 0x8000) {
        *(int*)a9 = (int)((int)(a7));
        int v6 = (int)(*(int *)(a1 + 60)); // (int)&FUN_11411c94
        return (int)(thunk_FUN_11445e20(v6, a7, a2, a3, a4, a5, a6, a8, a10, a11, v4));
    }
    if ((v2 & 0xff0000) != 0x4d0000) {
        return (int)(-0x6080);
    }
    if (a11 == 16 != ((v1 != 0 ? v2 / 8 & 28 : 0) == a3)) {
        return (int)(-0x6100);
    }
    *(int*)a9 = (int)((int)(a7));
    return (int)(thunk_FUN_11443880(*(int *)(a1 + 60), a7, a2, a4, a5, a6, a8, a10, v4));
}

// Reference entry 11412650; body size 33 bytes.
#line 1 "ENTRY_11412650"
int FUN_11412650(int a1) {

    int v1 = (int)(*(int *)a1); // (int)&FUN_11412654
    if (v1 == 0) {
        return (int)(0);
    }
    int v2 = (int)(*(int *)(a1 + 56)); // (int)&FUN_1141265d
    int result = (int)(v2); // (int)&FUN_11412662
    if (v2 == 0) {
        result = (int)(*(int *)(v1 + 4) / 8 & 28);
    }
    return (int)(result);
}

// Reference entry 114131e0; body size 44 bytes.
#line 1 "ENTRY_114131e0"
int FUN_114131e0(int a1, int a2) {

    uint v1 = (uint)(a2 ^ a1 ^ *(int *)&DAT_122fa560); // (int)&FUN_114131fb
    return (int)((-((v1 / 2)) | -v1) > -1);
}

// Reference entry 11413220; body size 93 bytes.
#line 1 "ENTRY_11413220"
int FUN_11413220(int a1, int a2) {

    uint v1 = (uint)(*(int *)&DAT_122fa560);
    int v2 = (int)(v1 ^ a2); // (int)&FUN_11413231
    int v3 = (int)(-((v1 / 2))); // (int)&FUN_1141324a
    int v4 = (int)((v3 | -((v1 ^ (int)((a2 ^ a1) < 0)))) / 0x80000000); // (int)&FUN_11413256
    return (int)((-((v1 ^ (int)(((v1 ^ -0x80000000 ^ v4) & (v1 ^ a1) - v2 | v4 & v2) < 0))) | v3) > -1);
}

// Reference entry 114132a0; body size 94 bytes.
#line 1 "ENTRY_114132a0"
int FUN_114132a0(int a1, int a2) {

    uint v1 = (uint)(*(int *)&DAT_122fa560);
    int v2 = (int)(v1 ^ a1); // (int)&FUN_114132b1
    int v3 = (int)(-((v1 / 2))); // (int)&FUN_114132ca
    int v4 = (int)((v3 | -((v1 ^ (int)((a2 ^ a1) < 0)))) / 0x80000000); // (int)&FUN_114132d6
    return (int)((-((v1 ^ (int)(((v1 ^ -0x80000000 ^ v4) & (v1 ^ a2) - v2 | v4 & v2) < 0))) | v3) / 0x80000000);
}

// Reference entry 11413320; body size 94 bytes.
#line 1 "ENTRY_11413320"
int FUN_11413320(int a1, int a2) {

    uint v1 = (uint)(*(int *)&DAT_122fa560);
    int v2 = (int)(v1 ^ a2); // (int)&FUN_11413331
    int v3 = (int)(-((v1 / 2))); // (int)&FUN_1141334a
    int v4 = (int)((v3 | -((v1 ^ (int)((a2 ^ a1) < 0)))) / 0x80000000); // (int)&FUN_11413356
    return (int)((-((v1 ^ (int)(((v1 ^ -0x80000000 ^ v4) & (v1 ^ a1) - v2 | v4 & v2) < 0))) | v3) / 0x80000000);
}

// Reference entry 114133a0; body size 45 bytes.
#line 1 "ENTRY_114133a0"
int FUN_114133a0(int a1, int a2) {

    uint v1 = (uint)(a2 ^ a1 ^ *(int *)&DAT_122fa560); // (int)&FUN_114133bb
    return (int)((-((v1 / 2)) | -v1) / 0x80000000);
}

// Reference entry 114133e0; body size 400 bytes.
#line 1 "ENTRY_114133e0"
int FUN_114133e0(int a1, uint a2, int a3) {

    if (a1 == 0 || a3 == 0) {
        return (int)(-0x6100);
    }
    uint v1 = (uint)(*(int *)&DAT_122fa560);
    unsigned char v2 = (unsigned char)(*(char *)(a1 - 1 + a2)); // (int)&FUN_11413412
    int v3 = (int)(v2); // (int)&FUN_11413412
    uint v4 = (uint)(v1 ^ v3); // (int)&FUN_11413419
    int v5 = (int)(a2 - v3); // (int)&FUN_11413421
    int v6 = (int)(-((v1 / 2)));
    int v7 = (int)((v6 | -((v1 ^ a2 / 0x80000000))) >> 31); // (int)&FUN_11413444
    int v8 = (int)(v1 ^ -0x80000000);
    int v9 = (int)((-((((v1 ^ a2) - v4 & (v7 ^ v8) | v7 & v1) / 0x80000000 ^ v1)) | v6) >> 31 | (-((v4 / 2)) | -v4) / 0x80000000 - 1); // (int)&FUN_1141348e
    if (a2 == 0) {
        *(int*)a3 = (int)((int)((v9 ^ -1 - v1) & v5));
        return (int)(-((v9 & 0x6200)));
    }
    int v10 = (int)(v5 ^ v1); // (int)&FUN_114134ae
    int v11 = (int)(v9); // (int)&FUN_11413533
    int v12 = (int)(0);
    int v13 = (int)((-(((v12 ^ v5) >> 31 ^ v1)) | v6) / 0x80000000); // (int)&FUN_114134d7
    uint v14 = (uint)(v1 ^ (int)(*(char *)(v12 + a1) ^ v2)); // (int)&FUN_1141350d
    int v15 = (int)(v12 + 1); // (int)&FUN_11413532
    v11 |= ((-((((v13 ^ v8) & (v12 ^ v1) - v10 | v13 & v10) / 0x80000000 ^ v1)) | v6) >> 31) - 1 & (-((v14 / 2)) | -v14) / 0x80000000;
    int v16 = (int)(v11); // (int)&FUN_1141353d
    while (v15 != a2) {
        v12 = (int)(v15);
        v13 = (int)((-(((v12 ^ v5) >> 31 ^ v1)) | v6) / 0x80000000);
        v14 = (uint)(v1 ^ (int)(*(char *)(v12 + a1) ^ v2));
        v15 = (int)(v12 + 1);
        v11 |= ((-((((v13 ^ v8) & (v12 ^ v1) - v10 | v13 & v10) / 0x80000000 ^ v1)) | v6) >> 31) - 1 & (-((v14 / 2)) | -v14) / 0x80000000;
        v16 = (int)(v11);
    }
    *(int*)a3 = (int)((int)((v16 ^ -1 - v1) & v5));
    return (int)(-((v16 & 0x6200)));
}

// Reference entry 11413730; body size 32 bytes.
#line 1 "ENTRY_11413730"
int FUN_11413730(int a1, int a2, int a3) {

    return (int)(((*(int *)&DAT_122fa560 ^ -1 - a1) & a3 + 1 | a2 + 1 & a1) - 1);
}

// Reference entry 11418640; body size 106 bytes.
#line 1 "ENTRY_11418640"
int FUN_11418640(int a1, uint a2, char a3) {
int *v1 = (int *)((int)((int *)a1)); // (int)&FUN_11418648
    *v1 = (int)(255);
    if (a3 <= 57) {
        uint v2 = (uint)((int)a3 - 48); // (int)&FUN_11418659
        *v1 = (int)(v2);
        return (int)(v2 < a2 ? 0 : -6);
    }
    if (a3 <= 70) {
        uint v3 = (uint)((int)a3 - 55); // (int)&FUN_11418676
        *v1 = (int)(v3);
        return (int)(v3 < a2 ? 0 : -6);
    }
    int v4 = (int)(255); // (int)&FUN_1141868f
    if (a3 <= 102) {
        v4 = (int)((int)a3 - 87);
        *v1 = (int)(v4);
    }
    return (int)(v4 < a2 ? 0 : -6);
}

// Reference entry 11418ca0; body size 247 bytes.
#line 1 "ENTRY_11418ca0"
int FUN_11418ca0(int a1, int a2, int a3, int a4) {

    if (a4 == 0) {
        return (int)(-8);
    }
    int v1; // bp-40, (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_11418ca0)
    int v2 = (int)(&v1); // (int)&FUN_11418cb2
int *v3 = (int *)((int)((int *)(v2 - 4)));
    int v4 = (int)(v2 + 20); // (int)&FUN_11418cc6
int *v5 = (int *)((int)((int *)(v2 - 8)));
int *v6 = (int *)((int)((int *)(v2 - 12)));
int *v7 = (int *)((int)((int *)(v2 + 48)));
    int v8 = (int)(v2 + 16);
int *v9 = (int *)((int)((int *)v8));
    int v10 = (int)(v2 + 24);
    int v11 = (int)(v2 + 32);
    int v12 = (int)(*(int *)a3 + a4); // (int)&FUN_11418cc1
    int v13 = (int)(0); // (int)&FUN_11418cc1
    *v3 = (int)(a2);
    *v5 = (int)(a1);
    *v6 = (int)(v4);
    int v14 = (int)(thunk_FUN_11416350(), 0); // (int)&FUN_11418ccc
    int result = (int)(v14); // (int)&FUN_11418cd8
    while (v14 == 0) {
        uint v15 = (uint)(*v7); // (int)&FUN_11418cde
        *v9 = (int)(v15 < 0 ? -v15 : v15);
        *(short*)(v2 + 30) = (short)(1);
        *(short*)(v2 + 28) = (short)(1 - (short)(2 * v15 / 0x80000000));
        *(int*)v10 = (int)((int)(v8));
        *v3 = (int)(v10);
        *v5 = (int)(a1);
        *v6 = (int)(v14);
        *(int*)(v2 - 16) = (int)(a1);
        int v16 = (int)(thunk_FUN_11413e90(), 0); // (int)&FUN_11418d15
        result = (int)(v16);
        if (v16 != 0) {
            break;
        }
        uint v17 = (uint)(*(int *)v4); // (int)&FUN_11418d23
        v12--;
        *(char*)v12 = (char)((int)((char)((v17 >= 10 ? 55 : 48) + v17)));
        v13++;
        *v9 = (int)(0);
        *(int*)v11 = (int)((int)(v8));
        *v3 = (int)(v11);
        *v5 = (int)(a1);
        *(int*)(v2 + 36) = (int)(0x10001);
        if (thunk_FUN_11413bf0() == 0) {
            *v3 = (int)(v13);
            *v5 = (int)(v12);
int *v18 = (int *)((int)((int *)*(int *)(v2 + 52))); // (int)&FUN_11418d81
            *v6 = (int)(*v18);
            memmove();
            *v18 = (int)(*v18 + v13);
            result = (int)(v16);
            return (int)(result);
        }
        result = (int)(-8);
        if ((int)(v13) >= *(int *)(v2 + 56)) {
            break;
        }
        *v3 = (int)(*v7);
        *v5 = (int)(a1);
        *v6 = (int)(v4);
        v14 = (int)(thunk_FUN_11416350(), 0);
        result = (int)(v14);
    }
  lab_0x11418d6e:
    return (int)(result);
}

// Reference entry 11418e30; body size 31 bytes.
#line 1 "ENTRY_11418e30"
int FUN_11418e30(int a1) {

    int v1 = (int)(thunk_FUN_1140d570(a1), 0); // (int)&FUN_11418e34
    if (v1 != 0) {
        return (int)(thunk_FUN_1140c8e0(v1));
    }
    return (int)(-0x4080);
}

// Reference entry 11419010; body size 35 bytes.
#line 1 "ENTRY_11419010"
int FUN_11419010(int a1, int a2, int a3) {

    return (int)(-(((*(int *)&DAT_122fa560 ^ -1 - a1) & -a3 | -a2 & a1)));
}

// Reference entry 11419350; body size 44 bytes.
#line 1 "ENTRY_11419350"
int FUN_11419350(int a1, int a2) {

    uint v1 = (uint)(a2 ^ a1 ^ *(int *)&DAT_122fa560); // (int)&FUN_1141936b
    return (int)((-((v1 / 2)) | -v1) > -1);
}

// Reference entry 11419390; body size 94 bytes.
#line 1 "ENTRY_11419390"
int FUN_11419390(int a1, int a2) {

    uint v1 = (uint)(*(int *)&DAT_122fa560);
    int v2 = (int)(v1 ^ a1); // (int)&FUN_114193a1
    int v3 = (int)(-((v1 / 2))); // (int)&FUN_114193ba
    int v4 = (int)((v3 | -((v1 ^ (int)((a2 ^ a1) < 0)))) / 0x80000000); // (int)&FUN_114193c6
    return (int)((-((v1 ^ (int)(((v1 ^ -0x80000000 ^ v4) & (v1 ^ a2) - v2 | v4 & v2) < 0))) | v3) / 0x80000000);
}

// Reference entry 11419440; body size 94 bytes.
#line 1 "ENTRY_11419440"
int FUN_11419440(int a1, int a2) {

    uint v1 = (uint)(*(int *)&DAT_122fa560);
    int v2 = (int)(v1 ^ a2); // (int)&FUN_11419451
    int v3 = (int)(-((v1 / 2))); // (int)&FUN_1141946a
    int v4 = (int)((v3 | -((v1 ^ (int)((a2 ^ a1) < 0)))) / 0x80000000); // (int)&FUN_11419476
    return (int)((-((v1 ^ (int)(((v1 ^ -0x80000000 ^ v4) & (v1 ^ a1) - v2 | v4 & v2) < 0))) | v3) / 0x80000000);
}

// Reference entry 1141d940; body size 37 bytes.
#line 1 "ENTRY_1141d940"
int FUN_1141d940(int result) {

    return (int)(result);
}

// Reference entry 1141eb60; body size 110 bytes.
#line 1 "ENTRY_1141eb60"
int FUN_1141eb60(int a1, int a2, int a3) {
int *v1 = (int *)((int)((int *)a1)); // (int)&FUN_1141eb6c
    int v2 = (int)(*v1); // (int)&FUN_1141eb6c
    if (a2 - v2 <= 0) {
        return (int)(-0x3d60);
    }
    unsigned char v3 = (unsigned char)(*(char *)v2); // (int)&FUN_1141eb7d
    int v4 = (int)(v3); // (int)&FUN_1141eb7d
    *(int*)a3 = (int)((int)(v4));
    if (v3 != 6) {
        return (int)(-0x3d62);
    }
    int v5 = (int)(a3 + 4); // (int)&FUN_1141eb97
    int v6; // (int)((int(*)(int a1, int a2, int a3))&FUN_1141eb60)
    int v7 = (int)(thunk_FUN_1140c750(a1, a2, v5, v4, v6, v6, v6, v6), 0); // (int)&FUN_1141eb9d
    if (v7 != 0) {
        return (int)(v7 - 0x3d00);
    }
    *(int*)(a3 + 8) = (int)(*v1);
    int v8 = (int)(*v1 + *(int *)v5); // (int)&FUN_1141ebc0
    *v1 = (int)(v8);
    return (int)(v8 != a2 ? -0x3d66 : 0);
}

// Reference entry 1141eff0; body size 112 bytes.
#line 1 "ENTRY_1141eff0"
int FUN_1141eff0(int a1, int a2, int a3, int a4, int a5, int a6) {

    int v1 = (int)(a2);
    int v2; // bp-4, (int)((int(*)(int a1, int a2, int a3, int a4, int a5, int a6))&FUN_1141eff0)
    int v3; // (int)((int(*)(int a1, int a2, int a3, int a4, int a5, int a6))&FUN_1141eff0)
    int v4 = (int)(thunk_FUN_1140c750(&v1, a3 + a2, &v2, 4, v3), 0); // (int)&FUN_1141f006
    if (v4 != 0) {
        return (int)(v4 - 0x3d00);
    }
    if (v1 + v2 != a4) {
        return (int)(-0x3d00);
    }
    int v5 = (int)(thunk_FUN_11440430(a1, v1, v2), 0); // (int)&FUN_1141f036
    int result = (int)(v5); // (int)&FUN_1141f040
    if (v5 == 0) {
        result = (int)(thunk_FUN_114404f0(a1, v1, v2, a5, a6), 0);
    }
    return (int)(result);
}

// Reference entry 1141f430; body size 36 bytes.
#line 1 "ENTRY_1141f430"
int FUN_1141f430(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_1141f430)
    int v2 = (int)(thunk_FUN_1140b1f0(&v1), 0); // (int)&FUN_1141f435
    return (int)(v2 == 2 | v2 < 5 ? a1 : 0);
}

// Reference entry 1141f460; body size 36 bytes.
#line 1 "ENTRY_1141f460"
int FUN_1141f460(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_1141f460)
    int v2 = (int)(thunk_FUN_1140b1f0(&v1), 0); // (int)&FUN_1141f465
    return (int)(v2 == 2 | v2 < 5 ? a1 : 0);
}

// Reference entry 1141f490; body size 36 bytes.
#line 1 "ENTRY_1141f490"
int FUN_1141f490(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_1141f490)
    int v2 = (int)(thunk_FUN_1140b1f0(&v1), 0); // (int)&FUN_1141f495
    return (int)(v2 == 2 | v2 < 5 ? a1 : 0);
}

// Reference entry 11422110; body size 39 bytes.
#line 1 "ENTRY_11422110"
int FUN_11422110(int a1) {

    int result = (int)(3); // (int)&FUN_11422119
int *v1 = (int *)((int)((int *)(4 * result + a1))); // (int)&FUN_11422120
    int v2 = (int)(llvm_bswap_i32(*v1) + 1, 0); // (int)&FUN_11422125
    *v1 = (int)(llvm_bswap_i32(v2), 0);
    while (result != 0 && v2 == 0) {
        result--;
        v1 = (int *)((int *)(4 * result + a1));
        v2 = (int)(llvm_bswap_i32(*v1) + 1, 0);
        *v1 = (int)(llvm_bswap_i32(v2), 0);
    }
    return (int)(result);
}

// Reference entry 11424990; body size 234 bytes.
#line 1 "ENTRY_11424990"
int FUN_11424990(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14) {

    int v1 = (int)(a10);
    int v2 = (int)(a10); // bp+44, (int)&FUN_1142499b
    uint v3 = (uint)(a11 + a10); // (int)&FUN_1142499f
    if (v3 < a10) {
        return (int)(-0x4f00);
    }
    int v4; // (int)((int(*)(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14))&FUN_11424990)
    int v5 = (int)(thunk_FUN_1143e370(a2, a4, a5, a6, a13, a14, v4, v4, v4, v4), 0); // (int)&FUN_114249c9
    int result = (int)(v5); // (int)&FUN_114249d7
    if (v5 == 0) {
        int v6 = (int)(thunk_FUN_1143fdc0(a2, a6, a3, &v1, a10, a11), 0); // (int)&FUN_114249e7
        result = (int)(v6);
        if (v6 == 0) {
            v2 = (int)(v1 + a10);
            result = (int)(FUN_11424dd0(a1, a2, a3, a4, a5, a6, a9, &v2, v3, a13, a14), 0);
        }
    }
    if (result != 0) {
        return (int)(result);
    }
    int result2 = (int)(FUN_11424480(a1, a2, a3, a4, a7, a8, a9, &v2, v3, a13, a14), 0); // (int)&FUN_11424a5d
    if (result2 == 0) {
        *(int*)a12 = (int)((int)(v2 - a10));
    }
    return (int)(result2);
}

// Reference entry 11424ba0; body size 89 bytes.
#line 1 "ENTRY_11424ba0"
int FUN_11424ba0(int a1, uint a2, int a3, int a4, int a5) {

    int v1 = (int)(a1);
int *v2 = (int *)((int)((int *)a1)); // (int)&FUN_11424ba9
    uint v3 = (uint)(*v2); // (int)&FUN_11424ba9
    if (v3 > a2) {
        return (int)(-0x4f00);
    }
    int v4 = (int)(a2 - v3); // (int)&FUN_11424baf
    if (v4 < 5) {
        return (int)(-0x4f00);
    }
    int v5; // (int)((int(*)(int a1, uint a2, int a3, int a4, int a5))&FUN_11424ba0)
    int result = (int)(thunk_FUN_1143f360(a3, a5, a4, &v1, v3 + 4, v4 - 4, v5), 0); // (int)&FUN_11424bcf
    if (result != 0) {
        return (int)(result);
    }
    *(int *)*v2 = (int)(llvm_bswap_i32(v1), 0);
    *v2 = (int)(v1 + 4 + *v2);
    return (int)(0);
}

// Reference entry 11425000; body size 34 bytes.
#line 1 "ENTRY_11425000"
int FUN_11425000(int a1, int a2, int a3, int a4) {

    return (int)(thunk_FUN_1140c8e0(thunk_FUN_1140d570(a1, a2, a3, a4)));
}

// Reference entry 11425c70; body size 63 bytes.
#line 1 "ENTRY_11425c70"
int FUN_11425c70(int a1) {

    int v1 = (int)(a1 & -256); // (int)&FUN_11425c76
    return (int)(a1 == 0x8000609 | (v1 + 256) == 0x8000300 | v1 == 0x8000400 | (v1 + 1024) == 0x8000500);
}

// Reference entry 11425cc0; body size 38 bytes.
#line 1 "ENTRY_11425cc0"
int FUN_11425cc0(int a1) {

    int result = (int)(0); // (int)((int(*)(int a1))&FUN_11425cc0)
    switch (a1 & 0x7000) {
        case 0x1000: {
        }
        case 0x2000: {
            result = (int)(1);
            break;
        }
    }
    return (int)(result);
}

// Reference entry 114260c0; body size 30 bytes.
#line 1 "ENTRY_114260c0"
int FUN_114260c0(int a1, int a2, int a3, int a4) {

    return (int)(thunk_FUN_11409bb0(a1, (int)&FUN_10080bf7, a2, a3, a4));
}

// Reference entry 11426100; body size 31 bytes.
#line 1 "ENTRY_11426100"
int FUN_11426100(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_11426100)
    thunk_FUN_11409600(a1 + 432, v1);
    return (int)(*(int *)(a1 + 4));
}

// Reference entry 11426130; body size 60 bytes.
#line 1 "ENTRY_11426130"
int FUN_11426130(int a1) {
int *v1 = (int *)((int)((int *)a1)); // (int)&FUN_11426135
    if (*v1 == (int)((0))) {
        *v1 = (int)((int)&FUN_1001645f);
    }
int *v2 = (int *)((int)((int *)(a1 + 4))); // (int)&FUN_11426146
    if (*v2 == (int)((0))) {
        *v2 = (int)((int)&FUN_1004f60b);
    }
    int v3; // (int)((int(*)(int a1))&FUN_11426130)
    return (int)(thunk_FUN_11409660(a1 + 8, v3, a1 + 432));
}

// Reference entry 11426180; body size 52 bytes.
#line 1 "ENTRY_11426180"
int FUN_11426180(int a1) {

    int v1 = (int)(0x415350); // bp-4, (int)&FUN_1142618b
    return (int)(thunk_FUN_114262c0(thunk_FUN_11409bb0(a1 + 432, (int)&FUN_10080bf7, a1 + 8, &v1, 3, 0x415350)));
}

// Reference entry 11426d60; body size 49 bytes.
#line 1 "ENTRY_11426d60"
int FUN_11426d60(int a1) {

    if (*(int *)a1 == 0) {
        return (int)(-137);
    }
    int v1 = (int)(*(int *)(a1 + 20)); // (int)&FUN_11426d69
    if ((v1 & 1) == 0) {
        return (int)(-137);
    }
    if ((v1 & 2) == 0) {
        return (int)(0);
    }
    if (*(int *)(a1 + 12) != 0 || *(int *)(a1 + 16) != 0) {
        return (int)(-135);
    }
    return (int)(0);
}

// Reference entry 114272c0; body size 55 bytes.
#line 1 "ENTRY_114272c0"
int FUN_114272c0(int a1) {

    int v1 = (int)(a1 & -0x3f8001); // (int)&FUN_114272c4
    if (v1 == 0x5400100) {
        return (int)(0x5500100);
    }
    if (v1 != 0x5400200) {
        return (int)(v1 == 0x5000500 ? 0x5100500 : 0);
    }
    return (int)(0x5500200);
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

// Reference entry 1142a0d0; body size 194 bytes.
#line 1 "ENTRY_1142a0d0"
int FUN_1142a0d0(int a1, int a2, int a3, int a4, int a5, int a6, int a7) {

    if (*(int *)(a1 + 4) >= 256) {
        return (int)((*(int *)a2 | a4) == 0 ? -135 : -134);
    }
    ushort v1 = (ushort)(*(short *)a1); // (int)&FUN_1142a103
    int v2 = (int)(v1); // (int)&FUN_1142a103
    int v3 = (int)(v2 & 0x7000); // (int)&FUN_1142a109
    int v4; // (int)((int(*)(int a1, int a2, int a3, int a4, int a5, int a6, int a7))&FUN_1142a0d0)
    if (v3 == 0x1000) {
        return (int)(FUN_1142bf40(a5, a6, v4));
    }
    short v5 = (short)(v3); // (int)&FUN_1142a11e
    if (v5 == 0x2000) {
        return (int)(FUN_1142bf40(a5, a6, v4));
    }
    if (v1 == 0x7001) {
        return (int)(thunk_FUN_11450230(a1, a3, a4, a5, a6, a7, v4));
    }
    if ((v2 & 0xcf00) == 0x4100 == v5 == 0x7000) {
        return (int)(thunk_FUN_11450ff0(a1, a5, a6, a7, v4));
    }
    return (int)(-134);
}

// Reference entry 1142a260; body size 45 bytes.
#line 1 "ENTRY_1142a260"
int FUN_1142a260(int a1, int a2, int a3, int a4, int a5, int a6) {

    int v1 = (int)(thunk_FUN_1144dd80(a1, a2, a3, a4, a5, a6), 0); // (int)&FUN_1142a278
    return (int)(v1 != -134 ? v1 : -134);
}

// Reference entry 1142a2d0; body size 42 bytes.
#line 1 "ENTRY_1142a2d0"
int FUN_1142a2d0(int a1, int a2) {

    int v1; // (int)((int(*)(int a1, int a2))&FUN_1142a2d0)
    int result = (int)(thunk_FUN_1144e3a0(a1 + 8, a2, v1), 0); // (int)&FUN_1142a2dd
    if (result != 0) {
        return (int)(result);
    }
    *(int*)a1 = (int)((int)(1));
    return (int)(result);
}

// Reference entry 1142a480; body size 46 bytes.
#line 1 "ENTRY_1142a480"
int FUN_1142a480(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_1142a480)
    if (*(int *)(a1 + 4) > 255 || v1 != 0x9020000) {
        return (int)(-134);
    }
    return (int)(thunk_FUN_11451500(a1));
}

// Reference entry 1142a4f0; body size 73 bytes.
#line 1 "ENTRY_1142a4f0"
int FUN_1142a4f0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9) {

    if (*(int *)(a1 + 4) >= 256) {
        return (int)(-135);
    }
    int v1 = (int)(thunk_FUN_1144e770(a1, a2, a3, a4, a5, a6, a7, a8, a9), 0); // (int)&FUN_1142a524
    return (int)(v1 != -134 ? v1 : -134);
}

// Reference entry 1142a580; body size 70 bytes.
#line 1 "ENTRY_1142a580"
int FUN_1142a580(int a1, int a2, int a3, int a4, int a5) {

    if (*(int *)(a2 + 4) >= 256) {
        return (int)(-135);
    }
    int v1; // (int)((int(*)(int a1, int a2, int a3, int a4, int a5))&FUN_1142a580)
    int result = (int)(thunk_FUN_1144f140(a1 + 16, a2, a3, a4, a5, v1), 0); // (int)&FUN_1142a5a9
    if (result != 0) {
        return (int)(result);
    }
    *(int*)a1 = (int)((int)(1));
    return (int)(result);
}

// Reference entry 1142a760; body size 49 bytes.
#line 1 "ENTRY_1142a760"
int FUN_1142a760(int a1, int a2) {

    if (*(int *)(a2 + 28) >= 256) {
        return (int)(-135);
    }
    int v1; // (int)((int(*)(int a1, int a2))&FUN_1142a760)
    int result = (int)(thunk_FUN_1144f950(a1 + 28, a2, v1), 0); // (int)&FUN_1142a77d
    if (result == 0) {
        *(int*)a1 = (int)((int)(1));
    }
    return (int)(result);
}

// Reference entry 1142a890; body size 89 bytes.
#line 1 "ENTRY_1142a890"
int FUN_1142a890(int a1, int a2) {

    if (*(int *)(a2 + 4) >= 256) {
        return (int)(-135);
    }
    *(int*)a1 = (int)((int)(1));
    int v1 = (int)((int)*(short *)a2); // (int)&FUN_1142a8ad
    if ((v1 & 0xff00) == 0x7100) {
        return (int)((int)((v1 & 192) != 0 == (v1 & 0xcf00) == 0x4100) - 134);
    }
    return (int)(-134);
}

// Reference entry 1142ab60; body size 68 bytes.
#line 1 "ENTRY_1142ab60"
int FUN_1142ab60(int a1, int a2) {

    if (*(int *)(a2 + 4) >= 256) {
        return (int)(-135);
    }
    *(int*)a1 = (int)((int)(1));
    int v1 = (int)((int)*(short *)a2); // (int)&FUN_1142ab7d
    if ((v1 & 0xcf00) == 0x4100) {
        return (int)((int)((v1 & 192) != 0) - 134);
    }
    return (int)(-134);
}

// Reference entry 1142b280; body size 35 bytes.
#line 1 "ENTRY_1142b280"
int FUN_1142b280(int a1) {
int *v1 = (int *)((int)((int *)a1)); // (int)&FUN_1142b284
    uint v2 = (uint)(*v1); // (int)&FUN_1142b284
    uint v3 = (uint)(v2 / 4);
    int result = (int)(v3 & 1024 | v2 | v3 & 2048);
    if ((v2 & 0x3000) != 0) {
        *v1 = (int)(result);
    }
    return (int)(result);
}

// Reference entry 1142b390; body size 157 bytes.
#line 1 "ENTRY_1142b390"
int FUN_1142b390(int a1, int a2, int a3) {

    int v1 = (int)(32); // (int)((int(*)(int a1, int a2, int a3))&FUN_1142b390)
    int * v2; // (int)&FUN_1142b3cb
    switch (a1) {
        case 448: {
            v1 = (int)(56);
        }
        case 255: {
            v2 = (int *)((int *)a3);
            int v3; // (int)((int(*)(int a1, int a2, int a3))&FUN_1142b390)
            if (v3 == 0) {
                return (int)(-141);
            }
            int result = (int)(thunk_FUN_1142ea40(a2, v3, v1, v3, v3, v3), 0); // (int)&FUN_1142b3e0
            if (result != 0) {
                return (int)(result);
            }
            break;
        }
        default: {
            return (int)(-135);
        }
    }
    int result2 = (int)(-151); // (int)((int(*)(int a1, int a2, int a3))&FUN_1142b390)
    switch (a1) {
        case 255: {
char *v4 = (char *)((char)((char *)*v2)); // (int)&FUN_1142b418
            *v4 = (char)(*v4 & -8);
char *v5 = (char *)((char)((char *)(*v2 + 31))); // (int)&FUN_1142b41d
            *v5 = (char)(*v5 % 128);
char *v6 = (char *)((char)((char *)(*v2 + 31))); // (int)&FUN_1142b423
            *v6 = (char)(*v6 + 64);
            result2 = (int)(0);
            break;
        }
        case 448: {
char *v7 = (char *)((char)((char *)*v2)); // (int)&FUN_1142b407
            *v7 = (char)(*v7 & -4);
char *v8 = (char *)((char)((char *)(*v2 + 55))); // (int)&FUN_1142b40f
            *v8 = (char)(*v8 | -128);
            return (int)(0);
        }
    }
    return (int)(result2);
}

// Reference entry 1142c180; body size 67 bytes.
#line 1 "ENTRY_1142c180"
int FUN_1142c180(int a1, int a2, int a3, int a4) {

    int v1; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_1142c180)
    int result = (int)(FUN_1142bfb0(a1, a2, a3, a4, v1), 0); // (int)&FUN_1142c192
    if (result != 0) {
        return (int)(result);
    }
int *v2 = (int *)((int)((int *)a2)); // (int)&FUN_1142c19e
    int v3 = (int)(*v2); // (int)&FUN_1142c19e
    if (*(int *)(v3 + 4) < 256) {
        return (int)(0);
    }
    thunk_FUN_11452150(v3);
    *v2 = (int)(0);
    return (int)(-134);
}

// Reference entry 1142c1e0; body size 39 bytes.
#line 1 "ENTRY_1142c1e0"
int FUN_1142c1e0(void) {

    int v1; // (int)((int(*)(void))&FUN_1142c1e0)
    return (int)(v1 & -256 | (int)(*(char *)&DAT_122fa1d0 % 2));
}

// Reference entry 1142c900; body size 72 bytes.
#line 1 "ENTRY_1142c900"
int FUN_1142c900(void) {

    int v1; // bp-224, (int)((int(*)(void))&FUN_1142c900)
    int v2; // (int)((int(*)(void))&FUN_1142c900)
    memset(&v1, 0, 220, v2, 0, 0);
    return (int)(0);
}

// Reference entry 1142e090; body size 33 bytes.
#line 1 "ENTRY_1142e090"
int FUN_1142e090(int a1) {

    int v1 = (int)(*(int *)a1); // (int)&FUN_1142e094
    return (int)((v1 & 0x7f000000) != 0x9000000 ? v1 : v1 & -0x9ff0001 | 0x8000000);
}

// Reference entry 1142e4d0; body size 60 bytes.
#line 1 "ENTRY_1142e4d0"
int FUN_1142e4d0(int a1) {

    int v1 = (int)(*(int *)a1); // (int)&FUN_1142e4d4
    int v2; // (int)((int(*)(int a1))&FUN_1142e4d0)
    thunk_FUN_1142ddf0(a1, v2);
    return (int)(2 * (int)(v1 == 0 != (v1 & 0x7f000000) != 0x9000000) - 137);
}

// Reference entry 11430400; body size 280 bytes.
#line 1 "ENTRY_11430400"
int FUN_11430400(int a1, int a2, uint a3) {

    if (a3 == 0) {
        return (int)(-135);
    }
    int v1 = (int)(a3 & -256); // (int)&FUN_1143040f
    switch (v1) {
        case 0x6001300: {
            goto lab_0x11430448;
        }
        case 0x6000300: {
            goto lab_0x11430448;
        }
        case 0x6000200: {
            goto lab_0x11430448;
        }
        default: {
            int v2 = (int)(a3 & -512); // (int)&FUN_1143042b
            if (v1 != 0x6000900 == (v2 != 0x6000600) == (v2 != 0x6000400)) {
                goto lab_0x1143049f;
            } else {
                goto lab_0x11430448;
            }
        }
    }
  lab_0x11430448:;
    int v3; // (int)((int(*)(int a1, int a2, uint a3))&FUN_11430400)
    if ((char)a3 == 0) {
        goto lab_0x1143049f;
    } else {
        switch (v1) {
            case 0x6001300: {
                v3 = (int)((a3 & 255 | 0x2000000) == 0x20000ff);
                goto lab_0x114304d3;
            }
            case 0x6000300: {
                v3 = (int)((a3 & 255 | 0x2000000) == 0x20000ff);
                goto lab_0x114304d3;
            }
            case 0x6000200: {
                v3 = (int)((a3 & 255 | 0x2000000) == 0x20000ff);
                goto lab_0x114304d3;
            }
            default: {
                if (v1 == 0x6000900 || (a3 & -1024 || 512) == 0x6000600) {
                    v3 = (int)((a3 & 255 | 0x2000000) == 0x20000ff);
                    goto lab_0x114304d3;
                } else {
                    v3 = (int)(false);
                    goto lab_0x114304d3;
                }
            }
        }
    }
  lab_0x1143049f:;
    int v4 = (int)(a3 & 0x7f000000); // (int)&FUN_114304a1
    if (v4 != 0x3000000) {
        if (v4 != 0x5000000) {
            v3 = (int)(a3 == 0x20000ff);
            goto lab_0x114304d3;
        } else {
            v3 = (int)(a3 / 0x8000 & 1);
            goto lab_0x114304d3;
        }
    } else {
        v3 = (int)(a3 / 0x8000 & 1);
        goto lab_0x114304d3;
    }
  lab_0x114304d3:
    if (v3 != 0) {
        return (int)(-135);
    }
    if (FUN_1142d8f0(a2, *(int *)(a1 + 4), a3) != 0) {
        return (int)(0);
    }
    if (FUN_1142d8f0(a2, *(int *)(a1 + 8), a3) == 0) {
        return (int)(-133);
    }
    return (int)(0);
}

// Reference entry 11432280; body size 33 bytes.
#line 1 "ENTRY_11432280"
int FUN_11432280(int a1, uint a2) {

    if (a2 < 0xfff9) {
        *(short*)(a1 + 2) = (short)((short)a2);
        return (int)(a2 & 0xffff);
    }
    *(short*)(a1 + 2) = (short)(-1);
    return (int)(0xffff);
}

// Reference entry 114322c0; body size 48 bytes.
#line 1 "ENTRY_114322c0"
int FUN_114322c0(int result, uint a2) {

    uint v1 = (uint)(a2 / 4); // (int)&FUN_114322ce
    *(int*)(result + 8) = (int)(v1 & 1024 | a2 | v1 & 2048);
    return (int)(result);
}

// Reference entry 11432480; body size 33 bytes.
#line 1 "ENTRY_11432480"
int FUN_11432480(int a1) {
int *v1 = (int *)((int)((int *)a1)); // (int)&FUN_11432484
    int result = (int)(*v1); // (int)&FUN_11432484
    if (result == 0) {
        return (int)(result);
    }
    *v1 = (int)(0);
    return (int)(result != 1 ? -135 : -134);
}

// Reference entry 11433510; body size 236 bytes.
#line 1 "ENTRY_11433510"
int FUN_11433510(int a1, int a2, uint a3) {

    int v1 = (int)(*(int *)(a1 + 4)); // (int)&FUN_1143351b
    int v2; // (int)((int(*)(int a1, int a2, uint a3))&FUN_11433510)
    if (v1 != 2) {
        v2 = (int)(2 * a3);
    } else {
        v2 = (int)(*(int *)(a1 + 36) + a3);
    }
    if (a3 >= 129) {
        return (int)(-135);
    }
    int v3 = (int)(v2 + 4); // (int)&FUN_1143352b
    if (v3 == 0) {
        return (int)(-141);
    }
    int v4 = (int)(v2 + 5); // (int)&FUN_11433565
    int v5; // (int)((int(*)(int a1, int a2, uint a3))&FUN_11433510)
    if (v1 != 2) {
        uint v6 = (uint)(a3 / 256); // (int)&FUN_114335a3
        *(char*)v3 = (char)((int)((char)v6));
        *(char*)v4 = (char)((int)((char)a3));
        int v7 = (int)(v2 + 6); // (int)&FUN_114335b2
        int v8; // (int)((int(*)(int a1, int a2, uint a3))&FUN_11433510)
        memset( (void *)(v7) , 0, a3, v8, v8, v8, v8, v3, v6);
        v5 = (int)(v7 + a3);
    } else {
        *(char*)v3 = (char)((int)(*(char *)(a1 + 37)));
        int v9 = (int)(a1 + 36); // (int)&FUN_11433571
        *(char*)v4 = (char)((int)(*(char *)v9));
        int v10 = (int)(v2 + 6); // (int)&FUN_11433577
int *v11 = (int *)((int)((int *)v9)); // (int)&FUN_11433578
        int v12 = (int)(*v11); // (int)&FUN_11433578
        v5 = (int)(v10);
        if (v12 != 0) {
int *v13 = (int *)((int)((int *)(a1 + 32))); // (int)&FUN_11433580
            memcpy((void *)(v10), (void *)(*v13), v12);
            thunk_FUN_11423ed0(*v13, *v11);
            v5 = (int)(*v11 + v10);
        }
    }
    *(char*)v5 = (char)((int)(0));
    *(char*)(v5 + 1) = (char)((char)a3);
    int v14 = (int)(v5 + 2); // (int)&FUN_114335d0
    memcpy((void *)(v14), (void *)(a2), a3);
    int result = (int)(FUN_114336c0(a1, v3, a3 - 4 - v2 + v14), 0); // (int)&FUN_114335e0
    thunk_FUN_11423f00(v3, v3);
    return (int)(result);
}

// Reference entry 11433810; body size 106 bytes.
#line 1 "ENTRY_11433810"
int FUN_11433810(int a1, int a2) {

    int v1 = (int)(*(int *)(a1 + 4)); // (int)&FUN_1143381b
int *v2 = (int *)((int)((int *)(a1 + 20))); // (int)&FUN_1143381e
    int v3; // (int)((int(*)(int a1, int a2))&FUN_11433810)
    int result = (int)(thunk_FUN_114521e0(v1, a2, v3, v3, v3), 0); // (int)&FUN_11433822
    if (result != 0) {
        return (int)(result);
    }
    int result2 = (int)(thunk_FUN_114521f0(v1), 0); // (int)&FUN_1143382f
    if (result2 != 0) {
        return (int)(result2);
    }
    if ((char)v1 != 0) {
        if (thunk_FUN_11451db0(*v2, 0) == 0) {
            return (int)(-135);
        }
    } else {
        if (*v2 != (int)((0))) {
            return (int)(-135);
        }
    }
    if ((*(int *)(a1 + 8) & -0xff04) != 0) {
        return (int)(-135);
    }
    return (int)(*(short *)(a1 + 2) > 0xfff8 ? -134 : 0);
}

// Reference entry 114338c0; body size 133 bytes.
#line 1 "ENTRY_114338c0"
int FUN_114338c0(int a1, int a2) {

    switch (a1 & 0x7000) {
        case 0x1000: {
        }
        case 0x2000: {
            int v1; // (int)((int(*)(int a1, int a2))&FUN_114338c0)
            int result = (int)(thunk_FUN_11433a20(a1, a2, v1), 0); // (int)&FUN_11433935
            if (result != 0) {
                return (int)(result);
            }
            return (int)(0);
        }
    }
    if ((a1 & 0xffff) == 0x7001) {
        if (a2 <= 0x1000) {
            if ((a2 & 7) == 0) {
                return (int)(0);
            }
        }
    } else {
        if ((a1 & 0xff00) == 0x7100) {
            return (int)(0);
        }
    }
    return (int)(-134);
}

// Reference entry 114339b0; body size 90 bytes.
#line 1 "ENTRY_114339b0"
int FUN_114339b0(uint a1) {

    int v1 = (int)(a1 / 0x10000 & 0xff3f); // (int)&FUN_114339be
    int result = (int)(-134); // (int)((int(*)(uint a1))&FUN_114339b0)
    switch (a1 & -0x3f8001) {
        case 0x5000500: {
            if ((char)v1 == 16) {
                return (int)(0);
            }
            return (int)(-135);
        }
        case 0x5400100: {
            if ((a1 & 0x10000) == 0 == (char)v1 < 17) {
                return (int)(0);
            }
            return (int)(-135);
        }
        case 0x5400200: {
            char v2 = (char)(v1); // (int)&FUN_114339dc
            result = (int)(0);
            switch (v2) {
                case 4: {
                    return (int)(result);
                }
                case 8: {
                    return (int)(result);
                }
                default: {
                    result = (int)(0);
                    if (v2 < 17) {
                        return (int)(result);
                    }
                    return (int)(-135);
                }
            }
        }
        default: {
            return (int)(result);
        }
    }
}

// Reference entry 11433ca0; body size 33 bytes.
#line 1 "ENTRY_11433ca0"
int FUN_11433ca0(int a1) {
int *v1 = (int *)((int)((int *)a1)); // (int)&FUN_11433ca4
    int result = (int)(*v1); // (int)&FUN_11433ca4
    if (result == 0) {
        return (int)(result);
    }
    *v1 = (int)(0);
    return (int)(result != 1 ? -135 : -134);
}

// Reference entry 11434490; body size 42 bytes.
#line 1 "ENTRY_11434490"
int FUN_11434490(int a1, int a2, int a3, int a4) {

    int result = (int)(0); // (int)&FUN_11434496
    if (a3 != 0) {
        int v1 = (int)(a2 != 0 ? 0 : a4); // (int)&FUN_114344a2
        result = (int)(memset((char *)(v1 + a1), 33, a3 - v1), 0);
    }
    return (int)(result);
}

// Reference entry 114346e0; body size 60 bytes.
#line 1 "ENTRY_114346e0"
int FUN_114346e0(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_114346e0)
    thunk_FUN_1143e710(a1, v1);
    thunk_FUN_11414d70(a1 + 96);
    thunk_FUN_1143f0b0(a1 + 104);
    thunk_FUN_1143f0b0(a1 + 128);
    return (int)(thunk_FUN_11414d70(a1 + 152));
}

// Reference entry 11434730; body size 65 bytes.
#line 1 "ENTRY_11434730"
int FUN_11434730(int a1, int a2, int a3, int a4, int a5, int a6) {

    int v1; // (int)((int(*)(int a1, int a2, int a3, int a4, int a5, int a6))&FUN_11434730)
    int v2 = (int)(thunk_FUN_1143e4d0(a1, a2, a4, a5, v1), 0); // (int)&FUN_11434742
    int result = (int)(v2); // (int)&FUN_1143474c
    if (v2 == 0) {
        result = (int)(thunk_FUN_1143ea90(a1, a3, a2, a1 + 28, a4, a5, a6), 0);
    }
    return (int)(result);
}

// Reference entry 11434810; body size 60 bytes.
#line 1 "ENTRY_11434810"
int FUN_11434810(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_11434810)
    thunk_FUN_1143e810(a1, v1);
    thunk_FUN_114157a0(a1 + 96);
    thunk_FUN_1143f0f0(a1 + 104);
    thunk_FUN_1143f0f0(a1 + 128);
    return (int)(thunk_FUN_114157a0(a1 + 152));
}

// Reference entry 11434860; body size 160 bytes.
#line 1 "ENTRY_11434860"
int FUN_11434860(int a1, int a2, int a3, int a4, int a5, int a6, int a7) {

    int v1 = (int)(a7);
    if (*(int *)(a7 + 60) == 0) {
        return (int)(-0x4f80);
    }
    int v2 = (int)(a7 + 96); // (int)&FUN_11434880
    int v3; // (int)((int(*)(int a1, int a2, int a3, int a4, int a5, int a6, int a7))&FUN_11434860)
    int result = (int)(thunk_FUN_1143e4d0(v3, v3, v3, v3, v3, a1, a2, v2, a7), 0); // (int)&FUN_11434885
    if (result != 0) {
        return (int)(result);
    }
    int v4 = (int)(a7 + 104); // (int)&FUN_1143488d
    int result2 = (int)(thunk_FUN_1143ea90(result, a1, a2, a7 + 28, v2, v4, a7), 0); // (int)&FUN_114348a1
    if (result2 != 0) {
        return (int)(result2);
    }
    int result3 = (int)(thunk_FUN_1143fd40(a3, a4, &v1, a7), 0); // (int)&FUN_114348bd
    if (result3 != 0) {
        return (int)(result3);
    }
    int v5 = (int)(v1);
    int v6; // bp-4, (int)((int(*)(int a1, int a2, int a3, int a4, int a5, int a6, int a7))&FUN_11434860)
    int v7 = (int)(thunk_FUN_1143fdc0(a3 - v5, v5 + a4, &v6, a5, v4, a7), 0); // (int)&FUN_114348de
    int result4 = (int)(v7); // (int)&FUN_114348e8
    if (v7 == 0) {
        *(int*)a6 = (int)((int)(v6 + v1));
        result4 = (int)(0);
    }
    return (int)(result4);
}

// Reference entry 11434930; body size 106 bytes.
#line 1 "ENTRY_11434930"
int FUN_11434930(int a1, int a2, int a3, int a4, int a5, int a6, int a7) {

    if (*(int *)(a1 + 60) == 0) {
        return (int)(-0x4f80);
    }
    int v1 = (int)(a1 + 96); // (int)&FUN_11434948
    int v2; // (int)((int(*)(int a1, int a2, int a3, int a4, int a5, int a6, int a7))&FUN_11434930)
    int result = (int)(thunk_FUN_1143e4d0(a1, v1, a6, a7, v2, v2, v2), 0); // (int)&FUN_11434951
    if (result != 0) {
        return (int)(result);
    }
    int v3 = (int)(a1 + 104); // (int)&FUN_11434959
    int v4 = (int)(thunk_FUN_1143ea90(a1, v3, v1, a1 + 28, a6, a7, result), 0); // (int)&FUN_11434970
    int result2 = (int)(v4); // (int)&FUN_1143497a
    if (v4 == 0) {
        result2 = (int)(thunk_FUN_1143fdc0(a1, v3, a3, a2, a4, a5), 0);
    }
    return (int)(result2);
}

// Reference entry 114349c0; body size 33 bytes.
#line 1 "ENTRY_114349c0"
int FUN_114349c0(int a1, int a2, int a3) {

    return (int)(thunk_FUN_1143fce0(a1, a1 + 128, a2, a3 - *(int *)a2));
}

// Reference entry 114349f0; body size 63 bytes.
#line 1 "ENTRY_114349f0"
int FUN_114349f0(int a1, int a2, int a3) {

    int v1 = (int)(a2); // (int)&FUN_11434a08
    int v2; // (int)((int(*)(int a1, int a2, int a3))&FUN_114349f0)
    int v3 = (int)(thunk_FUN_1143fce0(a1, a1 + 128, &v1, a3, v2), 0); // (int)&FUN_11434a0e
    int result = (int)(v3); // (int)&FUN_11434a18
    if (v3 == 0) {
        result = (int)(v1 - a2 == a3 ? 0 : -0x4f80);
    }
    return (int)(result);
}

// Reference entry 114356a0; body size 44 bytes.
#line 1 "ENTRY_114356a0"
int FUN_114356a0(int a1, int a2) {

    uint v1 = (uint)(a2 ^ a1 ^ *(int *)&DAT_122fa560); // (int)&FUN_114356bb
    return (int)((-((v1 / 2)) | -v1) > -1);
}

// Reference entry 114356e0; body size 94 bytes.
#line 1 "ENTRY_114356e0"
int FUN_114356e0(int a1, int a2) {

    uint v1 = (uint)(*(int *)&DAT_122fa560);
    int v2 = (int)(v1 ^ a1); // (int)&FUN_114356f1
    int v3 = (int)(-((v1 / 2))); // (int)&FUN_1143570a
    int v4 = (int)((v3 | -((v1 ^ (int)((a2 ^ a1) < 0)))) / 0x80000000); // (int)&FUN_11435716
    return (int)((-((v1 ^ (int)(((v1 ^ -0x80000000 ^ v4) & (v1 ^ a2) - v2 | v4 & v2) < 0))) | v3) / 0x80000000);
}

// Reference entry 11435790; body size 94 bytes.
#line 1 "ENTRY_11435790"
int FUN_11435790(int a1, int a2) {

    uint v1 = (uint)(*(int *)&DAT_122fa560);
    int v2 = (int)(v1 ^ a2); // (int)&FUN_114357a1
    int v3 = (int)(-((v1 / 2))); // (int)&FUN_114357ba
    int v4 = (int)((v3 | -((v1 ^ (int)((a2 ^ a1) < 0)))) / 0x80000000); // (int)&FUN_114357c6
    return (int)((-((v1 ^ (int)(((v1 ^ -0x80000000 ^ v4) & (v1 ^ a1) - v2 | v4 & v2) < 0))) | v3) / 0x80000000);
}

// Reference entry 11435810; body size 45 bytes.
#line 1 "ENTRY_11435810"
int FUN_11435810(int a1, int a2) {

    uint v1 = (uint)(a2 ^ a1 ^ *(int *)&DAT_122fa560); // (int)&FUN_1143582b
    return (int)((-((v1 / 2)) | -v1) / 0x80000000);
}

// Reference entry 11438720; body size 74 bytes.
#line 1 "ENTRY_11438720"
int FUN_11438720(int a1, uint a2, int a3) {

    if (a2 == 0) {
        return (int)(-0x1100);
    }
    unsigned char v1 = (unsigned char)(*(char *)(a1 - 1 + a2)); // (int)&FUN_11438735
    uint v2 = (uint)((int)v1); // (int)&FUN_11438735
    if (v2 > a2) {
        return (int)(-0x1380);
    }
    int v3 = (int)(a2 - v2); // (int)&FUN_11438744
    *(int*)a3 = (int)((int)(v3));
    if (v3 >= a2) {
        return (int)(0);
    }
    int v4 = (int)(v3); // (int)&FUN_1143874a
    int result = (int)(-0x1380); // (int)&FUN_11438756
    while ((char)(v1) == *(char *)(v4 + a1)) {
        v4++;
        result = (int)(0);
        if (v4 >= a2) {
            break;
        }
        result = (int)(-0x1380);
    }
    return (int)(result);
}

// Reference entry 11439d10; body size 190 bytes.
#line 1 "ENTRY_11439d10"
int FUN_11439d10(int a1, uint a2, unsigned char a3) {

    int v1; // (int)((int(*)(int a1, uint a2, unsigned char a3))&FUN_11439d10)
    int v2 = (int)(memset( (void *)(a1) , 0, a2 + 1, v1, v1, v1, v1), 0); // (int)&FUN_11439d23
    int v3; // bp-16, (int)((int(*)(int a1, uint a2, unsigned char a3))&FUN_11439d10)
    int v4 = (int)(&v3); // (int)&FUN_11439d28
    if (a2 == 0) {
        *(char*)(v4 + 24) = (char)(0);
        return (int)(v2 & -256);
    }
int *v5 = (int *)((int)((int *)(v4 + 20)));
    int v6 = (int)(v4 + 24);
    int v7 = (int)(0);
    int v8 = (int)(0); // (int)&FUN_11439d44
    int v9 = (int)(v7); // (int)&FUN_11439d44
    int v10 = (int)(0); // (int)&FUN_11439d44
    int v11; // (int)((int(*)(int a1, uint a2, unsigned char a3))&FUN_11439d10)
    int v12; // (int)&FUN_11439d55
    unsigned char v13; // (int)&FUN_11439d5f
    int v14; // (int)&FUN_11439d61
    char * v15; // (int)&FUN_11439d68
    uint v16; // (int)&FUN_11439d6b
    if ((int)a3 != 0) {
        *(int*)(v4 - 4) = (int)(v9);
        *(int*)(v4 - 8) = (int)(*(int *)(v4 + 32));
        v12 = (int)(thunk_FUN_114156d0(), 0);
        v13 = (unsigned char)((char)v8 % 32);
        v11 = (int)(v13 == 0 ? v12 : (int)((char)v12 << v13));
        v14 = (int)(v8 + 1);
        v15 = (char *)((char *)(*v5 + v7));
        *v15 = (char)(*v15 | (char)v11);
        v16 = (uint)(*(int *)v6);
        v8 = (int)(v14);
        v9 += a2;
        v10 = (int)(v16);
        while (v14 < v16) {
            *(int*)(v4 - 4) = (int)(v9);
            *(int*)(v4 - 8) = (int)(*(int *)(v4 + 32));
            v12 = (int)(thunk_FUN_114156d0(), 0);
            v13 = (unsigned char)((char)v8 % 32);
            v11 = (int)(v13 == 0 ? v12 : (int)((char)v12 << v13));
            v14 = (int)(v8 + 1);
            v15 = (char *)((char *)(*v5 + v7));
            *v15 = (char)(*v15 | (char)v11);
            v16 = (uint)(*(int *)v6);
            v8 = (int)(v14);
            v9 += a2;
            v10 = (int)(v16);
        }
    }
    int v17 = (int)(v10);
    int v18 = (int)(v7 + 1); // (int)&FUN_11439d73
    while (v18 != a2) {
        v7 = (int)(v18);
        v8 = (int)(0);
        v9 = (int)(v7);
        v10 = (int)(0);
        if (v17 != 0) {
            *(int*)(v4 - 4) = (int)(v9);
            *(int*)(v4 - 8) = (int)(*(int *)(v4 + 32));
            v12 = (int)(thunk_FUN_114156d0(), 0);
            v13 = (unsigned char)((char)v8 % 32);
            v11 = (int)(v13 == 0 ? v12 : (int)((char)v12 << v13));
            v14 = (int)(v8 + 1);
            v15 = (char *)((char *)(*v5 + v7));
            *v15 = (char)(*v15 | (char)v11);
            v16 = (uint)(*(int *)v6);
            v8 = (int)(v14);
            v9 += a2;
            v10 = (int)(v16);
            while (v14 < v16) {
                *(int*)(v4 - 4) = (int)(v9);
                *(int*)(v4 - 8) = (int)(*(int *)(v4 + 32));
                v12 = (int)(thunk_FUN_114156d0(), 0);
                v13 = (unsigned char)((char)v8 % 32);
                v11 = (int)(v13 == 0 ? v12 : (int)((char)v12 << v13));
                v14 = (int)(v8 + 1);
                v15 = (char *)((char *)(*v5 + v7));
                *v15 = (char)(*v15 | (char)v11);
                v16 = (uint)(*(int *)v6);
                v8 = (int)(v14);
                v9 += a2;
                v10 = (int)(v16);
            }
        }
        v17 = (int)(v10);
        v18 = (int)(v7 + 1);
    }
char *v19 = (char *)((char)((char *)v6)); // (int)&FUN_11439d83
    *v19 = (char)(0);
    char result = (char)(0); // (int)&FUN_11439dbe
    int v20 = (int)(1); // (int)&FUN_11439dc0
    int v21 = (int)(v20 + *v5);
char *v22 = (char *)((char)((char *)v21)); // (int)&FUN_11439d90
    char v23 = (char)(*v22); // (int)&FUN_11439d90
char *v24 = (char *)((char)((char *)(v21 - 1))); // (int)&FUN_11439d95
    char v25 = (char)(*v24); // (int)&FUN_11439d95
    unsigned char v26 = (unsigned char)(v23 ^ result); // (int)&FUN_11439da0
    char v27 = (char)(v26 % 2 ^ 1); // (int)&FUN_11439da6
    char v28 = (char)(v27 * v25);
    *v24 = (char)(128 * v27 | v25);
    *v22 = (char)(v28 ^ v26);
    result = (char)(v28 & v26 | v23 & result);
    v20++;
    *v19 = (char)(result);
    while (v20 <= a2) {
        v21 = (int)(v20 + *v5);
        v22 = (char *)((char *)v21);
        v23 = (char)(*v22);
        v24 = (char *)((char *)(v21 - 1));
        v25 = (char)(*v24);
        v26 = (unsigned char)(v23 ^ result);
        v27 = (char)(v26 % 2 ^ 1);
        v28 = (char)(v27 * v25);
        *v24 = (char)(128 * v27 | v25);
        *v22 = (char)(v28 ^ v26);
        result = (char)(v28 & v26 | v23 & result);
        v20++;
        *v19 = (char)(result);
    }
    return (int)(result);
}

// Reference entry 1143aa80; body size 213 bytes.
#line 1 "ENTRY_1143aa80"
int FUN_1143aa80(int a1, int a2) {
int *v1 = (int *)((int)((int *)(a2 + 72))); // (int)&FUN_1143aa85
    int v2; // bp-12, (int)((int(*)(int a1, int a2))&FUN_1143aa80)
    if (*v1 == (int)((0))) {
        v2 = (int)(a1);
        int v3; // (int)((int(*)(int a1, int a2))&FUN_1143aa80)
        return (int)(thunk_FUN_11416420(a1, a1, a2 + 4, v3));
    }
short *v4 = (short *)((short)((short *)(a1 + 4))); // (int)&FUN_1143aaa4
    if (*v4 < (short)((0))) {
        v2 = (int)(0);
        if (thunk_FUN_11413b90() != 0) {
            return (int)(-0x4f80);
        }
    }
    v2 = (int)(a1);
    if (thunk_FUN_11413ac0(a1) > 2 * *(int *)(a2 + 60)) {
        return (int)(-0x4f80);
    }
    int result = (int)(*v1); // (int)&FUN_1143aad4
    if (result != 0) {
        return (int)(result);
    }
    int v5 = (int)(&v2); // (int)&FUN_1143aadd
int *v6 = (int *)((int)((int *)(v5 - 4)));
    int * v7; // (int)((int(*)(int a1, int a2))&FUN_1143aa80)
    int result3; // (int)((int(*)(int a1, int a2))&FUN_1143aa80)
    if (result > (int)*v4) {
        *v6 = (int)(0);
int *v8 = (int *)((int)((int *)(v5 - 8)));
        *v8 = (int)(a1);
        v7 = (int *)(v8);
        result3 = (int)(result);
        if (thunk_FUN_11413b90() != 0) {
            *v6 = (int)(a2 + 4);
            *v8 = (int)(a1);
            *(int*)(v5 - 12) = (int)(a1);
            int result2 = (int)(thunk_FUN_11413aa0(), 0); // (int)&FUN_1143ab05
            while (result2 == 0) {
                v7 = (int *)(v8);
                result3 = (int)(result2);
                if (result2 <= (int)*v4) {
                    goto lab_0x1143ab19_2;
                }
                *v6 = (int)(0);
                *v8 = (int)(a1);
                v7 = (int *)(v8);
                result3 = (int)(result2);
                if (thunk_FUN_11413b90() == 0) {
                    goto lab_0x1143ab19_2;
                }
                *v6 = (int)(a2 + 4);
                *v8 = (int)(a1);
                *(int*)(v5 - 12) = (int)(a1);
                result2 = (int)(thunk_FUN_11413aa0(), 0);
            }
            return (int)(result2);
        }
    } else {
        v7 = (int *)((int *)(v5 - 8));
        result3 = (int)(result);
    }
  lab_0x1143ab19_2:;
    int v9 = (int)(a2 + 4); // (int)&FUN_1143ab19
    *v6 = (int)(v9);
    *v7 = (int)(a1);
    if (thunk_FUN_11413bf0() < 0) {
        return (int)(result3);
    }
    *v6 = (int)(v9);
    *v7 = (int)(a1);
    *(int*)(v5 - 12) = (int)(a1);
    int v10 = (int)(thunk_FUN_11417930(), 0); // (int)&FUN_1143ab33
    int result4 = (int)(v10); // (int)&FUN_1143ab3f
    while (v10 == 0) {
        *v6 = (int)(v9);
        *v7 = (int)(a1);
        result4 = (int)(v10);
        if (thunk_FUN_11413bf0() < 0) {
            break;
        }
        *v6 = (int)(v9);
        *v7 = (int)(a1);
        *(int*)(v5 - 12) = (int)(a1);
        v10 = (int)(thunk_FUN_11417930(), 0);
        result4 = (int)(v10);
    }
    return (int)(result4);
}

// Reference entry 1143c990; body size 83 bytes.
#line 1 "ENTRY_1143c990"
int FUN_1143c990(int a1, char a2) {

    uint v1 = (uint)(*(int *)(a1 + 64)); // (int)&FUN_1143c995
    int v2 = (int)((v1 < 384 ? 255 : 0) + (a2 == 0 ? 5 : 6));
    int v3 = (int)(v2 & 255); // (int)&FUN_1143c9b0
    uint v4; // (int)&FUN_1143c9d0
    if (a2 != 0) {
        if (*(int *)(a1 + 88) != 0) {
            if (*(int *)(a1 + 92) == 0) {
                v4 = (uint)(v3 & 255);
                return (int)(v4 >= v1 ? 2 : v4);
            }
        }
    }
    v4 = (uint)(((char)v2 < 5 ? v3 : 4) & 255);
    return (int)(v4 >= v1 ? 2 : v4);
}

// Reference entry 1143e5d0; body size 134 bytes.
#line 1 "ENTRY_1143e5d0"
int FUN_1143e5d0(uint a1, int a2, int a3, int a4) {

    int v1 = (int)(a1 / 8 + 1); // (int)&FUN_1143e5e8
    int v2; // (int)((int(*)(uint a1, int a2, int a3, int a4))&FUN_1143e5d0)
    int result = (int)(thunk_FUN_11414c10(a2, v1, a3, a4, v2, v2, v2), 0); // (int)&FUN_1143e5eb
    if (result != 0) {
        return (int)(result);
    }
    int result2 = (int)(thunk_FUN_11417820(a2, 8 * v1 + -1 - a1), 0); // (int)&FUN_1143e603
    if (result2 != 0) {
        return (int)(result2);
    }
    int result3 = (int)(thunk_FUN_11417640(a2, a1, 1), 0); // (int)&FUN_1143e613
    if (result3 != 0) {
        return (int)(result3);
    }
    int result4 = (int)(thunk_FUN_11417640(a2, result3, result3), 0); // (int)&FUN_1143e622
    if (result4 != 0) {
        return (int)(result4);
    }
    int v3 = (int)(thunk_FUN_11417640(a2, 1, result4), 0); // (int)&FUN_1143e632
    int result5 = (int)(v3); // (int)&FUN_1143e63c
    if (a1 == 254 == v3 == 0) {
        result5 = (int)(thunk_FUN_11417640(a2, 2, 0), 0);
    }
    return (int)(result5);
}

// Reference entry 1143e680; body size 40 bytes.
#line 1 "ENTRY_1143e680"
int FUN_1143e680(int a1, int a2, int a3, int a4) {

    int v1 = (int)(thunk_FUN_114168b0(a2, 1, a1, a3, a4), 0); // (int)&FUN_1143e692
    return (int)(v1 != -14 ? v1 : -0x4d00);
}

// Reference entry 11440150; body size 87 bytes.
#line 1 "ENTRY_11440150"
int FUN_11440150(int a1, int a2, int a3, int a4) {

    int v1 = (int)(a4); // bp-12, (int)&FUN_11440156
    int v2; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_11440150)
    int result = (int)(thunk_FUN_11417b50(a2, a3, a4, v2, v2), 0); // (int)&FUN_1144015f
    if (result != 0) {
        return (int)(result);
    }
short *v3 = (short *)((short)((short *)(a2 + 4))); // (int)&FUN_1144016e
    if (result <= (int)*v3) {
        return (int)(result);
    }
    int v4 = (int)(&v1); // (int)&FUN_1144016d
int *v5 = (int *)((int)((int *)(v4 - 4))); // (int)&FUN_11440178
    *v5 = (int)(0);
int *v6 = (int *)((int)((int *)(v4 - 8))); // (int)&FUN_1144017a
    *v6 = (int)(a2);
    if (thunk_FUN_11413b90() == 0) {
        return (int)(result);
    }
    *v5 = (int)(a1 + 4);
    *v6 = (int)(a2);
    *(int*)(v4 - 12) = (int)(a2);
    int v7 = (int)(thunk_FUN_11413aa0(), 0); // (int)&FUN_1144018d
    int result2 = (int)(v7); // (int)&FUN_11440199
    while (v7 == 0) {
        result2 = (int)(v7);
        if (v7 <= (int)*v3) {
            break;
        }
        *v5 = (int)(0);
        *v6 = (int)(a2);
        result2 = (int)(v7);
        if (thunk_FUN_11413b90() == 0) {
            break;
        }
        *v5 = (int)(a1 + 4);
        *v6 = (int)(a2);
        *(int*)(v4 - 12) = (int)(a2);
        v7 = (int)(thunk_FUN_11413aa0(), 0);
        result2 = (int)(v7);
    }
    return (int)(result2);
}

// Reference entry 11440240; body size 36 bytes.
#line 1 "ENTRY_11440240"
int FUN_11440240(int a1, int a2) {

    int result; // (int)((int(*)(int a1, int a2))&FUN_11440240)
    if (a2 == 0) {
        return (int)(result);
    }
    int v1 = (int)(a2); // (int)&FUN_1144024e
    int v2 = (int)(a1); // (int)&FUN_1144024e
    int v3; // bp-8, (int)((int(*)(int a1, int a2))&FUN_11440240)
    *(int*)((int)&v3 - 4) = (int)(v2);
    v1--;
    v2 += 8;
    result = (int)(thunk_FUN_11414d70(), 0);
    while (v1 != 0) {
        *(int*)((int)&v3 - 4) = (int)(v2);
        v1--;
        v2 += 8;
        result = (int)(thunk_FUN_11414d70(), 0);
    }
    return (int)(result);
}

// Reference entry 11440270; body size 36 bytes.
#line 1 "ENTRY_11440270"
int FUN_11440270(int a1, int a2) {

    int result; // (int)((int(*)(int a1, int a2))&FUN_11440270)
    if (a2 == 0) {
        return (int)(result);
    }
    int v1 = (int)(a2); // (int)&FUN_1144027e
    int v2 = (int)(a1); // (int)&FUN_1144027e
    int v3; // bp-8, (int)((int(*)(int a1, int a2))&FUN_11440270)
    *(int*)((int)&v3 - 4) = (int)(v2);
    v1--;
    v2 += 8;
    result = (int)(thunk_FUN_114157a0(), 0);
    while (v1 != 0) {
        *(int*)((int)&v3 - 4) = (int)(v2);
        v1--;
        v2 += 8;
        result = (int)(thunk_FUN_114157a0(), 0);
    }
    return (int)(result);
}

// Reference entry 114402d0; body size 36 bytes.
#line 1 "ENTRY_114402d0"
int FUN_114402d0(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_114402d0)
    int v2 = (int)(thunk_FUN_1140b1f0(&v1), 0); // (int)&FUN_114402d5
    return (int)(v2 == 2 | v2 < 5 ? a1 : 0);
}

// Reference entry 11440300; body size 36 bytes.
#line 1 "ENTRY_11440300"
int FUN_11440300(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_11440300)
    int v2 = (int)(thunk_FUN_1140b1f0(&v1), 0); // (int)&FUN_11440305
    return (int)(v2 == 2 | v2 < 5 ? a1 : 0);
}

// Reference entry 11440560; body size 77 bytes.
#line 1 "ENTRY_11440560"
int FUN_11440560(int a1, int a2, int a3, int a4, int a5, uint a6) {

    int v1 = (int)(*(int *)(a1 + 4)); // (int)&FUN_11440566
    int v2; // (int)((int(*)(int a1, int a2, int a3, int a4, int a5, uint a6))&FUN_11440560)
    uint v3 = (uint)(thunk_FUN_1141a490(v1, v2, v2), 0); // (int)&FUN_1144056a
    int result = (int)(-0x4380); // (int)&FUN_11440578
    if (v3 <= a6) {
        int v4 = (int)(thunk_FUN_1141b160(v1, a2, a4, a3, a5), 0); // (int)&FUN_11440593
        result = (int)(v4 != 0 ? v4 : v3 < a6 ? -0x3900 : 0);
    }
    return (int)(result);
}

// Reference entry 114405c0; body size 71 bytes.
#line 1 "ENTRY_114405c0"
int FUN_114405c0(int a1, int a2, int a3, int a4, int a5, uint a6, int a7, int a8, int a9) {

    int v1 = (int)(*(int *)(a1 + 4)); // (int)&FUN_114405c5
    int v2; // (int)((int(*)(int a1, int a2, int a3, int a4, int a5, uint a6, int a7, int a8, int a9))&FUN_114405c0)
    uint v3 = (uint)(thunk_FUN_1141a490(v1, v2), 0); // (int)&FUN_114405c9
    *(int*)a7 = (int)((int)(v3));
    if (v3 <= a6) {
        return (int)(thunk_FUN_1141af70(v1, a8, a9, a2, a4, a3, a5));
    }
    return (int)(-0x3880);
}

// Reference entry 11440620; body size 65 bytes.
#line 1 "ENTRY_11440620"
int FUN_11440620(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {

    int v1 = (int)(*(int *)(a1 + 4)); // (int)&FUN_11440625
    int v2; // (int)((int(*)(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8))&FUN_11440620)
    if (thunk_FUN_1141a490(v1, v2) == a3) {
        return (int)(thunk_FUN_1141abb0(v1, a7, a8, a5, a2, a4, a6));
    }
    return (int)(-0x4080);
}

// Reference entry 11440680; body size 67 bytes.
#line 1 "ENTRY_11440680"
int FUN_11440680(int a1, int a2, int a3, int a4, int a5, uint a6, int a7, int a8) {

    int v1 = (int)(*(int *)(a1 + 4)); // (int)&FUN_11440685
    int v2; // (int)((int(*)(int a1, int a2, int a3, int a4, int a5, uint a6, int a7, int a8))&FUN_11440680)
    uint v3 = (uint)(thunk_FUN_1141a490(v1, v2), 0); // (int)&FUN_11440689
    *(int*)a5 = (int)((int)(v3));
    if (v3 > a6) {
        return (int)(-0x4400);
    }
    return (int)(thunk_FUN_1141ace0(v1, a7, a8, a3, a2, a4));
}

// Reference entry 11440700; body size 33 bytes.
#line 1 "ENTRY_11440700"
int FUN_11440700(void) {

    int result; // (int)((int(*)(void))&FUN_11440700)
    if (result != 0) {
        thunk_FUN_1141a680(1, result, result);
    }
    return (int)(result);
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
int FUN_114407d0(int a1, int a2, int a3, int a4, int a5) {

    int v1 = (int)(thunk_FUN_11452c40(*(int *)(a1 + 4), a2, a3, a4, a5), 0); // (int)&FUN_114407e7
    return (int)(v1 == -0x4c00 ? -0x3900 : v1);
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
int FUN_11440880(void) {

    int result; // (int)((int(*)(void))&FUN_11440880)
    if (result != 0) {
        thunk_FUN_1143ea00(1, result, result);
    }
    return (int)(result);
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
int FUN_11442bf0(int a1, int a2, int a3, int a4, int a5) {
int *v1 = (int *)((int)((int *)(4 * a3 + a1))); // (int)&FUN_11442c05
int *v2 = (int *)((int)((int *)(4 * a2 + a1))); // (int)&FUN_11442c07
    int v3 = (int)(*v2 + *v1); // (int)&FUN_11442c07
    *v2 = (int)(v3);
int *v4 = (int *)((int)((int *)(4 * a5 + a1))); // (int)&FUN_11442c0d
    uint v5 = (uint)(*v4 ^ v3); // (int)&FUN_11442c13
    int v6 = (int)(v5 / 0x10000 | 0x10000 * v5); // (int)&FUN_11442c1c
    *v4 = (int)(v6);
int *v7 = (int *)((int)((int *)(4 * a4 + a1))); // (int)&FUN_11442c21
    int v8 = (int)(v6 + *v7); // (int)&FUN_11442c21
    *v7 = (int)(v8);
    uint v9 = (uint)(*v1 ^ v8); // (int)&FUN_11442c25
    int v10 = (int)(v9 / 0x100000 | 0x1000 * v9); // (int)&FUN_11442c27
    *v1 = (int)(v10);
    int v11 = (int)(v10 + *v2); // (int)&FUN_11442c2c
    *v2 = (int)(v11);
    uint v12 = (uint)(*v4 ^ v11); // (int)&FUN_11442c30
    int v13 = (int)(v12 / 0x1000000 | 256 * v12); // (int)&FUN_11442c32
    *v4 = (int)(v13);
    int v14 = (int)(v13 + *v7); // (int)&FUN_11442c37
    *v7 = (int)(v14);
    uint v15 = (uint)(*v1 ^ v14); // (int)&FUN_11442c3b
    int result = (int)(v15 / 0x2000000 | 128 * v15); // (int)&FUN_11442c3e
    *v1 = (int)(result);
    return (int)(result);
}

// Reference entry 11444110; body size 95 bytes.
#line 1 "ENTRY_11444110"
int FUN_11444110(int a1, int a2) {

    uint v1 = (uint)(llvm_bswap_i32(*(int *)(a2 + 12)), 0); // (int)&FUN_11444122
    uint v2 = (uint)(llvm_bswap_i32(*(int *)(a2 + 8)), 0); // (int)&FUN_11444124
    *(int*)(a1 + 12) = (int)(llvm_bswap_i32(v1 / 2 | 0x80000000 * v2), 0);
    int v3 = (int)(llvm_bswap_i32(v2 / 2), 0); // (int)&FUN_11444131
    int v4 = (int)(a1 + 8); // (int)&FUN_11444133
    *(int*)v4 = (int)((int)(v3));
    *(char*)v4 = (char)((int)(*(char *)(a2 + 7) << 7 | (char)v3));
    uint v5 = (uint)(llvm_bswap_i32(*(int *)(a2 + 4)), 0); // (int)&FUN_11444147
    uint v6 = (uint)(llvm_bswap_i32(*(int *)a2), 0); // (int)&FUN_11444149
    *(int*)(a1 + 4) = (int)(llvm_bswap_i32(v5 / 2 | 0x80000000 * v6), 0);
    int v7 = (int)(llvm_bswap_i32(v6 / 2), 0); // (int)&FUN_11444156
    *(int*)a1 = (int)((int)(v7));
    int result = (int)(((*(char *)(a2 + 15) & 1) == 0 ? 0 : 225) ^ v7 & 127); // (int)&FUN_11444167
    *(char*)a1 = (char)((int)((char)result));
    return (int)(result);
}

// Reference entry 11446740; body size 36 bytes.
#line 1 "ENTRY_11446740"
int FUN_11446740(void) {

    int result; // (int)((int(*)(void))&FUN_11446740)
    if (result != 0) {
        thunk_FUN_11444db0(1, result, result);
    }
    return (int)(result);
}

// Reference entry 11446790; body size 36 bytes.
#line 1 "ENTRY_11446790"
int FUN_11446790(void) {

    int result; // (int)((int(*)(void))&FUN_11446790)
    if (result != 0) {
        thunk_FUN_11445f50(1, result, result);
    }
    return (int)(result);
}

// Reference entry 11446830; body size 38 bytes.
#line 1 "ENTRY_11446830"
int FUN_11446830(void) {

    int result; // (int)((int(*)(void))&FUN_11446830)
    if (result == 0) {
        return (int)(result);
    }
    thunk_FUN_11420a70(1, result, result);
    return (int)(result);
}

// Reference entry 114468f0; body size 36 bytes.
#line 1 "ENTRY_114468f0"
int FUN_114468f0(int a1, int a2, int a3, int a4) {

    int v1 = (int)(thunk_FUN_11442fd0(a1, a2, a3, a4), 0); // (int)&FUN_11446900
    return (int)(v1 == -81 ? -0x6100 : v1);
}

// Reference entry 11446920; body size 38 bytes.
#line 1 "ENTRY_11446920"
int FUN_11446920(void) {

    int result; // (int)((int(*)(void))&FUN_11446920)
    if (result == 0) {
        return (int)(result);
    }
    thunk_FUN_11442ee0(1, result, result);
    return (int)(result);
}

// Reference entry 114469a0; body size 38 bytes.
#line 1 "ENTRY_114469a0"
int FUN_114469a0(void) {

    int result; // (int)((int(*)(void))&FUN_114469a0)
    if (result == 0) {
        return (int)(result);
    }
    thunk_FUN_11443aa0(1, result, result);
    return (int)(result);
}

// Reference entry 11446e80; body size 44 bytes.
#line 1 "ENTRY_11446e80"
int FUN_11446e80(int a1, int a2) {

    uint v1 = (uint)(a2 ^ a1 ^ *(int *)&DAT_122fa560); // (int)&FUN_11446e9b
    return (int)((-((v1 / 2)) | -v1) > -1);
}

// Reference entry 11446ec0; body size 93 bytes.
#line 1 "ENTRY_11446ec0"
int FUN_11446ec0(int a1, int a2) {

    uint v1 = (uint)(*(int *)&DAT_122fa560);
    int v2 = (int)(v1 ^ a2); // (int)&FUN_11446ed1
    int v3 = (int)(-((v1 / 2))); // (int)&FUN_11446eea
    int v4 = (int)((v3 | -((v1 ^ (int)((a2 ^ a1) < 0)))) / 0x80000000); // (int)&FUN_11446ef6
    return (int)((-((v1 ^ (int)(((v1 ^ -0x80000000 ^ v4) & (v1 ^ a1) - v2 | v4 & v2) < 0))) | v3) > -1);
}

// Reference entry 11446f40; body size 94 bytes.
#line 1 "ENTRY_11446f40"
int FUN_11446f40(int a1, int a2) {

    uint v1 = (uint)(*(int *)&DAT_122fa560);
    int v2 = (int)(v1 ^ a2); // (int)&FUN_11446f51
    int v3 = (int)(-((v1 / 2))); // (int)&FUN_11446f6a
    int v4 = (int)((v3 | -((v1 ^ (int)((a2 ^ a1) < 0)))) / 0x80000000); // (int)&FUN_11446f76
    return (int)((-((v1 ^ (int)(((v1 ^ -0x80000000 ^ v4) & (v1 ^ a1) - v2 | v4 & v2) < 0))) | v3) / 0x80000000);
}

// Reference entry 11446fc0; body size 45 bytes.
#line 1 "ENTRY_11446fc0"
int FUN_11446fc0(int a1, int a2) {

    uint v1 = (uint)(a2 ^ a1 ^ *(int *)&DAT_122fa560); // (int)&FUN_11446fdb
    return (int)((-((v1 / 2)) | -v1) / 0x80000000);
}

// Reference entry 114472d0; body size 180 bytes.
#line 1 "ENTRY_114472d0"
int FUN_114472d0(int a1, int a2, int a3, int a4, int a5) {

    if (a4 == 0) {
        int result; // (int)((int(*)(int a1, int a2, int a3, int a4, int a5))&FUN_114472d0)
        return (int)(result);
    }
    int result2 = (int)(4 * a3); // (int)&FUN_11447362
int *v1 = (int *)((int)((int *)a1));
    int v2 = (int)(a3 - 1);
    int v3 = (int)(0);
    int v4; // (int)((int(*)(int a1, int a2, int a3, int a4, int a5))&FUN_114472d0)
    int v5; // (int)((int(*)(int a1, int a2, int a3, int a4, int a5))&FUN_114472d0)
    int v6; // (int)&FUN_1144733d
    int v7; // (int)&FUN_11447336
    int * v8; // (int)&FUN_1144733f
    int v9; // (int)&FUN_1144733f
    int v10; // (int)&FUN_1144734d
    int v11; // (int)&FUN_114472ff
    uint v12; // (int)&FUN_11447308
    int v13; // (int)&FUN_11447312
    int v14; // (int)&FUN_11447317
    int v15; // (int)&FUN_11447324
    if (a3 != 0 && a2 != a1) {
        v11 = (int)(*(int *)&DAT_122fa560);
        v12 = (uint)(v3 ^ a5 ^ v11);
        v13 = (int)(-((v12 / 2)) | -v12);
        v14 = (int)(v13 > -1);
        v15 = (int)(a2 - a1);
        v6 = (int)(v13 >> 31);
        *v1 = (int)(*v1 & (v11 ^ v6) | *(int *)a2 & v14);
        if (v2 != 0) {
            v7 = (int)(a1 + 4);
            v8 = (int *)((int *)v7);
            v9 = (int)(*v8);
            *v8 = (int)(v9 & (*(int *)&DAT_122fa560 ^ v6) | *(int *)(v15 + v7) & v14);
            v10 = (int)(v2 - 1);
            v4 = (int)(v10);
            v5 = (int)(v7);
            while (v10 != 0) {
                v7 = (int)(v5 + 4);
                v8 = (int *)((int *)v7);
                v9 = (int)(*v8);
                *v8 = (int)(v9 & (*(int *)&DAT_122fa560 ^ v6) | *(int *)(v15 + v7) & v14);
                v10 = (int)(v4 - 1);
                v4 = (int)(v10);
                v5 = (int)(v7);
            }
        }
    }
    int v16 = (int)(v3 + 1); // (int)&FUN_11447369
    int v17 = (int)(a2 + result2); // (int)&FUN_11447378
    while (v16 != a4) {
        v3 = (int)(v16);
        int v18 = (int)(v17);
        if (a3 != 0 && v18 != a1) {
            v11 = (int)(*(int *)&DAT_122fa560);
            v12 = (uint)(v3 ^ a5 ^ v11);
            v13 = (int)(-((v12 / 2)) | -v12);
            v14 = (int)(v13 > -1);
            v15 = (int)(v18 - a1);
            v6 = (int)(v13 >> 31);
            *v1 = (int)(*v1 & (v11 ^ v6) | *(int *)v18 & v14);
            if (v2 != 0) {
                v7 = (int)(a1 + 4);
                v8 = (int *)((int *)v7);
                v9 = (int)(*v8);
                *v8 = (int)(v9 & (*(int *)&DAT_122fa560 ^ v6) | *(int *)(v15 + v7) & v14);
                v10 = (int)(v2 - 1);
                v4 = (int)(v10);
                v5 = (int)(v7);
                while (v10 != 0) {
                    v7 = (int)(v5 + 4);
                    v8 = (int *)((int *)v7);
                    v9 = (int)(*v8);
                    *v8 = (int)(v9 & (*(int *)&DAT_122fa560 ^ v6) | *(int *)(v15 + v7) & v14);
                    v10 = (int)(v4 - 1);
                    v4 = (int)(v10);
                    v5 = (int)(v7);
                }
            }
        }
        v16 = (int)(v3 + 1);
        v17 = (int)(v18 + result2);
    }
    return (int)(result2);
}

// Reference entry 1144abb0; body size 65 bytes.
#line 1 "ENTRY_1144abb0"
int FUN_1144abb0(int a1, int a2, int result, uint a4) {

    if (a2 == 0 || result == 0 || a4 == 0) {
        return (int)(result);
    }
    int v1; // bp-16, (int)((int(*)(int a1, int a2, int result, uint a4))&FUN_1144abb0)
    int v2 = (int)(&v1); // (int)&FUN_1144abcf
    int v3 = (int)(a1); // (int)&FUN_1144abcf
    uint v4 = (uint)(a2);
    int v5 = (int)(v4 > a4 ? a4 : v4); // (int)&FUN_1144abd4
    *(int*)(v2 - 4) = (int)(v5);
    *(int*)(v2 - 8) = (int)(result);
    *(int*)(v2 - 12) = (int)(v3);
    memcpy((void *)0, (void *)0, 0);
    int result2 = (int)(*(int *)(v2 + 28)); // (int)&FUN_1144abdf
    int v6 = (int)(v4 - v5); // (int)&FUN_1144abe8
    v3 += v5;
    while (v6 != 0) {
        v4 = (uint)(v6);
        v5 = (int)(v4 > a4 ? a4 : v4);
        *(int*)(v2 - 4) = (int)(v5);
        *(int*)(v2 - 8) = (int)(result2);
        *(int*)(v2 - 12) = (int)(v3);
        memcpy((void *)0, (void *)0, 0);
        result2 = (int)(*(int *)(v2 + 28));
        v6 = (int)(v4 - v5);
        v3 += v5;
    }
    return (int)(result2);
}

// Reference entry 1144ac10; body size 108 bytes.
#line 1 "ENTRY_1144ac10"
int FUN_1144ac10(int a1, int a2, int a3) {

    if (*(int *)a1 != 48) {
        return (int)(-0x1ee2);
    }
    int v1 = (int)(a1 + 8); // (int)&FUN_1144ac16
int *v2 = (int *)((int)((int *)v1)); // (int)&FUN_1144ac1c
    int v3 = (int)(*v2 + *(int *)(a1 + 4)); // (int)&FUN_1144ac1c
    int v4 = (int)(a2 + 4); // (int)&FUN_1144ac33
    int v5; // (int)((int(*)(int a1, int a2, int a3))&FUN_1144ac10)
    int v6 = (int)(thunk_FUN_1140c750(v1, v3, v4, 4, v5, v5, v5, v5), 0); // (int)&FUN_1144ac39
    if (v6 != 0) {
        return (int)(v6 - 0x1e80);
    }
    *(int*)(a2 + 8) = (int)(*v2);
    *v2 = (int)(*v2 + *(int *)v4);
    int v7 = (int)(thunk_FUN_1140c500(v1, v3, a3), 0); // (int)&FUN_1144ac55
    if (v7 == 0) {
        return (int)(*v2 != (int)((v3)) ? -0x1ee6 : 0);
    }
    return (int)(v7 - 0x1e80);
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
int FUN_1144c100(int a1, short a2) {

    if ((a1 == 0x5000500 || a1 == 0x4800100) == a2 == 0x2004) {
        return (int)(0);
    }
    switch (a1) {
        case 0x5400200: {
            goto lab_0x1144c143;
        }
        case 0x5400100: {
            goto lab_0x1144c143;
        }
        default: {
            if (a1 != 0x4c01300) {
                goto lab_0x1144c152;
            } else {
                goto lab_0x1144c143;
            }
        }
    }
  lab_0x1144c143:
    switch (a2) {
        case 0x2400: {
            return (int)(0);
        }
        case 0x2406: {
            return (int)(0);
        }
        case 0x2403: {
            return (int)(0);
        }
        default: {
            goto lab_0x1144c152;
        }
    }
  lab_0x1144c152:
    switch (a1) {
        case 0x4c01000: {
            goto lab_0x1144c17c;
        }
        case 0x440ff00: {
            goto lab_0x1144c17c;
        }
        case 0x4404400: {
            goto lab_0x1144c17c;
        }
        case 0x4404100: {
            goto lab_0x1144c17c;
        }
        case 0x4404000: {
            goto lab_0x1144c17c;
        }
        default: {
            if (a1 != 0x3c00200) {
                return (int)(-134);
            }
            goto lab_0x1144c17c;
        }
    }
  lab_0x1144c17c:
    switch (a2) {
        case 0x2400: {
            return (int)(0);
        }
        case 0x2406: {
            return (int)(0);
        }
        case 0x2301: {
            return (int)(0);
        }
        case 0x2403: {
            return (int)(0);
        }
        default: {
            return (int)(-134);
        }
    }
}

// Reference entry 1144ce10; body size 281 bytes.
#line 1 "ENTRY_1144ce10"
int FUN_1144ce10(int a1, int a2, uint a3, int a4, int a5) {

    int v1 = (int)(*(int *)a5); // (int)&FUN_1144ce18
    int v2 = (int)(0); // (int)&FUN_1144ce1d
    if (v1 != 0) {
        v2 = (int)(*(int *)(v1 + 4) & 31);
    }
    *(int*)a1 = (int)((int)(0));
    if (a3 == 0) {
        return (int)(0);
    }
int *v3 = (int *)((int)((int *)(a5 + 36))); // (int)&FUN_1144ce46
    int v4 = (int)(*v3); // (int)&FUN_1144ce46
    int v5 = (int)(a4); // (int)&FUN_1144ce4c
    int v6 = (int)(a3); // (int)&FUN_1144ce4c
    if (v4 != 0) {
        uint v7 = (uint)(v2 - v4); // (int)&FUN_1144ce50
        int v8 = (int)(v7 > a3 ? a3 : v7); // (int)&FUN_1144ce54
        memcpy((void *)0, (void *)0, 0);
        int v9 = (int)(a3 - v8); // (int)&FUN_1144ce6b
        int v10 = (int)(*v3 + v8); // (int)&FUN_1144ce6d
        *v3 = (int)(v10);
        int v11 = (int)(v8 + a4); // (int)&FUN_1144ce70
        v5 = (int)(v11);
        v6 = (int)(v9);
        if (v10 == v2) {
            thunk_FUN_11412bf0();
            int result = (int)(thunk_FUN_114262c0(), 0); // (int)&FUN_1144ce94
            if (result != 0) {
                return (int)(result);
            }
            *v3 = (int)(0);
            v5 = (int)(v11);
            v6 = (int)(v9);
        }
    }
    int v12; // bp-20, (int)((int(*)(int a1, int a2, uint a3, int a4, int a5))&FUN_1144ce10)
    int v13 = (int)(&v12); // (int)&FUN_1144ce49
    int v14 = (int)(v5); // (int)&FUN_1144cecb
    int v15 = (int)(v6); // (int)&FUN_1144cecb
    if (v6 < v2) {
      lab_0x1144cf07:
        if (v15 != 0) {
            *(int*)(v13 - 4) = (int)(v15);
            *(int*)(v13 - 8) = (int)(v14);
            *(int*)(v13 - 12) = (int)(a5 + 20 + *v3);
            memcpy((void *)0, (void *)0, 0);
            *v3 = (int)(*v3 + v15);
        }
        return (int)(0);
    }
    int v16 = (int)(v13 + 16); // (int)&FUN_1144ced0
int *v17 = (int *)((int)((int *)(v13 + 24)));
    int v18 = (int)(v6); // (int)&FUN_1144ceef
    int v19 = (int)(a2); // (int)((int(*)(int a1, int a2, uint a3, int a4, int a5))&FUN_1144ce10)
    *(int*)(v13 - 4) = (int)(v16);
    *(int*)(v13 - 8) = (int)(v19);
    *(int*)(v13 - 12) = (int)(v2);
    *(int*)(v13 - 16) = (int)(v5);
    *(int*)(v13 - 20) = (int)(a5);
    *(int*)(v13 - 24) = (int)(thunk_FUN_11412bf0(), 0);
    int result2 = (int)(thunk_FUN_114262c0(), 0); // (int)&FUN_1144cedf
    while (result2 == 0) {
        v18 -= v2;
        int v20 = (int)(*(int *)v16); // (int)&FUN_1144cef5
        int v21 = (int)(*v17 + v2); // (int)&FUN_1144cef9
        *v17 = (int)(v21);
int *v22 = (int *)((int)((int *)*(int *)(v13 + 40))); // (int)&FUN_1144cf01
        *v22 = (int)(*v22 + v20);
        v19 += v20;
        v14 = (int)(v21);
        v15 = (int)(v18);
        if (v18 < v2) {
            goto lab_0x1144cf07;
        }
        *(int*)(v13 - 4) = (int)(v16);
        *(int*)(v13 - 8) = (int)(v19);
        *(int*)(v13 - 12) = (int)(v2);
        *(int*)(v13 - 16) = (int)(v21);
        *(int*)(v13 - 20) = (int)(a5);
        *(int*)(v13 - 24) = (int)(thunk_FUN_11412bf0(), 0);
        result2 = (int)(thunk_FUN_114262c0(), 0);
    }
    return (int)(result2);
}

// Reference entry 1144dad0; body size 45 bytes.
#line 1 "ENTRY_1144dad0"
int FUN_1144dad0(uint a1, int a2, uint a3, uint a4, int a5) {

    if (a3 < a1) {
        return (int)(-135);
    }
    uint v1 = (uint)(a3 - a1); // (int)&FUN_1144dae2
    if (v1 > a4) {
        return (int)(-138);
    }
    *(int*)a5 = (int)((int)(v1 + a2));
    return (int)(0);
}

// Reference entry 1144e5e0; body size 94 bytes.
#line 1 "ENTRY_1144e5e0"
int FUN_1144e5e0(int a1, int a2, int a3) {
short *v1 = (short *)((short)((short *)(a2 + 2))); // (int)&FUN_1144e5e7
    ushort v2 = (ushort)(*(short *)a2); // (int)&FUN_1144e5ec
    int v3; // (int)((int(*)(int a1, int a2, int a3))&FUN_1144e5e0)
    int v4 = (int)(thunk_FUN_1144c070(0x3c00200, (int)v2, (int)*v1, 0, v3), 0); // (int)&FUN_1144e5f5
    if (v4 == 0) {
        return (int)(-134);
    }
    int v5 = (int)(a1 + 8); // (int)&FUN_1144e610
    int v6 = (int)(thunk_FUN_11412b80(v5, v4, v3), 0); // (int)&FUN_1144e614
    int v7 = (int)(v6); // (int)&FUN_1144e61e
    if (v6 == 0) {
        v7 = (int)(thunk_FUN_11454b90(v5, a3, (int)*v1), 0);
    }
    return (int)(thunk_FUN_114262c0(v7));
}

// Reference entry 1144e660; body size 85 bytes.
#line 1 "ENTRY_1144e660"
int FUN_1144e660(int a1, int a2) {

    *(int*)a1 = (int)((int)(a2));
    if ((a2 & -0x3f8001) == 0x3c00200) {
        thunk_FUN_11412800(a1 + 8);
        return (int)(0);
    }
    if ((a2 & 0x7fc00000) != 0x3800000) {
        memset((void *)(a1), 0, 376);
        return (int)(-134);
    }
    *(int*)(a1 + 8) = (int)(0);
    return (int)(0);
}

// Reference entry 1144eb00; body size 38 bytes.
#line 1 "ENTRY_1144eb00"
int FUN_1144eb00(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_1144eb00)
    thunk_FUN_11423ed0(a1 + 240, 128, v1);
    return (int)(thunk_FUN_1142c330(a1 + 8));
}

// Reference entry 1144fd90; body size 74 bytes.
#line 1 "ENTRY_1144fd90"
int FUN_1144fd90(int a1) {

    int v1 = (int)(a1 + 360); // (int)&FUN_1144fd96
    int v2; // (int)((int(*)(int a1))&FUN_1144fd90)
    thunk_FUN_11425390(v1, v2, v2);
int *v3 = (int *)((int)((int *)(a1 + 8))); // (int)&FUN_1144fda2
int *v4 = (int *)((int)((int *)(a1 + 4))); // (int)&FUN_1144fda5
    int v5 = (int)(thunk_FUN_11425660(v1, *(int *)(a1 + 12), 9, 3, *v4, *v3), 0); // (int)&FUN_1144fdb0
    thunk_FUN_11423ed0(*v4, *v3);
    if (v5 == 0) {
        return (int)(0);
    }
    return (int)(FUN_1144f270(v5));
}

// Reference entry 11450980; body size 63 bytes.
#line 1 "ENTRY_11450980"
int FUN_11450980(int a1, uint a2, int a3) {

    if (a2 >= 5) {
        return (int)(-134);
    }
    int v1 = (int)(0); // (int)&FUN_11450990
    if (a2 == 0) {
        *(int*)a3 = (int)((int)(0));
        return (int)(0);
    }
    int v2 = (int)(0);
    int v3 = (int)(v2 + 1); // (int)&FUN_1145099b
    v1 = (int)(256 * v1 | (int)*(char *)(v2 + a1));
    while (v3 != a2) {
        v2 = (int)(v3);
        v3 = (int)(v2 + 1);
        v1 = (int)(256 * v1 | (int)*(char *)(v2 + a1));
    }
    if (v1 <= -1) {
        return (int)(-134);
    }
    *(int*)a3 = (int)((int)(v1));
    return (int)(0);
}

// Reference entry 114509d0; body size 56 bytes.
#line 1 "ENTRY_114509d0"
int FUN_114509d0(int a1, int a2, int a3) {

    if ((a1 & -256) == 0x6001300) {
        return (int)(-1);
    }
    int v1 = (int)(thunk_FUN_1141a490(a2) + -2 - a3, 0); // (int)&FUN_114509fb
    if (v1 < 0) {
        return (int)(0);
    }
    int v2 = (int)(v1 - a3); // (int)&FUN_11450a02
    return (int)(v2 < 0 == ((v2 ^ v1) & (v1 ^ a3)) < 0 == (v2 != 0) ? a3 : v1);
}

// Reference entry 11451d70; body size 36 bytes.
#line 1 "ENTRY_11451d70"
int FUN_11451d70(void) {

    int v1; // (int)((int(*)(void))&FUN_11451d70)
    return (int)(v1 & -256 | (int)*(char *)&DAT_122faa80);
}

// Reference entry 11451f80; body size 31 bytes.
#line 1 "ENTRY_11451f80"
int FUN_11451f80(int a1) {

    if (*(int *)(a1 + 24) != 2) {
        return (int)(-151);
    }
int *v1 = (int *)((int)((int *)(a1 + 28))); // (int)&FUN_11451f8a
    int v2 = (int)(*v1); // (int)&FUN_11451f8a
    if (v2 == -1) {
        return (int)(-151);
    }
    *v1 = (int)(v2 + 1);
    return (int)(0);
}

// Reference entry 11452940; body size 49 bytes.
#line 1 "ENTRY_11452940"
int FUN_11452940(unsigned char a1, unsigned char a2, char a3, char a4) {

    char v1 = (char)((char)*(int *)&DAT_122fa560); // (int)&FUN_11452945
    int v2 = (int)(v1 ^ a3); // (int)&FUN_11452945
    uint v3 = (uint)(((int)a2 - v2) / 256); // (int)&FUN_11452964
    return (int)(v3 & 0xffff00 | (int)((v1 ^ a4) & -1 - (char)(v3 | (v2 - (int)a1) / 256)));
}

// Reference entry 11454440; body size 61 bytes.
#line 1 "ENTRY_11454440"
int FUN_11454440(int a1, int result, int a3, uint a4) {

    if (result == 0) {
        return (int)(result);
    }
    uint v1 = (uint)(0);
    char v2; // (int)((int(*)(int a1, int result, int a3, uint a4))&FUN_11454440)
    if (v1 >= a4) {
        v2 = (char)(v1 != a4 ? 0 : -128);
    } else {
        v2 = (char)(*(char *)(v1 + a3));
    }
    *(char*)(v1 + a1) = (char)(v2);
    int v3 = (int)(v1 + 1); // (int)&FUN_11454474
    while (v3 != result) {
        v1 = (uint)(v3);
        if (v1 >= a4) {
            v2 = (char)(v1 != a4 ? 0 : -128);
        } else {
            v2 = (char)(*(char *)(v1 + a3));
        }
        *(char*)(v1 + a1) = (char)(v2);
        v3 = (int)(v1 + 1);
    }
    return (int)(result);
}

// Reference entry 1145b220; body size 114 bytes.
#line 1 "ENTRY_1145b220"
int FUN_1145b220(int a1, int a2, uint a3) {

    if (a1 == 0) {
        return (int)(0);
    }
    int v1; // bp-16, (int)((int(*)(int a1, int a2, uint a3))&FUN_1145b220)
    int v2 = (int)(&v1); // (int)&FUN_1145b227
int *v3 = (int *)((int)((int *)(v2 + 20)));
int *v4 = (int *)((int)((int *)(v2 + 32)));
    int v5 = (int)(a1); // (int)&FUN_1145b238
    int v6 = (int)(a2); // (int)&FUN_1145b238
    int v7; // (int)((int(*)(int a1, int a2, uint a3))&FUN_1145b220)
    int v8; // (int)((int(*)(int a1, int a2, uint a3))&FUN_1145b220)
    int v9; // (int)((int(*)(int a1, int a2, uint a3))&FUN_1145b220)
    int v10; // (int)&FUN_1145b262
    int v11; // (int)&FUN_1145b240
    int v12; // (int)&FUN_1145b24e
    if (a3 >= 1) {
        v7 = (int)(0);
        v11 = (int)(*(int *)v5);
        v9 = (int)(v11);
        v8 = (int)(v9 + 1);
        while (*(char *)v9 != 0) {
            v9 = (int)(v8);
            v8 = (int)(v9 + 1);
        }
        v12 = (int)(v9 - v11);
        *(int*)(v2 - 4) = (int)(v12);
        *(int*)(v2 - 8) = (int)(*v3);
        *(int*)(v2 - 12) = (int)(v11);
        *(int *)*(int*)(v2 + 24) = (int)(v7);
        while (thunk_FUN_113b9f60() != 0) {
            v10 = (int)(v7 + 1);
            v5 += 4;
            if (v10 >= a3) {
                break;
            }
            v7 = (int)(v10);
            v11 = (int)(*(int *)v5);
            v9 = (int)(v11);
            v8 = (int)(v9 + 1);
            while (*(char *)v9 != 0) {
                v9 = (int)(v8);
                v8 = (int)(v9 + 1);
            }
            v12 = (int)(v9 - v11);
            *(int*)(v2 - 4) = (int)(v12);
            *(int*)(v2 - 8) = (int)(*v3);
            *(int*)(v2 - 12) = (int)(v11);
            *(int *)*(int*)(v2 + 24) = (int)(v7);
        }
        return (int)(*v3 + v12);
    }
    *v4 = (int)(0);
    while (v6 != 0) {
        v5 = (int)(v6);
        v6 = (int)(0);
        if (a3 >= 1) {
            v7 = (int)(0);
            v11 = (int)(*(int *)v5);
            v9 = (int)(v11);
            v8 = (int)(v9 + 1);
            while (*(char *)v9 != 0) {
                v9 = (int)(v8);
                v8 = (int)(v9 + 1);
            }
            v12 = (int)(v9 - v11);
            *(int*)(v2 - 4) = (int)(v12);
            *(int*)(v2 - 8) = (int)(*v3);
            *(int*)(v2 - 12) = (int)(v11);
            *(int *)*(int*)(v2 + 24) = (int)(v7);
            while (thunk_FUN_113b9f60() != 0) {
                v10 = (int)(v7 + 1);
                v5 += 4;
                if (v10 >= a3) {
                    break;
                }
                v7 = (int)(v10);
                v11 = (int)(*(int *)v5);
                v9 = (int)(v11);
                v8 = (int)(v9 + 1);
                while (*(char *)v9 != 0) {
                    v9 = (int)(v8);
                    v8 = (int)(v9 + 1);
                }
                v12 = (int)(v9 - v11);
                *(int*)(v2 - 4) = (int)(v12);
                *(int*)(v2 - 8) = (int)(*v3);
                *(int*)(v2 - 12) = (int)(v11);
                *(int *)*(int*)(v2 + 24) = (int)(v7);
            }
            return (int)(*v3 + v12);
        }
        *v4 = (int)(0);
    }
    return (int)(0);
}

// Reference entry 1145c6b0; body size 86 bytes.
#line 1 "ENTRY_1145c6b0"
int FUN_1145c6b0(int a1) {

    abort();
}

// Reference entry 1145d710; body size 73 bytes.
#line 1 "ENTRY_1145d710"
int FUN_1145d710(char a1, int a2) {

    unsigned char v1 = (unsigned char)(a1 - 48); // (int)&FUN_1145d714
    if (v1 < 10) {
        *(char*)a2 = (char)((int)(v1));
        return (int)(1);
    }
    if (a1 < 103) {
        *(char*)a2 = (char)((int)(a1 - 87));
        return (int)(1);
    }
    if (a1 >= 71) {
        return (int)(0);
    }
    *(char*)a2 = (char)((int)(a1 - 55));
    return (int)(1);
}

// Reference entry 1145e9c0; body size 61 bytes.
#line 1 "ENTRY_1145e9c0"
int FUN_1145e9c0(int a1, int a2, int a3, int a4, int a5) {

    int v1; // (int)((int(*)(int a1, int a2, int a3, int a4, int a5))&FUN_1145e9c0)
    return (int)(thunk_FUN_1145e290(a1, a2, a3, a4, *(int *)a5, v1, v1, v1, v1));
}

// Reference entry 1145f280; body size 68 bytes.
#line 1 "ENTRY_1145f280"
int FUN_1145f280(int a1, int a2, int a3, int a4, int a5) {
int *v1 = (int *)((int)((int *)a5)); // (int)&FUN_1145f290
    int v2; // (int)((int(*)(int a1, int a2, int a3, int a4, int a5))&FUN_1145f280)
    int v3 = (int)(thunk_FUN_1145ede0(a1, a2, a3, a4, *v1, v2, v2, v2, v2), 0); // (int)&FUN_1145f29d
    int v4 = (int)(FUN_1145eb70(a1, v3 + a4, *v1 - v3) + v3, 0); // (int)&FUN_1145f2b7
    *v1 = (int)(v4);
    return (int)(v4 & -256 | (int)*(char *)(a1 + 8));
}

// Reference entry 11460650; body size 44 bytes.
#line 1 "ENTRY_11460650"
int FUN_11460650(int a1, int a2, int a3, uint a4) {

    if (a4 >= 132) {
        return (int)(1);
    }
    return (int)(FUN_11465140(a1, a2, a3, a4, (int)&s_too_short_11c04d50));
}

// Reference entry 11460690; body size 189 bytes.
#line 1 "ENTRY_11460690"
int FUN_11460690(int a1) {

    if ((uint)((a1 & -0x20000001) - 0x41000000) >= 0x1a000000 && (a1 & -0x1000000) != 0x20000000 && (uint)(a1 - 0x30000000) >= 0xa000000) {
        return (int)(0);
    }
    int v1 = (int)(a1 & 0xff0000); // (int)&FUN_114606c6
    if ((a1 & 0xdf0000) >= 0x5a0001 && v1 != 0x200000 && v1 >= 0x390001) {
        return (int)(0);
    }
    int v2 = (int)(a1 & 0xff00); // (int)&FUN_114606fe
    if ((a1 & 0xdf00) >= 0x5a01 && v2 != 0x2000 && v2 >= 0x3901) {
        return (int)(0);
    }
    if (FUN_11460780(a1 & 255) != 0) {
        return (int)(1);
    }
    return (int)(0);
}

// Reference entry 114655b0; body size 105 bytes.
#line 1 "ENTRY_114655b0"
int FUN_114655b0(int a1, uint a2) {

    *(char*)a1 = (char)((int)(39));
    *(char*)(a1 + 1) = (char)((char)(a2 < 0x7f000000 ? a2 / 0x1000000 : 63));
    uint v1 = (uint)(a2 / 0x10000); // (int)&FUN_114655d1
    *(char*)(a1 + 2) = (char)((char)((v1 & 255) < 127 ? v1 : 63));
    uint v2 = (uint)(a2 / 256); // (int)&FUN_114655e8
    *(char*)(a1 + 3) = (char)((char)((v2 & 255) < 127 ? v2 : 63));
    int result = (int)(a2 & 255); // (int)&FUN_114655fd
    if (result >= 127) {
        *(short*)(a1 + 4) = (short)(0x273f);
        return (int)(result);
    }
    *(char*)(a1 + 4) = (char)((char)a2);
    *(char*)(a1 + 5) = (char)(39);
    return (int)(result);
}

// Reference entry 114666e0; body size 42 bytes.
#line 1 "ENTRY_114666e0"
int FUN_114666e0(int a1) {

    int v1; // bp-8, (int)((int(*)(int a1))&FUN_114666e0)
    int v2 = (int)(&v1); // (int)&FUN_114666e1
    for (int i = 0; i < 256; i++) {
        *(int*)(v2 - 4) = (int)(3);
        *(int*)(v2 - 8) = (int)(255);
        *(int*)(v2 - 12) = (int)(i);
        *(int*)(v2 - 16) = (int)(i);
        *(int*)(v2 - 20) = (int)(i);
        *(int*)(v2 - 24) = (int)(i);
        *(int*)(v2 - 28) = (int)(a1);
        FUN_11466840();
    }
    return (int)(256);
}

// Reference entry 114671e0; body size 209 bytes.
#line 1 "ENTRY_114671e0"
int FUN_114671e0(int a1, int a2) {

    unsigned char v1 = (unsigned char)(*(char *)(a1 + 8)); // (int)&FUN_114671e4
    int v2; // (int)((int(*)(int a1, int a2))&FUN_114671e0)
    int result = (int)(v2 & -256 | (int)v1); // (int)&FUN_114671e4
    if ((v1 & 2) == 0) {
        return (int)(result);
    }
    int v3 = (int)(*(int *)a1); // (int)&FUN_114671f0
    char v4 = (char)(*(char *)(a1 + 9)); // (int)&FUN_114671f2
    if (v4 == 8) {
        int v5 = (int)(3); // (int)&FUN_114671fc
        if (v1 != 2) {
            v5 = (int)(4);
            if (v1 != 6) {
                return (int)(result);
            }
        }
        if (v3 == 0) {
            return (int)(result);
        }
        int result2 = (int)(a2 + 2); // (int)&FUN_1146721e
        int v6 = (int)(v3); // (int)&FUN_1146721e
        char v7 = (char)(*(char *)(result2 - 1)); // (int)&FUN_11467221
char *v8 = (char *)((char)((char *)(result2 - 2))); // (int)&FUN_11467224
        *v8 = (char)(*v8 + v7);
char *v9 = (char *)((char)((char *)result2)); // (int)&FUN_11467227
        *v9 = (char)(*v9 + v7);
        result2 += v5;
        v6--;
        while (v6 != 0) {
            v7 = (char)(*(char *)(result2 - 1));
            v8 = (char *)((char *)(result2 - 2));
            *v8 = (char)(*v8 + v7);
            v9 = (char *)((char *)result2);
            *v9 = (char)(*v9 + v7);
            result2 += v5;
            v6--;
        }
        return (int)(result2);
    }
    if (v4 != 16) {
        return (int)(result);
    }
    int v10 = (int)(6); // (int)&FUN_1146723a
    if (v1 != 2) {
        v10 = (int)(8);
        if (v1 != 6) {
            return (int)(result);
        }
    }
    if (v3 == 0) {
        return (int)(result);
    }
    int v11 = (int)(a2 + 1); // (int)&FUN_11467257
    int v12 = (int)(v3); // (int)&FUN_11467257
    unsigned char v13 = (unsigned char)(*(char *)(v11 + 2)); // (int)&FUN_11467264
char *v14 = (char *)((char)((char *)(v11 - 1))); // (int)&FUN_11467268
    int v15 = (int)(256 * (int)*(char *)(v11 + 1) | (int)v13); // (int)&FUN_11467272
char *v16 = (char *)((char)((char *)v11)); // (int)&FUN_11467274
char *v17 = (char *)((char)((char *)(v11 + 4))); // (int)&FUN_11467279
    uint v18 = (uint)((256 * (int)*v14 | (int)*v16) + v15); // (int)&FUN_1146727d
char *v19 = (char *)((char)((char *)(v11 + 3))); // (int)&FUN_11467282
    *v16 = (char)((char)v18);
    uint v20 = (uint)((256 * (int)*v19 | (int)*v17) + v15); // (int)&FUN_1146728d
    *v14 = (char)((char)(v18 / 256));
    uint v21 = (uint)(v20 / 256); // (int)&FUN_11467294
    *v19 = (char)((char)v21);
    *v17 = (char)((char)v20);
    v12--;
    v11 += v10;
    while (v12 != 0) {
        v13 = (unsigned char)(*(char *)(v11 + 2));
        v14 = (char *)((char *)(v11 - 1));
        v15 = (int)(256 * (int)*(char *)(v11 + 1) | (int)v13);
        v16 = (char *)((char *)v11);
        v17 = (char *)((char *)(v11 + 4));
        v18 = (uint)((256 * (int)*v14 | (int)*v16) + v15);
        v19 = (char *)((char *)(v11 + 3));
        *v16 = (char)((char)v18);
        v20 = (uint)((256 * (int)*v19 | (int)*v17) + v15);
        *v14 = (char)((char)(v18 / 256));
        v21 = (uint)(v20 / 256);
        *v19 = (char)((char)v21);
        *v17 = (char)((char)v20);
        v12--;
        v11 += v10;
    }
    return (int)(v21 & 255);
}

// Reference entry 114672f0; body size 47 bytes.
#line 1 "ENTRY_114672f0"
int FUN_114672f0(int result) {

    if (result < 0x186a0 != result != 0) {
        return (int)(result);
    }
    uint v1 = (uint)((int)((ulonglong)(0x66666667 * (longlong)(11 * result + 2)) / 0x100000000) >> 1); // (int)&FUN_1146730d
    return (int)(thunk_FUN_11464ab0(v1 / 0x80000000 + v1));
}

// Reference entry 114677b0; body size 63 bytes.
#line 1 "ENTRY_114677b0"
int FUN_114677b0(int a1) {

    unsigned char v1 = (unsigned char)(*(char *)(a1 + 335)); // (int)&FUN_114677b5
    int v2 = (int)(v1); // (int)&FUN_114677b5
    int v3 = (int)(v2 & 2); // (int)&FUN_114677be
    int v4; // (int)((int(*)(int a1))&FUN_114677b0)
    if ((v1 & 4) == 0) {
        if (*(short *)(a1 + 328) == 0) {
            v4 = (int)(v3);
            return (int)((*(char *)(a1 + 336) != 16 ? v4 : v4 + 4) | 8 * v2 & 8);
        }
    }
    v4 = (int)(v3 + 1);
    return (int)((*(char *)(a1 + 336) != 16 ? v4 : v4 + 4) | 8 * v2 & 8);
}

// Reference entry 11469357; body size 36 bytes.
#line 1 "ENTRY_11469357"
int FUN_11469357(uint a1) {

    int result; // (int)((int(*)(uint a1))&FUN_11469357)
    if (a1 == 254 == (uint)result > a1) {
        return (int)(((code *)LAB_11469332)());
    }
    return (int)(result);
}

// Reference entry 1146a4c0; body size 221 bytes.
#line 1 "ENTRY_1146a4c0"
int FUN_1146a4c0(int a1) {

    int v1 = (int)(*(int *)a1); // (int)&FUN_1146a4ca
    int v2 = (int)(*(int *)v1); // (int)&FUN_1146a4cc
    int v3; // (int)((int(*)(int a1))&FUN_1146a4c0)
    thunk_FUN_11480f60(v2, 1, v3, v3, v3, v3);
    thunk_FUN_1146af30(v2, *(int *)(v1 + 4));
char *v4 = (char *)((char)((char *)(v2 + 335))); // (int)&FUN_1146a4e7
    char v5 = (char)(*v4); // (int)&FUN_1146a4e7
    *(int*)(a1 + 8) = (int)(*(int *)(v2 + 256));
    *(int*)(a1 + 12) = (int)(*(int *)(v2 + 260));
    int v6 = (int)(v5 & 2); // (int)&FUN_1146a4fc
    int v7; // (int)((int(*)(int a1))&FUN_1146a4c0)
    if ((v5 & 4) != 0) {
        v7 = (int)(v6 + 1);
        goto lab_0x1146a511;
    } else {
        v7 = (int)(v6);
        if (*(short *)(v2 + 328) == 0) {
            goto lab_0x1146a511;
        } else {
            v7 = (int)(v6 + 1);
            goto lab_0x1146a511;
        }
    }
  lab_0x1146a511:;
    int v8 = (int)(v7);
    char v9 = (char)(*(char *)(v2 + 336)); // (int)&FUN_1146a511
    int v10 = (int)(v9 != 16 ? v8 : v8 + 4); // (int)&FUN_1146a523
    *(int*)(a1 + 16) = (int)(v10 | (int)(8 * v5 & 8));
    if ((v10 & 2) != 0) {
        if ((*(short *)(v2 + 782) & -0x7fbe) == 2) {
int *v11 = (int *)((int)((int *)(a1 + 20))); // (int)&FUN_1146a54f
            *v11 = (int)(*v11 + 1);
        }
    }
    int v12; // (int)((int(*)(int a1))&FUN_1146a4c0)
    switch (*v4) {
        case 0: {
            unsigned char v13 = (unsigned char)(v9 & 31);
            v12 = (int)(v13 == 0 ? 1 : 1 << (int)v13);
            break;
        }
        case 3: {
            v12 = (int)((int)*(short *)(v2 + 320));
            break;
        }
        default: {
            *(int*)(a1 + 24) = (int)(256);
            return (int)(1);
        }
    }
    uint v14 = (uint)(v12);
    *(int*)(a1 + 24) = (int)(v14 < 256 ? v14 : 256);
    return (int)(1);
}

// Reference entry 1146a8a0; body size 37 bytes.
#line 1 "ENTRY_1146a8a0"
int FUN_1146a8a0(int a1) {

    thunk_FUN_11481a20(a1, 1, 0, -1);
    return (int)(thunk_FUN_11481a20(a1, 0, (int)&DAT_11c0548c, 6));
}

// Reference entry 1146a8d0; body size 311 bytes.
#line 1 "ENTRY_1146a8d0"
int FUN_1146a8d0(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_1146a8d0)
    thunk_FUN_11464030(a1, v1);
int *v2 = (int *)((int)((int *)(a1 + 612))); // (int)&FUN_1146a8db
    thunk_FUN_1147b2f0(a1, *v2);
int *v3 = (int *)((int)((int *)(a1 + 688))); // (int)&FUN_1146a8e7
    *v2 = (int)(0);
    thunk_FUN_1147b2f0(a1, *v3);
int *v4 = (int *)((int)((int *)(a1 + 672))); // (int)&FUN_1146a8fd
    *v3 = (int)(0);
    thunk_FUN_1147b2f0(a1, *v4);
int *v5 = (int *)((int)((int *)(a1 + 516))); // (int)&FUN_1146a913
    *v4 = (int)(0);
    thunk_FUN_1147b2f0(a1, *v5);
int *v6 = (int *)((int)((int *)(a1 + 520))); // (int)&FUN_1146a929
    *v5 = (int)(0);
    thunk_FUN_1147b2f0(a1, *v6);
int *v7 = (int *)((int)((int *)(a1 + 560))); // (int)&FUN_1146a93f
    int v8 = (int)(*v7); // (int)&FUN_1146a93f
    *v6 = (int)(0);
    int v9 = (int)(v8); // (int)&FUN_1146a957
    if ((v8 & 0x1000) != 0) {
int *v10 = (int *)((int)((int *)(a1 + 316))); // (int)&FUN_1146a959
        thunk_FUN_1147b2f0(a1, *v10);
        v9 = (int)(*v7);
        *v10 = (int)(0);
    }
    int v11 = (int)(v9 & -0x1001); // (int)&FUN_1146a978
    *v7 = (int)(v11);
    int v12 = (int)(v11); // (int)&FUN_1146a988
    if ((v9 & 0x2000) != 0) {
int *v13 = (int *)((int)((int *)(a1 + 432))); // (int)&FUN_1146a98a
        thunk_FUN_1147b2f0(a1, *v13);
        v12 = (int)(*v7);
        *v13 = (int)(0);
    }
    *v7 = (int)(v12 & -0x2001);
    thunk_FUN_113c7de0(a1 + 132);
int *v14 = (int *)((int)((int *)(a1 + 472))); // (int)&FUN_1146a9c0
    thunk_FUN_1147b2f0(a1, *v14);
int *v15 = (int *)((int)((int *)(a1 + 656))); // (int)&FUN_1146a9cc
    *v14 = (int)(0);
    thunk_FUN_1147b2f0(a1, *v15);
int *v16 = (int *)((int)((int *)(a1 + 580))); // (int)&FUN_1146a9e2
    *v15 = (int)(0);
    int result = (int)(thunk_FUN_1147b2f0(a1, *v16), 0); // (int)&FUN_1146a9f3
    *v16 = (int)(0);
    return (int)(result);
}

// Reference entry 1146c130; body size 55 bytes.
#line 1 "ENTRY_1146c130"
int FUN_1146c130(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_1146c130)
    return (int)(thunk_FUN_111ac070(thunk_FUN_111ac070(v1, (int)&DAT_11c05fbc), (int)&DAT_11881ac8));
}

// Reference entry 1146cde0; body size 73 bytes.
#line 1 "ENTRY_1146cde0"
int FUN_1146cde0(int a1, int a2) {
char *v1 = (char *)((char)((char *)(a1 + 9))); // (int)&FUN_1146cde5
    if (*v1 != (char)((16))) {
        int result; // (int)((int(*)(int a1, int a2))&FUN_1146cde0)
        return (int)(result);
    }
int *v2 = (int *)((int)((int *)(a1 + 4))); // (int)&FUN_1146cdf2
    uint v3 = (uint)(*v2 + a2); // (int)&FUN_1146cdf5
    int v4 = (int)(a2); // (int)&FUN_1146cdf9
    if (v3 > a2) {
        int v5 = (int)(a2 + 2); // (int)&FUN_1146ce05
        *(char*)v4 = (char)((int)(*(char *)a2));
        v4++;
        while (v5 < v3) {
            int v6 = (int)(v5);
            v5 = (int)(v6 + 2);
            *(char*)v4 = (char)((int)(*(char *)v6));
            v4++;
        }
    }
char *v7 = (char *)((char)((char *)(a1 + 10))); // (int)&FUN_1146ce0f
    *(char*)(a1 + 11) = (char)(8 * *v7);
    int result2 = (int)(*(int *)a1 * (int)*v7); // (int)&FUN_1146ce1c
    *v1 = (char)(8);
    *v2 = (int)(result2);
    return (int)(result2);
}

// Reference entry 1146e3a0; body size 221 bytes.
#line 1 "ENTRY_1146e3a0"
int FUN_1146e3a0(int a1, int a2, int a3) {

    unsigned char v1 = (unsigned char)(*(char *)(a1 + 8)); // (int)&FUN_1146e3aa
    int v2; // (int)((int(*)(int a1, int a2, int a3))&FUN_1146e3a0)
    if ((v1 & 4) == 0) {
        return (int)(thunk_FUN_1146cad0(a3, (int)&DAT_11c06310, v2, v2, v2));
    }
    int v3 = (int)(v1); // (int)&FUN_1146e3aa
    int v4 = (int)(*(int *)a1); // (int)&FUN_1146e3ad
    char v5 = (char)(*(char *)(a1 + 9)); // (int)&FUN_1146e3b9
    if (v5 == 8) {
        int v6 = (int)(*(int *)(a3 + 404)); // (int)&FUN_1146e3c1
        if (v6 == 0) {
            return (int)(thunk_FUN_1146cad0(a3, (int)&DAT_11c06310, v2, v2, v2));
        }
        if (v4 == 0) {
            return (int)(0);
        }
        int result = (int)(v4); // (int)&FUN_1146e3fa
        int v7 = (int)(a2 - 1);
        v7 += 2 * (int)((v3 & 2) != 0) + 2;
char *v8 = (char *)((char)((char *)v7)); // (int)&FUN_1146e3f0
        *v8 = (char)(*(char *)(v6 + (int)*v8));
        result--;
        while (result != 0) {
            v7 += 2 * (int)((v3 & 2) != 0) + 2;
            v8 = (char *)((char *)v7);
            *v8 = (char)(*(char *)(v6 + (int)*v8));
            result--;
        }
        return (int)(result);
    }
    if (v5 != 16) {
        return (int)(thunk_FUN_1146cad0(a3, (int)&DAT_11c06310, v2, v2, v2));
    }
    int v9 = (int)(*(int *)(a3 + 412)); // (int)&FUN_1146e408
    if (v9 == 0) {
        return (int)(thunk_FUN_1146cad0(a3, (int)&DAT_11c06310, v2, v2, v2));
    }
    if (v4 == 0) {
        return (int)(0);
    }
    uint v10 = (uint)(*(int *)(a3 + 388) & 31); // (int)&FUN_1146e447
    int result2 = (int)(v4); // (int)&FUN_1146e43f
    int v11 = (int)(a2 - 2); // (int)&FUN_1146e43f
    v11 += 4 * (int)((v3 & 2) != 0) + 4;
char *v12 = (char *)((char)((char *)(v11 + 1))); // (int)&FUN_1146e440
char *v13 = (char *)((char)((char *)v11)); // (int)&FUN_1146e444
    int v14 = (int)(*(int *)(4 * ((int)*v12 >> v10) + v9)); // (int)&FUN_1146e449
    ushort v15 = (ushort)(*(short *)(2 * (int)*v13 + v14)); // (int)&FUN_1146e44d
    *v12 = (char)((char)v15);
    *v13 = (char)((char)(v15 / 256));
    result2--;
    while (result2 != 0) {
        v11 += 4 * (int)((v3 & 2) != 0) + 4;
        v12 = (char *)((char *)(v11 + 1));
        v13 = (char *)((char *)v11);
        v14 = (int)(*(int *)(4 * ((int)*v12 >> v10) + v9));
        v15 = (ushort)(*(short *)(2 * (int)*v13 + v14));
        *v12 = (char)((char)v15);
        *v13 = (char)((char)(v15 / 256));
        result2--;
    }
    return (int)(result2);
}

// Reference entry 1146ea20; body size 73 bytes.
#line 1 "ENTRY_1146ea20"
int FUN_1146ea20(int a1, int a2) {
char *v1 = (char *)((char)((char *)(a1 + 9))); // (int)&FUN_1146ea25
    if (*v1 != (char)((8)) || *(char *)(a1 + 8) == 3) {
        int result; // (int)((int(*)(int a1, int a2))&FUN_1146ea20)
        return (int)(result);
    }
int *v2 = (int *)((int)((int *)(a1 + 4))); // (int)&FUN_1146ea31
    int v3 = (int)(*v2); // (int)&FUN_1146ea31
    int v4 = (int)(v3 + a2); // (int)&FUN_1146ea38
    int v5 = (int)(v4 + v3); // (int)&FUN_1146ea3a
    int v6 = (int)(v5); // (int)&FUN_1146ea3f
    int v7 = (int)(v4); // (int)&FUN_1146ea3f
    int v8 = (int)(v3); // (int)&FUN_1146ea3f
    if (v3 != 0 && v5 >= v4) {
        v7--;
        char v9 = (char)(*(char *)v7); // (int)&FUN_1146ea41
        *(char*)(v6 - 1) = (char)(v9);
        v6 -= 2;
        *(char*)v6 = (char)((int)(v9));
        while (v6 > v7) {
            v7--;
            v9 = (char)(*(char *)v7);
            *(char*)(v6 - 1) = (char)(v9);
            v6 -= 2;
            *(char*)v6 = (char)((int)(v9));
        }
        v8 = (int)(*v2);
    }
    int v10 = (int)(2 * v8); // (int)&FUN_1146ea54
    *v1 = (char)(16);
    *v2 = (int)(v10);
    unsigned char v11 = (unsigned char)(16 * *(char *)(a1 + 10)); // (int)&FUN_1146ea61
    *(char*)(a1 + 11) = (char)(v11);
    return (int)(v10 & -256 | (int)v11);
}

// Reference entry 1146fa00; body size 144 bytes.
#line 1 "ENTRY_1146fa00"
int FUN_1146fa00(int a1, int a2) {

    unsigned char v1 = (unsigned char)(*(char *)(a1 + 8)); // (int)&FUN_1146fa05
    int v2 = (int)(*(int *)a1); // (int)&FUN_1146fa08
    if (v1 == 6) {
        int result = (int)(*(int *)(a1 + 4) + a2); // (int)&FUN_1146fa11
        int result2; // (int)((int(*)(int a1, int a2))&FUN_1146fa00)
        if (*(char *)(a1 + 9) != 8) {
            if (v2 == 0) {
                return (int)(result);
            }
            int v3 = (int)(v2); // (int)&FUN_1146fa2f
char *v4 = (char *)((char)((char *)(result - 1))); // (int)&FUN_1146fa31
            *v4 = (char)(-1 - *v4);
            int v5 = (int)(result - 8); // (int)&FUN_1146fa34
char *v6 = (char *)((char)((char *)(result - 2))); // (int)&FUN_1146fa37
            *v6 = (char)(-1 - *v6);
            v3--;
            result2 = (int)(v5);
            while (v3 != 0) {
                int v7 = (int)(v5);
                v4 = (char *)((char *)(v7 - 1));
                *v4 = (char)(-1 - *v4);
                v5 = (int)(v7 - 8);
                v6 = (char *)((char *)(v7 - 2));
                *v6 = (char)(-1 - *v6);
                v3--;
                result2 = (int)(v5);
            }
        } else {
            int v8 = (int)(result); // (int)&FUN_1146fa1d
            if (v2 == 0) {
                return (int)(result);
            }
            int v9 = (int)(v2); // (int)&FUN_1146fa1d
char *v10 = (char *)((char)((char *)(v8 - 1))); // (int)&FUN_1146fa20
            *v10 = (char)(-1 - *v10);
            v8 -= 4;
            v9--;
            result2 = (int)(v8);
            while (v9 != 0) {
                v10 = (char *)((char *)(v8 - 1));
                *v10 = (char)(-1 - *v10);
                v8 -= 4;
                v9--;
                result2 = (int)(v8);
            }
        }
        return (int)(result2);
    }
    int v11; // (int)((int(*)(int a1, int a2))&FUN_1146fa00)
    int result3 = (int)(v11 & -256 | (int)v1); // (int)&FUN_1146fa05
    if (v1 != 4) {
        return (int)(result3);
    }
    int v12 = (int)(*(int *)(a1 + 4) + a2); // (int)&FUN_1146fa48
    if (*(char *)(a1 + 9) == 8) {
        int v13 = (int)(v12); // (int)&FUN_1146fa56
        if (v2 == 0) {
            return (int)(result3);
        }
        int v14 = (int)(v2); // (int)&FUN_1146fa56
char *v15 = (char *)((char)((char *)(v13 - 1)));
        v13 -= 2;
        *v15 = (char)(-1 - *v15);
        while (v14 != 1) {
            v14--;
            v15 = (char *)((char *)(v13 - 1));
            v13 -= 2;
            *v15 = (char)(-1 - *v15);
        }
        return (int)((int)*(char *)v13);
    }
    int v16 = (int)(v12); // (int)&FUN_1146fa7d
    if (v2 == 0) {
        return (int)(result3);
    }
    int v17 = (int)(v2); // (int)&FUN_1146fa7d
char *v18 = (char *)((char)((char *)(v16 - 1))); // (int)&FUN_1146fa80
    *v18 = (char)(-1 - *v18);
char *v19 = (char *)((char)((char *)(v16 - 2))); // (int)&FUN_1146fa86
    *v19 = (char)(-1 - *v19);
    v17--;
    v16 -= 4;
    while (v17 != 0) {
        v18 = (char *)((char *)(v16 - 1));
        *v18 = (char)(-1 - *v18);
        v19 = (char *)((char *)(v16 - 2));
        *v19 = (char)(-1 - *v19);
        v17--;
        v16 -= 4;
    }
    return (int)(result3);
}

// Reference entry 11470ad0; body size 95 bytes.
#line 1 "ENTRY_11470ad0"
int FUN_11470ad0(int a1, int a2) {
char *v1 = (char *)((char)((char *)(a1 + 9))); // (int)&FUN_11470ad5
    if (*v1 != (char)((16))) {
        int result; // (int)((int(*)(int a1, int a2))&FUN_11470ad0)
        return (int)(result);
    }
int *v2 = (int *)((int)((int *)(a1 + 4))); // (int)&FUN_11470ae0
    uint v3 = (uint)(*v2 + a2); // (int)&FUN_11470ae3
    int v4 = (int)(a2); // (int)&FUN_11470aea
    int v5 = (int)(a2); // (int)&FUN_11470aea
    if (v3 > a2) {
        unsigned char v6 = (unsigned char)(*(char *)v4); // (int)&FUN_11470af0
        unsigned char v7 = (unsigned char)(*(char *)(v4 + 1)); // (int)&FUN_11470af6
        v4 += 2;
        *(char*)v5 = (char)((int)(v6 + (char)((0xffff * ((int)v7 - (int)v6) + 0x7fff80) / 0x1000000)));
        v5++;
        while (v4 < v3) {
            v6 = (unsigned char)(*(char *)v4);
            v7 = (unsigned char)(*(char *)(v4 + 1));
            v4 += 2;
            *(char*)v5 = (char)((int)(v6 + (char)((0xffff * ((int)v7 - (int)v6) + 0x7fff80) / 0x1000000)));
            v5++;
        }
    }
char *v8 = (char *)((char)((char *)(a1 + 10))); // (int)&FUN_11470b14
    *(char*)(a1 + 11) = (char)(8 * *v8);
    int result2 = (int)(*(int *)a1 * (int)*v8); // (int)&FUN_11470b21
    *v1 = (char)(8);
    *v2 = (int)(result2);
    return (int)(result2);
}

// Reference entry 11470f90; body size 55 bytes.
#line 1 "ENTRY_11470f90"
int FUN_11470f90(int a1, int a2) {

    int v1; // bp-4, (int)((int(*)(int a1, int a2))&FUN_11470f90)
    int v2; // (int)((int(*)(int a1, int a2))&FUN_11470f90)
    if (thunk_FUN_11465990(&v1, a1, a2, 0x186a0, v2) != 0) {
        int result = (int)(thunk_FUN_11464ab0(v1), 0); // (int)&FUN_11470fb2
        if (result == 0) {
            return (int)(result);
        }
    }
    return (int)(1);
}

// Reference entry 11472030; body size 211 bytes.
#line 1 "ENTRY_11472030"
int FUN_11472030(int a1) {

    char v1 = (char)(*(char *)(a1 + 335)); // (int)&FUN_11472034
int *v2 = (int *)((int)((int *)(a1 + 124)));
    int v3 = (int)(*v2);
    int v4 = (int)(v3); // (int)&FUN_1147203d
    if ((v1 & 4) == 0) {
int *v5 = (int *)((int)((int *)(a1 + 120))); // (int)&FUN_11472042
        *v5 = (int)(*v5 & -0x2001);
        int v6 = (int)(v3 & -0x800001); // (int)&FUN_11472049
        *v2 = (int)(v6);
        v4 = (int)(v6);
        if (*(short *)(a1 + 328) == 0) {
            int v7 = (int)(v3 & -0x800181); // (int)&FUN_1147205b
            *v2 = (int)(v7);
            v4 = (int)(v7);
        }
    }
    int result = (int)(v4 & 0x1100); // (int)&FUN_11472066
    if (result != 0x1100 || (v1 & 2) != 0) {
        return (int)(result);
    }
    unsigned char v8 = (unsigned char)(*(char *)(a1 + 336)); // (int)&FUN_1147207f
    int v9 = (int)((int)*(short *)(a1 + 444)); // (int)&FUN_11472086
    int v10 = (int)((int)*(short *)(a1 + 364)); // (int)&FUN_1147208e
    int v11; // (int)((int(*)(int a1))&FUN_11472030)
    int v12; // (int)((int(*)(int a1))&FUN_11472030)
    if (v8 == 1) {
        v11 = (int)(255 * v9);
        v12 = (int)(255 * v10);
    } else {
        int v13 = (int)((int)v8 - 2); // (int)&FUN_1147209a
        if (v13 == 0) {
            v11 = (int)(85 * v9);
            v12 = (int)(85 * v10);
        } else {
            v11 = (int)(v9);
            v12 = (int)(v10);
            if (v13 == 2) {
                v11 = (int)(17 * v9);
                v12 = (int)(17 * v10);
            }
        }
    }
    short v14 = (short)(v12); // (int)&FUN_114720d2
    *(short*)(a1 + 362) = (short)(v14);
    *(short*)(a1 + 360) = (short)(v14);
    *(short*)(a1 + 358) = (short)(v14);
    int result2 = (int)(v12 & 0xffff); // (int)&FUN_114720e8
    if ((v4 & 0x2000000) == 0) {
        short v15 = (short)(v11); // (int)&FUN_114720ed
        *(short*)(a1 + 442) = (short)(v15);
        *(short*)(a1 + 440) = (short)(v15);
        *(short*)(a1 + 438) = (short)(v15);
        result2 = (int)(v11 & 0xffff);
    }
    return (int)(result2);
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
int FUN_11473dd0(int a1, int result, int a3) {

    switch (result) {
        case -1: {
        }
        case -0x186a0: {
int *v1 = (int *)((int)((int *)(a1 + 120))); // (int)&FUN_11473e08
            *v1 = (int)(*v1 | 0x1000);
            return (int)(a3 != 0 ? 0x35b60 : 0xb18f);
        }
        default: {
            if (result != -0xc350) {
                return (int)(result);
            }
        }
        case -2: {
            return (int)(a3 != 0 ? 0x250ac : 0x10175);
        }
    }
}

// Reference entry 114779e0; body size 44 bytes.
#line 1 "ENTRY_114779e0"
int FUN_114779e0(uint a1) {

    int result = (int)(a1);
    if (a1 <= 0xffffffff || thunk_FUN_11465990(&result, a1, 127, 0x1388) == 0) {
        return (int)(0);
    }
    return (int)(result);
}

// Reference entry 11477e20; body size 209 bytes.
#line 1 "ENTRY_11477e20"
int FUN_11477e20(int a1, int a2) {

    unsigned char v1 = (unsigned char)(*(char *)(a1 + 8)); // (int)&FUN_11477e24
    int v2; // (int)((int(*)(int a1, int a2))&FUN_11477e20)
    int result = (int)(v2 & -256 | (int)v1); // (int)&FUN_11477e24
    if ((v1 & 2) == 0) {
        return (int)(result);
    }
    int v3 = (int)(*(int *)a1); // (int)&FUN_11477e30
    char v4 = (char)(*(char *)(a1 + 9)); // (int)&FUN_11477e32
    if (v4 == 8) {
        int v5 = (int)(3); // (int)&FUN_11477e3c
        if (v1 != 2) {
            v5 = (int)(4);
            if (v1 != 6) {
                return (int)(result);
            }
        }
        if (v3 == 0) {
            return (int)(result);
        }
        int result2 = (int)(a2 + 2); // (int)&FUN_11477e5e
        int v6 = (int)(v3); // (int)&FUN_11477e5e
        char v7 = (char)(*(char *)(result2 - 1)); // (int)&FUN_11477e61
char *v8 = (char *)((char)((char *)(result2 - 2))); // (int)&FUN_11477e64
        *v8 = (char)(*v8 - v7);
char *v9 = (char *)((char)((char *)result2)); // (int)&FUN_11477e67
        *v9 = (char)(*v9 - v7);
        result2 += v5;
        v6--;
        while (v6 != 0) {
            v7 = (char)(*(char *)(result2 - 1));
            v8 = (char *)((char *)(result2 - 2));
            *v8 = (char)(*v8 - v7);
            v9 = (char *)((char *)result2);
            *v9 = (char)(*v9 - v7);
            result2 += v5;
            v6--;
        }
        return (int)(result2);
    }
    if (v4 != 16) {
        return (int)(result);
    }
    int v10 = (int)(6); // (int)&FUN_11477e7a
    if (v1 != 2) {
        v10 = (int)(8);
        if (v1 != 6) {
            return (int)(result);
        }
    }
    if (v3 == 0) {
        return (int)(result);
    }
    int v11 = (int)(a2 + 1); // (int)&FUN_11477e97
    int v12 = (int)(v3); // (int)&FUN_11477e97
    unsigned char v13 = (unsigned char)(*(char *)(v11 + 2)); // (int)&FUN_11477ea4
char *v14 = (char *)((char)((char *)(v11 - 1))); // (int)&FUN_11477ea8
    int v15 = (int)(256 * (int)*(char *)(v11 + 1) | (int)v13); // (int)&FUN_11477eb2
char *v16 = (char *)((char)((char *)v11)); // (int)&FUN_11477eb4
char *v17 = (char *)((char)((char *)(v11 + 4))); // (int)&FUN_11477eb9
    uint v18 = (uint)((256 * (int)*v14 | (int)*v16) - v15); // (int)&FUN_11477ebd
char *v19 = (char *)((char)((char *)(v11 + 3))); // (int)&FUN_11477ec2
    *v16 = (char)((char)v18);
    uint v20 = (uint)((256 * (int)*v19 | (int)*v17) - v15); // (int)&FUN_11477ecd
    *v14 = (char)((char)(v18 / 256));
    uint v21 = (uint)(v20 / 256); // (int)&FUN_11477ed4
    *v19 = (char)((char)v21);
    *v17 = (char)((char)v20);
    v12--;
    v11 += v10;
    while (v12 != 0) {
        v13 = (unsigned char)(*(char *)(v11 + 2));
        v14 = (char *)((char *)(v11 - 1));
        v15 = (int)(256 * (int)*(char *)(v11 + 1) | (int)v13);
        v16 = (char *)((char *)v11);
        v17 = (char *)((char *)(v11 + 4));
        v18 = (uint)((256 * (int)*v14 | (int)*v16) - v15);
        v19 = (char *)((char *)(v11 + 3));
        *v16 = (char)((char)v18);
        v20 = (uint)((256 * (int)*v19 | (int)*v17) - v15);
        *v14 = (char)((char)(v18 / 256));
        v21 = (uint)(v20 / 256);
        *v19 = (char)((char)v21);
        *v17 = (char)((char)v20);
        v12--;
        v11 += v10;
    }
    return (int)(v21 & 255);
}

// Reference entry 11479460; body size 154 bytes.
#line 1 "ENTRY_11479460"
int FUN_11479460(int a1) {

    if ((*(char *)(a1 + 120) & 2) != 0) {
        int v1; // (int)((int(*)(int a1))&FUN_11479460)
        thunk_FUN_113c4010(a1 + 132, v1);
    }
    thunk_FUN_1147c0d0(a1, a1 + 188);
int *v2 = (int *)((int)((int *)(a1 + 292))); // (int)&FUN_11479487
    thunk_FUN_1147b2f0(a1, *v2);
int *v3 = (int *)((int)((int *)(a1 + 288))); // (int)&FUN_11479493
    *v2 = (int)(0);
    thunk_FUN_1147b2f0(a1, *v3);
int *v4 = (int *)((int)((int *)(a1 + 296))); // (int)&FUN_114794a9
    thunk_FUN_1147b2f0(a1, *v4);
int *v5 = (int *)((int)((int *)(a1 + 300))); // (int)&FUN_114794b5
    thunk_FUN_1147b2f0(a1, *v5);
int *v6 = (int *)((int)((int *)(a1 + 580))); // (int)&FUN_114794c1
    *v3 = (int)(0);
    *v4 = (int)(0);
    *v5 = (int)(0);
    int result = (int)(thunk_FUN_1147b2f0(a1, *v6), 0); // (int)&FUN_114794e6
    *v6 = (int)(0);
    return (int)(result);
}

// Reference entry 1147ca10; body size 152 bytes.
#line 1 "ENTRY_1147ca10"
int FUN_1147ca10(int a1, int a2, uint a3, uint a4) {

    int v1 = (int)(*(int *)(a1 + 296)); // (int)&FUN_1147ca1a
    int v2 = (int)(*(int *)(a1 + 292) + 1); // (int)&FUN_1147ca27
    *(char*)v1 = (char)((int)(1));
    int v3 = (int)(v1 + 1); // (int)&FUN_1147ca30
    int v4 = (int)(v3); // (int)&FUN_1147ca39
    int v5 = (int)(v2); // (int)&FUN_1147ca39
    int v6 = (int)(a2); // (int)&FUN_1147ca39
    int v7 = (int)(0); // (int)&FUN_1147ca39
    int v8 = (int)(v3); // (int)&FUN_1147ca39
    int v9 = (int)(v2); // (int)&FUN_1147ca39
    int result = (int)(0); // (int)&FUN_1147ca39
    if (a2 != 0) {
        unsigned char v10 = (unsigned char)(*(char *)v5); // (int)&FUN_1147ca40
        int v11 = (int)(v10); // (int)&FUN_1147ca40
        *(char*)v4 = (char)((int)(v10));
        v5++;
        v7 += (v10 <= -1 ? 256 - v11 : v11);
        v4++;
        v6--;
        v8 = (int)(v4);
        v9 = (int)(v5);
        result = (int)(v7);
        while (v6 != 0) {
            v10 = (unsigned char)(*(char *)v5);
            v11 = (int)(v10);
            *(char*)v4 = (char)((int)(v10));
            v5++;
            v7 += (v10 <= -1 ? 256 - v11 : v11);
            v4++;
            v6--;
            v8 = (int)(v4);
            v9 = (int)(v5);
            result = (int)(v7);
        }
    }
    if (a2 >= a3) {
        return (int)(result);
    }
    int v12 = (int)(v8); // (int)&FUN_1147ca70
    int result2 = (int)(result); // (int)&FUN_1147ca70
    int v13 = (int)(a2); // (int)&FUN_1147ca70
    char v14 = (char)(*(char *)(v2 - v8 + v12)); // (int)&FUN_1147ca77
    char v15 = (char)(*(char *)(v9 - v8 + v12) - v14); // (int)&FUN_1147ca77
    int v16 = (int)(v15); // (int)&FUN_1147ca77
    *(char*)v12 = (char)((int)(v15));
    result2 += (v15 <= -1 ? 256 - v16 : v16);
    while (result2 <= a4) {
        v13++;
        v12++;
        if (v13 >= a3) {
            break;
        }
        v14 = (char)(*(char *)(v2 - v8 + v12));
        v15 = (char)(*(char *)(v9 - v8 + v12) - v14);
        v16 = (int)(v15);
        *(char*)v12 = (char)((int)(v15));
        result2 += (v15 <= -1 ? 256 - v16 : v16);
    }
    return (int)(result2);
}

// Reference entry 1147cc30; body size 108 bytes.
#line 1 "ENTRY_1147cc30"
int FUN_1147cc30(int a1, uint a2, uint a3) {

    int v1 = (int)(*(int *)(a1 + 296)); // (int)&FUN_1147cc3f
    *(char*)v1 = (char)((int)(2));
    if (a2 == 0) {
        return (int)(0);
    }
    int v2 = (int)(0); // (int)&FUN_1147cc61
    int result = (int)(0); // (int)&FUN_1147cc61
    int v3 = (int)(*(int *)(a1 + 288)); // (int)&FUN_1147cc61
    int v4 = (int)(*(int *)(a1 + 292)); // (int)&FUN_1147cc61
    v4++;
    v3++;
    char v5 = (char)(*(char *)v4 - *(char *)v3); // (int)&FUN_1147cc64
    int v6 = (int)(v5); // (int)&FUN_1147cc64
    v2++;
    *(char*)(v2 + v1) = (char)(v5);
    result += (v5 <= -1 ? 256 - v6 : v6);
    while (v2 < a2 == result <= a3) {
        v4++;
        v3++;
        v5 = (char)(*(char *)v4 - *(char *)v3);
        v6 = (int)(v5);
        v2++;
        *(char*)(v2 + v1) = (char)(v5);
        result += (v5 <= -1 ? 256 - v6 : v6);
    }
    return (int)(result);
}

// Reference entry 11480a90; body size 67 bytes.
#line 1 "ENTRY_11480a90"
int FUN_11480a90(int a1, uint result2, int a3, int a4) {

    int v1 = (int)(a1); // (int)&FUN_11480aa2
    if (result2 == 0) {
      lab_0x11480ab2:;
        int result = (int)(result2); // (int)&FUN_11480ab8
        if (a4 != 0) {
            *(int*)v1 = (int)((int)(*(int *)a3));
            *(char*)(v1 + 4) = (char)((char)a4);
            result = (int)(result2 + 1);
        }
        return (int)(result);
    }
    int v2 = (int)(0); // (int)&FUN_11480aaa
    int v3 = (int)(a1);
    while (*(int *)(v3) != *(int *)(a3)) {
        v2++;
        int v4 = (int)(v3 + 5); // (int)&FUN_11480aab
        v1 = (int)(v4);
        if (v2 >= result2) {
            goto lab_0x11480ab2;
        }
        v3 = (int)(v4);
    }
    *(char*)(v3 + 4) = (char)((char)a4);
    return (int)(result2);
}

// Reference entry 114842d0; body size 74 bytes.
#line 1 "ENTRY_114842d0"
int FUN_114842d0(int a1, int a2) {

    unsigned char v1 = (unsigned char)(*(char *)a2); // (int)&FUN_114842d5
    unsigned char v2 = (unsigned char)(*(char *)(a2 + 1)); // (int)&FUN_114842d8
    unsigned char v3 = (unsigned char)(*(char *)(a2 + 2)); // (int)&FUN_114842dc
    unsigned char v4 = (unsigned char)(*(char *)(a2 + 3)); // (int)&FUN_114842ea
    int result = (int)(256 * (256 * (256 * (int)v1 | (int)v2) | (int)v3) | (int)v4); // (int)&FUN_114842f1
    if (result > -1) {
        return (int)(result);
    }
    if (a1 != 0) {
        int v5; // (int)((int(*)(int a1, int a2))&FUN_114842d0)
        thunk_FUN_1146cad0(a1, (int)&DAT_11c08410, v5);
    }
    return (int)(-1);
}

// Reference entry 11488100; body size 72 bytes.
#line 1 "ENTRY_11488100"
int FUN_11488100(int a1) {

    *(int*)(a1 + 692) = (int)((int)((int(*)(int a1, int a2))&FUN_11488a50));
    *(int*)(a1 + 696) = (int)((int)&FUN_11488a90);
    *(int*)(a1 + 700) = (int)((int)((int(*)(int a1, int a2, int a3))&FUN_114887d0));
    int result = (int)(((int)*(char *)(a1 + 338) + 7 & 504) != 8 ? (int)((int(*)(int a1, int a2, int a3))&FUN_11488920) : (int)&FUN_11488850); // (int)&FUN_1148813d
    *(int*)(a1 + 704) = (int)(result);
    return (int)(result);
}

// Reference entry 114887d0; body size 94 bytes.
#line 1 "ENTRY_114887d0"
int FUN_114887d0(int a1, int a2, int a3) {

    uint v1 = (uint)((int)*(char *)(a1 + 11) + 7); // (int)&FUN_114887e1
    int v2 = (int)(v1 / 8); // (int)&FUN_114887e4
    int v3 = (int)(a2); // (int)&FUN_114887f0
    int v4 = (int)(v2); // (int)&FUN_114887f0
    int result = (int)(a2); // (int)&FUN_114887f0
    int v5 = (int)(a3); // (int)&FUN_114887f0
    if (v1 >= 8) {
        int v6 = (int)(a3 + 1); // (int)&FUN_114887f6
char *v7 = (char *)((char)((char *)v3)); // (int)&FUN_114887f9
        *v7 = (char)(*v7 + *(char *)a3 / 2);
        v3++;
        v4--;
        result = (int)(v3);
        v5 = (int)(v6);
        while (v4 != 0) {
            int v8 = (int)(v6);
            v6 = (int)(v8 + 1);
            v7 = (char *)((char *)v3);
            *v7 = (char)(*v7 + *(char *)v8 / 2);
            v3++;
            v4--;
            result = (int)(v3);
            v5 = (int)(v6);
        }
    }
    int v9 = (int)(*(int *)(a1 + 4) - v2); // (int)&FUN_114887e7
    if (v9 == 0) {
        return (int)(result);
    }
    int v10 = (int)(v9); // (int)&FUN_1148880c
    int v11 = (int)(result - v2); // (int)&FUN_1148880c
    unsigned char v12 = (unsigned char)(*(char *)(v5 - result + result)); // (int)&FUN_11488810
    int result2 = (int)(result + 1); // (int)&FUN_11488814
    unsigned char v13 = (unsigned char)(*(char *)v11); // (int)&FUN_11488817
char *v14 = (char *)((char)((char *)result)); // (int)&FUN_11488821
    *v14 = (char)(*v14 + (char)(((int)v13 + (int)v12) / 2));
    v10--;
    v11++;
    while (v10 != 0) {
        int v15 = (int)(result2);
        v12 = (unsigned char)(*(char *)(v5 - result + v15));
        result2 = (int)(v15 + 1);
        v13 = (unsigned char)(*(char *)v11);
        v14 = (char *)((char *)v15);
        *v14 = (char)(*v14 + (char)(((int)v13 + (int)v12) / 2));
        v10--;
        v11++;
    }
    return (int)(result2);
}

// Reference entry 11488920; body size 233 bytes.
#line 1 "ENTRY_11488920"
int FUN_11488920(int a1, int a2, int a3) {

    uint v1 = (uint)(((int)*(char *)(a1 + 11) + 7) / 8); // (int)&FUN_11488939
    uint v2 = (uint)(v1 + a2); // (int)&FUN_1148893c
    int v3 = (int)(a2); // (int)&FUN_11488941
    int v4 = (int)(a2); // (int)&FUN_11488941
    int v5 = (int)(a3); // (int)&FUN_11488941
    if (v2 > a2) {
        int v6 = (int)(a3 + 1); // (int)&FUN_11488945
char *v7 = (char *)((char)((char *)v3)); // (int)&FUN_11488946
        *v7 = (char)(*v7 + *(char *)a3);
        v3++;
        v4 = (int)(v3);
        v5 = (int)(v6);
        while (v3 < v2) {
            int v8 = (int)(v6);
            v6 = (int)(v8 + 1);
            v7 = (char *)((char *)v3);
            *v7 = (char)(*v7 + *(char *)v8);
            v3++;
            v4 = (int)(v3);
            v5 = (int)(v6);
        }
    }
    int v9 = (int)(*(int *)(a1 + 4)); // (int)&FUN_1148894d
    uint v10 = (uint)(v9 + a2); // (int)&FUN_11488952
    if (v4 >= v10) {
        return (int)(v9 - v1);
    }
    int v11 = (int)(v4 - v1); // (int)&FUN_1148896d
    int v12 = (int)(v4); // (int)&FUN_1148896d
    int v13 = (int)(v5 - v1); // (int)&FUN_1148896d
    int v14 = (int)(v5); // (int)&FUN_1148896d
    int v15 = (int)((int)*(char *)v11); // (int)&FUN_11488970
    int v16 = (int)((int)*(char *)v14); // (int)&FUN_11488973
    int v17 = (int)((int)*(char *)v13); // (int)&FUN_11488977
    int v18 = (int)(v16 - v17); // (int)&FUN_11488984
    int v19 = (int)(v15 - v17); // (int)&FUN_11488990
    int v20 = (int)(v18 < 0 ? -v18 : v18); // (int)&FUN_114889a3
    int v21 = (int)(v19 + v18); // (int)&FUN_114889ae
    int v22 = (int)(v19 < 0 ? -v19 : v19); // (int)&FUN_114889b1
    int result = (int)(v22 >= v20 ? v15 : v16); // (int)&FUN_114889dc
    int v23 = (int)((v21 < 0 ? -v21 : v21) >= (v22 < v20 ? v22 : v20) ? result : v17); // (int)&FUN_114889e8
char *v24 = (char *)((char)((char *)v12)); // (int)&FUN_114889eb
    *v24 = (char)(*v24 + (char)v23);
    v12++;
    v11++;
    v13++;
    v14++;
    while (v12 < v10) {
        v15 = (int)((int)*(char *)v11);
        v16 = (int)((int)*(char *)v14);
        v17 = (int)((int)*(char *)v13);
        v18 = (int)(v16 - v17);
        v19 = (int)(v15 - v17);
        v20 = (int)(v18 < 0 ? -v18 : v18);
        v21 = (int)(v19 + v18);
        v22 = (int)(v19 < 0 ? -v19 : v19);
        result = (int)(v22 >= v20 ? v15 : v16);
        v23 = (int)((v21 < 0 ? -v21 : v21) >= (v22 < v20 ? v22 : v20) ? result : v17);
        v24 = (char *)((char *)v12);
        *v24 = (char)(*v24 + (char)v23);
        v12++;
        v11++;
        v13++;
        v14++;
    }
    return (int)(result);
}

// Reference entry 11488a50; body size 49 bytes.
#line 1 "ENTRY_11488a50"
int FUN_11488a50(int a1, int a2) {

    uint v1 = (uint)(*(int *)(a1 + 4)); // (int)&FUN_11488a5a
    int result = (int)(((int)*(char *)(a1 + 11) + 7) / 8); // (int)&FUN_11488a64
    if (result >= v1) {
        return (int)(result);
    }
    int result2 = (int)(result); // (int)&FUN_11488a6e
    int v2 = (int)(result + a2); // (int)&FUN_11488a6e
char *v3 = (char *)((char)((char *)v2)); // (int)&FUN_11488a76
    *v3 = (char)(*v3 + *(char *)(a2 - result + result2));
    result2++;
    v2++;
    while (result2 < v1) {
        v3 = (char *)((char *)v2);
        *v3 = (char)(*v3 + *(char *)(a2 - result + result2));
        result2++;
        v2++;
    }
    return (int)(result2);
}

// Reference entry 11489830; body size 135 bytes.
#line 1 "ENTRY_11489830"
int FUN_11489830(int result, int a2) {

    char v1 = (char)(*(char *)(result + 8)); // (int)&FUN_11489834
    if (v1 == 6) {
        int v2 = (int)(*(int *)result); // (int)&FUN_11489840
        if (*(char *)(result + 9) != 8) {
            int v3 = (int)(a2); // (int)&FUN_1148985e
            if (v2 == 0) {
                return (int)(result);
            }
            int v4 = (int)(v2); // (int)&FUN_1148985e
char *v5 = (char *)((char)((char *)(v3 + 6))); // (int)&FUN_11489860
            *v5 = (char)(-1 - *v5);
char *v6 = (char *)((char)((char *)(v3 + 7))); // (int)&FUN_11489866
            *v6 = (char)(-1 - *v6);
            v4--;
            v3 += 8;
            while (v4 != 0) {
                v5 = (char *)((char *)(v3 + 6));
                *v5 = (char)(-1 - *v5);
                v6 = (char *)((char *)(v3 + 7));
                *v6 = (char)(-1 - *v6);
                v4--;
                v3 += 8;
            }
        } else {
            int v7 = (int)(a2); // (int)&FUN_1148984a
            if (v2 == 0) {
                return (int)(result);
            }
            int v8 = (int)(v2); // (int)&FUN_1148984a
char *v9 = (char *)((char)((char *)(v7 + 3))); // (int)&FUN_11489850
            *v9 = (char)(-1 - *v9);
            v8--;
            v7 += 4;
            while (v8 != 0) {
                v9 = (char *)((char *)(v7 + 3));
                *v9 = (char)(-1 - *v9);
                v8--;
                v7 += 4;
            }
        }
        return (int)(result);
    }
    if (v1 != 4) {
        return (int)(result);
    }
    int v10 = (int)(*(int *)result); // (int)&FUN_1148987d
    if (*(char *)(result + 9) == 8) {
        int v11 = (int)(a2); // (int)&FUN_11489885
        if (v10 == 0) {
            return (int)(result);
        }
        int v12 = (int)(v10); // (int)&FUN_11489885
char *v13 = (char *)((char)((char *)(v11 + 1)));
        unsigned char result2 = (unsigned char)(-1 - *v13);
        *v13 = (char)(result2);
        v12--;
        v11 += 2;
        while (v12 != 0) {
            v13 = (char *)((char *)(v11 + 1));
            result2 = (unsigned char)(-1 - *v13);
            *v13 = (char)(result2);
            v12--;
            v11 += 2;
        }
        return (int)(result2);
    }
    int v14 = (int)(a2); // (int)&FUN_114898a5
    if (v10 == 0) {
        return (int)(result);
    }
    int v15 = (int)(v10); // (int)&FUN_114898a5
char *v16 = (char *)((char)((char *)(v14 + 2))); // (int)&FUN_114898a7
    *v16 = (char)(-1 - *v16);
char *v17 = (char *)((char)((char *)(v14 + 3))); // (int)&FUN_114898ad
    *v17 = (char)(-1 - *v17);
    v15--;
    v14 += 4;
    while (v15 != 0) {
        v16 = (char *)((char *)(v14 + 2));
        *v16 = (char)(-1 - *v16);
        v17 = (char *)((char *)(v14 + 3));
        *v17 = (char)(-1 - *v17);
        v15--;
        v14 += 4;
    }
    return (int)(result);
}

// Reference entry 1148a46a; body size 39 bytes.
#line 1 "ENTRY_1148a46a"
int FUN_1148a46a(void) {

    int v1; // (int)((int(*)(void))&FUN_1148a46a)
    *(int*)(v1 - 40) = (int)(0);
    return (int)(0);
}

// Reference entry 114de129; body size 30 bytes.
#line 1 "ENTRY_114de129"
int FUN_114de129(void) {

    thunk_FUN_1148ac28();
    thunk_FUN_1148ac28();
    return (int)(__CxxFrameHandler3());
}

// Reference entry 115197f9; body size 30 bytes.
#line 1 "ENTRY_115197f9"
int FUN_115197f9(void) {

    thunk_FUN_1148ac28();
    thunk_FUN_1148ac28();
    return (int)(__CxxFrameHandler3());
}

// Reference entry 11521d8c; body size 30 bytes.
#line 1 "ENTRY_11521d8c"
int FUN_11521d8c(void) {

    thunk_FUN_1148ac28();
    thunk_FUN_1148ac28();
    return (int)(__CxxFrameHandler3());
}

// Reference entry 1152f112; body size 30 bytes.
#line 1 "ENTRY_1152f112"
int FUN_1152f112(void) {

    thunk_FUN_1148ac28();
    thunk_FUN_1148ac28();
    return (int)(__CxxFrameHandler3());
}

// Reference entry 115551d1; body size 30 bytes.
#line 1 "ENTRY_115551d1"
int FUN_115551d1(void) {

    thunk_FUN_1148ac28();
    thunk_FUN_1148ac28();
    return (int)(__CxxFrameHandler3());
}

// Reference entry 1157a8fb; body size 30 bytes.
#line 1 "ENTRY_1157a8fb"
int FUN_1157a8fb(void) {

    thunk_FUN_1148ac28();
    thunk_FUN_1148ac28();
    return (int)(__CxxFrameHandler3());
}

// Reference entry 115905ab; body size 30 bytes.
#line 1 "ENTRY_115905ab"
int FUN_115905ab(void) {

    thunk_FUN_1148ac28();
    thunk_FUN_1148ac28();
    return (int)(__CxxFrameHandler3());
}

// Reference entry 115a1b61; body size 30 bytes.
#line 1 "ENTRY_115a1b61"
int FUN_115a1b61(void) {

    thunk_FUN_1148ac28();
    thunk_FUN_1148ac28();
    return (int)(__CxxFrameHandler3());
}

// Reference entry 115dda19; body size 30 bytes.
#line 1 "ENTRY_115dda19"
int FUN_115dda19(void) {

    thunk_FUN_1148ac28();
    thunk_FUN_1148ac28();
    return (int)(__CxxFrameHandler3());
}

// Reference entry 116a39f2; body size 30 bytes.
#line 1 "ENTRY_116a39f2"
int FUN_116a39f2(void) {

    thunk_FUN_1148ac28();
    thunk_FUN_1148ac28();
    return (int)(__CxxFrameHandler3());
}

// Reference entry 116f1501; body size 30 bytes.
#line 1 "ENTRY_116f1501"
int FUN_116f1501(void) {

    thunk_FUN_1148ac28();
    thunk_FUN_1148ac28();
    return (int)(__CxxFrameHandler3());
}

// Reference entry 116f20b3; body size 30 bytes.
#line 1 "ENTRY_116f20b3"
int FUN_116f20b3(void) {

    thunk_FUN_1148ac28();
    thunk_FUN_1148ac28();
    return (int)(__CxxFrameHandler3());
}

// Reference entry 116f23a9; body size 30 bytes.
#line 1 "ENTRY_116f23a9"
int FUN_116f23a9(void) {

    thunk_FUN_1148ac28();
    thunk_FUN_1148ac28();
    return (int)(__CxxFrameHandler3());
}

// Reference entry 1171fe81; body size 30 bytes.
#line 1 "ENTRY_1171fe81"
int FUN_1171fe81(void) {

    thunk_FUN_1148ac28();
    thunk_FUN_1148ac28();
    return (int)(__CxxFrameHandler3());
}

// Reference entry 1172befa; body size 30 bytes.
#line 1 "ENTRY_1172befa"
int FUN_1172befa(void) {

    thunk_FUN_1148ac28();
    thunk_FUN_1148ac28();
    return (int)(__CxxFrameHandler3());
}

// Reference entry 11767531; body size 30 bytes.
#line 1 "ENTRY_11767531"
int FUN_11767531(void) {

    thunk_FUN_1148ac28();
    thunk_FUN_1148ac28();
    return (int)(__CxxFrameHandler3());
}

// Reference entry 117994ba; body size 30 bytes.
#line 1 "ENTRY_117994ba"
int FUN_117994ba(void) {

    thunk_FUN_1148ac28();
    thunk_FUN_1148ac28();
    return (int)(__CxxFrameHandler3());
}

// Reference entry 117a6aab; body size 30 bytes.
#line 1 "ENTRY_117a6aab"
int FUN_117a6aab(void) {

    thunk_FUN_1148ac28();
    thunk_FUN_1148ac28();
    return (int)(__CxxFrameHandler3());
}

// Reference entry 117aa881; body size 30 bytes.
#line 1 "ENTRY_117aa881"
int FUN_117aa881(void) {

    thunk_FUN_1148ac28();
    thunk_FUN_1148ac28();
    return (int)(__CxxFrameHandler3());
}

// Reference entry 117adc89; body size 30 bytes.
#line 1 "ENTRY_117adc89"
int FUN_117adc89(void) {

    thunk_FUN_1148ac28();
    thunk_FUN_1148ac28();
    return (int)(__CxxFrameHandler3());
}

// Reference entry 117ce149; body size 30 bytes.
#line 1 "ENTRY_117ce149"
int FUN_117ce149(void) {

    thunk_FUN_1148ac28();
    thunk_FUN_1148ac28();
    return (int)(__CxxFrameHandler3());
}

// Reference entry 117f6180; body size 40 bytes.
#line 1 "ENTRY_117f6180"
int FUN_117f6180(void) {

    thunk_FUN_103f6950((int)&DAT_121a1348, *(int *)(*(int *)&DAT_121a1348 + 4));
    return (int)(thunk_FUN_1148a50e(*(int *)&DAT_121a1348, 24));
}

// Reference entry 117f6eb0; body size 50 bytes.
#line 1 "ENTRY_117f6eb0"
int FUN_117f6eb0(void) {

    uint v1 = (uint)(*(int *)&DAT_1211964c); // (int)((int(*)(void))&FUN_117f6eb0)
    int result; // (int)((int(*)(void))&FUN_117f6eb0)
    if (v1 < 16) {
        return (int)(result);
    }
    int v2 = (int)(*(int *)&DAT_12119638); // (int)&FUN_117f6ebb
    result = (int)(v2);
    if (v1 >= 4095) {
        int v3 = (int)(v2 - 4);
        result = (int)(v3 - *(int *)v3);
    }
    return (int)(result);
}

// Reference entry 117f6ee2; body size 38 bytes.
#line 1 "ENTRY_117f6ee2"
int FUN_117f6ee2(void) {

    int v1; // (int)((int(*)(void))&FUN_117f6ee2)
    int result = (int)(thunk_FUN_1148a50e(v1, v1), 0); // (int)&FUN_117f6ee4
    *(int *)&DAT_12119648 = 0;
    *(int *)&DAT_1211964c = 15;
    *(char *)&DAT_12119638 = 0;
    return (int)(result);
}

// Reference entry 1182b5d0; body size 40 bytes.
#line 1 "ENTRY_1182b5d0"
int FUN_1182b5d0(void) {

    thunk_FUN_10af43b0((int)&DAT_121a4ad8, *(int *)(*(int *)&DAT_121a4ad8 + 4));
    return (int)(thunk_FUN_1148a50e(*(int *)&DAT_121a4ad8, 24));
}

// Reference entry 11831500; body size 53 bytes.
#line 1 "ENTRY_11831500"
int FUN_11831500(void) {

    int v1 = (int)(*(int *)&DAT_121a5238); // (int)((int(*)(void))&FUN_11831500)
    int result; // (int)((int(*)(void))&FUN_11831500)
    if (v1 == 0) {
        return (int)(result);
    }
    result = (int)(v1);
    if (*(int *)&DAT_121a5240 - v1 >= 0x1000) {
        int v2 = (int)(v1 - 4);
        result = (int)(v2 - *(int *)v2);
    }
    return (int)(result);
}

// Reference entry 11831535; body size 41 bytes.
#line 1 "ENTRY_11831535"
int FUN_11831535(void) {

    int v1; // (int)((int(*)(void))&FUN_11831535)
    int result = (int)(thunk_FUN_1148a50e(v1, v1), 0); // (int)&FUN_11831537
    *(int *)&DAT_121a5238 = 0;
    *(int *)&DAT_121a523c = 0;
    *(int *)&DAT_121a5240 = 0;
    return (int)(result);
}

// Reference entry 11835470; body size 40 bytes.
#line 1 "ENTRY_11835470"
int FUN_11835470(void) {

    thunk_FUN_108288d0((int)&DAT_121a56fc, *(int *)(*(int *)&DAT_121a56fc + 4));
    return (int)(thunk_FUN_1148a50e(*(int *)&DAT_121a56fc, 28));
}

// Reference entry 11835560; body size 40 bytes.
#line 1 "ENTRY_11835560"
int FUN_11835560(void) {

    thunk_FUN_10c5e210((int)&DAT_121a56a8, *(int *)(*(int *)&DAT_121a56a8 + 4));
    return (int)(thunk_FUN_1148a50e(*(int *)&DAT_121a56a8, 24));
}

// Reference entry 118355a0; body size 40 bytes.
#line 1 "ENTRY_118355a0"
int FUN_118355a0(void) {

    thunk_FUN_10c5e210(*(int *)(*(int *)&DAT_121a56d0 + 4), (int)&DAT_121a56d0);
    return (int)(thunk_FUN_1148a50e(24, *(int *)&DAT_121a56d0));
}

// Reference entry 11840f7e; body size 36 bytes.
#line 1 "ENTRY_11840f7e"
int FUN_11840f7e(void) {

    int v1; // (int)((int(*)(void))&FUN_11840f7e)
    int v2 = (int)(v1 & -256 | (int)*(char *)-0x74bdedef); // (int)((int(*)(void))&FUN_11840f7e)
    int result = (int)(v2); // (int)&FUN_11840f8a
    bool v3; // (int)((int(*)(void))&FUN_11840f7e)
    if (!v3) {
        result = (int)(v2 - 4 - *(int *)(v1 - 4));
    }
    return (int)(result);
}

// Reference entry 11846210; body size 40 bytes.
#line 1 "ENTRY_11846210"
int FUN_11846210(void) {

    thunk_FUN_10264380((int)&DAT_121a652c, *(int *)(*(int *)&DAT_121a652c + 4));
    return (int)(thunk_FUN_1148a50e(*(int *)&DAT_121a652c, 24));
}

// Reference entry 11846250; body size 40 bytes.
#line 1 "ENTRY_11846250"
int FUN_11846250(void) {

    thunk_FUN_10264380((int)&DAT_121a6524, *(int *)(*(int *)&DAT_121a6524 + 4));
    return (int)(thunk_FUN_1148a50e(*(int *)&DAT_121a6524, 24));
}

// Reference entry 11861ee0; body size 40 bytes.
#line 1 "ENTRY_11861ee0"
int FUN_11861ee0(void) {

    thunk_FUN_11098770((int)&DAT_121a7bb8, *(int *)(*(int *)&DAT_121a7bb8 + 4));
    return (int)(thunk_FUN_1148a50e(*(int *)&DAT_121a7bb8, 24));
}

// Reference entry 11861f20; body size 40 bytes.
#line 1 "ENTRY_11861f20"
int FUN_11861f20(void) {

    thunk_FUN_11098770(*(int *)(*(int *)&DAT_121a7bb0 + 4), (int)&DAT_121a7bb0);
    return (int)(thunk_FUN_1148a50e(24, *(int *)&DAT_121a7bb0));
}

// Reference entry 11861f60; body size 40 bytes.
#line 1 "ENTRY_11861f60"
int FUN_11861f60(void) {

    thunk_FUN_11098770(*(int *)(*(int *)&DAT_121a7bc0 + 4), (int)&DAT_121a7bc0);
    return (int)(thunk_FUN_1148a50e(24, *(int *)&DAT_121a7bc0));
}

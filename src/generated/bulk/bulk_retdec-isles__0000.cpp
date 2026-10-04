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
extern int FUN_1000621c(...);
extern int FUN_10008a43(...);
extern int FUN_10015bf3(...);
extern int FUN_1001c9c2(...);
extern int FUN_1001e86b(...);
extern int FUN_1001e86d(...);
extern int FUN_10021da2(...);
extern int FUN_100246fa(...);
extern int FUN_10025877(...);
extern int FUN_10027b2c(...);
extern int FUN_10028798(...);
extern int FUN_1002a973(...);
extern int FUN_100380b3(...);
extern int FUN_100380b7(...);
extern int FUN_1003b26e(...);
extern int FUN_100409da(...);
extern int FUN_10042c4f(...);
extern int FUN_10044c5b(...);
extern int FUN_100467fe(...);
extern int FUN_10049a94(...);
extern int FUN_1004ac0b(...);
extern int FUN_1005273e(...);
extern int FUN_1005c054(...);
extern int FUN_1005c315(...);
extern int FUN_1006a316(...);
extern int FUN_10076727(...);
extern int FUN_1007672c(...);
extern int FUN_1007c8f5(...);
extern int FUN_1008ca83(...);
extern int FUN_100977a0(...);
extern int FUN_100aacf6(...);
extern int FUN_100aad09(...);
extern int FUN_100aadaf(...);
extern int FUN_100af552(...);
extern int FUN_100bb3d6(...);
extern int FUN_100bb3eb(...);
extern int FUN_100bb478(...);
extern int FUN_100bba62(...);
extern int FUN_100bbaa2(...);
extern int FUN_100c0942(...);
extern int FUN_100cc793(...);
extern int FUN_100cc7a8(...);
extern int FUN_100cc816(...);
extern int FUN_100cce83(...);
extern int FUN_100cce98(...);
extern int FUN_100ccf0a(...);
extern int FUN_100cfd13(...);
extern int FUN_100cfd24(...);
extern int FUN_100cfd61(...);
extern int FUN_100d0142(...);
extern int FUN_100dc362(...);
extern int FUN_100e46f2(...);
extern int FUN_100e4732(...);
extern int FUN_100e4772(...);
extern int FUN_100e5ca2(...);
extern int FUN_100e5fda(...);
extern int FUN_101a6a4f(...);
extern int FUN_101aa514(...);
extern int FUN_101ce55a(...);
extern int FUN_101ce57a(...);
extern int FUN_10225b44(...);
template<class... A> int __stdcall FUN_10226a2a(A...);
extern int FUN_10226a4a(...);
extern int FUN_10226b1a(...);
extern int FUN_10226b3a(...);
extern int FUN_10226b7a(...);
extern int FUN_102282f4(...);
extern int FUN_1022f1f4(...);
extern int FUN_10258ce4(...);
extern int FUN_10258d24(...);
extern int FUN_10258d64(...);
extern int FUN_10258de4(...);
template<class... A> int __stdcall FUN_10259410(A...);
extern int FUN_10262ee4(...);
extern int FUN_10262ee6(...);
extern int FUN_10264a4a(...);
extern int FUN_10264b0a(...);
template<class... A> int __stdcall FUN_10267ce0(A...);
extern int FUN_1026e96a(...);
extern int FUN_1026e98a(...);
extern int FUN_102703b0(...);
extern int FUN_1027377a(...);
extern int FUN_102c112c(...);
extern int FUN_102d25fa(...);
extern int FUN_102dc53a(...);
extern int FUN_1030433a(...);
template<class... A> int __stdcall FUN_10330dec(A...);
template<class... A> int __stdcall FUN_10330e5a(A...);
template<class... A> int __stdcall FUN_10330e9a(A...);
template<class... A> int __stdcall FUN_10330eba(A...);
extern int FUN_10330faa(...);
extern int FUN_1033106c(...);
extern int FUN_1033109a(...);
extern int FUN_103527ea(...);
template<class... A> int __stdcall FUN_10356baa(A...);
template<class... A> int __stdcall FUN_10356c7a(A...);
template<class... A> int __stdcall FUN_10356d6a(A...);
extern int FUN_10356eca(...);
extern int FUN_1035974a(...);
template<class... A> int __stdcall FUN_103c3720(A...);
extern int FUN_1040f9b4(...);
extern int FUN_104101ea(...);
extern int FUN_10410b54(...);
extern int FUN_1041e11a(...);
extern int FUN_1041e14a(...);
extern int FUN_1041e16a(...);
extern int FUN_1041e19a(...);
extern int FUN_1041e1ca(...);
extern int FUN_10425f7a(...);
extern int FUN_10425f9a(...);
extern int FUN_10425fba(...);
extern int FUN_10425fda(...);
extern int FUN_1045eefa(...);
extern int FUN_1046c0ea(...);
extern int FUN_1046c10a(...);
extern int FUN_1047924a(...);
extern int FUN_1047926a(...);
extern int FUN_1047928a(...);
extern int FUN_104792aa(...);
extern int FUN_104792ca(...);
extern int FUN_104792ea(...);
template<class... A> int __stdcall FUN_10480f4a(A...);
extern int FUN_1048127a(...);
extern int FUN_104ab710(...);
extern int FUN_104abf89(...);
extern int FUN_104ac1aa(...);
extern int FUN_104ac1ea(...);
extern int FUN_104ac21a(...);
extern int FUN_104ac7c9(...);
extern int FUN_104b507a(...);
extern int FUN_104b515a(...);
extern int FUN_104b517a(...);
extern int FUN_104bd46a(...);
extern int FUN_104c978a(...);
extern int FUN_104d6b8a(...);
extern int FUN_1050da22(...);
extern int FUN_10596cfd(...);
extern int FUN_105b0eba(...);
template<class... A> int __stdcall FUN_105eb4da(A...);
template<class... A> int __stdcall FUN_105eb7ba(A...);
template<class... A> int __stdcall FUN_105eb7dc(A...);
extern int FUN_10648a4a(...);
extern int FUN_10648a6c(...);
extern int FUN_10648a9c(...);
extern int FUN_10692b90(...);
extern int FUN_10699f4a(...);
template<class... A> int __stdcall FUN_1069ccd0(A...);
extern int FUN_106a9b36(...);
extern int FUN_106ad77a(...);
extern int FUN_106ad79a(...);
extern int FUN_106afed6(...);
template<class... A> int __stdcall FUN_106b6549(A...);
extern int FUN_106b6559(...);
extern int FUN_106b656c(...);
extern int FUN_106b6724(...);
extern int FUN_106d1dec(...);
extern int FUN_106d1e1a(...);
extern int FUN_106d1e3a(...);
template<class... A> int __stdcall FUN_1072fe00(A...);
extern int FUN_1083f8fa(...);
extern int FUN_1086ea48(...);
extern int FUN_1086ea5b(...);
extern int FUN_1086ea88(...);
extern int FUN_1086ea9b(...);
extern int FUN_1086eaf0(...);
extern int FUN_1086eb70(...);
extern int FUN_10872c20(...);
extern int FUN_10872cd0(...);
extern int FUN_10876cfc(...);
extern int FUN_10876d1c(...);
extern int FUN_1087e2dc(...);
extern int FUN_1087e2fc(...);
extern int FUN_108c7654(...);
extern int FUN_10ba37da(...);
extern int FUN_10bc5ada(...);
extern int FUN_10c2b19a(...);
extern int FUN_10cacca4(...);
extern int FUN_10caccc2(...);
extern int FUN_10caccc7(...);
extern int FUN_10cbca3a(...);
template<class... A> int __stdcall FUN_10cbcff0(A...);
extern int FUN_10cf1ee0(...);
extern int FUN_10cf2340(...);
extern int FUN_10cf2b7a(...);
extern int FUN_10cf2b9a(...);
extern int FUN_10d0829a(...);
extern int FUN_10d082ba(...);
extern int FUN_10d1ed5a(...);
extern int FUN_10d1ed7a(...);
extern int FUN_10d2544a(...);
extern int FUN_10d2546a(...);
extern int FUN_10d2548a(...);
extern int FUN_10d254aa(...);
extern int FUN_10d254ca(...);
extern int FUN_10d254ea(...);
extern int FUN_10d2550a(...);
extern int FUN_10d2552a(...);
extern int FUN_10d2dc3a(...);
extern int FUN_10d2dc5a(...);
extern int FUN_10d2dc7a(...);
extern int FUN_10d52e6a(...);
extern int FUN_10d52e8a(...);
extern int FUN_10d58d8a(...);
extern int FUN_10d63caa(...);
extern int FUN_10d63cca(...);
extern int FUN_10e45da4(...);
extern int FUN_10e45da6(...);
extern int FUN_10ea7290(...);
extern int FUN_10ea9cda(...);
extern int FUN_10f15b64(...);
extern int FUN_10f16ce8(...);
extern int FUN_10f3a281(...);
extern int FUN_10f3ac92(...);
extern int FUN_10f3aca1(...);
extern int FUN_10f3acb2(...);
extern int FUN_10fe8fb4(...);
extern int FUN_10fe8fe4(...);
extern int FUN_10feb10a(...);
extern int FUN_10feb12a(...);
extern int FUN_10feb14a(...);
extern int FUN_10feb16a(...);
extern int FUN_10febf74(...);
extern int FUN_10febfa4(...);
extern int FUN_11005cc6(...);
extern int FUN_11005cd0(...);
extern int FUN_11068f84(...);
extern int FUN_11068f86(...);
extern int FUN_11069318(...);
extern int FUN_110a5012(...);
extern int FUN_110a5015(...);
extern int FUN_110a501f(...);
extern int FUN_1118c16d(...);
extern int FUN_1118c176(...);
extern int FUN_111ac1a4(...);
extern int FUN_111ac1ad(...);
extern int FUN_111af730(...);
extern int FUN_111af824(...);
extern int FUN_111b3d60(...);
extern int FUN_111b7214(...);
extern int FUN_111b7223(...);
extern int FUN_111b8261(...);
extern int FUN_111b82f8(...);
extern int FUN_111b8321(...);
extern int FUN_111b9994(...);
extern int FUN_111bb3d4(...);
extern int FUN_111bb3de(...);
extern int FUN_111fe0a6(...);
extern int FUN_111fe0aa(...);
extern int FUN_1122c9f2(...);
extern int FUN_11240429(...);
extern int FUN_1128cd84(...);
extern int FUN_112b01db(...);
extern int FUN_112b01dc(...);
extern int FUN_112b0256(...);
extern int FUN_112b8f28(...);
extern int FUN_112c2b50(...);
extern int FUN_112c3294(...);
extern int FUN_112c34a4(...);
extern int FUN_112c8a18(...);
extern int FUN_112cb630(...);
extern int FUN_112d3018(...);
extern int FUN_112de5a1(...);
extern int FUN_112eb754(...);
extern int FUN_112eb774(...);
extern int FUN_112ec1b4(...);
extern int FUN_112ec1d4(...);
extern int FUN_112ed7b4(...);
extern int FUN_112ed7f4(...);
extern int FUN_112fb090(...);
extern int FUN_112fb160(...);
extern int FUN_112fcdeb(...);
extern int FUN_11301fe0(...);
extern int FUN_1130501c(...);
extern int FUN_113054c7(...);
extern int FUN_113054cc(...);
extern int FUN_11305600(...);
extern int FUN_11305cc0(...);
extern int FUN_11308210(...);
extern int FUN_11308e80(...);
extern int FUN_1130a590(...);
extern int FUN_1130ba70(...);
extern int FUN_1130e9d0(...);
extern int FUN_1130ede0(...);
extern int FUN_1130eea0(...);
extern int FUN_11311068(...);
extern int FUN_113115e8(...);
extern int FUN_11316ce0(...);
extern int FUN_113180e0(...);
extern int FUN_11318304(...);
extern int FUN_11318312(...);
extern int FUN_1131df50(...);
extern int FUN_1131e2b0(...);
extern int FUN_1131ea50(...);
extern int FUN_11322c60(...);
extern int FUN_11323590(...);
extern int FUN_11323834(...);
extern int FUN_1132383a(...);
extern int FUN_11326250(...);
extern int FUN_11326324(...);
extern int FUN_1132ad60(...);
extern int FUN_1132fa68(...);
extern int FUN_1132fa6b(...);
extern int FUN_113355a0(...);
extern int FUN_113359f6(...);
extern int FUN_11338784(...);
extern int FUN_1133878b(...);
extern int FUN_1133a6e0(...);
extern int FUN_1133b7e7(...);
extern int FUN_1133b874(...);
extern int FUN_1133b87a(...);
extern int FUN_1133b87d(...);
extern int FUN_1133b881(...);
extern int FUN_1133b8a4(...);
extern int FUN_1133b9b4(...);
extern int FUN_1133b9b8(...);
extern int FUN_1133c7a4(...);
extern int FUN_1133cfe4(...);
extern int FUN_113433c0(...);
extern int FUN_11345ed0(...);
extern int FUN_1135303d(...);
extern int FUN_11354536(...);
extern int FUN_11357874(...);
extern int FUN_1135787c(...);
extern int FUN_11357ba8(...);
extern int FUN_11357bb8(...);
extern int FUN_11357bbb(...);
extern int FUN_11358910(...);
extern int FUN_113592e4(...);
extern int FUN_11359724(...);
extern int FUN_1135a394(...);
extern int FUN_1135a3b4(...);
extern int FUN_1135a6d6(...);
extern int FUN_1135b7d4(...);
extern int FUN_1135c614(...);
extern int FUN_1135c618(...);
extern int FUN_1135c61b(...);
extern int FUN_1135ca00(...);
extern int FUN_1135d5f4(...);
extern int FUN_1135d5fe(...);
extern int FUN_1135e5a4(...);
extern int FUN_1135e5b9(...);
extern int FUN_1135e5bc(...);
extern int FUN_1135e7f0(...);
extern int FUN_1135ea04(...);
extern int FUN_1135ea08(...);
extern int FUN_1135ea0b(...);
extern int FUN_1135ecd0(...);
extern int FUN_1136a9f6(...);
extern int FUN_1136c958(...);
extern int FUN_1136c978(...);
extern int FUN_1136d024(...);
extern int FUN_1136d029(...);
extern int FUN_11371f69(...);
extern int FUN_11372dc4(...);
extern int FUN_1137a288(...);
extern int FUN_1137a292(...);
extern int FUN_1137a2a0(...);
extern int FUN_1137e018(...);
extern int FUN_1137e064(...);
extern int FUN_1137e067(...);
extern int FUN_1137f970(...);
extern int FUN_113805d4(...);
extern int FUN_11380644(...);
extern int FUN_11380a58(...);
extern int FUN_11381bb8(...);
extern int FUN_11383c88(...);
extern int FUN_113855b4(...);
extern int FUN_1139c2a6(...);
extern int FUN_1139d420(...);
extern int FUN_113a0d14(...);
extern int FUN_113a0d1d(...);
extern int FUN_113a0d21(...);
extern int FUN_113a0d24(...);
extern int FUN_113a0f60(...);
extern int FUN_113a34c0(...);
extern int FUN_113a7874(...);
extern int FUN_113aec69(...);
extern int FUN_113b06e0(...);
extern int FUN_113b07a0(...);
extern int FUN_113b1767(...);
extern int FUN_113b57aa(...);
extern int FUN_113b57b2(...);
extern int FUN_113beb64(...);
extern int FUN_113d3484(...);
extern int FUN_113d6794(...);
extern int FUN_113d6799(...);
extern int FUN_113d9124(...);
extern int FUN_113d9128(...);
extern int FUN_113da014(...);
extern int FUN_113dcfa6(...);
extern int FUN_113e03b0(...);
extern int FUN_113e04a3(...);
extern int FUN_113e27c4(...);
extern int FUN_113e27e4(...);
extern int FUN_113e2806(...);
extern int FUN_113e4fa6(...);
extern int FUN_113e771e(...);
extern int FUN_113e7720(...);
extern int FUN_113e7b84(...);
extern int FUN_113e8009(...);
extern int FUN_113e81e1(...);
extern int FUN_113e81eb(...);
extern int FUN_113e81f1(...);
extern int FUN_113e81f3(...);
extern int FUN_113e8e69(...);
extern int FUN_113ed526(...);
extern int FUN_113efbcb(...);
extern int FUN_113f1696(...);
extern int FUN_113f1e6c(...);
extern int FUN_113f1ea8(...);
extern int FUN_113f1eaa(...);
extern int FUN_113f2974(...);
extern int FUN_113f6a1c(...);
extern int FUN_113f6a58(...);
extern int FUN_113f6a5a(...);
extern int FUN_113f8e56(...);
extern int FUN_11412634(...);
extern int FUN_11413166(...);
extern int FUN_114136a6(...);
extern int FUN_11418fb6(...);
extern int FUN_1142e003(...);
extern int FUN_11430564(...);
extern int FUN_11435166(...);
extern int FUN_11437934(...);
extern int FUN_117e8ad0(...);
extern int FUN_117f1880(...);
extern int FUN_1180baa0(...);
extern int FUN_1180c230(...);
extern int FUN_1180c270(...);
extern int FUN_11817a90(...);
extern int FUN_1182fa20(...);
extern int FUN_118308b0(...);
extern int FUN_11834bf0(...);
extern int FUN_11835520(...);
extern int FUN_1184ebd0(...);
extern int FUN_11861ee0(...);
extern int FUN_11861f20(...);
extern int FUN_11861f60(...);
extern int FUN_118624f0(...);
extern int FUN_11862570(...);
extern int _atexit(...);
extern int function_10337660(...);
extern int function_10f3b215(...);
extern int llvm_bswap_i32(...);
extern int operator_new(...);
extern int thunk_FUN_101a2c70(...);
extern int thunk_FUN_101ba530(...);
extern int thunk_FUN_101dca10(...);
extern int thunk_FUN_101f1c60(...);
extern int thunk_FUN_1023d430(...);
extern int thunk_FUN_10270ef0(...);
extern int thunk_FUN_10279020(...);
extern int thunk_FUN_102bc4e0(...);
extern int thunk_FUN_102d65b0(...);
extern int thunk_FUN_1034e600(...);
extern int thunk_FUN_103860f0(...);
extern int thunk_FUN_1038c170(...);
extern int thunk_FUN_1038c9c0(...);
extern int thunk_FUN_1047ce60(...);
extern int thunk_FUN_1047d6a0(...);
extern int thunk_FUN_104ae600(...);
extern int thunk_FUN_105ffb30(...);
extern int thunk_FUN_1061c5e0(...);
extern int thunk_FUN_106d5f20(...);
template<class... A> int __stdcall thunk_FUN_106d62c0(A...);
extern int thunk_FUN_106d64c0(...);
template<class... A> int __stdcall thunk_FUN_10b22ff0(A...);
extern int thunk_FUN_10bc7c10(...);
extern int thunk_FUN_10bc7f80(...);
template<class... A> int __stdcall thunk_FUN_10cf3780(A...);
extern int thunk_FUN_10cf4ae0(...);
extern int thunk_FUN_10d2ae70(...);
extern int thunk_FUN_10d2bea0(...);
extern int thunk_FUN_10d2c0b0(...);
extern int thunk_FUN_10d2c370(...);
extern int thunk_FUN_10d2c580(...);
extern int thunk_FUN_10d2d1b0(...);
extern int thunk_FUN_10d67ee0(...);
extern int thunk_FUN_10d9e6c0(...);
extern int thunk_FUN_10d9fde0(...);
template<class... A> int __stdcall thunk_FUN_10e458b0(A...);
extern int thunk_FUN_10eae090(...);
extern int thunk_FUN_10ec0860(...);
template<class... A> int __stdcall thunk_FUN_10ecb410(A...);
template<class... A> int __stdcall thunk_FUN_10ecb570(A...);
template<class... A> int __stdcall thunk_FUN_10ecdc30(A...);
extern int thunk_FUN_10f19850(...);
extern int thunk_FUN_10ff3290(...);
extern int thunk_FUN_10ff3f10(...);
extern int thunk_FUN_10ff4670(...);
extern int thunk_FUN_11068580(...);
extern int thunk_FUN_110688f0(...);
extern int thunk_FUN_110828b0(...);
template<class... A> int __stdcall thunk_FUN_11093530(A...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_110c20d0(...);
extern int thunk_FUN_110c2c60(...);
extern int thunk_FUN_110fed50(...);
extern int thunk_FUN_111134e0(...);
extern int thunk_FUN_11113c60(...);
template<class... A> int __stdcall thunk_FUN_1118b510(A...);
extern int thunk_FUN_11248b40(...);
extern int thunk_FUN_112658f0(...);
extern int thunk_FUN_1128f910(...);
extern int thunk_FUN_112a9cf0(...);
extern int thunk_FUN_112b0da0(...);
extern int thunk_FUN_11395910(...);
extern int thunk_FUN_1139b8e0(...);
extern int thunk_FUN_113bed30(...);
extern int thunk_FUN_113db890(...);
extern int thunk_FUN_113e5e30(...);
extern int thunk_FUN_113e6480(...);
extern int thunk_FUN_113e9f00(...);
extern int thunk_FUN_11409600(...);
extern int thunk_FUN_1140add0(...);
extern int thunk_FUN_1140b1f0(...);
extern int thunk_FUN_1140ce80(...);
extern int thunk_FUN_1140d570(...);
extern int thunk_FUN_114236b0(...);
extern int thunk_FUN_11436230(...);
extern int thunk_FUN_1144bdf0(...);
extern int thunk_FUN_1144c420(...);
extern int thunk_FUN_1144c450(...);
extern int thunk_FUN_1144c680(...);
extern int thunk_FUN_1144c8b0(...);
extern int thunk_FUN_1144c980(...);
extern int thunk_FUN_1144c9c0(...);
extern int thunk_FUN_1144cf70(...);
extern int thunk_FUN_1144cfe0(...);
extern int thunk_FUN_1144d2d0(...);
extern int thunk_FUN_1144d590(...);
extern int thunk_FUN_1144d660(...);
extern int thunk_FUN_1144d6a0(...);
extern int thunk_FUN_1144d770(...);
extern int thunk_FUN_1144d850(...);
extern int thunk_FUN_1144dbb0(...);
extern int thunk_FUN_1144e1b0(...);
extern int thunk_FUN_1144e4f0(...);
extern int thunk_FUN_1144e6d0(...);
extern int thunk_FUN_1144e940(...);
extern int thunk_FUN_1144e990(...);
extern int thunk_FUN_1144ea00(...);
extern int thunk_FUN_1144f2e0(...);
extern int thunk_FUN_1144f650(...);
extern int thunk_FUN_1144fe20(...);
extern int thunk_FUN_1144ff70(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int DAT_1186d2ee;
extern int DAT_1187aa88;
extern int DAT_1187ae7c;
extern int DAT_11882ff0;
extern int DAT_11889d24;
extern int DAT_11896094;
extern int DAT_118b758c;
extern int DAT_119f7640;
extern int DAT_119f77dc;
extern int DAT_119f8098;
extern int DAT_119fa4f0;
extern int DAT_119fac60;
extern int DAT_119fb400;
extern int DAT_119fbfb0;
extern int DAT_119fc028;
extern int DAT_119fc064;
extern int DAT_119fe740;
extern int DAT_11a02d00;
extern int DAT_11bfc458;
extern int DAT_11bfec68;
extern int DAT_12120380;
extern int DAT_12120428;
extern int DAT_12121e84;
extern int DAT_12121ec4;
extern int DAT_12121f74;
extern int DAT_12121f78;
extern int DAT_121a0718;
extern int DAT_121a071c;
extern int DAT_121a0f38;
extern int DAT_121a2684;
extern int DAT_121a2688;
extern int DAT_121a2794;
extern int DAT_121a279c;
extern int DAT_121a3524;
extern int DAT_121a5034;
extern int DAT_121a5038;
extern int DAT_121a50e4;
extern int DAT_121a50e8;
extern int DAT_121a55ac;
extern int DAT_121a55b0;
extern int DAT_121a56e4;
extern int DAT_121a6bac;
extern int DAT_121a7bb0;
extern int DAT_121a7bb8;
extern int DAT_121a7bc0;
extern int DAT_122e8a18;
extern int DAT_122e8ab0;
extern int DAT_122f1254;
extern int DAT_122f33d0;
extern int DAT_122f33d4;
extern int DAT_122f6d28;
extern int DAT_122f6d50;
extern int DAT_122f6d78;
extern int DAT_122f6d7c;
extern int DAT_122f6eac;
extern int DAT_122f6ff0;
extern int DAT_122fa560;
extern int g_lSCObjCount;
extern undefined1 LAB_1007d7e0[];
extern int *PTR_DAT_11c00958;
extern int *PTR_s_HELLO_1211eeec;
extern int *PTR_s_delete_119f7d80;
extern char s_ABORTING_119ea860[];
extern char s_all_VALUES_must_have_the_same_nu_11a01abc[];
extern char s_false_11889d1c[];
extern char s_museHHName_118906a8[];
extern char s_track_11880560[];
int FUN_10006601(void);
template<class... A> int FUN_10006601(A...);
int FUN_10007819(void);
template<class... A> int FUN_10007819(A...);
int FUN_10007afc(void);
template<class... A> int FUN_10007afc(A...);
int FUN_10008a41(void);
template<class... A> int FUN_10008a41(A...);
int FUN_1000ba26(void);
template<class... A> int FUN_1000ba26(A...);
int FUN_1000cb4d(void);
template<class... A> int FUN_1000cb4d(A...);
int FUN_1000e8a2(void);
template<class... A> int FUN_1000e8a2(A...);
int FUN_100109c1(void);
template<class... A> int FUN_100109c1(A...);
int FUN_10010c41(void);
template<class... A> int FUN_10010c41(A...);
int FUN_10015bf1(void);
template<class... A> int FUN_10015bf1(A...);
int FUN_10016ff2(void);
template<class... A> int FUN_10016ff2(A...);
int FUN_100199e1(void);
template<class... A> int FUN_100199e1(A...);
int FUN_1001b7af(void);
template<class... A> int FUN_1001b7af(A...);
int FUN_1001c178(void);
template<class... A> int FUN_1001c178(A...);
int FUN_1001c8c6(void);
template<class... A> int FUN_1001c8c6(A...);
int FUN_1001cc36(void);
template<class... A> int FUN_1001cc36(A...);
int FUN_1001dc8a(void);
template<class... A> int FUN_1001dc8a(A...);
int FUN_1001e5e0(void);
template<class... A> int FUN_1001e5e0(A...);
int FUN_1001e86a(void);
template<class... A> int FUN_1001e86a(A...);
int FUN_10020c96(void);
template<class... A> int FUN_10020c96(A...);
int FUN_10021d9f(void);
template<class... A> int FUN_10021d9f(A...);
int FUN_10023135(void);
template<class... A> int FUN_10023135(A...);
int FUN_100237a1(void);
template<class... A> int FUN_100237a1(A...);
int FUN_100246f1(void);
template<class... A> int FUN_100246f1(A...);
int FUN_10025871(void);
template<class... A> int FUN_10025871(A...);
int FUN_10025f51(void);
template<class... A> int FUN_10025f51(A...);
int FUN_10026fe1(void);
template<class... A> int FUN_10026fe1(A...);
int FUN_1002772b(void);
template<class... A> int FUN_1002772b(A...);
int FUN_10027b21(void);
template<class... A> int FUN_10027b21(A...);
int FUN_10027c1c(void);
template<class... A> int FUN_10027c1c(A...);
int FUN_10028793(void);
template<class... A> int FUN_10028793(A...);
int FUN_1002ba74(void);
template<class... A> int FUN_1002ba74(A...);
int FUN_1002c132(void);
template<class... A> int FUN_1002c132(A...);
int FUN_1002f69c(void);
template<class... A> int FUN_1002f69c(A...);
int FUN_1002f871(void);
template<class... A> int FUN_1002f871(A...);
int FUN_10032f21(void);
template<class... A> int FUN_10032f21(A...);
int FUN_1003402f(void);
template<class... A> int FUN_1003402f(A...);
int FUN_1003455c(void);
template<class... A> int FUN_1003455c(A...);
int FUN_10036d8e(void);
template<class... A> int FUN_10036d8e(A...);
int FUN_100380b1(void);
template<class... A> int FUN_100380b1(A...);
int FUN_1003c431(void);
template<class... A> int FUN_1003c431(A...);
int FUN_1003e5e9(void);
template<class... A> int FUN_1003e5e9(A...);
int FUN_1003e6e1(void);
template<class... A> int FUN_1003e6e1(A...);
int FUN_1003f92f(void);
template<class... A> int FUN_1003f92f(A...);
int FUN_10042634(void);
template<class... A> int FUN_10042634(A...);
int FUN_10042c4d(void);
template<class... A> int FUN_10042c4d(A...);
int FUN_10046063(void);
template<class... A> int FUN_10046063(A...);
int FUN_1004ac08(void);
template<class... A> int FUN_1004ac08(A...);
int FUN_1004bbb7(void);
template<class... A> int FUN_1004bbb7(A...);
int FUN_1004c85f(void);
template<class... A> int FUN_1004c85f(A...);
int FUN_10050937(void);
template<class... A> int FUN_10050937(A...);
int FUN_10051791(void);
template<class... A> int FUN_10051791(A...);
int FUN_10053926(void);
template<class... A> int FUN_10053926(A...);
int FUN_10054f31(void);
template<class... A> int FUN_10054f31(A...);
int FUN_100573e0(void);
template<class... A> int FUN_100573e0(A...);
int FUN_1005c321(void);
template<class... A> int FUN_1005c321(A...);
int FUN_1005d591(void);
template<class... A> int FUN_1005d591(A...);
int FUN_10061e61(void);
template<class... A> int FUN_10061e61(A...);
int FUN_1006244d(void);
template<class... A> int FUN_1006244d(A...);
int FUN_10064897(void);
template<class... A> int FUN_10064897(A...);
int FUN_10066dc1(void);
template<class... A> int FUN_10066dc1(A...);
int FUN_10066e30(void);
template<class... A> int FUN_10066e30(A...);
int FUN_10067811(void);
template<class... A> int FUN_10067811(A...);
int FUN_10070584(void);
template<class... A> int FUN_10070584(A...);
int FUN_100757aa(void);
template<class... A> int FUN_100757aa(A...);
int FUN_10076721(void);
template<class... A> int FUN_10076721(A...);
int FUN_1007aa20(void);
template<class... A> int FUN_1007aa20(A...);
int FUN_1007ace1(void);
template<class... A> int FUN_1007ace1(A...);
int FUN_1007c8f1(void);
template<class... A> int FUN_1007c8f1(A...);
int FUN_1007ce8d(void);
template<class... A> int FUN_1007ce8d(A...);
int FUN_1007f75a(void);
template<class... A> int FUN_1007f75a(A...);
int FUN_10080181(void);
template<class... A> int FUN_10080181(A...);
int FUN_10086031(void);
template<class... A> int FUN_10086031(A...);
int FUN_1008a861(void);
template<class... A> int FUN_1008a861(A...);
int FUN_1008a8df(void);
template<class... A> int FUN_1008a8df(A...);
int FUN_10091202(void);
template<class... A> int FUN_10091202(A...);
int FUN_1009779d(void);
template<class... A> int FUN_1009779d(A...);
int FUN_10098520(void);
template<class... A> int FUN_10098520(A...);
int FUN_10098c00(void);
template<class... A> int FUN_10098c00(A...);
int FUN_1009a023(void);
template<class... A> int FUN_1009a023(A...);
int FUN_1009a780(void);
template<class... A> int FUN_1009a780(A...);
int FUN_100aacf0(void);
template<class... A> int FUN_100aacf0(A...);
int FUN_100af550(void);
template<class... A> int FUN_100af550(A...);
int FUN_100bb3d0(void);
template<class... A> int FUN_100bb3d0(A...);
int FUN_100bba60(void);
template<class... A> int FUN_100bba60(A...);
int FUN_100bbaa0(void);
template<class... A> int FUN_100bbaa0(A...);
int FUN_100c0940(void);
template<class... A> int FUN_100c0940(A...);
int FUN_100cc790(void);
template<class... A> int FUN_100cc790(A...);
int FUN_100cce80(void);
template<class... A> int FUN_100cce80(A...);
int FUN_100cfd10(void);
template<class... A> int FUN_100cfd10(A...);
int FUN_100d0140(void);
template<class... A> int FUN_100d0140(A...);
int FUN_100dc360(void);
template<class... A> int FUN_100dc360(A...);
int FUN_100e46f0(void);
template<class... A> int FUN_100e46f0(A...);
int FUN_100e4730(void);
template<class... A> int FUN_100e4730(A...);
int FUN_100e4770(void);
template<class... A> int FUN_100e4770(A...);
int FUN_100e5ca0(void);
template<class... A> int FUN_100e5ca0(A...);
int FUN_100e5fd0(void);
template<class... A> int FUN_100e5fd0(A...);
int FUN_101a6a40(int a1);
template<class... A> int FUN_101a6a40(A...);
int FUN_101aa510(int a1, int a2);
template<class... A> int FUN_101aa510(A...);
int __stdcall FUN_101cc480(int a1);
template<class... A> int FUN_101cc480(A...);
int __stdcall FUN_101cc4a0(int a1);
template<class... A> int FUN_101cc4a0(A...);
int __stdcall FUN_101cc620(int a1);
template<class... A> int FUN_101cc620(A...);
int __stdcall FUN_101cc660(int a1);
template<class... A> int FUN_101cc660(A...);
int FUN_101cd8c0(int a1);
template<class... A> int FUN_101cd8c0(A...);
int __stdcall FUN_101ce550(int a1);
template<class... A> int FUN_101ce550(A...);
int __stdcall FUN_101ce570(int a1);
template<class... A> int FUN_101ce570(A...);
int FUN_101cf020(int a1);
template<class... A> int FUN_101cf020(A...);
int __stdcall FUN_101cf4c0(int a1);
template<class... A> int FUN_101cf4c0(A...);
int __stdcall FUN_101cf510(int a1);
template<class... A> int FUN_101cf510(A...);
int __stdcall FUN_101d49c0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101d49c0(A...);
int __stdcall FUN_10223fc0(int a1);
template<class... A> int FUN_10223fc0(A...);
int __stdcall FUN_10223fe0(int a1);
template<class... A> int FUN_10223fe0(A...);
int __stdcall FUN_10224000(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10224000(A...);
int __stdcall FUN_102240b0(int a1);
template<class... A> int FUN_102240b0(A...);
int __stdcall FUN_102240d0(int a1);
template<class... A> int FUN_102240d0(A...);
int __stdcall FUN_102240f0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_102240f0(A...);
int __stdcall FUN_10224100(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10224100(A...);
int __stdcall FUN_10224110(int a1);
template<class... A> int FUN_10224110(A...);
int __stdcall FUN_10224750(int a1);
template<class... A> int FUN_10224750(A...);
int __stdcall FUN_10224790(int a1);
template<class... A> int FUN_10224790(A...);
int __stdcall FUN_102247d0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_102247d0(A...);
int __stdcall FUN_102249a0(int a1);
template<class... A> int FUN_102249a0(A...);
int __stdcall FUN_102249e0(int a1);
template<class... A> int FUN_102249e0(A...);
int __stdcall FUN_10224a20(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10224a20(A...);
int __stdcall FUN_10224a50(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10224a50(A...);
int __stdcall FUN_10224a80(int a1);
template<class... A> int FUN_10224a80(A...);
int FUN_10225b40(int a1, int a2);
template<class... A> int FUN_10225b40(A...);
int FUN_10225bd0(int a1, int a2);
template<class... A> int FUN_10225bd0(A...);
int FUN_10225bf0(int a1, int a2);
template<class... A> int FUN_10225bf0(A...);
int FUN_10225c30(int a1);
template<class... A> int FUN_10225c30(A...);
int __stdcall FUN_10226a20(int a1);
template<class... A> int FUN_10226a20(A...);
int __stdcall FUN_10226a40(int a1);
template<class... A> int FUN_10226a40(A...);
int __stdcall FUN_10226a60(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10226a60(A...);
int __stdcall FUN_10226b10(int a1);
template<class... A> int FUN_10226b10(A...);
int __stdcall FUN_10226b30(int a1);
template<class... A> int FUN_10226b30(A...);
int __stdcall FUN_10226b50(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10226b50(A...);
int __stdcall FUN_10226b60(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10226b60(A...);
int __stdcall FUN_10226b70(int a1);
template<class... A> int FUN_10226b70(A...);
int FUN_102282f0(int a1, int a2);
template<class... A> int FUN_102282f0(A...);
int FUN_10228380(int a1, int a2);
template<class... A> int FUN_10228380(A...);
int FUN_102283a0(int a1, int a2);
template<class... A> int FUN_102283a0(A...);
int FUN_102283e0(int a1);
template<class... A> int FUN_102283e0(A...);
int __stdcall FUN_10228620(int a1);
template<class... A> int FUN_10228620(A...);
int __stdcall FUN_10228630(int a1);
template<class... A> int FUN_10228630(A...);
int __stdcall FUN_102287e0(int a1);
template<class... A> int FUN_102287e0(A...);
int __stdcall FUN_102287f0(int a1);
template<class... A> int FUN_102287f0(A...);
int __stdcall FUN_10228800(int a1);
template<class... A> int FUN_10228800(A...);
int FUN_1022f1f0(void);
template<class... A> int FUN_1022f1f0(A...);
int __stdcall FUN_1022fc00(int a1);
template<class... A> int FUN_1022fc00(A...);
int __stdcall FUN_1022fc20(int a1);
template<class... A> int FUN_1022fc20(A...);
int __stdcall FUN_1022fc60(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1022fc60(A...);
int FUN_10254a60(int a1, int a2, int a3);
template<class... A> int FUN_10254a60(A...);
int FUN_10256620(int a1, int a2, int a3);
template<class... A> int FUN_10256620(A...);
int FUN_10258ce0(void);
template<class... A> int FUN_10258ce0(A...);
int FUN_10258d20(void);
template<class... A> int FUN_10258d20(A...);
int FUN_10258d60(void);
template<class... A> int FUN_10258d60(A...);
int FUN_10258de0(void);
template<class... A> int FUN_10258de0(A...);
int FUN_10262ee0(int a1, int a2);
template<class... A> int FUN_10262ee0(A...);
int __stdcall FUN_102633f0(int a1);
template<class... A> int FUN_102633f0(A...);
int __stdcall FUN_10263460(int a1);
template<class... A> int FUN_10263460(A...);
int __stdcall FUN_10263480(int a1);
template<class... A> int FUN_10263480(A...);
int __stdcall FUN_102635f0(int a1);
template<class... A> int FUN_102635f0(A...);
int FUN_10263a00(int a1, int a2);
template<class... A> int FUN_10263a00(A...);
int __stdcall FUN_10264a40(int a1);
template<class... A> int FUN_10264a40(A...);
int __stdcall FUN_10264b00(int a1);
template<class... A> int FUN_10264b00(A...);
int FUN_10265610(int a1, int a2);
template<class... A> int FUN_10265610(A...);
int __stdcall FUN_10265680(int a1);
template<class... A> int FUN_10265680(A...);
int __stdcall FUN_10265750(int a1);
template<class... A> int FUN_10265750(A...);
int __stdcall FUN_1026e290(int a1);
template<class... A> int FUN_1026e290(A...);
int __stdcall FUN_1026e2b0(int a1);
template<class... A> int FUN_1026e2b0(A...);
int __stdcall FUN_1026e300(int a1);
template<class... A> int FUN_1026e300(A...);
int __stdcall FUN_1026e340(int a1);
template<class... A> int FUN_1026e340(A...);
int FUN_1026e520(int a1, int a2);
template<class... A> int FUN_1026e520(A...);
int FUN_1026e540(int a1);
template<class... A> int FUN_1026e540(A...);
int __stdcall FUN_1026e960(int a1);
template<class... A> int FUN_1026e960(A...);
int __stdcall FUN_1026e980(int a1);
template<class... A> int FUN_1026e980(A...);
int FUN_1026ed80(int a1, int a2);
template<class... A> int FUN_1026ed80(A...);
int FUN_1026eda0(int a1);
template<class... A> int FUN_1026eda0(A...);
int __stdcall FUN_1026edd0(int a1);
template<class... A> int FUN_1026edd0(A...);
int __stdcall FUN_1026ede0(int a1);
template<class... A> int FUN_1026ede0(A...);
int __stdcall FUN_10270640(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10270640(A...);
int __stdcall FUN_10271d70(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10271d70(A...);
int __stdcall FUN_10271d80(int a1);
template<class... A> int FUN_10271d80(A...);
int __stdcall FUN_10271f70(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10271f70(A...);
int __stdcall FUN_10271fa0(int a1);
template<class... A> int FUN_10271fa0(A...);
int FUN_10272b90(int a1);
template<class... A> int FUN_10272b90(A...);
int __stdcall FUN_10273760(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10273760(A...);
int __stdcall FUN_10273770(int a1);
template<class... A> int FUN_10273770(A...);
int FUN_102744f0(int a1);
template<class... A> int FUN_102744f0(A...);
int __stdcall FUN_10274710(int a1);
template<class... A> int FUN_10274710(A...);
int __stdcall FUN_10276440(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10276440(A...);
int FUN_1027c090(void);
template<class... A> int FUN_1027c090(A...);
int FUN_102835ea(void);
template<class... A> int FUN_102835ea(A...);
int __stdcall FUN_102c0c70(int a1);
template<class... A> int FUN_102c0c70(A...);
int __stdcall FUN_102c0c90(int a1);
template<class... A> int FUN_102c0c90(A...);
int __stdcall FUN_102c1120(int a1);
template<class... A> int FUN_102c1120(A...);
int __stdcall FUN_102c1210(int a1, int a2);
template<class... A> int FUN_102c1210(A...);
int __stdcall FUN_102d1f70(int a1);
template<class... A> int FUN_102d1f70(A...);
int __stdcall FUN_102d2030(int a1);
template<class... A> int FUN_102d2030(A...);
int __stdcall FUN_102d25f0(int a1);
template<class... A> int FUN_102d25f0(A...);
int __stdcall FUN_102d2ba0(int a1);
template<class... A> int FUN_102d2ba0(A...);
int __stdcall FUN_102dc000(int a1);
template<class... A> int FUN_102dc000(A...);
int __stdcall FUN_102dc020(int a1);
template<class... A> int FUN_102dc020(A...);
int FUN_102dc4b0(int a1);
template<class... A> int FUN_102dc4b0(A...);
int __stdcall FUN_102dc530(int a1);
template<class... A> int FUN_102dc530(A...);
int FUN_102dc5d0(int a1);
template<class... A> int FUN_102dc5d0(A...);
int __stdcall FUN_102dc640(int a1);
template<class... A> int FUN_102dc640(A...);
int __stdcall FUN_102dd220(int a1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_102dd220(A...);
int FUN_102f4800(void);
template<class... A> int FUN_102f4800(A...);
int FUN_102f9b2e(void);
template<class... A> int FUN_102f9b2e(A...);
int FUN_102fe15f(void);
template<class... A> int FUN_102fe15f(A...);
int __stdcall FUN_10303150(int a1);
template<class... A> int FUN_10303150(A...);
int __stdcall FUN_10303410(int a1);
template<class... A> int FUN_10303410(A...);
int __stdcall FUN_10304330(int a1);
template<class... A> int FUN_10304330(A...);
int __stdcall FUN_10304cb0(int a1);
template<class... A> int FUN_10304cb0(A...);
int FUN_103240b0(int a1);
template<class... A> int FUN_103240b0(A...);
int __stdcall FUN_1032ca20(int a1);
template<class... A> int FUN_1032ca20(A...);
int __stdcall FUN_1032ca40(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1032ca40(A...);
int __stdcall FUN_1032ca70(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1032ca70(A...);
int __stdcall FUN_1032ca80(int a1);
template<class... A> int FUN_1032ca80(A...);
int __stdcall FUN_1032cac0(int a1);
template<class... A> int FUN_1032cac0(A...);
int __stdcall FUN_1032cae0(int a1);
template<class... A> int FUN_1032cae0(A...);
int __stdcall FUN_1032cbb0(int a1);
template<class... A> int FUN_1032cbb0(A...);
int __stdcall FUN_1032cc10(int a1);
template<class... A> int FUN_1032cc10(A...);
int __stdcall FUN_1032cc30(int a1);
template<class... A> int FUN_1032cc30(A...);
int __stdcall FUN_1032d6b0(int a1);
template<class... A> int FUN_1032d6b0(A...);
int __stdcall FUN_1032d700(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1032d700(A...);
int __stdcall FUN_1032d780(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1032d780(A...);
int __stdcall FUN_1032d7b0(int a1);
template<class... A> int FUN_1032d7b0(A...);
int __stdcall FUN_1032d840(int a1);
template<class... A> int FUN_1032d840(A...);
int __stdcall FUN_1032d880(int a1);
template<class... A> int FUN_1032d880(A...);
int __stdcall FUN_1032da90(int a1);
template<class... A> int FUN_1032da90(A...);
int __stdcall FUN_1032dbd0(int a1);
template<class... A> int FUN_1032dbd0(A...);
int __stdcall FUN_1032dc20(int a1);
template<class... A> int FUN_1032dc20(A...);
int FUN_1032e510(int result, int a2);
template<class... A> int FUN_1032e510(A...);
int FUN_1032e560(int result, int a2);
template<class... A> int FUN_1032e560(A...);
int FUN_1032e590(int result, int a2);
template<class... A> int FUN_1032e590(A...);
int FUN_1032e5b0(int a1);
template<class... A> int FUN_1032e5b0(A...);
int FUN_1032e5c0(int result, int a2);
template<class... A> int FUN_1032e5c0(A...);
int FUN_1032e6a0(int result, int a2);
template<class... A> int FUN_1032e6a0(A...);
int FUN_1032e6c0(int result, int a2);
template<class... A> int FUN_1032e6c0(A...);
int FUN_1032e710(int result, int a2);
template<class... A> int FUN_1032e710(A...);
int FUN_1032e730(int result, int a2);
template<class... A> int FUN_1032e730(A...);
int FUN_1032e780(int result, int a2);
template<class... A> int FUN_1032e780(A...);
int FUN_1032e7a0(int result, int a2);
template<class... A> int FUN_1032e7a0(A...);
int FUN_1032e7c0(int result, int a2);
template<class... A> int FUN_1032e7c0(A...);
int FUN_1032e7e0(int result, int a2);
template<class... A> int FUN_1032e7e0(A...);
int __stdcall FUN_10330de0(int a1);
template<class... A> int FUN_10330de0(A...);
int __stdcall FUN_10330e10(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10330e10(A...);
int __stdcall FUN_10330e40(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10330e40(A...);
int __stdcall FUN_10330e50(int a1);
template<class... A> int FUN_10330e50(A...);
int __stdcall FUN_10330e90(int a1);
template<class... A> int FUN_10330e90(A...);
int __stdcall FUN_10330eb0(int a1);
template<class... A> int FUN_10330eb0(A...);
int __stdcall FUN_10330fa0(int a1);
template<class... A> int FUN_10330fa0(A...);
int __stdcall FUN_10331060(int a1);
template<class... A> int FUN_10331060(A...);
int __stdcall FUN_10331090(int a1);
template<class... A> int FUN_10331090(A...);
int FUN_10332bb0(int result, int a2);
template<class... A> int FUN_10332bb0(A...);
int FUN_10332c00(int result, int a2);
template<class... A> int FUN_10332c00(A...);
int FUN_10332c30(int result, int a2);
template<class... A> int FUN_10332c30(A...);
int FUN_10332c50(int a1);
template<class... A> int FUN_10332c50(A...);
int FUN_10332c60(int result, int a2);
template<class... A> int FUN_10332c60(A...);
int FUN_10332d40(int result, int a2);
template<class... A> int FUN_10332d40(A...);
int FUN_10332d60(int result, int a2);
template<class... A> int FUN_10332d60(A...);
int FUN_10332db0(int result, int a2);
template<class... A> int FUN_10332db0(A...);
int FUN_10332dd0(int result, int a2);
template<class... A> int FUN_10332dd0(A...);
int FUN_10332e20(int result, int a2);
template<class... A> int FUN_10332e20(A...);
int FUN_10332e40(int result, int a2);
template<class... A> int FUN_10332e40(A...);
int FUN_10332e60(int result, int a2);
template<class... A> int FUN_10332e60(A...);
int FUN_10332e80(int result, int a2);
template<class... A> int FUN_10332e80(A...);
int __stdcall FUN_10333440(int a1, int a2);
template<class... A> int FUN_10333440(A...);
int __stdcall FUN_10333490(int a1);
template<class... A> int FUN_10333490(A...);
int __stdcall FUN_103334d0(int a1);
template<class... A> int FUN_103334d0(A...);
int __stdcall FUN_103334e0(int a1);
template<class... A> int FUN_103334e0(A...);
int __stdcall FUN_10333690(int a1);
template<class... A> int FUN_10333690(A...);
int __stdcall FUN_10333730(int a1, int a2);
template<class... A> int FUN_10333730(A...);
int __stdcall FUN_10333750(int a1);
template<class... A> int FUN_10333750(A...);
int __stdcall FUN_10337aa0(int result);
template<class... A> int FUN_10337aa0(A...);
int __stdcall FUN_10337ae0(int result);
template<class... A> int FUN_10337ae0(A...);
int __stdcall FUN_10337b00(int result);
template<class... A> int FUN_10337b00(A...);
int __stdcall FUN_10337b20(int a1);
template<class... A> int FUN_10337b20(A...);
int __stdcall FUN_10337b30(int result);
template<class... A> int FUN_10337b30(A...);
int __stdcall FUN_10337bf0(int result);
template<class... A> int FUN_10337bf0(A...);
int __stdcall FUN_10337c10(int result);
template<class... A> int FUN_10337c10(A...);
int __stdcall FUN_10337c50(int result);
template<class... A> int FUN_10337c50(A...);
int __stdcall FUN_10337c70(int result);
template<class... A> int FUN_10337c70(A...);
int __stdcall FUN_10337cb0(int result);
template<class... A> int FUN_10337cb0(A...);
int __stdcall FUN_10337cd0(int a1);
template<class... A> int FUN_10337cd0(A...);
int __stdcall FUN_10337cf0(int result);
template<class... A> int FUN_10337cf0(A...);
int __stdcall FUN_10337d10(int result);
template<class... A> int FUN_10337d10(A...);
int __stdcall FUN_1034f960(int a1);
template<class... A> int FUN_1034f960(A...);
int __stdcall FUN_1034f980(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1034f980(A...);
int __stdcall FUN_1034f9e0(int a1);
template<class... A> int FUN_1034f9e0(A...);
int __stdcall FUN_1034fa50(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1034fa50(A...);
int __stdcall FUN_1034fa60(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1034fa60(A...);
int __stdcall FUN_1034fa70(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1034fa70(A...);
int __stdcall FUN_1034fa80(int a1);
template<class... A> int FUN_1034fa80(A...);
int __stdcall FUN_1034fb40(int a1);
template<class... A> int FUN_1034fb40(A...);
int __stdcall FUN_1034fb60(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1034fb60(A...);
int __stdcall FUN_1034fd30(int a1);
template<class... A> int FUN_1034fd30(A...);
int __stdcall FUN_1034fd70(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1034fd70(A...);
int __stdcall FUN_1034fed0(int a1);
template<class... A> int FUN_1034fed0(A...);
int __stdcall FUN_10350040(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10350040(A...);
int __stdcall FUN_10350070(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10350070(A...);
int __stdcall FUN_103500a0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_103500a0(A...);
int __stdcall FUN_103500d0(int a1);
template<class... A> int FUN_103500d0(A...);
int __stdcall FUN_10350370(int a1);
template<class... A> int FUN_10350370(A...);
int __stdcall FUN_103503b0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_103503b0(A...);
int __stdcall FUN_10352560(int a1);
template<class... A> int FUN_10352560(A...);
int __stdcall FUN_10352580(int a1);
template<class... A> int FUN_10352580(A...);
int __stdcall FUN_103525a0(int a1);
template<class... A> int FUN_103525a0(A...);
int FUN_103526a0(int a1);
template<class... A> int FUN_103526a0(A...);
int FUN_10352768(int a1);
template<class... A> int FUN_10352768(A...);
int FUN_10352790(int a1, int a2);
template<class... A> int FUN_10352790(A...);
int FUN_103527e0(int a1, int a2);
template<class... A> int FUN_103527e0(A...);
int FUN_10352800(int a1, int a2);
template<class... A> int FUN_10352800(A...);
int FUN_10352820(int a1, int a2);
template<class... A> int FUN_10352820(A...);
int __stdcall FUN_10356ba0(int a1);
template<class... A> int FUN_10356ba0(A...);
int __stdcall FUN_10356bc0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10356bc0(A...);
int __stdcall FUN_10356c70(int a1);
template<class... A> int FUN_10356c70(A...);
int __stdcall FUN_10356d30(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10356d30(A...);
int __stdcall FUN_10356d40(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10356d40(A...);
int __stdcall FUN_10356d50(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10356d50(A...);
int __stdcall FUN_10356d60(int a1);
template<class... A> int FUN_10356d60(A...);
int __stdcall FUN_10356ec0(int a1);
template<class... A> int FUN_10356ec0(A...);
int __stdcall FUN_10356ee0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10356ee0(A...);
int FUN_103595d8(int a1);
template<class... A> int FUN_103595d8(A...);
int FUN_10359600(int a1);
template<class... A> int FUN_10359600(A...);
int FUN_103596c8(int a1);
template<class... A> int FUN_103596c8(A...);
int FUN_103596f0(int a1, int a2);
template<class... A> int FUN_103596f0(A...);
int FUN_10359740(int a1, int a2);
template<class... A> int FUN_10359740(A...);
int FUN_10359760(int a1, int a2);
template<class... A> int FUN_10359760(A...);
int FUN_10359780(int a1, int a2);
template<class... A> int FUN_10359780(A...);
int __stdcall FUN_10359bd0(int a1);
template<class... A> int FUN_10359bd0(A...);
int __stdcall FUN_10359c70(int a1);
template<class... A> int FUN_10359c70(A...);
int __stdcall FUN_10359d10(int a1);
template<class... A> int FUN_10359d10(A...);
int __stdcall FUN_10359e40(int a1);
template<class... A> int FUN_10359e40(A...);
int __stdcall FUN_10367820(int a1);
template<class... A> int FUN_10367820(A...);
int __stdcall FUN_10367840(int a1);
template<class... A> int FUN_10367840(A...);
int FUN_1039ebd0(int a1, int a2, int a3, int a4);
template<class... A> int FUN_1039ebd0(A...);
int FUN_103bf770(int a1, int a2, int a3);
template<class... A> int FUN_103bf770(A...);
int FUN_103c01e0(int a1, int a2, int a3);
template<class... A> int FUN_103c01e0(A...);
int __stdcall FUN_103c0210(int a1);
template<class... A> int FUN_103c0210(A...);
int FUN_103d6de0(int result, int a2);
template<class... A> int FUN_103d6de0(A...);
int FUN_103f5b10(int a1, int a2, int a3, int a4);
template<class... A> int FUN_103f5b10(A...);
int __stdcall FUN_1040f3c0(int a1);
template<class... A> int FUN_1040f3c0(A...);
int __stdcall FUN_1040f560(int a1);
template<class... A> int FUN_1040f560(A...);
int FUN_1040f9b0(int a1);
template<class... A> int FUN_1040f9b0(A...);
int __stdcall FUN_104101e0(int a1);
template<class... A> int FUN_104101e0(A...);
int FUN_10410b50(int a1);
template<class... A> int FUN_10410b50(A...);
int __stdcall FUN_10410be0(int a1);
template<class... A> int FUN_10410be0(A...);
int __stdcall FUN_1041d740(int a1);
template<class... A> int FUN_1041d740(A...);
int __stdcall FUN_1041d760(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1041d760(A...);
int __stdcall FUN_1041d770(int a1);
template<class... A> int FUN_1041d770(A...);
int __stdcall FUN_1041d790(int a1);
template<class... A> int FUN_1041d790(A...);
int __stdcall FUN_1041d7b0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1041d7b0(A...);
int __stdcall FUN_1041d7c0(int a1);
template<class... A> int FUN_1041d7c0(A...);
int __stdcall FUN_1041d7e0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1041d7e0(A...);
int __stdcall FUN_1041d7f0(int a1);
template<class... A> int FUN_1041d7f0(A...);
int __stdcall FUN_1041d810(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1041d810(A...);
int __stdcall FUN_1041d820(int a1);
template<class... A> int FUN_1041d820(A...);
int __stdcall FUN_1041d860(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1041d860(A...);
int __stdcall FUN_1041d890(int a1);
template<class... A> int FUN_1041d890(A...);
int __stdcall FUN_1041d8d0(int a1);
template<class... A> int FUN_1041d8d0(A...);
int __stdcall FUN_1041d910(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1041d910(A...);
int __stdcall FUN_1041d940(int a1);
template<class... A> int FUN_1041d940(A...);
int __stdcall FUN_1041d980(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1041d980(A...);
int __stdcall FUN_1041d9b0(int a1);
template<class... A> int FUN_1041d9b0(A...);
int __stdcall FUN_1041d9f0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1041d9f0(A...);
int __stdcall FUN_1041e110(int a1);
template<class... A> int FUN_1041e110(A...);
int __stdcall FUN_1041e130(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1041e130(A...);
int __stdcall FUN_1041e140(int a1);
template<class... A> int FUN_1041e140(A...);
int __stdcall FUN_1041e160(int a1);
template<class... A> int FUN_1041e160(A...);
int __stdcall FUN_1041e180(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1041e180(A...);
int __stdcall FUN_1041e190(int a1);
template<class... A> int FUN_1041e190(A...);
int __stdcall FUN_1041e1b0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1041e1b0(A...);
int __stdcall FUN_1041e1c0(int a1);
template<class... A> int FUN_1041e1c0(A...);
int __stdcall FUN_1041e1e0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1041e1e0(A...);
int __stdcall FUN_1041e8b0(int a1);
template<class... A> int FUN_1041e8b0(A...);
int __stdcall FUN_1041e8c0(int a1);
template<class... A> int FUN_1041e8c0(A...);
int __stdcall FUN_1041e8d0(int a1);
template<class... A> int FUN_1041e8d0(A...);
int __stdcall FUN_1041e8e0(int a1);
template<class... A> int FUN_1041e8e0(A...);
int __stdcall FUN_1041e8f0(int a1);
template<class... A> int FUN_1041e8f0(A...);
int __stdcall FUN_10425820(int a1);
template<class... A> int FUN_10425820(A...);
int __stdcall FUN_10425840(int a1);
template<class... A> int FUN_10425840(A...);
int __stdcall FUN_10425860(int a1);
template<class... A> int FUN_10425860(A...);
int __stdcall FUN_10425880(int a1);
template<class... A> int FUN_10425880(A...);
int __stdcall FUN_104258a0(int a1);
template<class... A> int FUN_104258a0(A...);
int __stdcall FUN_104258e0(int a1);
template<class... A> int FUN_104258e0(A...);
int __stdcall FUN_10425920(int a1);
template<class... A> int FUN_10425920(A...);
int __stdcall FUN_10425960(int a1);
template<class... A> int FUN_10425960(A...);
int FUN_10425ef0(int a1);
template<class... A> int FUN_10425ef0(A...);
int FUN_10425f30(int a1);
template<class... A> int FUN_10425f30(A...);
int __stdcall FUN_10425f70(int a1);
template<class... A> int FUN_10425f70(A...);
int __stdcall FUN_10425f90(int a1);
template<class... A> int FUN_10425f90(A...);
int __stdcall FUN_10425fb0(int a1);
template<class... A> int FUN_10425fb0(A...);
int __stdcall FUN_10425fd0(int a1);
template<class... A> int FUN_10425fd0(A...);
int FUN_10426140(int a1);
template<class... A> int FUN_10426140(A...);
int FUN_10426180(int a1);
template<class... A> int FUN_10426180(A...);
int __stdcall FUN_10426200(int a1);
template<class... A> int FUN_10426200(A...);
int __stdcall FUN_10426210(int a1);
template<class... A> int FUN_10426210(A...);
int __stdcall FUN_10426220(int a1);
template<class... A> int FUN_10426220(A...);
int __stdcall FUN_10426230(int a1);
template<class... A> int FUN_10426230(A...);
int __stdcall FUN_1042b1d0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1042b1d0(A...);
int __stdcall FUN_1042b210(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1042b210(A...);
int __stdcall FUN_10442c50(int a1);
template<class... A> int FUN_10442c50(A...);
int FUN_10442c70(int a1, int a2);
template<class... A> int FUN_10442c70(A...);
int FUN_10442ea0(int a1, int a2);
template<class... A> int FUN_10442ea0(A...);
int __stdcall FUN_1045ee40(int a1);
template<class... A> int FUN_1045ee40(A...);
int __stdcall FUN_1045ee60(int a1);
template<class... A> int FUN_1045ee60(A...);
int __stdcall FUN_1045eef0(int a1);
template<class... A> int FUN_1045eef0(A...);
int __stdcall FUN_1045efb0(int a1);
template<class... A> int FUN_1045efb0(A...);
int __stdcall FUN_10461030(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10461030(A...);
int __stdcall FUN_10461040(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10461040(A...);
int __stdcall FUN_104610e0(int a1);
template<class... A> int FUN_104610e0(A...);
int FUN_10461100(int a1);
template<class... A> int FUN_10461100(A...);
int __stdcall FUN_104611c0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104611c0(A...);
int FUN_104613b0(int a1);
template<class... A> int FUN_104613b0(A...);
int __stdcall FUN_1046bfa0(int a1);
template<class... A> int FUN_1046bfa0(A...);
int __stdcall FUN_1046bfc0(int a1);
template<class... A> int FUN_1046bfc0(A...);
int __stdcall FUN_1046bfe0(int a1);
template<class... A> int FUN_1046bfe0(A...);
int __stdcall FUN_1046c020(int a1);
template<class... A> int FUN_1046c020(A...);
int __stdcall FUN_1046c0e0(int a1);
template<class... A> int FUN_1046c0e0(A...);
int __stdcall FUN_1046c100(int a1);
template<class... A> int FUN_1046c100(A...);
int __stdcall FUN_1046c240(int a1);
template<class... A> int FUN_1046c240(A...);
int __stdcall FUN_1046c250(int a1);
template<class... A> int FUN_1046c250(A...);
int __stdcall FUN_10471940(int a1);
template<class... A> int FUN_10471940(A...);
int FUN_10471ab0(int a1, int a2);
template<class... A> int FUN_10471ab0(A...);
int FUN_10471cf0(int a1, int a2);
template<class... A> int FUN_10471cf0(A...);
int __stdcall FUN_10478b90(int a1);
template<class... A> int FUN_10478b90(A...);
int __stdcall FUN_10478bb0(int a1);
template<class... A> int FUN_10478bb0(A...);
int __stdcall FUN_10478bd0(int a1);
template<class... A> int FUN_10478bd0(A...);
int __stdcall FUN_10478bf0(int a1);
template<class... A> int FUN_10478bf0(A...);
int __stdcall FUN_10478c10(int a1);
template<class... A> int FUN_10478c10(A...);
int __stdcall FUN_10478c30(int a1);
template<class... A> int FUN_10478c30(A...);
int __stdcall FUN_10478c50(int a1);
template<class... A> int FUN_10478c50(A...);
int __stdcall FUN_10478c90(int a1);
template<class... A> int FUN_10478c90(A...);
int __stdcall FUN_10478cd0(int a1);
template<class... A> int FUN_10478cd0(A...);
int __stdcall FUN_10478d10(int a1);
template<class... A> int FUN_10478d10(A...);
int __stdcall FUN_10478d50(int a1);
template<class... A> int FUN_10478d50(A...);
int __stdcall FUN_10478d90(int a1);
template<class... A> int FUN_10478d90(A...);
int FUN_10478dd0(int a1);
template<class... A> int FUN_10478dd0(A...);
int FUN_10478de0(int a1);
template<class... A> int FUN_10478de0(A...);
int FUN_10478df0(int a1);
template<class... A> int FUN_10478df0(A...);
int FUN_10478e40(int a1);
template<class... A> int FUN_10478e40(A...);
int __stdcall FUN_10479240(int a1);
template<class... A> int FUN_10479240(A...);
int __stdcall FUN_10479260(int a1);
template<class... A> int FUN_10479260(A...);
int __stdcall FUN_10479280(int a1);
template<class... A> int FUN_10479280(A...);
int __stdcall FUN_104792a0(int a1);
template<class... A> int FUN_104792a0(A...);
int __stdcall FUN_104792c0(int a1);
template<class... A> int FUN_104792c0(A...);
int __stdcall FUN_104792e0(int a1);
template<class... A> int FUN_104792e0(A...);
int FUN_10479560(int a1);
template<class... A> int FUN_10479560(A...);
int FUN_10479570(int a1);
template<class... A> int FUN_10479570(A...);
int FUN_10479580(int a1);
template<class... A> int FUN_10479580(A...);
int FUN_104795d0(int a1);
template<class... A> int FUN_104795d0(A...);
int __stdcall FUN_104796a0(int a1);
template<class... A> int FUN_104796a0(A...);
int __stdcall FUN_104796b0(int a1);
template<class... A> int FUN_104796b0(A...);
int __stdcall FUN_104796c0(int a1);
template<class... A> int FUN_104796c0(A...);
int __stdcall FUN_104796d0(int a1);
template<class... A> int FUN_104796d0(A...);
int __stdcall FUN_104796e0(int a1);
template<class... A> int FUN_104796e0(A...);
int __stdcall FUN_104796f0(int a1);
template<class... A> int FUN_104796f0(A...);
int __stdcall FUN_10479ec0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10479ec0(A...);
int __stdcall FUN_10479ed0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10479ed0(A...);
int __stdcall FUN_10479ee0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10479ee0(A...);
int __stdcall FUN_10479f30(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10479f30(A...);
int __stdcall FUN_1047e080(int a1);
template<class... A> int FUN_1047e080(A...);
int __stdcall FUN_1047e210(int a1);
template<class... A> int FUN_1047e210(A...);
int __stdcall FUN_1047e6c0(int a1);
template<class... A> int FUN_1047e6c0(A...);
int __stdcall FUN_1047eca0(int a1);
template<class... A> int FUN_1047eca0(A...);
int __stdcall FUN_1047f420(int a1);
template<class... A> int FUN_1047f420(A...);
int __stdcall FUN_1047f760(int a1);
template<class... A> int FUN_1047f760(A...);
int __stdcall FUN_1047f780(int a1);
template<class... A> int FUN_1047f780(A...);
int __stdcall FUN_1047f7e0(int a1);
template<class... A> int FUN_1047f7e0(A...);
int FUN_1047f880(int a1, int a2);
template<class... A> int FUN_1047f880(A...);
int FUN_1047f8a0(int a1, int a2);
template<class... A> int FUN_1047f8a0(A...);
int FUN_1047f9b0(int a1, int a2);
template<class... A> int FUN_1047f9b0(A...);
int FUN_1047fab0(int a1, int a2);
template<class... A> int FUN_1047fab0(A...);
int __stdcall FUN_10480f40(int a1);
template<class... A> int FUN_10480f40(A...);
int __stdcall FUN_10481270(int a1);
template<class... A> int FUN_10481270(A...);
int FUN_10481910(int a1, int a2);
template<class... A> int FUN_10481910(A...);
int FUN_10481930(int a1, int a2);
template<class... A> int FUN_10481930(A...);
int FUN_10481a40(int a1, int a2);
template<class... A> int FUN_10481a40(A...);
int FUN_10481b40(int a1, int a2);
template<class... A> int FUN_10481b40(A...);
int __stdcall FUN_104820b0(int a1);
template<class... A> int FUN_104820b0(A...);
int __stdcall FUN_10482360(int a1);
template<class... A> int FUN_10482360(A...);
int __stdcall FUN_10497560(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10497560(A...);
int __stdcall FUN_10497570(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10497570(A...);
int __stdcall FUN_10497620(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10497620(A...);
int __stdcall FUN_1049d360(int a1);
template<class... A> int FUN_1049d360(A...);
int FUN_1049d380(int a1, int a2);
template<class... A> int FUN_1049d380(A...);
int FUN_1049d5b0(int a1, int a2);
template<class... A> int FUN_1049d5b0(A...);
int __stdcall FUN_104ab040(int a1);
template<class... A> int FUN_104ab040(A...);
int __stdcall FUN_104ab060(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104ab060(A...);
int __stdcall FUN_104ab070(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104ab070(A...);
int __stdcall FUN_104ab080(int a1);
template<class... A> int FUN_104ab080(A...);
int __stdcall FUN_104ab0a0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104ab0a0(A...);
int __stdcall FUN_104ab0b0(int a1);
template<class... A> int FUN_104ab0b0(A...);
int __stdcall FUN_104ab160(int a1);
template<class... A> int FUN_104ab160(A...);
int __stdcall FUN_104ab1a0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104ab1a0(A...);
int __stdcall FUN_104ab1d0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104ab1d0(A...);
int __stdcall FUN_104ab200(int a1);
template<class... A> int FUN_104ab200(A...);
int __stdcall FUN_104ab240(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104ab240(A...);
int __stdcall FUN_104ab270(int a1);
template<class... A> int FUN_104ab270(A...);
int FUN_104abf80(int a1);
template<class... A> int FUN_104abf80(A...);
int FUN_104ac010(int a1, int a2, int a3);
template<class... A> int FUN_104ac010(A...);
int __stdcall FUN_104ac1a0(int a1);
template<class... A> int FUN_104ac1a0(A...);
int __stdcall FUN_104ac1c0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104ac1c0(A...);
int __stdcall FUN_104ac1d0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104ac1d0(A...);
int __stdcall FUN_104ac1e0(int a1);
template<class... A> int FUN_104ac1e0(A...);
int __stdcall FUN_104ac200(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104ac200(A...);
int __stdcall FUN_104ac210(int a1);
template<class... A> int FUN_104ac210(A...);
int FUN_104ac7c0(int a1);
template<class... A> int FUN_104ac7c0(A...);
int FUN_104ac850(int a1, int a2, int a3);
template<class... A> int FUN_104ac850(A...);
int __stdcall FUN_104ac940(int a1);
template<class... A> int FUN_104ac940(A...);
int __stdcall FUN_104ac950(int a1);
template<class... A> int FUN_104ac950(A...);
int __stdcall FUN_104ac960(int a1);
template<class... A> int FUN_104ac960(A...);
int __stdcall FUN_104b4a60(int a1);
template<class... A> int FUN_104b4a60(A...);
int __stdcall FUN_104b4ad0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104b4ad0(A...);
int __stdcall FUN_104b4ae0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104b4ae0(A...);
int __stdcall FUN_104b4af0(int a1);
template<class... A> int FUN_104b4af0(A...);
int __stdcall FUN_104b4b10(int a1);
template<class... A> int FUN_104b4b10(A...);
int __stdcall FUN_104b4b30(int a1);
template<class... A> int FUN_104b4b30(A...);
int __stdcall FUN_104b4ca0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104b4ca0(A...);
int __stdcall FUN_104b4cd0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104b4cd0(A...);
int __stdcall FUN_104b4d00(int a1);
template<class... A> int FUN_104b4d00(A...);
int __stdcall FUN_104b4d40(int a1);
template<class... A> int FUN_104b4d40(A...);
int __stdcall FUN_104b4e20(int a1);
template<class... A> int FUN_104b4e20(A...);
int FUN_104b4e90(int a1, int a2);
template<class... A> int FUN_104b4e90(A...);
int FUN_104b4f40(int a1);
template<class... A> int FUN_104b4f40(A...);
int __stdcall FUN_104b5070(int a1);
template<class... A> int FUN_104b5070(A...);
int __stdcall FUN_104b5130(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104b5130(A...);
int __stdcall FUN_104b5140(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104b5140(A...);
int __stdcall FUN_104b5150(int a1);
template<class... A> int FUN_104b5150(A...);
int __stdcall FUN_104b5170(int a1);
template<class... A> int FUN_104b5170(A...);
int FUN_104b5380(int a1, int a2);
template<class... A> int FUN_104b5380(A...);
int FUN_104b5430(int a1);
template<class... A> int FUN_104b5430(A...);
int __stdcall FUN_104b54a0(int a1);
template<class... A> int FUN_104b54a0(A...);
int __stdcall FUN_104b5540(int a1);
template<class... A> int FUN_104b5540(A...);
int __stdcall FUN_104b5550(int a1);
template<class... A> int FUN_104b5550(A...);
int __stdcall FUN_104b89a0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104b89a0(A...);
int __stdcall FUN_104bd3b0(int a1);
template<class... A> int FUN_104bd3b0(A...);
int __stdcall FUN_104bd3d0(int a1);
template<class... A> int FUN_104bd3d0(A...);
int __stdcall FUN_104bd410(int a1);
template<class... A> int FUN_104bd410(A...);
int __stdcall FUN_104bd460(int a1);
template<class... A> int FUN_104bd460(A...);
int __stdcall FUN_104bd500(int a1);
template<class... A> int FUN_104bd500(A...);
int __stdcall FUN_104c96f0(int a1);
template<class... A> int FUN_104c96f0(A...);
int __stdcall FUN_104c9710(int a1);
template<class... A> int FUN_104c9710(A...);
int __stdcall FUN_104c9780(int a1);
template<class... A> int FUN_104c9780(A...);
int __stdcall FUN_104c9820(int a1);
template<class... A> int FUN_104c9820(A...);
int __stdcall FUN_104d6680(int a1);
template<class... A> int FUN_104d6680(A...);
int __stdcall FUN_104d66a0(int a1);
template<class... A> int FUN_104d66a0(A...);
int FUN_104d6760(int a1);
template<class... A> int FUN_104d6760(A...);
int __stdcall FUN_104d6b80(int a1);
template<class... A> int FUN_104d6b80(A...);
int FUN_104d6ec0(int a1);
template<class... A> int FUN_104d6ec0(A...);
int __stdcall FUN_104d6f00(int a1);
template<class... A> int FUN_104d6f00(A...);
int __stdcall FUN_104d7b80(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104d7b80(A...);
int __stdcall FUN_104d8940(int a1);
template<class... A> int FUN_104d8940(A...);
int FUN_1050da5b(void);
template<class... A> int FUN_1050da5b(A...);
int FUN_10596cf0(int result);
template<class... A> int FUN_10596cf0(A...);
int __stdcall FUN_105b04b0(int a1);
template<class... A> int FUN_105b04b0(A...);
int __stdcall FUN_105b04d0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105b04d0(A...);
int __stdcall FUN_105b04e0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105b04e0(A...);
int __stdcall FUN_105b0710(int a1);
template<class... A> int FUN_105b0710(A...);
int __stdcall FUN_105b0750(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105b0750(A...);
int __stdcall FUN_105b0780(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105b0780(A...);
int FUN_105b0b20(int a1);
template<class... A> int FUN_105b0b20(A...);
int __stdcall FUN_105b0eb0(int a1);
template<class... A> int FUN_105b0eb0(A...);
int __stdcall FUN_105b0ed0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105b0ed0(A...);
int __stdcall FUN_105b0ee0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105b0ee0(A...);
int FUN_105b11d0(int a1);
template<class... A> int FUN_105b11d0(A...);
int __stdcall FUN_105b12d0(int a1);
template<class... A> int FUN_105b12d0(A...);
int __stdcall FUN_105b2540(int a1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_105b2540(A...);
int __stdcall FUN_105c9ce0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105c9ce0(A...);
int __stdcall FUN_105c9cf0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105c9cf0(A...);
int FUN_105ca4d0(int a1);
template<class... A> int FUN_105ca4d0(A...);
int __stdcall FUN_105cca90(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105cca90(A...);
int __stdcall FUN_105d4a00(int a1);
template<class... A> int FUN_105d4a00(A...);
int __stdcall FUN_105e8c80(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105e8c80(A...);
int __stdcall FUN_105e8cc0(int a1);
template<class... A> int FUN_105e8cc0(A...);
int __stdcall FUN_105e8eb0(int a1);
template<class... A> int FUN_105e8eb0(A...);
int __stdcall FUN_105e8ed0(int a1);
template<class... A> int FUN_105e8ed0(A...);
int __stdcall FUN_105e8ef0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105e8ef0(A...);
int __stdcall FUN_105e8f30(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105e8f30(A...);
int __stdcall FUN_105e8f90(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105e8f90(A...);
int __stdcall FUN_105e9170(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105e9170(A...);
int __stdcall FUN_105e9280(int a1);
template<class... A> int FUN_105e9280(A...);
int __stdcall FUN_105e98c0(int a1);
template<class... A> int FUN_105e98c0(A...);
int __stdcall FUN_105e9900(int a1);
template<class... A> int FUN_105e9900(A...);
int __stdcall FUN_105e9950(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105e9950(A...);
int __stdcall FUN_105e9a60(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105e9a60(A...);
int __stdcall FUN_105e9bc0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105e9bc0(A...);
int FUN_105ea0d0(int a1, int a2);
template<class... A> int FUN_105ea0d0(A...);
int FUN_105ea420(int a1);
template<class... A> int FUN_105ea420(A...);
int __stdcall FUN_105eb430(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105eb430(A...);
int __stdcall FUN_105eb4d0(int a1);
template<class... A> int FUN_105eb4d0(A...);
int __stdcall FUN_105eb7b0(int a1);
template<class... A> int FUN_105eb7b0(A...);
int __stdcall FUN_105eb7d0(int a1);
template<class... A> int FUN_105eb7d0(A...);
int __stdcall FUN_105eb800(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105eb800(A...);
int __stdcall FUN_105eb8a0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105eb8a0(A...);
int __stdcall FUN_105eb950(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105eb950(A...);
int FUN_105ec0f0(int a1, int a2);
template<class... A> int FUN_105ec0f0(A...);
int FUN_105ec440(int a1);
template<class... A> int FUN_105ec440(A...);
int __stdcall FUN_105eca60(int a1);
template<class... A> int FUN_105eca60(A...);
int __stdcall FUN_105ecf10(int a1);
template<class... A> int FUN_105ecf10(A...);
int __stdcall FUN_105ecf20(int a1, int a2);
template<class... A> int FUN_105ecf20(A...);
int __stdcall FUN_105ef910(int a1);
template<class... A> int FUN_105ef910(A...);
int __stdcall FUN_105efc50(int a1);
template<class... A> int FUN_105efc50(A...);
int __stdcall FUN_10647a40(int a1);
template<class... A> int FUN_10647a40(A...);
int __stdcall FUN_10647a60(int a1);
template<class... A> int FUN_10647a60(A...);
int __stdcall FUN_10647a80(int a1);
template<class... A> int FUN_10647a80(A...);
int __stdcall FUN_10647aa0(int a1);
template<class... A> int FUN_10647aa0(A...);
int __stdcall FUN_10647ae0(int a1);
template<class... A> int FUN_10647ae0(A...);
int __stdcall FUN_10647b30(int a1);
template<class... A> int FUN_10647b30(A...);
int __stdcall FUN_10648a40(int a1);
template<class... A> int FUN_10648a40(A...);
int __stdcall FUN_10648a60(int a1);
template<class... A> int FUN_10648a60(A...);
int __stdcall FUN_10648a90(int a1);
template<class... A> int FUN_10648a90(A...);
int __stdcall FUN_106496b0(int a1);
template<class... A> int FUN_106496b0(A...);
int __stdcall FUN_106496c0(int a1, int a2);
template<class... A> int FUN_106496c0(A...);
int __stdcall FUN_106496e0(int a1, int a2);
template<class... A> int FUN_106496e0(A...);
int FUN_1068c8c0(int a1, int a2);
template<class... A> int FUN_1068c8c0(A...);
int FUN_10690840(int a1, int a2);
template<class... A> int FUN_10690840(A...);
int __stdcall FUN_10699920(int a1);
template<class... A> int FUN_10699920(A...);
int __stdcall FUN_10699a10(int a1);
template<class... A> int FUN_10699a10(A...);
int FUN_10699c20(int a1, int a2);
template<class... A> int FUN_10699c20(A...);
int __stdcall FUN_10699f40(int a1);
template<class... A> int FUN_10699f40(A...);
int FUN_1069a480(int a1, int a2);
template<class... A> int FUN_1069a480(A...);
int __stdcall FUN_1069a570(int a1);
template<class... A> int FUN_1069a570(A...);
int FUN_106a8660(int a1, int a2, int a3, int a4);
template<class... A> int FUN_106a8660(A...);
int __stdcall FUN_106a8ab0(int a1);
template<class... A> int FUN_106a8ab0(A...);
int __stdcall FUN_106a8ad0(int a1);
template<class... A> int FUN_106a8ad0(A...);
int __stdcall FUN_106a8af0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_106a8af0(A...);
int __stdcall FUN_106a8b00(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_106a8b00(A...);
int __stdcall FUN_106a8b10(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_106a8b10(A...);
int __stdcall FUN_106a8d60(int a1);
template<class... A> int FUN_106a8d60(A...);
int __stdcall FUN_106a8da0(int a1);
template<class... A> int FUN_106a8da0(A...);
int __stdcall FUN_106a8de0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_106a8de0(A...);
int __stdcall FUN_106a8e10(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_106a8e10(A...);
int __stdcall FUN_106a8e40(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_106a8e40(A...);
int FUN_106a9a90(int a1);
template<class... A> int FUN_106a9a90(A...);
int FUN_106a9b30(int a1);
template<class... A> int FUN_106a9b30(A...);
int __stdcall FUN_106ad770(int a1);
template<class... A> int FUN_106ad770(A...);
int __stdcall FUN_106ad790(int a1);
template<class... A> int FUN_106ad790(A...);
int __stdcall FUN_106ad7b0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_106ad7b0(A...);
int __stdcall FUN_106ad7c0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_106ad7c0(A...);
int __stdcall FUN_106ad7d0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_106ad7d0(A...);
int FUN_106afe30(int a1);
template<class... A> int FUN_106afe30(A...);
int FUN_106afed0(int a1);
template<class... A> int FUN_106afed0(A...);
int __stdcall FUN_106b03d0(int a1);
template<class... A> int FUN_106b03d0(A...);
int __stdcall FUN_106b03e0(int a1);
template<class... A> int FUN_106b03e0(A...);
int FUN_106b6540(int a1);
template<class... A> int FUN_106b6540(A...);
int __stdcall FUN_106b6680(int a1);
template<class... A> int FUN_106b6680(A...);
int __stdcall FUN_106b6720(int a1);
template<class... A> int FUN_106b6720(A...);
int __stdcall FUN_106b6740(int a1, int a2);
template<class... A> int FUN_106b6740(A...);
int __stdcall FUN_106d13f0(int a1);
template<class... A> int FUN_106d13f0(A...);
int __stdcall FUN_106d1410(int a1);
template<class... A> int FUN_106d1410(A...);
int __stdcall FUN_106d1430(int a1);
template<class... A> int FUN_106d1430(A...);
int __stdcall FUN_106d15b0(int a1);
template<class... A> int FUN_106d15b0(A...);
int __stdcall FUN_106d1600(int a1);
template<class... A> int FUN_106d1600(A...);
int __stdcall FUN_106d1640(int a1);
template<class... A> int FUN_106d1640(A...);
int FUN_106d17d0(int a1);
template<class... A> int FUN_106d17d0(A...);
int FUN_106d17f0(int a1);
template<class... A> int FUN_106d17f0(A...);
int FUN_106d1800(int a1);
template<class... A> int FUN_106d1800(A...);
int __stdcall FUN_106d1de0(int a1);
template<class... A> int FUN_106d1de0(A...);
int __stdcall FUN_106d1e10(int a1);
template<class... A> int FUN_106d1e10(A...);
int __stdcall FUN_106d1e30(int a1);
template<class... A> int FUN_106d1e30(A...);
int FUN_106d22d0(int a1);
template<class... A> int FUN_106d22d0(A...);
int FUN_106d22f0(int a1);
template<class... A> int FUN_106d22f0(A...);
int FUN_106d2300(int a1);
template<class... A> int FUN_106d2300(A...);
int __stdcall FUN_106d2410(int a1, int a2);
template<class... A> int FUN_106d2410(A...);
int __stdcall FUN_106d2430(int a1);
template<class... A> int FUN_106d2430(A...);
int __stdcall FUN_106d2440(int a1);
template<class... A> int FUN_106d2440(A...);
int FUN_106d3360(void);
template<class... A> int FUN_106d3360(A...);
int __stdcall FUN_1083f620(int a1);
template<class... A> int FUN_1083f620(A...);
int __stdcall FUN_1083f640(int a1);
template<class... A> int FUN_1083f640(A...);
int __stdcall FUN_1083f8f0(int a1);
template<class... A> int FUN_1083f8f0(A...);
int __stdcall FUN_1083fba0(int a1);
template<class... A> int FUN_1083fba0(A...);
int __stdcall FUN_1086e940(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1086e940(A...);
int __stdcall FUN_1086e960(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1086e960(A...);
int __stdcall FUN_1086e980(int a1, int a2);
template<class... A> int FUN_1086e980(A...);
int __stdcall FUN_1086e9a0(int a1, int a2);
template<class... A> int FUN_1086e9a0(A...);
int FUN_1086ea40(int a1, int a2);
template<class... A> int FUN_1086ea40(A...);
int FUN_1086ea80(int a1, int a2);
template<class... A> int FUN_1086ea80(A...);
int __stdcall FUN_10874040(int a1, int a2);
template<class... A> int FUN_10874040(A...);
int __stdcall FUN_10874060(int a1, int a2);
template<class... A> int FUN_10874060(A...);
int __stdcall FUN_10874080(int a1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10874080(A...);
int __stdcall FUN_10874090(int a1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10874090(A...);
int __stdcall FUN_108740a0(int a1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_108740a0(A...);
int __stdcall FUN_108740b0(int a1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_108740b0(A...);
int FUN_108740c0(void);
template<class... A> int FUN_108740c0(A...);
int FUN_108740e0(void);
template<class... A> int FUN_108740e0(A...);
int FUN_10874120(void);
template<class... A> int FUN_10874120(A...);
int FUN_10874140(void);
template<class... A> int FUN_10874140(A...);
int FUN_10875260(void);
template<class... A> int FUN_10875260(A...);
int FUN_10875280(void);
template<class... A> int FUN_10875280(A...);
int __stdcall FUN_10875a30(int a1);
template<class... A> int FUN_10875a30(A...);
int __stdcall FUN_10875a50(int a1);
template<class... A> int FUN_10875a50(A...);
int __stdcall FUN_10876a80(int a1, int a2, int a3);
template<class... A> int FUN_10876a80(A...);
int __stdcall FUN_10876aa0(int a1, int a2, int a3);
template<class... A> int FUN_10876aa0(A...);
int __stdcall FUN_10876ac0(int a1, int a2, int a3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10876ac0(A...);
int __stdcall FUN_10876ae0(int a1, int a2, int a3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10876ae0(A...);
int __stdcall FUN_10876b00(int a1, int a2, int a3);
template<class... A> int FUN_10876b00(A...);
int __stdcall FUN_10876b20(int a1, int a2, int a3);
template<class... A> int FUN_10876b20(A...);
int __stdcall FUN_10876cd0(int result);
template<class... A> int FUN_10876cd0(A...);
int __stdcall FUN_10876ce0(int result);
template<class... A> int FUN_10876ce0(A...);
int FUN_10876cf0(void);
template<class... A> int FUN_10876cf0(A...);
int FUN_10876d10(void);
template<class... A> int FUN_10876d10(A...);
int __stdcall FUN_10877ae0(int result);
template<class... A> int FUN_10877ae0(A...);
int __stdcall FUN_10877af0(int result);
template<class... A> int FUN_10877af0(A...);
int FUN_1087e2d0(void);
template<class... A> int FUN_1087e2d0(A...);
int FUN_1087e2f0(void);
template<class... A> int FUN_1087e2f0(A...);
int FUN_10891b80(int a1, int a2, int a3, int a4);
template<class... A> int FUN_10891b80(A...);
int __stdcall FUN_108c7650(int a1);
template<class... A> int FUN_108c7650(A...);
int __stdcall FUN_10ba1e20(int a1);
template<class... A> int FUN_10ba1e20(A...);
int __stdcall FUN_10ba20e0(int a1);
template<class... A> int FUN_10ba20e0(A...);
int __stdcall FUN_10ba37d0(int a1);
template<class... A> int FUN_10ba37d0(A...);
int __stdcall FUN_10ba4ce0(int a1);
template<class... A> int FUN_10ba4ce0(A...);
int __stdcall FUN_10bbf550(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10bbf550(A...);
int __stdcall FUN_10bbf5b0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10bbf5b0(A...);
int __stdcall FUN_10bbf610(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10bbf610(A...);
int __stdcall FUN_10bbf770(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10bbf770(A...);
int __stdcall FUN_10bbf850(int a1);
template<class... A> int FUN_10bbf850(A...);
int FUN_10bbf8b0(int a1);
template<class... A> int FUN_10bbf8b0(A...);
int __stdcall FUN_10bbfbd0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10bbfbd0(A...);
int __stdcall FUN_10bbfc80(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10bbfc80(A...);
int FUN_10bbffc0(int a1);
template<class... A> int FUN_10bbffc0(A...);
int __stdcall FUN_10bc5240(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10bc5240(A...);
int __stdcall FUN_10bc5250(int a1);
template<class... A> int FUN_10bc5250(A...);
int __stdcall FUN_10bc5300(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10bc5300(A...);
int __stdcall FUN_10bc5330(int a1);
template<class... A> int FUN_10bc5330(A...);
int __stdcall FUN_10bc5ac0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10bc5ac0(A...);
int __stdcall FUN_10bc5ad0(int a1);
template<class... A> int FUN_10bc5ad0(A...);
int __stdcall FUN_10bc5db0(int a1);
template<class... A> int FUN_10bc5db0(A...);
int FUN_10bed580(int a1, int a2, int a3, int a4);
template<class... A> int FUN_10bed580(A...);
int FUN_10bfdbb0(int a1, int a2, int a3);
template<class... A> int FUN_10bfdbb0(A...);
int __stdcall FUN_10c03fa0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10c03fa0(A...);
int __stdcall FUN_10c04340(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10c04340(A...);
int __stdcall FUN_10c04570(int a1);
template<class... A> int FUN_10c04570(A...);
int __stdcall FUN_10c04590(int a1);
template<class... A> int FUN_10c04590(A...);
int FUN_10c047b0(int a1, int a2);
template<class... A> int FUN_10c047b0(A...);
int FUN_10c047d0(int a1);
template<class... A> int FUN_10c047d0(A...);
int __stdcall FUN_10c04de0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10c04de0(A...);
int FUN_10c05040(int a1, int a2);
template<class... A> int FUN_10c05040(A...);
int FUN_10c05060(int a1);
template<class... A> int FUN_10c05060(A...);
int FUN_10c07d08(void);
template<class... A> int FUN_10c07d08(A...);
int __stdcall FUN_10c2a940(int a1);
template<class... A> int FUN_10c2a940(A...);
int __stdcall FUN_10c2a960(int a1);
template<class... A> int FUN_10c2a960(A...);
int __stdcall FUN_10c2b190(int a1);
template<class... A> int FUN_10c2b190(A...);
int __stdcall FUN_10c2b7d0(int a1);
template<class... A> int FUN_10c2b7d0(A...);
int FUN_10c657c5(void);
template<class... A> int FUN_10c657c5(A...);
int FUN_10c934f0(int a1, int a2, int a3, int a4);
template<class... A> int FUN_10c934f0(A...);
int FUN_10cacc92(void);
template<class... A> int FUN_10cacc92(A...);
int __stdcall FUN_10cbc9b0(int a1);
template<class... A> int FUN_10cbc9b0(A...);
int __stdcall FUN_10cbc9d0(int a1);
template<class... A> int FUN_10cbc9d0(A...);
int FUN_10cbca10(int a1, int a2, int a3);
template<class... A> int FUN_10cbca10(A...);
int __stdcall FUN_10cbca30(int a1);
template<class... A> int FUN_10cbca30(A...);
int FUN_10cbca90(int a1, int a2, int a3);
template<class... A> int FUN_10cbca90(A...);
int __stdcall FUN_10cbcac0(int a1);
template<class... A> int FUN_10cbcac0(A...);
int FUN_10cdabb0(int a1, int a2, int a3, int a4);
template<class... A> int FUN_10cdabb0(A...);
int __stdcall FUN_10cf1e20(int a1);
template<class... A> int FUN_10cf1e20(A...);
int __stdcall FUN_10cf1e40(int a1);
template<class... A> int FUN_10cf1e40(A...);
int __stdcall FUN_10cf1e60(int a1);
template<class... A> int FUN_10cf1e60(A...);
int __stdcall FUN_10cf1ea0(int a1);
template<class... A> int FUN_10cf1ea0(A...);
int FUN_10cf2b30(int a1, int a2);
template<class... A> int FUN_10cf2b30(A...);
int FUN_10cf2b50(int a1, int a2);
template<class... A> int FUN_10cf2b50(A...);
int __stdcall FUN_10cf2b70(int a1);
template<class... A> int FUN_10cf2b70(A...);
int __stdcall FUN_10cf2b90(int a1);
template<class... A> int FUN_10cf2b90(A...);
int FUN_10cf2c40(int a1, int a2);
template<class... A> int FUN_10cf2c40(A...);
int FUN_10cf2c60(int a1, int a2);
template<class... A> int FUN_10cf2c60(A...);
int __stdcall FUN_10cf2ca0(int a1);
template<class... A> int FUN_10cf2ca0(A...);
int __stdcall FUN_10cf2cb0(int a1);
template<class... A> int FUN_10cf2cb0(A...);
int __stdcall FUN_10d07f40(int a1);
template<class... A> int FUN_10d07f40(A...);
int __stdcall FUN_10d07f60(int a1);
template<class... A> int FUN_10d07f60(A...);
int __stdcall FUN_10d07f80(int a1);
template<class... A> int FUN_10d07f80(A...);
int __stdcall FUN_10d07fc0(int a1);
template<class... A> int FUN_10d07fc0(A...);
int __stdcall FUN_10d08290(int a1);
template<class... A> int FUN_10d08290(A...);
int __stdcall FUN_10d082b0(int a1);
template<class... A> int FUN_10d082b0(A...);
int __stdcall FUN_10d08560(int a1);
template<class... A> int FUN_10d08560(A...);
int __stdcall FUN_10d08570(int a1);
template<class... A> int FUN_10d08570(A...);
int __stdcall FUN_10d1eb50(int a1);
template<class... A> int FUN_10d1eb50(A...);
int __stdcall FUN_10d1eb70(int a1);
template<class... A> int FUN_10d1eb70(A...);
int __stdcall FUN_10d1eb90(int a1);
template<class... A> int FUN_10d1eb90(A...);
int __stdcall FUN_10d1ebd0(int a1);
template<class... A> int FUN_10d1ebd0(A...);
int __stdcall FUN_10d1ed50(int a1);
template<class... A> int FUN_10d1ed50(A...);
int __stdcall FUN_10d1ed70(int a1);
template<class... A> int FUN_10d1ed70(A...);
int __stdcall FUN_10d1ef70(int a1);
template<class... A> int FUN_10d1ef70(A...);
int __stdcall FUN_10d1ef80(int a1);
template<class... A> int FUN_10d1ef80(A...);
int __stdcall FUN_10d23a00(int a1);
template<class... A> int FUN_10d23a00(A...);
int __stdcall FUN_10d23a20(int a1);
template<class... A> int FUN_10d23a20(A...);
int __stdcall FUN_10d23a40(int a1);
template<class... A> int FUN_10d23a40(A...);
int __stdcall FUN_10d23a60(int a1);
template<class... A> int FUN_10d23a60(A...);
int __stdcall FUN_10d23a80(int a1);
template<class... A> int FUN_10d23a80(A...);
int __stdcall FUN_10d23aa0(int a1);
template<class... A> int FUN_10d23aa0(A...);
int __stdcall FUN_10d23ac0(int a1);
template<class... A> int FUN_10d23ac0(A...);
int __stdcall FUN_10d23ae0(int a1);
template<class... A> int FUN_10d23ae0(A...);
int __stdcall FUN_10d23c00(int a1);
template<class... A> int FUN_10d23c00(A...);
int __stdcall FUN_10d23c40(int a1);
template<class... A> int FUN_10d23c40(A...);
int __stdcall FUN_10d23c80(int a1);
template<class... A> int FUN_10d23c80(A...);
int __stdcall FUN_10d23cc0(int a1);
template<class... A> int FUN_10d23cc0(A...);
int __stdcall FUN_10d23d00(int a1);
template<class... A> int FUN_10d23d00(A...);
int __stdcall FUN_10d23d40(int a1);
template<class... A> int FUN_10d23d40(A...);
int __stdcall FUN_10d23d80(int a1);
template<class... A> int FUN_10d23d80(A...);
int __stdcall FUN_10d23dc0(int a1);
template<class... A> int FUN_10d23dc0(A...);
int FUN_10d23fc0(int a1);
template<class... A> int FUN_10d23fc0(A...);
int FUN_10d23fd0(int a1);
template<class... A> int FUN_10d23fd0(A...);
int FUN_10d23ff0(int a1);
template<class... A> int FUN_10d23ff0(A...);
int FUN_10d24140(int a1);
template<class... A> int FUN_10d24140(A...);
int FUN_10d24150(int a1);
template<class... A> int FUN_10d24150(A...);
int FUN_10d24160(int a1);
template<class... A> int FUN_10d24160(A...);
int __stdcall FUN_10d25440(int a1);
template<class... A> int FUN_10d25440(A...);
int __stdcall FUN_10d25460(int a1);
template<class... A> int FUN_10d25460(A...);
int __stdcall FUN_10d25480(int a1);
template<class... A> int FUN_10d25480(A...);
int __stdcall FUN_10d254a0(int a1);
template<class... A> int FUN_10d254a0(A...);
int __stdcall FUN_10d254c0(int a1);
template<class... A> int FUN_10d254c0(A...);
int __stdcall FUN_10d254e0(int a1);
template<class... A> int FUN_10d254e0(A...);
int __stdcall FUN_10d25500(int a1);
template<class... A> int FUN_10d25500(A...);
int __stdcall FUN_10d25520(int a1);
template<class... A> int FUN_10d25520(A...);
int FUN_10d25f30(int a1);
template<class... A> int FUN_10d25f30(A...);
int FUN_10d25f40(int a1);
template<class... A> int FUN_10d25f40(A...);
int FUN_10d25f60(int a1);
template<class... A> int FUN_10d25f60(A...);
int FUN_10d260b0(int a1);
template<class... A> int FUN_10d260b0(A...);
int FUN_10d260c0(int a1);
template<class... A> int FUN_10d260c0(A...);
int FUN_10d260d0(int a1);
template<class... A> int FUN_10d260d0(A...);
int __stdcall FUN_10d261d0(int a1);
template<class... A> int FUN_10d261d0(A...);
int __stdcall FUN_10d261e0(int a1);
template<class... A> int FUN_10d261e0(A...);
int __stdcall FUN_10d261f0(int a1);
template<class... A> int FUN_10d261f0(A...);
int __stdcall FUN_10d26200(int a1);
template<class... A> int FUN_10d26200(A...);
int __stdcall FUN_10d26210(int a1);
template<class... A> int FUN_10d26210(A...);
int __stdcall FUN_10d26220(int a1);
template<class... A> int FUN_10d26220(A...);
int __stdcall FUN_10d26230(int a1);
template<class... A> int FUN_10d26230(A...);
int __stdcall FUN_10d26240(int a1);
template<class... A> int FUN_10d26240(A...);
int __stdcall FUN_10d27e30(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d27e30(A...);
int __stdcall FUN_10d27e40(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d27e40(A...);
int __stdcall FUN_10d27e60(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d27e60(A...);
int __stdcall FUN_10d27fb0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d27fb0(A...);
int __stdcall FUN_10d27fc0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d27fc0(A...);
int __stdcall FUN_10d27fd0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d27fd0(A...);
int __stdcall FUN_10d2d680(int a1);
template<class... A> int FUN_10d2d680(A...);
int __stdcall FUN_10d2d6a0(int a1);
template<class... A> int FUN_10d2d6a0(A...);
int __stdcall FUN_10d2d6c0(int a1);
template<class... A> int FUN_10d2d6c0(A...);
int __stdcall FUN_10d2d6e0(int a1);
template<class... A> int FUN_10d2d6e0(A...);
int __stdcall FUN_10d2d720(int a1);
template<class... A> int FUN_10d2d720(A...);
int __stdcall FUN_10d2d760(int a1);
template<class... A> int FUN_10d2d760(A...);
int __stdcall FUN_10d2dc30(int a1);
template<class... A> int FUN_10d2dc30(A...);
int __stdcall FUN_10d2dc50(int a1);
template<class... A> int FUN_10d2dc50(A...);
int __stdcall FUN_10d2dc70(int a1);
template<class... A> int FUN_10d2dc70(A...);
int __stdcall FUN_10d2deb0(int a1);
template<class... A> int FUN_10d2deb0(A...);
int __stdcall FUN_10d2dec0(int a1);
template<class... A> int FUN_10d2dec0(A...);
int __stdcall FUN_10d2ded0(int a1);
template<class... A> int FUN_10d2ded0(A...);
int FUN_10d3a81f(void);
template<class... A> int FUN_10d3a81f(A...);
int __stdcall FUN_10d527a0(int a1);
template<class... A> int FUN_10d527a0(A...);
int __stdcall FUN_10d527c0(int a1);
template<class... A> int FUN_10d527c0(A...);
int __stdcall FUN_10d527e0(int a1);
template<class... A> int FUN_10d527e0(A...);
int __stdcall FUN_10d52820(int a1);
template<class... A> int FUN_10d52820(A...);
int __stdcall FUN_10d52e60(int a1);
template<class... A> int FUN_10d52e60(A...);
int __stdcall FUN_10d52e80(int a1);
template<class... A> int FUN_10d52e80(A...);
int __stdcall FUN_10d53400(int a1);
template<class... A> int FUN_10d53400(A...);
int __stdcall FUN_10d53410(int a1);
template<class... A> int FUN_10d53410(A...);
int __stdcall FUN_10d58c40(int a1);
template<class... A> int FUN_10d58c40(A...);
int __stdcall FUN_10d58c60(int a1);
template<class... A> int FUN_10d58c60(A...);
int __stdcall FUN_10d58d80(int a1);
template<class... A> int FUN_10d58d80(A...);
int __stdcall FUN_10d58ec0(int a1);
template<class... A> int FUN_10d58ec0(A...);
int __stdcall FUN_10d63900(int a1);
template<class... A> int FUN_10d63900(A...);
int __stdcall FUN_10d63920(int a1);
template<class... A> int FUN_10d63920(A...);
int __stdcall FUN_10d63940(int a1);
template<class... A> int FUN_10d63940(A...);
int __stdcall FUN_10d63980(int a1);
template<class... A> int FUN_10d63980(A...);
int FUN_10d63c70(int a1);
template<class... A> int FUN_10d63c70(A...);
int FUN_10d63c90(int a1);
template<class... A> int FUN_10d63c90(A...);
int __stdcall FUN_10d63ca0(int a1);
template<class... A> int FUN_10d63ca0(A...);
int __stdcall FUN_10d63cc0(int a1);
template<class... A> int FUN_10d63cc0(A...);
int FUN_10d63dd0(int a1);
template<class... A> int FUN_10d63dd0(A...);
int FUN_10d63df0(int a1);
template<class... A> int FUN_10d63df0(A...);
int __stdcall FUN_10d63e20(int a1);
template<class... A> int FUN_10d63e20(A...);
int __stdcall FUN_10d63e30(int a1);
template<class... A> int FUN_10d63e30(A...);
int __stdcall FUN_10d64c00(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d64c00(A...);
int __stdcall FUN_10d64c20(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d64c20(A...);
int __stdcall FUN_10d9e160(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10d9e160(A...);
int __stdcall FUN_10d9e170(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10d9e170(A...);
int __stdcall FUN_10d9e1c0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10d9e1c0(A...);
int FUN_10e2be94(void);
template<class... A> int FUN_10e2be94(A...);
int FUN_10e45da0(int a1, int a2);
template<class... A> int FUN_10e45da0(A...);
int __stdcall FUN_10ea6fb0(int a1);
template<class... A> int FUN_10ea6fb0(A...);
int __stdcall FUN_10ea6ff0(int a1);
template<class... A> int FUN_10ea6ff0(A...);
int FUN_10ea77f0(int a1, int a2);
template<class... A> int FUN_10ea77f0(A...);
int __stdcall FUN_10ea9cd0(int a1);
template<class... A> int FUN_10ea9cd0(A...);
int FUN_10eaa340(int a1, int a2);
template<class... A> int FUN_10eaa340(A...);
int __stdcall FUN_10eaa510(int a1);
template<class... A> int FUN_10eaa510(A...);
int FUN_10ef9530(int a1, int a2, int a3, int a4);
template<class... A> int FUN_10ef9530(A...);
int __stdcall FUN_10f15990(int a1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10f15990(A...);
int __stdcall FUN_10f15b60(int a1);
template<class... A> int FUN_10f15b60(A...);
int __stdcall FUN_10f15b80(int a1);
template<class... A> int FUN_10f15b80(A...);
int __stdcall FUN_10f15b90(int a1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10f15b90(A...);
int __stdcall FUN_10f15ba0(int a1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10f15ba0(A...);
int __stdcall FUN_10f15bb0(int a1);
template<class... A> int FUN_10f15bb0(A...);
int __stdcall FUN_10f15c70(int a1);
template<class... A> int FUN_10f15c70(A...);
int FUN_10f16ce0(int a1, int a2);
template<class... A> int FUN_10f16ce0(A...);
int FUN_10f16de0(int a1);
template<class... A> int FUN_10f16de0(A...);
int __stdcall FUN_10f16e90(int a1);
template<class... A> int FUN_10f16e90(A...);
int __stdcall FUN_10f18000(int a1);
template<class... A> int FUN_10f18000(A...);
int __stdcall FUN_10f24690(int a1);
template<class... A> int FUN_10f24690(A...);
int __stdcall FUN_10f26760(int a1);
template<class... A> int FUN_10f26760(A...);
int FUN_10f3a255(void);
template<class... A> int FUN_10f3a255(A...);
int FUN_10f3ac8c(void);
template<class... A> int FUN_10f3ac8c(A...);
int FUN_10f53320(int a1);
template<class... A> int FUN_10f53320(A...);
int FUN_10fcb310(int result, int a2);
template<class... A> int FUN_10fcb310(A...);
int FUN_10fe45e0(uint a1, uint a2);
template<class... A> int FUN_10fe45e0(A...);
int FUN_10fe45f0(uint a1, uint a2);
template<class... A> int FUN_10fe45f0(A...);
int FUN_10fe6490(uint a1, uint a2);
template<class... A> int FUN_10fe6490(A...);
int __stdcall FUN_10fe88c0(int a1);
template<class... A> int FUN_10fe88c0(A...);
int __stdcall FUN_10fe88e0(int a1);
template<class... A> int FUN_10fe88e0(A...);
int __stdcall FUN_10fe8900(int a1);
template<class... A> int FUN_10fe8900(A...);
int __stdcall FUN_10fe8920(int a1);
template<class... A> int FUN_10fe8920(A...);
int __stdcall FUN_10fe8960(int a1);
template<class... A> int FUN_10fe8960(A...);
int __stdcall FUN_10fe89a0(int a1);
template<class... A> int FUN_10fe89a0(A...);
int __stdcall FUN_10fe89e0(int a1);
template<class... A> int FUN_10fe89e0(A...);
int __stdcall FUN_10fe8a20(int a1);
template<class... A> int FUN_10fe8a20(A...);
int FUN_10fe8fb0(int a1, int a2);
template<class... A> int FUN_10fe8fb0(A...);
int FUN_10fe8fe0(int a1, int a2);
template<class... A> int FUN_10fe8fe0(A...);
int FUN_10fe9010(int a1);
template<class... A> int FUN_10fe9010(A...);
int FUN_10fe9020(int a1);
template<class... A> int FUN_10fe9020(A...);
int __stdcall FUN_10feb100(int a1);
template<class... A> int FUN_10feb100(A...);
int __stdcall FUN_10feb120(int a1);
template<class... A> int FUN_10feb120(A...);
int __stdcall FUN_10feb140(int a1);
template<class... A> int FUN_10feb140(A...);
int __stdcall FUN_10feb160(int a1);
template<class... A> int FUN_10feb160(A...);
int FUN_10febf70(int a1, int a2);
template<class... A> int FUN_10febf70(A...);
int FUN_10febfa0(int a1, int a2);
template<class... A> int FUN_10febfa0(A...);
int FUN_10febfd0(int a1);
template<class... A> int FUN_10febfd0(A...);
int FUN_10febfe0(int a1);
template<class... A> int FUN_10febfe0(A...);
int __stdcall FUN_10fec100(int a1);
template<class... A> int FUN_10fec100(A...);
int __stdcall FUN_10fec110(int a1);
template<class... A> int FUN_10fec110(A...);
int __stdcall FUN_10fec120(int a1);
template<class... A> int FUN_10fec120(A...);
int __stdcall FUN_10fec130(int a1);
template<class... A> int FUN_10fec130(A...);
int __stdcall FUN_10fee660(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10fee660(A...);
int __stdcall FUN_10fee670(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10fee670(A...);
int FUN_11005cb0(int a1);
template<class... A> int FUN_11005cb0(A...);
int FUN_1101a620(int a1, int a2);
template<class... A> int FUN_1101a620(A...);
int FUN_1101a640(int a1, int a2);
template<class... A> int FUN_1101a640(A...);
int FUN_110359c0(uint a1, uint a2);
template<class... A> int FUN_110359c0(A...);
int FUN_110634c0(int result);
template<class... A> int FUN_110634c0(A...);
int FUN_11068ec0(char a1);
template<class... A> int FUN_11068ec0(A...);
int FUN_11068f80(int a1, int a2);
template<class... A> int FUN_11068f80(A...);
int FUN_110692e0(int a1);
template<class... A> int FUN_110692e0(A...);
int FUN_11069310(unsigned char a1);
template<class... A> int FUN_11069310(A...);
int FUN_11069330(char a1);
template<class... A> int FUN_11069330(A...);
int FUN_110a5000(int a1, int result);
template<class... A> int FUN_110a5000(A...);
int FUN_110c20f0(int a1, int a2);
template<class... A> int FUN_110c20f0(A...);
int FUN_110d8da0(void);
template<class... A> int FUN_110d8da0(A...);
int FUN_110d9b50(int a1, int a2, int a3, int a4);
template<class... A> int FUN_110d9b50(A...);
int FUN_110ed9e0(void);
template<class... A> int FUN_110ed9e0(A...);
int __stdcall FUN_110f9e60(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_110f9e60(A...);
int FUN_11128930(int a1);
template<class... A> int FUN_11128930(A...);
int FUN_1114c1d0(int a1);
template<class... A> int FUN_1114c1d0(A...);
int FUN_1114d530(int a1);
template<class... A> int FUN_1114d530(A...);
int FUN_1118c160(int a1, int a2, int a3);
template<class... A> int FUN_1118c160(A...);
int FUN_1118c7e0(int a1, int a2);
template<class... A> int FUN_1118c7e0(A...);
int FUN_111ac1a0(int a1);
template<class... A> int FUN_111ac1a0(A...);
int FUN_111af820(int a1);
template<class... A> int FUN_111af820(A...);
int FUN_111b3838(void);
template<class... A> int FUN_111b3838(A...);
int FUN_111b3df0(int a1);
template<class... A> int FUN_111b3df0(A...);
int FUN_111b598e(void);
template<class... A> int FUN_111b598e(A...);
int FUN_111b69b0(int result, int a2);
template<class... A> int FUN_111b69b0(A...);
int FUN_111b70f0(int result);
template<class... A> int FUN_111b70f0(A...);
int FUN_111b7210(int a1);
template<class... A> int FUN_111b7210(A...);
int FUN_111b8250(int a1, int a2);
template<class... A> int FUN_111b8250(A...);
int FUN_111b82f0(int a1);
template<class... A> int FUN_111b82f0(A...);
int FUN_111b8310(int a1, uint a2);
template<class... A> int FUN_111b8310(A...);
int FUN_111b91ca(void);
template<class... A> int FUN_111b91ca(A...);
int FUN_111b9990(int a1);
template<class... A> int FUN_111b9990(A...);
int FUN_111bb3d0(int a1);
template<class... A> int FUN_111bb3d0(A...);
int FUN_111bdc40(int result);
template<class... A> int FUN_111bdc40(A...);
int FUN_111f64e6(void);
template<class... A> int FUN_111f64e6(A...);
int FUN_111fe090(char a1, int a2);
template<class... A> int FUN_111fe090(A...);
int FUN_1122c9f0(void);
template<class... A> int FUN_1122c9f0(A...);
int FUN_11236ac1(int a1, int a2);
template<class... A> int FUN_11236ac1(A...);
int FUN_11240410(uint a1, int a2);
template<class... A> int FUN_11240410(A...);
int FUN_1124b450(void);
template<class... A> int FUN_1124b450(A...);
int FUN_1124b470(void);
template<class... A> int FUN_1124b470(A...);
int FUN_1125b5f0(char a1);
template<class... A> int FUN_1125b5f0(A...);
int FUN_11261df8(void);
template<class... A> int FUN_11261df8(A...);
int FUN_11265bac(void);
template<class... A> int FUN_11265bac(A...);
int FUN_1126ce00(int result, int a2);
template<class... A> int FUN_1126ce00(A...);
int FUN_1126ce10(int result, int a2);
template<class... A> int FUN_1126ce10(A...);
int __stdcall FUN_1126e730(int a1);
template<class... A> int FUN_1126e730(A...);
int __stdcall FUN_11287218(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_11287218(A...);
int __stdcall FUN_11287404(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_11287404(A...);
int FUN_1128cd80(int a1);
template<class... A> int FUN_1128cd80(A...);
int FUN_112908c7(void);
template<class... A> int FUN_112908c7(A...);
int FUN_1129099c(void);
template<class... A> int FUN_1129099c(A...);
int FUN_11290aee(void);
template<class... A> int FUN_11290aee(A...);
int FUN_11290e1a(void);
template<class... A> int FUN_11290e1a(A...);
int FUN_11293140(int a1, int a2);
template<class... A> int FUN_11293140(A...);
int FUN_11293160(int a1, int a2);
template<class... A> int FUN_11293160(A...);
int FUN_11297650(int result, int a2);
template<class... A> int FUN_11297650(A...);
int FUN_11297660(int result, int a2);
template<class... A> int FUN_11297660(A...);
int FUN_11297670(int result, int a2);
template<class... A> int FUN_11297670(A...);
int FUN_1129aeb0(void);
template<class... A> int FUN_1129aeb0(A...);
int FUN_1129b040(int a1);
template<class... A> int FUN_1129b040(A...);
int FUN_1129b050(int result, int a2);
template<class... A> int FUN_1129b050(A...);
int FUN_1129bb70(int a1, int a2, int a3, int result);
template<class... A> int FUN_1129bb70(A...);
int FUN_112a768f(void);
template<class... A> int FUN_112a768f(A...);
int FUN_112ab4a0(int a1, int result, int a3);
template<class... A> int FUN_112ab4a0(A...);
int FUN_112abd90(uint a1, uint a2);
template<class... A> int FUN_112abd90(A...);
int FUN_112b01d0(int a1, int a2);
template<class... A> int FUN_112b01d0(A...);
int FUN_112b0250(int a1);
template<class... A> int FUN_112b0250(A...);
int FUN_112b1839(void);
template<class... A> int FUN_112b1839(A...);
int FUN_112b5500(int a1, uint a2, int a3);
template<class... A> int FUN_112b5500(A...);
int FUN_112b8f20(int a1, int a2, int a3);
template<class... A> int FUN_112b8f20(A...);
int FUN_112b9220(int a1);
template<class... A> int FUN_112b9220(A...);
int FUN_112bc489(void);
template<class... A> int FUN_112bc489(A...);
int FUN_112bcb17(void);
template<class... A> int FUN_112bcb17(A...);
int FUN_112bea49(void);
template<class... A> int FUN_112bea49(A...);
int FUN_112bebea(void);
template<class... A> int FUN_112bebea(A...);
int FUN_112bf820(void);
template<class... A> int FUN_112bf820(A...);
int FUN_112bfd01(void);
template<class... A> int FUN_112bfd01(A...);
int FUN_112c12d7(void);
template<class... A> int FUN_112c12d7(A...);
int FUN_112c2b30(int a1, int a2);
template<class... A> int FUN_112c2b30(A...);
int FUN_112c2be0(int a1, int a2);
template<class... A> int FUN_112c2be0(A...);
int FUN_112c2d30(int a1, int a2);
template<class... A> int FUN_112c2d30(A...);
int FUN_112c2fc0(int a1);
template<class... A> int FUN_112c2fc0(A...);
int FUN_112c3290(int a1);
template<class... A> int FUN_112c3290(A...);
int FUN_112c3380(unsigned char a1);
template<class... A> int FUN_112c3380(A...);
int FUN_112c33a0(int a1);
template<class... A> int FUN_112c33a0(A...);
int FUN_112c34a0(int a1);
template<class... A> int FUN_112c34a0(A...);
int FUN_112c46b0(int a1);
template<class... A> int FUN_112c46b0(A...);
int FUN_112c6b70(void);
template<class... A> int FUN_112c6b70(A...);
int FUN_112c8a10(unsigned char a1);
template<class... A> int FUN_112c8a10(A...);
int FUN_112c8a30(char a1);
template<class... A> int FUN_112c8a30(A...);
int FUN_112cb460(int a1);
template<class... A> int FUN_112cb460(A...);
int FUN_112d1970(int a1);
template<class... A> int FUN_112d1970(A...);
int FUN_112d3010(int a1);
template<class... A> int FUN_112d3010(A...);
int FUN_112d42e0(int a1);
template<class... A> int FUN_112d42e0(A...);
int FUN_112de59f(void);
template<class... A> int FUN_112de59f(A...);
int FUN_112e15e3(void);
template<class... A> int FUN_112e15e3(A...);
int FUN_112e1713(void);
template<class... A> int FUN_112e1713(A...);
int FUN_112eb750(int result);
template<class... A> int FUN_112eb750(A...);
int FUN_112eb770(int result);
template<class... A> int FUN_112eb770(A...);
int FUN_112ec1b0(int result);
template<class... A> int FUN_112ec1b0(A...);
int FUN_112ec1d0(int result);
template<class... A> int FUN_112ec1d0(A...);
int FUN_112ed7b0(void);
template<class... A> int FUN_112ed7b0(A...);
int FUN_112ed7f0(void);
template<class... A> int FUN_112ed7f0(A...);
int FUN_112f43d0(int a1, int result, int a3);
template<class... A> int FUN_112f43d0(A...);
int FUN_112f5cd0(int a1);
template<class... A> int FUN_112f5cd0(A...);
int FUN_112f5d20(int a1);
template<class... A> int FUN_112f5d20(A...);
int FUN_112f6e7e(void);
template<class... A> int FUN_112f6e7e(A...);
int FUN_112f727f(void);
template<class... A> int FUN_112f727f(A...);
int FUN_112f87b5(void);
template<class... A> int FUN_112f87b5(A...);
int FUN_112f8f20(int a1);
template<class... A> int FUN_112f8f20(A...);
int FUN_112f9060(int a1, int a2);
template<class... A> int FUN_112f9060(A...);
int FUN_112f9dfa(void);
template<class... A> int FUN_112f9dfa(A...);
int FUN_112faa9c(void);
template<class... A> int FUN_112faa9c(A...);
int FUN_112fb12a(void);
template<class... A> int FUN_112fb12a(A...);
int FUN_112fb1e4(void);
template<class... A> int FUN_112fb1e4(A...);
int FUN_112fb2a1(void);
template<class... A> int FUN_112fb2a1(A...);
int FUN_112fb2e0(int a1);
template<class... A> int FUN_112fb2e0(A...);
int FUN_112fc5f0(void);
template<class... A> int FUN_112fc5f0(A...);
int FUN_112fc691(void);
template<class... A> int FUN_112fc691(A...);
int FUN_112fc6c0(void);
template<class... A> int FUN_112fc6c0(A...);
int FUN_112fcde0(int a1);
template<class... A> int FUN_112fcde0(A...);
int FUN_112fcec0(int a1);
template<class... A> int FUN_112fcec0(A...);
int FUN_112fe5b0(int a1);
template<class... A> int FUN_112fe5b0(A...);
int FUN_112fe7b0(int a1, int a2);
template<class... A> int FUN_112fe7b0(A...);
int FUN_112ff660(int a1);
template<class... A> int FUN_112ff660(A...);
int FUN_112ff680(int a1);
template<class... A> int FUN_112ff680(A...);
int FUN_113019b0(void);
template<class... A> int FUN_113019b0(A...);
int FUN_11304270(int a1);
template<class... A> int FUN_11304270(A...);
int FUN_11305010(int a1);
template<class... A> int FUN_11305010(A...);
int FUN_113054c0(int a1);
template<class... A> int FUN_113054c0(A...);
int FUN_11309db7(void);
template<class... A> int FUN_11309db7(A...);
int FUN_1130bc50(int result);
template<class... A> int FUN_1130bc50(A...);
int FUN_1130f040(int a1);
template<class... A> int FUN_1130f040(A...);
int FUN_11311060(int a1);
template<class... A> int FUN_11311060(A...);
int FUN_113115e0(int a1, int result);
template<class... A> int FUN_113115e0(A...);
int FUN_11313150(int a1, int a2);
template<class... A> int FUN_11313150(A...);
unsigned short FUN_11313580(short a1);
template<class... A> unsigned short FUN_11313580(A...);
int FUN_11315df0(int a1);
template<class... A> int FUN_11315df0(A...);
int FUN_11318300(int result);
template<class... A> int FUN_11318300(A...);
int FUN_1131b4e0(int result);
template<class... A> int FUN_1131b4e0(A...);
int FUN_1131bf90(int a1, int a2);
template<class... A> int FUN_1131bf90(A...);
int FUN_1131d300(int a1, int a2);
template<class... A> int FUN_1131d300(A...);
int FUN_1131ea40(int a1, int a2);
template<class... A> int FUN_1131ea40(A...);
int FUN_11320740(int a1);
template<class... A> int FUN_11320740(A...);
int FUN_11321720(int a1);
template<class... A> int FUN_11321720(A...);
int FUN_11323830(int a1);
template<class... A> int FUN_11323830(A...);
int FUN_113244f0(int a1, int a2);
template<class... A> int FUN_113244f0(A...);
int FUN_11326320(int a1);
template<class... A> int FUN_11326320(A...);
int FUN_1132b048(void);
template<class... A> int FUN_1132b048(A...);
int FUN_1132f52c(void);
template<class... A> int FUN_1132f52c(A...);
int FUN_1132fa60(int a1);
template<class... A> int FUN_1132fa60(A...);
int FUN_113359f0(int a1);
template<class... A> int FUN_113359f0(A...);
int FUN_11338780(int a1);
template<class... A> int FUN_11338780(A...);
int FUN_11338cc0(int result);
template<class... A> int FUN_11338cc0(A...);
int FUN_11338d10(int a1);
template<class... A> int FUN_11338d10(A...);
int FUN_11338d30(void);
template<class... A> int FUN_11338d30(A...);
int FUN_11339750(int a1, int result);
template<class... A> int FUN_11339750(A...);
int FUN_1133a750(int a1);
template<class... A> int FUN_1133a750(A...);
int FUN_1133b150(int a1);
template<class... A> int FUN_1133b150(A...);
int FUN_1133b180(int a1, char a2);
template<class... A> int FUN_1133b180(A...);
int FUN_1133b1a0(int a1);
template<class... A> int FUN_1133b1a0(A...);
int FUN_1133b1b0(int result, char a2);
template<class... A> int FUN_1133b1b0(A...);
int FUN_1133b1c0(int a1);
template<class... A> int FUN_1133b1c0(A...);
int FUN_1133b750(int a1);
template<class... A> int FUN_1133b750(A...);
int FUN_1133b7e0(int a1);
template<class... A> int FUN_1133b7e0(A...);
int FUN_1133b810(int a1);
template<class... A> int FUN_1133b810(A...);
int FUN_1133b870(int a1);
template<class... A> int FUN_1133b870(A...);
int FUN_1133b890(int a1);
template<class... A> int FUN_1133b890(A...);
int FUN_1133b8a0(int a1);
template<class... A> int FUN_1133b8a0(A...);
int FUN_1133b9b0(int a1);
template<class... A> int FUN_1133b9b0(A...);
int FUN_1133c660(int a1);
template<class... A> int FUN_1133c660(A...);
int FUN_1133c670(int a1);
template<class... A> int FUN_1133c670(A...);
int FUN_1133c680(int a1);
template<class... A> int FUN_1133c680(A...);
int FUN_1133c6a0(int a1);
template<class... A> int FUN_1133c6a0(A...);
int FUN_1133c750(int a1);
template<class... A> int FUN_1133c750(A...);
int FUN_1133c7a0(int a1);
template<class... A> int FUN_1133c7a0(A...);
int FUN_1133cfe0(int a1);
template<class... A> int FUN_1133cfe0(A...);
int FUN_1133d4b0(int a1);
template<class... A> int FUN_1133d4b0(A...);
int FUN_1133d4c0(int a1, int a2, int a3, int a4);
template<class... A> int FUN_1133d4c0(A...);
int FUN_1133db40(int a1, int a2);
template<class... A> int FUN_1133db40(A...);
int FUN_1133e470(int result);
template<class... A> int FUN_1133e470(A...);
int FUN_11341000(int a1);
template<class... A> int FUN_11341000(A...);
int FUN_113433a0(int result);
template<class... A> int FUN_113433a0(A...);
int FUN_11345590(void);
template<class... A> int FUN_11345590(A...);
int FUN_1134a530(int result);
template<class... A> int FUN_1134a530(A...);
int FUN_1134bbd0(int a1);
template<class... A> int FUN_1134bbd0(A...);
int FUN_1134c3b0(void);
template<class... A> int FUN_1134c3b0(A...);
int FUN_11353030(int a1);
template<class... A> int FUN_11353030(A...);
int FUN_11354030(int a1, int a2);
template<class... A> int FUN_11354030(A...);
int FUN_11354530(int a1);
template<class... A> int FUN_11354530(A...);
int FUN_11357170(int a1);
template<class... A> int FUN_11357170(A...);
int FUN_11357190(unsigned char a1);
template<class... A> int FUN_11357190(A...);
int FUN_113577a0(int a1);
template<class... A> int FUN_113577a0(A...);
int FUN_113577c0(int a1);
template<class... A> int FUN_113577c0(A...);
int FUN_11357870(int a1);
template<class... A> int FUN_11357870(A...);
int FUN_11357ba0(int result);
template<class... A> int FUN_11357ba0(A...);
int FUN_11357bb0(int a1);
template<class... A> int FUN_11357bb0(A...);
int FUN_113592e0(int a1);
template<class... A> int FUN_113592e0(A...);
int FUN_11359720(int a1);
template<class... A> int FUN_11359720(A...);
int FUN_11359740(void);
template<class... A> int FUN_11359740(A...);
int FUN_11359760(void);
template<class... A> int FUN_11359760(A...);
int FUN_1135a1d0(int a1);
template<class... A> int FUN_1135a1d0(A...);
int FUN_1135a1e0(int a1);
template<class... A> int FUN_1135a1e0(A...);
int FUN_1135a330(int a1);
template<class... A> int FUN_1135a330(A...);
int FUN_1135a340(int a1);
template<class... A> int FUN_1135a340(A...);
int FUN_1135a390(int a1);
template<class... A> int FUN_1135a390(A...);
int FUN_1135a3b0(int result);
template<class... A> int FUN_1135a3b0(A...);
int FUN_1135a3d0(int a1);
template<class... A> int FUN_1135a3d0(A...);
int FUN_1135a3f0(int a1);
template<class... A> int FUN_1135a3f0(A...);
int FUN_1135a410(int a1);
template<class... A> int FUN_1135a410(A...);
int FUN_1135a570(int a1);
template<class... A> int FUN_1135a570(A...);
int FUN_1135a590(int a1);
template<class... A> int FUN_1135a590(A...);
int FUN_1135a6d0(int a1);
template<class... A> int FUN_1135a6d0(A...);
int FUN_1135a6f0(int a1);
template<class... A> int FUN_1135a6f0(A...);
int FUN_1135a710(int a1);
template<class... A> int FUN_1135a710(A...);
int FUN_1135a730(int a1);
template<class... A> int FUN_1135a730(A...);
int FUN_1135a750(int a1);
template<class... A> int FUN_1135a750(A...);
int FUN_1135a770(int a1);
template<class... A> int FUN_1135a770(A...);
int FUN_1135a7b0(int a1, int a2, int a3);
template<class... A> int FUN_1135a7b0(A...);
int FUN_1135a800(int a1);
template<class... A> int FUN_1135a800(A...);
int FUN_1135b630(int a1, int a2);
template<class... A> int FUN_1135b630(A...);
int FUN_1135b6e0(int a1);
template<class... A> int FUN_1135b6e0(A...);
int FUN_1135b7c0(int a1);
template<class... A> int FUN_1135b7c0(A...);
int FUN_1135b7d0(int a1);
template<class... A> int FUN_1135b7d0(A...);
int FUN_1135b890(int a1, int result);
template<class... A> int FUN_1135b890(A...);
int FUN_1135c590(int a1, int result);
template<class... A> int FUN_1135c590(A...);
int FUN_1135c610(int a1);
template<class... A> int FUN_1135c610(A...);
int FUN_1135c630(int a1, int a2, short a3);
template<class... A> int FUN_1135c630(A...);
int FUN_1135d4f0(int a1);
template<class... A> int FUN_1135d4f0(A...);
int FUN_1135d500(int result, int a2);
template<class... A> int FUN_1135d500(A...);
int FUN_1135d510(int result);
template<class... A> int FUN_1135d510(A...);
int FUN_1135d5f0(int a1);
template<class... A> int FUN_1135d5f0(A...);
int FUN_1135e0a0(int a1);
template<class... A> int FUN_1135e0a0(A...);
int FUN_1135e270(int a1);
template<class... A> int FUN_1135e270(A...);
int FUN_1135e5a0(int a1, int a2);
template<class... A> int FUN_1135e5a0(A...);
int FUN_1135e9e0(int result);
template<class... A> int FUN_1135e9e0(A...);
int FUN_1135ea00(int a1);
template<class... A> int FUN_1135ea00(A...);
int FUN_11363ca0(int result, int a2);
template<class... A> int FUN_11363ca0(A...);
int FUN_1136a9f0(int a1, int a2);
template<class... A> int FUN_1136a9f0(A...);
int FUN_1136b280(int a1);
template<class... A> int FUN_1136b280(A...);
int FUN_1136b2b0(int a1, int a2);
template<class... A> int FUN_1136b2b0(A...);
int FUN_1136b660(int result);
template<class... A> int FUN_1136b660(A...);
int FUN_1136c950(int a1, int result);
template<class... A> int FUN_1136c950(A...);
int FUN_1136c970(int result, uint a2);
template<class... A> int FUN_1136c970(A...);
int FUN_1136c9c0(int a1);
template<class... A> int FUN_1136c9c0(A...);
int FUN_1136d020(int result);
template<class... A> int FUN_1136d020(A...);
int FUN_1136d3a0(int a1);
template<class... A> int FUN_1136d3a0(A...);
int FUN_11371f60(int result);
template<class... A> int FUN_11371f60(A...);
int FUN_11372730(int a1, int a2);
template<class... A> int FUN_11372730(A...);
int FUN_11372dc0(int result);
template<class... A> int FUN_11372dc0(A...);
int FUN_11372f40(int a1);
template<class... A> int FUN_11372f40(A...);
int FUN_1137a286(int a1);
template<class... A> int FUN_1137a286(A...);
int FUN_1137dbd0(int a1);
template<class... A> int FUN_1137dbd0(A...);
int FUN_1137e010(int a1, int a2);
template<class... A> int FUN_1137e010(A...);
int FUN_1137e060(int a1);
template<class... A> int FUN_1137e060(A...);
int FUN_1137ec80(int a1, int result, short a3);
template<class... A> int FUN_1137ec80(A...);
int FUN_1137f890(unsigned char a1);
template<class... A> int FUN_1137f890(A...);
int FUN_1137f8e0(int a1);
template<class... A> int FUN_1137f8e0(A...);
int FUN_1137f950(int a1, int a2, int a3);
template<class... A> int FUN_1137f950(A...);
int FUN_11380580(int result);
template<class... A> int FUN_11380580(A...);
int FUN_113805d0(int result);
template<class... A> int FUN_113805d0(A...);
int FUN_11380640(int result);
template<class... A> int FUN_11380640(A...);
int FUN_11380a30(uint a1);
template<class... A> int FUN_11380a30(A...);
int FUN_11380a50(int result, int a2);
template<class... A> int FUN_11380a50(A...);
int FUN_11381bb0(int a1, int result);
template<class... A> int FUN_11381bb0(A...);
int FUN_11382850(int a1);
template<class... A> int FUN_11382850(A...);
int FUN_11383470(int a1);
template<class... A> int FUN_11383470(A...);
int FUN_11383c80(int a1);
template<class... A> int FUN_11383c80(A...);
int FUN_11384140(int a1);
template<class... A> int FUN_11384140(A...);
int FUN_11384dc0(int a1);
template<class... A> int FUN_11384dc0(A...);
int FUN_11384de0(int a1, int a2, int a3);
template<class... A> int FUN_11384de0(A...);
int FUN_11385120(int result);
template<class... A> int FUN_11385120(A...);
int FUN_113855b0(int a1);
template<class... A> int FUN_113855b0(A...);
int FUN_11389db0(int a1);
template<class... A> int FUN_11389db0(A...);
int FUN_1138a120(int a1);
template<class... A> int FUN_1138a120(A...);
int FUN_1139c2a0(int a1);
template<class... A> int FUN_1139c2a0(A...);
int FUN_1139d410(int a1);
template<class... A> int FUN_1139d410(A...);
int FUN_1139ecc0(uint a1, uint a2);
template<class... A> int FUN_1139ecc0(A...);
int FUN_113a0b60(int a1);
template<class... A> int FUN_113a0b60(A...);
int FUN_113a0d10(int a1);
template<class... A> int FUN_113a0d10(A...);
int FUN_113a5eb0(int a1);
template<class... A> int FUN_113a5eb0(A...);
int FUN_113a60b0(int a1);
template<class... A> int FUN_113a60b0(A...);
int FUN_113a6110(int a1);
template<class... A> int FUN_113a6110(A...);
int FUN_113a63b0(int a1);
template<class... A> int FUN_113a63b0(A...);
int FUN_113a7860(int a1);
template<class... A> int FUN_113a7860(A...);
int FUN_113a7870(int a1);
template<class... A> int FUN_113a7870(A...);
int FUN_113a7cb0(int result);
template<class... A> int FUN_113a7cb0(A...);
int FUN_113aec60(int a1);
template<class... A> int FUN_113aec60(A...);
int FUN_113b1760(int a1);
template<class... A> int FUN_113b1760(A...);
int FUN_113b57a0(ushort a1, ushort a2);
template<class... A> int FUN_113b57a0(A...);
int FUN_113beb60(int a1);
template<class... A> int FUN_113beb60(A...);
int FUN_113cd27d(void);
template<class... A> int FUN_113cd27d(A...);
int FUN_113d2b60(uint a1, uint a2);
template<class... A> int FUN_113d2b60(A...);
int FUN_113d3480(int a1);
template<class... A> int FUN_113d3480(A...);
int FUN_113d34c0(int a1);
template<class... A> int FUN_113d34c0(A...);
int FUN_113d34e0(int result);
template<class... A> int FUN_113d34e0(A...);
int FUN_113d3500(int result);
template<class... A> int FUN_113d3500(A...);
int FUN_113d3520(int result);
template<class... A> int FUN_113d3520(A...);
int FUN_113d3540(int result);
template<class... A> int FUN_113d3540(A...);
int FUN_113d40f0(int a1);
template<class... A> int FUN_113d40f0(A...);
int FUN_113d43d0(int a1);
template<class... A> int FUN_113d43d0(A...);
int FUN_113d49a0(int a1);
template<class... A> int FUN_113d49a0(A...);
int FUN_113d4bc0(int a1);
template<class... A> int FUN_113d4bc0(A...);
int FUN_113d4d50(int a1);
template<class... A> int FUN_113d4d50(A...);
int FUN_113d51e0(int a1);
template<class... A> int FUN_113d51e0(A...);
int FUN_113d5550(int a1);
template<class... A> int FUN_113d5550(A...);
int FUN_113d6780(int a1);
template<class... A> int FUN_113d6780(A...);
int FUN_113d6f30(int a1);
template<class... A> int FUN_113d6f30(A...);
int FUN_113d8e60(void);
template<class... A> int FUN_113d8e60(A...);
int FUN_113d8e80(int a1, int a2);
template<class... A> int FUN_113d8e80(A...);
int FUN_113d9120(int a1);
template<class... A> int FUN_113d9120(A...);
int FUN_113da010(int a1);
template<class... A> int FUN_113da010(A...);
int FUN_113da030(int result);
template<class... A> int FUN_113da030(A...);
int FUN_113da050(int result);
template<class... A> int FUN_113da050(A...);
int FUN_113da070(int result);
template<class... A> int FUN_113da070(A...);
int FUN_113da090(int result);
template<class... A> int FUN_113da090(A...);
int FUN_113da0d0(int a1);
template<class... A> int FUN_113da0d0(A...);
int FUN_113da0e0(int a1);
template<class... A> int FUN_113da0e0(A...);
int FUN_113da180(int result, short a2);
template<class... A> int FUN_113da180(A...);
int FUN_113da190(int result, int a2);
template<class... A> int FUN_113da190(A...);
int FUN_113da1a0(int result, int a2, int a3);
template<class... A> int FUN_113da1a0(A...);
int FUN_113db7e0(int a1, int a2);
template<class... A> int FUN_113db7e0(A...);
int FUN_113dbe00(int a1);
template<class... A> int FUN_113dbe00(A...);
int FUN_113dc790(int a1);
template<class... A> int FUN_113dc790(A...);
int FUN_113dc7e0(int a1);
template<class... A> int FUN_113dc7e0(A...);
int FUN_113dcbb0(int result, int a2);
template<class... A> int FUN_113dcbb0(A...);
int FUN_113dcee0(int a1);
template<class... A> int FUN_113dcee0(A...);
int FUN_113dcf60(int a1);
template<class... A> int FUN_113dcf60(A...);
int FUN_113dcfa0(int a1);
template<class... A> int FUN_113dcfa0(A...);
int FUN_113df550(ushort a1);
template<class... A> int FUN_113df550(A...);
int FUN_113df590(ushort a1);
template<class... A> int FUN_113df590(A...);
int FUN_113dff30(int a1);
template<class... A> int FUN_113dff30(A...);
int FUN_113e04a1(void);
template<class... A> int FUN_113e04a1(A...);
int FUN_113e27c0(int a1);
template<class... A> int FUN_113e27c0(A...);
int FUN_113e27e0(int a1);
template<class... A> int FUN_113e27e0(A...);
int FUN_113e2800(int a1);
template<class... A> int FUN_113e2800(A...);
int FUN_113e2830(int a1);
template<class... A> int FUN_113e2830(A...);
int FUN_113e2ad0(int a1, int a2, int a3);
template<class... A> int FUN_113e2ad0(A...);
int FUN_113e2ca0(int result, short a2);
template<class... A> int FUN_113e2ca0(A...);
int FUN_113e2cb0(int result, int a2);
template<class... A> int FUN_113e2cb0(A...);
int FUN_113e30e0(int a1);
template<class... A> int FUN_113e30e0(A...);
int FUN_113e42b0(int a1);
template<class... A> int FUN_113e42b0(A...);
int FUN_113e4f50(int result, int a2);
template<class... A> int FUN_113e4f50(A...);
int FUN_113e4f60(int a1);
template<class... A> int FUN_113e4f60(A...);
int FUN_113e4f80(int a1);
template<class... A> int FUN_113e4f80(A...);
int FUN_113e4fa0(int a1);
template<class... A> int FUN_113e4fa0(A...);
int FUN_113e6460(int a1);
template<class... A> int FUN_113e6460(A...);
int FUN_113e76fe(void);
template<class... A> int FUN_113e76fe(A...);
int FUN_113e77e0(char a1);
template<class... A> int FUN_113e77e0(A...);
int FUN_113e7810(int a1, uint a2);
template<class... A> int FUN_113e7810(A...);
int FUN_113e7b80(int a1);
template<class... A> int FUN_113e7b80(A...);
int FUN_113e8000(uint a1, int a2);
template<class... A> int FUN_113e8000(A...);
int FUN_113e81dd(void);
template<class... A> int FUN_113e81dd(A...);
int FUN_113e87b0(int a1);
template<class... A> int FUN_113e87b0(A...);
int FUN_113e8e40(int a1);
template<class... A> int FUN_113e8e40(A...);
int FUN_113e8e60(int a1);
template<class... A> int FUN_113e8e60(A...);
int FUN_113e90f0(int a1);
template<class... A> int FUN_113e90f0(A...);
int FUN_113e9110(int a1);
template<class... A> int FUN_113e9110(A...);
int FUN_113e91d0(int a1);
template<class... A> int FUN_113e91d0(A...);
int FUN_113e9e8c(void);
template<class... A> int FUN_113e9e8c(A...);
int FUN_113e9ec0(void);
template<class... A> int FUN_113e9ec0(A...);
int FUN_113e9ee0(int result);
template<class... A> int FUN_113e9ee0(A...);
int FUN_113ea1e0(int a1);
template<class... A> int FUN_113ea1e0(A...);
int FUN_113ea200(int result, short a2);
template<class... A> int FUN_113ea200(A...);
int FUN_113ea2c0(int a1);
template<class... A> int FUN_113ea2c0(A...);
int FUN_113ea370(int a1);
template<class... A> int FUN_113ea370(A...);
int FUN_113ea900(int result, int a2);
template<class... A> int FUN_113ea900(A...);
int FUN_113ea910(int a1);
template<class... A> int FUN_113ea910(A...);
int FUN_113eae20(ushort a1);
template<class... A> int FUN_113eae20(A...);
int FUN_113eae60(ushort a1);
template<class... A> int FUN_113eae60(A...);
int FUN_113eaec0(int a1);
template<class... A> int FUN_113eaec0(A...);
int FUN_113eb6d0(int a1, int a2, int a3);
template<class... A> int FUN_113eb6d0(A...);
int FUN_113ed520(int a1);
template<class... A> int FUN_113ed520(A...);
int FUN_113ed550(int a1);
template<class... A> int FUN_113ed550(A...);
int FUN_113ed640(int a1);
template<class... A> int FUN_113ed640(A...);
int FUN_113ed660(int result, short a2);
template<class... A> int FUN_113ed660(A...);
int FUN_113ed670(int result, int a2);
template<class... A> int FUN_113ed670(A...);
int FUN_113ed7e0(int a1);
template<class... A> int FUN_113ed7e0(A...);
int FUN_113ed7f0(int a1);
template<class... A> int FUN_113ed7f0(A...);
int FUN_113edc20(int result, int a2);
template<class... A> int FUN_113edc20(A...);
int FUN_113edc30(int a1);
template<class... A> int FUN_113edc30(A...);
int FUN_113edc50(int a1);
template<class... A> int FUN_113edc50(A...);
int FUN_113ede70(ushort a1);
template<class... A> int FUN_113ede70(A...);
int FUN_113edeb0(ushort a1);
template<class... A> int FUN_113edeb0(A...);
int FUN_113edf10(int a1);
template<class... A> int FUN_113edf10(A...);
int FUN_113ee43b(void);
template<class... A> int FUN_113ee43b(A...);
int FUN_113ef800(int a1, int a2);
template<class... A> int FUN_113ef800(A...);
int FUN_113efb80(int a1, int a2);
template<class... A> int FUN_113efb80(A...);
int FUN_113efbc0(int a1, int a2, int a3);
template<class... A> int FUN_113efbc0(A...);
int FUN_113efc10(int a1, int a2, int a3);
template<class... A> int FUN_113efc10(A...);
int FUN_113efd3d(void);
template<class... A> int FUN_113efd3d(A...);
int FUN_113f14e0(int a1);
template<class... A> int FUN_113f14e0(A...);
int FUN_113f1520(int a1);
template<class... A> int FUN_113f1520(A...);
int FUN_113f1540(int result, short a2);
template<class... A> int FUN_113f1540(A...);
int FUN_113f1550(int result, int a2);
template<class... A> int FUN_113f1550(A...);
int FUN_113f1590(int a1, int a2);
template<class... A> int FUN_113f1590(A...);
int FUN_113f15b0(int a1);
template<class... A> int FUN_113f15b0(A...);
int FUN_113f15c0(int a1);
template<class... A> int FUN_113f15c0(A...);
int FUN_113f15e0(int a1);
template<class... A> int FUN_113f15e0(A...);
int FUN_113f1600(int a1);
template<class... A> int FUN_113f1600(A...);
int FUN_113f1670(int a1);
template<class... A> int FUN_113f1670(A...);
int FUN_113f1680(int result, int a2);
template<class... A> int FUN_113f1680(A...);
int FUN_113f1690(int a1);
template<class... A> int FUN_113f1690(A...);
int FUN_113f1dc0(int a1, char a2);
template<class... A> int FUN_113f1dc0(A...);
int FUN_113f1de0(int a1);
template<class... A> int FUN_113f1de0(A...);
int FUN_113f1e40(int a1);
template<class... A> int FUN_113f1e40(A...);
int FUN_113f1e60(int a1, char a2);
template<class... A> int FUN_113f1e60(A...);
int FUN_113f1e80(int a1, int a2);
template<class... A> int FUN_113f1e80(A...);
int FUN_113f1ea0(int a1, char a2);
template<class... A> int FUN_113f1ea0(A...);
int FUN_113f1ec0(int a1);
template<class... A> int FUN_113f1ec0(A...);
int FUN_113f1ee0(int a1, int a2);
template<class... A> int FUN_113f1ee0(A...);
int FUN_113f2950(int a1);
template<class... A> int FUN_113f2950(A...);
int FUN_113f2970(int a1);
template<class... A> int FUN_113f2970(A...);
int FUN_113f5cb0(int a1);
template<class... A> int FUN_113f5cb0(A...);
int FUN_113f5cd0(int result, short a2);
template<class... A> int FUN_113f5cd0(A...);
int FUN_113f5ce0(int result, int a2);
template<class... A> int FUN_113f5ce0(A...);
int FUN_113f5d50(int a1);
template<class... A> int FUN_113f5d50(A...);
int FUN_113f5d70(int a1, int a2);
template<class... A> int FUN_113f5d70(A...);
int FUN_113f5d90(int a1);
template<class... A> int FUN_113f5d90(A...);
int FUN_113f5da0(int a1);
template<class... A> int FUN_113f5da0(A...);
int FUN_113f5dc0(int a1);
template<class... A> int FUN_113f5dc0(A...);
int FUN_113f5dd0(int a1);
template<class... A> int FUN_113f5dd0(A...);
int FUN_113f5de0(int result, int a2);
template<class... A> int FUN_113f5de0(A...);
int FUN_113f68d0(int a1, char a2);
template<class... A> int FUN_113f68d0(A...);
int FUN_113f68f0(int a1);
template<class... A> int FUN_113f68f0(A...);
int FUN_113f6910(int a1);
template<class... A> int FUN_113f6910(A...);
int FUN_113f6930(int a1);
template<class... A> int FUN_113f6930(A...);
int FUN_113f6950(int a1, char a2);
template<class... A> int FUN_113f6950(A...);
int FUN_113f6970(int a1);
template<class... A> int FUN_113f6970(A...);
int FUN_113f6990(int a1);
template<class... A> int FUN_113f6990(A...);
int FUN_113f69f0(int a1);
template<class... A> int FUN_113f69f0(A...);
int FUN_113f6a10(int a1, char a2);
template<class... A> int FUN_113f6a10(A...);
int FUN_113f6a30(int a1, int a2);
template<class... A> int FUN_113f6a30(A...);
int FUN_113f6a50(int a1, char a2);
template<class... A> int FUN_113f6a50(A...);
int FUN_113f6a70(int a1);
template<class... A> int FUN_113f6a70(A...);
int FUN_113f6a90(int a1, int a2);
template<class... A> int FUN_113f6a90(A...);
int FUN_113f6ae0(ushort a1);
template<class... A> int FUN_113f6ae0(A...);
int FUN_113f6c90(int a1, int a2);
template<class... A> int FUN_113f6c90(A...);
int FUN_113f8e50(int a1);
template<class... A> int FUN_113f8e50(A...);
int FUN_113f9e0c(void);
template<class... A> int FUN_113f9e0c(A...);
int FUN_113fab70(int result, short a2);
template<class... A> int FUN_113fab70(A...);
int FUN_113fab80(int result, int a2);
template<class... A> int FUN_113fab80(A...);
int FUN_113fabc0(int a1);
template<class... A> int FUN_113fabc0(A...);
int FUN_113fabe0(int a1, int a2);
template<class... A> int FUN_113fabe0(A...);
int FUN_113fac00(int a1);
template<class... A> int FUN_113fac00(A...);
int FUN_113fac20(int a1);
template<class... A> int FUN_113fac20(A...);
int FUN_113fac40(int a1);
template<class... A> int FUN_113fac40(A...);
int FUN_113fac50(int result, int a2);
template<class... A> int FUN_113fac50(A...);
int FUN_113faf20(int a1);
template<class... A> int FUN_113faf20(A...);
int FUN_113fbdc0(int result);
template<class... A> int FUN_113fbdc0(A...);
int FUN_113fbde0(int a1);
template<class... A> int FUN_113fbde0(A...);
int FUN_113fdb40(int a1, char a2);
template<class... A> int FUN_113fdb40(A...);
int FUN_113fdb60(int a1);
template<class... A> int FUN_113fdb60(A...);
int FUN_113fdb80(int a1);
template<class... A> int FUN_113fdb80(A...);
int FUN_113fdd30(int a1);
template<class... A> int FUN_113fdd30(A...);
int FUN_113fdf60(int result, int a2);
template<class... A> int FUN_113fdf60(A...);
int FUN_113fdf70(int result, short a2);
template<class... A> int FUN_113fdf70(A...);
int FUN_113feed0(int a1);
template<class... A> int FUN_113feed0(A...);
int FUN_113fef00(int a1);
template<class... A> int FUN_113fef00(A...);
int FUN_113fef10(int result, short a2);
template<class... A> int FUN_113fef10(A...);
int FUN_113fef20(int result, int a2);
template<class... A> int FUN_113fef20(A...);
int FUN_113ff000(int a1);
template<class... A> int FUN_113ff000(A...);
int FUN_113fffd0(ushort a1);
template<class... A> int FUN_113fffd0(A...);
int FUN_11400850(int result);
template<class... A> int FUN_11400850(A...);
int FUN_11400870(int result, int a2);
template<class... A> int FUN_11400870(A...);
int FUN_114008b0(int result, short a2);
template<class... A> int FUN_114008b0(A...);
int FUN_114012ec(void);
template<class... A> int FUN_114012ec(A...);
int FUN_11405ac0(int a1, int a2);
template<class... A> int FUN_11405ac0(A...);
int FUN_11405ae0(int a1, int a2);
template<class... A> int FUN_11405ae0(A...);
int FUN_11408690(int a1);
template<class... A> int FUN_11408690(A...);
int FUN_114095e0(uint a1);
template<class... A> int FUN_114095e0(A...);
int FUN_1140a1b0(int result, int a2);
template<class... A> int FUN_1140a1b0(A...);
int FUN_1140a6b4(void);
template<class... A> int FUN_1140a6b4(A...);
int FUN_1140ab90(int a1);
template<class... A> int FUN_1140ab90(A...);
int FUN_1140abb0(int a1);
template<class... A> int FUN_1140abb0(A...);
int FUN_1140b670(int a1, int result);
template<class... A> int FUN_1140b670(A...);
int FUN_1140bdb0(int result, int a2);
template<class... A> int FUN_1140bdb0(A...);
int FUN_1140bdf0(int result, int a2);
template<class... A> int FUN_1140bdf0(A...);
int FUN_1140be00(int result, short a2);
template<class... A> int FUN_1140be00(A...);
int FUN_1140d9f0(int result, int a2);
template<class... A> int FUN_1140d9f0(A...);
int FUN_1140e9c0(int result, int a2);
template<class... A> int FUN_1140e9c0(A...);
int FUN_1140ffa0(int result, int a2);
template<class... A> int FUN_1140ffa0(A...);
int FUN_11411370(int result, int a2);
template<class... A> int FUN_11411370(A...);
int FUN_11411a70(int a1, int a2, int a3);
template<class... A> int FUN_11411a70(A...);
int FUN_11412610(int a1);
template<class... A> int FUN_11412610(A...);
int FUN_11412630(int a1);
template<class... A> int FUN_11412630(A...);
int FUN_114127c0(int result);
template<class... A> int FUN_114127c0(A...);
int FUN_114127e0(int result);
template<class... A> int FUN_114127e0(A...);
int FUN_11413160(int a1);
template<class... A> int FUN_11413160(A...);
int FUN_114131a0(int a1);
template<class... A> int FUN_114131a0(A...);
int FUN_114131b0(int a1, int a2);
template<class... A> int FUN_114131b0(A...);
int FUN_114131c0(int a1, int a2, int a3);
template<class... A> int FUN_114131c0(A...);
int FUN_114136a0(int a1);
template<class... A> int FUN_114136a0(A...);
int FUN_11413700(int a1);
template<class... A> int FUN_11413700(A...);
int FUN_11413710(int a1, int a2, int a3);
template<class... A> int FUN_11413710(A...);
int FUN_11413780(int a1, int a2, int a3);
template<class... A> int FUN_11413780(A...);
int FUN_11418c90(int a1);
template<class... A> int FUN_11418c90(A...);
int FUN_11418fb0(int a1);
template<class... A> int FUN_11418fb0(A...);
int FUN_11419000(int a1);
template<class... A> int FUN_11419000(A...);
int FUN_11419040(int a1, int a2);
template<class... A> int FUN_11419040(A...);
int FUN_11419050(int a1, int a2, int a3);
template<class... A> int FUN_11419050(A...);
int FUN_11419410(int a1, int a2, int a3);
template<class... A> int FUN_11419410(A...);
int FUN_11419510(int a1);
template<class... A> int FUN_11419510(A...);
int FUN_11419530(int a1);
template<class... A> int FUN_11419530(A...);
int FUN_1141eb20(int a1);
template<class... A> int FUN_1141eb20(A...);
int FUN_1141f590(int a1);
template<class... A> int FUN_1141f590(A...);
int FUN_11423010(int result, int a2);
template<class... A> int FUN_11423010(A...);
int FUN_11425b70(int a1);
template<class... A> int FUN_11425b70(A...);
int FUN_11425b90(int result, int a2);
template<class... A> int FUN_11425b90(A...);
int FUN_114262b0(int a1);
template<class... A> int FUN_114262b0(A...);
int FUN_11429440(int a1, int a2);
template<class... A> int FUN_11429440(A...);
int FUN_11429ae0(int a1);
template<class... A> int FUN_11429ae0(A...);
int FUN_11429b10(int a1);
template<class... A> int FUN_11429b10(A...);
int FUN_11429b80(int a1);
template<class... A> int FUN_11429b80(A...);
int FUN_11429bf0(int a1);
template<class... A> int FUN_11429bf0(A...);
int FUN_11429c20(int a1);
template<class... A> int FUN_11429c20(A...);
int FUN_11429c50(int a1);
template<class... A> int FUN_11429c50(A...);
int FUN_11429c80(int a1);
template<class... A> int FUN_11429c80(A...);
int FUN_11429cb0(int a1);
template<class... A> int FUN_11429cb0(A...);
int FUN_11429db0(int a1);
template<class... A> int FUN_11429db0(A...);
int FUN_11429de0(int a1);
template<class... A> int FUN_11429de0(A...);
int FUN_11429e10(int a1);
template<class... A> int FUN_11429e10(A...);
int FUN_11429e40(int a1);
template<class... A> int FUN_11429e40(A...);
int FUN_11429ec0(int a1);
template<class... A> int FUN_11429ec0(A...);
int FUN_11429f50(int a1);
template<class... A> int FUN_11429f50(A...);
int FUN_11429f80(int a1);
template<class... A> int FUN_11429f80(A...);
int FUN_11429fb0(int a1);
template<class... A> int FUN_11429fb0(A...);
int FUN_1142a1d0(int a1);
template<class... A> int FUN_1142a1d0(A...);
int FUN_1142a1f0(int a1);
template<class... A> int FUN_1142a1f0(A...);
int FUN_1142a2a0(int a1);
template<class... A> int FUN_1142a2a0(A...);
int FUN_1142a310(int a1);
template<class... A> int FUN_1142a310(A...);
int FUN_1142a4c0(int a1);
template<class... A> int FUN_1142a4c0(A...);
int FUN_1142a550(int a1);
template<class... A> int FUN_1142a550(A...);
int FUN_1142a5e0(int a1);
template<class... A> int FUN_1142a5e0(A...);
int FUN_1142a610(int a1);
template<class... A> int FUN_1142a610(A...);
int FUN_1142a6a0(int a1);
template<class... A> int FUN_1142a6a0(A...);
int FUN_1142a730(int a1);
template<class... A> int FUN_1142a730(A...);
int FUN_1142a840(int a1);
template<class... A> int FUN_1142a840(A...);
int FUN_1142a860(int a1);
template<class... A> int FUN_1142a860(A...);
int FUN_1142ab10(int a1);
template<class... A> int FUN_1142ab10(A...);
int FUN_1142ab30(int a1);
template<class... A> int FUN_1142ab30(A...);
int FUN_1142c9d6(void);
template<class... A> int FUN_1142c9d6(A...);
int FUN_1142d8d0(int a1);
template<class... A> int FUN_1142d8d0(A...);
int FUN_1142dfb0(int a1);
template<class... A> int FUN_1142dfb0(A...);
int FUN_1142e037(void);
template<class... A> int FUN_1142e037(A...);
int FUN_1142fe00(uint a1);
template<class... A> int FUN_1142fe00(A...);
int FUN_11430560(int a1, int a2, int a3);
template<class... A> int FUN_11430560(A...);
int FUN_114322b0(int result, short a2);
template<class... A> int FUN_114322b0(A...);
int FUN_114338a0(int a1);
template<class... A> int FUN_114338a0(A...);
int FUN_11434a40(int a1, int a2);
template<class... A> int FUN_11434a40(A...);
int FUN_11435160(int a1);
template<class... A> int FUN_11435160(A...);
int FUN_11435180(int a1);
template<class... A> int FUN_11435180(A...);
int FUN_11435190(int a1, int a2, int a3);
template<class... A> int FUN_11435190(A...);
int FUN_11435760(int a1, int a2, int a3);
template<class... A> int FUN_11435760(A...);
int FUN_11435940(int result, int a2);
template<class... A> int FUN_11435940(A...);
int FUN_11437930(int a1);
template<class... A> int FUN_11437930(A...);
int FUN_1143aa60(int a1);
template<class... A> int FUN_1143aa60(A...);
int FUN_1143e6e0(int a1);
template<class... A> int FUN_1143e6e0(A...);
int FUN_11440230(int result, short a2);
template<class... A> int FUN_11440230(A...);
int FUN_11440520(int a1);
template<class... A> int FUN_11440520(A...);
// Reference entry 10006601; body size 12 bytes.
#line 1 "ENTRY_10006601"
int FUN_10006601(void) {

    int v1; // (int)((int(*)(void))&FUN_10006601<>)
    return (int)(v1 - 0x27e90022);
}

// Reference entry 10007819; body size 11 bytes.
#line 1 "ENTRY_10007819"
int FUN_10007819(void) {

    int result; // (int)((int(*)(void))&FUN_10007819<>)
    return (int)(result);
}

// Reference entry 10007afc; body size 7 bytes.
#line 1 "ENTRY_10007afc"
int FUN_10007afc(void) {

    int result; // (int)((int(*)(void))&FUN_10007afc<>)
    int v1 = (int)(result);
    *(char*)v1 = (char)((int)((char)v1 - (char)result));
    return (int)(result);
}

// Reference entry 10008a41; body size 13 bytes.
#line 1 "ENTRY_10008a41"
int FUN_10008a41(void) {

    int v1; // (int)((int(*)(void))&FUN_10008a41<>)
    uint v2 = (uint)(v1);
    int result = (int)(18 * v2 / 256 + v2 & 255 | v2 & -0x10000); // (int)((int(*)(void))&FUN_10008a41<>)
    uint v3 = (uint)(2 * v1); // (int)&FUN_10008a43
    if (v3 < v1 || v3 == 0) {
        return (int)(*(int *)v3 | result);
    }
    return (int)(result);
}

// Reference entry 1000ba26; body size 7 bytes.
#line 1 "ENTRY_1000ba26"
int FUN_1000ba26(void) {

    int v1; // (int)((int(*)(void))&FUN_1000ba26<>)
    int result = (int)(v1);
    bool v2; // (int)((int(*)(void))&FUN_1000ba26<>)
    *(int*)result = (int)((int)(2 * result | (int)v2));
    return (int)(result);
}

// Reference entry 1000cb4d; body size 11 bytes.
#line 1 "ENTRY_1000cb4d"
int FUN_1000cb4d(void) {

    int result; // (int)((int(*)(void))&FUN_1000cb4d<>)
    return (int)(result);
}

// Reference entry 1000e8a2; body size 7 bytes.
#line 1 "ENTRY_1000e8a2"
int FUN_1000e8a2(void) {

    int v1; // (int)((int(*)(void))&FUN_1000e8a2<>)
    uint result = (uint)(v1);
    uint v2 = (uint)((uint)v1 % 32); // (int)((int(*)(void))&FUN_1000e8a2<>)
    if (v2 != 0) {
        *(int*)result = (int)((uint)(result >> 32 - v2 | result << v2));
    }
    return (int)(result);
}

// Reference entry 100109c1; body size 8 bytes.
#line 1 "ENTRY_100109c1"
int FUN_100109c1(void) {

    return (int)(0);
}

// Reference entry 10010c41; body size 8 bytes.
#line 1 "ENTRY_10010c41"
int FUN_10010c41(void) {

    int result; // (int)((int(*)(void))&FUN_10010c41<>)
    return (int)(result);
}

// Reference entry 10015bf1; body size 13 bytes.
#line 1 "ENTRY_10015bf1"
int FUN_10015bf1(void) {

    int result; // (int)((int(*)(void))&FUN_10015bf1<>)
    uint v1 = (uint)(result);
    unsigned char v2 = (unsigned char)((char)v1); // (int)&FUN_10015bf3
    bool v3; // (int)((int(*)(void))&FUN_10015bf1<>)
    unsigned char v4 = (unsigned char)((char)(v1 / 256) + v2 - (char)result + (char)v3); // (int)&FUN_10015bf3
    if (v4 < v2 || v4 == 0) {
        return (int)(result & -256);
    }
    return (int)(result);
}

// Reference entry 10016ff2; body size 7 bytes.
#line 1 "ENTRY_10016ff2"
int FUN_10016ff2(void) {

    int result; // (int)((int(*)(void))&FUN_10016ff2<>)
    *(int*)result = (int)((int)(0));
    return (int)(result);
}

// Reference entry 100199e1; body size 7 bytes.
#line 1 "ENTRY_100199e1"
int FUN_100199e1(void) {

    int result; // (int)((int(*)(void))&FUN_100199e1<>)
    return (int)(result);
}

// Reference entry 1001b7af; body size 7 bytes.
#line 1 "ENTRY_1001b7af"
int FUN_1001b7af(void) {

    int result; // (int)((int(*)(void))&FUN_1001b7af<>)
    *(int*)result = (int)((int)(0));
    return (int)(result);
}

// Reference entry 1001c178; body size 7 bytes.
#line 1 "ENTRY_1001c178"
int FUN_1001c178(void) {

    int v1; // (int)((int(*)(void))&FUN_1001c178<>)
    int v2 = (int)(v1);
    bool v3; // (int)((int(*)(void))&FUN_1001c178<>)
    return (int)((v2 - (int)v3) % 256 | v2 & -256);
}

// Reference entry 1001c8c6; body size 7 bytes.
#line 1 "ENTRY_1001c8c6"
int FUN_1001c8c6(void) {

    int v1; // (int)((int(*)(void))&FUN_1001c8c6<>)
    return (int)(v1 + 1);
}

// Reference entry 1001cc36; body size 7 bytes.
#line 1 "ENTRY_1001cc36"
int FUN_1001cc36(void) {

    bool result; // (int)((int(*)(void))&FUN_1001cc36<>)
    return (int)(result);
}

// Reference entry 1001dc8a; body size 7 bytes.
#line 1 "ENTRY_1001dc8a"
int FUN_1001dc8a(void) {

    int result; // (int)((int(*)(void))&FUN_1001dc8a<>)
    int v1 = (int)(result);
    *(char*)v1 = (char)((int)((char)(result & v1)));
    return (int)(result);
}

// Reference entry 1001e5e0; body size 7 bytes.
#line 1 "ENTRY_1001e5e0"
int FUN_1001e5e0(void) {

    int v1; // (int)((int(*)(void))&FUN_1001e5e0<>)
    bool v2; // (int)((int(*)(void))&FUN_1001e5e0<>)
    return (int)(2 * v1 + (int)v2);
}

// Reference entry 1001e86a; body size 22 bytes.
#line 1 "ENTRY_1001e86a"
int FUN_1001e86a(void) {

    int v1; // (int)((int(*)(void))&FUN_1001e86a<>)
    uint v2 = (uint)(v1);
    int v3 = (int)(v1);
    unsigned char v4 = (unsigned char)((char)v2); // (int)&FUN_1001e86b
    unsigned char v5 = (unsigned char)((char)(v2 / 256)); // (int)&FUN_1001e86b
    unsigned char v6 = (unsigned char)((char)v3); // (int)&FUN_1001e86d
    bool v7 = (bool)(v6 > 153 | -1 - v4 < v5);
    int v8; // (int)((int(*)(void))&FUN_1001e86a<>)
    if ((v6 & 14) > 9 || v5 % 16 + v4 % 16 > 15) {
        v8 = (int)(((v7 ? 154 : 250) + v3) % 256 | v3 & -256);
    } else {
        v8 = (int)((v7 ? v3 + 160 : v3) % 256 | v3 & -256);
    }
    int v9 = (int)(v8);
    return (int)(-255 * v9 & 0xff00 | v9 & -0xff01);
}

// Reference entry 10020c96; body size 7 bytes.
#line 1 "ENTRY_10020c96"
int FUN_10020c96(void) {

    int result; // (int)((int(*)(void))&FUN_10020c96<>)
    return (int)(result);
}

// Reference entry 10021d9f; body size 21 bytes.
#line 1 "ENTRY_10021d9f"
int FUN_10021d9f(void) {

    int result; // (int)((int(*)(void))&FUN_10021d9f<>)
char *v1 = (char *)((char)((char *)(result - 0x13391700))); // (int)&FUN_10021da2
    *v1 = (char)(*v1 & (char)(result / 256));
    return (int)(result);
}

// Reference entry 10023135; body size 7 bytes.
#line 1 "ENTRY_10023135"
int FUN_10023135(void) {

    int v1; // (int)((int(*)(void))&FUN_10023135<>)
    int v2 = (int)(v1);
    return (int)((v2 + 1) % 256 | v2 & -256);
}

// Reference entry 100237a1; body size 8 bytes.
#line 1 "ENTRY_100237a1"
int FUN_100237a1(void) {

    int result; // (int)((int(*)(void))&FUN_100237a1<>)
    return (int)(result);
}

// Reference entry 100246f1; body size 18 bytes.
#line 1 "ENTRY_100246f1"
int FUN_100246f1(void) {

    int result; // (int)((int(*)(void))&FUN_100246f1<>)
    int v1 = (int)(2 * result);
    *(int*)result = (int)((int)(v1));
int *v2 = (int *)((int)((int *)(v1 + 2 * result))); // (int)&FUN_100246fa
    *v2 = (int)(*v2 | result);
    return (int)(result);
}

// Reference entry 10025871; body size 13 bytes.
#line 1 "ENTRY_10025871"
int FUN_10025871(void) {

    int v1; // (int)((int(*)(void))&FUN_10025871<>)
    int result = (int)(v1 - 0x1b97e900); // (int)((int(*)(void))&FUN_10025871<>)
char *v2 = (char *)((char)((char *)result)); // (int)&FUN_10025877
    *v2 = (char)(*v2 & (char)result);
    return (int)(result);
}

// Reference entry 10025f51; body size 13 bytes.
#line 1 "ENTRY_10025f51"
int FUN_10025f51(void) {

    bool v1; // (int)((int(*)(void))&FUN_10025f51<>)
    if (v1 || false) {
        int result; // (int)((int(*)(void))&FUN_10025f51<>)
        return (int)(result);
    }
    return (int)(function_10337660());
}

// Reference entry 10026fe1; body size 13 bytes.
#line 1 "ENTRY_10026fe1"
int FUN_10026fe1(void) {

    int result; // (int)((int(*)(void))&FUN_10026fe1<>)
    int v1 = (int)(result);
    *(int*)(2 * result) = (int)(v1 & -0x10000 | (v1 + 42) % 256 | 0x2a00);
    return (int)(result);
}

// Reference entry 1002772b; body size 7 bytes.
#line 1 "ENTRY_1002772b"
int FUN_1002772b(void) {

    int v1; // (int)((int(*)(void))&FUN_1002772b<>)
    int v2 = (int)(v1);
    bool v3; // (int)((int(*)(void))&FUN_1002772b<>)
    return (int)((v2 - (v3 ? 2 : 1)) % 256 | v2 & -256);
}

// Reference entry 10027b21; body size 18 bytes.
#line 1 "ENTRY_10027b21"
int FUN_10027b21(void) {

    int result; // (int)((int(*)(void))&FUN_10027b21<>)
int *v1 = (int *)((int)((int *)(2 * result))); // (int)&FUN_10027b2c
    *v1 = (int)(*v1 | result);
    return (int)(result);
}

// Reference entry 10027c1c; body size 7 bytes.
#line 1 "ENTRY_10027c1c"
int FUN_10027c1c(void) {

    int v1; // (int)((int(*)(void))&FUN_10027c1c<>)
    return (int)(v1 & v1);
}

// Reference entry 10028793; body size 12 bytes.
#line 1 "ENTRY_10028793"
int FUN_10028793(void) {

    int result; // (int)((int(*)(void))&FUN_10028793<>)
    uint v1 = (uint)(result);
    unsigned char v2 = (unsigned char)((char)(v1 / 256 + v1) % 32); // (int)&FUN_10028798
    if (v2 != 0) {
        unsigned char v3 = (unsigned char)((char)result);
        *(char*)result = (char)((int)(v3 >> 8 - v2 | v3 << v2));
    }
    return (int)(result);
}

// Reference entry 1002ba74; body size 7 bytes.
#line 1 "ENTRY_1002ba74"
int FUN_1002ba74(void) {

    int result; // (int)((int(*)(void))&FUN_1002ba74<>)
    bool v1; // (int)((int(*)(void))&FUN_1002ba74<>)
    *(int*)result = (int)((int)((int)v1));
    return (int)(result);
}

// Reference entry 1002c132; body size 11 bytes.
#line 1 "ENTRY_1002c132"
int FUN_1002c132(void) {

    int v1; // (int)((int(*)(void))&FUN_1002c132<>)
    return (int)(*(int *)(v1 - 1));
}

// Reference entry 1002f69c; body size 7 bytes.
#line 1 "ENTRY_1002f69c"
int FUN_1002f69c(void) {

    int v1; // (int)((int(*)(void))&FUN_1002f69c<>)
    bool v2; // (int)((int(*)(void))&FUN_1002f69c<>)
    return (int)(2 * v1 + (int)v2);
}

// Reference entry 1002f871; body size 8 bytes.
#line 1 "ENTRY_1002f871"
int FUN_1002f871(void) {

    int v1; // (int)((int(*)(void))&FUN_1002f871<>)
    int v2 = (int)(v1);
    bool v3; // (int)((int(*)(void))&FUN_1002f871<>)
    return (int)((v2 + 1 + (int)v3) % 256 | v2 & -256);
}

// Reference entry 10032f21; body size 8 bytes.
#line 1 "ENTRY_10032f21"
int FUN_10032f21(void) {

    int result; // (int)((int(*)(void))&FUN_10032f21<>)
    return (int)(result);
}

// Reference entry 1003402f; body size 7 bytes.
#line 1 "ENTRY_1003402f"
int FUN_1003402f(void) {

    int v1; // (int)((int(*)(void))&FUN_1003402f<>)
    return (int)(v1 & v1);
}

// Reference entry 1003455c; body size 7 bytes.
#line 1 "ENTRY_1003455c"
int FUN_1003455c(void) {

    int result; // (int)((int(*)(void))&FUN_1003455c<>)
    return (int)(result);
}

// Reference entry 10036d8e; body size 7 bytes.
#line 1 "ENTRY_10036d8e"
int FUN_10036d8e(void) {

    int result; // (int)((int(*)(void))&FUN_10036d8e<>)
    return (int)(result);
}

// Reference entry 100380b1; body size 13 bytes.
#line 1 "ENTRY_100380b1"
int FUN_100380b1(void) {

    int v1; // (int)((int(*)(void))&FUN_100380b1<>)
    int result = (int)(v1);
    bool v2; // (int)((int(*)(void))&FUN_100380b1<>)
    if (!v2) {
        return (int)(result);
    }
    uint v3 = (uint)(2 * v1); // (int)&FUN_100380b3
    if (v3 < v1 || v3 == 0) {
        char v4 = (char)(*(char *)v3); // (int)&FUN_100380b7
        return (int)(result & -256 | (int)((char)(v3 < v1) + (char)result + v4));
    }
    return (int)(result);
}

// Reference entry 1003c431; body size 13 bytes.
#line 1 "ENTRY_1003c431"
int FUN_1003c431(void) {

    int v1; // (int)((int(*)(void))&FUN_1003c431<>)
    return (int)(v1 * v1);
}

// Reference entry 1003e5e9; body size 11 bytes.
#line 1 "ENTRY_1003e5e9"
int FUN_1003e5e9(void) {

    int v1; // (int)((int(*)(void))&FUN_1003e5e9<>)
    uint v2 = (uint)(v1);
    return (int)(v2 / 2 | 0x80000000 * v2);
}

// Reference entry 1003e6e1; body size 8 bytes.
#line 1 "ENTRY_1003e6e1"
int FUN_1003e6e1(void) {

    int v1; // (int)((int(*)(void))&FUN_1003e6e1<>)
    return (int)(v1 & (v1 | -256));
}

// Reference entry 1003f92f; body size 7 bytes.
#line 1 "ENTRY_1003f92f"
int FUN_1003f92f(void) {

    int result; // (int)((int(*)(void))&FUN_1003f92f<>)
    return (int)(result);
}

// Reference entry 10042634; body size 7 bytes.
#line 1 "ENTRY_10042634"
int FUN_10042634(void) {

    int result; // (int)((int(*)(void))&FUN_10042634<>)
    int v1 = (int)(result);
    bool v2; // (int)((int(*)(void))&FUN_10042634<>)
    *(int*)v1 = (int)((int)(result + v1 + (int)v2));
    return (int)(result);
}

// Reference entry 10042c4d; body size 11 bytes.
#line 1 "ENTRY_10042c4d"
int FUN_10042c4d(void) {

    bool v1; // (int)((int(*)(void))&FUN_10042c4d<>)
    int v2 = (int)(v1 ? -4 : 4); // (int)&FUN_10042c4f
    int v3; // (int)((int(*)(void))&FUN_10042c4d<>)
    int v4 = (int)(v2 + v3); // (int)&FUN_10042c4f
    *(int*)v3 = (int)((int)(*(int *)v4));
    return (int)(v4 + v2);
}

// Reference entry 10046063; body size 7 bytes.
#line 1 "ENTRY_10046063"
int FUN_10046063(void) {

    int result; // (int)((int(*)(void))&FUN_10046063<>)
    *(int*)result = (int)((int)(0));
    return (int)(result);
}

// Reference entry 1004ac08; body size 22 bytes.
#line 1 "ENTRY_1004ac08"
int FUN_1004ac08(void) {

    int v1; // (int)((int(*)(void))&FUN_1004ac08<>)
int *v2 = (int *)((int)((int *)(v1 - 0x4316ffaf))); // (int)&FUN_1004ac0b
    *v2 = (int)(*v2 ^ v1);
    return (int)(v1 | v1);
}

// Reference entry 1004bbb7; body size 7 bytes.
#line 1 "ENTRY_1004bbb7"
int FUN_1004bbb7(void) {

    int v1; // (int)((int(*)(void))&FUN_1004bbb7<>)
    int v2 = (int)(v1);
    bool v3; // (int)((int(*)(void))&FUN_1004bbb7<>)
    return (int)((v2 + v1 + (int)v3) % 256 | v2 & -256);
}

// Reference entry 1004c85f; body size 7 bytes.
#line 1 "ENTRY_1004c85f"
int FUN_1004c85f(void) {

    int result; // (int)((int(*)(void))&FUN_1004c85f<>)
    int v1 = (int)(result);
    *(int*)v1 = (int)((int)(result | v1));
    return (int)(result);
}

// Reference entry 10050937; body size 7 bytes.
#line 1 "ENTRY_10050937"
int FUN_10050937(void) {

    int result; // (int)((int(*)(void))&FUN_10050937<>)
    *(char*)result = (char)((int)(0));
    return (int)(result);
}

// Reference entry 10051791; body size 8 bytes.
#line 1 "ENTRY_10051791"
int FUN_10051791(void) {

    int result; // (int)((int(*)(void))&FUN_10051791<>)
    return (int)(result);
}

// Reference entry 10053926; body size 11 bytes.
#line 1 "ENTRY_10053926"
int FUN_10053926(void) {

    int result; // (int)((int(*)(void))&FUN_10053926<>)
    uint v1 = (uint)(result);
    if ((char)v1 == -(char)(v1 / 256)) {
        return (int)(result);
    }
    return (int)(result & -0xff01);
}

// Reference entry 10054f31; body size 8 bytes.
#line 1 "ENTRY_10054f31"
int FUN_10054f31(void) {

    int result; // (int)((int(*)(void))&FUN_10054f31<>)
    *(char*)result = (char)((int)(0));
    return (int)(result);
}

// Reference entry 100573e0; body size 12 bytes.
#line 1 "ENTRY_100573e0"
int FUN_100573e0(void) {

    int result; // (int)((int(*)(void))&FUN_100573e0<>)
    return (int)(result);
}

// Reference entry 1005c321; body size 8 bytes.
#line 1 "ENTRY_1005c321"
int FUN_1005c321(void) {

    int result; // (int)((int(*)(void))&FUN_1005c321<>)
    return (int)(result);
}

// Reference entry 1005d591; body size 8 bytes.
#line 1 "ENTRY_1005d591"
int FUN_1005d591(void) {

    int v1; // (int)((int(*)(void))&FUN_1005d591<>)
    return (int)(v1 & v1);
}

// Reference entry 10061e61; body size 8 bytes.
#line 1 "ENTRY_10061e61"
int FUN_10061e61(void) {

    int result; // (int)((int(*)(void))&FUN_10061e61<>)
    return (int)(result);
}

// Reference entry 1006244d; body size 7 bytes.
#line 1 "ENTRY_1006244d"
int FUN_1006244d(void) {

    int result; // (int)((int(*)(void))&FUN_1006244d<>)
    return (int)(result);
}

// Reference entry 10064897; body size 7 bytes.
#line 1 "ENTRY_10064897"
int FUN_10064897(void) {

    int v1; // (int)((int(*)(void))&FUN_10064897<>)
    int result = (int)(v1);
    *(int*)result = (int)((int)(result + 1));
    return (int)(result);
}

// Reference entry 10066dc1; body size 8 bytes.
#line 1 "ENTRY_10066dc1"
int FUN_10066dc1(void) {

    int result; // (int)((int(*)(void))&FUN_10066dc1<>)
    return (int)(result);
}

// Reference entry 10066e30; body size 12 bytes.
#line 1 "ENTRY_10066e30"
int FUN_10066e30(void) {

    int result; // (int)((int(*)(void))&FUN_10066e30<>)
    return (int)(result);
}

// Reference entry 10067811; body size 8 bytes.
#line 1 "ENTRY_10067811"
int FUN_10067811(void) {

    int result; // (int)((int(*)(void))&FUN_10067811<>)
    return (int)(result);
}

// Reference entry 10070584; body size 7 bytes.
#line 1 "ENTRY_10070584"
int FUN_10070584(void) {

    int result; // (int)((int(*)(void))&FUN_10070584<>)
    return (int)(result);
}

// Reference entry 100757aa; body size 7 bytes.
#line 1 "ENTRY_100757aa"
int FUN_100757aa(void) {

    int result; // (int)((int(*)(void))&FUN_100757aa<>)
    return (int)(result);
}

// Reference entry 10076721; body size 18 bytes.
#line 1 "ENTRY_10076721"
int FUN_10076721(void) {

    int v1; // (int)((int(*)(void))&FUN_10076721<>)
    int result = (int)(v1 | 0x31f2e901); // (int)&FUN_10076727
int *v2 = (int *)((int)((int *)(2 * v1))); // (int)&FUN_1007672c
    *v2 = (int)(*v2 | result);
    return (int)(result);
}

// Reference entry 1007aa20; body size 7 bytes.
#line 1 "ENTRY_1007aa20"
int FUN_1007aa20(void) {

    return (int)(0);
}

// Reference entry 1007ace1; body size 7 bytes.
#line 1 "ENTRY_1007ace1"
int FUN_1007ace1(void) {

    int v1; // (int)((int(*)(void))&FUN_1007ace1<>)
    int v2 = (int)(v1);
    bool v3; // (int)((int(*)(void))&FUN_1007ace1<>)
    return (int)((v2 - (int)v3) % 256 | v2 & -256);
}

// Reference entry 1007c8f1; body size 13 bytes.
#line 1 "ENTRY_1007c8f1"
int FUN_1007c8f1(void) {

    int v1; // (int)((int(*)(void))&FUN_1007c8f1<>)
    uint v2 = (uint)(v1);
    int v3 = (int)(v1);
    bool v4 = (bool)((v3 & 14) > 9 | (char)(v2 / 256) % 16 + (char)v2 % 16 > 15); // (int)&FUN_1007c8f5
    return (int)((v4 ? v3 + 6 : v3) % 16 | v3 & -0x10000 | 256 * (int)v4 + v3 & 0xff00);
}

// Reference entry 1007ce8d; body size 7 bytes.
#line 1 "ENTRY_1007ce8d"
int FUN_1007ce8d(void) {

    int result; // (int)((int(*)(void))&FUN_1007ce8d<>)
    return (int)(result);
}

// Reference entry 1007f75a; body size 7 bytes.
#line 1 "ENTRY_1007f75a"
int FUN_1007f75a(void) {

    int v1; // (int)((int(*)(void))&FUN_1007f75a<>)
    return (int)(v1 & -0xff01);
}

// Reference entry 10080181; body size 8 bytes.
#line 1 "ENTRY_10080181"
int FUN_10080181(void) {

    int result; // (int)((int(*)(void))&FUN_10080181<>)
    return (int)(result);
}

// Reference entry 10086031; body size 13 bytes.
#line 1 "ENTRY_10086031"
int FUN_10086031(void) {

    int v1; // (int)((int(*)(void))&FUN_10086031<>)
    return (int)(v1 & -0xff01);
}

// Reference entry 1008a861; body size 13 bytes.
#line 1 "ENTRY_1008a861"
int FUN_1008a861(void) {

    int result; // (int)((int(*)(void))&FUN_1008a861<>)
    return (int)(result);
}

// Reference entry 1008a8df; body size 7 bytes.
#line 1 "ENTRY_1008a8df"
int FUN_1008a8df(void) {

    int v1; // (int)((int(*)(void))&FUN_1008a8df<>)
    bool v2; // (int)((int(*)(void))&FUN_1008a8df<>)
    return (int)(2 * v1 + (int)v2);
}

// Reference entry 10091202; body size 17 bytes.
#line 1 "ENTRY_10091202"
int FUN_10091202(void) {

    return (int)(0x7f320000);
}

// Reference entry 1009779d; body size 21 bytes.
#line 1 "ENTRY_1009779d"
int FUN_1009779d(void) {

    int v1; // (int)((int(*)(void))&FUN_1009779d<>)
    uint v2 = (uint)(v1);
int *v3 = (int *)((int)((int *)(v1 - 0x4a571700))); // (int)&FUN_100977a0
    int v4 = (int)(*v3); // (int)&FUN_100977a0
    *v3 = (int)(v4 - v1 + (int)(-1 - (char)v2 < (char)(v2 / 256)));
    return (int)(-0x15bc1700);
}

// Reference entry 10098520; body size 7 bytes.
#line 1 "ENTRY_10098520"
int FUN_10098520(void) {

    int v1; // (int)((int(*)(void))&FUN_10098520<>)
    bool v2; // (int)((int(*)(void))&FUN_10098520<>)
    return (int)(2 * v1 + (int)v2);
}

// Reference entry 10098c00; body size 7 bytes.
#line 1 "ENTRY_10098c00"
int FUN_10098c00(void) {

    int result; // (int)((int(*)(void))&FUN_10098c00<>)
    *(char*)result = (char)((int)(0));
    return (int)(result);
}

// Reference entry 1009a023; body size 12 bytes.
#line 1 "ENTRY_1009a023"
int FUN_1009a023(void) {

    int v1; // (int)((int(*)(void))&FUN_1009a023<>)
    int v2 = (int)(v1);
    return (int)((v2 - v1) % 256 | v2 & -256);
}

// Reference entry 1009a780; body size 7 bytes.
#line 1 "ENTRY_1009a780"
int FUN_1009a780(void) {

    int v1; // (int)((int(*)(void))&FUN_1009a780<>)
    int v2 = (int)(v1);
    bool v3; // (int)((int(*)(void))&FUN_1009a780<>)
    return (int)((v2 + v1 + (int)v3) % 256 | v2 & -256);
}

// Reference entry 100aacf0; body size 308 bytes.
#line 1 "ENTRY_100aacf0"
int FUN_100aacf0(void) {

    int v1; // (int)((int(*)(void))&FUN_100aacf0<>)
    int v2 = (int)(operator_new(132, v1), 0); // (int)&FUN_100aacf6
    if (v2 == 0) {
        *(int *)&DAT_121a0718 = 0;
        *(int *)&DAT_121a071c = 0;
        return (int)(_atexit((int)&FUN_117e8ad0));
    }
int *v3 = (int *)((int)((int *)v2)); // (int)&FUN_100aad09
    *v3 = (int)((int)&vftable);
    *(int*)(v2 + 4) = (int)(0);
    *(int *)&g_lSCObjCount = *(int *)&g_lSCObjCount + 1;
    *v3 = (int)((int)&vftable);
    *(int*)(v2 + 8) = (int)((int)&vftable);
    *(int*)(v2 + 12) = (int)((int)&vftable);
    *(int*)(v2 + 112) = (int)(0);
    *(int*)(v2 + 116) = (int)(0);
    *(int*)(v2 + 120) = (int)(0);
    *(int*)(v2 + 124) = (int)(0);
    *(int*)(v2 + 128) = (int)(0);
    *(int*)(v2 + 16) = (int)(0);
    *(int*)(v2 + 20) = (int)(0);
    *(int*)(v2 + 24) = (int)(0);
    *(int*)(v2 + 28) = (int)(0);
    *(int*)(v2 + 32) = (int)(0);
    *(int*)(v2 + 36) = (int)(0);
    *(int*)(v2 + 40) = (int)(0);
    *(int*)(v2 + 44) = (int)(0);
    *(int*)(v2 + 48) = (int)(0);
    *(int*)(v2 + 52) = (int)(0);
    int v4 = (int)(0); // (int)&FUN_100aadaf
    int v5 = (int)(v2 + 56); // (int)&FUN_100aadaf
    *(int*)v5 = (int)((int)(0));
    *(char*)(v2 + 100 + v4) = (char)(0);
    v4++;
    v5 += 4;
    while (v4 != 11) {
        *(int*)v5 = (int)((int)(0));
        *(char*)(v2 + 100 + v4) = (char)(0);
        v4++;
        v5 += 4;
    }
    *(int *)&DAT_121a0718 = v2;
    *(int *)&DAT_121a071c = v2;
    return (int)(_atexit((int)&FUN_117e8ad0));
}

// Reference entry 100af550; body size 40 bytes.
#line 1 "ENTRY_100af550"
int FUN_100af550(void) {

    int v1 = (int)(operator_new(24), 0); // (int)&FUN_100af552
    *(int*)v1 = (int)((int)(v1));
    *(int*)(v1 + 4) = (int)(v1);
    *(int*)(v1 + 8) = (int)(v1);
    *(short*)(v1 + 12) = (short)(257);
    *(int *)&DAT_121a0f38 = v1;
    return (int)(_atexit((int)&FUN_117f1880));
}

// Reference entry 100bb3d0; body size 241 bytes.
#line 1 "ENTRY_100bb3d0"
int FUN_100bb3d0(void) {

    int v1; // (int)((int(*)(void))&FUN_100bb3d0<>)
    int v2 = (int)(operator_new(136, v1), 0); // (int)&FUN_100bb3d6
    if (v2 == 0) {
        *(int *)&DAT_121a2684 = 0;
        *(int *)&DAT_121a2688 = 0;
        return (int)(_atexit((int)&FUN_1180baa0, 0));
    }
int *v3 = (int *)((int)((int *)v2)); // (int)&FUN_100bb3eb
    *v3 = (int)((int)&vftable);
    *(int*)(v2 + 4) = (int)(0);
    *(int *)&g_lSCObjCount = *(int *)&g_lSCObjCount + 1;
    *(int*)(v2 + 12) = (int)(0);
    *(int*)(v2 + 16) = (int)(0);
    *v3 = (int)((int)&vftable);
    *(int*)(v2 + 8) = (int)((int)&vftable);
    *(int*)(v2 + 28) = (int)(0);
    *(int*)(v2 + 32) = (int)(0);
    *(int*)(v2 + 40) = (int)(0);
    *(int*)(v2 + 44) = (int)(0);
    *(int*)(v2 + 24) = (int)((int)&vftable);
    *(int*)(v2 + 36) = (int)((int)&vftable);
    *(int*)(v2 + 84) = (int)(0);
    *(int*)(v2 + 124) = (int)(0);
    *(int*)(v2 + 128) = (int)(0);
    *(int *)&DAT_121a2684 = v2;
    *(int *)&DAT_121a2688 = 0;
    int v4 = (int)(*(int *)(*v3 + 12)); // (int)&FUN_100bb478
    *(int *)&DAT_121a2688 =(int *)( v4) == (int *)&FUN_10044c5b ? v2 : v4;
    return (int)(_atexit((int)&FUN_1180baa0, v2));
}

// Reference entry 100bba60; body size 40 bytes.
#line 1 "ENTRY_100bba60"
int FUN_100bba60(void) {

    int v1 = (int)(operator_new(24), 0); // (int)&FUN_100bba62
    *(int*)v1 = (int)((int)(v1));
    *(int*)(v1 + 4) = (int)(v1);
    *(int*)(v1 + 8) = (int)(v1);
    *(short*)(v1 + 12) = (short)(257);
    *(int *)&DAT_121a279c = v1;
    return (int)(_atexit((int)&FUN_1180c230));
}

// Reference entry 100bbaa0; body size 40 bytes.
#line 1 "ENTRY_100bbaa0"
int FUN_100bbaa0(void) {

    int v1 = (int)(operator_new(24), 0); // (int)&FUN_100bbaa2
    *(int*)v1 = (int)((int)(v1));
    *(int*)(v1 + 4) = (int)(v1);
    *(int*)(v1 + 8) = (int)(v1);
    *(short*)(v1 + 12) = (short)(257);
    *(int *)&DAT_121a2794 = v1;
    return (int)(_atexit((int)&FUN_1180c270));
}

// Reference entry 100c0940; body size 40 bytes.
#line 1 "ENTRY_100c0940"
int FUN_100c0940(void) {

    int v1 = (int)(operator_new(32), 0); // (int)&FUN_100c0942
    *(int*)v1 = (int)((int)(v1));
    *(int*)(v1 + 4) = (int)(v1);
    *(int*)(v1 + 8) = (int)(v1);
    *(short*)(v1 + 12) = (short)(257);
    *(int *)&DAT_121a3524 = v1;
    return (int)(_atexit((int)&FUN_11817a90));
}

// Reference entry 100cc790; body size 207 bytes.
#line 1 "ENTRY_100cc790"
int FUN_100cc790(void) {

    int v1; // (int)((int(*)(void))&FUN_100cc790<>)
    int v2 = (int)(operator_new(36, v1), 0); // (int)&FUN_100cc793
    if (v2 == 0) {
        *(int *)&DAT_121a5034 = 0;
        *(int *)&DAT_121a5038 = 0;
        return (int)(_atexit((int)&FUN_1182fa20, 0));
    }
int *v3 = (int *)((int)((int *)v2)); // (int)&FUN_100cc7a8
    *v3 = (int)((int)&vftable);
    *(int*)(v2 + 4) = (int)(0);
    *(int *)&g_lSCObjCount = *(int *)&g_lSCObjCount + 1;
    *v3 = (int)((int)&vftable);
    *(int*)(v2 + 8) = (int)((int)&vftable);
    *(int*)(v2 + 12) = (int)((int)&vftable);
    *(int*)(v2 + 16) = (int)(0);
    *(int*)(v2 + 20) = (int)(0);
    *(int*)(v2 + 24) = (int)(0);
    *(int*)(v2 + 28) = (int)(0);
    *(int*)(v2 + 32) = (int)(0);
    *(int *)&DAT_121a5034 = v2;
    *(int *)&DAT_121a5038 = 0;
    int v4 = (int)(*(int *)(*v3 + 12)); // (int)&FUN_100cc816
    *(int *)&DAT_121a5038 =(int *)( v4) == (int *)&FUN_1003b26e ? v2 : v4;
    return (int)(_atexit((int)&FUN_1182fa20, v2));
}

// Reference entry 100cce80; body size 211 bytes.
#line 1 "ENTRY_100cce80"
int FUN_100cce80(void) {

    int v1; // (int)((int(*)(void))&FUN_100cce80<>)
    int v2 = (int)(operator_new(40, v1), 0); // (int)&FUN_100cce83
    if (v2 == 0) {
        *(int *)&DAT_121a50e4 = 0;
        *(int *)&DAT_121a50e8 = 0;
        return (int)(_atexit((int)&FUN_118308b0, 0));
    }
int *v3 = (int *)((int)((int *)v2)); // (int)&FUN_100cce98
    *v3 = (int)((int)&vftable);
    *(int*)(v2 + 4) = (int)(0);
    *(int *)&g_lSCObjCount = *(int *)&g_lSCObjCount + 1;
    *v3 = (int)((int)&vftable);
    *(int*)(v2 + 8) = (int)((int)&vftable);
    *(int*)(v2 + 12) = (int)((int)&vftable);
    *(int*)(v2 + 16) = (int)(0);
    *(int*)(v2 + 20) = (int)(0);
    *(int*)(v2 + 24) = (int)(0);
    *(int*)(v2 + 28) = (int)(0);
    *(int*)(v2 + 32) = (int)(0);
    *(char*)(v2 + 36) = (char)(0);
    *(int *)&DAT_121a50e4 = v2;
    *(int *)&DAT_121a50e8 = 0;
    int v4 = (int)(*(int *)(*v3 + 12)); // (int)&FUN_100ccf0a
    *(int *)&DAT_121a50e8 =(int *)( v4) == (int *)&FUN_1005c054 ? v2 : v4;
    return (int)(_atexit((int)&FUN_118308b0, v2));
}

// Reference entry 100cfd10; body size 154 bytes.
#line 1 "ENTRY_100cfd10"
int FUN_100cfd10(void) {

    int v1; // (int)((int(*)(void))&FUN_100cfd10<>)
    int v2 = (int)(operator_new(16, v1), 0); // (int)&FUN_100cfd13
    if (v2 == 0) {
        *(int *)&DAT_121a55ac = 0;
        *(int *)&DAT_121a55b0 = 0;
        return (int)(_atexit((int)&FUN_11834bf0, 0));
    }
int *v3 = (int *)((int)((int *)v2)); // (int)&FUN_100cfd24
    *v3 = (int)((int)&vftable);
    *(int*)(v2 + 4) = (int)(0);
    *(int *)&g_lSCObjCount = *(int *)&g_lSCObjCount + 1;
    *v3 = (int)((int)&vftable);
    *(int*)(v2 + 8) = (int)(0);
    *(int*)(v2 + 12) = (int)(0);
    *(int *)&DAT_121a55ac = v2;
    *(int *)&DAT_121a55b0 = 0;
    int v4 = (int)(*(int *)(*v3 + 12)); // (int)&FUN_100cfd61
    *(int *)&DAT_121a55b0 =(int *)( v4) == (int *)&FUN_10044c5b ? v2 : v4;
    return (int)(_atexit((int)&FUN_11834bf0, v2));
}

// Reference entry 100d0140; body size 40 bytes.
#line 1 "ENTRY_100d0140"
int FUN_100d0140(void) {

    int v1 = (int)(operator_new(24), 0); // (int)&FUN_100d0142
    *(int*)v1 = (int)((int)(v1));
    *(int*)(v1 + 4) = (int)(v1);
    *(int*)(v1 + 8) = (int)(v1);
    *(short*)(v1 + 12) = (short)(257);
    *(int *)&DAT_121a56e4 = v1;
    return (int)(_atexit((int)&FUN_11835520));
}

// Reference entry 100dc360; body size 40 bytes.
#line 1 "ENTRY_100dc360"
int FUN_100dc360(void) {

    int v1 = (int)(operator_new(48), 0); // (int)&FUN_100dc362
    *(int*)v1 = (int)((int)(v1));
    *(int*)(v1 + 4) = (int)(v1);
    *(int*)(v1 + 8) = (int)(v1);
    *(short*)(v1 + 12) = (short)(257);
    *(int *)&DAT_121a6bac = v1;
    return (int)(_atexit((int)&FUN_1184ebd0));
}

// Reference entry 100e46f0; body size 40 bytes.
#line 1 "ENTRY_100e46f0"
int FUN_100e46f0(void) {

    int v1 = (int)(operator_new(24), 0); // (int)&FUN_100e46f2
    *(int*)v1 = (int)((int)(v1));
    *(int*)(v1 + 4) = (int)(v1);
    *(int*)(v1 + 8) = (int)(v1);
    *(short*)(v1 + 12) = (short)(257);
    *(int *)&DAT_121a7bb8 = v1;
    return (int)(_atexit((int)&FUN_11861ee0));
}

// Reference entry 100e4730; body size 40 bytes.
#line 1 "ENTRY_100e4730"
int FUN_100e4730(void) {

    int v1 = (int)(operator_new(24), 0); // (int)&FUN_100e4732
    *(int*)v1 = (int)((int)(v1));
    *(int*)(v1 + 4) = (int)(v1);
    *(int*)(v1 + 8) = (int)(v1);
    *(short*)(v1 + 12) = (short)(257);
    *(int *)&DAT_121a7bb0 = v1;
    return (int)(_atexit((int)&FUN_11861f20));
}

// Reference entry 100e4770; body size 40 bytes.
#line 1 "ENTRY_100e4770"
int FUN_100e4770(void) {

    int v1 = (int)(operator_new(24), 0); // (int)&FUN_100e4772
    *(int*)v1 = (int)((int)(v1));
    *(int*)(v1 + 4) = (int)(v1);
    *(int*)(v1 + 8) = (int)(v1);
    *(short*)(v1 + 12) = (short)(257);
    *(int *)&DAT_121a7bc0 = v1;
    return (int)(_atexit((int)&FUN_11861f60));
}

// Reference entry 100e5ca0; body size 40 bytes.
#line 1 "ENTRY_100e5ca0"
int FUN_100e5ca0(void) {

    int v1 = (int)(operator_new(24), 0); // (int)&FUN_100e5ca2
    *(int*)v1 = (int)((int)(v1));
    *(int*)(v1 + 4) = (int)(v1);
    *(int*)(v1 + 8) = (int)(v1);
    *(short*)(v1 + 12) = (short)(257);
    *(int *)&DAT_122e8ab0 = v1;
    return (int)(_atexit((int)&FUN_118624f0));
}

// Reference entry 100e5fd0; body size 85 bytes.
#line 1 "ENTRY_100e5fd0"
int FUN_100e5fd0(void) {

    int v1 = (int)((int)&DAT_122f1254); // (int)&FUN_100e5fda
    int v2 = (int)(32); // (int)&FUN_100e5fda
    *(int*)(v1 - 4) = (int)(0);
    *(int*)(v1 + 260) = (int)(0);
    *(char*)v1 = (char)((int)(0));
    *(char*)(v1 + 129) = (char)(0);
    v2--;
    v1 += 268;
    while (v2 != 0) {
        *(int*)(v1 - 4) = (int)(0);
        *(int*)(v1 + 260) = (int)(0);
        *(char*)v1 = (char)((int)(0));
        *(char*)(v1 + 129) = (char)(0);
        v2--;
        v1 += 268;
    }
    *(int *)&DAT_122f33d0 = 0;
    thunk_FUN_112a9cf0((int)&DAT_122f33d4);
    return (int)(_atexit((int)&FUN_11862570));
}

// Reference entry 101a6a40; body size 27 bytes.
#line 1 "ENTRY_101a6a40"
int FUN_101a6a40(int a1) {

    if (a1 == 0) {
        return (int)(0);
    }
    if (*(short *)a1 == 0) {
        return (int)(0);
    }
    int result = (int)(0); // (int)&FUN_101a6a4f
    result++;
    while (*(short *)(2 * result + a1) != 0) {
        result++;
    }
    return (int)(result);
}

// Reference entry 101aa510; body size 12 bytes.
#line 1 "ENTRY_101aa510"
int FUN_101aa510(int a1, int a2) {

    int v1 = (int)(a1 - a2); // (int)&FUN_101aa514
    return (int)(a1 & -256 | (int)(v1 < 0 == ((v1 ^ a1) & (a2 ^ a1)) < 0 == (v1 != 0)));
}

// Reference entry 101cc480; body size 20 bytes.
#line 1 "ENTRY_101cc480"
int __stdcall FUN_101cc480(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_101cc480<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 101cc4a0; body size 20 bytes.
#line 1 "ENTRY_101cc4a0"
int __stdcall FUN_101cc4a0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_101cc4a0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 101cc620; body size 20 bytes.
#line 1 "ENTRY_101cc620"
int __stdcall FUN_101cc620(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_101cc620<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 101cc660; body size 20 bytes.
#line 1 "ENTRY_101cc660"
int __stdcall FUN_101cc660(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_101cc660<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 101cd8c0; body size 11 bytes.
#line 1 "ENTRY_101cd8c0"
int FUN_101cd8c0(int a1) {

    return (int)(thunk_FUN_101dca10(a1));
}

// Reference entry 101ce550; body size 21 bytes.
#line 1 "ENTRY_101ce550"
int __stdcall FUN_101ce550(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_101ce550<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_101ce55a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 101ce570; body size 21 bytes.
#line 1 "ENTRY_101ce570"
int __stdcall FUN_101ce570(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_101ce570<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_101ce57a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 101cf020; body size 11 bytes.
#line 1 "ENTRY_101cf020"
int FUN_101cf020(int a1) {

    return (int)(thunk_FUN_101dca10(a1));
}

// Reference entry 101cf4c0; body size 11 bytes.
#line 1 "ENTRY_101cf4c0"
int __stdcall FUN_101cf4c0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_101cf4c0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 101cf510; body size 11 bytes.
#line 1 "ENTRY_101cf510"
int __stdcall FUN_101cf510(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_101cf510<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 101d49c0; body size 10 bytes.
#line 1 "ENTRY_101d49c0"
int __stdcall FUN_101d49c0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1) {

    return (int)(thunk_FUN_101dca10());
}

// Reference entry 10223fc0; body size 20 bytes.
#line 1 "ENTRY_10223fc0"
int __stdcall FUN_10223fc0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10223fc0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10223fe0; body size 20 bytes.
#line 1 "ENTRY_10223fe0"
int __stdcall FUN_10223fe0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10223fe0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10224000; body size 11 bytes.
#line 1 "ENTRY_10224000"
int __stdcall FUN_10224000(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10224000<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 102240b0; body size 20 bytes.
#line 1 "ENTRY_102240b0"
int __stdcall FUN_102240b0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_102240b0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 102240d0; body size 20 bytes.
#line 1 "ENTRY_102240d0"
int __stdcall FUN_102240d0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_102240d0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 102240f0; body size 11 bytes.
#line 1 "ENTRY_102240f0"
int __stdcall FUN_102240f0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_102240f0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10224100; body size 11 bytes.
#line 1 "ENTRY_10224100"
int __stdcall FUN_10224100(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10224100<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10224110; body size 20 bytes.
#line 1 "ENTRY_10224110"
int __stdcall FUN_10224110(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10224110<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10224750; body size 20 bytes.
#line 1 "ENTRY_10224750"
int __stdcall FUN_10224750(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10224750<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10224790; body size 20 bytes.
#line 1 "ENTRY_10224790"
int __stdcall FUN_10224790(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10224790<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 102247d0; body size 11 bytes.
#line 1 "ENTRY_102247d0"
int __stdcall FUN_102247d0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_102247d0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 102249a0; body size 20 bytes.
#line 1 "ENTRY_102249a0"
int __stdcall FUN_102249a0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_102249a0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 102249e0; body size 20 bytes.
#line 1 "ENTRY_102249e0"
int __stdcall FUN_102249e0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_102249e0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10224a20; body size 11 bytes.
#line 1 "ENTRY_10224a20"
int __stdcall FUN_10224a20(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10224a20<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10224a50; body size 11 bytes.
#line 1 "ENTRY_10224a50"
int __stdcall FUN_10224a50(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10224a50<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10224a80; body size 20 bytes.
#line 1 "ENTRY_10224a80"
int __stdcall FUN_10224a80(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10224a80<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10225b40; body size 28 bytes.
#line 1 "ENTRY_10225b40"
int FUN_10225b40(int a1, int a2) {

    int result = (int)(thunk_FUN_102d65b0(a2), 0); // (int)&FUN_10225b44
    if ((char)result == 0) {
        return (int)(result);
    }
    return (int)(thunk_FUN_1023d430());
}

// Reference entry 10225bd0; body size 18 bytes.
#line 1 "ENTRY_10225bd0"
int FUN_10225bd0(int a1, int a2) {

    return (int)(thunk_FUN_1061c5e0(*(int *)a1));
}

// Reference entry 10225bf0; body size 18 bytes.
#line 1 "ENTRY_10225bf0"
int FUN_10225bf0(int a1, int a2) {

    return (int)(thunk_FUN_1061c5e0(*(int *)a1));
}

// Reference entry 10225c30; body size 11 bytes.
#line 1 "ENTRY_10225c30"
int FUN_10225c30(int a1) {

    return (int)(thunk_FUN_1023d430(a1));
}

// Reference entry 10226a20; body size 21 bytes.
#line 1 "ENTRY_10226a20"
int __stdcall FUN_10226a20(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10226a20<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10226a2a<>
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10226a40; body size 21 bytes.
#line 1 "ENTRY_10226a40"
int __stdcall FUN_10226a40(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10226a40<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10226a4a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10226a60; body size 12 bytes.
#line 1 "ENTRY_10226a60"
int __stdcall FUN_10226a60(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10226a60<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10226b10; body size 21 bytes.
#line 1 "ENTRY_10226b10"
int __stdcall FUN_10226b10(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10226b10<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10226b1a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10226b30; body size 21 bytes.
#line 1 "ENTRY_10226b30"
int __stdcall FUN_10226b30(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10226b30<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10226b3a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10226b50; body size 12 bytes.
#line 1 "ENTRY_10226b50"
int __stdcall FUN_10226b50(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10226b50<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10226b60; body size 12 bytes.
#line 1 "ENTRY_10226b60"
int __stdcall FUN_10226b60(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10226b60<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10226b70; body size 21 bytes.
#line 1 "ENTRY_10226b70"
int __stdcall FUN_10226b70(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10226b70<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10226b7a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 102282f0; body size 28 bytes.
#line 1 "ENTRY_102282f0"
int FUN_102282f0(int a1, int a2) {

    int result = (int)(thunk_FUN_102d65b0(a2), 0); // (int)&FUN_102282f4
    if ((char)result == 0) {
        return (int)(result);
    }
    return (int)(thunk_FUN_1023d430());
}

// Reference entry 10228380; body size 18 bytes.
#line 1 "ENTRY_10228380"
int FUN_10228380(int a1, int a2) {

    return (int)(thunk_FUN_1061c5e0(*(int *)a1));
}

// Reference entry 102283a0; body size 18 bytes.
#line 1 "ENTRY_102283a0"
int FUN_102283a0(int a1, int a2) {

    return (int)(thunk_FUN_1061c5e0(*(int *)a1));
}

// Reference entry 102283e0; body size 11 bytes.
#line 1 "ENTRY_102283e0"
int FUN_102283e0(int a1) {

    return (int)(thunk_FUN_1023d430(a1));
}

// Reference entry 10228620; body size 11 bytes.
#line 1 "ENTRY_10228620"
int __stdcall FUN_10228620(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10228620<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10228630; body size 11 bytes.
#line 1 "ENTRY_10228630"
int __stdcall FUN_10228630(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10228630<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 102287e0; body size 13 bytes.
#line 1 "ENTRY_102287e0"
int __stdcall FUN_102287e0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_102287e0<>)
    *(int*)result = (int)((int)(*(int *)a1));
    return (int)(result);
}

// Reference entry 102287f0; body size 13 bytes.
#line 1 "ENTRY_102287f0"
int __stdcall FUN_102287f0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_102287f0<>)
    *(int*)result = (int)((int)(*(int *)a1));
    return (int)(result);
}

// Reference entry 10228800; body size 11 bytes.
#line 1 "ENTRY_10228800"
int __stdcall FUN_10228800(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10228800<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 1022f1f0; body size 18 bytes.
#line 1 "ENTRY_1022f1f0"
int FUN_1022f1f0(void) {

    int result = (int)(0); // (int)&FUN_1022f1f4
    int v1; // (int)((int(*)(void))&FUN_1022f1f0<>)
    if (v1 != 0) {
        result = (int)(thunk_FUN_1148a50e(v1, 56), 0);
    }
    return (int)(result);
}

// Reference entry 1022fc00; body size 14 bytes.
#line 1 "ENTRY_1022fc00"
int __stdcall FUN_1022fc00(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_1022fc00<>)
    return (int)(thunk_FUN_1061c5e0(v1));
}

// Reference entry 1022fc20; body size 14 bytes.
#line 1 "ENTRY_1022fc20"
int __stdcall FUN_1022fc20(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_1022fc20<>)
    return (int)(thunk_FUN_1061c5e0(v1));
}

// Reference entry 1022fc60; body size 10 bytes.
#line 1 "ENTRY_1022fc60"
int __stdcall FUN_1022fc60(unsigned int recovered_unused_stack_0) {

    return (int)(thunk_FUN_1023d430());
}

// Reference entry 10254a60; body size 20 bytes.
#line 1 "ENTRY_10254a60"
int FUN_10254a60(int a1, int a2, int a3) {

    return (int)(FUN_10259410(*(int *)a2, a3));
}

// Reference entry 10256620; body size 20 bytes.
#line 1 "ENTRY_10256620"
int FUN_10256620(int a1, int a2, int a3) {

    return (int)(FUN_10259410(*(int *)a2, a3));
}

// Reference entry 10258ce0; body size 18 bytes.
#line 1 "ENTRY_10258ce0"
int FUN_10258ce0(void) {

    int result = (int)(0); // (int)&FUN_10258ce4
    int v1; // (int)((int(*)(void))&FUN_10258ce0<>)
    if (v1 != 0) {
        result = (int)(thunk_FUN_1148a50e(v1, 48), 0);
    }
    return (int)(result);
}

// Reference entry 10258d20; body size 18 bytes.
#line 1 "ENTRY_10258d20"
int FUN_10258d20(void) {

    int result = (int)(0); // (int)&FUN_10258d24
    int v1; // (int)((int(*)(void))&FUN_10258d20<>)
    if (v1 != 0) {
        result = (int)(thunk_FUN_1148a50e(v1, 48), 0);
    }
    return (int)(result);
}

// Reference entry 10258d60; body size 18 bytes.
#line 1 "ENTRY_10258d60"
int FUN_10258d60(void) {

    int result = (int)(0); // (int)&FUN_10258d64
    int v1; // (int)((int(*)(void))&FUN_10258d60<>)
    if (v1 != 0) {
        result = (int)(thunk_FUN_1148a50e(v1, 48), 0);
    }
    return (int)(result);
}

// Reference entry 10258de0; body size 18 bytes.
#line 1 "ENTRY_10258de0"
int FUN_10258de0(void) {

    int result = (int)(0); // (int)&FUN_10258de4
    int v1; // (int)((int(*)(void))&FUN_10258de0<>)
    if (v1 != 0) {
        result = (int)(thunk_FUN_1148a50e(v1, 48), 0);
    }
    return (int)(result);
}

// Reference entry 10262ee0; body size 35 bytes.
#line 1 "ENTRY_10262ee0"
int FUN_10262ee0(int a1, int a2) {
int *v1 = (int *)((int)((int *)a1)); // (int)&FUN_10262ee4
    unsigned char v2 = (unsigned char)(*(char *)*v1); // (int)&FUN_10262ee6
    if (v2 <= -1) {
        return (int)(thunk_FUN_110688f0(a1));
    }
    *(int*)a2 = (int)((int)((int)v2));
    *v1 = (int)(*v1 + 1);
    return (int)(0);
}

// Reference entry 102633f0; body size 20 bytes.
#line 1 "ENTRY_102633f0"
int __stdcall FUN_102633f0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_102633f0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10263460; body size 20 bytes.
#line 1 "ENTRY_10263460"
int __stdcall FUN_10263460(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10263460<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10263480; body size 20 bytes.
#line 1 "ENTRY_10263480"
int __stdcall FUN_10263480(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10263480<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 102635f0; body size 20 bytes.
#line 1 "ENTRY_102635f0"
int __stdcall FUN_102635f0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_102635f0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10263a00; body size 16 bytes.
#line 1 "ENTRY_10263a00"
int FUN_10263a00(int a1, int a2) {

    return (int)(FUN_10267ce0(*(int *)a2));
}

// Reference entry 10264a40; body size 21 bytes.
#line 1 "ENTRY_10264a40"
int __stdcall FUN_10264a40(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10264a40<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10264a4a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10264b00; body size 21 bytes.
#line 1 "ENTRY_10264b00"
int __stdcall FUN_10264b00(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10264b00<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10264b0a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10265610; body size 16 bytes.
#line 1 "ENTRY_10265610"
int FUN_10265610(int a1, int a2) {

    return (int)(FUN_10267ce0(*(int *)a2));
}

// Reference entry 10265680; body size 11 bytes.
#line 1 "ENTRY_10265680"
int __stdcall FUN_10265680(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10265680<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10265750; body size 11 bytes.
#line 1 "ENTRY_10265750"
int __stdcall FUN_10265750(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10265750<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 1026e290; body size 20 bytes.
#line 1 "ENTRY_1026e290"
int __stdcall FUN_1026e290(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1026e290<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1026e2b0; body size 20 bytes.
#line 1 "ENTRY_1026e2b0"
int __stdcall FUN_1026e2b0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1026e2b0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1026e300; body size 20 bytes.
#line 1 "ENTRY_1026e300"
int __stdcall FUN_1026e300(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1026e300<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1026e340; body size 20 bytes.
#line 1 "ENTRY_1026e340"
int __stdcall FUN_1026e340(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1026e340<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1026e520; body size 14 bytes.
#line 1 "ENTRY_1026e520"
int FUN_1026e520(int a1, int a2) {

    return (int)(FUN_102703b0(a2));
}

// Reference entry 1026e540; body size 11 bytes.
#line 1 "ENTRY_1026e540"
int FUN_1026e540(int a1) {

    return (int)(thunk_FUN_10270ef0(a1));
}

// Reference entry 1026e960; body size 21 bytes.
#line 1 "ENTRY_1026e960"
int __stdcall FUN_1026e960(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_1026e960<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_1026e96a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 1026e980; body size 21 bytes.
#line 1 "ENTRY_1026e980"
int __stdcall FUN_1026e980(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_1026e980<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_1026e98a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 1026ed80; body size 14 bytes.
#line 1 "ENTRY_1026ed80"
int FUN_1026ed80(int a1, int a2) {

    return (int)(FUN_102703b0(a2));
}

// Reference entry 1026eda0; body size 11 bytes.
#line 1 "ENTRY_1026eda0"
int FUN_1026eda0(int a1) {

    return (int)(thunk_FUN_10270ef0(a1));
}

// Reference entry 1026edd0; body size 11 bytes.
#line 1 "ENTRY_1026edd0"
int __stdcall FUN_1026edd0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1026edd0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 1026ede0; body size 11 bytes.
#line 1 "ENTRY_1026ede0"
int __stdcall FUN_1026ede0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1026ede0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10270640; body size 10 bytes.
#line 1 "ENTRY_10270640"
int __stdcall FUN_10270640(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1) {

    return (int)(thunk_FUN_10270ef0());
}

// Reference entry 10271d70; body size 11 bytes.
#line 1 "ENTRY_10271d70"
int __stdcall FUN_10271d70(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10271d70<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10271d80; body size 20 bytes.
#line 1 "ENTRY_10271d80"
int __stdcall FUN_10271d80(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10271d80<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10271f70; body size 11 bytes.
#line 1 "ENTRY_10271f70"
int __stdcall FUN_10271f70(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10271f70<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10271fa0; body size 20 bytes.
#line 1 "ENTRY_10271fa0"
int __stdcall FUN_10271fa0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10271fa0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10272b90; body size 11 bytes.
#line 1 "ENTRY_10272b90"
int FUN_10272b90(int a1) {

    return (int)(thunk_FUN_10279020(a1));
}

// Reference entry 10273760; body size 12 bytes.
#line 1 "ENTRY_10273760"
int __stdcall FUN_10273760(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10273760<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10273770; body size 21 bytes.
#line 1 "ENTRY_10273770"
int __stdcall FUN_10273770(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10273770<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_1027377a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 102744f0; body size 11 bytes.
#line 1 "ENTRY_102744f0"
int FUN_102744f0(int a1) {

    return (int)(thunk_FUN_10279020(a1));
}

// Reference entry 10274710; body size 11 bytes.
#line 1 "ENTRY_10274710"
int __stdcall FUN_10274710(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10274710<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10276440; body size 10 bytes.
#line 1 "ENTRY_10276440"
int __stdcall FUN_10276440(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1) {

    return (int)(thunk_FUN_10279020());
}

// Reference entry 1027c090; body size 10 bytes.
#line 1 "ENTRY_1027c090"
int FUN_1027c090(void) {

    int v1; // (int)((int(*)(void))&FUN_1027c090<>)
    int v2 = (int)(v1);
    bool v3; // (int)((int(*)(void))&FUN_1027c090<>)
    *(int*)v2 = (int)((int)((int)v3));
    return (int)((v2 + (uint)v1 / 256) % 256 | v2 & -256);
}

// Reference entry 102835ea; body size 12 bytes.
#line 1 "ENTRY_102835ea"
int FUN_102835ea(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 102c0c70; body size 26 bytes.
#line 1 "ENTRY_102c0c70"
int __stdcall FUN_102c0c70(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_102c0c70<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 8) = (int)(*(int *)(a1 + 4));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 102c0c90; body size 26 bytes.
#line 1 "ENTRY_102c0c90"
int __stdcall FUN_102c0c90(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_102c0c90<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 8) = (int)(*(int *)(a1 + 4));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 102c1120; body size 27 bytes.
#line 1 "ENTRY_102c1120"
int __stdcall FUN_102c1120(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_102c1120<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)(a1 + 4)); // (int)&FUN_102c112c
    *(int*)(v1 + 4) = (int)(*(int *)a1);
    *(int*)(v1 + 8) = (int)(result);
    return (int)(result);
}

// Reference entry 102c1210; body size 22 bytes.
#line 1 "ENTRY_102c1210"
int __stdcall FUN_102c1210(int a1, int a2) {

    int result; // (int)((int(__stdcall*)(int a1, int a2))&FUN_102c1210<>)
    *(int*)result = (int)((int)(*(int *)a1));
    *(int*)(result + 4) = (int)(*(int *)a2);
    return (int)(result);
}

// Reference entry 102d1f70; body size 20 bytes.
#line 1 "ENTRY_102d1f70"
int __stdcall FUN_102d1f70(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_102d1f70<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 102d2030; body size 20 bytes.
#line 1 "ENTRY_102d2030"
int __stdcall FUN_102d2030(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_102d2030<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 102d25f0; body size 21 bytes.
#line 1 "ENTRY_102d25f0"
int __stdcall FUN_102d25f0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_102d25f0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_102d25fa
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 102d2ba0; body size 11 bytes.
#line 1 "ENTRY_102d2ba0"
int __stdcall FUN_102d2ba0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_102d2ba0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 102dc000; body size 20 bytes.
#line 1 "ENTRY_102dc000"
int __stdcall FUN_102dc000(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_102dc000<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 102dc020; body size 20 bytes.
#line 1 "ENTRY_102dc020"
int __stdcall FUN_102dc020(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_102dc020<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 102dc4b0; body size 15 bytes.
#line 1 "ENTRY_102dc4b0"
int FUN_102dc4b0(int a1) {

    return (int)(FUN_1008ca83((int)&DAT_1187aa88));
}

// Reference entry 102dc530; body size 21 bytes.
#line 1 "ENTRY_102dc530"
int __stdcall FUN_102dc530(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_102dc530<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_102dc53a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 102dc5d0; body size 15 bytes.
#line 1 "ENTRY_102dc5d0"
int FUN_102dc5d0(int a1) {

    return (int)(FUN_1008ca83((int)&DAT_1187aa88));
}

// Reference entry 102dc640; body size 11 bytes.
#line 1 "ENTRY_102dc640"
int __stdcall FUN_102dc640(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_102dc640<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 102dd220; body size 17 bytes.
#line 1 "ENTRY_102dd220"
int __stdcall FUN_102dd220(int a1, unsigned int recovered_unused_stack_0) {

    return (int)(FUN_1008ca83((int)&DAT_1187aa88));
}

// Reference entry 102f4800; body size 21 bytes.
#line 1 "ENTRY_102f4800"
int FUN_102f4800(void) {

    return (int)(thunk_FUN_112658f0((int)&FUN_100467fe, (int)&FUN_1000621c) & -256 | 1);
}

// Reference entry 102f9b2e; body size 12 bytes.
#line 1 "ENTRY_102f9b2e"
int FUN_102f9b2e(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 102fe15f; body size 12 bytes.
#line 1 "ENTRY_102fe15f"
int FUN_102fe15f(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 10303150; body size 20 bytes.
#line 1 "ENTRY_10303150"
int __stdcall FUN_10303150(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10303150<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10303410; body size 20 bytes.
#line 1 "ENTRY_10303410"
int __stdcall FUN_10303410(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10303410<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10304330; body size 21 bytes.
#line 1 "ENTRY_10304330"
int __stdcall FUN_10304330(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10304330<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_1030433a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10304cb0; body size 11 bytes.
#line 1 "ENTRY_10304cb0"
int __stdcall FUN_10304cb0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10304cb0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 103240b0; body size 23 bytes.
#line 1 "ENTRY_103240b0"
int FUN_103240b0(int a1) {

    return (int)((bool)(a1 == 1));
}

// Reference entry 1032ca20; body size 26 bytes.
#line 1 "ENTRY_1032ca20"
int __stdcall FUN_1032ca20(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1032ca20<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 8) = (int)(*(int *)(a1 + 4));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1032ca40; body size 11 bytes.
#line 1 "ENTRY_1032ca40"
int __stdcall FUN_1032ca40(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_1032ca40<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 1032ca70; body size 11 bytes.
#line 1 "ENTRY_1032ca70"
int __stdcall FUN_1032ca70(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_1032ca70<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 1032ca80; body size 20 bytes.
#line 1 "ENTRY_1032ca80"
int __stdcall FUN_1032ca80(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1032ca80<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1032cac0; body size 20 bytes.
#line 1 "ENTRY_1032cac0"
int __stdcall FUN_1032cac0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1032cac0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1032cae0; body size 20 bytes.
#line 1 "ENTRY_1032cae0"
int __stdcall FUN_1032cae0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1032cae0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1032cbb0; body size 20 bytes.
#line 1 "ENTRY_1032cbb0"
int __stdcall FUN_1032cbb0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1032cbb0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1032cc10; body size 26 bytes.
#line 1 "ENTRY_1032cc10"
int __stdcall FUN_1032cc10(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1032cc10<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 8) = (int)(*(int *)(a1 + 4));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1032cc30; body size 20 bytes.
#line 1 "ENTRY_1032cc30"
int __stdcall FUN_1032cc30(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1032cc30<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1032d6b0; body size 26 bytes.
#line 1 "ENTRY_1032d6b0"
int __stdcall FUN_1032d6b0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1032d6b0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 8) = (int)(*(int *)(a1 + 4));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1032d700; body size 11 bytes.
#line 1 "ENTRY_1032d700"
int __stdcall FUN_1032d700(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_1032d700<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 1032d780; body size 11 bytes.
#line 1 "ENTRY_1032d780"
int __stdcall FUN_1032d780(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_1032d780<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 1032d7b0; body size 20 bytes.
#line 1 "ENTRY_1032d7b0"
int __stdcall FUN_1032d7b0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1032d7b0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1032d840; body size 20 bytes.
#line 1 "ENTRY_1032d840"
int __stdcall FUN_1032d840(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1032d840<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1032d880; body size 20 bytes.
#line 1 "ENTRY_1032d880"
int __stdcall FUN_1032d880(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1032d880<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1032da90; body size 20 bytes.
#line 1 "ENTRY_1032da90"
int __stdcall FUN_1032da90(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1032da90<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1032dbd0; body size 26 bytes.
#line 1 "ENTRY_1032dbd0"
int __stdcall FUN_1032dbd0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1032dbd0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 8) = (int)(*(int *)(a1 + 4));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1032dc20; body size 20 bytes.
#line 1 "ENTRY_1032dc20"
int __stdcall FUN_1032dc20(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1032dc20<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1032e510; body size 27 bytes.
#line 1 "ENTRY_1032e510"
int FUN_1032e510(int result, int a2) {

    return (int)(result);
}

// Reference entry 1032e560; body size 27 bytes.
#line 1 "ENTRY_1032e560"
int FUN_1032e560(int result, int a2) {

    return (int)(result);
}

// Reference entry 1032e590; body size 21 bytes.
#line 1 "ENTRY_1032e590"
int FUN_1032e590(int result, int a2) {

    return (int)(result);
}

// Reference entry 1032e5b0; body size 11 bytes.
#line 1 "ENTRY_1032e5b0"
int FUN_1032e5b0(int a1) {

    return (int)(*(int *)*(int *)a1);
}

// Reference entry 1032e5c0; body size 27 bytes.
#line 1 "ENTRY_1032e5c0"
int FUN_1032e5c0(int result, int a2) {

    return (int)(result);
}

// Reference entry 1032e6a0; body size 18 bytes.
#line 1 "ENTRY_1032e6a0"
int FUN_1032e6a0(int result, int a2) {

    return (int)(result);
}

// Reference entry 1032e6c0; body size 27 bytes.
#line 1 "ENTRY_1032e6c0"
int FUN_1032e6c0(int result, int a2) {

    return (int)(result);
}

// Reference entry 1032e710; body size 20 bytes.
#line 1 "ENTRY_1032e710"
int FUN_1032e710(int result, int a2) {

    return (int)(result);
}

// Reference entry 1032e730; body size 27 bytes.
#line 1 "ENTRY_1032e730"
int FUN_1032e730(int result, int a2) {

    return (int)(result);
}

// Reference entry 1032e780; body size 20 bytes.
#line 1 "ENTRY_1032e780"
int FUN_1032e780(int result, int a2) {

    return (int)(result);
}

// Reference entry 1032e7a0; body size 20 bytes.
#line 1 "ENTRY_1032e7a0"
int FUN_1032e7a0(int result, int a2) {

    return (int)(result);
}

// Reference entry 1032e7c0; body size 21 bytes.
#line 1 "ENTRY_1032e7c0"
int FUN_1032e7c0(int result, int a2) {

    return (int)(result);
}

// Reference entry 1032e7e0; body size 20 bytes.
#line 1 "ENTRY_1032e7e0"
int FUN_1032e7e0(int result, int a2) {

    return (int)(result);
}

// Reference entry 10330de0; body size 27 bytes.
#line 1 "ENTRY_10330de0"
int __stdcall FUN_10330de0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10330de0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)(a1 + 4)); // (int)&FUN_10330dec<>
    *(int*)(v1 + 4) = (int)(*(int *)a1);
    *(int*)(v1 + 8) = (int)(result);
    return (int)(result);
}

// Reference entry 10330e10; body size 12 bytes.
#line 1 "ENTRY_10330e10"
int __stdcall FUN_10330e10(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10330e10<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10330e40; body size 12 bytes.
#line 1 "ENTRY_10330e40"
int __stdcall FUN_10330e40(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10330e40<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10330e50; body size 21 bytes.
#line 1 "ENTRY_10330e50"
int __stdcall FUN_10330e50(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10330e50<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10330e5a<>
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10330e90; body size 21 bytes.
#line 1 "ENTRY_10330e90"
int __stdcall FUN_10330e90(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10330e90<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10330e9a<>
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10330eb0; body size 21 bytes.
#line 1 "ENTRY_10330eb0"
int __stdcall FUN_10330eb0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10330eb0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10330eba<>
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10330fa0; body size 21 bytes.
#line 1 "ENTRY_10330fa0"
int __stdcall FUN_10330fa0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10330fa0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10330faa
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10331060; body size 27 bytes.
#line 1 "ENTRY_10331060"
int __stdcall FUN_10331060(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10331060<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)(a1 + 4)); // (int)&FUN_1033106c
    *(int*)(v1 + 4) = (int)(*(int *)a1);
    *(int*)(v1 + 8) = (int)(result);
    return (int)(result);
}

// Reference entry 10331090; body size 21 bytes.
#line 1 "ENTRY_10331090"
int __stdcall FUN_10331090(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10331090<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_1033109a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10332bb0; body size 27 bytes.
#line 1 "ENTRY_10332bb0"
int FUN_10332bb0(int result, int a2) {

    return (int)(result);
}

// Reference entry 10332c00; body size 27 bytes.
#line 1 "ENTRY_10332c00"
int FUN_10332c00(int result, int a2) {

    return (int)(result);
}

// Reference entry 10332c30; body size 21 bytes.
#line 1 "ENTRY_10332c30"
int FUN_10332c30(int result, int a2) {

    return (int)(result);
}

// Reference entry 10332c50; body size 11 bytes.
#line 1 "ENTRY_10332c50"
int FUN_10332c50(int a1) {

    return (int)(*(int *)*(int *)a1);
}

// Reference entry 10332c60; body size 27 bytes.
#line 1 "ENTRY_10332c60"
int FUN_10332c60(int result, int a2) {

    return (int)(result);
}

// Reference entry 10332d40; body size 18 bytes.
#line 1 "ENTRY_10332d40"
int FUN_10332d40(int result, int a2) {

    return (int)(result);
}

// Reference entry 10332d60; body size 27 bytes.
#line 1 "ENTRY_10332d60"
int FUN_10332d60(int result, int a2) {

    return (int)(result);
}

// Reference entry 10332db0; body size 20 bytes.
#line 1 "ENTRY_10332db0"
int FUN_10332db0(int result, int a2) {

    return (int)(result);
}

// Reference entry 10332dd0; body size 27 bytes.
#line 1 "ENTRY_10332dd0"
int FUN_10332dd0(int result, int a2) {

    return (int)(result);
}

// Reference entry 10332e20; body size 20 bytes.
#line 1 "ENTRY_10332e20"
int FUN_10332e20(int result, int a2) {

    return (int)(result);
}

// Reference entry 10332e40; body size 20 bytes.
#line 1 "ENTRY_10332e40"
int FUN_10332e40(int result, int a2) {

    return (int)(result);
}

// Reference entry 10332e60; body size 21 bytes.
#line 1 "ENTRY_10332e60"
int FUN_10332e60(int result, int a2) {

    return (int)(result);
}

// Reference entry 10332e80; body size 20 bytes.
#line 1 "ENTRY_10332e80"
int FUN_10332e80(int result, int a2) {

    return (int)(result);
}

// Reference entry 10333440; body size 22 bytes.
#line 1 "ENTRY_10333440"
int __stdcall FUN_10333440(int a1, int a2) {

    int result; // (int)((int(__stdcall*)(int a1, int a2))&FUN_10333440<>)
    *(int*)result = (int)((int)(*(int *)a1));
    *(int*)(result + 4) = (int)(*(int *)a2);
    return (int)(result);
}

// Reference entry 10333490; body size 13 bytes.
#line 1 "ENTRY_10333490"
int __stdcall FUN_10333490(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10333490<>)
    *(int*)result = (int)((int)(*(int *)a1));
    return (int)(result);
}

// Reference entry 103334d0; body size 13 bytes.
#line 1 "ENTRY_103334d0"
int __stdcall FUN_103334d0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_103334d0<>)
    *(int*)result = (int)((int)(*(int *)a1));
    return (int)(result);
}

// Reference entry 103334e0; body size 13 bytes.
#line 1 "ENTRY_103334e0"
int __stdcall FUN_103334e0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_103334e0<>)
    *(int*)result = (int)((int)(*(int *)a1));
    return (int)(result);
}

// Reference entry 10333690; body size 13 bytes.
#line 1 "ENTRY_10333690"
int __stdcall FUN_10333690(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10333690<>)
    *(int*)result = (int)((int)(*(int *)a1));
    return (int)(result);
}

// Reference entry 10333730; body size 22 bytes.
#line 1 "ENTRY_10333730"
int __stdcall FUN_10333730(int a1, int a2) {

    int result; // (int)((int(__stdcall*)(int a1, int a2))&FUN_10333730<>)
    *(int*)result = (int)((int)(*(int *)a1));
    *(int*)(result + 4) = (int)(*(int *)a2);
    return (int)(result);
}

// Reference entry 10333750; body size 13 bytes.
#line 1 "ENTRY_10333750"
int __stdcall FUN_10333750(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10333750<>)
    *(int*)result = (int)((int)(*(int *)a1));
    return (int)(result);
}

// Reference entry 10337aa0; body size 25 bytes.
#line 1 "ENTRY_10337aa0"
int __stdcall FUN_10337aa0(int result) {

    return (int)(result);
}

// Reference entry 10337ae0; body size 25 bytes.
#line 1 "ENTRY_10337ae0"
int __stdcall FUN_10337ae0(int result) {

    return (int)(result);
}

// Reference entry 10337b00; body size 19 bytes.
#line 1 "ENTRY_10337b00"
int __stdcall FUN_10337b00(int result) {

    return (int)(result);
}

// Reference entry 10337b20; body size 12 bytes.
#line 1 "ENTRY_10337b20"
int __stdcall FUN_10337b20(int a1) {

    return (int)(*(int *)a1);
}

// Reference entry 10337b30; body size 25 bytes.
#line 1 "ENTRY_10337b30"
int __stdcall FUN_10337b30(int result) {

    return (int)(result);
}

// Reference entry 10337bf0; body size 16 bytes.
#line 1 "ENTRY_10337bf0"
int __stdcall FUN_10337bf0(int result) {

    return (int)(result);
}

// Reference entry 10337c10; body size 25 bytes.
#line 1 "ENTRY_10337c10"
int __stdcall FUN_10337c10(int result) {

    return (int)(result);
}

// Reference entry 10337c50; body size 18 bytes.
#line 1 "ENTRY_10337c50"
int __stdcall FUN_10337c50(int result) {

    return (int)(result);
}

// Reference entry 10337c70; body size 25 bytes.
#line 1 "ENTRY_10337c70"
int __stdcall FUN_10337c70(int result) {

    return (int)(result);
}

// Reference entry 10337cb0; body size 18 bytes.
#line 1 "ENTRY_10337cb0"
int __stdcall FUN_10337cb0(int result) {

    return (int)(result);
}

// Reference entry 10337cd0; body size 18 bytes.
#line 1 "ENTRY_10337cd0"
int __stdcall FUN_10337cd0(int a1) {

    return (int)(*(int *)a1);
}

// Reference entry 10337cf0; body size 19 bytes.
#line 1 "ENTRY_10337cf0"
int __stdcall FUN_10337cf0(int result) {

    return (int)(result);
}

// Reference entry 10337d10; body size 18 bytes.
#line 1 "ENTRY_10337d10"
int __stdcall FUN_10337d10(int result) {

    return (int)(result);
}

// Reference entry 1034f960; body size 20 bytes.
#line 1 "ENTRY_1034f960"
int __stdcall FUN_1034f960(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1034f960<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1034f980; body size 11 bytes.
#line 1 "ENTRY_1034f980"
int __stdcall FUN_1034f980(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_1034f980<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 1034f9e0; body size 20 bytes.
#line 1 "ENTRY_1034f9e0"
int __stdcall FUN_1034f9e0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1034f9e0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1034fa50; body size 11 bytes.
#line 1 "ENTRY_1034fa50"
int __stdcall FUN_1034fa50(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_1034fa50<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 1034fa60; body size 11 bytes.
#line 1 "ENTRY_1034fa60"
int __stdcall FUN_1034fa60(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_1034fa60<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 1034fa70; body size 11 bytes.
#line 1 "ENTRY_1034fa70"
int __stdcall FUN_1034fa70(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_1034fa70<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 1034fa80; body size 20 bytes.
#line 1 "ENTRY_1034fa80"
int __stdcall FUN_1034fa80(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1034fa80<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1034fb40; body size 20 bytes.
#line 1 "ENTRY_1034fb40"
int __stdcall FUN_1034fb40(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1034fb40<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1034fb60; body size 11 bytes.
#line 1 "ENTRY_1034fb60"
int __stdcall FUN_1034fb60(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_1034fb60<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 1034fd30; body size 20 bytes.
#line 1 "ENTRY_1034fd30"
int __stdcall FUN_1034fd30(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1034fd30<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1034fd70; body size 11 bytes.
#line 1 "ENTRY_1034fd70"
int __stdcall FUN_1034fd70(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_1034fd70<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 1034fed0; body size 20 bytes.
#line 1 "ENTRY_1034fed0"
int __stdcall FUN_1034fed0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1034fed0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10350040; body size 11 bytes.
#line 1 "ENTRY_10350040"
int __stdcall FUN_10350040(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10350040<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10350070; body size 11 bytes.
#line 1 "ENTRY_10350070"
int __stdcall FUN_10350070(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10350070<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 103500a0; body size 11 bytes.
#line 1 "ENTRY_103500a0"
int __stdcall FUN_103500a0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_103500a0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 103500d0; body size 20 bytes.
#line 1 "ENTRY_103500d0"
int __stdcall FUN_103500d0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_103500d0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10350370; body size 20 bytes.
#line 1 "ENTRY_10350370"
int __stdcall FUN_10350370(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10350370<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 103503b0; body size 11 bytes.
#line 1 "ENTRY_103503b0"
int __stdcall FUN_103503b0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_103503b0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10352560; body size 20 bytes.
#line 1 "ENTRY_10352560"
int __stdcall FUN_10352560(int a1) {

    return (int)(thunk_FUN_10cf4ae0(0));
}

// Reference entry 10352580; body size 20 bytes.
#line 1 "ENTRY_10352580"
int __stdcall FUN_10352580(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10352580<>)
    return (int)(thunk_FUN_10cf3780(v1));
}

// Reference entry 103525a0; body size 20 bytes.
#line 1 "ENTRY_103525a0"
int __stdcall FUN_103525a0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_103525a0<>)
    return (int)(thunk_FUN_10cf3780(v1));
}

// Reference entry 103526a0; body size 20 bytes.
#line 1 "ENTRY_103526a0"
int FUN_103526a0(int a1) {

    return (int)(thunk_FUN_10cf4ae0(0));
}

// Reference entry 10352768; body size 20 bytes.
#line 1 "ENTRY_10352768"
int FUN_10352768(int a1) {

    int result; // (int)((int(*)(int a1))&FUN_10352768<>)
int *v1 = (int *)((int)((int *)(result - 0x3f7bfb3c))); // (int)((int(*)(int a1))&FUN_10352768<>)
    int v2 = (int)(*v1 + 1); // (int)((int(*)(int a1))&FUN_10352768<>)
    *v1 = (int)(v2);
    if (v2 == 0) {
        return (int)(result);
    }
    return (int)(thunk_FUN_1038c170());
}

// Reference entry 10352790; body size 24 bytes.
#line 1 "ENTRY_10352790"
int FUN_10352790(int a1, int a2) {

    return (int)(thunk_FUN_10cf3780(*(int *)a1));
}

// Reference entry 103527e0; body size 24 bytes.
#line 1 "ENTRY_103527e0"
int FUN_103527e0(int a1, int a2) {

    int v1 = (int)(*(int *)(*(int *)a1 + 0x10ec)); // (int)&FUN_103527ea
    return (int)(thunk_FUN_103860f0(*(int *)a2, v1));
}

// Reference entry 10352800; body size 24 bytes.
#line 1 "ENTRY_10352800"
int FUN_10352800(int a1, int a2) {

    return (int)(thunk_FUN_10cf3780(*(int *)a1));
}

// Reference entry 10352820; body size 24 bytes.
#line 1 "ENTRY_10352820"
int FUN_10352820(int a1, int a2) {

    return (int)(thunk_FUN_10cf3780(*(int *)a1));
}

// Reference entry 10356ba0; body size 21 bytes.
#line 1 "ENTRY_10356ba0"
int __stdcall FUN_10356ba0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10356ba0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10356baa<>
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10356bc0; body size 12 bytes.
#line 1 "ENTRY_10356bc0"
int __stdcall FUN_10356bc0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10356bc0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10356c70; body size 21 bytes.
#line 1 "ENTRY_10356c70"
int __stdcall FUN_10356c70(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10356c70<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10356c7a<>
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10356d30; body size 12 bytes.
#line 1 "ENTRY_10356d30"
int __stdcall FUN_10356d30(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10356d30<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10356d40; body size 12 bytes.
#line 1 "ENTRY_10356d40"
int __stdcall FUN_10356d40(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10356d40<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10356d50; body size 12 bytes.
#line 1 "ENTRY_10356d50"
int __stdcall FUN_10356d50(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10356d50<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10356d60; body size 21 bytes.
#line 1 "ENTRY_10356d60"
int __stdcall FUN_10356d60(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10356d60<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10356d6a<>
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10356ec0; body size 21 bytes.
#line 1 "ENTRY_10356ec0"
int __stdcall FUN_10356ec0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10356ec0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10356eca
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10356ee0; body size 12 bytes.
#line 1 "ENTRY_10356ee0"
int __stdcall FUN_10356ee0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10356ee0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 103595d8; body size 20 bytes.
#line 1 "ENTRY_103595d8"
int FUN_103595d8(int a1) {

    int result; // (int)((int(*)(int a1))&FUN_103595d8<>)
int *v1 = (int *)((int)((int *)(result - 0x3f7bfb3c))); // (int)((int(*)(int a1))&FUN_103595d8<>)
    int v2 = (int)(*v1 + 1); // (int)((int(*)(int a1))&FUN_103595d8<>)
    *v1 = (int)(v2);
    if (v2 == 0) {
        return (int)(result);
    }
    return (int)(thunk_FUN_1038c9c0());
}

// Reference entry 10359600; body size 20 bytes.
#line 1 "ENTRY_10359600"
int FUN_10359600(int a1) {

    return (int)(thunk_FUN_10cf4ae0(0));
}

// Reference entry 103596c8; body size 20 bytes.
#line 1 "ENTRY_103596c8"
int FUN_103596c8(int a1) {

    int result; // (int)((int(*)(int a1))&FUN_103596c8<>)
int *v1 = (int *)((int)((int *)(result - 0x3f7bfb3c))); // (int)((int(*)(int a1))&FUN_103596c8<>)
    int v2 = (int)(*v1 + 1); // (int)((int(*)(int a1))&FUN_103596c8<>)
    *v1 = (int)(v2);
    if (v2 == 0) {
        return (int)(result);
    }
    return (int)(thunk_FUN_1038c170());
}

// Reference entry 103596f0; body size 24 bytes.
#line 1 "ENTRY_103596f0"
int FUN_103596f0(int a1, int a2) {

    return (int)(thunk_FUN_10cf3780(*(int *)a1));
}

// Reference entry 10359740; body size 24 bytes.
#line 1 "ENTRY_10359740"
int FUN_10359740(int a1, int a2) {

    int v1 = (int)(*(int *)(*(int *)a1 + 0x10ec)); // (int)&FUN_1035974a
    return (int)(thunk_FUN_103860f0(*(int *)a2, v1));
}

// Reference entry 10359760; body size 24 bytes.
#line 1 "ENTRY_10359760"
int FUN_10359760(int a1, int a2) {

    return (int)(thunk_FUN_10cf3780(*(int *)a1));
}

// Reference entry 10359780; body size 24 bytes.
#line 1 "ENTRY_10359780"
int FUN_10359780(int a1, int a2) {

    return (int)(thunk_FUN_10cf3780(*(int *)a1));
}

// Reference entry 10359bd0; body size 11 bytes.
#line 1 "ENTRY_10359bd0"
int __stdcall FUN_10359bd0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10359bd0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10359c70; body size 11 bytes.
#line 1 "ENTRY_10359c70"
int __stdcall FUN_10359c70(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10359c70<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10359d10; body size 11 bytes.
#line 1 "ENTRY_10359d10"
int __stdcall FUN_10359d10(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10359d10<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10359e40; body size 11 bytes.
#line 1 "ENTRY_10359e40"
int __stdcall FUN_10359e40(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10359e40<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10367820; body size 20 bytes.
#line 1 "ENTRY_10367820"
int __stdcall FUN_10367820(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10367820<>)
    return (int)(thunk_FUN_103860f0(a1, *(int *)(v1 + 0x10ec)));
}

// Reference entry 10367840; body size 20 bytes.
#line 1 "ENTRY_10367840"
int __stdcall FUN_10367840(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10367840<>)
    return (int)(thunk_FUN_10cf3780(v1));
}

// Reference entry 1039ebd0; body size 26 bytes.
#line 1 "ENTRY_1039ebd0"
int FUN_1039ebd0(int a1, int a2, int a3, int a4) {

    int result; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_1039ebd0<>)
    return (int)(result);
}

// Reference entry 103bf770; body size 20 bytes.
#line 1 "ENTRY_103bf770"
int FUN_103bf770(int a1, int a2, int a3) {

    return (int)(FUN_103c3720(*(int *)a2, a3));
}

// Reference entry 103c01e0; body size 20 bytes.
#line 1 "ENTRY_103c01e0"
int FUN_103c01e0(int a1, int a2, int a3) {

    return (int)(FUN_103c3720(*(int *)a2, a3));
}

// Reference entry 103c0210; body size 11 bytes.
#line 1 "ENTRY_103c0210"
int __stdcall FUN_103c0210(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_103c0210<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 103d6de0; body size 26 bytes.
#line 1 "ENTRY_103d6de0"
int FUN_103d6de0(int result, int a2) {

    if (a2 < 0) {
        return (int)(result);
    }
    return (int)(result > -1 == a2 == 0 ? result : 0x7fffffff);
}

// Reference entry 103f5b10; body size 26 bytes.
#line 1 "ENTRY_103f5b10"
int FUN_103f5b10(int a1, int a2, int a3, int a4) {

    int result; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_103f5b10<>)
    return (int)(result);
}

// Reference entry 1040f3c0; body size 20 bytes.
#line 1 "ENTRY_1040f3c0"
int __stdcall FUN_1040f3c0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1040f3c0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1040f560; body size 20 bytes.
#line 1 "ENTRY_1040f560"
int __stdcall FUN_1040f560(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1040f560<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1040f9b0; body size 22 bytes.
#line 1 "ENTRY_1040f9b0"
int FUN_1040f9b0(int a1) {

    int v1 = (int)(*(int *)(a1 + 44)); // (int)&FUN_1040f9b4
    if (v1 == 0) {
        int result; // (int)((int(*)(int a1))&FUN_1040f9b0<>)
        return (int)(result);
    }
    return (int)(*(int *)v1);
}

// Reference entry 104101e0; body size 21 bytes.
#line 1 "ENTRY_104101e0"
int __stdcall FUN_104101e0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_104101e0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_104101ea
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10410b50; body size 22 bytes.
#line 1 "ENTRY_10410b50"
int FUN_10410b50(int a1) {

    int v1 = (int)(*(int *)(a1 + 44)); // (int)&FUN_10410b54
    if (v1 == 0) {
        int result; // (int)((int(*)(int a1))&FUN_10410b50<>)
        return (int)(result);
    }
    return (int)(*(int *)v1);
}

// Reference entry 10410be0; body size 11 bytes.
#line 1 "ENTRY_10410be0"
int __stdcall FUN_10410be0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10410be0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 1041d740; body size 20 bytes.
#line 1 "ENTRY_1041d740"
int __stdcall FUN_1041d740(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1041d740<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1041d760; body size 11 bytes.
#line 1 "ENTRY_1041d760"
int __stdcall FUN_1041d760(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_1041d760<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 1041d770; body size 20 bytes.
#line 1 "ENTRY_1041d770"
int __stdcall FUN_1041d770(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1041d770<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1041d790; body size 20 bytes.
#line 1 "ENTRY_1041d790"
int __stdcall FUN_1041d790(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1041d790<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1041d7b0; body size 11 bytes.
#line 1 "ENTRY_1041d7b0"
int __stdcall FUN_1041d7b0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_1041d7b0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 1041d7c0; body size 20 bytes.
#line 1 "ENTRY_1041d7c0"
int __stdcall FUN_1041d7c0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1041d7c0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1041d7e0; body size 11 bytes.
#line 1 "ENTRY_1041d7e0"
int __stdcall FUN_1041d7e0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_1041d7e0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 1041d7f0; body size 20 bytes.
#line 1 "ENTRY_1041d7f0"
int __stdcall FUN_1041d7f0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1041d7f0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1041d810; body size 11 bytes.
#line 1 "ENTRY_1041d810"
int __stdcall FUN_1041d810(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_1041d810<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 1041d820; body size 20 bytes.
#line 1 "ENTRY_1041d820"
int __stdcall FUN_1041d820(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1041d820<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1041d860; body size 11 bytes.
#line 1 "ENTRY_1041d860"
int __stdcall FUN_1041d860(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_1041d860<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 1041d890; body size 20 bytes.
#line 1 "ENTRY_1041d890"
int __stdcall FUN_1041d890(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1041d890<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1041d8d0; body size 20 bytes.
#line 1 "ENTRY_1041d8d0"
int __stdcall FUN_1041d8d0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1041d8d0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1041d910; body size 11 bytes.
#line 1 "ENTRY_1041d910"
int __stdcall FUN_1041d910(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_1041d910<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 1041d940; body size 20 bytes.
#line 1 "ENTRY_1041d940"
int __stdcall FUN_1041d940(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1041d940<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1041d980; body size 11 bytes.
#line 1 "ENTRY_1041d980"
int __stdcall FUN_1041d980(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_1041d980<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 1041d9b0; body size 20 bytes.
#line 1 "ENTRY_1041d9b0"
int __stdcall FUN_1041d9b0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1041d9b0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1041d9f0; body size 11 bytes.
#line 1 "ENTRY_1041d9f0"
int __stdcall FUN_1041d9f0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_1041d9f0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 1041e110; body size 21 bytes.
#line 1 "ENTRY_1041e110"
int __stdcall FUN_1041e110(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_1041e110<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_1041e11a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 1041e130; body size 12 bytes.
#line 1 "ENTRY_1041e130"
int __stdcall FUN_1041e130(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_1041e130<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 1041e140; body size 21 bytes.
#line 1 "ENTRY_1041e140"
int __stdcall FUN_1041e140(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_1041e140<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_1041e14a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 1041e160; body size 21 bytes.
#line 1 "ENTRY_1041e160"
int __stdcall FUN_1041e160(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_1041e160<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_1041e16a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 1041e180; body size 12 bytes.
#line 1 "ENTRY_1041e180"
int __stdcall FUN_1041e180(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_1041e180<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 1041e190; body size 21 bytes.
#line 1 "ENTRY_1041e190"
int __stdcall FUN_1041e190(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_1041e190<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_1041e19a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 1041e1b0; body size 12 bytes.
#line 1 "ENTRY_1041e1b0"
int __stdcall FUN_1041e1b0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_1041e1b0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 1041e1c0; body size 21 bytes.
#line 1 "ENTRY_1041e1c0"
int __stdcall FUN_1041e1c0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_1041e1c0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_1041e1ca
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 1041e1e0; body size 12 bytes.
#line 1 "ENTRY_1041e1e0"
int __stdcall FUN_1041e1e0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_1041e1e0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 1041e8b0; body size 11 bytes.
#line 1 "ENTRY_1041e8b0"
int __stdcall FUN_1041e8b0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1041e8b0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 1041e8c0; body size 11 bytes.
#line 1 "ENTRY_1041e8c0"
int __stdcall FUN_1041e8c0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1041e8c0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 1041e8d0; body size 11 bytes.
#line 1 "ENTRY_1041e8d0"
int __stdcall FUN_1041e8d0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1041e8d0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 1041e8e0; body size 11 bytes.
#line 1 "ENTRY_1041e8e0"
int __stdcall FUN_1041e8e0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1041e8e0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 1041e8f0; body size 11 bytes.
#line 1 "ENTRY_1041e8f0"
int __stdcall FUN_1041e8f0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1041e8f0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10425820; body size 20 bytes.
#line 1 "ENTRY_10425820"
int __stdcall FUN_10425820(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10425820<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10425840; body size 20 bytes.
#line 1 "ENTRY_10425840"
int __stdcall FUN_10425840(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10425840<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10425860; body size 20 bytes.
#line 1 "ENTRY_10425860"
int __stdcall FUN_10425860(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10425860<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10425880; body size 20 bytes.
#line 1 "ENTRY_10425880"
int __stdcall FUN_10425880(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10425880<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 104258a0; body size 20 bytes.
#line 1 "ENTRY_104258a0"
int __stdcall FUN_104258a0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104258a0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 104258e0; body size 20 bytes.
#line 1 "ENTRY_104258e0"
int __stdcall FUN_104258e0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104258e0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10425920; body size 20 bytes.
#line 1 "ENTRY_10425920"
int __stdcall FUN_10425920(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10425920<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10425960; body size 20 bytes.
#line 1 "ENTRY_10425960"
int __stdcall FUN_10425960(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10425960<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10425ef0; body size 11 bytes.
#line 1 "ENTRY_10425ef0"
int FUN_10425ef0(int a1) {

    return (int)(thunk_FUN_101f1c60(a1));
}

// Reference entry 10425f30; body size 11 bytes.
#line 1 "ENTRY_10425f30"
int FUN_10425f30(int a1) {

    return (int)(thunk_FUN_101f1c60(a1));
}

// Reference entry 10425f70; body size 21 bytes.
#line 1 "ENTRY_10425f70"
int __stdcall FUN_10425f70(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10425f70<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10425f7a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10425f90; body size 21 bytes.
#line 1 "ENTRY_10425f90"
int __stdcall FUN_10425f90(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10425f90<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10425f9a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10425fb0; body size 21 bytes.
#line 1 "ENTRY_10425fb0"
int __stdcall FUN_10425fb0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10425fb0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10425fba
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10425fd0; body size 21 bytes.
#line 1 "ENTRY_10425fd0"
int __stdcall FUN_10425fd0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10425fd0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10425fda
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10426140; body size 11 bytes.
#line 1 "ENTRY_10426140"
int FUN_10426140(int a1) {

    return (int)(thunk_FUN_101f1c60(a1));
}

// Reference entry 10426180; body size 11 bytes.
#line 1 "ENTRY_10426180"
int FUN_10426180(int a1) {

    return (int)(thunk_FUN_101f1c60(a1));
}

// Reference entry 10426200; body size 11 bytes.
#line 1 "ENTRY_10426200"
int __stdcall FUN_10426200(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10426200<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10426210; body size 11 bytes.
#line 1 "ENTRY_10426210"
int __stdcall FUN_10426210(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10426210<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10426220; body size 11 bytes.
#line 1 "ENTRY_10426220"
int __stdcall FUN_10426220(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10426220<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10426230; body size 11 bytes.
#line 1 "ENTRY_10426230"
int __stdcall FUN_10426230(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10426230<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 1042b1d0; body size 10 bytes.
#line 1 "ENTRY_1042b1d0"
int __stdcall FUN_1042b1d0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1) {

    return (int)(thunk_FUN_101f1c60());
}

// Reference entry 1042b210; body size 10 bytes.
#line 1 "ENTRY_1042b210"
int __stdcall FUN_1042b210(unsigned int recovered_unused_stack_0) {

    return (int)(thunk_FUN_101f1c60());
}

// Reference entry 10442c50; body size 20 bytes.
#line 1 "ENTRY_10442c50"
int __stdcall FUN_10442c50(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10442c50<>)
    return (int)(thunk_FUN_10cf3780(v1));
}

// Reference entry 10442c70; body size 24 bytes.
#line 1 "ENTRY_10442c70"
int FUN_10442c70(int a1, int a2) {

    return (int)(thunk_FUN_10cf3780(*(int *)a1));
}

// Reference entry 10442ea0; body size 24 bytes.
#line 1 "ENTRY_10442ea0"
int FUN_10442ea0(int a1, int a2) {

    return (int)(thunk_FUN_10cf3780(*(int *)a1));
}

// Reference entry 1045ee40; body size 20 bytes.
#line 1 "ENTRY_1045ee40"
int __stdcall FUN_1045ee40(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1045ee40<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1045ee60; body size 20 bytes.
#line 1 "ENTRY_1045ee60"
int __stdcall FUN_1045ee60(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1045ee60<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1045eef0; body size 21 bytes.
#line 1 "ENTRY_1045eef0"
int __stdcall FUN_1045eef0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_1045eef0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_1045eefa
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 1045efb0; body size 11 bytes.
#line 1 "ENTRY_1045efb0"
int __stdcall FUN_1045efb0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1045efb0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10461030; body size 11 bytes.
#line 1 "ENTRY_10461030"
int __stdcall FUN_10461030(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10461030<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10461040; body size 11 bytes.
#line 1 "ENTRY_10461040"
int __stdcall FUN_10461040(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10461040<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 104610e0; body size 14 bytes.
#line 1 "ENTRY_104610e0"
int __stdcall FUN_104610e0(int a1) {

    return (int)(thunk_FUN_1061c5e0(5));
}

// Reference entry 10461100; body size 14 bytes.
#line 1 "ENTRY_10461100"
int FUN_10461100(int a1) {

    return (int)(thunk_FUN_1061c5e0(5));
}

// Reference entry 104611c0; body size 12 bytes.
#line 1 "ENTRY_104611c0"
int __stdcall FUN_104611c0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_104611c0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 104613b0; body size 14 bytes.
#line 1 "ENTRY_104613b0"
int FUN_104613b0(int a1) {

    return (int)(thunk_FUN_1061c5e0(5));
}

// Reference entry 1046bfa0; body size 20 bytes.
#line 1 "ENTRY_1046bfa0"
int __stdcall FUN_1046bfa0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1046bfa0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1046bfc0; body size 20 bytes.
#line 1 "ENTRY_1046bfc0"
int __stdcall FUN_1046bfc0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1046bfc0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1046bfe0; body size 20 bytes.
#line 1 "ENTRY_1046bfe0"
int __stdcall FUN_1046bfe0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1046bfe0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1046c020; body size 20 bytes.
#line 1 "ENTRY_1046c020"
int __stdcall FUN_1046c020(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1046c020<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1046c0e0; body size 21 bytes.
#line 1 "ENTRY_1046c0e0"
int __stdcall FUN_1046c0e0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_1046c0e0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_1046c0ea
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 1046c100; body size 21 bytes.
#line 1 "ENTRY_1046c100"
int __stdcall FUN_1046c100(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_1046c100<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_1046c10a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 1046c240; body size 11 bytes.
#line 1 "ENTRY_1046c240"
int __stdcall FUN_1046c240(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1046c240<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 1046c250; body size 11 bytes.
#line 1 "ENTRY_1046c250"
int __stdcall FUN_1046c250(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1046c250<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10471940; body size 20 bytes.
#line 1 "ENTRY_10471940"
int __stdcall FUN_10471940(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10471940<>)
    return (int)(thunk_FUN_10cf3780(v1));
}

// Reference entry 10471ab0; body size 24 bytes.
#line 1 "ENTRY_10471ab0"
int FUN_10471ab0(int a1, int a2) {

    return (int)(thunk_FUN_10cf3780(*(int *)a1));
}

// Reference entry 10471cf0; body size 24 bytes.
#line 1 "ENTRY_10471cf0"
int FUN_10471cf0(int a1, int a2) {

    return (int)(thunk_FUN_10cf3780(*(int *)a1));
}

// Reference entry 10478b90; body size 20 bytes.
#line 1 "ENTRY_10478b90"
int __stdcall FUN_10478b90(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10478b90<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10478bb0; body size 20 bytes.
#line 1 "ENTRY_10478bb0"
int __stdcall FUN_10478bb0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10478bb0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10478bd0; body size 20 bytes.
#line 1 "ENTRY_10478bd0"
int __stdcall FUN_10478bd0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10478bd0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10478bf0; body size 20 bytes.
#line 1 "ENTRY_10478bf0"
int __stdcall FUN_10478bf0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10478bf0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10478c10; body size 20 bytes.
#line 1 "ENTRY_10478c10"
int __stdcall FUN_10478c10(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10478c10<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10478c30; body size 20 bytes.
#line 1 "ENTRY_10478c30"
int __stdcall FUN_10478c30(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10478c30<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10478c50; body size 20 bytes.
#line 1 "ENTRY_10478c50"
int __stdcall FUN_10478c50(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10478c50<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10478c90; body size 20 bytes.
#line 1 "ENTRY_10478c90"
int __stdcall FUN_10478c90(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10478c90<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10478cd0; body size 20 bytes.
#line 1 "ENTRY_10478cd0"
int __stdcall FUN_10478cd0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10478cd0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10478d10; body size 20 bytes.
#line 1 "ENTRY_10478d10"
int __stdcall FUN_10478d10(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10478d10<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10478d50; body size 20 bytes.
#line 1 "ENTRY_10478d50"
int __stdcall FUN_10478d50(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10478d50<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10478d90; body size 20 bytes.
#line 1 "ENTRY_10478d90"
int __stdcall FUN_10478d90(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10478d90<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10478dd0; body size 11 bytes.
#line 1 "ENTRY_10478dd0"
int FUN_10478dd0(int a1) {

    return (int)(thunk_FUN_1047ce60(a1));
}

// Reference entry 10478de0; body size 11 bytes.
#line 1 "ENTRY_10478de0"
int FUN_10478de0(int a1) {

    return (int)(thunk_FUN_1047d6a0(a1));
}

// Reference entry 10478df0; body size 11 bytes.
#line 1 "ENTRY_10478df0"
int FUN_10478df0(int a1) {

    return (int)(thunk_FUN_1047ce60(a1));
}

// Reference entry 10478e40; body size 11 bytes.
#line 1 "ENTRY_10478e40"
int FUN_10478e40(int a1) {

    return (int)(thunk_FUN_1047ce60(a1));
}

// Reference entry 10479240; body size 21 bytes.
#line 1 "ENTRY_10479240"
int __stdcall FUN_10479240(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10479240<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_1047924a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10479260; body size 21 bytes.
#line 1 "ENTRY_10479260"
int __stdcall FUN_10479260(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10479260<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_1047926a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10479280; body size 21 bytes.
#line 1 "ENTRY_10479280"
int __stdcall FUN_10479280(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10479280<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_1047928a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 104792a0; body size 21 bytes.
#line 1 "ENTRY_104792a0"
int __stdcall FUN_104792a0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_104792a0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_104792aa
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 104792c0; body size 21 bytes.
#line 1 "ENTRY_104792c0"
int __stdcall FUN_104792c0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_104792c0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_104792ca
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 104792e0; body size 21 bytes.
#line 1 "ENTRY_104792e0"
int __stdcall FUN_104792e0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_104792e0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_104792ea
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10479560; body size 11 bytes.
#line 1 "ENTRY_10479560"
int FUN_10479560(int a1) {

    return (int)(thunk_FUN_1047ce60(a1));
}

// Reference entry 10479570; body size 11 bytes.
#line 1 "ENTRY_10479570"
int FUN_10479570(int a1) {

    return (int)(thunk_FUN_1047d6a0(a1));
}

// Reference entry 10479580; body size 11 bytes.
#line 1 "ENTRY_10479580"
int FUN_10479580(int a1) {

    return (int)(thunk_FUN_1047ce60(a1));
}

// Reference entry 104795d0; body size 11 bytes.
#line 1 "ENTRY_104795d0"
int FUN_104795d0(int a1) {

    return (int)(thunk_FUN_1047ce60(a1));
}

// Reference entry 104796a0; body size 11 bytes.
#line 1 "ENTRY_104796a0"
int __stdcall FUN_104796a0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104796a0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 104796b0; body size 11 bytes.
#line 1 "ENTRY_104796b0"
int __stdcall FUN_104796b0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104796b0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 104796c0; body size 11 bytes.
#line 1 "ENTRY_104796c0"
int __stdcall FUN_104796c0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104796c0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 104796d0; body size 11 bytes.
#line 1 "ENTRY_104796d0"
int __stdcall FUN_104796d0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104796d0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 104796e0; body size 11 bytes.
#line 1 "ENTRY_104796e0"
int __stdcall FUN_104796e0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104796e0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 104796f0; body size 11 bytes.
#line 1 "ENTRY_104796f0"
int __stdcall FUN_104796f0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104796f0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10479ec0; body size 10 bytes.
#line 1 "ENTRY_10479ec0"
int __stdcall FUN_10479ec0(unsigned int recovered_unused_stack_0) {

    return (int)(thunk_FUN_1047ce60());
}

// Reference entry 10479ed0; body size 10 bytes.
#line 1 "ENTRY_10479ed0"
int __stdcall FUN_10479ed0(unsigned int recovered_unused_stack_0) {

    return (int)(thunk_FUN_1047d6a0());
}

// Reference entry 10479ee0; body size 10 bytes.
#line 1 "ENTRY_10479ee0"
int __stdcall FUN_10479ee0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1) {

    return (int)(thunk_FUN_1047ce60());
}

// Reference entry 10479f30; body size 10 bytes.
#line 1 "ENTRY_10479f30"
int __stdcall FUN_10479f30(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1) {

    return (int)(thunk_FUN_1047ce60());
}

// Reference entry 1047e080; body size 20 bytes.
#line 1 "ENTRY_1047e080"
int __stdcall FUN_1047e080(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1047e080<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1047e210; body size 20 bytes.
#line 1 "ENTRY_1047e210"
int __stdcall FUN_1047e210(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1047e210<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1047e6c0; body size 20 bytes.
#line 1 "ENTRY_1047e6c0"
int __stdcall FUN_1047e6c0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1047e6c0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1047eca0; body size 20 bytes.
#line 1 "ENTRY_1047eca0"
int __stdcall FUN_1047eca0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1047eca0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1047f420; body size 20 bytes.
#line 1 "ENTRY_1047f420"
int __stdcall FUN_1047f420(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_1047f420<>)
    return (int)(thunk_FUN_10cf3780(v1));
}

// Reference entry 1047f760; body size 20 bytes.
#line 1 "ENTRY_1047f760"
int __stdcall FUN_1047f760(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_1047f760<>)
    return (int)(thunk_FUN_10cf3780(v1));
}

// Reference entry 1047f780; body size 20 bytes.
#line 1 "ENTRY_1047f780"
int __stdcall FUN_1047f780(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_1047f780<>)
    return (int)(thunk_FUN_10cf3780(v1));
}

// Reference entry 1047f7e0; body size 20 bytes.
#line 1 "ENTRY_1047f7e0"
int __stdcall FUN_1047f7e0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_1047f7e0<>)
    return (int)(thunk_FUN_10cf3780(v1));
}

// Reference entry 1047f880; body size 24 bytes.
#line 1 "ENTRY_1047f880"
int FUN_1047f880(int a1, int a2) {

    return (int)(thunk_FUN_10cf3780(*(int *)a1));
}

// Reference entry 1047f8a0; body size 24 bytes.
#line 1 "ENTRY_1047f8a0"
int FUN_1047f8a0(int a1, int a2) {

    return (int)(thunk_FUN_10cf3780(*(int *)a1));
}

// Reference entry 1047f9b0; body size 24 bytes.
#line 1 "ENTRY_1047f9b0"
int FUN_1047f9b0(int a1, int a2) {

    return (int)(thunk_FUN_10cf3780(*(int *)a1));
}

// Reference entry 1047fab0; body size 24 bytes.
#line 1 "ENTRY_1047fab0"
int FUN_1047fab0(int a1, int a2) {

    return (int)(thunk_FUN_10cf3780(*(int *)a1));
}

// Reference entry 10480f40; body size 21 bytes.
#line 1 "ENTRY_10480f40"
int __stdcall FUN_10480f40(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10480f40<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10480f4a<>
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10481270; body size 21 bytes.
#line 1 "ENTRY_10481270"
int __stdcall FUN_10481270(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10481270<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_1048127a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10481910; body size 24 bytes.
#line 1 "ENTRY_10481910"
int FUN_10481910(int a1, int a2) {

    return (int)(thunk_FUN_10cf3780(*(int *)a1));
}

// Reference entry 10481930; body size 24 bytes.
#line 1 "ENTRY_10481930"
int FUN_10481930(int a1, int a2) {

    return (int)(thunk_FUN_10cf3780(*(int *)a1));
}

// Reference entry 10481a40; body size 24 bytes.
#line 1 "ENTRY_10481a40"
int FUN_10481a40(int a1, int a2) {

    return (int)(thunk_FUN_10cf3780(*(int *)a1));
}

// Reference entry 10481b40; body size 24 bytes.
#line 1 "ENTRY_10481b40"
int FUN_10481b40(int a1, int a2) {

    return (int)(thunk_FUN_10cf3780(*(int *)a1));
}

// Reference entry 104820b0; body size 11 bytes.
#line 1 "ENTRY_104820b0"
int __stdcall FUN_104820b0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104820b0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10482360; body size 11 bytes.
#line 1 "ENTRY_10482360"
int __stdcall FUN_10482360(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10482360<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10497560; body size 11 bytes.
#line 1 "ENTRY_10497560"
int __stdcall FUN_10497560(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10497560<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10497570; body size 11 bytes.
#line 1 "ENTRY_10497570"
int __stdcall FUN_10497570(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10497570<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10497620; body size 12 bytes.
#line 1 "ENTRY_10497620"
int __stdcall FUN_10497620(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10497620<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 1049d360; body size 20 bytes.
#line 1 "ENTRY_1049d360"
int __stdcall FUN_1049d360(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_1049d360<>)
    return (int)(thunk_FUN_10cf3780(v1));
}

// Reference entry 1049d380; body size 24 bytes.
#line 1 "ENTRY_1049d380"
int FUN_1049d380(int a1, int a2) {

    return (int)(thunk_FUN_10cf3780(*(int *)a1));
}

// Reference entry 1049d5b0; body size 24 bytes.
#line 1 "ENTRY_1049d5b0"
int FUN_1049d5b0(int a1, int a2) {

    return (int)(thunk_FUN_10cf3780(*(int *)a1));
}

// Reference entry 104ab040; body size 20 bytes.
#line 1 "ENTRY_104ab040"
int __stdcall FUN_104ab040(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104ab040<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 104ab060; body size 11 bytes.
#line 1 "ENTRY_104ab060"
int __stdcall FUN_104ab060(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_104ab060<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 104ab070; body size 11 bytes.
#line 1 "ENTRY_104ab070"
int __stdcall FUN_104ab070(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_104ab070<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 104ab080; body size 20 bytes.
#line 1 "ENTRY_104ab080"
int __stdcall FUN_104ab080(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104ab080<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 104ab0a0; body size 11 bytes.
#line 1 "ENTRY_104ab0a0"
int __stdcall FUN_104ab0a0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_104ab0a0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 104ab0b0; body size 20 bytes.
#line 1 "ENTRY_104ab0b0"
int __stdcall FUN_104ab0b0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104ab0b0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 104ab160; body size 20 bytes.
#line 1 "ENTRY_104ab160"
int __stdcall FUN_104ab160(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104ab160<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 104ab1a0; body size 11 bytes.
#line 1 "ENTRY_104ab1a0"
int __stdcall FUN_104ab1a0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_104ab1a0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 104ab1d0; body size 11 bytes.
#line 1 "ENTRY_104ab1d0"
int __stdcall FUN_104ab1d0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_104ab1d0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 104ab200; body size 20 bytes.
#line 1 "ENTRY_104ab200"
int __stdcall FUN_104ab200(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104ab200<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 104ab240; body size 11 bytes.
#line 1 "ENTRY_104ab240"
int __stdcall FUN_104ab240(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_104ab240<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 104ab270; body size 20 bytes.
#line 1 "ENTRY_104ab270"
int __stdcall FUN_104ab270(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104ab270<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 104abf80; body size 30 bytes.
#line 1 "ENTRY_104abf80"
int FUN_104abf80(int a1) {

    int result = (int)(FUN_1008ca83((int)&DAT_1187ae7c), 0); // (int)&FUN_104abf89
    if ((char)result == 0) {
        return (int)(result);
    }
    return (int)(thunk_FUN_104ae600());
}

// Reference entry 104ac010; body size 24 bytes.
#line 1 "ENTRY_104ac010"
int FUN_104ac010(int a1, int a2, int a3) {

    return (int)(FUN_104ab710(*(int *)a2, (int)*(short *)a3));
}

// Reference entry 104ac1a0; body size 21 bytes.
#line 1 "ENTRY_104ac1a0"
int __stdcall FUN_104ac1a0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_104ac1a0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_104ac1aa
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 104ac1c0; body size 12 bytes.
#line 1 "ENTRY_104ac1c0"
int __stdcall FUN_104ac1c0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_104ac1c0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 104ac1d0; body size 12 bytes.
#line 1 "ENTRY_104ac1d0"
int __stdcall FUN_104ac1d0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_104ac1d0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 104ac1e0; body size 21 bytes.
#line 1 "ENTRY_104ac1e0"
int __stdcall FUN_104ac1e0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_104ac1e0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_104ac1ea
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 104ac200; body size 12 bytes.
#line 1 "ENTRY_104ac200"
int __stdcall FUN_104ac200(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_104ac200<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 104ac210; body size 21 bytes.
#line 1 "ENTRY_104ac210"
int __stdcall FUN_104ac210(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_104ac210<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_104ac21a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 104ac7c0; body size 30 bytes.
#line 1 "ENTRY_104ac7c0"
int FUN_104ac7c0(int a1) {

    int result = (int)(FUN_1008ca83((int)&DAT_1187ae7c), 0); // (int)&FUN_104ac7c9
    if ((char)result == 0) {
        return (int)(result);
    }
    return (int)(thunk_FUN_104ae600());
}

// Reference entry 104ac850; body size 24 bytes.
#line 1 "ENTRY_104ac850"
int FUN_104ac850(int a1, int a2, int a3) {

    return (int)(FUN_104ab710(*(int *)a2, (int)*(short *)a3));
}

// Reference entry 104ac940; body size 11 bytes.
#line 1 "ENTRY_104ac940"
int __stdcall FUN_104ac940(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104ac940<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 104ac950; body size 11 bytes.
#line 1 "ENTRY_104ac950"
int __stdcall FUN_104ac950(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104ac950<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 104ac960; body size 11 bytes.
#line 1 "ENTRY_104ac960"
int __stdcall FUN_104ac960(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104ac960<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 104b4a60; body size 20 bytes.
#line 1 "ENTRY_104b4a60"
int __stdcall FUN_104b4a60(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104b4a60<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 104b4ad0; body size 11 bytes.
#line 1 "ENTRY_104b4ad0"
int __stdcall FUN_104b4ad0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_104b4ad0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 104b4ae0; body size 11 bytes.
#line 1 "ENTRY_104b4ae0"
int __stdcall FUN_104b4ae0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_104b4ae0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 104b4af0; body size 20 bytes.
#line 1 "ENTRY_104b4af0"
int __stdcall FUN_104b4af0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104b4af0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 104b4b10; body size 20 bytes.
#line 1 "ENTRY_104b4b10"
int __stdcall FUN_104b4b10(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104b4b10<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 104b4b30; body size 20 bytes.
#line 1 "ENTRY_104b4b30"
int __stdcall FUN_104b4b30(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104b4b30<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 104b4ca0; body size 11 bytes.
#line 1 "ENTRY_104b4ca0"
int __stdcall FUN_104b4ca0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_104b4ca0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 104b4cd0; body size 11 bytes.
#line 1 "ENTRY_104b4cd0"
int __stdcall FUN_104b4cd0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_104b4cd0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 104b4d00; body size 20 bytes.
#line 1 "ENTRY_104b4d00"
int __stdcall FUN_104b4d00(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104b4d00<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 104b4d40; body size 20 bytes.
#line 1 "ENTRY_104b4d40"
int __stdcall FUN_104b4d40(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104b4d40<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 104b4e20; body size 20 bytes.
#line 1 "ENTRY_104b4e20"
int __stdcall FUN_104b4e20(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_104b4e20<>)
    return (int)(thunk_FUN_10cf3780(v1));
}

// Reference entry 104b4e90; body size 24 bytes.
#line 1 "ENTRY_104b4e90"
int FUN_104b4e90(int a1, int a2) {

    return (int)(thunk_FUN_10cf3780(*(int *)a1));
}

// Reference entry 104b4f40; body size 11 bytes.
#line 1 "ENTRY_104b4f40"
int FUN_104b4f40(int a1) {

    return (int)(thunk_FUN_101f1c60(a1));
}

// Reference entry 104b5070; body size 21 bytes.
#line 1 "ENTRY_104b5070"
int __stdcall FUN_104b5070(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_104b5070<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_104b507a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 104b5130; body size 12 bytes.
#line 1 "ENTRY_104b5130"
int __stdcall FUN_104b5130(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_104b5130<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 104b5140; body size 12 bytes.
#line 1 "ENTRY_104b5140"
int __stdcall FUN_104b5140(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_104b5140<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 104b5150; body size 21 bytes.
#line 1 "ENTRY_104b5150"
int __stdcall FUN_104b5150(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_104b5150<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_104b515a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 104b5170; body size 21 bytes.
#line 1 "ENTRY_104b5170"
int __stdcall FUN_104b5170(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_104b5170<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_104b517a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 104b5380; body size 24 bytes.
#line 1 "ENTRY_104b5380"
int FUN_104b5380(int a1, int a2) {

    return (int)(thunk_FUN_10cf3780(*(int *)a1));
}

// Reference entry 104b5430; body size 11 bytes.
#line 1 "ENTRY_104b5430"
int FUN_104b5430(int a1) {

    return (int)(thunk_FUN_101f1c60(a1));
}

// Reference entry 104b54a0; body size 11 bytes.
#line 1 "ENTRY_104b54a0"
int __stdcall FUN_104b54a0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104b54a0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 104b5540; body size 11 bytes.
#line 1 "ENTRY_104b5540"
int __stdcall FUN_104b5540(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104b5540<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 104b5550; body size 11 bytes.
#line 1 "ENTRY_104b5550"
int __stdcall FUN_104b5550(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104b5550<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 104b89a0; body size 10 bytes.
#line 1 "ENTRY_104b89a0"
int __stdcall FUN_104b89a0(unsigned int recovered_unused_stack_0) {

    return (int)(thunk_FUN_101f1c60());
}

// Reference entry 104bd3b0; body size 20 bytes.
#line 1 "ENTRY_104bd3b0"
int __stdcall FUN_104bd3b0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104bd3b0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 104bd3d0; body size 20 bytes.
#line 1 "ENTRY_104bd3d0"
int __stdcall FUN_104bd3d0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104bd3d0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 104bd410; body size 26 bytes.
#line 1 "ENTRY_104bd410"
int __stdcall FUN_104bd410(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_104bd410<>)
    return (int)(thunk_FUN_10d9e6c0(*(int *)(v1 + 148)));
}

// Reference entry 104bd460; body size 21 bytes.
#line 1 "ENTRY_104bd460"
int __stdcall FUN_104bd460(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_104bd460<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_104bd46a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 104bd500; body size 11 bytes.
#line 1 "ENTRY_104bd500"
int __stdcall FUN_104bd500(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104bd500<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 104c96f0; body size 20 bytes.
#line 1 "ENTRY_104c96f0"
int __stdcall FUN_104c96f0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104c96f0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 104c9710; body size 20 bytes.
#line 1 "ENTRY_104c9710"
int __stdcall FUN_104c9710(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104c9710<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 104c9780; body size 21 bytes.
#line 1 "ENTRY_104c9780"
int __stdcall FUN_104c9780(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_104c9780<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_104c978a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 104c9820; body size 11 bytes.
#line 1 "ENTRY_104c9820"
int __stdcall FUN_104c9820(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104c9820<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 104d6680; body size 20 bytes.
#line 1 "ENTRY_104d6680"
int __stdcall FUN_104d6680(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104d6680<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 104d66a0; body size 20 bytes.
#line 1 "ENTRY_104d66a0"
int __stdcall FUN_104d66a0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104d66a0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 104d6760; body size 17 bytes.
#line 1 "ENTRY_104d6760"
int FUN_104d6760(int a1) {

    return (int)(*(int *)*(int *)a1);
}

// Reference entry 104d6b80; body size 21 bytes.
#line 1 "ENTRY_104d6b80"
int __stdcall FUN_104d6b80(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_104d6b80<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_104d6b8a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 104d6ec0; body size 17 bytes.
#line 1 "ENTRY_104d6ec0"
int FUN_104d6ec0(int a1) {

    return (int)(*(int *)*(int *)a1);
}

// Reference entry 104d6f00; body size 11 bytes.
#line 1 "ENTRY_104d6f00"
int __stdcall FUN_104d6f00(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_104d6f00<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 104d7b80; body size 15 bytes.
#line 1 "ENTRY_104d7b80"
int __stdcall FUN_104d7b80(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1) {

    int result; // (int)((int(__stdcall*)(void))&FUN_104d7b80<>)
    return (int)(result);
}

// Reference entry 104d8940; body size 24 bytes.
#line 1 "ENTRY_104d8940"
int __stdcall FUN_104d8940(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_104d8940<>)
    return (int)(v1 != 7);
}

// Reference entry 1050da5b; body size 13 bytes.
#line 1 "ENTRY_1050da5b"
int FUN_1050da5b(void) {

    int v1; // (int)((int(*)(void))&FUN_1050da5b<>)
    int v2 = (int)(v1);
    int result; // (int)((int(*)(void))&FUN_1050da5b<>)
    bool v3; // (int)((int(*)(void))&FUN_1050da5b<>)
    if (v1 != 1 == v3) {
        result = (int)(FUN_1050da22(), 0);
    }
    *(char*)v2 = (char)((int)((char)v1 + (char)v2 + (char)v3));
    return (int)(result);
}

// Reference entry 10596cf0; body size 44 bytes.
#line 1 "ENTRY_10596cf0"
int FUN_10596cf0(int result) {

    int v1 = (int)(*(int *)(*(int *)(FUN_1001c9c2() + 76) + 12), 0); // (int)&FUN_10596cfd
    FUN_1006a316(result, (int)&DAT_118b758c, v1 != 0 ? v1 : (int)&DAT_1186d2ee);
    return (int)(result);
}

// Reference entry 105b04b0; body size 20 bytes.
#line 1 "ENTRY_105b04b0"
int __stdcall FUN_105b04b0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_105b04b0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 105b04d0; body size 11 bytes.
#line 1 "ENTRY_105b04d0"
int __stdcall FUN_105b04d0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_105b04d0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 105b04e0; body size 11 bytes.
#line 1 "ENTRY_105b04e0"
int __stdcall FUN_105b04e0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_105b04e0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 105b0710; body size 20 bytes.
#line 1 "ENTRY_105b0710"
int __stdcall FUN_105b0710(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_105b0710<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 105b0750; body size 11 bytes.
#line 1 "ENTRY_105b0750"
int __stdcall FUN_105b0750(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_105b0750<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 105b0780; body size 11 bytes.
#line 1 "ENTRY_105b0780"
int __stdcall FUN_105b0780(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_105b0780<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 105b0b20; body size 11 bytes.
#line 1 "ENTRY_105b0b20"
int FUN_105b0b20(int a1) {

    return (int)(a1 & -256 | (int)((*(char *)a1 & 20) != 0));
}

// Reference entry 105b0eb0; body size 21 bytes.
#line 1 "ENTRY_105b0eb0"
int __stdcall FUN_105b0eb0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_105b0eb0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_105b0eba
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 105b0ed0; body size 12 bytes.
#line 1 "ENTRY_105b0ed0"
int __stdcall FUN_105b0ed0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_105b0ed0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 105b0ee0; body size 12 bytes.
#line 1 "ENTRY_105b0ee0"
int __stdcall FUN_105b0ee0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_105b0ee0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 105b11d0; body size 10 bytes.
#line 1 "ENTRY_105b11d0"
int FUN_105b11d0(int a1) {

    return (int)(*(int *)a1 & 20);
}

// Reference entry 105b12d0; body size 11 bytes.
#line 1 "ENTRY_105b12d0"
int __stdcall FUN_105b12d0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_105b12d0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 105b2540; body size 10 bytes.
#line 1 "ENTRY_105b2540"
int __stdcall FUN_105b2540(int a1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1) {

    return (int)(a1 & 20);
}

// Reference entry 105c9ce0; body size 11 bytes.
#line 1 "ENTRY_105c9ce0"
int __stdcall FUN_105c9ce0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_105c9ce0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 105c9cf0; body size 11 bytes.
#line 1 "ENTRY_105c9cf0"
int __stdcall FUN_105c9cf0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_105c9cf0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 105ca4d0; body size 20 bytes.
#line 1 "ENTRY_105ca4d0"
int FUN_105ca4d0(int a1) {

    return (int)(thunk_FUN_10eae090(0));
}

// Reference entry 105cca90; body size 12 bytes.
#line 1 "ENTRY_105cca90"
int __stdcall FUN_105cca90(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_105cca90<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 105d4a00; body size 20 bytes.
#line 1 "ENTRY_105d4a00"
int __stdcall FUN_105d4a00(int a1) {

    return (int)(thunk_FUN_10eae090(0));
}

// Reference entry 105e8c80; body size 11 bytes.
#line 1 "ENTRY_105e8c80"
int __stdcall FUN_105e8c80(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_105e8c80<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 105e8cc0; body size 20 bytes.
#line 1 "ENTRY_105e8cc0"
int __stdcall FUN_105e8cc0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_105e8cc0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 105e8eb0; body size 20 bytes.
#line 1 "ENTRY_105e8eb0"
int __stdcall FUN_105e8eb0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_105e8eb0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 105e8ed0; body size 26 bytes.
#line 1 "ENTRY_105e8ed0"
int __stdcall FUN_105e8ed0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_105e8ed0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 8) = (int)(*(int *)(a1 + 4));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 105e8ef0; body size 11 bytes.
#line 1 "ENTRY_105e8ef0"
int __stdcall FUN_105e8ef0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_105e8ef0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 105e8f30; body size 11 bytes.
#line 1 "ENTRY_105e8f30"
int __stdcall FUN_105e8f30(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_105e8f30<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 105e8f90; body size 11 bytes.
#line 1 "ENTRY_105e8f90"
int __stdcall FUN_105e8f90(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_105e8f90<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 105e9170; body size 11 bytes.
#line 1 "ENTRY_105e9170"
int __stdcall FUN_105e9170(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_105e9170<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 105e9280; body size 20 bytes.
#line 1 "ENTRY_105e9280"
int __stdcall FUN_105e9280(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_105e9280<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 105e98c0; body size 20 bytes.
#line 1 "ENTRY_105e98c0"
int __stdcall FUN_105e98c0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_105e98c0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 105e9900; body size 26 bytes.
#line 1 "ENTRY_105e9900"
int __stdcall FUN_105e9900(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_105e9900<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 8) = (int)(*(int *)(a1 + 4));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 105e9950; body size 11 bytes.
#line 1 "ENTRY_105e9950"
int __stdcall FUN_105e9950(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_105e9950<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 105e9a60; body size 11 bytes.
#line 1 "ENTRY_105e9a60"
int __stdcall FUN_105e9a60(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_105e9a60<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 105e9bc0; body size 11 bytes.
#line 1 "ENTRY_105e9bc0"
int __stdcall FUN_105e9bc0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_105e9bc0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 105ea0d0; body size 16 bytes.
#line 1 "ENTRY_105ea0d0"
int FUN_105ea0d0(int a1, int a2) {

    return (int)(a2 & -256 | (int)(*(int *)(a1) == *(int *)(a2)));
}

// Reference entry 105ea420; body size 11 bytes.
#line 1 "ENTRY_105ea420"
int FUN_105ea420(int a1) {

    return (int)(thunk_FUN_1034e600(a1));
}

// Reference entry 105eb430; body size 12 bytes.
#line 1 "ENTRY_105eb430"
int __stdcall FUN_105eb430(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_105eb430<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 105eb4d0; body size 21 bytes.
#line 1 "ENTRY_105eb4d0"
int __stdcall FUN_105eb4d0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_105eb4d0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_105eb4da<>
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 105eb7b0; body size 21 bytes.
#line 1 "ENTRY_105eb7b0"
int __stdcall FUN_105eb7b0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_105eb7b0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_105eb7ba<>
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 105eb7d0; body size 27 bytes.
#line 1 "ENTRY_105eb7d0"
int __stdcall FUN_105eb7d0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_105eb7d0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)(a1 + 4)); // (int)&FUN_105eb7dc<>
    *(int*)(v1 + 4) = (int)(*(int *)a1);
    *(int*)(v1 + 8) = (int)(result);
    return (int)(result);
}

// Reference entry 105eb800; body size 12 bytes.
#line 1 "ENTRY_105eb800"
int __stdcall FUN_105eb800(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_105eb800<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 105eb8a0; body size 12 bytes.
#line 1 "ENTRY_105eb8a0"
int __stdcall FUN_105eb8a0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_105eb8a0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 105eb950; body size 12 bytes.
#line 1 "ENTRY_105eb950"
int __stdcall FUN_105eb950(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_105eb950<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 105ec0f0; body size 16 bytes.
#line 1 "ENTRY_105ec0f0"
int FUN_105ec0f0(int a1, int a2) {

    return (int)(a2 & -256 | (int)(*(int *)(a1) == *(int *)(a2)));
}

// Reference entry 105ec440; body size 11 bytes.
#line 1 "ENTRY_105ec440"
int FUN_105ec440(int a1) {

    return (int)(thunk_FUN_1034e600(a1));
}

// Reference entry 105eca60; body size 13 bytes.
#line 1 "ENTRY_105eca60"
int __stdcall FUN_105eca60(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_105eca60<>)
    *(int*)result = (int)((int)(*(int *)a1));
    return (int)(result);
}

// Reference entry 105ecf10; body size 11 bytes.
#line 1 "ENTRY_105ecf10"
int __stdcall FUN_105ecf10(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_105ecf10<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 105ecf20; body size 22 bytes.
#line 1 "ENTRY_105ecf20"
int __stdcall FUN_105ecf20(int a1, int a2) {

    int result; // (int)((int(__stdcall*)(int a1, int a2))&FUN_105ecf20<>)
    *(int*)result = (int)((int)(*(int *)a1));
    *(int*)(result + 4) = (int)(*(int *)a2);
    return (int)(result);
}

// Reference entry 105ef910; body size 12 bytes.
#line 1 "ENTRY_105ef910"
int __stdcall FUN_105ef910(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_105ef910<>)
    int v2 = (int)(v1);
    return (int)(v2 & -256 | (int)(v2 == a1));
}

// Reference entry 105efc50; body size 12 bytes.
#line 1 "ENTRY_105efc50"
int __stdcall FUN_105efc50(int a1) {

    return (int)(thunk_FUN_1034e600(a1));
}

// Reference entry 10647a40; body size 20 bytes.
#line 1 "ENTRY_10647a40"
int __stdcall FUN_10647a40(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10647a40<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10647a60; body size 26 bytes.
#line 1 "ENTRY_10647a60"
int __stdcall FUN_10647a60(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10647a60<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 8) = (int)(*(int *)(a1 + 4));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10647a80; body size 26 bytes.
#line 1 "ENTRY_10647a80"
int __stdcall FUN_10647a80(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10647a80<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 8) = (int)(*(int *)(a1 + 4));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10647aa0; body size 20 bytes.
#line 1 "ENTRY_10647aa0"
int __stdcall FUN_10647aa0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10647aa0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10647ae0; body size 26 bytes.
#line 1 "ENTRY_10647ae0"
int __stdcall FUN_10647ae0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10647ae0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 8) = (int)(*(int *)(a1 + 4));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10647b30; body size 26 bytes.
#line 1 "ENTRY_10647b30"
int __stdcall FUN_10647b30(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10647b30<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 8) = (int)(*(int *)(a1 + 4));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10648a40; body size 21 bytes.
#line 1 "ENTRY_10648a40"
int __stdcall FUN_10648a40(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10648a40<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10648a4a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10648a60; body size 27 bytes.
#line 1 "ENTRY_10648a60"
int __stdcall FUN_10648a60(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10648a60<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)(a1 + 4)); // (int)&FUN_10648a6c
    *(int*)(v1 + 4) = (int)(*(int *)a1);
    *(int*)(v1 + 8) = (int)(result);
    return (int)(result);
}

// Reference entry 10648a90; body size 27 bytes.
#line 1 "ENTRY_10648a90"
int __stdcall FUN_10648a90(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10648a90<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)(a1 + 4)); // (int)&FUN_10648a9c
    *(int*)(v1 + 4) = (int)(*(int *)a1);
    *(int*)(v1 + 8) = (int)(result);
    return (int)(result);
}

// Reference entry 106496b0; body size 11 bytes.
#line 1 "ENTRY_106496b0"
int __stdcall FUN_106496b0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_106496b0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 106496c0; body size 20 bytes.
#line 1 "ENTRY_106496c0"
int __stdcall FUN_106496c0(int a1, int a2) {

    int result; // (int)((int(__stdcall*)(int a1, int a2))&FUN_106496c0<>)
    *(int*)result = (int)((int)(a1));
    *(char*)(result + 4) = (char)(*(char *)a2);
    return (int)(result);
}

// Reference entry 106496e0; body size 20 bytes.
#line 1 "ENTRY_106496e0"
int __stdcall FUN_106496e0(int a1, int a2) {

    int result; // (int)((int(__stdcall*)(int a1, int a2))&FUN_106496e0<>)
    *(int*)result = (int)((int)(a1));
    *(char*)(result + 4) = (char)(*(char *)a2);
    return (int)(result);
}

// Reference entry 1068c8c0; body size 16 bytes.
#line 1 "ENTRY_1068c8c0"
int FUN_1068c8c0(int a1, int a2) {

    return (int)(FUN_10692b90(*(int *)a2));
}

// Reference entry 10690840; body size 16 bytes.
#line 1 "ENTRY_10690840"
int FUN_10690840(int a1, int a2) {

    return (int)(FUN_10692b90(*(int *)a2));
}

// Reference entry 10699920; body size 20 bytes.
#line 1 "ENTRY_10699920"
int __stdcall FUN_10699920(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10699920<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10699a10; body size 20 bytes.
#line 1 "ENTRY_10699a10"
int __stdcall FUN_10699a10(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10699a10<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10699c20; body size 16 bytes.
#line 1 "ENTRY_10699c20"
int FUN_10699c20(int a1, int a2) {

    return (int)(FUN_1069ccd0(*(int *)a2));
}

// Reference entry 10699f40; body size 21 bytes.
#line 1 "ENTRY_10699f40"
int __stdcall FUN_10699f40(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10699f40<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10699f4a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 1069a480; body size 16 bytes.
#line 1 "ENTRY_1069a480"
int FUN_1069a480(int a1, int a2) {

    return (int)(FUN_1069ccd0(*(int *)a2));
}

// Reference entry 1069a570; body size 11 bytes.
#line 1 "ENTRY_1069a570"
int __stdcall FUN_1069a570(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1069a570<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 106a8660; body size 26 bytes.
#line 1 "ENTRY_106a8660"
int FUN_106a8660(int a1, int a2, int a3, int a4) {

    int result; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_106a8660<>)
    return (int)(result);
}

// Reference entry 106a8ab0; body size 20 bytes.
#line 1 "ENTRY_106a8ab0"
int __stdcall FUN_106a8ab0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_106a8ab0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 106a8ad0; body size 20 bytes.
#line 1 "ENTRY_106a8ad0"
int __stdcall FUN_106a8ad0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_106a8ad0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 106a8af0; body size 11 bytes.
#line 1 "ENTRY_106a8af0"
int __stdcall FUN_106a8af0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_106a8af0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 106a8b00; body size 11 bytes.
#line 1 "ENTRY_106a8b00"
int __stdcall FUN_106a8b00(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_106a8b00<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 106a8b10; body size 11 bytes.
#line 1 "ENTRY_106a8b10"
int __stdcall FUN_106a8b10(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_106a8b10<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 106a8d60; body size 20 bytes.
#line 1 "ENTRY_106a8d60"
int __stdcall FUN_106a8d60(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_106a8d60<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 106a8da0; body size 20 bytes.
#line 1 "ENTRY_106a8da0"
int __stdcall FUN_106a8da0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_106a8da0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 106a8de0; body size 11 bytes.
#line 1 "ENTRY_106a8de0"
int __stdcall FUN_106a8de0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_106a8de0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 106a8e10; body size 11 bytes.
#line 1 "ENTRY_106a8e10"
int __stdcall FUN_106a8e10(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_106a8e10<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 106a8e40; body size 11 bytes.
#line 1 "ENTRY_106a8e40"
int __stdcall FUN_106a8e40(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_106a8e40<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 106a9a90; body size 14 bytes.
#line 1 "ENTRY_106a9a90"
int FUN_106a9a90(int a1) {

    return (int)(thunk_FUN_1061c5e0(4));
}

// Reference entry 106a9b30; body size 17 bytes.
#line 1 "ENTRY_106a9b30"
int FUN_106a9b30(int a1) {

    int v1 = (int)(*(int *)*(int *)a1); // (int)&FUN_106a9b36
    return (int)(v1 & -256 | (int)(v1 == 0));
}

// Reference entry 106ad770; body size 21 bytes.
#line 1 "ENTRY_106ad770"
int __stdcall FUN_106ad770(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_106ad770<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_106ad77a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 106ad790; body size 21 bytes.
#line 1 "ENTRY_106ad790"
int __stdcall FUN_106ad790(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_106ad790<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_106ad79a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 106ad7b0; body size 12 bytes.
#line 1 "ENTRY_106ad7b0"
int __stdcall FUN_106ad7b0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_106ad7b0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 106ad7c0; body size 12 bytes.
#line 1 "ENTRY_106ad7c0"
int __stdcall FUN_106ad7c0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_106ad7c0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 106ad7d0; body size 12 bytes.
#line 1 "ENTRY_106ad7d0"
int __stdcall FUN_106ad7d0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_106ad7d0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 106afe30; body size 14 bytes.
#line 1 "ENTRY_106afe30"
int FUN_106afe30(int a1) {

    return (int)(thunk_FUN_1061c5e0(4));
}

// Reference entry 106afed0; body size 17 bytes.
#line 1 "ENTRY_106afed0"
int FUN_106afed0(int a1) {

    int v1 = (int)(*(int *)*(int *)a1); // (int)&FUN_106afed6
    return (int)(v1 & -256 | (int)(v1 == 0));
}

// Reference entry 106b03d0; body size 11 bytes.
#line 1 "ENTRY_106b03d0"
int __stdcall FUN_106b03d0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_106b03d0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 106b03e0; body size 11 bytes.
#line 1 "ENTRY_106b03e0"
int __stdcall FUN_106b03e0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_106b03e0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 106b6540; body size 57 bytes.
#line 1 "ENTRY_106b6540"
int FUN_106b6540(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_106b6540<>)
    if (v1 == 1) {
        int v2 = (int)(*(int *)(*(int *)a1 + 32)); // (int)&FUN_106b656c
        return (int)(v2 & -256 | (int)((char)v2 == 0));
    }
    int v3 = (int)(v1 - 2); // (int)&FUN_106b6549<>
    if (v3 != 0) {
        return (int)(v3 & -256);
    }
    int v4 = (int)(*(int *)(*(int *)a1 + 36)); // (int)&FUN_106b6559
    return (int)(v4 & -256 | (int)((char)v4 == 0));
}

// Reference entry 106b6680; body size 14 bytes.
#line 1 "ENTRY_106b6680"
int __stdcall FUN_106b6680(int a1) {

    return (int)(thunk_FUN_1061c5e0(4));
}

// Reference entry 106b6720; body size 17 bytes.
#line 1 "ENTRY_106b6720"
int __stdcall FUN_106b6720(int a1) {

    int v1 = (int)(*(int *)a1); // (int)&FUN_106b6724
    return (int)(v1 & -256 | (int)(v1 == 0));
}

// Reference entry 106b6740; body size 16 bytes.
#line 1 "ENTRY_106b6740"
int __stdcall FUN_106b6740(int a1, int a2) {

    return (int)(thunk_FUN_10d9fde0(a2));
}

// Reference entry 106d13f0; body size 26 bytes.
#line 1 "ENTRY_106d13f0"
int __stdcall FUN_106d13f0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_106d13f0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 8) = (int)(*(int *)(a1 + 4));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 106d1410; body size 20 bytes.
#line 1 "ENTRY_106d1410"
int __stdcall FUN_106d1410(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_106d1410<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 106d1430; body size 20 bytes.
#line 1 "ENTRY_106d1430"
int __stdcall FUN_106d1430(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_106d1430<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 106d15b0; body size 26 bytes.
#line 1 "ENTRY_106d15b0"
int __stdcall FUN_106d15b0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_106d15b0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 8) = (int)(*(int *)(a1 + 4));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 106d1600; body size 20 bytes.
#line 1 "ENTRY_106d1600"
int __stdcall FUN_106d1600(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_106d1600<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 106d1640; body size 20 bytes.
#line 1 "ENTRY_106d1640"
int __stdcall FUN_106d1640(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_106d1640<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 106d17d0; body size 17 bytes.
#line 1 "ENTRY_106d17d0"
int FUN_106d17d0(int a1) {

    return (int)(thunk_FUN_106d62c0((int)*(char *)(a1 + 4)));
}

// Reference entry 106d17f0; body size 11 bytes.
#line 1 "ENTRY_106d17f0"
int FUN_106d17f0(int a1) {

    return (int)(thunk_FUN_106d5f20(a1));
}

// Reference entry 106d1800; body size 11 bytes.
#line 1 "ENTRY_106d1800"
int FUN_106d1800(int a1) {

    return (int)(thunk_FUN_106d64c0(a1));
}

// Reference entry 106d1de0; body size 27 bytes.
#line 1 "ENTRY_106d1de0"
int __stdcall FUN_106d1de0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_106d1de0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)(a1 + 4)); // (int)&FUN_106d1dec
    *(int*)(v1 + 4) = (int)(*(int *)a1);
    *(int*)(v1 + 8) = (int)(result);
    return (int)(result);
}

// Reference entry 106d1e10; body size 21 bytes.
#line 1 "ENTRY_106d1e10"
int __stdcall FUN_106d1e10(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_106d1e10<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_106d1e1a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 106d1e30; body size 21 bytes.
#line 1 "ENTRY_106d1e30"
int __stdcall FUN_106d1e30(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_106d1e30<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_106d1e3a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 106d22d0; body size 17 bytes.
#line 1 "ENTRY_106d22d0"
int FUN_106d22d0(int a1) {

    return (int)(thunk_FUN_106d62c0((int)*(char *)(a1 + 4)));
}

// Reference entry 106d22f0; body size 11 bytes.
#line 1 "ENTRY_106d22f0"
int FUN_106d22f0(int a1) {

    return (int)(thunk_FUN_106d5f20(a1));
}

// Reference entry 106d2300; body size 11 bytes.
#line 1 "ENTRY_106d2300"
int FUN_106d2300(int a1) {

    return (int)(thunk_FUN_106d64c0(a1));
}

// Reference entry 106d2410; body size 20 bytes.
#line 1 "ENTRY_106d2410"
int __stdcall FUN_106d2410(int a1, int a2) {

    int result; // (int)((int(__stdcall*)(int a1, int a2))&FUN_106d2410<>)
    *(int*)result = (int)((int)(a1));
    *(char*)(result + 4) = (char)(*(char *)a2);
    return (int)(result);
}

// Reference entry 106d2430; body size 11 bytes.
#line 1 "ENTRY_106d2430"
int __stdcall FUN_106d2430(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_106d2430<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 106d2440; body size 11 bytes.
#line 1 "ENTRY_106d2440"
int __stdcall FUN_106d2440(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_106d2440<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 106d3360; body size 13 bytes.
#line 1 "ENTRY_106d3360"
int FUN_106d3360(void) {

    int v1; // (int)((int(*)(void))&FUN_106d3360<>)
    return (int)(thunk_FUN_106d62c0((int)*(char *)(v1 + 4)));
}

// Reference entry 1083f620; body size 20 bytes.
#line 1 "ENTRY_1083f620"
int __stdcall FUN_1083f620(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1083f620<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1083f640; body size 20 bytes.
#line 1 "ENTRY_1083f640"
int __stdcall FUN_1083f640(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1083f640<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 1083f8f0; body size 21 bytes.
#line 1 "ENTRY_1083f8f0"
int __stdcall FUN_1083f8f0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_1083f8f0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_1083f8fa
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 1083fba0; body size 11 bytes.
#line 1 "ENTRY_1083fba0"
int __stdcall FUN_1083fba0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_1083fba0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 1086e940; body size 25 bytes.
#line 1 "ENTRY_1086e940"
int __stdcall FUN_1086e940(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_1086e940<>)
    *(int*)result = (int)((int)(0));
    *(int*)(result + 4) = (int)(0);
    *(int*)(result + 8) = (int)(0);
    return (int)(result);
}

// Reference entry 1086e960; body size 25 bytes.
#line 1 "ENTRY_1086e960"
int __stdcall FUN_1086e960(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_1086e960<>)
    *(int*)result = (int)((int)(0));
    *(int*)(result + 4) = (int)(0);
    *(int*)(result + 8) = (int)(0);
    return (int)(result);
}

// Reference entry 1086e980; body size 22 bytes.
#line 1 "ENTRY_1086e980"
int __stdcall FUN_1086e980(int a1, int a2) {

    int result; // (int)((int(__stdcall*)(int a1, int a2))&FUN_1086e980<>)
    *(int*)result = (int)((int)(*(int *)a1));
    *(int*)(result + 4) = (int)(*(int *)a2);
    return (int)(result);
}

// Reference entry 1086e9a0; body size 22 bytes.
#line 1 "ENTRY_1086e9a0"
int __stdcall FUN_1086e9a0(int a1, int a2) {

    int result; // (int)((int(__stdcall*)(int a1, int a2))&FUN_1086e9a0<>)
    *(int*)result = (int)((int)(*(int *)a1));
    *(int*)(result + 4) = (int)(*(int *)a2);
    return (int)(result);
}

// Reference entry 1086ea40; body size 48 bytes.
#line 1 "ENTRY_1086ea40"
int FUN_1086ea40(int a1, int a2) {

    int v1 = (int)(*(int *)(a1 + 28)); // (int)&FUN_1086ea48
    if ((int)(v1) > *(int *)(a2 + 28) || *(char *)(a1 + 32) != 0) {
        return (int)(v1 & -256 | 1);
    }
    uint v2 = (uint)(*(int *)(a1 + 24)); // (int)&FUN_1086ea5b
    if ((int)(v2) > *(int *)(a2 + 24)) {
        return (int)(v2 & -256 | 1);
    }
    return (int)(thunk_FUN_102bc4e0(a1, a2));
}

// Reference entry 1086ea80; body size 48 bytes.
#line 1 "ENTRY_1086ea80"
int FUN_1086ea80(int a1, int a2) {

    int v1 = (int)(*(int *)(a1 + 28)); // (int)&FUN_1086ea88
    if ((int)(v1) > *(int *)(a2 + 28) || *(char *)(a1 + 32) != 0) {
        return (int)(v1 & -256 | 1);
    }
    uint v2 = (uint)(*(int *)(a1 + 24)); // (int)&FUN_1086ea9b
    if ((int)(v2) > *(int *)(a2 + 24)) {
        return (int)(v2 & -256 | 1);
    }
    return (int)(thunk_FUN_102bc4e0(a1, a2));
}

// Reference entry 10874040; body size 21 bytes.
#line 1 "ENTRY_10874040"
int __stdcall FUN_10874040(int a1, int a2) {

    int result; // (int)((int(__stdcall*)(int a1, int a2))&FUN_10874040<>)
    *(int*)result = (int)((int)(a1));
    *(int*)(result + 4) = (int)(a1);
    *(int*)(result + 8) = (int)(a2);
    return (int)(result);
}

// Reference entry 10874060; body size 21 bytes.
#line 1 "ENTRY_10874060"
int __stdcall FUN_10874060(int a1, int a2) {

    int result; // (int)((int(__stdcall*)(int a1, int a2))&FUN_10874060<>)
    *(int*)result = (int)((int)(a1));
    *(int*)(result + 4) = (int)(a1);
    *(int*)(result + 8) = (int)(a2);
    return (int)(result);
}

// Reference entry 10874080; body size 11 bytes.
#line 1 "ENTRY_10874080"
int __stdcall FUN_10874080(int a1, unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10874080<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10874090; body size 11 bytes.
#line 1 "ENTRY_10874090"
int __stdcall FUN_10874090(int a1, unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10874090<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 108740a0; body size 11 bytes.
#line 1 "ENTRY_108740a0"
int __stdcall FUN_108740a0(int a1, unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_108740a0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 108740b0; body size 11 bytes.
#line 1 "ENTRY_108740b0"
int __stdcall FUN_108740b0(int a1, unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_108740b0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 108740c0; body size 23 bytes.
#line 1 "ENTRY_108740c0"
int FUN_108740c0(void) {

    int result; // (int)((int(*)(void))&FUN_108740c0<>)
    *(int*)result = (int)((int)(0));
    *(int*)(result + 4) = (int)(0);
    *(int*)(result + 8) = (int)(0);
    return (int)(result);
}

// Reference entry 108740e0; body size 23 bytes.
#line 1 "ENTRY_108740e0"
int FUN_108740e0(void) {

    int result; // (int)((int(*)(void))&FUN_108740e0<>)
    *(int*)result = (int)((int)(0));
    *(int*)(result + 4) = (int)(0);
    *(int*)(result + 8) = (int)(0);
    return (int)(result);
}

// Reference entry 10874120; body size 23 bytes.
#line 1 "ENTRY_10874120"
int FUN_10874120(void) {

    int result; // (int)((int(*)(void))&FUN_10874120<>)
    *(int*)result = (int)((int)(0));
    *(int*)(result + 4) = (int)(0);
    *(int*)(result + 8) = (int)(0);
    return (int)(result);
}

// Reference entry 10874140; body size 23 bytes.
#line 1 "ENTRY_10874140"
int FUN_10874140(void) {

    int result; // (int)((int(*)(void))&FUN_10874140<>)
    *(int*)result = (int)((int)(0));
    *(int*)(result + 4) = (int)(0);
    *(int*)(result + 8) = (int)(0);
    return (int)(result);
}

// Reference entry 10875260; body size 17 bytes.
#line 1 "ENTRY_10875260"
int FUN_10875260(void) {

    int v1; // (int)((int(*)(void))&FUN_10875260<>)
    int v2 = (int)(v1);
    return (int)(FUN_1086eaf0(v2, *(int *)(v2 + 4), *(int *)(v2 + 8)));
}

// Reference entry 10875280; body size 17 bytes.
#line 1 "ENTRY_10875280"
int FUN_10875280(void) {

    int v1; // (int)((int(*)(void))&FUN_10875280<>)
    int v2 = (int)(v1);
    return (int)(FUN_1086eb70(v2, *(int *)(v2 + 4), *(int *)(v2 + 8)));
}

// Reference entry 10875a30; body size 15 bytes.
#line 1 "ENTRY_10875a30"
int __stdcall FUN_10875a30(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10875a30<>)
    return (int)(v1 + 36 * a1);
}

// Reference entry 10875a50; body size 15 bytes.
#line 1 "ENTRY_10875a50"
int __stdcall FUN_10875a50(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10875a50<>)
    return (int)(v1 + 36 * a1);
}

// Reference entry 10876a80; body size 24 bytes.
#line 1 "ENTRY_10876a80"
int __stdcall FUN_10876a80(int a1, int a2, int a3) {

    int v1; // (int)((int(__stdcall*)(int a1, int a2, int a3))&FUN_10876a80<>)
    return (int)(FUN_10872c20(a1, a2, a3, v1));
}

// Reference entry 10876aa0; body size 24 bytes.
#line 1 "ENTRY_10876aa0"
int __stdcall FUN_10876aa0(int a1, int a2, int a3) {

    int v1; // (int)((int(__stdcall*)(int a1, int a2, int a3))&FUN_10876aa0<>)
    return (int)(FUN_10872cd0(a1, a2, a3, v1));
}

// Reference entry 10876ac0; body size 24 bytes.
#line 1 "ENTRY_10876ac0"
int __stdcall FUN_10876ac0(int a1, int a2, int a3, unsigned int recovered_unused_stack_0) {

    int v1; // (int)((int(__stdcall*)(int a1, int a2, int a3))&FUN_10876ac0<>)
    return (int)(FUN_10872c20(a1, a2, a3, v1));
}

// Reference entry 10876ae0; body size 24 bytes.
#line 1 "ENTRY_10876ae0"
int __stdcall FUN_10876ae0(int a1, int a2, int a3, unsigned int recovered_unused_stack_0) {

    int v1; // (int)((int(__stdcall*)(int a1, int a2, int a3))&FUN_10876ae0<>)
    return (int)(FUN_10872cd0(a1, a2, a3, v1));
}

// Reference entry 10876b00; body size 24 bytes.
#line 1 "ENTRY_10876b00"
int __stdcall FUN_10876b00(int a1, int a2, int a3) {

    int v1; // (int)((int(__stdcall*)(int a1, int a2, int a3))&FUN_10876b00<>)
    return (int)(FUN_10872c20(a1, a2, a3, v1));
}

// Reference entry 10876b20; body size 24 bytes.
#line 1 "ENTRY_10876b20"
int __stdcall FUN_10876b20(int a1, int a2, int a3) {

    int v1; // (int)((int(__stdcall*)(int a1, int a2, int a3))&FUN_10876b20<>)
    return (int)(FUN_10872cd0(a1, a2, a3, v1));
}

// Reference entry 10876cd0; body size 11 bytes.
#line 1 "ENTRY_10876cd0"
int __stdcall FUN_10876cd0(int result) {

    return (int)(result);
}

// Reference entry 10876ce0; body size 11 bytes.
#line 1 "ENTRY_10876ce0"
int __stdcall FUN_10876ce0(int result) {

    return (int)(result);
}

// Reference entry 10876cf0; body size 23 bytes.
#line 1 "ENTRY_10876cf0"
int FUN_10876cf0(void) {

    int v1; // (int)((int(*)(void))&FUN_10876cf0<>)
    int v2 = (int)(*(int *)(v1 + 8)); // (int)((int(*)(void))&FUN_10876cf0<>)
    uint v3 = (uint)((int)(0x38e38e39 * (longlong)(v2 - v1) / 0x100000000) >> 3); // (int)&FUN_10876cfc
    return (int)(v3 / 0x80000000 + v3);
}

// Reference entry 10876d10; body size 23 bytes.
#line 1 "ENTRY_10876d10"
int FUN_10876d10(void) {

    int v1; // (int)((int(*)(void))&FUN_10876d10<>)
    int v2 = (int)(*(int *)(v1 + 8)); // (int)((int(*)(void))&FUN_10876d10<>)
    uint v3 = (uint)((int)(0x38e38e39 * (longlong)(v2 - v1) / 0x100000000) >> 3); // (int)&FUN_10876d1c
    return (int)(v3 / 0x80000000 + v3);
}

// Reference entry 10877ae0; body size 12 bytes.
#line 1 "ENTRY_10877ae0"
int __stdcall FUN_10877ae0(int result) {

    int v1; // (int)((int(__stdcall*)(int result))&FUN_10877ae0<>)
    *(int*)result = (int)((int)(*(int *)(v1 + 4)));
    return (int)(result);
}

// Reference entry 10877af0; body size 12 bytes.
#line 1 "ENTRY_10877af0"
int __stdcall FUN_10877af0(int result) {

    int v1; // (int)((int(__stdcall*)(int result))&FUN_10877af0<>)
    *(int*)result = (int)((int)(*(int *)(v1 + 4)));
    return (int)(result);
}

// Reference entry 1087e2d0; body size 23 bytes.
#line 1 "ENTRY_1087e2d0"
int FUN_1087e2d0(void) {

    int v1; // (int)((int(*)(void))&FUN_1087e2d0<>)
    int v2 = (int)(*(int *)(v1 + 4)); // (int)((int(*)(void))&FUN_1087e2d0<>)
    uint v3 = (uint)((int)(0x38e38e39 * (longlong)(v2 - v1) / 0x100000000) >> 3); // (int)&FUN_1087e2dc
    return (int)(v3 / 0x80000000 + v3);
}

// Reference entry 1087e2f0; body size 23 bytes.
#line 1 "ENTRY_1087e2f0"
int FUN_1087e2f0(void) {

    int v1; // (int)((int(*)(void))&FUN_1087e2f0<>)
    int v2 = (int)(*(int *)(v1 + 4)); // (int)((int(*)(void))&FUN_1087e2f0<>)
    uint v3 = (uint)((int)(0x38e38e39 * (longlong)(v2 - v1) / 0x100000000) >> 3); // (int)&FUN_1087e2fc
    return (int)(v3 / 0x80000000 + v3);
}

// Reference entry 10891b80; body size 26 bytes.
#line 1 "ENTRY_10891b80"
int FUN_10891b80(int a1, int a2, int a3, int a4) {

    int result; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_10891b80<>)
    return (int)(result);
}

// Reference entry 108c7650; body size 25 bytes.
#line 1 "ENTRY_108c7650"
int __stdcall FUN_108c7650(int a1) {

    char v1 = (char)(*(char *)a1); // (int)&FUN_108c7654
    return (int)((int)v1 & -256 | (int)(v1 == 0));
}

// Reference entry 10ba1e20; body size 20 bytes.
#line 1 "ENTRY_10ba1e20"
int __stdcall FUN_10ba1e20(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10ba1e20<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10ba20e0; body size 20 bytes.
#line 1 "ENTRY_10ba20e0"
int __stdcall FUN_10ba20e0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10ba20e0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10ba37d0; body size 21 bytes.
#line 1 "ENTRY_10ba37d0"
int __stdcall FUN_10ba37d0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10ba37d0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10ba37da
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10ba4ce0; body size 11 bytes.
#line 1 "ENTRY_10ba4ce0"
int __stdcall FUN_10ba4ce0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10ba4ce0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10bbf550; body size 11 bytes.
#line 1 "ENTRY_10bbf550"
int __stdcall FUN_10bbf550(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10bbf550<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10bbf5b0; body size 11 bytes.
#line 1 "ENTRY_10bbf5b0"
int __stdcall FUN_10bbf5b0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10bbf5b0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10bbf610; body size 11 bytes.
#line 1 "ENTRY_10bbf610"
int __stdcall FUN_10bbf610(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10bbf610<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10bbf770; body size 11 bytes.
#line 1 "ENTRY_10bbf770"
int __stdcall FUN_10bbf770(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10bbf770<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10bbf850; body size 20 bytes.
#line 1 "ENTRY_10bbf850"
int __stdcall FUN_10bbf850(int a1) {

    return (int)(thunk_FUN_10d9e6c0(3));
}

// Reference entry 10bbf8b0; body size 20 bytes.
#line 1 "ENTRY_10bbf8b0"
int FUN_10bbf8b0(int a1) {

    return (int)(thunk_FUN_10d9e6c0(3));
}

// Reference entry 10bbfbd0; body size 12 bytes.
#line 1 "ENTRY_10bbfbd0"
int __stdcall FUN_10bbfbd0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10bbfbd0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10bbfc80; body size 12 bytes.
#line 1 "ENTRY_10bbfc80"
int __stdcall FUN_10bbfc80(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10bbfc80<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10bbffc0; body size 20 bytes.
#line 1 "ENTRY_10bbffc0"
int FUN_10bbffc0(int a1) {

    return (int)(thunk_FUN_10d9e6c0(3));
}

// Reference entry 10bc5240; body size 11 bytes.
#line 1 "ENTRY_10bc5240"
int __stdcall FUN_10bc5240(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10bc5240<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10bc5250; body size 20 bytes.
#line 1 "ENTRY_10bc5250"
int __stdcall FUN_10bc5250(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10bc5250<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10bc5300; body size 11 bytes.
#line 1 "ENTRY_10bc5300"
int __stdcall FUN_10bc5300(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10bc5300<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10bc5330; body size 20 bytes.
#line 1 "ENTRY_10bc5330"
int __stdcall FUN_10bc5330(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10bc5330<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10bc5ac0; body size 12 bytes.
#line 1 "ENTRY_10bc5ac0"
int __stdcall FUN_10bc5ac0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10bc5ac0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10bc5ad0; body size 21 bytes.
#line 1 "ENTRY_10bc5ad0"
int __stdcall FUN_10bc5ad0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10bc5ad0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10bc5ada
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10bc5db0; body size 11 bytes.
#line 1 "ENTRY_10bc5db0"
int __stdcall FUN_10bc5db0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10bc5db0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10bed580; body size 26 bytes.
#line 1 "ENTRY_10bed580"
int FUN_10bed580(int a1, int a2, int a3, int a4) {

    int result; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_10bed580<>)
    return (int)(result);
}

// Reference entry 10bfdbb0; body size 22 bytes.
#line 1 "ENTRY_10bfdbb0"
int FUN_10bfdbb0(int a1, int a2, int a3) {

    int result; // (int)((int(*)(int a1, int a2, int a3))&FUN_10bfdbb0<>)
    if (a1 != 0) {
        result = (int)(*(int *)a1);
    }
    return (int)(result);
}

// Reference entry 10c03fa0; body size 11 bytes.
#line 1 "ENTRY_10c03fa0"
int __stdcall FUN_10c03fa0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10c03fa0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10c04340; body size 11 bytes.
#line 1 "ENTRY_10c04340"
int __stdcall FUN_10c04340(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10c04340<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10c04570; body size 20 bytes.
#line 1 "ENTRY_10c04570"
int __stdcall FUN_10c04570(int a1) {

    return (int)(thunk_FUN_10cf4ae0(0));
}

// Reference entry 10c04590; body size 20 bytes.
#line 1 "ENTRY_10c04590"
int __stdcall FUN_10c04590(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10c04590<>)
    return (int)(thunk_FUN_10cf3780(v1));
}

// Reference entry 10c047b0; body size 24 bytes.
#line 1 "ENTRY_10c047b0"
int FUN_10c047b0(int a1, int a2) {

    return (int)(thunk_FUN_10cf3780(*(int *)a1));
}

// Reference entry 10c047d0; body size 20 bytes.
#line 1 "ENTRY_10c047d0"
int FUN_10c047d0(int a1) {

    return (int)(thunk_FUN_10cf4ae0(0));
}

// Reference entry 10c04de0; body size 12 bytes.
#line 1 "ENTRY_10c04de0"
int __stdcall FUN_10c04de0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10c04de0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10c05040; body size 24 bytes.
#line 1 "ENTRY_10c05040"
int FUN_10c05040(int a1, int a2) {

    return (int)(thunk_FUN_10cf3780(*(int *)a1));
}

// Reference entry 10c05060; body size 20 bytes.
#line 1 "ENTRY_10c05060"
int FUN_10c05060(int a1) {

    return (int)(thunk_FUN_10cf4ae0(0));
}

// Reference entry 10c07d08; body size 13 bytes.
#line 1 "ENTRY_10c07d08"
int FUN_10c07d08(void) {

    int v1; // (int)((int(*)(void))&FUN_10c07d08<>)
    int v2 = (int)(v1);
    *(char*)v2 = (char)((int)(2 * (char)v2));
    int result; // (int)((int(*)(void))&FUN_10c07d08<>)
    int v3 = (int)(result);
    *(char*)v3 = (char)((int)(*(char *)&result + (char)v3));
    *(char*)(v1 - 4) = (char)(74);
    return (int)(result);
}

// Reference entry 10c2a940; body size 20 bytes.
#line 1 "ENTRY_10c2a940"
int __stdcall FUN_10c2a940(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10c2a940<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10c2a960; body size 20 bytes.
#line 1 "ENTRY_10c2a960"
int __stdcall FUN_10c2a960(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10c2a960<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10c2b190; body size 21 bytes.
#line 1 "ENTRY_10c2b190"
int __stdcall FUN_10c2b190(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10c2b190<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10c2b19a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10c2b7d0; body size 11 bytes.
#line 1 "ENTRY_10c2b7d0"
int __stdcall FUN_10c2b7d0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10c2b7d0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10c657c5; body size 12 bytes.
#line 1 "ENTRY_10c657c5"
int FUN_10c657c5(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 10c934f0; body size 26 bytes.
#line 1 "ENTRY_10c934f0"
int FUN_10c934f0(int a1, int a2, int a3, int a4) {

    int result; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_10c934f0<>)
    return (int)(result);
}

// Reference entry 10cacc92; body size 85 bytes.
#line 1 "ENTRY_10cacc92"
int FUN_10cacc92(void) {

    int v1; // (int)((int(*)(void))&FUN_10cacc92<>)
    int v2 = (int)(v1);
    FUN_1005273e(v1);
char *v3 = (char *)((char)((char *)(v2 - 4))); // (int)&FUN_10cacca4
    *v3 = (char)(68);
    FUN_1005c315();
    *(int*)(v2 - 16) = (int)(*(int *)(v2 - 64));
    FUN_1002a973();
    *v3 = (char)(69);
    int result = (int)(FUN_1005c315(), 0); // (int)&FUN_10caccc2
int *v4 = (int *)((int)((int *)(v1 + 200))); // (int)&FUN_10caccc7
    *v3 = (char)(55);
    if (*v4 == (int)((32))) {
        return (int)(result);
    }
    *v4 = (int)(32);
    return (int)(result);
}

// Reference entry 10cbc9b0; body size 20 bytes.
#line 1 "ENTRY_10cbc9b0"
int __stdcall FUN_10cbc9b0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10cbc9b0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10cbc9d0; body size 20 bytes.
#line 1 "ENTRY_10cbc9d0"
int __stdcall FUN_10cbc9d0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10cbc9d0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10cbca10; body size 20 bytes.
#line 1 "ENTRY_10cbca10"
int FUN_10cbca10(int a1, int a2, int a3) {

    return (int)(FUN_10cbcff0(*(int *)a2, a3));
}

// Reference entry 10cbca30; body size 21 bytes.
#line 1 "ENTRY_10cbca30"
int __stdcall FUN_10cbca30(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10cbca30<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10cbca3a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10cbca90; body size 20 bytes.
#line 1 "ENTRY_10cbca90"
int FUN_10cbca90(int a1, int a2, int a3) {

    return (int)(FUN_10cbcff0(*(int *)a2, a3));
}

// Reference entry 10cbcac0; body size 11 bytes.
#line 1 "ENTRY_10cbcac0"
int __stdcall FUN_10cbcac0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10cbcac0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10cdabb0; body size 26 bytes.
#line 1 "ENTRY_10cdabb0"
int FUN_10cdabb0(int a1, int a2, int a3, int a4) {

    int result; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_10cdabb0<>)
    return (int)(result);
}

// Reference entry 10cf1e20; body size 20 bytes.
#line 1 "ENTRY_10cf1e20"
int __stdcall FUN_10cf1e20(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10cf1e20<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10cf1e40; body size 20 bytes.
#line 1 "ENTRY_10cf1e40"
int __stdcall FUN_10cf1e40(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10cf1e40<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10cf1e60; body size 20 bytes.
#line 1 "ENTRY_10cf1e60"
int __stdcall FUN_10cf1e60(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10cf1e60<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10cf1ea0; body size 20 bytes.
#line 1 "ENTRY_10cf1ea0"
int __stdcall FUN_10cf1ea0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10cf1ea0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10cf2b30; body size 16 bytes.
#line 1 "ENTRY_10cf2b30"
int FUN_10cf2b30(int a1, int a2) {

    return (int)(FUN_10cf1ee0(*(int *)a2));
}

// Reference entry 10cf2b50; body size 16 bytes.
#line 1 "ENTRY_10cf2b50"
int FUN_10cf2b50(int a1, int a2) {

    return (int)(FUN_10cf2340(*(int *)a2));
}

// Reference entry 10cf2b70; body size 21 bytes.
#line 1 "ENTRY_10cf2b70"
int __stdcall FUN_10cf2b70(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10cf2b70<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10cf2b7a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10cf2b90; body size 21 bytes.
#line 1 "ENTRY_10cf2b90"
int __stdcall FUN_10cf2b90(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10cf2b90<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10cf2b9a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10cf2c40; body size 16 bytes.
#line 1 "ENTRY_10cf2c40"
int FUN_10cf2c40(int a1, int a2) {

    return (int)(FUN_10cf1ee0(*(int *)a2));
}

// Reference entry 10cf2c60; body size 16 bytes.
#line 1 "ENTRY_10cf2c60"
int FUN_10cf2c60(int a1, int a2) {

    return (int)(FUN_10cf2340(*(int *)a2));
}

// Reference entry 10cf2ca0; body size 11 bytes.
#line 1 "ENTRY_10cf2ca0"
int __stdcall FUN_10cf2ca0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10cf2ca0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10cf2cb0; body size 11 bytes.
#line 1 "ENTRY_10cf2cb0"
int __stdcall FUN_10cf2cb0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10cf2cb0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10d07f40; body size 20 bytes.
#line 1 "ENTRY_10d07f40"
int __stdcall FUN_10d07f40(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d07f40<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d07f60; body size 20 bytes.
#line 1 "ENTRY_10d07f60"
int __stdcall FUN_10d07f60(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d07f60<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d07f80; body size 20 bytes.
#line 1 "ENTRY_10d07f80"
int __stdcall FUN_10d07f80(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d07f80<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d07fc0; body size 20 bytes.
#line 1 "ENTRY_10d07fc0"
int __stdcall FUN_10d07fc0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d07fc0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d08290; body size 21 bytes.
#line 1 "ENTRY_10d08290"
int __stdcall FUN_10d08290(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10d08290<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10d0829a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10d082b0; body size 21 bytes.
#line 1 "ENTRY_10d082b0"
int __stdcall FUN_10d082b0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10d082b0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10d082ba
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10d08560; body size 11 bytes.
#line 1 "ENTRY_10d08560"
int __stdcall FUN_10d08560(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d08560<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10d08570; body size 11 bytes.
#line 1 "ENTRY_10d08570"
int __stdcall FUN_10d08570(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d08570<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10d1eb50; body size 20 bytes.
#line 1 "ENTRY_10d1eb50"
int __stdcall FUN_10d1eb50(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d1eb50<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d1eb70; body size 20 bytes.
#line 1 "ENTRY_10d1eb70"
int __stdcall FUN_10d1eb70(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d1eb70<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d1eb90; body size 20 bytes.
#line 1 "ENTRY_10d1eb90"
int __stdcall FUN_10d1eb90(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d1eb90<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d1ebd0; body size 20 bytes.
#line 1 "ENTRY_10d1ebd0"
int __stdcall FUN_10d1ebd0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d1ebd0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d1ed50; body size 21 bytes.
#line 1 "ENTRY_10d1ed50"
int __stdcall FUN_10d1ed50(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10d1ed50<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10d1ed5a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10d1ed70; body size 21 bytes.
#line 1 "ENTRY_10d1ed70"
int __stdcall FUN_10d1ed70(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10d1ed70<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10d1ed7a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10d1ef70; body size 11 bytes.
#line 1 "ENTRY_10d1ef70"
int __stdcall FUN_10d1ef70(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d1ef70<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10d1ef80; body size 11 bytes.
#line 1 "ENTRY_10d1ef80"
int __stdcall FUN_10d1ef80(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d1ef80<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10d23a00; body size 20 bytes.
#line 1 "ENTRY_10d23a00"
int __stdcall FUN_10d23a00(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d23a00<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d23a20; body size 20 bytes.
#line 1 "ENTRY_10d23a20"
int __stdcall FUN_10d23a20(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d23a20<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d23a40; body size 20 bytes.
#line 1 "ENTRY_10d23a40"
int __stdcall FUN_10d23a40(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d23a40<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d23a60; body size 20 bytes.
#line 1 "ENTRY_10d23a60"
int __stdcall FUN_10d23a60(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d23a60<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d23a80; body size 20 bytes.
#line 1 "ENTRY_10d23a80"
int __stdcall FUN_10d23a80(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d23a80<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d23aa0; body size 20 bytes.
#line 1 "ENTRY_10d23aa0"
int __stdcall FUN_10d23aa0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d23aa0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d23ac0; body size 20 bytes.
#line 1 "ENTRY_10d23ac0"
int __stdcall FUN_10d23ac0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d23ac0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d23ae0; body size 20 bytes.
#line 1 "ENTRY_10d23ae0"
int __stdcall FUN_10d23ae0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d23ae0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d23c00; body size 20 bytes.
#line 1 "ENTRY_10d23c00"
int __stdcall FUN_10d23c00(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d23c00<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d23c40; body size 20 bytes.
#line 1 "ENTRY_10d23c40"
int __stdcall FUN_10d23c40(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d23c40<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d23c80; body size 20 bytes.
#line 1 "ENTRY_10d23c80"
int __stdcall FUN_10d23c80(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d23c80<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d23cc0; body size 20 bytes.
#line 1 "ENTRY_10d23cc0"
int __stdcall FUN_10d23cc0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d23cc0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d23d00; body size 20 bytes.
#line 1 "ENTRY_10d23d00"
int __stdcall FUN_10d23d00(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d23d00<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d23d40; body size 20 bytes.
#line 1 "ENTRY_10d23d40"
int __stdcall FUN_10d23d40(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d23d40<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d23d80; body size 20 bytes.
#line 1 "ENTRY_10d23d80"
int __stdcall FUN_10d23d80(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d23d80<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d23dc0; body size 20 bytes.
#line 1 "ENTRY_10d23dc0"
int __stdcall FUN_10d23dc0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d23dc0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d23fc0; body size 11 bytes.
#line 1 "ENTRY_10d23fc0"
int FUN_10d23fc0(int a1) {

    return (int)(thunk_FUN_10d2bea0(a1));
}

// Reference entry 10d23fd0; body size 11 bytes.
#line 1 "ENTRY_10d23fd0"
int FUN_10d23fd0(int a1) {

    return (int)(thunk_FUN_10d2c580(a1));
}

// Reference entry 10d23ff0; body size 11 bytes.
#line 1 "ENTRY_10d23ff0"
int FUN_10d23ff0(int a1) {

    return (int)(thunk_FUN_10d2c0b0(a1));
}

// Reference entry 10d24140; body size 11 bytes.
#line 1 "ENTRY_10d24140"
int FUN_10d24140(int a1) {

    return (int)(thunk_FUN_10d2ae70(a1));
}

// Reference entry 10d24150; body size 11 bytes.
#line 1 "ENTRY_10d24150"
int FUN_10d24150(int a1) {

    return (int)(thunk_FUN_10d2c370(a1));
}

// Reference entry 10d24160; body size 11 bytes.
#line 1 "ENTRY_10d24160"
int FUN_10d24160(int a1) {

    return (int)(thunk_FUN_10d2d1b0(a1));
}

// Reference entry 10d25440; body size 21 bytes.
#line 1 "ENTRY_10d25440"
int __stdcall FUN_10d25440(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10d25440<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10d2544a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10d25460; body size 21 bytes.
#line 1 "ENTRY_10d25460"
int __stdcall FUN_10d25460(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10d25460<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10d2546a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10d25480; body size 21 bytes.
#line 1 "ENTRY_10d25480"
int __stdcall FUN_10d25480(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10d25480<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10d2548a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10d254a0; body size 21 bytes.
#line 1 "ENTRY_10d254a0"
int __stdcall FUN_10d254a0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10d254a0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10d254aa
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10d254c0; body size 21 bytes.
#line 1 "ENTRY_10d254c0"
int __stdcall FUN_10d254c0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10d254c0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10d254ca
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10d254e0; body size 21 bytes.
#line 1 "ENTRY_10d254e0"
int __stdcall FUN_10d254e0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10d254e0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10d254ea
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10d25500; body size 21 bytes.
#line 1 "ENTRY_10d25500"
int __stdcall FUN_10d25500(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10d25500<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10d2550a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10d25520; body size 21 bytes.
#line 1 "ENTRY_10d25520"
int __stdcall FUN_10d25520(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10d25520<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10d2552a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10d25f30; body size 11 bytes.
#line 1 "ENTRY_10d25f30"
int FUN_10d25f30(int a1) {

    return (int)(thunk_FUN_10d2bea0(a1));
}

// Reference entry 10d25f40; body size 11 bytes.
#line 1 "ENTRY_10d25f40"
int FUN_10d25f40(int a1) {

    return (int)(thunk_FUN_10d2c580(a1));
}

// Reference entry 10d25f60; body size 11 bytes.
#line 1 "ENTRY_10d25f60"
int FUN_10d25f60(int a1) {

    return (int)(thunk_FUN_10d2c0b0(a1));
}

// Reference entry 10d260b0; body size 11 bytes.
#line 1 "ENTRY_10d260b0"
int FUN_10d260b0(int a1) {

    return (int)(thunk_FUN_10d2ae70(a1));
}

// Reference entry 10d260c0; body size 11 bytes.
#line 1 "ENTRY_10d260c0"
int FUN_10d260c0(int a1) {

    return (int)(thunk_FUN_10d2c370(a1));
}

// Reference entry 10d260d0; body size 11 bytes.
#line 1 "ENTRY_10d260d0"
int FUN_10d260d0(int a1) {

    return (int)(thunk_FUN_10d2d1b0(a1));
}

// Reference entry 10d261d0; body size 11 bytes.
#line 1 "ENTRY_10d261d0"
int __stdcall FUN_10d261d0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d261d0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10d261e0; body size 11 bytes.
#line 1 "ENTRY_10d261e0"
int __stdcall FUN_10d261e0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d261e0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10d261f0; body size 11 bytes.
#line 1 "ENTRY_10d261f0"
int __stdcall FUN_10d261f0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d261f0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10d26200; body size 11 bytes.
#line 1 "ENTRY_10d26200"
int __stdcall FUN_10d26200(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d26200<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10d26210; body size 11 bytes.
#line 1 "ENTRY_10d26210"
int __stdcall FUN_10d26210(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d26210<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10d26220; body size 11 bytes.
#line 1 "ENTRY_10d26220"
int __stdcall FUN_10d26220(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d26220<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10d26230; body size 11 bytes.
#line 1 "ENTRY_10d26230"
int __stdcall FUN_10d26230(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d26230<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10d26240; body size 11 bytes.
#line 1 "ENTRY_10d26240"
int __stdcall FUN_10d26240(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d26240<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10d27e30; body size 10 bytes.
#line 1 "ENTRY_10d27e30"
int __stdcall FUN_10d27e30(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1) {

    return (int)(thunk_FUN_10d2bea0());
}

// Reference entry 10d27e40; body size 10 bytes.
#line 1 "ENTRY_10d27e40"
int __stdcall FUN_10d27e40(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1) {

    return (int)(thunk_FUN_10d2c580());
}

// Reference entry 10d27e60; body size 10 bytes.
#line 1 "ENTRY_10d27e60"
int __stdcall FUN_10d27e60(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1) {

    return (int)(thunk_FUN_10d2c0b0());
}

// Reference entry 10d27fb0; body size 10 bytes.
#line 1 "ENTRY_10d27fb0"
int __stdcall FUN_10d27fb0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1) {

    return (int)(thunk_FUN_10d2ae70());
}

// Reference entry 10d27fc0; body size 10 bytes.
#line 1 "ENTRY_10d27fc0"
int __stdcall FUN_10d27fc0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1) {

    return (int)(thunk_FUN_10d2c370());
}

// Reference entry 10d27fd0; body size 10 bytes.
#line 1 "ENTRY_10d27fd0"
int __stdcall FUN_10d27fd0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1) {

    return (int)(thunk_FUN_10d2d1b0());
}

// Reference entry 10d2d680; body size 20 bytes.
#line 1 "ENTRY_10d2d680"
int __stdcall FUN_10d2d680(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d2d680<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d2d6a0; body size 20 bytes.
#line 1 "ENTRY_10d2d6a0"
int __stdcall FUN_10d2d6a0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d2d6a0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d2d6c0; body size 20 bytes.
#line 1 "ENTRY_10d2d6c0"
int __stdcall FUN_10d2d6c0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d2d6c0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d2d6e0; body size 20 bytes.
#line 1 "ENTRY_10d2d6e0"
int __stdcall FUN_10d2d6e0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d2d6e0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d2d720; body size 20 bytes.
#line 1 "ENTRY_10d2d720"
int __stdcall FUN_10d2d720(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d2d720<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d2d760; body size 20 bytes.
#line 1 "ENTRY_10d2d760"
int __stdcall FUN_10d2d760(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d2d760<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d2dc30; body size 21 bytes.
#line 1 "ENTRY_10d2dc30"
int __stdcall FUN_10d2dc30(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10d2dc30<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10d2dc3a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10d2dc50; body size 21 bytes.
#line 1 "ENTRY_10d2dc50"
int __stdcall FUN_10d2dc50(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10d2dc50<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10d2dc5a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10d2dc70; body size 21 bytes.
#line 1 "ENTRY_10d2dc70"
int __stdcall FUN_10d2dc70(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10d2dc70<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10d2dc7a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10d2deb0; body size 11 bytes.
#line 1 "ENTRY_10d2deb0"
int __stdcall FUN_10d2deb0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d2deb0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10d2dec0; body size 11 bytes.
#line 1 "ENTRY_10d2dec0"
int __stdcall FUN_10d2dec0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d2dec0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10d2ded0; body size 11 bytes.
#line 1 "ENTRY_10d2ded0"
int __stdcall FUN_10d2ded0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d2ded0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10d3a81f; body size 12 bytes.
#line 1 "ENTRY_10d3a81f"
int FUN_10d3a81f(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 10d527a0; body size 20 bytes.
#line 1 "ENTRY_10d527a0"
int __stdcall FUN_10d527a0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d527a0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d527c0; body size 20 bytes.
#line 1 "ENTRY_10d527c0"
int __stdcall FUN_10d527c0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d527c0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d527e0; body size 20 bytes.
#line 1 "ENTRY_10d527e0"
int __stdcall FUN_10d527e0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d527e0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d52820; body size 20 bytes.
#line 1 "ENTRY_10d52820"
int __stdcall FUN_10d52820(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d52820<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d52e60; body size 21 bytes.
#line 1 "ENTRY_10d52e60"
int __stdcall FUN_10d52e60(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10d52e60<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10d52e6a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10d52e80; body size 21 bytes.
#line 1 "ENTRY_10d52e80"
int __stdcall FUN_10d52e80(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10d52e80<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10d52e8a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10d53400; body size 11 bytes.
#line 1 "ENTRY_10d53400"
int __stdcall FUN_10d53400(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d53400<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10d53410; body size 11 bytes.
#line 1 "ENTRY_10d53410"
int __stdcall FUN_10d53410(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d53410<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10d58c40; body size 20 bytes.
#line 1 "ENTRY_10d58c40"
int __stdcall FUN_10d58c40(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d58c40<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d58c60; body size 20 bytes.
#line 1 "ENTRY_10d58c60"
int __stdcall FUN_10d58c60(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d58c60<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d58d80; body size 21 bytes.
#line 1 "ENTRY_10d58d80"
int __stdcall FUN_10d58d80(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10d58d80<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10d58d8a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10d58ec0; body size 11 bytes.
#line 1 "ENTRY_10d58ec0"
int __stdcall FUN_10d58ec0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d58ec0<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10d63900; body size 20 bytes.
#line 1 "ENTRY_10d63900"
int __stdcall FUN_10d63900(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d63900<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d63920; body size 20 bytes.
#line 1 "ENTRY_10d63920"
int __stdcall FUN_10d63920(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d63920<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d63940; body size 20 bytes.
#line 1 "ENTRY_10d63940"
int __stdcall FUN_10d63940(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d63940<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d63980; body size 20 bytes.
#line 1 "ENTRY_10d63980"
int __stdcall FUN_10d63980(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d63980<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10d63c70; body size 17 bytes.
#line 1 "ENTRY_10d63c70"
int FUN_10d63c70(int a1) {

    return (int)(*(int *)*(int *)a1);
}

// Reference entry 10d63c90; body size 11 bytes.
#line 1 "ENTRY_10d63c90"
int FUN_10d63c90(int a1) {

    return (int)(thunk_FUN_10d67ee0(a1));
}

// Reference entry 10d63ca0; body size 21 bytes.
#line 1 "ENTRY_10d63ca0"
int __stdcall FUN_10d63ca0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10d63ca0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10d63caa
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10d63cc0; body size 21 bytes.
#line 1 "ENTRY_10d63cc0"
int __stdcall FUN_10d63cc0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10d63cc0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10d63cca
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10d63dd0; body size 17 bytes.
#line 1 "ENTRY_10d63dd0"
int FUN_10d63dd0(int a1) {

    return (int)(*(int *)*(int *)a1);
}

// Reference entry 10d63df0; body size 11 bytes.
#line 1 "ENTRY_10d63df0"
int FUN_10d63df0(int a1) {

    return (int)(thunk_FUN_10d67ee0(a1));
}

// Reference entry 10d63e20; body size 11 bytes.
#line 1 "ENTRY_10d63e20"
int __stdcall FUN_10d63e20(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d63e20<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10d63e30; body size 11 bytes.
#line 1 "ENTRY_10d63e30"
int __stdcall FUN_10d63e30(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10d63e30<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10d64c00; body size 15 bytes.
#line 1 "ENTRY_10d64c00"
int __stdcall FUN_10d64c00(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10d64c00<>)
    return (int)(result);
}

// Reference entry 10d64c20; body size 10 bytes.
#line 1 "ENTRY_10d64c20"
int __stdcall FUN_10d64c20(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1) {

    return (int)(thunk_FUN_10d67ee0());
}

// Reference entry 10d9e160; body size 11 bytes.
#line 1 "ENTRY_10d9e160"
int __stdcall FUN_10d9e160(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10d9e160<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10d9e170; body size 11 bytes.
#line 1 "ENTRY_10d9e170"
int __stdcall FUN_10d9e170(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10d9e170<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10d9e1c0; body size 12 bytes.
#line 1 "ENTRY_10d9e1c0"
int __stdcall FUN_10d9e1c0(unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(void))&FUN_10d9e1c0<>)
    *(int*)result = (int)((int)((int)&vftable));
    return (int)(result);
}

// Reference entry 10e2be94; body size 16 bytes.
#line 1 "ENTRY_10e2be94"
int FUN_10e2be94(void) {

    int v1; // (int)((int(*)(void))&FUN_10e2be94<>)
    FUN_1005273e(v1);
    return (int)(thunk_FUN_10e458b0());
}

// Reference entry 10e45da0; body size 35 bytes.
#line 1 "ENTRY_10e45da0"
int FUN_10e45da0(int a1, int a2) {
int *v1 = (int *)((int)((int *)a1)); // (int)&FUN_10e45da4
    unsigned char v2 = (unsigned char)(*(char *)*v1); // (int)&FUN_10e45da6
    if (v2 <= -1) {
        return (int)(thunk_FUN_110688f0(a1));
    }
    *(int*)a2 = (int)((int)((int)v2));
    *v1 = (int)(*v1 + 1);
    return (int)(0);
}

// Reference entry 10ea6fb0; body size 20 bytes.
#line 1 "ENTRY_10ea6fb0"
int __stdcall FUN_10ea6fb0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10ea6fb0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10ea6ff0; body size 20 bytes.
#line 1 "ENTRY_10ea6ff0"
int __stdcall FUN_10ea6ff0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10ea6ff0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10ea77f0; body size 16 bytes.
#line 1 "ENTRY_10ea77f0"
int FUN_10ea77f0(int a1, int a2) {

    return (int)(FUN_10ea7290(*(int *)a2));
}

// Reference entry 10ea9cd0; body size 21 bytes.
#line 1 "ENTRY_10ea9cd0"
int __stdcall FUN_10ea9cd0(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10ea9cd0<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10ea9cda
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10eaa340; body size 16 bytes.
#line 1 "ENTRY_10eaa340"
int FUN_10eaa340(int a1, int a2) {

    return (int)(FUN_10ea7290(*(int *)a2));
}

// Reference entry 10eaa510; body size 11 bytes.
#line 1 "ENTRY_10eaa510"
int __stdcall FUN_10eaa510(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10eaa510<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10ef9530; body size 26 bytes.
#line 1 "ENTRY_10ef9530"
int FUN_10ef9530(int a1, int a2, int a3, int a4) {

    int result; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_10ef9530<>)
    return (int)(result);
}

// Reference entry 10f15990; body size 13 bytes.
#line 1 "ENTRY_10f15990"
int __stdcall FUN_10f15990(int a1, unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10f15990<>)
    *(int*)result = (int)((int)(*(int *)a1));
    return (int)(result);
}

// Reference entry 10f15b60; body size 19 bytes.
#line 1 "ENTRY_10f15b60"
int __stdcall FUN_10f15b60(int a1) {
int *v1 = (int *)((int)((int *)a1)); // (int)&FUN_10f15b64
    *v1 = (int)(0);
    int result; // (int)((int(__stdcall*)(int a1))&FUN_10f15b60<>)
    *(int*)result = (int)((int)(*v1));
    return (int)(result);
}

// Reference entry 10f15b80; body size 11 bytes.
#line 1 "ENTRY_10f15b80"
int __stdcall FUN_10f15b80(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10f15b80<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10f15b90; body size 13 bytes.
#line 1 "ENTRY_10f15b90"
int __stdcall FUN_10f15b90(int a1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10f15b90<>)
    *(int*)result = (int)((int)(*(int *)a1));
    return (int)(result);
}

// Reference entry 10f15ba0; body size 13 bytes.
#line 1 "ENTRY_10f15ba0"
int __stdcall FUN_10f15ba0(int a1, unsigned int recovered_unused_stack_0) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10f15ba0<>)
    *(int*)result = (int)((int)(*(int *)a1));
    return (int)(result);
}

// Reference entry 10f15bb0; body size 13 bytes.
#line 1 "ENTRY_10f15bb0"
int __stdcall FUN_10f15bb0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10f15bb0<>)
    *(int*)result = (int)((int)(*(int *)a1));
    return (int)(result);
}

// Reference entry 10f15c70; body size 13 bytes.
#line 1 "ENTRY_10f15c70"
int __stdcall FUN_10f15c70(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10f15c70<>)
    *(int*)result = (int)((int)(*(int *)a1));
    return (int)(result);
}

// Reference entry 10f16ce0; body size 15 bytes.
#line 1 "ENTRY_10f16ce0"
int FUN_10f16ce0(int a1, int a2) {
int *v1 = (int *)((int)((int *)a1)); // (int)&FUN_10f16ce8
    *v1 = (int)(*(int *)a2);
    return (int)(*v1);
}

// Reference entry 10f16de0; body size 11 bytes.
#line 1 "ENTRY_10f16de0"
int FUN_10f16de0(int a1) {

    return (int)(thunk_FUN_10f19850(a1));
}

// Reference entry 10f16e90; body size 11 bytes.
#line 1 "ENTRY_10f16e90"
int __stdcall FUN_10f16e90(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10f16e90<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10f18000; body size 17 bytes.
#line 1 "ENTRY_10f18000"
int __stdcall FUN_10f18000(int a1) {

    return (int)(thunk_FUN_1148a50e(a1, 4));
}

// Reference entry 10f24690; body size 11 bytes.
#line 1 "ENTRY_10f24690"
int __stdcall FUN_10f24690(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10f24690<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10f26760; body size 14 bytes.
#line 1 "ENTRY_10f26760"
int __stdcall FUN_10f26760(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10f26760<>)
    return (int)(FUN_10049a94(v1));
}

// Reference entry 10f3a255; body size 80 bytes.
#line 1 "ENTRY_10f3a255"
int FUN_10f3a255(void) {

    thunk_FUN_10ecdc30();
    thunk_FUN_10ecb570();
    thunk_FUN_10b22ff0(thunk_FUN_10ecb410());
    thunk_FUN_105ffb30();
    int v1; // (int)((int(*)(void))&FUN_10f3a255<>)
    int v2 = (int)(v1 - 4); // (int)&FUN_10f3a281
    *(char*)v2 = (char)((int)(3));
    FUN_1005c315();
    *(int*)(v1 + 12) = (int)(0);
    *(int*)v2 = (int)((int)(4));
    FUN_1005c315();
    return (int)(function_10f3b215());
}

// Reference entry 10f3ac8c; body size 123 bytes.
#line 1 "ENTRY_10f3ac8c"
int FUN_10f3ac8c(void) {

    int v1; // (int)((int(*)(void))&FUN_10f3ac8c<>)
char *v2 = (char *)((char)((char *)(v1 + 0xc4d8d11))); // (int)((int(*)(void))&FUN_10f3ac8c<>)
    *v2 = (char)(*v2 + (char)v1);
    int v3 = (int)(v1 - 4); // (int)&FUN_10f3ac92
int *v4 = (int *)((int)((int *)v3)); // (int)&FUN_10f3ac92
    *v4 = (int)(95);
    FUN_1005273e();
char *v5 = (char *)((char)((char *)v3)); // (int)&FUN_10f3aca1
    *v5 = (char)(96);
    thunk_FUN_10ec0860();
    *v5 = (char)(97);
    int v6 = (int)(v1 + 12); // (int)&FUN_10f3acb2
    thunk_FUN_10ecdc30(v1 + 44, v6, v1 - 20);
    thunk_FUN_10ecb570();
    thunk_FUN_10b22ff0(thunk_FUN_10ecb410());
    thunk_FUN_105ffb30();
    *v5 = (char)(98);
    FUN_1005c315();
    *(int*)v6 = (int)((int)(0));
    *v4 = (int)(99);
    FUN_1005c315();
    return (int)(function_10f3b215());
}

// Reference entry 10f53320; body size 18 bytes.
#line 1 "ENTRY_10f53320"
int FUN_10f53320(int a1) {

    return (int)(thunk_FUN_101a2c70((int)&s_museHHName_118906a8, a1));
}

// Reference entry 10fcb310; body size 21 bytes.
#line 1 "ENTRY_10fcb310"
int FUN_10fcb310(int result, int a2) {

    thunk_FUN_10bc7f80(a2);
    thunk_FUN_10bc7c10();
    return (int)(result);
}

// Reference entry 10fe45e0; body size 12 bytes.
#line 1 "ENTRY_10fe45e0"
int FUN_10fe45e0(uint a1, uint a2) {

    return (int)(a1 & -256 | (int)(bool)(a1 > a2));
}

// Reference entry 10fe45f0; body size 12 bytes.
#line 1 "ENTRY_10fe45f0"
int FUN_10fe45f0(uint a1, uint a2) {

    return (int)(a1 & -256 | (int)(bool)(a1 < a2));
}

// Reference entry 10fe6490; body size 12 bytes.
#line 1 "ENTRY_10fe6490"
int FUN_10fe6490(uint a1, uint a2) {

    return (int)(a1 & -256 | (int)(bool)(a1 > a2));
}

// Reference entry 10fe88c0; body size 20 bytes.
#line 1 "ENTRY_10fe88c0"
int __stdcall FUN_10fe88c0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10fe88c0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10fe88e0; body size 20 bytes.
#line 1 "ENTRY_10fe88e0"
int __stdcall FUN_10fe88e0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10fe88e0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10fe8900; body size 20 bytes.
#line 1 "ENTRY_10fe8900"
int __stdcall FUN_10fe8900(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10fe8900<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10fe8920; body size 20 bytes.
#line 1 "ENTRY_10fe8920"
int __stdcall FUN_10fe8920(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10fe8920<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10fe8960; body size 20 bytes.
#line 1 "ENTRY_10fe8960"
int __stdcall FUN_10fe8960(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10fe8960<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10fe89a0; body size 20 bytes.
#line 1 "ENTRY_10fe89a0"
int __stdcall FUN_10fe89a0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10fe89a0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10fe89e0; body size 20 bytes.
#line 1 "ENTRY_10fe89e0"
int __stdcall FUN_10fe89e0(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10fe89e0<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10fe8a20; body size 20 bytes.
#line 1 "ENTRY_10fe8a20"
int __stdcall FUN_10fe8a20(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10fe8a20<>)
    *(int*)result = (int)((int)((int)&vftable));
    *(int*)(result + 4) = (int)(*(int *)a1);
    return (int)(result);
}

// Reference entry 10fe8fb0; body size 28 bytes.
#line 1 "ENTRY_10fe8fb0"
int FUN_10fe8fb0(int a1, int a2) {

    int result = (int)(thunk_FUN_102d65b0(a2), 0); // (int)&FUN_10fe8fb4
    if ((char)result == 0) {
        return (int)(result);
    }
    return (int)(thunk_FUN_10ff3f10());
}

// Reference entry 10fe8fe0; body size 28 bytes.
#line 1 "ENTRY_10fe8fe0"
int FUN_10fe8fe0(int a1, int a2) {

    int result = (int)(thunk_FUN_102d65b0(a2), 0); // (int)&FUN_10fe8fe4
    if ((char)result == 0) {
        return (int)(result);
    }
    return (int)(thunk_FUN_10ff4670());
}

// Reference entry 10fe9010; body size 11 bytes.
#line 1 "ENTRY_10fe9010"
int FUN_10fe9010(int a1) {

    return (int)(thunk_FUN_10ff3290(a1));
}

// Reference entry 10fe9020; body size 11 bytes.
#line 1 "ENTRY_10fe9020"
int FUN_10fe9020(int a1) {

    return (int)(thunk_FUN_10ff3290(a1));
}

// Reference entry 10feb100; body size 21 bytes.
#line 1 "ENTRY_10feb100"
int __stdcall FUN_10feb100(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10feb100<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10feb10a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10feb120; body size 21 bytes.
#line 1 "ENTRY_10feb120"
int __stdcall FUN_10feb120(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10feb120<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10feb12a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10feb140; body size 21 bytes.
#line 1 "ENTRY_10feb140"
int __stdcall FUN_10feb140(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10feb140<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10feb14a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10feb160; body size 21 bytes.
#line 1 "ENTRY_10feb160"
int __stdcall FUN_10feb160(int a1) {

    int v1; // (int)((int(__stdcall*)(int a1))&FUN_10feb160<>)
    *(int*)v1 = (int)((int)((int)&vftable));
    int result = (int)(*(int *)a1); // (int)&FUN_10feb16a
    *(int*)(v1 + 4) = (int)(result);
    return (int)(result);
}

// Reference entry 10febf70; body size 28 bytes.
#line 1 "ENTRY_10febf70"
int FUN_10febf70(int a1, int a2) {

    int result = (int)(thunk_FUN_102d65b0(a2), 0); // (int)&FUN_10febf74
    if ((char)result == 0) {
        return (int)(result);
    }
    return (int)(thunk_FUN_10ff3f10());
}

// Reference entry 10febfa0; body size 28 bytes.
#line 1 "ENTRY_10febfa0"
int FUN_10febfa0(int a1, int a2) {

    int result = (int)(thunk_FUN_102d65b0(a2), 0); // (int)&FUN_10febfa4
    if ((char)result == 0) {
        return (int)(result);
    }
    return (int)(thunk_FUN_10ff4670());
}

// Reference entry 10febfd0; body size 11 bytes.
#line 1 "ENTRY_10febfd0"
int FUN_10febfd0(int a1) {

    return (int)(thunk_FUN_10ff3290(a1));
}

// Reference entry 10febfe0; body size 11 bytes.
#line 1 "ENTRY_10febfe0"
int FUN_10febfe0(int a1) {

    return (int)(thunk_FUN_10ff3290(a1));
}

// Reference entry 10fec100; body size 11 bytes.
#line 1 "ENTRY_10fec100"
int __stdcall FUN_10fec100(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10fec100<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10fec110; body size 11 bytes.
#line 1 "ENTRY_10fec110"
int __stdcall FUN_10fec110(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10fec110<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10fec120; body size 11 bytes.
#line 1 "ENTRY_10fec120"
int __stdcall FUN_10fec120(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10fec120<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10fec130; body size 11 bytes.
#line 1 "ENTRY_10fec130"
int __stdcall FUN_10fec130(int a1) {

    int result; // (int)((int(__stdcall*)(int a1))&FUN_10fec130<>)
    *(int*)result = (int)((int)(a1));
    return (int)(result);
}

// Reference entry 10fee660; body size 10 bytes.
#line 1 "ENTRY_10fee660"
int __stdcall FUN_10fee660(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1) {

    return (int)(thunk_FUN_10ff3290());
}

// Reference entry 10fee670; body size 10 bytes.
#line 1 "ENTRY_10fee670"
int __stdcall FUN_10fee670(unsigned int recovered_unused_stack_0) {

    return (int)(thunk_FUN_10ff3290());
}

// Reference entry 11005cb0; body size 51 bytes.
#line 1 "ENTRY_11005cb0"
int FUN_11005cb0(int a1) {

    if (thunk_FUN_110828b0() == 0) {
        return (int)(0);
    }
    int v1 = (int)(*(int *)a1); // (int)&FUN_11005cc6
    int v2 = (int)(thunk_FUN_11093530(v1 != 0 ? v1 : (int)&DAT_1186d2ee, 1), 0); // (int)&FUN_11005cd0
    if (v2 == 0) {
        return (int)(0);
    }
    return (int)(*(int *)v2);
}

// Reference entry 1101a620; body size 25 bytes.
#line 1 "ENTRY_1101a620"
int FUN_1101a620(int a1, int a2) {

    int v1; // (int)((int(*)(int a1, int a2))&FUN_1101a620<>)
    return (int)(&v1);
}

// Reference entry 1101a640; body size 25 bytes.
#line 1 "ENTRY_1101a640"
int FUN_1101a640(int a1, int a2) {

    int v1; // (int)((int(*)(int a1, int a2))&FUN_1101a640<>)
    return (int)(&v1);
}

// Reference entry 110359c0; body size 12 bytes.
#line 1 "ENTRY_110359c0"
int FUN_110359c0(uint a1, uint a2) {

    return (int)(a1 & -256 | (int)(bool)(a1 > a2));
}

// Reference entry 110634c0; body size 19 bytes.
#line 1 "ENTRY_110634c0"
int FUN_110634c0(int result) {

    return (int)(result);
}

// Reference entry 11068ec0; body size 12 bytes.
#line 1 "ENTRY_11068ec0"
int FUN_11068ec0(char a1) {

    int v1; // (int)((int(*)(char a1))&FUN_11068ec0<>)
    return (int)(v1 & -256 | (int)((a1 & -64) == -128));
}

// Reference entry 11068f80; body size 35 bytes.
#line 1 "ENTRY_11068f80"
int FUN_11068f80(int a1, int a2) {
int *v1 = (int *)((int)((int *)a1)); // (int)&FUN_11068f84
    unsigned char v2 = (unsigned char)(*(char *)*v1); // (int)&FUN_11068f86
    if (v2 <= -1) {
        return (int)(thunk_FUN_110688f0(a1));
    }
    *(int*)a2 = (int)((int)((int)v2));
    *v1 = (int)(*v1 + 1);
    return (int)(0);
}

// Reference entry 110692e0; body size 27 bytes.
#line 1 "ENTRY_110692e0"
int FUN_110692e0(int a1) {

    if (*(char *)a1 != -17 || *(char *)(a1 + 1) != -65 || *(char *)(a1 + 2) < 190) {
        return (int)(a1 & -256);
    }
    return (int)(a1 & -256 | 1);
}

// Reference entry 11069310; body size 20 bytes.
#line 1 "ENTRY_11069310"
int FUN_11069310(unsigned char a1) {

    int v1; // (int)((int(*)(unsigned char a1))&FUN_11069310<>)
    int result = (int)(v1 & -256); // (int)((int(*)(unsigned char a1))&FUN_11069310<>)
    int v2 = (int)(result | (int)a1); // (int)((int(*)(unsigned char a1))&FUN_11069310<>)
    if (a1 >= 0) {
        return (int)(v2 & -256 | 1);
    }
    int v3 = (int)(v2 & -64); // (int)&FUN_11069318
    if ((char)v3 == -64) {
        return (int)(v3 & -256 | 1);
    }
    return (int)(result);
}

// Reference entry 11069330; body size 12 bytes.
#line 1 "ENTRY_11069330"
int FUN_11069330(char a1) {

    int v1; // (int)((int(*)(char a1))&FUN_11069330<>)
    return (int)(v1 & -256 | (int)((a1 & -64) == -128));
}

// Reference entry 110a5000; body size 88 bytes.
#line 1 "ENTRY_110a5000"
int FUN_110a5000(int a1, int result) {

    if (a1 != 1) {
        return (int)(result);
    }
    int v1 = (int)(thunk_FUN_1128f910(23), 0); // (int)&FUN_110a5012
    int v2 = (int)(result); // (int)&FUN_110a5012
    char v3 = (char)(*(char *)v2); // (int)&FUN_110a5015
    while ((char)(v3) == *(char *)v1) {
        if (v3 == 0) {
            return (int)(thunk_FUN_1109aba0(219, (int)&DAT_11882ff0));
        }
        char v4 = (char)(*(char *)(v2 + 1)); // (int)&FUN_110a501f
        if ((char)(v4) != *(char *)(v1 + 1)) {
            break;
        }
        v1 += 2;
        v2 += 2;
        if (v4 == 0) {
            return (int)(thunk_FUN_1109aba0(219, (int)&DAT_11882ff0));
        }
        v3 = (char)(*(char *)v2);
    }
    return (int)(result);
}

// Reference entry 110c20f0; body size 26 bytes.
#line 1 "ENTRY_110c20f0"
int FUN_110c20f0(int a1, int a2) {

    int v1; // (int)((int(*)(int a1, int a2))&FUN_110c20f0<>)
    return (int)(a1 == 0 ? v1 : a2);
}

// Reference entry 110d8da0; body size 21 bytes.
#line 1 "ENTRY_110d8da0"
int FUN_110d8da0(void) {

    int v1; // (int)((int(*)(void))&FUN_110d8da0<>)
    if (*(int *)(v1 + 28) == 0) {
        return (int)(v1 & -256);
    }
    return (int)(((code *)LAB_1007d7e0)());
}

// Reference entry 110d9b50; body size 26 bytes.
#line 1 "ENTRY_110d9b50"
int FUN_110d9b50(int a1, int a2, int a3, int a4) {

    int result; // (int)((int(*)(int a1, int a2, int a3, int a4))&FUN_110d9b50<>)
    return (int)(result);
}

// Reference entry 110ed9e0; body size 18 bytes.
#line 1 "ENTRY_110ed9e0"
int FUN_110ed9e0(void) {

    thunk_FUN_110c2c60(254);
    return (int)(thunk_FUN_110c20d0());
}

// Reference entry 110f9e60; body size 18 bytes.
#line 1 "ENTRY_110f9e60"
int __stdcall FUN_110f9e60(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3) {

    int result; // (int)((int(__stdcall*)(void))&FUN_110f9e60<>)
    if (*(int *)&DAT_122e8a18 != 0) {
        result = (int)(thunk_FUN_110fed50(), 0);
    }
    return (int)(result);
}

// Reference entry 11128930; body size 26 bytes.
#line 1 "ENTRY_11128930"
int FUN_11128930(int a1) {

    if (thunk_FUN_111134e0() == 0) {
        return (int)(0);
    }
    return (int)(thunk_FUN_11113c60(a1, 0));
}

// Reference entry 1114c1d0; body size 12 bytes.
#line 1 "ENTRY_1114c1d0"
int FUN_1114c1d0(int a1) {

    return (int)(*(int *)(4 * a1 + (int)&PTR_s_HELLO_1211eeec));
}

// Reference entry 1114d530; body size 16 bytes.
#line 1 "ENTRY_1114d530"
int FUN_1114d530(int a1) {

    return (int)(1000 * a1);
}

// Reference entry 1118c160; body size 49 bytes.
#line 1 "ENTRY_1118c160"
int FUN_1118c160(int a1, int a2, int a3) {

    if (a3 == 0) {
        int v1; // (int)((int(*)(int a1, int a2, int a3))&FUN_1118c160<>)
        return (int)(v1 & -256);
    }
    int v2 = (int)(thunk_FUN_1118b510(a2, 2), 0); // (int)&FUN_1118c16d
    if (v2 == 0) {
        return (int)(0);
    }
    int v3 = (int)(*(int *)(v2 + 20)); // (int)&FUN_1118c176
    if (v3 == 0) {
        return (int)(0);
    }
    return (int)(thunk_FUN_101ba530(v3) & -256 | 1);
}

// Reference entry 1118c7e0; body size 16 bytes.
#line 1 "ENTRY_1118c7e0"
int FUN_1118c7e0(int a1, int a2) {

    return (int)(a2 & -256 | (int)(*(int *)(a1) < *(int *)(a2)));
}

// Reference entry 111ac1a0; body size 23 bytes.
#line 1 "ENTRY_111ac1a0"
int FUN_111ac1a0(int a1) {
int *v1 = (int *)((int)((int *)a1)); // (int)&FUN_111ac1a4
    *(int*)(*v1 + 108) = (int)(0);
    int result = (int)(*v1); // (int)&FUN_111ac1ad
    *(int*)(result + 20) = (int)(0);
    return (int)(result);
}

// Reference entry 111af820; body size 17 bytes.
#line 1 "ENTRY_111af820"
int FUN_111af820(int a1) {

    int result = (int)(*(int *)(a1 + 400)); // (int)&FUN_111af824
    *(int*)result = (int)((int)((int)&FUN_111af730));
    return (int)(result);
}

// Reference entry 111b3838; body size 15 bytes.
#line 1 "ENTRY_111b3838"
int FUN_111b3838(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 111b3df0; body size 23 bytes.
#line 1 "ENTRY_111b3df0"
int FUN_111b3df0(int a1) {

    *(int*)(a1 + 128) = (int)(0);
    return (int)(FUN_111b3d60(a1));
}

// Reference entry 111b598e; body size 12 bytes.
#line 1 "ENTRY_111b598e"
int FUN_111b598e(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 111b69b0; body size 11 bytes.
#line 1 "ENTRY_111b69b0"
int FUN_111b69b0(int result, int a2) {

    *(int*)a2 = (int)((int)(result));
    return (int)(result);
}

// Reference entry 111b70f0; body size 11 bytes.
#line 1 "ENTRY_111b70f0"
int FUN_111b70f0(int result) {

    *(int*)result = (int)((int)(0));
    return (int)(result);
}

// Reference entry 111b7210; body size 26 bytes.
#line 1 "ENTRY_111b7210"
int FUN_111b7210(int a1) {

    int v1 = (int)(*(int *)(a1 + 416)); // (int)&FUN_111b7214
    *(int*)(v1 + 92) = (int)(*(int *)(a1 + 276));
    int result = (int)(*(int *)(a1 + 96)); // (int)&FUN_111b7223
    *(int*)(v1 + 96) = (int)(result);
    return (int)(result);
}

// Reference entry 111b8250; body size 25 bytes.
#line 1 "ENTRY_111b8250"
int FUN_111b8250(int a1, int a2) {

    int v1 = (int)(510 * a1 + 255 + a2); // (int)&FUN_111b8261
    return (int)((0x100000000 * (longlong)(v1 >> 31) | (longlong)v1) / (longlong)(2 * a2));
}

// Reference entry 111b82f0; body size 23 bytes.
#line 1 "ENTRY_111b82f0"
int FUN_111b82f0(int a1) {
int *v1 = (int *)((int)((int *)a1)); // (int)&FUN_111b82f8
    *(int*)(*v1 + 20) = (int)(46);
    return (int)(*(int *)*v1);
}

// Reference entry 111b8310; body size 25 bytes.
#line 1 "ENTRY_111b8310"
int FUN_111b8310(int a1, uint a2) {

    int v1 = (int)(((int)(a2 - ((int)a2 >> 31)) >> 1) + 255 * a1); // (int)&FUN_111b8321
    return (int)((0x100000000 * (longlong)(v1 >> 31) | (longlong)v1) / (longlong)a2);
}

// Reference entry 111b91ca; body size 12 bytes.
#line 1 "ENTRY_111b91ca"
int FUN_111b91ca(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 111b9990; body size 15 bytes.
#line 1 "ENTRY_111b9990"
int FUN_111b9990(int a1) {

    int result = (int)(*(int *)(a1 + 424)); // (int)&FUN_111b9994
    *(char*)(result + 28) = (char)(1);
    return (int)(result);
}

// Reference entry 111bb3d0; body size 21 bytes.
#line 1 "ENTRY_111bb3d0"
int FUN_111bb3d0(int a1) {

    int v1 = (int)(*(int *)(a1 + 416)); // (int)&FUN_111bb3d4
    *(char*)(v1 + 36) = (char)(0);
    int result = (int)(*(int *)(a1 + 96)); // (int)&FUN_111bb3de
    *(int*)(v1 + 44) = (int)(result);
    return (int)(result);
}

// Reference entry 111bdc40; body size 16 bytes.
#line 1 "ENTRY_111bdc40"
int FUN_111bdc40(int result) {

    return (int)(result);
}

// Reference entry 111f64e6; body size 6 bytes.
#line 1 "ENTRY_111f64e6"
int FUN_111f64e6(void) {

    return (int)((int)&s_track_11880560);
}

// Reference entry 111fe090; body size 40 bytes.
#line 1 "ENTRY_111fe090"
int FUN_111fe090(char a1, int a2) {

    int v1 = (int)(a1 == 0 ? (int)&DAT_12120380 : (int)&DAT_12120428); // (int)&FUN_111fe0a6
    int v2 = (int)(0); // (int)&FUN_111fe0a6
    int result = (int)(v1); // (int)&FUN_111fe0aa
    while (*(int *)v1 != (int)(a2)) {
        v2++;
        v1 += 28;
        result = (int)(0);
        if (v2 >= 5) {
            break;
        }
        result = (int)(v1);
    }
    return (int)(result);
}

// Reference entry 1122c9f0; body size 29 bytes.
#line 1 "ENTRY_1122c9f0"
int FUN_1122c9f0(void) {

    int v1; // (int)((int(*)(void))&FUN_1122c9f0<>)
    int v2 = (int)(v1 + 896); // (int)&FUN_1122c9f2
    return (int)(v2 & -256 | (int)(v2 == 0));
}

// Reference entry 11236ac1; body size 25 bytes.
#line 1 "ENTRY_11236ac1"
int FUN_11236ac1(int a1, int a2) {

    int v1; // (int)((int(*)(int a1, int a2))&FUN_11236ac1<>)
    return (int)(v1 + 0x16a0000);
}

// Reference entry 11240410; body size 34 bytes.
#line 1 "ENTRY_11240410"
int FUN_11240410(uint a1, int a2) {

    if (a1 >= 128) {
        return (int)(thunk_FUN_11068580(a1));
    }
int *v1 = (int *)((int)((int *)a2)); // (int)&FUN_11240429
    *(char *)*v1 = (int)((char)a1);
    *v1 = (int)(*v1 + 1);
    return (int)(0);
}

// Reference entry 1124b450; body size 15 bytes.
#line 1 "ENTRY_1124b450"
int FUN_1124b450(void) {

    int v1; // (int)((int(*)(void))&FUN_1124b450<>)
    int v2 = (int)(v1);
    return (int)(v2 & -256 | (int)(v2 == 0x2733));
}

// Reference entry 1124b470; body size 15 bytes.
#line 1 "ENTRY_1124b470"
int FUN_1124b470(void) {

    int v1; // (int)((int(*)(void))&FUN_1124b470<>)
    int v2 = (int)(v1);
    return (int)(v2 & -256 | (int)(v2 == 0x2733));
}

// Reference entry 1125b5f0; body size 18 bytes.
#line 1 "ENTRY_1125b5f0"
int FUN_1125b5f0(char a1) {

    int v1; // (int)((int(*)(char a1))&FUN_1125b5f0<>)
    int result = (int)(v1 & -256); // (int)((int(*)(char a1))&FUN_1125b5f0<>)
    switch (a1) {
        case 34: {
        }
        case 92: {
            return (int)(result | 1);
        }
    }
    return (int)(result);
}

// Reference entry 11261df8; body size 12 bytes.
#line 1 "ENTRY_11261df8"
int FUN_11261df8(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 11265bac; body size 12 bytes.
#line 1 "ENTRY_11265bac"
int FUN_11265bac(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 1126ce00; body size 11 bytes.
#line 1 "ENTRY_1126ce00"
int FUN_1126ce00(int result, int a2) {

    *(int*)result = (int)((int)(a2));
    return (int)(result);
}

// Reference entry 1126ce10; body size 12 bytes.
#line 1 "ENTRY_1126ce10"
int FUN_1126ce10(int result, int a2) {

    *(int*)(result + 4) = (int)(a2);
    return (int)(result);
}

// Reference entry 1126e730; body size 15 bytes.
#line 1 "ENTRY_1126e730"
int __stdcall FUN_1126e730(int a1) {

    return (int)(*(int *)(a1 + 32) / 64 & 0x3ffff01);
}

// Reference entry 11287218; body size 14 bytes.
#line 1 "ENTRY_11287218"
int __stdcall FUN_11287218(unsigned int recovered_unused_stack_0) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 11287404; body size 14 bytes.
#line 1 "ENTRY_11287404"
int __stdcall FUN_11287404(unsigned int recovered_unused_stack_0) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 1128cd80; body size 23 bytes.
#line 1 "ENTRY_1128cd80"
int FUN_1128cd80(int a1) {

    int v1 = (int)(*(int *)(a1 + 4)); // (int)&FUN_1128cd84
    if (v1 == 0 || (*(char *)(v1 + 32) & 8) == 0) {
        return (int)(v1 & -256);
    }
    return (int)(v1 & -256 | 1);
}

// Reference entry 112908c7; body size 12 bytes.
#line 1 "ENTRY_112908c7"
int FUN_112908c7(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 1129099c; body size 12 bytes.
#line 1 "ENTRY_1129099c"
int FUN_1129099c(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 11290aee; body size 12 bytes.
#line 1 "ENTRY_11290aee"
int FUN_11290aee(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 11290e1a; body size 12 bytes.
#line 1 "ENTRY_11290e1a"
int FUN_11290e1a(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 11293140; body size 14 bytes.
#line 1 "ENTRY_11293140"
int FUN_11293140(int a1, int a2) {

    return (int)(*(int *)a1);
}

// Reference entry 11293160; body size 14 bytes.
#line 1 "ENTRY_11293160"
int FUN_11293160(int a1, int a2) {

    return (int)(*(int *)a1);
}

// Reference entry 11297650; body size 11 bytes.
#line 1 "ENTRY_11297650"
int FUN_11297650(int result, int a2) {

    *(int*)result = (int)((int)(a2));
    return (int)(result);
}

// Reference entry 11297660; body size 12 bytes.
#line 1 "ENTRY_11297660"
int FUN_11297660(int result, int a2) {

    *(int*)(result + 4) = (int)(a2);
    return (int)(result);
}

// Reference entry 11297670; body size 15 bytes.
#line 1 "ENTRY_11297670"
int FUN_11297670(int result, int a2) {

    *(int*)(result + 180) = (int)(a2);
    return (int)(result);
}

// Reference entry 1129aeb0; body size 14 bytes.
#line 1 "ENTRY_1129aeb0"
int FUN_1129aeb0(void) {

    return (int)(thunk_FUN_11248b40(15));
}

// Reference entry 1129b040; body size 11 bytes.
#line 1 "ENTRY_1129b040"
int FUN_1129b040(int a1) {

    return (int)(*(int *)(a1 + 300));
}

// Reference entry 1129b050; body size 15 bytes.
#line 1 "ENTRY_1129b050"
int FUN_1129b050(int result, int a2) {

    *(int*)(result + 300) = (int)(a2);
    return (int)(result);
}

// Reference entry 1129bb70; body size 27 bytes.
#line 1 "ENTRY_1129bb70"
int FUN_1129bb70(int a1, int a2, int a3, int result) {

    *(char*)a2 = (char)((int)(0));
    *(int*)a3 = (int)((int)(a1));
    *(int*)result = (int)((int)(a2 + 1));
    return (int)(result);
}

// Reference entry 112a768f; body size 14 bytes.
#line 1 "ENTRY_112a768f"
int FUN_112a768f(void) {

    int v1; // (int)((int(*)(void))&FUN_112a768f<>)
    int v2 = (int)(v1);
    *(char*)v2 = (char)((int)(2 * (char)v2));
    return (int)(v2 & -256 | 1);
}

// Reference entry 112ab4a0; body size 26 bytes.
#line 1 "ENTRY_112ab4a0"
int FUN_112ab4a0(int a1, int result, int a3) {

    return (int)(result);
}

// Reference entry 112abd90; body size 14 bytes.
#line 1 "ENTRY_112abd90"
int FUN_112abd90(uint a1, uint a2) {

    return (int)(a1 < a2 ? a1 : a2);
}

// Reference entry 112b01d0; body size 22 bytes.
#line 1 "ENTRY_112b01d0"
int FUN_112b01d0(int a1, int a2) {

    if (a2 >= 0 != a2 != 0) {
        return (int)(0);
    }
    int v1 = (int)(a2 - 1); // (int)&FUN_112b01db
    int v2 = (int)(a1 - v1); // (int)&FUN_112b01dc
    return (int)(v2 < 0 == ((v2 ^ a1) & (v1 ^ a1)) < 0 ? v1 : a1);
}

// Reference entry 112b0250; body size 16 bytes.
#line 1 "ENTRY_112b0250"
int FUN_112b0250(int a1) {

    int v1 = (int)(a1 - 3); // (int)&FUN_112b0256
    return (int)(v1 < 0 == (2 - a1 & a1) < 0 ? v1 : 0);
}

// Reference entry 112b1839; body size 12 bytes.
#line 1 "ENTRY_112b1839"
int FUN_112b1839(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 112b5500; body size 37 bytes.
#line 1 "ENTRY_112b5500"
int FUN_112b5500(int a1, uint a2, int a3) {

    if (a2 <= 15) {
        if ((uint)thunk_FUN_112b0da0(2, a1, a3) >= 1) {
            return (int)(0);
        }
    }
    return (int)(-1);
}

// Reference entry 112b8f20; body size 29 bytes.
#line 1 "ENTRY_112b8f20"
int FUN_112b8f20(int a1, int a2, int a3) {

    int result = (int)(a1); // (int)&FUN_112b8f28
    if (*(int *)(a1 + 120) >= 2) {
        *(int*)(*(int *)(a2 + 92) + 8 * a3) = (int)(1);
        result = (int)(a3);
    }
    return (int)(result);
}

// Reference entry 112b9220; body size 25 bytes.
#line 1 "ENTRY_112b9220"
int FUN_112b9220(int a1) {

    return (int)((bool)(a1 == 11 | a1 == 0x2733));
}

// Reference entry 112bc489; body size 12 bytes.
#line 1 "ENTRY_112bc489"
int FUN_112bc489(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 112bcb17; body size 12 bytes.
#line 1 "ENTRY_112bcb17"
int FUN_112bcb17(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 112bea49; body size 12 bytes.
#line 1 "ENTRY_112bea49"
int FUN_112bea49(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 112bebea; body size 12 bytes.
#line 1 "ENTRY_112bebea"
int FUN_112bebea(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 112bf820; body size 12 bytes.
#line 1 "ENTRY_112bf820"
int FUN_112bf820(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 112bfd01; body size 12 bytes.
#line 1 "ENTRY_112bfd01"
int FUN_112bfd01(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 112c12d7; body size 6 bytes.
#line 1 "ENTRY_112c12d7"
int FUN_112c12d7(void) {

    int result; // (int)((int(*)(void))&FUN_112c12d7<>)
    return (int)(result);
}

// Reference entry 112c2b30; body size 22 bytes.
#line 1 "ENTRY_112c2b30"
int FUN_112c2b30(int a1, int a2) {

    return (int)(FUN_112c2b50(a1, a2, (int)&s_false_11889d1c));
}

// Reference entry 112c2be0; body size 22 bytes.
#line 1 "ENTRY_112c2be0"
int FUN_112c2be0(int a1, int a2) {

    return (int)(FUN_112c2b50(a1, a2, (int)&DAT_11896094));
}

// Reference entry 112c2d30; body size 22 bytes.
#line 1 "ENTRY_112c2d30"
int FUN_112c2d30(int a1, int a2) {

    return (int)(FUN_112c2b50(a1, a2, (int)&DAT_11889d24));
}

// Reference entry 112c2fc0; body size 19 bytes.
#line 1 "ENTRY_112c2fc0"
int FUN_112c2fc0(int a1) {

    return (int)(a1 == 2 ? 7 : 10);
}

// Reference entry 112c3290; body size 22 bytes.
#line 1 "ENTRY_112c3290"
int FUN_112c3290(int a1) {

    int v1 = (int)(*(int *)a1); // (int)&FUN_112c3294
    int result = (int)(v1 & -256);
    if (v1 < 3) {
        return (int)(result | 1);
    }
    return (int)(result);
}

// Reference entry 112c3380; body size 22 bytes.
#line 1 "ENTRY_112c3380"
int FUN_112c3380(unsigned char a1) {

    int v1; // (int)((int(*)(unsigned char a1))&FUN_112c3380<>)
    int result = (int)(v1 & -256); // (int)((int(*)(unsigned char a1))&FUN_112c3380<>)
    if (a1 < 32) {
        return (int)(result | 1);
    }
    switch (a1) {
        case 92: {
        }
        case 34: {
            return (int)(result | 1);
        }
    }
    return (int)(result);
}

// Reference entry 112c33a0; body size 20 bytes.
#line 1 "ENTRY_112c33a0"
int FUN_112c33a0(int a1) {

    int result = (int)(a1 & -256);
    switch (a1) {
        case 10: {
        }
        case 7: {
            return (int)(result | 1);
        }
    }
    return (int)(result);
}

// Reference entry 112c34a0; body size 26 bytes.
#line 1 "ENTRY_112c34a0"
int FUN_112c34a0(int a1) {

    int v1 = (int)(*(int *)(a1 + 1104)); // (int)&FUN_112c34a4
    if (v1 != 0) {
        return (int)(a1 + 1116 + 4 * v1);
    }
    return (int)(0);
}

// Reference entry 112c46b0; body size 14 bytes.
#line 1 "ENTRY_112c46b0"
int FUN_112c46b0(int a1) {

    int result; // (int)((int(*)(int a1))&FUN_112c46b0<>)
    return (int)(result);
}

// Reference entry 112c6b70; body size 12 bytes.
#line 1 "ENTRY_112c6b70"
int FUN_112c6b70(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 112c8a10; body size 20 bytes.
#line 1 "ENTRY_112c8a10"
int FUN_112c8a10(unsigned char a1) {

    int v1; // (int)((int(*)(unsigned char a1))&FUN_112c8a10<>)
    int result = (int)(v1 & -256); // (int)((int(*)(unsigned char a1))&FUN_112c8a10<>)
    int v2 = (int)(result | (int)a1); // (int)((int(*)(unsigned char a1))&FUN_112c8a10<>)
    if (a1 >= 0) {
        return (int)(v2 & -256 | 1);
    }
    int v3 = (int)(v2 & -64); // (int)&FUN_112c8a18
    if ((char)v3 == -64) {
        return (int)(v3 & -256 | 1);
    }
    return (int)(result);
}

// Reference entry 112c8a30; body size 12 bytes.
#line 1 "ENTRY_112c8a30"
int FUN_112c8a30(char a1) {

    int v1; // (int)((int(*)(char a1))&FUN_112c8a30<>)
    return (int)(v1 & -256 | (int)((a1 & -64) == -128));
}

// Reference entry 112cb460; body size 18 bytes.
#line 1 "ENTRY_112cb460"
int FUN_112cb460(int a1) {

    return (int)(FUN_112cb630(a1, (int)&s_ABORTING_119ea860));
}

// Reference entry 112d1970; body size 11 bytes.
#line 1 "ENTRY_112d1970"
int FUN_112d1970(int a1) {

    return (int)(*(int *)(a1 + 280));
}

// Reference entry 112d3010; body size 26 bytes.
#line 1 "ENTRY_112d3010"
int FUN_112d3010(int a1) {

    int result = (int)(0); // (int)&FUN_112d3018
    if (*(char *)a1 == 0) {
        return (int)(0);
    }
    int v1 = (int)(a1); // (int)&FUN_112d3018
    v1++;
    result++;
    while (*(char *)v1 != 0) {
        v1++;
        result++;
    }
    return (int)(result);
}

// Reference entry 112d42e0; body size 15 bytes.
#line 1 "ENTRY_112d42e0"
int FUN_112d42e0(int a1) {

    if (a1 < 1) {
        return (int)(0);
    }
    return (int)(a1 + 8);
}

// Reference entry 112de59f; body size 210 bytes.
#line 1 "ENTRY_112de59f"
int FUN_112de59f(void) {

    int v1; // (int)((int(*)(void))&FUN_112de59f<>)
    char v2 = (char)(v1);
    *(char*)v1 = (char)((int)(2 * v2));
char *v3 = (char *)((char)((char *)(v1 + 0x613c0141))); // (int)&FUN_112de5a1
    char v4 = (char)(*v3 + (char)v1); // (int)&FUN_112de5a1
    *v3 = (char)(v4);
    if (v4 == 0) {
        if (*(char *)(v1 + 2) != 0 || *(char *)(v1 + 3) != 112 || *(char *)(v1 + 4) != 0 || *(char *)(v1 + 5) != 111 || *(char *)(v1 + 6) != 0 || *(char *)(v1 + 7) != 115) {
            return (int)(0);
        }
        return (int)(39);
    }
    if (v2 != 113 || *(char *)(v1 + 2) != 0 || *(char *)(v1 + 3) != 117 || *(char *)(v1 + 4) != 0 || *(char *)(v1 + 5) != 111 || *(char *)(v1 + 6) != 0 || *(char *)(v1 + 7) != 116) {
        return (int)(0);
    }
    return (int)(34);
}

// Reference entry 112e15e3; body size 12 bytes.
#line 1 "ENTRY_112e15e3"
int FUN_112e15e3(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 112e1713; body size 12 bytes.
#line 1 "ENTRY_112e1713"
int FUN_112e1713(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 112eb750; body size 22 bytes.
#line 1 "ENTRY_112eb750"
int FUN_112eb750(int result) {

    int v1 = (int)(*(int *)(result + 36)); // (int)&FUN_112eb754
    if (v1 == 0) {
        return (int)(result);
    }
    return (int)(*(int *)(*(int *)v1 + 8));
}

// Reference entry 112eb770; body size 20 bytes.
#line 1 "ENTRY_112eb770"
int FUN_112eb770(int result) {

    int v1 = (int)(*(int *)(result + 36)); // (int)&FUN_112eb774
    if (v1 == 0) {
        return (int)(result);
    }
    return (int)(*(int *)v1);
}

// Reference entry 112ec1b0; body size 22 bytes.
#line 1 "ENTRY_112ec1b0"
int FUN_112ec1b0(int result) {

    int v1 = (int)(*(int *)(result + 36)); // (int)&FUN_112ec1b4
    if (v1 == 0) {
        return (int)(result);
    }
    return (int)(*(int *)(*(int *)v1 + 8));
}

// Reference entry 112ec1d0; body size 20 bytes.
#line 1 "ENTRY_112ec1d0"
int FUN_112ec1d0(int result) {

    int v1 = (int)(*(int *)(result + 36)); // (int)&FUN_112ec1d4
    if (v1 == 0) {
        return (int)(result);
    }
    return (int)(*(int *)v1);
}

// Reference entry 112ed7b0; body size 18 bytes.
#line 1 "ENTRY_112ed7b0"
int FUN_112ed7b0(void) {

    int result = (int)(0); // (int)&FUN_112ed7b4
    int v1; // (int)((int(*)(void))&FUN_112ed7b0<>)
    if (v1 != 0) {
        result = (int)(thunk_FUN_1148a50e(v1, 48), 0);
    }
    return (int)(result);
}

// Reference entry 112ed7f0; body size 18 bytes.
#line 1 "ENTRY_112ed7f0"
int FUN_112ed7f0(void) {

    int result = (int)(0); // (int)&FUN_112ed7f4
    int v1; // (int)((int(*)(void))&FUN_112ed7f0<>)
    if (v1 != 0) {
        result = (int)(thunk_FUN_1148a50e(v1, 48), 0);
    }
    return (int)(result);
}

// Reference entry 112f43d0; body size 26 bytes.
#line 1 "ENTRY_112f43d0"
int FUN_112f43d0(int a1, int result, int a3) {

    return (int)(result);
}

// Reference entry 112f5cd0; body size 11 bytes.
#line 1 "ENTRY_112f5cd0"
int FUN_112f5cd0(int a1) {

    int result; // (int)((int(*)(int a1))&FUN_112f5cd0<>)
    return (int)(result);
}

// Reference entry 112f5d20; body size 11 bytes.
#line 1 "ENTRY_112f5d20"
int FUN_112f5d20(int a1) {

    int result; // (int)((int(*)(int a1))&FUN_112f5d20<>)
    return (int)(result);
}

// Reference entry 112f6e7e; body size 12 bytes.
#line 1 "ENTRY_112f6e7e"
int FUN_112f6e7e(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 112f727f; body size 12 bytes.
#line 1 "ENTRY_112f727f"
int FUN_112f727f(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 112f87b5; body size 12 bytes.
#line 1 "ENTRY_112f87b5"
int FUN_112f87b5(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 112f8f20; body size 13 bytes.
#line 1 "ENTRY_112f8f20"
int FUN_112f8f20(int a1) {

    return (int)(*(int *)(a1 + 4) == 0);
}

// Reference entry 112f9060; body size 22 bytes.
#line 1 "ENTRY_112f9060"
int FUN_112f9060(int a1, int a2) {

    *(int*)a2 = (int)((int)(*(int *)(a1 + 8)));
    *(int*)(a2 + 4) = (int)(*(int *)(a1 + 12));
    return (int)(0);
}

// Reference entry 112f9dfa; body size 12 bytes.
#line 1 "ENTRY_112f9dfa"
int FUN_112f9dfa(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 112faa9c; body size 12 bytes.
#line 1 "ENTRY_112faa9c"
int FUN_112faa9c(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 112fb12a; body size 12 bytes.
#line 1 "ENTRY_112fb12a"
int FUN_112fb12a(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 112fb1e4; body size 12 bytes.
#line 1 "ENTRY_112fb1e4"
int FUN_112fb1e4(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 112fb2a1; body size 12 bytes.
#line 1 "ENTRY_112fb2a1"
int FUN_112fb2a1(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 112fb2e0; body size 18 bytes.
#line 1 "ENTRY_112fb2e0"
int FUN_112fb2e0(int a1) {

    return (int)(256 * (int)(*(char *)(a1 + 16) & 16 | 8));
}

// Reference entry 112fc5f0; body size 21 bytes.
#line 1 "ENTRY_112fc5f0"
int FUN_112fc5f0(void) {

    return (int)(FUN_112fb160(0, 0));
}

// Reference entry 112fc691; body size 12 bytes.
#line 1 "ENTRY_112fc691"
int FUN_112fc691(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 112fc6c0; body size 21 bytes.
#line 1 "ENTRY_112fc6c0"
int FUN_112fc6c0(void) {

    return (int)(FUN_112fb090(0, 0));
}

// Reference entry 112fcde0; body size 32 bytes.
#line 1 "ENTRY_112fcde0"
int FUN_112fcde0(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_112fcde0<>)
    if (v1 == 0) {
        FUN_113b06e0(a1);
        return (int)(0);
    }
int *v2 = (int *)((int)((int *)(a1 + 36))); // (int)&FUN_112fcdeb
    *v2 = (int)(*v2 - 1);
    return (int)(0);
}

// Reference entry 112fcec0; body size 11 bytes.
#line 1 "ENTRY_112fcec0"
int FUN_112fcec0(int a1) {

    return (int)(a1 + 7 & -8);
}

// Reference entry 112fe5b0; body size 15 bytes.
#line 1 "ENTRY_112fe5b0"
int FUN_112fe5b0(int a1) {

    FUN_11322c60(a1);
    return (int)(0);
}

// Reference entry 112fe7b0; body size 22 bytes.
#line 1 "ENTRY_112fe7b0"
int FUN_112fe7b0(int a1, int a2) {

    *(int*)a2 = (int)((int)(*(int *)(a1 + 24)));
    *(int*)(a2 + 4) = (int)(*(int *)(a1 + 28));
    return (int)(0);
}

// Reference entry 112ff660; body size 24 bytes.
#line 1 "ENTRY_112ff660"
int FUN_112ff660(int a1) {

    return (int)(FUN_113355a0(a1, (int)&DAT_119fc064, -1, 1, 0));
}

// Reference entry 112ff680; body size 24 bytes.
#line 1 "ENTRY_112ff680"
int FUN_112ff680(int a1) {

    return (int)(FUN_113355a0(a1, (int)&DAT_11a02d00, -1, 1, 0));
}

// Reference entry 113019b0; body size 18 bytes.
#line 1 "ENTRY_113019b0"
int FUN_113019b0(void) {

    return (int)(memset((void *)((int)&DAT_122f6ff0), 0, 100));
}

// Reference entry 11304270; body size 36 bytes.
#line 1 "ENTRY_11304270"
int FUN_11304270(int a1) {

    if (a1 == 23) {
        int v1; // (int)((int(*)(int a1))&FUN_11304270<>)
        if (FUN_1131df50(&v1) == 22) {
            return (int)(163);
        }
    }
    return (int)(59);
}

// Reference entry 11305010; body size 42 bytes.
#line 1 "ENTRY_11305010"
int FUN_11305010(int a1) {

    if (a1 == 23) {
        int v1; // (int)((int(*)(int a1))&FUN_11305010<>)
        int v2 = (int)(FUN_1131df50(&v1), 0); // (int)&FUN_1130501c
        if (v2 != 22 != v2 != 59) {
            return (int)(162);
        }
    }
    return (int)(59);
}

// Reference entry 113054c0; body size 29 bytes.
#line 1 "ENTRY_113054c0"
int FUN_113054c0(int a1) {

    int v1 = (int)(*(int *)(*(int *)(a1 + 24) + 4)); // (int)&FUN_113054c7
int *v2 = (int *)((int)((int *)(*(int *)v1 + 88))); // (int)&FUN_113054cc
    int result = (int)(*v2); // (int)&FUN_113054cc
    *(int*)(a1 + 44) = (int)(result);
    *v2 = (int)(a1);
    *(int*)(a1 + 40) = (int)(1);
    return (int)(result);
}

// Reference entry 11309db7; body size 21 bytes.
#line 1 "ENTRY_11309db7"
int FUN_11309db7(void) {

    int v1; // (int)((int(*)(void))&FUN_11309db7<>)
    return (int)(*(int *)(v1 + 80));
}

// Reference entry 1130bc50; body size 15 bytes.
#line 1 "ENTRY_1130bc50"
int FUN_1130bc50(int result) {

    *(short*)(result + 42) = (short)(0);
    *(char*)(result + 44) = (char)(0);
    return (int)(result);
}

// Reference entry 1130f040; body size 17 bytes.
#line 1 "ENTRY_1130f040"
int FUN_1130f040(int a1) {

    FUN_1130eea0(a1);
    return (int)(FUN_1130e9d0());
}

// Reference entry 11311060; body size 24 bytes.
#line 1 "ENTRY_11311060"
int FUN_11311060(int a1) {

    int result = (int)(0); // (int)&FUN_11311068
    if (a1 == 0) {
        return (int)(0);
    }
    int v1 = (int)(a1); // (int)&FUN_11311068
    v1 = (int)(*(int *)v1);
    result++;
    while (v1 != 0) {
        v1 = (int)(*(int *)v1);
        result++;
    }
    return (int)(result);
}

// Reference entry 113115e0; body size 19 bytes.
#line 1 "ENTRY_113115e0"
int FUN_113115e0(int a1, int result) {
int *v1 = (int *)((int)((int *)(a1 + 4))); // (int)&FUN_113115e8
    *(int*)(a1 + 8 + 4 * *v1) = (int)(result);
    *v1 = (int)(*v1 + 1);
    return (int)(result);
}

// Reference entry 11313150; body size 55 bytes.
#line 1 "ENTRY_11313150"
int FUN_11313150(int a1, int a2) {

    if (a2 == 0 || *(char *)a1 == -81 || (*(int *)(a1 + 4) & 0x1000000) != 0) {
        return (int)(48);
    }
    if (*(int *)(a1 + 12) != 0) {
        return (int)(0x2018);
    }
    if (*(int *)(a1 + 20) == 0) {
        return (int)(0x400c);
    }
    return (int)(0x2018);
}

// Reference entry 11313580; body size 38 bytes.
#line 1 "ENTRY_11313580"
unsigned short FUN_11313580(short a1) {

    if (a1 > 10) {
        return (int)(FUN_11358910((int)a1, 0x10000 * (int)(ushort)a1 >> 31) + 0xffdf & 0xffff);
    }
    return (int)(0);
}

// Reference entry 11315df0; body size 21 bytes.
#line 1 "ENTRY_11315df0"
int FUN_11315df0(int a1) {

    return (int)(*(char *)a1 != -120 ? 0 : a1);
}

// Reference entry 11318300; body size 28 bytes.
#line 1 "ENTRY_11318300"
int FUN_11318300(int result) {

    int v1 = (int)(*(int *)(result + 56)); // (int)&FUN_11318304
    if (v1 == 0) {
        return (int)(result);
    }
    int result2 = (int)(v1);
    int v2 = (int)(*(int *)(result2 + 56)); // (int)&FUN_11318312
    while (v2 != 0) {
        result2 = (int)(v2);
        v2 = (int)(*(int *)(result2 + 56));
    }
    return (int)(result2);
}

// Reference entry 1131b4e0; body size 20 bytes.
#line 1 "ENTRY_1131b4e0"
int FUN_1131b4e0(int result) {

    return (int)(result);
}

// Reference entry 1131bf90; body size 17 bytes.
#line 1 "ENTRY_1131bf90"
int FUN_1131bf90(int a1, int a2) {

    return (int)(*(int *)(a1 + 24) != (int)(a2));
}

// Reference entry 1131d300; body size 18 bytes.
#line 1 "ENTRY_1131d300"
int FUN_1131d300(int a1, int a2) {

    *(int*)a2 = (int)((int)(0));
    return (int)(*(int *)(a1 + 40));
}

// Reference entry 1131ea40; body size 22 bytes.
#line 1 "ENTRY_1131ea40"
int FUN_1131ea40(int a1, int a2) {

    if (*(char *)a2 == -91) {
char *v1 = (char *)((char)((char *)(a2 + 2))); // (int)&FUN_1131ea50
        *v1 = (char)(*v1 + *(char *)(a1 + 24));
    }
    return (int)(0);
}

// Reference entry 11320740; body size 27 bytes.
#line 1 "ENTRY_11320740"
int FUN_11320740(int a1) {

    return (int)((bool)(a1 != 0 == (uint)(a1 - 5) > 1));
}

// Reference entry 11321720; body size 20 bytes.
#line 1 "ENTRY_11321720"
int FUN_11321720(int a1) {

    return (int)(thunk_FUN_11395910(21, (int)&DAT_119fe740, a1));
}

// Reference entry 11323830; body size 32 bytes.
#line 1 "ENTRY_11323830"
int FUN_11323830(int a1) {

    int v1 = (int)((int)*(short *)(a1 + 8)); // (int)&FUN_11323834
    int result = (int)(v1 & 44); // (int)&FUN_1132383a
    if (result != 0) {
        return (int)(result);
    }
    if ((v1 & 18) == 0) {
        return (int)(0);
    }
    return (int)(FUN_1130ede0(a1));
}

// Reference entry 113244f0; body size 33 bytes.
#line 1 "ENTRY_113244f0"
int FUN_113244f0(int a1, int a2) {

    int v1; // (int)((int(*)(int a1, int a2))&FUN_113244f0<>)
    return (int)(*(int *)&DAT_12121f78 == 0 ? v1 : 1);
}

// Reference entry 11326320; body size 26 bytes.
#line 1 "ENTRY_11326320"
int FUN_11326320(int a1) {

    int result = (int)(*(int *)(a1 + 228)); // (int)&FUN_11326324
    if (*(int *)(result + 12) != 0) {
        return (int)(result);
    }
    return (int)(FUN_11326250(a1));
}

// Reference entry 1132b048; body size 12 bytes.
#line 1 "ENTRY_1132b048"
int FUN_1132b048(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 1132f52c; body size 12 bytes.
#line 1 "ENTRY_1132f52c"
int FUN_1132f52c(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 1132fa60; body size 28 bytes.
#line 1 "ENTRY_1132fa60"
int FUN_1132fa60(int a1) {

    if (a1 == 0) {
        return (int)(0);
    }
char *v1 = (char *)((char)((char *)a1)); // (int)&FUN_1132fa68
    int result = (int)(a1); // (int)&FUN_1132fa6b
    if (*v1 == (char)((59))) {
        *v1 = (char)(115);
        result = (int)(0);
    }
    return (int)(result);
}

// Reference entry 113359f0; body size 24 bytes.
#line 1 "ENTRY_113359f0"
int FUN_113359f0(int a1) {

    int result = (int)(a1); // (int)&FUN_113359f6
    if (a1 < 0) {
        result = (int)(a1 != -0x80000000 ? -a1 : 0x7fffffff);
    }
    return (int)(result);
}

// Reference entry 11338780; body size 27 bytes.
#line 1 "ENTRY_11338780"
int FUN_11338780(int a1) {
int *v1 = (int *)((int)((int *)(a1 + 4))); // (int)&FUN_11338784
    int v2 = (int)(*v1); // (int)&FUN_11338784
    int result; // (int)((int(*)(int a1))&FUN_11338780<>)
    if (v2 != 0) {
        int v3 = (int)(*(int *)a1); // (int)&FUN_1133878b
        *(int*)(v2 + 228) = (int)(v3);
        *v1 = (int)(0);
        result = (int)(v3);
    }
    return (int)(result);
}

// Reference entry 11338cc0; body size 20 bytes.
#line 1 "ENTRY_11338cc0"
int FUN_11338cc0(int result) {

    if (*(int *)(result + 104) == 0) {
        return (int)(result);
    }
    return (int)(FUN_11305600(result));
}

// Reference entry 11338d10; body size 18 bytes.
#line 1 "ENTRY_11338d10"
int FUN_11338d10(int a1) {

    if (a1 == 0) {
        return (int)(0);
    }
    return (int)(FUN_11305cc0(a1));
}

// Reference entry 11338d30; body size 12 bytes.
#line 1 "ENTRY_11338d30"
int FUN_11338d30(void) {

    return (int)(*(int *)&DAT_122f6d78);
}

// Reference entry 11339750; body size 19 bytes.
#line 1 "ENTRY_11339750"
int FUN_11339750(int a1, int result) {

    *(int *)&DAT_122f6d78 = a1;
    *(int *)&DAT_122f6d7c = result;
    return (int)(result);
}

// Reference entry 1133a750; body size 21 bytes.
#line 1 "ENTRY_1133a750"
int FUN_1133a750(int a1) {

    return (int)(FUN_1133a6e0(*(int *)(a1 + 8), *(int *)(a1 + 64), 0));
}

// Reference entry 1133b150; body size 28 bytes.
#line 1 "ENTRY_1133b150"
int FUN_1133b150(int a1) {

    return (int)(FUN_11308e80(a1));
}

// Reference entry 1133b180; body size 20 bytes.
#line 1 "ENTRY_1133b180"
int FUN_1133b180(int a1, char a2) {

    return (int)((*(char *)(a1 + 3) & a2) != 0);
}

// Reference entry 1133b1a0; body size 12 bytes.
#line 1 "ENTRY_1133b1a0"
int FUN_1133b1a0(int a1) {

    return (int)(*(char *)a1 != 0);
}

// Reference entry 1133b1b0; body size 12 bytes.
#line 1 "ENTRY_1133b1b0"
int FUN_1133b1b0(int result, char a2) {

    *(char*)(result + 3) = (char)(a2);
    return (int)(result);
}

// Reference entry 1133b1c0; body size 12 bytes.
#line 1 "ENTRY_1133b1c0"
int FUN_1133b1c0(int a1) {

    return (int)(*(char *)a1 == 0);
}

// Reference entry 1133b750; body size 12 bytes.
#line 1 "ENTRY_1133b750"
int FUN_1133b750(int a1) {

    return (int)(*(char *)a1 != 0);
}

// Reference entry 1133b7e0; body size 28 bytes.
#line 1 "ENTRY_1133b7e0"
int FUN_1133b7e0(int a1) {

    int v1 = (int)(*(int *)*(int *)(a1 + 4)); // (int)&FUN_1133b7e7
    if (*(char *)(v1 + 15) == 0) {
        return (int)(*(int *)(v1 + 168));
    }
    return (int)((int)&DAT_119f77dc);
}

// Reference entry 1133b810; body size 16 bytes.
#line 1 "ENTRY_1133b810"
int FUN_1133b810(int a1) {

    return (int)(*(int *)(*(int *)*(int *)(a1 + 4) + 172));
}

// Reference entry 1133b870; body size 23 bytes.
#line 1 "ENTRY_1133b870"
int FUN_1133b870(int a1) {

    int v1 = (int)(*(int *)(a1 + 4)); // (int)&FUN_1133b874
    int v2 = (int)(*(int *)(v1 + 36) - *(int *)(v1 + 40)); // (int)&FUN_1133b87a
    int v3 = (int)((int)*(char *)(v1 + 22)); // (int)&FUN_1133b87d
    int v4 = (int)(v2 - v3); // (int)&FUN_1133b881
    return (int)(v4 < 0 == ((v4 ^ -0x80000000) & v2) < 0 ? v2 : v3);
}

// Reference entry 1133b890; body size 11 bytes.
#line 1 "ENTRY_1133b890"
int FUN_1133b890(int a1) {

    return (int)(*(int *)(*(int *)(a1 + 4) + 36));
}

// Reference entry 1133b8a0; body size 14 bytes.
#line 1 "ENTRY_1133b8a0"
int FUN_1133b8a0(int a1) {

    int v1 = (int)(*(int *)(a1 + 4)); // (int)&FUN_1133b8a4
    return (int)(*(int *)(v1 + 36) - *(int *)(v1 + 40));
}

// Reference entry 1133b9b0; body size 16 bytes.
#line 1 "ENTRY_1133b9b0"
int FUN_1133b9b0(int a1) {
char *v1 = (char *)((char)((char *)(a1 + 1))); // (int)&FUN_1133b9b4
    *v1 = (char)(*v1 + 16);
    int result = (int)(*(int *)(a1 + 8)); // (int)&FUN_1133b9b8
    *(char*)(result + 11) = (char)(1);
    return (int)(result);
}

// Reference entry 1133c660; body size 13 bytes.
#line 1 "ENTRY_1133c660"
int FUN_1133c660(int a1) {

    return (int)(*(int *)(a1 + 16) != 0);
}

// Reference entry 1133c670; body size 13 bytes.
#line 1 "ENTRY_1133c670"
int FUN_1133c670(int a1) {

    return (int)(*(char *)(a1 + 8) != 0);
}

// Reference entry 1133c680; body size 23 bytes.
#line 1 "ENTRY_1133c680"
int FUN_1133c680(int a1) {

    if (a1 != 0) {
        if (*(char *)(a1 + 8) == 2) {
            return (int)(1);
        }
    }
    return (int)(0);
}

// Reference entry 1133c6a0; body size 15 bytes.
#line 1 "ENTRY_1133c6a0"
int FUN_1133c6a0(int a1) {

    return (int)((int)(*(short *)(*(int *)(a1 + 4) + 24) & 1));
}

// Reference entry 1133c750; body size 16 bytes.
#line 1 "ENTRY_1133c750"
int FUN_1133c750(int a1) {

    return (int)(*(int *)(*(int *)(a1 + 4) + 48) & 0x7fffffff);
}

// Reference entry 1133c7a0; body size 14 bytes.
#line 1 "ENTRY_1133c7a0"
int FUN_1133c7a0(int a1) {

    int v1 = (int)(*(int *)(a1 + 20)); // (int)&FUN_1133c7a4
    return (int)(*(int *)(v1 + 36) * *(int *)(v1 + 48));
}

// Reference entry 1133cfe0; body size 26 bytes.
#line 1 "ENTRY_1133cfe0"
int FUN_1133cfe0(int a1) {
int *v1 = (int *)((int)((int *)(a1 + 4))); // (int)&FUN_1133cfe4
    *(int*)(*v1 + 48) = (int)(0);
    return (int)(FUN_11323590(*v1));
}

// Reference entry 1133d4b0; body size 10 bytes.
#line 1 "ENTRY_1133d4b0"
int FUN_1133d4b0(int a1) {

    return (int)(*(int *)*(int *)(a1 + 4));
}

// Reference entry 1133d4c0; body size 27 bytes.
#line 1 "ENTRY_1133d4c0"
int FUN_1133d4c0(int a1, int a2, int a3, int a4) {

    return (int)(FUN_11301fe0(a1, a2, a3, a4, 0));
}

// Reference entry 1133db40; body size 24 bytes.
#line 1 "ENTRY_1133db40"
int FUN_1133db40(int a1, int a2) {

    FUN_1135ca00(*(int *)*(int *)(a1 + 4), a2);
    return (int)(0);
}

// Reference entry 1133e470; body size 16 bytes.
#line 1 "ENTRY_1133e470"
int FUN_1133e470(int result) {

    *(char*)(result + 19) = (char)(0);
    *(int*)(result + 28) = (int)(0);
    return (int)(result);
}

// Reference entry 11341000; body size 16 bytes.
#line 1 "ENTRY_11341000"
int FUN_11341000(int a1) {

    *(int*)a1 = (int)((int)(15));
    return (int)((int)&DAT_119fc028);
}

// Reference entry 113433a0; body size 18 bytes.
#line 1 "ENTRY_113433a0"
int FUN_113433a0(int result) {

    return (int)(result);
}

// Reference entry 11345590; body size 12 bytes.
#line 1 "ENTRY_11345590"
int FUN_11345590(void) {

    return (int)(*(int *)&DAT_122f6d7c);
}

// Reference entry 1134a530; body size 18 bytes.
#line 1 "ENTRY_1134a530"
int FUN_1134a530(int result) {

    return (int)(result);
}

// Reference entry 1134bbd0; body size 18 bytes.
#line 1 "ENTRY_1134bbd0"
int FUN_1134bbd0(int a1) {

    if (a1 == 0) {
        return (int)(0);
    }
    return (int)(FUN_11316ce0(a1));
}

// Reference entry 1134c3b0; body size 14 bytes.
#line 1 "ENTRY_1134c3b0"
int FUN_1134c3b0(void) {

    return (int)(*(int *)&DAT_12121f74);
}

// Reference entry 11353030; body size 21 bytes.
#line 1 "ENTRY_11353030"
int FUN_11353030(int a1) {

    int v1 = (int)(*(int *)(*(int *)(a1 + 12) + 104)); // (int)&FUN_1135303d
    return (int)(*(int *)(v1 - 4 + 20 * *(int *)(a1 + 16)));
}

// Reference entry 11354030; body size 22 bytes.
#line 1 "ENTRY_11354030"
int FUN_11354030(int a1, int a2) {

    return (int)(*(int *)(FUN_113180e0(a1, a2, 0) + 8));
}

// Reference entry 11354530; body size 24 bytes.
#line 1 "ENTRY_11354530"
int FUN_11354530(int a1) {

    int v1 = (int)(a1 >> 6); // (int)&FUN_11354536
    return (int)(a1 - 8 * v1 + (v1 & 1) & 15 | a1 & -256);
}

// Reference entry 11357170; body size 26 bytes.
#line 1 "ENTRY_11357170"
int FUN_11357170(int a1) {

    if (a1 != 0) {
        if (*(int *)(a1 + 12) != (int)(&FUN_11308210)) {
            return (int)(0);
        }
    }
    return (int)(1);
}

// Reference entry 11357190; body size 21 bytes.
#line 1 "ENTRY_11357190"
int FUN_11357190(unsigned char a1) {

    return (int)((*(char *)((int)a1 | (int)&DAT_119fb400) & 70) != 0);
}

// Reference entry 113577a0; body size 16 bytes.
#line 1 "ENTRY_113577a0"
int FUN_113577a0(int a1) {

    return (int)(*(int *)a1 == (int)(&DAT_119fbfb0));
}

// Reference entry 113577c0; body size 20 bytes.
#line 1 "ENTRY_113577c0"
int FUN_113577c0(int a1) {

    if (a1 != 6) {
        return (int)(*(int *)(4 * a1 + (int)&PTR_s_delete_119f7d80));
    }
    return (int)(0);
}

// Reference entry 11357870; body size 18 bytes.
#line 1 "ENTRY_11357870"
int FUN_11357870(int a1) {

    int v1 = (int)(*(int *)(a1 + 4)); // (int)&FUN_11357874
    int v2 = (int)(v1 - 72); // (int)&FUN_1135787c
    return (int)(v2 < 0 == (71 - v1 & v1) < 0 == (v2 != 0) ? v1 : 72);
}

// Reference entry 11357ba0; body size 11 bytes.
#line 1 "ENTRY_11357ba0"
int FUN_11357ba0(int result) {

    if (result != 0) {
int *v1 = (int *)((int)((int *)result)); // (int)&FUN_11357ba8
        *v1 = (int)(*v1 + 1);
    }
    return (int)(result);
}

// Reference entry 11357bb0; body size 26 bytes.
#line 1 "ENTRY_11357bb0"
int FUN_11357bb0(int a1) {

    if (a1 == 0) {
        return (int)(0);
    }
int *v1 = (int *)((int)((int *)a1)); // (int)&FUN_11357bb8
    int v2 = (int)(*v1 - 1); // (int)&FUN_11357bb8
    *v1 = (int)(v2);
    int result = (int)(a1); // (int)&FUN_11357bbb
    if (v2 == 0) {
        result = (int)(FUN_113433c0(*(int *)(a1 + 12), a1), 0);
    }
    return (int)(result);
}

// Reference entry 113592e0; body size 17 bytes.
#line 1 "ENTRY_113592e0"
int FUN_113592e0(int a1) {

    int result = (int)(*(int *)(a1 + 108)); // (int)&FUN_113592e4
    *(char *)((result != 0 ? result : a1) + 21) = 1;
    return (int)(result);
}

// Reference entry 11359720; body size 17 bytes.
#line 1 "ENTRY_11359720"
int FUN_11359720(int a1) {

    int result = (int)(*(int *)(a1 + 108)); // (int)&FUN_11359724
    *(char *)((result != 0 ? result : a1) + 20) = 1;
    return (int)(result);
}

// Reference entry 11359740; body size 18 bytes.
#line 1 "ENTRY_11359740"
int FUN_11359740(void) {

    int v1; // (int)((int(*)(void))&FUN_11359740<>)
    return (int)(*(char *)&DAT_12121e84 != 0 ? v1 : 0);
}

// Reference entry 11359760; body size 14 bytes.
#line 1 "ENTRY_11359760"
int FUN_11359760(void) {

    return (int)(*(int *)&DAT_12121ec4);
}

// Reference entry 1135a1d0; body size 13 bytes.
#line 1 "ENTRY_1135a1d0"
int FUN_1135a1d0(int a1) {

    return (int)(*(int *)(a1 + 32));
}

// Reference entry 1135a1e0; body size 15 bytes.
#line 1 "ENTRY_1135a1e0"
int FUN_1135a1e0(int a1) {

    return (int)(*(int *)(*(int *)a1 + 36));
}

// Reference entry 1135a330; body size 13 bytes.
#line 1 "ENTRY_1135a330"
int FUN_1135a330(int a1) {

    return (int)(*(int *)(a1 + 28));
}

// Reference entry 1135a340; body size 15 bytes.
#line 1 "ENTRY_1135a340"
int FUN_1135a340(int a1) {

    return (int)(*(int *)(*(int *)a1 + 48));
}

// Reference entry 1135a390; body size 25 bytes.
#line 1 "ENTRY_1135a390"
int FUN_1135a390(int a1) {

    int v1 = (int)(*(int *)a1); // (int)&FUN_1135a394
    if (v1 != 0) {
        return (int)(*(int *)(v1 + 40));
    }
    return (int)(12);
}

// Reference entry 1135a3b0; body size 20 bytes.
#line 1 "ENTRY_1135a3b0"
int FUN_1135a3b0(int result) {

    int v1 = (int)(*(int *)result); // (int)&FUN_1135a3b4
    if (v1 == 0) {
        return (int)(result);
    }
    return (int)(*(int *)(v1 + 40));
}

// Reference entry 1135a3d0; body size 15 bytes.
#line 1 "ENTRY_1135a3d0"
int FUN_1135a3d0(int a1) {

    return (int)(*(int *)(*(int *)a1 + 24));
}

// Reference entry 1135a3f0; body size 24 bytes.
#line 1 "ENTRY_1135a3f0"
int FUN_1135a3f0(int a1) {

    return (int)(*(int *)(a1 + 36));
}

// Reference entry 1135a410; body size 25 bytes.
#line 1 "ENTRY_1135a410"
int FUN_1135a410(int a1) {

    return (int)(*(int *)(a1 + 68) == 0 ? 0 : a1);
}

// Reference entry 1135a570; body size 15 bytes.
#line 1 "ENTRY_1135a570"
int FUN_1135a570(int a1) {

    return (int)(*(int *)(*(int *)a1 + 28));
}

// Reference entry 1135a590; body size 21 bytes.
#line 1 "ENTRY_1135a590"
int FUN_1135a590(int a1) {

    return (int)(*(int *)(a1 + 24));
}

// Reference entry 1135a6d0; body size 25 bytes.
#line 1 "ENTRY_1135a6d0"
int FUN_1135a6d0(int a1) {

    int v1 = (int)(*(int *)(*(int *)a1 + 44)); // (int)&FUN_1135a6d6
    return (int)(v1 == 0 ? 0x1000 : v1);
}

// Reference entry 1135a6f0; body size 15 bytes.
#line 1 "ENTRY_1135a6f0"
int FUN_1135a6f0(int a1) {

    return (int)(*(int *)(*(int *)a1 + 60));
}

// Reference entry 1135a710; body size 15 bytes.
#line 1 "ENTRY_1135a710"
int FUN_1135a710(int a1) {

    return (int)(*(int *)(*(int *)a1 + 56));
}

// Reference entry 1135a730; body size 15 bytes.
#line 1 "ENTRY_1135a730"
int FUN_1135a730(int a1) {

    return (int)(*(int *)(*(int *)a1 + 52));
}

// Reference entry 1135a750; body size 15 bytes.
#line 1 "ENTRY_1135a750"
int FUN_1135a750(int a1) {

    return (int)(*(int *)(*(int *)a1 + 64));
}

// Reference entry 1135a770; body size 13 bytes.
#line 1 "ENTRY_1135a770"
int FUN_1135a770(int a1) {

    return (int)(*(int *)(a1 + 60));
}

// Reference entry 1135a7b0; body size 24 bytes.
#line 1 "ENTRY_1135a7b0"
int FUN_1135a7b0(int a1, int a2, int a3) {

    return (int)(*(int *)(*(int *)a1 + 16));
}

// Reference entry 1135a800; body size 15 bytes.
#line 1 "ENTRY_1135a800"
int FUN_1135a800(int a1) {

    return (int)(*(int *)(*(int *)a1 + 32));
}

// Reference entry 1135b630; body size 30 bytes.
#line 1 "ENTRY_1135b630"
int FUN_1135b630(int a1, int a2) {

    if (a2 == 0 || *(char *)(a1 + 15) == 0) {
        return (int)(*(int *)(a1 + 168));
    }
    return (int)((int)&DAT_119f77dc);
}

// Reference entry 1135b6e0; body size 11 bytes.
#line 1 "ENTRY_1135b6e0"
int FUN_1135b6e0(int a1) {

    return (int)(*(int *)(a1 + 220));
}

// Reference entry 1135b7c0; body size 11 bytes.
#line 1 "ENTRY_1135b7c0"
int FUN_1135b7c0(int a1) {

    return (int)(*(int *)(a1 + 172));
}

// Reference entry 1135b7d0; body size 22 bytes.
#line 1 "ENTRY_1135b7d0"
int FUN_1135b7d0(int a1) {

    int v1 = (int)(*(int *)(a1 + 232)); // (int)&FUN_1135b7d4
    if (v1 == 0) {
        return (int)(*(int *)(a1 + 64));
    }
    return (int)(*(int *)(v1 + 8));
}

// Reference entry 1135b890; body size 26 bytes.
#line 1 "ENTRY_1135b890"
int FUN_1135b890(int a1, int result) {
int *v1 = (int *)((int)((int *)(a1 + 156)));
    if (result < 1) {
        return (int)(*v1);
    }
    *v1 = (int)(result);
    return (int)(result);
}

// Reference entry 1135c590; body size 14 bytes.
#line 1 "ENTRY_1135c590"
int FUN_1135c590(int a1, int result) {

    *(int*)result = (int)((int)(*(int *)(a1 + 24)));
    return (int)(result);
}

// Reference entry 1135c610; body size 15 bytes.
#line 1 "ENTRY_1135c610"
int FUN_1135c610(int a1) {
short *v1 = (short *)((short)((short *)(a1 + 30))); // (int)&FUN_1135c614
    *v1 = (short)(*v1 + 1);
    int result = (int)(*(int *)(a1 + 12)); // (int)&FUN_1135c618
int *v2 = (int *)((int)((int *)(result + 12))); // (int)&FUN_1135c61b
    *v2 = (int)(*v2 + 1);
    return (int)(result);
}

// Reference entry 1135c630; body size 27 bytes.
#line 1 "ENTRY_1135c630"
int FUN_1135c630(int a1, int a2, short a3) {

    *(short*)(a1 + 28) = (short)(a3);
    return (int)(FUN_1135e7f0(a1, a2));
}

// Reference entry 1135d4f0; body size 11 bytes.
#line 1 "ENTRY_1135d4f0"
int FUN_1135d4f0(int a1) {

    return (int)(*(int *)(a1 + 224));
}

// Reference entry 1135d500; body size 12 bytes.
#line 1 "ENTRY_1135d500"
int FUN_1135d500(int result, int a2) {

    *(int*)(result + 24) = (int)(a2);
    return (int)(result);
}

// Reference entry 1135d510; body size 18 bytes.
#line 1 "ENTRY_1135d510"
int FUN_1135d510(int result) {

    return (int)(result);
}

// Reference entry 1135d5f0; body size 28 bytes.
#line 1 "ENTRY_1135d5f0"
int FUN_1135d5f0(int a1) {

    int v1 = (int)(*(int *)(a1 + 232)); // (int)&FUN_1135d5f4
    if (v1 == 0) {
        return (int)(0);
    }
int *v2 = (int *)((int)((int *)(v1 + 12))); // (int)&FUN_1135d5fe
    *v2 = (int)(0);
    return (int)(*v2);
}

// Reference entry 1135e0a0; body size 13 bytes.
#line 1 "ENTRY_1135e0a0"
int FUN_1135e0a0(int a1) {

    return (int)((int)*(short *)(2 * a1 + (int)&DAT_119fac60));
}

// Reference entry 1135e270; body size 15 bytes.
#line 1 "ENTRY_1135e270"
int FUN_1135e270(int a1) {

    return (int)(FUN_1135ecd0(a1, 0));
}

// Reference entry 1135e5a0; body size 33 bytes.
#line 1 "ENTRY_1135e5a0"
int FUN_1135e5a0(int a1, int a2) {

    int result = (int)(*(int *)(a2 + 4)); // (int)&FUN_1135e5a4
    if (*(int *)result == 0) {
        return (int)(FUN_1132ad60(a2));
    }
int *v1 = (int *)((int)((int *)(a1 + 12))); // (int)&FUN_1135e5b9
    *v1 = (int)(*v1 + 1);
short *v2 = (short *)((short)((short *)(result + 30))); // (int)&FUN_1135e5bc
    *v2 = (short)(*v2 + 1);
    return (int)(result);
}

// Reference entry 1135e9e0; body size 17 bytes.
#line 1 "ENTRY_1135e9e0"
int FUN_1135e9e0(int result) {

    return (int)(result);
}

// Reference entry 1135ea00; body size 15 bytes.
#line 1 "ENTRY_1135ea00"
int FUN_1135ea00(int a1) {
short *v1 = (short *)((short)((short *)(a1 + 30))); // (int)&FUN_1135ea04
    *v1 = (short)(*v1 + 1);
    int result = (int)(*(int *)(a1 + 12)); // (int)&FUN_1135ea08
int *v2 = (int *)((int)((int *)(result + 12))); // (int)&FUN_1135ea0b
    *v2 = (int)(*v2 + 1);
    return (int)(result);
}

// Reference entry 11363ca0; body size 13 bytes.
#line 1 "ENTRY_11363ca0"
int FUN_11363ca0(int result, int a2) {

    *(int*)result = (int)((int)(llvm_bswap_i32(a2), 0), 0);
    return (int)(result);
}

// Reference entry 1136a9f0; body size 24 bytes.
#line 1 "ENTRY_1136a9f0"
int FUN_1136a9f0(int a1, int a2) {

    int result = (int)(0); // (int)&FUN_1136a9f6
    if (a2 != 0) {
        result = (int)(FUN_1130ba70(a1, a2, 1), 0);
    }
    return (int)(result);
}

// Reference entry 1136b280; body size 14 bytes.
#line 1 "ENTRY_1136b280"
int FUN_1136b280(int a1) {

    *(short*)(a1 + 20) = (short)(0);
    return (int)(2);
}

// Reference entry 1136b2b0; body size 142 bytes.
#line 1 "ENTRY_1136b2b0"
int FUN_1136b2b0(int a1, int a2) {

    if ((*(int *)(a2 + 4) & 512) == 0) {
        return (int)(FUN_11345ed0(a1));
    }
    return (int)(FUN_11345ed0((int)&s_all_VALUES_must_have_the_same_nu_11a01abc));
}

// Reference entry 1136b660; body size 16 bytes.
#line 1 "ENTRY_1136b660"
int FUN_1136b660(int result) {

    *(int*)(result + 20) = (int)(-1);
    *(char*)(result + 24) = (char)(1);
    return (int)(result);
}

// Reference entry 1136c950; body size 16 bytes.
#line 1 "ENTRY_1136c950"
int FUN_1136c950(int a1, int result) {
int *v1 = (int *)((int)((int *)(4 * a1 + (int)&DAT_122f6d28))); // (int)&FUN_1136c958
    *v1 = (int)(*v1 - result);
    return (int)(result);
}

// Reference entry 1136c970; body size 25 bytes.
#line 1 "ENTRY_1136c970"
int FUN_1136c970(int result, uint a2) {
int *v1 = (int *)((int)((int *)(4 * result + (int)&DAT_122f6d50))); // (int)&FUN_1136c978
    if (*v1 < (int)((a2))) {
        *v1 = (int)(a2);
    }
    return (int)(result);
}

// Reference entry 1136c9c0; body size 14 bytes.
#line 1 "ENTRY_1136c9c0"
int FUN_1136c9c0(int a1) {

    return (int)(*(int *)(4 * a1 + (int)&DAT_122f6d28));
}

// Reference entry 1136d020; body size 28 bytes.
#line 1 "ENTRY_1136d020"
int FUN_1136d020(int result) {
char *v1 = (char *)((char)((char *)result));
    char v2 = (char)(*v1); // (int)&FUN_1136d024
char *v3 = (char *)((char)(v1)); // (int)&FUN_1136d029
    int result2 = (int)(result); // (int)&FUN_1136d029
    if (v2 != 115) {
        if (v2 != 111) {
            return (int)(result);
        }
        result2 = (int)(*(int *)(result + 12));
        v3 = (char *)((char *)result2);
        if (*v3 != (char)((115))) {
            return (int)(result2);
        }
    }
    *v3 = (char)(59);
    return (int)(result2);
}

// Reference entry 1136d3a0; body size 14 bytes.
#line 1 "ENTRY_1136d3a0"
int FUN_1136d3a0(int a1) {

    return (int)(*(char *)(a1 + 80) == 2);
}

// Reference entry 11371f60; body size 34 bytes.
#line 1 "ENTRY_11371f60"
int FUN_11371f60(int result) {
short *v1 = (short *)((short)((short *)(result + 8))); // (int)&FUN_11371f69
    if ((*v1 & 0x2400) != 0) {
        return (int)(result);
    }
    *v1 = (short)(1);
    return (int)(result);
}

// Reference entry 11372730; body size 29 bytes.
#line 1 "ENTRY_11372730"
int FUN_11372730(int a1, int a2) {

    if ((*(char *)(a1 + 8) & 2) != 0) {
        if ((int)*(char *)(a1 + 10) != (char)(a2)) {
            return (int)(1);
        }
    }
    return (int)(0);
}

// Reference entry 11372dc0; body size 12 bytes.
#line 1 "ENTRY_11372dc0"
int FUN_11372dc0(int result) {
int *v1 = (int *)((int)((int *)(result + 152))); // (int)&FUN_11372dc4
    *v1 = (int)(*v1 + 32);
    return (int)(result);
}

// Reference entry 11372f40; body size 24 bytes.
#line 1 "ENTRY_11372f40"
int FUN_11372f40(int a1) {

    if (*(char *)*(int *)(a1 + 40) == 0) {
        return (int)(0);
    }
    return (int)(FUN_1131e2b0(a1));
}

// Reference entry 1137a286; body size 40 bytes.
#line 1 "ENTRY_1137a286"
int FUN_1137a286(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_1137a286<>)
    int v2 = (int)(v1);
    *(char*)v2 = (char)((int)(2 * (char)v2));
char *v3 = (char *)((char)((char *)(v1 - 0xa8a910))); // (int)&FUN_1137a288
    *v3 = (char)(*v3 + (char)v1);
    int v4; // (int)((int(*)(int a1))&FUN_1137a286<>)
    int v5 = (int)(v4);
    *(char*)v5 = (char)((int)(*(char *)&v4 + (char)v5));
char *v6 = (char *)((char)((char *)(v1 + 1))); // (int)&FUN_1137a292
    *v6 = (char)(*v6 - 48);
    int result; // (int)((int(*)(int a1))&FUN_1137a286<>)
    if (v1 == 0) {
        result = (int)(v4);
    } else {
        int v7 = (int)(FUN_113433c0(v1, v1), 0); // (int)&FUN_1137a2a0
        v4 = (int)(v7);
        result = (int)(v7);
    }
    return (int)(result);
}

// Reference entry 1137dbd0; body size 16 bytes.
#line 1 "ENTRY_1137dbd0"
int FUN_1137dbd0(int a1) {

    return (int)(*(int *)(a1 + 216) != 0);
}

// Reference entry 1137e010; body size 24 bytes.
#line 1 "ENTRY_1137e010"
int FUN_1137e010(int a1, int a2) {
int *v1 = (int *)((int)((int *)(a1 + 216))); // (int)&FUN_1137e018
    int result = (int)(*v1); // (int)&FUN_1137e018
    *(int*)(a2 + 24) = (int)(result);
    *v1 = (int)(a2);
    return (int)(result);
}

// Reference entry 1137e060; body size 12 bytes.
#line 1 "ENTRY_1137e060"
int FUN_1137e060(int a1) {
int *v1 = (int *)((int)((int *)(a1 + 56))); // (int)&FUN_1137e064
    int result = (int)(*v1 - 1); // (int)&FUN_1137e067
    *v1 = (int)(result);
    return (int)(result);
}

// Reference entry 1137ec80; body size 28 bytes.
#line 1 "ENTRY_1137ec80"
int FUN_1137ec80(int a1, int result, short a3) {

    *(short*)(a1 + 8) = (short)(a3);
    *(int*)(a1 + 32) = (int)(result);
    *(int*)(a1 + 24) = (int)(0);
    return (int)(result);
}

// Reference entry 1137f890; body size 12 bytes.
#line 1 "ENTRY_1137f890"
int FUN_1137f890(unsigned char a1) {

    return (int)((int)*(char *)((int)a1 + (int)&DAT_119f7640));
}

// Reference entry 1137f8e0; body size 11 bytes.
#line 1 "ENTRY_1137f8e0"
int FUN_1137f8e0(int a1) {

    return (int)(a1 & -256 | (int)*(char *)(a1 + 148));
}

// Reference entry 1137f950; body size 23 bytes.
#line 1 "ENTRY_1137f950"
int FUN_1137f950(int a1, int a2, int a3) {

    return (int)(FUN_1137f970(a1, a2, a3, 0));
}

// Reference entry 11380580; body size 12 bytes.
#line 1 "ENTRY_11380580"
int FUN_11380580(int result) {

    *(int*)(result + 40) = (int)(0);
    return (int)(result);
}

// Reference entry 113805d0; body size 12 bytes.
#line 1 "ENTRY_113805d0"
int FUN_113805d0(int result) {
int *v1 = (int *)((int)((int *)(result + 152))); // (int)&FUN_113805d4
    *v1 = (int)(*v1 & -65);
    return (int)(result);
}

// Reference entry 11380640; body size 12 bytes.
#line 1 "ENTRY_11380640"
int FUN_11380640(int result) {
int *v1 = (int *)((int)((int *)(result + 152))); // (int)&FUN_11380644
    *v1 = (int)(*v1 + 64);
    return (int)(result);
}

// Reference entry 11380a30; body size 25 bytes.
#line 1 "ENTRY_11380a30"
int FUN_11380a30(uint a1) {

    if (a1 < 128) {
        return (int)((int)*(char *)(a1 + (int)&DAT_119f7640));
    }
    return (int)((a1 - 12) / 2);
}

// Reference entry 11380a50; body size 15 bytes.
#line 1 "ENTRY_11380a50"
int FUN_11380a50(int result, int a2) {
int *v1 = (int *)((int)((int *)(result + 104))); // (int)&FUN_11380a58
    *v1 = (int)(*v1 + a2);
    *(int*)(result + 100) = (int)(a2);
    return (int)(result);
}

// Reference entry 11381bb0; body size 24 bytes.
#line 1 "ENTRY_11381bb0"
int FUN_11381bb0(int a1, int result) {
int *v1 = (int *)((int)((int *)(a1 + 156))); // (int)&FUN_11381bb8
    *v1 = (int)(*v1 + 1 << (result & 31));
    return (int)(result);
}

// Reference entry 11382850; body size 17 bytes.
#line 1 "ENTRY_11382850"
int FUN_11382850(int a1) {

    FUN_1130a590(a1, 64);
    return (int)(0);
}

// Reference entry 11383470; body size 17 bytes.
#line 1 "ENTRY_11383470"
int FUN_11383470(int a1) {

    FUN_1130a590(a1, 68);
    return (int)(0);
}

// Reference entry 11383c80; body size 22 bytes.
#line 1 "ENTRY_11383c80"
int FUN_11383c80(int a1) {

    if (a1 == 0) {
        return (int)(0);
    }
int *v1 = (int *)((int)((int *)(a1 + 12))); // (int)&FUN_11383c88
    *v1 = (int)(0);
    return (int)(*v1);
}

// Reference entry 11384140; body size 22 bytes.
#line 1 "ENTRY_11384140"
int FUN_11384140(int a1) {

    if (a1 == 0 || *(short *)(a1 + 40) < 0) {
        return (int)(0);
    }
    return (int)(*(int *)(a1 + 72));
}

// Reference entry 11384dc0; body size 23 bytes.
#line 1 "ENTRY_11384dc0"
int FUN_11384dc0(int a1) {

    if (a1 != 0) {
        if (*(char *)(a1 + 43) == 2) {
            return (int)(1);
        }
    }
    return (int)(0);
}

// Reference entry 11384de0; body size 23 bytes.
#line 1 "ENTRY_11384de0"
int FUN_11384de0(int a1, int a2, int a3) {

    int result; // (int)((int(*)(int a1, int a2, int a3))&FUN_11384de0<>)
    if (a1 != 0) {
        *(int*)(a1 + 16) = (int)(a2);
        *(int*)(a1 + 20) = (int)(a3);
        result = (int)(a2);
    }
    return (int)(result);
}

// Reference entry 11385120; body size 20 bytes.
#line 1 "ENTRY_11385120"
int FUN_11385120(int result) {

    return (int)(result);
}

// Reference entry 113855b0; body size 10 bytes.
#line 1 "ENTRY_113855b0"
int FUN_113855b0(int a1) {
int *v1 = (int *)((int)((int *)(a1 + 16))); // (int)&FUN_113855b4
    *v1 = (int)(*v1 + 1);
    return (int)(0);
}

// Reference entry 11389db0; body size 14 bytes.
#line 1 "ENTRY_11389db0"
int FUN_11389db0(int a1) {

    return (int)(*(int *)(a1 + 48) / 8 & 1);
}

// Reference entry 1138a120; body size 11 bytes.
#line 1 "ENTRY_1138a120"
int FUN_1138a120(int a1) {

    return (int)(*(int *)(a1 + 48) & 1);
}

// Reference entry 1139c2a0; body size 21 bytes.
#line 1 "ENTRY_1139c2a0"
int FUN_1139c2a0(int a1) {

    int result = (int)(0); // (int)&FUN_1139c2a6
    if (a1 != 0) {
        result = (int)(FUN_113433c0(*(int *)(a1 + 56), a1), 0);
    }
    return (int)(result);
}

// Reference entry 1139d410; body size 28 bytes.
#line 1 "ENTRY_1139d410"
int FUN_1139d410(int a1) {

    int v1 = (int)(FUN_113180e0(*(int *)(a1 + 24) + 8, *(int *)(a1 + 4), 0), 0); // (int)&FUN_1139d420
    return (int)(*(int *)(v1 + 8));
}

// Reference entry 1139ecc0; body size 31 bytes.
#line 1 "ENTRY_1139ecc0"
int FUN_1139ecc0(uint a1, uint a2) {

    if (a2 < 0x1a641) {
        if (a1 < (int)&FUN_1072fe00<> || a2 != 0x1a640) {
            return (int)(1);
        }
    }
    return (int)(0);
}

// Reference entry 113a0b60; body size 21 bytes.
#line 1 "ENTRY_113a0b60"
int FUN_113a0b60(int a1) {

    return (int)(FUN_113a34c0(*(int *)a1, (int)&FUN_113a0f60, a1));
}

// Reference entry 113a0d10; body size 24 bytes.
#line 1 "ENTRY_113a0d10"
int FUN_113a0d10(int a1) {

    int v1 = (int)(*(int *)a1); // (int)&FUN_113a0d14
    *(int*)(a1 + 24) = (int)(1);
    uint result = (uint)(*(int *)(a1 + 16)); // (int)&FUN_113a0d1d
int *v2 = (int *)((int)((int *)(v1 + 64))); // (int)&FUN_113a0d21
    uint v3 = (uint)(*v2); // (int)&FUN_113a0d21
    *v2 = (int)(v3 - result);
int *v4 = (int *)((int)((int *)(v1 + 68))); // (int)&FUN_113a0d24
    *v4 = (int)(result / 0x80000000 + (int)(v3 < result) + *v4);
    return (int)(result);
}

// Reference entry 113a5eb0; body size 13 bytes.
#line 1 "ENTRY_113a5eb0"
int FUN_113a5eb0(int a1) {

    return (int)(*(int *)*(int *)(a1 + 32) + 96);
}

// Reference entry 113a60b0; body size 11 bytes.
#line 1 "ENTRY_113a60b0"
int FUN_113a60b0(int a1) {

    return (int)((uint)(a1 + 33) / 0x1000);
}

// Reference entry 113a6110; body size 14 bytes.
#line 1 "ENTRY_113a6110"
int FUN_113a6110(int a1) {

    return (int)(383 * a1 & 0x1fff);
}

// Reference entry 113a63b0; body size 10 bytes.
#line 1 "ENTRY_113a63b0"
int FUN_113a63b0(int a1) {

    return (int)(*(int *)*(int *)(a1 + 32));
}

// Reference entry 113a7860; body size 11 bytes.
#line 1 "ENTRY_113a7860"
int FUN_113a7860(int a1) {

    return (int)(a1 + 1 & 0x1fff);
}

// Reference entry 113a7870; body size 25 bytes.
#line 1 "ENTRY_113a7870"
int FUN_113a7870(int a1) {

    int v1 = (int)((int)*(short *)(a1 + 66)); // (int)&FUN_113a7874
    return (int)(0x10000 * v1 & 0x10000 | v1 & 0xfe00);
}

// Reference entry 113a7cb0; body size 25 bytes.
#line 1 "ENTRY_113a7cb0"
int FUN_113a7cb0(int result) {

    if (*(char *)(result + 43) == 2) {
        return (int)(result);
    }
    return (int)(*(int *)(*(int *)*(int *)(result + 4) + 60));
}

// Reference entry 113aec60; body size 43 bytes.
#line 1 "ENTRY_113aec60"
int FUN_113aec60(int a1) {

    if (*(int *)&DAT_122f6eac == 2) {
        int result; // (int)((int(*)(int a1))&FUN_113aec60<>)
        return (int)(result);
    }
    int result2 = (int)(thunk_FUN_1139b8e0(), 0); // (int)&FUN_113aec69
    if (result2 != 0) {
        return (int)(result2);
    }
    return (int)(FUN_113b07a0(a1, result2));
}

// Reference entry 113b1760; body size 20 bytes.
#line 1 "ENTRY_113b1760"
int FUN_113b1760(int a1) {

    int v1 = (int)(*(int *)(*(int *)(a1 + 72) + 20)); // (int)&FUN_113b1767
    if (v1 == 0) {
        return (int)(0);
    }
    return (int)(*(int *)v1);
}

// Reference entry 113b57a0; body size 29 bytes.
#line 1 "ENTRY_113b57a0"
int FUN_113b57a0(ushort a1, ushort a2) {

    short v1 = (short)(*(short *)(2 * (int)a1 + (int)&DAT_119fa4f0)); // (int)&FUN_113b57aa
    int v2 = (int)((int)v1 + (int)a2); // (int)&FUN_113b57b2
    return (int)(v2 & -0x10000 | (int)*(short *)(2 * v2 + (int)&DAT_119f8098));
}

// Reference entry 113beb60; body size 24 bytes.
#line 1 "ENTRY_113beb60"
int FUN_113beb60(int a1) {

    int result = (int)(*(int *)(a1 + 0x1840)); // (int)&FUN_113beb64
    if (result != 0) {
        return (int)(result);
    }
    return (int)(thunk_FUN_113bed30(a1));
}

// Reference entry 113cd27d; body size 12 bytes.
#line 1 "ENTRY_113cd27d"
int FUN_113cd27d(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 113d2b60; body size 14 bytes.
#line 1 "ENTRY_113d2b60"
int FUN_113d2b60(uint a1, uint a2) {

    return (int)(a1 < a2 ? a1 : a2);
}

// Reference entry 113d3480; body size 18 bytes.
#line 1 "ENTRY_113d3480"
int FUN_113d3480(int a1) {

    int result = (int)(*(int *)a1); // (int)&FUN_113d3484
    if (result != 0) {
        return (int)(*(int *)(result + 4) & 31);
    }
    return (int)(result);
}

// Reference entry 113d34c0; body size 17 bytes.
#line 1 "ENTRY_113d34c0"
int FUN_113d34c0(int a1) {

    if (*(int *)a1 != 0) {
        return (int)(*(int *)(a1 + 8));
    }
    return (int)(-1);
}

// Reference entry 113d34e0; body size 16 bytes.
#line 1 "ENTRY_113d34e0"
int FUN_113d34e0(int result) {

    if (result != 0) {
        return (int)(*(int *)(result + 4) & 31);
    }
    return (int)(result);
}

// Reference entry 113d3500; body size 19 bytes.
#line 1 "ENTRY_113d3500"
int FUN_113d3500(int result) {

    if (result != 0) {
        return (int)(*(int *)(result + 4) / 8 & 28);
    }
    return (int)(result);
}

// Reference entry 113d3520; body size 21 bytes.
#line 1 "ENTRY_113d3520"
int FUN_113d3520(int result) {

    if (result != 0) {
        return (int)(*(int *)(result + 4) / 4 & 960);
    }
    return (int)(result);
}

// Reference entry 113d3540; body size 19 bytes.
#line 1 "ENTRY_113d3540"
int FUN_113d3540(int result) {

    if (result != 0) {
        return (int)(*(int *)(result + 4) / 0x1000 & 15);
    }
    return (int)(result);
}

// Reference entry 113d40f0; body size 26 bytes.
#line 1 "ENTRY_113d40f0"
int FUN_113d40f0(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_113d40f0<>)
    return (int)(thunk_FUN_1140b1f0(&v1) == 1 ? a1 : 0);
}

// Reference entry 113d43d0; body size 26 bytes.
#line 1 "ENTRY_113d43d0"
int FUN_113d43d0(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_113d43d0<>)
    return (int)(thunk_FUN_1140b1f0(&v1) == 1 ? a1 : 0);
}

// Reference entry 113d49a0; body size 26 bytes.
#line 1 "ENTRY_113d49a0"
int FUN_113d49a0(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_113d49a0<>)
    return (int)(thunk_FUN_1140b1f0(&v1) == 1 ? a1 : 0);
}

// Reference entry 113d4bc0; body size 26 bytes.
#line 1 "ENTRY_113d4bc0"
int FUN_113d4bc0(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_113d4bc0<>)
    return (int)(thunk_FUN_1140b1f0(&v1) == 1 ? a1 : 0);
}

// Reference entry 113d4d50; body size 26 bytes.
#line 1 "ENTRY_113d4d50"
int FUN_113d4d50(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_113d4d50<>)
    return (int)(thunk_FUN_1140b1f0(&v1) == 1 ? a1 : 0);
}

// Reference entry 113d51e0; body size 26 bytes.
#line 1 "ENTRY_113d51e0"
int FUN_113d51e0(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_113d51e0<>)
    return (int)(thunk_FUN_1140b1f0(&v1) == 1 ? a1 : 0);
}

// Reference entry 113d5550; body size 26 bytes.
#line 1 "ENTRY_113d5550"
int FUN_113d5550(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_113d5550<>)
    return (int)(thunk_FUN_1140b1f0(&v1) == 1 ? a1 : 0);
}

// Reference entry 113d6780; body size 44 bytes.
#line 1 "ENTRY_113d6780"
int FUN_113d6780(int a1) {

    int v1 = (int)((int)&DAT_11bfc458); // (int)&FUN_113d6794
    int v2 = (int)(0); // (int)&FUN_113d6794
    int result = (int)(v1); // (int)&FUN_113d6799
    while (*(int *)(v1 + 12) != (a1 != 16 ? a1 : 17)) {
        v2 += 16;
        v1 += 16;
        result = (int)(0);
        if (v2 >= 528) {
            break;
        }
        result = (int)(v1);
    }
    return (int)(result);
}

// Reference entry 113d6f30; body size 26 bytes.
#line 1 "ENTRY_113d6f30"
int FUN_113d6f30(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_113d6f30<>)
    return (int)(thunk_FUN_1140b1f0(&v1) == 1 ? a1 : 0);
}

// Reference entry 113d8e60; body size 22 bytes.
#line 1 "ENTRY_113d8e60"
int FUN_113d8e60(void) {

    int result; // (int)((int(*)(void))&FUN_113d8e60<>)
    if (*(char *)(result + 748) != 0) {
        return (int)(result + 424);
    }
    return (int)(result);
}

// Reference entry 113d8e80; body size 22 bytes.
#line 1 "ENTRY_113d8e80"
int FUN_113d8e80(int a1, int a2) {

    thunk_FUN_11409600(a2);
    return (int)(thunk_FUN_114236b0(a1));
}

// Reference entry 113d9120; body size 29 bytes.
#line 1 "ENTRY_113d9120"
int FUN_113d9120(int a1) {

    int v1 = (int)(0); // (int)&FUN_113d9124
    int v2; // (int)((int(*)(int a1))&FUN_113d9120<>)
    int result = (int)(v2); // (int)&FUN_113d9128
    while (*(int *)v2 != (int)(a1)) {
        v1++;
        v2 += 16;
        result = (int)(0);
        if (v1 >= 7) {
            break;
        }
        result = (int)(v2);
    }
    return (int)(result);
}

// Reference entry 113da010; body size 21 bytes.
#line 1 "ENTRY_113da010"
int FUN_113da010(int a1) {

    int result = (int)(*(int *)a1); // (int)&FUN_113da014
    if (result != 0) {
        return (int)(*(int *)(result + 4) / 0x1000 & 15);
    }
    return (int)(result);
}

// Reference entry 113da030; body size 16 bytes.
#line 1 "ENTRY_113da030"
int FUN_113da030(int result) {

    if (result != 0) {
        return (int)(*(int *)(result + 4) & 31);
    }
    return (int)(result);
}

// Reference entry 113da050; body size 19 bytes.
#line 1 "ENTRY_113da050"
int FUN_113da050(int result) {

    if (result != 0) {
        return (int)(*(int *)(result + 4) / 8 & 28);
    }
    return (int)(result);
}

// Reference entry 113da070; body size 21 bytes.
#line 1 "ENTRY_113da070"
int FUN_113da070(int result) {

    if (result != 0) {
        return (int)(*(int *)(result + 4) / 4 & 960);
    }
    return (int)(result);
}

// Reference entry 113da090; body size 19 bytes.
#line 1 "ENTRY_113da090"
int FUN_113da090(int result) {

    if (result != 0) {
        return (int)(*(int *)(result + 4) / 0x1000 & 15);
    }
    return (int)(result);
}

// Reference entry 113da0d0; body size 10 bytes.
#line 1 "ENTRY_113da0d0"
int FUN_113da0d0(int a1) {

    return (int)(*(int *)a1);
}

// Reference entry 113da0e0; body size 10 bytes.
#line 1 "ENTRY_113da0e0"
int FUN_113da0e0(int a1) {

    return (int)(a1 | 0x2000000);
}

// Reference entry 113da180; body size 13 bytes.
#line 1 "ENTRY_113da180"
int FUN_113da180(int result, short a2) {

    *(short*)result = (short)((int)(a2));
    return (int)(result);
}

// Reference entry 113da190; body size 11 bytes.
#line 1 "ENTRY_113da190"
int FUN_113da190(int result, int a2) {

    *(int*)result = (int)((int)(a2));
    return (int)(result);
}

// Reference entry 113da1a0; body size 18 bytes.
#line 1 "ENTRY_113da1a0"
int FUN_113da1a0(int result, int a2, int a3) {

    *(int*)result = (int)((int)(a2));
    *(int*)(result + 4) = (int)(a3);
    return (int)(result);
}

// Reference entry 113db7e0; body size 22 bytes.
#line 1 "ENTRY_113db7e0"
int FUN_113db7e0(int a1, int a2) {

    return (int)(a1 == 1 == a2 == 1 ? 2 : a1);
}

// Reference entry 113dbe00; body size 13 bytes.
#line 1 "ENTRY_113dbe00"
int FUN_113dbe00(int a1) {

    return (int)(*(int *)(*(int *)a1 + 132));
}

// Reference entry 113dc790; body size 13 bytes.
#line 1 "ENTRY_113dc790"
int FUN_113dc790(int a1) {

    return (int)(*(int *)(*(int *)a1 + 128));
}

// Reference entry 113dc7e0; body size 11 bytes.
#line 1 "ENTRY_113dc7e0"
int FUN_113dc7e0(int a1) {

    return (int)(*(int *)(a1 + 300));
}

// Reference entry 113dcbb0; body size 12 bytes.
#line 1 "ENTRY_113dcbb0"
int FUN_113dcbb0(int result, int a2) {

    *(int*)(result + 4) = (int)(a2);
    return (int)(result);
}

// Reference entry 113dcee0; body size 16 bytes.
#line 1 "ENTRY_113dcee0"
int FUN_113dcee0(int a1) {

    return (int)(*(int *)(a1 + 244) != 0);
}

// Reference entry 113dcf60; body size 23 bytes.
#line 1 "ENTRY_113dcf60"
int FUN_113dcf60(int a1) {

    return (int)(8 * (int)(*(char *)(*(int *)a1 + 9) == 1) | 4);
}

// Reference entry 113dcfa0; body size 14 bytes.
#line 1 "ENTRY_113dcfa0"
int FUN_113dcfa0(int a1) {

    int v1 = (int)(*(int *)(a1 + 4)); // (int)&FUN_113dcfa6
    return (int)(v1 < 27 == (26 - v1 & v1) < 0);
}

// Reference entry 113df550; body size 49 bytes.
#line 1 "ENTRY_113df550"
int FUN_113df550(ushort a1) {

    if (a1 >= 2053) {
        if ((int)a1 < 2055) {
            return (int)(1);
        }
        return (int)(0);
    }
    switch (a1) {
        case 2052: {
        }
        case 1027: {
            return (int)(1);
        }
    }
    if (a1 == 1283) {
        return (int)(1);
    }
    return (int)(0);
}

// Reference entry 113df590; body size 70 bytes.
#line 1 "ENTRY_113df590"
int FUN_113df590(ushort a1) {

    int result = (int)(1); // (int)((int(*)(ushort a1))&FUN_113df590<>)
    switch (a1) {
        case 1537: {
            return (int)(result);
        }
        case 1281: {
            return (int)(result);
        }
        case 1025: {
            return (int)(result);
        }
        default: {
            if (a1 >= 2053) {
                if ((int)a1 < 2055) {
                    return (int)(1);
                }
                return (int)(0);
            }
            result = (int)(1);
            switch (a1) {
                case 2052: {
                    return (int)(result);
                }
                case 1027: {
                    return (int)(result);
                }
                default: {
                    if (a1 == 1283) {
                        return (int)(1);
                    }
                    result = (int)(0);
                    return (int)(result);
                }
            }
        }
    }
}

// Reference entry 113dff30; body size 17 bytes.
#line 1 "ENTRY_113dff30"
int FUN_113dff30(int a1) {

    return (int)(thunk_FUN_113e6480(a1, 1, 1));
}

// Reference entry 113e04a1; body size 14 bytes.
#line 1 "ENTRY_113e04a1"
int FUN_113e04a1(void) {

    int v1; // (int)((int(*)(void))&FUN_113e04a1<>)
char *v2 = (char *)((char)((char *)(v1 + 81))); // (int)&FUN_113e04a3
    *v2 = (char)(*v2 + (char)v1);
    return (int)(FUN_113e03b0());
}

// Reference entry 113e27c0; body size 18 bytes.
#line 1 "ENTRY_113e27c0"
int FUN_113e27c0(int a1) {

    int result = (int)(*(int *)a1); // (int)&FUN_113e27c4
    if (result != 0) {
        return (int)(*(int *)(result + 4) & 31);
    }
    return (int)(result);
}

// Reference entry 113e27e0; body size 21 bytes.
#line 1 "ENTRY_113e27e0"
int FUN_113e27e0(int a1) {

    int result = (int)(*(int *)a1); // (int)&FUN_113e27e4
    if (result != 0) {
        return (int)(*(int *)(result + 4) / 0x1000 & 15);
    }
    return (int)(result);
}

// Reference entry 113e2800; body size 26 bytes.
#line 1 "ENTRY_113e2800"
int FUN_113e2800(int a1) {

    uint v1 = (uint)(*(int *)&DAT_122fa560 ^ a1); // (int)&FUN_113e2806
    return (int)((-((v1 / 2)) | -v1) / 0x80000000);
}

// Reference entry 113e2830; body size 10 bytes.
#line 1 "ENTRY_113e2830"
int FUN_113e2830(int a1) {

    return (int)(*(int *)&DAT_122fa560 ^ a1);
}

// Reference entry 113e2ad0; body size 25 bytes.
#line 1 "ENTRY_113e2ad0"
int FUN_113e2ad0(int a1, int a2, int a3) {

    return (int)((*(int *)&DAT_122fa560 ^ -1 - a1) & a3 | a2 & a1);
}

// Reference entry 113e2ca0; body size 13 bytes.
#line 1 "ENTRY_113e2ca0"
int FUN_113e2ca0(int result, short a2) {

    *(short*)result = (short)((int)(a2));
    return (int)(result);
}

// Reference entry 113e2cb0; body size 11 bytes.
#line 1 "ENTRY_113e2cb0"
int FUN_113e2cb0(int result, int a2) {

    *(int*)result = (int)((int)(a2));
    return (int)(result);
}

// Reference entry 113e30e0; body size 14 bytes.
#line 1 "ENTRY_113e30e0"
int FUN_113e30e0(int a1) {

    return (int)((int)(*(char *)(a1 + 16) / 2 & 1));
}

// Reference entry 113e42b0; body size 21 bytes.
#line 1 "ENTRY_113e42b0"
int FUN_113e42b0(int a1) {

    return (int)(*(char *)(*(int *)a1 + 9) == 1 ? 2 : 0);
}

// Reference entry 113e4f50; body size 12 bytes.
#line 1 "ENTRY_113e4f50"
int FUN_113e4f50(int result, int a2) {

    *(int*)(result + 4) = (int)(a2);
    return (int)(result);
}

// Reference entry 113e4f60; body size 23 bytes.
#line 1 "ENTRY_113e4f60"
int FUN_113e4f60(int a1) {

    return (int)(8 * (int)(*(char *)(*(int *)a1 + 9) == 1) | 4);
}

// Reference entry 113e4f80; body size 23 bytes.
#line 1 "ENTRY_113e4f80"
int FUN_113e4f80(int a1) {

    return (int)(8 * (int)(*(char *)(*(int *)a1 + 9) == 1) | 5);
}

// Reference entry 113e4fa0; body size 14 bytes.
#line 1 "ENTRY_113e4fa0"
int FUN_113e4fa0(int a1) {

    int v1 = (int)(*(int *)(a1 + 4)); // (int)&FUN_113e4fa6
    return (int)(v1 < 27 == (26 - v1 & v1) < 0);
}

// Reference entry 113e6460; body size 17 bytes.
#line 1 "ENTRY_113e6460"
int FUN_113e6460(int a1) {

    return (int)(thunk_FUN_113e6480(a1, 1, 1));
}

// Reference entry 113e76fe; body size 55 bytes.
#line 1 "ENTRY_113e76fe"
int FUN_113e76fe(void) {

    int v1; // (int)((int(*)(void))&FUN_113e76fe<>)
    if ((short)v1 != 0 || *(char *)(v1 + 8) != 1 || *(int *)(v1 + 4) < 27 || *(int *)(v1 + 124) != 22) {
        return (int)(0);
    }
    int result = (int)(0); // (int)&FUN_113e771e
    if (*(int *)(v1 + 132) >= 14) {
        int v2 = (int)(*(int *)(v1 + 96)); // (int)&FUN_113e7720
        result = (int)(*(char *)(v2 + 13) != 1 ? 0 : v2);
    }
    return (int)(result);
}

// Reference entry 113e77e0; body size 29 bytes.
#line 1 "ENTRY_113e77e0"
int FUN_113e77e0(char a1) {

    return (int)((a1 & -4) == 20 ? 0 : -0x7200);
}

// Reference entry 113e7810; body size 24 bytes.
#line 1 "ENTRY_113e7810"
int FUN_113e7810(int a1, uint a2) {

    return (int)((a2 - (uint)(a1 + 1) % a2) % a2);
}

// Reference entry 113e7b80; body size 29 bytes.
#line 1 "ENTRY_113e7b80"
int FUN_113e7b80(int a1) {

    int v1 = (int)(thunk_FUN_113db890(a1), 0); // (int)&FUN_113e7b84
    return (int)(v1 < 0x414d ? v1 : 0x414d);
}

// Reference entry 113e8000; body size 36 bytes.
#line 1 "ENTRY_113e8000"
int FUN_113e8000(uint a1, int a2) {

    int result = (int)(a1 + 12); // (int)&FUN_113e8009
    if (a2 == 0) {
        return (int)(result);
    }
    return (int)(a1 / 8 + result + (int)((a1 & 7) != 0));
}

// Reference entry 113e81dd; body size 32 bytes.
#line 1 "ENTRY_113e81dd"
int FUN_113e81dd(void) {

    int v1; // (int)((int(*)(void))&FUN_113e81dd<>)
    int v2 = (int)(v1);
    *(char*)v2 = (char)((int)(2 * (char)v2));
int *v3 = (int *)((int)((int *)(v2 + 0x1000000))); // (int)&FUN_113e81e1
    *v3 = (int)(*v3 ^ -0x48000000);
char *v4 = (char *)((char)((char *)(v1 + 0x41c7ffff))); // (int)&FUN_113e81eb
    *v4 = (char)(*v4 + (char)v1);
    uint v5 = (uint)(v2 + 28); // (int)&FUN_113e81f1
char *v6 = (char *)((char)((char *)(v5 % 256 | v2 & -256))); // (int)&FUN_113e81f3
    *v6 = (char)(*v6 + (char)v5);
    return (int)(-0x7700);
}

// Reference entry 113e87b0; body size 21 bytes.
#line 1 "ENTRY_113e87b0"
int FUN_113e87b0(int a1) {

    return (int)(*(int *)((a1 + 140)) < *(int *)((a1 + 132)));
}

// Reference entry 113e8e40; body size 17 bytes.
#line 1 "ENTRY_113e8e40"
int FUN_113e8e40(int a1) {

    return (int)(*(int *)(a1 + 128) != 0);
}

// Reference entry 113e8e60; body size 22 bytes.
#line 1 "ENTRY_113e8e60"
int FUN_113e8e60(int a1) {

    int result = (int)(*(int *)(*(int *)a1 + 168)); // (int)&FUN_113e8e69
    *(int*)(*(int *)(a1 + 60) + 1180) = (int)(result);
    return (int)(result);
}

// Reference entry 113e90f0; body size 16 bytes.
#line 1 "ENTRY_113e90f0"
int FUN_113e90f0(int a1) {

    return (int)(*(int *)((a1 + 4)) != *(int *)((a1 + 8)));
}

// Reference entry 113e9110; body size 11 bytes.
#line 1 "ENTRY_113e9110"
int FUN_113e9110(int a1) {

    return (int)(*(int *)(a1 + 4) - *(int *)(a1 + 8));
}

// Reference entry 113e91d0; body size 15 bytes.
#line 1 "ENTRY_113e91d0"
int FUN_113e91d0(int a1) {

    return (int)(a1 < 0 ? -69 : 0);
}

// Reference entry 113e9e8c; body size 12 bytes.
#line 1 "ENTRY_113e9e8c"
int FUN_113e9e8c(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 113e9ec0; body size 19 bytes.
#line 1 "ENTRY_113e9ec0"
int FUN_113e9ec0(void) {

    int v1; // (int)((int(*)(void))&FUN_113e9ec0<>)
    return (int)(v1 == 0x2733);
}

// Reference entry 113e9ee0; body size 21 bytes.
#line 1 "ENTRY_113e9ee0"
int FUN_113e9ee0(int result) {

    if (result != 0) {
        return (int)(*(int *)(result + 4) / 4 & 960);
    }
    return (int)(result);
}

// Reference entry 113ea1e0; body size 21 bytes.
#line 1 "ENTRY_113ea1e0"
int FUN_113ea1e0(int a1) {

    return (int)(thunk_FUN_1140ce80(thunk_FUN_1140d570(a1)));
}

// Reference entry 113ea200; body size 13 bytes.
#line 1 "ENTRY_113ea200"
int FUN_113ea200(int result, short a2) {

    *(short*)result = (short)((int)(a2));
    return (int)(result);
}

// Reference entry 113ea2c0; body size 12 bytes.
#line 1 "ENTRY_113ea2c0"
int FUN_113ea2c0(int a1) {

    return (int)((int)(*(char *)(a1 + 16) & 1));
}

// Reference entry 113ea370; body size 13 bytes.
#line 1 "ENTRY_113ea370"
int FUN_113ea370(int a1) {

    return (int)(*(int *)(*(int *)a1 + 128));
}

// Reference entry 113ea900; body size 12 bytes.
#line 1 "ENTRY_113ea900"
int FUN_113ea900(int result, int a2) {

    *(int*)(result + 4) = (int)(a2);
    return (int)(result);
}

// Reference entry 113ea910; body size 23 bytes.
#line 1 "ENTRY_113ea910"
int FUN_113ea910(int a1) {

    return (int)(8 * (int)(*(char *)(*(int *)a1 + 9) == 1) | 4);
}

// Reference entry 113eae20; body size 49 bytes.
#line 1 "ENTRY_113eae20"
int FUN_113eae20(ushort a1) {

    if (a1 >= 2053) {
        if ((int)a1 < 2055) {
            return (int)(1);
        }
        return (int)(0);
    }
    switch (a1) {
        case 2052: {
        }
        case 1027: {
            return (int)(1);
        }
    }
    if (a1 == 1283) {
        return (int)(1);
    }
    return (int)(0);
}

// Reference entry 113eae60; body size 70 bytes.
#line 1 "ENTRY_113eae60"
int FUN_113eae60(ushort a1) {

    int result = (int)(1); // (int)((int(*)(ushort a1))&FUN_113eae60<>)
    switch (a1) {
        case 1537: {
            return (int)(result);
        }
        case 1281: {
            return (int)(result);
        }
        case 1025: {
            return (int)(result);
        }
        default: {
            if (a1 >= 2053) {
                if ((int)a1 < 2055) {
                    return (int)(1);
                }
                return (int)(0);
            }
            result = (int)(1);
            switch (a1) {
                case 2052: {
                    return (int)(result);
                }
                case 1027: {
                    return (int)(result);
                }
                default: {
                    if (a1 == 1283) {
                        return (int)(1);
                    }
                    result = (int)(0);
                    return (int)(result);
                }
            }
        }
    }
}

// Reference entry 113eaec0; body size 17 bytes.
#line 1 "ENTRY_113eaec0"
int FUN_113eaec0(int a1) {

    return (int)(thunk_FUN_113e6480(a1, 1, 1));
}

// Reference entry 113eb6d0; body size 55 bytes.
#line 1 "ENTRY_113eb6d0"
int FUN_113eb6d0(int a1, int a2, int a3) {

    if (a3 != 1 || *(char *)a2 != 0) {
        thunk_FUN_113e5e30(a1, 2, 40);
        return (int)(-0x6e00);
    }
    *(int*)(a1 + 260) = (int)(1);
    return (int)(0);
}

// Reference entry 113ed520; body size 26 bytes.
#line 1 "ENTRY_113ed520"
int FUN_113ed520(int a1) {

    uint v1 = (uint)(*(int *)&DAT_122fa560 ^ a1); // (int)&FUN_113ed526
    return (int)((-((v1 / 2)) | -v1) / 0x80000000);
}

// Reference entry 113ed550; body size 10 bytes.
#line 1 "ENTRY_113ed550"
int FUN_113ed550(int a1) {

    return (int)(*(int *)&DAT_122fa560 ^ a1);
}

// Reference entry 113ed640; body size 19 bytes.
#line 1 "ENTRY_113ed640"
int FUN_113ed640(int a1) {

    return (int)((thunk_FUN_1140add0(a1) + 7) / 8);
}

// Reference entry 113ed660; body size 13 bytes.
#line 1 "ENTRY_113ed660"
int FUN_113ed660(int result, short a2) {

    *(short*)result = (short)((int)(a2));
    return (int)(result);
}

// Reference entry 113ed670; body size 11 bytes.
#line 1 "ENTRY_113ed670"
int FUN_113ed670(int result, int a2) {

    *(int*)result = (int)((int)(a2));
    return (int)(result);
}

// Reference entry 113ed7e0; body size 13 bytes.
#line 1 "ENTRY_113ed7e0"
int FUN_113ed7e0(int a1) {

    return (int)(*(int *)(*(int *)a1 + 132));
}

// Reference entry 113ed7f0; body size 13 bytes.
#line 1 "ENTRY_113ed7f0"
int FUN_113ed7f0(int a1) {

    return (int)(*(int *)(*(int *)a1 + 128));
}

// Reference entry 113edc20; body size 12 bytes.
#line 1 "ENTRY_113edc20"
int FUN_113edc20(int result, int a2) {

    *(int*)(result + 4) = (int)(a2);
    return (int)(result);
}

// Reference entry 113edc30; body size 23 bytes.
#line 1 "ENTRY_113edc30"
int FUN_113edc30(int a1) {

    return (int)(8 * (int)(*(char *)(*(int *)a1 + 9) == 1) | 4);
}

// Reference entry 113edc50; body size 23 bytes.
#line 1 "ENTRY_113edc50"
int FUN_113edc50(int a1) {

    return (int)(8 * (int)(*(char *)(*(int *)a1 + 9) == 1) | 5);
}

// Reference entry 113ede70; body size 49 bytes.
#line 1 "ENTRY_113ede70"
int FUN_113ede70(ushort a1) {

    if (a1 >= 2053) {
        if ((int)a1 < 2055) {
            return (int)(1);
        }
        return (int)(0);
    }
    switch (a1) {
        case 2052: {
        }
        case 1027: {
            return (int)(1);
        }
    }
    if (a1 == 1283) {
        return (int)(1);
    }
    return (int)(0);
}

// Reference entry 113edeb0; body size 70 bytes.
#line 1 "ENTRY_113edeb0"
int FUN_113edeb0(ushort a1) {

    int result = (int)(1); // (int)((int(*)(ushort a1))&FUN_113edeb0<>)
    switch (a1) {
        case 1537: {
            return (int)(result);
        }
        case 1281: {
            return (int)(result);
        }
        case 1025: {
            return (int)(result);
        }
        default: {
            if (a1 >= 2053) {
                if ((int)a1 < 2055) {
                    return (int)(1);
                }
                return (int)(0);
            }
            result = (int)(1);
            switch (a1) {
                case 2052: {
                    return (int)(result);
                }
                case 1027: {
                    return (int)(result);
                }
                default: {
                    if (a1 == 1283) {
                        return (int)(1);
                    }
                    result = (int)(0);
                    return (int)(result);
                }
            }
        }
    }
}

// Reference entry 113edf10; body size 17 bytes.
#line 1 "ENTRY_113edf10"
int FUN_113edf10(int a1) {

    return (int)(thunk_FUN_113e6480(a1, 1, 1));
}

// Reference entry 113ee43b; body size 12 bytes.
#line 1 "ENTRY_113ee43b"
int FUN_113ee43b(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 113ef800; body size 57 bytes.
#line 1 "ENTRY_113ef800"
int FUN_113ef800(int a1, int a2) {

    if (a2 != 0) {
        thunk_FUN_113e5e30(a1, 2, 50);
        return (int)(-0x7300);
    }
    if (*(char *)(*(int *)a1 + 13) == 1) {
        *(int*)(*(int *)(a1 + 56) + 212) = (int)(1);
    }
    return (int)(0);
}

// Reference entry 113efb80; body size 51 bytes.
#line 1 "ENTRY_113efb80"
int FUN_113efb80(int a1, int a2) {

    if (a2 != 0) {
        thunk_FUN_113e5e30(a1, 2, 50);
        return (int)(-0x7300);
    }
    if (*(char *)(*(int *)a1 + 14) == 1) {
        *(char*)(*(int *)(a1 + 60) + 12) = (char)(1);
    }
    return (int)(0);
}

// Reference entry 113efbc0; body size 52 bytes.
#line 1 "ENTRY_113efbc0"
int FUN_113efbc0(int a1, int a2, int a3) {

    if (a3 != 1) {
        thunk_FUN_113e5e30(a1, 2, 47);
        return (int)(-0x6600);
    }
    unsigned char v1 = (unsigned char)(*(char *)a2); // (int)&FUN_113efbcb
    if (v1 >= 5) {
        thunk_FUN_113e5e30(a1, 2, 47);
        return (int)(-0x6600);
    }
    *(char *)*(int*)(a1 + 56) = (int)(v1);
    return (int)(0);
}

// Reference entry 113efc10; body size 55 bytes.
#line 1 "ENTRY_113efc10"
int FUN_113efc10(int a1, int a2, int a3) {

    if (a3 != 1 || *(char *)a2 != 0) {
        thunk_FUN_113e5e30(a1, 2, 40);
        return (int)(-0x6e00);
    }
    *(int*)(a1 + 260) = (int)(1);
    return (int)(0);
}

// Reference entry 113efd3d; body size 12 bytes.
#line 1 "ENTRY_113efd3d"
int FUN_113efd3d(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 113f14e0; body size 25 bytes.
#line 1 "ENTRY_113f14e0"
int FUN_113f14e0(int a1) {

    return (int)(thunk_FUN_11436230(a1, (int)&DAT_11bfec68, 7, (int)&FUN_100409da));
}

// Reference entry 113f1520; body size 10 bytes.
#line 1 "ENTRY_113f1520"
int FUN_113f1520(int a1) {

    return (int)(a1 | 0x2000000);
}

// Reference entry 113f1540; body size 13 bytes.
#line 1 "ENTRY_113f1540"
int FUN_113f1540(int result, short a2) {

    *(short*)result = (short)((int)(a2));
    return (int)(result);
}

// Reference entry 113f1550; body size 11 bytes.
#line 1 "ENTRY_113f1550"
int FUN_113f1550(int result, int a2) {

    *(int*)result = (int)((int)(a2));
    return (int)(result);
}

// Reference entry 113f1590; body size 20 bytes.
#line 1 "ENTRY_113f1590"
int FUN_113f1590(int a1, int a2) {

    return (int)((*(int *)(*(int *)a1 + 28) & a2) != 0);
}

// Reference entry 113f15b0; body size 13 bytes.
#line 1 "ENTRY_113f15b0"
int FUN_113f15b0(int a1) {

    return (int)(*(int *)(*(int *)a1 + 28) & 1);
}

// Reference entry 113f15c0; body size 16 bytes.
#line 1 "ENTRY_113f15c0"
int FUN_113f15c0(int a1) {

    return (int)(*(int *)(*(int *)a1 + 28) / 4 & 1);
}

// Reference entry 113f15e0; body size 19 bytes.
#line 1 "ENTRY_113f15e0"
int FUN_113f15e0(int a1) {

    return (int)((*(char *)(*(int *)a1 + 28) & 6) != 0);
}

// Reference entry 113f1600; body size 19 bytes.
#line 1 "ENTRY_113f1600"
int FUN_113f1600(int a1) {

    return (int)((*(char *)(*(int *)a1 + 28) & 5) != 0);
}

// Reference entry 113f1670; body size 13 bytes.
#line 1 "ENTRY_113f1670"
int FUN_113f1670(int a1) {

    return (int)(*(int *)(*(int *)a1 + 132));
}

// Reference entry 113f1680; body size 12 bytes.
#line 1 "ENTRY_113f1680"
int FUN_113f1680(int result, int a2) {

    *(int*)(result + 4) = (int)(a2);
    return (int)(result);
}

// Reference entry 113f1690; body size 14 bytes.
#line 1 "ENTRY_113f1690"
int FUN_113f1690(int a1) {

    int v1 = (int)(*(int *)(a1 + 4)); // (int)&FUN_113f1696
    return (int)(v1 < 27 == (26 - v1 & v1) < 0);
}

// Reference entry 113f1dc0; body size 23 bytes.
#line 1 "ENTRY_113f1dc0"
int FUN_113f1dc0(int a1, char a2) {

    return (int)((*(char *)(*(int *)(a1 + 60) + 36) & a2) != 0);
}

// Reference entry 113f1de0; body size 20 bytes.
#line 1 "ENTRY_113f1de0"
int FUN_113f1de0(int a1) {

    return (int)((*(char *)(*(int *)(a1 + 60) + 36) & 5) != 0);
}

// Reference entry 113f1e40; body size 20 bytes.
#line 1 "ENTRY_113f1e40"
int FUN_113f1e40(int a1) {

    return (int)((bool)((ushort)((short)a1 - 256) < 5));
}

// Reference entry 113f1e60; body size 19 bytes.
#line 1 "ENTRY_113f1e60"
int FUN_113f1e60(int a1, char a2) {

    unsigned char v1 = (unsigned char)(-1 - (a2 & 13));
char *v2 = (char *)((char)((char *)(a1 + 140))); // (int)&FUN_113f1e6c
    *v2 = (char)(*v2 & v1);
    int v3; // (int)((int(*)(int a1, char a2))&FUN_113f1e60<>)
    return (int)(v3 & -256 | (int)v1);
}

// Reference entry 113f1e80; body size 19 bytes.
#line 1 "ENTRY_113f1e80"
int FUN_113f1e80(int a1, int a2) {

    return (int)(a2 & 13 & (int)*(char *)(a1 + 140));
}

// Reference entry 113f1ea0; body size 17 bytes.
#line 1 "ENTRY_113f1ea0"
int FUN_113f1ea0(int a1, char a2) {

    unsigned char v1 = (unsigned char)(a2 & 13); // (int)&FUN_113f1ea8
char *v2 = (char *)((char)((char *)(a1 + 140))); // (int)&FUN_113f1eaa
    *v2 = (char)(*v2 | v1);
    int v3; // (int)((int(*)(int a1, char a2))&FUN_113f1ea0<>)
    return (int)(v3 & -256 | (int)v1);
}

// Reference entry 113f1ec0; body size 18 bytes.
#line 1 "ENTRY_113f1ec0"
int FUN_113f1ec0(int a1) {

    return (int)((int)(*(char *)(a1 + 140) / 8 & 1));
}

// Reference entry 113f1ee0; body size 26 bytes.
#line 1 "ENTRY_113f1ee0"
int FUN_113f1ee0(int a1, int a2) {

    return (int)(((char)a2 & 13 & *(char *)(a1 + 140)) != 0);
}

// Reference entry 113f2950; body size 14 bytes.
#line 1 "ENTRY_113f2950"
int FUN_113f2950(int a1) {

    *(int*)(a1 + 4) = (int)(15);
    return (int)(0);
}

// Reference entry 113f2970; body size 29 bytes.
#line 1 "ENTRY_113f2970"
int FUN_113f2970(int a1) {

    int v1 = (int)(thunk_FUN_113e9f00(a1), 0); // (int)&FUN_113f2974
    if (v1 == 0) {
        return (int)(0);
    }
    return (int)((int)*(char *)(v1 + 9) | 0x2000000);
}

// Reference entry 113f5cb0; body size 10 bytes.
#line 1 "ENTRY_113f5cb0"
int FUN_113f5cb0(int a1) {

    return (int)(a1 | 0x2000000);
}

// Reference entry 113f5cd0; body size 13 bytes.
#line 1 "ENTRY_113f5cd0"
int FUN_113f5cd0(int result, short a2) {

    *(short*)result = (short)((int)(a2));
    return (int)(result);
}

// Reference entry 113f5ce0; body size 11 bytes.
#line 1 "ENTRY_113f5ce0"
int FUN_113f5ce0(int result, int a2) {

    *(int*)result = (int)((int)(a2));
    return (int)(result);
}

// Reference entry 113f5d50; body size 15 bytes.
#line 1 "ENTRY_113f5d50"
int FUN_113f5d50(int a1) {

    return (int)(*(int *)(*(int *)a1 + 28) / 2 & 1);
}

// Reference entry 113f5d70; body size 20 bytes.
#line 1 "ENTRY_113f5d70"
int FUN_113f5d70(int a1, int a2) {

    return (int)((*(int *)(*(int *)a1 + 28) & a2) != 0);
}

// Reference entry 113f5d90; body size 13 bytes.
#line 1 "ENTRY_113f5d90"
int FUN_113f5d90(int a1) {

    return (int)(*(int *)(*(int *)a1 + 28) & 1);
}

// Reference entry 113f5da0; body size 16 bytes.
#line 1 "ENTRY_113f5da0"
int FUN_113f5da0(int a1) {

    return (int)(*(int *)(*(int *)a1 + 28) / 4 & 1);
}

// Reference entry 113f5dc0; body size 13 bytes.
#line 1 "ENTRY_113f5dc0"
int FUN_113f5dc0(int a1) {

    return (int)(*(int *)(*(int *)a1 + 132));
}

// Reference entry 113f5dd0; body size 13 bytes.
#line 1 "ENTRY_113f5dd0"
int FUN_113f5dd0(int a1) {

    return (int)(*(int *)(*(int *)a1 + 128));
}

// Reference entry 113f5de0; body size 12 bytes.
#line 1 "ENTRY_113f5de0"
int FUN_113f5de0(int result, int a2) {

    *(int*)(result + 4) = (int)(a2);
    return (int)(result);
}

// Reference entry 113f68d0; body size 23 bytes.
#line 1 "ENTRY_113f68d0"
int FUN_113f68d0(int a1, char a2) {

    return (int)((*(char *)(*(int *)(a1 + 60) + 39) & a2) != 0);
}

// Reference entry 113f68f0; body size 18 bytes.
#line 1 "ENTRY_113f68f0"
int FUN_113f68f0(int a1) {

    return (int)((int)(*(char *)(*(int *)(a1 + 60) + 39) / 4 & 1));
}

// Reference entry 113f6910; body size 15 bytes.
#line 1 "ENTRY_113f6910"
int FUN_113f6910(int a1) {

    return (int)((int)(*(char *)(*(int *)(a1 + 60) + 39) & 1));
}

// Reference entry 113f6930; body size 20 bytes.
#line 1 "ENTRY_113f6930"
int FUN_113f6930(int a1) {

    return (int)((*(char *)(*(int *)(a1 + 60) + 39) & 5) != 0);
}

// Reference entry 113f6950; body size 23 bytes.
#line 1 "ENTRY_113f6950"
int FUN_113f6950(int a1, char a2) {

    return (int)((*(char *)(*(int *)(a1 + 60) + 36) & a2) != 0);
}

// Reference entry 113f6970; body size 20 bytes.
#line 1 "ENTRY_113f6970"
int FUN_113f6970(int a1) {

    return (int)((*(char *)(*(int *)(a1 + 60) + 36) & 6) != 0);
}

// Reference entry 113f6990; body size 20 bytes.
#line 1 "ENTRY_113f6990"
int FUN_113f6990(int a1) {

    return (int)((*(char *)(*(int *)(a1 + 60) + 36) & 5) != 0);
}

// Reference entry 113f69f0; body size 20 bytes.
#line 1 "ENTRY_113f69f0"
int FUN_113f69f0(int a1) {

    return (int)((bool)((ushort)((short)a1 - 256) < 5));
}

// Reference entry 113f6a10; body size 19 bytes.
#line 1 "ENTRY_113f6a10"
int FUN_113f6a10(int a1, char a2) {

    unsigned char v1 = (unsigned char)(-1 - (a2 & 13));
char *v2 = (char *)((char)((char *)(a1 + 140))); // (int)&FUN_113f6a1c
    *v2 = (char)(*v2 & v1);
    int v3; // (int)((int(*)(int a1, char a2))&FUN_113f6a10<>)
    return (int)(v3 & -256 | (int)v1);
}

// Reference entry 113f6a30; body size 19 bytes.
#line 1 "ENTRY_113f6a30"
int FUN_113f6a30(int a1, int a2) {

    return (int)(a2 & 13 & (int)*(char *)(a1 + 140));
}

// Reference entry 113f6a50; body size 17 bytes.
#line 1 "ENTRY_113f6a50"
int FUN_113f6a50(int a1, char a2) {

    unsigned char v1 = (unsigned char)(a2 & 13); // (int)&FUN_113f6a58
char *v2 = (char *)((char)((char *)(a1 + 140))); // (int)&FUN_113f6a5a
    *v2 = (char)(*v2 | v1);
    int v3; // (int)((int(*)(int a1, char a2))&FUN_113f6a50<>)
    return (int)(v3 & -256 | (int)v1);
}

// Reference entry 113f6a70; body size 18 bytes.
#line 1 "ENTRY_113f6a70"
int FUN_113f6a70(int a1) {

    return (int)((int)(*(char *)(a1 + 140) / 8 & 1));
}

// Reference entry 113f6a90; body size 26 bytes.
#line 1 "ENTRY_113f6a90"
int FUN_113f6a90(int a1, int a2) {

    return (int)(((char)a2 & 13 & *(char *)(a1 + 140)) != 0);
}

// Reference entry 113f6ae0; body size 49 bytes.
#line 1 "ENTRY_113f6ae0"
int FUN_113f6ae0(ushort a1) {

    if (a1 >= 2053) {
        if ((int)a1 < 2055) {
            return (int)(1);
        }
        return (int)(0);
    }
    switch (a1) {
        case 2052: {
        }
        case 1027: {
            return (int)(1);
        }
    }
    if (a1 == 1283) {
        return (int)(1);
    }
    return (int)(0);
}

// Reference entry 113f6c90; body size 27 bytes.
#line 1 "ENTRY_113f6c90"
int FUN_113f6c90(int a1, int a2) {

    return (int)((*(int *)(*(int *)(a1 + 60) + 1488) & a2) == a2);
}

// Reference entry 113f8e50; body size 26 bytes.
#line 1 "ENTRY_113f8e50"
int FUN_113f8e50(int a1) {

    int result = (int)(*(int *)(a1 + 60)); // (int)&FUN_113f8e56
    *(int*)(a1 + 4) = (int)(4 * (int)(*(char *)(result + 3) == 0) + 7);
    return (int)(result);
}

// Reference entry 113f9e0c; body size 12 bytes.
#line 1 "ENTRY_113f9e0c"
int FUN_113f9e0c(void) {

    int v1; // (int)((int(*)(void))&FUN_113f9e0c<>)
    int v2 = (int)(v1);
    *(char*)(v1 + 94) = (char)(-1);
    return (int)(v2 - 0x3b7d0000 & -256 | v2 + 51 & 255);
}

// Reference entry 113fab70; body size 13 bytes.
#line 1 "ENTRY_113fab70"
int FUN_113fab70(int result, short a2) {

    *(short*)result = (short)((int)(a2));
    return (int)(result);
}

// Reference entry 113fab80; body size 11 bytes.
#line 1 "ENTRY_113fab80"
int FUN_113fab80(int result, int a2) {

    *(int*)result = (int)((int)(a2));
    return (int)(result);
}

// Reference entry 113fabc0; body size 15 bytes.
#line 1 "ENTRY_113fabc0"
int FUN_113fabc0(int a1) {

    return (int)(*(int *)(*(int *)a1 + 28) / 2 & 1);
}

// Reference entry 113fabe0; body size 20 bytes.
#line 1 "ENTRY_113fabe0"
int FUN_113fabe0(int a1, int a2) {

    return (int)((*(int *)(*(int *)a1 + 28) & a2) != 0);
}

// Reference entry 113fac00; body size 19 bytes.
#line 1 "ENTRY_113fac00"
int FUN_113fac00(int a1) {

    return (int)((*(char *)(*(int *)a1 + 28) & 6) != 0);
}

// Reference entry 113fac20; body size 19 bytes.
#line 1 "ENTRY_113fac20"
int FUN_113fac20(int a1) {

    return (int)((*(char *)(*(int *)a1 + 28) & 5) != 0);
}

// Reference entry 113fac40; body size 13 bytes.
#line 1 "ENTRY_113fac40"
int FUN_113fac40(int a1) {

    return (int)(*(int *)(*(int *)a1 + 132));
}

// Reference entry 113fac50; body size 12 bytes.
#line 1 "ENTRY_113fac50"
int FUN_113fac50(int result, int a2) {

    *(int*)(result + 4) = (int)(a2);
    return (int)(result);
}

// Reference entry 113faf20; body size 17 bytes.
#line 1 "ENTRY_113faf20"
int FUN_113faf20(int a1) {

    return (int)(thunk_FUN_113e6480(a1, 1, 1));
}

// Reference entry 113fbdc0; body size 21 bytes.
#line 1 "ENTRY_113fbdc0"
int FUN_113fbdc0(int result) {

    if (result != 0) {
        return (int)(*(int *)(result + 4) / 4 & 960);
    }
    return (int)(result);
}

// Reference entry 113fbde0; body size 10 bytes.
#line 1 "ENTRY_113fbde0"
int FUN_113fbde0(int a1) {

    return (int)(a1 | 0x2000000);
}

// Reference entry 113fdb40; body size 23 bytes.
#line 1 "ENTRY_113fdb40"
int FUN_113fdb40(int a1, char a2) {

    return (int)((*(char *)(*(int *)(a1 + 60) + 36) & a2) != 0);
}

// Reference entry 113fdb60; body size 20 bytes.
#line 1 "ENTRY_113fdb60"
int FUN_113fdb60(int a1) {

    return (int)((*(char *)(*(int *)(a1 + 60) + 36) & 6) != 0);
}

// Reference entry 113fdb80; body size 20 bytes.
#line 1 "ENTRY_113fdb80"
int FUN_113fdb80(int a1) {

    return (int)((*(char *)(*(int *)(a1 + 60) + 36) & 5) != 0);
}

// Reference entry 113fdd30; body size 20 bytes.
#line 1 "ENTRY_113fdd30"
int FUN_113fdd30(int a1) {

    return (int)((bool)((ushort)((short)a1 - 256) < 5));
}

// Reference entry 113fdf60; body size 12 bytes.
#line 1 "ENTRY_113fdf60"
int FUN_113fdf60(int result, int a2) {

    *(int*)(result + 12) = (int)(a2);
    return (int)(result);
}

// Reference entry 113fdf70; body size 13 bytes.
#line 1 "ENTRY_113fdf70"
int FUN_113fdf70(int result, short a2) {

    *(short*)result = (short)((int)(a2));
    return (int)(result);
}

// Reference entry 113feed0; body size 25 bytes.
#line 1 "ENTRY_113feed0"
int FUN_113feed0(int a1) {

    return (int)(thunk_FUN_11436230(a1, (int)&DAT_11bfec68, 7, (int)&FUN_100409da));
}

// Reference entry 113fef00; body size 10 bytes.
#line 1 "ENTRY_113fef00"
int FUN_113fef00(int a1) {

    return (int)(a1 | 0x2000000);
}

// Reference entry 113fef10; body size 13 bytes.
#line 1 "ENTRY_113fef10"
int FUN_113fef10(int result, short a2) {

    *(short*)result = (short)((int)(a2));
    return (int)(result);
}

// Reference entry 113fef20; body size 11 bytes.
#line 1 "ENTRY_113fef20"
int FUN_113fef20(int result, int a2) {

    *(int*)result = (int)((int)(a2));
    return (int)(result);
}

// Reference entry 113ff000; body size 13 bytes.
#line 1 "ENTRY_113ff000"
int FUN_113ff000(int a1) {

    return (int)(*(int *)(*(int *)a1 + 128));
}

// Reference entry 113fffd0; body size 49 bytes.
#line 1 "ENTRY_113fffd0"
int FUN_113fffd0(ushort a1) {

    if (a1 >= 2053) {
        if ((int)a1 < 2055) {
            return (int)(1);
        }
        return (int)(0);
    }
    switch (a1) {
        case 2052: {
        }
        case 1027: {
            return (int)(1);
        }
    }
    if (a1 == 1283) {
        return (int)(1);
    }
    return (int)(0);
}

// Reference entry 11400850; body size 24 bytes.
#line 1 "ENTRY_11400850"
int FUN_11400850(int result) {

    *(int*)result = (int)((int)(0));
    *(int*)(result + 4) = (int)(0);
    *(int*)(result + 8) = (int)(0);
    *(int*)(result + 12) = (int)(0);
    *(int*)(result + 16) = (int)(0);
    *(int*)(result + 20) = (int)(0);
    return (int)(result);
}

// Reference entry 11400870; body size 12 bytes.
#line 1 "ENTRY_11400870"
int FUN_11400870(int result, int a2) {

    *(int*)(result + 12) = (int)(a2);
    return (int)(result);
}

// Reference entry 114008b0; body size 13 bytes.
#line 1 "ENTRY_114008b0"
int FUN_114008b0(int result, short a2) {

    *(short*)result = (short)((int)(a2));
    return (int)(result);
}

// Reference entry 114012ec; body size 12 bytes.
#line 1 "ENTRY_114012ec"
int FUN_114012ec(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 11405ac0; body size 22 bytes.
#line 1 "ENTRY_11405ac0"
int FUN_11405ac0(int a1, int a2) {

    int v1; // (int)((int(*)(int a1, int a2))&FUN_11405ac0<>)
    return (int)(v1 != 1);
}

// Reference entry 11405ae0; body size 22 bytes.
#line 1 "ENTRY_11405ae0"
int FUN_11405ae0(int a1, int a2) {

    int v1; // (int)((int(*)(int a1, int a2))&FUN_11405ae0<>)
    return (int)(v1 != 1);
}

// Reference entry 11408690; body size 23 bytes.
#line 1 "ENTRY_11408690"
int FUN_11408690(int a1) {

    return (int)((a1 < 10 == (9 - a1 & a1) < 0 ? 55 : 48) + a1 & 255);
}

// Reference entry 114095e0; body size 16 bytes.
#line 1 "ENTRY_114095e0"
int FUN_114095e0(uint a1) {

    if (a1 < 48) {
        return (int)((a1 + 1) / 2);
    }
    return (int)(0);
}

// Reference entry 1140a1b0; body size 11 bytes.
#line 1 "ENTRY_1140a1b0"
int FUN_1140a1b0(int result, int a2) {

    *(int*)result = (int)((int)(a2));
    return (int)(result);
}

// Reference entry 1140a6b4; body size 12 bytes.
#line 1 "ENTRY_1140a6b4"
int FUN_1140a6b4(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 1140ab90; body size 21 bytes.
#line 1 "ENTRY_1140ab90"
int FUN_1140ab90(int a1) {

    return (int)(thunk_FUN_1140ce80(thunk_FUN_1140d570(a1)));
}

// Reference entry 1140abb0; body size 10 bytes.
#line 1 "ENTRY_1140abb0"
int FUN_1140abb0(int a1) {

    return (int)(a1 | 0x2000000);
}

// Reference entry 1140b670; body size 23 bytes.
#line 1 "ENTRY_1140b670"
int FUN_1140b670(int a1, int result) {

    if (a1 != 0) {
        if (*(int *)a1 == 1) {
            return (int)(result);
        }
    }
    return (int)(0);
}

// Reference entry 1140bdb0; body size 12 bytes.
#line 1 "ENTRY_1140bdb0"
int FUN_1140bdb0(int result, int a2) {

    *(int*)(result + 12) = (int)(a2);
    return (int)(result);
}

// Reference entry 1140bdf0; body size 12 bytes.
#line 1 "ENTRY_1140bdf0"
int FUN_1140bdf0(int result, int a2) {

    *(int*)(result + 16) = (int)(a2);
    return (int)(result);
}

// Reference entry 1140be00; body size 13 bytes.
#line 1 "ENTRY_1140be00"
int FUN_1140be00(int result, short a2) {

    *(short*)result = (short)((int)(a2));
    return (int)(result);
}

// Reference entry 1140d9f0; body size 11 bytes.
#line 1 "ENTRY_1140d9f0"
int FUN_1140d9f0(int result, int a2) {

    *(int*)result = (int)((int)(a2));
    return (int)(result);
}

// Reference entry 1140e9c0; body size 11 bytes.
#line 1 "ENTRY_1140e9c0"
int FUN_1140e9c0(int result, int a2) {

    *(int*)result = (int)((int)(a2));
    return (int)(result);
}

// Reference entry 1140ffa0; body size 11 bytes.
#line 1 "ENTRY_1140ffa0"
int FUN_1140ffa0(int result, int a2) {

    *(int*)result = (int)((int)(a2));
    return (int)(result);
}

// Reference entry 11411370; body size 11 bytes.
#line 1 "ENTRY_11411370"
int FUN_11411370(int result, int a2) {

    *(int*)result = (int)((int)(a2));
    return (int)(result);
}

// Reference entry 11411a70; body size 30 bytes.
#line 1 "ENTRY_11411a70"
int FUN_11411a70(int a1, int a2, int a3) {

    if (a1 == 0 || a3 == 0) {
        return (int)(-0x6100);
    }
    *(int*)a3 = (int)((int)(a2));
    return (int)(0);
}

// Reference entry 11412610; body size 21 bytes.
#line 1 "ENTRY_11412610"
int FUN_11412610(int a1) {

    return (int)(*(int *)((*(int *)(a1 + 4) / 0x1000000 & 124) + (int)&PTR_DAT_11c00958));
}

// Reference entry 11412630; body size 18 bytes.
#line 1 "ENTRY_11412630"
int FUN_11412630(int a1) {

    int result = (int)(*(int *)a1); // (int)&FUN_11412634
    if (result != 0) {
        return (int)(*(int *)(result + 4) & 31);
    }
    return (int)(result);
}

// Reference entry 114127c0; body size 19 bytes.
#line 1 "ENTRY_114127c0"
int FUN_114127c0(int result) {

    if (result != 0) {
        return (int)(*(int *)(result + 4) / 8 & 28);
    }
    return (int)(result);
}

// Reference entry 114127e0; body size 21 bytes.
#line 1 "ENTRY_114127e0"
int FUN_114127e0(int result) {

    if (result != 0) {
        return (int)(*(int *)(result + 4) / 4 & 960);
    }
    return (int)(result);
}

// Reference entry 11413160; body size 26 bytes.
#line 1 "ENTRY_11413160"
int FUN_11413160(int a1) {

    uint v1 = (uint)(*(int *)&DAT_122fa560 ^ a1); // (int)&FUN_11413166
    return (int)((-((v1 / 2)) | -v1) / 0x80000000);
}

// Reference entry 114131a0; body size 10 bytes.
#line 1 "ENTRY_114131a0"
int FUN_114131a0(int a1) {

    return (int)(*(int *)&DAT_122fa560 ^ a1);
}

// Reference entry 114131b0; body size 13 bytes.
#line 1 "ENTRY_114131b0"
int FUN_114131b0(int a1, int a2) {

    return (int)(-((-a2 & a1)));
}

// Reference entry 114131c0; body size 25 bytes.
#line 1 "ENTRY_114131c0"
int FUN_114131c0(int a1, int a2, int a3) {

    return (int)((*(int *)&DAT_122fa560 ^ -1 - a1) & a3 | a2 & a1);
}

// Reference entry 114136a0; body size 26 bytes.
#line 1 "ENTRY_114136a0"
int FUN_114136a0(int a1) {

    uint v1 = (uint)(*(int *)&DAT_122fa560 ^ a1); // (int)&FUN_114136a6
    return (int)((-((v1 / 2)) | -v1) / 0x80000000);
}

// Reference entry 11413700; body size 10 bytes.
#line 1 "ENTRY_11413700"
int FUN_11413700(int a1) {

    return (int)(*(int *)&DAT_122fa560 ^ a1);
}

// Reference entry 11413710; body size 25 bytes.
#line 1 "ENTRY_11413710"
int FUN_11413710(int a1, int a2, int a3) {

    return (int)((*(int *)&DAT_122fa560 ^ -1 - a1) & a3 | a2 & a1);
}

// Reference entry 11413780; body size 24 bytes.
#line 1 "ENTRY_11413780"
int FUN_11413780(int a1, int a2, int a3) {

    return (int)((*(int *)&DAT_122fa560 ^ -1 - a1) & a3 | a2 & a1);
}

// Reference entry 11418c90; body size 11 bytes.
#line 1 "ENTRY_11418c90"
int FUN_11418c90(int a1) {

    return (int)(a1 >= 0 ? a1 : -a1);
}

// Reference entry 11418fb0; body size 26 bytes.
#line 1 "ENTRY_11418fb0"
int FUN_11418fb0(int a1) {

    uint v1 = (uint)(*(int *)&DAT_122fa560 ^ a1); // (int)&FUN_11418fb6
    return (int)((-((v1 / 2)) | -v1) / 0x80000000);
}

// Reference entry 11419000; body size 10 bytes.
#line 1 "ENTRY_11419000"
int FUN_11419000(int a1) {

    return (int)(*(int *)&DAT_122fa560 ^ a1);
}

// Reference entry 11419040; body size 13 bytes.
#line 1 "ENTRY_11419040"
int FUN_11419040(int a1, int a2) {

    return (int)(-((-a2 & a1)));
}

// Reference entry 11419050; body size 25 bytes.
#line 1 "ENTRY_11419050"
int FUN_11419050(int a1, int a2, int a3) {

    return (int)((*(int *)&DAT_122fa560 ^ -1 - a1) & a3 | a2 & a1);
}

// Reference entry 11419410; body size 24 bytes.
#line 1 "ENTRY_11419410"
int FUN_11419410(int a1, int a2, int a3) {

    return (int)((*(int *)&DAT_122fa560 ^ -1 - a1) & a3 | a2 & a1);
}

// Reference entry 11419510; body size 21 bytes.
#line 1 "ENTRY_11419510"
int FUN_11419510(int a1) {

    return (int)(thunk_FUN_1140ce80(thunk_FUN_1140d570(a1)));
}

// Reference entry 11419530; body size 12 bytes.
#line 1 "ENTRY_11419530"
int FUN_11419530(int a1) {

    return (int)(2 * a1 | 1);
}

// Reference entry 1141eb20; body size 26 bytes.
#line 1 "ENTRY_1141eb20"
int FUN_1141eb20(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_1141eb20<>)
    return (int)(thunk_FUN_1140b1f0(&v1) == 1 ? a1 : 0);
}

// Reference entry 1141f590; body size 26 bytes.
#line 1 "ENTRY_1141f590"
int FUN_1141f590(int a1) {

    int v1; // (int)((int(*)(int a1))&FUN_1141f590<>)
    return (int)(thunk_FUN_1140b1f0(&v1) == 1 ? a1 : 0);
}

// Reference entry 11423010; body size 11 bytes.
#line 1 "ENTRY_11423010"
int FUN_11423010(int result, int a2) {

    *(int*)result = (int)((int)(a2));
    return (int)(result);
}

// Reference entry 11425b70; body size 21 bytes.
#line 1 "ENTRY_11425b70"
int FUN_11425b70(int a1) {

    return (int)(thunk_FUN_1140ce80(thunk_FUN_1140d570(a1)));
}

// Reference entry 11425b90; body size 11 bytes.
#line 1 "ENTRY_11425b90"
int FUN_11425b90(int result, int a2) {

    *(int*)result = (int)((int)(a2));
    return (int)(result);
}

// Reference entry 114262b0; body size 10 bytes.
#line 1 "ENTRY_114262b0"
int FUN_114262b0(int a1) {

    return (int)((bool)(a1 == 0));
}

// Reference entry 11429440; body size 17 bytes.
#line 1 "ENTRY_11429440"
int FUN_11429440(int a1, int a2) {

    return (int)(a1 == 0 ? 0 : a2 + a1);
}

// Reference entry 11429ae0; body size 29 bytes.
#line 1 "ENTRY_11429ae0"
int FUN_11429ae0(int a1) {

    if (*(int *)a1 == 1) {
        return (int)(thunk_FUN_1144cf70(a1 + 24));
    }
    return (int)(-135);
}

// Reference entry 11429b10; body size 28 bytes.
#line 1 "ENTRY_11429b10"
int FUN_11429b10(int a1) {

    if (*(int *)(a1 + 4) < 256) {
        return (int)(thunk_FUN_1144cfe0(a1));
    }
    return (int)(-135);
}

// Reference entry 11429b80; body size 28 bytes.
#line 1 "ENTRY_11429b80"
int FUN_11429b80(int a1) {

    if (*(int *)(a1 + 4) < 256) {
        return (int)(thunk_FUN_1144d2d0(a1));
    }
    return (int)(-135);
}

// Reference entry 11429bf0; body size 29 bytes.
#line 1 "ENTRY_11429bf0"
int FUN_11429bf0(int a1) {

    if (*(int *)a1 == 1) {
        return (int)(thunk_FUN_1144d590(a1 + 24));
    }
    return (int)(-135);
}

// Reference entry 11429c20; body size 29 bytes.
#line 1 "ENTRY_11429c20"
int FUN_11429c20(int a1) {

    if (*(int *)a1 == 1) {
        return (int)(thunk_FUN_1144d660(a1 + 24));
    }
    return (int)(-135);
}

// Reference entry 11429c50; body size 29 bytes.
#line 1 "ENTRY_11429c50"
int FUN_11429c50(int a1) {

    if (*(int *)a1 == 1) {
        return (int)(thunk_FUN_1144d6a0(a1 + 24));
    }
    return (int)(-135);
}

// Reference entry 11429c80; body size 29 bytes.
#line 1 "ENTRY_11429c80"
int FUN_11429c80(int a1) {

    if (*(int *)a1 == 1) {
        return (int)(thunk_FUN_1144d770(a1 + 24));
    }
    return (int)(-135);
}

// Reference entry 11429cb0; body size 29 bytes.
#line 1 "ENTRY_11429cb0"
int FUN_11429cb0(int a1) {

    if (*(int *)a1 == 1) {
        return (int)(thunk_FUN_1144d850(a1 + 24));
    }
    return (int)(-135);
}

// Reference entry 11429db0; body size 28 bytes.
#line 1 "ENTRY_11429db0"
int FUN_11429db0(int a1) {

    if (*(int *)(a1 + 4) < 256) {
        return (int)(thunk_FUN_1144fe20(a1));
    }
    return (int)(-135);
}

// Reference entry 11429de0; body size 28 bytes.
#line 1 "ENTRY_11429de0"
int FUN_11429de0(int a1) {

    if (*(int *)(a1 + 4) < 256) {
        return (int)(thunk_FUN_1144ff70(a1));
    }
    return (int)(-135);
}

// Reference entry 11429e10; body size 29 bytes.
#line 1 "ENTRY_11429e10"
int FUN_11429e10(int a1) {

    if (*(int *)a1 == 1) {
        return (int)(thunk_FUN_1144c420(a1 + 12));
    }
    return (int)(-135);
}

// Reference entry 11429e40; body size 28 bytes.
#line 1 "ENTRY_11429e40"
int FUN_11429e40(int a1) {

    if (*(int *)(a1 + 4) < 256) {
        return (int)(thunk_FUN_1144c450(a1));
    }
    return (int)(-135);
}

// Reference entry 11429ec0; body size 28 bytes.
#line 1 "ENTRY_11429ec0"
int FUN_11429ec0(int a1) {

    if (*(int *)(a1 + 4) < 256) {
        return (int)(thunk_FUN_1144c680(a1));
    }
    return (int)(-135);
}

// Reference entry 11429f50; body size 29 bytes.
#line 1 "ENTRY_11429f50"
int FUN_11429f50(int a1) {

    if (*(int *)a1 == 1) {
        return (int)(thunk_FUN_1144c8b0(a1 + 12));
    }
    return (int)(-135);
}

// Reference entry 11429f80; body size 29 bytes.
#line 1 "ENTRY_11429f80"
int FUN_11429f80(int a1) {

    if (*(int *)a1 == 1) {
        return (int)(thunk_FUN_1144c980(a1 + 12));
    }
    return (int)(-135);
}

// Reference entry 11429fb0; body size 29 bytes.
#line 1 "ENTRY_11429fb0"
int FUN_11429fb0(int a1) {

    if (*(int *)a1 == 1) {
        return (int)(thunk_FUN_1144c9c0(a1 + 12));
    }
    return (int)(-135);
}

// Reference entry 1142a1d0; body size 16 bytes.
#line 1 "ENTRY_1142a1d0"
int FUN_1142a1d0(int a1) {

    *(int*)a1 = (int)((int)(0));
    return (int)(-135);
}

// Reference entry 1142a1f0; body size 29 bytes.
#line 1 "ENTRY_1142a1f0"
int FUN_1142a1f0(int a1) {

    if (*(int *)a1 == 1) {
        return (int)(thunk_FUN_1144dbb0(a1 + 8));
    }
    return (int)(-137);
}

// Reference entry 1142a2a0; body size 29 bytes.
#line 1 "ENTRY_1142a2a0"
int FUN_1142a2a0(int a1) {

    if (*(int *)a1 == 1) {
        return (int)(thunk_FUN_1144e1b0(a1 + 8));
    }
    return (int)(-137);
}

// Reference entry 1142a310; body size 29 bytes.
#line 1 "ENTRY_1142a310"
int FUN_1142a310(int a1) {

    if (*(int *)a1 == 1) {
        return (int)(thunk_FUN_1144e4f0(a1 + 8));
    }
    return (int)(-137);
}

// Reference entry 1142a4c0; body size 29 bytes.
#line 1 "ENTRY_1142a4c0"
int FUN_1142a4c0(int a1) {

    if (*(int *)a1 == 1) {
        return (int)(thunk_FUN_1144e6d0(a1 + 16));
    }
    return (int)(-135);
}

// Reference entry 1142a550; body size 29 bytes.
#line 1 "ENTRY_1142a550"
int FUN_1142a550(int a1) {

    if (*(int *)a1 == 1) {
        return (int)(thunk_FUN_1144e940(a1 + 16));
    }
    return (int)(-135);
}

// Reference entry 1142a5e0; body size 29 bytes.
#line 1 "ENTRY_1142a5e0"
int FUN_1142a5e0(int a1) {

    if (*(int *)a1 == 1) {
        return (int)(thunk_FUN_1144e990(a1 + 16));
    }
    return (int)(-135);
}

// Reference entry 1142a610; body size 29 bytes.
#line 1 "ENTRY_1142a610"
int FUN_1142a610(int a1) {

    if (*(int *)a1 == 1) {
        return (int)(thunk_FUN_1144ea00(a1 + 16));
    }
    return (int)(-135);
}

// Reference entry 1142a6a0; body size 29 bytes.
#line 1 "ENTRY_1142a6a0"
int FUN_1142a6a0(int a1) {

    if (*(int *)a1 == 1) {
        return (int)(thunk_FUN_1144f2e0(a1 + 28));
    }
    return (int)(-135);
}

// Reference entry 1142a730; body size 29 bytes.
#line 1 "ENTRY_1142a730"
int FUN_1142a730(int a1) {

    if (*(int *)a1 == 1) {
        return (int)(thunk_FUN_1144f650(a1 + 28));
    }
    return (int)(-135);
}

// Reference entry 1142a840; body size 22 bytes.
#line 1 "ENTRY_1142a840"
int FUN_1142a840(int a1) {

    return (int)(*(int *)a1 != 1 ? -135 : -134);
}

// Reference entry 1142a860; body size 22 bytes.
#line 1 "ENTRY_1142a860"
int FUN_1142a860(int a1) {

    return (int)(*(int *)a1 != 1 ? -135 : -134);
}

// Reference entry 1142ab10; body size 22 bytes.
#line 1 "ENTRY_1142ab10"
int FUN_1142ab10(int a1) {

    return (int)(*(int *)a1 != 1 ? -135 : -134);
}

// Reference entry 1142ab30; body size 22 bytes.
#line 1 "ENTRY_1142ab30"
int FUN_1142ab30(int a1) {

    return (int)(*(int *)a1 != 1 ? -135 : -134);
}

// Reference entry 1142c9d6; body size 12 bytes.
#line 1 "ENTRY_1142c9d6"
int FUN_1142c9d6(void) {

    return (int)(thunk_FUN_1148ac28());
}

// Reference entry 1142d8d0; body size 19 bytes.
#line 1 "ENTRY_1142d8d0"
int FUN_1142d8d0(int a1) {

    return (int)(a1 == 0x9020000 ? 0 : -134);
}

// Reference entry 1142dfb0; body size 14 bytes.
#line 1 "ENTRY_1142dfb0"
int FUN_1142dfb0(int a1) {

    return (int)((bool)(a1 != 0x8000609));
}

// Reference entry 1142e037; body size 11 bytes.
#line 1 "ENTRY_1142e037"
int FUN_1142e037(void) {

    int v1; // (int)((int(*)(void))&FUN_1142e037<>)
    if ((short)v1 == 0) {
        FUN_1142e003();
    }
    return (int)(-135);
}

// Reference entry 1142fe00; body size 12 bytes.
#line 1 "ENTRY_1142fe00"
int FUN_1142fe00(uint a1) {

    return (int)((bool)(a1 > 255));
}

// Reference entry 11430560; body size 29 bytes.
#line 1 "ENTRY_11430560"
int FUN_11430560(int a1, int a2, int a3) {
int *v1 = (int *)((int)((int *)(a1 + 24))); // (int)&FUN_11430564
    if (*v1 != (int)((a2))) {
        return (int)(-151);
    }
    *v1 = (int)(a3);
    return (int)(0);
}

// Reference entry 114322b0; body size 13 bytes.
#line 1 "ENTRY_114322b0"
int FUN_114322b0(int result, short a2) {

    *(short*)result = (short)((int)(a2));
    return (int)(result);
}

// Reference entry 114338a0; body size 21 bytes.
#line 1 "ENTRY_114338a0"
int FUN_114338a0(int a1) {

    return (int)((*(int *)a1 & -0xff04) == 0 ? 0 : -135);
}

// Reference entry 11434a40; body size 26 bytes.
#line 1 "ENTRY_11434a40"
int FUN_11434a40(int a1, int a2) {

    return (int)(thunk_FUN_1144bdf0(a1, a2) == 0 ? 0 : -0x4e80);
}

// Reference entry 11435160; body size 26 bytes.
#line 1 "ENTRY_11435160"
int FUN_11435160(int a1) {

    uint v1 = (uint)(*(int *)&DAT_122fa560 ^ a1); // (int)&FUN_11435166
    return (int)((-((v1 / 2)) | -v1) / 0x80000000);
}

// Reference entry 11435180; body size 10 bytes.
#line 1 "ENTRY_11435180"
int FUN_11435180(int a1) {

    return (int)(*(int *)&DAT_122fa560 ^ a1);
}

// Reference entry 11435190; body size 25 bytes.
#line 1 "ENTRY_11435190"
int FUN_11435190(int a1, int a2, int a3) {

    return (int)((*(int *)&DAT_122fa560 ^ -1 - a1) & a3 | a2 & a1);
}

// Reference entry 11435760; body size 24 bytes.
#line 1 "ENTRY_11435760"
int FUN_11435760(int a1, int a2, int a3) {

    return (int)((*(int *)&DAT_122fa560 ^ -1 - a1) & a3 | a2 & a1);
}

// Reference entry 11435940; body size 11 bytes.
#line 1 "ENTRY_11435940"
int FUN_11435940(int result, int a2) {

    *(int*)result = (int)((int)(a2));
    return (int)(result);
}

// Reference entry 11437930; body size 15 bytes.
#line 1 "ENTRY_11437930"
int FUN_11437930(int a1) {

    int result = (int)(0); // (int)&FUN_11437934
    uint v1 = (uint)(a1); // (int)&FUN_11437934
    result++;
    while (v1 >= 128) {
        v1 /= 128;
        result++;
    }
    return (int)(result);
}

// Reference entry 1143aa60; body size 25 bytes.
#line 1 "ENTRY_1143aa60"
int FUN_1143aa60(int a1) {

    if (*(int *)(a1 + 88) != 0) {
        if (*(int *)(a1 + 92) == 0) {
            return (int)(1);
        }
    }
    return (int)(0);
}

// Reference entry 1143e6e0; body size 13 bytes.
#line 1 "ENTRY_1143e6e0"
int FUN_1143e6e0(int a1) {

    return (int)(*(int *)(a1 + 12) == 0);
}

// Reference entry 11440230; body size 13 bytes.
#line 1 "ENTRY_11440230"
int FUN_11440230(int result, short a2) {

    *(short*)result = (short)((int)(a2));
    return (int)(result);
}

// Reference entry 11440520; body size 23 bytes.
#line 1 "ENTRY_11440520"
int FUN_11440520(int a1) {

    return (int)((bool)(a1 == 1 | a1 == 6));
}

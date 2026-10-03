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
typedef int FILE;
typedef unsigned long DWORD;
typedef unsigned short WORD;
typedef unsigned char BYTE;
typedef int BOOL;
typedef void *HANDLE;
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
typedef long fpos_t;
typedef struct { char _p; } _Mbstatet;
struct GUID { char _pad; };
struct exception { char _pad; };
struct type_info { char _pad; };
extern "C" void *memcpy(void *, const void *, size_t);
extern "C" void *memset(void *, int, size_t);
extern "C" int memcmp(const void *, const void *, size_t);
extern "C" size_t strlen(const char *);
extern "C" size_t wcslen(const wchar_t *);
extern "C" size_t fread(void *, size_t, size_t, FILE *);
extern "C" size_t fwrite(const void *, size_t, size_t, FILE *);
extern "C" void *malloc(size_t);
extern "C" void free(void *);
extern "C" void *calloc(size_t, size_t);
extern "C" void *realloc(void *, size_t);
extern "C" char *strcpy(char *, const char *);
extern "C" wchar_t *wcscpy(wchar_t *, const wchar_t *);
extern "C" char *strstr(char *, const char *);
extern "C" int strcmp(const char *, const char *);
extern "C" int wcscmp(const wchar_t *, const wchar_t *);
extern "C" unsigned long __readfsdword(unsigned long);
#pragma intrinsic(__readfsdword)
extern int FUN_11482ed0(...);
extern int FUN_1148b28d(...);
extern int FUN_1148b387(...);
extern int FUN_1148b394(...);
extern int _DllMain_12(...);
extern int __Init_thread_notify(...);
extern int __Init_thread_wait(...);
extern int ___get_entropy(...);
extern int ___scrt_acquire_startup_lock(...);
extern int ___scrt_dllmain_after_initialize_c(...);
extern int ___scrt_dllmain_crt_thread_attach(...);
extern int ___scrt_dllmain_crt_thread_detach(...);
extern int ___scrt_initialize_crt(...);
extern int ___scrt_is_nonwritable_in_current_image(...);
extern int ___scrt_is_ucrt_dll_in_use(...);
extern int ___scrt_uninitialize_crt(...);
extern __declspec(dllimport) int __current_exception(...);
extern __declspec(dllimport) int __current_exception_context(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int cpuid_Extended_Feature_Enumeration_info(...);
extern int cpuid_Version_info(...);
extern int cpuid_basic_info(...);
extern int dllmain_crt_dispatch(...);
extern int dllmain_raw(...);
extern __declspec(dllimport) int initialize_onexit_table(...);
extern __declspec(dllimport) int initterm(...);
extern __declspec(dllimport) int initterm_e(...);
extern int size(...);
extern __declspec(dllimport) int terminate(...);
extern int thunk_FUN_10246290(...);
extern int thunk_FUN_105b6da0(...);
extern int thunk_FUN_105ba370(...);
extern int thunk_FUN_10723b00(...);
extern int thunk_FUN_113c5de0(...);
extern int thunk_FUN_113c7f60(...);
extern int thunk_FUN_113c83e0(...);
extern int thunk_FUN_113c8950(...);
extern int thunk_FUN_114621a0(...);
extern int thunk_FUN_11462490(...);
extern int thunk_FUN_114631f0(...);
extern int thunk_FUN_11463440(...);
extern int thunk_FUN_114636a0(...);
extern int thunk_FUN_11465e10(...);
extern int thunk_FUN_11466460(...);
extern int thunk_FUN_1146bd90(...);
extern int thunk_FUN_1146bea0(...);
extern int thunk_FUN_1146bf20(...);
extern int thunk_FUN_1146c060(...);
extern int thunk_FUN_1146c180(...);
extern int thunk_FUN_1146c960(...);
extern int thunk_FUN_1146cad0(...);
extern int thunk_FUN_11473e30(...);
extern int thunk_FUN_11474110(...);
extern int thunk_FUN_11474210(...);
extern int thunk_FUN_11474270(...);
extern int thunk_FUN_11474440(...);
extern int thunk_FUN_1147b2f0(...);
extern int thunk_FUN_1147b4b0(...);
extern int thunk_FUN_1147b530(...);
extern int thunk_FUN_11480a00(...);
extern int thunk_FUN_11480e00(...);
extern int thunk_FUN_11481660(...);
extern int thunk_FUN_114817c0(...);
extern int thunk_FUN_11482290(...);
extern int thunk_FUN_11482460(...);
extern int thunk_FUN_114826c0(...);
extern int thunk_FUN_11482760(...);
extern int thunk_FUN_11482900(...);
extern int thunk_FUN_11482d40(...);
extern int thunk_FUN_114837f0(...);
extern int thunk_FUN_11488160(...);
extern int thunk_FUN_11488510(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148a644(...);
extern int thunk_FUN_1148a6cc(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148c988(...);
extern int thunk_FUN_1148ccef(...);
extern int thunk_FUN_1148ccfe(...);
extern int thunk_FUN_1148cd0d(...);
extern int thunk_FUN_1148cd31(...);
extern int thunk_FUN_1148cd37(...);
extern int thunk_FUN_1148cd6e(...);
extern int xinuse(...);
extern int DAT_00000004;
extern int DAT_00000007;
extern int DAT_11867000;
extern int DAT_1186c968;
extern int DAT_1186ca6c;
extern int DAT_1186cc74;
extern int DAT_11c08350;
extern int DAT_11c0836c;
extern int DAT_11c08374;
extern int DAT_11c0837c;
extern int DAT_11c08384;
extern int DAT_121190b0;
extern int DAT_121190c0;
extern int DAT_121190c4;
extern int DAT_121190cc;
extern int DAT_121190dc;
extern int DAT_121190e0;
extern int DAT_1211952c;
extern int DAT_1211953c;
extern int DAT_12119540;
extern int DAT_12119550;
extern int DAT_12119560;
extern int DAT_12119564;
extern int DAT_12119584;
extern int DAT_12119594;
extern int DAT_12119598;
extern int DAT_1211961c;
extern int DAT_1211962c;
extern int DAT_12119630;
extern int DAT_12119658;
extern int DAT_12119668;
extern int DAT_1211966c;
extern int DAT_12119b20;
extern int DAT_12119b30;
extern int DAT_12119b34;
extern int DAT_12126b74;
extern int DAT_12126b80;
extern int DAT_12126b84;
extern int DAT_12126b90;
extern int DAT_121a0718;
extern int DAT_121a071c;
extern int DAT_121a0830;
extern int DAT_121a0834;
extern int DAT_121a08d4;
extern int DAT_121a08d8;
extern int DAT_121a08f4;
extern int DAT_121a08f8;
extern int DAT_121a0978;
extern int DAT_121a097c;
extern int DAT_121a09c4;
extern int DAT_121a09c8;
extern int DAT_121a0a18;
extern int DAT_121a0a1c;
extern int DAT_121a0a80;
extern int DAT_121a0a84;
extern int DAT_121a0a94;
extern int DAT_121a0a98;
extern int DAT_121a0ad4;
extern int DAT_121a0ad8;
extern int DAT_121a0ae4;
extern int DAT_121a0ae8;
extern int DAT_121a0af0;
extern int DAT_121a0af4;
extern int DAT_121a0b00;
extern int DAT_121a0b04;
extern int DAT_121a0b24;
extern int DAT_121a0b28;
extern int DAT_121a0bb4;
extern int DAT_121a0bb8;
extern int DAT_121a0c58;
extern int DAT_121a0c5c;
extern int DAT_121a0ca8;
extern int DAT_121a0cac;
extern int DAT_121a0dc0;
extern int DAT_121a0dc4;
extern int DAT_121a1154;
extern int DAT_121a1158;
extern int DAT_121a115c;
extern int DAT_121a11a8;
extern int DAT_121a11ac;
extern int DAT_121a1360;
extern int DAT_121a1364;
extern int DAT_121a13e8;
extern int DAT_121a13ec;
extern int DAT_121a13f8;
extern int DAT_121a13fc;
extern int DAT_121a1408;
extern int DAT_121a140c;
extern int DAT_121a1524;
extern int DAT_121a1528;
extern int DAT_121a1534;
extern int DAT_121a1538;
extern int DAT_121a1544;
extern int DAT_121a1548;
extern int DAT_121a159c;
extern int DAT_121a15a0;
extern int DAT_121a1644;
extern int DAT_121a1648;
extern int DAT_121a16cc;
extern int DAT_121a16d0;
extern int DAT_121a16dc;
extern int DAT_121a16e0;
extern int DAT_121a16ec;
extern int DAT_121a16f0;
extern int DAT_121a16fc;
extern int DAT_121a1700;
extern int DAT_121a170c;
extern int DAT_121a1710;
extern int DAT_121a171c;
extern int DAT_121a1720;
extern int DAT_121a172c;
extern int DAT_121a1730;
extern int DAT_121a173c;
extern int DAT_121a1740;
extern int DAT_121a174c;
extern int DAT_121a1750;
extern int DAT_121a18b4;
extern int DAT_121a18b8;
extern int DAT_121a18c4;
extern int DAT_121a18c8;
extern int DAT_121a1ab8;
extern int DAT_121a1abc;
extern int DAT_121a1da8;
extern int DAT_121a1dac;
extern int DAT_121a1f90;
extern int DAT_121a1f94;
extern int DAT_121a2018;
extern int DAT_121a2020;
extern int DAT_121a25f0;
extern int DAT_121a25f4;
extern int DAT_121a2650;
extern int DAT_121a2654;
extern int DAT_121a2684;
extern int DAT_121a2688;
extern int DAT_121a2a58;
extern int DAT_121a2a5c;
extern int DAT_121a2a64;
extern int DAT_121a4a28;
extern int DAT_121a4a2c;
extern int DAT_122fabd4;
extern int DAT_122fabdd;
extern int DAT_122fabe0;
extern int DAT_122fabe4;
extern int DAT_122fabe8;
extern int DAT_122fabec;
extern int DAT_122fabf0;
extern int DAT_122fabf4;
extern int DAT_122fac00;
extern int DAT_122fac04;
extern int DAT_122fac08;
extern int DAT_122fac20;
extern int DAT_122fac34;
extern int DAT_122faff4;
extern int DAT_122faff8;
extern int DAT_122fb000;
extern int _tls_index;
extern int ghidra_vftable_SCLoggingHelper;
extern int in_XCR0;
extern int uStack_10;
extern int uStack_11;
extern int uStack_12;
extern int uStack_1c;
extern int uStack_30a;
extern int uStack_30b;
extern int uStack_4;
extern int uStack_6;
extern int uStack_7;
extern int uStack_8;
extern int uStack_9;
extern int uStack_a;
extern int uStack_c;
extern int uStack_e;
extern int uStack_f;
extern undefined1 LAB_100367c8[];
extern undefined1 LAB_1008f477[];
extern undefined1 LAB_11484866[];
extern undefined1 LAB_114848a7[];
extern undefined1 LAB_11485206[];
extern undefined1 LAB_1148710d[];
extern undefined1 LAB_1148757c[];
extern undefined1 LAB_1148760b[];
extern undefined1 LAB_1148761d[];
extern undefined1 LAB_114877a8[];
extern undefined1 LAB_114877ad[];
extern undefined1 LAB_114877b2[];
extern undefined1 LAB_114877f9[];
extern undefined1 LAB_1148801f[];
extern undefined1 LAB_11488061[];
extern undefined1 LAB_11488228[];
extern undefined1 LAB_114882d9[];
extern undefined1 LAB_11488378[];
extern undefined1 LAB_114883a9[];
extern undefined1 LAB_1148a7c1[];
extern undefined1 LAB_1148ab47[];
extern undefined1 LAB_1148bf7d[];
extern undefined1 LAB_114f4a40[];
extern undefined1 LAB_114fad30[];
extern undefined1 LAB_11500620[];
extern undefined1 LAB_11500890[];
extern undefined1 LAB_1150ad20[];
extern undefined1 LAB_1150ad50[];
extern undefined1 LAB_1150f570[];
extern undefined1 LAB_1150ff70[];
extern undefined1 LAB_11510920[];
extern undefined1 LAB_11510980[];
extern undefined1 LAB_115128f0[];
extern undefined1 LAB_11512920[];
extern undefined1 LAB_115132d0[];
extern undefined1 LAB_11515e40[];
extern undefined1 LAB_1151a210[];
extern undefined1 LAB_1151bd00[];
extern undefined1 LAB_1151e6c0[];
extern undefined1 LAB_115279e0[];
extern undefined1 LAB_115408f0[];
extern undefined1 LAB_115591b0[];
extern undefined1 LAB_1155c2a0[];
extern undefined1 LAB_1155c2d0[];
extern undefined1 LAB_1155c300[];
extern undefined1 LAB_11560500[];
extern undefined1 LAB_11560530[];
extern undefined1 LAB_11560560[];
extern undefined1 LAB_11562220[];
extern undefined1 LAB_11564d70[];
extern undefined1 LAB_11566ec0[];
extern undefined1 LAB_11566ef0[];
extern undefined1 LAB_11566f20[];
extern undefined1 LAB_11566f50[];
extern undefined1 LAB_11566f80[];
extern undefined1 LAB_11566fb0[];
extern undefined1 LAB_11566fe0[];
extern undefined1 LAB_11567010[];
extern undefined1 LAB_11567040[];
extern undefined1 LAB_1156d320[];
extern undefined1 LAB_1156d380[];
extern undefined1 LAB_115746d0[];
extern undefined1 LAB_11586d60[];
extern undefined1 LAB_115a5800[];
extern undefined1 LAB_115d7010[];
extern undefined1 LAB_115daf40[];
extern undefined1 LAB_115dee70[];
extern undefined1 LAB_116a08e0[];
extern int *PTR_guard_check_icall_12302000;
extern int *stack0xfffffffc;
extern void *ExceptionList;
typedef void *ASCII;
typedef void *HINSTANCE__;
typedef void *I;
typedef void *IHDR;
typedef void *LPCRITICAL_SECTION;
typedef void *M;
typedef void *PNG;
typedef void *WARNING;
struct BVar5 { char _pad; BVar5(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Can { char _pad; Can(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct EnterCriticalSection { char _pad; EnterCriticalSection(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Extra { char _pad; Extra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Insufficient { char _pad; Insufficient(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct IsProcessorFeaturePresent { char _pad; IsProcessorFeaturePresent(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct LeaveCriticalSection { char _pad; LeaveCriticalSection(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Libraries { char _pad; Libraries(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Library { char _pad; Library(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Match { char _pad; Match(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct No { char _pad; No(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Not { char _pad; Not(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Release { char _pad; Release(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SEH_prolog4 { char _pad; SEH_prolog4(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Saving { char _pad; Saving(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Single { char _pad; Single(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Studio { char _pad; Studio(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct ThreadLocalStoragePointer { char _pad; ThreadLocalStoragePointer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Visual { char _pad; Visual(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct WaitForSingleObjectEx { char _pad; WaitForSingleObjectEx(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
using namespace std;
void FUN_11483cd0(int *param_1,int param_2,int param_3,uint param_4);
extern void FUN_11483cd0(...);
void FUN_11484420(int param_1,undefined4 param_2,int param_3);
extern void FUN_11484420(...);
void FUN_114846c0(int param_1,int param_2,uint param_3);
extern void FUN_114846c0(...);
void FUN_11485120(int param_1,int param_2,uint param_3);
extern void FUN_11485120(...);
void FUN_114852b0(uint param_1,undefined4 param_2,int param_3);
extern void FUN_114852b0(...);
void FUN_114853c0(int param_1,int param_2,uint param_3);
extern void FUN_114853c0(...);
void FUN_11486920(uint param_1,int param_2,uint param_3);
extern void FUN_11486920(...);
void FUN_11486bd0(int param_1,undefined4 param_2,uint param_3);
extern void FUN_11486bd0(...);
void FUN_11486f20(uint param_1,undefined4 param_2,int param_3);
extern void FUN_11486f20(...);
void FUN_11487040(int param_1,undefined4 param_2,int param_3);
extern void FUN_11487040(...);
void FUN_11487260(int param_1,int param_2,int param_3);
extern void FUN_11487260(...);
void FUN_114873e0(int param_1,int param_2,uint param_3);
extern void FUN_114873e0(...);
void FUN_114876f0(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern void FUN_114876f0(...);
void FUN_11487bb0(int param_1,int param_2,int param_3,undefined4 param_4,int *param_5,int param_6,
                 int *param_7);
extern void FUN_11487bb0(...);
void FUN_11487dc0(int param_1,undefined4 param_2);
extern void FUN_11487dc0(...);
int FUN_11487f40(int param_1,undefined4 param_2,uint param_3,uint *param_4,undefined4 param_5,
                int *param_6,int param_7);
extern int FUN_11487f40(...);
void FUN_11488160(int param_1,int param_2,int param_3);
extern void FUN_11488160(...);
void * FUN_11488450(int param_1,uint param_2,int param_3);
extern void * FUN_11488450(...);
void FUN_11488850(int param_1,byte *param_2,byte *param_3);
extern void FUN_11488850(...);
void FUN_11488be0(int param_1);
extern void FUN_11488be0(...);
void FUN_11488d70(int param_1,int param_2);
extern void FUN_11488d70(...);
undefined4 FUN_114891d0(int param_1);
extern undefined4 FUN_114891d0(...);
void FUN_114892b0(int param_1,undefined4 param_2,undefined1 *param_3,undefined1 *param_4);
extern void FUN_114892b0(...);
void FUN_11489350(int *param_1,byte *param_2,int param_3);
extern void FUN_11489350(...);
void FUN_114894f0(int *param_1,byte *param_2,byte *param_3);
extern void FUN_114894f0(...);
void FUN_114898e0(int *param_1,undefined1 *param_2);
extern void FUN_114898e0(...);
void FUN_11489a50(int param_1,int *param_2);
extern void FUN_11489a50(...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4 FUN_1148a74e(int param_1);
extern /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4 FUN_1148a74e(...);
void FUN_1148aaa4(int *param_1);
extern void FUN_1148aaa4(...);
void FUN_1148ab00(int *param_1);
extern void FUN_1148ab00(...);
/* Library Function - Single Match __Init_thread_wait Library: Visual Studio 2019 Release */ void FUN_1148abc7(DWORD param_1);
extern /* Library Function - Single Match __Init_thread_wait Library: Visual Studio 2019 Release */ void FUN_1148abc7(...);
/* Library Function - Single Match int __stdcall dllmain_crt_dispatch(struct HINSTANCE__ * const_,unsigned long_,void * const_) Library: Visual Studio 2019 Release */ int __stdcall FUN_1148b143(HINSTANCE__ *param_1,ulong param_2,void *param_3);
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */ undefined4 FUN_1148b1aa(undefined4 param_1,undefined4 param_2);
extern /* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */ undefined4 FUN_1148b1aa(...);
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */ byte FUN_1148b2f2(undefined4 param_1);
extern /* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */ byte FUN_1148b2f2(...);
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */ int __cdecl FUN_1148b3ce(HINSTANCE__ *param_1,ulong param_2,void *param_3);
/* Library Function - Single Match __alldiv Library: Visual Studio */ undefined8 __stdcall FUN_1148b9a0(uint param_1,uint param_2,uint param_3,uint param_4);
extern /* Library Function - Single Match __alldiv Library: Visual Studio */ undefined8 FUN_1148b9a0(...);
/* Library Function - Single Match __allrem Library: Visual Studio */ undefined8 __stdcall FUN_1148bed0(uint param_1,uint param_2,uint param_3,uint param_4);
extern /* Library Function - Single Match __allrem Library: Visual Studio */ undefined8 FUN_1148bed0(...);
/* WARNING: Removing unreachable block (ram,0x1148c0b9) */ undefined4 FUN_1148c04b(void);
/* Library Function - Single Match __aullrem Library: Visual Studio */ undefined8 __stdcall FUN_1148c350(uint param_1,uint param_2,uint param_3,uint param_4);
extern /* Library Function - Single Match __aullrem Library: Visual Studio */ undefined8 FUN_1148c350(...);
/* Library Function - Single Match __alldvrm Library: Visual Studio */ undefined8 __stdcall FUN_1148c3f0(uint param_1,uint param_2,uint param_3,uint param_4);
extern /* Library Function - Single Match __alldvrm Library: Visual Studio */ undefined8 FUN_1148c3f0(...);
/* Library Function - Single Match __aulldiv Library: Visual Studio */ undefined8 __stdcall FUN_1148c540(uint param_1,uint param_2,uint param_3,uint param_4);
extern /* Library Function - Single Match __aulldiv Library: Visual Studio */ undefined8 FUN_1148c540(...);
/* Library Function - Single Match __aulldvrm Library: Visual Studio */ undefined8 __stdcall FUN_1148c5d0(uint param_1,uint param_2,uint param_3,uint param_4);
extern /* Library Function - Single Match __aulldvrm Library: Visual Studio */ undefined8 FUN_1148c5d0(...);
void FUN_1148c7fb(int param_1,int param_2,uint param_3);
extern void FUN_1148c7fb(...);
undefined4 __stdcall FUN_1148cb93(int *param_1);
undefined4 __stdcall FUN_1148cb93(int *param_1);
/* Library Function - Single Match ___security_init_cookie Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */ void __cdecl FUN_1148cc68(void);
extern /* Library Function - Single Match ___security_init_cookie Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */ void __cdecl FUN_1148cc68(...);
void FUN_117e8ad0(void);
extern void FUN_117e8ad0(...);
void FUN_117e9d10(void);
extern void FUN_117e9d10(...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_117ea340(void);
extern /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_117ea340(...);
void FUN_117ea900(void);
extern void FUN_117ea900(...);
void FUN_117eb4b0(void);
extern void FUN_117eb4b0(...);
void FUN_117eb530(void);
extern void FUN_117eb530(...);
void FUN_117ebc50(void);
extern void FUN_117ebc50(...);
void FUN_117ec520(void);
extern void FUN_117ec520(...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_117ec8b0(void);
extern /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_117ec8b0(...);
void FUN_117ecb50(void);
extern void FUN_117ecb50(...);
void FUN_117ecc40(void);
extern void FUN_117ecc40(...);
void FUN_117eccc0(void);
extern void FUN_117eccc0(...);
void FUN_117ecd40(void);
extern void FUN_117ecd40(...);
void FUN_117ecdc0(void);
extern void FUN_117ecdc0(...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_117eceb0(void);
extern /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_117eceb0(...);
void FUN_117ecfd0(void);
extern void FUN_117ecfd0(...);
void FUN_117eda60(void);
extern void FUN_117eda60(...);
void FUN_117ee570(void);
extern void FUN_117ee570(...);
void FUN_117eeba0(void);
extern void FUN_117eeba0(...);
void FUN_117f0730(void);
extern void FUN_117f0730(...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_117f1470(void);
extern /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_117f1470(...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_117f1bc0(void);
extern /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_117f1bc0(...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_117f3d10(void);
extern /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_117f3d10(...);
void FUN_117f41e0(void);
extern void FUN_117f41e0(...);
void FUN_117f4260(void);
extern void FUN_117f4260(...);
void FUN_117f61c0(void);
extern void FUN_117f61c0(...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_117f64e0(void);
extern /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_117f64e0(...);
void FUN_117f6cc0(void);
extern void FUN_117f6cc0(...);
void FUN_117f6d40(void);
extern void FUN_117f6d40(...);
void FUN_117f6dc0(void);
extern void FUN_117f6dc0(...);
void FUN_117f7a10(void);
extern void FUN_117f7a10(...);
void FUN_117f7a90(void);
extern void FUN_117f7a90(...);
void FUN_117f7b10(void);
extern void FUN_117f7b10(...);
void FUN_117f8240(void);
extern void FUN_117f8240(...);
void FUN_117f8fe0(void);
extern void FUN_117f8fe0(...);
void FUN_117f9ae0(void);
extern void FUN_117f9ae0(...);
void FUN_117f9b60(void);
extern void FUN_117f9b60(...);
void FUN_117f9be0(void);
extern void FUN_117f9be0(...);
void FUN_117f9c60(void);
extern void FUN_117f9c60(...);
void FUN_117f9ce0(void);
extern void FUN_117f9ce0(...);
void FUN_117f9d60(void);
extern void FUN_117f9d60(...);
void FUN_117f9de0(void);
extern void FUN_117f9de0(...);
void FUN_117f9e60(void);
extern void FUN_117f9e60(...);
void FUN_117f9ee0(void);
extern void FUN_117f9ee0(...);
void FUN_117fbe00(void);
extern void FUN_117fbe00(...);
void FUN_117fbef0(void);
extern void FUN_117fbef0(...);
void FUN_117fe9e0(void);
extern void FUN_117fe9e0(...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_118027a0(void);
extern /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_118027a0(...);
void FUN_11802ff0(void);
extern void FUN_11802ff0(...);
void FUN_118055a0(void);
extern void FUN_118055a0(...);
void FUN_118064a0(void);
extern void FUN_118064a0(...);
void FUN_1180a9b0(void);
extern void FUN_1180a9b0(...);
void FUN_1180abf0(void);
extern void FUN_1180abf0(...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_1180aff0(void);
extern /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_1180aff0(...);
void FUN_1180baa0(void);
extern void FUN_1180baa0(...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_1180e380(void);
extern /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_1180e380(...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_1182acc0(void);
extern /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_1182acc0(...);
// Reference entry 11483cd0; body size 1222 bytes.
#line 1 "ENTRY_11483cd0"

void FUN_11483cd0(int *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  void *_Src;
  byte *pbVar8;
  void *_Dst;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_3c [3];
  byte local_39;
  byte *local_38;
  byte *local_34;
  byte *local_30;
  byte *local_2c;
  byte *local_28;
  byte *local_24;
  byte *local_20;
  byte *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  byte *local_c [2];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)auStack_3c);
  local_14 = (int)(param_3);
  local_18 = (int *)(param_1);
  if ((param_2 != 0) && ((int *)(param_1) != (int *)0x0)) {
    iVar7 = (int)(*param_1);
    local_10 = (int)(iVar7 * *(int *)(&DAT_11c08350 + param_3 * 4));
    bVar2 = (byte)(*(byte *)((int)param_1 + 0xb));
    uVar1 = (uint)(local_10 - 1);
    if (bVar2 == 1) {
      local_30 = (byte *)((byte *)(param_4 & 0x10000));
      pbVar8 = (byte *)((byte *)((iVar7 - 1U >> 3) + param_2));
      pbVar10 = (byte *)((byte *)((uVar1 >> 3) + param_2));
      local_24 = (byte *)((byte *)0x0);
      pbVar9 = (byte *)((byte *)(iVar7 - 1U & 7));
      local_20 = (byte *)((byte *)((uint)((byte *)(local_30) == (byte *)0x0) * 2 + -1));
      local_c[0] = (byte *)((byte *)0x0);
      if ((byte *)(local_30) == (byte *)0x0) {
        local_c[0] = (byte *)(&DAT_00000007);
      }
      local_1c = (byte *)((byte *)(-(uint)((byte *)(local_30) != (byte *)0x0) & 7));
      pbVar4 = (byte *)(local_38);
      if (iVar7 != 0) {
        if ((byte *)(local_30) == (byte *)0x0) {
          pbVar9 = (byte *)((byte *)(7 - (int)pbVar9));
        }
        pbVar5 = (byte *)((byte *)(uVar1 & 7));
        if ((byte *)(local_30) == (byte *)0x0) {
          pbVar5 = (byte *)((byte *)(7 - (int)(uVar1 & 7)));
        }
        do {
          local_34 = (byte *)(pbVar8);
          local_38 = (byte *)(pbVar9);
          bVar2 = (byte)(*local_34);
          iVar7 = (int)(*(int *)(&DAT_11c08350 + param_3 * 4));
          pbVar9 = (byte *)(pbVar10);
          if (0 < iVar7) {
            do {
              local_30 = (byte *)(pbVar5);
              *pbVar10 = (byte)((byte)(0x7f7f >> (7 - (byte)local_30 & 0x1f)) & *pbVar10 |
                         (bVar2 >> ((byte)local_38 & 0x1f) & 1) << ((byte)local_30 & 0x1f));
              pbVar9 = (byte *)(pbVar10 + -1);
              pbVar5 = (byte *)(local_1c);
              if ((byte *)(local_30) != (byte *)(local_c)[0]) {
                pbVar9 = (byte *)(pbVar10);
                pbVar5 = (byte *)(local_30 + (int)local_20);
              }
              iVar7 = (int)(iVar7 + -1);
              pbVar10 = (byte *)(pbVar9);
            } while (iVar7 != 0);
          }
          pbVar8 = (byte *)(local_34 + -1);
          pbVar4 = (byte *)(local_1c);
          if ((byte *)(local_38) != (byte *)(local_c)[0]) {
            pbVar8 = (byte *)(local_34);
            pbVar4 = (byte *)(local_38 + (int)local_20);
          }
          local_24 = (byte *)(local_24 + 1);
          pbVar10 = (byte *)(pbVar9);
          pbVar9 = (byte *)(pbVar4);
          local_2c = (byte *)(local_34);
          local_28 = (byte *)(local_38);
        } while (local_24 < (byte *)*param_1);
      }
    }
    else if (bVar2 == 2) {
      local_20 = (byte *)((byte *)((iVar7 - 1U >> 2) + param_2));
      uVar11 = (uint)(iVar7 - 1U & 3);
      uVar3 = (uint)(uVar1 & 3);
      if ((param_4 & 0x10000) == 0) {
        local_28 = (byte *)((byte *)0x0);
        local_34 = (byte *)((byte *)0x2);
        uVar11 = (uint)(3 - uVar11);
        uVar3 = (uint)(3 - uVar3);
        pbVar4 = (byte *)((byte *)0x6);
      }
      else {
        local_28 = (byte *)((byte *)0x6);
        local_34 = (byte *)((byte *)0xfffffffe);
        pbVar4 = (byte *)((byte *)0x0);
      }
      pbVar9 = (byte *)((byte *)(uVar3 * 2));
      local_2c = (byte *)((byte *)(uVar11 * 2));
      local_1c = (byte *)((byte *)0x0);
      pbVar10 = (byte *)((byte *)((uVar1 >> 2) + param_2));
      pbVar8 = (byte *)(local_34);
      if (*param_1 != 0) {
        do {
          local_c[0] = (byte *)(local_20);
          local_24 = (byte *)(local_2c);
          local_39 = (byte)(*local_c[0] >> ((byte)local_24 & 0x1f) & 3);
          pbVar5 = (byte *)(pbVar10);
          pbVar6 = (byte *)((byte *)*(int *)(&DAT_11c08350 + param_3 * 4));
          if (0 < *(int *)(&DAT_11c08350 + param_3 * 4)) {
            do {
              local_30 = (byte *)(pbVar6);
              pbVar6 = (byte *)(local_34 + (int)pbVar9);
              *pbVar10 = (byte)((byte)(0x3f3f >> (6 - (byte)pbVar9 & 0x1f)) & *pbVar10 |
                         local_39 << ((byte)pbVar9 & 0x1f));
              bVar12 = (bool)((byte *)((pbVar9)) != (byte *)(pbVar4));
              pbVar5 = (byte *)(pbVar10 + -1);
              pbVar9 = (byte *)(local_28);
              if (bVar12) {
                pbVar5 = (byte *)(pbVar10);
                pbVar9 = (byte *)(pbVar6);
              }
              pbVar10 = (byte *)(pbVar5);
              pbVar6 = (byte *)((byte *)((int)local_30 + -1));
            } while ((int)local_30 + -1 != 0);
            local_30 = (byte *)((byte *)0x0);
          }
          local_1c = (byte *)(local_1c + 1);
          local_20 = (byte *)(local_c[0] + -1);
          if ((byte *)((local_24)) != (byte *)(pbVar4)) {
            local_20 = (byte *)(local_c[0]);
          }
          local_2c = (byte *)(local_28);
          if ((byte *)((local_24)) != (byte *)(pbVar4)) {
            local_2c = (byte *)(local_34 + (int)local_24);
          }
          pbVar10 = (byte *)(pbVar5);
        } while (local_1c < (byte *)*param_1);
      }
    }
    else if (bVar2 == 4) {
      local_1c = (byte *)((byte *)((iVar7 - 1U >> 1) + param_2));
      uVar11 = (uint)(iVar7 - 1U & 1);
      uVar3 = (uint)(uVar1 & 1);
      if ((param_4 & 0x10000) == 0) {
        local_34 = (byte *)((byte *)0x0);
        uVar3 = (uint)(1 - uVar3);
        uVar11 = (uint)(1 - uVar11);
        local_2c = (byte *)(&DAT_00000004);
        local_28 = (byte *)(&DAT_00000004);
      }
      else {
        local_34 = (byte *)(&DAT_00000004);
        local_28 = (byte *)((byte *)0xfffffffc);
        local_2c = (byte *)((byte *)0x0);
      }
      pbVar9 = (byte *)((byte *)(uVar3 * 4));
      local_20 = (byte *)((byte *)0x0);
      pbVar4 = (byte *)((byte *)(uVar11 * 4));
      pbVar10 = (byte *)((byte *)((uVar1 >> 1) + param_2));
      pbVar8 = (byte *)(local_34);
      if (*param_1 != 0) {
        do {
          local_c[0] = (byte *)(local_1c);
          local_30 = (byte *)(pbVar4);
          local_39 = (byte)(*local_c[0] >> ((byte)local_30 & 0x1f) & 0xf);
          pbVar5 = (byte *)(pbVar10);
          pbVar4 = (byte *)((byte *)*(int *)(&DAT_11c08350 + param_3 * 4));
          if (0 < *(int *)(&DAT_11c08350 + param_3 * 4)) {
            do {
              local_24 = (byte *)(pbVar4);
              pbVar4 = (byte *)(local_28 + (int)pbVar9);
              *pbVar10 = (byte)((byte)(0xf0f >> (4 - (byte)pbVar9 & 0x1f)) & *pbVar10 |
                         local_39 << ((byte)pbVar9 & 0x1f));
              bVar12 = (bool)((byte *)(pbVar9) != (byte *)(local_2c));
              pbVar5 = (byte *)(pbVar10 + -1);
              pbVar9 = (byte *)(local_34);
              if (bVar12) {
                pbVar5 = (byte *)(pbVar10);
                pbVar9 = (byte *)(pbVar4);
              }
              pbVar10 = (byte *)(pbVar5);
              pbVar4 = (byte *)((byte *)((int)local_24 + -1));
            } while ((int)local_24 + -1 != 0);
            local_24 = (byte *)((byte *)0x0);
          }
          local_20 = (byte *)(local_20 + 1);
          local_1c = (byte *)(local_c[0] + -1);
          if ((byte *)(local_30) != (byte *)(local_2c)) {
            local_1c = (byte *)(local_c[0]);
          }
          pbVar4 = (byte *)(local_34);
          if ((byte *)(local_30) != (byte *)(local_2c)) {
            pbVar4 = (byte *)(local_28 + (int)local_30);
          }
          pbVar10 = (byte *)(pbVar5);
        } while (local_20 < (byte *)*param_1);
      }
    }
    else {
      uVar11 = (uint)((uint)(bVar2 >> 3));
      local_38 = (byte *)((byte *)0x0);
      _Src = (void *)((void *)((iVar7 + -1) * uVar11 + param_2));
      _Dst = (void *)((void *)(uVar11 * uVar1 + param_2));
      pbVar4 = (byte *)(local_38);
      pbVar8 = (byte *)(local_34);
      if (iVar7 != 0) {
        do {
          pbVar9 = (byte *)(local_38);
          memcpy(local_c,_Src,uVar11);
          iVar7 = (int)(*(int *)(&DAT_11c08350 + local_14 * 4));
          if (0 < iVar7) {
            do {
              memcpy(_Dst,local_c,uVar11);
              _Dst = (void *)((void *)((int)_Dst - uVar11));
              iVar7 = (int)(iVar7 + -1);
              pbVar9 = (byte *)(local_38);
            } while (iVar7 != 0);
          }
          local_38 = (byte *)(pbVar9 + 1);
          _Src = (void *)((void *)((int)_Src - uVar11));
          pbVar4 = (byte *)(local_38);
          pbVar8 = (byte *)(local_34);
        } while (local_38 < (byte *)*local_18);
      }
    }
    local_34 = (byte *)(pbVar8);
    local_38 = (byte *)(pbVar4);
    *local_18 = (int)(local_10);
    if (7 < *(byte *)((int)local_18 + 0xb)) {
      local_18[1] = (int)((uint)(*(byte *)((int)local_18 + 0xb) >> 3) * local_10);
      thunk_FUN_1148ac28();
      return;
    }
    local_18[1] = (int)((uint)*(byte *)((int)local_18 + 0xb) * local_10 + 7 >> 3);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11484420; body size 70 bytes.
#line 1 "ENTRY_11484420"

void FUN_11484420(int param_1,undefined4 param_2,int param_3)

{
  if (((byte)*(uint *)(param_1 + 0x74) & 5) == 5) {
    *(uint*)(param_1 + 0x74) = (uint)(*(uint *)(param_1 + 0x74) | 0x18);
    thunk_FUN_114837f0(param_1,param_3);
    if (param_3 != 0) {
      thunk_FUN_1146bea0(param_1,"invalid");
    }
    return;
  }
                    
  thunk_FUN_1146bf20(param_1,"out of place");
}


// Reference entry 114846c0; body size 564 bytes.
#line 1 "ENTRY_114846c0"

void FUN_114846c0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 local_30c;
  undefined1 uStack_30b;
  undefined1 uStack_30a;
  int local_308;
  undefined1 local_304 [2];
  undefined1 local_302 [766];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_30c);
  local_308 = (int)(param_2);
  uVar1 = (uint)(*(uint *)(param_1 + 0x74));
  if ((uVar1 & 1) == 0) {
                    
    thunk_FUN_1146bf20(param_1,"missing IHDR");
  }
  if ((uVar1 & 2) != 0) {
                    
    thunk_FUN_1146bf20(param_1,"duplicate");
  }
  if ((uVar1 & 4) != 0) {
    thunk_FUN_114837f0(param_1,param_3);
    thunk_FUN_1146bea0(param_1,"out of place");
    thunk_FUN_1148ac28();
    return;
  }
  *(uint*)(param_1 + 0x74) = (uint)(uVar1 | 2);
  if ((*(byte *)(param_1 + 0x14f) & 2) == 0) {
    thunk_FUN_114837f0(param_1,param_3);
    thunk_FUN_1146bea0(param_1,"ignored in grayscale PNG");
    thunk_FUN_1148ac28();
    return;
  }
  if ((param_3 < 0x301) && (param_3 == (param_3 / 3) * 3)) {
    if (*(byte *)(param_1 + 0x14f) == 3) {
      iVar2 = (int)(1 << (*(byte *)(param_1 + 0x150) & 0x1f));
    }
    else {
      iVar2 = (int)(0x100);
    }
    if ((int)param_3 / 3 <= iVar2) {
      iVar2 = (int)((int)param_3 / 3);
    }
    if (0 < iVar2) {
      iVar3 = (int)(iVar2);
      puVar4 = (undefined1 *)(local_302);
      do {
        thunk_FUN_11480a00(param_1,&local_30c,3);
        thunk_FUN_114621a0(param_1,&local_30c,3);
        puVar4[-2] = (undefined1)(local_30c);
        puVar4[-1] = (undefined1)(uStack_30b);
        *puVar4 = (undefined1)(uStack_30a);
        iVar3 = (int)(iVar3 + -1);
        puVar4 = (undefined1 *)(puVar4 + 3);
      } while (iVar3 != 0);
    }
    iVar3 = (int)(local_308);
    thunk_FUN_114837f0(param_1,param_3 + iVar2 * -3);
    thunk_FUN_11480e00(param_1,iVar3,local_304,iVar2);
    if (*(short *)(param_1 + 0x148) == 0) {
      if (iVar3 == 0) goto LAB_114848a7;
      if ((*(byte *)(iVar3 + 8) & 0x10) != 0) {
        *(undefined2*)(param_1 + 0x148) = (undefined2)(0);
        goto LAB_11484866;
      }
    }
    else {
      *(undefined2*)(param_1 + 0x148) = (undefined2)(0);
      if (iVar3 != 0) {
LAB_11484866:
        *(undefined2*)(iVar3 + 0x16) = (undefined2)(0);
      }
      thunk_FUN_1146bea0(param_1,"tRNS must be after");
      if (iVar3 == 0) goto LAB_114848a7;
    }
    uVar1 = (uint)(*(uint *)(iVar3 + 8));
    if ((uVar1 & 0x40) != 0) {
      thunk_FUN_1146bea0(param_1,"hIST must be after");
    }
    if ((uVar1 & 0x20) == 0) goto LAB_114848a7;
    pcVar5 = (char *)("bKGD must be after");
  }
  else {
    thunk_FUN_114837f0(param_1,param_3);
    pcVar5 = (char *)("invalid");
    if (*(char *)(param_1 + 0x14f) == '\x03') {
                    
      thunk_FUN_1146bf20(param_1,"invalid");
    }
  }
  thunk_FUN_1146bea0(param_1,pcVar5);
LAB_114848a7:
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11485120; body size 316 bytes.
#line 1 "ENTRY_11485120"

void FUN_11485120(int param_1,int param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = (uint)(param_3);
  iVar3 = (int)(param_2);
  iVar2 = (int)(param_1);
  if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
                    
    thunk_FUN_1146bf20(param_1,"missing IHDR");
  }
  if (param_3 < 2) {
    thunk_FUN_114837f0(param_1,param_3);
    thunk_FUN_1146bea0(iVar2,"too short");
    return;
  }
  if ((param_2 == 0) || ((*(uint *)(param_2 + 8) & 0x10000) != 0)) {
    thunk_FUN_114837f0(param_1,param_3);
    thunk_FUN_1146bea0(iVar2,"duplicate");
    return;
  }
  *(uint*)(param_2 + 0xf4) = (uint)(*(uint *)(param_2 + 0xf4) | 0x8000);
  iVar5 = (int)(thunk_FUN_1147b530(param_1,param_3));
  *(int*)(iVar3 + 0xd4) = (int)(iVar5);
  if (iVar5 == 0) {
    thunk_FUN_114837f0(iVar2,uVar4);
    thunk_FUN_1146bea0(iVar2,"out of memory");
    return;
  }
  uVar6 = (uint)(0);
  while( true ) {
    thunk_FUN_11480a00(iVar2,&param_1,1);
    thunk_FUN_114621a0(iVar2,&param_1,1);
    pcVar1 = (char *)(*(char **)(iVar3 + 0xd4));
    pcVar1[uVar6] = (char)((char)param_1);
    if ((((uVar6 == 1) && ((char)param_1 != 'M')) && ((char)param_1 != 'I')) &&
       (*pcVar1 != (char)param_1)) break;
    uVar6 = (uint)(uVar6 + 1);
    if (uVar4 <= uVar6) {
      iVar5 = (int)(thunk_FUN_114837f0(iVar2,0));
      if (iVar5 == 0) {
        thunk_FUN_11481660(iVar2,iVar3,uVar4,*(undefined4 *)(iVar3 + 0xd4));
LAB_11485206:
        thunk_FUN_1147b2f0(iVar2,*(undefined4 *)(iVar3 + 0xd4));
        *(undefined4*)(iVar3 + 0xd4) = (undefined4)(0);
      }
      return;
    }
  }
  thunk_FUN_114837f0(iVar2,uVar4);
  thunk_FUN_1146bea0(iVar2,"incorrect byte-order specifier");
  goto LAB_11485206;
}


// Reference entry 114852b0; body size 206 bytes.
#line 1 "ENTRY_114852b0"

void FUN_114852b0(uint param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (uint)(param_1);
  if ((*(uint *)(param_1 + 0x74) & 1) == 0) {
                    
    thunk_FUN_1146bf20(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 0x74) & 6) != 0) {
    thunk_FUN_114837f0(param_1,param_3);
    thunk_FUN_1146bea0(uVar1,"out of place");
    return;
  }
  if (param_3 != 4) {
    thunk_FUN_114837f0(param_1,param_3);
    thunk_FUN_1146bea0(uVar1,"invalid");
    return;
  }
  thunk_FUN_11480a00(param_1,&param_1,4);
  thunk_FUN_114621a0(uVar1,&param_1,4);
  iVar2 = (int)(thunk_FUN_114837f0(uVar1,0));
  if (iVar2 == 0) {
    uVar4 = (uint)((((param_1 & 0xff) * 0x100 + (param_1 >> 8 & 0xff)) * 0x100 + (param_1 >> 0x10 & 0xff))
            * 0x100 + (param_1 >> 0x18));
    uVar3 = (uint)(0xffffffff);
    if (uVar4 < 0x80000000) {
      uVar3 = (uint)(uVar4);
    }
    thunk_FUN_114631f0(uVar1,uVar1 + 0x2c4,uVar3);
    thunk_FUN_114636a0(uVar1,param_2);
  }
  return;
}


// Reference entry 114853c0; body size 399 bytes.
#line 1 "ENTRY_114853c0"

void FUN_114853c0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort local_20c [2];
  int local_208;
  short asStack_204 [256];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20c);
  local_208 = (int)(param_2);
  uVar4 = (uint)(*(uint *)(param_1 + 0x74));
  if ((uVar4 & 1) == 0) {
                    
    thunk_FUN_1146bf20(param_1,"missing IHDR");
  }
  if (((uVar4 & 4) != 0) || ((uVar4 & 2) == 0)) {
    thunk_FUN_114837f0(param_1,param_3);
    thunk_FUN_1146bea0(param_1,"out of place");
    thunk_FUN_1148ac28();
    return;
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x40) != 0)) {
    thunk_FUN_114837f0(param_1,param_3);
    thunk_FUN_1146bea0(param_1,"duplicate");
    thunk_FUN_1148ac28();
    return;
  }
  uVar4 = (uint)(param_3 >> 1);
  if (((ushort)(uVar4) == *(ushort *)(param_1 + 0x140)) && (uVar4 < 0x101)) {
    uVar3 = (uint)(0);
    if (uVar4 != 0) {
      do {
        thunk_FUN_11480a00(param_1,local_20c,2);
        thunk_FUN_114621a0(param_1,local_20c,2);
        asStack_204[uVar3] = (short)(local_20c[0] * 0x100 + (local_20c[0] >> 8));
        uVar3 = (uint)(uVar3 + 1);
      } while (uVar3 < uVar4);
    }
    iVar1 = (int)(local_208);
    iVar2 = (int)(thunk_FUN_114837f0(param_1,0));
    if (iVar2 == 0) {
      thunk_FUN_114817c0(param_1,iVar1,asStack_204);
    }
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_114837f0(param_1,param_3);
  thunk_FUN_1146bea0(param_1,"invalid");
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11486920; body size 538 bytes.
#line 1 "ENTRY_11486920"

void FUN_11486920(uint param_1,int param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint uStack_8;
  uint uStack_4;
  
  uVar4 = (uint)(param_3);
  iVar3 = (int)(param_2);
  iVar2 = (int)(param_1);
  if ((*(uint *)(param_1 + 0x74) & 1) == 0) {
                    
    thunk_FUN_1146bf20(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 0x74) & 4) != 0) {
    thunk_FUN_114837f0(param_1,param_3);
    thunk_FUN_1146bea0(iVar2,"out of place");
    return;
  }
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x4000) != 0)) {
    thunk_FUN_114837f0(param_1,param_3);
    thunk_FUN_1146bea0(iVar2,"duplicate");
    return;
  }
  if (param_3 < 4) {
    thunk_FUN_114837f0(param_1,param_3);
    thunk_FUN_1146bea0(iVar2,"invalid");
    return;
  }
  pcVar5 = (char *)((char *)FUN_11488450(param_1,param_3 + 1,2));
  if ((char *)(pcVar5) == (char *)0x0) {
    thunk_FUN_1146bea0(iVar2,"out of memory");
    thunk_FUN_114837f0(iVar2,uVar4);
    return;
  }
  thunk_FUN_11480a00(iVar2,pcVar5,uVar4);
  thunk_FUN_114621a0(iVar2,pcVar5,uVar4);
  pcVar5[uVar4] = (char)('\0');
  iVar6 = (int)(thunk_FUN_114837f0(iVar2,0));
  if (iVar6 == 0) {
    if ((*pcVar5 != '\x01') && (*pcVar5 != '\x02')) {
      thunk_FUN_1146bea0(iVar2,"invalid unit");
      return;
    }
    param_1 = (uint)(1);
    uStack_8 = (uint)(0);
    iVar6 = (int)(thunk_FUN_11462490(pcVar5,uVar4,&uStack_8,&param_1));
    if ((iVar6 != 0) && (param_1 < uVar4)) {
      pcVar1 = (char *)(pcVar5 + param_1);
      param_1 = (uint)(param_1 + 1);
      uStack_4 = (uint)(param_1);
      if (*pcVar1 == '\0') {
        if ((uStack_8 & 0x188) != 0x108) {
          thunk_FUN_1146bea0(iVar2,"non-positive width");
          return;
        }
        uStack_8 = (uint)(0);
        iVar6 = (int)(thunk_FUN_11462490(pcVar5,uVar4,&uStack_8,&param_1));
        if ((iVar6 != 0) && (param_1 == uVar4)) {
          if ((uStack_8 & 0x188) != 0x108) {
            thunk_FUN_1146bea0(iVar2,"non-positive height");
            return;
          }
          thunk_FUN_11482290(iVar2,iVar3,*pcVar5,pcVar5 + 1,pcVar5 + uStack_4);
          return;
        }
        thunk_FUN_1146bea0(iVar2,"bad height format");
        return;
      }
    }
    thunk_FUN_1146bea0(iVar2,"bad width format");
  }
  return;
}


// Reference entry 11486bd0; body size 677 bytes.
#line 1 "ENTRY_11486bd0"

void FUN_11486bd0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  ushort uVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iStack_18;
  char *pcStack_10;
  char cStack_c;
  int iStack_8;
  uint uStack_4;
  
  iVar4 = (int)(*(int *)(param_1 + 0x280));
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      thunk_FUN_114837f0(param_1,param_3);
      return;
    }
    *(int*)(param_1 + 0x280) = (int)(iVar4 + -1);
    if (iVar4 + -1 == 1) {
      thunk_FUN_1146cad0(param_1,"No space in chunk cache for sPLT");
      thunk_FUN_114837f0(param_1,param_3);
      return;
    }
  }
  if ((*(uint *)(param_1 + 0x74) & 1) == 0) {
                    
    thunk_FUN_1146bf20(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 0x74) & 4) != 0) {
    thunk_FUN_114837f0(param_1,param_3);
    thunk_FUN_1146bea0(param_1,"out of place");
    return;
  }
  pcVar3 = (char *)((char *)FUN_11488450(param_1,param_3 + 1,2));
  if ((char *)(pcVar3) == (char *)0x0) {
    thunk_FUN_114837f0(param_1);
    thunk_FUN_1146bea0(param_1,"out of memory");
    return;
  }
  thunk_FUN_11480a00(param_1,pcVar3,param_3);
  thunk_FUN_114621a0(param_1,pcVar3,param_3);
  iVar4 = (int)(thunk_FUN_114837f0(param_1,0));
  if (iVar4 == 0) {
    pcVar3[param_3] = (char)('\0');
    cVar2 = (char)(*pcVar3);
    pcVar6 = (char *)(pcVar3);
    while (cVar2 != '\0') {
      pcVar6 = (char *)(pcVar6 + 1);
      cVar2 = (char)(*pcVar6);
    }
    if ((1 < param_3) && (pcVar6 + 1 <= pcVar3 + (param_3 - 2))) {
      cStack_c = (char)(pcVar6[1]);
      pbVar7 = (byte *)((byte *)(pcVar6 + 2));
      uVar1 = (uint)((uint)(cStack_c != '\b') * 4 + 6);
      uStack_4 = (uint)((uint)(pcVar3 + (param_3 - (int)pbVar7)) / uVar1);
      if ((uint)(pcVar3 + (param_3 - (int)pbVar7)) % uVar1 != 0) {
        thunk_FUN_1146cad0(param_1,"sPLT chunk has bad length");
        return;
      }
      if (0x19999999 < uStack_4) {
        thunk_FUN_1146cad0(param_1,"sPLT chunk too long");
        return;
      }
      iStack_8 = (int)(thunk_FUN_1147b530(param_1,uStack_4 * 10));
      if (iStack_8 == 0) {
        thunk_FUN_1146cad0(param_1,"sPLT chunk requires too much memory");
        return;
      }
      iStack_18 = (int)(0);
      if (0 < (int)uStack_4) {
        iVar4 = (int)(0);
        do {
          if (cStack_c == '\b') {
            *(ushort*)(iStack_8 + iVar4) = (ushort)((ushort)*pbVar7);
            *(ushort*)(iStack_8 + 2 + iVar4) = (ushort)((ushort)pbVar7[1]);
            *(ushort*)(iStack_8 + 4 + iVar4) = (ushort)((ushort)pbVar7[2]);
            pbVar8 = (byte *)(pbVar7 + 4);
            uVar5 = (ushort)((ushort)pbVar7[3]);
          }
          else {
            *(ushort*)(iStack_8 + iVar4) = (ushort)((ushort)*pbVar7 * 0x100 + (ushort)pbVar7[1]);
            *(ushort*)(iStack_8 + 2 + iVar4) = (ushort)((ushort)pbVar7[2] * 0x100 + (ushort)pbVar7[3]);
            *(ushort*)(iStack_8 + 4 + iVar4) = (ushort)((ushort)pbVar7[4] * 0x100 + (ushort)pbVar7[5]);
            pbVar8 = (byte *)(pbVar7 + 8);
            uVar5 = (ushort)((ushort)pbVar7[6] * 0x100 + (ushort)pbVar7[7]);
          }
          *(ushort*)(iStack_8 + 6 + iVar4) = (ushort)(uVar5);
          pbVar7 = (byte *)(pbVar8 + 2);
          *(ushort*)(iStack_8 + 8 + iVar4) = (ushort)((ushort)*pbVar8 * 0x100 + (ushort)pbVar8[1]);
          iVar4 = (int)(iVar4 + 10);
          iStack_18 = (int)(iStack_18 + 1);
        } while (iStack_18 < (int)uStack_4);
      }
      pcStack_10 = (char *)(pcVar3);
      thunk_FUN_11482460(param_1,param_2,&pcStack_10,1);
      thunk_FUN_1147b2f0(param_1,iStack_8);
      return;
    }
    thunk_FUN_1146cad0(param_1,"malformed sPLT chunk");
  }
  return;
}


// Reference entry 11486f20; body size 218 bytes.
#line 1 "ENTRY_11486f20"

void FUN_11486f20(uint param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)(param_1);
  if ((*(uint *)(param_1 + 0x74) & 1) == 0) {
                    
    thunk_FUN_1146bf20(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 0x74) & 6) != 0) {
    thunk_FUN_114837f0(param_1,param_3);
    thunk_FUN_1146bea0(uVar2,"out of place");
    return;
  }
  if (param_3 != 1) {
    thunk_FUN_114837f0(param_1,param_3);
    thunk_FUN_1146bea0(uVar2,"invalid");
    return;
  }
  thunk_FUN_11480a00(param_1,&param_1,1);
  thunk_FUN_114621a0(uVar2,&param_1,1);
  iVar3 = (int)(thunk_FUN_114837f0(uVar2,0));
  if ((iVar3 == 0) && (uVar1 = *(ushort *)(uVar2 + 0x30e), -1 < (short)uVar1)) {
    if ((uVar1 & 4) != 0) {
      *(ushort*)(uVar2 + 0x30e) = (ushort)(uVar1 | 0x8000);
      thunk_FUN_114636a0(uVar2,param_2);
      thunk_FUN_1146bea0(uVar2,"too many profiles");
      return;
    }
    thunk_FUN_11463440(uVar2,uVar2 + 0x2c4,param_1 & 0xff);
    thunk_FUN_114636a0(uVar2,param_2);
  }
  return;
}


// Reference entry 11487040; body size 423 bytes.
#line 1 "ENTRY_11487040"

void FUN_11487040(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  char *_Dst;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_1c;
  char *pcStack_18;
  char *pcStack_14;
  int iStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = (int)(*(int *)(param_1 + 0x280));
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      thunk_FUN_114837f0(param_1,param_3);
      return;
    }
    *(int*)(param_1 + 0x280) = (int)(iVar3 + -1);
    if (iVar3 + -1 == 1) {
      thunk_FUN_114837f0(param_1,param_3);
      thunk_FUN_1146bea0(param_1,"no space in chunk cache");
      return;
    }
  }
  uVar2 = (uint)(*(uint *)(param_1 + 0x74));
  if ((uVar2 & 1) == 0) {
                    
    thunk_FUN_1146bf20(param_1,"missing IHDR");
  }
  if ((uVar2 & 4) != 0) {
    *(uint*)(param_1 + 0x74) = (uint)(uVar2 | 8);
  }
  _Dst = (char *)(*(char **)(param_1 + 0x2a0));
  uVar2 = (uint)(param_3 + 1);
  if ((char *)(_Dst) != (char *)0x0) {
    if ((uint)(uVar2) <= *(uint *)(param_1 + 0x2a4)) goto LAB_1148710d;
    *(undefined4*)(param_1 + 0x2a0) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x2a4) = (undefined4)(0);
    thunk_FUN_1147b2f0(param_1,_Dst);
  }
  _Dst = (char *)((char *)thunk_FUN_1147b4b0(param_1,uVar2));
  if ((char *)(_Dst) == (char *)0x0) {
    thunk_FUN_1146c060(param_1,"insufficient memory to read chunk");
    thunk_FUN_1146bea0(param_1,"out of memory");
    return;
  }
  memset(_Dst,0,uVar2);
  *(char**)(param_1 + 0x2a0) = (char *)(_Dst);
  *(uint*)(param_1 + 0x2a4) = (uint)(uVar2);
LAB_1148710d:
  thunk_FUN_11480a00(param_1,_Dst,param_3);
  thunk_FUN_114621a0(param_1,_Dst,param_3);
  iVar3 = (int)(thunk_FUN_114837f0(param_1,0));
  if (iVar3 == 0) {
    _Dst[param_3] = (char)('\0');
    cVar1 = (char)(*_Dst);
    pcVar4 = (char *)(_Dst);
    while (cVar1 != '\0') {
      pcVar4 = (char *)(pcVar4 + 1);
      cVar1 = (char)(*pcVar4);
    }
    uStack_1c = (undefined4)(0xffffffff);
    pcStack_14 = (char *)(pcVar4 + 1);
    if ((char *)((pcVar4)) == (char *)(_Dst) + param_3) {
      pcStack_14 = (char *)(pcVar4);
    }
    uStack_8 = (undefined4)(0);
    uStack_4 = (undefined4)(0);
    uStack_c = (undefined4)(0);
    pcVar4 = (char *)(pcStack_14);
    do {
      cVar1 = (char)(*pcVar4);
      pcVar4 = (char *)(pcVar4 + 1);
    } while (cVar1 != '\0');
    iStack_10 = (int)((int)pcVar4 - (int)(pcStack_14 + 1));
    pcStack_18 = (char *)(_Dst);
    iVar3 = (int)(thunk_FUN_11482900(param_1,param_2,&uStack_1c,1));
    if (iVar3 != 0) {
      thunk_FUN_1146cad0(param_1,"Insufficient memory to process text chunk");
      return;
    }
  }
  return;
}


// Reference entry 11487260; body size 301 bytes.
#line 1 "ENTRY_11487260"

void FUN_11487260(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  short sStack_14;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  byte local_c;
  byte bStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;
  undefined1 uStack_8;
  undefined1 uStack_7;
  undefined1 uStack_6;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&sStack_14);
  uVar1 = (uint)(*(uint *)(param_1 + 0x74));
  if ((uVar1 & 1) == 0) {
                    
    thunk_FUN_1146bf20(param_1,"missing IHDR");
  }
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x200) != 0)) {
    thunk_FUN_114837f0(param_1,param_3);
    thunk_FUN_1146bea0(param_1,"duplicate");
    thunk_FUN_1148ac28();
    return;
  }
  if ((uVar1 & 4) != 0) {
    *(uint*)(param_1 + 0x74) = (uint)(uVar1 | 8);
  }
  if (param_3 != 7) {
    thunk_FUN_114837f0(param_1,param_3);
    thunk_FUN_1146bea0(param_1,"invalid");
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_11480a00(param_1,&local_c,7);
  thunk_FUN_114621a0(param_1,&local_c,7);
  iVar2 = (int)(thunk_FUN_114837f0(param_1,0));
  if (iVar2 == 0) {
    uStack_e = (undefined1)(uStack_6);
    uStack_f = (undefined1)(uStack_7);
    uStack_10 = (undefined1)(uStack_8);
    uStack_11 = (undefined1)(uStack_9);
    uStack_12 = (undefined1)(uStack_a);
    sStack_14 = (short)((ushort)local_c * 0x100 + (ushort)bStack_b);
    thunk_FUN_114826c0(param_1,param_2,&sStack_14);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 114873e0; body size 617 bytes.
#line 1 "ENTRY_114873e0"

void FUN_114873e0(int param_1,int param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  char *pcVar5;
  ushort local_110 [2];
  byte local_10c;
  byte bStack_10b;
  byte bStack_10a;
  byte bStack_109;
  byte bStack_108;
  byte bStack_107;
  undefined1 local_104 [256];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_110);
  uVar2 = (uint)(*(uint *)(param_1 + 0x74));
  if ((uVar2 & 1) == 0) {
                    
    thunk_FUN_1146bf20(param_1,"missing IHDR");
  }
  if ((uVar2 & 4) == 0) {
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x10) != 0)) {
      thunk_FUN_114837f0(param_1,param_3);
      pcVar5 = (char *)("duplicate");
      goto LAB_1148761d;
    }
    cVar1 = (char)(*(char *)(param_1 + 0x14f));
    if (cVar1 == '\0') {
      if (param_3 == 2) {
        thunk_FUN_11480a00(param_1,local_110,2);
        thunk_FUN_114621a0(param_1,local_110,2);
        uVar3 = (undefined2)(1);
        *(ushort*)(param_1 + 0x1bc) = (ushort)(local_110[0] * 0x100 + (local_110[0] >> 8));
LAB_1148757c:
        *(undefined2*)(param_1 + 0x148) = (undefined2)(uVar3);
        iVar4 = (int)(thunk_FUN_114837f0(param_1,0));
        if (iVar4 != 0) {
          *(undefined2*)(param_1 + 0x148) = (undefined2)(0);
          thunk_FUN_1148ac28();
          return;
        }
        thunk_FUN_11482760(param_1,param_2,local_104,*(undefined2 *)(param_1 + 0x148),
                           param_1 + 0x1b4);
        thunk_FUN_1148ac28();
        return;
      }
    }
    else {
      if (cVar1 != '\x02') {
        if (cVar1 != '\x03') {
          thunk_FUN_114837f0(param_1,param_3);
          pcVar5 = (char *)("invalid with alpha channel");
          goto LAB_1148761d;
        }
        if ((uVar2 & 2) != 0) {
          if ((((ushort)(param_3) <= *(ushort *)(param_1 + 0x140)) && (param_3 < 0x101)) && (param_3 != 0)) {
            thunk_FUN_11480a00(param_1,local_104,param_3);
            thunk_FUN_114621a0(param_1,local_104,param_3);
            uVar3 = (undefined2)((undefined2)param_3);
            goto LAB_1148757c;
          }
          thunk_FUN_114837f0(param_1,param_3);
          pcVar5 = (char *)("invalid");
          goto LAB_1148761d;
        }
        goto LAB_1148760b;
      }
      if (param_3 == 6) {
        thunk_FUN_11480a00(param_1,&local_10c,6);
        thunk_FUN_114621a0(param_1,&local_10c,6);
        *(ushort*)(param_1 + 0x1b6) = (ushort)((ushort)local_10c * 0x100 + (ushort)bStack_10b);
        *(ushort*)(param_1 + 0x1b8) = (ushort)((ushort)bStack_10a * 0x100 + (ushort)bStack_109);
        uVar3 = (undefined2)(1);
        *(ushort*)(param_1 + 0x1ba) = (ushort)((ushort)bStack_108 * 0x100 + (ushort)bStack_107);
        goto LAB_1148757c;
      }
    }
    thunk_FUN_114837f0(param_1,param_3);
    pcVar5 = (char *)("invalid");
  }
  else {
LAB_1148760b:
    thunk_FUN_114837f0(param_1,param_3);
    pcVar5 = (char *)("out of place");
  }
LAB_1148761d:
  thunk_FUN_1146bea0(param_1,pcVar5);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 114876f0; body size 365 bytes.
#line 1 "ENTRY_114876f0"

void FUN_114876f0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = (bool)(false);
  if (*(int *)(param_1 + 0x238) == 0) {
    if (param_4 == 0) {
      param_4 = (int)(*(int *)(param_1 + 0x23c));
    }
    if ((param_4 == 3) || ((param_4 == 2 && ((*(uint *)(param_1 + 0x11c) & 0x20000000) != 0)))) {
      iVar2 = (int)(FUN_11482ed0(param_1,param_3));
      if (iVar2 == 0) goto LAB_114877f9;
LAB_114877a8:
      if (param_4 != 3) goto LAB_114877ad;
    }
    else {
      thunk_FUN_114837f0(param_1,param_3);
LAB_114877ad:
      if (param_4 != 2) goto LAB_114877f9;
LAB_114877b2:
      if ((*(uint *)(param_1 + 0x11c) & 0x20000000) == 0) goto LAB_114877f9;
    }
    iVar2 = (int)(*(int *)(param_1 + 0x280));
    if (iVar2 != 0) {
      if (iVar2 == 1) goto LAB_114877f9;
      if (iVar2 == 2) {
        *(undefined4*)(param_1 + 0x280) = (undefined4)(1);
        thunk_FUN_1146bea0(param_1,"no space in chunk cache");
        goto LAB_114877f9;
      }
      *(int*)(param_1 + 0x280) = (int)(iVar2 + -1);
    }
    thunk_FUN_11482d40(param_1,param_2,param_1 + 0x288,1);
  }
  else {
    iVar2 = (int)(FUN_11482ed0(param_1,param_3));
    if (iVar2 == 0) goto LAB_114877f9;
    iVar2 = (int)((**(code **)(param_1 + 0x238))(param_1,param_1 + 0x288));
    if (iVar2 < 0) {
                    
      thunk_FUN_1146bf20(param_1,"error in user chunk");
    }
    if (iVar2 == 0) {
      if (1 < param_4) goto LAB_114877a8;
      if (*(int *)(param_1 + 0x23c) < 2) {
        thunk_FUN_1146c060(param_1,"Saving unknown chunk:");
        thunk_FUN_1146bd90(param_1,
                           "forcing save of an unhandled chunk; please call png_set_keep_unknown_chunks"
                          );
      }
      goto LAB_114877b2;
    }
  }
  bVar1 = (bool)(true);
LAB_114877f9:
  if (*(int *)(param_1 + 0x290) != 0) {
    thunk_FUN_1147b2f0(param_1,*(int *)(param_1 + 0x290));
  }
  *(undefined4*)(param_1 + 0x290) = (undefined4)(0);
  if ((!bVar1) && ((*(uint *)(param_1 + 0x11c) & 0x20000000) == 0)) {
                    
    thunk_FUN_1146bf20(param_1,"unhandled critical chunk");
  }
  return;
}


// Reference entry 11487bb0; body size 415 bytes.
#line 1 "ENTRY_11487bb0"

void FUN_11487bb0(int param_1,int param_2,int param_3,undefined4 param_4,int *param_5,int param_6,
                 int *param_7)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_410;
  int *local_40c;
  int *local_408;
  undefined1 local_404 [1024];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_410);
  local_408 = (int *)(param_5);
  local_40c = (int *)(param_7);
  if (*(int *)(param_1 + 0x80) != (int)(param_2)) {
    *(char**)(param_1 + 0x9c) = (char *)("zstream unclaimed");
    thunk_FUN_1148ac28();
    return;
  }
  local_410 = (int)(*param_5);
  *(undefined4*)(param_1 + 0x84) = (undefined4)(param_4);
  iVar7 = (int)(*param_7);
  if (param_6 != 0) {
    *(int*)(param_1 + 0x90) = (int)(param_6);
  }
  iVar5 = (int)(0);
  uVar4 = (uint)(0);
  do {
    local_410 = (int)(local_410 + iVar5);
    iVar5 = (int)(-1);
    if (local_410 != -1) {
      iVar5 = (int)(local_410);
    }
    uVar6 = (uint)(iVar7 + uVar4);
    local_410 = (int)(local_410 - iVar5);
    *(int*)(param_1 + 0x88) = (int)(iVar5);
    uVar1 = (uint)(0xffffffff);
    if (param_6 == 0) {
      *(undefined1**)(param_1 + 0x90) = (undefined1 *)(local_404);
      uVar1 = (uint)(0x400);
    }
    uVar4 = (uint)(uVar6);
    if (uVar1 <= uVar6) {
      uVar4 = (uint)(uVar1);
    }
    *(uint*)(param_1 + 0x94) = (uint)(uVar4);
    iVar7 = (int)(uVar6 - uVar4);
    if (iVar7 == 0) {
      cVar3 = (char)((param_3 != 0) * '\x02' + '\x02');
    }
    else {
      cVar3 = (char)('\0');
    }
    if ((*(char *)(param_1 + 0x158) != '\0') && (iVar5 != 0)) {
      if (0x70 < (**(byte **)(param_1 + 0x84) & 0xf0)) {
        *(char**)(param_1 + 0x9c) = (char *)("invalid window size (libpng)");
        iVar2 = (int)(-3);
        break;
      }
      *(undefined1*)(param_1 + 0x158) = (undefined1)(0);
    }
    iVar2 = (int)(thunk_FUN_113c5de0((undefined4 *)(param_1 + 0x84),cVar3));
    iVar5 = (int)(*(int *)(param_1 + 0x88));
    uVar4 = (uint)(*(uint *)(param_1 + 0x94));
  } while (iVar2 == 0);
  if (param_6 == 0) {
    *(undefined4*)(param_1 + 0x90) = (undefined4)(0);
  }
  if (iVar7 + uVar4 != 0) {
    *local_40c = (int)(*local_40c - (iVar7 + uVar4));
  }
  if (local_410 + iVar5 != 0) {
    *local_408 = (int)(*local_408 - (local_410 + iVar5));
  }
  thunk_FUN_11466460(param_1,iVar2);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11487dc0; body size 303 bytes.
#line 1 "ENTRY_11487dc0"

void FUN_11487dc0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_44);
  iVar2 = (int)(*(int *)(param_1 + 0x80));
  if (iVar2 != 0) {
    local_41 = (undefined1)((undefined1)iVar2);
    local_44 = (undefined1)((undefined1)((uint)iVar2 >> 0x18));
    local_43 = (undefined1)((undefined1)((uint)iVar2 >> 0x10));
    local_42 = (undefined1)((undefined1)((uint)iVar2 >> 8));
    thunk_FUN_1146c960(&local_44,0x40,4," using zstream");
    thunk_FUN_1146c060(param_1,&local_44);
    *(undefined4*)(param_1 + 0x80) = (undefined4)(0);
  }
  uVar3 = (undefined4)(0xf);
  bVar4 = (bool)((*(uint *)(param_1 + 0x20c) & 0xc) != 0xc);
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 0x84));
  *(bool*)(param_1 + 0x158) = (bool)(bVar4);
  if (bVar4) {
    uVar3 = (undefined4)(0);
  }
  *puVar1 = (undefined4)(0);
  *(undefined4*)(param_1 + 0x88) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x90) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x94) = (undefined4)(0);
  if ((*(byte *)(param_1 + 0x78) & 2) == 0) {
    iVar2 = (int)(thunk_FUN_113c7f60(puVar1,uVar3,"1.2.12",0x38));
    if (iVar2 == 0) {
      *(uint*)(param_1 + 0x78) = (uint)(*(uint *)(param_1 + 0x78) | 2);
    }
  }
  else {
    iVar2 = (int)(thunk_FUN_113c83e0(puVar1,uVar3));
  }
  if ((*(uint *)(param_1 + 0x20c) & 0x300) == 0x300) {
    iVar2 = (int)(thunk_FUN_113c8950(puVar1,0));
  }
  if (iVar2 == 0) {
    *(undefined4*)(param_1 + 0x80) = (undefined4)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_11466460(param_1,iVar2);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11487f40; body size 348 bytes.
#line 1 "ENTRY_11487f40"

int FUN_11487f40(int param_1,undefined4 param_2,uint param_3,uint *param_4,undefined4 param_5,
                int *param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  if ((int)((param_1 + 0x80)) != *(int *)(param_1 + 0x11c)) {
    *(char**)(param_1 + 0x9c) = (char *)("zstream unclaimed");
    return (int)(-2);
  }
  iVar6 = (int)(0);
  *(undefined4*)(param_1 + 0x90) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x94) = (undefined4)(0);
  do {
    uVar2 = (uint)(*(uint *)(param_1 + 0x88));
    if (uVar2 == 0) {
      uVar1 = (uint)(*param_4);
      uVar2 = (uint)(uVar1);
      if (param_3 <= uVar1) {
        uVar2 = (uint)(param_3);
      }
      *param_4 = (uint)(uVar1 - uVar2);
      if (uVar2 != 0) {
        thunk_FUN_11480a00(param_1,param_2,uVar2);
        thunk_FUN_114621a0(param_1,param_2,uVar2);
        iVar6 = (int)(*(int *)(param_1 + 0x94));
      }
      *(undefined4*)(param_1 + 0x84) = (undefined4)(param_2);
      *(uint*)(param_1 + 0x88) = (uint)(uVar2);
      param_3 = (uint)(uVar2);
    }
    if (iVar6 == 0) {
      iVar3 = (int)(*param_6);
      iVar6 = (int)(-1);
      if (iVar3 != -1) {
        iVar6 = (int)(iVar3);
      }
      *(int*)(param_1 + 0x94) = (int)(iVar6);
      *param_6 = (int)(iVar3 - iVar6);
    }
    cVar4 = (char)('\0');
    if (*param_4 == 0) {
      cVar4 = (char)((param_7 != 0) * '\x02' + '\x02');
    }
    if ((*(char *)(param_1 + 0x158) != '\0') && (uVar2 != 0)) {
      if ((**(byte **)(param_1 + 0x84) & 0xf0) < 0x71) {
        *(undefined1*)(param_1 + 0x158) = (undefined1)(0);
        goto LAB_1148801f;
      }
      *(char**)(param_1 + 0x9c) = (char *)("invalid window size (libpng)");
      iVar3 = (int)(-3);
LAB_11488061:
      iVar5 = (int)(*param_6);
      break;
    }
LAB_1148801f:
    iVar3 = (int)(thunk_FUN_113c5de0(param_1 + 0x84,cVar4));
    iVar6 = (int)(*(int *)(param_1 + 0x94));
    if (iVar3 != 0) goto LAB_11488061;
  } while ((*param_6 != 0) || (iVar5 = (int)(0, iVar6 != 0)));
  *(undefined4*)(param_1 + 0x94) = (undefined4)(0);
  *param_6 = (int)(iVar5 + iVar6);
  thunk_FUN_11466460(param_1,iVar3);
  return (int)(iVar3);
}


// Reference entry 11488160; body size 596 bytes.
#line 1 "ENTRY_11488160"

void FUN_11488160(int param_1,int param_2,int param_3)

{
  uint _Size;
  void *_Dst;
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_404 [1024];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)auStack_404);
  iVar3 = (int)(0);
  if (param_2 != 0) {
    iVar3 = (int)(param_3);
  }
  *(int*)(param_1 + 0x90) = (int)(param_2);
  *(undefined4*)(param_1 + 0x94) = (undefined4)(0);
  do {
    _Size = (uint)(*(uint *)(param_1 + 0x88));
    if (_Size == 0) {
      _Size = (uint)(*(uint *)(param_1 + 0x134));
      while (_Size == 0) {
        thunk_FUN_114837f0(param_1,0);
        _Size = (uint)(thunk_FUN_11488510(param_1));
        *(uint*)(param_1 + 0x134) = (uint)(_Size);
        if (*(int *)(param_1 + 0x11c) != 0x49444154) goto LAB_114883a9;
      }
      _Dst = (void *)(*(void **)(param_1 + 0x2a0));
      if (*(uint *)(param_1 + 0x2a8) <= (uint)(_Size)) {
        _Size = (uint)(*(uint *)(param_1 + 0x2a8));
      }
      if ((void *)(_Dst) == (void *)0x0) {
LAB_11488228:
        _Dst = (void *)((void *)thunk_FUN_1147b4b0(param_1,_Size));
        if ((void *)(_Dst) == (void *)0x0) {
                    
          thunk_FUN_1146bf20(param_1,"insufficient memory to read chunk");
        }
        memset(_Dst,0,_Size);
        *(void**)(param_1 + 0x2a0) = (void *)(_Dst);
        *(uint*)(param_1 + 0x2a4) = (uint)(_Size);
      }
      else if (*(uint *)(param_1 + 0x2a4) < _Size) {
        *(undefined4*)(param_1 + 0x2a0) = (undefined4)(0);
        *(undefined4*)(param_1 + 0x2a4) = (undefined4)(0);
        thunk_FUN_1147b2f0(param_1,_Dst);
        goto LAB_11488228;
      }
      thunk_FUN_11480a00(param_1,_Dst,_Size);
      thunk_FUN_114621a0(param_1,_Dst,_Size);
      *(void**)(param_1 + 0x84) = (void *)(_Dst);
      *(int*)(param_1 + 0x134) = (int)(*(int *)(param_1 + 0x134) - _Size);
      *(uint*)(param_1 + 0x88) = (uint)(_Size);
    }
    if (param_2 == 0) {
      *(undefined1**)(param_1 + 0x90) = (undefined1 *)(auStack_404);
      iVar2 = (int)(0x400);
    }
    else {
      iVar2 = (int)(-1);
      if (iVar3 != -1) {
        iVar2 = (int)(iVar3);
      }
      iVar3 = (int)(iVar3 - iVar2);
    }
    *(int*)(param_1 + 0x94) = (int)(iVar2);
    if ((*(char *)(param_1 + 0x158) == '\0') || (_Size == 0)) {
LAB_114882d9:
      iVar2 = (int)(thunk_FUN_113c5de0(param_1 + 0x84,0));
    }
    else {
      if ((**(byte **)(param_1 + 0x84) & 0xf0) < 0x71) {
        *(undefined1*)(param_1 + 0x158) = (undefined1)(0);
        goto LAB_114882d9;
      }
      *(char**)(param_1 + 0x9c) = (char *)("invalid window size (libpng)");
      iVar2 = (int)(-3);
    }
    iVar1 = (int)(*(int *)(param_1 + 0x94));
    if (param_2 == 0) {
      iVar1 = (int)(0x400 - iVar1);
    }
    iVar3 = (int)(iVar3 + iVar1);
    *(undefined4*)(param_1 + 0x94) = (undefined4)(0);
    if (iVar2 == 1) {
      *(uint*)(param_1 + 0x74) = (uint)(*(uint *)(param_1 + 0x74) | 8);
      *(uint*)(param_1 + 0x78) = (uint)(*(uint *)(param_1 + 0x78) | 8);
      *(undefined4*)(param_1 + 0x90) = (undefined4)(0);
      if ((*(int *)(param_1 + 0x88) != 0) || (*(int *)(param_1 + 0x134) != 0)) {
        thunk_FUN_1146bea0(param_1,"Extra compressed data");
      }
      if (iVar3 != 0) {
        if (param_2 != 0) {
LAB_114883a9:
                    
          thunk_FUN_1146c180(param_1,"Not enough image data");
        }
        pcVar4 = (char *)("Too much image data");
LAB_11488378:
        thunk_FUN_1146bea0(param_1,pcVar4);
      }
      break;
    }
    if (iVar2 != 0) {
      thunk_FUN_11466460(param_1,iVar2);
      pcVar4 = (char *)(*(char **)(param_1 + 0x9c));
      if (param_2 != 0) {
                    
        thunk_FUN_1146bf20(param_1,pcVar4);
      }
      goto LAB_11488378;
    }
  } while (iVar3 != 0);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11488450; body size 143 bytes.
#line 1 "ENTRY_11488450"

void * FUN_11488450(int param_1,uint param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(void **)(param_1 + 0x2a0));
  if ((void *)(pvVar1) != (void *)0x0) {
    if ((uint)(param_2) <= *(uint *)(param_1 + 0x2a4)) {
      return (void *)(pvVar1);
    }
    *(undefined4*)(param_1 + 0x2a0) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x2a4) = (undefined4)(0);
    thunk_FUN_1147b2f0(param_1,pvVar1);
  }
  pvVar1 = (void *)((void *)thunk_FUN_1147b4b0(param_1,param_2));
  if ((void *)(pvVar1) == (void *)0x0) {
    if (param_3 < 2) {
      if (param_3 == 0) {
                    
        thunk_FUN_1146bf20(param_1,"insufficient memory to read chunk");
      }
      thunk_FUN_1146c060();
      return (void *)((void *)0x0);
    }
  }
  else {
    memset(pvVar1,0,param_2);
    *(void**)(param_1 + 0x2a0) = (void *)(pvVar1);
    *(uint*)(param_1 + 0x2a4) = (uint)(param_2);
  }
  return (void *)(pvVar1);
}


// Reference entry 11488850; body size 162 bytes.
#line 1 "ENTRY_11488850"

void FUN_11488850(int param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  bVar1 = (byte)(*param_3);
  uVar4 = (uint)((uint)*param_2 + (uint)bVar1);
  pbVar2 = (byte *)(param_2 + *(int *)(param_1 + 4));
  *param_2 = (byte)((byte)uVar4);
  uVar6 = (uint)((uint)bVar1);
  while (param_2 = param_2 + 1, param_2 < pbVar2) {
    param_3 = (byte *)(param_3 + 1);
    uVar9 = (uint)((uint)*param_3);
    uVar4 = (uint)(uVar4 & 0xff);
    uVar8 = (uint)(uVar4 - uVar6);
    uVar10 = (uint)(uVar9 - uVar6);
    iVar7 = (int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f));
    iVar5 = (int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f));
    uVar3 = (uint)((int)(uVar8 + uVar10) >> 0x1f);
    if (iVar5 < iVar7) {
      iVar7 = (int)(iVar5);
      uVar4 = (uint)(uVar9);
    }
    if (iVar7 <= (int)((uVar8 + uVar10 ^ uVar3) - uVar3)) {
      uVar6 = (uint)(uVar4);
    }
    uVar4 = (uint)(uVar6 + *param_2);
    *param_2 = (byte)((byte)uVar4);
    uVar6 = (uint)(uVar9);
  }
  return;
}


// Reference entry 11488be0; body size 315 bytes.
#line 1 "ENTRY_11488be0"

void FUN_11488be0(int param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  *(int*)(param_1 + 0x118) = (int)(*(int *)(param_1 + 0x118) + 1);
  if ((uint)((param_1 + 0x108)) <= *(uint *)(param_1 + 0x118)) {
    if (*(char *)(param_1 + 0x14c) != '\0') {
      *(undefined4*)(param_1 + 0x118) = (undefined4)(0);
      memset(*(void **)(param_1 + 0x120),0,*(int *)(param_1 + 0x110) + 1);
      bVar3 = (byte)(*(byte *)(param_1 + 0x14d));
      do {
        bVar3 = (byte)(bVar3 + 1);
        *(byte*)(param_1 + 0x14d) = (byte)(bVar3);
        if (6 < bVar3) break;
        uVar1 = (uint)((((byte)(&DAT_11c08374)[bVar3] - 1) +
                (*(int *)(param_1 + 0x100) - (uint)(byte)(&DAT_11c0836c)[bVar3])) /
                (uint)(byte)(&DAT_11c08374)[bVar3]);
        *(uint*)(param_1 + 0x114) = (uint)(uVar1);
        if ((*(byte *)(param_1 + 0x7c) & 2) != 0) {
          return;
        }
        uVar2 = (uint)((*(int *)(param_1 + 0x104) + -1 +
                ((uint)(byte)(&DAT_11c08384)[bVar3] - (uint)(byte)(&DAT_11c0837c)[bVar3])) /
                (uint)(byte)(&DAT_11c08384)[bVar3]);
        *(uint*)(param_1 + 0x108) = (uint)(uVar2);
      } while ((uVar2 == 0) || (uVar1 == 0));
      if (bVar3 < 7) {
        return;
      }
    }
    if ((*(byte *)(param_1 + 0x78) & 8) == 0) {
      thunk_FUN_11488160(param_1,0,0);
      *(undefined4*)(param_1 + 0x90) = (undefined4)(0);
      if ((*(uint *)(param_1 + 0x78) & 8) == 0) {
        *(uint*)(param_1 + 0x74) = (uint)(*(uint *)(param_1 + 0x74) | 8);
        *(uint*)(param_1 + 0x78) = (uint)(*(uint *)(param_1 + 0x78) | 8);
      }
    }
    if (*(int *)(param_1 + 0x80) == 0x49444154) {
      *(undefined4*)(param_1 + 0x84) = (undefined4)(0);
      *(undefined4*)(param_1 + 0x88) = (undefined4)(0);
      *(undefined4*)(param_1 + 0x80) = (undefined4)(0);
      thunk_FUN_114837f0(param_1,*(undefined4 *)(param_1 + 0x134));
    }
  }
  return;
}


// Reference entry 11488d70; body size 144 bytes.
#line 1 "ENTRY_11488d70"

void FUN_11488d70(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(byte *)(param_1 + 0x155) < 8) {
    uVar1 = (uint)((uint)*(byte *)(param_1 + 0x155));
    iVar2 = (int)(-uVar1 + 8);
    *(undefined4*)(param_1 + 0x2ac) = (undefined4)(0x11);
    thunk_FUN_11480a00(param_1,param_2 + 0x20 + uVar1,iVar2);
    *(undefined1*)(param_1 + 0x155) = (undefined1)(8);
    iVar2 = (int)(thunk_FUN_11465e10(param_2 + 0x20,uVar1,iVar2));
    if (iVar2 != 0) {
      if ((uVar1 < 4) && (iVar2 = thunk_FUN_11465e10(param_2 + 0x20,uVar1,-uVar1 + 4), iVar2 != 0))
      {
                    
        thunk_FUN_1146c180(param_1,"Not a PNG file");
      }
                    
      thunk_FUN_1146c180(param_1,"PNG file corrupted by ASCII conversion");
    }
    if (uVar1 < 3) {
      *(uint*)(param_1 + 0x74) = (uint)(*(uint *)(param_1 + 0x74) | 0x1000);
    }
  }
  return;
}


// Reference entry 114891d0; body size 74 bytes.
#line 1 "ENTRY_114891d0"

undefined4 FUN_114891d0(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x158) != '\0') && (*(int *)(param_1 + 0x88) != 0)) {
    if (0x70 < (**(byte **)(param_1 + 0x84) & 0xf0)) {
      *(char**)(param_1 + 0x9c) = (char *)("invalid window size (libpng)");
      return (undefined4)(0xfffffffd);
    }
    *(undefined1*)(param_1 + 0x158) = (undefined1)(0);
  }
  uVar1 = (undefined4)(thunk_FUN_113c5de0());
  return (undefined4)(uVar1);
}


// Reference entry 114892b0; body size 80 bytes.
#line 1 "ENTRY_114892b0"

void FUN_114892b0(int param_1,undefined4 param_2,undefined1 *param_3,undefined1 *param_4)

{
  if (param_1 != 0) {
    *(undefined4*)(param_1 + 0x60) = (undefined4)(param_2);
    if ((undefined1 *)(param_3) == (undefined1 *)0x0) {
      param_3 = (undefined1 *)(LAB_1008f477);
    }
    *(undefined1**)(param_1 + 0x58) = (undefined1 *)(param_3);
    if ((undefined1 *)(param_4) == (undefined1 *)0x0) {
      param_4 = (undefined1 *)(LAB_100367c8);
    }
    *(undefined1**)(param_1 + 0x178) = (undefined1 *)(param_4);
    if (*(int *)(param_1 + 0x5c) != 0) {
      *(undefined4*)(param_1 + 0x5c) = (undefined4)(0);
      thunk_FUN_1146cad0(param_1,
                         "Can\'t set both read_data_fn and write_data_fn in the same structure");
    }
  }
  return;
}


// Reference entry 11489350; body size 328 bytes.
#line 1 "ENTRY_11489350"

void FUN_11489350(int *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  
  if ((*(char *)((int)param_1 + 9) == '\b') && (*(char *)((int)param_1 + 10) == '\x01')) {
    if (param_3 == 1) {
      iVar6 = (int)(*param_1);
      uVar3 = (uint)(0x80);
      uVar4 = (uint)(0);
      pbVar7 = (byte *)(param_2);
      if (iVar6 != 0) {
        do {
          uVar5 = (uint)(uVar4 | uVar3);
          if (*pbVar7 == 0) {
            uVar5 = (uint)(uVar4);
          }
          if (uVar3 < 2) {
            *param_2 = (byte)((byte)uVar5);
            uVar3 = (uint)(0x80);
            param_2 = (byte *)(param_2 + 1);
            uVar5 = (uint)(0);
          }
          else {
            uVar3 = (uint)((int)uVar3 >> 1);
          }
          iVar6 = (int)(iVar6 + -1);
          uVar4 = (uint)(uVar5);
          pbVar7 = (byte *)(pbVar7 + 1);
        } while (iVar6 != 0);
        if (uVar3 != 0x80) {
          *param_2 = (byte)((byte)uVar5);
        }
      }
    }
    else if (param_3 == 2) {
      iVar6 = (int)(*param_1);
      uVar4 = (uint)(0);
      iVar2 = (int)(6);
      pbVar7 = (byte *)(param_2);
      if (iVar6 != 0) {
        do {
          uVar4 = (uint)(uVar4 | (*param_2 & 3) << ((byte)iVar2 & 0x1f));
          if (iVar2 == 0) {
            *pbVar7 = (byte)((byte)uVar4);
            iVar2 = (int)(6);
            pbVar7 = (byte *)(pbVar7 + 1);
            uVar4 = (uint)(0);
          }
          else {
            iVar2 = (int)(iVar2 + -2);
          }
          param_2 = (byte *)(param_2 + 1);
          iVar6 = (int)(iVar6 + -1);
        } while (iVar6 != 0);
        if (iVar2 != 6) {
          *pbVar7 = (byte)((byte)uVar4);
        }
      }
    }
    else if (param_3 == 4) {
      iVar6 = (int)(*param_1);
      uVar4 = (uint)(0);
      iVar2 = (int)(4);
      pbVar7 = (byte *)(param_2);
      if (iVar6 != 0) {
        do {
          uVar4 = (uint)(uVar4 | (*param_2 & 0xf) << ((byte)iVar2 & 0x1f));
          if (iVar2 == 0) {
            *pbVar7 = (byte)((byte)uVar4);
            iVar2 = (int)(4);
            pbVar7 = (byte *)(pbVar7 + 1);
            uVar4 = (uint)(0);
          }
          else {
            iVar2 = (int)(iVar2 + -4);
          }
          param_2 = (byte *)(param_2 + 1);
          iVar6 = (int)(iVar6 + -1);
        } while (iVar6 != 0);
        if (iVar2 != 4) {
          *pbVar7 = (byte)((byte)uVar4);
        }
      }
    }
    *(char*)((int)param_1 + 9) = (char)((char)param_3);
    bVar1 = (byte)((char)param_3 * *(char *)((int)param_1 + 10));
    *(byte*)((int)param_1 + 0xb) = (byte)(bVar1);
    if (7 < bVar1) {
      param_1[1] = (int)((uint)(bVar1 >> 3) * *param_1);
      return;
    }
    param_1[1] = (int)((uint)bVar1 * *param_1 + 7 >> 3);
  }
  return;
}


// Reference entry 114894f0; body size 656 bytes.
#line 1 "ENTRY_114894f0"

void FUN_114894f0(int *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  undefined2 uVar5;
  byte *pbVar7;
  uint local_38;
  byte *local_34;
  uint local_30;
  byte *local_2c;
  byte *local_28;
  byte *local_24;
  int local_20;
  int local_1c;
  uint local_14 [4];
  uint local_4;
  uint uVar6;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_38);
  local_34 = (byte *)(param_2);
  bVar4 = (byte)(*(byte *)(param_1 + 2));
  pbVar3 = (byte *)(local_2c);
  if (bVar4 != 3) {
    bVar1 = (byte)(*(byte *)((int)param_1 + 9));
    uVar6 = (uint)((uint)bVar1);
    if ((bVar4 & 2) == 0) {
      local_38 = (uint)(1);
      local_14[0] = (uint)((uint)param_3[3]);
      local_2c = (byte *)((byte *)(uVar6 - local_14[0]));
      local_24 = (byte *)(local_2c);
    }
    else {
      local_38 = (uint)(3);
      local_14[0] = (uint)((uint)*param_3);
      local_2c = (byte *)((byte *)(uVar6 - local_14[0]));
      local_24 = (byte *)(local_2c);
      local_14[1] = (uint)((uint)param_3[1]);
      local_20 = (int)(uVar6 - param_3[1]);
      local_14[2] = (uint)((uint)param_3[2]);
      local_1c = (int)(uVar6 - param_3[2]);
    }
    if ((bVar4 & 4) != 0) {
      bVar4 = (byte)(param_3[4]);
      (&local_24)[local_38] = (byte *)(uVar6 - bVar4);
      local_14[local_38] = (uint)((uint)bVar4);
      local_38 = (uint)(local_38 + 1);
    }
    local_30 = (uint)(local_14[0]);
    pbVar3 = (byte *)(local_2c);
    local_24 = (byte *)(local_2c);
    if (bVar1 < 8) {
      local_28 = (byte *)((byte *)param_1[1]);
      if ((param_3[3] == 1) && (bVar1 == 2)) {
        local_38 = (uint)(0x55);
      }
      else if ((bVar1 != 4) || (local_38 = 0x11, param_3[3] != 3)) {
        local_38 = (uint)(0xff);
      }
      if ((byte *)(local_28) != (byte *)0x0) {
        do {
          uVar6 = (uint)(0);
          bVar4 = (byte)(0);
          for (pbVar3 = (byte *)(local_2c); (int)-local_14[0] < (int)pbVar3; pbVar3 = pbVar3 + -local_14[0]) {
            if ((int)pbVar3 < 1) {
              uVar2 = (uint)(*param_2 >> (-(byte)pbVar3 & 0x1f) & local_38);
            }
            else {
              uVar2 = (uint)((uint)*param_2 << ((byte)pbVar3 & 0x1f));
            }
            uVar6 = (uint)(uVar6 | uVar2);
            bVar4 = (byte)((byte)uVar6);
          }
          *param_2 = (byte)(bVar4);
          param_2 = (byte *)(param_2 + 1);
          local_28 = (byte *)(local_28 + -1);
        } while ((byte *)(local_28) != (byte *)0x0);
        local_34 = (byte *)(param_2);
        thunk_FUN_1148ac28();
        return;
      }
    }
    else {
      local_28 = (byte *)((byte *)(*param_1 * local_38));
      local_34 = (byte *)((byte *)0x0);
      if (bVar1 == 8) {
        if ((byte *)(local_28) != (byte *)0x0) {
          do {
            uVar6 = (uint)(0);
            bVar4 = (byte)(0);
            local_30 = (uint)(local_14[(uint)local_34 % local_38]);
            for (pbVar3 = (byte *)((&local_24)[(uint)local_34 % local_38]); (int)-local_30 < (int)pbVar3;
                pbVar3 = pbVar3 + -local_30) {
              if ((int)pbVar3 < 1) {
                uVar2 = (uint)((uint)(*param_2 >> (-(byte)pbVar3 & 0x1f)));
              }
              else {
                uVar2 = (uint)((uint)*param_2 << ((byte)pbVar3 & 0x1f));
              }
              uVar6 = (uint)(uVar6 | uVar2);
              bVar4 = (byte)((byte)uVar6);
            }
            local_34 = (byte *)(local_34 + 1);
            *param_2 = (byte)(bVar4);
            param_2 = (byte *)(param_2 + 1);
          } while (local_34 < local_28);
          thunk_FUN_1148ac28();
          return;
        }
      }
      else if ((byte *)(local_28) != (byte *)0x0) {
        do {
          uVar6 = (uint)(0);
          uVar5 = (undefined2)(0);
          pbVar3 = (byte *)(param_2 + 1);
          local_30 = (uint)(local_14[(uint)local_34 % local_38]);
          for (pbVar7 = (byte *)((&local_24)[(uint)local_34 % local_38]); (int)-local_30 < (int)pbVar7;
              pbVar7 = pbVar7 + -local_30) {
            if ((int)pbVar7 < 1) {
              uVar2 = (uint)((uint)(ushort)(((uint)(*param_2) << 8 | (uint)(*pbVar3)) >> (-(byte)pbVar7 & 0x1f)));
            }
            else {
              uVar2 = (uint)((uint)((uint)(*param_2) << 8 | (uint)(*pbVar3)) << ((byte)pbVar7 & 0x1f));
            }
            uVar6 = (uint)(uVar6 | uVar2);
            uVar5 = (undefined2)((undefined2)uVar6);
          }
          *param_2 = (byte)((byte)((ushort)uVar5 >> 8));
          local_34 = (byte *)(local_34 + 1);
          *pbVar3 = (byte)((byte)uVar5);
          param_2 = (byte *)(param_2 + 2);
        } while (local_34 < local_28);
      }
    }
  }
  local_2c = (byte *)(pbVar3);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 114898e0; body size 286 bytes.
#line 1 "ENTRY_114898e0"

void FUN_114898e0(int *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  if ((char)param_1[2] == '\x06') {
    iVar3 = (int)(*param_1);
    if (*(char *)((int)param_1 + 9) == '\b') {
      puVar4 = (undefined1 *)(param_2);
      if (iVar3 != 0) {
        do {
          uVar1 = (undefined1)(*puVar4);
          *param_2 = (undefined1)(puVar4[1]);
          param_2[1] = (undefined1)(puVar4[2]);
          param_2[2] = (undefined1)(puVar4[3]);
          param_2[3] = (undefined1)(uVar1);
          iVar3 = (int)(iVar3 + -1);
          param_2 = (undefined1 *)(param_2 + 4);
          puVar4 = (undefined1 *)(puVar4 + 4);
        } while (iVar3 != 0);
        return;
      }
    }
    else {
      puVar4 = (undefined1 *)(param_2);
      if (iVar3 != 0) {
        do {
          uVar1 = (undefined1)(*puVar4);
          uVar2 = (undefined1)(puVar4[1]);
          *param_2 = (undefined1)(puVar4[2]);
          param_2[1] = (undefined1)(puVar4[3]);
          param_2[2] = (undefined1)(puVar4[4]);
          param_2[3] = (undefined1)(puVar4[5]);
          param_2[4] = (undefined1)(puVar4[6]);
          param_2[5] = (undefined1)(puVar4[7]);
          param_2[6] = (undefined1)(uVar1);
          param_2[7] = (undefined1)(uVar2);
          iVar3 = (int)(iVar3 + -1);
          param_2 = (undefined1 *)(param_2 + 8);
          puVar4 = (undefined1 *)(puVar4 + 8);
        } while (iVar3 != 0);
        return;
      }
    }
  }
  else if ((char)param_1[2] == '\x04') {
    iVar3 = (int)(*param_1);
    puVar4 = (undefined1 *)(param_2);
    if (*(char *)((int)param_1 + 9) == '\b') {
      if (iVar3 != 0) {
        do {
          uVar1 = (undefined1)(*puVar4);
          *param_2 = (undefined1)(puVar4[1]);
          param_2[1] = (undefined1)(uVar1);
          iVar3 = (int)(iVar3 + -1);
          param_2 = (undefined1 *)(param_2 + 2);
          puVar4 = (undefined1 *)(puVar4 + 2);
        } while (iVar3 != 0);
        return;
      }
    }
    else {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        uVar1 = (undefined1)(*param_2);
        uVar2 = (undefined1)(param_2[1]);
        *puVar4 = (undefined1)(param_2[2]);
        puVar4[1] = (undefined1)(param_2[3]);
        puVar4[2] = (undefined1)(uVar1);
        puVar4[3] = (undefined1)(uVar2);
        param_2 = (undefined1 *)(param_2 + 4);
        puVar4 = (undefined1 *)(puVar4 + 4);
      }
    }
  }
  return;
}


// Reference entry 11489a50; body size 450 bytes.
#line 1 "ENTRY_11489a50"

void FUN_11489a50(int param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 != 0) {
    uVar3 = (uint)(*(uint *)(param_1 + 0x7c));
    if (((uVar3 & 0x100000) != 0) && (*(code **)(param_1 + 0x68) != (code *)(0x0))) {
      (**(code **)(param_1 + 0x68))(param_1,param_2,*(int *)(param_1 + 0x124) + 1);
      uVar3 = (uint)(*(uint *)(param_1 + 0x7c));
    }
    if ((uVar3 & 0x8000) != 0) {
      thunk_FUN_11474270(param_2,*(int *)(param_1 + 0x124) + 1,~(*(uint *)(param_1 + 0x78) >> 7) & 1
                        );
      uVar3 = (uint)(*(uint *)(param_1 + 0x7c));
    }
    if ((uVar3 & 0x10000) != 0) {
      thunk_FUN_11474210(param_2,*(int *)(param_1 + 0x124) + 1);
      uVar3 = (uint)(*(uint *)(param_1 + 0x7c));
    }
    if ((uVar3 & 4) != 0) {
      FUN_11489350(param_2,*(int *)(param_1 + 0x124) + 1,*(undefined1 *)(param_1 + 0x150));
      uVar3 = (uint)(*(uint *)(param_1 + 0x7c));
    }
    if ((uVar3 & 0x10) != 0) {
      thunk_FUN_11474440(param_2,*(int *)(param_1 + 0x124) + 1);
      uVar3 = (uint)(*(uint *)(param_1 + 0x7c));
    }
    if ((uVar3 & 8) != 0) {
      FUN_114894f0(param_2,*(int *)(param_1 + 0x124) + 1,param_1 + 0x1a9);
      uVar3 = (uint)(*(uint *)(param_1 + 0x7c));
    }
    if ((uVar3 & 0x20000) != 0) {
      FUN_114898e0(param_2,*(int *)(param_1 + 0x124) + 1);
      uVar3 = (uint)(*(uint *)(param_1 + 0x7c));
    }
    if ((uVar3 & 0x80000) != 0) {
      puVar2 = (undefined1 *)((undefined1 *)(*(int *)(param_1 + 0x124) + 1));
      if ((char)param_2[2] == '\x06') {
        iVar4 = (int)(*param_2);
        if (*(char *)((int)param_2 + 9) == '\b') {
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar2[3] = (undefined1)(~puVar2[3]);
            puVar2 = (undefined1 *)(puVar2 + 4);
          }
        }
        else {
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar2[6] = (undefined1)(~puVar2[6]);
            puVar2[7] = (undefined1)(~puVar2[7]);
            puVar2 = (undefined1 *)(puVar2 + 8);
          }
        }
      }
      else if ((char)param_2[2] == '\x04') {
        iVar4 = (int)(*param_2);
        puVar1 = (undefined1 *)(puVar2);
        if (*(char *)((int)param_2 + 9) == '\b') {
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar2 = (undefined1)(*puVar1);
            puVar2[1] = (undefined1)(~puVar1[1]);
            puVar2 = (undefined1 *)(puVar2 + 2);
            puVar1 = (undefined1 *)(puVar1 + 2);
          }
        }
        else {
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar2[2] = (undefined1)(~puVar2[2]);
            puVar2[3] = (undefined1)(~puVar2[3]);
            puVar2 = (undefined1 *)(puVar2 + 4);
          }
        }
      }
    }
    if ((uVar3 & 1) != 0) {
      thunk_FUN_11473e30(param_2,*(int *)(param_1 + 0x124) + 1);
      uVar3 = (uint)(*(uint *)(param_1 + 0x7c));
    }
    if ((uVar3 & 0x20) != 0) {
      thunk_FUN_11474110(param_2,*(int *)(param_1 + 0x124) + 1);
    }
  }
  return;
}


// Reference entry 1148a74e; body size 134 bytes.
#line 1 "ENTRY_1148a74e"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1148a74e(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_122fabdd != '\0') {
    return (undefined4)(1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
                    
    thunk_FUN_1148c988(5);
  }
  iVar1 = (int)(___scrt_is_ucrt_dll_in_use());
  if ((iVar1 == 0) || (param_1 != 0)) {
    DAT_122fabe0 = (int)(0xffffffff);
    DAT_122fabe4 = (int)(0xffffffff);
    DAT_122fabe8 = (int)(0xffffffff);
    DAT_122fabec = (int)(0xffffffff);
    DAT_122fabf0 = (int)(0xffffffff);
    DAT_122fabf4 = (int)(0xffffffff);
LAB_1148a7c1:
    DAT_122fabdd = (int)('\x01');
    uVar2 = (undefined4)(1);
  }
  else {
    iVar1 = (int)(initialize_onexit_table(&DAT_122fabe0));
    if (iVar1 == 0) {
      iVar1 = (int)(initialize_onexit_table(&DAT_122fabec));
      if (iVar1 == 0) goto LAB_1148a7c1;
    }
    uVar2 = (undefined4)(0);
  }
  return (undefined4)(uVar2);
}


// Reference entry 1148aaa4; body size 74 bytes.
#line 1 "ENTRY_1148aaa4"

void FUN_1148aaa4(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_122fac08);
  DAT_12126b74 = (int)(DAT_12126b74 + 1);
  *param_1 = (int)(DAT_12126b74);
  *(int*)(*(int *)((int)((void *)__readfsdword(0x18)) + _tls_index * 4) + 0x104) = (int)(DAT_12126b74);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_122fac08);
  __Init_thread_notify();
  return;
}


// Reference entry 1148ab00; body size 82 bytes.
#line 1 "ENTRY_1148ab00"

void FUN_1148ab00(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_122fac08);
  do {
    if (*param_1 == 0) {
      *param_1 = (int)(-1);
LAB_1148ab47:
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_122fac08);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4*)(*(int *)((int)((void *)__readfsdword(0x18)) + _tls_index * 4) + 0x104) = (undefined4)(DAT_12126b74);
      goto LAB_1148ab47;
    }
    __Init_thread_wait(100);
  } while( true );
}


// Reference entry 1148abc7; body size 78 bytes.
#line 1 "ENTRY_1148abc7"

/* Library Function - Single Match
    __Init_thread_wait
   
   Library: Visual Studio 2019 Release */

void FUN_1148abc7(DWORD param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)(DAT_122fac20);
  if ((code *)(DAT_122fac20) == (code *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_122fac08);
    WaitForSingleObjectEx(DAT_122fac04,param_1,0);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_122fac08);
  }
  else {
    (*(code *)PTR_guard_check_icall_12302000)(&DAT_122fac00,&DAT_122fac08,param_1);
    (*pcVar1)();
  }
  return;
}


// Reference entry 1148b143; body size 83 bytes.
#line 1 "ENTRY_1148b143"

/* Library Function - Single Match
    int __stdcall dllmain_crt_dispatch(struct HINSTANCE__ * const_,unsigned long_,void * const_)
   
   Library: Visual Studio 2019 Release */

int __stdcall FUN_1148b143(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = (uint)(FUN_1148b2f2((void *)(param_3) != (void *)0x0));
  }
  else if (param_2 == 1) {
    uVar1 = (uint)(FUN_1148b1aa(param_1,param_3));
  }
  else {
    if (param_2 == 2) {
      uVar1 = (uint)(___scrt_dllmain_crt_thread_attach());
    }
    else {
      if (param_2 != 3) {
        return (int)(1);
      }
      uVar1 = (uint)(___scrt_dllmain_crt_thread_detach());
    }
    uVar1 = (uint)(uVar1 & 0xff);
  }
  return (int)(uVar1);
}


// Reference entry 1148b1aa; body size 249 bytes.
#line 1 "ENTRY_1148b1aa"

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_1148b1aa(undefined4 param_1,undefined4 param_2)

{
 try {
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  void *local_14;
  
  cVar3 = (char)(___scrt_initialize_crt(0));
  if (cVar3 != '\0') {
    ___scrt_acquire_startup_lock();
    bVar2 = (bool)(true);
    if (DAT_122fabd4 != 0) {
                    
      thunk_FUN_1148c988(7);
    }
    DAT_122fabd4 = (int)(1);
    cVar3 = (char)(thunk_FUN_1148a644());
    if (cVar3 != '\0') {
      thunk_FUN_1148cd37();
      thunk_FUN_1148ccef();
      thunk_FUN_1148cd0d();
      iVar4 = (int)(initterm_e(&DAT_1186ca6c,&DAT_1186cc74));
      if ((iVar4 == 0) && (cVar3 = ___scrt_dllmain_after_initialize_c(), cVar3 != '\0')) {
        initterm(&DAT_11867000,&DAT_1186c968);
        DAT_122fabd4 = (int)(2);
        bVar2 = (bool)(false);
      }
    }
    FUN_1148b28d();
    if (!bVar2) {
      piVar5 = (int *)((int *)thunk_FUN_1148cd31());
      if ((*piVar5 != 0) && (cVar3 = ___scrt_is_nonwritable_in_current_image(piVar5), cVar3 != '\0')
         ) {
        pcVar1 = (code *)((code *)*piVar5);
        (*(code *)PTR_guard_check_icall_12302000)(param_1,2,param_2);
        (*pcVar1)();
      }
      DAT_122fac34 = (int)(DAT_122fac34 + 1);

      return (undefined4)(1);
    }
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 1148b2f2; body size 153 bytes.
#line 1 "ENTRY_1148b2f2"

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

byte FUN_1148b2f2(undefined4 param_1)

{
 try {
  char cVar1;
  byte bVar2;
  void *local_14;
  
  if (DAT_122fac34 < 1) {
    bVar2 = (byte)(0);
  }
  else {
    DAT_122fac34 = (int)(DAT_122fac34 + -1);
    ___scrt_acquire_startup_lock();
    if (DAT_122fabd4 != 2) {
                    
      thunk_FUN_1148c988(7);
    }
    thunk_FUN_1148a6cc();
    thunk_FUN_1148ccfe();
    thunk_FUN_1148cd6e();
    DAT_122fabd4 = (int)(0);
    FUN_1148b387();
    cVar1 = (char)(___scrt_uninitialize_crt(param_1,0));
    bVar2 = (byte)(-(cVar1 != '\0') & 1);
    FUN_1148b394();
  }

  return (byte)(bVar2);

 } catch (...) { }
}


// Reference entry 1148b3ce; body size 231 bytes.
#line 1 "ENTRY_1148b3ce"

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * const_,unsigned long_,void * const_)
   
   Library: Visual Studio 2019 Release */

int __cdecl FUN_1148b3ce(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
 try {
  int iVar1;
  int iVar2;
  void *local_14;
  
  if ((param_2 == 0) && (DAT_122fac34 < 1)) {

    return (int)(0);
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    iVar1 = (int)(dllmain_raw(param_1,param_2,param_3));
    if (iVar1 == 0) {

      return (int)(0);
    }
    iVar1 = (int)(dllmain_crt_dispatch(param_1,param_2,param_3));
    if (iVar1 == 0) {

      return (int)(0);
    }
  }
  iVar1 = (int)(_DllMain_12(param_1,param_2,param_3));
  if ((param_2 == 1) && (iVar1 == 0)) {
    _DllMain_12(param_1,0,param_3);
    FUN_1148b2f2((void *)(param_3) != (void *)0x0);
    dllmain_raw(param_1,0,param_3);
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = (int)(dllmain_crt_dispatch(param_1,param_2,param_3));
    iVar1 = (int)(0);
    if (iVar2 != 0) {
      iVar1 = (int)(dllmain_raw(param_1,param_2,param_3));
    }
  }

  return (int)(iVar1);

 } catch (...) { }
}


// Reference entry 1148b9a0; body size 170 bytes.
#line 1 "ENTRY_1148b9a0"

/* Library Function - Single Match
    __alldiv
   
   Library: Visual Studio */

undefined8 __stdcall FUN_1148b9a0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (char)((int)param_2 < 0);
  if ((bool)cVar11) {
    bVar10 = (bool)(param_1 != 0);
    param_1 = (uint)(-param_1);
    param_2 = (uint)(-(uint)bVar10 - param_2);
  }
  if ((int)param_4 < 0) {
    cVar11 = (char)(cVar11 + '\x01');
    bVar10 = (bool)(param_3 != 0);
    param_3 = (uint)(-param_3);
    param_4 = (uint)(-(uint)bVar10 - param_4);
  }
  uVar7 = (uint)(param_1);
  uVar3 = (uint)(param_3);
  uVar5 = (uint)(param_2);
  uVar9 = (uint)(param_4);
  if (param_4 == 0) {
    uVar3 = (uint)(param_2 / param_3);
    iVar4 = (int)((int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3));
  }
  else {
    do {
      uVar8 = (uint)(uVar9 >> 1);
      uVar3 = (uint)((uint)(((unsigned long long)((uVar9 & 1) != 0) << 32 | (unsigned long long)(uVar3)) >> 1));
      uVar6 = (uint)(uVar5 >> 1);
      uVar7 = (uint)((uint)(((unsigned long long)((uVar5 & 1) != 0) << 32 | (unsigned long long)(uVar7)) >> 1));
      uVar5 = (uint)(uVar6);
      uVar9 = (uint)(uVar8);
    } while (uVar8 != 0);
    uVar1 = (ulonglong)(((unsigned long long)(uVar6) << 32 | (unsigned long long)(uVar7)) / (ulonglong)uVar3);
    iVar4 = (int)((int)uVar1);
    lVar2 = (longlong)((ulonglong)param_3 * (uVar1 & 0xffffffff));
    uVar3 = (uint)((uint)((ulonglong)lVar2 >> 0x20));
    uVar7 = (uint)(uVar3 + iVar4 * param_4);
    if (((((uint)(uVar3) + (uint)(iVar4 * param_4) < (uint)(uVar3))) || (param_2 < uVar7)) ||
       ((param_2 <= uVar7 && (param_1 < (uint)lVar2)))) {
      iVar4 = (int)(iVar4 + -1);
    }
    uVar3 = (uint)(0);
  }
  if (cVar11 == '\x01') {
    bVar10 = (bool)(iVar4 != 0);
    iVar4 = (int)(-iVar4);
    uVar3 = (uint)(-(uint)bVar10 - uVar3);
  }
  return (undefined8)(((unsigned long long)(uVar3) << 32 | (unsigned long long)(iVar4)));
}


// Reference entry 1148bed0; body size 178 bytes.
#line 1 "ENTRY_1148bed0"

/* Library Function - Single Match
    __allrem
   
   Library: Visual Studio */

undefined8 __stdcall FUN_1148bed0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  bVar13 = (bool)((int)param_2 < 0);
  if (bVar13) {
    bVar12 = (bool)(param_1 != 0);
    param_1 = (uint)(-param_1);
    param_2 = (uint)(-(uint)bVar12 - param_2);
  }
  uVar11 = (uint)((uint)bVar13);
  if ((int)param_4 < 0) {
    bVar13 = (bool)(param_3 != 0);
    param_3 = (uint)(-param_3);
    param_4 = (uint)(-(uint)bVar13 - param_4);
  }
  uVar4 = (uint)(param_1);
  uVar3 = (uint)(param_3);
  uVar8 = (uint)(param_2);
  uVar9 = (uint)(param_4);
  if (param_4 == 0) {
    iVar5 = (int)((int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3));
    iVar6 = (int)(0);
    if ((int)(uVar11 - 1) < 0) goto LAB_1148bf7d;
  }
  else {
    do {
      uVar10 = (uint)(uVar9 >> 1);
      uVar3 = (uint)((uint)(((unsigned long long)((uVar9 & 1) != 0) << 32 | (unsigned long long)(uVar3)) >> 1));
      uVar7 = (uint)(uVar8 >> 1);
      uVar4 = (uint)((uint)(((unsigned long long)((uVar8 & 1) != 0) << 32 | (unsigned long long)(uVar4)) >> 1));
      uVar8 = (uint)(uVar7);
      uVar9 = (uint)(uVar10);
    } while (uVar10 != 0);
    uVar1 = (ulonglong)(((unsigned long long)(uVar7) << 32 | (unsigned long long)(uVar4)) / (ulonglong)uVar3);
    uVar3 = (uint)((int)uVar1 * param_4);
    lVar2 = (longlong)((uVar1 & 0xffffffff) * (ulonglong)param_3);
    uVar8 = (uint)((uint)((ulonglong)lVar2 >> 0x20));
    uVar4 = (uint)((uint)lVar2);
    uVar9 = (uint)(uVar8 + uVar3);
    if (((((uint)(uVar8) + (uint)(uVar3) < (uint)(uVar8))) || (param_2 < uVar9)) || ((param_2 <= uVar9 && (param_1 < uVar4)))) {
      bVar13 = (bool)(uVar4 < param_3);
      uVar4 = (uint)(uVar4 - param_3);
      uVar9 = (uint)((uVar9 - param_4) - (uint)bVar13);
    }
    iVar5 = (int)(uVar4 - param_1);
    iVar6 = (int)((uVar9 - param_2) - (uint)(uVar4 < param_1));
    if (-1 < (int)(uVar11 - 1)) goto LAB_1148bf7d;
  }
  bVar13 = (bool)(iVar5 != 0);
  iVar5 = (int)(-iVar5);
  iVar6 = (int)(-(uint)bVar13 - iVar6);
LAB_1148bf7d:
  return (undefined8)(((unsigned long long)(iVar6) << 32 | (unsigned long long)(iVar5)));
}


// Reference entry 1148c04b; body size 465 bytes.
#line 1 "ENTRY_1148c04b"

/* WARNING: Removing unreachable block (ram,0x1148c0b9) */
/* WARNING: Removing unreachable block (ram,0x1148c07e) */
/* WARNING: Removing unreachable block (ram,0x1148c130) */

undefined4 FUN_1148c04b(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  BOOL BVar5;
  uint uVar6;
  uint uVar7;
  uint in_XCR0;
  uint local_18;
  uint local_14;
  
  DAT_122faff4 = (int)(0);
  DAT_12126b90 = (int)(DAT_12126b90 | 1);
  BVar5 = (BOOL)(IsProcessorFeaturePresent(10));
  uVar6 = (uint)(DAT_12126b90);
  if (BVar5 != 0) {
    piVar1 = (int *)((int *)cpuid_basic_info(0));
    puVar2 = (uint *)((uint *)cpuid_Version_info(1));
    uVar7 = (uint)(puVar2[3]);
    if (((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) &&
       (((((uVar6 = *puVar2 & 0xfff3ff0, uVar6 == 0x106c0 || (uVar6 == 0x20660)) ||
          (uVar6 == 0x20670)) || ((uVar6 == 0x30650 || (uVar6 == 0x30660)))) || (uVar6 == 0x30670)))
       ) {
      DAT_122faff8 = (int)(DAT_122faff8 | 1);
    }
    if (*piVar1 < 7) {
      local_14 = (uint)(0);
    }
    else {
      iVar3 = (int)(cpuid_Extended_Feature_Enumeration_info(7));
      local_14 = (uint)(*(uint *)(iVar3 + 4));
      if ((local_14 & 0x200) != 0) {
        DAT_122faff8 = (int)(DAT_122faff8 | 2);
      }
    }
    DAT_122faff4 = (int)(1);
    uVar6 = (uint)(DAT_12126b90 | 2);
    if ((uVar7 & 0x100000) != 0) {
      uVar6 = (uint)(DAT_12126b90 | 6);
      DAT_122faff4 = (int)(2);
      if (((uVar7 & 0x8000000) != 0) && ((uVar7 & 0x10000000) != 0)) {
        uVar4 = (undefined8)(xinuse(0));
        local_18 = (uint)(in_XCR0 & (uint)uVar4);
        if ((local_18 & 6) == 6) {
          DAT_122faff4 = (int)(3);
          uVar6 = (uint)(DAT_12126b90 | 0xe);
          if ((local_14 & 0x20) != 0) {
            DAT_122faff4 = (int)(5);
            uVar6 = (uint)(DAT_12126b90 | 0x2e);
            if (((local_14 & 0xd0030000) == 0xd0030000) && ((local_18 & 0xe0) == 0xe0)) {
              DAT_12126b90 = (int)(DAT_12126b90 | 0x6e);
              DAT_122faff4 = (int)(6);
              uVar6 = (uint)(DAT_12126b90);
            }
          }
        }
      }
    }
  }
  DAT_12126b90 = (int)(uVar6);
  return (undefined4)(0);
}


// Reference entry 1148c350; body size 117 bytes.
#line 1 "ENTRY_1148c350"

/* Library Function - Single Match
    __aullrem
   
   Library: Visual Studio */

undefined8 __stdcall FUN_1148c350(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar4 = (uint)(param_1);
  uVar9 = (uint)(param_4);
  uVar10 = (uint)(param_2);
  uVar3 = (uint)(param_3);
  if (param_4 == 0) {
    iVar6 = (int)((int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3));
    iVar7 = (int)(0);
  }
  else {
    do {
      uVar5 = (uint)(uVar9 >> 1);
      uVar3 = (uint)((uint)(((unsigned long long)((uVar9 & 1) != 0) << 32 | (unsigned long long)(uVar3)) >> 1));
      uVar8 = (uint)(uVar10 >> 1);
      uVar4 = (uint)((uint)(((unsigned long long)((uVar10 & 1) != 0) << 32 | (unsigned long long)(uVar4)) >> 1));
      uVar9 = (uint)(uVar5);
      uVar10 = (uint)(uVar8);
    } while (uVar5 != 0);
    uVar1 = (ulonglong)(((unsigned long long)(uVar8) << 32 | (unsigned long long)(uVar4)) / (ulonglong)uVar3);
    uVar3 = (uint)((int)uVar1 * param_4);
    lVar2 = (longlong)((uVar1 & 0xffffffff) * (ulonglong)param_3);
    uVar9 = (uint)((uint)((ulonglong)lVar2 >> 0x20));
    uVar4 = (uint)((uint)lVar2);
    uVar10 = (uint)(uVar9 + uVar3);
    if (((((uint)(uVar9) + (uint)(uVar3) < (uint)(uVar9))) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = (bool)(uVar4 < param_3);
      uVar4 = (uint)(uVar4 - param_3);
      uVar10 = (uint)((uVar10 - param_4) - (uint)bVar11);
    }
    iVar6 = (int)(-(uVar4 - param_1));
    iVar7 = (int)(-(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1)));
  }
  return (undefined8)(((unsigned long long)(iVar7) << 32 | (unsigned long long)(iVar6)));
}


// Reference entry 1148c3f0; body size 223 bytes.
#line 1 "ENTRY_1148c3f0"

/* Library Function - Single Match
    __alldvrm
   
   Library: Visual Studio */

undefined8 __stdcall FUN_1148c3f0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (char)((int)param_2 < 0);
  if ((bool)cVar11) {
    bVar10 = (bool)(param_1 != 0);
    param_1 = (uint)(-param_1);
    param_2 = (uint)(-(uint)bVar10 - param_2);
  }
  if ((int)param_4 < 0) {
    cVar11 = (char)(cVar11 + '\x01');
    bVar10 = (bool)(param_3 != 0);
    param_3 = (uint)(-param_3);
    param_4 = (uint)(-(uint)bVar10 - param_4);
  }
  uVar7 = (uint)(param_1);
  uVar3 = (uint)(param_3);
  uVar5 = (uint)(param_2);
  uVar9 = (uint)(param_4);
  if (param_4 == 0) {
    uVar3 = (uint)(param_2 / param_3);
    iVar4 = (int)((int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3));
  }
  else {
    do {
      uVar8 = (uint)(uVar9 >> 1);
      uVar3 = (uint)((uint)(((unsigned long long)((uVar9 & 1) != 0) << 32 | (unsigned long long)(uVar3)) >> 1));
      uVar6 = (uint)(uVar5 >> 1);
      uVar7 = (uint)((uint)(((unsigned long long)((uVar5 & 1) != 0) << 32 | (unsigned long long)(uVar7)) >> 1));
      uVar5 = (uint)(uVar6);
      uVar9 = (uint)(uVar8);
    } while (uVar8 != 0);
    uVar1 = (ulonglong)(((unsigned long long)(uVar6) << 32 | (unsigned long long)(uVar7)) / (ulonglong)uVar3);
    iVar4 = (int)((int)uVar1);
    lVar2 = (longlong)((ulonglong)param_3 * (uVar1 & 0xffffffff));
    uVar3 = (uint)((uint)((ulonglong)lVar2 >> 0x20));
    uVar7 = (uint)(uVar3 + iVar4 * param_4);
    if (((((uint)(uVar3) + (uint)(iVar4 * param_4) < (uint)(uVar3))) || (param_2 < uVar7)) ||
       ((param_2 <= uVar7 && (param_1 < (uint)lVar2)))) {
      iVar4 = (int)(iVar4 + -1);
    }
    uVar3 = (uint)(0);
  }
  if (cVar11 == '\x01') {
    bVar10 = (bool)(iVar4 != 0);
    iVar4 = (int)(-iVar4);
    uVar3 = (uint)(-(uint)bVar10 - uVar3);
  }
  return (undefined8)(((unsigned long long)(uVar3) << 32 | (unsigned long long)(iVar4)));
}


// Reference entry 1148c540; body size 104 bytes.
#line 1 "ENTRY_1148c540"

/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio */

undefined8 __stdcall FUN_1148c540(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar6;
  
  uVar9 = (uint)(param_1);
  uVar6 = (uint)(param_4);
  uVar7 = (uint)(param_2);
  uVar3 = (uint)(param_3);
  if (param_4 == 0) {
    uVar3 = (uint)(param_2 / param_3);
    iVar4 = (int)((int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3));
  }
  else {
    do {
      uVar5 = (uint)(uVar6 >> 1);
      uVar3 = (uint)((uint)(((unsigned long long)((uVar6 & 1) != 0) << 32 | (unsigned long long)(uVar3)) >> 1));
      uVar8 = (uint)(uVar7 >> 1);
      uVar9 = (uint)((uint)(((unsigned long long)((uVar7 & 1) != 0) << 32 | (unsigned long long)(uVar9)) >> 1));
      uVar6 = (uint)(uVar5);
      uVar7 = (uint)(uVar8);
    } while (uVar5 != 0);
    uVar1 = (ulonglong)(((unsigned long long)(uVar8) << 32 | (unsigned long long)(uVar9)) / (ulonglong)uVar3);
    iVar4 = (int)((int)uVar1);
    lVar2 = (longlong)((ulonglong)param_3 * (uVar1 & 0xffffffff));
    uVar3 = (uint)((uint)((ulonglong)lVar2 >> 0x20));
    uVar9 = (uint)(uVar3 + iVar4 * param_4);
    if (((((uint)(uVar3) + (uint)(iVar4 * param_4) < (uint)(uVar3))) || (param_2 < uVar9)) ||
       ((param_2 <= uVar9 && (param_1 < (uint)lVar2)))) {
      iVar4 = (int)(iVar4 + -1);
    }
    uVar3 = (uint)(0);
  }
  return (undefined8)(((unsigned long long)(uVar3) << 32 | (unsigned long long)(iVar4)));
}


// Reference entry 1148c5d0; body size 149 bytes.
#line 1 "ENTRY_1148c5d0"

/* Library Function - Single Match
    __aulldvrm
   
   Library: Visual Studio */

undefined8 __stdcall FUN_1148c5d0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar6;
  
  uVar9 = (uint)(param_1);
  uVar6 = (uint)(param_4);
  uVar7 = (uint)(param_2);
  uVar3 = (uint)(param_3);
  if (param_4 == 0) {
    uVar3 = (uint)(param_2 / param_3);
    iVar4 = (int)((int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3));
  }
  else {
    do {
      uVar5 = (uint)(uVar6 >> 1);
      uVar3 = (uint)((uint)(((unsigned long long)((uVar6 & 1) != 0) << 32 | (unsigned long long)(uVar3)) >> 1));
      uVar8 = (uint)(uVar7 >> 1);
      uVar9 = (uint)((uint)(((unsigned long long)((uVar7 & 1) != 0) << 32 | (unsigned long long)(uVar9)) >> 1));
      uVar6 = (uint)(uVar5);
      uVar7 = (uint)(uVar8);
    } while (uVar5 != 0);
    uVar1 = (ulonglong)(((unsigned long long)(uVar8) << 32 | (unsigned long long)(uVar9)) / (ulonglong)uVar3);
    iVar4 = (int)((int)uVar1);
    lVar2 = (longlong)((ulonglong)param_3 * (uVar1 & 0xffffffff));
    uVar3 = (uint)((uint)((ulonglong)lVar2 >> 0x20));
    uVar9 = (uint)(uVar3 + iVar4 * param_4);
    if (((((uint)(uVar3) + (uint)(iVar4 * param_4) < (uint)(uVar3))) || (param_2 < uVar9)) ||
       ((param_2 <= uVar9 && (param_1 < (uint)lVar2)))) {
      iVar4 = (int)(iVar4 + -1);
    }
    uVar3 = (uint)(0);
  }
  return (undefined8)(((unsigned long long)(uVar3) << 32 | (unsigned long long)(iVar4)));
}


// Reference entry 1148c7fb; body size 76 bytes.
#line 1 "ENTRY_1148c7fb"

void FUN_1148c7fb(int param_1,int param_2,uint param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)(DAT_122fb000);
  if (((param_3 < (param_1 - param_2) + 0xee3f1280U) && (param_1 + 0xee3f1280U < 0xc5)) &&
     ((code *)(DAT_122fb000) != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_12302000)(param_1);
    (*pcVar1)();
  }
  return;
}


// Reference entry 1148cb93; body size 85 bytes.
#line 1 "ENTRY_1148cb93"

undefined4 __stdcall FUN_1148cb93(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)*param_1);
  if (((*piVar3 == -0x1f928c9d) && (piVar3[4] == 3)) &&
     ((iVar1 = piVar3[5], iVar1 == 0x19930520 ||
      (((iVar1 == 0x19930521 || (iVar1 == 0x19930522)) || (iVar1 == 0x1994000)))))) {
    piVar2 = (int *)((int *)__current_exception());
    *piVar2 = (int)((int)piVar3);
    iVar1 = (int)(param_1[1]);
    piVar3 = (int *)((int *)__current_exception_context());
    *piVar3 = (int)(iVar1);
                    
    terminate();
  }
  return (undefined4)(0);
}


// Reference entry 1148cc68; body size 75 bytes.
#line 1 "ENTRY_1148cc68"

/* Library Function - Single Match
    ___security_init_cookie
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl FUN_1148cc68(void)

{
  if ((DAT_12126b84 == 0xbb40e64e) || ((DAT_12126b84 & 0xffff0000) == 0)) {
    DAT_12126b84 = (int)(___get_entropy());
    if (DAT_12126b84 == 0xbb40e64e) {
      DAT_12126b84 = (int)(0xbb40e64f);
    }
    else if ((DAT_12126b84 & 0xffff0000) == 0) {
      DAT_12126b84 = (int)(DAT_12126b84 | (DAT_12126b84 | 0x4711) << 0x10);
    }
  }
  DAT_12126b80 = (int)(~DAT_12126b84);
  return;
}


// Reference entry 117e8ad0; body size 91 bytes.
#line 1 "ENTRY_117e8ad0"

void FUN_117e8ad0(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a071c);

  if ((int *)(DAT_121a071c) != (int *)0x0) {
    DAT_121a0718 = (int)(0);
    DAT_121a071c = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117e9d10; body size 91 bytes.
#line 1 "ENTRY_117e9d10"

void FUN_117e9d10(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a0834);

  if ((int *)(DAT_121a0834) != (int *)0x0) {
    DAT_121a0830 = (int)(0);
    DAT_121a0834 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117ea340; body size 91 bytes.
#line 1 "ENTRY_117ea340"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_117ea340(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a08d8);

  if ((int *)(DAT_121a08d8) != (int *)0x0) {
    DAT_121a08d4 = (int)(0);
    DAT_121a08d8 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117ea900; body size 91 bytes.
#line 1 "ENTRY_117ea900"

void FUN_117ea900(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a08f8);

  if ((int *)(DAT_121a08f8) != (int *)0x0) {
    DAT_121a08f4 = (int)(0);
    DAT_121a08f8 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117eb4b0; body size 91 bytes.
#line 1 "ENTRY_117eb4b0"

void FUN_117eb4b0(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a097c);

  if ((int *)(DAT_121a097c) != (int *)0x0) {
    DAT_121a0978 = (int)(0);
    DAT_121a097c = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117eb530; body size 91 bytes.
#line 1 "ENTRY_117eb530"

void FUN_117eb530(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a09c8);

  if ((int *)(DAT_121a09c8) != (int *)0x0) {
    DAT_121a09c4 = (int)(0);
    DAT_121a09c8 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117ebc50; body size 91 bytes.
#line 1 "ENTRY_117ebc50"

void FUN_117ebc50(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a0a1c);

  if ((int *)(DAT_121a0a1c) != (int *)0x0) {
    DAT_121a0a18 = (int)(0);
    DAT_121a0a1c = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117ec520; body size 91 bytes.
#line 1 "ENTRY_117ec520"

void FUN_117ec520(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a0a84);

  if ((int *)(DAT_121a0a84) != (int *)0x0) {
    DAT_121a0a80 = (int)(0);
    DAT_121a0a84 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117ec8b0; body size 88 bytes.
#line 1 "ENTRY_117ec8b0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_117ec8b0(void)

{
  uint uVar1;
  uint uVar2;
  
  if (0xf < DAT_121190c4) {
    uVar2 = (uint)(DAT_121190c4 + 1);
    uVar1 = (uint)(DAT_121190b0);
    if (0xfff < uVar2) {
      uVar1 = (uint)(*(uint *)(DAT_121190b0 - 4));
      uVar2 = (uint)(DAT_121190c4 + 0x24);
      if (0x1f < (DAT_121190b0 - uVar1) - 4) {
                    
                    
                    
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    thunk_FUN_1148a50e(uVar1,uVar2);
  }
  DAT_121190c0 = (int)(0);
  DAT_121190c4 = (int)(0xf);
  DAT_121190b0 = (int)(DAT_121190b0 & 0xffffff00);
  return;
}


// Reference entry 117ecb50; body size 91 bytes.
#line 1 "ENTRY_117ecb50"

void FUN_117ecb50(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a0ad8);

  if ((int *)(DAT_121a0ad8) != (int *)0x0) {
    DAT_121a0ad4 = (int)(0);
    DAT_121a0ad8 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117ecc40; body size 91 bytes.
#line 1 "ENTRY_117ecc40"

void FUN_117ecc40(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a0a98);

  if ((int *)(DAT_121a0a98) != (int *)0x0) {
    DAT_121a0a94 = (int)(0);
    DAT_121a0a98 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117eccc0; body size 91 bytes.
#line 1 "ENTRY_117eccc0"

void FUN_117eccc0(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a0af4);

  if ((int *)(DAT_121a0af4) != (int *)0x0) {
    DAT_121a0af0 = (int)(0);
    DAT_121a0af4 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117ecd40; body size 91 bytes.
#line 1 "ENTRY_117ecd40"

void FUN_117ecd40(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a0ae8);

  if ((int *)(DAT_121a0ae8) != (int *)0x0) {
    DAT_121a0ae4 = (int)(0);
    DAT_121a0ae8 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117ecdc0; body size 91 bytes.
#line 1 "ENTRY_117ecdc0"

void FUN_117ecdc0(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a0b04);

  if ((int *)(DAT_121a0b04) != (int *)0x0) {
    DAT_121a0b00 = (int)(0);
    DAT_121a0b04 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117eceb0; body size 88 bytes.
#line 1 "ENTRY_117eceb0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_117eceb0(void)

{
  uint uVar1;
  uint uVar2;
  
  if (0xf < DAT_121190e0) {
    uVar2 = (uint)(DAT_121190e0 + 1);
    uVar1 = (uint)(DAT_121190cc);
    if (0xfff < uVar2) {
      uVar1 = (uint)(*(uint *)(DAT_121190cc - 4));
      uVar2 = (uint)(DAT_121190e0 + 0x24);
      if (0x1f < (DAT_121190cc - uVar1) - 4) {
                    
                    
                    
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    thunk_FUN_1148a50e(uVar1,uVar2);
  }
  DAT_121190dc = (int)(0);
  DAT_121190e0 = (int)(0xf);
  DAT_121190cc = (int)(DAT_121190cc & 0xffffff00);
  return;
}


// Reference entry 117ecfd0; body size 91 bytes.
#line 1 "ENTRY_117ecfd0"

void FUN_117ecfd0(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a0b28);

  if ((int *)(DAT_121a0b28) != (int *)0x0) {
    DAT_121a0b24 = (int)(0);
    DAT_121a0b28 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117eda60; body size 91 bytes.
#line 1 "ENTRY_117eda60"

void FUN_117eda60(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a0bb8);

  if ((int *)(DAT_121a0bb8) != (int *)0x0) {
    DAT_121a0bb4 = (int)(0);
    DAT_121a0bb8 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117ee570; body size 91 bytes.
#line 1 "ENTRY_117ee570"

void FUN_117ee570(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a0c5c);

  if ((int *)(DAT_121a0c5c) != (int *)0x0) {
    DAT_121a0c58 = (int)(0);
    DAT_121a0c5c = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117eeba0; body size 91 bytes.
#line 1 "ENTRY_117eeba0"

void FUN_117eeba0(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a0cac);

  if ((int *)(DAT_121a0cac) != (int *)0x0) {
    DAT_121a0ca8 = (int)(0);
    DAT_121a0cac = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117f0730; body size 91 bytes.
#line 1 "ENTRY_117f0730"

void FUN_117f0730(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a0dc4);

  if ((int *)(DAT_121a0dc4) != (int *)0x0) {
    DAT_121a0dc0 = (int)(0);
    DAT_121a0dc4 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117f1470; body size 88 bytes.
#line 1 "ENTRY_117f1470"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_117f1470(void)

{
  uint uVar1;
  uint uVar2;
  
  if (0xf < DAT_12119540) {
    uVar2 = (uint)(DAT_12119540 + 1);
    uVar1 = (uint)(DAT_1211952c);
    if (0xfff < uVar2) {
      uVar1 = (uint)(*(uint *)(DAT_1211952c - 4));
      uVar2 = (uint)(DAT_12119540 + 0x24);
      if (0x1f < (DAT_1211952c - uVar1) - 4) {
                    
                    
                    
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    thunk_FUN_1148a50e(uVar1,uVar2);
  }
  DAT_1211953c = (int)(0);
  DAT_12119540 = (int)(0xf);
  DAT_1211952c = (int)(DAT_1211952c & 0xffffff00);
  return;
}


// Reference entry 117f1bc0; body size 88 bytes.
#line 1 "ENTRY_117f1bc0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_117f1bc0(void)

{
  uint uVar1;
  uint uVar2;
  
  if (0xf < DAT_12119564) {
    uVar2 = (uint)(DAT_12119564 + 1);
    uVar1 = (uint)(DAT_12119550);
    if (0xfff < uVar2) {
      uVar1 = (uint)(*(uint *)(DAT_12119550 - 4));
      uVar2 = (uint)(DAT_12119564 + 0x24);
      if (0x1f < (DAT_12119550 - uVar1) - 4) {
                    
                    
                    
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    thunk_FUN_1148a50e(uVar1,uVar2);
  }
  DAT_12119560 = (int)(0);
  DAT_12119564 = (int)(0xf);
  DAT_12119550 = (int)(DAT_12119550 & 0xffffff00);
  return;
}


// Reference entry 117f3d10; body size 88 bytes.
#line 1 "ENTRY_117f3d10"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_117f3d10(void)

{
  uint uVar1;
  uint uVar2;
  
  if (0xf < DAT_12119598) {
    uVar2 = (uint)(DAT_12119598 + 1);
    uVar1 = (uint)(DAT_12119584);
    if (0xfff < uVar2) {
      uVar1 = (uint)(*(uint *)(DAT_12119584 - 4));
      uVar2 = (uint)(DAT_12119598 + 0x24);
      if (0x1f < (DAT_12119584 - uVar1) - 4) {
                    
                    
                    
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    thunk_FUN_1148a50e(uVar1,uVar2);
  }
  DAT_12119594 = (int)(0);
  DAT_12119598 = (int)(0xf);
  DAT_12119584 = (int)(DAT_12119584 & 0xffffff00);
  return;
}


// Reference entry 117f41e0; body size 91 bytes.
#line 1 "ENTRY_117f41e0"

void FUN_117f41e0(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a11ac);

  if ((int *)(DAT_121a11ac) != (int *)0x0) {
    DAT_121a11a8 = (int)(0);
    DAT_121a11ac = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117f4260; body size 94 bytes.
#line 1 "ENTRY_117f4260"

void FUN_117f4260(void)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_121a1154 != 0) {
    uVar1 = (uint)(DAT_121a115c - DAT_121a1154 & 0xfffffffc);
    iVar2 = (int)(DAT_121a1154);
    if (0xfff < uVar1) {
      iVar2 = (int)(*(int *)(DAT_121a1154 + -4));
      uVar1 = (uint)(uVar1 + 0x23);
      if (0x1f < (DAT_121a1154 - iVar2) - 4U) {
                    
                    
                    
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar1);
    DAT_121a1154 = (int)(0);
    DAT_121a1158 = (int)(0);
    DAT_121a115c = (int)(0);
  }
  return;
}


// Reference entry 117f61c0; body size 91 bytes.
#line 1 "ENTRY_117f61c0"

void FUN_117f61c0(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a1364);

  if ((int *)(DAT_121a1364) != (int *)0x0) {
    DAT_121a1360 = (int)(0);
    DAT_121a1364 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117f64e0; body size 88 bytes.
#line 1 "ENTRY_117f64e0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_117f64e0(void)

{
  uint uVar1;
  uint uVar2;
  
  if (0xf < DAT_12119630) {
    uVar2 = (uint)(DAT_12119630 + 1);
    uVar1 = (uint)(DAT_1211961c);
    if (0xfff < uVar2) {
      uVar1 = (uint)(*(uint *)(DAT_1211961c - 4));
      uVar2 = (uint)(DAT_12119630 + 0x24);
      if (0x1f < (DAT_1211961c - uVar1) - 4) {
                    
                    
                    
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    thunk_FUN_1148a50e(uVar1,uVar2);
  }
  DAT_1211962c = (int)(0);
  DAT_12119630 = (int)(0xf);
  DAT_1211961c = (int)(DAT_1211961c & 0xffffff00);
  return;
}


// Reference entry 117f6cc0; body size 91 bytes.
#line 1 "ENTRY_117f6cc0"

void FUN_117f6cc0(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a13fc);

  if ((int *)(DAT_121a13fc) != (int *)0x0) {
    DAT_121a13f8 = (int)(0);
    DAT_121a13fc = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117f6d40; body size 91 bytes.
#line 1 "ENTRY_117f6d40"

void FUN_117f6d40(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a140c);

  if ((int *)(DAT_121a140c) != (int *)0x0) {
    DAT_121a1408 = (int)(0);
    DAT_121a140c = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117f6dc0; body size 91 bytes.
#line 1 "ENTRY_117f6dc0"

void FUN_117f6dc0(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a13ec);

  if ((int *)(DAT_121a13ec) != (int *)0x0) {
    DAT_121a13e8 = (int)(0);
    DAT_121a13ec = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117f7a10; body size 91 bytes.
#line 1 "ENTRY_117f7a10"

void FUN_117f7a10(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a1538);

  if ((int *)(DAT_121a1538) != (int *)0x0) {
    DAT_121a1534 = (int)(0);
    DAT_121a1538 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117f7a90; body size 91 bytes.
#line 1 "ENTRY_117f7a90"

void FUN_117f7a90(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a1528);

  if ((int *)(DAT_121a1528) != (int *)0x0) {
    DAT_121a1524 = (int)(0);
    DAT_121a1528 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117f7b10; body size 91 bytes.
#line 1 "ENTRY_117f7b10"

void FUN_117f7b10(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a1548);

  if ((int *)(DAT_121a1548) != (int *)0x0) {
    DAT_121a1544 = (int)(0);
    DAT_121a1548 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117f8240; body size 91 bytes.
#line 1 "ENTRY_117f8240"

void FUN_117f8240(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a15a0);

  if ((int *)(DAT_121a15a0) != (int *)0x0) {
    DAT_121a159c = (int)(0);
    DAT_121a15a0 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117f8fe0; body size 91 bytes.
#line 1 "ENTRY_117f8fe0"

void FUN_117f8fe0(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a1648);

  if ((int *)(DAT_121a1648) != (int *)0x0) {
    DAT_121a1644 = (int)(0);
    DAT_121a1648 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117f9ae0; body size 91 bytes.
#line 1 "ENTRY_117f9ae0"

void FUN_117f9ae0(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a1750);

  if ((int *)(DAT_121a1750) != (int *)0x0) {
    DAT_121a174c = (int)(0);
    DAT_121a1750 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117f9b60; body size 91 bytes.
#line 1 "ENTRY_117f9b60"

void FUN_117f9b60(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a1740);

  if ((int *)(DAT_121a1740) != (int *)0x0) {
    DAT_121a173c = (int)(0);
    DAT_121a1740 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117f9be0; body size 91 bytes.
#line 1 "ENTRY_117f9be0"

void FUN_117f9be0(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a16d0);

  if ((int *)(DAT_121a16d0) != (int *)0x0) {
    DAT_121a16cc = (int)(0);
    DAT_121a16d0 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117f9c60; body size 91 bytes.
#line 1 "ENTRY_117f9c60"

void FUN_117f9c60(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a16f0);

  if ((int *)(DAT_121a16f0) != (int *)0x0) {
    DAT_121a16ec = (int)(0);
    DAT_121a16f0 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117f9ce0; body size 91 bytes.
#line 1 "ENTRY_117f9ce0"

void FUN_117f9ce0(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a1720);

  if ((int *)(DAT_121a1720) != (int *)0x0) {
    DAT_121a171c = (int)(0);
    DAT_121a1720 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117f9d60; body size 91 bytes.
#line 1 "ENTRY_117f9d60"

void FUN_117f9d60(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a1710);

  if ((int *)(DAT_121a1710) != (int *)0x0) {
    DAT_121a170c = (int)(0);
    DAT_121a1710 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117f9de0; body size 91 bytes.
#line 1 "ENTRY_117f9de0"

void FUN_117f9de0(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a16e0);

  if ((int *)(DAT_121a16e0) != (int *)0x0) {
    DAT_121a16dc = (int)(0);
    DAT_121a16e0 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117f9e60; body size 91 bytes.
#line 1 "ENTRY_117f9e60"

void FUN_117f9e60(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a1700);

  if ((int *)(DAT_121a1700) != (int *)0x0) {
    DAT_121a16fc = (int)(0);
    DAT_121a1700 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117f9ee0; body size 91 bytes.
#line 1 "ENTRY_117f9ee0"

void FUN_117f9ee0(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a1730);

  if ((int *)(DAT_121a1730) != (int *)0x0) {
    DAT_121a172c = (int)(0);
    DAT_121a1730 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117fbe00; body size 91 bytes.
#line 1 "ENTRY_117fbe00"

void FUN_117fbe00(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a18b8);

  if ((int *)(DAT_121a18b8) != (int *)0x0) {
    DAT_121a18b4 = (int)(0);
    DAT_121a18b8 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117fbef0; body size 91 bytes.
#line 1 "ENTRY_117fbef0"

void FUN_117fbef0(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a18c8);

  if ((int *)(DAT_121a18c8) != (int *)0x0) {
    DAT_121a18c4 = (int)(0);
    DAT_121a18c8 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 117fe9e0; body size 91 bytes.
#line 1 "ENTRY_117fe9e0"

void FUN_117fe9e0(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a1abc);

  if ((int *)(DAT_121a1abc) != (int *)0x0) {
    DAT_121a1ab8 = (int)(0);
    DAT_121a1abc = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 118027a0; body size 88 bytes.
#line 1 "ENTRY_118027a0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_118027a0(void)

{
  uint uVar1;
  uint uVar2;
  
  if (0xf < DAT_1211966c) {
    uVar2 = (uint)(DAT_1211966c + 1);
    uVar1 = (uint)(DAT_12119658);
    if (0xfff < uVar2) {
      uVar1 = (uint)(*(uint *)(DAT_12119658 - 4));
      uVar2 = (uint)(DAT_1211966c + 0x24);
      if (0x1f < (DAT_12119658 - uVar1) - 4) {
                    
                    
                    
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    thunk_FUN_1148a50e(uVar1,uVar2);
  }
  DAT_12119668 = (int)(0);
  DAT_1211966c = (int)(0xf);
  DAT_12119658 = (int)(DAT_12119658 & 0xffffff00);
  return;
}


// Reference entry 11802ff0; body size 91 bytes.
#line 1 "ENTRY_11802ff0"

void FUN_11802ff0(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a1dac);

  if ((int *)(DAT_121a1dac) != (int *)0x0) {
    DAT_121a1da8 = (int)(0);
    DAT_121a1dac = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 118055a0; body size 91 bytes.
#line 1 "ENTRY_118055a0"

void FUN_118055a0(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a1f94);

  if ((int *)(DAT_121a1f94) != (int *)0x0) {
    DAT_121a1f90 = (int)(0);
    DAT_121a1f94 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 118064a0; body size 88 bytes.
#line 1 "ENTRY_118064a0"

void FUN_118064a0(void)

{
  thunk_FUN_10246290(&DAT_121a2020,*(undefined4 *)(DAT_121a2020 + 4));
  thunk_FUN_1148a50e(DAT_121a2020,0x18);
  thunk_FUN_105b6da0(&DAT_121a2018,*(undefined4 *)(DAT_121a2018 + 4));
  thunk_FUN_1148a50e(DAT_121a2018,0x18);
  thunk_FUN_105ba370();
  return;
}


// Reference entry 1180a9b0; body size 91 bytes.
#line 1 "ENTRY_1180a9b0"

void FUN_1180a9b0(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a25f4);

  if ((int *)(DAT_121a25f4) != (int *)0x0) {
    DAT_121a25f0 = (int)(0);
    DAT_121a25f4 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 1180abf0; body size 91 bytes.
#line 1 "ENTRY_1180abf0"

void FUN_1180abf0(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a2654);

  if ((int *)(DAT_121a2654) != (int *)0x0) {
    DAT_121a2650 = (int)(0);
    DAT_121a2654 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 1180aff0; body size 88 bytes.
#line 1 "ENTRY_1180aff0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1180aff0(void)

{
  uint uVar1;
  uint uVar2;
  
  if (0xf < DAT_12119b34) {
    uVar2 = (uint)(DAT_12119b34 + 1);
    uVar1 = (uint)(DAT_12119b20);
    if (0xfff < uVar2) {
      uVar1 = (uint)(*(uint *)(DAT_12119b20 - 4));
      uVar2 = (uint)(DAT_12119b34 + 0x24);
      if (0x1f < (DAT_12119b20 - uVar1) - 4) {
                    
                    
                    
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    thunk_FUN_1148a50e(uVar1,uVar2);
  }
  DAT_12119b30 = (int)(0);
  DAT_12119b34 = (int)(0xf);
  DAT_12119b20 = (int)(DAT_12119b20 & 0xffffff00);
  return;
}


// Reference entry 1180baa0; body size 91 bytes.
#line 1 "ENTRY_1180baa0"

void FUN_1180baa0(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a2688);

  if ((int *)(DAT_121a2688) != (int *)0x0) {
    DAT_121a2684 = (int)(0);
    DAT_121a2688 = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 1180e380; body size 98 bytes.
#line 1 "ENTRY_1180e380"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1180e380(void)

{
  thunk_FUN_10246290(&DAT_121a2a64,*(undefined4 *)(DAT_121a2a64 + 4));
  thunk_FUN_1148a50e(DAT_121a2a64,0x18);
  thunk_FUN_10723b00(&DAT_121a2a5c,*(undefined4 *)(DAT_121a2a5c + 4));
  thunk_FUN_1148a50e(DAT_121a2a5c,0x18);
  DAT_121a2a58 = (int)((uint)&ghidra_vftable_SCLoggingHelper);
  thunk_FUN_105ba370();
  return;
}


// Reference entry 1182acc0; body size 91 bytes.
#line 1 "ENTRY_1182acc0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1182acc0(void)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(DAT_121a4a2c);

  if ((int *)(DAT_121a4a2c) != (int *)0x0) {
    DAT_121a4a28 = (int)(0);
    DAT_121a4a2c = (int)((int *)0x0);
    (**(code **)(*piVar1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


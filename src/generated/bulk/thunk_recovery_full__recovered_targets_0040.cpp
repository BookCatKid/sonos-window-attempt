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
typedef unsigned char uchar;
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
namespace std { template<class... A> static int _Xlength_error(A...) { return 0; } typedef int _Iterator_base0; }
struct SCOpRefBase { char _pad; SCOpRefBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> static int int_start(A...) { return 0; } };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> static int format(A...) { return 0; } template<class... A> static int int_addref(A...) { return 0; } template<class... A> static int int_allocRep(A...) { return 0; } template<class... A> static int int_release(A...) { return 0; } template<class... A> static int length(A...) { return 0; } static int op_ctor(...) { return 0; } static int op_dtor(...) { return 0; } static int op_lt(...) { return 0; } };
namespace std { template<class...> struct _Tree_simple_types { char _pad; _Tree_simple_types(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); }; }
namespace std { template<class...> struct _Tree_unchecked_const_iterator { char _pad; _Tree_unchecked_const_iterator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); static int op_inc(...); }; }
namespace std { template<class...> struct _Tree_val { char _pad; _Tree_val(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); }; }
struct AlarmClock { char _pad; AlarmClock(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct DeviceProperties { char _pad; DeviceProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct GetDailyIndexRefreshTime { char _pad; GetDailyIndexRefreshTime(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct GetZoneInfo { char _pad; GetZoneInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct RefreshShareIndex { char _pad; RefreshShareIndex(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIAreaManager { char _pad; SCIAreaManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIDisplayType { char _pad; SCIDisplayType(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIIndexManager { char _pad; SCIIndexManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIOpAlarmClockGetDailyIndexRefreshTime { char _pad; SCIOpAlarmClockGetDailyIndexRefreshTime(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIOpAlarmClockSetDailyIndexRefreshTime { char _pad; SCIOpAlarmClockSetDailyIndexRefreshTime(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIOpGetAboutSonosString { char _pad; SCIOpGetAboutSonosString(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIOpGetUsageDataShareOption { char _pad; SCIOpGetUsageDataShareOption(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIOpSystemPropertyGetRDM { char _pad; SCIOpSystemPropertyGetRDM(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIOpSystemPropertyGetString { char _pad; SCIOpSystemPropertyGetString(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SetDailyIndexRefreshTime { char _pad; SetDailyIndexRefreshTime(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Subscribed { char _pad; Subscribed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SwfObjAVTAdapter { char _pad; SwfObjAVTAdapter(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Unsubscribed { char _pad; Unsubscribed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct ZoneGroup { char _pad; ZoneGroup(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
typedef void *AVT;
typedef void *E9;
typedef void *WARNING;
using namespace std;
struct Recovered_Bulk { char _pad; /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10c8a120(undefined4 *param_2); template<class... A> int FUN_10c8a120(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10c8a150(undefined4 *param_2); template<class... A> int FUN_10c8a150(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10c8a1d0(undefined4 *param_2); template<class... A> int FUN_10c8a1d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10c8a9f0(int *param_2,int param_3); template<class... A> int FUN_10c8a9f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10c8aa40(int *param_2,int param_3); template<class... A> int FUN_10c8aa40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10c8b3d0(uint param_2,int param_3,int *param_4); template<class... A> int FUN_10c8b3d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10c8b450(uint param_2,int param_3,int *param_4); template<class... A> int FUN_10c8b450(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10c8b940(undefined4 *param_2); template<class... A> int FUN_10c8b940(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10c8b960(undefined4 *param_2); template<class... A> int FUN_10c8b960(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10c8b980(undefined4 *param_2); template<class... A> int FUN_10c8b980(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10c8b990(undefined4 *param_2); template<class... A> int FUN_10c8b990(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10c8b9a0(undefined4 *param_2); template<class... A> int FUN_10c8b9a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10c8b9b0(undefined4 *param_2); template<class... A> int FUN_10c8b9b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10c8b9c0(undefined4 *param_2); template<class... A> int FUN_10c8b9c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10c8b9d0(undefined4 *param_2); template<class... A> int FUN_10c8b9d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10c8c090(undefined4 *param_2); template<class... A> int FUN_10c8c090(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10c8c0b0(undefined4 *param_2); template<class... A> int FUN_10c8c0b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10c8c0d0(undefined4 *param_2); template<class... A> int FUN_10c8c0d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10c8c0e0(undefined4 *param_2); template<class... A> int FUN_10c8c0e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10c8c0f0(byte *param_2); template<class... A> int FUN_10c8c0f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10c8c150(byte *param_2); template<class... A> int FUN_10c8c150(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10c8d1c0(undefined4 *param_2); template<class... A> int FUN_10c8d1c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10c8d1d0(undefined4 *param_2); template<class... A> int FUN_10c8d1d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10c8d1e0(undefined4 *param_2); template<class... A> int FUN_10c8d1e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10c8d1f0(undefined4 *param_2); template<class... A> int FUN_10c8d1f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10c8d200(undefined4 *param_2); template<class... A> int FUN_10c8d200(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10c93600(int *param_2); template<class... A> int FUN_10c93600(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10c93620(int *param_2); template<class... A> int FUN_10c93620(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10c93690(undefined4 *param_2); template<class... A> int FUN_10c93690(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10c936b0(undefined4 *param_2); template<class... A> int FUN_10c936b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10c936d0(int param_2); template<class... A> int FUN_10c936d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10c9da40(undefined4 *param_2,undefined4 *param_3); template<class... A> int FUN_10c9da40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10c9da60(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); template<class... A> int FUN_10c9da60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10c9db10(int *param_2); template<class... A> int FUN_10c9db10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10c9dc20(undefined4 *param_2); template<class... A> int FUN_10c9dc20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10c9dc70(undefined4 *param_2); template<class... A> int FUN_10c9dc70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10c9dcc0(undefined4 *param_2); template<class... A> int FUN_10c9dcc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca05e0(undefined4 param_2); template<class... A> int FUN_10ca05e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca0600(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10ca0600(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca0620(undefined4 param_2); template<class... A> int FUN_10ca0620(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca0630(undefined4 param_2); template<class... A> int FUN_10ca0630(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca0640(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_10ca0640(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca0690(undefined4 *param_2); template<class... A> int FUN_10ca0690(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca0870(undefined4 param_2); template<class... A> int FUN_10ca0870(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca0890(undefined4 param_2); template<class... A> int FUN_10ca0890(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca08c0(undefined4 param_2); template<class... A> int FUN_10ca08c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca08e0(undefined4 param_2); template<class... A> int FUN_10ca08e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca0a20(undefined4 param_2); template<class... A> int FUN_10ca0a20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca0a40(undefined4 param_2); template<class... A> int FUN_10ca0a40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca0a60(undefined4 param_2); template<class... A> int FUN_10ca0a60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca0ac0(undefined4 param_2); template<class... A> int FUN_10ca0ac0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca0d10(undefined4 param_2); template<class... A> int FUN_10ca0d10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca0d30(undefined4 param_2); template<class... A> int FUN_10ca0d30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca0d50(undefined4 param_2); template<class... A> int FUN_10ca0d50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca0d70(undefined4 param_2); template<class... A> int FUN_10ca0d70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca0e20(undefined4 param_2); template<class... A> int FUN_10ca0e20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca0e40(undefined4 param_2); template<class... A> int FUN_10ca0e40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca0e60(undefined4 param_2); template<class... A> int FUN_10ca0e60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca0e80(undefined4 param_2); template<class... A> int FUN_10ca0e80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca0ea0(undefined4 param_2); template<class... A> int FUN_10ca0ea0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca0ec0(undefined4 param_2); template<class... A> int FUN_10ca0ec0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca0ee0(undefined4 param_2); template<class... A> int FUN_10ca0ee0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca0f00(undefined4 param_2); template<class... A> int FUN_10ca0f00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca1070(undefined4 param_2); template<class... A> int FUN_10ca1070(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca1090(undefined4 param_2); template<class... A> int FUN_10ca1090(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca14c0(undefined4 *param_2); template<class... A> int FUN_10ca14c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca1500(undefined4 *param_2); template<class... A> int FUN_10ca1500(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ca2320(undefined4 *param_2); template<class... A> int FUN_10ca2320(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10ca23e0(int param_2); template<class... A> int FUN_10ca23e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10ca3160(uint param_2); template<class... A> int FUN_10ca3160(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ca3330(undefined4 *param_2); template<class... A> int FUN_10ca3330(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ca3e80(undefined4 *param_2); template<class... A> int FUN_10ca3e80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ca7a70(undefined4 *param_2); template<class... A> int FUN_10ca7a70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cb7970(int param_2); template<class... A> int FUN_10cb7970(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10cb79d0(int *param_2); template<class... A> int FUN_10cb79d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10cb79f0(int *param_2); template<class... A> int FUN_10cb79f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10cb7a10(int *param_2); template<class... A> int FUN_10cb7a10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10cb7a30(int *param_2); template<class... A> int FUN_10cb7a30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10cb7a50(int *param_2); template<class... A> int FUN_10cb7a50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cb89a0(undefined4 *param_2,undefined1 *param_3); template<class... A> int FUN_10cb89a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10cb8a90(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_10cb8a90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cb8ac0(undefined4 *param_2,undefined1 *param_3); template<class... A> int FUN_10cb8ac0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10cb8ae0(undefined4 *param_2); template<class... A> int FUN_10cb8ae0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cb8f00(undefined4 *param_2); template<class... A> int FUN_10cb8f00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cb8f50(undefined4 param_2); template<class... A> int FUN_10cb8f50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cb8f70(undefined4 param_2); template<class... A> int FUN_10cb8f70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cb8f80(undefined4 param_2); template<class... A> int FUN_10cb8f80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cb9010(undefined4 param_2); template<class... A> int FUN_10cb9010(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cb9020(undefined4 param_2); template<class... A> int FUN_10cb9020(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10cb9540(int *param_2); template<class... A> int FUN_10cb9540(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10cb9560(int *param_2); template<class... A> int FUN_10cb9560(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cba0f0(undefined4 *param_2); template<class... A> int FUN_10cba0f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cba230(undefined4 *param_2); template<class... A> int FUN_10cba230(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10cba9d0(int *param_2); template<class... A> int FUN_10cba9d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cbc860(SCStr *param_2); template<class... A> int FUN_10cbc860(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cc0800(undefined4 *param_2); template<class... A> int FUN_10cc0800(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cc0a30(undefined4 *param_2); template<class... A> int FUN_10cc0a30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cc0d80(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_10cc0d80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cc1250(undefined4 param_2); template<class... A> int FUN_10cc1250(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10cc1900(int param_2); template<class... A> int FUN_10cc1900(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10cc1c20(uint param_2); template<class... A> int FUN_10cc1c20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10cc2260(SCStr *param_2); template<class... A> int FUN_10cc2260(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10cc2420(SCStr *param_2); template<class... A> int FUN_10cc2420(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10cc2810(SCStr *param_2); template<class... A> int FUN_10cc2810(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cc34a0(undefined4 *param_2); template<class... A> int FUN_10cc34a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cc39a0(SCStr *param_2); template<class... A> int FUN_10cc39a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cc39d0(undefined2 param_2); template<class... A> int FUN_10cc39d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cc39e0(undefined1 param_2); template<class... A> int FUN_10cc39e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cc3a00(SCStr *param_2); template<class... A> int FUN_10cc3a00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cc3a30(SCStr *param_2); template<class... A> int FUN_10cc3a30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cc3a60(undefined4 param_2); template<class... A> int FUN_10cc3a60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10cc54f0(int *param_2); template<class... A> int FUN_10cc54f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cc55f0(undefined4 *param_2); template<class... A> int FUN_10cc55f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cc5610(undefined4 *param_2); template<class... A> int FUN_10cc5610(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cc5af0(undefined4 *param_2); template<class... A> int FUN_10cc5af0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cc5b20(undefined4 *param_2); template<class... A> int FUN_10cc5b20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cc6d60(undefined4 param_2); template<class... A> int FUN_10cc6d60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cc6d70(undefined4 param_2); template<class... A> int FUN_10cc6d70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cc6d80(undefined4 param_2); template<class... A> int FUN_10cc6d80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cc6d90(undefined4 param_2); template<class... A> int FUN_10cc6d90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10ccc6f0(int *param_2); template<class... A> int FUN_10ccc6f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10ccc710(int *param_2); template<class... A> int FUN_10ccc710(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10ccc730(int *param_2); template<class... A> int FUN_10ccc730(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10ccc750(int *param_2); template<class... A> int FUN_10ccc750(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10ccda60(uint param_2); template<class... A> int FUN_10ccda60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10ccdaa0(uint param_2); template<class... A> int FUN_10ccdaa0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ccf000(undefined4 *param_2); template<class... A> int FUN_10ccf000(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ccf010(undefined4 *param_2); template<class... A> int FUN_10ccf010(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cd3250(undefined4 *param_2); template<class... A> int FUN_10cd3250(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cd3260(undefined4 *param_2); template<class... A> int FUN_10cd3260(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cd3270(undefined4 *param_2,void *param_3); template<class... A> int FUN_10cd3270(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cd32b0(undefined4 *param_2,void *param_3); template<class... A> int FUN_10cd32b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10cd3730(SCStr *param_2); template<class... A> int FUN_10cd3730(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10cd3750(int *param_2); template<class... A> int FUN_10cd3750(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10cd3780(int *param_2); template<class... A> int FUN_10cd3780(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10cd37e0(SCStr *param_2); template<class... A> int FUN_10cd37e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10cd3800(SCStr *param_2); template<class... A> int FUN_10cd3800(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10cd38d0(SCStr *param_2); template<class... A> int FUN_10cd38d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10cd38f0(SCStr *param_2); template<class... A> int FUN_10cd38f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10cd3910(SCStr *param_2); template<class... A> int FUN_10cd3910(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10cd3930(SCStr *param_2); template<class... A> int FUN_10cd3930(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10cd3950(SCStr *param_2); template<class... A> int FUN_10cd3950(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10cd3970(SCStr *param_2); template<class... A> int FUN_10cd3970(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10cd3990(SCStr *param_2); template<class... A> int FUN_10cd3990(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10cd39b0(SCStr *param_2); template<class... A> int FUN_10cd39b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10cd39d0(SCStr *param_2); template<class... A> int FUN_10cd39d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10cd39f0(SCStr *param_2); template<class... A> int FUN_10cd39f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10cd3a10(SCStr *param_2); template<class... A> int FUN_10cd3a10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10cd3a30(SCStr *param_2); template<class... A> int FUN_10cd3a30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10cd3a50(SCStr *param_2); template<class... A> int FUN_10cd3a50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10cd3a70(SCStr *param_2); template<class... A> int FUN_10cd3a70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10cd3b70(int *param_2); template<class... A> int FUN_10cd3b70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10cd3bb0(int *param_2); template<class... A> int FUN_10cd3bb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10cd3f70(int *param_2,int param_3); template<class... A> int FUN_10cd3f70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10cd3fc0(int *param_2,int param_3); template<class... A> int FUN_10cd3fc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cd8790(undefined4 *param_2); template<class... A> int FUN_10cd8790(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cd87c0(undefined4 *param_2); template<class... A> int FUN_10cd87c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10cd9330(int param_2); template<class... A> int FUN_10cd9330(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10cdabe0(int *param_2,undefined4 param_3); template<class... A> int FUN_10cdabe0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cdb330(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_10cdb330(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cdb3e0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_10cdb3e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cdb480(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_10cdb480(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cdcc10(int param_2); template<class... A> int FUN_10cdcc10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cdcc30(undefined4 param_2); template<class... A> int FUN_10cdcc30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_10cdd200(int param_2); template<class... A> int FUN_10cdd200(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_10cdef30(int param_2); template<class... A> int FUN_10cdef30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cdf690(undefined4 param_2); template<class... A> int FUN_10cdf690(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cdfd80(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10cdfd80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ce2cd0(undefined4 *param_2); template<class... A> int FUN_10ce2cd0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ce2d00(undefined4 *param_2); template<class... A> int FUN_10ce2d00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ce2d30(undefined4 *param_2); template<class... A> int FUN_10ce2d30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ce3320(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10ce3320(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10ce36f0(int param_2); template<class... A> int FUN_10ce36f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10ce38f0(uint param_2); template<class... A> int FUN_10ce38f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ce59f0(undefined4 *param_2,undefined1 *param_3); template<class... A> int FUN_10ce59f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ce5b80(undefined4 *param_2,undefined1 *param_3); template<class... A> int FUN_10ce5b80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10ce5c30(int *param_2); template<class... A> int FUN_10ce5c30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ce5cb0(undefined4 *param_2); template<class... A> int FUN_10ce5cb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10ce61f0(int *param_2,undefined4 param_3); template<class... A> int FUN_10ce61f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10ce62a0(int *param_2,undefined4 param_3); template<class... A> int FUN_10ce62a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ce67a0(undefined4 param_2); template<class... A> int FUN_10ce67a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ce68b0(undefined4 param_2); template<class... A> int FUN_10ce68b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ce68c0(undefined4 param_2); template<class... A> int FUN_10ce68c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ce68d0(undefined4 param_2); template<class... A> int FUN_10ce68d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ce6900(undefined4 *param_2); template<class... A> int FUN_10ce6900(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ce6910(undefined4 param_2); template<class... A> int FUN_10ce6910(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ce6eb0(undefined4 param_2); template<class... A> int FUN_10ce6eb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10ce77a0(int *param_2); template<class... A> int FUN_10ce77a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10ce77c0(int *param_2); template<class... A> int FUN_10ce77c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10ce77e0(int *param_2); template<class... A> int FUN_10ce77e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10ce7800(int *param_2); template<class... A> int FUN_10ce7800(A...); };

extern int FUN_10cc1270(...);
extern int FUN_10cca400(...);
extern int FUN_10cca410(...);
extern int FUN_10cca420(...);
extern int FUN_10cca430(...);
extern int FUN_10cca440(...);
extern int FUN_10cca450(...);
extern int FUN_10cca460(...);
extern int FUN_10cca470(...);
extern int FUN_10cca480(...);
extern int FUN_10cdbb00(...);
extern int FUN_10cdbb10(...);
extern int FUN_10cdbb20(...);
extern __declspec(dllimport) int _Xlength_error(...);
extern int _eh_vector_copy_constructor_iterator_(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int format(...);
extern int func_0x10098e46(...);
extern int int_addref(...);
extern int int_allocRep(...);
extern int int_release(...);
extern int int_start(...);
extern int length(...);
extern __declspec(dllimport) int memmove(...);
extern int op_ctor(...);
extern int op_inc(...);
extern int op_lt(...);
extern int operator_new(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101a2c70(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_1034d200(...);
extern int thunk_FUN_10c85310(...);
extern int thunk_FUN_10c853f0(...);
extern int thunk_FUN_10c87ec0(...);
extern int thunk_FUN_10c87f40(...);
extern int thunk_FUN_10c9e620(...);
extern int thunk_FUN_10c9f3a0(...);
extern int thunk_FUN_10c9fb30(...);
extern int thunk_FUN_10ca2370(...);
extern int thunk_FUN_10ca3370(...);
extern int thunk_FUN_10cc0820(...);
extern int thunk_FUN_10cc5630(...);
extern int thunk_FUN_10cc57e0(...);
extern int thunk_FUN_10ce00f0(...);
extern int thunk_FUN_10ce0370(...);
extern int thunk_FUN_10ce04e0(...);
extern int thunk_FUN_10ce5db0(...);
extern int thunk_FUN_10ce7220(...);
extern int thunk_FUN_10f42870(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_1109f280(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110bc160(...);
extern int thunk_FUN_110cb840(...);
extern int thunk_FUN_110cead0(...);
extern int thunk_FUN_110d3ac0(...);
extern int thunk_FUN_110ecc20(...);
extern int thunk_FUN_11138b60(...);
extern int thunk_FUN_1113f0e0(...);
extern int thunk_FUN_1113f590(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_1124a200(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f060(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_11261330(...);
extern int thunk_FUN_11261e50(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_11458ad0(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int updated(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_11882ff0;
extern int DAT_11884820;
extern int DAT_12126b84;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RHTTPBufferedDataIO;
extern int ghidra_vftable_RUpnpACGetDailyIndexRefreshTimeAIOOp;
extern int ghidra_vftable_RUpnpACSetDailyIndexRefreshTimeAIOOp;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_RUpnpCDRefreshShareIndexAIOOp;
extern int ghidra_vftable_RUpnpDPGetZoneInfoAIOOp;
extern int ghidra_vftable_RVSAmazonSkillAuthCodeRequest;
extern int ghidra_vftable_RVSAuthenticateRequest;
extern int ghidra_vftable_RVSDeleteAccountRequest;
extern int ghidra_vftable_RVSNotifyInitiateOnboardingRequest;
extern int ghidra_vftable_RVoiceServiceAmazonSkillAuthCodeAIOOp;
extern int ghidra_vftable_SCDisplayRoomSettingsActionDescriptor;
extern int ghidra_vftable_SCIActionDelegateCB;
extern int ghidra_vftable_SCIAreaManager;
extern int ghidra_vftable_SCIDisplayType;
extern int ghidra_vftable_SCIIndexManager;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpAlarmClockGetDailyIndexRefreshTime;
extern int ghidra_vftable_SCIOpAlarmClockSetDailyIndexRefreshTime;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIOpGetAboutSonosString;
extern int ghidra_vftable_SCIOpGetUsageDataShareOption;
extern int ghidra_vftable_SCIOpSystemPropertyGetRDM;
extern int ghidra_vftable_SCIOpSystemPropertyGetString;
extern int ghidra_vftable_SCIndexListenerCallback;
extern int ghidra_vftable_SCOUNoSecureState;
extern int ghidra_vftable_SCOUSecureIntroState;
extern int ghidra_vftable_SCOnlineUpdateAudioWarningState;
extern int ghidra_vftable_SCOnlineUpdateCanceledState;
extern int ghidra_vftable_SCOnlineUpdateChoiceState;
extern int ghidra_vftable_SCOnlineUpdateCompleteState;
extern int ghidra_vftable_SCOnlineUpdateControllerNeedsUpdatingState;
extern int ghidra_vftable_SCOnlineUpdateControllerSelfUpdateState;
extern int ghidra_vftable_SCOnlineUpdateDevicesUpgradedState;
extern int ghidra_vftable_SCOnlineUpdateErrorInfoState;
extern int ghidra_vftable_SCOnlineUpdateErrorState;
extern int ghidra_vftable_SCOnlineUpdateFinishSecureReg;
extern int ghidra_vftable_SCOnlineUpdateFinishSecureRegFailed;
extern int ghidra_vftable_SCOnlineUpdateFinishedState;
extern int ghidra_vftable_SCOnlineUpdateInitState;
extern int ghidra_vftable_SCOnlineUpdateIntroductionState;
extern int ghidra_vftable_SCOnlineUpdateNoInlineSelfUpdate;
extern int ghidra_vftable_SCOnlineUpdateNotRequiredState;
extern int ghidra_vftable_SCOnlineUpdatePendingState;
extern int ghidra_vftable_SCOnlineUpdatePostUpdateReindexingNeededState;
extern int ghidra_vftable_SCOnlineUpdateSecRegWarningState;
extern int ghidra_vftable_SCOnlineUpdateWizCompleteState;
extern int ghidra_vftable_SCOpAlarmClockGetDailyIndexRefreshTime;
extern int ghidra_vftable_SCOpAlarmClockSetDailyIndexRefreshTime;
extern int ghidra_vftable_SCOpGetAboutSonosString;
extern int ghidra_vftable_SCOpGetUsageDataShareOption;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCOpUpdateVoiceAccountData;
extern int ghidra_vftable_SCOpVoiceAcctWakeWordSet;
extern int ghidra_vftable_SCOpVoiceServiceAlexaROWLocale;
extern int ghidra_vftable_SCOpVoiceServiceAmazonChallenge;
extern int ghidra_vftable_SCOpVoiceServiceAmazonSkillAuthCode;
extern int ghidra_vftable_SCOpVoiceServiceAuthenticate;
extern int ghidra_vftable_SCOpVoiceServiceDeleteAccount;
extern int ghidra_vftable_SCOpVoiceServiceNotifyInitiateOnboarding;
extern int ghidra_vftable_SCWizardState;
extern int ghidra_vftable_SCWizardStateFor;
extern int ghidra_vftable_SwfObjAVTAdapter_HHEventSink;
extern int uStack_20;
extern int uStack_4;
extern int uStack_448;
extern int uStack_8;
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_116f2640[];
extern undefined1 LAB_116f3e8c[];
extern undefined1 LAB_116f4840[];
extern undefined1 LAB_116f4870[];
extern undefined1 LAB_116f48a0[];
extern undefined1 LAB_116f48d0[];
extern undefined1 LAB_116f4900[];
extern undefined1 LAB_116f4960[];
extern undefined1 LAB_116f4990[];
extern undefined1 LAB_116f49c0[];
extern undefined1 LAB_116f73d0[];
extern undefined1 LAB_116f7400[];
extern undefined1 LAB_116f818d[];
extern undefined1 LAB_116f8390[];
extern undefined1 LAB_117c174c[];
extern undefined1 LAB_117c17f0[];
extern int *stack0xfffffffc;
extern void *ExceptionList;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c8a110(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c8a110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c8a140(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c8a140(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c8a170(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c8a170(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c8a180(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c8a180(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c8a190(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c8a190(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c8a1a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c8a1a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c8a1b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c8a1b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10c8a1f0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10c8a1f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10c8a200(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10c8a200(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c8a4d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c8a4d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c8a4f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c8a4f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c8a790(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c8a790(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c8a7b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c8a7b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c8a7d0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c8a7d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c8a830(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c8a830(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b310(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b310(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b320(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b320(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b330(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b340(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b340(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b350(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b350(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b360(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b360(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b370(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b370(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b380(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b380(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b390(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b390(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b3a0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b3a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b3b0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b3b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b3c0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b3c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c8b4d0(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8b4d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c8b4e0(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8b4e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c8b4f0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c8b4f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c8b520(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c8b520(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c8b530(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c8b530(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c8b540(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c8b540(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c8b550(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c8b550(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8b640(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8b640(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8b650(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8b650(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c8b660(unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8b660(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c8b670(unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8b670(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b7e0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b7e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b7f0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b7f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c8b800(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c8b800(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c8b810(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c8b810(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8be00(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8be00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8be40(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8be40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c8beb0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c8beb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c8bf30(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c8bf30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c8bfb0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c8bfb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c8c020(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c8c020(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8c1b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8c1b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8c1c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8c1c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c8c8f0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c8c8f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c8c950(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c8c950(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8cf90(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8cf90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8cfe0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8cfe0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c8d030(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8d030(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c8d080(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8d080(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c8d0d0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8d0d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c8d120(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8d120(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8e010(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8e010(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91330(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91360(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91360(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10c91b90(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10c91b90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10c91ba0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10c91ba0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91bb0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91bb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91bc0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91bc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91bd0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91bd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91be0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91be0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91bf0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91bf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91c00(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91c00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91c10(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91c10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91c20(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91c20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c92d50(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c92d50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c92d60(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c92d60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c92e10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c92e10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c931f0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c931f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c93200(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c93200(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c980f0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c980f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c9a700(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c9a700(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c9af10(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c9af10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c9da20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c9da20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c9db80(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c9db80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c9e050(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c9e050(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c9e060(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c9e060(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c9e070(int param_1,int param_2,int param_3,undefined4 param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c9e070(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_10c9e840(int param_1,int param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_10c9e840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c9e8d0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c9e8d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c9f380(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c9f380(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c9f390(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c9f390(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c9f6a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c9f6a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c9f810(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c9f810(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c9fe40(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c9fe40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c9ffd0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c9ffd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c9ffe0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c9ffe0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ca00a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ca00a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ca00e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ca00e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ca01f0(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ca01f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ca0210(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ca0210(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ca0220(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ca0220(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ca0230(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ca0230(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ca0240(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ca0240(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ca0250(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ca0250(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ca0330(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ca0330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ca0340(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ca0340(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ca0350(int param_1,int param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ca0350(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ca0460(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ca0460(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ca0660(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ca0660(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca0680(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca0680(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ca06d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ca06d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca19e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca19e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca19f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca19f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca1a00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca1a00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca1a10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca1a10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca1ac0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca1ac0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca1ad0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca1ad0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca1bb0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca1bb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca1de0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca1de0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca1df0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca1df0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca1e00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca1e00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2020(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2020(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2030(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2030(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2040(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2040(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2050(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2050(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2060(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2060(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2070(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2070(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2080(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2080(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2090(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2090(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2190(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2190(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca21a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca21a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca2400(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca2400(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca2410(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca2410(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca3280(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca3280(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca3290(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca3290(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca32a0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca32a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca32b0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca32b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ca3310(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ca3310(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca3320(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca3320(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca3620(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca3620(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ca3c10(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ca3c10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ca43a0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ca43a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca7760(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca7760(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca7780(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca7780(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_10ca8650(SCStr *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_10ca8650(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10ca9a90(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10ca9a90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb0f80(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb0f80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cb1a80(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cb1a80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cb1aa0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cb1aa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cb1c60(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cb1c60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb22a0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb22a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb22b0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb22b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb22d0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb22d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cb3940(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cb3940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb4fd0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb4fd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10cb6c80(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb6c80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cb7400(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cb7400(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb7670(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb7670(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb76c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb76c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb7940(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb7940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb7950(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb7950(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cb7960(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cb7960(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb79a0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb79a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb79b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb79b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cb7b70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cb7b70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb7dc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb7dc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb7dd0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb7dd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb7de0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb7de0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb7df0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb7df0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb88a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb88a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb88b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb88b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb88c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb88c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb88d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb88d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cb88e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cb88e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cb8910(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cb8910(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cb8940(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cb8940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cb8970(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cb8970(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cb8b20(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cb8b20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb8bf0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb8bf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb8c00(int param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb8c00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb8d70(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb8d70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cb8d80(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cb8d80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb8e80(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb8e80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb8ea0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb8ea0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb8eb0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb8eb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cb8ec0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cb8ec0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cb8ed0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cb8ed0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cb8f30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cb8f30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cb9310(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cb9310(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cb94c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cb94c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb9690(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb9690(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb96a0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb96a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb96b0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb96b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cb9860(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cb9860(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb9cb0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb9cb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb9cc0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb9cc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb9cd0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb9cd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb9ce0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb9ce0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb9cf0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb9cf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10cba000(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10cba000(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10cba060(unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cba060(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cba070(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cba070(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10cba1d0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cba1d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cba2b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cba2b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cbb120(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cbb120(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cbc1a0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cbc1a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cbc200(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cbc200(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cbc580(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cbc580(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cbc590(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cbc590(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cbc5a0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cbc5a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cbcad0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cbcad0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cbe3f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cbe3f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cbe7c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cbe7c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc07a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc07a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10cc07c0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10cc07c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc07f0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc07f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc09d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc09d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc09e0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc09e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10cc09f0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10cc09f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc0a20(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc0a20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc0a60(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc0a60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cc0a70(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cc0a70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc0a80(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc0a80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc0b40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc0b40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc0d10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc0d10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc0d30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc0d30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc0d50(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc0d50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc0d60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc0d60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc0fe0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc0fe0(...);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_10cc1270(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cc1540(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cc1540(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cc17a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cc17a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cc17b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cc17b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc1910(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc1910(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cc1920(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cc1920(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc1930(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc1930(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc1940(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc1940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc1950(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc1950(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10cc1cd0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc1cd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc1ce0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc1ce0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc1cf0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc1cf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc1d00(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc1d00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc1d10(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc1d10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10cc1d20(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc1d20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10cc1da0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10cc1da0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10cc1dd0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc1dd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10cc1e00(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc1e00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10cc1f90(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10cc1f90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc2010(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc2010(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cc2020(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cc2020(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10cc2030(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc2030(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc2090(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc2090(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc20a0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc20a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc2250(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc2250(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc2460(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc2460(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc2470(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc2470(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc2480(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc2480(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc2490(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc2490(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc24a0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc24a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc24b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc24b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_10cc2880(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_10cc2880(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc2890(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc2890(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cc28a0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cc28a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc28b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc28b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc2a60(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc2a60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc2a90(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc2a90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc2aa0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc2aa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cc3290(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cc3290(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc3350(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc3350(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc3360(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc3360(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cc35f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cc35f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cc3620(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cc3620(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc3a70(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc3a70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc54b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc54b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc54d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc54d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10cc5570(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10cc5570(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10cc55a0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10cc55a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc55d0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc55d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc55e0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc55e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5990(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5990(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc59a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc59a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10cc59b0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10cc59b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10cc59e0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10cc59e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5a10(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5a10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5a20(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5a20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10cc5a30(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10cc5a30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10cc5a60(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10cc5a60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5a90(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5a90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5aa0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5aa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc5ab0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc5ab0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc5ac0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc5ac0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc5ad0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc5ad0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc5ae0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc5ae0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5b50(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5b50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5b60(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5b60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5b70(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5b70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5b80(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5b80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc5b90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc5b90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc5bc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc5bc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc6da0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc6da0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc6dc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc6dc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc6de0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc6de0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc6df0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc6df0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc6e00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc6e00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc6e20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc6e20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc7220(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc7220(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc7320(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc7320(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc75e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc75e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cc7d80(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cc7d80(...);
/* WARNING: Removing unreachable block_10cca400 (ram,0x101ba14a) */ void __fastcall FUN_10cca400(undefined4 *param_1);
/* WARNING: Removing unreachable block_10cca410 (ram,0x101ba14a) */ void __fastcall FUN_10cca410(undefined4 *param_1);
/* WARNING: Removing unreachable block_10cca420 (ram,0x101ba14a) */ void __fastcall FUN_10cca420(undefined4 *param_1);
/* WARNING: Removing unreachable block_10cca430 (ram,0x101ba14a) */ void __fastcall FUN_10cca430(undefined4 *param_1);
/* WARNING: Removing unreachable block_10cca440 (ram,0x101ba14a) */ void __fastcall FUN_10cca440(undefined4 *param_1);
/* WARNING: Removing unreachable block_10cca450 (ram,0x101ba14a) */ void __fastcall FUN_10cca450(undefined4 *param_1);
/* WARNING: Removing unreachable block_10cca460 (ram,0x101ba14a) */ void __fastcall FUN_10cca460(undefined4 *param_1);
/* WARNING: Removing unreachable block_10cca470 (ram,0x101ba14a) */ void __fastcall FUN_10cca470(undefined4 *param_1);
/* WARNING: Removing unreachable block_10cca480 (ram,0x101ba14a) */ void __fastcall FUN_10cca480(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccc3f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccc3f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccc490(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccc490(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccc4b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccc4b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccc4d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccc4d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccc4f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccc4f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccc510(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccc510(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccc630(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccc630(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccc6d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccc6d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc770(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc770(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc780(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc780(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc790(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc790(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc7a0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc7a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc7b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc7b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc7c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc7c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc7d0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc7d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc7e0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc7e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc7f0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc7f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc800(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc800(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc810(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc810(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc820(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc830(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc830(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10ccc840(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10ccc840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10ccc850(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10ccc850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10ccc860(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10ccc860(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10ccc870(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10ccc870(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ccdbc0(unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ccdbc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ccdbd0(unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ccdbd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ccdbe0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ccdbe0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ccdbf0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ccdbf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccdc00(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccdc00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccdc10(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccdc10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccdc20(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccdc20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccdc30(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccdc30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccdc40(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccdc40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccdc50(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccdc50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccdc60(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccdc60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccdc70(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccdc70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ccdc80(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ccdc80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ccdc90(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ccdc90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10ccdd80(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ccdd80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10ccddb0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ccddb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ccdde0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ccdde0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ccde10(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ccde10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ccde40(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ccde40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ccde70(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ccde70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ccef20(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ccef20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ccef90(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ccef90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ccf400(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ccf400(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ccf410(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ccf410(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccf420(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccf420(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccf430(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccf430(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10cd3190(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cd3190(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10cd31e0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cd31e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cd3230(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cd3230(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cd3240(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cd3240(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cd3710(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cd3710(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10cd3840(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10cd3840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cd3ab0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cd3ab0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cd3ac0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cd3ac0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cd3ba0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cd3ba0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cd3be0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cd3be0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cd3bf0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cd3bf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cd3c00(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cd3c00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cd3c10(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cd3c10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cd3c20(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cd3c20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cd3c30(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cd3c30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cd3c80(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cd3c80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cd3cb0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cd3cb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10cd3eb0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10cd3eb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10cd3ed0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10cd3ed0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10cd3ef0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10cd3ef0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10cd3f10(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10cd3f10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10cd3f30(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10cd3f30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10cd3f50(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10cd3f50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cd4330(SCStr *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cd4330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cd4380(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cd4380(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cd7b30(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cd7b30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cd7b40(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cd7b40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cd7b50(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cd7b50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cd7b60(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cd7b60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cd9680(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cd9680(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cd96b0(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cd96b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cd9840(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cd9840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cd9920(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cd9920(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cdac90(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cdac90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cdaca0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cdaca0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cdacb0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cdacb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cdacc0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cdacc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdadf0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdadf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdae20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdae20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdae50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdae50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdae80(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdae80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdb170(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdb170(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cdb290(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cdb290(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cdb2a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cdb2a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdb610(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdb610(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdb620(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdb620(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdb630(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdb630(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdb640(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdb640(...);
/* WARNING: Removing unreachable block_10cdbb00 (ram,0x101ba14a) */ void __fastcall FUN_10cdbb00(undefined4 *param_1);
/* WARNING: Removing unreachable block_10cdbb10 (ram,0x101ba14a) */ void __fastcall FUN_10cdbb10(undefined4 *param_1);
/* WARNING: Removing unreachable block_10cdbb20 (ram,0x101ba14a) */ void __fastcall FUN_10cdbb20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdc0d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdc0d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdc100(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdc100(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdc130(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdc130(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdc220(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdc220(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdc230(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdc230(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdc240(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdc240(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdc3a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdc3a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdc3c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdc3c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cdc410(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cdc410(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cdc420(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cdc420(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cdc430(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cdc430(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cdcbe0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cdcbe0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cdcbf0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cdcbf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cdcc00(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cdcc00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cdda80(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cdda80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cddaa0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cddaa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cddbd0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cddbd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cddd50(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cddd50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cddd60(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cddd60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cddd70(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cddd70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdeea0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdeea0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdeed0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdeed0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdef00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdef00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10cdf020(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cdf020(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdf670(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdf670(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdfa00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdfa00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cdfcb0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cdfcb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cdfd70(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cdfd70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce0050(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce0050(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce0080(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce0080(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ce00b0(int param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce00b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce0330(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce0330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce0a00(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce0a00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce0a10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce0a10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce0aa0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce0aa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ce0b20(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ce0b20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ce0b30(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ce0b30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce0bd0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce0bd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce0c00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce0c00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce0e10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce0e10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce0e20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce0e20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce1320(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce1320(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce1330(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce1330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce1440(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce1440(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ce1a70(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ce1a70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ce1a80(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ce1a80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce2120(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce2120(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce2150(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce2150(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ce2210(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ce2210(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce22b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce22b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce2320(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce2320(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce24e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce24e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce25f0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce25f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10ce2920(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10ce2920(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ce2970(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ce2970(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce2bc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce2bc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce2c10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce2c10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce3020(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce3020(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce3030(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce3030(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce3180(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce3180(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce31b0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce31b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce31e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce31e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce32d0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce32d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce32e0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce32e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce32f0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce32f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce3300(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce3300(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce3310(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce3310(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce3340(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce3340(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce3360(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce3360(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce3370(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce3370(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce3390(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce3390(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce3590(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce3590(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce39e0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce39e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce39f0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce39f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce3a00(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce3a00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce3a10(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce3a10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ce3a20(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce3a20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce3a30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce3a30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ce3d20(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ce3d20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce4520(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce4520(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce4530(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce4530(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ce59e0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ce59e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce5ab0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce5ab0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce5ad0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce5ad0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce5af0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce5af0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce5ba0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce5ba0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce5bb0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce5bb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce5c50(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce5c50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce5c60(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce5c60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce5c70(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce5c70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce5c80(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce5c80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce5c90(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce5c90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce5ca0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce5ca0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce5e70(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce5e70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce5f10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce5f10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce5f20(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce5f20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6190(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6190(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce61a0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce61a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce61b0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce61b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce61c0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce61c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce61d0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce61d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce61e0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce61e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6430(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6430(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6520(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6520(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6530(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6530(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6540(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6540(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6550(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6550(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6560(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6560(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6570(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6570(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6580(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6580(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ce6590(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ce6590(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce65a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce65a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce65d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce65d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce6600(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce6600(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce6660(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce6660(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ce67c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ce67c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ce67d0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ce67d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce68e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce68e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce6930(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce6930(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce6950(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce6950(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ce6960(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ce6960(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ce69f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ce69f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce6ea0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce6ea0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce73b0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce73b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce74b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce74b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce76d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce76d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ce7850(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ce7850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ce7860(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ce7860(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce7870(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce7870(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce7880(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce7880(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce7890(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce7890(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ce78a0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ce78a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ce78b0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ce78b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce78c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce78c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce78d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce78d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10ce78e0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10ce78e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce7bd0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce7bd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce7d30(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce7d30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ce7d50(float *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ce7d50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ce7e60(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ce7e60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ce7e70(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ce7e70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce80a0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce80a0(...);
// Reference entry 10c8a110; body size 9 bytes.
#line 1 "ENTRY_10c8a110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c8a110(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c8a120; body size 15 bytes.
#line 1 "ENTRY_10c8a120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10c8a120(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *param_2 = (undefined4)(puVar1);
  *param_1 = (undefined4)(*puVar1);
  return;
}


// Reference entry 10c8a140; body size 9 bytes.
#line 1 "ENTRY_10c8a140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c8a140(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c8a150; body size 15 bytes.
#line 1 "ENTRY_10c8a150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10c8a150(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *param_2 = (undefined4)(puVar1);
  *param_1 = (undefined4)(*puVar1);
  return;
}


// Reference entry 10c8a170; body size 9 bytes.
#line 1 "ENTRY_10c8a170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c8a170(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c8a180; body size 9 bytes.
#line 1 "ENTRY_10c8a180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c8a180(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c8a190; body size 9 bytes.
#line 1 "ENTRY_10c8a190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c8a190(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c8a1a0; body size 9 bytes.
#line 1 "ENTRY_10c8a1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c8a1a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c8a1b0; body size 9 bytes.
#line 1 "ENTRY_10c8a1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c8a1b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c8a1d0; body size 20 bytes.
#line 1 "ENTRY_10c8a1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10c8a1d0(undefined4 *param_2)
{
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *param_1 = (_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *)this;
  *param_2 = (undefined4)(*(undefined4 *)param_1);
  ((std::_Tree_unchecked_const_iterator<> *)(param_1))->op_inc();
  return (undefined4 *)(param_2);
}


// Reference entry 10c8a1f0; body size 10 bytes.
#line 1 "ENTRY_10c8a1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10c8a1f0(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10c8a200; body size 10 bytes.
#line 1 "ENTRY_10c8a200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10c8a200(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10c8a4d0; body size 22 bytes.
#line 1 "ENTRY_10c8a4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c8a4d0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x28));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10c8a4f0; body size 22 bytes.
#line 1 "ENTRY_10c8a4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c8a4f0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x28));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10c8a790; body size 20 bytes.
#line 1 "ENTRY_10c8a790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c8a790(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0x6666666) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10c8a7b0; body size 20 bytes.
#line 1 "ENTRY_10c8a7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c8a7b0(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0x6666666) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10c8a7d0; body size 67 bytes.
#line 1 "ENTRY_10c8a7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c8a7d0(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10) + 1);
  fVar2 = (float)((float)((double)iVar1 + (double)(&DAT_11880fb0)[-(iVar1 >> 0x1f)]) /
          (float)((double)*(int *)(param_1 + 0x24) +
                 (double)(&DAT_11880fb0)[-(*(int *)(param_1 + 0x24) >> 0x1f)]));
  return (bool)(*(float *)(param_1 + 8) <= (float)(fVar2) &&(float)( fVar2) != *(float *)(param_1 + 8));
}


// Reference entry 10c8a830; body size 67 bytes.
#line 1 "ENTRY_10c8a830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c8a830(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10) + 1);
  fVar2 = (float)((float)((double)iVar1 + (double)(&DAT_11880fb0)[-(iVar1 >> 0x1f)]) /
          (float)((double)*(int *)(param_1 + 0x24) +
                 (double)(&DAT_11880fb0)[-(*(int *)(param_1 + 0x24) >> 0x1f)]));
  return (bool)(*(float *)(param_1 + 8) <= (float)(fVar2) &&(float)( fVar2) != *(float *)(param_1 + 8));
}


// Reference entry 10c8a9f0; body size 54 bytes.
#line 1 "ENTRY_10c8a9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10c8a9f0(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int *)(*(int *)(param_1 + 0x14) + param_3 * 8));
  if ((int *)piVar1[1] != (int *)((param_2))) {
    if ((int *)*piVar1 == (int *)((param_2))) {
      *piVar1 = (int)(*param_2);
    }
    return;
  }
  if ((int *)*piVar1 == (int *)((param_2))) {
    iVar2 = (int)(*(int *)(param_1 + 0xc));
    *piVar1 = (int)(iVar2);
    piVar1[1] = (int)(iVar2);
    return;
  }
  piVar1[1] = (int)(param_2[1]);
  return;
}


// Reference entry 10c8aa40; body size 54 bytes.
#line 1 "ENTRY_10c8aa40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10c8aa40(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int *)(*(int *)(param_1 + 0x14) + param_3 * 8));
  if ((int *)piVar1[1] != (int *)((param_2))) {
    if ((int *)*piVar1 == (int *)((param_2))) {
      *piVar1 = (int)(*param_2);
    }
    return;
  }
  if ((int *)*piVar1 == (int *)((param_2))) {
    iVar2 = (int)(*(int *)(param_1 + 0xc));
    *piVar1 = (int)(iVar2);
    piVar1[1] = (int)(iVar2);
    return;
  }
  piVar1[1] = (int)(param_2[1]);
  return;
}


// Reference entry 10c8b310; body size 3 bytes.
#line 1 "ENTRY_10c8b310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c8b320; body size 3 bytes.
#line 1 "ENTRY_10c8b320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b320(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c8b330; body size 3 bytes.
#line 1 "ENTRY_10c8b330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c8b340; body size 3 bytes.
#line 1 "ENTRY_10c8b340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c8b350; body size 3 bytes.
#line 1 "ENTRY_10c8b350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b350(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c8b360; body size 3 bytes.
#line 1 "ENTRY_10c8b360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c8b370; body size 3 bytes.
#line 1 "ENTRY_10c8b370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c8b380; body size 3 bytes.
#line 1 "ENTRY_10c8b380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c8b390; body size 3 bytes.
#line 1 "ENTRY_10c8b390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c8b3a0; body size 3 bytes.
#line 1 "ENTRY_10c8b3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b3a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c8b3b0; body size 3 bytes.
#line 1 "ENTRY_10c8b3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b3b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c8b3c0; body size 3 bytes.
#line 1 "ENTRY_10c8b3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b3c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c8b3d0; body size 92 bytes.
#line 1 "ENTRY_10c8b3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10c8b3d0(uint param_2,int param_3,int *param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(undefined4 **)(param_3 + 4));
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
  if (*piVar1 == param_3) {
    *piVar1 = (int)((int)param_4);
    return (int *)(param_4);
  }
  if ((undefined4 *)piVar1[1] == (undefined4 *)((puVar2))) {
    piVar1[1] = (int)((int)param_4);
  }
  return (int *)(param_4);
}


// Reference entry 10c8b450; body size 92 bytes.
#line 1 "ENTRY_10c8b450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10c8b450(uint param_2,int param_3,int *param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(undefined4 **)(param_3 + 4));
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
  if (*piVar1 == param_3) {
    *piVar1 = (int)((int)param_4);
    return (int *)(param_4);
  }
  if ((undefined4 *)piVar1[1] == (undefined4 *)((puVar2))) {
    piVar1[1] = (int)((int)param_4);
  }
  return (int *)(param_4);
}


// Reference entry 10c8b4d0; body size 13 bytes.
#line 1 "ENTRY_10c8b4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c8b4d0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10c8b4e0; body size 13 bytes.
#line 1 "ENTRY_10c8b4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c8b4e0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10c8b4f0; body size 30 bytes.
#line 1 "ENTRY_10c8b4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c8b4f0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = (char)(*(char *)(*(int *)(param_1 + 8) + 0xd));
  iVar2 = (int)(*(int *)(param_1 + 8));
  while (iVar3 = iVar2, cVar1 == '\0') {
    iVar2 = (int)(*(int *)(iVar3 + 8));
    cVar1 = (char)(*(char *)(iVar2 + 0xd));
    param_1 = (int)(iVar3);
  }
  return (int)(param_1);
}


// Reference entry 10c8b520; body size 4 bytes.
#line 1 "ENTRY_10c8b520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c8b520(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10c8b530; body size 4 bytes.
#line 1 "ENTRY_10c8b530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c8b530(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10c8b540; body size 4 bytes.
#line 1 "ENTRY_10c8b540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c8b540(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10c8b550; body size 4 bytes.
#line 1 "ENTRY_10c8b550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c8b550(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10c8b640; body size 3 bytes.
#line 1 "ENTRY_10c8b640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c8b640(void)

{
  return;
}


// Reference entry 10c8b650; body size 3 bytes.
#line 1 "ENTRY_10c8b650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c8b650(void)

{
  return;
}


// Reference entry 10c8b660; body size 3 bytes.
#line 1 "ENTRY_10c8b660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c8b660(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10c8b670; body size 3 bytes.
#line 1 "ENTRY_10c8b670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c8b670(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10c8b7e0; body size 11 bytes.
#line 1 "ENTRY_10c8b7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b7e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10c8b7f0; body size 11 bytes.
#line 1 "ENTRY_10c8b7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b7f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10c8b800; body size 6 bytes.
#line 1 "ENTRY_10c8b800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c8b800(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10c8b810; body size 6 bytes.
#line 1 "ENTRY_10c8b810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c8b810(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10c8b940; body size 14 bytes.
#line 1 "ENTRY_10c8b940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10c8b940(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0xc));
  return;
}


// Reference entry 10c8b960; body size 14 bytes.
#line 1 "ENTRY_10c8b960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10c8b960(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0xc));
  return;
}


// Reference entry 10c8b980; body size 13 bytes.
#line 1 "ENTRY_10c8b980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10c8b980(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10c8b990; body size 13 bytes.
#line 1 "ENTRY_10c8b990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10c8b990(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10c8b9a0; body size 12 bytes.
#line 1 "ENTRY_10c8b9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10c8b9a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 10c8b9b0; body size 12 bytes.
#line 1 "ENTRY_10c8b9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10c8b9b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 10c8b9c0; body size 11 bytes.
#line 1 "ENTRY_10c8b9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10c8b9c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10c8b9d0; body size 11 bytes.
#line 1 "ENTRY_10c8b9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10c8b9d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10c8be00; body size 43 bytes.
#line 1 "ENTRY_10c8be00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c8be00(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)(*(int **)(param_2 + 4));
  *piVar1 = (int)(param_3);
  piVar2 = (int *)(*(int **)(param_3 + 4));
  *piVar2 = (int)(param_1);
  piVar3 = (int *)(*(int **)(param_1 + 4));
  *piVar3 = (int)(param_2);
  *(int**)(param_1 + 4) = (int *)(piVar2);
  *(int**)(param_3 + 4) = (int *)(piVar1);
  *(int**)(param_2 + 4) = (int *)(piVar3);
  return;
}


// Reference entry 10c8be40; body size 43 bytes.
#line 1 "ENTRY_10c8be40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c8be40(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)(*(int **)(param_2 + 4));
  *piVar1 = (int)(param_3);
  piVar2 = (int *)(*(int **)(param_3 + 4));
  *piVar2 = (int)(param_1);
  piVar3 = (int *)(*(int **)(param_1 + 4));
  *piVar3 = (int)(param_2);
  *(int**)(param_1 + 4) = (int *)(piVar2);
  *(int**)(param_3 + 4) = (int *)(piVar1);
  *(int**)(param_2 + 4) = (int *)(piVar3);
  return;
}


// Reference entry 10c8beb0; body size 90 bytes.
#line 1 "ENTRY_10c8beb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c8beb0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x6666667) {
    param_1 = (uint)(param_1 * 0x28);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10c8bf30; body size 90 bytes.
#line 1 "ENTRY_10c8bf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c8bf30(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x6666667) {
    param_1 = (uint)(param_1 * 0x28);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10c8bfb0; body size 87 bytes.
#line 1 "ENTRY_10c8bfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c8bfb0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x40000000) {
    param_1 = (uint)(param_1 * 4);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10c8c020; body size 87 bytes.
#line 1 "ENTRY_10c8c020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c8c020(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x40000000) {
    param_1 = (uint)(param_1 * 4);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10c8c090; body size 14 bytes.
#line 1 "ENTRY_10c8c090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10c8c090(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0xc));
  return;
}


// Reference entry 10c8c0b0; body size 14 bytes.
#line 1 "ENTRY_10c8c0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10c8c0b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0xc));
  return;
}


// Reference entry 10c8c0d0; body size 13 bytes.
#line 1 "ENTRY_10c8c0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10c8c0d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10c8c0e0; body size 13 bytes.
#line 1 "ENTRY_10c8c0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10c8c0e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10c8c0f0; body size 68 bytes.
#line 1 "ENTRY_10c8c0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10c8c0f0(byte *param_2)
{
  int param_1 = (int )this;
  return (uint)(*(uint *)(param_1 + 0x20) &
         ((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2])
          * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 10c8c150; body size 68 bytes.
#line 1 "ENTRY_10c8c150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10c8c150(byte *param_2)
{
  int param_1 = (int )this;
  return (uint)(*(uint *)(param_1 + 0x20) &
         ((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2])
          * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 10c8c1b0; body size 4 bytes.
#line 1 "ENTRY_10c8c1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8c1b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10c8c1c0; body size 4 bytes.
#line 1 "ENTRY_10c8c1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8c1c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10c8c8f0; body size 68 bytes.
#line 1 "ENTRY_10c8c8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c8c8f0(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar1 = (int *)((int *)(param_1 + 0xc));
    iStack_4 = (int)(param_1);
    thunk_FUN_10c85310(piVar1,*(undefined4 *)(param_1 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_10c87ec0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),&iStack_4);
  }
  return;
}


// Reference entry 10c8c950; body size 68 bytes.
#line 1 "ENTRY_10c8c950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c8c950(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar1 = (int *)((int *)(param_1 + 0xc));
    iStack_4 = (int)(param_1);
    thunk_FUN_10c853f0(piVar1,*(undefined4 *)(param_1 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_10c87f40(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),&iStack_4);
  }
  return;
}


// Reference entry 10c8cf90; body size 57 bytes.
#line 1 "ENTRY_10c8cf90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c8cf90(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x28);
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


// Reference entry 10c8cfe0; body size 57 bytes.
#line 1 "ENTRY_10c8cfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c8cfe0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x28);
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


// Reference entry 10c8d030; body size 60 bytes.
#line 1 "ENTRY_10c8d030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c8d030(int param_1,int param_2)

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


// Reference entry 10c8d080; body size 60 bytes.
#line 1 "ENTRY_10c8d080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c8d080(int param_1,int param_2)

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


// Reference entry 10c8d0d0; body size 61 bytes.
#line 1 "ENTRY_10c8d0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c8d0d0(int param_1,int param_2)

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


// Reference entry 10c8d120; body size 61 bytes.
#line 1 "ENTRY_10c8d120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c8d120(int param_1,int param_2)

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


// Reference entry 10c8d1c0; body size 12 bytes.
#line 1 "ENTRY_10c8d1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10c8d1c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 10c8d1d0; body size 12 bytes.
#line 1 "ENTRY_10c8d1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10c8d1d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 10c8d1e0; body size 11 bytes.
#line 1 "ENTRY_10c8d1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10c8d1e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10c8d1f0; body size 11 bytes.
#line 1 "ENTRY_10c8d1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10c8d1f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10c8d200; body size 11 bytes.
#line 1 "ENTRY_10c8d200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10c8d200(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10c8e010; body size 4 bytes.
#line 1 "ENTRY_10c8e010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8e010(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10c91330; body size 32 bytes.
#line 1 "ENTRY_10c91330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c91330(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    cVar1 = (char)(thunk_FUN_11458ad0());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10c91360; body size 38 bytes.
#line 1 "ENTRY_10c91360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c91360(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    cVar1 = (char)((**(code **)(*(int *)(*(int *)(param_1 + 0x1c) + 0x378) + 8))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10c91b90; body size 4 bytes.
#line 1 "ENTRY_10c91b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10c91b90(int param_1)

{
  return (float10)((float10)*(float *)(param_1 + 8));
}


// Reference entry 10c91ba0; body size 4 bytes.
#line 1 "ENTRY_10c91ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10c91ba0(int param_1)

{
  return (float10)((float10)*(float *)(param_1 + 8));
}


// Reference entry 10c91bb0; body size 6 bytes.
#line 1 "ENTRY_10c91bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c91bb0(void)

{
  return (undefined4)(0x6666666);
}


// Reference entry 10c91bc0; body size 6 bytes.
#line 1 "ENTRY_10c91bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c91bc0(void)

{
  return (undefined4)(0x6666666);
}


// Reference entry 10c91bd0; body size 6 bytes.
#line 1 "ENTRY_10c91bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c91bd0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10c91be0; body size 6 bytes.
#line 1 "ENTRY_10c91be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c91be0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10c91bf0; body size 6 bytes.
#line 1 "ENTRY_10c91bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c91bf0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10c91c00; body size 6 bytes.
#line 1 "ENTRY_10c91c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c91c00(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10c91c10; body size 6 bytes.
#line 1 "ENTRY_10c91c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c91c10(void)

{
  return (undefined4)(0x6666666);
}


// Reference entry 10c91c20; body size 6 bytes.
#line 1 "ENTRY_10c91c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c91c20(void)

{
  return (undefined4)(0x6666666);
}


// Reference entry 10c92d50; body size 5 bytes.
#line 1 "ENTRY_10c92d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c92d50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c92d60; body size 5 bytes.
#line 1 "ENTRY_10c92d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c92d60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c92e10; body size 28 bytes.
#line 1 "ENTRY_10c92e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c92e10(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10c931f0; body size 9 bytes.
#line 1 "ENTRY_10c931f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c931f0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10c93200; body size 9 bytes.
#line 1 "ENTRY_10c93200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c93200(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10c93600; body size 26 bytes.
#line 1 "ENTRY_10c93600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10c93600(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10c93620; body size 78 bytes.
#line 1 "ENTRY_10c93620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10c93620(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)param_1[1]);
  if ((int *)(piVar2) != (int *)0x0) {
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10c93690; body size 25 bytes.
#line 1 "ENTRY_10c93690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10c93690(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c936b0; body size 25 bytes.
#line 1 "ENTRY_10c936b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10c936b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c936d0; body size 31 bytes.
#line 1 "ENTRY_10c936d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10c936d0(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return (int *)(param_1);
}


// Reference entry 10c980f0; body size 4 bytes.
#line 1 "ENTRY_10c980f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c980f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x3c));
}


// Reference entry 10c9a700; body size 20 bytes.
#line 1 "ENTRY_10c9a700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c9a700(int param_1)

{
  if ((param_1 != 0) && (param_1 != 2)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 10c9af10; body size 53 bytes.
#line 1 "ENTRY_10c9af10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c9af10(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)((0x0))) {
    func_0x10098e46(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200());
    func_0x10098e46(uVar1);
    return;
  }
  func_0x10098e46(0);
  return;
}


// Reference entry 10c9da20; body size 25 bytes.
#line 1 "ENTRY_10c9da20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c9da20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c9da40; body size 22 bytes.
#line 1 "ENTRY_10c9da40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10c9da40(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c9da60; body size 33 bytes.
#line 1 "ENTRY_10c9da60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10c9da60(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(*param_6);
  uVar2 = (undefined4)(*param_5);
  *param_1 = (undefined4)(*param_4);
  param_1[2] = (undefined4)(uVar1);
  param_1[1] = (undefined4)(uVar2);
  return (undefined4 *)(param_1);
}


// Reference entry 10c9db10; body size 78 bytes.
#line 1 "ENTRY_10c9db10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10c9db10(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)param_1[1]);
  if ((int *)(piVar2) != (int *)0x0) {
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10c9db80; body size 3 bytes.
#line 1 "ENTRY_10c9db80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c9db80(void)

{
  return;
}


// Reference entry 10c9dc20; body size 57 bytes.
#line 1 "ENTRY_10c9dc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10c9dc20(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  *puVar1 = (undefined4)(*param_2);
  puVar1[1] = (undefined4)(param_2[1]);
  _eh_vector_copy_constructor_iterator_(puVar1 + 2,param_2 + 2,4,3,((int (*)())&SCStr::op_ctor),((int (*)())&SCStr::op_dtor));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x14);
  return;
}


// Reference entry 10c9dc70; body size 57 bytes.
#line 1 "ENTRY_10c9dc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10c9dc70(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  *puVar1 = (undefined4)(*param_2);
  puVar1[1] = (undefined4)(param_2[1]);
  _eh_vector_copy_constructor_iterator_(puVar1 + 2,param_2 + 2,4,3,((int (*)())&SCStr::op_ctor),((int (*)())&SCStr::op_dtor));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x14);
  return;
}


// Reference entry 10c9dcc0; body size 57 bytes.
#line 1 "ENTRY_10c9dcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10c9dcc0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  *puVar1 = (undefined4)(*param_2);
  puVar1[1] = (undefined4)(param_2[1]);
  _eh_vector_copy_constructor_iterator_(puVar1 + 2,param_2 + 2,4,3,((int (*)())&SCStr::op_ctor),((int (*)())&SCStr::op_dtor));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x14);
  return;
}


// Reference entry 10c9e050; body size 7 bytes.
#line 1 "ENTRY_10c9e050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c9e050(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c9e060; body size 7 bytes.
#line 1 "ENTRY_10c9e060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c9e060(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c9e070; body size 169 bytes.
#line 1 "ENTRY_10c9e070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c9e070(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)((param_3 - param_1) / 0x14);
  if (0x28 < iVar1) {
    iVar2 = (int)(iVar1 + 1 >> 3);
    iVar1 = (int)(iVar2 * 0x14 + param_1);
    thunk_FUN_10c9e620(param_1,iVar1,iVar2 * 0x28 + param_1,param_4);
    thunk_FUN_10c9e620(param_2 + iVar2 * -0x14,param_2,iVar2 * 0x14 + param_2,param_4);
    iVar3 = (int)(param_3 + iVar2 * -0x14);
    thunk_FUN_10c9e620(param_3 + iVar2 * -0x28,iVar3,param_3,param_4);
    thunk_FUN_10c9e620(iVar1,param_2,iVar3,param_4);
    return;
  }
  thunk_FUN_10c9e620(param_1,param_2,param_3,param_4);
  return;
}


// Reference entry 10c9e840; body size 111 bytes.
#line 1 "ENTRY_10c9e840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * FUN_10c9e840(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  SCStr *this_;
  
  while (param_1 != param_2) {
    iVar1 = (int)(param_2 + -0x14);
    puVar2 = (undefined4 *)(param_3 + -5);
    this_ = (SCStr *)((SCStr *)(param_3 + -3));
    iVar3 = (int)(3);
    *puVar2 = (undefined4)(*(undefined4 *)(param_2 + -0x14));
    param_3[-4] = (undefined4)(*(undefined4 *)(param_2 + -0x10));
    do {
      if (this_ + (iVar1 - (int)puVar2) != this_) {
        ((SCStr *)(this_))->int_release();
        *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)(this_ + (iVar1 - (int)puVar2))));
        ((SCStr *)(this_))->int_addref();
      }
      this_ = (SCStr *)(this_ + 4);
      iVar3 = (int)(iVar3 + -1);
      param_2 = (int)(iVar1);
      param_3 = (undefined4 *)(puVar2);
    } while (iVar3 != 0);
  }
  return (undefined4 *)(param_3);
}


// Reference entry 10c9e8d0; body size 8 bytes.
#line 1 "ENTRY_10c9e8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c9e8d0(int param_1)

{
  return (int)(param_1 + 0x14);
}


// Reference entry 10c9f380; body size 5 bytes.
#line 1 "ENTRY_10c9f380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c9f380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c9f390; body size 3 bytes.
#line 1 "ENTRY_10c9f390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c9f390(void)

{
  return;
}


// Reference entry 10c9f6a0; body size 60 bytes.
#line 1 "ENTRY_10c9f6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c9f6a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  thunk_FUN_10ca2370(param_1);
  thunk_FUN_10c9f3a0(param_1,0,(param_2 - param_1) / 0x14,param_4,param_5);
  return;
}


// Reference entry 10c9f810; body size 8 bytes.
#line 1 "ENTRY_10c9f810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c9f810(int param_1)

{
  return (int)(param_1 + -0x14);
}


// Reference entry 10c9fe40; body size 5 bytes.
#line 1 "ENTRY_10c9fe40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c9fe40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c9ffd0; body size 5 bytes.
#line 1 "ENTRY_10c9ffd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c9ffd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c9ffe0; body size 5 bytes.
#line 1 "ENTRY_10c9ffe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c9ffe0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca00a0; body size 46 bytes.
#line 1 "ENTRY_10ca00a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ca00a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  param_2[1] = (undefined4)(param_3[1]);
  _eh_vector_copy_constructor_iterator_(param_2 + 2,param_3 + 2,4,3,((int (*)())&SCStr::op_ctor),((int (*)())&SCStr::op_dtor));
  return;
}


// Reference entry 10ca00e0; body size 46 bytes.
#line 1 "ENTRY_10ca00e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ca00e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  param_2[1] = (undefined4)(param_3[1]);
  _eh_vector_copy_constructor_iterator_(param_2 + 2,param_3 + 2,4,3,((int (*)())&SCStr::op_ctor),((int (*)())&SCStr::op_dtor));
  return;
}


// Reference entry 10ca01f0; body size 15 bytes.
#line 1 "ENTRY_10ca01f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ca01f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10ca0210; body size 5 bytes.
#line 1 "ENTRY_10ca0210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ca0210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca0220; body size 5 bytes.
#line 1 "ENTRY_10ca0220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ca0220(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca0230; body size 5 bytes.
#line 1 "ENTRY_10ca0230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ca0230(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca0240; body size 5 bytes.
#line 1 "ENTRY_10ca0240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ca0240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca0250; body size 5 bytes.
#line 1 "ENTRY_10ca0250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ca0250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca0330; body size 5 bytes.
#line 1 "ENTRY_10ca0330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ca0330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca0340; body size 5 bytes.
#line 1 "ENTRY_10ca0340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ca0340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca0350; body size 46 bytes.
#line 1 "ENTRY_10ca0350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ca0350(int param_1,int param_2,undefined4 param_3)

{
  thunk_FUN_10c9fb30(param_1,param_2,(param_2 - param_1) / 0x14,param_3);
  return;
}


// Reference entry 10ca0460; body size 28 bytes.
#line 1 "ENTRY_10ca0460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ca0460(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca05e0; body size 26 bytes.
#line 1 "ENTRY_10ca05e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca05e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0600; body size 21 bytes.
#line 1 "ENTRY_10ca0600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca0600(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0620; body size 11 bytes.
#line 1 "ENTRY_10ca0620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca0620(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0630; body size 11 bytes.
#line 1 "ENTRY_10ca0630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca0630(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0640; body size 25 bytes.
#line 1 "ENTRY_10ca0640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca0640(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0660; body size 23 bytes.
#line 1 "ENTRY_10ca0660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ca0660(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0680; body size 3 bytes.
#line 1 "ENTRY_10ca0680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ca0680(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca0690; body size 49 bytes.
#line 1 "ENTRY_10ca0690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca0690(undefined4 *param_2)
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


// Reference entry 10ca06d0; body size 23 bytes.
#line 1 "ENTRY_10ca06d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ca06d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0870; body size 26 bytes.
#line 1 "ENTRY_10ca0870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca0870(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOUNoSecureState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0890; body size 30 bytes.
#line 1 "ENTRY_10ca0890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca0890(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOUSecureIntroState);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca08c0; body size 26 bytes.
#line 1 "ENTRY_10ca08c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca08c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateAudioWarningState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca08e0; body size 26 bytes.
#line 1 "ENTRY_10ca08e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca08e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateCanceledState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0a20; body size 26 bytes.
#line 1 "ENTRY_10ca0a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca0a20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateChoiceState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0a40; body size 26 bytes.
#line 1 "ENTRY_10ca0a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca0a40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateCompleteState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0a60; body size 74 bytes.
#line 1 "ENTRY_10ca0a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca0a60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateControllerNeedsUpdatingState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateControllerNeedsUpdatingState);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  *(undefined2*)(param_1 + 8) = (undefined2)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0ac0; body size 26 bytes.
#line 1 "ENTRY_10ca0ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca0ac0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateControllerSelfUpdateState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0d10; body size 26 bytes.
#line 1 "ENTRY_10ca0d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca0d10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateDevicesUpgradedState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0d30; body size 26 bytes.
#line 1 "ENTRY_10ca0d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca0d30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateErrorInfoState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0d50; body size 26 bytes.
#line 1 "ENTRY_10ca0d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca0d50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateErrorState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0d70; body size 130 bytes.
#line 1 "ENTRY_10ca0d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca0d70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateFinishSecureReg);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateFinishSecureReg);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)(0);
  param_1[0xd] = (undefined4)(0);
  param_1[0xe] = (undefined4)(0);
  param_1[0xf] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x10) = (undefined2)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0e20; body size 26 bytes.
#line 1 "ENTRY_10ca0e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca0e20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateFinishSecureRegFailed);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0e40; body size 26 bytes.
#line 1 "ENTRY_10ca0e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca0e40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateFinishedState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0e60; body size 26 bytes.
#line 1 "ENTRY_10ca0e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca0e60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateInitState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0e80; body size 26 bytes.
#line 1 "ENTRY_10ca0e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca0e80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateIntroductionState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0ea0; body size 26 bytes.
#line 1 "ENTRY_10ca0ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca0ea0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateNoInlineSelfUpdate);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0ec0; body size 26 bytes.
#line 1 "ENTRY_10ca0ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca0ec0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateNotRequiredState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0ee0; body size 26 bytes.
#line 1 "ENTRY_10ca0ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca0ee0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdatePendingState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0f00; body size 26 bytes.
#line 1 "ENTRY_10ca0f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca0f00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdatePostUpdateReindexingNeededState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca1070; body size 26 bytes.
#line 1 "ENTRY_10ca1070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca1070(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateSecRegWarningState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca1090; body size 26 bytes.
#line 1 "ENTRY_10ca1090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca1090(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateWizCompleteState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca14c0; body size 50 bytes.
#line 1 "ENTRY_10ca14c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca14c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  _eh_vector_copy_constructor_iterator_(param_1 + 2,param_2 + 2,4,3,((int (*)())&SCStr::op_ctor),((int (*)())&SCStr::op_dtor));
  return (undefined4 *)(param_1);
}


// Reference entry 10ca1500; body size 50 bytes.
#line 1 "ENTRY_10ca1500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca1500(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  _eh_vector_copy_constructor_iterator_(param_1 + 2,param_2 + 2,4,3,((int (*)())&SCStr::op_ctor),((int (*)())&SCStr::op_dtor));
  return (undefined4 *)(param_1);
}


// Reference entry 10ca19e0; body size 7 bytes.
#line 1 "ENTRY_10ca19e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca19e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca19f0; body size 7 bytes.
#line 1 "ENTRY_10ca19f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca19f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca1a00; body size 7 bytes.
#line 1 "ENTRY_10ca1a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca1a00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca1a10; body size 7 bytes.
#line 1 "ENTRY_10ca1a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca1a10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca1ac0; body size 7 bytes.
#line 1 "ENTRY_10ca1ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca1ac0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca1ad0; body size 7 bytes.
#line 1 "ENTRY_10ca1ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca1ad0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca1bb0; body size 7 bytes.
#line 1 "ENTRY_10ca1bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca1bb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca1de0; body size 7 bytes.
#line 1 "ENTRY_10ca1de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca1de0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca1df0; body size 7 bytes.
#line 1 "ENTRY_10ca1df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca1df0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca1e00; body size 7 bytes.
#line 1 "ENTRY_10ca1e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca1e00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca2020; body size 7 bytes.
#line 1 "ENTRY_10ca2020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca2020(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca2030; body size 7 bytes.
#line 1 "ENTRY_10ca2030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca2030(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca2040; body size 7 bytes.
#line 1 "ENTRY_10ca2040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca2040(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca2050; body size 7 bytes.
#line 1 "ENTRY_10ca2050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca2050(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca2060; body size 7 bytes.
#line 1 "ENTRY_10ca2060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca2060(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca2070; body size 7 bytes.
#line 1 "ENTRY_10ca2070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca2070(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca2080; body size 7 bytes.
#line 1 "ENTRY_10ca2080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca2080(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca2090; body size 7 bytes.
#line 1 "ENTRY_10ca2090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca2090(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca2190; body size 7 bytes.
#line 1 "ENTRY_10ca2190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca2190(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca21a0; body size 7 bytes.
#line 1 "ENTRY_10ca21a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca21a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca2320; body size 60 bytes.
#line 1 "ENTRY_10ca2320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ca2320(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_10ca3370();
    *param_1 = (undefined4)(*param_2);
    param_1[1] = (undefined4)(param_2[1]);
    param_1[2] = (undefined4)(param_2[2]);
    *param_2 = (undefined4)(0);
    param_2[1] = (undefined4)(0);
    param_2[2] = (undefined4)(0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ca23e0; body size 15 bytes.
#line 1 "ENTRY_10ca23e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10ca23e0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0x14);
}


// Reference entry 10ca2400; body size 4 bytes.
#line 1 "ENTRY_10ca2400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ca2400(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ca2410; body size 3 bytes.
#line 1 "ENTRY_10ca2410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ca2410(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ca3160; body size 63 bytes.
#line 1 "ENTRY_10ca3160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10ca3160(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0x14);
  if (0xccccccc - (uVar1 >> 1) < uVar1) {
    return (uint)(0xccccccc);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 10ca3280; body size 3 bytes.
#line 1 "ENTRY_10ca3280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ca3280(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca3290; body size 3 bytes.
#line 1 "ENTRY_10ca3290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ca3290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca32a0; body size 3 bytes.
#line 1 "ENTRY_10ca32a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ca32a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca32b0; body size 3 bytes.
#line 1 "ENTRY_10ca32b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ca32b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca3310; body size 3 bytes.
#line 1 "ENTRY_10ca3310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ca3310(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10ca3320; body size 6 bytes.
#line 1 "ENTRY_10ca3320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca3320(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10ca3330; body size 43 bytes.
#line 1 "ENTRY_10ca3330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ca3330(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  param_1[2] = (undefined4)(param_2[2]);
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10ca3620; body size 3 bytes.
#line 1 "ENTRY_10ca3620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ca3620(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ca3c10; body size 90 bytes.
#line 1 "ENTRY_10ca3c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10ca3c10(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xccccccd) {
    param_1 = (uint)(param_1 * 0x14);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10ca3e80; body size 11 bytes.
#line 1 "ENTRY_10ca3e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ca3e80(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ca43a0; body size 23 bytes.
#line 1 "ENTRY_10ca43a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ca43a0(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0x14);
}


// Reference entry 10ca7760; body size 16 bytes.
#line 1 "ENTRY_10ca7760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ca7760(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10ca7780; body size 9 bytes.
#line 1 "ENTRY_10ca7780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ca7780(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10ca7a70; body size 12 bytes.
#line 1 "ENTRY_10ca7a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ca7a70(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ca8650; body size 53 bytes.
#line 1 "ENTRY_10ca8650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * FUN_10ca8650(SCStr *param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  
  switch(param_2) {
  case 0:
    uVar2 = (undefined4)(0x2160);
    break;
  case 1:
    uVar2 = (undefined4)(0x2161);
    break;
  case 2:
    uVar2 = (undefined4)(0x2162);
    break;
  case 3:
    uVar2 = (undefined4)(0x2163);
    break;
  case 4:
    uVar2 = (undefined4)(0x2164);
    break;
  default:
    uVar2 = (undefined4)(0x2165);
  }
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(uVar2,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10ca9a90; body size 14 bytes.
#line 1 "ENTRY_10ca9a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10ca9a90(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x44) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x44));
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10cb0f80; body size 7 bytes.
#line 1 "ENTRY_10cb0f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cb0f80(int param_1)

{
  return (int)(param_1 + 0x478);
}


// Reference entry 10cb1a80; body size 11 bytes.
#line 1 "ENTRY_10cb1a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10cb1a80(int param_1)

{
  return (bool)(*(int *)(param_1 + 0xd0) == 1);
}


// Reference entry 10cb1aa0; body size 7 bytes.
#line 1 "ENTRY_10cb1aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10cb1aa0(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 10cb1c60; body size 11 bytes.
#line 1 "ENTRY_10cb1c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10cb1c60(int param_1)

{
  return (bool)(*(int *)(param_1 + 0xd8) != 0);
}


// Reference entry 10cb22a0; body size 6 bytes.
#line 1 "ENTRY_10cb22a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cb22a0(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10cb22b0; body size 6 bytes.
#line 1 "ENTRY_10cb22b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cb22b0(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10cb22d0; body size 7 bytes.
#line 1 "ENTRY_10cb22d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb22d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x474));
}


// Reference entry 10cb3940; body size 28 bytes.
#line 1 "ENTRY_10cb3940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cb3940(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10cb4fd0; body size 7 bytes.
#line 1 "ENTRY_10cb4fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cb4fd0(int param_1)

{
  return (int)(param_1 + 0xcc6);
}


// Reference entry 10cb6c80; body size 24 bytes.
#line 1 "ENTRY_10cb6c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10cb6c80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 10cb7400; body size 11 bytes.
#line 1 "ENTRY_10cb7400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cb7400(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x40))();
  return;
}


// Reference entry 10cb7670; body size 23 bytes.
#line 1 "ENTRY_10cb7670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cb7670(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0x14);
}


// Reference entry 10cb76c0; body size 7 bytes.
#line 1 "ENTRY_10cb76c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cb76c0(int param_1)

{
  return (int)(param_1 + 0xda4);
}


// Reference entry 10cb7940; body size 7 bytes.
#line 1 "ENTRY_10cb7940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cb7940(int param_1)

{
  return (int)(param_1 + 0x46c);
}


// Reference entry 10cb7950; body size 4 bytes.
#line 1 "ENTRY_10cb7950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cb7950(int param_1)

{
  return (int)(param_1 + 0x21);
}


// Reference entry 10cb7960; body size 7 bytes.
#line 1 "ENTRY_10cb7960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10cb7960(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x4cc));
}


// Reference entry 10cb7970; body size 31 bytes.
#line 1 "ENTRY_10cb7970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cb7970(int param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 200) != (int)(param_2)) {
    *(int*)(param_1 + 200) = (int)(param_2);
    *(undefined4*)(param_1 + 0xcc) = (undefined4)(0);
  }
  return;
}


// Reference entry 10cb79a0; body size 7 bytes.
#line 1 "ENTRY_10cb79a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cb79a0(int param_1)

{
  return (int)(param_1 + 0x464);
}


// Reference entry 10cb79b0; body size 7 bytes.
#line 1 "ENTRY_10cb79b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb79b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xd8));
}


// Reference entry 10cb79d0; body size 26 bytes.
#line 1 "ENTRY_10cb79d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10cb79d0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10cb79f0; body size 26 bytes.
#line 1 "ENTRY_10cb79f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10cb79f0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10cb7a10; body size 26 bytes.
#line 1 "ENTRY_10cb7a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10cb7a10(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10cb7a30; body size 26 bytes.
#line 1 "ENTRY_10cb7a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10cb7a30(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10cb7a50; body size 26 bytes.
#line 1 "ENTRY_10cb7a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10cb7a50(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10cb7b70; body size 16 bytes.
#line 1 "ENTRY_10cb7b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cb7b70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cb7dc0; body size 3 bytes.
#line 1 "ENTRY_10cb7dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb7dc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cb7dd0; body size 3 bytes.
#line 1 "ENTRY_10cb7dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb7dd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cb7de0; body size 3 bytes.
#line 1 "ENTRY_10cb7de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb7de0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cb7df0; body size 3 bytes.
#line 1 "ENTRY_10cb7df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb7df0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cb88a0; body size 3 bytes.
#line 1 "ENTRY_10cb88a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb88a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cb88b0; body size 3 bytes.
#line 1 "ENTRY_10cb88b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb88b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cb88c0; body size 3 bytes.
#line 1 "ENTRY_10cb88c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb88c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cb88d0; body size 3 bytes.
#line 1 "ENTRY_10cb88d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb88d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cb88e0; body size 28 bytes.
#line 1 "ENTRY_10cb88e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cb88e0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10cb8910; body size 28 bytes.
#line 1 "ENTRY_10cb8910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cb8910(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10cb8940; body size 28 bytes.
#line 1 "ENTRY_10cb8940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cb8940(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10cb8970; body size 28 bytes.
#line 1 "ENTRY_10cb8970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cb8970(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10cb89a0; body size 22 bytes.
#line 1 "ENTRY_10cb89a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cb89a0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10cb8a90; body size 38 bytes.
#line 1 "ENTRY_10cb8a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10cb8a90(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 10cb8ac0; body size 22 bytes.
#line 1 "ENTRY_10cb8ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cb8ac0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10cb8ae0; body size 40 bytes.
#line 1 "ENTRY_10cb8ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10cb8ae0(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 10cb8b20; body size 13 bytes.
#line 1 "ENTRY_10cb8b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cb8b20(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10cb8bf0; body size 5 bytes.
#line 1 "ENTRY_10cb8bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cb8bf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cb8c00; body size 37 bytes.
#line 1 "ENTRY_10cb8c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cb8c00(int param_1,SCStr *param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(param_1 + 0x10)));
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10cb8d70; body size 5 bytes.
#line 1 "ENTRY_10cb8d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cb8d70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cb8d80; body size 34 bytes.
#line 1 "ENTRY_10cb8d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cb8d80(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  return;
}


// Reference entry 10cb8e80; body size 15 bytes.
#line 1 "ENTRY_10cb8e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cb8e80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10cb8ea0; body size 5 bytes.
#line 1 "ENTRY_10cb8ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cb8ea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cb8eb0; body size 5 bytes.
#line 1 "ENTRY_10cb8eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cb8eb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cb8ec0; body size 6 bytes.
#line 1 "ENTRY_10cb8ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cb8ec0(void)

{
  return (char *)("SCIDisplayType");
}


// Reference entry 10cb8ed0; body size 27 bytes.
#line 1 "ENTRY_10cb8ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cb8ed0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10cb8f00; body size 32 bytes.
#line 1 "ENTRY_10cb8f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cb8f00(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cb8f30; body size 16 bytes.
#line 1 "ENTRY_10cb8f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cb8f30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cb8f50; body size 18 bytes.
#line 1 "ENTRY_10cb8f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cb8f50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cb8f70; body size 11 bytes.
#line 1 "ENTRY_10cb8f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cb8f70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10cb8f80; body size 11 bytes.
#line 1 "ENTRY_10cb8f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cb8f80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10cb9010; body size 11 bytes.
#line 1 "ENTRY_10cb9010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cb9010(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10cb9020; body size 11 bytes.
#line 1 "ENTRY_10cb9020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cb9020(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10cb9310; body size 9 bytes.
#line 1 "ENTRY_10cb9310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cb9310(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIDisplayType);
  return (undefined4 *)(param_1);
}


// Reference entry 10cb94c0; body size 7 bytes.
#line 1 "ENTRY_10cb94c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cb94c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cb9540; body size 14 bytes.
#line 1 "ENTRY_10cb9540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10cb9540(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == *param_2);
}


// Reference entry 10cb9560; body size 14 bytes.
#line 1 "ENTRY_10cb9560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10cb9560(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != *param_2);
}


// Reference entry 10cb9690; body size 6 bytes.
#line 1 "ENTRY_10cb9690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cb9690(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10cb96a0; body size 6 bytes.
#line 1 "ENTRY_10cb96a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cb96a0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10cb96b0; body size 6 bytes.
#line 1 "ENTRY_10cb96b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cb96b0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10cb9860; body size 14 bytes.
#line 1 "ENTRY_10cb9860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cb9860(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10cb9cb0; body size 3 bytes.
#line 1 "ENTRY_10cb9cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb9cb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cb9cc0; body size 3 bytes.
#line 1 "ENTRY_10cb9cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb9cc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cb9cd0; body size 3 bytes.
#line 1 "ENTRY_10cb9cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb9cd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cb9ce0; body size 3 bytes.
#line 1 "ENTRY_10cb9ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb9ce0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cb9cf0; body size 3 bytes.
#line 1 "ENTRY_10cb9cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb9cf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cba000; body size 30 bytes.
#line 1 "ENTRY_10cba000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10cba000(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = (char)(*(char *)(*(int *)(param_1 + 8) + 0xd));
  iVar2 = (int)(*(int *)(param_1 + 8));
  while (iVar3 = iVar2, cVar1 == '\0') {
    iVar2 = (int)(*(int *)(iVar3 + 8));
    cVar1 = (char)(*(char *)(iVar2 + 0xd));
    param_1 = (int)(iVar3);
  }
  return (int)(param_1);
}


// Reference entry 10cba060; body size 3 bytes.
#line 1 "ENTRY_10cba060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10cba060(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10cba070; body size 11 bytes.
#line 1 "ENTRY_10cba070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cba070(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10cba0f0; body size 11 bytes.
#line 1 "ENTRY_10cba0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cba0f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10cba1d0; body size 66 bytes.
#line 1 "ENTRY_10cba1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10cba1d0(int param_1,int param_2)

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


// Reference entry 10cba230; body size 11 bytes.
#line 1 "ENTRY_10cba230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cba230(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10cba2b0; body size 4 bytes.
#line 1 "ENTRY_10cba2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cba2b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xc));
}


// Reference entry 10cba9d0; body size 39 bytes.
#line 1 "ENTRY_10cba9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10cba9d0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 10cbb120; body size 4 bytes.
#line 1 "ENTRY_10cbb120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cbb120(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 10cbc1a0; body size 67 bytes.
#line 1 "ENTRY_10cbc1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cbc1a0(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = (uint)((**(code **)(*param_1 + 0x58))());
  if (uVar1 >> 8 == 0xfe) {
    iVar2 = (int)((**(code **)(*param_1 + 0x24))());
    if (iVar2 != 0) {
      uVar3 = (undefined4)(thunk_FUN_110ecc20());
      return (undefined4)(uVar3);
    }
  }
  else {
    iVar2 = (int)((**(code **)(*param_1 + 0x24))());
    if (iVar2 != 0) {
      return (undefined4)(*(undefined4 *)(iVar2 + 0x1994));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10cbc200; body size 6 bytes.
#line 1 "ENTRY_10cbc200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cbc200(void)

{
  return (char *)("SCIDisplayType");
}


// Reference entry 10cbc580; body size 6 bytes.
#line 1 "ENTRY_10cbc580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cbc580(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10cbc590; body size 6 bytes.
#line 1 "ENTRY_10cbc590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cbc590(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10cbc5a0; body size 5 bytes.
#line 1 "ENTRY_10cbc5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cbc5a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cbc860; body size 36 bytes.
#line 1 "ENTRY_10cbc860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cbc860(SCStr *param_2)
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


// Reference entry 10cbcad0; body size 3 bytes.
#line 1 "ENTRY_10cbcad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cbcad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cbe3f0; body size 16 bytes.
#line 1 "ENTRY_10cbe3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cbe3f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cbe7c0; body size 3 bytes.
#line 1 "ENTRY_10cbe7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cbe7c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cc07a0; body size 25 bytes.
#line 1 "ENTRY_10cc07a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc07a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc07c0; body size 33 bytes.
#line 1 "ENTRY_10cc07c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10cc07c0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10cc07f0; body size 3 bytes.
#line 1 "ENTRY_10cc07f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cc07f0(void)

{
  return;
}


// Reference entry 10cc0800; body size 18 bytes.
#line 1 "ENTRY_10cc0800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cc0800(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10cc09d0; body size 7 bytes.
#line 1 "ENTRY_10cc09d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc09d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cc09e0; body size 5 bytes.
#line 1 "ENTRY_10cc09e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc09e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc09f0; body size 36 bytes.
#line 1 "ENTRY_10cc09f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10cc09f0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10cc0a20; body size 13 bytes.
#line 1 "ENTRY_10cc0a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cc0a20(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10cc0a30; body size 36 bytes.
#line 1 "ENTRY_10cc0a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cc0a30(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10cc0820(puVar1,param_2);
  return;
}


// Reference entry 10cc0a60; body size 5 bytes.
#line 1 "ENTRY_10cc0a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc0a60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc0a70; body size 6 bytes.
#line 1 "ENTRY_10cc0a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cc0a70(void)

{
  return (char *)("SCIOpGetAboutSonosString");
}


// Reference entry 10cc0a80; body size 28 bytes.
#line 1 "ENTRY_10cc0a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc0a80(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc0b40; body size 27 bytes.
#line 1 "ENTRY_10cc0b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc0b40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc0d10; body size 16 bytes.
#line 1 "ENTRY_10cc0d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc0d10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc0d30; body size 23 bytes.
#line 1 "ENTRY_10cc0d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc0d30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc0d50; body size 3 bytes.
#line 1 "ENTRY_10cc0d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc0d50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc0d60; body size 23 bytes.
#line 1 "ENTRY_10cc0d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc0d60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc0d80; body size 203 bytes.
#line 1 "ENTRY_10cc0d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cc0d80(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)));
  if (param_7 == '\0') {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x48))());
  }
  else {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x4c))());
  }
  uVar3 = (undefined4)((**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x50))
                    (param_3,param_4,param_5,param_6));
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:DeviceProperties:1","GetZoneInfo",uVar3,
                     param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetZoneInfoAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetZoneInfoAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetZoneInfoAIOOp);
  param_1[0x3a56] = (undefined4)(0);
  param_1[0x3a57] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x35f4) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0xd811) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0xd852) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0xd893) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x3635) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0xd915) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0xd956) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0xe157) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc0fe0; body size 9 bytes.
#line 1 "ENTRY_10cc0fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc0fe0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpGetAboutSonosString);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc1250; body size 11 bytes.
#line 1 "ENTRY_10cc1250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cc1250(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc1270; body size 11 bytes.
#line 1 "ENTRY_10cc1270"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cc1270(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  if ((int *)param_1[1] != (int *)((0x0))) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if (((undefined4 *)(puVar1) != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 10cc1540; body size 28 bytes.
#line 1 "ENTRY_10cc1540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cc1540(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetZoneInfoAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetZoneInfoAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetZoneInfoAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)param_1[0x2a5e] != (undefined4 *)((0x0))) {
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


// Reference entry 10cc17a0; body size 7 bytes.
#line 1 "ENTRY_10cc17a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cc17a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cc17b0; body size 18 bytes.
#line 1 "ENTRY_10cc17b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cc17b0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGetAboutSonosString);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpGetAboutSonosString);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)0x0) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      (**(code **)(*piVar1 + 8))(uVar2);
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

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10cc1900; body size 12 bytes.
#line 1 "ENTRY_10cc1900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10cc1900(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 4);
}


// Reference entry 10cc1910; body size 4 bytes.
#line 1 "ENTRY_10cc1910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc1910(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10cc1920; body size 7 bytes.
#line 1 "ENTRY_10cc1920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10cc1920(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 10cc1930; body size 4 bytes.
#line 1 "ENTRY_10cc1930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc1930(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10cc1940; body size 3 bytes.
#line 1 "ENTRY_10cc1940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc1940(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cc1950; body size 3 bytes.
#line 1 "ENTRY_10cc1950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc1950(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cc1c20; body size 49 bytes.
#line 1 "ENTRY_10cc1c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10cc1c20(uint param_2)
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


// Reference entry 10cc1cd0; body size 3 bytes.
#line 1 "ENTRY_10cc1cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10cc1cd0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10cc1ce0; body size 3 bytes.
#line 1 "ENTRY_10cc1ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc1ce0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc1cf0; body size 3 bytes.
#line 1 "ENTRY_10cc1cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc1cf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc1d00; body size 3 bytes.
#line 1 "ENTRY_10cc1d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc1d00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc1d10; body size 3 bytes.
#line 1 "ENTRY_10cc1d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc1d10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc1d20; body size 3 bytes.
#line 1 "ENTRY_10cc1d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10cc1d20(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10cc1da0; body size 38 bytes.
#line 1 "ENTRY_10cc1da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10cc1da0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10cc1dd0; body size 27 bytes.
#line 1 "ENTRY_10cc1dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10cc1dd0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10cc1e00; body size 27 bytes.
#line 1 "ENTRY_10cc1e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10cc1e00(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10cc1f90; body size 87 bytes.
#line 1 "ENTRY_10cc1f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10cc1f90(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x40000000) {
    param_1 = (uint)(param_1 * 4);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10cc2010; body size 9 bytes.
#line 1 "ENTRY_10cc2010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc2010(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10cc2020; body size 6 bytes.
#line 1 "ENTRY_10cc2020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cc2020(undefined4 *param_1)

{
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10cc2030; body size 61 bytes.
#line 1 "ENTRY_10cc2030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10cc2030(int param_1,int param_2)

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


// Reference entry 10cc2090; body size 4 bytes.
#line 1 "ENTRY_10cc2090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc2090(int param_1)

{
  return (int)(param_1 + 4);
}


// Reference entry 10cc20a0; body size 4 bytes.
#line 1 "ENTRY_10cc20a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc20a0(int param_1)

{
  return (int)(param_1 + 0x38);
}


// Reference entry 10cc2250; body size 7 bytes.
#line 1 "ENTRY_10cc2250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc2250(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x52c));
}


// Reference entry 10cc2260; body size 20 bytes.
#line 1 "ENTRY_10cc2260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10cc2260(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x58));
  return (SCStr *)(param_2);
}


// Reference entry 10cc2420; body size 20 bytes.
#line 1 "ENTRY_10cc2420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10cc2420(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x50));
  return (SCStr *)(param_2);
}


// Reference entry 10cc2460; body size 7 bytes.
#line 1 "ENTRY_10cc2460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc2460(int param_1)

{
  return (int)(param_1 + 0xd852);
}


// Reference entry 10cc2470; body size 7 bytes.
#line 1 "ENTRY_10cc2470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc2470(int param_1)

{
  return (int)(param_1 + 0xe157);
}


// Reference entry 10cc2480; body size 4 bytes.
#line 1 "ENTRY_10cc2480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc2480(int param_1)

{
  return (int)(param_1 + 0x20);
}


// Reference entry 10cc2490; body size 7 bytes.
#line 1 "ENTRY_10cc2490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc2490(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xe958));
}


// Reference entry 10cc24a0; body size 7 bytes.
#line 1 "ENTRY_10cc24a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc24a0(int param_1)

{
  return (int)(param_1 + 0xd893);
}


// Reference entry 10cc24b0; body size 7 bytes.
#line 1 "ENTRY_10cc24b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc24b0(int param_1)

{
  return (int)(param_1 + 0xd8d4);
}


// Reference entry 10cc2810; body size 20 bytes.
#line 1 "ENTRY_10cc2810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10cc2810(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x54));
  return (SCStr *)(param_2);
}


// Reference entry 10cc2880; body size 5 bytes.
#line 1 "ENTRY_10cc2880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_10cc2880(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x24));
}


// Reference entry 10cc2890; body size 7 bytes.
#line 1 "ENTRY_10cc2890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc2890(int param_1)

{
  return (int)(param_1 + 0xd7d0);
}


// Reference entry 10cc28a0; body size 4 bytes.
#line 1 "ENTRY_10cc28a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10cc28a0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x18));
}


// Reference entry 10cc28b0; body size 7 bytes.
#line 1 "ENTRY_10cc28b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc28b0(int param_1)

{
  return (int)(param_1 + 0xd811);
}


// Reference entry 10cc2a60; body size 4 bytes.
#line 1 "ENTRY_10cc2a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc2a60(int param_1)

{
  return (int)(param_1 + 0x10);
}


// Reference entry 10cc2a90; body size 4 bytes.
#line 1 "ENTRY_10cc2a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc2a90(int param_1)

{
  return (int)(param_1 + 0x14);
}


// Reference entry 10cc2aa0; body size 4 bytes.
#line 1 "ENTRY_10cc2aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc2aa0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10cc3290; body size 6 bytes.
#line 1 "ENTRY_10cc3290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cc3290(void)

{
  return (char *)("SCIOpGetAboutSonosString");
}


// Reference entry 10cc3350; body size 6 bytes.
#line 1 "ENTRY_10cc3350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc3350(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10cc3360; body size 6 bytes.
#line 1 "ENTRY_10cc3360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc3360(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10cc34a0; body size 36 bytes.
#line 1 "ENTRY_10cc34a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cc34a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10cc0820(puVar1,param_2);
  return;
}


// Reference entry 10cc35f0; body size 28 bytes.
#line 1 "ENTRY_10cc35f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cc35f0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10cc3620; body size 28 bytes.
#line 1 "ENTRY_10cc3620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cc3620(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10cc39a0; body size 36 bytes.
#line 1 "ENTRY_10cc39a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cc39a0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x20));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10cc39d0; body size 12 bytes.
#line 1 "ENTRY_10cc39d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cc39d0(undefined2 param_2)
{
  int param_1 = (int )this;
  *(undefined2*)(param_1 + 0x24) = (undefined2)(param_2);
  return;
}


// Reference entry 10cc39e0; body size 10 bytes.
#line 1 "ENTRY_10cc39e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cc39e0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x18) = (undefined1)(param_2);
  return;
}


// Reference entry 10cc3a00; body size 36 bytes.
#line 1 "ENTRY_10cc3a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cc3a00(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x10));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10cc3a30; body size 36 bytes.
#line 1 "ENTRY_10cc3a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cc3a30(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x14));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10cc3a60; body size 10 bytes.
#line 1 "ENTRY_10cc3a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cc3a60(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_2);
  return;
}


// Reference entry 10cc3a70; body size 9 bytes.
#line 1 "ENTRY_10cc3a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc3a70(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10cc54b0; body size 25 bytes.
#line 1 "ENTRY_10cc54b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc54b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc54d0; body size 25 bytes.
#line 1 "ENTRY_10cc54d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc54d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc54f0; body size 91 bytes.
#line 1 "ENTRY_10cc54f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10cc54f0(int *param_2)
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
  if ((int *)(piVar2) != (int *)0x0) {
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10cc5570; body size 33 bytes.
#line 1 "ENTRY_10cc5570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10cc5570(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10cc55a0; body size 33 bytes.
#line 1 "ENTRY_10cc55a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10cc55a0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10cc55d0; body size 3 bytes.
#line 1 "ENTRY_10cc55d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cc55d0(void)

{
  return;
}


// Reference entry 10cc55e0; body size 3 bytes.
#line 1 "ENTRY_10cc55e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cc55e0(void)

{
  return;
}


// Reference entry 10cc55f0; body size 18 bytes.
#line 1 "ENTRY_10cc55f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cc55f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10cc5610; body size 18 bytes.
#line 1 "ENTRY_10cc5610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cc5610(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10cc5990; body size 7 bytes.
#line 1 "ENTRY_10cc5990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc5990(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cc59a0; body size 7 bytes.
#line 1 "ENTRY_10cc59a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc59a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cc59b0; body size 33 bytes.
#line 1 "ENTRY_10cc59b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10cc59b0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10cc59e0; body size 33 bytes.
#line 1 "ENTRY_10cc59e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10cc59e0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10cc5a10; body size 5 bytes.
#line 1 "ENTRY_10cc5a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc5a10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc5a20; body size 5 bytes.
#line 1 "ENTRY_10cc5a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc5a20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc5a30; body size 36 bytes.
#line 1 "ENTRY_10cc5a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10cc5a30(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10cc5a60; body size 36 bytes.
#line 1 "ENTRY_10cc5a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10cc5a60(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10cc5a90; body size 5 bytes.
#line 1 "ENTRY_10cc5a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc5a90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc5aa0; body size 5 bytes.
#line 1 "ENTRY_10cc5aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc5aa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc5ab0; body size 13 bytes.
#line 1 "ENTRY_10cc5ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cc5ab0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10cc5ac0; body size 13 bytes.
#line 1 "ENTRY_10cc5ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cc5ac0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10cc5ad0; body size 3 bytes.
#line 1 "ENTRY_10cc5ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cc5ad0(void)

{
  return;
}


// Reference entry 10cc5ae0; body size 3 bytes.
#line 1 "ENTRY_10cc5ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cc5ae0(void)

{
  return;
}


// Reference entry 10cc5af0; body size 36 bytes.
#line 1 "ENTRY_10cc5af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cc5af0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10cc5630(puVar1,param_2);
  return;
}


// Reference entry 10cc5b20; body size 36 bytes.
#line 1 "ENTRY_10cc5b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cc5b20(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10cc57e0(puVar1,param_2);
  return;
}


// Reference entry 10cc5b50; body size 5 bytes.
#line 1 "ENTRY_10cc5b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc5b50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc5b60; body size 5 bytes.
#line 1 "ENTRY_10cc5b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc5b60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc5b70; body size 5 bytes.
#line 1 "ENTRY_10cc5b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc5b70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc5b80; body size 5 bytes.
#line 1 "ENTRY_10cc5b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc5b80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc5b90; body size 28 bytes.
#line 1 "ENTRY_10cc5b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc5b90(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc5bc0; body size 28 bytes.
#line 1 "ENTRY_10cc5bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc5bc0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc6d60; body size 11 bytes.
#line 1 "ENTRY_10cc6d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cc6d60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc6d70; body size 11 bytes.
#line 1 "ENTRY_10cc6d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cc6d70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc6d80; body size 11 bytes.
#line 1 "ENTRY_10cc6d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cc6d80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc6d90; body size 11 bytes.
#line 1 "ENTRY_10cc6d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cc6d90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc6da0; body size 23 bytes.
#line 1 "ENTRY_10cc6da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc6da0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc6dc0; body size 23 bytes.
#line 1 "ENTRY_10cc6dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc6dc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc6de0; body size 3 bytes.
#line 1 "ENTRY_10cc6de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc6de0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc6df0; body size 3 bytes.
#line 1 "ENTRY_10cc6df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc6df0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc6e00; body size 23 bytes.
#line 1 "ENTRY_10cc6e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc6e00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc6e20; body size 23 bytes.
#line 1 "ENTRY_10cc6e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc6e20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc7220; body size 197 bytes.
#line 1 "ENTRY_10cc7220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc7220(undefined4 *param_1)

{
  thunk_FUN_1124a200("application/json",0);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[0x1884] = (undefined4)(0);
  param_1[0x1885] = (undefined4)(0);
  param_1[0x1886] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x1887) = (undefined2)(1);
  *(undefined1*)((int)param_1 + 0x621e) = (undefined1)(0);
  param_1[0x1888] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RVSAuthenticateRequest);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RVSAuthenticateRequest);
  param_1[0x1889] = (undefined4)(0);
  param_1[0x188a] = (undefined4)(0);
  param_1[0x188b] = (undefined4)(0);
  param_1[0x188c] = (undefined4)(0);
  param_1[0x188d] = (undefined4)(0);
  param_1[0x188e] = (undefined4)(0);
  param_1[0x188f] = (undefined4)(0);
  param_1[0x1890] = (undefined4)(0);
  param_1[0x1891] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc7320; body size 167 bytes.
#line 1 "ENTRY_10cc7320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc7320(undefined4 *param_1)

{
  thunk_FUN_1124a200("application/json",0);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[0x1884] = (undefined4)(0);
  param_1[0x1885] = (undefined4)(0);
  param_1[0x1886] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x1887) = (undefined2)(1);
  *(undefined1*)((int)param_1 + 0x621e) = (undefined1)(0);
  param_1[0x1888] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RVSDeleteAccountRequest);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RVSDeleteAccountRequest);
  param_1[0x1889] = (undefined4)(0);
  param_1[0x188a] = (undefined4)(0);
  param_1[0x188b] = (undefined4)(0);
  param_1[0x188c] = (undefined4)(0);
  param_1[0x188d] = (undefined4)(0);
  param_1[0x188e] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc75e0; body size 177 bytes.
#line 1 "ENTRY_10cc75e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc75e0(undefined4 *param_1)

{
  thunk_FUN_1124a200("application/json",0);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[0x1884] = (undefined4)(0);
  param_1[0x1885] = (undefined4)(0);
  param_1[0x1886] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x1887) = (undefined2)(1);
  *(undefined1*)((int)param_1 + 0x621e) = (undefined1)(0);
  param_1[0x1888] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RVSNotifyInitiateOnboardingRequest);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RVSNotifyInitiateOnboardingRequest);
  param_1[0x1889] = (undefined4)(0);
  param_1[0x188a] = (undefined4)(0);
  param_1[0x188b] = (undefined4)(0);
  param_1[0x188c] = (undefined4)(0);
  param_1[0x188d] = (undefined4)(0);
  param_1[0x188e] = (undefined4)(0);
  param_1[0x188f] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc7d80; body size 468 bytes.
#line 1 "ENTRY_10cc7d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cc7d80(undefined4 *param_1)

{
 try {
  uint uVar1;
  SCStr *this_;
  undefined4 *puStack_454;
  void *pvStack_450;
  undefined1 *puStack_44c;
  undefined4 uStack_448;
  undefined1 auStack_444 [1028];
  undefined1 auStack_40 [56];
  uint uStack_8;


  uStack_8 = (uint)(DAT_12126b84 ^ (uint)auStack_444);

  puStack_454 = (undefined4 *)(param_1);
  thunk_FUN_11261e50(uStack_8);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RVoiceServiceAmazonSkillAuthCodeAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RVoiceServiceAmazonSkillAuthCodeAIOOp);
  thunk_FUN_1124a200("application/x-www-form-urlencoded",0);
  param_1[0x188a] = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[0x188b] = (undefined4)(0);
  param_1[0x188c] = (undefined4)(0);
  param_1[0x188d] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x188e) = (undefined2)(1);
  *(undefined1*)((int)param_1 + 0x623a) = (undefined1)(0);
  param_1[0x188f] = (undefined4)(0);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RVSAmazonSkillAuthCodeRequest);
  param_1[0x188a] = (undefined4)((uint)&ghidra_vftable_RVSAmazonSkillAuthCodeRequest);
  param_1[0x1890] = (undefined4)(0);
  param_1[0x1891] = (undefined4)(0);
  param_1[0x1892] = (undefined4)(0);
  *(unsigned char *)((char *)&uStack_448 + 0) = 5;
  ((SCStr *)((SCStr *)&puStack_454))->int_allocRep("https://www.sonos.com");
  *(unsigned char *)((char *)&uStack_448 + 0) = 6;
  ((SCStr *)(this_))->format((char *)(param_1 + 0x188d));
  uVar1 = (uint)(((SCStr *)((SCStr *)(param_1 + 0x188d)))->length());
  param_1[0x188b] = (undefined4)(uVar1);
  *(unsigned char *)((char *)&uStack_448 + 0) = 7;
  ((SCStr *)((SCStr *)&puStack_454))->int_release();
  param_1[0x1894] = (undefined4)(0);
  param_1[0x1895] = (undefined4)(0);
  param_1[0x1893] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  param_1[0x1896] = (undefined4)(0);
  param_1[0x1897] = (undefined4)(0);
  uStack_448 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_448 + 1)) << 8 | (uint)(10)));
  thunk_FUN_1109f7f0();
  auStack_40[0] = (undefined1)(0);
  thunk_FUN_1109f280(auStack_40,0x36);
  thunk_FUN_11261330(auStack_444,0x401,"/sonos/authCode/householdId/%s",2);
  ((SCStr *)((SCStr *)(param_1 + 0x1890)))->format((char *)(param_1 + 0x1890));

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10cca400; body size 11 bytes.
#line 1 "ENTRY_10cca400"

/* WARNING: Removing unreachable block_10cca400 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cca400(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  if ((int *)param_1[1] != (int *)((0x0))) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if (((undefined4 *)(puVar1) != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 10cca410; body size 11 bytes.
#line 1 "ENTRY_10cca410"

/* WARNING: Removing unreachable block_10cca410 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cca410(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  if ((int *)param_1[1] != (int *)((0x0))) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if (((undefined4 *)(puVar1) != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 10cca420; body size 11 bytes.
#line 1 "ENTRY_10cca420"

/* WARNING: Removing unreachable block_10cca420 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cca420(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  if ((int *)param_1[1] != (int *)((0x0))) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if (((undefined4 *)(puVar1) != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 10cca430; body size 11 bytes.
#line 1 "ENTRY_10cca430"

/* WARNING: Removing unreachable block_10cca430 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cca430(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  if ((int *)param_1[1] != (int *)((0x0))) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if (((undefined4 *)(puVar1) != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 10cca440; body size 11 bytes.
#line 1 "ENTRY_10cca440"

/* WARNING: Removing unreachable block_10cca440 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cca440(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  if ((int *)param_1[1] != (int *)((0x0))) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if (((undefined4 *)(puVar1) != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 10cca450; body size 11 bytes.
#line 1 "ENTRY_10cca450"

/* WARNING: Removing unreachable block_10cca450 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cca450(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  if ((int *)param_1[1] != (int *)((0x0))) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if (((undefined4 *)(puVar1) != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 10cca460; body size 11 bytes.
#line 1 "ENTRY_10cca460"

/* WARNING: Removing unreachable block_10cca460 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cca460(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  if ((int *)param_1[1] != (int *)((0x0))) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if (((undefined4 *)(puVar1) != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 10cca470; body size 11 bytes.
#line 1 "ENTRY_10cca470"

/* WARNING: Removing unreachable block_10cca470 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cca470(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  if ((int *)param_1[1] != (int *)((0x0))) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if (((undefined4 *)(puVar1) != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 10cca480; body size 11 bytes.
#line 1 "ENTRY_10cca480"

/* WARNING: Removing unreachable block_10cca480 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cca480(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  if ((int *)param_1[1] != (int *)((0x0))) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if (((undefined4 *)(puVar1) != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 10ccc3f0; body size 18 bytes.
#line 1 "ENTRY_10ccc3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ccc3f0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpUpdateVoiceAccountData);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpUpdateVoiceAccountData);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)0x0) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      (**(code **)(*piVar1 + 8))(uVar2);
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

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10ccc490; body size 18 bytes.
#line 1 "ENTRY_10ccc490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ccc490(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpVoiceAcctWakeWordSet);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpVoiceAcctWakeWordSet);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)0x0) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      (**(code **)(*piVar1 + 8))(uVar2);
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

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10ccc4b0; body size 18 bytes.
#line 1 "ENTRY_10ccc4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ccc4b0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceAlexaROWLocale);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceAlexaROWLocale);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)0x0) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      (**(code **)(*piVar1 + 8))(uVar2);
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

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10ccc4d0; body size 18 bytes.
#line 1 "ENTRY_10ccc4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ccc4d0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceAmazonChallenge);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceAmazonChallenge);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)0x0) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      (**(code **)(*piVar1 + 8))(uVar2);
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

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10ccc4f0; body size 18 bytes.
#line 1 "ENTRY_10ccc4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ccc4f0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceAmazonSkillAuthCode);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceAmazonSkillAuthCode);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)0x0) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      (**(code **)(*piVar1 + 8))(uVar2);
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

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10ccc510; body size 18 bytes.
#line 1 "ENTRY_10ccc510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ccc510(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceAuthenticate);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceAuthenticate);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)0x0) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      (**(code **)(*piVar1 + 8))(uVar2);
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

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10ccc630; body size 18 bytes.
#line 1 "ENTRY_10ccc630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ccc630(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceDeleteAccount);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceDeleteAccount);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)0x0) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      (**(code **)(*piVar1 + 8))(uVar2);
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

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10ccc6d0; body size 18 bytes.
#line 1 "ENTRY_10ccc6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ccc6d0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceNotifyInitiateOnboarding);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceNotifyInitiateOnboarding);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)0x0) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      (**(code **)(*piVar1 + 8))(uVar2);
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

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10ccc6f0; body size 14 bytes.
#line 1 "ENTRY_10ccc6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10ccc6f0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == *param_2);
}


// Reference entry 10ccc710; body size 14 bytes.
#line 1 "ENTRY_10ccc710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10ccc710(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == *param_2);
}


// Reference entry 10ccc730; body size 14 bytes.
#line 1 "ENTRY_10ccc730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10ccc730(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != *param_2);
}


// Reference entry 10ccc750; body size 14 bytes.
#line 1 "ENTRY_10ccc750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10ccc750(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != *param_2);
}


// Reference entry 10ccc770; body size 4 bytes.
#line 1 "ENTRY_10ccc770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc770(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ccc780; body size 4 bytes.
#line 1 "ENTRY_10ccc780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc780(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ccc790; body size 4 bytes.
#line 1 "ENTRY_10ccc790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc790(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ccc7a0; body size 4 bytes.
#line 1 "ENTRY_10ccc7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc7a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ccc7b0; body size 4 bytes.
#line 1 "ENTRY_10ccc7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc7b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ccc7c0; body size 4 bytes.
#line 1 "ENTRY_10ccc7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc7c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ccc7d0; body size 4 bytes.
#line 1 "ENTRY_10ccc7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc7d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ccc7e0; body size 4 bytes.
#line 1 "ENTRY_10ccc7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc7e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ccc7f0; body size 4 bytes.
#line 1 "ENTRY_10ccc7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc7f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ccc800; body size 3 bytes.
#line 1 "ENTRY_10ccc800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc800(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ccc810; body size 3 bytes.
#line 1 "ENTRY_10ccc810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc810(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ccc820; body size 3 bytes.
#line 1 "ENTRY_10ccc820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc820(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ccc830; body size 3 bytes.
#line 1 "ENTRY_10ccc830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc830(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ccc840; body size 6 bytes.
#line 1 "ENTRY_10ccc840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10ccc840(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 10ccc850; body size 6 bytes.
#line 1 "ENTRY_10ccc850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10ccc850(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 10ccc860; body size 6 bytes.
#line 1 "ENTRY_10ccc860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10ccc860(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 10ccc870; body size 6 bytes.
#line 1 "ENTRY_10ccc870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10ccc870(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 10ccda60; body size 49 bytes.
#line 1 "ENTRY_10ccda60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10ccda60(uint param_2)
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


// Reference entry 10ccdaa0; body size 49 bytes.
#line 1 "ENTRY_10ccdaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10ccdaa0(uint param_2)
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


// Reference entry 10ccdbc0; body size 3 bytes.
#line 1 "ENTRY_10ccdbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ccdbc0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10ccdbd0; body size 3 bytes.
#line 1 "ENTRY_10ccdbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ccdbd0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10ccdbe0; body size 3 bytes.
#line 1 "ENTRY_10ccdbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ccdbe0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10ccdbf0; body size 3 bytes.
#line 1 "ENTRY_10ccdbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ccdbf0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10ccdc00; body size 3 bytes.
#line 1 "ENTRY_10ccdc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccdc00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ccdc10; body size 3 bytes.
#line 1 "ENTRY_10ccdc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccdc10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ccdc20; body size 3 bytes.
#line 1 "ENTRY_10ccdc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccdc20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ccdc30; body size 3 bytes.
#line 1 "ENTRY_10ccdc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccdc30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ccdc40; body size 3 bytes.
#line 1 "ENTRY_10ccdc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccdc40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ccdc50; body size 3 bytes.
#line 1 "ENTRY_10ccdc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccdc50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ccdc60; body size 3 bytes.
#line 1 "ENTRY_10ccdc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccdc60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ccdc70; body size 3 bytes.
#line 1 "ENTRY_10ccdc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccdc70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ccdc80; body size 3 bytes.
#line 1 "ENTRY_10ccdc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ccdc80(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10ccdc90; body size 3 bytes.
#line 1 "ENTRY_10ccdc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ccdc90(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10ccdd80; body size 38 bytes.
#line 1 "ENTRY_10ccdd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10ccdd80(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10ccddb0; body size 38 bytes.
#line 1 "ENTRY_10ccddb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10ccddb0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10ccdde0; body size 27 bytes.
#line 1 "ENTRY_10ccdde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ccdde0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10ccde10; body size 27 bytes.
#line 1 "ENTRY_10ccde10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ccde10(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10ccde40; body size 27 bytes.
#line 1 "ENTRY_10ccde40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ccde40(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10ccde70; body size 27 bytes.
#line 1 "ENTRY_10ccde70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ccde70(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10ccef20; body size 87 bytes.
#line 1 "ENTRY_10ccef20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10ccef20(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x40000000) {
    param_1 = (uint)(param_1 * 4);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10ccef90; body size 87 bytes.
#line 1 "ENTRY_10ccef90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10ccef90(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x40000000) {
    param_1 = (uint)(param_1 * 4);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10ccf000; body size 11 bytes.
#line 1 "ENTRY_10ccf000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ccf000(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ccf010; body size 11 bytes.
#line 1 "ENTRY_10ccf010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ccf010(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ccf400; body size 9 bytes.
#line 1 "ENTRY_10ccf400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ccf400(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10ccf410; body size 9 bytes.
#line 1 "ENTRY_10ccf410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ccf410(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10ccf420; body size 6 bytes.
#line 1 "ENTRY_10ccf420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ccf420(undefined4 *param_1)

{
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10ccf430; body size 6 bytes.
#line 1 "ENTRY_10ccf430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ccf430(undefined4 *param_1)

{
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10cd3190; body size 61 bytes.
#line 1 "ENTRY_10cd3190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10cd3190(int param_1,int param_2)

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


// Reference entry 10cd31e0; body size 61 bytes.
#line 1 "ENTRY_10cd31e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10cd31e0(int param_1,int param_2)

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


// Reference entry 10cd3230; body size 9 bytes.
#line 1 "ENTRY_10cd3230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cd3230(int *param_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*param_1 == param_1[1])));
}


// Reference entry 10cd3240; body size 9 bytes.
#line 1 "ENTRY_10cd3240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cd3240(int *param_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*param_1 == param_1[1])));
}


// Reference entry 10cd3250; body size 12 bytes.
#line 1 "ENTRY_10cd3250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cd3250(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10cd3260; body size 12 bytes.
#line 1 "ENTRY_10cd3260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cd3260(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10cd3270; body size 42 bytes.
#line 1 "ENTRY_10cd3270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cd3270(undefined4 *param_2,void *param_3)
{
  int param_1 = (int )this;
  memmove(param_3,(void *)((int)param_3 + 4),*(int *)(param_1 + 4) - ((int)param_3 + 4));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -4);
  *param_2 = (undefined4)(param_3);
  return;
}


// Reference entry 10cd32b0; body size 42 bytes.
#line 1 "ENTRY_10cd32b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cd32b0(undefined4 *param_2,void *param_3)
{
  int param_1 = (int )this;
  memmove(param_3,(void *)((int)param_3 + 4),*(int *)(param_1 + 4) - ((int)param_3 + 4));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -4);
  *param_2 = (undefined4)(param_3);
  return;
}


// Reference entry 10cd3710; body size 4 bytes.
#line 1 "ENTRY_10cd3710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10cd3710(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x3c));
}


// Reference entry 10cd3730; body size 23 bytes.
#line 1 "ENTRY_10cd3730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10cd3730(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xc3d8));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3750; body size 28 bytes.
#line 1 "ENTRY_10cd3750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10cd3750(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x6240));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10cd3780; body size 28 bytes.
#line 1 "ENTRY_10cd3780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10cd3780(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x6260));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10cd37e0; body size 23 bytes.
#line 1 "ENTRY_10cd37e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10cd37e0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x622c));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3800; body size 23 bytes.
#line 1 "ENTRY_10cd3800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10cd3800(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x625c));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3840; body size 17 bytes.
#line 1 "ENTRY_10cd3840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10cd3840(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6224) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6224));
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10cd38d0; body size 20 bytes.
#line 1 "ENTRY_10cd38d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10cd38d0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x1c));
  return (SCStr *)(param_2);
}


// Reference entry 10cd38f0; body size 23 bytes.
#line 1 "ENTRY_10cd38f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10cd38f0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xc3d4));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3910; body size 23 bytes.
#line 1 "ENTRY_10cd3910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10cd3910(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x626c));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3930; body size 23 bytes.
#line 1 "ENTRY_10cd3930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10cd3930(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x1c));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3950; body size 20 bytes.
#line 1 "ENTRY_10cd3950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10cd3950(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x38));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3970; body size 23 bytes.
#line 1 "ENTRY_10cd3970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10cd3970(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x38));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3990; body size 25 bytes.
#line 1 "ENTRY_10cd3990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10cd3990(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x626c));
  return (SCStr *)(param_2);
}


// Reference entry 10cd39b0; body size 23 bytes.
#line 1 "ENTRY_10cd39b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10cd39b0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x6240));
  return (SCStr *)(param_2);
}


// Reference entry 10cd39d0; body size 23 bytes.
#line 1 "ENTRY_10cd39d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10cd39d0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x6238));
  return (SCStr *)(param_2);
}


// Reference entry 10cd39f0; body size 23 bytes.
#line 1 "ENTRY_10cd39f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10cd39f0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x6238));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3a10; body size 23 bytes.
#line 1 "ENTRY_10cd3a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10cd3a10(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x6158));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3a30; body size 23 bytes.
#line 1 "ENTRY_10cd3a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10cd3a30(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x623c));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3a50; body size 23 bytes.
#line 1 "ENTRY_10cd3a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10cd3a50(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x6130));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3a70; body size 23 bytes.
#line 1 "ENTRY_10cd3a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10cd3a70(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x6160));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3ab0; body size 7 bytes.
#line 1 "ENTRY_10cd3ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cd3ab0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x6154));
}


// Reference entry 10cd3ac0; body size 7 bytes.
#line 1 "ENTRY_10cd3ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cd3ac0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x617c));
}


// Reference entry 10cd3b70; body size 28 bytes.
#line 1 "ENTRY_10cd3b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10cd3b70(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x6234));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10cd3ba0; body size 4 bytes.
#line 1 "ENTRY_10cd3ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10cd3ba0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x40));
}


// Reference entry 10cd3bb0; body size 28 bytes.
#line 1 "ENTRY_10cd3bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10cd3bb0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x6274));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10cd3be0; body size 7 bytes.
#line 1 "ENTRY_10cd3be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10cd3be0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x6278));
}


// Reference entry 10cd3bf0; body size 7 bytes.
#line 1 "ENTRY_10cd3bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10cd3bf0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xc3e0));
}


// Reference entry 10cd3c00; body size 7 bytes.
#line 1 "ENTRY_10cd3c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10cd3c00(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 25000));
}


// Reference entry 10cd3c10; body size 7 bytes.
#line 1 "ENTRY_10cd3c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10cd3c10(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x6274));
}


// Reference entry 10cd3c20; body size 4 bytes.
#line 1 "ENTRY_10cd3c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10cd3c20(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x28));
}


// Reference entry 10cd3c30; body size 7 bytes.
#line 1 "ENTRY_10cd3c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cd3c30(int param_1)

{
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 0x18) >> 8)) << 8 | (uint)(*(undefined1 *)(*(int *)(param_1 + 0x18) + 0x28))));
}


// Reference entry 10cd3c80; body size 4 bytes.
#line 1 "ENTRY_10cd3c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10cd3c80(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x34));
}


// Reference entry 10cd3cb0; body size 10 bytes.
#line 1 "ENTRY_10cd3cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cd3cb0(int param_1)

{
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 0x18) >> 8)) << 8 | (uint)(*(undefined1 *)(*(int *)(param_1 + 0x18) + 0x6274))));
}


// Reference entry 10cd3eb0; body size 17 bytes.
#line 1 "ENTRY_10cd3eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10cd3eb0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6230) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6230));
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10cd3ed0; body size 17 bytes.
#line 1 "ENTRY_10cd3ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10cd3ed0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x612c) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x612c));
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10cd3ef0; body size 17 bytes.
#line 1 "ENTRY_10cd3ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10cd3ef0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6230) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6230));
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10cd3f10; body size 17 bytes.
#line 1 "ENTRY_10cd3f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10cd3f10(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6230) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6230));
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10cd3f30; body size 17 bytes.
#line 1 "ENTRY_10cd3f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10cd3f30(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6130) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6130));
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10cd3f50; body size 17 bytes.
#line 1 "ENTRY_10cd3f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10cd3f50(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6234) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6234));
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10cd3f70; body size 54 bytes.
#line 1 "ENTRY_10cd3f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10cd3f70(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_3 < *(int *)(param_1 + 0x6154)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x613c + param_3 * 8));
    *param_2 = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    return (int *)(param_2);
  }
  *param_2 = (int)(0);
  return (int *)(param_2);
}


// Reference entry 10cd3fc0; body size 54 bytes.
#line 1 "ENTRY_10cd3fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10cd3fc0(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_3 < *(int *)(param_1 + 0x617c)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x6164 + param_3 * 8));
    *param_2 = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    return (int *)(param_2);
  }
  *param_2 = (int)(0);
  return (int *)(param_2);
}


// Reference entry 10cd4330; body size 54 bytes.
#line 1 "ENTRY_10cd4330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cd4330(SCStr *param_1)

{
  ((SCStr *)(param_1))->format((char *)(param_1 + 0x612c));
  return;
}


// Reference entry 10cd4380; body size 116 bytes.
#line 1 "ENTRY_10cd4380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cd4380(int param_1)

{
  SCStr *this_;
  uint auStack_440 [14];
  undefined1 auStack_408 [1028];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_440);
  thunk_FUN_1109f7f0();
  auStack_440[0] = (uint)(auStack_440[0] & 0xffffff00);
  thunk_FUN_1109f280(auStack_440,0x36);
  thunk_FUN_11261330(auStack_408,0x401,"/sonos/authCode/householdId/%s",2);
  ((SCStr *)(this_))->format((char *)(param_1 + 0x6224));
  auStack_440[0] = (uint)(0x10cd43ed);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10cd7b30; body size 6 bytes.
#line 1 "ENTRY_10cd7b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cd7b30(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10cd7b40; body size 6 bytes.
#line 1 "ENTRY_10cd7b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cd7b40(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10cd7b50; body size 6 bytes.
#line 1 "ENTRY_10cd7b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cd7b50(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10cd7b60; body size 6 bytes.
#line 1 "ENTRY_10cd7b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cd7b60(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10cd8790; body size 36 bytes.
#line 1 "ENTRY_10cd8790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cd8790(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10cc5630(puVar1,param_2);
  return;
}


// Reference entry 10cd87c0; body size 36 bytes.
#line 1 "ENTRY_10cd87c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cd87c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10cc57e0(puVar1,param_2);
  return;
}


// Reference entry 10cd9330; body size 123 bytes.
#line 1 "ENTRY_10cd9330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10cd9330(int param_2)
{
  int param_1 = (int )this;
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = (uint *)((uint *)(param_1 + 4));
  uVar4 = (uint)(-(uint)(param_2 != 0) & param_2 + 8U);
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
    if (*(int *)(param_1 + 8) != 0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x10))();
    }
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
      iVar3 = (int)(thunk_FUN_1123fcd0(puVar2 + 1));
      if (iVar3 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *puVar1 = (uint)(0);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
  }
  *puVar1 = (uint)(uVar4);
  if (uVar4 != 0) {
    thunk_FUN_1123fce0(uVar4 + 4);
  }
  return (int)(param_2);
}


// Reference entry 10cd9680; body size 27 bytes.
#line 1 "ENTRY_10cd9680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cd9680(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  ((SCStr *)(param_1))->format((char *)(param_1 + 0x623c));
  return;
}


// Reference entry 10cd96b0; body size 27 bytes.
#line 1 "ENTRY_10cd96b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cd96b0(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  ((SCStr *)(param_1))->format((char *)(param_1 + 0x6228));
  return;
}


// Reference entry 10cd9840; body size 27 bytes.
#line 1 "ENTRY_10cd9840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cd9840(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  ((SCStr *)(param_1))->format((char *)(param_1 + 0x6134));
  return;
}


// Reference entry 10cd9920; body size 9 bytes.
#line 1 "ENTRY_10cd9920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cd9920(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10cdabe0; body size 130 bytes.
#line 1 "ENTRY_10cdabe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10cdabe0(int *param_2,undefined4 param_3)
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
  if ((int *)(piVar2) != (int *)0x0) {
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[1] = (int)((int)piVar1);
  if ((int *)(piVar1) == (int *)0x0) {
    param_1[2] = (int)(0);
  }
  else {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[2] = (int)(iVar3);
    if ((int *)param_1[1] != (int *)((0x0))) {
      (**(code **)(*(int *)param_1[1] + 0x14))(param_3);
      return (int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (int)(param_1[1]);
}


// Reference entry 10cdac90; body size 5 bytes.
#line 1 "ENTRY_10cdac90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cdac90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cdaca0; body size 6 bytes.
#line 1 "ENTRY_10cdaca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cdaca0(void)

{
  return (char *)("SCIIndexManager");
}


// Reference entry 10cdacb0; body size 6 bytes.
#line 1 "ENTRY_10cdacb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cdacb0(void)

{
  return (char *)("SCIOpAlarmClockGetDailyIndexRefreshTime");
}


// Reference entry 10cdacc0; body size 6 bytes.
#line 1 "ENTRY_10cdacc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cdacc0(void)

{
  return (char *)("SCIOpAlarmClockSetDailyIndexRefreshTime");
}


// Reference entry 10cdadf0; body size 28 bytes.
#line 1 "ENTRY_10cdadf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cdadf0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdae20; body size 27 bytes.
#line 1 "ENTRY_10cdae20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cdae20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdae50; body size 27 bytes.
#line 1 "ENTRY_10cdae50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cdae50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdae80; body size 27 bytes.
#line 1 "ENTRY_10cdae80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cdae80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdb170; body size 70 bytes.
#line 1 "ENTRY_10cdb170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cdb170(undefined4 *param_1)

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


// Reference entry 10cdb290; body size 10 bytes.
#line 1 "ENTRY_10cdb290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cdb290(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10cdb2a0; body size 12 bytes.
#line 1 "ENTRY_10cdb2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cdb2a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10cdb330; body size 134 bytes.
#line 1 "ENTRY_10cdb330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cdb330(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(*(int *)(*(int *)(*(int *)(param_2 + 4) + 4) + 4 + param_2));
  if (param_7 == '\0') {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x48))());
  }
  else {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x4c))());
  }
  uVar3 = (undefined4)((**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x50))
                    (param_3,param_4,param_5,param_6));
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:AlarmClock:1","GetDailyIndexRefreshTime",
                     uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACGetDailyIndexRefreshTimeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACGetDailyIndexRefreshTimeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACGetDailyIndexRefreshTimeAIOOp);
  *(undefined1*)(param_1 + 0x35f4) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdb3e0; body size 127 bytes.
#line 1 "ENTRY_10cdb3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cdb3e0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(*(int *)(*(int *)(*(int *)(param_2 + 4) + 4) + 4 + param_2));
  if (param_7 == '\0') {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x48))());
  }
  else {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x4c))());
  }
  uVar3 = (undefined4)((**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x50))
                    (param_3,param_4,param_5,param_6));
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:AlarmClock:1","SetDailyIndexRefreshTime",
                     uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACSetDailyIndexRefreshTimeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetDailyIndexRefreshTimeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetDailyIndexRefreshTimeAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdb480; body size 140 bytes.
#line 1 "ENTRY_10cdb480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cdb480(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  iVar1 = (int)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)));
  if (param_7 == '\0') {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x48))());
  }
  else {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x4c))());
  }
  iVar1 = (int)(*(int *)(*(int *)(param_2 + 4) + 4));
  uVar3 = (undefined4)((**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x50))
                    (param_3,param_4,param_5,param_6));
  pcVar5 = (char *)("RefreshShareIndex");
  uVar4 = (undefined4)((**(code **)(*(int *)(param_2 + iVar1 + 4) + 0x68))("RefreshShareIndex",uVar3));
  thunk_FUN_111c0760(uVar2,uVar4,pcVar5,uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDRefreshShareIndexAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDRefreshShareIndexAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDRefreshShareIndexAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdb610; body size 9 bytes.
#line 1 "ENTRY_10cdb610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cdb610(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIIndexManager);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdb620; body size 9 bytes.
#line 1 "ENTRY_10cdb620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cdb620(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpAlarmClockGetDailyIndexRefreshTime);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdb630; body size 9 bytes.
#line 1 "ENTRY_10cdb630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cdb630(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpAlarmClockSetDailyIndexRefreshTime);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdb640; body size 9 bytes.
#line 1 "ENTRY_10cdb640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cdb640(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIndexListenerCallback);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdbb00; body size 11 bytes.
#line 1 "ENTRY_10cdbb00"

/* WARNING: Removing unreachable block_10cdbb00 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdbb00(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  if ((int *)param_1[1] != (int *)((0x0))) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if (((undefined4 *)(puVar1) != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 10cdbb10; body size 11 bytes.
#line 1 "ENTRY_10cdbb10"

/* WARNING: Removing unreachable block_10cdbb10 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdbb10(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  if ((int *)param_1[1] != (int *)((0x0))) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if (((undefined4 *)(puVar1) != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 10cdbb20; body size 11 bytes.
#line 1 "ENTRY_10cdbb20"

/* WARNING: Removing unreachable block_10cdbb20 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdbb20(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  if ((int *)param_1[1] != (int *)((0x0))) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if (((undefined4 *)(puVar1) != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 10cdc0d0; body size 28 bytes.
#line 1 "ENTRY_10cdc0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdc0d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACGetDailyIndexRefreshTimeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACGetDailyIndexRefreshTimeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACGetDailyIndexRefreshTimeAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)param_1[0x2a5e] != (undefined4 *)((0x0))) {
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


// Reference entry 10cdc100; body size 28 bytes.
#line 1 "ENTRY_10cdc100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdc100(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACSetDailyIndexRefreshTimeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetDailyIndexRefreshTimeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetDailyIndexRefreshTimeAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)param_1[0x2a5e] != (undefined4 *)((0x0))) {
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


// Reference entry 10cdc130; body size 28 bytes.
#line 1 "ENTRY_10cdc130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdc130(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDRefreshShareIndexAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDRefreshShareIndexAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDRefreshShareIndexAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)param_1[0x2a5e] != (undefined4 *)((0x0))) {
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


// Reference entry 10cdc220; body size 7 bytes.
#line 1 "ENTRY_10cdc220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdc220(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cdc230; body size 7 bytes.
#line 1 "ENTRY_10cdc230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdc230(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cdc240; body size 7 bytes.
#line 1 "ENTRY_10cdc240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdc240(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cdc3a0; body size 18 bytes.
#line 1 "ENTRY_10cdc3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdc3a0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAlarmClockGetDailyIndexRefreshTime);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAlarmClockGetDailyIndexRefreshTime);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)0x0) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      (**(code **)(*piVar1 + 8))(uVar2);
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

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10cdc3c0; body size 18 bytes.
#line 1 "ENTRY_10cdc3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdc3c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAlarmClockSetDailyIndexRefreshTime);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAlarmClockSetDailyIndexRefreshTime);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)0x0) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      (**(code **)(*piVar1 + 8))(uVar2);
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

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10cdc410; body size 8 bytes.
#line 1 "ENTRY_10cdc410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10cdc410(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10cdc420; body size 4 bytes.
#line 1 "ENTRY_10cdc420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cdc420(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10cdc430; body size 4 bytes.
#line 1 "ENTRY_10cdc430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cdc430(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10cdcbe0; body size 8 bytes.
#line 1 "ENTRY_10cdcbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10cdcbe0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10cdcbf0; body size 4 bytes.
#line 1 "ENTRY_10cdcbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cdcbf0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10cdcc00; body size 7 bytes.
#line 1 "ENTRY_10cdcc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10cdcc00(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10cdcc10; body size 26 bytes.
#line 1 "ENTRY_10cdcc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cdcc10(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10cdcc30; body size 10 bytes.
#line 1 "ENTRY_10cdcc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cdcc30(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10cdd200; body size 8 bytes.
#line 1 "ENTRY_10cdd200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_10cdd200(int param_2)
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
  puVar4 = (undefined4 *)(*(undefined4 **)(param_1 + 0x20));
  puVar2 = (undefined4 *)((undefined4 *)0x0);
  while( true ) {
    puVar1 = (undefined4 *)(puVar4);
    if ((undefined4 *)(puVar1) == (undefined4 *)0x0) {

      puVar4 = (undefined4 *)(operator_new(8));
      if ((undefined4 *)(puVar4) == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)((undefined4 *)0x0);
      }
      else {
        *puVar4 = (undefined4)(0);

        puVar4[1] = (undefined4)(param_2);
        if (param_2 != 0) {
          thunk_FUN_1123fce0(param_2 + 4,uVar3);
        }
      }
      if ((undefined4 *)(puVar2) == (undefined4 *)0x0) {
        *(undefined4**)(param_1 + 0x20) = (undefined4 *)(puVar4);
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


// Reference entry 10cdda80; body size 16 bytes.
#line 1 "ENTRY_10cdda80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cdda80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10cddaa0; body size 7 bytes.
#line 1 "ENTRY_10cddaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cddaa0(int param_1)

{
  return (int)(param_1 + 0xd7d0);
}


// Reference entry 10cddbd0; body size 4 bytes.
#line 1 "ENTRY_10cddbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cddbd0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10cddd50; body size 6 bytes.
#line 1 "ENTRY_10cddd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cddd50(void)

{
  return (char *)("SCIIndexManager");
}


// Reference entry 10cddd60; body size 6 bytes.
#line 1 "ENTRY_10cddd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cddd60(void)

{
  return (char *)("SCIOpAlarmClockGetDailyIndexRefreshTime");
}


// Reference entry 10cddd70; body size 6 bytes.
#line 1 "ENTRY_10cddd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cddd70(void)

{
  return (char *)("SCIOpAlarmClockSetDailyIndexRefreshTime");
}


// Reference entry 10cdeea0; body size 28 bytes.
#line 1 "ENTRY_10cdeea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdeea0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10cdeed0; body size 28 bytes.
#line 1 "ENTRY_10cdeed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdeed0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10cdef00; body size 28 bytes.
#line 1 "ENTRY_10cdef00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdef00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10cdef30; body size 8 bytes.
#line 1 "ENTRY_10cdef30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_10cdef30(int param_2)
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
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x20));
  puVar3 = (undefined4 *)((undefined4 *)0x0);
  do {
    puVar2 = (undefined4 *)(puVar3);
    puVar3 = (undefined4 *)(puVar1);
    if ((undefined4 *)(puVar3) == (undefined4 *)0x0) {
      return (undefined4)(0);
    }
    puVar1 = (undefined4 *)((undefined4 *)*puVar3);
  } while (puVar3[1] != param_2);

  if ((undefined4 *)(puVar2) == (undefined4 *)0x0) {
    *(undefined4**)(param_1 + 0x20) = (undefined4 *)(puVar1);
  }
  else {
    *puVar2 = (undefined4)(puVar1);
  }
  if ((undefined4 *)(puVar3) == *(undefined4 **)(param_1 + 0x24)) {
    *(undefined4*)(param_1 + 0x24) = (undefined4)(**(undefined4 **)(param_1 + 0x24));
  }
  puVar1 = (undefined4 *)((undefined4 *)puVar3[1]);

  if (((undefined4 *)(puVar1) != (undefined4 *)0x0) && (iVar5 = thunk_FUN_1123fcd0(puVar1 + 1,uVar4), iVar5 == 0)) {
    (**(code **)*puVar1)(1);
  }
  thunk_FUN_1148a50e(puVar3,8);

  return (undefined4)(1);

 } catch (...) { }
}


// Reference entry 10cdf020; body size 24 bytes.
#line 1 "ENTRY_10cdf020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10cdf020(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 10cdf670; body size 16 bytes.
#line 1 "ENTRY_10cdf670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cdf670(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdf690; body size 42 bytes.
#line 1 "ENTRY_10cdf690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cdf690(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjAVTAdapter_HHEventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdfa00; body size 19 bytes.
#line 1 "ENTRY_10cdfa00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdfa00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cdfcb0; body size 3 bytes.
#line 1 "ENTRY_10cdfcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cdfcb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cdfd70; body size 8 bytes.
#line 1 "ENTRY_10cdfd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10cdfd70(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 10cdfd80; body size 16 bytes.
#line 1 "ENTRY_10cdfd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cdfd80(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return;
}


// Reference entry 10ce0050; body size 7 bytes.
#line 1 "ENTRY_10ce0050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce0050(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x524));
}


// Reference entry 10ce0080; body size 31 bytes.
#line 1 "ENTRY_10ce0080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce0080(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1113f590(0));
    uVar1 = (undefined4)(thunk_FUN_110bc160(uVar1));
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10ce00b0; body size 49 bytes.
#line 1 "ENTRY_10ce00b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ce00b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (int)(thunk_FUN_1113f590(0));
    if (iVar1 != 0) {
      thunk_FUN_10ce00f0(param_1,iVar1,1,param_2,param_3);
    }
  }
  return;
}


// Reference entry 10ce0330; body size 41 bytes.
#line 1 "ENTRY_10ce0330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce0330(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x30));
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_1123fce0(*(int *)(param_1 + 0x2c) + 4);
  }
  if (iVar1 != 0) {
    thunk_FUN_1123fce0(iVar1 + 4);
  }
  return;
}


// Reference entry 10ce0a00; body size 5 bytes.
#line 1 "ENTRY_10ce0a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce0a00(int param_1)

{
 try {
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  char *pcVar6;
  int iVar7;
  undefined1 *puVar8;
  char *pcStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  char *pcStack_18;
  char cStack_11;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
  iStack_8 = (int)(0xffffffff);

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&pcStack_18))->int_allocRep("");
  iVar7 = (int)(0);
  iStack_8 = (int)(0);
  iStack_1c = (int)(0);
  cStack_11 = (char)('\0');
  if ((*(int *)(param_1 + 0x24) != 0) && (iVar3 = thunk_FUN_10f42870(uVar2), iVar3 != 0)) {
    cStack_11 = (char)('\x01');
    iVar7 = (int)(thunk_FUN_11138b60(iVar3 + 0x44));
    if (iVar7 == 0) {
      pcVar6 = (char *)("");
    }
    else {
      pcVar6 = (char *)("");
      if (*(char **)(iVar7 + 0x5c) != (char *)((0x0))) {
        pcVar6 = (char *)(*(char **)(iVar7 + 0x5c));
      }
    }
    ((SCStr *)((SCStr *)&pcStack_24))->int_allocRep(pcVar6);
    *(unsigned char *)((char *)&iStack_8 + 0) = 1;
    ((SCStr *)((SCStr *)&pcStack_18))->int_release();
    pcStack_18 = (char *)(pcStack_24);
    ((SCStr *)((SCStr *)&pcStack_18))->int_addref();
    *(unsigned char *)((char *)&iStack_8 + 0) = 2;
    ((SCStr *)((SCStr *)&pcStack_24))->int_release();
    iStack_8 = (int)((uint)*(unsigned short *)((char *)&iStack_8 + 1) << 8);
    if ((iVar7 == 0) || (cVar1 = thunk_FUN_110d3ac0(), cVar1 == '\0')) {
      iStack_1c = (int)(0);
    }
    else {
      iStack_1c = (int)(thunk_FUN_110cb840());
    }
  }
  pcVar6 = (char *)("");
  if ((char *)(pcStack_18) != (char *)0x0) {
    pcVar6 = (char *)(pcStack_18);
  }
  cVar1 = (char)(thunk_FUN_101a2c70(pcVar6,param_1 + 0x1c));
  if (((cVar1 == '\0') || ((iVar7 != 0 && (*(int *)((iVar7 + 0x524)) != *(int *)((param_1 + 0x20))))))
     || ((*(int *)(param_1 + 0x34) == 0 && (iStack_1c != 0)))) {
    thunk_FUN_10ce0370();
    *(int*)(param_1 + 0x34) = (int)(iStack_1c);
    puVar8 = (undefined1 *)(&DAT_1186d2ee);
    if (iStack_1c == 0) {
      if (cStack_11 == '\0') {
        *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
        pcVar6 = (char *)("ZoneGroup %s no longer valid");
      }
      else {
        pcVar6 = "Unsubscribed from AVT for %s";
      }
      if (*(undefined1 **)(param_1 + 0x1c) != (undefined1 *)((0x0))) {
        puVar8 = (undefined1 *)(*(undefined1 **)(param_1 + 0x1c));
      }
      uVar4 = (undefined4)(1);
    }
    else {
      iVar3 = (int)(thunk_FUN_1113f590(0));
      if (iVar3 != 0) {
        thunk_FUN_10ce00f0(iStack_1c,iVar3,1,0,0);
      }
      thunk_FUN_1113f0e0(param_1,0);
      pcVar6 = (char *)("");
      if ((char *)(pcStack_18) != (char *)0x0) {
        pcVar6 = (char *)(pcStack_18);
      }
      ((SCStr *)((SCStr *)&uStack_20))->int_allocRep(pcVar6);
      *(unsigned char *)((char *)&iStack_8 + 0) = 3;
      if ((SCStr *)&uStack_20 != (SCStr *)(((param_1 + 0x1c)))) {
        ((SCStr *)((SCStr *)(param_1 + 0x1c)))->int_release();
        *(undefined4*)(param_1 + 0x1c) = (undefined4)(uStack_20);
        ((SCStr *)((SCStr *)(param_1 + 0x1c)))->int_addref();
      }
      *(unsigned char *)((char *)&iStack_8 + 0) = 4;
      ((SCStr *)((SCStr *)&uStack_20))->int_release();
      iStack_8 = (int)((uint)*(unsigned short *)((char *)&iStack_8 + 1) << 8);
      if (iVar7 == 0) {
        uVar4 = (undefined4)(0);
      }
      else {
        uVar4 = (undefined4)(*(undefined4 *)(iVar7 + 0x524));
      }
      *(undefined4*)(param_1 + 0x20) = (undefined4)(uVar4);
      pcVar6 = "Subscribed to AVT for %s";
      if (*(undefined1 **)(param_1 + 0x1c) != (undefined1 *)((0x0))) {
        puVar8 = (undefined1 *)(*(undefined1 **)(param_1 + 0x1c));
      }
      uVar4 = (undefined4)(5);
    }
    thunk_FUN_112af4e0("SwfObjAVTAdapter",uVar4,pcVar6,puVar8);
    if (iVar7 == 0) {
      puVar5 = (undefined *)(&DAT_11884820);
    }
    else {
      puVar5 = (undefined *)((undefined *)thunk_FUN_110cead0());
    }
    thunk_FUN_112af4e0("SwfObjAVTAdapter",5,"AVT pointer updated (%s)\n",puVar5);
  }
  iStack_8 = (int)(5);
  ((SCStr *)((SCStr *)&pcStack_18))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10ce0a10; body size 3 bytes.
#line 1 "ENTRY_10ce0a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce0a10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ce0aa0; body size 28 bytes.
#line 1 "ENTRY_10ce0aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce0aa0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10ce0b20; body size 6 bytes.
#line 1 "ENTRY_10ce0b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ce0b20(void)

{
  return (char *)("SCIOpGetUsageDataShareOption");
}


// Reference entry 10ce0b30; body size 6 bytes.
#line 1 "ENTRY_10ce0b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ce0b30(void)

{
  return (char *)("SCIOpSystemPropertyGetString");
}


// Reference entry 10ce0bd0; body size 27 bytes.
#line 1 "ENTRY_10ce0bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce0bd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce0c00; body size 27 bytes.
#line 1 "ENTRY_10ce0c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce0c00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce0e10; body size 9 bytes.
#line 1 "ENTRY_10ce0e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce0e10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpGetUsageDataShareOption);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce0e20; body size 9 bytes.
#line 1 "ENTRY_10ce0e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce0e20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpSystemPropertyGetString);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce1320; body size 7 bytes.
#line 1 "ENTRY_10ce1320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce1320(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10ce1330; body size 7 bytes.
#line 1 "ENTRY_10ce1330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce1330(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10ce1440; body size 18 bytes.
#line 1 "ENTRY_10ce1440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce1440(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGetUsageDataShareOption);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpGetUsageDataShareOption);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)0x0) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      (**(code **)(*piVar1 + 8))(uVar2);
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

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10ce1a70; body size 6 bytes.
#line 1 "ENTRY_10ce1a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ce1a70(void)

{
  return (char *)("SCIOpGetUsageDataShareOption");
}


// Reference entry 10ce1a80; body size 6 bytes.
#line 1 "ENTRY_10ce1a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ce1a80(void)

{
  return (char *)("SCIOpSystemPropertyGetString");
}


// Reference entry 10ce2120; body size 28 bytes.
#line 1 "ENTRY_10ce2120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce2120(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10ce2150; body size 28 bytes.
#line 1 "ENTRY_10ce2150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce2150(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10ce2210; body size 6 bytes.
#line 1 "ENTRY_10ce2210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ce2210(void)

{
  return (char *)("SCIOpSystemPropertyGetRDM");
}


// Reference entry 10ce22b0; body size 27 bytes.
#line 1 "ENTRY_10ce22b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce22b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce2320; body size 9 bytes.
#line 1 "ENTRY_10ce2320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce2320(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpSystemPropertyGetRDM);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce24e0; body size 7 bytes.
#line 1 "ENTRY_10ce24e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce24e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10ce25f0; body size 4 bytes.
#line 1 "ENTRY_10ce25f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce25f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ce2920; body size 4 bytes.
#line 1 "ENTRY_10ce2920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10ce2920(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x34));
}


// Reference entry 10ce2970; body size 6 bytes.
#line 1 "ENTRY_10ce2970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ce2970(void)

{
  return (char *)("SCIOpSystemPropertyGetRDM");
}


// Reference entry 10ce2bc0; body size 28 bytes.
#line 1 "ENTRY_10ce2bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce2bc0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10ce2c10; body size 25 bytes.
#line 1 "ENTRY_10ce2c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce2c10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce2cd0; body size 39 bytes.
#line 1 "ENTRY_10ce2cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ce2cd0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10ce2d00; body size 39 bytes.
#line 1 "ENTRY_10ce2d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ce2d00(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10ce2d30; body size 39 bytes.
#line 1 "ENTRY_10ce2d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ce2d30(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10ce3020; body size 7 bytes.
#line 1 "ENTRY_10ce3020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce3020(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ce3030; body size 5 bytes.
#line 1 "ENTRY_10ce3030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce3030(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce3180; body size 28 bytes.
#line 1 "ENTRY_10ce3180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce3180(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  *param_2 = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
                    
                    
    (**(code **)(*piVar1 + 4))();
    return;
  }
  return;
}


// Reference entry 10ce31b0; body size 28 bytes.
#line 1 "ENTRY_10ce31b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce31b0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  *param_2 = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
                    
                    
    (**(code **)(*piVar1 + 4))();
    return;
  }
  return;
}


// Reference entry 10ce31e0; body size 28 bytes.
#line 1 "ENTRY_10ce31e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce31e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  *param_2 = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
                    
                    
    (**(code **)(*piVar1 + 4))();
    return;
  }
  return;
}


// Reference entry 10ce32d0; body size 5 bytes.
#line 1 "ENTRY_10ce32d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce32d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce32e0; body size 5 bytes.
#line 1 "ENTRY_10ce32e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce32e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce32f0; body size 5 bytes.
#line 1 "ENTRY_10ce32f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce32f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce3300; body size 6 bytes.
#line 1 "ENTRY_10ce3300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce3300(void)

{
  return (undefined4)(3);
}


// Reference entry 10ce3310; body size 5 bytes.
#line 1 "ENTRY_10ce3310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce3310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce3320; body size 21 bytes.
#line 1 "ENTRY_10ce3320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ce3320(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce3340; body size 23 bytes.
#line 1 "ENTRY_10ce3340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce3340(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce3360; body size 3 bytes.
#line 1 "ENTRY_10ce3360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce3360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce3370; body size 23 bytes.
#line 1 "ENTRY_10ce3370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce3370(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce3390; body size 33 bytes.
#line 1 "ENTRY_10ce3390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce3390(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplayRoomSettingsActionDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce3590; body size 19 bytes.
#line 1 "ENTRY_10ce3590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce3590(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10ce36f0; body size 12 bytes.
#line 1 "ENTRY_10ce36f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10ce36f0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 10ce38f0; body size 49 bytes.
#line 1 "ENTRY_10ce38f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10ce38f0(uint param_2)
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


// Reference entry 10ce39e0; body size 3 bytes.
#line 1 "ENTRY_10ce39e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce39e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce39f0; body size 3 bytes.
#line 1 "ENTRY_10ce39f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce39f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce3a00; body size 3 bytes.
#line 1 "ENTRY_10ce3a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce3a00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce3a10; body size 3 bytes.
#line 1 "ENTRY_10ce3a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce3a10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce3a20; body size 3 bytes.
#line 1 "ENTRY_10ce3a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ce3a20(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10ce3a30; body size 6 bytes.
#line 1 "ENTRY_10ce3a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce3a30(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10ce3d20; body size 9 bytes.
#line 1 "ENTRY_10ce3d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ce3d20(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10ce4520; body size 6 bytes.
#line 1 "ENTRY_10ce4520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce4520(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10ce4530; body size 6 bytes.
#line 1 "ENTRY_10ce4530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce4530(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10ce59e0; body size 9 bytes.
#line 1 "ENTRY_10ce59e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ce59e0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 10ce59f0; body size 22 bytes.
#line 1 "ENTRY_10ce59f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ce59f0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce5ab0; body size 18 bytes.
#line 1 "ENTRY_10ce5ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce5ab0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce5ad0; body size 25 bytes.
#line 1 "ENTRY_10ce5ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce5ad0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce5af0; body size 25 bytes.
#line 1 "ENTRY_10ce5af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce5af0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce5b80; body size 22 bytes.
#line 1 "ENTRY_10ce5b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ce5b80(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce5ba0; body size 5 bytes.
#line 1 "ENTRY_10ce5ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce5ba0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce5bb0; body size 5 bytes.
#line 1 "ENTRY_10ce5bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce5bb0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce5c30; body size 26 bytes.
#line 1 "ENTRY_10ce5c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10ce5c30(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10ce5c50; body size 3 bytes.
#line 1 "ENTRY_10ce5c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce5c50(void)

{
  return;
}


// Reference entry 10ce5c60; body size 13 bytes.
#line 1 "ENTRY_10ce5c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce5c60(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ce5c70; body size 13 bytes.
#line 1 "ENTRY_10ce5c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce5c70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ce5c80; body size 13 bytes.
#line 1 "ENTRY_10ce5c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce5c80(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ce5c90; body size 3 bytes.
#line 1 "ENTRY_10ce5c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce5c90(void)

{
  return;
}


// Reference entry 10ce5ca0; body size 3 bytes.
#line 1 "ENTRY_10ce5ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce5ca0(void)

{
  return;
}


// Reference entry 10ce5cb0; body size 18 bytes.
#line 1 "ENTRY_10ce5cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ce5cb0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10ce5e70; body size 15 bytes.
#line 1 "ENTRY_10ce5e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce5e70(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x2c);
  return;
}


// Reference entry 10ce5f10; body size 7 bytes.
#line 1 "ENTRY_10ce5f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce5f10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ce5f20; body size 5 bytes.
#line 1 "ENTRY_10ce5f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce5f20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce6190; body size 5 bytes.
#line 1 "ENTRY_10ce6190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce6190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce61a0; body size 5 bytes.
#line 1 "ENTRY_10ce61a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce61a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce61b0; body size 5 bytes.
#line 1 "ENTRY_10ce61b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce61b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce61c0; body size 5 bytes.
#line 1 "ENTRY_10ce61c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce61c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce61d0; body size 5 bytes.
#line 1 "ENTRY_10ce61d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce61d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce61e0; body size 5 bytes.
#line 1 "ENTRY_10ce61e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce61e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce61f0; body size 130 bytes.
#line 1 "ENTRY_10ce61f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10ce61f0(int *param_2,undefined4 param_3)
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
  if ((int *)(piVar2) != (int *)0x0) {
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[1] = (int)((int)piVar1);
  if ((int *)(piVar1) == (int *)0x0) {
    param_1[2] = (int)(0);
  }
  else {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[2] = (int)(iVar3);
    if ((int *)param_1[1] != (int *)((0x0))) {
      (**(code **)(*(int *)param_1[1] + 0x14))(param_3);
      return (int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (int)(param_1[1]);
}


// Reference entry 10ce62a0; body size 130 bytes.
#line 1 "ENTRY_10ce62a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10ce62a0(int *param_2,undefined4 param_3)
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
  if ((int *)(piVar2) != (int *)0x0) {
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[1] = (int)((int)piVar1);
  if ((int *)(piVar1) == (int *)0x0) {
    param_1[2] = (int)(0);
  }
  else {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[2] = (int)(iVar3);
    if ((int *)param_1[1] != (int *)((0x0))) {
      (**(code **)(*(int *)param_1[1] + 0x14))(param_3);
      return (int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (int)(param_1[1]);
}


// Reference entry 10ce6430; body size 15 bytes.
#line 1 "ENTRY_10ce6430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce6430(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10ce6520; body size 5 bytes.
#line 1 "ENTRY_10ce6520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce6520(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce6530; body size 5 bytes.
#line 1 "ENTRY_10ce6530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce6530(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce6540; body size 5 bytes.
#line 1 "ENTRY_10ce6540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce6540(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce6550; body size 5 bytes.
#line 1 "ENTRY_10ce6550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce6550(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce6560; body size 5 bytes.
#line 1 "ENTRY_10ce6560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce6560(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce6570; body size 5 bytes.
#line 1 "ENTRY_10ce6570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce6570(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce6580; body size 5 bytes.
#line 1 "ENTRY_10ce6580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce6580(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce6590; body size 6 bytes.
#line 1 "ENTRY_10ce6590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ce6590(void)

{
  return (char *)("SCIAreaManager");
}


// Reference entry 10ce65a0; body size 30 bytes.
#line 1 "ENTRY_10ce65a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce65a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10ce65d0; body size 27 bytes.
#line 1 "ENTRY_10ce65d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce65d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce6600; body size 70 bytes.
#line 1 "ENTRY_10ce6600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce6600(undefined4 *param_1)

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


// Reference entry 10ce6660; body size 70 bytes.
#line 1 "ENTRY_10ce6660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce6660(undefined4 *param_1)

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


// Reference entry 10ce67a0; body size 18 bytes.
#line 1 "ENTRY_10ce67a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ce67a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce67c0; body size 10 bytes.
#line 1 "ENTRY_10ce67c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ce67c0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10ce67d0; body size 10 bytes.
#line 1 "ENTRY_10ce67d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ce67d0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10ce68b0; body size 11 bytes.
#line 1 "ENTRY_10ce68b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ce68b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce68c0; body size 11 bytes.
#line 1 "ENTRY_10ce68c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ce68c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce68d0; body size 11 bytes.
#line 1 "ENTRY_10ce68d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ce68d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce68e0; body size 16 bytes.
#line 1 "ENTRY_10ce68e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce68e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce6900; body size 13 bytes.
#line 1 "ENTRY_10ce6900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ce6900(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce6910; body size 14 bytes.
#line 1 "ENTRY_10ce6910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ce6910(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce6930; body size 23 bytes.
#line 1 "ENTRY_10ce6930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce6930(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce6950; body size 3 bytes.
#line 1 "ENTRY_10ce6950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce6950(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce6960; body size 12 bytes.
#line 1 "ENTRY_10ce6960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ce6960(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10ce69f0; body size 12 bytes.
#line 1 "ENTRY_10ce69f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ce69f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10ce6ea0; body size 9 bytes.
#line 1 "ENTRY_10ce6ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce6ea0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIAreaManager);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce6eb0; body size 11 bytes.
#line 1 "ENTRY_10ce6eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ce6eb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce73b0; body size 3 bytes.
#line 1 "ENTRY_10ce73b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce73b0(void)

{
  return;
}


// Reference entry 10ce74b0; body size 5 bytes.
#line 1 "ENTRY_10ce74b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce74b0(int param_1)

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
  thunk_FUN_10ce5db0(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x2c);
  return;
}


// Reference entry 10ce76d0; body size 7 bytes.
#line 1 "ENTRY_10ce76d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce76d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10ce77a0; body size 14 bytes.
#line 1 "ENTRY_10ce77a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10ce77a0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == *param_2);
}


// Reference entry 10ce77c0; body size 14 bytes.
#line 1 "ENTRY_10ce77c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10ce77c0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == *param_2);
}


// Reference entry 10ce77e0; body size 14 bytes.
#line 1 "ENTRY_10ce77e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10ce77e0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != *param_2);
}


// Reference entry 10ce7800; body size 14 bytes.
#line 1 "ENTRY_10ce7800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10ce7800(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != *param_2);
}


// Reference entry 10ce7850; body size 8 bytes.
#line 1 "ENTRY_10ce7850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ce7850(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10ce7860; body size 8 bytes.
#line 1 "ENTRY_10ce7860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ce7860(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10ce7870; body size 4 bytes.
#line 1 "ENTRY_10ce7870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce7870(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ce7880; body size 4 bytes.
#line 1 "ENTRY_10ce7880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce7880(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ce7890; body size 3 bytes.
#line 1 "ENTRY_10ce7890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce7890(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ce78a0; body size 6 bytes.
#line 1 "ENTRY_10ce78a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ce78a0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10ce78b0; body size 6 bytes.
#line 1 "ENTRY_10ce78b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ce78b0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10ce78c0; body size 9 bytes.
#line 1 "ENTRY_10ce78c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce78c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce78d0; body size 9 bytes.
#line 1 "ENTRY_10ce78d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce78d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce78e0; body size 10 bytes.
#line 1 "ENTRY_10ce78e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10ce78e0(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10ce7bd0; body size 22 bytes.
#line 1 "ENTRY_10ce7bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce7bd0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x2c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10ce7d30; body size 20 bytes.
#line 1 "ENTRY_10ce7d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce7d30(int param_1)

{
  if (*(int *)(param_1 + 8) != 0x5d1745d) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10ce7d50; body size 66 bytes.
#line 1 "ENTRY_10ce7d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ce7d50(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 10ce7e60; body size 8 bytes.
#line 1 "ENTRY_10ce7e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ce7e60(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10ce7e70; body size 8 bytes.
#line 1 "ENTRY_10ce7e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ce7e70(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10ce80a0; body size 3 bytes.
#line 1 "ENTRY_10ce80a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce80a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}

